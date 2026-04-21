// functions/10021 — 441 functions
#include "GameKindred.h"




void thunk_FUN_100219efc(void)

{
  FUN_100219efc();
  return;
}




void thunk_FUN_10021f964(void)

{
  FUN_10021f964();
  return;
}




void FUN_1002104c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002104d4(param_1,param_4,param_5);
  return;
}




void FUN_1002104d0(void)

{
  return;
}




void FUN_1002104d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100111860(param_3);
  lVar2 = FUN_100111860(param_3);
  (**(code **)*param_1)
            (param_1,param_3,param_3 + 3,lVar1 + 0x50,lVar2 + 0x88,*(undefined1 *)(param_3 + 6));
  uVar3 = FUN_10002f320();
  FUN_10003055c(uVar3,param_2,0);
  if (param_3 != (undefined8 *)0x0) {
    if (*(char *)((long)param_3 + 0x2f) < '\0') {
      operator_delete((void *)param_3[3]);
    }
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      operator_delete((void *)*param_3);
    }
    operator_delete(param_3);
    return;
  }
  return;
}




undefined8 FUN_100210590(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




char * FUN_100210598(void)

{
  return "main_nav_social";
}




undefined8 FUN_1002105a4(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




char * FUN_1002105ac(void)

{
  return "main_nav_social";
}




void FUN_1002105b8(void)

{
  return;
}




void FUN_1002105bc(void)

{
  return;
}




void FUN_1002105c0(void)

{
  return;
}




void FUN_1002105c8(void)

{
  return;
}




void FUN_1002105cc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1002105cc(param_1,*param_2);
    FUN_1002105cc(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




long * FUN_10021061c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_10021069c(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_10021069c(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_10021069c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10021070c;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10021070c:
  return uVar8 >> 0x1f;
}




long * FUN_10021071c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete(*(void **)((long)param_2 + 0x20));
  }
  operator_delete(param_2);
  return plVar3;
}




void FUN_1002107c0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10021083c(uint *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x38);
    pvVar5 = *(void **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (long)pvVar4 + 0x20;
      lVar8 = (long)pvVar5 + 0x20;
      do {
        *(undefined4 *)(lVar6 + -0x20) = *(undefined4 *)(lVar8 + -0x20);
        FUN_10003330c(lVar6 + -0x18,lVar8 + -0x18);
        thunk_FUN_1004e439c(lVar6,lVar8);
        uVar3 = *(undefined4 *)(lVar8 + 0x10);
        *(undefined2 *)(lVar6 + 0x14) = *(undefined2 *)(lVar8 + 0x14);
        *(undefined4 *)(lVar6 + 0x10) = uVar3;
        lVar6 = lVar6 + 0x38;
        pvVar1 = (void *)(lVar8 + 0x18);
        lVar8 = lVar8 + 0x38;
      } while (pvVar1 != (void *)((long)pvVar5 + (ulong)uVar2 * 0x38));
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x38;
        pcVar7 = (char *)((long)pvVar5 + 0x1f);
        do {
          if (*(void **)(pcVar7 + 9) != (void *)0x0) {
            operator_delete__(*(void **)(pcVar7 + 9));
            pcVar7[9] = '\0';
            pcVar7[10] = '\0';
            pcVar7[0xb] = '\0';
            pcVar7[0xc] = '\0';
            pcVar7[0xd] = '\0';
            pcVar7[0xe] = '\0';
            pcVar7[0xf] = '\0';
            pcVar7[0x10] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7[4] = '\0';
            pcVar7[5] = '\0';
            pcVar7[6] = '\0';
            pcVar7[7] = '\0';
            pcVar7[8] = '\0';
          }
          if (*pcVar7 < '\0') {
            operator_delete(*(void **)(pcVar7 + -0x17));
          }
          pcVar7 = pcVar7 + 0x38;
          lVar6 = lVar6 + -0x38;
        } while (lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




long * FUN_100210950(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_10021069c(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_10021069c(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_1002109f4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_100210a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10001549c(local_58);
  lVar1 = FUN_10010ae48(param_1,local_58);
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_10020fc14;
  local_40 = param_3;
  local_30 = param_3;
  FUN_1000be5e4(lVar1 + 0x10,&local_40);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_100210ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10001549c(local_58);
  lVar1 = FUN_10010ae48(param_1,local_58);
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_10020fdf0;
  local_40 = param_3;
  local_30 = param_3;
  FUN_1000be5e4(lVar1 + 0x10,&local_40);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_100210b20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_1002fcf34(param_2);
  FUN_1002e3604(uVar2,uVar1);
  return;
}




void FUN_100210b4c(long param_1)

{
  FUN_1002e3890(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210b54(long param_1)

{
  FUN_1002e38a8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210b5c(long param_1)

{
  FUN_1002e38c0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210b64(long param_1)

{
  FUN_1002e38e8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210b6c(long param_1)

{
  FUN_1002e38d0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210b74(long param_1)

{
  FUN_1002e3ba8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210b7c(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  local_28 = FUN_1003021a8(param_2);
  FUN_100210bc4(param_1 + 0x10,&local_28);
  FUN_1002e3e8c(*(undefined8 *)(param_1 + 8),local_28);
  return;
}




void FUN_100210bc4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100210ca8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined4 FUN_100210c44(long param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (param_2 & 0xffffffff) * 8);
  lVar2 = FUN_100210d24(lVar3 + 0x518,param_3);
  if (lVar3 + 0x520 == lVar2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x38);
  }
  return uVar1;
}




undefined4 FUN_100210c88(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




void FUN_100210c90(long param_1,uint param_2)

{
  FUN_10030279c(0x3f000000,*(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 8));
  return;
}




void FUN_100210ca0(long param_1)

{
  FUN_1002e3dec(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210ca8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_100210d24(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_100210da4(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_100210da4(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_100210da4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_100210e14;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_100210e14:
  return uVar8 >> 0x1f;
}




void FUN_100210e24(long param_1)

{
  FUN_1002e4278(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210e2c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_100302a74(param_3);
  puVar2 = (undefined8 *)FUN_100210e88(param_2 + 0x10,param_3 + 8);
  *puVar2 = uVar1;
  FUN_1002e42f0(param_1,*(undefined8 *)(param_2 + 8),uVar1);
  return;
}




long FUN_100210e88(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long local_50 [3];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_100210f0c(param_1,&local_38,param_2);
  lVar2 = *plVar1;
  if (*plVar1 == 0) {
    FUN_100210fb0(local_50,param_1,param_2);
    FUN_100211078(param_1,local_38,plVar1,local_50[0]);
    lVar2 = local_50[0];
  }
  return lVar2 + 0x38;
}




void FUN_100210efc(long param_1)

{
  FUN_1002e4284(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100210f04(long param_1)

{
  FUN_1002e4404(*(undefined8 *)(param_1 + 8));
  return;
}




long * FUN_100210f0c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_1002110cc(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1002110cc(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_100210fb0(long *param_1,long param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = operator_new(0x40);
  *param_1 = (long)pvVar1;
  param_1[1] = param_2 + 8;
  *(undefined2 *)(param_1 + 2) = 0;
  if ((char)*(byte *)((long)param_3 + 0x17) < '\0') {
    uVar3 = param_3[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_10021114c();
    }
    param_3 = (undefined8 *)*param_3;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar3 < 0x17) {
    pvVar2 = (void *)((long)pvVar1 + 0x20);
    *(char *)((long)pvVar1 + 0x37) = (char)uVar3;
    if (uVar3 == 0) goto LAB_10021104c;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar4);
    *(ulong *)((long)pvVar1 + 0x28) = uVar3;
    *(ulong *)((long)pvVar1 + 0x30) = uVar4 | 0x8000000000000000;
    *(void **)((long)pvVar1 + 0x20) = pvVar2;
  }
  _memcpy(pvVar2,param_3,uVar3);
LAB_10021104c:
  *(undefined1 *)((long)pvVar2 + uVar3) = 0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  *(undefined8 *)(*param_1 + 0x38) = 0;
  return;
}




void FUN_100211078(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




uint FUN_1002110cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10021113c;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10021113c:
  return uVar8 >> 0x1f;
}




void FUN_10021114c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100211158(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  void *local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,param_4);
  std::string::operator=((string *)(param_2 + 8),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  *(int *)(param_2 + 0x68) = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 4);
  plVar4 = (long *)(param_5 + 8);
  plVar3 = (long *)*plVar4;
  if (plVar3 != (long *)0x0) {
    iVar1 = *(int *)(param_3 + 0x58);
    plVar2 = plVar4;
    do {
      if (iVar1 <= *(int *)((long)plVar3 + 0x1c)) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[*(int *)((long)plVar3 + 0x1c) < iVar1];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar4) && (*(int *)((long)plVar2 + 0x1c) <= iVar1)) {
      *(long *)(param_2 + 0xa0) = plVar2[4];
    }
  }
  FUN_1003029d4(param_2,param_3);
  return;
}




long * FUN_100211218(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,
                    undefined8 param_4)

{
  undefined1 auVar1 [16];
  long *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  void *local_68 [2];
  char local_51;
  
  plVar2 = operator_new(0x118);
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined8 *)(plVar2 + 1) = 0;
  *(undefined8 *)((long)plVar2 + 0x2c) = 0;
  *(undefined8 *)((long)plVar2 + 0x24) = 0;
  *(undefined8 *)((long)plVar2 + 0x3c) = 0;
  *(undefined8 *)((long)plVar2 + 0x34) = 0;
  *(undefined8 *)((long)plVar2 + 0x4c) = 0;
  *(undefined8 *)((long)plVar2 + 0x44) = 0;
  *(undefined8 *)((long)plVar2 + 0x54) = 0x3f80000000000000;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xf] = 0;
  plVar2[0xe] = 0;
  plVar2[0x11] = 0;
  plVar2[0x10] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[0x1a] = 0;
  *plVar2 = (long)&PTR_FUN_101471ff8;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1d] = 0;
  FUN_1004e313c(plVar2 + 0x1f);
  FUN_1004e313c(plVar2 + 0x21);
  *(undefined4 *)(plVar2 + 4) = 3;
  auVar1 = param_1[1];
  auVar4 = param_1[1];
  auVar5 = NEON_rev64(*param_1,4);
  auVar5 = NEON_ext(*param_1,auVar5,8,1);
  plVar2[0x1c] = auVar5._8_8_;
  plVar2[0x1b] = auVar5._0_8_;
  auVar4 = NEON_rev64(auVar4,4);
  auVar4 = NEON_ext(auVar1,auVar4,8,1);
  plVar2[0x1e] = auVar4._8_8_;
  plVar2[0x1d] = auVar4._0_8_;
  FUN_10015d3ec();
  uVar3 = FUN_100164f34();
  FUN_1000153b4(plVar2 + 0x1f,uVar3);
  FUN_1000153b4(plVar2 + 0x21,param_4);
  FUN_10001549c(local_68,param_3);
  std::string::operator=((string *)(plVar2 + 1),(string *)local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  return plVar2;
}




int FUN_100211354(uint *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    lVar2 = *(long *)(param_1 + 2);
    do {
      lVar1 = FUN_100210d24(lVar2 + lVar4,param_2);
      lVar2 = *(long *)(param_1 + 2);
      if (lVar2 + lVar4 + 8 != lVar1) {
        iVar3 = *(int *)(lVar1 + 0x38) + iVar3;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x28;
    } while (uVar5 < *param_1);
  }
  return iVar3;
}




undefined8 * FUN_1002113e4(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100327e78(param_1 + 0x15);
  FUN_100327e78(param_1 + 0x1b);
  FUN_100327e78(param_1 + 0x21);
  FUN_100327e78(param_1 + 0x27);
  FUN_1001ff820(param_1,0);
  FUN_1001ff79c(param_1 + 2,0);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  std::string::operator=((string *)(param_1 + 0x11),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1002113e4(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100327e78(param_1 + 0x15);
  FUN_100327e78(param_1 + 0x1b);
  FUN_100327e78(param_1 + 0x21);
  FUN_100327e78(param_1 + 0x27);
  FUN_1001ff820(param_1,0);
  FUN_1001ff79c(param_1 + 2,0);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  std::string::operator=((string *)(param_1 + 0x11),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  return param_1;
}




byte FUN_100211494(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = 1;
    piVar2 = (int *)(*(long *)(param_1 + 2) + 8);
    do {
      bVar1 = *piVar2 != 0;
      if (*param_1 <= uVar3) break;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 10;
    } while (!bVar1);
  }
  return bVar1 | param_1[0xd] != param_1[0x11] | param_1[0x15] != param_1[0x19] |
         (float)param_1[0x49] != (float)param_1[0x55] | (float)param_1[0x31] != (float)param_1[0x3d]
         | param_1[0x1e] != param_1[0x1f];
}




void FUN_10021153c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100214820(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  uVar5 = *param_2;
  *(undefined4 *)(lVar4 + -0x20) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + -0x28) = uVar5;
  FUN_10003330c(lVar4 + -0x18,param_2 + 2);
  return;
}




long FUN_1002115d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_100214e18(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined4 *)((long)pvVar2 + 0x38) = 0;
    FUN_100214dc4(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_10021164c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100214a1c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar9 = *(long *)(param_1 + 2);
  lVar10 = (ulong)(uVar4 + 1) - 1;
  puVar7 = (undefined8 *)(lVar9 + lVar10 * 0x28);
  puVar8 = puVar7 + 1;
  *puVar8 = 0;
  puVar7[2] = 0;
  *puVar7 = puVar8;
  plVar11 = (long *)*param_2;
  while (plVar11 != param_2 + 1) {
    FUN_100214b8c(puVar7,puVar8,plVar11 + 4,plVar11 + 4);
    plVar5 = (long *)plVar11[1];
    if ((long *)plVar11[1] == (long *)0x0) {
      plVar5 = plVar11 + 2;
      bVar3 = *(long **)*plVar5 != plVar11;
      plVar11 = (long *)*plVar5;
      if (bVar3) {
        do {
          lVar6 = *plVar5;
          plVar5 = (long *)(lVar6 + 0x10);
          plVar11 = (long *)*plVar5;
        } while (*plVar11 != lVar6);
      }
    }
    else {
      do {
        plVar11 = plVar5;
        plVar5 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
  }
  thunk_FUN_1004e439c(lVar9 + lVar10 * 0x28 + 0x18,param_2 + 3);
  return;
}




void FUN_100211778(uint *param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100215018(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x80;
  *(undefined4 *)(lVar1 + -0x80) = *param_2;
  FUN_10003330c(lVar1 + -0x78,param_2 + 2);
  FUN_10003330c(lVar1 + -0x60,param_2 + 8);
  FUN_10003330c(lVar1 + -0x48,param_2 + 0xe);
  FUN_10003330c(lVar1 + -0x30,param_2 + 0x14);
  FUN_10003330c(lVar1 + -0x18,param_2 + 0x1a);
  return;
}




bool FUN_10021183c(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x80) < *(int *)(param_2 + 0x80);
}




bool FUN_100211850(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x24) < *(int *)(param_2 + 0x24);
}




undefined8 * FUN_100211864(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  void *local_60;
  ulong local_58;
  ulong local_50;
  undefined8 *local_48;
  code *local_40;
  ulong local_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101472158;
  operator_new(0x1950);
  lVar6 = thunk_FUN_1002e527c();
  *(undefined8 **)(lVar6 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101471fc0;
  param_1[1] = lVar6;
  FUN_1002113e4(param_1 + 2);
  puVar1 = param_1 + 0x2f;
  param_1[0xcb] = param_1;
  *(ushort *)(param_1 + 0xcc) = *(ushort *)(param_1 + 0xcc) & 0x8000 | 0x3ff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x18e) = 0;
  param_1[0xcd] = &PTR_FUN_101472040;
  operator_new(0x290);
  lVar6 = thunk_FUN_1002e3f20();
  param_1[0xce] = lVar6;
  *(undefined8 **)(lVar6 + 0xb8) = param_1 + 0xcd;
  param_1[0xcd] = &PTR_FUN_101472020;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = param_1 + 0xd0;
  param_1[0xd2] = &PTR_FUN_101472080;
  operator_new(0x4c8);
  lVar6 = thunk_FUN_1002e3364();
  param_1[0xd3] = lVar6;
  *(undefined8 **)(lVar6 + 0xb8) = param_1 + 0xd2;
  param_1[0xd2] = &PTR_FUN_101472060;
  param_1[0xd4] = &PTR_FUN_1014720c0;
  operator_new(0xd0);
  lVar6 = FUN_1002e3ac0();
  *(undefined8 **)(lVar6 + 0xb8) = param_1 + 0xd4;
  param_1[0xd5] = lVar6;
  param_1[0xd4] = &PTR_FUN_1014720a0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  param_1[0xde] = 0;
  uVar4 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = uVar4;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 2;
  *(undefined8 *)((long)param_1 + 0x724) = 0x3e99999a;
  FUN_1002e5988(param_1[1],param_1[0xd3]);
  FUN_1002e570c(param_1[1],param_1[0xce]);
  FUN_1002e59bc(param_1[1],param_1[0xd5]);
  FUN_100211e70(puVar1,0,FUN_100211ec0,0,0,0,0,0);
  FUN_100211e70(puVar1,1,FUN_100211ee0,0,FUN_100211f18,0,0,0);
  FUN_100211e70(puVar1,2,FUN_100211f4c,0,FUN_100211f84,0,FUN_100211fb4,0);
  FUN_100211e70(puVar1,3,FUN_100211fb8,0,FUN_100211fbc,0,FUN_100211fe0,0);
  FUN_100211e70(puVar1,4,FUN_100211fe4,0,FUN_10021201c,0,FUN_100212260,0);
  FUN_100211e70(puVar1,5,FUN_100212264,0,FUN_10021229c,0,FUN_1002122ec,0);
  FUN_100211e70(puVar1,6,FUN_1002122fc,0,FUN_100212300,0,FUN_1002123b0,0);
  FUN_100211e70(puVar1,7,0,0,FUN_1002123b4,0,FUN_1002123c4,0);
  FUN_100211e70(puVar1,8,FUN_1002123c8,0,FUN_100212400,0,FUN_100212548,0);
  FUN_100211e70(puVar1,9,FUN_10021258c,0,FUN_100212590,0,FUN_100212650,0);
  FUN_100211e70(puVar1,10,FUN_100212654,0,FUN_10021268c,0,FUN_10021270c,0);
  FUN_100211e70(puVar1,0xc,FUN_100212710,0,FUN_100212748,0,0,0);
  FUN_100211e70(puVar1,0xb,FUN_1002127ac,0,FUN_1002127e4,0,FUN_1002127f0,0);
  FUN_100211e70(puVar1,0xd,0,0,FUN_1002127f4,0,0,0);
  FUN_100212840(puVar1,0,1);
  FUN_100212840(puVar1,1,2);
  FUN_100212840(puVar1,2,3);
  FUN_100212840(puVar1,3,4);
  FUN_100212840(puVar1,4,6);
  FUN_100212840(puVar1,5,6);
  FUN_100212840(puVar1,6,5);
  FUN_100212840(puVar1,6,8);
  FUN_100212840(puVar1,8,3);
  FUN_100212840(puVar1,3,9);
  FUN_100212840(puVar1,9,10);
  FUN_100212840(puVar1,10,0xc);
  FUN_100212840(puVar1,0xc,0xb);
  iVar5 = 0;
  do {
    FUN_100212840(puVar1,iVar5,0xd);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xd);
  FUN_100212840(puVar1,4,7);
  FUN_100212840(puVar1,5,7);
  FUN_100212840(puVar1,6,7);
  FUN_100212840(puVar1,7,8);
  local_40 = FUN_10021551c;
  local_48 = param_1;
  FUN_100643618(0xbf800000,&local_48,0,1);
  local_48 = (undefined8 *)0x0;
  local_40 = (code *)0x0;
  local_38 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = 0;
  FUN_100136cc8(&local_48,&local_60);
  lVar6 = FUN_10031f280();
  lVar8 = param_1[1];
  pcVar2 = local_40;
  if (-1 < (long)local_38) {
    pcVar2 = (code *)(local_38 >> 0x38);
  }
  uVar7 = 0;
  if (pcVar2 != (code *)0x0) {
    uVar7 = 0;
    uVar3 = local_58;
    if (-1 < (long)local_50) {
      uVar3 = local_50 >> 0x38;
    }
    if ((uVar3 != 0) && (lVar6 != 0)) {
      iVar5 = FUN_10031f7e4(lVar6,&local_60);
      uVar7 = (uint)(iVar5 == 1) << 2;
    }
  }
  *(uint *)(lVar8 + 0x15c) = *(uint *)(lVar8 + 0x15c) & 0xfffffffb | uVar7;
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  return param_1;
}




void FUN_100211e70(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + ((ulong)(*(ushort *)(param_1 + 0x4e8) >> 10) & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x48) = FUN_1002154f8;
  *(code **)(lVar1 + 0x50) = FUN_1002154f8;
  *(code **)(lVar1 + 0x58) = FUN_1002154f8;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x4e8) =
       *(ushort *)(param_1 + 0x4e8) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x4e8) & 0x83ff;
  return;
}




void FUN_100211ec0(long param_1)

{
  if (0 < *(int *)(param_1 + 0x720)) {
    *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x720) + -1;
    return;
  }
  FUN_100212bb0(param_1 + 0x178,1);
  return;
}




void FUN_100211ee0(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,2);
    return;
  }
  return;
}




void FUN_100211f18(long param_1)

{
  FUN_1002e5740(*(undefined8 *)(param_1 + 8));
  FUN_1001015f0();
  FUN_1002e59f4(0x3f800000,0x40000000,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100211f4c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,3);
    return;
  }
  return;
}




void FUN_100211f84(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x670) + 0x288) = *(undefined4 *)(param_1 + 0x6c0);
  FUN_1002e40ec();
  FUN_100210b74(param_1 + 0x6a0);
  return;
}




void FUN_100211fb4(void)

{
  return;
}




void FUN_100211fb8(void)

{
  return;
}




void FUN_100211fbc(long param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x71c) = 0;
  uVar1 = 9;
  if (*(int *)(param_1 + 0x718) != *(int *)(param_1 + 0x6c0)) {
    uVar1 = 4;
  }
  FUN_100212bb0(param_1 + 0x178,uVar1);
  return;
}




void FUN_100211fe0(void)

{
  return;
}




void FUN_100211fe4(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,6);
    return;
  }
  return;
}




void FUN_10021201c(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *plVar14;
  
  *(undefined4 *)(param_1 + 0x728) = 0;
  FUN_100210b20(param_1 + 0x690,
                *(undefined8 *)(*(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x718) * 8))
  ;
  std::string::operator=
            ((string *)(param_1 + 0x6e0),
             (string *)
             (*(long *)(*(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x718) * 8) + 8));
  plVar8 = *(long **)(param_1 + 0x6f8);
  if (plVar8 != (long *)0x0) {
    if (*(int *)(param_1 + 0x700) == (int)plVar8[1]) {
      lVar9 = (**(code **)(*plVar8 + 0x10))();
      if (lVar9 != 0) {
        plVar8 = *(long **)(param_1 + 0x6f8);
        uVar10 = 0;
        if (plVar8 != (long *)0x0) {
          if (*(int *)(param_1 + 0x700) == (int)plVar8[1]) {
            uVar10 = (**(code **)(*plVar8 + 0x10))();
          }
          else {
            uVar10 = 0;
            *(undefined8 *)(param_1 + 0x6f8) = 0;
            *(undefined4 *)(param_1 + 0x700) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0,uVar10);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      *(undefined4 *)(param_1 + 0x700) = DAT_101dc0b88;
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x718) * 8);
  plVar8 = (long *)(lVar9 + 0x40);
  bVar6 = *(byte *)(lVar9 + 0x57);
  uVar11 = (ulong)bVar6;
  sVar1 = *(size_t *)(lVar9 + 0x48);
  if (-1 < (char)bVar6) {
    sVar1 = uVar11;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar14 = (long *)*plVar8;
    plVar3 = plVar14;
    if (-1 < (char)bVar6) {
      plVar3 = plVar8;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar1 == 0) || (iVar7 = _memcmp(plVar3,pbVar13,sVar1), plVar8 = plVar14, iVar7 == 0))
      goto LAB_1002121cc;
    }
    else {
      if (sVar1 == 0) goto LAB_1002121cc;
      if ((uint)*pbVar13 == ((uint)plVar14 & 0xff)) {
        pbVar12 = (byte *)(lVar9 + 0x41);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1002121cc;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 == *pbVar13);
        goto LAB_100212184;
      }
    }
  }
  else {
LAB_100212184:
    if ((char)bVar6 < '\0') {
      plVar8 = (long *)*plVar8;
    }
  }
  lVar9 = FUN_1001e79b8(*(undefined4 *)(lVar9 + 0x58),plVar8,1,1);
  if (lVar9 != 0) {
    uVar4 = *(undefined4 *)(lVar9 + 0x30);
    *(long *)(param_1 + 0x6f8) = lVar9 + 0x28;
    *(undefined4 *)(param_1 + 0x700) = uVar4;
  }
LAB_1002121cc:
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_spoils_fly_in.mp3",0,1);
  plVar8 = *(long **)(param_1 + 0x708);
  if (plVar8 != (long *)0x0) {
    if (*(int *)(param_1 + 0x710) == (int)plVar8[1]) {
      lVar9 = (**(code **)(*plVar8 + 0x10))();
      if (lVar9 != 0) {
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x708) = 0;
      *(undefined4 *)(param_1 + 0x710) = DAT_101dc0b88;
    }
  }
  lVar9 = FUN_1001e79b8(0x3e000000,
                        "build://Sounds/UI.assetbundle/sfx_spoils_electric_blue_circle_loop.ogg",1,1
                       );
  if (lVar9 != 0) {
    uVar4 = *(undefined4 *)(lVar9 + 0x30);
    *(long *)(param_1 + 0x708) = lVar9 + 0x28;
    *(undefined4 *)(param_1 + 0x710) = uVar4;
  }
  return;
}




void FUN_100212260(void)

{
  return;
}




void FUN_100212264(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,6);
    return;
  }
  return;
}




void FUN_10021229c(long param_1)

{
  int iVar1;
  
  FUN_100210c90(param_1 + 0x6a0,*(undefined4 *)(param_1 + 0x71c));
  iVar1 = FUN_100210c44(param_1 + 0x6a0,*(undefined4 *)(param_1 + 0x71c),param_1 + 0x6e0);
  FUN_100210b54((float)iVar1,param_1 + 0x690);
  return;
}




void FUN_1002122ec(long param_1)

{
  *(int *)(param_1 + 0x71c) = *(int *)(param_1 + 0x71c) + 1;
  return;
}




void FUN_1002122fc(void)

{
  return;
}




void FUN_100212300(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x71c);
  lVar1 = param_1 + 0x6a0;
  iVar2 = FUN_100210c88(lVar1);
  if (iVar3 == iVar2) {
    uVar4 = 8;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x71c);
    iVar2 = FUN_100210c88(lVar1);
    if (iVar3 < iVar2) {
      do {
        iVar3 = FUN_100210c44(lVar1,*(undefined4 *)(param_1 + 0x71c),param_1 + 0x6e0);
        if (0 < iVar3) break;
        iVar3 = *(int *)(param_1 + 0x71c) + 1;
        *(int *)(param_1 + 0x71c) = iVar3;
        iVar2 = FUN_100210c88(lVar1);
      } while (iVar3 < iVar2);
    }
    iVar3 = *(int *)(param_1 + 0x71c);
    iVar2 = FUN_100210c88(lVar1);
    uVar4 = 8;
    if (iVar3 != iVar2) {
      uVar4 = 5;
    }
  }
  FUN_100212bb0(param_1 + 0x178,uVar4);
  return;
}




void FUN_1002123b0(void)

{
  return;
}




void FUN_1002123b4(long param_1)

{
  *(undefined4 *)(param_1 + 0x724) = 0;
  FUN_100212bb0(param_1 + 0x178,8);
  return;
}




void FUN_1002123c4(void)

{
  return;
}




void FUN_1002123c8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,3);
    return;
  }
  return;
}




void FUN_100212400(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float local_38;
  float fStack_34;
  
  local_38 = (float)(**(code **)(**(long **)(param_3 + 0x698) + 0x48))();
  local_38 = local_38 * 0.5;
  fStack_34 = param_2 * 0.5;
  lVar2 = param_3 + 0x668;
  FUN_10064ef9c(&local_38,*(undefined8 *)(*(long *)(param_3 + 0x698) + 0x20));
  FUN_100210e24(lVar2);
  FUN_100210b5c(param_3 + 0x690);
  FUN_100210efc(lVar2,*(undefined4 *)(param_3 + 0x718));
  FUN_100210b4c(param_3 + 0x690);
  FUN_100210e2c(*(undefined4 *)(param_3 + 0x724),lVar2,
                *(long *)(param_3 + 0x6c8) + (ulong)*(uint *)(param_3 + 0x718) * 0xb0);
  plVar1 = *(long **)(param_3 + 0x6f8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_3 + 0x700) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_3 + 0x6f8);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_3 + 0x700) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_3 + 0x6f8) = 0;
            *(undefined4 *)(param_3 + 0x700) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3e800000,uVar3);
      }
    }
    else {
      *(undefined8 *)(param_3 + 0x6f8) = 0;
      *(undefined4 *)(param_3 + 0x700) = DAT_101dc0b88;
    }
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_spoils_fly_to_HUD.mp3",0,1);
  return;
}




void FUN_100212548(long param_1)

{
  *(int *)(param_1 + 0x718) = *(int *)(param_1 + 0x718) + 1;
  std::string::operator=((string *)(param_1 + 0x6e0),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x724) = 0x3e99999a;
  return;
}




void FUN_10021258c(void)

{
  return;
}




void FUN_100212590(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_1001014f4();
  FUN_100210b64(param_1 + 0x690);
  FUN_1002e5a58(0x3fc00000,*(undefined8 *)(param_1 + 8));
  plVar1 = *(long **)(param_1 + 0x708);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x710) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x708);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x710) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x708) = 0;
            *(undefined4 *)(param_1 + 0x710) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0,uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x708) = 0;
      *(undefined4 *)(param_1 + 0x710) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100212650(void)

{
  return;
}




void FUN_100212654(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,0xc);
    return;
  }
  return;
}




void FUN_10021268c(long param_1)

{
  FUN_100642324(*(undefined8 *)(param_1 + 8));
  FUN_1002e4470(*(undefined8 *)(param_1 + 0x670));
  FUN_1002e44b8(0x3f400000,*(undefined8 *)(param_1 + 0x670));
  FUN_1002e4524(0x3f400000,*(undefined8 *)(param_1 + 0x670));
  *(uint *)(*(long *)(param_1 + 0x6a8) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x6a8) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x698) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x698) + 0x84) & 0xfffffffb;
  FUN_1002e5b60(*(undefined8 *)(param_1 + 8));
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_spoils_end_sequence_fly_away.mp3",0,1)
  ;
  return;
}




void FUN_10021270c(void)

{
  return;
}




void FUN_100212710(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,0xb);
    return;
  }
  return;
}




void FUN_100212748(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::HIDE_SILK_SCREEN");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  FUN_1002e5a24(0,0x3e99999a,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1002127ac(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021430c();
  if (iVar1 != 0) {
    FUN_100212bb0(param_1 + 0x178,0xd);
    return;
  }
  return;
}




void FUN_1002127e4(long param_1)

{
  FUN_1002e46cc(0x3f400000,*(undefined8 *)(param_1 + 0x670));
  return;
}




void FUN_1002127f0(void)

{
  return;
}




void FUN_1002127f4(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23554,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_100212840(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x4e8) >> 10) & 0x1f;
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    uVar1 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_2) goto LAB_100212874;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar3 != uVar1);
    uVar1 = 0xffffffff;
LAB_100212874:
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_3) {
        if ((int)uVar1 == -1) {
          return;
        }
        param_1 = param_1 + (long)(int)uVar1 * 0x58;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar4 & 0x1f);
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar2 != uVar4);
  }
  return;
}




undefined8 * thunk_FUN_100211864(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  void *pvStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  code *pcStack_40;
  ulong uStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101472158;
  operator_new(0x1950);
  lVar6 = thunk_FUN_1002e527c();
  *(undefined8 **)(lVar6 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101471fc0;
  param_1[1] = lVar6;
  FUN_1002113e4(param_1 + 2);
  puVar1 = param_1 + 0x2f;
  param_1[0xcb] = param_1;
  *(ushort *)(param_1 + 0xcc) = *(ushort *)(param_1 + 0xcc) & 0x8000 | 0x3ff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x18e) = 0;
  param_1[0xcd] = &PTR_FUN_101472040;
  operator_new(0x290);
  lVar6 = thunk_FUN_1002e3f20();
  param_1[0xce] = lVar6;
  *(undefined8 **)(lVar6 + 0xb8) = param_1 + 0xcd;
  param_1[0xcd] = &PTR_FUN_101472020;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = param_1 + 0xd0;
  param_1[0xd2] = &PTR_FUN_101472080;
  operator_new(0x4c8);
  lVar6 = thunk_FUN_1002e3364();
  param_1[0xd3] = lVar6;
  *(undefined8 **)(lVar6 + 0xb8) = param_1 + 0xd2;
  param_1[0xd2] = &PTR_FUN_101472060;
  param_1[0xd4] = &PTR_FUN_1014720c0;
  operator_new(0xd0);
  lVar6 = FUN_1002e3ac0();
  *(undefined8 **)(lVar6 + 0xb8) = param_1 + 0xd4;
  param_1[0xd5] = lVar6;
  param_1[0xd4] = &PTR_FUN_1014720a0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  param_1[0xde] = 0;
  uVar4 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = uVar4;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 2;
  *(undefined8 *)((long)param_1 + 0x724) = 0x3e99999a;
  FUN_1002e5988(param_1[1],param_1[0xd3]);
  FUN_1002e570c(param_1[1],param_1[0xce]);
  FUN_1002e59bc(param_1[1],param_1[0xd5]);
  FUN_100211e70(puVar1,0,FUN_100211ec0,0,0,0,0,0);
  FUN_100211e70(puVar1,1,FUN_100211ee0,0,FUN_100211f18,0,0,0);
  FUN_100211e70(puVar1,2,FUN_100211f4c,0,FUN_100211f84,0,FUN_100211fb4,0);
  FUN_100211e70(puVar1,3,FUN_100211fb8,0,FUN_100211fbc,0,FUN_100211fe0,0);
  FUN_100211e70(puVar1,4,FUN_100211fe4,0,FUN_10021201c,0,FUN_100212260,0);
  FUN_100211e70(puVar1,5,FUN_100212264,0,FUN_10021229c,0,FUN_1002122ec,0);
  FUN_100211e70(puVar1,6,FUN_1002122fc,0,FUN_100212300,0,FUN_1002123b0,0);
  FUN_100211e70(puVar1,7,0,0,FUN_1002123b4,0,FUN_1002123c4,0);
  FUN_100211e70(puVar1,8,FUN_1002123c8,0,FUN_100212400,0,FUN_100212548,0);
  FUN_100211e70(puVar1,9,FUN_10021258c,0,FUN_100212590,0,FUN_100212650,0);
  FUN_100211e70(puVar1,10,FUN_100212654,0,FUN_10021268c,0,FUN_10021270c,0);
  FUN_100211e70(puVar1,0xc,FUN_100212710,0,FUN_100212748,0,0,0);
  FUN_100211e70(puVar1,0xb,FUN_1002127ac,0,FUN_1002127e4,0,FUN_1002127f0,0);
  FUN_100211e70(puVar1,0xd,0,0,FUN_1002127f4,0,0,0);
  FUN_100212840(puVar1,0,1);
  FUN_100212840(puVar1,1,2);
  FUN_100212840(puVar1,2,3);
  FUN_100212840(puVar1,3,4);
  FUN_100212840(puVar1,4,6);
  FUN_100212840(puVar1,5,6);
  FUN_100212840(puVar1,6,5);
  FUN_100212840(puVar1,6,8);
  FUN_100212840(puVar1,8,3);
  FUN_100212840(puVar1,3,9);
  FUN_100212840(puVar1,9,10);
  FUN_100212840(puVar1,10,0xc);
  FUN_100212840(puVar1,0xc,0xb);
  iVar5 = 0;
  do {
    FUN_100212840(puVar1,iVar5,0xd);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xd);
  FUN_100212840(puVar1,4,7);
  FUN_100212840(puVar1,5,7);
  FUN_100212840(puVar1,6,7);
  FUN_100212840(puVar1,7,8);
  pcStack_40 = FUN_10021551c;
  puStack_48 = param_1;
  FUN_100643618(0xbf800000,&puStack_48,0,1);
  puStack_48 = (undefined8 *)0x0;
  pcStack_40 = (code *)0x0;
  uStack_38 = 0;
  pvStack_60 = (void *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_100136cc8(&puStack_48,&pvStack_60);
  lVar6 = FUN_10031f280();
  lVar8 = param_1[1];
  pcVar2 = pcStack_40;
  if (-1 < (long)uStack_38) {
    pcVar2 = (code *)(uStack_38 >> 0x38);
  }
  uVar7 = 0;
  if (pcVar2 != (code *)0x0) {
    uVar7 = 0;
    uVar3 = uStack_58;
    if (-1 < (long)uStack_50) {
      uVar3 = uStack_50 >> 0x38;
    }
    if ((uVar3 != 0) && (lVar6 != 0)) {
      iVar5 = FUN_10031f7e4(lVar6,&pvStack_60);
      uVar7 = (uint)(iVar5 == 1) << 2;
    }
  }
  *(uint *)(lVar8 + 0x15c) = *(uint *)(lVar8 + 0x15c) & 0xfffffffb | uVar7;
  if ((long)uStack_50 < 0) {
    operator_delete(pvStack_60);
  }
  if ((long)uStack_38 < 0) {
    operator_delete(puStack_48);
  }
  return param_1;
}




undefined8 * FUN_1002128c8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_FUN_101471fc0;
  FUN_100212bb0(param_1 + 0x2f,0xd);
  pcStack_38 = FUN_10021551c;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  uVar3 = *(uint *)(param_1 + 0xda);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = param_1[0xdb];
      plVar1 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = param_1[0xdb];
        uVar3 = *(uint *)(param_1 + 0xda);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  plVar1 = (long *)param_1[0xe1];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe2) == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        plVar1 = (long *)param_1[0xe1];
        uVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe2) == (int)plVar1[1]) {
            uVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar2 = 0;
            param_1[0xe1] = 0;
            *(undefined4 *)(param_1 + 0xe2) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3e800000,uVar2);
      }
    }
    else {
      param_1[0xe1] = 0;
      *(undefined4 *)(param_1 + 0xe2) = DAT_101dc0b88;
    }
  }
  plVar1 = (long *)param_1[0xdf];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        plVar1 = (long *)param_1[0xdf];
        uVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
            uVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar2 = 0;
            param_1[0xdf] = 0;
            *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3e800000,uVar2);
      }
    }
    else {
      param_1[0xdf] = 0;
      *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
    }
  }
  FUN_100101590();
  if (*(char *)((long)param_1 + 0x6f7) < '\0') {
    operator_delete((void *)param_1[0xdc]);
  }
  if ((void *)param_1[0xdb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdb]);
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
  }
  FUN_10021540c(param_1 + 0xd8,1);
  param_1[0xd4] = &PTR_FUN_1014720a0;
  if ((void *)param_1[0xd7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7]);
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
  }
  param_1[0xd4] = &PTR_FUN_1014720c0;
  if ((long *)param_1[0xd5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd5] + 8))();
  }
  param_1[0xd5] = 0;
  param_1[0xd2] = &PTR_FUN_101472080;
  if ((long *)param_1[0xd3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd3] + 8))();
  }
  param_1[0xd3] = 0;
  param_1[0xcd] = &PTR_FUN_101472020;
  FUN_10021473c(param_1 + 0xcf,param_1[0xd0]);
  param_1[0xcd] = &PTR_FUN_101472040;
  if ((long *)param_1[0xce] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xce] + 8))();
  }
  param_1[0xce] = 0;
  FUN_1002153a8(param_1 + 0x2f);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  FUN_1001ff6c8(param_1 + 6,1);
  FUN_1001ff79c(param_1 + 4,1);
  FUN_1001ff820(param_1 + 2,1);
  *param_1 = &PTR____cxa_pure_virtual_101472158;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100212bb0(int *param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x13a);
  if ((uVar2 >> 10 & 0x1f) != 0) {
    uVar3 = 0;
    piVar5 = param_1 + 4;
    do {
      if (*piVar5 == param_2) goto LAB_100212bf4;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 0x16;
    } while ((uVar2 >> 10 & 0x1f) != uVar3);
  }
  uVar3 = 0x1f;
LAB_100212bf4:
  uVar4 = (ulong)uVar2 & 0x1f;
  if ((uint)uVar4 == 0x1f) {
    uVar2 = uVar2 & 0xfc1f;
  }
  else {
    if (uVar3 == (uint)uVar4) {
      return;
    }
    if (((uint)param_1[uVar4 * 0x16 + 0x18] >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x13a) = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar4 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + uVar4 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar4 * 0x16 + 0x10),uVar1);
    uVar2 = *(ushort *)(param_1 + 0x13a);
  }
  uVar3 = uVar3 & 0x1f;
  *(ushort *)(param_1 + 0x13a) = (ushort)uVar3 | uVar2 & 0xfc00 | 0x3e0;
  if (uVar3 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100212cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar3 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 0xc),uVar1);
  return;
}




undefined8 * FUN_100212cc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014720a0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_1014720c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * FUN_100212d24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472080;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * FUN_100212d68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472020;
  FUN_10021473c(param_1 + 2,param_1[3]);
  *param_1 = &PTR_FUN_101472040;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1002128c8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR_FUN_101471fc0;
  FUN_100212bb0(param_1 + 0x2f,0xd);
  pcStack_38 = FUN_10021551c;
  puStack_40 = param_1;
  FUN_100643a8c(&puStack_40);
  uVar3 = *(uint *)(param_1 + 0xda);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = param_1[0xdb];
      plVar1 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = param_1[0xdb];
        uVar3 = *(uint *)(param_1 + 0xda);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  plVar1 = (long *)param_1[0xe1];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe2) == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        plVar1 = (long *)param_1[0xe1];
        uVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe2) == (int)plVar1[1]) {
            uVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar2 = 0;
            param_1[0xe1] = 0;
            *(undefined4 *)(param_1 + 0xe2) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3e800000,uVar2);
      }
    }
    else {
      param_1[0xe1] = 0;
      *(undefined4 *)(param_1 + 0xe2) = DAT_101dc0b88;
    }
  }
  plVar1 = (long *)param_1[0xdf];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        plVar1 = (long *)param_1[0xdf];
        uVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
            uVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar2 = 0;
            param_1[0xdf] = 0;
            *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3e800000,uVar2);
      }
    }
    else {
      param_1[0xdf] = 0;
      *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
    }
  }
  FUN_100101590();
  if (*(char *)((long)param_1 + 0x6f7) < '\0') {
    operator_delete((void *)param_1[0xdc]);
  }
  if ((void *)param_1[0xdb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdb]);
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
  }
  FUN_10021540c(param_1 + 0xd8,1);
  param_1[0xd4] = &PTR_FUN_1014720a0;
  if ((void *)param_1[0xd7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7]);
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
  }
  param_1[0xd4] = &PTR_FUN_1014720c0;
  if ((long *)param_1[0xd5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd5] + 8))();
  }
  param_1[0xd5] = 0;
  param_1[0xd2] = &PTR_FUN_101472080;
  if ((long *)param_1[0xd3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd3] + 8))();
  }
  param_1[0xd3] = 0;
  param_1[0xcd] = &PTR_FUN_101472020;
  FUN_10021473c(param_1 + 0xcf,param_1[0xd0]);
  param_1[0xcd] = &PTR_FUN_101472040;
  if ((long *)param_1[0xce] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xce] + 8))();
  }
  param_1[0xce] = 0;
  FUN_1002153a8(param_1 + 0x2f);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  FUN_1001ff6c8(param_1 + 6,1);
  FUN_1001ff79c(param_1 + 4,1);
  FUN_1001ff820(param_1 + 2,1);
  *param_1 = &PTR____cxa_pure_virtual_101472158;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100212dc4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002128c8();
  operator_delete(pvVar1);
  return;
}




void FUN_100212dd8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100212e30(param_1 + 0x178,7);
  if ((iVar1 != 0) && (0.15 <= *(float *)(param_1 + 0x728))) {
    FUN_100212bb0(param_1 + 0x178,7);
    return;
  }
  return;
}




uint FUN_100212e30(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x4e8) & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*(ushort *)(param_1 + 0x4e8) >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      piVar5 = (int *)(param_1 + 0x10);
      do {
        if (*piVar5 == param_2) goto LAB_100212e70;
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 0x16;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_100212e70:
    if ((uint)uVar3 != uVar1) {
      return *(uint *)(param_1 + uVar2 * 0x58 + 0x60) >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_100212e98(long param_1)

{
  int iVar1;
  long lVar2;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_100136cc8(&local_38,&local_50);
  lVar2 = FUN_10031f280();
  if ((lVar2 != 0) && (iVar1 = FUN_10031f7e4(lVar2,&local_50), iVar1 == 1)) {
    FUN_10031fccc(lVar2,&local_38,&local_50);
  }
  FUN_100212bb0(param_1 + 0x178,0xd);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_100212f30(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x660) & 0x1f;
  if (((int)uVar1 != 0x1f) && (*(int *)(param_1 + uVar1 * 0x58 + 0x188) == 9)) {
    FUN_100212bb0(param_1 + 0x178,10);
    return;
  }
  return;
}




void FUN_100212f64(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x13a) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100212fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + uVar2 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + uVar2 * 0x16 + 6),
             *(undefined8 *)(param_1 + uVar2 * 0x16 + 8),uVar1);
  return;
}




undefined8 * FUN_100212fa8(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  param_1 = (long *)*param_1;
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    param_1 = param_1 + 1;
    iVar1 = _strcmp((char *)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)*param_1;
  }
  return puVar2;
}




void FUN_1002141a0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100215530(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100214220(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002155ac(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xb0;
  *(undefined4 *)(lVar5 + -0xb0) = *param_2;
  FUN_10003330c(lVar5 + -0xa8,param_2 + 2);
  FUN_10003330c(lVar5 + -0x90,param_2 + 8);
  FUN_10003330c(lVar5 + -0x78,param_2 + 0xe);
  FUN_10003330c(lVar5 + -0x60,param_2 + 0x14);
  *(undefined4 *)(lVar5 + -0x48) = param_2[0x1a];
  thunk_FUN_1004e439c(lVar5 + -0x40,param_2 + 0x1c);
  *(undefined4 *)(lVar5 + -0x30) = param_2[0x20];
  FUN_10003330c(lVar5 + -0x28,param_2 + 0x22);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar5 + -0xb) = *(undefined8 *)((long)param_2 + 0xa5);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




uint FUN_10021430c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = FUN_100642bc8(lVar3);
  if (((((uVar2 & 1) == 0) && (uVar2 = FUN_100642bc8(lVar3 + 0x1858), (uVar2 & 1) == 0)) &&
      (uVar2 = FUN_100210f04(param_1 + 0x668), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_100210b6c(param_1 + 0x690), (uVar2 & 1) == 0)) {
    uVar1 = FUN_100210ca0(param_1 + 0x6a0);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_100214374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101471ff8;
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  if ((void *)param_1[0x20] != (void *)0x0) {
    operator_delete__((void *)param_1[0x20]);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  FUN_100214410(param_1);
  return;
}




void FUN_1002143c0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101471ff8;
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  if ((void *)param_1[0x20] != (void *)0x0) {
    operator_delete__((void *)param_1[0x20]);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  pvVar1 = (void *)FUN_100214410(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_100214410(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100214410_10148df38;
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_1002144c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472020;
  FUN_10021473c(param_1 + 2,param_1[3]);
  *param_1 = &PTR_FUN_101472040;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100214514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472040;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100214558(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472040;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100214598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472080;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1002145d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472080;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_10021461c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472080;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_10021465c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014720a0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_1014720c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1002146b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014720c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1002146fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014720c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_10021473c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10021473c(param_1,*param_2);
    FUN_10021473c(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10021478c(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_1001ff820(param_1,1);
    FUN_100214820(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar1 = *(long *)(param_1 + 2) + 0x10;
      lVar5 = (ulong)*param_2 * 0x28;
      lVar4 = *(long *)(param_2 + 2) + 0x10;
      do {
        uVar3 = *(undefined8 *)(lVar4 + -0x10);
        *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar4 + -8);
        *(undefined8 *)(lVar1 + -0x10) = uVar3;
        lVar1 = FUN_10003330c(lVar1,lVar4);
        lVar1 = lVar1 + 0x28;
        lVar4 = lVar4 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_100214820(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (long)pvVar1 + 0x10;
      lVar7 = (ulong)*param_1 * 0x28;
      lVar6 = (long)pvVar2 + 0x10;
      do {
        uVar3 = *(undefined8 *)(lVar6 + -0x10);
        *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(lVar6 + -8);
        *(undefined8 *)(lVar4 + -0x10) = uVar3;
        FUN_10003330c(lVar4,lVar6);
        lVar4 = lVar4 + 0x28;
        lVar6 = lVar6 + 0x28;
        lVar7 = lVar7 + -0x28;
      } while (lVar7 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        pcVar5 = (char *)((long)pvVar2 + 0x27);
        do {
          if (*pcVar5 < '\0') {
            operator_delete(*(void **)(pcVar5 + -0x17));
          }
          pcVar5 = pcVar5 + 0x28;
          lVar4 = lVar4 + -0x28;
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




void FUN_100214908(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (param_1 != param_2) {
    FUN_1001ff79c(param_1,1);
    FUN_100214a1c(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      puVar7 = *(undefined8 **)(param_2 + 2);
      puVar8 = puVar7 + (ulong)*param_2 * 5;
      puVar5 = *(undefined8 **)(param_1 + 2);
      do {
        puVar6 = puVar5 + 1;
        *puVar6 = 0;
        puVar5[2] = 0;
        *puVar5 = puVar6;
        plVar9 = (long *)*puVar7;
        while (plVar9 != puVar7 + 1) {
          FUN_100214b8c(puVar5,puVar6,plVar9 + 4,plVar9 + 4);
          plVar3 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar3 = plVar9 + 2;
            bVar1 = *(long **)*plVar3 != plVar9;
            plVar9 = (long *)*plVar3;
            if (bVar1) {
              do {
                lVar4 = *plVar3;
                plVar3 = (long *)(lVar4 + 0x10);
                plVar9 = (long *)*plVar3;
              } while (*plVar9 != lVar4);
            }
          }
          else {
            do {
              plVar9 = plVar3;
              plVar3 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        thunk_FUN_1004e439c(puVar5 + 3,puVar7 + 3);
        puVar7 = puVar7 + 5;
        puVar5 = puVar5 + 5;
      } while (puVar7 != puVar8);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_100214a1c(uint *param_1,uint param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0x28);
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar8 = puVar5 + (ulong)*param_1 * 5;
      puVar6 = puVar2;
      do {
        puVar7 = puVar6 + 1;
        *puVar7 = 0;
        puVar6[2] = 0;
        *puVar6 = puVar7;
        plVar9 = (long *)*puVar5;
        while (plVar9 != puVar5 + 1) {
          FUN_100214b8c(puVar6,puVar7,plVar9 + 4,plVar9 + 4);
          plVar3 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar3 = plVar9 + 2;
            bVar1 = *(long **)*plVar3 != plVar9;
            plVar9 = (long *)*plVar3;
            if (bVar1) {
              do {
                lVar4 = *plVar3;
                plVar3 = (long *)(lVar4 + 0x10);
                plVar9 = (long *)*plVar3;
              } while (*plVar9 != lVar4);
            }
          }
          else {
            do {
              plVar9 = plVar3;
              plVar3 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        thunk_FUN_1004e439c(puVar6 + 3,puVar5 + 3);
        puVar5 = puVar5 + 5;
        puVar6 = puVar6 + 5;
      } while (puVar5 != puVar8);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        do {
          if ((void *)puVar5[4] != (void *)0x0) {
            operator_delete__((void *)puVar5[4]);
            puVar5[3] = 0;
            puVar5[4] = 0;
          }
          FUN_10014ebf8(puVar5,puVar5[1]);
          puVar5 = puVar5 + 5;
          lVar4 = lVar4 + -0x28;
        } while (lVar4 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(undefined8 **)(param_1 + 2) = puVar2;
  }
  return;
}




undefined1  [16]
FUN_100214b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_100214c1c(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x40);
    FUN_10003330c((long)pvVar3 + 0x20,param_4);
    *(undefined4 *)((long)pvVar3 + 0x38) = *(undefined4 *)(param_4 + 0x18);
    FUN_100214dc4(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_100214c1c(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 1 != param_2) {
    iVar2 = FUN_100214ebc(param_5,param_2 + 4);
    if (iVar2 == 0) {
      iVar2 = FUN_100214ebc(param_2 + 4,param_5);
      if (iVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (iVar2 = FUN_100214ebc(param_5,plVar5 + 4), iVar2 != 0)) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_100214d7c;
    }
  }
  plVar5 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar1 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
        } while (*(long *)*plVar3 == lVar4);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    iVar2 = FUN_100214ebc(plVar3 + 4,param_5);
    if (iVar2 == 0) {
LAB_100214d7c:
      plVar3 = (long *)FUN_100214e18(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




void FUN_100214dc4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_100214e18(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_100214ebc(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_100214ebc(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




uint FUN_100214ebc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_100214f2c;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_100214f2c:
  return uVar8 >> 0x1f;
}




void FUN_100214f3c(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_1001ff6c8(param_1,1);
    FUN_100215018(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        puVar1 = (undefined4 *)(lVar6 + lVar5);
        puVar2 = (undefined4 *)(lVar7 + lVar5);
        *puVar2 = *puVar1;
        FUN_10003330c(puVar2 + 2,puVar1 + 2);
        FUN_10003330c(puVar2 + 8,puVar1 + 8);
        FUN_10003330c(puVar2 + 0xe,puVar1 + 0xe);
        FUN_10003330c(puVar2 + 0x14,puVar1 + 0x14);
        FUN_10003330c(puVar2 + 0x1a,puVar1 + 0x1a);
        lVar5 = lVar5 + 0x80;
      } while ((ulong)uVar3 * 0x80 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_100215018(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 << 7);
    pvVar5 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar1 = (undefined4 *)((long)pvVar5 + lVar6);
        puVar2 = (undefined4 *)((long)pvVar4 + lVar6);
        *puVar2 = *puVar1;
        FUN_10003330c(puVar2 + 2,puVar1 + 2);
        FUN_10003330c(puVar2 + 8,puVar1 + 8);
        FUN_10003330c(puVar2 + 0xe,puVar1 + 0xe);
        FUN_10003330c(puVar2 + 0x14,puVar1 + 0x14);
        FUN_10003330c(puVar2 + 0x1a,puVar1 + 0x1a);
        lVar6 = lVar6 + 0x80;
      } while ((ulong)uVar3 * 0x80 - lVar6 != 0);
      pvVar5 = *(void **)(param_1 + 2);
      uVar3 = *param_1;
      param_1[1] = param_2;
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          if (*(char *)((long)pvVar5 + lVar6 + 0x7f) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x68));
          }
          if (*(char *)((long)pvVar5 + lVar6 + 0x67) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x50));
          }
          if (*(char *)((long)pvVar5 + lVar6 + 0x4f) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x38));
          }
          if (*(char *)((long)pvVar5 + lVar6 + 0x37) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x20));
          }
          if (*(char *)((long)pvVar5 + lVar6 + 0x1f) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 8));
          }
          lVar6 = lVar6 + 0x80;
        } while ((ulong)uVar3 * 0x80 - lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void thunk_FUN_100214410(void)

{
  FUN_100214410();
  return;
}




void FUN_100215194(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100214410();
  operator_delete(pvVar1);
  return;
}




undefined4 * FUN_1002151a8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  FUN_10001549c(param_1 + 8,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50);
  FUN_10003330c(param_1 + 0xe,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x14,&DAT_101d91198);
  param_1[0x1a] = 0;
  thunk_FUN_1004e439c(param_1 + 0x1c,&DAT_101d91650);
  param_1[0x20] = 1;
  FUN_10003330c(param_1 + 0x22,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x28) = DAT_101dc1cb8;
  param_1[0x2a] = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return param_1;
}




void FUN_100215250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472108;
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    operator_delete((void *)param_1[0x23]);
  }
  if (*(char *)((long)param_1 + 0x117) < '\0') {
    operator_delete((void *)param_1[0x20]);
  }
  if ((void *)param_1[0x1f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f]);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  FUN_100214410(param_1);
  return;
}




void FUN_1002152ac(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101472108;
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    operator_delete((void *)param_1[0x23]);
  }
  if (*(char *)((long)param_1 + 0x117) < '\0') {
    operator_delete((void *)param_1[0x20]);
  }
  if ((void *)param_1[0x1f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f]);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  pvVar1 = (void *)FUN_100214410(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021530c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472130;
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  FUN_100214410(param_1);
  return;
}




void FUN_100215358(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101472130;
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  pvVar1 = (void *)FUN_100214410(param_1);
  operator_delete(pvVar1);
  return;
}




int * FUN_1002153a8(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x13a);
  *(ushort *)(param_1 + 0x13a) = uVar2 | 0x3e0;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0x1f) {
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe)
               ,*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar3);
  }
  return param_1;
}




void FUN_10021540c(uint *param_1,int param_2)

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
        if (*(char *)(lVar1 + 0x9f) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x88));
        }
        if (*(void **)(lVar1 + 0x78) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 0x78));
          *(undefined8 *)(lVar3 + lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar3 + lVar4 + 0x78) = 0;
        }
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x67) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x50));
        }
        if (*(char *)(lVar1 + 0x4f) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x38));
        }
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x37) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x20));
        }
        if (*(char *)(lVar1 + 0x1f) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 8));
        }
        lVar4 = lVar4 + 0xb0;
      } while ((ulong)uVar2 * 0xb0 - lVar4 != 0);
    }
    if (param_2 != 0) {
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




void FUN_1002154f8(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(param_1 + ((long)param_3 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100215514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




void FUN_10021551c(float param_1,long param_2)

{
  *(float *)(param_2 + 0x728) = *(float *)(param_2 + 0x728) + param_1;
  FUN_100212f64(param_2 + 0x178);
  return;
}




void FUN_100215530(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002155ac(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0xb0);
    pvVar7 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar8 = 0;
      do {
        puVar1 = (undefined4 *)((long)pvVar4 + lVar8);
        puVar2 = (undefined4 *)((long)pvVar7 + lVar8);
        *puVar1 = *puVar2;
        FUN_10003330c(puVar1 + 2,puVar2 + 2);
        FUN_10003330c(puVar1 + 8,puVar2 + 8);
        FUN_10003330c(puVar1 + 0xe,puVar2 + 0xe);
        FUN_10003330c(puVar1 + 0x14,puVar2 + 0x14);
        puVar1[0x1a] = puVar2[0x1a];
        thunk_FUN_1004e439c(puVar1 + 0x1c,puVar2 + 0x1c);
        puVar1[0x20] = puVar2[0x20];
        FUN_10003330c(puVar1 + 0x22,puVar2 + 0x22);
        uVar6 = *(undefined8 *)(puVar2 + 0x28);
        *(undefined8 *)((long)puVar1 + 0xa5) = *(undefined8 *)((long)puVar2 + 0xa5);
        *(undefined8 *)(puVar1 + 0x28) = uVar6;
        lVar8 = lVar8 + 0xb0;
      } while (puVar2 + 0x2c != (undefined4 *)((long)pvVar7 + (ulong)uVar3 * 0xb0));
      pvVar7 = *(void **)(param_1 + 2);
      uVar3 = *param_1;
      param_1[1] = param_2;
      if (uVar3 != 0) {
        lVar8 = 0;
        do {
          if (*(char *)((long)pvVar7 + lVar8 + 0x9f) < '\0') {
            operator_delete(*(void **)((long)pvVar7 + lVar8 + 0x88));
          }
          pvVar5 = *(void **)((long)pvVar7 + lVar8 + 0x78);
          if (pvVar5 != (void *)0x0) {
            operator_delete__(pvVar5);
            *(undefined8 *)((long)pvVar7 + lVar8 + 0x70) = 0;
            *(undefined8 *)((long)pvVar7 + lVar8 + 0x78) = 0;
          }
          if (*(char *)((long)pvVar7 + lVar8 + 0x67) < '\0') {
            operator_delete(*(void **)((long)pvVar7 + lVar8 + 0x50));
          }
          if (*(char *)((long)pvVar7 + lVar8 + 0x4f) < '\0') {
            operator_delete(*(void **)((long)pvVar7 + lVar8 + 0x38));
          }
          if (*(char *)((long)pvVar7 + lVar8 + 0x37) < '\0') {
            operator_delete(*(void **)((long)pvVar7 + lVar8 + 0x20));
          }
          if (*(char *)((long)pvVar7 + lVar8 + 0x1f) < '\0') {
            operator_delete(*(void **)((long)pvVar7 + lVar8 + 8));
          }
          lVar8 = lVar8 + 0xb0;
        } while ((ulong)uVar3 * 0xb0 - lVar8 != 0);
        pvVar7 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_10021575c(ulong param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
LAB_10021579c:
  uVar9 = param_2 - 0xb0;
  uVar7 = param_1;
LAB_1002157a4:
  param_1 = uVar7;
  uVar7 = param_2 - param_1;
  switch(((long)uVar7 >> 4) * 0x2e8ba2e8ba2e8ba3) {
  case 0:
  case 1:
    goto switchD_100215a64_caseD_0;
  case 2:
    iVar2 = (*(code *)*param_3)(uVar9,param_1);
    if (iVar2 == 0) {
      return;
    }
    FUN_100215b74(param_1,uVar9);
    return;
  case 3:
    FUN_100215dbc(param_1,param_1 + 0xb0,uVar9,param_3);
    return;
  case 4:
    FUN_100215e98(param_1,param_1 + 0xb0,param_1 + 0x160,uVar9,param_3);
    return;
  case 5:
    FUN_100215f58(param_1,param_1 + 0xb0,param_1 + 0x160,param_1 + 0x210,uVar9,param_3);
    return;
  default:
    if ((long)uVar7 < 0x4d0) {
      FUN_10021604c(param_1,param_2,param_3);
      return;
    }
    if ((long)uVar7 < 0x2aed1) {
      uVar10 = param_1 + ((uVar7 & 0xffffffff) / 0x160) * 0xb0;
      iVar2 = FUN_100215dbc(param_1,uVar10,uVar9,param_3);
    }
    else {
      uVar10 = param_1 + (uVar7 / 0x160) * 0xb0;
      lVar8 = (uVar7 / 0x2c0) * 0xb0;
      iVar2 = FUN_100215f58(param_1,param_1 + lVar8,uVar10,uVar10 + lVar8,uVar9,param_3);
    }
    uVar4 = (*(code *)*param_3)(param_1,uVar10);
    uVar7 = uVar9;
    if ((uVar4 & 1) == 0) break;
    goto LAB_100215880;
  }
  while (uVar7 = uVar7 - 0xb0, uVar7 != param_1) {
    iVar3 = (*(code *)*param_3)(uVar7,uVar10);
    if (iVar3 != 0) goto code_r0x000100215870;
  }
  uVar10 = param_1 + 0xb0;
  uVar7 = (*(code *)*param_3)(param_1,uVar9);
  if ((uVar7 & 1) == 0) {
    while( true ) {
      if (uVar10 == uVar9) {
        return;
      }
      iVar2 = (*(code *)*param_3)(param_1,uVar10);
      if (iVar2 != 0) break;
      uVar10 = uVar10 + 0xb0;
    }
    FUN_100215b74(uVar10,uVar9);
    uVar10 = uVar10 + 0xb0;
  }
  uVar4 = uVar9;
  if (uVar10 == uVar9) {
    return;
  }
  while( true ) {
    do {
      uVar7 = uVar10;
      iVar2 = (*(code *)*param_3)(param_1,uVar7);
      uVar10 = uVar7 + 0xb0;
    } while (iVar2 == 0);
    do {
      uVar4 = uVar4 - 0xb0;
      uVar6 = (*(code *)*param_3)(param_1,uVar4);
    } while ((uVar6 & 1) != 0);
    if (uVar4 <= uVar7) break;
    FUN_100215b74(uVar7,uVar4);
  }
  goto LAB_1002157a4;
code_r0x000100215870:
  FUN_100215b74(param_1,uVar7);
  iVar2 = iVar2 + 1;
LAB_100215880:
  uVar4 = param_1 + 0xb0;
  uVar1 = uVar10;
  uVar6 = uVar4;
  if (uVar4 < uVar7) {
    while( true ) {
      do {
        uVar4 = uVar6;
        uVar10 = uVar1;
        uVar5 = (*(code *)*param_3)(uVar4,uVar10);
        uVar6 = uVar4 + 0xb0;
        uVar1 = uVar10;
      } while ((uVar5 & 1) != 0);
      do {
        uVar7 = uVar7 - 0xb0;
        iVar3 = (*(code *)*param_3)(uVar7,uVar10);
      } while (iVar3 == 0);
      if (uVar7 < uVar4) break;
      FUN_100215b74(uVar4,uVar7);
      iVar2 = iVar2 + 1;
      uVar1 = uVar7;
      if (uVar4 != uVar10) {
        uVar1 = uVar10;
      }
    }
  }
  if ((uVar4 != uVar10) && (iVar3 = (*(code *)*param_3)(uVar10,uVar4), iVar3 != 0)) {
    FUN_100215b74(uVar4,uVar10);
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 0) {
    uVar10 = FUN_100216358(param_1,uVar4,param_3);
    iVar2 = FUN_100216358(uVar4 + 0xb0,param_2,param_3);
    if (iVar2 != 0) goto LAB_100215a44;
    uVar7 = uVar4 + 0xb0;
    if ((uVar10 & 1) != 0) goto LAB_1002157a4;
  }
  if (((long)(param_2 - uVar4) >> 4) * 0x2e8ba2e8ba2e8ba3 <=
      ((long)(uVar4 - param_1) >> 4) * 0x2e8ba2e8ba2e8ba3) {
    FUN_10021575c(uVar4 + 0xb0,param_2,param_3);
    param_2 = uVar4;
    goto LAB_10021579c;
  }
  FUN_10021575c(param_1,uVar4,param_3);
  uVar7 = uVar4 + 0xb0;
  goto LAB_1002157a4;
LAB_100215a44:
  param_2 = uVar4;
  if ((uVar10 & 1) != 0) {
switchD_100215a64_caseD_0:
    return;
  }
  goto LAB_10021579c;
}




void FUN_100215b74(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *local_110 [2];
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  void *local_e0 [2];
  char local_c9;
  void *local_c8 [2];
  char local_b1;
  undefined4 local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_98;
  void *local_90 [2];
  char local_79;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  
  uVar1 = *param_1;
  FUN_10003330c((string *)local_110,(string *)(param_1 + 2));
  FUN_10003330c((string *)local_f8,(string *)(param_1 + 8));
  FUN_10003330c((string *)local_e0,(string *)(param_1 + 0xe));
  FUN_10003330c((string *)local_c8,(string *)(param_1 + 0x14));
  local_b0 = param_1[0x1a];
  thunk_FUN_1004e439c(&local_a8,param_1 + 0x1c);
  local_98 = param_1[0x20];
  FUN_10003330c((string *)local_90,(string *)(param_1 + 0x22));
  local_78 = (undefined5)*(undefined8 *)(param_1 + 0x28);
  uStack_73 = (undefined3)*(undefined8 *)((long)param_1 + 0xa5);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xa5) >> 0x18);
  *param_1 = *param_2;
  std::string::operator=((string *)(param_1 + 2),(string *)(param_2 + 2));
  std::string::operator=((string *)(param_1 + 8),(string *)(param_2 + 8));
  std::string::operator=((string *)(param_1 + 0xe),(string *)(param_2 + 0xe));
  std::string::operator=((string *)(param_1 + 0x14),(string *)(param_2 + 0x14));
  param_1[0x1a] = param_2[0x1a];
  FUN_1000153b4(param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x20] = param_2[0x20];
  std::string::operator=((string *)(param_1 + 0x22),(string *)(param_2 + 0x22));
  uVar2 = *(undefined8 *)((long)param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)((long)param_1 + 0xa5) = uVar2;
  *param_2 = uVar1;
  std::string::operator=((string *)(param_2 + 2),(string *)local_110);
  std::string::operator=((string *)(param_2 + 8),(string *)local_f8);
  std::string::operator=((string *)(param_2 + 0xe),(string *)local_e0);
  std::string::operator=((string *)(param_2 + 0x14),(string *)local_c8);
  param_2[0x1a] = local_b0;
  FUN_1000153b4(param_2 + 0x1c,&local_a8);
  param_2[0x20] = local_98;
  std::string::operator=((string *)(param_2 + 0x22),(string *)local_90);
  *(ulong *)(param_2 + 0x28) = CONCAT35(uStack_73,local_78);
  *(ulong *)((long)param_2 + 0xa5) = CONCAT53(uStack_70,uStack_73);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  if (local_c9 < '\0') {
    operator_delete(local_e0[0]);
  }
  if (local_e1 < '\0') {
    operator_delete(local_f8[0]);
  }
  if (local_f9 < '\0') {
    operator_delete(local_110[0]);
  }
  return;
}




undefined8
FUN_100215dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)*param_4)(param_2,param_1);
  uVar3 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_100215b74(param_2,param_3);
    iVar1 = (*(code *)*param_4)(param_2,param_1);
    param_3 = param_2;
    param_2 = param_1;
  }
  else {
    if ((int)uVar3 != 0) {
      FUN_100215b74(param_1,param_3);
      return 1;
    }
    FUN_100215b74(param_1,param_2);
    iVar1 = (*(code *)*param_4)(param_3,param_2);
  }
  if (iVar1 == 0) {
    return 1;
  }
  FUN_100215b74(param_2,param_3);
  return 2;
}




ulong FUN_100215e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = FUN_100215dbc();
  iVar1 = (*(code *)*param_5)(param_4,param_3);
  if (iVar1 != 0) {
    FUN_100215b74(param_3,param_4);
    iVar1 = (*(code *)*param_5)(param_3,param_2);
    iVar3 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar3 + 1);
    }
    else {
      FUN_100215b74(param_2,param_3);
      iVar1 = (*(code *)*param_5)(param_2,param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar3 + 2);
      }
      else {
        FUN_100215b74(param_1,param_2);
        uVar2 = (ulong)(iVar3 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_100215f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = FUN_100215e98();
  iVar1 = (*(code *)*param_6)(param_5,param_4);
  if (iVar1 != 0) {
    FUN_100215b74(param_4,param_5);
    iVar1 = (*(code *)*param_6)(param_4,param_3);
    iVar3 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar3 + 1);
    }
    else {
      FUN_100215b74(param_3,param_4);
      iVar1 = (*(code *)*param_6)(param_3,param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar3 + 2);
      }
      else {
        FUN_100215b74(param_2,param_3);
        iVar1 = (*(code *)*param_6)(param_2,param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar3 + 3);
        }
        else {
          FUN_100215b74(param_1,param_2);
          uVar2 = (ulong)(iVar3 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_10021604c(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  string *this;
  string *this_00;
  string *this_01;
  string *this_02;
  long lVar1;
  string *this_03;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_118 [2];
  void *local_110 [2];
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  void *local_e0 [2];
  char local_c9;
  void *local_c8 [2];
  char local_b1;
  undefined4 local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_98;
  void *local_90 [2];
  char local_79;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  
  FUN_100215dbc(param_1,param_1 + 0x2c,param_1 + 0x58);
  if (param_1 + 0x84 != param_2) {
    lVar6 = 0;
    puVar8 = param_1 + 0x84;
    puVar9 = param_1 + 0x58;
    do {
      puVar5 = puVar8;
      iVar3 = (*(code *)*param_3)(puVar5,puVar9);
      if (iVar3 != 0) {
        local_118[0] = *puVar5;
        FUN_10003330c((string *)local_110,puVar5 + 2);
        FUN_10003330c((string *)local_f8,puVar5 + 8);
        FUN_10003330c((string *)local_e0,puVar5 + 0xe);
        FUN_10003330c((string *)local_c8,puVar5 + 0x14);
        local_b0 = puVar5[0x1a];
        thunk_FUN_1004e439c(&local_a8,puVar5 + 0x1c);
        local_98 = puVar5[0x20];
        FUN_10003330c((string *)local_90,puVar5 + 0x22);
        local_78 = (undefined5)*(undefined8 *)(puVar5 + 0x28);
        uStack_73 = (undefined3)*(undefined8 *)((long)puVar5 + 0xa5);
        uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)puVar5 + 0xa5) >> 0x18);
        lVar2 = lVar6;
        do {
          lVar7 = lVar2;
          *(undefined4 *)((long)param_1 + lVar7 + 0x210) =
               *(undefined4 *)((long)param_1 + lVar7 + 0x160);
          this = (string *)((long)param_1 + lVar7 + 0x168);
          std::string::operator=((string *)((long)param_1 + lVar7 + 0x218),this);
          this_00 = (string *)((long)param_1 + lVar7 + 0x180);
          std::string::operator=((string *)((long)param_1 + lVar7 + 0x230),this_00);
          this_01 = (string *)((long)param_1 + lVar7 + 0x198);
          std::string::operator=((string *)((long)param_1 + lVar7 + 0x248),this_01);
          this_02 = (string *)((long)param_1 + lVar7 + 0x1b0);
          std::string::operator=((string *)((long)param_1 + lVar7 + 0x260),this_02);
          *(undefined4 *)((long)param_1 + lVar7 + 0x278) =
               *(undefined4 *)((long)param_1 + lVar7 + 0x1c8);
          lVar1 = (long)param_1 + lVar7 + 0x1d0;
          FUN_1000153b4((long)param_1 + lVar7 + 0x280,lVar1);
          *(undefined4 *)((long)param_1 + lVar7 + 0x290) =
               *(undefined4 *)((long)param_1 + lVar7 + 0x1e0);
          this_03 = (string *)((long)param_1 + lVar7 + 0x1e8);
          std::string::operator=((string *)((long)param_1 + lVar7 + 0x298),this_03);
          *(undefined8 *)((long)param_1 + lVar7 + 0x2b0) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x200);
          *(undefined8 *)((long)param_1 + lVar7 + 0x2b5) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x205);
          puVar8 = param_1;
          if (lVar7 == -0x160) goto LAB_100216238;
          uVar4 = (*(code *)*param_3)(local_118,(long)param_1 + lVar7 + 0xb0);
          lVar2 = lVar7 + -0xb0;
        } while ((uVar4 & 1) != 0);
        puVar8 = (undefined4 *)((long)param_1 + lVar7 + 0x160);
LAB_100216238:
        *puVar8 = local_118[0];
        std::string::operator=(this,(string *)local_110);
        std::string::operator=(this_00,(string *)local_f8);
        std::string::operator=(this_01,(string *)local_e0);
        std::string::operator=(this_02,(string *)local_c8);
        puVar8[0x1a] = local_b0;
        FUN_1000153b4(lVar1,&local_a8);
        puVar8[0x20] = local_98;
        std::string::operator=(this_03,(string *)local_90);
        *(ulong *)((long)param_1 + lVar7 + 0x200) = CONCAT35(uStack_73,local_78);
        *(ulong *)((long)param_1 + lVar7 + 0x205) = CONCAT53(uStack_70,uStack_73);
        if (local_79 < '\0') {
          operator_delete(local_90[0]);
        }
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        if (local_b1 < '\0') {
          operator_delete(local_c8[0]);
        }
        if (local_c9 < '\0') {
          operator_delete(local_e0[0]);
        }
        if (local_e1 < '\0') {
          operator_delete(local_f8[0]);
        }
        if (local_f9 < '\0') {
          operator_delete(local_110[0]);
        }
      }
      lVar6 = lVar6 + 0xb0;
      puVar8 = puVar5 + 0x2c;
      puVar9 = puVar5;
    } while (puVar5 + 0x2c != param_2);
  }
  return;
}




bool FUN_100216358(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  string *this;
  string *this_00;
  string *this_01;
  string *this_02;
  long lVar1;
  string *this_03;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 local_118 [2];
  void *local_110 [2];
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  void *local_e0 [2];
  char local_c9;
  void *local_c8 [2];
  char local_b1;
  undefined4 local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined4 local_98;
  void *local_90 [2];
  char local_79;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  
  switch(((long)param_2 - (long)param_1 >> 4) * 0x2e8ba2e8ba2e8ba3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar3 = (*(code *)*param_3)(param_2 + -0x2c,param_1);
    if (iVar3 != 0) {
      FUN_100215b74(param_1,param_2 + -0x2c);
    }
    break;
  case 3:
    FUN_100215dbc(param_1,param_1 + 0x2c,param_2 + -0x2c,param_3);
    break;
  case 4:
    FUN_100215e98(param_1,param_1 + 0x2c,param_1 + 0x58,param_2 + -0x2c,param_3);
    break;
  case 5:
    FUN_100215f58(param_1,param_1 + 0x2c,param_1 + 0x58,param_1 + 0x84,param_2 + -0x2c,param_3);
    break;
  default:
    FUN_100215dbc(param_1,param_1 + 0x2c,param_1 + 0x58,param_3);
    if (param_1 + 0x84 != param_2) {
      lVar9 = 0;
      iVar3 = 0;
      puVar8 = param_1 + 0x84;
      puVar10 = param_1 + 0x58;
      do {
        puVar6 = puVar8;
        iVar4 = (*(code *)*param_3)(puVar6,puVar10);
        if (iVar4 != 0) {
          local_118[0] = *puVar6;
          FUN_10003330c((string *)local_110,puVar6 + 2);
          FUN_10003330c((string *)local_f8,puVar6 + 8);
          FUN_10003330c((string *)local_e0,puVar6 + 0xe);
          FUN_10003330c((string *)local_c8,puVar6 + 0x14);
          local_b0 = puVar6[0x1a];
          thunk_FUN_1004e439c(&local_a8,puVar6 + 0x1c);
          local_98 = puVar6[0x20];
          FUN_10003330c((string *)local_90,puVar6 + 0x22);
          local_78 = (undefined5)*(undefined8 *)(puVar6 + 0x28);
          uStack_73 = (undefined3)*(undefined8 *)((long)puVar6 + 0xa5);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)puVar6 + 0xa5) >> 0x18);
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x210) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x160);
            this = (string *)((long)param_1 + lVar7 + 0x168);
            std::string::operator=((string *)((long)param_1 + lVar7 + 0x218),this);
            this_00 = (string *)((long)param_1 + lVar7 + 0x180);
            std::string::operator=((string *)((long)param_1 + lVar7 + 0x230),this_00);
            this_01 = (string *)((long)param_1 + lVar7 + 0x198);
            std::string::operator=((string *)((long)param_1 + lVar7 + 0x248),this_01);
            this_02 = (string *)((long)param_1 + lVar7 + 0x1b0);
            std::string::operator=((string *)((long)param_1 + lVar7 + 0x260),this_02);
            *(undefined4 *)((long)param_1 + lVar7 + 0x278) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x1c8);
            lVar1 = (long)param_1 + lVar7 + 0x1d0;
            FUN_1000153b4((long)param_1 + lVar7 + 0x280,lVar1);
            *(undefined4 *)((long)param_1 + lVar7 + 0x290) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x1e0);
            this_03 = (string *)((long)param_1 + lVar7 + 0x1e8);
            std::string::operator=((string *)((long)param_1 + lVar7 + 0x298),this_03);
            *(undefined8 *)((long)param_1 + lVar7 + 0x2b0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x200);
            *(undefined8 *)((long)param_1 + lVar7 + 0x2b5) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x205);
            puVar8 = param_1;
            if (lVar7 == -0x160) goto LAB_1002165c0;
            uVar5 = (*(code *)*param_3)(local_118,(long)param_1 + lVar7 + 0xb0);
            lVar2 = lVar7 + -0xb0;
          } while ((uVar5 & 1) != 0);
          puVar8 = (undefined4 *)((long)param_1 + lVar7 + 0x160);
LAB_1002165c0:
          *puVar8 = local_118[0];
          std::string::operator=(this,(string *)local_110);
          std::string::operator=(this_00,(string *)local_f8);
          std::string::operator=(this_01,(string *)local_e0);
          std::string::operator=(this_02,(string *)local_c8);
          puVar8[0x1a] = local_b0;
          FUN_1000153b4(lVar1,&local_a8);
          puVar8[0x20] = local_98;
          std::string::operator=(this_03,(string *)local_90);
          *(ulong *)((long)param_1 + lVar7 + 0x200) = CONCAT35(uStack_73,local_78);
          *(ulong *)((long)param_1 + lVar7 + 0x205) = CONCAT53(uStack_70,uStack_73);
          if (local_79 < '\0') {
            operator_delete(local_90[0]);
          }
          if (local_a0 != (void *)0x0) {
            operator_delete__(local_a0);
            local_a8 = 0;
            local_a0 = (void *)0x0;
          }
          if (local_b1 < '\0') {
            operator_delete(local_c8[0]);
          }
          if (local_c9 < '\0') {
            operator_delete(local_e0[0]);
          }
          if (local_e1 < '\0') {
            operator_delete(local_f8[0]);
          }
          if (local_f9 < '\0') {
            operator_delete(local_110[0]);
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 8) {
            return puVar6 + 0x2c == param_2;
          }
        }
        lVar9 = lVar9 + 0xb0;
        puVar8 = puVar6 + 0x2c;
        puVar10 = puVar6;
      } while (puVar6 + 0x2c != param_2);
    }
  }
  return true;
}




void FUN_10021675c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_100216788:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_100216790:
  param_1 = puVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_100216a30_caseD_0;
  case 2:
    iVar3 = (*(code *)*param_3)(*puVar8,*param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = *puVar8;
    *puVar8 = uVar6;
    return;
  case 3:
    FUN_100216b30(param_1,param_1 + 1,puVar8,param_3);
    return;
  case 4:
    FUN_100216c1c(param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
    return;
  case 5:
    FUN_100216ce8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      FUN_100216dec(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar5;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 + 1;
    }
    puVar9 = (undefined8 *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      iVar3 = FUN_100216b30(param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar1 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      lVar7 = (uVar1 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_100216ce8(param_1,(long)param_1 + lVar7,puVar9,(long)puVar9 + lVar7,puVar8,param_3
                           );
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    if ((uVar5 & 1) == 0) break;
    goto LAB_100216860;
  }
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
    if (iVar4 != 0) goto code_r0x00010021684c;
  }
  puVar10 = param_1 + 1;
  uVar5 = (*(code *)*param_3)(*param_1,*puVar8);
  puVar9 = puVar10;
  if ((uVar5 & 1) == 0) {
    while( true ) {
      if (puVar9 == puVar8) {
        return;
      }
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
      if (iVar3 != 0) break;
      puVar9 = puVar9 + 1;
    }
    uVar6 = *puVar9;
    puVar10 = puVar9 + 1;
    *puVar9 = *puVar8;
    *puVar8 = uVar6;
  }
  puVar12 = puVar8;
  if (puVar10 == puVar8) {
    return;
  }
  while( true ) {
    puVar9 = puVar10 + -1;
    do {
      puVar10 = puVar9;
      puVar9 = puVar10 + 1;
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
    } while (iVar3 == 0);
    puVar10 = puVar10 + 2;
    do {
      puVar12 = puVar12 + -1;
      uVar5 = (*(code *)*param_3)(*param_1,*puVar12);
    } while ((uVar5 & 1) != 0);
    if (puVar12 <= puVar9) break;
    uVar6 = *puVar9;
    *puVar9 = *puVar12;
    *puVar12 = uVar6;
  }
  goto LAB_100216790;
code_r0x00010021684c:
  uVar6 = *param_1;
  *param_1 = *puVar10;
  *puVar10 = uVar6;
  iVar3 = iVar3 + 1;
LAB_100216860:
  puVar12 = param_1 + 1;
  puVar2 = puVar9;
  puVar11 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar9 = puVar2;
      puVar12 = puVar11 + -1;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar5 = (*(code *)*param_3)(*puVar12,*puVar9);
      } while ((uVar5 & 1) != 0);
      puVar11 = puVar11 + 2;
      do {
        puVar10 = puVar10 + -1;
        iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
      } while (iVar4 == 0);
      if (puVar10 < puVar12) break;
      uVar6 = *puVar12;
      *puVar12 = *puVar10;
      *puVar10 = uVar6;
      iVar3 = iVar3 + 1;
      puVar2 = puVar10;
      if (puVar12 != puVar9) {
        puVar2 = puVar9;
      }
    }
  }
  if ((puVar12 != puVar9) && (iVar4 = (*(code *)*param_3)(*puVar9,*puVar12), iVar4 != 0)) {
    uVar6 = *puVar12;
    *puVar12 = *puVar9;
    *puVar9 = uVar6;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_100216ebc(param_1,puVar12,param_3);
    iVar3 = FUN_100216ebc(puVar12 + 1,param_2,param_3);
    if (iVar3 != 0) goto LAB_100216a10;
    puVar9 = puVar12 + 1;
    if ((uVar5 & 1) != 0) goto LAB_100216790;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_10021675c(puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_100216788;
  }
  FUN_10021675c(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_100216790;
LAB_100216a10:
  param_2 = puVar12;
  if ((uVar5 & 1) != 0) {
switchD_100216a30_caseD_0:
    return;
  }
  goto LAB_100216788;
}




undefined8
FUN_100216b30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)*param_4)(*param_2,*param_1);
  uVar3 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    iVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar4 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      iVar1 = (*(code *)*param_4)(*param_3);
      if (iVar1 != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar4;
    }
  }
  return 1;
}




ulong FUN_100216c1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_100216b30();
  iVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if (iVar1 != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    iVar1 = (*(code *)*param_5)(*param_3,*param_2);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      iVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
        uVar2 = (ulong)(iVar4 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_100216ce8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_100216c1c();
  iVar1 = (*(code *)*param_6)(*param_5,*param_4);
  if (iVar1 != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar1 = (*(code *)*param_6)(*param_4,*param_3);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      iVar1 = (*(code *)*param_6)(*param_3,*param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        iVar1 = (*(code *)*param_6)(*param_2,*param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar4 + 3);
        }
        else {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
          uVar2 = (ulong)(iVar4 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_100216dec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  FUN_100216b30(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    puVar5 = param_1 + 3;
    puVar6 = param_1 + 2;
    do {
      puVar4 = puVar5;
      iVar2 = (*(code *)*param_3)(*puVar4,*puVar6);
      if (iVar2 != 0) {
        uVar7 = *puVar4;
        lVar1 = lVar8;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_100216e90;
          uVar3 = (*(code *)*param_3)(uVar7,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_100216e90:
        *puVar5 = uVar7;
      }
      lVar8 = lVar8 + 8;
      puVar5 = puVar4 + 1;
      puVar6 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}




bool FUN_100216ebc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if (iVar2 != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
    }
    break;
  case 3:
    FUN_100216b30(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_100216c1c(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_100216ce8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_100216b30(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar2 = 0;
      puVar6 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar5 = puVar6;
        iVar3 = (*(code *)*param_3)(*puVar5,*puVar7);
        if (iVar3 != 0) {
          uVar8 = *puVar5;
          lVar1 = lVar9;
          do {
            lVar10 = lVar1;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            puVar6 = param_1;
            if (lVar10 == -0x10) goto LAB_100216fbc;
            uVar4 = (*(code *)*param_3)(uVar8,*(undefined8 *)((long)param_1 + lVar10 + 8));
            lVar1 = lVar10 + -8;
          } while ((uVar4 & 1) != 0);
          puVar6 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_100216fbc:
          *puVar6 = uVar8;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        puVar6 = puVar5 + 1;
        puVar7 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}




undefined8 * FUN_10021705c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_1014721c0;
  operator_new(0x49a0);
  lVar1 = thunk_FUN_1002e5b70();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101472190;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  return param_1;
}




undefined8 * FUN_1002170b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_101472190;
  puVar2 = (uint *)FUN_100341d58(param_1 + 6);
  if ((puVar2 != (uint *)0x0) && (*puVar2 != 0)) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar4 = (ulong)*puVar2 << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001fc8d4();
        break;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_1014721c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1002170b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_101472190;
  puVar2 = (uint *)FUN_100341d58(param_1 + 6);
  if ((puVar2 != (uint *)0x0) && (*puVar2 != 0)) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar4 = (ulong)*puVar2 << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001fc8d4();
        break;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_1014721c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100217170(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002170b8();
  operator_delete(pvVar1);
  return;
}




void FUN_100217184(long param_1,string *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  code *pcStack_68;
  
  std::string::operator=((string *)(param_1 + 0x30),param_2);
  lVar6 = FUN_100341d58((string *)(param_1 + 0x30));
  if ((lVar6 != 0) && ((*(ushort *)(lVar6 + 0xb0) >> 8 & 1) != 0)) {
    FUN_1002e5f7c(*(undefined8 *)(param_1 + 8));
    uVar11 = *(undefined8 *)(param_1 + 8);
    lVar7 = FUN_100343694(lVar6);
    uVar12 = *(undefined8 *)(lVar7 + 8);
    uVar8 = FUN_100343694(lVar6);
    FUN_1002e5f88(uVar11,uVar12,uVar8);
    lVar7 = FUN_100343694(lVar6);
    plVar9 = *(long **)(lVar7 + 0x28);
    lVar7 = *plVar9;
    if (lVar7 != 0) {
      do {
        plVar9 = plVar9 + 1;
        if (*(char *)(lVar7 + 0x34) == '\0') {
          uVar8 = *(undefined8 *)(param_1 + 8);
          uVar1 = *(undefined4 *)(lVar7 + 0x2c);
          uVar2 = *(undefined4 *)(lVar7 + 0x30);
          fVar13 = (float)((char)*(ushort *)(lVar6 + 0xb0) + -1);
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          fVar14 = *(float *)(lVar7 + 8);
          fVar15 = *(float *)(lVar7 + 0xc);
          fVar5 = fVar15;
          if ((*(ushort *)(lVar6 + 0xb0) & 0x200) != 0) {
            fVar5 = 0.0;
          }
          uVar11 = FUN_1000eff68();
          FUN_1002e6048(fVar14 + fVar15 * fVar13,fVar5,uVar8,uVar2,uVar1,uVar11);
        }
        lVar7 = *plVar9;
      } while (lVar7 != 0);
    }
    FUN_1002e6198(*(undefined8 *)(param_1 + 8),
                  (ulong)(long)(short)(*(short *)(lVar6 + 0xb0) << 8) >> 8);
    uVar4 = *(ushort *)(lVar6 + 0xb0);
    if ('\0' < (char)uVar4) {
      uVar10 = *(ulong *)(lVar6 + 0xa8);
      FUN_1002e6318(*(undefined8 *)(param_1 + 8),(long)(short)uVar10,(long)(uVar10 << 0x20) >> 0x30,
                    uVar10 >> 0x20);
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(uint *)(lVar6 + 0xac);
      lVar7 = FUN_10015d3ec();
      FUN_1002e652c(uVar8,uVar3 <= *(uint *)(lVar7 + 0x5454));
      uVar4 = *(ushort *)(lVar6 + 0xb0);
    }
    FUN_1002e6470(*(undefined8 *)(param_1 + 8),uVar4 >> 9 & 1);
    local_80 = 0;
    pcStack_68 = thunk_FUN_100217520;
    lStack_78 = param_1;
    local_70 = param_1;
    FUN_1001fc7d0(lVar6,&local_80);
  }
  return;
}




void FUN_100217334(long param_1)

{
  string *psVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  psVar1 = (string *)(param_1 + 0x30);
  lVar3 = FUN_100341d58(psVar1);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar3 + 0xac);
  lVar4 = FUN_10015d3ec();
  if (*(uint *)(lVar4 + 0x5454) < uVar2) {
    FUN_1002173e0();
    return;
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  std::string::operator=((string *)(param_1 + 0x10),psVar1);
  *(int *)(param_1 + 0x28) = (char)*(undefined2 *)(lVar3 + 0xb0) + 1;
  uVar5 = FUN_10002f320();
  FUN_100031890(uVar5,psVar1);
  FUN_100343810(lVar3);
  return;
}




void FUN_1002173e0(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  void *local_a8 [2];
  undefined1 auStack_98 [7];
  char local_91;
  void *local_90;
  undefined1 local_87;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined8 local_4c;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  uVar1 = FUN_1000eaaec();
  FUN_10001549c(local_a8,uVar1);
  FUN_1001ad598(local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = (void *)0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158388);
  local_4c = 0xffa3781effa4781e;
  local_87 = 1;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}




void FUN_100217508(void)

{
  FUN_1001ad5c0();
  FUN_10002f320();
  FUN_1000319cc();
  return;
}




void FUN_100217520(long param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  void *pvVar16;
  byte *pbVar17;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    bVar7 = *(byte *)(param_1 + 0x47);
    uVar14 = (ulong)bVar7;
    sVar2 = *(size_t *)(param_1 + 0x38);
    if (-1 < (char)bVar7) {
      sVar2 = uVar14;
    }
    bVar8 = *(byte *)(param_1 + 0x27);
    sVar3 = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar8) {
      sVar3 = (ulong)bVar8;
    }
    if (sVar2 == sVar3) {
      pbVar1 = (byte *)(param_1 + 0x10);
      pvVar16 = *(void **)(param_1 + 0x30);
      puVar4 = pvVar16;
      if (-1 < (char)bVar7) {
        puVar4 = (undefined8 *)(param_1 + 0x30);
      }
      pbVar17 = *(byte **)pbVar1;
      if (-1 < (char)bVar8) {
        pbVar17 = pbVar1;
      }
      if ((char)bVar7 < '\0') {
        if ((sVar2 != 0) && (iVar9 = _memcmp(puVar4,pbVar17,sVar2), iVar9 != 0)) {
          return;
        }
      }
      else if (sVar2 != 0) {
        if ((uint)*pbVar17 != ((uint)pvVar16 & 0xff)) {
          return;
        }
        pbVar15 = (byte *)(param_1 + 0x31);
        while( true ) {
          uVar14 = uVar14 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar14 == 0) break;
          bVar7 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          if (bVar7 != *pbVar17) {
            return;
          }
        }
      }
      if (((*(ushort *)(param_2 + 0xb0) >> 8 & 1) == 0) ||
         (*(int *)(param_1 + 0x28) != (int)(char)*(ushort *)(param_2 + 0xb0))) {
        uVar11 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar12 = FUN_1004e0150("MENU_TALENTS_UPGRADE_GENERIC_ERROR",0);
        uVar13 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar11,uVar12,uVar13,param_1,0);
      }
      else {
        FUN_10002f320();
        FUN_100031898();
        plVar5 = (long *)*(long *)(param_2 + 0x78);
        if (-1 < *(char *)(param_2 + 0x8f)) {
          plVar5 = (long *)(param_2 + 0x78);
        }
        plVar6 = (long *)*(long *)(param_2 + 0x90);
        if (-1 < *(char *)(param_2 + 0xa7)) {
          plVar6 = (long *)(param_2 + 0x90);
        }
        lVar10 = FUN_100343694(param_2);
        FUN_100105ed8(plVar5,plVar6,*(undefined4 *)(lVar10 + 0x18),
                      (ulong)(long)(short)(*(short *)(param_2 + 0xb0) << 8) >> 8,
                      *(ulong *)(param_2 + 0xa8) >> 0x20,
                      (long)(*(ulong *)(param_2 + 0xa8) << 0x20) >> 0x30);
      }
      if (*(char *)(param_1 + 0x27) < '\0') {
        **(undefined1 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        *pbVar1 = 0;
        *(undefined1 *)(param_1 + 0x27) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}




void thunk_FUN_100217520(long param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  void *pvVar16;
  byte *pbVar17;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    bVar7 = *(byte *)(param_1 + 0x47);
    uVar14 = (ulong)bVar7;
    sVar2 = *(size_t *)(param_1 + 0x38);
    if (-1 < (char)bVar7) {
      sVar2 = uVar14;
    }
    bVar8 = *(byte *)(param_1 + 0x27);
    sVar3 = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar8) {
      sVar3 = (ulong)bVar8;
    }
    if (sVar2 == sVar3) {
      pbVar1 = (byte *)(param_1 + 0x10);
      pvVar16 = *(void **)(param_1 + 0x30);
      puVar4 = pvVar16;
      if (-1 < (char)bVar7) {
        puVar4 = (undefined8 *)(param_1 + 0x30);
      }
      pbVar17 = *(byte **)pbVar1;
      if (-1 < (char)bVar8) {
        pbVar17 = pbVar1;
      }
      if ((char)bVar7 < '\0') {
        if ((sVar2 != 0) && (iVar9 = _memcmp(puVar4,pbVar17,sVar2), iVar9 != 0)) {
          return;
        }
      }
      else if (sVar2 != 0) {
        if ((uint)*pbVar17 != ((uint)pvVar16 & 0xff)) {
          return;
        }
        pbVar15 = (byte *)(param_1 + 0x31);
        while( true ) {
          uVar14 = uVar14 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar14 == 0) break;
          bVar7 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          if (bVar7 != *pbVar17) {
            return;
          }
        }
      }
      if (((*(ushort *)(param_2 + 0xb0) >> 8 & 1) == 0) ||
         (*(int *)(param_1 + 0x28) != (int)(char)*(ushort *)(param_2 + 0xb0))) {
        uVar11 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar12 = FUN_1004e0150("MENU_TALENTS_UPGRADE_GENERIC_ERROR",0);
        uVar13 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar11,uVar12,uVar13,param_1,0);
      }
      else {
        FUN_10002f320();
        FUN_100031898();
        plVar5 = (long *)*(long *)(param_2 + 0x78);
        if (-1 < *(char *)(param_2 + 0x8f)) {
          plVar5 = (long *)(param_2 + 0x78);
        }
        plVar6 = (long *)*(long *)(param_2 + 0x90);
        if (-1 < *(char *)(param_2 + 0xa7)) {
          plVar6 = (long *)(param_2 + 0x90);
        }
        lVar10 = FUN_100343694(param_2);
        FUN_100105ed8(plVar5,plVar6,*(undefined4 *)(lVar10 + 0x18),
                      (ulong)(long)(short)(*(short *)(param_2 + 0xb0) << 8) >> 8,
                      *(ulong *)(param_2 + 0xa8) >> 0x20,
                      (long)(*(ulong *)(param_2 + 0xa8) << 0x20) >> 0x30);
      }
      if (*(char *)(param_1 + 0x27) < '\0') {
        **(undefined1 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        *pbVar1 = 0;
        *(undefined1 *)(param_1 + 0x27) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}




undefined8 * FUN_1002176f8(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_101472220;
  operator_new(0x290);
  lVar1 = thunk_FUN_1002e683c();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_1014721f0;
  param_1[1] = lVar1;
  lVar1 = FUN_100341d4c();
  local_40 = 0;
  pcStack_28 = thunk_FUN_10021780c;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_100198790(lVar1 + 0x30,&local_40);
  return param_1;
}




undefined8 * thunk_FUN_1002176f8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_101472220;
  operator_new(0x290);
  lVar1 = thunk_FUN_1002e683c();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_1014721f0;
  param_1[1] = lVar1;
  lVar1 = FUN_100341d4c();
  uStack_40 = 0;
  pcStack_28 = thunk_FUN_10021780c;
  puStack_38 = param_1;
  puStack_30 = param_1;
  FUN_100198790(lVar1 + 0x30,&uStack_40);
  return param_1;
}




undefined8 * FUN_10021776c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_1014721f0;
  lVar2 = FUN_100341d4c();
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar3 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100198894();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  *param_1 = &PTR____cxa_pure_virtual_101472220;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_10021776c(void)

{
  FUN_10021776c();
  return;
}




void FUN_1002177f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10021776c();
  operator_delete(pvVar1);
  return;
}




void FUN_10021780c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong local_38;
  undefined8 *local_30;
  code *local_28;
  
  FUN_1002e6940(*(undefined8 *)(param_1 + 8));
  puVar1 = (undefined8 *)FUN_10034bdb4();
  local_38 = 0;
  local_30 = (undefined8 *)0x0;
  plVar4 = (long *)*puVar1;
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      if (*(char *)(lVar2 + 8) != '\0') {
        FUN_100207f1c(&local_38,plVar4);
      }
      plVar4 = plVar4 + 1;
      lVar2 = *plVar4;
    } while (lVar2 != 0);
    uVar3 = local_38 & 0xffffffff;
  }
  local_28 = FUN_10034bef0;
  FUN_1002081c8(local_30,local_30 + uVar3,&local_28);
  puVar1 = local_30;
  if ((int)local_38 != 0) {
    do {
      puVar5 = puVar1 + 1;
      FUN_1002e69bc(*(undefined8 *)(param_1 + 8),*puVar1);
      puVar1 = puVar5;
    } while (puVar5 != local_30 + (local_38 & 0xffffffff));
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x148))();
  if (local_30 != (undefined8 *)0x0) {
    operator_delete__(local_30);
  }
  return;
}




void FUN_1002178d8(long param_1)

{
  FUN_1002e6940(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1002178e0(long param_1)

{
  FUN_1002e6aa4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1002178e8(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  void *local_28 [2];
  char local_11;
  
  if (param_2 != 0) {
    FUN_10021780c();
    return;
  }
  uVar1 = FUN_1000eaaec();
  FUN_10001549c(local_28,uVar1);
  FUN_1001ad598(local_28);
  if (local_11 < '\0') {
    operator_delete(local_28[0]);
  }
  return;
}




void FUN_100217930(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_1002e6940(*(undefined8 *)(param_1 + 8));
  return;
}




void thunk_FUN_10021780c(void)

{
  FUN_10021780c();
  return;
}




undefined8 * FUN_100217944(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101472668;
  operator_new(0x2d68);
  lVar1 = thunk_FUN_1002e6e20();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_101472250;
  param_1[2] = &PTR_FUN_101472298;
  param_1[5] = &PTR_FUN_101472630;
  param_1[6] = 0;
  operator_new(0x10);
  lVar1 = thunk_FUN_1002176f8();
  param_1[6] = lVar1;
  FUN_1002e7484(param_1[1],*(undefined8 *)(lVar1 + 8));
  FUN_10021780c(param_1[6]);
  FUN_1002e7478(param_1[1]);
  FUN_1002179e0(param_1);
  return param_1;
}




void FUN_1002179e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_100341d4c();
  uVar1 = FUN_100342714();
  FUN_100341d4c();
  uVar2 = FUN_1003427c8();
  FUN_1002e7424(uVar3,uVar1,uVar2);
  return;
}




undefined8 * thunk_FUN_100217944(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101472668;
  operator_new(0x2d68);
  lVar1 = thunk_FUN_1002e6e20();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_101472250;
  param_1[2] = &PTR_FUN_101472298;
  param_1[5] = &PTR_FUN_101472630;
  param_1[6] = 0;
  operator_new(0x10);
  lVar1 = thunk_FUN_1002176f8();
  param_1[6] = lVar1;
  FUN_1002e7484(param_1[1],*(undefined8 *)(lVar1 + 8));
  FUN_10021780c(param_1[6]);
  FUN_1002e7478(param_1[1]);
  FUN_1002179e0(param_1);
  return param_1;
}




undefined8 * FUN_100217a20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472250;
  param_1[2] = &PTR_FUN_101472298;
  param_1[5] = &PTR_FUN_101472630;
  FUN_1002178d8(param_1[6]);
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
    param_1[6] = 0;
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_101472668;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_100217a20(void)

{
  FUN_100217a20();
  return;
}




void FUN_100217ab0(long param_1)

{
  FUN_100217a20(param_1 + -0x10);
  return;
}




void FUN_100217ab8(long param_1)

{
  FUN_100217a20(param_1 + -0x28);
  return;
}




void FUN_100217ac0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100217a20();
  operator_delete(pvVar1);
  return;
}




void FUN_100217ad4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100217a20(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100217aec(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100217a20(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002179e0(void)

{
  FUN_1002179e0();
  return;
}




void FUN_100217b08(long param_1)

{
  FUN_1002179e0(param_1 + -0x10);
  return;
}




undefined8 FUN_100217b10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_100217b18(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




undefined8 FUN_100217b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




char * FUN_100217b28(void)

{
  return "TALENTS.*";
}




void FUN_100217b34(void)

{
  FUN_1004e0150("MENU_HERO_TAB_NAME_TALENTS",0);
  return;
}




char * FUN_100217b44(void)

{
  return "TALENTS.*";
}




void FUN_100217b50(void)

{
  FUN_1004e0150("MENU_HERO_TAB_NAME_TALENTS",0);
  return;
}




undefined8 * FUN_100217b60(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_1014726c8;
  operator_new(0x7a0);
  lVar1 = thunk_FUN_1002e79a4();
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  *param_1 = &PTR_FUN_101472690;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_100217bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472690;
  FUN_10001629c(param_1 + 2,1);
  *param_1 = &PTR____cxa_pure_virtual_1014726c8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_100217bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472690;
  FUN_10001629c(param_1 + 2,1);
  *param_1 = &PTR____cxa_pure_virtual_1014726c8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100217c0c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100217bb0();
  operator_delete(pvVar1);
  return;
}




void FUN_100217c20(long param_1,undefined8 param_2)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *local_80 [2];
  char local_69;
  undefined1 auStack_68 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_1004d2698(auStack_68,"portrait_%s");
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_10001549c(local_80,auStack_68);
  FUN_1002e7ce4(uVar3,local_80);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  lVar1 = FUN_10034bf64(**(undefined8 **)(param_1 + 0x20));
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_1004e0150(*(undefined8 *)(lVar1 + 0x28),0);
  FUN_1002e7cdc(uVar4,uVar3);
  FUN_10001629c(param_1 + 0x10,0);
  uVar3 = FUN_100341d4c();
  puVar2 = (uint *)FUN_100342508(uVar3,**(undefined8 **)(param_1 + 0x20));
  if ((puVar2 != (uint *)0x0) && (*puVar2 != 0)) {
    lVar1 = 0;
    uVar5 = 0;
    do {
      FUN_10001617c(param_1 + 0x10,*(long *)(puVar2 + 2) + lVar1);
      uVar5 = uVar5 + 1;
      lVar1 = lVar1 + 0x18;
    } while (uVar5 < *puVar2);
  }
  local_80[0] = FUN_100341d78;
  FUN_1000a7314(*(long *)(param_1 + 0x18),
                *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18,local_80);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_100217d70(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_10034bf64(**(undefined8 **)(param_1 + 0x20));
  if (*(char **)(lVar3 + 0x20) == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    cVar1 = **(char **)(lVar3 + 0x20);
    if (cVar1 == '\0') {
      cVar1 = -1;
    }
    iVar2 = (int)cVar1;
  }
  return iVar2;
}




void FUN_100217dac(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10064ef04(*(undefined8 *)(param_1 + 8));
  if ((iVar1 != 0) && ((*(byte *)(*(long *)(param_1 + 8) + 0x84) >> 2 & 1) != 0)) {
    FUN_100217df0(param_1);
    return;
  }
  return;
}




void FUN_100217df0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_100341d4c();
      lVar2 = *(long *)(param_1 + 0x18) + lVar3;
      if (*(char *)(lVar2 + 0x17) < '\0') {
        lVar2 = *(long *)(*(long *)(param_1 + 0x18) + lVar3);
      }
      FUN_100342c44(uVar1,lVar2);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  return;
}




void FUN_100217e54(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18) + (param_3 & 0xffffffff) * 0x18;
  lVar1 = FUN_100341d58(lVar2);
  if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0xb0) >> 8 & 1) != 0)) {
    FUN_100342e24();
    FUN_1000ea998(0x44e10000,0x44960000,lVar2,1,0);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_100217eb8(long param_1)

{
  FUN_1002e7cfc(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  return;
}




undefined8 * FUN_100217ec8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong uVar8;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar9 [16];
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  while( true ) {
    auVar1 = auVar9;
    puVar6 = auVar1._8_8_;
    puVar3 = auVar1._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar2._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *puVar3 = &PTR____cxa_pure_virtual_101472728;
    operator_new(0x21f0);
    lVar4 = thunk_FUN_1002e8374();
    *(undefined8 **)(lVar4 + 0xd8) = puVar3;
    *puVar3 = &PTR_FUN_101472700;
    puVar3[1] = lVar4;
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) break;
    unaff_x21 = puVar6[1];
    if (unaff_x21 < 0xfffffffffffffff0) {
      puVar7 = (undefined8 *)*puVar6;
      goto LAB_100217f30;
    }
    unaff_x30 = FUN_100217fa4;
    auVar9 = FUN_100218088();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    auVar2 = auVar1;
  }
  unaff_x21 = (ulong)*(byte *)((long)puVar6 + 0x17);
  puVar7 = puVar6;
LAB_100217f30:
  if (unaff_x21 < 0x17) {
    puVar5 = puVar3 + 2;
    *(char *)((long)puVar3 + 0x27) = (char)unaff_x21;
    if (unaff_x21 == 0) goto LAB_100217f78;
  }
  else {
    uVar8 = unaff_x21 + 0x10 & 0xfffffffffffffff0;
    puVar5 = operator_new(uVar8);
    puVar3[3] = unaff_x21;
    puVar3[4] = uVar8 | 0x8000000000000000;
    puVar3[2] = puVar5;
  }
  _memcpy(puVar5,puVar7,unaff_x21);
LAB_100217f78:
  *(undefined1 *)((long)puVar5 + unaff_x21) = 0;
  FUN_1002e85c8(puVar3[1],*(undefined4 *)(puVar6 + 3));
  return puVar3;
}




undefined8 * FUN_100217fa4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar8;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar9 [16];
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  while( true ) {
    auVar1 = auVar9;
    puVar6 = auVar1._8_8_;
    puVar5 = auVar1._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar2._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *puVar5 = &PTR____cxa_pure_virtual_101472728;
    operator_new(0x21f0);
    lVar3 = thunk_FUN_1002e8374();
    *(undefined8 **)(lVar3 + 0xd8) = puVar5;
    *puVar5 = &PTR_FUN_101472700;
    puVar5[1] = lVar3;
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) break;
    unaff_x21 = puVar6[1];
    if (unaff_x21 < 0xfffffffffffffff0) {
      puVar7 = (undefined8 *)*puVar6;
      goto LAB_100217f30;
    }
    unaff_x30 = FUN_100217fa4;
    auVar9 = FUN_100218088();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    auVar2 = auVar1;
  }
  unaff_x21 = (ulong)*(byte *)((long)puVar6 + 0x17);
  puVar7 = puVar6;
LAB_100217f30:
  if (unaff_x21 < 0x17) {
    puVar4 = puVar5 + 2;
    *(char *)((long)puVar5 + 0x27) = (char)unaff_x21;
    if (unaff_x21 == 0) goto LAB_100217f78;
  }
  else {
    uVar8 = unaff_x21 + 0x10 & 0xfffffffffffffff0;
    puVar4 = operator_new(uVar8);
    puVar5[3] = unaff_x21;
    puVar5[4] = uVar8 | 0x8000000000000000;
    puVar5[2] = puVar4;
  }
  _memcpy(puVar4,puVar7,unaff_x21);
LAB_100217f78:
  *(undefined1 *)((long)puVar4 + unaff_x21) = 0;
  FUN_1002e85c8(puVar5[1],*(undefined4 *)(puVar6 + 3));
  return puVar5;
}




void FUN_100217fa8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10002f320();
  FUN_100031828(uVar1,param_1 + 0x10);
  return;
}




undefined8 * FUN_100217fcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472700;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_101472728;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_10021802c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472700;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_101472728;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100218088(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_100218094(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014727b0;
  operator_new(0xfd8);
  lVar1 = thunk_FUN_1002e8f08();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_1004f0a20(param_1 + 2);
  *param_1 = &PTR_FUN_101472750;
  param_1[2] = &PTR_FUN_101472780;
  FUN_1002180f8(param_1);
  return param_1;
}




void FUN_1002180f8(long param_1)

{
  uint *puVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_100307fe8();
  puVar1 = (uint *)thunk_FUN_100308268();
  uVar4 = (ulong)*puVar1;
  if (*puVar1 == 0) {
    return;
  }
  uVar5 = 0;
  bVar3 = false;
  do {
    while (plVar2 = *(long **)(*(long *)(puVar1 + 2) + uVar5 * 8), (int)plVar2[1] != 2) {
      uVar5 = uVar5 + 1;
      if (uVar4 <= uVar5) {
        if (!bVar3) {
          return;
        }
        goto LAB_100218188;
      }
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 8),thunk_FUN_1002e905c);
    uVar4 = (ulong)*puVar1;
    uVar5 = uVar5 + 1;
    bVar3 = true;
  } while (uVar5 < uVar4);
LAB_100218188:
  FUN_1002e90b0(*(undefined8 *)(param_1 + 8),0);
  return;
}




undefined8 * thunk_FUN_100218094(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014727b0;
  operator_new(0xfd8);
  lVar1 = thunk_FUN_1002e8f08();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_1004f0a20(param_1 + 2);
  *param_1 = &PTR_FUN_101472750;
  param_1[2] = &PTR_FUN_101472780;
  FUN_1002180f8(param_1);
  return param_1;
}




undefined8 * FUN_1002181b4(undefined8 *param_1)

{
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR_FUN_1014727b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100218200(long param_1)

{
  FUN_1004f0a9c();
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_1014727b0;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_100218244(undefined8 *param_1)

{
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR_FUN_1014727b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_10021828c(long param_1)

{
  FUN_100218244(param_1 + -0x10);
  return;
}




void FUN_100218294(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2367c,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_1002182e0(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2367c,0);
  FUN_100644c34(*(undefined8 *)(param_1 + -8),auStack_40,1);
  return;
}




void FUN_10021832c(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2367c,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_100218378(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2367c,0);
  FUN_100644c34(*(undefined8 *)(param_1 + -8),auStack_40,1);
  return;
}




undefined8 * FUN_1002183c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014727b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100218408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014727b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_10021844c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101472bd8;
  operator_new(3000);
  lVar1 = thunk_FUN_1002e90bc();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1002184bc_1014727d0;
  param_1[2] = &PTR_FUN_101472808;
  param_1[5] = &PTR_FUN_101472ba0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}




undefined8 * thunk_FUN_10021844c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101472bd8;
  operator_new(3000);
  lVar1 = thunk_FUN_1002e90bc();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1002184bc_1014727d0;
  param_1[2] = &PTR_FUN_101472808;
  param_1[5] = &PTR_FUN_101472ba0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}




undefined8 * FUN_1002184bc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002184bc_1014727d0;
  param_1[2] = &PTR_FUN_101472808;
  param_1[5] = &PTR_FUN_101472ba0;
  FUN_100156080(param_1 + 8,1);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_101472bd8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1002184bc(void)

{
  FUN_1002184bc();
  return;
}




void FUN_100218548(long param_1)

{
  FUN_1002184bc(param_1 + -0x10);
  return;
}




void FUN_100218550(long param_1)

{
  FUN_1002184bc(param_1 + -0x28);
  return;
}




void FUN_100218558(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002184bc();
  operator_delete(pvVar1);
  return;
}




void FUN_10021856c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002184bc(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100218584(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002184bc(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10021859c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10015d3ec();
  FUN_100169cec(lVar1 + 0x18);
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1002185c8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10015d3ec();
  FUN_100169cec(lVar1 + 0x18);
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_1002185f4(long param_1,long param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int local_34;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_100156080(param_1 + 0x40,0);
  piVar2 = (int *)(param_2 + 0x48);
  local_34 = 0;
  if (0 < *piVar2) {
    do {
      uVar1 = FUN_100218e7c(piVar2,&local_34);
      FUN_10021868c((undefined4 *)(param_1 + 0x30),&local_34,uVar1);
      local_34 = local_34 + 1;
    } while (local_34 < *piVar2);
  }
  FUN_100218768(param_1);
  return;
}




void FUN_10021868c(uint *param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint local_34;
  
  local_34 = FUN_100015208(0,0,*param_2);
  lVar3 = *(long *)(param_1 + 2);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar2 * (ulong)local_34 >> 0x20;
    if (0 < (int)((ulong)uVar2 * (ulong)local_34 >> 0x20)) {
      do {
        if (*(uint *)(lVar3 + uVar6 * 4) <= local_34) goto LAB_1002186f4;
        iVar4 = (int)uVar6;
        uVar5 = iVar4 - 1;
        uVar6 = (ulong)uVar5;
      } while (uVar5 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_1002186f4:
    uVar5 = (uint)uVar6;
    if ((int)(uint)uVar6 < (int)uVar2) {
      do {
        uVar5 = (uint)uVar6;
        if (local_34 <= *(uint *)(lVar3 + uVar6 * 4)) break;
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        uVar5 = uVar2;
      } while (uVar2 != uVar1);
    }
  }
  FUN_10011a5f4(param_1,lVar3 + (long)(int)uVar5 * 4,&local_34,&stack0xffffffffffffffd0);
  FUN_1002188d8(param_1 + 4,*(long *)(param_1 + 6) + (long)(int)uVar5 * 0x90,param_3,param_3 + 0x90)
  ;
  return;
}




void FUN_100218768(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined1 auStack_48 [8];
  void *local_40;
  int local_34;
  
  FUN_1002e9364(*(undefined8 *)(param_1 + 8));
  local_34 = *(int *)(param_1 + 0x30);
  while (0 < local_34) {
    local_34 = local_34 + -1;
    lVar1 = FUN_100218e7c((int *)(param_1 + 0x30),&local_34);
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_1000f0ec8(auStack_48,*(undefined4 *)(lVar1 + 0x78),0,1,0);
    FUN_1004e3170(auStack_58,lVar1 + 0x18);
    FUN_1002e93e4(uVar2,auStack_48,auStack_58,*(undefined4 *)(lVar1 + 0x80),
                  *(undefined4 *)(lVar1 + 0x7c),*(undefined4 *)(lVar1 + 0x88),
                  *(undefined4 *)(lVar1 + 0x84));
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
  }
  return;
}




void FUN_10021882c(long param_1)

{
  FUN_1002185f4(param_1 + -0x10);
  return;
}




void FUN_100218834(void)

{
  FUN_1004e0150("INVENTORY_TROPHIES_KEY_TAB_TITLE",0);
  return;
}




void FUN_100218844(void)

{
  FUN_1004e0150("INVENTORY_TROPHIES_KEY_TAB_TITLE",0);
  return;
}




undefined8 * FUN_100218854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472bd8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100218898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472bd8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




string * FUN_1002188d8(uint *param_1,string *param_2,string *param_3,string *param_4)

{
  long lVar1;
  string *psVar2;
  string *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  string *psVar11;
  long lVar12;
  string *psVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_3 != param_4) {
    uVar10 = ((long)param_4 - (long)param_3 >> 4) * -0x71c71c71c71c71c7;
    psVar13 = *(string **)(param_1 + 2);
    uVar15 = ((long)param_2 - (long)psVar13 >> 4) * -0x71c71c71c71c71c7;
    uVar4 = *param_1;
    uVar14 = (ulong)uVar4;
    uVar5 = param_1[1];
    uVar9 = (uint)uVar10;
    if (uVar5 - uVar4 < uVar9) {
      uVar4 = uVar4 + uVar9;
      uVar9 = 0;
      if (uVar5 != 0xffffffff) {
        uVar9 = uVar5 + (~uVar5 | 0xfffffff0) + 0x11;
      }
      if (uVar5 < 0x20) {
        uVar9 = uVar5 << 1;
      }
      uVar5 = uVar4;
      if (uVar4 <= uVar9) {
        uVar5 = uVar9;
      }
      pvVar8 = operator_new__((ulong)uVar5 * 0x90);
      if (psVar13 != param_2) {
        lVar12 = 0;
        do {
          lVar1 = (long)pvVar8 + lVar12;
          psVar11 = psVar13 + lVar12;
          FUN_10003330c(lVar1,psVar11);
          FUN_10003330c(lVar1 + 0x18,psVar11 + 0x18);
          FUN_10003330c(lVar1 + 0x30,psVar11 + 0x30);
          FUN_10003330c(lVar1 + 0x48,psVar11 + 0x48);
          FUN_10003330c(lVar1 + 0x60,psVar11 + 0x60);
          uVar18 = *(undefined8 *)(psVar11 + 0x80);
          uVar17 = *(undefined8 *)(psVar11 + 0x78);
          *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(psVar11 + 0x88);
          *(undefined8 *)(lVar1 + 0x80) = uVar18;
          *(undefined8 *)(lVar1 + 0x78) = uVar17;
          lVar12 = lVar12 + 0x90;
        } while (psVar13 + lVar12 != param_2);
      }
      lVar12 = 0;
      uVar14 = uVar15 & 0xffffffff;
      do {
        lVar1 = (long)pvVar8 + lVar12 + uVar14 * 0x90;
        psVar13 = param_3 + lVar12;
        FUN_10003330c(lVar1,psVar13);
        FUN_10003330c(lVar1 + 0x18,psVar13 + 0x18);
        FUN_10003330c(lVar1 + 0x30,psVar13 + 0x30);
        FUN_10003330c(lVar1 + 0x48,psVar13 + 0x48);
        FUN_10003330c(lVar1 + 0x60,psVar13 + 0x60);
        uVar17 = *(undefined8 *)(psVar13 + 0x78);
        *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(psVar13 + 0x80);
        *(undefined8 *)(lVar1 + 0x78) = uVar17;
        *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(psVar13 + 0x88);
        lVar12 = lVar12 + 0x90;
      } while (param_3 + lVar12 != param_4);
      psVar13 = (string *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x90);
      if (psVar13 != param_2) {
        lVar12 = 0;
        do {
          lVar1 = (long)pvVar8 + lVar12 + (uVar10 & 0xffffffff) * 0x90 + uVar14 * 0x90;
          psVar11 = param_2 + lVar12;
          FUN_10003330c(lVar1,psVar11);
          FUN_10003330c(lVar1 + 0x18,psVar11 + 0x18);
          FUN_10003330c(lVar1 + 0x30,psVar11 + 0x30);
          FUN_10003330c(lVar1 + 0x48,psVar11 + 0x48);
          FUN_10003330c(lVar1 + 0x60,psVar11 + 0x60);
          uVar17 = *(undefined8 *)(psVar11 + 0x78);
          *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(psVar11 + 0x80);
          *(undefined8 *)(lVar1 + 0x78) = uVar17;
          *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(psVar11 + 0x88);
          lVar12 = lVar12 + 0x90;
        } while (param_2 + lVar12 != psVar13);
      }
      FUN_100156080(param_1,1);
      *(void **)(param_1 + 2) = pvVar8;
      *param_1 = uVar4;
      param_1[1] = uVar5;
    }
    else {
      psVar11 = psVar13 + uVar14 * 0x90;
      uVar16 = ((long)psVar11 - (long)param_2 >> 4) * -0x71c71c71c71c71c7;
      if (uVar9 < (uint)uVar16) {
        uVar10 = uVar10 & 0xffffffff;
        if (uVar10 != 0) {
          lVar12 = 0;
          do {
            psVar13 = psVar11 + lVar12;
            psVar2 = psVar11 + lVar12 + uVar10 * -0x90;
            FUN_10003330c(psVar13,psVar2);
            FUN_10003330c(psVar13 + 0x18,psVar2 + 0x18);
            FUN_10003330c(psVar13 + 0x30,psVar2 + 0x30);
            FUN_10003330c(psVar13 + 0x48,psVar2 + 0x48);
            FUN_10003330c(psVar13 + 0x60,psVar2 + 0x60);
            uVar18 = *(undefined8 *)(psVar2 + 0x80);
            uVar17 = *(undefined8 *)(psVar2 + 0x78);
            *(undefined4 *)(psVar13 + 0x88) = *(undefined4 *)(psVar2 + 0x88);
            *(undefined8 *)(psVar13 + 0x80) = uVar18;
            *(undefined8 *)(psVar13 + 0x78) = uVar17;
            lVar12 = lVar12 + 0x90;
          } while (uVar10 * 0x90 - lVar12 != 0);
          uVar14 = (ulong)*param_1;
          psVar13 = *(string **)(param_1 + 2);
        }
        psVar11 = psVar13 + ((uVar14 - uVar10) * 0x90 - (long)param_2);
        if (psVar11 != (string *)0x0) {
          lVar12 = 0;
          do {
            lVar7 = lVar12 + uVar10 * 0x90;
            lVar1 = lVar12 + (uVar14 - uVar10) * 0x90;
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x90),psVar13 + lVar1 + -0x90);
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x78),psVar13 + lVar1 + -0x78);
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x60),psVar13 + lVar1 + -0x60);
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x48),psVar13 + lVar1 + -0x48);
            std::string::operator=
                      (param_2 + (long)(psVar11 + lVar7 + -0x30),psVar13 + lVar1 + -0x30);
            uVar6 = *(undefined4 *)(psVar13 + lVar1 + -8);
            uVar17 = *(undefined8 *)(psVar13 + lVar1 + -0x18);
            *(undefined8 *)(param_2 + (long)(psVar11 + lVar7 + -0x10)) =
                 *(undefined8 *)(psVar13 + lVar1 + -0x10);
            *(undefined8 *)(param_2 + (long)(psVar11 + lVar7 + -0x18)) = uVar17;
            *(undefined4 *)(param_2 + (long)(psVar11 + lVar7 + -8)) = uVar6;
            lVar12 = lVar12 + -0x90;
          } while ((string *)-lVar12 != psVar11);
        }
        do {
          std::string::operator=(param_2,param_3);
          std::string::operator=(param_2 + 0x18,param_3 + 0x18);
          std::string::operator=(param_2 + 0x30,param_3 + 0x30);
          std::string::operator=(param_2 + 0x48,param_3 + 0x48);
          std::string::operator=(param_2 + 0x60,param_3 + 0x60);
          uVar6 = *(undefined4 *)(param_3 + 0x88);
          uVar17 = *(undefined8 *)(param_3 + 0x78);
          *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_3 + 0x80);
          *(undefined8 *)(param_2 + 0x78) = uVar17;
          *(undefined4 *)(param_2 + 0x88) = uVar6;
          param_3 = param_3 + 0x90;
          param_2 = param_2 + 0x90;
        } while (param_3 != param_4);
      }
      else {
        if (psVar11 != param_2) {
          psVar13 = param_2;
          do {
            psVar2 = psVar13 + ((uVar10 & 0xffffffff) * 8 + (uVar10 & 0xffffffff)) * 0x10;
            FUN_10003330c(psVar2,psVar13);
            FUN_10003330c(psVar2 + 0x18,psVar13 + 0x18);
            FUN_10003330c(psVar2 + 0x30,psVar13 + 0x30);
            FUN_10003330c(psVar2 + 0x48,psVar13 + 0x48);
            FUN_10003330c(psVar2 + 0x60,psVar13 + 0x60);
            uVar18 = *(undefined8 *)(psVar13 + 0x80);
            uVar17 = *(undefined8 *)(psVar13 + 0x78);
            *(undefined4 *)(psVar2 + 0x88) = *(undefined4 *)(psVar13 + 0x88);
            *(undefined8 *)(psVar2 + 0x80) = uVar18;
            *(undefined8 *)(psVar2 + 0x78) = uVar17;
            psVar13 = psVar13 + 0x90;
          } while (psVar13 != psVar11);
          uVar14 = (ulong)*param_1;
          psVar13 = *(string **)(param_1 + 2);
        }
        uVar16 = uVar16 & 0xffffffff;
        psVar11 = param_3 + uVar16 * 0x90;
        if (psVar11 != param_4) {
          lVar12 = 0;
          do {
            psVar2 = psVar13 + lVar12 + uVar14 * 0x90;
            psVar3 = psVar11 + lVar12;
            FUN_10003330c(psVar2,psVar3);
            FUN_10003330c(psVar2 + 0x18,psVar3 + 0x18);
            FUN_10003330c(psVar2 + 0x30,psVar3 + 0x30);
            FUN_10003330c(psVar2 + 0x48,psVar3 + 0x48);
            FUN_10003330c(psVar2 + 0x60,psVar3 + 0x60);
            uVar18 = *(undefined8 *)(psVar3 + 0x80);
            uVar17 = *(undefined8 *)(psVar3 + 0x78);
            *(undefined4 *)(psVar2 + 0x88) = *(undefined4 *)(psVar3 + 0x88);
            *(undefined8 *)(psVar2 + 0x80) = uVar18;
            *(undefined8 *)(psVar2 + 0x78) = uVar17;
            lVar12 = lVar12 + 0x90;
          } while (psVar11 + lVar12 != param_4);
        }
        if (uVar16 != 0) {
          do {
            std::string::operator=(param_2,param_3);
            std::string::operator=(param_2 + 0x18,param_3 + 0x18);
            std::string::operator=(param_2 + 0x30,param_3 + 0x30);
            std::string::operator=(param_2 + 0x48,param_3 + 0x48);
            std::string::operator=(param_2 + 0x60,param_3 + 0x60);
            uVar6 = *(undefined4 *)(param_3 + 0x88);
            uVar17 = *(undefined8 *)(param_3 + 0x78);
            *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_3 + 0x80);
            *(undefined8 *)(param_2 + 0x78) = uVar17;
            *(undefined4 *)(param_2 + 0x88) = uVar6;
            param_3 = param_3 + 0x90;
            param_2 = param_2 + 0x90;
          } while (param_3 != psVar11);
        }
      }
      *param_1 = *param_1 + uVar9;
      pvVar8 = *(void **)(param_1 + 2);
    }
    param_2 = (string *)((long)pvVar8 + (uVar15 & 0xffffffff) * 0x90);
  }
  return param_2;
}




long FUN_100218e7c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)uVar1 * (ulong)uVar3;
    uVar6 = uVar5 >> 0x20;
    if (0 < (int)(uVar5 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar6 * 4) <= uVar3) goto LAB_100218ed4;
        iVar4 = (int)uVar6;
        uVar2 = iVar4 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_100218ed4:
    uVar5 = uVar6;
    if ((int)uVar6 < (int)uVar1) {
      do {
        uVar5 = uVar6;
        if (uVar3 <= *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4)) break;
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar2;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != uVar2);
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 0x90;
}




undefined8 * FUN_100218f18(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101472cc0;
  operator_new(0x1640);
  lVar1 = thunk_FUN_1002ea128();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_100129f90(param_1 + 2);
  *param_1 = &PTR_FUN_101472bf8;
  param_1[2] = &PTR_FUN_101472c80;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}




undefined8 * thunk_FUN_100218f18(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101472cc0;
  operator_new(0x1640);
  lVar1 = thunk_FUN_1002ea128();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_100129f90(param_1 + 2);
  *param_1 = &PTR_FUN_101472bf8;
  param_1[2] = &PTR_FUN_101472c80;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}




undefined8 * FUN_100218f80(undefined8 *param_1)

{
  FUN_10012a00c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_101472cc0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100218fcc(long param_1)

{
  FUN_10012a00c();
  *(undefined ***)(param_1 + -0x10) = &PTR____cxa_pure_virtual_101472cc0;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_100219010(undefined8 *param_1)

{
  FUN_10012a00c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_101472cc0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100219058(long param_1)

{
  FUN_100219010(param_1 + -0x10);
  return;
}




void FUN_100219060(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1002ea2b8(*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_1002eb1c0(uVar2);
  FUN_1002eab98(uVar2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = thunk_FUN_10052bc30();
  FUN_1002eb238(uVar2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_100129ed0();
  FUN_1002eb320(uVar2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_100129e40();
  FUN_1002eb364(uVar2,uVar1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}




void FUN_1002190e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_1002190e8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  void *pvVar5;
  ulong uVar6;
  void *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  char local_79;
  undefined8 ***local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_100126b8c();
  if (((iVar1 == 0) || (iVar1 = FUN_10015d3f8(), iVar1 == 0)) ||
     (((iVar1 = FUN_100036694(), iVar1 == 0 || (uVar2 = FUN_100129b4c(), (uVar2 & 1) == 0)) &&
      (lVar3 = FUN_10015d3ec(), *(char *)(lVar3 + 0x567a) == '\0')))) goto LAB_100219280;
  lVar3 = FUN_10015d3ec();
  if ((char)*(byte *)(lVar3 + 0x54d7) < '\0') {
    uVar2 = *(ulong *)(lVar3 + 0x54c8);
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_100219920();
    }
    pvVar5 = *(void **)(lVar3 + 0x54c0);
  }
  else {
    pvVar5 = (void *)(lVar3 + 0x54c0);
    uVar2 = (ulong)*(byte *)(lVar3 + 0x54d7);
  }
  if (uVar2 < 0x17) {
    ppppuVar4 = &local_70;
    uStack_60 = CONCAT17((char)uVar2,(undefined7)uStack_60);
    if (uVar2 != 0) goto LAB_1002191ac;
  }
  else {
    uVar6 = uVar2 + 0x10 & 0xfffffffffffffff0;
    ppppuVar4 = operator_new(uVar6);
    uStack_60 = uVar6 | 0x8000000000000000;
    local_70 = ppppuVar4;
    local_68 = uVar2;
LAB_1002191ac:
    _memcpy(ppppuVar4,pvVar5,uVar2);
  }
  *(undefined1 *)((long)ppppuVar4 + uVar2) = 0;
  iVar1 = FUN_100036694();
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar1 = FUN_10034cb58();
      if (iVar1 == 0) {
        FUN_10030884c(*(undefined8 *)(param_1 + 0x28));
      }
      goto LAB_100219200;
    }
  }
  else {
    iVar1 = FUN_10034cb58();
    if (iVar1 == 0) {
      FUN_10034f06c();
    }
LAB_100219200:
    FUN_1004d2698(&local_58,"_%u");
    local_79 = '\x10';
    uStack_88 = uStack_50;
    local_90 = local_58;
    local_80 = 0;
    std::string::append((char *)&local_70,(ulong)&local_90);
    if (local_79 < '\0') {
      operator_delete(local_90);
    }
  }
  ppppuVar4 = (undefined8 ****)local_70;
  if (-1 < (long)uStack_60) {
    ppppuVar4 = &local_70;
  }
  FUN_100129c58(ppppuVar4);
  FUN_1002eb238(*(undefined8 *)(param_1 + 8),1);
  if ((long)uStack_60 < 0) {
    operator_delete(local_70);
  }
LAB_100219280:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1002192b8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129c70();
    FUN_1002eb238(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_1002192f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = thunk_FUN_10052bc30();
  FUN_1002eb238(uVar2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_100129ed0();
  FUN_1002eb320(uVar2,uVar1);
  FUN_100219350(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_100129e40();
  FUN_1002eb364(uVar2,uVar1);
  return;
}




void FUN_100219350(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_188 [240];
  undefined8 local_98 [2];
  undefined4 local_88 [16];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  iVar2 = FUN_100126b8c();
  if (iVar2 != 0) {
    uVar3 = FUN_1002eb5b4(*(undefined8 *)(param_1 + 8),local_88,0x10);
    if (uVar3 != 0) {
      uVar7 = (ulong)uVar3;
      puVar9 = local_88;
      do {
        lVar4 = FUN_100129b00(*puVar9);
        if ((lVar4 == 0) || (*(char *)(lVar4 + 0x21) == '\0')) {
          FUN_1002eb534(*(undefined8 *)(param_1 + 8),*puVar9);
        }
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar4 = 0;
    do {
      FUN_1004e313c(auStack_188 + lVar4);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x100);
    uVar3 = FUN_100129b30(auStack_188,0x10);
    if (uVar3 != 0) {
      uVar7 = (ulong)uVar3;
      puVar8 = auStack_188;
      do {
        lVar4 = FUN_100129ae8(puVar8);
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x21) != '\0')) &&
           (uVar5 = FUN_100129b18(lVar4), (uVar5 & 1) == 0)) {
          uVar5 = FUN_1002eb594(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar4 + 0x18));
          bVar1 = *(char *)(lVar4 + 0x20) != '\0';
          if ((uVar5 & 1) == 0) {
            FUN_1002eb3e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar4 + 0x18),lVar4,bVar1);
          }
          else {
            FUN_1002eb684(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar4 + 0x18),bVar1);
          }
        }
        puVar8 = puVar8 + 0x10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar4 = 0;
    do {
      pvVar6 = *(void **)((long)local_98 + lVar4 + 8);
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
        *(undefined8 *)((long)local_98 + lVar4) = 0;
        *(undefined8 *)((long)local_98 + lVar4 + 8) = 0;
      }
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != -0x100);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002194c8(long param_1)

{
  FUN_1002eaaec(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1002194d0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_10052bc30();
    if (iVar1 != 0) {
      FUN_1002192b8(param_1);
    }
    FUN_100129ad4();
    return;
  }
  return;
}




void FUN_100219510(long param_1)

{
  FUN_100219350();
                    /* WARNING: Could not recover jumptable at 0x000100219538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}




void FUN_10021953c(long param_1)

{
  FUN_100219350(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x000100219568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -8) + 0x90))();
  return;
}




void FUN_10021956c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_100129b18(param_2);
  if (iVar1 == 0) {
    FUN_100219350(param_1);
  }
  else {
    uVar2 = FUN_100129c44();
    if ((uVar2 & 1) == 0) {
      FUN_1002eaaec(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_1002192f4(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002195c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}




void FUN_1002195c8(long param_1)

{
  FUN_10021956c(param_1 + -0x10);
  return;
}




void thunk_FUN_100219350(void)

{
  FUN_100219350();
  return;
}




void FUN_1002195d4(long param_1)

{
  FUN_100219350(param_1 + -0x10);
  return;
}




void FUN_1002195dc(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_100126b8c();
  if ((iVar1 != 0) && (uVar3 = FUN_100129c44(), (uVar3 & 1) == 0)) {
    FUN_1002192f4(param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_1002eb1d8(uVar4);
    FUN_1002eac18(uVar4,uVar2 ^ 1);
    return;
  }
  iVar1 = FUN_100126b8c();
  if (((iVar1 == 0) || (iVar1 = FUN_100129c44(), iVar1 == 0)) ||
     (iVar1 = FUN_100129b4c(), iVar1 == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0;
  }
  else {
    FUN_1002192f4(param_1);
    FUN_1002eac18(*(undefined8 *)(param_1 + 8),0);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_1002eb1c0(uVar4);
    uVar2 = uVar2 ^ 1;
  }
  FUN_1002eab98(uVar4,uVar2);
  return;
}




void FUN_10021967c(long param_1)

{
  int iVar1;
  
  FUN_1002190e8();
  iVar1 = FUN_1002eb1cc(*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    FUN_1002eab58(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_1002196bc(long param_1)

{
  int iVar1;
  
  FUN_1002192b8();
  iVar1 = FUN_1002eb1cc(*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    FUN_1002eab58(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_1002196fc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129e88(1);
    FUN_1002eb320(*(undefined8 *)(param_1 + 8),1);
    iVar1 = FUN_1002eb1cc(*(undefined8 *)(param_1 + 8));
    if (iVar1 != 0) {
      FUN_1002eab58(*(undefined8 *)(param_1 + 8),0);
      return;
    }
  }
  return;
}




void FUN_100219754(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129e88(0);
    FUN_1002eb320(*(undefined8 *)(param_1 + 8),0);
    iVar1 = FUN_1002eb1cc(*(undefined8 *)(param_1 + 8));
    if (iVar1 != 0) {
      FUN_1002eab58(*(undefined8 *)(param_1 + 8),0);
      return;
    }
  }
  return;
}




void FUN_1002197ac(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100219350(param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_1002eb1cc(uVar3);
    FUN_1002eab58(uVar3,uVar2 ^ 1);
    return;
  }
  return;
}




void FUN_1002197f8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129e28(1);
    FUN_1002eb364(*(undefined8 *)(param_1 + 8),1);
    return;
  }
  return;
}




void FUN_100219838(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129e28(0);
    FUN_1002eb364(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_100219878(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_100126b8c();
  if ((iVar1 != 0) && (lVar2 = FUN_100129b00(param_2), lVar2 != 0)) {
    FUN_100129e54(lVar2,1);
    FUN_1002eb3a8(*(undefined8 *)(param_1 + 8),param_2,1);
    return;
  }
  return;
}




void FUN_1002198cc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_100126b8c();
  if ((iVar1 != 0) && (lVar2 = FUN_100129b00(param_2), lVar2 != 0)) {
    FUN_100129e54(lVar2,0);
    FUN_1002eb3a8(*(undefined8 *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}




void FUN_100219920(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10021992c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x4958);
  FUN_1002199ac();
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 != 0) {
    FUN_1002662c0((long)pvVar2 + 0x1cf0,param_1);
  }
  FUN_1001b35e0(pvVar2,param_2);
  FUN_1001e7f30(pvVar2,0,1,0,1);
  return;
}




long * FUN_1002199ac(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101472d30;
  thunk_FUN_100266194(puVar1 + 0x39e);
  FUN_1001b339c(param_1,puVar1 + 0x39e);
  FUN_1001b316c(param_1,1);
  uVar2 = FUN_1004e0150("MAIN_MENU_ACADEMY",0);
  FUN_1001b3418(param_1,uVar2);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_100219a30(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  uVar2 = (ulong)(uint)(local_38 - 100.0);
  uVar3 = NEON_fminnm(local_34 - 200.0,0x450fc000);
  local_40 = 0x41200000;
  FUN_1001b4034(param_1,&local_40);
  uVar1 = FUN_1001b36cc(uVar3,param_1);
  FUN_1001b3694(param_1);
  FUN_1001b3854(param_1,0);
  FUN_1001b3b58(param_1);
  *(int *)(param_1 + 0x494c) = (int)uVar1;
  *(int *)(param_1 + 0x4950) = (int)uVar2;
  FUN_10064e47c(uVar1,uVar2,param_1 + 0x1cf0);
  return;
}




void FUN_100219b04(long param_1)

{
  thunk_FUN_1001b3988();
  FUN_100266524(param_1 + 0x1cf0,1);
  return;
}




void FUN_100219b30(long param_1)

{
  thunk_FUN_1001b3a68();
  FUN_100266524(param_1 + 0x1cf0,0);
  return;
}




void FUN_100219b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472d30;
  FUN_100266234(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100219b94(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101472d30;
  FUN_100266234(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100219bd0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d50);
  FUN_100219c1c();
  FUN_1001b35d4(*param_1,param_1[1]);
  FUN_1001e7f30(pvVar1,"CREATE_GUILD",1,0,1);
  return;
}




long * FUN_100219c1c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101472e60;
  thunk_FUN_1001e9ce8(puVar1 + 0x39e);
  FUN_1001b339c(param_1,param_1[0x39f]);
  local_28 = DAT_101d237ec;
  local_50 = thunk_FUN_1001b3648;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
  FUN_1001b3418(param_1,uVar2);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_100219ccc(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 local_40;
  float local_38;
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,&local_38);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  fVar2 = local_38 + -100.0;
  uVar1 = FUN_1001b36cc(0x44c80000,param_1);
  local_40 = CONCAT44(fVar2,uVar1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_40);
  FUN_1001b3854(0x44c80000,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100219d68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472e60;
  thunk_FUN_1001e9fa8(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100219da0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101472e60;
  thunk_FUN_1001e9fa8(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100219ddc(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x378) != 0)) {
    uVar1 = FUN_10002f32c();
    return uVar1;
  }
  return 0;
}




void FUN_100219df4(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_a8 [24];
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  void *local_40;
  char local_29;
  
  thunk_FUN_1001ad400(auStack_a8);
  FUN_10029b154(auStack_a8,param_1);
  plVar1 = (long *)FUN_100219e88("MENU_PROFILE_EARLY_OFFER_POPUP",auStack_a8);
  (**(code **)(*plVar1 + 0x148))(plVar1,param_1);
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}




undefined8 FUN_100219e88(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_1);
  std::string::operator=((string *)(param_2 + 0x68),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  operator_new(0xd8);
  uVar1 = FUN_100219f44();
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_1001ad7b8(DAT_101d23560,param_2);
  return *(undefined8 *)(param_2 + 0x80);
}




void FUN_100219efc(void)

{
  int iVar1;
  void *local_28 [2];
  char local_11;
  
  iVar1 = FUN_1001ad584();
  if (iVar1 != 0) {
    FUN_10001549c(local_28,"MENU_PROFILE_EARLY_OFFER_POPUP");
    FUN_1001ad598(local_28);
    if (local_11 < '\0') {
      operator_delete(local_28[0]);
    }
  }
  return;
}




long * FUN_100219f44(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001ad5cc();
  *puVar1 = &PTR_FUN_101472f90;
  FUN_1001ef6b8(puVar1 + 0x17);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  return param_1;
}




void FUN_100219f90(long param_1)

{
  FUN_1001ef784(param_1 + 0xb8);
  return;
}




void FUN_100219f98(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1001ad5fc();
  FUN_10064e47c(param_1,param_2,*(undefined8 *)(param_3 + 0xc0));
  return;
}




void FUN_100219fd4(long param_1)

{
  FUN_10029b2cc(*(undefined8 *)(param_1 + 0xc0));
  return;
}




void FUN_100219fdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101472f90;
  thunk_FUN_1001ef708(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10021a00c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101472f90;
  thunk_FUN_1001ef708(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10021a040(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_1014730f0;
  thunk_FUN_1001efebc(puVar1 + 0x39e);
  FUN_1001b339c(param_1,param_1[0x39f]);
  uVar2 = FUN_1004e0150("QUEST_BUTTON_FREE",0);
  FUN_1001b3418(param_1,uVar2);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  local_28 = FUN_100644a94("UI::EVENT_CLOSE_FREEPOPUPNODE");
  local_50 = thunk_FUN_1001b3648;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  return param_1;
}




void FUN_10021a0fc(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1d30);
  uVar2 = FUN_10021a040();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}




void FUN_10021a144(long param_1)

{
  undefined8 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  FUN_1001b3694(0x44b68000,0x44390000,param_1);
  FUN_1001b3854(param_1,0);
  local_40 = NEON_fmov(0x40a00000,4);
  FUN_1001b4034(param_1,&local_40);
  FUN_10064e47c(0x44b68000,0x44390000,*(undefined8 *)(param_1 + 0x1cf8));
  FUN_1001b3b58(param_1);
  return;
}




void FUN_10021a1d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014730f0;
  thunk_FUN_1001eff80(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021a20c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014730f0;
  thunk_FUN_1001eff80(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021a248(void)

{
  undefined1 auStack_98 [24];
  void *local_80;
  void *local_70;
  char local_59;
  void *local_58;
  char local_41;
  void *local_30;
  char local_19;
  
  thunk_FUN_1001ad400(auStack_98);
  FUN_10029d810(auStack_98);
  FUN_10021a2bc("MENU_PROFILE_GOVERNMENT_ID_POPUP",auStack_98);
  if (local_19 < '\0') {
    operator_delete(local_30);
  }
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  if (local_59 < '\0') {
    operator_delete(local_70);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}




undefined8 FUN_10021a2bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_1);
  std::string::operator=((string *)(param_2 + 0x68),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  operator_new(200);
  uVar1 = FUN_10021a378();
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_1001ad7b8(DAT_101d23560,param_2);
  return *(undefined8 *)(param_2 + 0x80);
}




void FUN_10021a330(void)

{
  int iVar1;
  void *local_28 [2];
  char local_11;
  
  iVar1 = FUN_1001ad584();
  if (iVar1 != 0) {
    FUN_10001549c(local_28,"MENU_PROFILE_GOVERNMENT_ID_POPUP");
    FUN_1001ad598(local_28);
    if (local_11 < '\0') {
      operator_delete(local_28[0]);
    }
  }
  return;
}




long * FUN_10021a378(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001ad5cc();
  *puVar1 = &PTR_FUN_101473220;
  FUN_1001f03cc(puVar1 + 0x17);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  return param_1;
}




void FUN_10021a3c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1001ad5fc();
  FUN_10064e47c(param_1,param_2,*(undefined8 *)(param_3 + 0xc0));
  return;
}




void FUN_10021a400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010021a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x138))();
  return;
}




void FUN_10021a410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101473220;
  thunk_FUN_1001f0418(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10021a440(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101473220;
  thunk_FUN_1001f0418(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021a474(undefined8 param_1,undefined4 *param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x13028);
  FUN_10021a4d4(pvVar1,param_1);
  FUN_1001b35d4(*param_2,param_2[1]);
  FUN_1001e7f30(pvVar1,"GUILD_FILTER",1,0,1);
  return;
}




long * FUN_10021a4d4(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101473378;
  thunk_FUN_10029deb4(puVar1 + 0x39e,param_2);
  FUN_1001b339c(param_1,puVar1 + 0x39e);
  local_38 = DAT_101d237f0;
  local_60 = thunk_FUN_1001b3648;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  uVar2 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_POPUP_TITLE",0);
  FUN_1001b3418(param_1,uVar2);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_10021a5a4(long param_1)

{
  undefined8 local_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  FUN_100641464(auStack_24,auStack_28);
  FUN_10029e898(param_1 + 0x1cf0);
  local_30 = 0;
  FUN_1001b4034(param_1,&local_30);
  FUN_10064e3cc(param_1 + 0x1cf0);
  FUN_1001b3694(param_1);
  FUN_1001b3854(param_1,0);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_10021a618(long *param_1)

{
  thunk_FUN_1001b3988();
                    /* WARNING: Could not recover jumptable at 0x00010021a640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_10021a644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101473378;
  FUN_10021a6bc(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021a67c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101473378;
  FUN_10021a6bc(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10021a6bc(void)

{
  FUN_10021a6bc();
  return;
}




void FUN_10021a6bc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10021a6bc_1014734a8;
  param_1[0x211e] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x223f);
  FUN_1002ebc50(param_1 + 0x211e);
  thunk_FUN_100651068(param_1 + 0x20f8);
  thunk_FUN_100651068(param_1 + 0x20d2);
  thunk_FUN_100651068(param_1 + 0x20ac);
  thunk_FUN_100651068(param_1 + 0x2086);
  thunk_FUN_100651068(param_1 + 0x2060);
  thunk_FUN_100651068(param_1 + 0x203a);
  thunk_FUN_1001b0af4(param_1 + 0x19b3);
  thunk_FUN_1001b0af4(param_1 + 0x132c);
  thunk_FUN_1001b0af4(param_1 + 0xca5);
  thunk_FUN_10018d500(param_1 + 0x77f);
  param_1[0x3e1] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x779] != (void *)0x0) {
    operator_delete__((void *)param_1[0x779]);
    param_1[0x779] = 0;
    param_1[0x778] = 0;
  }
  if ((void *)param_1[0x777] != (void *)0x0) {
    operator_delete__((void *)param_1[0x777]);
    param_1[0x777] = 0;
    param_1[0x776] = 0;
  }
  if ((void *)param_1[0x775] != (void *)0x0) {
    operator_delete__((void *)param_1[0x775]);
    param_1[0x775] = 0;
    param_1[0x774] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x74e);
  FUN_10064e2bc(param_1 + 0x733);
  FUN_10064e2bc(param_1 + 0x718);
  FUN_10003bd40(param_1 + 0x461);
  FUN_100186088(param_1 + 0x3e1);
  param_1[0x43] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x3db] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3db]);
    param_1[0x3db] = 0;
    param_1[0x3da] = 0;
  }
  if ((void *)param_1[0x3d9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3d9]);
    param_1[0x3d9] = 0;
    param_1[0x3d8] = 0;
  }
  if ((void *)param_1[0x3d7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3d7]);
    param_1[0x3d7] = 0;
    param_1[0x3d6] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3b0);
  FUN_10064e2bc(param_1 + 0x395);
  FUN_10064e2bc(param_1 + 0x37a);
  FUN_10003bd40(param_1 + 0xc3);
  FUN_100186088(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2f);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10021a8d8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10021a6bc();
  operator_delete(pvVar1);
  return;
}




void FUN_10021a8ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_101d237a8 != 0) && (uVar1 = FUN_1001e7f58(), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x668c0);
  DAT_101d237a8 = FUN_10021a964(pvVar2,param_1,param_2);
  FUN_1001e7f30(DAT_101d237a8,0,1,0,1);
  return;
}




long * FUN_10021a964(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_1001b2b88();
  FUN_10014f4a0(lVar3 + 0x1cf0);
  *param_1 = (long)&PTR_FUN_1014735f0;
  param_1[0x39e] = (long)&PTR_FUN_101473728;
  plVar1 = param_1 + 0x3a1;
  thunk_FUN_10023b4b8(plVar1);
  plVar2 = param_1 + 0xcc69;
  thunk_FUN_1001c0c34(plVar2,0);
  FUN_1001b339c(param_1,plVar2);
  FUN_1001b339c(param_1,plVar1);
  *(uint *)((long)param_1 + 0x1d8c) = *(uint *)((long)param_1 + 0x1d8c) & 0xfffffffb;
  FUN_10023e07c(plVar1,param_3);
  FUN_1001c0e10(plVar2);
  (**(code **)(*param_1 + 0x118))(param_1);
  uVar4 = FUN_10015d3ec();
  FUN_1001634c4(uVar4,param_2,1);
  return param_1;
}




void FUN_10021aa40(long param_1)

{
  undefined4 local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  fStack_3c = local_38 + -100.0;
  local_40 = FUN_1001b36cc(local_34 + -200.0,param_1);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e68c(0,0,param_1 + 0x66348,8);
  param_1 = param_1 + 0x1d08;
  FUN_10064e48c(param_1,&local_40);
  FUN_10023bd9c(param_1,1);
  FUN_10023df24(param_1,1);
  FUN_1001e6da4(param_1,1);
  return;
}




void FUN_10021ab1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1d08;
  FUN_10023bd9c(lVar1,0);
  FUN_10023df24(lVar1,0);
  FUN_1001e6da4(lVar1,0);
  thunk_FUN_1001b3a68(param_1);
  DAT_101d237a8 = 0;
  return;
}




void FUN_10021ab74(long param_1)

{
  *(uint *)(param_1 + 0x1d8c) = *(uint *)(param_1 + 0x1d8c) | 4;
  FUN_10023c69c(param_1 + 0x1d08);
  *(uint *)(param_1 + 0x663cc) = *(uint *)(param_1 + 0x663cc) & 0xfffffffb;
  return;
}




void FUN_10021abbc(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 4;
  FUN_10023c69c(param_1 + 0x18);
  *(uint *)(param_1 + 0x646dc) = *(uint *)(param_1 + 0x646dc) & 0xfffffffb;
  return;
}




void FUN_10021ac00(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_1014735f0;
  param_1[0x39e] = &PTR_FUN_101473728;
  param_1[0xcc69] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x667c0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x66878) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x66890);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x667c0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0xcc69);
  thunk_FUN_10023bbe4(param_1 + 0x3a1);
  FUN_10014f51c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021acc8(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_1014735f0;
  param_1[0x39e] = &PTR_FUN_101473728;
  param_1[0xcc69] = &PTR_FUN_10145e588;
  puVar2 = param_1 + 0xccf8;
  lVar3 = -0x4b0;
  do {
    *puVar2 = &PTR_FUN_1014a7108;
    puVar2[0x17] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580(puVar2 + 0x1a);
    FUN_10064e2bc(puVar2);
    puVar2 = puVar2 + -0x1e;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0);
  FUN_10064e2bc(param_1 + 0xcc69);
  thunk_FUN_10023bbe4(param_1 + 0x3a1);
  FUN_10014f51c(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021ad88(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[-0x39e] = &PTR_FUN_1014735f0;
  *param_1 = &PTR_FUN_101473728;
  param_1[0xc8cb] = &PTR_FUN_10145e588;
  puVar1 = param_1 + 0xc95a;
  lVar2 = -0x4b0;
  do {
    *puVar1 = &PTR_FUN_1014a7108;
    puVar1[0x17] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580(puVar1 + 0x1a);
    FUN_10064e2bc(puVar1);
    puVar1 = puVar1 + -0x1e;
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0);
  FUN_10064e2bc(param_1 + 0xc8cb);
  thunk_FUN_10023bbe4(param_1 + 3);
  FUN_10014f51c(param_1);
  FUN_1001b4464(param_1 + -0x39e);
  return;
}




void FUN_10021ae4c(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[-0x39e] = &PTR_FUN_1014735f0;
  *param_1 = &PTR_FUN_101473728;
  param_1[0xc8cb] = &PTR_FUN_10145e588;
  puVar2 = param_1 + 0xc95a;
  lVar3 = -0x4b0;
  do {
    *puVar2 = &PTR_FUN_1014a7108;
    puVar2[0x17] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580(puVar2 + 0x1a);
    FUN_10064e2bc(puVar2);
    puVar2 = puVar2 + -0x1e;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0);
  FUN_10064e2bc(param_1 + 0xc8cb);
  thunk_FUN_10023bbe4(param_1 + 3);
  FUN_10014f51c(param_1);
  pvVar1 = (void *)FUN_1001b4464(param_1 + -0x39e);
  operator_delete(pvVar1);
  return;
}




void FUN_10021af14(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d18);
  FUN_10021af60();
  FUN_1001b35d4(*param_1,param_1[1]);
  FUN_1001e7f30(pvVar1,"GUILD_INVITES",1,0,1);
  return;
}




long * FUN_10021af60(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101473ac0;
  thunk_FUN_1001f04ec(puVar1 + 0x39e);
  FUN_1001b339c(param_1,param_1[0x39f]);
  local_28 = DAT_101d237f4;
  local_50 = thunk_FUN_1001b3648;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  uVar2 = FUN_1004e0150("MENU_GUILD_INVITES_POPUP_TITLE",0);
  FUN_1001b3418(param_1,uVar2);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_10021b010(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  fVar2 = local_38 + -100.0;
  uVar1 = FUN_1001b36cc(local_34 + -200.0,param_1);
  local_40 = CONCAT44(fVar2,uVar1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_40);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_10021b0b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101473ac0;
  FUN_10014f51c(param_1 + 0x3a0);
  param_1[0x39e] = &PTR____cxa_pure_virtual_10146ba88;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021b110(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101473ac0;
  FUN_10014f51c(param_1 + 0x3a0);
  param_1[0x39e] = &PTR____cxa_pure_virtual_10146ba88;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021b170(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c30);
  FUN_10021b1b8();
  FUN_1001b35d4(*param_1,param_1[1]);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}




undefined8 FUN_10021b1b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101473bf0;
  FUN_10021b2a8(puVar1 + 0x39e);
  FUN_1001b339c(param_1,puVar1 + 0x39e);
  uVar2 = FUN_1004e0150("MENU_HERO_MASTERY_TITLE",0);
  FUN_1001b3418(param_1,uVar2);
  return param_1;
}




void FUN_10021b220(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  
  local_38 = 0;
  FUN_1001b4034(param_1,&local_38);
  uVar2 = 0x44a8c000;
  uVar1 = FUN_1001b36cc(0x451c4000,param_1);
  local_38 = CONCAT44(uVar2,uVar1);
  FUN_1001b3854(0x451c4000,0x44a8c000,param_1,0);
  FUN_10064e48c(param_1 + 0x1cf0,&local_38);
  FUN_1001b3b58(param_1);
  return;
}




long * FUN_10021b2a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  
  puVar11 = (undefined8 *)FUN_10064f204();
  *puVar11 = &PTR_thunk_FUN_10021c120_101473d20;
  puVar11 = puVar11 + 0x29;
  thunk_FUN_10064f204(puVar11);
  plVar1 = param_1 + 0x52;
  thunk_FUN_10064f204(plVar1);
  thunk_FUN_10064f204();
  plVar2 = param_1 + 0xa4;
  FUN_1006505b8();
  FUN_10064e264();
  lVar12 = thunk_FUN_10064dde8();
  param_1[0xd6] = lVar12;
  plVar3 = param_1 + 0xd7;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xfd;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x123;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x149;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x16f;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x18d;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x1ab;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x1c9;
  thunk_FUN_100652c08(plVar10);
  param_1[0x1e7] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_10064f31c(puVar11,plVar10,1);
  FUN_100642bd8(plVar10,plVar3,1);
  FUN_10064f31c(puVar11,param_1 + 0x7b,1);
  FUN_10064f31c(puVar11,plVar6,1);
  FUN_10064f31c(puVar11,param_1 + 0xbf,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_10064f31c(plVar1,plVar2,1);
  FUN_10064f31c(plVar1,plVar8,1);
  FUN_10064f31c(plVar1,plVar5,1);
  FUN_10064f31c(plVar1,plVar9,1);
  FUN_10064f31c(plVar1,plVar4,1);
  FUN_100652cac(plVar7,PTR_s_build___SpoilsOfWarBg_png_101854a58,"full_loading_2k");
  FUN_100652e14(0x3ecccccd,plVar7);
  uVar14 = *(uint *)((long)param_1 + 0xecc);
  if ((uVar14 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xecc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar10);
    uVar14 = *(uint *)((long)param_1 + 0xecc);
  }
  *(uint *)((long)param_1 + 0xecc) = uVar14 & 0xffffffbf;
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"quest_item_highlight_mid");
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 1;
  FUN_100650608(plVar2,&DAT_10115a164);
  uVar14 = *(uint *)((long)param_1 + 0x5a4);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x5a4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
  }
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  uVar13 = FUN_1004e0150("MENU_EARN_MASTERY_XP",0);
  FUN_1006513c0(plVar3,uVar13);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar13 = FUN_1004e0150("HOW_TO_EARN_MASTERY_XP",0);
  FUN_1006513c0(plVar4,uVar13);
  FUN_100652cac(plVar8,PTR_s_build___InventoryCommon_atlas_10184e108,
                "overview_hero_mastery_image_01");
  FUN_100652cac(plVar9,PTR_s_build___InventoryCommon_atlas_10184e108,
                "overview_hero_mastery_image_02");
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar13 = FUN_1004e0150("HERO_MASTERY_DEDICATION_SHOW_EXPLANATION",0);
  FUN_1006513c0(plVar5,uVar13);
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  uVar13 = FUN_1004e0150("MENU_MASTERY_PROGRESSION_TITLE",0);
  FUN_1006513c0(plVar6,uVar13);
  FUN_10064e524(param_1 + 0xbf,param_1[0xd6]);
  return param_1;
}




void FUN_10021b674(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_10064e48c(param_1 + 0xb78,param_1 + 0xf38);
  lVar1 = param_1 + 0xe48;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xf38),0x43480000,lVar1);
  lVar2 = param_1 + 0x3d8;
  FUN_10064e47c(*(float *)(param_1 + 0xf38) * 0.4,0x43160000,lVar2);
  lVar3 = param_1 + 0x5f8;
  fVar10 = *(float *)(param_1 + 0xf3c) * 0.6 + -50.0;
  FUN_10064e47c(*(float *)(param_1 + 0xf38) * 0.4 + -100.0,fVar10,lVar3);
  fVar9 = *(float *)(param_1 + 0xf38);
  fVar11 = *(float *)(param_1 + 0xf3c);
  FUN_100652e60(lVar1);
  FUN_10064e47c(fVar9 * 0.6,fVar11 - fVar10,param_1 + 0x520);
  lVar4 = param_1 + 0x6b8;
  FUN_10065179c(*(float *)(param_1 + 0xf38) * 0.3,0,0x3f800000,lVar4);
  lVar5 = param_1 + 0x918;
  fVar10 = *(float *)(param_1 + 0xf38);
  lVar6 = param_1 + 0xc68;
  fVar9 = (float)FUN_10065317c(lVar6);
  FUN_100651708((fVar10 * 0.6 + -50.0) - fVar9,lVar5,1);
  lVar7 = param_1 + 0x7e8;
  fVar10 = *(float *)(param_1 + 0xf38);
  lVar8 = param_1 + 0xd58;
  fVar9 = (float)FUN_10065317c(lVar8);
  FUN_100651708((fVar10 * 0.6 + -50.0) - fVar9,lVar7,1);
  FUN_10021b9c8(param_1);
  FUN_10064e5ec(0,0,lVar1,4,param_1,4);
  FUN_10064e5ec(0x42480000,0,lVar4,7,lVar1,7);
  FUN_10064e72c(0x42480000,lVar2,0,lVar1,2);
  FUN_10064e72c(0,lVar2,3,lVar1,3);
  FUN_10064e72c(0,lVar3,0,lVar2,2);
  FUN_10064e72c(0,lVar3,4,lVar2,4);
  FUN_10064e5ec(0,0,param_1 + 0xa48,8,lVar2,8);
  FUN_10064e72c(0x42480000,lVar7,3,lVar4,1);
  FUN_10064e72c(0,lVar7,5,lVar4,5);
  FUN_10064e72c(0,param_1 + 0x290,3,param_1 + 0x148,1);
  FUN_10064e72c(0,param_1 + 0x290,0,param_1 + 0x148,0);
  FUN_10064e5ec(0,0,lVar6,0,lVar2,1);
  FUN_10064e72c(0,lVar5,3,lVar6,1);
  FUN_10064e72c(0,lVar5,5,lVar6,5);
  FUN_10064e72c(0xc2480000,lVar8,0,lVar6,2);
  FUN_10064e72c(0,lVar8,3,lVar6,3);
  FUN_10064e72c(0,lVar7,3,lVar8,1);
  FUN_10064e72c(0,lVar7,5,lVar8,5);
  FUN_10064e5ec(0,0,param_1 + 0x520,1,lVar1,2);
  return;
}




void FUN_10021b9c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  uint local_98 [2];
  uint local_90 [2];
  void *local_88;
  
  lVar1 = param_1 + 0x5f8;
  iVar10 = 1;
  FUN_100642378(lVar1,1);
  uVar2 = FUN_10021bf38(lVar1,1);
  plVar3 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(uVar2,plVar3);
  plVar4 = (long *)FUN_100204258(uVar2,1);
  local_90[0] = 0xffb6acaa;
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,local_90);
  uVar5 = FUN_1004e0150("HERO_MASTERY_STAR_TITLE",0);
  (**(code **)(*plVar4 + 0x138))(plVar4,uVar5);
  fVar11 = (float)FUN_10064e3cc(lVar1);
  FUN_10065179c(fVar11 * 0.4,0,0x3f800000,plVar4);
  uVar5 = FUN_10021bfac(uVar2,1);
  fVar11 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e4dc(uVar5,(ulong)(uint)(int)(fVar11 * 0.5) | 0x300000000);
  local_90[0] = local_90[0] & 0xffff0000;
  FUN_10064e5b8(uVar5,local_90);
  (**(code **)(*plVar3 + 0x68))(plVar3,plVar4,0,2);
  (**(code **)(*plVar3 + 0x68))(plVar3,uVar5,0,2);
  uVar5 = FUN_10021bf38(lVar1,1);
  plVar4 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(uVar5,plVar4);
  plVar6 = (long *)FUN_100204258(uVar5,1);
  local_90[0] = 0xffb6acaa;
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,local_90);
  uVar7 = FUN_1004e0150("HERO_MASTERY_XP_TITLE",0);
  (**(code **)(*plVar6 + 0x138))(plVar6,uVar7);
  fVar11 = (float)FUN_10064e3cc(lVar1);
  uVar13 = 0;
  FUN_10065179c(fVar11 * 0.4,0,0x3f800000,plVar6);
  uVar7 = FUN_10021bfac(uVar5,1);
  fVar11 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e4dc(uVar7,(ulong)(uint)(int)(fVar11 * 0.5) | 0x300000000);
  local_90[0] = local_90[0] & 0xffff0000;
  FUN_10064e5b8(uVar7,local_90);
  (**(code **)(*plVar4 + 0x68))(plVar4,plVar6,0,2);
  (**(code **)(*plVar4 + 0x68))(plVar4,uVar7,0,2);
  do {
    fVar12 = (float)uVar13;
    plVar6 = (long *)FUN_100204258(uVar5,1);
    local_90[0] = 0xffb6acaa;
    FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,local_90);
    FUN_100651700(plVar6,3);
    fVar11 = (float)FUN_10064e3cc(lVar1);
    FUN_100651708(fVar11 * 0.3,plVar6,1);
    FUN_100331da8(iVar10);
    FUN_1004e313c(local_90);
    FUN_1004e38ac(local_90,"%d");
    (**(code **)(*plVar6 + 0x138))(plVar6,local_90);
    (**(code **)(*plVar4 + 0x68))(plVar4,plVar6,0,10);
    uVar7 = FUN_10021c020(uVar2,1);
    fVar11 = (float)FUN_10064e3cc(lVar1);
    (**(code **)(*plVar6 + 0x48))(plVar6);
    FUN_10064e4dc(uVar7,CONCAT44((int)fVar12,(int)(fVar11 * 0.5)));
    local_98[0] = local_98[0] & 0xffff0000;
    FUN_10064e5b8(uVar7,local_98);
    iVar9 = 0;
    plVar6 = (long *)0x0;
    do {
      plVar8 = (long *)FUN_100088a94(uVar7,1);
      FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_star");
      uVar13 = 0x42a00000;
      FUN_10064e47c(plVar8);
      local_98[0] = 0xffb6acaa;
      FUN_100652dd4(plVar8,local_98,2);
      if (iVar9 == 0) {
        fVar11 = (float)FUN_10064e3cc(lVar1);
        fVar12 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
        fVar11 = -50.0 - (fVar12 + fVar11 * -0.5);
        uVar13 = (ulong)(uint)*(float *)(plVar8 + 8);
        if ((*(float *)(plVar8 + 8) != fVar11) ||
           (uVar13 = (ulong)(uint)*(float *)((long)plVar8 + 0x44),
           *(float *)((long)plVar8 + 0x44) != 0.0)) {
          *(float *)(plVar8 + 8) = fVar11;
          *(undefined4 *)((long)plVar8 + 0x44) = 0;
          FUN_1000200a0(plVar8);
        }
      }
      else {
        FUN_10064e72c(0x80000000,plVar8,1,plVar6,3);
        FUN_10064e72c(0,plVar8,0,plVar6,0);
      }
      iVar9 = iVar9 + 1;
      plVar6 = plVar8;
    } while (iVar10 != iVar9);
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar7,0,2);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    fVar11 = (float)uVar13;
    iVar10 = iVar10 + 1;
  } while (iVar10 != 6);
  uVar7 = FUN_10021bfac(lVar1,1);
  FUN_10064e3cc(lVar1);
  FUN_10064e4dc(uVar7,(ulong)(uint)(int)fVar11 << 0x20 | 3);
  local_90[0] = local_90[0] & 0xffff0000;
  FUN_10064e5b8(uVar7,local_90);
  (**(code **)(**(long **)(param_1 + 0x6b0) + 0x68))(*(long **)(param_1 + 0x6b0),uVar2,0,3);
  (**(code **)(**(long **)(param_1 + 0x6b0) + 0x68))(*(long **)(param_1 + 0x6b0),uVar7,0,3);
  (**(code **)(**(long **)(param_1 + 0x6b0) + 0x68))(*(long **)(param_1 + 0x6b0),uVar5,0,3);
  return;
}




void FUN_10021bf24(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x1e7) = param_1;
  *(undefined4 *)((long)param_3 + 0xf3c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010021bf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void * FUN_10021bf38(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xb8);
  lVar2 = FUN_10064e264();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_10021bfac(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xd8);
  lVar2 = FUN_1006505b8();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_10021c020(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x148);
  lVar2 = thunk_FUN_10064f204();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void thunk_FUN_10021c120(void)

{
  FUN_10021c120();
  return;
}




void FUN_10021c098(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10021c120();
  operator_delete(pvVar1);
  return;
}




void FUN_10021c0ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101473bf0;
  FUN_10021c120(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021c0e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101473bf0;
  FUN_10021c120(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021c120(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10021c120_101473d20;
  param_1[0x1c9] = &PTR_FUN_1014a7108;
  param_1[0x1e0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e3);
  FUN_10064e2bc(param_1 + 0x1c9);
  param_1[0x1ab] = &PTR_FUN_1014a7108;
  param_1[0x1c2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c5);
  FUN_10064e2bc(param_1 + 0x1ab);
  param_1[0x18d] = &PTR_FUN_1014a7108;
  param_1[0x1a4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a7);
  FUN_10064e2bc(param_1 + 0x18d);
  param_1[0x16f] = &PTR_FUN_1014a7108;
  param_1[0x186] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x189);
  FUN_10064e2bc(param_1 + 0x16f);
  thunk_FUN_100651068(param_1 + 0x149);
  thunk_FUN_100651068(param_1 + 0x123);
  thunk_FUN_100651068(param_1 + 0xfd);
  thunk_FUN_100651068(param_1 + 0xd7);
  thunk_FUN_10064e2bc(param_1 + 0xbf);
  FUN_10064e2bc(param_1 + 0xa4);
  param_1[0x7b] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x92);
  FUN_10064e2bc(param_1 + 0x7b);
  param_1[0x52] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x69);
  FUN_10064e2bc(param_1 + 0x52);
  param_1[0x29] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x40);
  FUN_10064e2bc(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10021c264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3100);
  FUN_10021c2d4(pvVar1,param_1);
  FUN_1001b35d4(*param_4,param_4[1]);
  FUN_1001e7f30(pvVar1,"HERO_VIEWER",1,0,1);
  return;
}




void FUN_10021c2c8(void)

{
  FUN_1001e7f70("HERO_VIEWER");
  return;
}




long * FUN_10021c2d4(long *param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  string *psVar6;
  undefined8 ***pppuVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  code ***pppcVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 **local_e0;
  size_t sStack_d8;
  byte local_c9;
  undefined8 **local_c8;
  size_t sStack_c0;
  byte local_b1;
  undefined8 **local_b0 [2];
  char local_99;
  code **local_98;
  long *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar12 = (undefined8 *)FUN_1001b2b88();
  *puVar12 = &PTR_thunk_FUN_10021ccfc_101473e70;
  puVar12[0x39f] = 0;
  puVar12[0x39e] = 0;
  FUN_1001f2c14(puVar12 + 0x3a0);
  plVar1 = param_1 + 0x3a3;
  thunk_FUN_1006421a8(plVar1);
  plVar2 = param_1 + 0x3b4;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x3da;
  thunk_FUN_100650e64(plVar3);
  plVar16 = param_1 + 0x400;
  thunk_FUN_100650e64(plVar16);
  plVar4 = param_1 + 0x426;
  FUN_10064e264();
  thunk_FUN_100655644();
  thunk_FUN_100650e64();
  thunk_FUN_100183990(param_1 + 0x48e,0);
  plVar5 = param_1 + 0x54c;
  thunk_FUN_1001c397c();
  FUN_1001f2d04(puVar12 + 0x3a0,param_2);
  FUN_1002a4e9c(param_1[0x3a1],param_4);
  FUN_1001b339c(param_1,param_1[0x3a1]);
  FUN_1001b316c(param_1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar16,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  psVar6 = *(string **)param_2;
  if (-1 < (char)param_2[0x17]) {
    psVar6 = param_2;
  }
  lVar13 = FUN_10034bf64(psVar6);
  uVar14 = FUN_1004e0150(*(undefined8 *)(lVar13 + 0x28),0);
  FUN_1006513c0(plVar2,uVar14);
  uVar14 = FUN_1004e0150("MENU_HERO_TAB_NAME_SKINS",0);
  FUN_1006513c0(plVar3,uVar14);
  uVar14 = FUN_1004e0150("MENU_HERO_TAB_NAME_TALENTS",0);
  FUN_1006513c0(plVar16,uVar14);
  std::operator+("TALENTS.UPGRADE.",param_2);
  local_98 = (code **)0x0;
  local_90 = (long *)0x0;
  local_88 = 0;
  pppuVar7 = (undefined8 ***)local_c8;
  sVar8 = sStack_c0;
  if (-1 < (char)local_b1) {
    pppuVar7 = &local_c8;
    sVar8 = (ulong)local_b1;
  }
  if (0xffffffffffffffef < sVar8 + 2) goto LAB_10021c8c0;
  if (sVar8 + 2 < 0x17) {
    pppcVar15 = &local_98;
    local_88 = sVar8 << 0x38;
    if (sVar8 != 0) goto LAB_10021c504;
  }
  else {
    uVar19 = sVar8 + 0x12 & 0xfffffffffffffff0;
    pppcVar15 = operator_new(uVar19);
    local_88 = uVar19 | 0x8000000000000000;
    local_98 = (code **)pppcVar15;
    local_90 = (long *)sVar8;
LAB_10021c504:
    _memcpy(pppcVar15,pppuVar7,sVar8);
  }
  *(undefined1 *)((long)pppcVar15 + sVar8) = 0;
  std::string::append((char *)&local_98,0x1013e0ca6);
  std::string::string((string *)local_b0,(string *)&local_98);
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if ((char)local_b1 < '\0') {
    operator_delete(local_c8);
  }
  std::operator+("TALENTS.NEWTALENT.",param_2);
  local_98 = (code **)0x0;
  local_90 = (long *)0x0;
  local_88 = 0;
  pppuVar7 = (undefined8 ***)local_e0;
  sVar8 = sStack_d8;
  if (-1 < (char)local_c9) {
    pppuVar7 = &local_e0;
    sVar8 = (ulong)local_c9;
  }
  if (0xffffffffffffffef < sVar8 + 2) {
LAB_10021c8c0:
    local_88 = 0;
    local_90 = (long *)0x0;
    local_98 = (code **)0x0;
    FUN_10021d2b8();
    plVar16 = (long *)FUN_10021d134();
    return plVar16;
  }
  if (sVar8 + 2 < 0x17) {
    pppcVar15 = &local_98;
    local_88 = sVar8 << 0x38;
    if (sVar8 == 0) goto LAB_10021c5e4;
  }
  else {
    uVar19 = sVar8 + 0x12 & 0xfffffffffffffff0;
    pppcVar15 = operator_new(uVar19);
    local_88 = uVar19 | 0x8000000000000000;
    local_98 = (code **)pppcVar15;
    local_90 = (long *)sVar8;
  }
  _memcpy(pppcVar15,pppuVar7,sVar8);
LAB_10021c5e4:
  *(undefined1 *)((long)pppcVar15 + sVar8) = 0;
  std::string::append((char *)&local_98,0x1013e0ca6);
  std::string::string((string *)&local_c8,(string *)&local_98);
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if ((char)local_c9 < '\0') {
    operator_delete(local_e0);
  }
  pppuVar7 = (undefined8 ***)local_b0[0];
  if (-1 < local_99) {
    pppuVar7 = local_b0;
  }
  FUN_1001c3fc8(plVar5,pppuVar7);
  pppuVar7 = (undefined8 ***)local_c8;
  if (-1 < (char)local_b1) {
    pppuVar7 = &local_c8;
  }
  FUN_1001c3fc8(plVar5,pppuVar7);
  uVar9 = DAT_101dbd460;
  local_70 = DAT_101dbd460;
  local_98 = (code **)thunk_FUN_10021d134;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x3b5,&local_98);
  uVar10 = DAT_101dbd48c;
  local_70 = DAT_101dbd48c;
  local_98 = (code **)thunk_FUN_10021d134;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x3b5,&local_98);
  local_70 = uVar9;
  local_98 = (code **)thunk_FUN_10021d18c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x3db,&local_98);
  local_70 = uVar10;
  local_98 = (code **)thunk_FUN_10021d18c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x3db,&local_98);
  local_70 = uVar9;
  local_98 = (code **)thunk_FUN_10021d1e4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x401,&local_98);
  local_70 = uVar10;
  local_98 = (code **)thunk_FUN_10021d1e4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x401,&local_98);
  *(uint *)((long)param_1 + 0x1e24) = *(uint *)((long)param_1 + 0x1e24) | 0x10;
  bVar11 = (int)param_4 == 0;
  uVar17 = 0;
  if (bVar11) {
    uVar17 = 0x10;
  }
  uVar18 = 0;
  if (bVar11) {
    uVar18 = 4;
  }
  *(uint *)((long)param_1 + 0x1f54) =
       *(uint *)((long)param_1 + 0x1f54) & 0xffffffeb | uVar17 | uVar18;
  *(uint *)((long)param_1 + 0x2084) =
       *(uint *)((long)param_1 + 0x2084) & 0xffffffeb | uVar17 | uVar18;
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651460(plVar3,&DAT_10115a16c);
  FUN_100651460(plVar16,&DAT_10115a16c);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar16,1);
  FUN_100642bd8(plVar16,plVar5,1);
  FUN_1001b33b8(param_1,plVar1);
  FUN_100642bd8(plVar4,param_1 + 0x43d,1);
  FUN_100642bd8(plVar4,param_1 + 0x468,1);
  FUN_100642bd8(plVar4,param_1 + 0x48e,1);
  FUN_1001b33e8(param_1,plVar4);
  FUN_10021c8d0(param_1,param_2);
  (**(code **)(*param_1 + 0x118))(param_1);
  if ((char)local_b1 < '\0') {
    operator_delete(local_c8);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  return param_1;
}




void thunk_FUN_10021d134(void)

{
  FUN_10021d134();
  return;
}




void thunk_FUN_10021d18c(long param_1)

{
  FUN_1002a4c50(*(undefined8 *)(param_1 + 0x1d08));
  FUN_100651460(param_1 + 0x1da0,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x1ed0,&DAT_10115a168);
  FUN_100651460(param_1 + 0x2000,&DAT_10115a16c);
  return;
}




void thunk_FUN_10021d1e4(long param_1)

{
  FUN_1002a4c8c(*(undefined8 *)(param_1 + 0x1d08));
  FUN_100651460(param_1 + 0x1da0,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x1ed0,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x2000,&DAT_10115a168);
  return;
}




void FUN_10021ccfc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10021ccfc_101473e70;
  if (param_1[0x39f] != 0) {
    *(undefined4 *)(param_1 + 0x39e) = 0;
  }
  param_1[0x54c] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x618);
  thunk_FUN_100651068(param_1 + 0x5f1);
  thunk_FUN_100651068(param_1 + 0x5cb);
  thunk_FUN_100651068(param_1 + 0x5a5);
  param_1[0x587] = &PTR_FUN_1014a7108;
  param_1[0x59e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5a1);
  FUN_10064e2bc(param_1 + 0x587);
  param_1[0x55d] = &PTR_FUN_1014a6db0;
  param_1[0x574] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x577);
  FUN_10064e2bc(param_1 + 0x55d);
  FUN_10064221c(param_1 + 0x54c);
  param_1[0x48e] = &PTR_FUN_10145f300;
  param_1[0x528] = &PTR_FUN_1014a7108;
  param_1[0x53f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x542);
  FUN_10064e2bc(param_1 + 0x528);
  param_1[0x50a] = &PTR_FUN_1014a7108;
  param_1[0x521] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x524);
  FUN_10064e2bc(param_1 + 0x50a);
  param_1[0x4ec] = &PTR_FUN_1014a7108;
  param_1[0x503] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x506);
  FUN_10064e2bc(param_1 + 0x4ec);
  FUN_10064221c(param_1 + 0x4db);
  FUN_10003bec8(param_1 + 0x48e);
  thunk_FUN_100651068(param_1 + 0x468);
  param_1[0x43d] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x454);
  FUN_10064e2bc(param_1 + 0x43d);
  thunk_FUN_10064e2bc(param_1 + 0x426);
  thunk_FUN_100651068(param_1 + 0x400);
  thunk_FUN_100651068(param_1 + 0x3da);
  thunk_FUN_100651068(param_1 + 0x3b4);
  FUN_10064230c(param_1 + 0x3a3);
  thunk_FUN_1001f2c64(param_1 + 0x3a0);
  if ((void *)param_1[0x39f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x39f]);
    param_1[0x39e] = 0;
    param_1[0x39f] = 0;
  }
  FUN_1001b4464(param_1);
  return;
}




void thunk_FUN_10021ccfc(void)

{
  FUN_10021ccfc();
  return;
}




void FUN_10021cf28(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10021ccfc();
  operator_delete(pvVar1);
  return;
}




void FUN_10021cf3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_60;
  float local_58;
  float local_54;
  
  FUN_100641464(&local_54,&local_58);
  uVar6 = (ulong)(uint)(local_58 + -100.0);
  local_60 = 0;
  FUN_1001b4034(param_1,&local_60);
  uVar5 = uVar6;
  uVar4 = FUN_1001b36cc(local_54 + -200.0,uVar6,param_1);
  FUN_1001b3854(local_54 + -200.0,uVar6,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_1002a4e94(*(undefined8 *)(param_1 + 0x1d08),0);
  FUN_1002a3920(uVar4,uVar5,*(undefined8 *)(param_1 + 0x1d08));
  lVar2 = param_1 + 0x1ed0;
  lVar3 = param_1 + 0x1da0;
  FUN_10064e72c(0x42900000,lVar2,3,lVar3,1);
  lVar1 = param_1 + 0x2000;
  FUN_10064e72c(0x42400000,lVar1,3,lVar2,1);
  FUN_10065745c(0,lVar2,lVar3);
  FUN_10065745c(0,lVar1,lVar3);
  FUN_10064e5ec(0x40800000,0x40800000,param_1 + 0x2a60,8,lVar1,1);
  lVar1 = param_1 + 0x2340;
  FUN_10064e72c(0xc1200000,lVar1,1,param_1 + 0x2470,3);
  FUN_10064e72c(0,lVar1,5,param_1 + 0x2470,5);
  FUN_10064e72c(0xc1200000,param_1 + 0x21e8,1,lVar1,3);
  FUN_10064e72c(0,param_1 + 0x21e8,5,lVar1,5);
  return;
}




void FUN_10021d108(long *param_1)

{
  thunk_FUN_1001b3988();
                    /* WARNING: Could not recover jumptable at 0x00010021d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_10021d134(long param_1)

{
  FUN_1002a4c14(*(undefined8 *)(param_1 + 0x1d08));
  FUN_100651460(param_1 + 0x1da0,&DAT_10115a168);
  FUN_100651460(param_1 + 0x1ed0,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x2000,&DAT_10115a16c);
  return;
}




void FUN_10021d18c(long param_1)

{
  FUN_1002a4c50(*(undefined8 *)(param_1 + 0x1d08));
  FUN_100651460(param_1 + 0x1da0,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x1ed0,&DAT_10115a168);
  FUN_100651460(param_1 + 0x2000,&DAT_10115a16c);
  return;
}




void FUN_10021d1e4(long param_1)

{
  FUN_1002a4c8c(*(undefined8 *)(param_1 + 0x1d08));
  FUN_100651460(param_1 + 0x1da0,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x1ed0,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x2000,&DAT_10115a168);
  return;
}




void FUN_10021d23c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  param_3 = param_3 + 0x2470;
  puVar1 = (undefined8 *)FUN_10003d5bc(param_3);
  uVar4 = *puVar1;
  fVar3 = (float)FUN_10064e3cc(param_3);
  lVar2 = FUN_10003d5bc(param_3);
  local_38 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) * param_2 * 0.5,
                      (float)uVar4 + (float)*(undefined8 *)(lVar2 + 0x10) * fVar3 * 0.5);
  FUN_10021b170(&local_38);
  return;
}




void thunk_FUN_10021d23c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  param_3 = param_3 + 0x2470;
  puVar1 = (undefined8 *)FUN_10003d5bc(param_3);
  uVar4 = *puVar1;
  fVar3 = (float)FUN_10064e3cc(param_3);
  lVar2 = FUN_10003d5bc(param_3);
  uStack_38 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) * param_2 * 0.5,
                       (float)uVar4 + (float)*(undefined8 *)(lVar2 + 0x10) * fVar3 * 0.5);
  FUN_10021b170(&uStack_38);
  return;
}




void FUN_10021d2b8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10021d2c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar2 = FUN_100316150();
  FUN_100316360(uVar2,0x19,0);
  puVar1 = PTR_s_build___MenuPartsCommon_tga_101854970;
  uVar2 = FUN_1004e0150("GAMEPLAY_REMINDER_SETTINGS_TITLE",0);
  uVar3 = FUN_1004e0150("GAMEPLAY_REMINDER_SETTINGS_DESCRIPTION",0);
  uVar4 = FUN_1004e0150("GAMEPLAY_REMINDER_SETTINGS_SUB_DESCRIPTION",0);
  uVar5 = FUN_1004e0150("GAMEPLAY_REMINDER_SETTINGS_KEEP_ON",0);
  uVar6 = FUN_1004e0150("GAMEPLAY_REMINDER_SETTINGS_TURN_OFF",0);
  lStack_68 = FUN_10021d3cc(puVar1,"tutorial_arrow",uVar2,uVar3,uVar4,uVar5,uVar6,&DAT_101873a48);
  local_48 = DAT_101d23814;
  local_70 = FUN_10021d474;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  FUN_10001554c(lStack_68 + 8,&local_70);
  return;
}




void * FUN_10021d3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3588);
  FUN_10021d80c(pvVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1001b35d4(*param_8,param_8[1]);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return pvVar1;
}




void FUN_10021d474(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100316150();
  FUN_100316360(uVar1,0x19,1);
  FUN_1001b3648(param_1);
  return;
}




void FUN_10021d4a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = PTR_s_build___ModalCommon_atlas_101854a68;
  uVar2 = FUN_1004e0150("AUTO_BUY_POPUP_TITLE",0);
  uVar3 = FUN_1004e0150("AUTO_BUY_POPUP_BODY_1",0);
  uVar4 = FUN_1004e0150("AUTO_BUY_POPUP_BODY_2",0);
  uVar5 = FUN_1004e0150("AUTO_BUY_POPUP_ON_BTN",0);
  uVar6 = FUN_1004e0150("AUTO_BUY_POPUP_OFF_BTN",0);
  lVar7 = FUN_10021d3cc(puVar1,"autobuy_image",uVar2,uVar3,uVar4,uVar5,uVar6,&DAT_101873a48);
  local_48 = DAT_101d23814;
  local_70 = FUN_10021d5d4;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = lVar7;
  FUN_10001554c(lVar7 + 8,&local_70);
  local_48 = DAT_101d23818;
  local_70 = FUN_10021d604;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = lVar7;
  FUN_10001554c(lVar7 + 8,&local_70);
  return;
}




void FUN_10021d5d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100316150();
  FUN_100316360(uVar1,0x1a,0);
  FUN_1001b3648(param_1);
  return;
}




void FUN_10021d604(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100316150();
  FUN_100316360(uVar1,0x1a,1);
  FUN_1001b3648(param_1);
  return;
}




void FUN_10021d634(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = PTR_s_build___ModalCommon_atlas_101854a68;
  uVar2 = FUN_1004e0150("AUTO_UPGRADE_POPUP_TITLE",0);
  uVar3 = FUN_1004e0150("AUTO_UPGRADE_POPUP_BODY_1",0);
  uVar4 = FUN_1004e0150("AUTO_UPGRADE_POPUP_BODY_2",0);
  uVar5 = FUN_1004e0150("AUTO_UPGRADE_POPUP_ON_BTN",0);
  uVar6 = FUN_1004e0150("AUTO_UPGRADE_POPUP_OFF_BTN",0);
  lVar7 = FUN_10021d3cc(puVar1,"autoupgrade_image",uVar2,uVar3,uVar4,uVar5,uVar6,&DAT_101873a48);
  local_48 = DAT_101d23814;
  local_70 = FUN_10021d764;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = lVar7;
  FUN_10001554c(lVar7 + 8,&local_70);
  local_48 = DAT_101d23818;
  local_70 = FUN_10021d794;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = lVar7;
  FUN_10001554c(lVar7 + 8,&local_70);
  return;
}




void FUN_10021d764(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100316150();
  FUN_100316360(uVar1,0x1b,1);
  FUN_1001b3648(param_1);
  return;
}




void FUN_10021d794(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100316150();
  FUN_100316360(uVar1,0x1b,0);
  FUN_1001b3648(param_1);
  return;
}




void FUN_10021d7c4(undefined8 param_1)

{
  FUN_100644bb0(param_1,DAT_101d23814);
  FUN_100644bb0(param_1,DAT_101d23818);
  thunk_FUN_1001b3a68(param_1);
  FUN_10032b458();
  return;
}




long * FUN_10021d80c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101473fa0;
  uVar2 = thunk_FUN_1002eef24(puVar1 + 0x39e);
  FUN_1002ef1fc(uVar2,param_2,param_3,param_5,param_6,param_7,param_8);
  FUN_1001b339c(param_1,puVar1 + 0x39e);
  FUN_1001b3418(param_1,param_4);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_10021d8d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  uVar2 = 0x448fc000;
  uVar1 = FUN_1001b3694(0x45200000,0x448fc000,param_1);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  FUN_10064e48c(param_1 + 0x1cf0,&DAT_101158398);
  FUN_1002ef278(param_1 + 0x1cf0);
  FUN_1001b3854(uVar1,uVar2,param_1,0);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_10021d97c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101473fa0;
  param_1[0x39e] = &PTR_FUN_10148bdf0;
  param_1[0x568] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x689);
  FUN_1002ebc50(param_1 + 0x568);
  param_1[0x41f] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x540);
  FUN_1002ebc50(param_1 + 0x41f);
  thunk_FUN_100651068(param_1 + 0x3f9);
  thunk_FUN_100651068(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_1014a7108;
  param_1[0x3cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3cf);
  FUN_10064e2bc(param_1 + 0x3b5);
  FUN_10064e2bc(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021da68(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101473fa0;
  param_1[0x39e] = &PTR_FUN_10148bdf0;
  param_1[0x568] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x689);
  FUN_1002ebc50(param_1 + 0x568);
  param_1[0x41f] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x540);
  FUN_1002ebc50(param_1 + 0x41f);
  thunk_FUN_100651068(param_1 + 0x3f9);
  thunk_FUN_100651068(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_1014a7108;
  param_1[0x3cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3cf);
  FUN_10064e2bc(param_1 + 0x3b5);
  FUN_10064e2bc(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021db58(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1d00);
  uVar2 = FUN_10021dba4();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,"POPUP_KEY_IN_GAME_SETTINGS",1,0,1);
  return;
}




long FUN_10021dba4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1001b2b88();
  *puVar2 = &PTR_FUN_1014740d0;
  FUN_1000bf3c0(puVar2 + 0x39e);
  FUN_1001b339c(param_1,*(undefined8 *)(param_1 + 0x1cf8));
  FUN_1001b316c(param_1,1);
  uVar3 = FUN_1004e0150("HUD_SETTINGS_TITLE",0);
  FUN_1001b3418(param_1,uVar3);
  iVar1 = FUN_10012709c();
  if (iVar1 == 1) {
    FUN_1000cd1fc(*(undefined8 *)(param_1 + 0x1cf8));
  }
  return param_1;
}




void FUN_10021dc28(long param_1)

{
  thunk_FUN_1001b3988();
  FUN_1000bf48c(param_1 + 0x1cf0,1);
  return;
}




void FUN_10021dc54(long param_1)

{
  thunk_FUN_1001b3a68();
  FUN_1000bf48c(param_1 + 0x1cf0,0);
  return;
}




void FUN_10021dc80(long param_1)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  uVar3 = (ulong)(uint)(local_38 + -100.0);
  uVar4 = NEON_fminnm(local_34 + -200.0,0x453b8000);
  local_40 = 0x41200000;
  FUN_1001b4034(param_1,&local_40);
  fVar2 = (float)FUN_1001b36cc(uVar4,uVar3,param_1);
  FUN_1001b3694(param_1);
  FUN_1001b3854(param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e47c(fVar2 + -80.0,uVar3,*(undefined8 *)(param_1 + 0x1cf8));
  (**(code **)(**(long **)(param_1 + 0x1cf8) + 0x90))();
  lVar1 = *(long *)(param_1 + 0x1cf8);
  if ((*(float *)(lVar1 + 0x40) != 40.0) || (*(float *)(lVar1 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar1 + 0x40) = 0x42200000;
    FUN_1000200a0();
  }
  return;
}




void FUN_10021dd8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014740d0;
  FUN_1000bf408(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021ddc4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014740d0;
  FUN_1000bf408(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021de00(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_101d237b0 != 0) && (uVar1 = FUN_1001e7f58(), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x1cf8);
  DAT_101d237b0 = FUN_10021de60(pvVar2,param_1);
  FUN_1001e7f30(DAT_101d237b0,0,1,0,1);
  return;
}




long * FUN_10021de60(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1001b2b88();
  *puVar2 = &PTR_thunk_FUN_1001b4464_101474200;
  puVar2[0x39e] = param_2;
  iVar1 = FUN_100642d08(param_2);
  if (iVar1 != 0) {
    FUN_1006423ec(param_1[0x39e],1);
  }
  FUN_1001b339c(param_1,param_1[0x39e]);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_10021decc(long param_1)

{
  undefined4 local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  fStack_3c = local_38 + -100.0;
  local_40 = FUN_1001b36cc(local_34 + -200.0,param_1);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf0),&local_40);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x148))(*(long **)(param_1 + 0x1cf0),1);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x158))(*(long **)(param_1 + 0x1cf0),1);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x150))(*(long **)(param_1 + 0x1cf0),1);
  return;
}




void FUN_10021df9c(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x1cf0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x148))(plVar2,0);
    (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x158))(*(long **)(param_1 + 0x1cf0),0);
    (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x150))(*(long **)(param_1 + 0x1cf0),0);
    iVar1 = FUN_100642d08(*(undefined8 *)(param_1 + 0x1cf0));
    if (iVar1 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_1 + 0x1cf0),1);
    }
  }
  thunk_FUN_1001b3a68(param_1);
  DAT_101d237b0 = 0;
  return;
}




void FUN_10021e024(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001b4464();
  operator_delete(pvVar1);
  return;
}




void FUN_10021e038(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  undefined2 local_44;
  
  pvVar1 = operator_new(0x5020);
  FUN_1000f9d14(auStack_f8,param_1);
  FUN_1000f9d9c(auStack_e8,param_1 + 0x10);
  FUN_10003330c(auStack_d8,param_1 + 0x20);
  FUN_10003330c(auStack_c0,param_1 + 0x38);
  FUN_10003330c(auStack_a8,param_1 + 0x50);
  FUN_10003330c(auStack_90,param_1 + 0x68);
  FUN_10003330c(auStack_78,param_1 + 0x80);
  FUN_10003330c(auStack_60,param_1 + 0x98);
  local_48 = *(undefined4 *)(param_1 + 0xb0);
  local_44 = *(undefined2 *)(param_1 + 0xb4);
  FUN_10021e12c(pvVar1,auStack_f8,param_2,param_3);
  FUN_1000f7abc(auStack_f8);
  FUN_1001e7f30(pvVar1,"INVENTORY_CHEST_POPUP",1,0,1);
  return;
}




void FUN_10021e964(long param_1)

{
  *(uint *)(param_1 + 0x2ccc) = *(uint *)(param_1 + 0x2ccc) | 4;
  return;
}




void thunk_FUN_10021f400(long param_1)

{
  undefined8 uVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_1000f7ab0();
  FUN_1000f76e8(uVar1,param_1 + 0x1d18);
  *(uint *)(param_1 + 0x34fc) = *(uint *)(param_1 + 0x34fc) & 0xfffffffb;
  FUN_1001e7f70("INVENTORY_CHEST_POPUP");
  if (*(int *)(param_1 + 0x1cf8) != 0) {
    FUN_1000fa000(param_1 + 0x1cf8,*(undefined8 *)(param_1 + 0x1d00));
    return;
  }
  FUN_10001549c(apvStack_38,"");
  FUN_1000fa000(param_1 + 0x1cf8,apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void thunk_FUN_10021f4a0(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  void *apvStack_50 [2];
  char cStack_39;
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  FUN_10003330c(appuStack_38,param_1 + 0x1d90);
  uVar2 = FUN_10002f320();
  pppuVar1 = (undefined8 ***)appuStack_38[0];
  if (-1 < cStack_21) {
    pppuVar1 = appuStack_38;
  }
  FUN_10001549c(apvStack_50,pppuVar1);
  FUN_1000312cc(uVar2,apvStack_50,&DAT_101d91198,0,0);
  if (cStack_39 < '\0') {
    operator_delete(apvStack_50[0]);
  }
  if (cStack_21 < '\0') {
    operator_delete(appuStack_38[0]);
  }
  return;
}




void FUN_10021e97c(long param_1)

{
  *(uint *)(param_1 + 0x2ccc) = *(uint *)(param_1 + 0x2ccc) & 0xfffffffb;
  return;
}




void FUN_10021ec78(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_10021ec78_101474330;
  param_1[0x39e] = &PTR_FUN_101474468;
  uVar2 = *(uint *)(param_1 + 0x3b6);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x3b7];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0x3b7];
        uVar2 = *(uint *)(param_1 + 0x3b6);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (param_1[0x3b7] != 0) {
    *(undefined4 *)(param_1 + 0x3b6) = 0;
  }
  param_1[0x946] = &PTR_FUN_10145f300;
  param_1[0x9e0] = &PTR_FUN_1014a7108;
  param_1[0x9f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9fa);
  FUN_10064e2bc(param_1 + 0x9e0);
  param_1[0x9c2] = &PTR_FUN_1014a7108;
  param_1[0x9d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9dc);
  FUN_10064e2bc(param_1 + 0x9c2);
  param_1[0x9a4] = &PTR_FUN_1014a7108;
  param_1[0x9bb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9be);
  FUN_10064e2bc(param_1 + 0x9a4);
  FUN_10064221c(param_1 + 0x993);
  FUN_10003bec8(param_1 + 0x946);
  FUN_10003bd40(param_1 + 0x68f);
  thunk_FUN_100651068(param_1 + 0x669);
  param_1[0x5d3] = &PTR_FUN_101464e50;
  param_1[0x63e] = &PTR_FUN_1014a6db0;
  param_1[0x655] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x658);
  FUN_10064e2bc(param_1 + 0x63e);
  param_1[0x614] = &PTR_FUN_1014a6db0;
  param_1[0x62b] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x62e);
  FUN_10064e2bc(param_1 + 0x614);
  param_1[0x5ea] = &PTR_FUN_1014a6db0;
  param_1[0x601] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x604);
  FUN_10064e2bc(param_1 + 0x5ea);
  FUN_10064e2bc(param_1 + 0x5d3);
  param_1[0x5b5] = &PTR_FUN_1014a7108;
  param_1[0x5cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5cf);
  FUN_10064e2bc(param_1 + 0x5b5);
  FUN_10064e2bc(param_1 + 0x59a);
  FUN_10064221c(param_1 + 0x589);
  param_1[0x56b] = &PTR_FUN_1014a7108;
  param_1[0x582] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x585);
  FUN_10064e2bc(param_1 + 0x56b);
  param_1[0x54d] = &PTR_FUN_1014a7108;
  param_1[0x564] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x567);
  FUN_10064e2bc(param_1 + 0x54d);
  param_1[0x52f] = &PTR_FUN_1014a7108;
  param_1[0x546] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x549);
  FUN_10064e2bc(param_1 + 0x52f);
  FUN_10064e2bc(param_1 + 0x514);
  thunk_FUN_100534a3c(param_1 + 0x3cf);
  thunk_FUN_10064e2bc(param_1 + 0x3b8);
  if ((void *)param_1[0x3b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3b7]);
    param_1[0x3b6] = 0;
    param_1[0x3b7] = 0;
  }
  FUN_1000f7abc(param_1 + 0x39f);
  param_1[0x39e] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void thunk_FUN_10021ec78(void)

{
  FUN_10021ec78();
  return;
}




void FUN_10021ef80(long param_1)

{
  FUN_10021ec78(param_1 + -0x1cf0);
  return;
}




void FUN_10021ef8c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10021ec78();
  operator_delete(pvVar1);
  return;
}




void FUN_10021efa0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10021ec78(param_1 + -0x1cf0);
  operator_delete(pvVar1);
  return;
}




void FUN_10021efbc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  undefined1 auStack_88 [4];
  float local_84;
  
  FUN_100641464(&local_84,auStack_88);
  fVar12 = local_84 * 0.385;
  local_90 = 0;
  FUN_1001b4034(param_1,&local_90);
  fVar10 = fVar12;
  uVar9 = FUN_1001b36cc(local_84 * 0.55,param_1);
  local_90 = CONCAT44(fVar10,uVar9);
  FUN_1001b3854(local_84 * 0.55,fVar12,param_1,0);
  FUN_1001b3b58(param_1);
  lVar1 = param_1 + 0x1dc0;
  FUN_10064e48c(lVar1,&local_90);
  lVar2 = param_1 + 0x2a68;
  fVar10 = (float)FUN_10064e3cc(lVar1);
  fStack_94 = (float)FUN_10064e3cc(lVar1);
  fStack_94 = fStack_94 * 0.4;
  local_98 = fVar10 * 0.4;
  FUN_10064e48c(lVar2,&local_98);
  lVar3 = param_1 + 0x1e78;
  fVar10 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  fVar12 = fVar12 * 0.7;
  FUN_10064e47c(fVar10 * 0.55,fVar12,lVar3);
  uVar11 = FUN_10064e3cc(lVar3);
  FUN_10064e3cc(lVar3);
  FUN_10064e47c(uVar11,fVar12 * 0.3,param_1 + 0x2978);
  if (*(int *)(param_1 + 0x1db0) != 0) {
    uVar8 = 0;
    do {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x1db8) + uVar8 * 8);
      fVar10 = (float)FUN_10064e3cc(lVar3);
      FUN_10021f3b0(fVar10 + -20.0,uVar11);
      if (uVar8 == 0) {
        lVar7 = **(long **)(param_1 + 0x1db8);
        bVar6 = false;
        if ((*(float *)(lVar7 + 0x40) == 20.0) && (bVar6 = false, !NAN(*(float *)(lVar7 + 0x44)))) {
          bVar6 = *(float *)(lVar7 + 0x44) == 10.0;
        }
        if (!bVar6) {
          *(undefined8 *)(lVar7 + 0x40) = 0x4120000041a00000;
          FUN_1000200a0();
        }
      }
      else {
        FUN_10064e5ec(0,0,*(undefined8 *)(*(long *)(param_1 + 0x1db8) + uVar8 * 8),0,
                      *(undefined8 *)(*(long *)(param_1 + 0x1db8) + (ulong)((int)uVar8 - 1) * 8),3);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x1db0));
  }
  FUN_10064e48c(param_1 + 0x2cd0,&local_90);
  lVar7 = param_1 + 0x2e98;
  fVar10 = (float)FUN_10064e3cc(lVar3);
  fVar12 = -30.0;
  lVar4 = param_1 + 0x3348;
  FUN_1006511d0(lVar4);
  FUN_10064e47c(fVar10 + -30.0,fVar12 + 20.0,lVar7);
  fVar10 = (float)FUN_10064e3cc(lVar7);
  uVar9 = 0xc1a00000;
  FUN_100651708(fVar10 + -20.0,lVar4,1);
  lVar5 = param_1 + 0x28a0;
  local_98 = (float)FUN_1006425d0(lVar3,0,0,1,1);
  fStack_94 = (float)uVar9;
  FUN_10064e48c(lVar5,&local_98);
  FUN_10064e5ec(0x41200000,0,lVar2,7,lVar1,7);
  FUN_10064e5ec(0x41a00000,0xc1a00000,param_1 + 0x4a30,3,lVar2,3);
  FUN_10064e5ec(0xc2700000,0x41200000,lVar3,1,lVar1,1);
  FUN_10064e5ec(0x41200000,0x41200000,lVar5,0,lVar3,0);
  FUN_10064e5ec(0,0,param_1 + 0x2978,3,lVar5,3);
  lVar2 = param_1 + 0x3478;
  FUN_10064e5ec(0,0x41f00000,lVar2,4,lVar3,6);
  FUN_10064e5ec(0x41200000,0,param_1 + 0x2b58,7,lVar2,7);
  FUN_10064e5ec(0,0,param_1 + 0x2da8,6,lVar2,4);
  FUN_10064e5ec(0,0x40d00000,lVar7,6,param_1 + 0x2da8,4);
  FUN_10064e5ec(0x41200000,0,lVar4,0,lVar7,0);
  FUN_10064e5ec(0,0,param_1 + 0x2cd0,0,lVar1,0);
  return;
}




void FUN_10021f3b0(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_10065317c(param_2 + 0x1e8);
  FUN_100651708(param_1 - fVar1,param_2 + 0xb8,1);
  FUN_10021f780(param_2);
  return;
}




void FUN_10021f3f8(void)

{
  return;
}




void FUN_10021f3fc(void)

{
  return;
}




void FUN_10021f400(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_1000f7ab0();
  FUN_1000f76e8(uVar1,param_1 + 0x1d18);
  *(uint *)(param_1 + 0x34fc) = *(uint *)(param_1 + 0x34fc) & 0xfffffffb;
  FUN_1001e7f70("INVENTORY_CHEST_POPUP");
  if (*(int *)(param_1 + 0x1cf8) != 0) {
    FUN_1000fa000(param_1 + 0x1cf8,*(undefined8 *)(param_1 + 0x1d00));
    return;
  }
  FUN_10001549c(local_38,"");
  FUN_1000fa000(param_1 + 0x1cf8,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10021f4a0(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  void *local_50 [2];
  char local_39;
  undefined8 **local_38 [2];
  char local_21;
  
  FUN_10003330c(local_38,param_1 + 0x1d90);
  uVar2 = FUN_10002f320();
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10001549c(local_50,pppuVar1);
  FUN_1000312cc(uVar2,local_50,&DAT_101d91198,0,0);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10021f530(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10021f8e8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10021f5b0(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  
  bVar7 = *(byte *)(param_3 + 0x17);
  uVar5 = (ulong)bVar7;
  uVar6 = *(ulong *)(param_3 + 8);
  uVar2 = uVar6;
  if (-1 < (char)bVar7) {
    uVar2 = uVar5;
  }
  if (uVar2 == 4) {
    iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013d25c4);
    if (iVar3 != 0) {
      bVar7 = *(byte *)(param_3 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_3 + 8);
      goto LAB_10021f614;
    }
    FUN_100652d8c(param_1 + 0x1e8);
    pcVar4 = PTR_s_build___Frames_tga_101854a00;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      param_2 = (long *)*param_2;
    }
  }
  else {
LAB_10021f614:
    if (-1 < (char)bVar7) {
      uVar6 = uVar5;
    }
    if ((uVar6 != 0x10) ||
       (iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013e5afc), iVar3 != 0))
    {
      lVar1 = param_1 + 0x1e8;
      FUN_100652d8c(lVar1);
      FUN_100652ca4(lVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        param_2 = (long *)*param_2;
      }
      FUN_100652cdc(lVar1,param_2);
      goto LAB_10021f6d8;
    }
    FUN_100652d8c(param_1 + 0x1e8);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      param_2 = (long *)*param_2;
    }
    pcVar4 = "build://HatsMaterials.atlas";
  }
  FUN_100652cac(param_1 + 0x1e8,pcVar4,param_2);
LAB_10021f6d8:
  FUN_10064e47c(0x42a00000,0x42a00000,param_1 + 0x1e8);
  return;
}




long * FUN_10021f6f8(long *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_101474490;
  thunk_FUN_100650e64(puVar1 + 0x17);
  thunk_FUN_100652c08(param_1 + 0x3d);
  *(undefined1 *)(param_1 + 0x5b) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3d,1);
  return param_1;
}




void FUN_10021f780(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  bool bVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if ((char)param_3[0x5b] == '\0') {
    FUN_10064e72c(0x40000000,param_3 + 0x17,3,param_3 + 0x3d,1);
  }
  else {
    *(uint *)((long)param_3 + 0x26c) = *(uint *)((long)param_3 + 0x26c) & 0xfffffffb;
    param_2 = 0;
    bVar1 = false;
    if ((*(float *)((long)param_3 + 0xfc) == 0.0) &&
       (bVar1 = false, !NAN(*(float *)(param_3 + 0x1f)))) {
      bVar1 = *(float *)(param_3 + 0x1f) == 0.0;
    }
    if (!bVar1) {
      param_3[0x1f] = 0;
      FUN_1000200a0(param_3 + 0x17);
    }
  }
  local_28 = (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  uStack_24 = param_2;
  FUN_10064e48c(param_3,&local_28);
  return;
}




void FUN_10021f824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101474490;
  param_1[0x3d] = &PTR_FUN_1014a7108;
  param_1[0x54] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x57);
  FUN_10064e2bc(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10021f884(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101474490;
  param_1[0x3d] = &PTR_FUN_1014a7108;
  param_1[0x54] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x57);
  FUN_10064e2bc(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021f8e8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10021f964(void)

{
  undefined8 uVar1;
  
  operator_new(0x7b6b0);
  uVar1 = FUN_10021f998();
  FUN_1001e7f30(uVar1,"GUILD_PANEL_POPUP",1,0,1);
  return;
}




long * FUN_10021f998(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  void *pvVar12;
  undefined **local_280 [5];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 auStack_1e8 [8];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar6 = (undefined8 *)FUN_1001b2b88();
  *puVar6 = &PTR_FUN_1014745d8;
  puVar6 = puVar6 + 0x39e;
  thunk_FUN_10027e884(puVar6);
  uVar7 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1001b3418(param_1,uVar7);
  FUN_1001b339c(param_1,puVar6);
  *(uint *)((long)param_1 + 0x1d74) = *(uint *)((long)param_1 + 0x1d74) & 0xfffffffb;
  FUN_100281140(puVar6,0);
  iVar5 = FUN_10015d3f8();
  if (iVar5 == 0) goto LAB_10021fb98;
  lVar8 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar8 + 0x548f);
  uVar9 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar8 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar9;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar12 = *(void **)(lVar8 + 0x5478);
    puVar3 = pvVar12;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar8 + 0x5478);
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar11,sVar1), iVar5 != 0)) goto LAB_10021fad0;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar11 == ((uint)pvVar12 & 0xff)) {
        pbVar10 = (byte *)(lVar8 + 0x5479);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_10021faf4;
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 == *pbVar11);
      }
      goto LAB_10021fad0;
    }
LAB_10021faf4:
    FUN_1004f1580(local_280);
    local_280[0] = &PTR_thunk_FUN_10015a304_10145bec0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    local_110 = 0;
    uStack_250 = 0;
    local_258 = 0;
    uStack_240 = 0;
    local_248 = 0;
    uStack_230 = 0;
    local_238 = 0;
    uStack_220 = 0;
    local_228 = 0;
    uStack_210 = 0;
    local_218 = 0;
    uStack_200 = 0;
    local_208 = 0;
    FUN_10015a14c(auStack_1e8);
    FUN_100159fc8(&local_258);
    local_50 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    FUN_1004f15d8(local_280);
    FUN_10028279c(puVar6,local_280);
    FUN_10015a304(local_280);
  }
  else {
LAB_10021fad0:
    uVar7 = FUN_10015d3ec();
    lVar8 = FUN_10015d3ec();
    FUN_1001634c4(uVar7,lVar8 + 0x5478,1);
  }
LAB_10021fb98:
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_10021fbc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014745d8;
  thunk_FUN_100280618(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_10021fbfc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014745d8;
  thunk_FUN_100280618(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10021fc38(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  fVar2 = local_38 + -100.0;
  uVar1 = FUN_1001b36cc(local_34 + -200.0,param_1);
  local_40 = CONCAT44(fVar2,uVar1);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(param_1 + 0x1cf0,&local_40);
  return;
}




long * FUN_10021fce0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  code *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar6 = (undefined8 *)FUN_1001ad5cc();
  *puVar6 = &PTR_FUN_101474708;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100650e64(puVar6);
  plVar1 = param_1 + 0x3d;
  FUN_10064fd54(plVar1,1);
  param_1[0x3d] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar2 = param_1 + 0x56;
  thunk_FUN_100181304(plVar2,0);
  *(undefined1 *)((long)param_1 + 0x186c) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,puVar6,1);
  FUN_100642bd8(plVar1,plVar2,1);
  iVar5 = FUN_100126c88();
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar5 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(puVar6,*ppuVar3);
  uVar4 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x13c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_1000200a0(puVar6);
  }
  FUN_1004e3120(&local_70,"");
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar2,0,&local_70,&DAT_10115a168,&DAT_101dc1cb8,
                PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_100181c68(0x43480000,plVar2);
  FUN_1001b495c(0,plVar2);
  local_48 = DAT_101d91884;
  local_70 = thunk_FUN_100220084;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_68 = param_1;
  FUN_10001554c(param_1 + 0x57,&local_70);
  return param_1;
}




long * thunk_FUN_10021fce0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar6 = (undefined8 *)FUN_1001ad5cc();
  *puVar6 = &PTR_FUN_101474708;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100650e64(puVar6);
  plVar1 = param_1 + 0x3d;
  FUN_10064fd54(plVar1,1);
  param_1[0x3d] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar2 = param_1 + 0x56;
  thunk_FUN_100181304(plVar2,0);
  *(undefined1 *)((long)param_1 + 0x186c) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,puVar6,1);
  FUN_100642bd8(plVar1,plVar2,1);
  iVar5 = FUN_100126c88();
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar5 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(puVar6,*ppuVar3);
  uVar4 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x13c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_1000200a0(puVar6);
  }
  FUN_1004e3120(&pcStack_70,"");
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar2,0,&pcStack_70,&DAT_10115a168,&DAT_101dc1cb8,
                PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  if (plStack_68 != (void *)0x0) {
    operator_delete__(plStack_68);
  }
  FUN_100181c68(0x43480000,plVar2);
  FUN_1001b495c(0,plVar2);
  uStack_48 = DAT_101d91884;
  pcStack_70 = thunk_FUN_100220084;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x57,&pcStack_70);
  return param_1;
}




void FUN_10021fea0(long param_1,int param_2)

{
  *(int *)(param_1 + 0x1868) = param_2;
  if (param_2 == 1) {
    FUN_10021ff2c();
    return;
  }
  if (param_2 == 0) {
    FUN_10021febc();
    return;
  }
  return;
}




void FUN_10021febc(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_DESC",0);
  FUN_1006513c0(param_1 + 0xb8,uVar2);
  pcVar1 = "GENERIC_DIALOG_OKAY";
  if (*(char *)(param_1 + 0x186c) != '\0') {
    pcVar1 = "MENU_MARKET_GET_GLORY";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_100181af8(param_1 + 0x2b0,uVar2);
  return;
}




void FUN_10021ff2c(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_DESC",0);
  FUN_1006513c0(param_1 + 0xb8,uVar2);
  pcVar1 = "GENERIC_DIALOG_OKAY";
  if (*(char *)(param_1 + 0x186c) != '\0') {
    pcVar1 = "MENU_MARKET_GET_ICE";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_100181af8(param_1 + 0x2b0,uVar2);
  return;
}




void FUN_10021ff9c(long *param_1)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  undefined1 auStack_40 [16];
  
  FUN_1001ad608();
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_100651708(fVar3 + -200.0,param_1 + 0x17,1);
  plVar1 = param_1 + 0x3d;
  FUN_10064fc74(0,0,0x42c80000,auStack_40);
  FUN_100650064(plVar1,auStack_40);
  (**(code **)(param_1[0x3d] + 0x90))(plVar1);
  FUN_10064ff6c(0x3f000000,plVar1,0);
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x45) == fVar3 * 0.5) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x22c)))) {
    bVar2 = *(float *)((long)param_1 + 0x22c) == 100.0;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x45) = fVar3 * 0.5;
    *(undefined4 *)((long)param_1 + 0x22c) = 0x42c80000;
    FUN_1000200a0(plVar1);
  }
  return;
}




void thunk_FUN_1002194d0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_10052bc30();
    if (iVar1 != 0) {
      FUN_1002192b8(param_1);
    }
    FUN_100129ad4();
    return;
  }
  return;
}




void thunk_FUN_100214410(void)

{
  FUN_100214410();
  return;
}




void thunk_FUN_10021a248(void)

{
  FUN_10021a248();
  return;
}

