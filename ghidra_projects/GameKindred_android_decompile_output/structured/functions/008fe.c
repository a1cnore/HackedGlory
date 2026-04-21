// functions/008fe — 22 functions
#include "libGameKindred.h"




void FUN_008fe2e0(long *param_1,long param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if (*param_1 == 0) {
      pvVar1 = operator_new(1);
      *param_1 = (long)pvVar1;
      param_1[1] = (long)pvVar1;
    }
    uVar2 = param_1[5];
  }
  else {
    uVar2 = (param_1[4] - lVar4) + ((param_1[4] - lVar4) + 1U >> 1);
  }
  uVar3 = (param_1[3] - lVar4) + param_2 * 0x18;
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  FUN_008fe358(param_1,uVar3);
  return;
}




void FUN_008fe358(long param_1,size_t param_2)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = *(void **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (param_2 == 0) {
    free(__ptr);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = realloc(__ptr,param_2);
  }
  *(void **)(param_1 + 0x10) = pvVar1;
  *(long *)(param_1 + 0x18) = (long)pvVar1 + (lVar2 - (long)__ptr);
  *(size_t *)(param_1 + 0x20) = (long)pvVar1 + param_2;
  return;
}




void FUN_008fe3b4(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  pbVar3 = (byte *)(*param_2 + 1);
  *param_2 = (long)pbVar3;
  do {
    bVar1 = *pbVar3;
    if (bVar1 == 0x5c) {
      *param_2 = (long)(pbVar3 + 2);
      bVar1 = (&DAT_01b90d20)[pbVar3[1]];
      if (bVar1 != 0) goto LAB_008fe438;
      if (pbVar3[1] != 0x75) {
        lVar6 = param_2[1];
        pbVar3 = pbVar3 + 1;
        goto LAB_008fe52c;
      }
      uVar2 = FUN_008fe66c(param_1,param_2);
      uVar8 = uVar2 & 0xffffffff;
      if (*(int *)(param_1 + 0x30) != 0) {
        return;
      }
      if ((int)(uVar8 >> 10) == 0x36) {
        pcVar5 = (char *)*param_2;
        pcVar4 = pcVar5 + 1;
        *param_2 = (long)pcVar4;
        if (*pcVar5 == '\\') {
          pcVar4 = pcVar5 + 2;
          *param_2 = (long)pcVar4;
          if (pcVar5[1] == 'u') {
            uVar8 = FUN_008fe66c(param_1,param_2);
            if (*(int *)(param_1 + 0x30) != 0) {
              return;
            }
            if (((uint)(uVar8 >> 10) & 0x3fffff) == 0x37) {
              uVar8 = (ulong)(((int)uVar8 - 0xdc00U | (int)uVar2 * 0x400 + 0xfca00000U) + 0x10000);
              goto LAB_008fe4d0;
            }
            lVar6 = param_2[1];
            uVar7 = 9;
            pbVar3 = (byte *)(*param_2 + -2);
            goto LAB_008fe550;
          }
        }
        lVar6 = param_2[1];
        pbVar3 = (byte *)(pcVar4 + -2);
        uVar7 = 9;
        goto LAB_008fe550;
      }
LAB_008fe4d0:
      FUN_008fe6fc(param_3,uVar8);
    }
    else {
      if (bVar1 == 0) {
        lVar6 = param_2[1];
        pbVar3 = pbVar3 + -1;
        uVar7 = 0xb;
        goto LAB_008fe550;
      }
      if (bVar1 == 0x22) {
        *param_2 = (long)(pbVar3 + 1);
        FUN_008fe608(param_3,0);
        return;
      }
      if (bVar1 < 0x20) {
        lVar6 = param_2[1];
        pbVar3 = pbVar3 + -1;
LAB_008fe52c:
        uVar7 = 10;
LAB_008fe550:
        *(undefined4 *)(param_1 + 0x30) = uVar7;
        *(long *)(param_1 + 0x38) = (long)pbVar3 - lVar6;
        return;
      }
      *param_2 = (long)(pbVar3 + 1);
      bVar1 = *pbVar3;
LAB_008fe438:
      FUN_008fe608(param_3,bVar1);
    }
    pbVar3 = (byte *)*param_2;
  } while( true );
}




undefined8 FUN_008fe574(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = puVar1 + 3;
  if (*(undefined8 **)(param_1 + 0x48) <= puVar3) {
    FUN_008fe2e0(param_1 + 0x28,1);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    puVar3 = puVar1 + 3;
  }
  *(undefined8 **)(param_1 + 0x40) = puVar3;
  if ((param_4 & 1) == 0) {
    *puVar1 = param_2;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0x100005;
    *(undefined4 *)(puVar1 + 1) = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    FUN_008fe834(puVar1,param_2,param_3,uVar2);
  }
  return 1;
}




void FUN_008fe608(long *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  puVar1 = *(undefined1 **)(lVar3 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2) {
    FUN_008fe7c0(lVar3,1);
    puVar1 = *(undefined1 **)(lVar3 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2;
  *puVar1 = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}




int FUN_008fe66c(long param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar5 = *param_2;
  lVar4 = 0;
  iVar3 = 0;
  do {
    pbVar1 = (byte *)(lVar5 + lVar4);
    *param_2 = (long)(pbVar1 + 1);
    bVar2 = *pbVar1;
    if (bVar2 - 0x30 < 10) {
      iVar7 = -0x30;
    }
    else if (bVar2 - 0x41 < 6) {
      iVar7 = -0x37;
    }
    else {
      if (5 < bVar2 - 0x61) {
        lVar6 = param_2[1];
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(long *)(param_1 + 0x38) = (lVar5 + lVar4) - lVar6;
        return 0;
      }
      iVar7 = -0x57;
    }
    lVar4 = lVar4 + 1;
    iVar3 = (uint)bVar2 + iVar3 * 0x10 + iVar7;
  } while ((uint)lVar4 < 4);
  return iVar3;
}




void FUN_008fe6fc(undefined8 param_1,uint param_2)

{
  if (0x7f < param_2) {
    if (param_2 < 0x800) {
      FUN_008fe608(param_1,param_2 >> 6 | 0xffffffc0);
      param_2 = param_2 & 0x3f | 0xffffff80;
    }
    else {
      if (param_2 >> 0x10 == 0) {
        FUN_008fe608(param_1,param_2 >> 0xc | 0xffffffe0);
      }
      else {
        FUN_008fe608(param_1,param_2 >> 0x12 | 0xfffffff0);
        FUN_008fe608(param_1,param_2 >> 0xc & 0x3f | 0xffffff80);
      }
      FUN_008fe608(param_1,param_2 >> 6 & 0x3f | 0xffffff80);
      param_2 = param_2 & 0x3f | 0xffffff80;
    }
  }
  FUN_008fe608(param_1,param_2);
  return;
}




void FUN_008fe7c0(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if (*param_1 == 0) {
      pvVar2 = operator_new(1);
      *param_1 = (long)pvVar2;
      param_1[1] = (long)pvVar2;
    }
    uVar3 = param_1[5];
  }
  else {
    uVar3 = (param_1[4] - lVar4) + ((param_1[4] - lVar4) + 1U >> 1);
  }
  uVar1 = (param_1[3] - lVar4) + param_2;
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  FUN_008fe358(param_1,uVar1);
  return;
}




void FUN_008fe834(undefined8 *param_1,void *param_2,uint param_3,undefined8 param_4)

{
  undefined8 *__dest;
  
  if (param_3 < 0x10) {
    *(undefined4 *)(param_1 + 2) = 0x700005;
    *(char *)((long)param_1 + 0xf) = '\x0f' - (char)param_3;
    __dest = param_1;
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0x300005;
    *(uint *)(param_1 + 1) = param_3;
    __dest = (undefined8 *)FUN_008fe8b8(param_4,param_3 + 1);
    *param_1 = __dest;
  }
  memcpy(__dest,param_2,(ulong)param_3);
  *(undefined1 *)((long)__dest + (ulong)param_3) = 0;
  return;
}




long FUN_008fe8b8(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = (ulong *)*param_1;
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  if (puVar1 != (ulong *)0x0) {
    uVar2 = puVar1[1];
    uVar3 = uVar2 + uVar4;
    if (uVar3 <= *puVar1) goto LAB_008fe90c;
  }
  uVar3 = param_1[1];
  if ((ulong)param_1[1] <= uVar4) {
    uVar3 = uVar4;
  }
  FUN_008fe92c(param_1,uVar3);
  puVar1 = (ulong *)*param_1;
  uVar2 = puVar1[1];
  uVar3 = uVar2 + uVar4;
LAB_008fe90c:
  puVar1[1] = uVar3;
  return (long)puVar1 + uVar2 + 0x18;
}




void FUN_008fe92c(long *param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  
  if (param_1[3] == 0) {
    pvVar1 = operator_new(1);
    param_1[3] = (long)pvVar1;
    param_1[4] = (long)pvVar1;
  }
  plVar2 = malloc(param_2 + 0x18);
  *plVar2 = param_2;
  plVar2[1] = 0;
  plVar2[2] = *param_1;
  *param_1 = (long)plVar2;
  return;
}




undefined8 FUN_008fe978(long param_1,uint param_2)

{
  undefined8 uVar1;
  void *__dest;
  void *__src;
  size_t __n;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  __src = (void *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * -0x30);
  *(void **)(param_1 + 0x40) = __src;
  *(undefined4 *)((long)__src + -8) = 3;
  if (param_2 == 0) {
    *(undefined8 *)((long)__src + -0x18) = 0;
  }
  else {
    __n = (ulong)param_2 * 0x30;
    __dest = (void *)FUN_008fe8b8(uVar1,__n);
    *(void **)((long)__src + -0x18) = __dest;
    memcpy(__dest,__src,__n);
  }
  *(uint *)((long)__src + -0x10) = param_2;
  *(uint *)((long)__src + -0xc) = param_2;
  return 1;
}




undefined8 FUN_008fe9f4(long param_1,uint param_2)

{
  undefined8 uVar1;
  void *__dest;
  void *__src;
  size_t __n;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  __src = (void *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * -0x18);
  *(void **)(param_1 + 0x40) = __src;
  *(undefined4 *)((long)__src + -8) = 4;
  if (param_2 == 0) {
    *(undefined8 *)((long)__src + -0x18) = 0;
  }
  else {
    __n = (ulong)param_2 * 0x18;
    __dest = (void *)FUN_008fe8b8(uVar1,__n);
    *(void **)((long)__src + -0x18) = __dest;
    memcpy(__dest,__src,__n);
  }
  *(uint *)((long)__src + -0x10) = param_2;
  *(uint *)((long)__src + -0xc) = param_2;
  return 1;
}




undefined8 FUN_008fea70(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  puVar2 = puVar1 + 3;
  if (*(ulong **)(param_1 + 0x48) <= puVar2) {
    FUN_008fe2e0(param_1 + 0x28,1);
    puVar1 = *(ulong **)(param_1 + 0x40);
    puVar2 = puVar1 + 3;
  }
  *(ulong **)(param_1 + 0x40) = puVar2;
  *puVar1 = param_2;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0x1206;
  if ((long)param_2 < 0) {
    if ((long)param_2 < -0x80000000) {
      return 1;
    }
    uVar3 = 0x1606;
  }
  else {
    uVar3 = 0x3206;
    if (param_2 >> 0x20 == 0) {
      uVar3 = 0x3a06;
    }
    *(uint *)(puVar1 + 2) = uVar3;
    if (param_2 >> 0x1f != 0) {
      return 1;
    }
    uVar3 = uVar3 | 0x400;
  }
  *(uint *)(puVar1 + 2) = uVar3;
  return 1;
}




undefined8 FUN_008feb08(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  puVar3 = puVar1 + 3;
  if (*(ulong **)(param_1 + 0x48) <= puVar3) {
    FUN_008fe2e0(param_1 + 0x28,1);
    puVar1 = *(ulong **)(param_1 + 0x40);
    puVar3 = puVar1 + 3;
  }
  *(ulong **)(param_1 + 0x40) = puVar3;
  *puVar1 = param_2;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0x2206;
  if ((-1 < (long)param_2) && (*(undefined4 *)(puVar1 + 2) = 0x3206, param_2 >> 0x20 == 0)) {
    uVar2 = 0x3a06;
    if (param_2 >> 0x1f == 0) {
      uVar2 = 0x3e06;
    }
    *(undefined4 *)(puVar1 + 2) = uVar2;
  }
  return 1;
}




undefined8 FUN_008feb8c(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  plVar2 = plVar1 + 3;
  if (*(long **)(param_1 + 0x48) <= plVar2) {
    FUN_008fe2e0(param_1 + 0x28,1);
    plVar1 = *(long **)(param_1 + 0x40);
    plVar2 = plVar1 + 3;
  }
  *(long **)(param_1 + 0x40) = plVar2;
  *plVar1 = (long)param_2;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0x1606;
  if (-1 < param_2) {
    *(undefined4 *)(plVar1 + 2) = 0x3e06;
  }
  return 1;
}




undefined8 FUN_008febf4(long param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  puVar2 = puVar1 + 3;
  if (*(ulong **)(param_1 + 0x48) <= puVar2) {
    FUN_008fe2e0(param_1 + 0x28,1);
    puVar1 = *(ulong **)(param_1 + 0x40);
    puVar2 = puVar1 + 3;
  }
  *(ulong **)(param_1 + 0x40) = puVar2;
  *puVar1 = (ulong)param_2;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0x3a06;
  if (-1 < (int)param_2) {
    *(undefined4 *)(puVar1 + 2) = 0x3e06;
  }
  return 1;
}




void FUN_008fec5c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(void **)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_008fe358(param_1,lVar1);
    return;
  }
  free(*(void **)(param_1 + 0x18));
  *(long *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 * FUN_008feca4(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar3 = *param_1;
  lVar4 = lVar3;
  if ((int)param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = FUN_008fd23c(param_2,lVar4);
      if ((uVar2 & 1) != 0) {
        lVar3 = *param_1;
        uVar2 = (ulong)*(uint *)(param_1 + 1);
        break;
      }
      lVar3 = *param_1;
      uVar2 = (ulong)*(uint *)(param_1 + 1);
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar3 + uVar2 * 0x30);
  }
  if (lVar3 + uVar2 * 0x30 == lVar4) {
    if ((DAT_02c09198 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_02c09198);
      puVar5 = &DAT_02c09180;
      if (iVar1 != 0) {
        DAT_02c09180 = 0;
        DAT_02c09188 = 0;
        DAT_02c09190 = 0;
        __cxa_guard_release(&DAT_02c09198);
        puVar5 = &DAT_02c09180;
      }
    }
    else {
      puVar5 = &DAT_02c09180;
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + 0x18);
  }
  return puVar5;
}




void FUN_008fed80(uint *param_1,uint param_2)

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
        *(undefined4 *)((long)pvVar6 + 0x70) = *(undefined4 *)((long)pvVar3 + 0x70);
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




void FUN_008feeb8(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x50);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x50);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        *(undefined1 *)((long)pvVar6 + 0x4c) = *(undefined1 *)((long)pvVar3 + 0x4c);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x48);
        pvVar3 = (void *)((long)pvVar3 + 0x50);
        *(undefined4 *)((long)pvVar6 + 0x48) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x50);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x50;
        puVar4 = (undefined8 *)((long)pvVar3 + 0x28);
        do {
          if ((*(byte *)(puVar4 + 1) & 1) != 0) {
            operator_delete((void *)puVar4[3]);
          }
          if ((*(byte *)(puVar4 + -2) & 1) != 0) {
            operator_delete((void *)*puVar4);
          }
          if ((*(byte *)(puVar4 + -5) & 1) != 0) {
            operator_delete((void *)puVar4[-3]);
          }
          lVar5 = lVar5 + -0x50;
          puVar4 = puVar4 + 10;
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




void FUN_008fefd4(uint *param_1,uint param_2)

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

