// functions/009ed — 20 functions
#include "libGameKindred.h"




void FUN_009ed07c(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009ed8a4(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    puVar3 = *(undefined4 **)(param_2 + 2);
    puVar4 = *(undefined4 **)(param_1 + 2);
    puVar1 = puVar3 + (ulong)*param_2 * 0x20;
    do {
      *puVar4 = *puVar3;
      FUN_008fcdb8(puVar4 + 2,puVar3 + 2);
      FUN_008fcdb8(puVar4 + 8,puVar3 + 8);
      FUN_008fcdb8(puVar4 + 0xe,puVar3 + 0xe);
      FUN_008fcdb8(puVar4 + 0x14,puVar3 + 0x14);
      FUN_008fcdb8(puVar4 + 0x1a,puVar3 + 0x1a);
      puVar3 = puVar3 + 0x20;
      puVar4 = puVar4 + 0x20;
    } while (puVar3 != puVar1);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_009ed138(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar4 = puVar2 + (ulong)*param_1 * 5;
      puVar5 = puVar1;
      do {
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar5 = *puVar2;
        FUN_008fcdb8(puVar5 + 2,puVar2 + 2);
        puVar2 = puVar2 + 5;
        puVar5 = puVar5 + 5;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x28;
        puVar2 = puVar2 + 4;
        do {
          if ((*(byte *)(puVar2 + -2) & 1) != 0) {
            operator_delete((void *)*puVar2);
          }
          lVar3 = lVar3 + -0x28;
          puVar2 = puVar2 + 5;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_009ed21c(uint *param_1,uint param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0x28);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar8 = puVar4 + (ulong)*param_1 * 5;
      puVar6 = puVar2;
      do {
        puVar7 = puVar6 + 1;
        *puVar7 = 0;
        puVar6[2] = 0;
        *puVar6 = puVar7;
        plVar9 = (long *)*puVar4;
        while (plVar9 != puVar4 + 1) {
          FUN_009ed38c(puVar6,puVar7,plVar9 + 4,plVar9 + 4);
          plVar3 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar3 = plVar9 + 2;
            bVar1 = *(long **)*plVar3 != plVar9;
            plVar9 = (long *)*plVar3;
            if (bVar1) {
              do {
                lVar5 = *plVar3;
                plVar3 = (long *)(lVar5 + 0x10);
                plVar9 = (long *)*plVar3;
              } while (*plVar9 != lVar5);
            }
          }
          else {
            do {
              plVar9 = plVar3;
              plVar3 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        thunk_FUN_00e7051c(puVar6 + 3,puVar4 + 3);
        puVar4 = puVar4 + 5;
        puVar6 = puVar6 + 5;
      } while (puVar4 != puVar8);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x28;
        do {
          if ((void *)puVar4[4] != (void *)0x0) {
            operator_delete__((void *)puVar4[4]);
            puVar4[3] = 0;
            puVar4[4] = 0;
          }
          FUN_00948ab4(puVar4,puVar4[1]);
          lVar5 = lVar5 + -0x28;
          puVar4 = puVar4 + 5;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(undefined8 **)(param_1 + 2) = puVar2;
  }
  return;
}




void * FUN_009ed38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_009ed438(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar3 + 0x20,param_4);
    *(undefined4 *)((long)pvVar3 + 0x38) = *(undefined4 *)(param_4 + 0x18);
    FUN_009ed724(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_009ed438(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  if (param_1 + 1 == param_2) {
LAB_009ed4ec:
    plVar14 = (long *)*param_2;
    plVar9 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar6 = plVar14;
      plVar13 = param_2;
      if (plVar14 == (long *)0x0) {
        do {
          plVar9 = (long *)plVar13[2];
          bVar7 = (long *)*plVar9 == plVar13;
          plVar13 = plVar9;
        } while (bVar7);
      }
      else {
        do {
          plVar9 = plVar6;
          plVar6 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      bVar4 = *(byte *)(plVar9 + 4);
      bVar5 = *param_5;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(param_5 + 8);
      }
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = plVar9[5];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 != 0) {
        pvVar11 = (void *)plVar9[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)plVar9 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        iVar8 = memcmp(pvVar11,pbVar10,sVar3);
        if (iVar8 != 0) {
          if (-1 < iVar8) goto LAB_009ed5dc;
          goto LAB_009ed60c;
        }
      }
      if (uVar2 <= uVar1) goto LAB_009ed5dc;
    }
LAB_009ed60c:
    param_4 = param_2;
    if (plVar14 != (long *)0x0) {
      *param_3 = (long)plVar9;
      return plVar9 + 1;
    }
LAB_009ed628:
    *param_3 = (long)param_2;
  }
  else {
    bVar4 = *(byte *)(param_2 + 4);
    bVar5 = *param_5;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = param_2[5];
    }
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_009ed4e4:
      if (uVar1 < uVar2) goto LAB_009ed4ec;
      if (sVar3 != 0) {
        pvVar11 = (void *)param_2[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)param_2 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        goto LAB_009ed538;
      }
LAB_009ed630:
      if (uVar2 < uVar1) {
LAB_009ed638:
        param_4 = param_2 + 1;
        plVar9 = (long *)*param_4;
        if ((long *)*param_4 == (long *)0x0) {
          plVar9 = param_2 + 2;
          plVar14 = (long *)*plVar9;
          if ((long *)*plVar14 != param_2) {
            do {
              lVar12 = *plVar9;
              plVar9 = (long *)(lVar12 + 0x10);
              plVar14 = (long *)*plVar9;
            } while (*plVar14 != lVar12);
          }
        }
        else {
          do {
            plVar14 = plVar9;
            plVar9 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        if (plVar14 != param_1 + 1) {
          bVar4 = *(byte *)(plVar14 + 4);
          uVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = plVar14[5];
          }
          sVar3 = uVar2;
          if (uVar1 <= uVar2) {
            sVar3 = uVar1;
          }
          if (sVar3 != 0) {
            pbVar10 = *(byte **)(param_5 + 0x10);
            pvVar11 = (void *)plVar14[6];
            if ((bVar5 & 1) == 0) {
              pbVar10 = param_5 + 1;
            }
            if ((bVar4 & 1) == 0) {
              pvVar11 = (void *)((long)plVar14 + 0x21);
            }
            iVar8 = memcmp(pbVar10,pvVar11,sVar3);
            if (iVar8 != 0) {
              if (-1 < iVar8) goto LAB_009ed5dc;
              goto LAB_009ed6e4;
            }
          }
          if (uVar2 <= uVar1) {
LAB_009ed5dc:
            plVar9 = (long *)FUN_009ed778(param_1,param_3,param_5);
            return plVar9;
          }
        }
LAB_009ed6e4:
        if (param_2[1] != 0) {
          *param_3 = (long)plVar14;
          return plVar14;
        }
        goto LAB_009ed628;
      }
    }
    else {
      pbVar10 = *(byte **)(param_5 + 0x10);
      pvVar11 = (void *)param_2[6];
      if ((bVar5 & 1) == 0) {
        pbVar10 = param_5 + 1;
      }
      if ((bVar4 & 1) == 0) {
        pvVar11 = (void *)((long)param_2 + 0x21);
      }
      iVar8 = memcmp(pbVar10,pvVar11,sVar3);
      if (iVar8 == 0) goto LAB_009ed4e4;
      if (iVar8 < 0) goto LAB_009ed4ec;
LAB_009ed538:
      iVar8 = memcmp(pvVar11,pbVar10,sVar3);
      if (iVar8 == 0) goto LAB_009ed630;
      if (iVar8 < 0) goto LAB_009ed638;
    }
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
  }
  return param_4;
}




void FUN_009ed724(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_009ed778(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_009ed7dc:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_009ed7f8;
          if (iVar4 < 0) goto LAB_009ed800;
          goto LAB_009ed878;
        }
LAB_009ed864:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_009ed864;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_009ed7dc;
      }
LAB_009ed7f8:
      if (uVar2 <= uVar1) break;
LAB_009ed800:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_009ed878:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_009ed8a4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if (param_1[1] < param_2) {
    puVar3 = operator_new__((ulong)param_2 << 7);
    puVar4 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar1 = puVar4 + (ulong)*param_1 * 0x20;
      puVar6 = puVar3;
      do {
        *puVar6 = *puVar4;
        FUN_008fcdb8(puVar6 + 2,puVar4 + 2);
        FUN_008fcdb8(puVar6 + 8,puVar4 + 8);
        FUN_008fcdb8(puVar6 + 0xe,puVar4 + 0xe);
        FUN_008fcdb8(puVar6 + 0x14,puVar4 + 0x14);
        FUN_008fcdb8(puVar6 + 0x1a,puVar4 + 0x1a);
        puVar4 = puVar4 + 0x20;
        puVar6 = puVar6 + 0x20;
      } while (puVar4 != puVar1);
      uVar2 = *param_1;
      puVar4 = *(undefined4 **)(param_1 + 2);
      param_1[1] = param_2;
      if (uVar2 != 0) {
        lVar5 = 0;
        do {
          if ((*(byte *)((long)puVar4 + lVar5 + 0x68) & 1) != 0) {
            operator_delete(*(void **)((long)puVar4 + lVar5 + 0x78));
          }
          if ((*(byte *)((long)puVar4 + lVar5 + 0x50) & 1) != 0) {
            operator_delete(*(void **)((long)puVar4 + lVar5 + 0x60));
          }
          if ((*(byte *)((long)puVar4 + lVar5 + 0x38) & 1) != 0) {
            operator_delete(*(void **)((long)puVar4 + lVar5 + 0x48));
          }
          if ((*(byte *)((long)puVar4 + lVar5 + 0x20) & 1) != 0) {
            operator_delete(*(void **)((long)puVar4 + lVar5 + 0x30));
          }
          if ((*(byte *)((long)puVar4 + lVar5 + 8) & 1) != 0) {
            operator_delete(*(void **)((long)puVar4 + lVar5 + 0x18));
          }
          lVar5 = lVar5 + 0x80;
        } while ((ulong)uVar2 * 0x80 - lVar5 != 0);
        puVar4 = *(undefined4 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined4 *)0x0) {
      operator_delete__(puVar4);
    }
    *(undefined4 **)(param_1 + 2) = puVar3;
  }
  return;
}




undefined1  [16] FUN_009eda10(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < (ulong)puVar3[4]) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_009eda88;
      }
      if (*param_2 <= (ulong)puVar3[4]) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_009eda88:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    *(undefined8 *)((long)pvVar5 + 0x20) = *(undefined8 *)*param_4;
    *(undefined8 *)((long)pvVar5 + 0x28) = 0;
    FUN_009edae0(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_009edae0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void * FUN_009edb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_009ed778(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined4 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_009ed724(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




void FUN_009edbe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_008fcdb8();
  FUN_008fcdb8(param_1 + 0x18,param_3);
  FUN_008fcdb8(param_1 + 0x30,param_4);
  FUN_008fcdb8(param_1 + 0x48,param_5);
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0x68) = param_8;
  *(undefined4 *)(param_1 + 0x6c) = param_9;
  *(undefined4 *)(param_1 + 0x70) = param_10;
  return;
}




void FUN_009edc74(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,byte param_5
                 )

{
  FUN_008fcdb8();
  FUN_008fcdb8(param_1 + 0x18,param_3);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(byte *)(param_1 + 0x4c) = param_5 & 1;
  return;
}




void FUN_009edcc4(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_0099ce88(param_1 + 6);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0x15180;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_0099cfec(param_1 + 6,"ASCENSION",0);
  FUN_009edd24(param_1);
  return;
}




void FUN_009edd24(long param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0x15180;
  *(undefined8 *)(param_1 + 0x58) = 0x765dc60f;
  FUN_008fd118(param_1,0);
  FUN_008fd0a0(param_1 + 0x10,0);
  FUN_0099cf94(param_1 + 0x30,0);
  return;
}




void FUN_009edd74(undefined8 param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_008fc940();
  lVar5 = FUN_008fc920();
  bVar2 = false;
  if ((lVar4 != 0) && (lVar5 != 0)) {
    FUN_008fcdb8(local_60,lVar4);
    uVar3 = FUN_009ede24(param_1,local_60,param_2 & 1);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    bVar2 = uVar3 < *(uint *)(lVar5 + 0x60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




undefined4 FUN_009ede24(long param_1,byte *param_2,ulong param_3)

{
  uint *puVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  byte *__s2;
  long lVar8;
  byte *pbVar9;
  undefined4 unaff_w19;
  long lVar10;
  byte local_80 [8];
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = (uint *)(param_1 + 0x10);
  if ((param_3 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x20);
  }
  if (*puVar1 != 0) {
    lVar10 = *(long *)(puVar1 + 2);
    do {
      FUN_008fcdb8(local_80,lVar10);
      bVar6 = local_80[0];
      bVar3 = *param_2;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      sVar2 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        sVar2 = local_78;
      }
      if (__n == sVar2) {
        pbVar9 = param_2 + 1;
        if ((bVar3 & 1) != 0) {
          pbVar9 = *(byte **)(param_2 + 0x10);
        }
        __s2 = (byte *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          __s2 = local_70;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar8 = -(ulong)(bVar3 >> 1);
            pbVar9 = param_2 + 1;
            do {
              if (*pbVar9 != *__s2) goto joined_r0x009edf20;
              pbVar9 = pbVar9 + 1;
              lVar8 = lVar8 + 1;
              __s2 = __s2 + 1;
            } while (lVar8 != 0);
          }
        }
        else if ((__n != 0) && (iVar7 = memcmp(pbVar9,__s2,__n), iVar7 != 0))
        goto joined_r0x009edf20;
        unaff_w19 = *(undefined4 *)(lVar10 + 0x18);
        bVar5 = true;
        if ((bVar6 & 1) == 0) goto LAB_009edf24;
LAB_009edf38:
        operator_delete(local_70);
        if (bVar5) goto LAB_009edf60;
      }
      else {
joined_r0x009edf20:
        bVar5 = false;
        if ((bVar6 & 1) != 0) goto LAB_009edf38;
LAB_009edf24:
        if (bVar5) goto LAB_009edf60;
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != *(long *)(puVar1 + 2) + (ulong)*puVar1 * 0x20);
  }
  unaff_w19 = 0;
LAB_009edf60:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w19;
}




undefined4 FUN_009edf98(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_008fc920();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x70);
  }
  return uVar1;
}




bool FUN_009edfb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    lVar1 = FUN_008fc990();
    lVar2 = FUN_008fc96c();
    return lVar1 != 0 && lVar2 != 0;
  }
  return false;
}




void FUN_009edffc(uint *param_1,byte *param_2,undefined4 param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  byte *__s2;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  ulong local_88;
  size_t local_80;
  byte *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*param_1 != 0) {
    lVar9 = *(long *)(param_1 + 2);
    do {
      FUN_008fcdb8(&local_88,lVar9);
      uVar5 = local_88;
      bVar2 = *param_2;
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      sVar1 = local_88 >> 1 & 0x7f;
      if ((local_88 & 1) != 0) {
        sVar1 = local_80;
      }
      bVar4 = false;
      if (__n == sVar1) {
        pbVar8 = param_2 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar8 = *(byte **)(param_2 + 0x10);
        }
        __s2 = (byte *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          __s2 = local_78;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            lVar7 = -(ulong)(bVar2 >> 1);
            pbVar8 = param_2 + 1;
            do {
              if (*pbVar8 != *__s2) {
                bVar4 = false;
                if ((local_88 & 1) == 0) goto LAB_009ee0fc;
                goto LAB_009ee0f4;
              }
              pbVar8 = pbVar8 + 1;
              lVar7 = lVar7 + 1;
              __s2 = __s2 + 1;
            } while (lVar7 != 0);
          }
        }
        else if (__n != 0) {
          iVar6 = memcmp(pbVar8,__s2,__n);
          bVar4 = false;
          if (iVar6 != 0) goto LAB_009ee0f0;
        }
        bVar4 = true;
        *(undefined4 *)(lVar9 + 0x18) = param_3;
      }
LAB_009ee0f0:
      if ((uVar5 & 1) != 0) {
LAB_009ee0f4:
        operator_delete(local_78);
      }
LAB_009ee0fc:
      if (bVar4) goto LAB_009ee15c;
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = (byte *)0x0;
  FUN_008fce60(&local_88,param_2);
  local_70 = param_3;
  FUN_009ee190(param_1,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
LAB_009ee15c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

