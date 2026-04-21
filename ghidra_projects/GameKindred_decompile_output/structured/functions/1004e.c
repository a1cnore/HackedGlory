// functions/1004e — 617 functions
#include "GameKindred.h"




void thunk_FUN_1004e9440(void)

{
  FUN_1004e9440();
  return;
}




void thunk_FUN_1004edbec(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x40);
  FUN_1004e4464(pvVar1,1);
  DAT_101e94728 = pvVar1;
  puVar2 = operator_new(0x70);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 1;
  FUN_1004ed258();
  DAT_101e94730 = puVar2;
  return;
}




void thunk_FUN_1004edc64(void)

{
  pthread_mutex_t *ppVar1;
  void *pvVar2;
  
  if (DAT_101e94730 != 0) {
    pvVar2 = (void *)FUN_1004ed298();
    operator_delete(pvVar2);
  }
  ppVar1 = DAT_101e94728;
  if (DAT_101e94728 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_destroy(DAT_101e94728);
    operator_delete(ppVar1);
  }
  DAT_101e94730 = 0;
  DAT_101e94728 = (pthread_mutex_t *)0x0;
  return;
}




void thunk_FUN_1004edcbc(void)

{
  FUN_1004ed768(DAT_101e94730);
  return;
}




void thunk_FUN_1004edcc8(void)

{
  FUN_1004ed374(DAT_101e94730);
  return;
}




undefined8 * FUN_1004e0124(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_101e94420;
  if (-1 < DAT_101e94430._7_1_) {
    puVar1 = &DAT_101e94420;
  }
  return puVar1;
}




void FUN_1004e0140(char *param_1)

{
  _strcpy(&DAT_101e94440,param_1);
  return;
}




undefined8 * FUN_1004e0150(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  void *local_48 [2];
  char local_31;
  
  lVar2 = DAT_101e94438;
  puVar1 = &DAT_101e94440;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  FUN_10001549c(local_48,puVar1);
  lVar2 = FUN_1004e03b4(lVar2,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  puVar4 = &DAT_101d91650;
  if (DAT_101e94438 + 8 != lVar2 && param_1 != 0) {
    FUN_10001549c(local_48,param_1);
    lVar3 = FUN_1004e04b4(lVar2 + 0x38,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (lVar2 + 0x40 != lVar3) {
      puVar4 = (undefined8 *)(lVar3 + 0x38);
    }
  }
  return puVar4;
}




long FUN_1004e0218(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_1004e0534(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x50);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined8 *)((long)pvVar2 + 0x48) = 0;
    *(undefined8 *)((long)pvVar2 + 0x40) = 0;
    *(undefined8 **)((long)pvVar2 + 0x38) = (undefined8 *)((long)pvVar2 + 0x40);
    FUN_1004e05d8(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_1004e02a0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1004e02a0(param_1,*param_2);
    FUN_1004e02a0(param_1,param_2[1]);
    FUN_1004e02e8(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1004e02e8(undefined8 *param_1)

{
  FUN_1004e0328(param_1 + 3,param_1[4]);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}




void FUN_1004e0328(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1004e0328(param_1,*param_2);
    FUN_1004e0328(param_1,param_2[1]);
    FUN_1004e0370(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1004e0370(undefined8 *param_1)

{
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}




long * FUN_1004e03b4(long param_1,undefined8 param_2)

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
      iVar2 = FUN_1004e0434(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1004e0434(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_1004e0434(undefined8 *param_1,undefined8 *param_2)

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
    if (uVar8 != 0) goto LAB_1004e04a4;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_1004e04a4:
  return uVar8 >> 0x1f;
}




long * FUN_1004e04b4(long param_1,undefined8 param_2)

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
      iVar2 = FUN_1004e0434(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1004e0434(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




long * FUN_1004e0534(long param_1,undefined8 *param_2,undefined8 param_3)

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
        iVar1 = FUN_1004e0434(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1004e0434(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_1004e05d8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




undefined1  [16] FUN_1004e062c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_1004e06bc(param_1,&local_38,param_2);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x48);
    FUN_10003330c((long)pvVar3 + 0x20,param_3);
    thunk_FUN_1004e439c((long)pvVar3 + 0x38,param_3 + 0x18);
    FUN_1004e0760(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_1004e06bc(long param_1,undefined8 *param_2,undefined8 param_3)

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
        iVar1 = FUN_1004e0434(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1004e0434(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_1004e0760(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_1004e07b4(void)

{
  DAT_101e94420 = 0;
  DAT_101e94428 = 0;
  DAT_101e94430 = 0;
  ___cxa_atexit(FUN_1000e6204,&DAT_101e94420,0x100000000);
  return;
}




undefined8 FUN_1004e07d8(undefined8 param_1)

{
  FUN_1004e0878();
  return param_1;
}




void thunk_FUN_1004e0894(uint *param_1,void *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  if (0 < (int)param_3) {
    uVar2 = *param_1;
    uVar5 = (ulong)(uVar2 >> 3) & 0x3f;
    uVar3 = param_1[1] + (param_3 >> 0x1d);
    *param_1 = uVar2 + param_3 * 8;
    param_1[1] = uVar3;
    if (CARRY4(uVar2,param_3 * 8)) {
      param_1[1] = uVar3 + 1;
    }
    iVar4 = (int)uVar5;
    if (iVar4 != 0) {
      uVar3 = 0x40 - iVar4;
      if ((int)(iVar4 + param_3) < 0x41) {
        uVar3 = param_3;
      }
      _memcpy((void *)((long)param_1 + uVar5 + 0x18),param_2,(ulong)uVar3);
      if ((int)(uVar3 + iVar4) < 0x40) {
        return;
      }
      param_2 = (void *)((long)param_2 + (ulong)uVar3);
      param_3 = param_3 - uVar3;
      FUN_1004e0988(param_1,param_1 + 6);
    }
    uVar3 = param_3;
    if (0x3f < (int)param_3) {
      do {
        FUN_1004e0988(param_1,param_2);
        param_2 = (void *)((long)param_2 + 0x40);
        param_3 = uVar3 - 0x40;
        bVar1 = 0x7f < (int)uVar3;
        uVar3 = param_3;
      } while (bVar1);
    }
    if (param_3 != 0) {
      _memcpy(param_1 + 6,param_2,(long)(int)param_3);
    }
  }
  return;
}




void FUN_1004e0800(undefined8 param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)((long)param_2 + 0x17);
  plVar1 = (long *)*param_2;
  if (-1 < (char)bVar2) {
    plVar1 = param_2;
  }
  uVar3 = *(uint *)(param_2 + 1);
  if (-1 < (char)bVar2) {
    uVar3 = (uint)bVar2;
  }
  FUN_1004e0894(param_1,plVar1,uVar3);
  return;
}




void thunk_FUN_1004e13c8(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  uVar1 = 0;
  uVar2 = 0;
  lStack_28 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    auStack_30[uVar2] = (char)(param_1[uVar2 >> 2 & 0x3fffffff] >> (ulong)(uVar1 & 0x18));
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 8;
  } while (uVar2 != 8);
  FUN_1004e0894(param_1,&DAT_10115bdf8,(0x37 - (*param_1 >> 3) & 0x3f) + 1);
  FUN_1004e0894(param_1,auStack_30,8);
  uVar1 = 0;
  uVar2 = 0;
  do {
    *(char *)(param_2 + uVar2) =
         (char)(param_1[(uVar2 >> 2 & 0x3fffffff) + 2] >> (ulong)(uVar1 & 0x18));
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 8;
  } while (uVar2 != 0x10);
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e0828(long param_1,long param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  
  lVar3 = 0;
  pcVar1 = "0123456789abcdef";
  if (param_3 == 0) {
    pcVar1 = "0123456789ABCDEF0123456789abcdef";
  }
  pcVar4 = (char *)(param_2 + 1);
  do {
    bVar2 = *(byte *)(param_1 + lVar3);
    pcVar4[-1] = pcVar1[bVar2 >> 4];
    *pcVar4 = pcVar1[(ulong)bVar2 & 0xf];
    lVar3 = lVar3 + 1;
    pcVar4 = pcVar4 + 2;
  } while (lVar3 != 0x10);
  *(undefined1 *)(param_2 + 0x20) = 0;
  return;
}




void FUN_1004e0878(undefined8 *param_1)

{
  param_1[1] = 0xefcdab8967452301;
  *param_1 = 0;
  param_1[2] = 0x1032547698badcfe;
  return;
}




void FUN_1004e0894(uint *param_1,void *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  if (0 < (int)param_3) {
    uVar2 = *param_1;
    uVar5 = (ulong)(uVar2 >> 3) & 0x3f;
    uVar3 = param_1[1] + (param_3 >> 0x1d);
    *param_1 = uVar2 + param_3 * 8;
    param_1[1] = uVar3;
    if (CARRY4(uVar2,param_3 * 8)) {
      param_1[1] = uVar3 + 1;
    }
    iVar4 = (int)uVar5;
    if (iVar4 != 0) {
      uVar3 = 0x40 - iVar4;
      if ((int)(iVar4 + param_3) < 0x41) {
        uVar3 = param_3;
      }
      _memcpy((void *)((long)param_1 + uVar5 + 0x18),param_2,(ulong)uVar3);
      if ((int)(uVar3 + iVar4) < 0x40) {
        return;
      }
      param_2 = (void *)((long)param_2 + (ulong)uVar3);
      param_3 = param_3 - uVar3;
      FUN_1004e0988(param_1,param_1 + 6);
    }
    uVar3 = param_3;
    if (0x3f < (int)param_3) {
      do {
        FUN_1004e0988(param_1,param_2);
        param_2 = (void *)((long)param_2 + 0x40);
        param_3 = uVar3 - 0x40;
        bVar1 = 0x7f < (int)uVar3;
        uVar3 = param_3;
      } while (bVar1);
    }
    if (param_3 != 0) {
      _memcpy(param_1 + 6,param_2,(long)(int)param_3);
    }
  }
  return;
}




void FUN_1004e0988(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar14 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar15 = *(uint *)(param_1 + 0x14);
  if (((ulong)param_2 & 3) != 0) {
    uStack_a8 = *(undefined8 *)(param_2 + 2);
    local_b0 = *(undefined8 *)param_2;
    local_98 = *(undefined8 *)(param_2 + 6);
    local_a0 = *(undefined8 *)(param_2 + 4);
    uStack_88 = *(undefined8 *)(param_2 + 10);
    local_90 = *(undefined8 *)(param_2 + 8);
    local_78 = *(undefined8 *)(param_2 + 0xe);
    local_80 = *(undefined8 *)(param_2 + 0xc);
    param_2 = (int *)&local_b0;
  }
  iVar6 = *param_2;
  iVar16 = param_2[1];
  uVar1 = *(int *)(param_1 + 8) + (uVar5 & uVar14) + (uVar15 & (uVar14 ^ 0xffffffff)) + iVar6 +
          0xd76aa478;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar14;
  uVar2 = uVar15 + iVar16 + (uVar5 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar14) + 0xe8c7b756;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar7 = param_2[2];
  iVar17 = param_2[3];
  uVar3 = uVar5 + iVar7 + (uVar14 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1) + 0x242070db;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = uVar14 + iVar17 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0xc1bdceee;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar8 = param_2[4];
  iVar18 = param_2[5];
  uVar1 = uVar1 + iVar8 + (uVar2 & (uVar4 ^ 0xffffffff)) + (uVar4 & uVar3) + 0xf57c0faf;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar18 + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar4) + 0x4787c62a;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar9 = param_2[6];
  iVar19 = param_2[7];
  uVar3 = iVar9 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1) + 0xa8304613;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar19 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0xfd469501;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar10 = param_2[8];
  iVar20 = param_2[9];
  uVar1 = iVar10 + uVar1 + (uVar2 & (uVar4 ^ 0xffffffff)) + (uVar4 & uVar3) + 0x698098d8;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar20 + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar4) + 0x8b44f7af;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar11 = param_2[10];
  iVar21 = param_2[0xb];
  uVar3 = (iVar11 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1)) - 0xa44f;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar21 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0x895cd7be;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar12 = param_2[0xc];
  iVar22 = param_2[0xd];
  uVar1 = iVar12 + uVar1 + (uVar2 & (uVar4 ^ 0xffffffff)) + (uVar4 & uVar3) + 0x6b901122;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar22 + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar4) + 0xfd987193;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar13 = param_2[0xe];
  iVar23 = param_2[0xf];
  uVar3 = iVar13 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1) + 0xa679438e;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar23 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0x49b40821;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = iVar16 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0xf61e2562;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar9 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xc040b340;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0x265e5a51;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar6 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0xe9b6c7aa;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar18 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0xd62f105d;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar11 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0x2441453;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0xd8a1e681;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar8 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0xe7d3fbc8;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0x21e1cde6;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar13 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xc33707d6;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0xf4d50d87;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar10 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0x455a14ed;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0xa9e3e905;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar7 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xfcefa3f8;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0x676f02d9;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar12 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0x8d2a4c8a;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = (iVar18 + uVar1 + (uVar4 ^ uVar3 ^ uVar2)) - 0x5c6be;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar10 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x8771f681;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x6d9d6122;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar13 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xfde5380c;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar16 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xa4beea44;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar8 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x4bdecfa9;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xf6bb4b60;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar11 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xbebfbc70;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0x289b7ec6;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar6 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xeaa127fa;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xd4ef3085;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar9 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0x4881d05;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xd9d4d039;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar12 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xe6db99e5;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x1fa27cf8;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar7 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xc4ac5665;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar6 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf4292244;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar19 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x432aff97;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar13 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xab9423a7;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar18 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xfc93a039;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar12 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x655b59c3;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar17 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x8f0ccc92;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = (iVar11 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1)) - 0x100b83;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar16 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x85845dd1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar10 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x6fa87e4f;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar23 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xfe2ce6e0;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar9 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xa3014314;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar22 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x4e0811a1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar8 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf7537e82;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar21 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xbd3af235;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar7 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0x2ad7d2bb;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar20 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xeb86d391;
  *(uint *)(param_1 + 8) = uVar1 + *(int *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar3 + uVar14 + (uVar4 >> 0xb | uVar4 * 0x200000);
  *(uint *)(param_1 + 0x10) = uVar3 + uVar5;
  *(uint *)(param_1 + 0x14) = uVar2 + uVar15;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e13c8(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  uVar1 = 0;
  uVar2 = 0;
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    local_30[uVar2] = (char)(param_1[uVar2 >> 2 & 0x3fffffff] >> (ulong)(uVar1 & 0x18));
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 8;
  } while (uVar2 != 8);
  FUN_1004e0894(param_1,&DAT_10115bdf8,(0x37 - (*param_1 >> 3) & 0x3f) + 1);
  FUN_1004e0894(param_1,local_30,8);
  uVar1 = 0;
  uVar2 = 0;
  do {
    *(char *)(param_2 + uVar2) =
         (char)(param_1[(uVar2 >> 2 & 0x3fffffff) + 2] >> (ulong)(uVar1 & 0x18));
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 8;
  } while (uVar2 != 0x10);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e14b0(void)

{
  return;
}




ulong thunk_FUN_1004e14b8(void)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_1004e14f0();
  uVar2 = FUN_1004d28e4(&DAT_101e94480);
  if ((int)uVar2 != 0) {
    FUN_1004e14f0();
    uVar1 = _unlink(&DAT_101e94480);
    return (ulong)uVar1;
  }
  return uVar2;
}




ulong FUN_1004e14b8(void)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_1004e14f0();
  uVar2 = FUN_1004d28e4(&DAT_101e94480);
  if ((int)uVar2 != 0) {
    FUN_1004e14f0();
    uVar1 = _unlink(&DAT_101e94480);
    return (ulong)uVar1;
  }
  return uVar2;
}




undefined1 * FUN_1004e14f0(void)

{
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101e94480 == '\0') {
    FUN_1004e20a8(&DAT_101d911b0,2,auStack_428,0x400);
    FUN_1004d2554(auStack_428,0x400,"nuo_memory_report.txt");
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return &DAT_101e94480;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_1004e157c(long param_1)

{
  int iVar1;
  FILE *pFVar2;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0;
  FUN_1004e17b4(&local_48,&local_50);
  FUN_1004e14f0();
  pFVar2 = _fopen(&DAT_101e94480,"w+");
  iVar1 = 0;
  if (pFVar2 != (FILE *)0x0) {
    FUN_1004d2934(pFVar2,"Reason:              %s\n");
    FUN_1004e2f48(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Hardware ID:         %s\n");
    FUN_1004e2f70(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Hardware ID Name:    %s\n");
    FUN_1004e2f78(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Hardware Device ID:  %s\n");
    FUN_1004e2f20(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Hardware CPU Cores:  %d\n");
    FUN_1004e2f28(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Hardware RAM:        %llu bytes\n");
    FUN_1004e2f30(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Hardware VRAM:       %llu bytes\n");
    FUN_1004d2934(pFVar2,"\n");
    FUN_1004d2934(pFVar2,"Memory Used:         %llu bytes (%.2f MB)\n");
    FUN_1004d2934(pFVar2,"Memory Free:         %llu bytes (%.2f MB)\n");
    FUN_1004d2934(pFVar2,"\n");
    FUN_1004e2f88(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"OS Version:          %s\n");
    FUN_1004e2fdc(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Country Code:        %s\n");
    FUN_1004e2fe4(&DAT_101d911b0);
    FUN_1004d2934(pFVar2,"Preferred Languages: %s\n");
    FUN_1004d2934(pFVar2,"\n");
    if (param_1 != 0) {
      FUN_1004d2934(pFVar2,"%s\n");
      FUN_1004d2934(pFVar2,"\n");
    }
    iVar1 = _fclose(pFVar2);
  }
  return iVar1;
}




kern_return_t FUN_1004e17b4(undefined8 *param_1,long *param_2)

{
  kern_return_t kVar1;
  mach_port_t host_priv;
  uint local_70 [3];
  undefined8 local_64;
  undefined8 local_30;
  mach_msg_type_number_t local_24;
  
  kVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_30._0_4_ = 0x28;
    kVar1 = _task_info(*(task_name_t *)PTR__mach_task_self__101444368,0x12,(task_info_t)local_70,
                       (mach_msg_type_number_t *)&local_30);
    if (kVar1 != 0) {
      local_64 = 0;
    }
    *param_1 = local_64;
  }
  if (param_2 != (long *)0x0) {
    host_priv = _mach_host_self();
    local_24 = 0xf;
    _host_page_size(host_priv,&local_30);
    kVar1 = _host_statistics(host_priv,2,(host_info_t)local_70,&local_24);
    *param_2 = CONCAT44(local_30._4_4_,(mach_msg_type_number_t)local_30) * (ulong)local_70[0];
  }
  return kVar1;
}




undefined8 * FUN_1004e1854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149dda8;
  FUN_1004e1c0c(param_1 + 1,param_1[2]);
  return param_1;
}




void FUN_1004e1888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149dda8;
  FUN_1004e1c0c(param_1 + 1,param_1[2]);
  operator_delete(param_1);
  return;
}




void FUN_1004e18bc(long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 local_48;
  void *local_40;
  long local_38;
  long lStack_30;
  uint local_24;
  
  plVar2 = (long *)(param_1 + 0x10);
  plVar5 = (long *)*plVar2;
  plVar4 = plVar2;
  local_38 = param_2;
  lStack_30 = param_4;
  local_24 = param_3;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= param_3) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < param_3];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) <= param_3)) {
      uVar1 = *(uint *)(plVar4 + 5);
      uVar6 = (ulong)uVar1;
      if (uVar1 != 0) {
        plVar2 = (long *)plVar4[6];
        do {
          if (*plVar2 == param_2) {
            plVar2[1] = param_4;
            *plVar2 = param_2;
            return;
          }
          plVar2 = plVar2 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      FUN_1004e1990(plVar4 + 5,&local_38);
      return;
    }
  }
  local_48 = 0;
  local_40 = (void *)0x0;
  FUN_1004e1990(&local_48,&local_38);
  uVar3 = FUN_1004e1a10(param_1 + 8,&local_24);
  FUN_1004e1d28(uVar3,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  return;
}




void FUN_1004e1990(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_1004e1c58(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




undefined8 * FUN_1004e1a10(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1004e1a88:
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, *(uint *)(puVar2 + 4) <= uVar4) {
        if (uVar4 <= *(uint *)(puVar2 + 4)) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_1004e1ab4;
          goto LAB_1004e1a88;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_1004e1a8c;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_1004e1a8c:
  puVar3 = operator_new(0x38);
  *(uint *)(puVar3 + 4) = uVar4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  FUN_1004e1cd4(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_1004e1ab4:
  return puVar2 + 5;
}




void FUN_1004e1acc(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  plVar4 = (long *)(param_1 + 0x10);
  plVar7 = (long *)*plVar4;
  plVar5 = plVar4;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= param_3) {
        plVar5 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < param_3];
    } while (plVar7 != (long *)0x0);
    if ((plVar5 != plVar4) && (*(uint *)(plVar5 + 4) <= param_3)) {
      uVar6 = *(uint *)(plVar5 + 5);
      uVar3 = uVar6;
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        lVar9 = plVar5[6];
        uVar8 = (ulong)uVar3;
        if (*(long *)(lVar9 + uVar8 * 0x10) == param_2) {
          if ((ulong)uVar6 - 1 != uVar8) {
            puVar1 = (undefined8 *)(lVar9 + ((ulong)uVar6 - 1) * 0x10);
            uVar10 = *puVar1;
            puVar2 = (undefined8 *)(lVar9 + uVar8 * 0x10);
            puVar2[1] = puVar1[1];
            *puVar2 = uVar10;
            uVar6 = *(uint *)(plVar5 + 5);
          }
          uVar6 = uVar6 - 1;
          *(uint *)(plVar5 + 5) = uVar6;
        }
      }
    }
  }
  return;
}




void FUN_1004e1b58(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  plVar5 = *(long **)(param_1 + 8);
  while (plVar5 != (long *)(param_1 + 0x10)) {
    uVar6 = *(uint *)(plVar5 + 5);
    uVar3 = uVar6;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      lVar9 = plVar5[6];
      uVar8 = (ulong)uVar3;
      if (*(long *)(lVar9 + uVar8 * 0x10) == param_2) {
        if ((ulong)uVar6 - 1 != uVar8) {
          puVar1 = (undefined8 *)(lVar9 + ((ulong)uVar6 - 1) * 0x10);
          uVar10 = *puVar1;
          puVar2 = (undefined8 *)(lVar9 + uVar8 * 0x10);
          puVar2[1] = puVar1[1];
          *puVar2 = uVar10;
          uVar6 = *(uint *)(plVar5 + 5);
        }
        uVar6 = uVar6 - 1;
        *(uint *)(plVar5 + 5) = uVar6;
      }
    }
    plVar7 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar7 = plVar5 + 2;
      bVar4 = *(long **)*plVar7 != plVar5;
      plVar5 = (long *)*plVar7;
      if (bVar4) {
        do {
          lVar9 = *plVar7;
          plVar7 = (long *)(lVar9 + 0x10);
          plVar5 = (long *)*plVar7;
        } while (*plVar5 != lVar9);
      }
    }
    else {
      do {
        plVar5 = plVar7;
        plVar7 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}




void FUN_1004e1c0c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1004e1c0c(param_1,*param_2);
    FUN_1004e1c0c(param_1,param_2[1]);
    if ((void *)param_2[6] != (void *)0x0) {
      operator_delete__((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1004e1c58(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
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




void FUN_1004e1cd4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_1004e1d28(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1004e1c58(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      lVar4 = (ulong)*param_2 << 4;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        uVar5 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar5;
        lVar4 = lVar4 + -0x10;
        puVar2 = puVar2 + 2;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1004e1da0(void)

{
  DAT_101d91178 = 0;
  DAT_101d91170 = 0;
  DAT_101d91160 = &PTR_FUN_10149dda8;
  DAT_101d91168 = &DAT_101d91170;
  ___cxa_atexit(FUN_1004e1854,&DAT_101d91160,0x100000000);
  return;
}




undefined8 * FUN_1004e1dd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSAutoreleasePool);
  uVar1 = _objc_msgSend(uVar1,"init");
  *param_1 = uVar1;
  return param_1;
}




long * FUN_1004e1e14(long *param_1)

{
  if (*param_1 != 0) {
    _objc_release();
    *param_1 = 0;
  }
  return param_1;
}




void FUN_1004e1e44(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  ifaddrs *piVar1;
  uint uVar2;
  int iVar3;
  ulong extraout_x0;
  undefined8 uVar5;
  undefined8 uVar6;
  sockaddr *psVar7;
  undefined8 local_448;
  size_t local_440;
  ifaddrs *local_438 [128];
  long local_38;
  ulong uVar4;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  local_440 = 0x300000006;
  local_438[0] = (ifaddrs *)0x4;
  _sysctl((int *)&local_440,2,&local_448,(size_t *)local_438,(void *)0x0,0);
  if ((int)local_448 == 0) {
    local_448._0_4_ = 1;
  }
  *(int *)(param_1 + 0x10) = (int)local_448;
  local_440 = 8;
  local_438[0] = (ifaddrs *)0x0;
  local_448 = 0x1800000006;
  _sysctl((int *)&local_448,2,local_438,&local_440,(void *)0x0,0);
  *(ifaddrs **)(param_1 + 0x18) = local_438[0];
  local_440 = 0;
  local_438[0] = (ifaddrs *)((long)&__mh_execute_header.cputype + 2);
  _sysctl((int *)local_438,2,(void *)0x0,&local_440,(void *)0x0,0);
  _sysctl((int *)local_438,2,param_1 + 0x30,&local_440,(void *)0x0,0);
  local_440 = 0;
  local_438[0] = (ifaddrs *)0x200000006;
  _sysctl((int *)local_438,2,(void *)0x0,&local_440,(void *)0x0,0);
  _sysctl((int *)local_438,2,param_1 + 0x70,&local_440,(void *)0x0,0);
  local_438[0] = (ifaddrs *)0x0;
  uVar2 = _getifaddrs(local_438);
  uVar4 = (ulong)uVar2;
  piVar1 = local_438[0];
  if (uVar2 == 0) {
    for (; piVar1 != (ifaddrs *)0x0; piVar1 = piVar1->ifa_next) {
      iVar3 = _strcmp("en0",piVar1->ifa_name);
      if ((((iVar3 == 0) && (psVar7 = piVar1->ifa_addr, psVar7 != (sockaddr *)0x0)) &&
          (psVar7->sa_family == '\x12')) && (psVar7->sa_data[4] == '\x06')) {
        FUN_1004d2698(param_1 + 0xb0,"%02x:%02x:%02x:%02x:%02x:%02x");
        break;
      }
    }
    _freeifaddrs(local_438[0]);
    uVar4 = extraout_x0;
  }
  FUN_1004e20a8(uVar4,4,local_438,0x400);
  uVar5 = _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar6 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",local_438);
  _objc_msgSend(uVar5,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",uVar6,1,
                0,0);
  *param_1 = 1;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1004e20a8(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  switch(param_2) {
  case 0:
    uVar3 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar3 = _objc_msgSend(uVar3,"executablePath");
    pcVar4 = "stringByDeletingLastPathComponent";
    goto LAB_1004e2154;
  case 1:
    uVar3 = _NSSearchPathForDirectoriesInDomains(9,1,1);
    pcVar4 = "firstObject";
    goto LAB_1004e2154;
  case 2:
    param_1 = _NSTemporaryDirectory();
    break;
  case 3:
    uVar3 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    pcVar4 = "resourcePath";
LAB_1004e2154:
    param_1 = _objc_msgSend(uVar3,pcVar4);
    break;
  case 4:
    uVar3 = _NSSearchPathForDirectoriesInDomains(0xe,1,1);
    uVar3 = _objc_msgSend(uVar3,"firstObject");
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar2 = _objc_msgSend(uVar2,"bundleIdentifier");
    param_1 = _objc_msgSend(uVar3,"stringByAppendingPathComponent:",uVar2);
    break;
  case 5:
    param_1 = _NSHomeDirectory();
  }
  uVar3 = _objc_msgSend(param_1,"UTF8String");
  FUN_1004d25b8(param_3,param_4,uVar3);
  iVar1 = FUN_1004d2524(param_3);
  if (*(char *)(param_3 + (ulong)(iVar1 - 1)) != '/') {
    FUN_1004d2554(param_3,param_4,"/");
    return;
  }
  return;
}




undefined8 FUN_1004e221c(long param_1)

{
  *(undefined4 *)(param_1 + 0x47c) = 1;
  return 1;
}




void FUN_1004e222c(undefined1 *param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  *param_1 = (&DAT_10115be75)[param_2 >> 0x1c];
  param_1[1] = (&DAT_10115be85)[((ulong)param_2 & 0xc000000) >> 0x1a];
  uVar1 = (&DAT_10115be85)[((ulong)param_2 & 0x300000) >> 0x14];
  param_1[2] = (&DAT_10115be75)[((ulong)param_2 & 0x3c00000) >> 0x16];
  param_1[3] = uVar1;
  param_1[4] = (&DAT_10115be75)[((ulong)param_2 & 0xf0000) >> 0x10];
  if (param_3 == 0) {
    param_1 = param_1 + 5;
  }
  else {
    param_1[5] = (char)param_3;
    param_1 = param_1 + 6;
  }
  *param_1 = (&DAT_10115be75)[((ulong)param_2 & 0xf000) >> 0xc];
  param_1[1] = (&DAT_10115be85)[((ulong)param_2 & 0xc00) >> 10];
  param_1[2] = (&DAT_10115be75)[((ulong)param_2 & 0x3c0) >> 6];
  param_1[3] = (&DAT_10115be85)[((ulong)param_2 & 0x30) >> 4];
  param_1[4] = (&DAT_10115be75)[(ulong)param_2 & 0xf];
  return;
}




int FUN_1004e22d0(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  FILE *pFVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  
  cVar5 = *param_2;
  if (cVar5 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    lVar4 = 1;
    do {
      iVar6 = 0;
      switch((int)cVar5) {
      case 0x30:
        break;
      case 0x31:
        iVar6 = 1;
        break;
      case 0x32:
        iVar6 = 2;
        break;
      case 0x33:
        iVar6 = 3;
        break;
      case 0x34:
        iVar6 = 4;
        break;
      case 0x35:
        iVar6 = 5;
        break;
      case 0x36:
        iVar6 = 6;
        break;
      case 0x37:
        iVar6 = 7;
        break;
      case 0x38:
        iVar6 = 8;
        break;
      case 0x39:
        iVar6 = 9;
        break;
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
switchD_1004e2314_caseD_3a:
        pFVar3 = *(FILE **)PTR____stderrp_101444220;
        pcVar1 = "Illegal character in uint-word \'%s\': \'%c\'.\n";
        goto LAB_1004e23ec;
      case 0x41:
      case 0x61:
        iVar6 = 10;
        break;
      case 0x42:
      case 0x62:
        iVar6 = 0xb;
        break;
      case 0x43:
      case 99:
        iVar6 = 0xc;
        break;
      case 0x44:
      case 100:
        iVar6 = 0xd;
        break;
      case 0x45:
      case 0x65:
        iVar6 = 0xe;
        break;
      case 0x46:
      case 0x66:
        iVar6 = 0xf;
        break;
      default:
        if (cVar5 != 0x2d) goto switchD_1004e2314_caseD_3a;
        iVar6 = 0x10;
      }
      if (param_1 <= iVar6) {
        pFVar3 = *(FILE **)PTR____stderrp_101444220;
        pcVar1 = "Numbers of base %d may not contain the digit \'%c\': \'%s\'.\n";
LAB_1004e23ec:
        _fprintf(pFVar3,pcVar1);
                    /* WARNING: Subroutine does not return */
        _exit(1);
      }
      iVar2 = iVar6 + iVar2 * param_1;
      cVar5 = param_2[lVar4];
      lVar4 = lVar4 + 1;
    } while (cVar5 != '\0');
  }
  return iVar2;
}




void FUN_1004e2414(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1004e22d0(0x11,param_1);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  FUN_1004e222c(&local_40,uVar1,0x2d);
  FUN_10001549c(local_58,&local_40);
  std::string::operator=(param_2,(string *)local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e24b0(void)

{
  _signal(0xd);
  return;
}




void FUN_1004e24bc(void)

{
  return;
}




void FUN_1004e24c0(undefined8 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




int * FUN_1004e24d0(int *param_1)

{
  if (*param_1 != -1) {
    _close();
    *param_1 = -1;
  }
  return param_1;
}




void FUN_1004e2508(int *param_1)

{
  if (*param_1 != -1) {
    _close();
    *param_1 = -1;
  }
  return;
}




undefined8 FUN_1004e253c(long param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  return 1;
}




void FUN_1004e2550(int *param_1,void *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  
  sVar2 = _read(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (int *)0x0) {
    iVar1 = (uint)((int)sVar2 == 0) << 1;
    if ((int)sVar2 == -1) {
      iVar1 = 1;
    }
    *param_4 = iVar1;
  }
  return;
}




void FUN_1004e2594(int *param_1,void *param_2,ulong param_3,uint *param_4)

{
  ssize_t sVar1;
  
  sVar1 = _write(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((int)sVar1 == -1);
  }
  return;
}




undefined8 FUN_1004e25cc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0x10;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  param_1[1] = uVar1 & 0xffffffef | uVar2;
  if (((uVar1 & 1) != 0) && (*param_1 != -1)) {
    _fcntl(*param_1,4);
  }
  return 1;
}




bool FUN_1004e262c(int *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return false;
  }
  return *param_1 != -1;
}




void FUN_1004e264c(uint *param_1,char *param_2,undefined8 param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  addrinfo *paVar7;
  ulong uVar8;
  char *pcVar9;
  socklen_t local_168;
  int local_164;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  timeval local_d8;
  addrinfo *local_c8;
  addrinfo local_c0;
  char local_88 [16];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  local_c8 = (addrinfo *)0x0;
  local_c0.ai_canonname = (char *)0x0;
  local_c0.ai_addrlen = 0;
  local_c0._20_4_ = 0;
  local_c0.ai_next = (addrinfo *)0x0;
  local_c0.ai_addr = (sockaddr *)0x0;
  local_c0.ai_socktype = 1;
  local_c0.ai_protocol = 0;
  local_c0.ai_flags = 0x600;
  local_c0.ai_family = 0;
  local_88[0] = '\0';
  FUN_1004d2698(local_88,"%d");
  uVar4 = _atoi(local_88);
  iVar5 = _getaddrinfo(param_2,local_88,&local_c0,&local_c8);
  if (((iVar5 == 0) && (uVar4 != 0)) && (local_c8 != (addrinfo *)0x0)) {
    paVar7 = local_c8;
    do {
      if (((paVar7->ai_family == 0x1e) || (paVar7->ai_family == 2)) &&
         (pcVar9 = paVar7->ai_addr->sa_data, *(short *)pcVar9 == 0)) {
        *(ushort *)pcVar9 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
      }
      paVar7 = paVar7->ai_next;
    } while (paVar7 != (addrinfo *)0x0);
  }
  puVar2 = PTR____darwin_check_fd_set_overflow_101444200;
  if (iVar5 == 0) {
    if (local_c8 != (addrinfo *)0x0) {
      paVar7 = local_c8;
      do {
        uVar4 = _socket(paVar7->ai_family,paVar7->ai_socktype,paVar7->ai_protocol);
        if (uVar4 != 0xffffffff) {
          uVar1 = param_1[1];
          FUN_1004e28fc(param_1,uVar4);
          if (param_5 != 0 || param_4 != 0) {
            FUN_1004e25cc(param_1,1);
          }
          piVar6 = ___error();
          *piVar6 = 0;
          iVar5 = _connect(uVar4,paVar7->ai_addr,paVar7->ai_addrlen);
          piVar6 = ___error();
          if (((iVar5 == 0) || (iVar5 = *piVar6, iVar5 == 0x24)) ||
             ((iVar5 == 0x23 || (iVar5 == 4)))) {
            if (param_5 == 0 && param_4 == 0) {
              *param_1 = uVar4;
              goto LAB_1004e2894;
            }
            local_d8.tv_sec = (ulong)param_4;
            local_d8.tv_usec = param_5;
            uStack_f8 = 0;
            local_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_118 = 0;
            local_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            if ((puVar2 == (undefined *)0x0) ||
               (iVar5 = ___darwin_check_fd_set_overflow(uVar4,&local_160,0), iVar5 != 0)) {
              uVar8 = (ulong)(long)(int)uVar4 >> 3 & 0x1ffffffffffffffc;
              *(uint *)((long)&local_160 + uVar8) =
                   *(uint *)((long)&local_160 + uVar8) | 1 << (ulong)(uVar4 & 0x1f);
            }
            iVar5 = _select(uVar4 + 1,(fd_set *)0x0,(fd_set *)&local_160,(fd_set *)0x0,&local_d8);
            if (iVar5 == 1) {
              local_168 = 4;
              _getsockopt(uVar4,0xffff,0x1007,&local_164,&local_168);
              if (local_164 == 0) {
                *param_1 = uVar4;
                FUN_1004e25cc(param_1,uVar1 >> 4 & 1);
                goto LAB_1004e2894;
              }
            }
          }
          _close(uVar4);
        }
        paVar7 = paVar7->ai_next;
      } while (paVar7 != (addrinfo *)0x0);
    }
    uVar4 = 0xffffffff;
LAB_1004e2894:
    _freeaddrinfo(local_c8);
    bVar3 = uVar4 != 0xffffffff;
  }
  else {
    bVar3 = false;
    if (local_c8 != (addrinfo *)0x0) {
      _freeaddrinfo(local_c8);
      bVar3 = false;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar3);
}




/* WARNING: Type propagation algorithm not settling */

ulong FUN_1004e28fc(ulong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    local_2c = 1;
    uVar2 = _setsockopt(param_2,0xffff,4,&local_2c,4);
    uVar1 = *(uint *)(param_1 + 4);
    uVar3 = (ulong)uVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    local_28 = *(undefined4 *)(param_1 + 8);
    uVar1 = _setsockopt(param_2,0xffff,0x1001,&local_28,4);
    uVar3 = (ulong)uVar1;
    uVar1 = *(uint *)(param_1 + 4);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    local_24 = 1;
    uVar1 = _setsockopt(param_2,6,1,&local_24,4);
    uVar3 = (ulong)uVar1;
    uVar1 = *(uint *)(param_1 + 4);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar1 = _fcntl(param_2,4);
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}




undefined8 FUN_1004e29c8(int *param_1)

{
  undefined4 local_14;
  
  param_1[1] = param_1[1] | 2;
  if (*param_1 != -1) {
    local_14 = 1;
    _setsockopt(*param_1,0xffff,4,&local_14,4);
  }
  return 1;
}




undefined8 FUN_1004e2a18(int *param_1)

{
  undefined4 local_14;
  
  param_1[1] = param_1[1] | 8;
  if (*param_1 != -1) {
    local_14 = 1;
    _setsockopt(*param_1,6,1,&local_14,4);
  }
  return 1;
}




void FUN_1004e2a68(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = ___error();
  FUN_1004e2ae4(param_1,piVar1,*piVar1);
  return;
}




bool FUN_1004e2a90(int *param_1)

{
  int iVar1;
  socklen_t local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 4;
  iVar1 = _getsockopt(*param_1,0xffff,0x1007,&local_14,&local_18);
  return iVar1 < 0 || 0 < local_14;
}




void FUN_1004e2ae4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_240 [256];
  char local_140 [264];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_140[0xe8] = '\0';
  local_140[0xe9] = '\0';
  local_140[0xea] = '\0';
  local_140[0xeb] = '\0';
  local_140[0xec] = '\0';
  local_140[0xed] = '\0';
  local_140[0xee] = '\0';
  local_140[0xef] = '\0';
  local_140[0xe0] = '\0';
  local_140[0xe1] = '\0';
  local_140[0xe2] = '\0';
  local_140[0xe3] = '\0';
  local_140[0xe4] = '\0';
  local_140[0xe5] = '\0';
  local_140[0xe6] = '\0';
  local_140[0xe7] = '\0';
  local_140[0xf8] = '\0';
  local_140[0xf9] = '\0';
  local_140[0xfa] = '\0';
  local_140[0xfb] = '\0';
  local_140[0xfc] = '\0';
  local_140[0xfd] = '\0';
  local_140[0xfe] = '\0';
  local_140[0xff] = '\0';
  local_140[0xf0] = '\0';
  local_140[0xf1] = '\0';
  local_140[0xf2] = '\0';
  local_140[0xf3] = '\0';
  local_140[0xf4] = '\0';
  local_140[0xf5] = '\0';
  local_140[0xf6] = '\0';
  local_140[0xf7] = '\0';
  local_140[200] = '\0';
  local_140[0xc9] = '\0';
  local_140[0xca] = '\0';
  local_140[0xcb] = '\0';
  local_140[0xcc] = '\0';
  local_140[0xcd] = '\0';
  local_140[0xce] = '\0';
  local_140[0xcf] = '\0';
  local_140[0xc0] = '\0';
  local_140[0xc1] = '\0';
  local_140[0xc2] = '\0';
  local_140[0xc3] = '\0';
  local_140[0xc4] = '\0';
  local_140[0xc5] = '\0';
  local_140[0xc6] = '\0';
  local_140[199] = '\0';
  local_140[0xd8] = '\0';
  local_140[0xd9] = '\0';
  local_140[0xda] = '\0';
  local_140[0xdb] = '\0';
  local_140[0xdc] = '\0';
  local_140[0xdd] = '\0';
  local_140[0xde] = '\0';
  local_140[0xdf] = '\0';
  local_140[0xd0] = '\0';
  local_140[0xd1] = '\0';
  local_140[0xd2] = '\0';
  local_140[0xd3] = '\0';
  local_140[0xd4] = '\0';
  local_140[0xd5] = '\0';
  local_140[0xd6] = '\0';
  local_140[0xd7] = '\0';
  local_140[0xa8] = '\0';
  local_140[0xa9] = '\0';
  local_140[0xaa] = '\0';
  local_140[0xab] = '\0';
  local_140[0xac] = '\0';
  local_140[0xad] = '\0';
  local_140[0xae] = '\0';
  local_140[0xaf] = '\0';
  local_140[0xa0] = '\0';
  local_140[0xa1] = '\0';
  local_140[0xa2] = '\0';
  local_140[0xa3] = '\0';
  local_140[0xa4] = '\0';
  local_140[0xa5] = '\0';
  local_140[0xa6] = '\0';
  local_140[0xa7] = '\0';
  local_140[0xb8] = '\0';
  local_140[0xb9] = '\0';
  local_140[0xba] = '\0';
  local_140[0xbb] = '\0';
  local_140[0xbc] = '\0';
  local_140[0xbd] = '\0';
  local_140[0xbe] = '\0';
  local_140[0xbf] = '\0';
  local_140[0xb0] = '\0';
  local_140[0xb1] = '\0';
  local_140[0xb2] = '\0';
  local_140[0xb3] = '\0';
  local_140[0xb4] = '\0';
  local_140[0xb5] = '\0';
  local_140[0xb6] = '\0';
  local_140[0xb7] = '\0';
  local_140[0x88] = '\0';
  local_140[0x89] = '\0';
  local_140[0x8a] = '\0';
  local_140[0x8b] = '\0';
  local_140[0x8c] = '\0';
  local_140[0x8d] = '\0';
  local_140[0x8e] = '\0';
  local_140[0x8f] = '\0';
  local_140[0x80] = '\0';
  local_140[0x81] = '\0';
  local_140[0x82] = '\0';
  local_140[0x83] = '\0';
  local_140[0x84] = '\0';
  local_140[0x85] = '\0';
  local_140[0x86] = '\0';
  local_140[0x87] = '\0';
  local_140[0x98] = '\0';
  local_140[0x99] = '\0';
  local_140[0x9a] = '\0';
  local_140[0x9b] = '\0';
  local_140[0x9c] = '\0';
  local_140[0x9d] = '\0';
  local_140[0x9e] = '\0';
  local_140[0x9f] = '\0';
  local_140[0x90] = '\0';
  local_140[0x91] = '\0';
  local_140[0x92] = '\0';
  local_140[0x93] = '\0';
  local_140[0x94] = '\0';
  local_140[0x95] = '\0';
  local_140[0x96] = '\0';
  local_140[0x97] = '\0';
  local_140[0x68] = '\0';
  local_140[0x69] = '\0';
  local_140[0x6a] = '\0';
  local_140[0x6b] = '\0';
  local_140[0x6c] = '\0';
  local_140[0x6d] = '\0';
  local_140[0x6e] = '\0';
  local_140[0x6f] = '\0';
  local_140[0x60] = '\0';
  local_140[0x61] = '\0';
  local_140[0x62] = '\0';
  local_140[99] = '\0';
  local_140[100] = '\0';
  local_140[0x65] = '\0';
  local_140[0x66] = '\0';
  local_140[0x67] = '\0';
  local_140[0x78] = '\0';
  local_140[0x79] = '\0';
  local_140[0x7a] = '\0';
  local_140[0x7b] = '\0';
  local_140[0x7c] = '\0';
  local_140[0x7d] = '\0';
  local_140[0x7e] = '\0';
  local_140[0x7f] = '\0';
  local_140[0x70] = '\0';
  local_140[0x71] = '\0';
  local_140[0x72] = '\0';
  local_140[0x73] = '\0';
  local_140[0x74] = '\0';
  local_140[0x75] = '\0';
  local_140[0x76] = '\0';
  local_140[0x77] = '\0';
  local_140[0x48] = '\0';
  local_140[0x49] = '\0';
  local_140[0x4a] = '\0';
  local_140[0x4b] = '\0';
  local_140[0x4c] = '\0';
  local_140[0x4d] = '\0';
  local_140[0x4e] = '\0';
  local_140[0x4f] = '\0';
  local_140[0x40] = '\0';
  local_140[0x41] = '\0';
  local_140[0x42] = '\0';
  local_140[0x43] = '\0';
  local_140[0x44] = '\0';
  local_140[0x45] = '\0';
  local_140[0x46] = '\0';
  local_140[0x47] = '\0';
  local_140[0x58] = '\0';
  local_140[0x59] = '\0';
  local_140[0x5a] = '\0';
  local_140[0x5b] = '\0';
  local_140[0x5c] = '\0';
  local_140[0x5d] = '\0';
  local_140[0x5e] = '\0';
  local_140[0x5f] = '\0';
  local_140[0x50] = '\0';
  local_140[0x51] = '\0';
  local_140[0x52] = '\0';
  local_140[0x53] = '\0';
  local_140[0x54] = '\0';
  local_140[0x55] = '\0';
  local_140[0x56] = '\0';
  local_140[0x57] = '\0';
  local_140[0x28] = '\0';
  local_140[0x29] = '\0';
  local_140[0x2a] = '\0';
  local_140[0x2b] = '\0';
  local_140[0x2c] = '\0';
  local_140[0x2d] = '\0';
  local_140[0x2e] = '\0';
  local_140[0x2f] = '\0';
  local_140[0x20] = '\0';
  local_140[0x21] = '\0';
  local_140[0x22] = '\0';
  local_140[0x23] = '\0';
  local_140[0x24] = '\0';
  local_140[0x25] = '\0';
  local_140[0x26] = '\0';
  local_140[0x27] = '\0';
  local_140[0x38] = '\0';
  local_140[0x39] = '\0';
  local_140[0x3a] = '\0';
  local_140[0x3b] = '\0';
  local_140[0x3c] = '\0';
  local_140[0x3d] = '\0';
  local_140[0x3e] = '\0';
  local_140[0x3f] = '\0';
  local_140[0x30] = '\0';
  local_140[0x31] = '\0';
  local_140[0x32] = '\0';
  local_140[0x33] = '\0';
  local_140[0x34] = '\0';
  local_140[0x35] = '\0';
  local_140[0x36] = '\0';
  local_140[0x37] = '\0';
  local_140[8] = '\0';
  local_140[9] = '\0';
  local_140[10] = '\0';
  local_140[0xb] = '\0';
  local_140[0xc] = '\0';
  local_140[0xd] = '\0';
  local_140[0xe] = '\0';
  local_140[0xf] = '\0';
  local_140[0] = '\0';
  local_140[1] = '\0';
  local_140[2] = '\0';
  local_140[3] = '\0';
  local_140[4] = '\0';
  local_140[5] = '\0';
  local_140[6] = '\0';
  local_140[7] = '\0';
  local_140[0x18] = '\0';
  local_140[0x19] = '\0';
  local_140[0x1a] = '\0';
  local_140[0x1b] = '\0';
  local_140[0x1c] = '\0';
  local_140[0x1d] = '\0';
  local_140[0x1e] = '\0';
  local_140[0x1f] = '\0';
  local_140[0x10] = '\0';
  local_140[0x11] = '\0';
  local_140[0x12] = '\0';
  local_140[0x13] = '\0';
  local_140[0x14] = '\0';
  local_140[0x15] = '\0';
  local_140[0x16] = '\0';
  local_140[0x17] = '\0';
  _strerror_r(param_3,local_140,0x100);
  FUN_1004e2b98(auStack_240,"%s (error %d)");
  FUN_10001549c(param_1,auStack_240);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e2b98(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,0x100,param_2,&stack0x00000000);
  return;
}




int FUN_1004e2bc8(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4)

{
  int iVar1;
  
  iVar1 = _select(param_1,param_2,param_3,param_4,(timeval *)0x0);
  return iVar1;
}




int FUN_1004e2bd0(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4,ulong param_5,
                 __darwin_suseconds_t param_6)

{
  int iVar1;
  timeval local_20;
  
  local_20.tv_sec = param_5 & 0xffffffff;
  local_20.tv_usec = param_6;
  iVar1 = _select(param_1,param_2,param_3,param_4,&local_20);
  return iVar1;
}




char * FUN_1004e2bfc(char *param_1)

{
  __darwin_ct_rune_t _Var1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar2 = (ulong)param_1[0x17];
  pcVar4 = param_1;
  if (param_1[0x17] < '\0') {
    pcVar4 = *(char **)param_1;
  }
  while( true ) {
    if (((uint)uVar2 >> 7 & 1) == 0) {
      uVar2 = uVar2 & 0xff;
      pcVar3 = param_1;
    }
    else {
      pcVar3 = *(char **)param_1;
      uVar2 = *(ulong *)(param_1 + 8);
    }
    if (pcVar4 == pcVar3 + uVar2) break;
    _Var1 = ___tolower((int)*pcVar4);
    *pcVar4 = (char)_Var1;
    uVar2 = (ulong)(byte)param_1[0x17];
    pcVar4 = pcVar4 + 1;
  }
  return param_1;
}




char * FUN_1004e2c64(char *param_1)

{
  __darwin_ct_rune_t _Var1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar2 = (ulong)param_1[0x17];
  pcVar4 = param_1;
  if (param_1[0x17] < '\0') {
    pcVar4 = *(char **)param_1;
  }
  while( true ) {
    if (((uint)uVar2 >> 7 & 1) == 0) {
      uVar2 = uVar2 & 0xff;
      pcVar3 = param_1;
    }
    else {
      pcVar3 = *(char **)param_1;
      uVar2 = *(ulong *)(param_1 + 8);
    }
    if (pcVar4 == pcVar3 + uVar2) break;
    _Var1 = ___toupper((int)*pcVar4);
    *pcVar4 = (char)_Var1;
    uVar2 = (ulong)(byte)param_1[0x17];
    pcVar4 = pcVar4 + 1;
  }
  return param_1;
}




void FUN_1004e2ccc(void)

{
  FUN_10001549c(&DAT_101d91180," \f\n\r\t\v");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d91180,0x100000000);
  DAT_101d911a0 = 0;
  DAT_101d911a8 = 0;
  DAT_101d91198 = 0;
  ___cxa_atexit(FUN_1000e6204,&DAT_101d91198,0x100000000);
  return;
}




undefined1 * FUN_1004e2d3c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x477] = param_1[0x477] & 0xfe;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x32f) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_1004d25b8(param_1 + 0x233,4,"US");
  FUN_1004d25b8(param_1 + 0x237,0x100,"en");
  *(undefined8 *)(param_1 + 0x33f) = 0;
  *(undefined8 *)(param_1 + 0x337) = 0;
  *(undefined8 *)(param_1 + 0x34f) = 0;
  *(undefined8 *)(param_1 + 0x347) = 0;
  *(undefined8 *)(param_1 + 0x35f) = 0;
  *(undefined8 *)(param_1 + 0x357) = 0;
  *(undefined8 *)(param_1 + 0x36f) = 0;
  *(undefined8 *)(param_1 + 0x367) = 0;
  return param_1;
}




undefined8 FUN_1004e2e18(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 8);
}




undefined8 FUN_1004e2e24(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (1 < (int)uVar1) {
    lVar3 = 0;
    do {
      iVar2 = _strcmp(*(char **)(*(long *)(param_1 + 8) + lVar3 + 8),param_2);
      if (iVar2 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 8) + lVar3 + 0x10);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 + -8 != lVar3);
  }
  return 0;
}




bool FUN_1004e2e9c(long param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 2) {
    bVar3 = false;
  }
  else {
    iVar4 = _strcmp(*(char **)(*(long *)(param_1 + 8) + 8),param_2);
    if (iVar4 == 0) {
      bVar3 = true;
    }
    else {
      uVar2 = 2;
      do {
        uVar5 = uVar2;
        if (uVar1 == uVar5) break;
        iVar4 = _strcmp(*(char **)(*(long *)(param_1 + 8) + uVar5 * 8),param_2);
        uVar2 = uVar5 + 1;
      } while (iVar4 != 0);
      bVar3 = uVar5 < uVar1;
    }
  }
  return bVar3;
}




undefined4 FUN_1004e2f20(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined8 FUN_1004e2f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_1004e2f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined4 FUN_1004e2f38(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined4 FUN_1004e2f40(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




char * FUN_1004e2f48(long param_1)

{
  if (*(uint *)(param_1 + 0x2c) < 0x1a) {
    return (&PTR_s_HW_ID_UNKNOWN_10149ddb8)[(int)*(uint *)(param_1 + 0x2c)];
  }
  return "";
}




long FUN_1004e2f70(long param_1)

{
  return param_1 + 0x30;
}




long FUN_1004e2f78(long param_1)

{
  return param_1 + 0xb0;
}




long FUN_1004e2f80(long param_1)

{
  return param_1 + 0xf0;
}




long FUN_1004e2f88(long param_1)

{
  return param_1 + 0x1b0;
}




undefined1 FUN_1004e2f90(long param_1,uint param_2)

{
  if (param_2 < 3) {
    return *(undefined1 *)(param_1 + (ulong)param_2 + 0x230);
  }
  return 0;
}




bool FUN_1004e2fac(long param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x230);
  bVar2 = SBORROW4(uVar3,param_2);
  iVar1 = uVar3 - param_2;
  if (uVar3 == param_2) {
    uVar3 = (uint)*(byte *)(param_1 + 0x231);
    bVar2 = SBORROW4(uVar3,param_3);
    iVar1 = uVar3 - param_3;
    if (uVar3 == param_3) {
      return param_4 <= (int)(uint)*(byte *)(param_1 + 0x232);
    }
  }
  return iVar1 < 0 == bVar2;
}




long FUN_1004e2fdc(long param_1)

{
  return param_1 + 0x233;
}




long FUN_1004e2fe4(long param_1)

{
  return param_1 + 0x237;
}




byte FUN_1004e2fec(long param_1)

{
  return *(byte *)(param_1 + 0x477) & 1;
}




void FUN_1004e2ff8(void)

{
  FUN_1004e2d3c(&DAT_101d911b0);
  return;
}




uint64_t FUN_1004e3004(uint64_t *param_1)

{
  uint uVar1;
  uint64_t uVar2;
  mach_timebase_info local_28;
  
  uVar2 = _mach_absolute_time();
  *param_1 = uVar2;
  if (DAT_101d91634 == 0) {
    uVar1 = _mach_timebase_info(&local_28);
    uVar2 = (uint64_t)uVar1;
    uVar1 = 0;
    if (local_28.denom != 0) {
      uVar1 = local_28.numer / local_28.denom;
    }
    DAT_101d91638 = (ulong)uVar1;
  }
  return uVar2;
}




void FUN_1004e3054(double param_1,int *param_2,int *param_3,double *param_4)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)(int)(param_1 * 1.1574074074074073e-05);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)((param_1 + dVar2 * -86400.0) * 0.0002777777777777778);
  }
  if (param_3 == (int *)0x0) {
    if (param_4 == (double *)0x0) {
      return;
    }
    param_1 = param_1 + dVar2 * -86400.0;
    *param_4 = param_1;
    if (param_2 == (int *)0x0) {
      return;
    }
    iVar1 = *param_2;
    dVar2 = 3600.0;
  }
  else {
    param_1 = param_1 + dVar2 * -86400.0;
    iVar1 = (int)(param_1 * 0.016666666666666666);
    *param_3 = iVar1;
    if (param_2 == (int *)0x0) {
      if (param_4 == (double *)0x0) {
        return;
      }
    }
    else {
      iVar1 = iVar1 + *param_2 * -0x3c;
      *param_3 = iVar1;
      if (param_4 == (double *)0x0) {
        return;
      }
      param_1 = param_1 + (double)*param_2 * -3600.0;
    }
    dVar2 = 60.0;
  }
  *param_4 = param_1 - (double)iVar1 * dVar2;
  return;
}




void FUN_1004e3120(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1004e321c();
  }
  return;
}




void FUN_1004e313c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




uint * thunk_FUN_1004e439c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100015420(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 1;
    puVar2 = *(undefined2 **)(param_2 + 2);
    puVar3 = *(undefined2 **)(param_1 + 2);
    do {
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_1004e3148(undefined4 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    FUN_1004e321c();
  }
  return;
}




void FUN_1004e3170(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if ((-1 < *(char *)((long)param_2 + 0x17)) || (*param_2 != 0)) {
    FUN_1004e321c();
  }
  return;
}




void FUN_1004e3198(uint *param_1,ulong param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  long lVar4;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_100015420(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      lVar4 = (param_2 & 0xffffffff) - (ulong)uVar1;
      puVar3 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 2);
      do {
        *puVar3 = param_3;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar2;
  }
  return;
}




undefined4 * FUN_1004e321c(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulong extraout_x12;
  
  if (param_2 == (byte *)0x0) {
LAB_1004e3280:
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    bVar3 = *param_2;
    if (bVar3 == 0) {
      iVar5 = 0;
    }
    else {
      uVar6 = 0;
      iVar1 = 0;
      pbVar8 = param_2;
      do {
        iVar5 = iVar1;
        pbVar8 = pbVar8 + 1;
        bVar4 = (&DAT_10115bfc1)[(ulong)(byte)(&DAT_10115bec1)[bVar3] + uVar6 * 0x10];
        uVar6 = (ulong)bVar4;
        iVar1 = iVar5;
        if (bVar4 == 0) {
          iVar1 = iVar5 + 1;
        }
        bVar3 = *pbVar8;
      } while (bVar3 != 0);
      if (bVar4 != 0) goto LAB_1004e3280;
      iVar5 = iVar5 + 1;
    }
    FUN_1004e3198(param_1,iVar5,0);
    bVar3 = *param_2;
    if (bVar3 != 0) {
      uVar7 = 0;
      uVar9 = 0;
      uVar6 = extraout_x12;
      do {
        param_2 = param_2 + 1;
        uVar2 = 0xffU >> (ulong)((byte)(&DAT_10115bec1)[bVar3] & 0x1f) & (uint)bVar3;
        if (uVar9 != 0) {
          uVar2 = bVar3 & 0x3f | (int)uVar6 << 6;
        }
        uVar6 = (ulong)uVar2;
        uVar9 = (uint)(byte)(&DAT_10115bfc1)
                            [(ulong)(byte)(&DAT_10115bec1)[bVar3] + (ulong)uVar9 * 0x10];
        if (uVar9 == 0) {
          *(short *)(*(long *)(param_1 + 2) + uVar7 * 2) = (short)uVar2;
          uVar7 = (ulong)((int)uVar7 + 1);
        }
        bVar3 = *param_2;
      } while (bVar3 != 0);
    }
  }
  return param_1;
}




void FUN_1004e3318(undefined4 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    FUN_1004e33f4();
  }
  return;
}




void FUN_1004e3340(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1004e33f4();
  }
  return;
}




undefined4 * FUN_1004e335c(undefined4 *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  
  if (param_2 == (undefined2 *)0x0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
    } while (param_2[uVar3] != 0);
    FUN_1004e3198(param_1,uVar3,0);
    if (uVar1 != 0) {
      uVar3 = (ulong)uVar1;
      puVar2 = *(undefined2 **)(param_1 + 2);
      do {
        *puVar2 = *param_2;
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
  }
  return param_1;
}




void FUN_1004e33d8(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1004e335c();
  }
  return;
}




undefined4 * FUN_1004e33f4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
    } while (param_2[uVar3] != 0);
    FUN_1004e3198(param_1,uVar3,0);
    if (uVar1 != 0) {
      uVar3 = (ulong)uVar1;
      puVar2 = *(undefined2 **)(param_1 + 2);
      do {
        *puVar2 = (short)*param_2;
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
  }
  return param_1;
}




undefined8 FUN_1004e3470(undefined8 param_1)

{
  FUN_1000153b4();
  return param_1;
}




void FUN_1004e3494(undefined4 *param_1,long *param_2)

{
  if ((*(char *)((long)param_2 + 0x17) < '\0') && (*param_2 == 0)) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    FUN_1004e321c();
  }
  return;
}




void FUN_1004e34c8(undefined4 *param_1)

{
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  return;
}




void FUN_1004e34d8(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *param_1;
  pbVar4 = param_2;
  if (uVar1 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(ushort *)(*(long *)(param_1 + 2) + lVar5);
      if ((0 < (int)param_3) && ((long)(param_2 + ((ulong)param_3 - (long)pbVar4)) < 5)) break;
      if (uVar2 < 0x80) {
        *pbVar4 = (byte)uVar2;
        lVar6 = 1;
      }
      else {
        bVar3 = (byte)uVar2 & 0x3f | 0x80;
        if (uVar2 < 0x800) {
          *pbVar4 = (byte)(uVar2 >> 6) | 0xc0;
          pbVar4[1] = bVar3;
          lVar6 = 2;
        }
        else {
          *pbVar4 = (byte)(uVar2 >> 0xc) | 0xe0;
          pbVar4[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
          pbVar4[2] = bVar3;
          lVar6 = 3;
        }
      }
      pbVar4 = pbVar4 + lVar6;
      lVar5 = lVar5 + 2;
    } while ((ulong)uVar1 * 2 - lVar5 != 0);
  }
  *pbVar4 = 0;
  return;
}




bool FUN_1004e3624(int *param_1)

{
  return *param_1 == 0;
}




undefined4 FUN_1004e3634(undefined4 *param_1)

{
  return *param_1;
}




undefined2 FUN_1004e363c(long param_1,uint param_2)

{
  return *(undefined2 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 2);
}




undefined2 FUN_1004e3648(long param_1,uint param_2)

{
  return *(undefined2 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 2);
}




bool FUN_1004e3654(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 == *param_2) {
    if (uVar1 == 0) {
      return true;
    }
    if (**(short **)(param_1 + 2) == **(short **)(param_2 + 2)) {
      uVar2 = 1;
      do {
        uVar3 = uVar2;
        if (uVar1 == uVar3) break;
        uVar2 = uVar3 + 1;
      } while ((*(short **)(param_1 + 2))[uVar3] == (*(short **)(param_2 + 2))[uVar3]);
      return uVar1 <= uVar3;
    }
  }
  return false;
}




bool FUN_1004e36c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 == *param_2) {
    if (uVar1 == 0) {
      return false;
    }
    if (**(short **)(param_1 + 2) == **(short **)(param_2 + 2)) {
      uVar2 = 1;
      do {
        uVar3 = uVar2;
        if (uVar1 == uVar3) break;
        uVar2 = uVar3 + 1;
      } while ((*(short **)(param_1 + 2))[uVar3] == (*(short **)(param_2 + 2))[uVar3]);
      return uVar3 < uVar1;
    }
  }
  return true;
}




uint * FUN_1004e372c(uint *param_1,uint *param_2)

{
  ulong uVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  FUN_1004e3198(param_1,*param_2 + uVar4,0);
  uVar1 = (ulong)*param_2;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_1 + 2);
    puVar2 = *(undefined2 **)(param_2 + 2);
    do {
      *(undefined2 *)(lVar3 + (ulong)uVar4 * 2) = *puVar2;
      uVar4 = uVar4 + 1;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_1004e3790(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 < param_3) || (*param_2 < param_3)) {
    return 0;
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if ((param_3 != 0xffffffff) && (param_3 <= uVar2)) {
        return 1;
      }
      if (*(short *)(*(long *)(param_1 + 2) + uVar2 * 2) !=
          *(short *)(*(long *)(param_2 + 2) + uVar2 * 2)) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return 1;
}




ulong FUN_1004e37f8(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  uVar1 = uVar3;
  if (uVar4 <= uVar3) {
    uVar1 = uVar4;
  }
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      if ((param_4 != 0xffffffff) && (param_4 <= uVar6)) break;
      uVar7 = (uint)*(ushort *)(*(long *)(param_1 + 2) + uVar6 * 2);
      if (param_3 == 0) {
        uVar8 = (uint)*(ushort *)(*(long *)(param_2 + 2) + uVar6 * 2);
        if (uVar7 < uVar8) goto LAB_1004e389c;
      }
      else {
        uVar2 = uVar7 + 0x20;
        if (0x19 < uVar7 - 0x41) {
          uVar2 = uVar7;
        }
        uVar5 = *(ushort *)(*(long *)(param_2 + 2) + uVar6 * 2);
        uVar8 = uVar5 + 0x20;
        if (0x19 < uVar5 - 0x41) {
          uVar8 = (uint)uVar5;
        }
        uVar7 = uVar2;
        if ((uVar2 & 0xffff) < (uVar8 & 0xffff)) goto LAB_1004e389c;
      }
      if ((uVar8 & 0xffff) < (uVar7 & 0xffff)) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  uVar6 = (ulong)(uVar4 < uVar3);
  if (uVar3 < uVar4) {
LAB_1004e389c:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}




int FUN_1004e38ac(undefined8 param_1,char *param_2)

{
  int iVar1;
  char acStack_1038 [4096];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = _vsnprintf(acStack_1038,0x400,param_2,&stack0x00000000);
  if (iVar1 != -1) {
    FUN_1004e321c(param_1,acStack_1038);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1004e3940(uint *param_1,uint param_2,uint *param_3)

{
  long lVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = *param_3;
    if ((uVar4 != 0 && uVar4 <= uVar3) && (param_2 < uVar3 && uVar4 <= uVar3 - param_2)) {
      psVar5 = *(short **)(param_3 + 2);
      uVar6 = (ulong)param_2;
      lVar7 = *(long *)(param_1 + 2) + (ulong)param_2 * 2;
      do {
        if ((*(short *)(*(long *)(param_1 + 2) + uVar6 * 2) == *psVar5) && (*psVar5 == *psVar5)) {
          uVar8 = 1;
          do {
            if ((ulong)uVar3 <= uVar6 + uVar8 || uVar4 <= uVar8) {
              return 1;
            }
            lVar1 = uVar8 * 2;
            psVar2 = psVar5 + uVar8;
            uVar8 = uVar8 + 1;
          } while (*(short *)(lVar7 + lVar1) == *psVar2);
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 < uVar3) && (lVar7 = lVar7 + 2, uVar4 <= uVar3 - (int)uVar6));
      return 0;
    }
  }
  return 0;
}




bool FUN_1004e39ec(uint *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  if (param_2 < uVar2) {
    uVar5 = (ulong)param_2;
    if (*(ushort *)(*(long *)(param_1 + 2) + (ulong)param_2 * 2) == param_3) {
      bVar3 = true;
    }
    else {
      do {
        if (uVar2 - 1 == (int)uVar5) {
          bVar3 = uVar5 + 1 < (ulong)uVar2;
          goto joined_r0x0001004e3a18;
        }
        lVar1 = uVar5 * 2;
        uVar5 = uVar5 + 1;
      } while (*(ushort *)(*(long *)(param_1 + 2) + 2 + lVar1) != param_3);
      bVar3 = uVar5 < uVar2;
    }
    uVar4 = (undefined4)uVar5;
    if (param_4 == (undefined4 *)0x0) {
      return bVar3;
    }
  }
  else {
    bVar3 = false;
joined_r0x0001004e3a18:
    if (param_4 == (undefined4 *)0x0) {
      return bVar3;
    }
    uVar4 = 0xffffffff;
  }
  *param_4 = uVar4;
  return bVar3;
}




undefined8
FUN_1004e3a6c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
             int *param_7,uint *param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  uVar8 = *param_1;
  if (param_2 < uVar8) {
    uVar7 = (ulong)param_2;
    puVar4 = (ushort *)(*(long *)(param_1 + 2) + (ulong)param_2 * 2);
    do {
      if ((*puVar4 == param_3) && ((((param_5 ^ 1) & 1) != 0 || uVar7 == 0 || (puVar4[-1] != 0x5c)))
         ) goto LAB_1004e3aec;
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar8 != uVar7);
    uVar7 = 0xffffffff;
LAB_1004e3aec:
    iVar6 = (int)uVar7;
    uVar1 = iVar6 + 1;
    if (uVar1 < uVar8) {
      lVar9 = 0;
      puVar4 = (ushort *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 2);
      do {
        if ((*puVar4 == param_4) &&
           ((((param_5 ^ 1) & 1) != 0 || (ulong)uVar1 - lVar9 == 0 || (puVar4[-1] != 0x5c)))) {
          if (iVar6 == -1) {
            return 0;
          }
          uVar8 = (uint)((ulong)uVar1 - lVar9);
          if ((param_6 != 0) && (FUN_1004e3198(param_6,-(int)lVar9,0), uVar1 < uVar8)) {
            uVar2 = -lVar9;
            puVar5 = (undefined2 *)(*(long *)(param_1 + 2) + (uVar7 & 0xffffffff) * 2);
            puVar3 = *(undefined2 **)(param_6 + 8);
            do {
              puVar5 = puVar5 + 1;
              *puVar3 = *puVar5;
              uVar1 = (int)uVar2 - 1;
              uVar2 = (ulong)uVar1;
              puVar3 = puVar3 + 1;
            } while (uVar1 != 0);
          }
          if (param_7 != (int *)0x0) {
            *param_7 = iVar6;
          }
          if (param_8 != (uint *)0x0) {
            *param_8 = uVar8;
          }
          return 1;
        }
        lVar9 = lVar9 + -1;
        puVar4 = puVar4 + 1;
      } while ((iVar6 - uVar8) + 1 != (int)lVar9);
    }
  }
  return 0;
}




bool FUN_1004e3bc4(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  void *pvVar7;
  ulong uVar8;
  short *psVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_50;
  void *local_48;
  
  uVar4 = *param_1;
  uVar8 = (ulong)uVar4;
  if (uVar4 != 0) {
    uVar5 = *param_3;
    if ((uVar5 != 0) && (param_2 < uVar4)) {
      psVar9 = *(short **)(param_3 + 2);
      uVar12 = (ulong)param_2;
      lVar10 = *(long *)(param_1 + 2) + (ulong)param_2 * 2;
      bVar6 = true;
      do {
        if ((*(short *)(*(long *)(param_1 + 2) + uVar12 * 2) == *psVar9) && (*psVar9 == *psVar9)) {
          uVar11 = 1;
          do {
            if (uVar8 <= uVar12 + uVar11 || uVar5 <= uVar11) {
              iVar3 = (uVar4 - uVar5) + *param_4;
              if (iVar3 < 1) {
                *param_1 = 0;
                return bVar6;
              }
              uVar8 = uVar12 & 0xffffffff;
              local_50 = 0;
              local_48 = (void *)0x0;
              FUN_1004e3198(&local_50,iVar3,0);
              _memmove(local_48,*(void **)(param_1 + 2),(ulong)(uint)((int)uVar12 << 1));
              if (*param_4 == 0) {
                uVar11 = 0;
              }
              else {
                _memmove((void *)((long)local_48 + uVar8 * 2),*(void **)(param_4 + 2),
                         (ulong)(*param_4 << 1));
                uVar11 = (ulong)*param_4;
              }
              _memmove((void *)((long)local_48 + (uVar11 + uVar8) * 2),
                       (void *)(*(long *)(param_1 + 2) + (uVar8 + *param_3) * 2),
                       (ulong)((*param_1 - (*param_3 + (int)uVar12)) * 2));
              uVar13 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = local_50;
              pvVar7 = *(void **)(param_1 + 2);
              *(void **)(param_1 + 2) = local_48;
              if (pvVar7 == (void *)0x0) {
                return bVar6;
              }
              local_50 = uVar13;
              local_48 = pvVar7;
              operator_delete__(pvVar7);
              return bVar6;
            }
            lVar1 = uVar11 * 2;
            psVar2 = psVar9 + uVar11;
            uVar11 = uVar11 + 1;
          } while (*(short *)(lVar10 + lVar1) == *psVar2);
        }
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + 2;
        bVar6 = uVar12 < uVar8;
      } while (uVar12 != uVar8);
    }
  }
  return false;
}




undefined8 FUN_1004e3d50(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  short *psVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  short *psVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 local_50;
  void *local_48;
  
  uVar4 = *param_1;
  if (((uVar4 == 0) || (uVar6 = *param_3, uVar6 == 0)) || (uVar4 <= param_2)) {
    return 0;
  }
  uVar5 = 0;
LAB_1004e3d90:
  if (param_2 < uVar4) {
    psVar7 = *(short **)(param_3 + 2);
    uVar11 = (ulong)param_2;
    lVar8 = *(long *)(param_1 + 2) + (ulong)param_2 * 2;
    do {
      if (*(short *)(*(long *)(param_1 + 2) + uVar11 * 2) == *psVar7) {
        if (uVar6 == 0) goto LAB_1004e3e0c;
        if (*psVar7 == *psVar7) {
          uVar9 = 1;
          do {
            if ((ulong)uVar4 <= uVar11 + uVar9 || uVar6 <= uVar9) goto LAB_1004e3e0c;
            lVar1 = uVar9 * 2;
            psVar2 = psVar7 + uVar9;
            uVar9 = uVar9 + 1;
          } while (*(short *)(lVar8 + lVar1) == *psVar2);
        }
      }
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 2;
      if (uVar11 == uVar4) {
        return uVar5;
      }
    } while( true );
  }
  goto LAB_1004e3ed4;
LAB_1004e3e0c:
  iVar10 = (uVar4 - uVar6) + *param_4;
  if (iVar10 < 1) {
    *param_1 = 0;
    return 1;
  }
  uVar9 = uVar11 & 0xffffffff;
  local_50 = 0;
  local_48 = (void *)0x0;
  FUN_1004e3198(&local_50,iVar10,0);
  iVar10 = (int)uVar11;
  _memmove(local_48,*(void **)(param_1 + 2),(ulong)(uint)(iVar10 << 1));
  uVar4 = 0;
  if (*param_4 != 0) {
    _memmove((void *)((long)local_48 + uVar9 * 2),*(void **)(param_4 + 2),(ulong)(*param_4 << 1));
    uVar4 = *param_4;
  }
  _memmove((void *)((long)local_48 + (uVar9 + uVar4) * 2),
           (void *)(*(long *)(param_1 + 2) + (uVar9 + *param_3) * 2),
           (ulong)((*param_1 - (*param_3 + iVar10)) * 2));
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = local_50;
  pvVar3 = *(void **)(param_1 + 2);
  *(void **)(param_1 + 2) = local_48;
  param_2 = *param_4;
  if (pvVar3 == (void *)0x0) {
    uVar4 = (uint)local_50;
  }
  else {
    local_50 = uVar5;
    local_48 = pvVar3;
    operator_delete__(pvVar3);
    uVar4 = *param_1;
  }
  param_2 = param_2 + iVar10;
  uVar5 = 1;
LAB_1004e3ed4:
  if (uVar4 <= param_2) {
    return uVar5;
  }
  uVar6 = *param_3;
  goto LAB_1004e3d90;
}




void FUN_1004e3f10(undefined8 param_1)

{
  FUN_1004e3f18(param_1,param_1);
  return;
}




void FUN_1004e3f18(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ushort uVar8;
  
  if (param_2 != param_1) {
    FUN_1004e3198(param_2,*param_1,0);
  }
  uVar2 = *param_1;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    uVar6 = 0;
    lVar5 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      uVar8 = *(ushort *)(lVar7 + (long)(int)uVar6 * 2);
      if (uVar8 == 0x5c) {
        uVar6 = (long)(int)uVar6 + 1;
        uVar3 = *(ushort *)(lVar7 + uVar6 * 2);
        if (uVar3 < 0x62) {
          uVar8 = uVar3;
          if ((uVar3 != 0x22) && (uVar3 != 0x5c)) {
            if (uVar3 != 0x61) goto switchD_1004e3fc4_caseD_6f;
            uVar8 = 7;
          }
        }
        else {
          uVar8 = 10;
          switch(uVar3) {
          case 0x6e:
            break;
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x73:
          case 0x75:
switchD_1004e3fc4_caseD_6f:
            *(undefined2 *)(lVar5 + (long)iVar4 * 2) = 0x5c;
            iVar4 = iVar4 + 1;
            uVar8 = *(ushort *)(lVar7 + uVar6 * 2);
            break;
          case 0x72:
            uVar8 = 0xd;
            break;
          case 0x74:
            uVar8 = 9;
            break;
          case 0x76:
            uVar8 = 0xb;
            break;
          default:
            if (uVar3 == 0x62) {
              uVar8 = 8;
            }
            else {
              if (uVar3 != 0x66) goto switchD_1004e3fc4_caseD_6f;
              uVar8 = 0xc;
            }
          }
        }
      }
      *(ushort *)(lVar5 + (long)iVar4 * 2) = uVar8;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      iVar4 = iVar4 + 1;
    } while (uVar1 < uVar2);
  }
  FUN_1004e3198(param_2,iVar4,0);
  return;
}




void FUN_1004e403c(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    lVar4 = 0;
    lVar3 = *(long *)(param_1 + 2);
    do {
      lVar2 = lVar4;
      if (*(short *)(lVar3 + lVar4) != 0x20) break;
      lVar4 = lVar4 + 2;
      lVar2 = (ulong)uVar1 * 2;
    } while ((ulong)uVar1 * 2 - lVar4 != 0);
    if (lVar3 + lVar2 != lVar3) {
      FUN_1004e4084();
      return;
    }
  }
  return;
}




void FUN_1004e4084(uint *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 1);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined2 *)(lVar3 + (ulong)uVar1 * 2) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_1004e40f0(uint *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  lVar1 = lVar3 + (ulong)*param_1 * 2;
  lVar4 = (ulong)*param_1 << 1;
  do {
    if (lVar4 == 0) goto LAB_1004e4120;
    lVar2 = lVar3 + lVar4;
    lVar4 = lVar4 + -2;
  } while (*(short *)(lVar2 + -2) == 0x20);
  lVar3 = lVar3 + lVar4 + 2;
LAB_1004e4120:
  if (lVar3 != lVar1) {
    FUN_1004e4084();
    return;
  }
  return;
}




void FUN_1004e4130(undefined8 param_1)

{
  FUN_1004e403c();
  FUN_1004e40f0(param_1);
  return;
}




void FUN_1004e4154(undefined8 *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (param_3 <= uVar2) {
    uVar1 = param_3;
  }
  if (param_4 + param_3 <= uVar2) {
    uVar2 = param_4 + param_3;
  }
  FUN_1004e418c(param_1,0,*(long *)(param_2 + 2) + (ulong)uVar1 * 2,
                *(long *)(param_2 + 2) + (ulong)uVar2 * 2);
  return;
}




undefined2 *
FUN_1004e418c(uint *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined2 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar4 = (uint)(uVar12 >> 1);
    if (uVar2 - uVar1 < uVar4) {
      uVar1 = uVar1 + uVar4;
      uVar4 = 0;
      if (uVar2 != 0xffffffff) {
        uVar4 = uVar2 + (~uVar2 | 0xfffffff0) + 0x11;
      }
      if (uVar2 < 0x20) {
        uVar4 = uVar2 << 1;
      }
      uVar2 = uVar1;
      if (uVar1 <= uVar4) {
        uVar2 = uVar4;
      }
      puVar3 = operator_new__((ulong)uVar2 << 1);
      puVar7 = puVar3;
      for (puVar5 = puVar9; puVar5 != param_2; puVar5 = puVar5 + 1) {
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
      }
      uVar11 = uVar10 >> 1 & 0xffffffff;
      _memcpy(puVar3 + (uVar10 >> 1 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffffe);
      uVar6 = (long)puVar9 + (uVar6 * 2 - (long)param_2);
      if (uVar6 != 0) {
        _memcpy((void *)((long)puVar3 + (uVar12 & 0x1fffffffe) + uVar11 * 2),param_2,
                uVar6 & 0xfffffffffffffffe);
      }
      if (puVar9 != (undefined2 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined2 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      puVar9 = puVar3;
    }
    else {
      puVar5 = puVar9 + uVar6;
      uVar11 = (ulong)((long)puVar5 - (long)param_2) >> 1;
      if (uVar4 < (uint)uVar11) {
        uVar11 = uVar12 >> 1 & 0xffffffff;
        if (uVar11 != 0) {
          lVar8 = 0;
          do {
            *(undefined2 *)((long)puVar5 + lVar8) =
                 *(undefined2 *)((long)puVar5 + lVar8 + uVar11 * -2);
            lVar8 = lVar8 + 2;
          } while (lVar8 != uVar11 * 2);
        }
        lVar8 = (long)puVar5 + ((uVar12 >> 1 & 0xffffffff) * -2 - (long)param_2);
        if (lVar8 != 0) {
          puVar5 = puVar9 + (uVar6 - uVar11);
          do {
            puVar5 = puVar5 + -1;
            *(undefined2 *)((long)param_2 + lVar8 + uVar11 * 2 + -2) = *puVar5;
            lVar8 = lVar8 + -2;
          } while (lVar8 != 0);
        }
        do {
          puVar5 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar5;
        } while (puVar5 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar7 = param_2;
          do {
            puVar7[uVar12 >> 1 & 0xffffffff] = *puVar7;
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar5);
        }
        uVar6 = (ulong)((long)puVar5 - (long)param_2) >> 1 & 0xffffffff;
        for (puVar7 = param_3 + (uVar11 & 0xffffffff); puVar7 != param_4; puVar7 = puVar7 + 1) {
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
        }
        if (uVar6 != 0) {
          lVar8 = uVar6 << 1;
          do {
            *param_2 = *param_3;
            lVar8 = lVar8 + -2;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      *param_1 = uVar1 + uVar4;
      uVar11 = uVar10 >> 1 & 0xffffffff;
    }
    param_2 = puVar9 + uVar11;
  }
  return param_2;
}




uint * FUN_1004e439c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100015420(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 1;
    puVar2 = *(undefined2 **)(param_2 + 2);
    puVar3 = *(undefined2 **)(param_1 + 2);
    do {
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_1004e43f4(void)

{
  DAT_101d91640 = 0;
  DAT_101d91648 = 0;
  FUN_1004e321c(&DAT_101d91640," \f\n\r\t\v");
  ___cxa_atexit(FUN_100046198,&DAT_101d91640,0x100000000);
  DAT_101d91650 = 0;
  DAT_101d91658 = 0;
  ___cxa_atexit(FUN_100046198,&DAT_101d91650,0x100000000);
  return;
}




void FUN_1004e4464(pthread_mutex_t *param_1,int param_2)

{
  int iVar1;
  pthread_mutexattr_t pStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  _pthread_mutexattr_init(&pStack_38);
  if (param_2 != 0) {
    _pthread_mutexattr_settype(&pStack_38,2);
  }
  iVar1 = _pthread_mutex_init(param_1,&pStack_38);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




int FUN_1004e44e8(pthread_t *param_1,void **param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  
  _pthread_create(param_1,(pthread_attr_t *)0x0,param_2,param_3);
  if ((int)param_4 != 2) {
    FUN_1004e454c(param_1,param_4);
  }
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101d91660);
  FUN_1004e45ec(&DAT_101d91660,*param_1);
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101d91660);
  return iVar1;
}




void FUN_1004e454c(undefined8 *param_1,uint param_2)

{
  int iVar1;
  sched_param local_78;
  int local_6c;
  pthread_attr_t pStack_68;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_6c = 0;
  _pthread_attr_init(&pStack_68);
  _pthread_attr_getschedpolicy(&pStack_68,&local_6c);
  local_78.sched_priority = 0;
  if (param_2 < 5) {
    local_78.sched_priority = *(int *)(&DAT_10115c088 + (long)(int)param_2 * 4);
  }
  _pthread_setschedparam((pthread_t)*param_1,local_6c,&local_78);
  iVar1 = _pthread_attr_destroy(&pStack_68);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




void FUN_1004e45ec(long param_1,pthread_t param_2)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  pthread_t local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  puVar2 = (uint *)(param_1 + 0x40);
  if (*puVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = _pthread_equal(*(pthread_t *)(*(long *)(param_1 + 0x48) + lVar3),param_2);
      if (iVar1 != 0) goto LAB_1004e466c;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *puVar2);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = param_2;
  FUN_1004e49d4(puVar2,&local_60);
LAB_1004e466c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_1004e46a0(undefined8 *param_1)

{
  int iVar1;
  
  _pthread_join((pthread_t)*param_1,(void **)0x0);
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101d91660);
  FUN_1004e46e8(&DAT_101d91660,*param_1);
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101d91660);
  return iVar1;
}




void FUN_1004e46e8(long param_1,pthread_t param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      iVar2 = _pthread_equal(*(pthread_t *)(*(long *)(param_1 + 0x48) + lVar4),param_2);
      if (iVar2 != 0) {
        puVar3 = (undefined8 *)
                 (*(long *)(param_1 + 0x48) + (ulong)(*(int *)(param_1 + 0x40) - 1) * 0x18);
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar4);
        uVar7 = puVar3[1];
        uVar6 = *puVar3;
        puVar1[2] = puVar3[2];
        puVar1[1] = uVar7;
        *puVar1 = uVar6;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        return;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < *(uint *)(param_1 + 0x40));
  }
  return;
}




void FUN_1004e4780(undefined8 *param_1)

{
  pthread_t p_Var1;
  
  p_Var1 = _pthread_self();
  *param_1 = p_Var1;
  return;
}




bool FUN_1004e47a4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _pthread_equal((pthread_t)*param_1,(pthread_t)*param_2);
  return iVar1 != 0;
}




int FUN_1004e47c8(char *param_1)

{
  int iVar1;
  pthread_t p_Var2;
  long lVar3;
  
  _pthread_setname_np(param_1);
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101d91660);
  p_Var2 = _pthread_self();
  lVar3 = FUN_1004e4818(p_Var2,p_Var2);
  FUN_1004d25b8(lVar3 + 8,0x10,param_1);
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101d91660);
  return iVar1;
}




void FUN_1004e4818(undefined8 param_1,undefined8 param_2)

{
  pthread_t p_Var1;
  long lVar2;
  
  p_Var1 = _pthread_self();
  lVar2 = FUN_1004e4a60(&DAT_101d91660,p_Var1);
  if (lVar2 != 0) {
    return;
  }
  FUN_1004e45ec(&DAT_101d91660,param_2);
  FUN_1004e4a60(&DAT_101d91660,p_Var1);
  return;
}




void FUN_1004e4884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149de98;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}




undefined8 * FUN_1004e4898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149de98;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_1004e46a0(param_1 + 1);
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}




void FUN_1004e48d8(long param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_1004e46a0(param_1 + 8);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_1004e4908(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004e490c);
  (*pcVar1)();
}




void FUN_1004e490c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004e4910);
  (*pcVar1)();
}




void FUN_1004e4910(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else {
    FUN_1004d25b8((undefined1 *)(param_1 + 0x11),0x10,param_2);
  }
  FUN_1004e44e8(param_1 + 8,FUN_1004e4964,param_1,2);
  return;
}




undefined8 FUN_1004e4964(long *param_1)

{
  FUN_1004e47c8((long)param_1 + 0x11);
  (**(code **)(*param_1 + 0x10))(param_1);
  return 0;
}




pthread_mutex_t * FUN_1004e499c(pthread_mutex_t *param_1)

{
  if (*(void **)param_1[1].__opaque != (void *)0x0) {
    operator_delete__(*(void **)param_1[1].__opaque);
    param_1[1].__sig = 0;
    param_1[1].__opaque[0] = '\0';
    param_1[1].__opaque[1] = '\0';
    param_1[1].__opaque[2] = '\0';
    param_1[1].__opaque[3] = '\0';
    param_1[1].__opaque[4] = '\0';
    param_1[1].__opaque[5] = '\0';
    param_1[1].__opaque[6] = '\0';
    param_1[1].__opaque[7] = '\0';
  }
  _pthread_mutex_destroy(param_1);
  return param_1;
}




void FUN_1004e49d4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
    FUN_1004e7d54(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x18;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(lVar4 + -8) = param_2[2];
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




long FUN_1004e4a60(long param_1,pthread_t param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = _pthread_equal(*(pthread_t *)(*(long *)(param_1 + 0x48) + lVar2),param_2);
      if (iVar1 != 0) {
        return *(long *)(param_1 + 0x48) + lVar2;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < *(uint *)(param_1 + 0x40));
  }
  return 0;
}




void FUN_1004e4ad0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  
  if ((int)param_1 != 0) {
    pvVar1 = operator_new(0xb8);
    lVar2 = FUN_1004e7de0();
    *(uint *)(lVar2 + 0xb0) = (uint)(param_2 >> 1) & 0x7fffffff;
    FUN_1004e4bf4(lVar2,param_2);
    DAT_101d916e0 = pvVar1;
    pvVar1 = operator_new(0xd8);
    DAT_101d916d8 = FUN_1004e63dc(pvVar1,param_1,param_3,"Dispatch",2);
  }
  return;
}




long * thunk_FUN_1004e63dc(long *param_1,uint param_2,long param_3,char *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  pthread_mutexattr_t apStack_d8 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = 0;
  *(uint *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  if (((DAT_10184e3b0 & 1) == 0) && (iVar7 = ___cxa_guard_acquire(&DAT_10184e3b0), iVar7 != 0)) {
    DAT_10184e3ac = _getpid();
    ___cxa_guard_release(&DAT_10184e3b0);
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x10184e3a8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      DAT_10184e3a8 = DAT_10184e3a8 + 1;
    }
  } while (cVar5 != '\0');
  FUN_1004d2698(apStack_d8,"/s-%d-%d");
  lVar8 = _sem_open(apStack_d8,0x200);
  param_1[2] = lVar8;
  _sem_unlink(apStack_d8);
  _pthread_mutexattr_init(apStack_d8);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 3),apStack_d8);
  *(undefined4 *)(param_1 + 0xb) = 0;
  _pthread_mutexattr_init(apStack_d8);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xc),apStack_d8);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  puVar9 = operator_new__((ulong)param_2 * 0x30 + 0x10);
  *puVar9 = 0x30;
  puVar9[1] = (ulong)param_2;
  puVar1 = puVar9 + 2;
  if (param_2 != 0) {
    puVar13 = puVar1;
    do {
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      *(undefined4 *)(puVar13 + 5) = 0x1000;
      puVar13[2] = 0;
      puVar13 = puVar13 + 6;
    } while (puVar13 != puVar1 + (ulong)param_2 * 6);
  }
  *param_1 = (long)puVar1;
  if ((param_3 != 0) && (uVar4 = *(uint *)(param_1 + 1), uVar4 != 0)) {
    uVar10 = (ulong)uVar4 + 1 & 0x1fffffffe;
    uVar11 = (ulong)uVar4 - 1;
    uVar15 = 1;
    uVar14 = 0;
    plVar12 = puVar9 + 8;
    do {
      if (uVar14 <= uVar11) {
        plVar12[-6] = param_3;
      }
      if (uVar15 <= uVar11) {
        *plVar12 = param_3;
      }
      uVar14 = uVar14 + 2;
      uVar15 = uVar15 + 2;
      plVar12 = plVar12 + 0xc;
      uVar10 = uVar10 - 2;
    } while (uVar10 != 0);
  }
  *(uint *)(param_1 + 1) = param_2;
  pcVar3 = "";
  if (param_4 != (char *)0x0) {
    pcVar3 = param_4;
  }
  FUN_1004d25b8(param_1 + 0x18,0x10,pcVar3);
  *(undefined1 *)(param_1 + 0x1a) = 1;
  if ((int)param_1[1] != 0) {
    lVar8 = 0;
    uVar10 = 0;
    do {
      lVar2 = *param_1 + lVar8;
      *(int *)(lVar2 + 8) = (int)uVar10;
      *(undefined4 *)(lVar2 + 0x28) = 0x2000;
      *(long **)(lVar2 + 0x18) = param_1;
      *(long **)(lVar2 + 0x20) = param_1 + 0x14;
      FUN_1004e44e8(lVar2 + 0x10,FUN_1004e5d4c,lVar2,param_5);
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x30;
    } while (uVar10 < *(uint *)(param_1 + 1));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != lStack_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}




void FUN_1004e4b5c(void)

{
  void *pvVar1;
  
  if (DAT_101d916d8 != 0) {
    pvVar1 = (void *)FUN_1004e6660();
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_101d916e0;
  DAT_101d916d8 = 0;
  if (DAT_101d916e0 != (void *)0x0) {
    FUN_1004e4c5c(DAT_101d916e0);
    _pthread_mutex_destroy((pthread_mutex_t *)((long)pvVar1 + 0x70));
    _pthread_mutex_destroy((pthread_mutex_t *)((long)pvVar1 + 0x30));
    operator_delete(pvVar1);
  }
  DAT_101d916e0 = (void *)0x0;
  return;
}




long * thunk_FUN_1004e6660(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_1004e5cd4();
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    plVar10 = param_1 + 0xb;
    do {
      uVar6 = (ulong)uVar5;
      piVar7 = (int *)(*param_1 + 0x28);
      while (*piVar7 == 0x4000) {
        piVar7 = piVar7 + 0xc;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          if (uVar5 != 0) {
            lVar9 = 0;
            uVar6 = 0;
            do {
              FUN_1004e5e00(*param_1 + lVar9);
              uVar6 = uVar6 + 1;
              lVar9 = lVar9 + 0x30;
            } while (uVar6 < *(uint *)(param_1 + 1));
          }
          goto LAB_1004e671c;
        }
      }
      if ((int)*plVar10 < 0x81) {
        _sem_post(param_1[2]);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)*plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1004d29c0(5);
      uVar5 = *(uint *)(param_1 + 1);
    } while (uVar5 != 0);
  }
LAB_1004e671c:
  lVar9 = *param_1;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + -8) != 0) {
      lVar8 = *(long *)(lVar9 + -8) * 0x30;
      do {
        *(undefined4 *)(lVar9 + -8 + lVar8) = 0x5000;
        lVar8 = lVar8 + -0x30;
      } while (lVar8 != 0);
    }
    operator_delete__((void *)(lVar9 + -0x10));
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar10 = param_1 + 0x14;
  lVar8 = *plVar10;
  lVar9 = lVar8 + -0x120;
  if (lVar8 != 0 && lVar9 != 0) {
    do {
      lVar8 = *(long *)(lVar9 + 0x120);
      FUN_1004e4edc(lVar9);
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = lVar8 + -0x120;
      }
    } while (lVar9 != 0);
    lVar8 = *plVar10;
    lVar9 = lVar8 + -0x120;
  }
  if (lVar8 != 0) {
    while (lVar9 != 0) {
      FUN_1004e5918(lVar9,0,0);
      plVar1 = (long *)(lVar9 + 0x120);
      lVar9 = 0;
      if (*plVar1 != 0) {
        lVar9 = *plVar1 + -0x120;
      }
    }
  }
  param_1[0x17] = 0;
  *plVar10 = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xc));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  iVar4 = _sem_close(param_1[2]);
  param_1[2] = (long)iVar4;
  return param_1;
}




bool FUN_1004e4bc0(void)

{
  return DAT_101d916d8 != 0;
}




undefined4 FUN_1004e4bd4(void)

{
  if (DAT_101d916d8 != 0) {
    return *(undefined4 *)(DAT_101d916d8 + 8);
  }
  return 0;
}




void FUN_1004e4bf0(void)

{
  return;
}




ulong FUN_1004e4bf4(ulong param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (param_2 != 0) {
    do {
      puVar2 = operator_new(0x20);
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
      *(undefined8 **)(*(long *)(param_1 + 8) + 0x10) = puVar2;
      *(undefined8 **)(param_1 + 8) = puVar2;
      uVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
      uVar3 = (ulong)uVar1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar3;
}




void FUN_1004e4c5c(undefined8 param_1)

{
  void *pvVar1;
  
  while (pvVar1 = (void *)FUN_1004e4cc4(param_1), pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return;
}




void FUN_1004e4c8c(long param_1)

{
  long lVar1;
  
  while (lVar1 = FUN_1004e4cc4(param_1), lVar1 == 0) {
    FUN_1004e4bf4(param_1,*(undefined4 *)(param_1 + 0xb0));
  }
  return;
}




long * FUN_1004e4cc4(long *param_1)

{
  pthread_mutex_t *ppVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  ppVar1 = (pthread_mutex_t *)(param_1 + 6);
  _pthread_mutex_lock(ppVar1);
  plVar4 = (long *)*param_1;
  plVar5 = plVar4 + 2;
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    plVar2 = param_1 + 2;
    do {
      *param_1 = lVar3;
      _pthread_mutex_unlock(ppVar1);
      if (plVar4 != plVar2) {
        return plVar4;
      }
      *plVar5 = 0;
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xe));
      *(long **)(param_1[1] + 0x10) = plVar2;
      param_1[1] = (long)plVar2;
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xe));
      _pthread_mutex_lock(ppVar1);
      plVar4 = (long *)*param_1;
      plVar5 = plVar4 + 2;
      lVar3 = *plVar5;
    } while (lVar3 != 0);
  }
  _pthread_mutex_unlock(ppVar1);
  return (long *)0x0;
}




pthread_key_t * FUN_1004e4d70(pthread_key_t *param_1)

{
  _pthread_key_delete(*param_1);
  return param_1;
}




pthread_key_t * FUN_1004e4d98(pthread_key_t *param_1)

{
  _pthread_key_delete(*param_1);
  return param_1;
}




void FUN_1004e4dc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




undefined8 * FUN_1004e4dcc(undefined8 *param_1)

{
  int iVar1;
  pthread_mutexattr_t pStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = 0;
  param_1[1] = "";
  param_1[2] = 0;
  FUN_1004e7de0(param_1 + 3);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  _pthread_mutexattr_init(&pStack_38);
  iVar1 = _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x1c),&pStack_38);
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




undefined8 * thunk_FUN_1004e4dcc(undefined8 *param_1)

{
  int iVar1;
  pthread_mutexattr_t pStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = 0;
  param_1[1] = "";
  param_1[2] = 0;
  FUN_1004e7de0(param_1 + 3);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  _pthread_mutexattr_init(&pStack_38);
  iVar1 = _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x1c),&pStack_38);
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




void FUN_1004e4e60(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 2) {
    FUN_1004e5088(param_1,2,0,param_3);
    return;
  }
  FUN_1004e5088(param_1,param_2,DAT_101d916d8,param_3);
  return;
}




void thunk_FUN_1004e5088(int *param_1,int param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  pthread_t p_Stack_28;
  
  *param_1 = param_2;
  pcVar1 = "";
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  *(char **)(param_1 + 2) = pcVar1;
  lVar3 = DAT_101d916f8;
  if (param_4 != (char *)0x0) {
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    *(int **)(param_1 + 0x4e) = DAT_101d91700;
    piVar2 = (int *)&DAT_101d916f8;
    if (lVar3 != 0) {
      piVar2 = DAT_101d91700;
    }
    *(int **)piVar2 = param_1 + 0x4c;
    DAT_101d91708 = DAT_101d91708 + 1;
    DAT_101d91700 = param_1 + 0x4c;
  }
  param_1[1] = 1;
  if (param_2 == 2) {
    p_Stack_28 = _pthread_self();
    FUN_1004e5340(param_1,&p_Stack_28);
  }
  else {
    *(undefined8 *)(param_1 + 4) = param_3;
  }
  puVar4 = *(undefined **)(param_1 + 2);
  if (PTR_s___Main_OS_Serial_Queue_101867460 == puVar4) {
    plVar5 = &DAT_101d91718;
  }
  else if (PTR_s___Render_Serial_Queue_101867468 == puVar4) {
    plVar5 = &DAT_101d91720;
  }
  else if (PTR_s___Update_Serial_Queue_101867470 == puVar4) {
    plVar5 = &DAT_101d91728;
  }
  else if (PTR_s___Default_Concurrent_Queue_101867478 == puVar4) {
    plVar5 = &DAT_101d91730;
  }
  else {
    if (PTR_s___LongRunning_Concurrent_Queue_101867480 != puVar4) {
      return;
    }
    plVar5 = &DAT_101d91738;
  }
  *plVar5 = (long)param_1;
  return;
}




long FUN_1004e4e84(long param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1004e4edc(param_1);
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe0));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x88));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
  return param_1;
}




bool FUN_1004e4ecc(long param_1)

{
  return *(int *)(param_1 + 4) != 0;
}




void FUN_1004e4edc(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 2);
  if (PTR_s___Main_OS_Serial_Queue_101867460 == puVar4) {
    puVar3 = &DAT_101d91718;
  }
  else if (PTR_s___Render_Serial_Queue_101867468 == puVar4) {
    puVar3 = &DAT_101d91720;
  }
  else if (PTR_s___Update_Serial_Queue_101867470 == puVar4) {
    puVar3 = &DAT_101d91728;
  }
  else if (PTR_s___Default_Concurrent_Queue_101867478 == puVar4) {
    puVar3 = &DAT_101d91730;
  }
  else {
    if (PTR_s___LongRunning_Concurrent_Queue_101867480 != puVar4) goto LAB_1004e4f84;
    puVar3 = &DAT_101d91738;
  }
  *puVar3 = 0;
LAB_1004e4f84:
  if (*param_1 == 2) {
    _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e94580);
    FUN_1004e61d8(param_1);
    _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e94580);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else if ((*(long *)(param_1 + 4) != 0) && (param_1[1] == 2)) {
    FUN_1004e5918(param_1,0,0);
    FUN_1004e5208(param_1);
  }
  puVar3 = (undefined8 *)FUN_1004e4cc4(param_1 + 6);
  lVar1 = DAT_101d916e0;
  while (DAT_101d916e0 = lVar1, puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    _pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x70));
    *(undefined8 **)(*(long *)(lVar1 + 8) + 0x10) = puVar3;
    *(undefined8 **)(lVar1 + 8) = puVar3;
    _pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x70));
    puVar3 = (undefined8 *)FUN_1004e4cc4(param_1 + 6);
    lVar1 = DAT_101d916e0;
  }
  if ((*(long *)(param_1 + 2) != 0) && (iVar2 = FUN_1004d2524(), iVar2 != 0)) {
    FUN_1004e52cc(&DAT_101d916f8,param_1);
  }
  param_1[0] = -1;
  param_1[1] = 0;
  *(char **)(param_1 + 2) = "";
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return;
}




long thunk_FUN_1004e4e84(long param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1004e4edc(param_1);
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe0));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x88));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
  return param_1;
}




void FUN_1004e5088(int *param_1,int param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  pthread_t local_28;
  
  *param_1 = param_2;
  pcVar1 = "";
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  *(char **)(param_1 + 2) = pcVar1;
  lVar3 = DAT_101d916f8;
  if (param_4 != (char *)0x0) {
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    *(int **)(param_1 + 0x4e) = DAT_101d91700;
    piVar2 = (int *)&DAT_101d916f8;
    if (lVar3 != 0) {
      piVar2 = DAT_101d91700;
    }
    *(int **)piVar2 = param_1 + 0x4c;
    DAT_101d91708 = DAT_101d91708 + 1;
    DAT_101d91700 = param_1 + 0x4c;
  }
  param_1[1] = 1;
  if (param_2 == 2) {
    local_28 = _pthread_self();
    FUN_1004e5340(param_1,&local_28);
  }
  else {
    *(undefined8 *)(param_1 + 4) = param_3;
  }
  puVar4 = *(undefined **)(param_1 + 2);
  if (PTR_s___Main_OS_Serial_Queue_101867460 == puVar4) {
    plVar5 = &DAT_101d91718;
  }
  else if (PTR_s___Render_Serial_Queue_101867468 == puVar4) {
    plVar5 = &DAT_101d91720;
  }
  else if (PTR_s___Update_Serial_Queue_101867470 == puVar4) {
    plVar5 = &DAT_101d91728;
  }
  else if (PTR_s___Default_Concurrent_Queue_101867478 == puVar4) {
    plVar5 = &DAT_101d91730;
  }
  else {
    if (PTR_s___LongRunning_Concurrent_Queue_101867480 != puVar4) {
      return;
    }
    plVar5 = &DAT_101d91738;
  }
  *plVar5 = (long)param_1;
  return;
}




bool FUN_1004e51b4(int *param_1)

{
  return *param_1 == 2;
}




void FUN_1004e51c4(undefined8 param_1)

{
  pthread_t local_28;
  
  local_28 = _pthread_self();
  FUN_1004e5340(param_1,&local_28);
  return;
}




void FUN_1004e51fc(undefined8 param_1)

{
  FUN_1004e5918(param_1,0,0);
  return;
}




void FUN_1004e5208(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int local_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e5394(*(undefined8 *)(param_1 + 0x10),param_1);
  local_48[0] = 100;
  local_48[1] = 10;
  local_48[2] = 0xffffffff;
  if (0 < *(int *)(param_1 + 200)) {
    uVar3 = 0;
    do {
      FUN_1004d29c0(*(undefined4 *)((long)&PTR___mh_execute_header_10115c070 + uVar3 * 4));
      iVar1 = local_48[uVar3];
      local_48[uVar3] = iVar1 + -1;
      uVar2 = (uint)uVar3;
      if (iVar1 + -1 == 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = (ulong)uVar2;
    } while (0 < *(int *)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 4) = 1;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e52cc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0x130);
  if ((long *)*param_1 == plVar1) {
    if (plVar1 == (long *)param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *plVar1;
    }
  }
  else if ((long *)param_1[1] == plVar1) {
    puVar2 = *(undefined8 **)(param_2 + 0x138);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0x138);
    *puVar2 = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 **)(*(long *)(param_2 + 0x130) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




bool FUN_1004e5330(long param_1)

{
  return *(int *)(param_1 + 4) == 2;
}




void FUN_1004e5340(int *param_1,undefined8 *param_2)

{
  if (*param_1 == 0) {
    *param_1 = 2;
    if (*(long *)(param_1 + 4) != 0) {
      FUN_1004e5394(*(long *)(param_1 + 4),param_1);
    }
  }
  FUN_1004e542c(param_1,param_2);
  *(undefined8 *)(param_1 + 4) = *param_2;
  return;
}




int FUN_1004e5394(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0xe0));
  FUN_1004e6284((long *)(param_1 + 0xa0),param_2);
  if (*(long *)(param_1 + 0xb8) == param_2) {
    lVar3 = 0;
    if (*(long *)(param_2 + 0x120) != 0) {
      lVar3 = *(long *)(param_2 + 0x120) + -0x120;
    }
    if (lVar3 == 0) {
      lVar2 = *(long *)(param_1 + 0xa0);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + -0x120;
      }
    }
    *(long *)(param_1 + 0xb8) = lVar3;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0xe0));
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
  return iVar1;
}




void FUN_1004e542c(long param_1,long *param_2)

{
  pthread_mutex_t *ppVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char acVar5 [8];
  pthread_mutex_t *ppVar6;
  pthread_mutexattr_t local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e94580);
  FUN_1004e61d8(param_1);
  acVar5 = (char  [8])FUN_1004e62e8(&DAT_101e94580,param_2);
  if (acVar5 == (char  [8])0x0) {
    acVar5 = (char  [8])operator_new(0x58);
    pcVar2 = (char *)((long)acVar5 + 8);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    *(undefined8 *)acVar5 = 0;
    pcVar2 = (char *)((long)acVar5 + 0x10);
    pcVar3 = (char *)((long)acVar5 + 0x18);
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2 = (char *)((long)acVar5 + 0x20);
    pcVar3 = (char *)((long)acVar5 + 0x28);
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2 = (char *)((long)acVar5 + 0x30);
    pcVar3 = (char *)((long)acVar5 + 0x38);
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2 = (char *)((long)acVar5 + 0x48);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    ((pthread_mutex_t *)((long)acVar5 + 0x40))->__sig = 0;
    pcVar2 = (char *)((long)acVar5 + 0x50);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    _pthread_mutexattr_init(&local_48);
    _pthread_mutex_init((pthread_mutex_t *)acVar5,&local_48);
    ((pthread_mutex_t *)((long)acVar5 + 0x40))->__sig = 0;
    pcVar2 = (char *)((long)acVar5 + 0x48);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2 = (char *)((long)acVar5 + 0x50);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    local_48.__sig = *param_2;
    local_48.__opaque = acVar5;
    FUN_1004e635c(&DAT_101e945c0,&local_48);
  }
  _pthread_mutex_lock((pthread_mutex_t *)acVar5);
  *(undefined8 *)(param_1 + 0x120) = 0;
  ppVar6 = *(pthread_mutex_t **)((long)acVar5 + 0x48);
  *(pthread_mutex_t **)(param_1 + 0x128) = ppVar6;
  ppVar1 = (pthread_mutex_t *)((long)acVar5 + 0x40);
  if (((pthread_mutex_t *)((long)acVar5 + 0x40))->__sig != 0) {
    ppVar1 = ppVar6;
  }
  ppVar1->__sig = param_1 + 0x120;
  *(long *)((long)acVar5 + 0x48) = param_1 + 0x120;
  *(int *)((long)acVar5 + 0x50) = *(int *)((long)acVar5 + 0x50) + 1;
  _pthread_mutex_unlock((pthread_mutex_t *)acVar5);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e94580);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar4);
}




int FUN_1004e5558(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  lVar2 = *(long *)(param_1 + 0xa0);
  plVar3 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(long **)(param_2 + 0x128) = plVar3;
  plVar1 = (long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    plVar1 = plVar3;
  }
  *plVar1 = param_2 + 0x120;
  *(long *)(param_1 + 0xa8) = param_2 + 0x120;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  if (*(long *)(param_1 + 0xb8) == 0) {
    *(long *)(param_1 + 0xb8) = param_2;
  }
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
  return iVar4;
}




void FUN_1004e55c8(long param_1)

{
  *(undefined4 *)(param_1 + 4) = 2;
  FUN_1004e5558(*(undefined8 *)(param_1 + 0x10),param_1);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)))
  {
    FUN_1004e5cd4();
    return;
  }
  return;
}




void FUN_1004e5618(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  pvVar5 = _pthread_getspecific(DAT_101d916f0);
  if ((int)pvVar5 == 0) {
    if (((DAT_10184e3b0 & 1) == 0) && (iVar4 = ___cxa_guard_acquire(&DAT_10184e3b0), iVar4 != 0)) {
      DAT_10184e3ac = _getpid();
      ___cxa_guard_release(&DAT_10184e3b0);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x10184e3a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_10184e3a8 = DAT_10184e3a8 + 1;
      }
    } while (cVar1 != '\0');
    FUN_1004d2698(auStack_a8,"/s-%d-%d");
    pvVar5 = (void *)_sem_open(auStack_a8,0x200);
    _sem_unlink(auStack_a8);
    _pthread_setspecific(DAT_101d916e8,pvVar5);
    uVar3 = _pthread_setspecific(DAT_101d916f0,(void *)0x1);
    pvVar5 = (void *)(ulong)uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(pvVar5);
  }
  return;
}




void FUN_1004e571c(undefined8 *param_1)

{
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(param_1[1]);
  }
  _sem_post(param_1[2]);
  return;
}




ulong FUN_1004e574c(int *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  
  piVar1 = param_1 + 0x33;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar1 = param_1 + 0x35;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined8 *)(param_2 + 0x10) = 0;
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x22));
  *(long *)(*(long *)(param_1 + 8) + 0x10) = param_2;
  *(long *)(param_1 + 8) = param_2;
  uVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x22));
  if (*param_1 == 2) {
    return (ulong)uVar4;
  }
  uVar5 = FUN_1004e5c80(param_1);
  return uVar5;
}




int FUN_1004e57e0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (*param_1 == 0) {
    iVar1 = param_1[0x33];
    puVar2 = (undefined8 *)FUN_1004e4c8c(DAT_101d916e0);
    *puVar2 = FUN_1004e4bf0;
    puVar2[1] = (long)iVar1;
    FUN_1004e574c(param_1,puVar2);
  }
  puVar2 = (undefined8 *)FUN_1004e4c8c(DAT_101d916e0);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_1004e574c(param_1,puVar2);
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}




int FUN_1004e586c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xe0));
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xcc);
    puVar2 = (undefined8 *)FUN_1004e4c8c(DAT_101d916e0);
    *puVar2 = FUN_1004e4bf0;
    puVar2[1] = (long)iVar1;
    FUN_1004e574c(param_1,puVar2);
    plVar3 = (long *)FUN_1004e4c8c(DAT_101d916e0);
    *plVar3 = param_2;
    plVar3[1] = param_3;
    FUN_1004e574c(param_1,plVar3);
  }
  iVar1 = *(int *)(param_1 + 0xcc);
  puVar2 = (undefined8 *)FUN_1004e4c8c(DAT_101d916e0);
  *puVar2 = FUN_1004e4bf0;
  puVar2[1] = (long)iVar1;
  FUN_1004e574c(param_1,puVar2);
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xe0));
  return iVar1;
}




int * FUN_1004e5918(long param_1,long param_2,long param_3)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  int *piVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  
  FUN_1004e5618();
  local_58 = _pthread_getspecific(DAT_101d916e8);
  local_68 = 0;
  uStack_60 = 0;
  ppVar1 = (pthread_mutex_t *)(param_1 + 0xe0);
  _pthread_mutex_lock(ppVar1);
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 200) == 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)))
    {
      uVar3 = _pthread_mutex_unlock(ppVar1);
      return (int *)(ulong)uVar3;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xcc);
    puVar4 = (undefined8 *)FUN_1004e4c8c(DAT_101d916e0);
    *puVar4 = FUN_1004e4bf0;
    puVar4[1] = (long)iVar2;
    FUN_1004e574c(param_1,puVar4);
    plVar5 = (long *)FUN_1004e4c8c(DAT_101d916e0);
    *plVar5 = param_2;
    plVar5[1] = param_3;
    FUN_1004e574c(param_1,plVar5);
  }
  iVar2 = *(int *)(param_1 + 0xcc);
  puVar4 = (undefined8 *)FUN_1004e4c8c(DAT_101d916e0);
  *puVar4 = FUN_1004e4bf0;
  puVar4[1] = (long)iVar2;
  FUN_1004e574c(param_1,puVar4);
  puVar4 = (undefined8 *)FUN_1004e4c8c(DAT_101d916e0);
  *puVar4 = FUN_1004e571c;
  puVar4[1] = &local_68;
  FUN_1004e574c(param_1,puVar4);
  _pthread_mutex_unlock(ppVar1);
  pvVar6 = _pthread_getspecific(DAT_101d916e8);
  do {
    piVar7 = (int *)_sem_wait(pvVar6);
    if ((int)piVar7 != -1) {
      return piVar7;
    }
    piVar7 = ___error();
  } while (*piVar7 == 4);
  return piVar7;
}




int FUN_1004e5a70(long param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  
  ppVar1 = (pthread_mutex_t *)(param_1 + 0xe0);
  while( true ) {
    FUN_1004e5918(param_1,0,0);
    _pthread_mutex_lock(ppVar1);
    if ((*(int *)(param_1 + 200) == 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)))
    break;
    _pthread_mutex_unlock(ppVar1);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




void FUN_1004e5acc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_1004e5b14(param_1,uVar1);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)))
  {
    FUN_1004e5cd4();
    return;
  }
  return;
}




ulong FUN_1004e5b14(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  pthread_mutex_t *ppVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  piVar1 = (int *)(param_1 + 0xd0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  piVar2 = (int *)(param_1 + 0xd4);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    lVar6 = DAT_101d916e0;
  } while (cVar4 != '\0');
  ppVar3 = (pthread_mutex_t *)(DAT_101d916e0 + 0x70);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  _pthread_mutex_lock(ppVar3);
  *(undefined8 **)(*(long *)(lVar6 + 8) + 0x10) = param_2;
  *(undefined8 **)(lVar6 + 8) = param_2;
  uVar7 = _pthread_mutex_unlock(ppVar3);
  uVar8 = (ulong)uVar7;
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     (*(long *)(*(long *)(param_1 + 0xd8) + 8) == (long)*piVar1)) {
    uVar8 = FUN_1004e5acc(param_1);
  }
  piVar1 = (int *)(param_1 + 200);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return uVar8;
}




undefined8 * FUN_1004e5bd0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xe0));
  piVar1 = (int *)(param_1 + 200);
  puVar4 = *(undefined8 **)(param_1 + 0xd8);
  do {
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4[1] != (long)*(int *)(param_1 + 0xd0)) {
        puVar4 = (undefined8 *)0x0;
LAB_1004e5c60:
        _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xe0));
        return puVar4;
      }
      FUN_1004e5acc(param_1);
    }
    puVar4 = (undefined8 *)FUN_1004e4cc4(param_1 + 0x18);
    if (puVar4 == (undefined8 *)0x0) goto LAB_1004e5c60;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((code *)*puVar4 != FUN_1004e4bf0) goto LAB_1004e5c60;
    *(undefined8 **)(param_1 + 0xd8) = puVar4;
  } while( true );
}




void FUN_1004e5c80(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (((lVar3 != 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20))) &&
     (piVar4 = (int *)(lVar3 + 0x58), *piVar4 < 0x81)) {
    _sem_post(*(undefined8 *)(lVar3 + 0x10));
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}




void FUN_1004e5cd4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_1 + 0x58);
  if (*piVar1 < 0x81) {
    if ((*(uint *)(param_1 + 8) & 0x7fffffff) == 0) {
      iVar4 = 0;
    }
    else {
      uVar5 = 0;
      do {
        _sem_post(*(undefined8 *)(param_1 + 0x10));
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(*(int *)(param_1 + 8) << 1));
      iVar4 = *(int *)(param_1 + 8) << 1;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}




undefined8 FUN_1004e5d4c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x101d91710,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_101d91710 = DAT_101d91710 + 1;
    }
  } while (cVar1 != '\0');
  FUN_1000f0a04(auStack_48,"%s Worker %d");
  FUN_1004e47c8(auStack_48);
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)();
  }
  *(undefined4 *)(param_1 + 5) = 0x3000;
  FUN_1004e5e7c(param_1);
  *(undefined4 *)(param_1 + 5) = 0x4000;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e5e00(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0x1000) {
    while (iVar1 != 0x4000) {
      piVar4 = (int *)(*(long *)(param_1 + 0x18) + 0x58);
      if (*piVar4 < 0x81) {
        _sem_post(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar3) {
            *piVar4 = *piVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1004d29c0(5);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    FUN_1004e46a0(param_1 + 0x10);
    return;
  }
  return;
}




int FUN_1004e5e7c(long param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_38;
  
  _pthread_self();
  local_38 = 0;
  while( true ) {
    _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 0x18) + 0x60));
    lVar3 = *(long *)(param_1 + 0x18);
    if (*(char *)(lVar3 + 0xd0) == '\0') break;
    puVar4 = (undefined8 *)FUN_1004e5f6c(lVar3,&local_38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1004e60d8();
      lVar3 = *(long *)(param_1 + 0x18);
      if (*(char *)(lVar3 + 0xd0) == '\0') break;
      _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x60));
    }
    else {
      _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(param_1 + 0x18) + 0x60));
      do {
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(puVar4[1]);
        }
        lVar3 = local_38;
        ppVar1 = (pthread_mutex_t *)(local_38 + 0xe0);
        _pthread_mutex_lock(ppVar1);
        FUN_1004e5b14(lVar3,puVar4);
        _pthread_mutex_unlock(ppVar1);
        _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 0x18) + 0x60));
        puVar4 = (undefined8 *)FUN_1004e5f6c(*(undefined8 *)(param_1 + 0x18),&local_38);
        _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(param_1 + 0x18) + 0x60));
      } while (puVar4 != (undefined8 *)0x0);
    }
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x60));
  return iVar2;
}




long FUN_1004e5f6c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    do {
      lVar1 = FUN_1004e5bd0(lVar2);
      if (lVar1 != 0) {
        *(long *)(param_1 + 0xb8) = lVar2;
        if (param_2 == (long *)0x0) {
          return lVar1;
        }
        *param_2 = lVar2;
        return lVar1;
      }
      if (lVar2 != 0) {
        lVar1 = 0;
        if (*(long *)(lVar2 + 0x120) != 0) {
          lVar1 = *(long *)(lVar2 + 0x120) + -0x120;
        }
        lVar2 = lVar1;
        if (lVar1 == 0) {
          lVar2 = 0;
          if (*(long *)(param_1 + 0xa0) != 0) {
            lVar2 = *(long *)(param_1 + 0xa0) + -0x120;
          }
        }
      }
    } while (lVar2 != *(long *)(param_1 + 0xb8));
  }
  return 0;
}




bool FUN_1004e5ff0(long param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  int local_34;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    bVar1 = false;
  }
  else {
    local_34 = 0;
    if (param_2 == 0) {
      FUN_1004e57e0(param_1,FUN_1004e60cc,&local_34);
    }
    else {
      FUN_1004e586c(param_1,FUN_1004e60cc,&local_34);
    }
    if (local_34 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_1004e5bd0(param_1);
        if (puVar2 == (undefined8 *)0x0) {
          FUN_1004d29c0(1);
        }
        else {
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)(puVar2[1]);
          }
          _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xe0));
          FUN_1004e5b14(param_1,puVar2);
          _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xe0));
        }
      } while (local_34 == 0);
    }
    bVar1 = *(int *)(param_1 + 200) != 0;
  }
  return bVar1;
}




void FUN_1004e60cc(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}




int FUN_1004e60d8(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x60));
  piVar4 = (int *)(param_1 + 0x58);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    iVar3 = _sem_wait(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 != -1) break;
    piVar4 = ___error();
  } while (*piVar4 == 4);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x60));
  return iVar3;
}




pthread_mutex_t * thunk_FUN_1004e7798(pthread_mutex_t *param_1)

{
  uint uVar1;
  pthread_mutex_t *ppVar2;
  pthread_mutex_t *ppVar3;
  ulong uVar4;
  long lVar5;
  
  ppVar3 = param_1 + 1;
  uVar1 = (uint)ppVar3->__sig;
  if (uVar1 != 0) {
    uVar4 = 0;
    lVar5 = 8;
    do {
      ppVar2 = *(pthread_mutex_t **)(*(long *)param_1[1].__opaque + lVar5);
      if (ppVar2 != (pthread_mutex_t *)0x0) {
        ppVar2[1].__sig = 0;
        ppVar2[1].__opaque[0] = '\0';
        ppVar2[1].__opaque[1] = '\0';
        ppVar2[1].__opaque[2] = '\0';
        ppVar2[1].__opaque[3] = '\0';
        ppVar2[1].__opaque[4] = '\0';
        ppVar2[1].__opaque[5] = '\0';
        ppVar2[1].__opaque[6] = '\0';
        ppVar2[1].__opaque[7] = '\0';
        ppVar2[1].__opaque[8] = '\0';
        ppVar2[1].__opaque[9] = '\0';
        ppVar2[1].__opaque[10] = '\0';
        ppVar2[1].__opaque[0xb] = '\0';
        _pthread_mutex_destroy(ppVar2);
        operator_delete(ppVar2);
        uVar1 = (uint)ppVar3->__sig;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < uVar1);
  }
  if (*(void **)param_1[1].__opaque != (void *)0x0) {
    operator_delete__(*(void **)param_1[1].__opaque);
    ppVar3->__sig = 0;
    param_1[1].__opaque[0] = '\0';
    param_1[1].__opaque[1] = '\0';
    param_1[1].__opaque[2] = '\0';
    param_1[1].__opaque[3] = '\0';
    param_1[1].__opaque[4] = '\0';
    param_1[1].__opaque[5] = '\0';
    param_1[1].__opaque[6] = '\0';
    param_1[1].__opaque[7] = '\0';
  }
  _pthread_mutex_destroy(param_1);
  return param_1;
}




int FUN_1004e6140(void)

{
  long *plVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  pthread_t local_28;
  
  local_28 = _pthread_self();
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e94580);
  ppVar3 = (pthread_mutex_t *)FUN_1004e62e8(&DAT_101e94580,&local_28);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e94580);
  if (ppVar3 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_lock(ppVar3);
    lVar4 = ppVar3[1].__sig + -0x120;
    if (ppVar3[1].__sig != 0 && lVar4 != 0) {
      do {
        FUN_1004e5ff0(lVar4,0);
        plVar1 = (long *)(lVar4 + 0x120);
        lVar4 = 0;
        if (*plVar1 != 0) {
          lVar4 = *plVar1 + -0x120;
        }
      } while (lVar4 != 0);
    }
    iVar2 = _pthread_mutex_unlock(ppVar3);
  }
  return iVar2;
}




ulong FUN_1004e61d8(ulong param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  pthread_mutex_t *ppVar5;
  ulong uVar6;
  
  uVar3 = param_1;
  if (DAT_101e945c0 != 0) {
    uVar6 = 0;
    do {
      ppVar5 = *(pthread_mutex_t **)(DAT_101e945c8 + uVar6 * 0x10 + 8);
      _pthread_mutex_lock(ppVar5);
      lVar4 = ppVar5[1].__sig;
      uVar3 = lVar4 - 0x120;
      if (lVar4 != 0 && uVar3 != 0) {
        do {
          if (uVar3 == param_1) {
            FUN_1004e6284(ppVar5 + 1,param_1);
            break;
          }
          plVar1 = (long *)(uVar3 + 0x120);
          uVar3 = 0;
          if (*plVar1 != 0) {
            uVar3 = *plVar1 - 0x120;
          }
        } while (uVar3 != 0);
      }
      uVar2 = _pthread_mutex_unlock(ppVar5);
      uVar3 = (ulong)uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < DAT_101e945c0);
  }
  return uVar3;
}




void FUN_1004e6284(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0x120);
  if ((long *)*param_1 == plVar1) {
    if (plVar1 == (long *)param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *plVar1;
    }
  }
  else if ((long *)param_1[1] == plVar1) {
    puVar2 = *(undefined8 **)(param_2 + 0x128);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0x128);
    *puVar2 = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 **)(*(long *)(param_2 + 0x120) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




undefined8 FUN_1004e62e8(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = _pthread_equal((pthread_t)*param_2,*(pthread_t *)(*(long *)(param_1 + 0x48) + lVar2));
      if (iVar1 != 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar2 + 8);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0x40));
  }
  return 0;
}




void FUN_1004e635c(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_1004e7e74(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




long * FUN_1004e63dc(long *param_1,uint param_2,long param_3,char *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  pthread_mutexattr_t apStack_d8 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = 0;
  *(uint *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  if (((DAT_10184e3b0 & 1) == 0) && (iVar7 = ___cxa_guard_acquire(&DAT_10184e3b0), iVar7 != 0)) {
    DAT_10184e3ac = _getpid();
    ___cxa_guard_release(&DAT_10184e3b0);
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x10184e3a8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      DAT_10184e3a8 = DAT_10184e3a8 + 1;
    }
  } while (cVar5 != '\0');
  FUN_1004d2698(apStack_d8,"/s-%d-%d");
  lVar8 = _sem_open(apStack_d8,0x200);
  param_1[2] = lVar8;
  _sem_unlink(apStack_d8);
  _pthread_mutexattr_init(apStack_d8);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 3),apStack_d8);
  *(undefined4 *)(param_1 + 0xb) = 0;
  _pthread_mutexattr_init(apStack_d8);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xc),apStack_d8);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  puVar9 = operator_new__((ulong)param_2 * 0x30 + 0x10);
  *puVar9 = 0x30;
  puVar9[1] = (ulong)param_2;
  puVar1 = puVar9 + 2;
  if (param_2 != 0) {
    puVar13 = puVar1;
    do {
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      *(undefined4 *)(puVar13 + 5) = 0x1000;
      puVar13[2] = 0;
      puVar13 = puVar13 + 6;
    } while (puVar13 != puVar1 + (ulong)param_2 * 6);
  }
  *param_1 = (long)puVar1;
  if ((param_3 != 0) && (uVar4 = *(uint *)(param_1 + 1), uVar4 != 0)) {
    uVar10 = (ulong)uVar4 + 1 & 0x1fffffffe;
    uVar11 = (ulong)uVar4 - 1;
    uVar15 = 1;
    uVar14 = 0;
    plVar12 = puVar9 + 8;
    do {
      if (uVar14 <= uVar11) {
        plVar12[-6] = param_3;
      }
      if (uVar15 <= uVar11) {
        *plVar12 = param_3;
      }
      uVar14 = uVar14 + 2;
      uVar15 = uVar15 + 2;
      plVar12 = plVar12 + 0xc;
      uVar10 = uVar10 - 2;
    } while (uVar10 != 0);
  }
  *(uint *)(param_1 + 1) = param_2;
  pcVar3 = "";
  if (param_4 != (char *)0x0) {
    pcVar3 = param_4;
  }
  FUN_1004d25b8(param_1 + 0x18,0x10,pcVar3);
  *(undefined1 *)(param_1 + 0x1a) = 1;
  if ((int)param_1[1] != 0) {
    lVar8 = 0;
    uVar10 = 0;
    do {
      lVar2 = *param_1 + lVar8;
      *(int *)(lVar2 + 8) = (int)uVar10;
      *(undefined4 *)(lVar2 + 0x28) = 0x2000;
      *(long **)(lVar2 + 0x18) = param_1;
      *(long **)(lVar2 + 0x20) = param_1 + 0x14;
      FUN_1004e44e8(lVar2 + 0x10,FUN_1004e5d4c,lVar2,param_5);
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x30;
    } while (uVar10 < *(uint *)(param_1 + 1));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}




long * FUN_1004e6660(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_1004e5cd4();
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    plVar10 = param_1 + 0xb;
    do {
      uVar6 = (ulong)uVar5;
      piVar7 = (int *)(*param_1 + 0x28);
      while (*piVar7 == 0x4000) {
        piVar7 = piVar7 + 0xc;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          if (uVar5 != 0) {
            lVar9 = 0;
            uVar6 = 0;
            do {
              FUN_1004e5e00(*param_1 + lVar9);
              uVar6 = uVar6 + 1;
              lVar9 = lVar9 + 0x30;
            } while (uVar6 < *(uint *)(param_1 + 1));
          }
          goto LAB_1004e671c;
        }
      }
      if ((int)*plVar10 < 0x81) {
        _sem_post(param_1[2]);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)*plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1004d29c0(5);
      uVar5 = *(uint *)(param_1 + 1);
    } while (uVar5 != 0);
  }
LAB_1004e671c:
  lVar9 = *param_1;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + -8) != 0) {
      lVar8 = *(long *)(lVar9 + -8) * 0x30;
      do {
        *(undefined4 *)(lVar9 + -8 + lVar8) = 0x5000;
        lVar8 = lVar8 + -0x30;
      } while (lVar8 != 0);
    }
    operator_delete__((void *)(lVar9 + -0x10));
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar10 = param_1 + 0x14;
  lVar8 = *plVar10;
  lVar9 = lVar8 + -0x120;
  if (lVar8 != 0 && lVar9 != 0) {
    do {
      lVar8 = *(long *)(lVar9 + 0x120);
      FUN_1004e4edc(lVar9);
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = lVar8 + -0x120;
      }
    } while (lVar9 != 0);
    lVar8 = *plVar10;
    lVar9 = lVar8 + -0x120;
  }
  if (lVar8 != 0) {
    while (lVar9 != 0) {
      FUN_1004e5918(lVar9,0,0);
      plVar1 = (long *)(lVar9 + 0x120);
      lVar9 = 0;
      if (*plVar1 != 0) {
        lVar9 = *plVar1 + -0x120;
      }
    }
  }
  param_1[0x17] = 0;
  *plVar10 = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xc));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  iVar4 = _sem_close(param_1[2]);
  param_1[2] = (long)iVar4;
  return param_1;
}




long FUN_1004e6804(void)

{
  long lVar1;
  
  lVar1 = DAT_101d91718;
  if (DAT_101d91720 != 0) {
    lVar1 = DAT_101d91720;
  }
  return lVar1;
}




long FUN_1004e6820(void)

{
  long lVar1;
  
  lVar1 = DAT_101d91718;
  if (DAT_101d91728 != 0) {
    lVar1 = DAT_101d91728;
  }
  return lVar1;
}




long FUN_1004e683c(void)

{
  long lVar1;
  
  lVar1 = DAT_101d91718;
  if (DAT_101d91730 != 0) {
    lVar1 = DAT_101d91730;
  }
  return lVar1;
}




long FUN_1004e6858(void)

{
  long lVar1;
  
  lVar1 = DAT_101d91718;
  if (DAT_101d91738 != 0) {
    lVar1 = DAT_101d91738;
  }
  return lVar1;
}




void FUN_1004e6874(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x69a0);
  DAT_101d91750 = FUN_1004e782c(pvVar1,param_1);
  return;
}




void thunk_FUN_1004e68ac(void)

{
  void *pvVar1;
  
  if (DAT_101d91750 != 0) {
    pvVar1 = (void *)FUN_1004e79fc();
    operator_delete(pvVar1);
  }
  DAT_101d91750 = 0;
  return;
}




void FUN_1004e68ac(void)

{
  void *pvVar1;
  
  if (DAT_101d91750 != 0) {
    pvVar1 = (void *)FUN_1004e79fc();
    operator_delete(pvVar1);
  }
  DAT_101d91750 = 0;
  return;
}




void FUN_1004e68dc(void)

{
  FUN_1004e6f48(DAT_101d91750);
  return;
}




void FUN_1004e68e8(long param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    return;
  }
  FUN_1004e7494();
  return;
}




void thunk_FUN_1004e68fc(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004e7524(0x3a83126f);
  if ((uVar2 & 1) == 0) {
    do {
      FUN_1004e6140();
      iVar1 = FUN_1004e7524(0x3a83126f,param_1);
    } while (iVar1 == 0);
  }
  return;
}




void FUN_1004e68fc(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004e7524(0x3a83126f);
  if ((uVar2 & 1) == 0) {
    do {
      FUN_1004e6140();
      iVar1 = FUN_1004e7524(0x3a83126f,param_1);
    } while (iVar1 == 0);
  }
  return;
}




void FUN_1004e6948(void)

{
  _pthread_getspecific(DAT_101d91748);
  return;
}




pthread_key_t * FUN_1004e6954(pthread_key_t *param_1)

{
  _pthread_key_delete(*param_1);
  return param_1;
}




long FUN_1004e697c(long param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  bVar2 = true;
  do {
    while (bVar1 = bVar2, lVar3 = *(long *)(param_1 + lVar4 * 8 + 0x10), lVar3 == 0) {
      lVar4 = 1;
      bVar2 = false;
      if (!bVar1) {
        return 0;
      }
    }
    if (*(int *)(lVar3 + 0xc) == param_2) break;
    lVar4 = 1;
    bVar2 = false;
  } while (bVar1);
  if (*(int *)(lVar3 + 0xc) != param_2) {
    lVar3 = 0;
  }
  return lVar3;
}




void FUN_1004e69d4(long param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined4 *)(param_2 + 0xc) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  piVar1 = (int *)(param_2 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}




undefined4 FUN_1004e69f4(undefined4 *param_1)

{
  return *param_1;
}




void FUN_1004e69fc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x40);
  plVar1 = (long *)(lVar2 + -8);
  if (lVar2 != 0 && plVar1 != (long *)0x0) {
    do {
      lVar2 = plVar1[1];
      *(undefined1 *)(*plVar1 + 100) = 3;
      plVar1 = (long *)0x0;
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + -8);
      }
    } while (plVar1 != (long *)0x0);
  }
  return;
}




void FUN_1004e6a34(long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,uint param_5,
                  undefined4 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (0 < (int)param_5) {
    uVar2 = (ulong)param_5;
    do {
      FUN_1004e6ab4(uVar1,*param_4,param_6);
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      FUN_1004e6b50(uVar1,*param_2);
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_1004e6ab4(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x40) + -8);
  if (*(long *)(param_1 + 0x40) != 0 && plVar2 != (long *)0x0) {
    do {
      if ((*plVar2 != param_2) &&
         ((param_3 == -0x7ee3623b || param_3 == 0 || (*(int *)(*plVar2 + 0x38) == param_3)))) {
        FUN_1004e6b50(param_2);
      }
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_1004e6b50(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_1004e712c();
  *plVar4 = param_2;
  piVar1 = (int *)(param_2 + 0x60);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4 = plVar4 + 1;
  *plVar4 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
    *(long **)(param_1 + 0x40) = plVar4;
  }
  else {
    **(undefined8 **)(param_1 + 0x48) = plVar4;
  }
  *(long **)(param_1 + 0x48) = plVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}




void FUN_1004e6bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149dec0;
  param_1[1] = 0;
  return;
}




void FUN_1004e6bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149dec0;
  return;
}




void FUN_1004e6bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149dec0;
  return;
}




void FUN_1004e6bec(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 1);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0 || param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)(param_1);
  FUN_1004e6d34(DAT_101d91750,param_1);
  return;
}




long FUN_1004e6c4c(long param_1)

{
  int iVar1;
  pthread_mutexattr_t pStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_101109640();
  _pthread_mutexattr_init(&pStack_38);
  iVar1 = _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x20),&pStack_38);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




void FUN_1004e6cb8(undefined8 param_1)

{
  FUN_1004e6cc8(DAT_101d91750,param_1);
  return;
}




void * FUN_1004e6cc8(long param_1,ulong param_2)

{
  void *pvVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  pvVar1 = (void *)FUN_1011096ec(param_1 + 8,param_2,0x10);
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  pvVar1 = operator_new__(param_2 & 0xffffffff);
  return pvVar1;
}




ulong FUN_1004e6d34(long param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x0;
  
  uVar2 = FUN_1011096c4(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
    FUN_1011099d4(param_1 + 8,param_2);
    uVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
    return (ulong)uVar1;
  }
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
    return extraout_x0;
  }
  return uVar2;
}




undefined8 * FUN_1004e6db0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  puVar4 = (undefined8 *)FUN_1004e7b14(param_1 + 0x68);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = operator_new(8);
    *puVar4 = 0;
    if (((DAT_10184e3b0 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_10184e3b0), iVar3 != 0)) {
      DAT_10184e3ac = _getpid();
      ___cxa_guard_release(&DAT_10184e3b0);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x10184e3a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_10184e3a8 = DAT_10184e3a8 + 1;
      }
    } while (cVar1 != '\0');
    FUN_1004d2698(auStack_a8,"/s-%d-%d");
    uVar5 = _sem_open(auStack_a8,0x200);
    *puVar4 = uVar5;
    _sem_unlink(auStack_a8);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar4;
}




void FUN_1004e6eb8(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  
  if (param_2 < (undefined8 *)(param_1 + 0x68U) || (undefined8 *)(param_1 + 0xe8U) <= param_2) {
    _sem_close(*param_2);
    operator_delete(param_2);
    return;
  }
  uVar5 = (long)param_2 - (long)(param_1 + 0x68U);
  puVar1 = (uint *)(param_1 + (uVar5 >> 8 & 0x7ffffff) * 4 + 0xe8);
  do {
    uVar2 = *puVar1;
    while (*puVar1 == uVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 & ~(1 << (ulong)((uint)(uVar5 >> 3) & 0x1f));
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}




ushort * FUN_1004e6f48(long param_1)

{
  pthread_mutex_t *ppVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x6960);
  _pthread_mutex_lock(ppVar1);
  uVar4 = *(ushort *)(param_1 + 0x6950);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    _pthread_mutex_unlock(ppVar1);
    puVar5 = operator_new(0x68);
    puVar5[0x20] = 0;
    puVar5[0x21] = 0;
    puVar5[0x22] = 0;
    puVar5[0x23] = 0;
    puVar5[0x24] = 0;
    puVar5[0x25] = 0;
    puVar5[0x26] = 0;
    puVar5[0x27] = 0;
    puVar5[0x28] = 0;
    puVar5[0x29] = 0;
    puVar5[0x30] = 0;
    puVar5[0x31] = 0;
    *(undefined1 *)(puVar5 + 0x32) = 0;
    puVar5[0x2c] = 0;
    puVar5[0x2d] = 0;
    puVar5[0x2e] = 0;
    puVar5[0x2f] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[0] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
  }
  else {
    puVar5 = (ushort *)(param_1 + 0x150 + uVar2 * 0x68);
    if (uVar4 == *(ushort *)(param_1 + 0x6952)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(param_1 + 0x6950) = uVar4;
    lVar3 = param_1 + 0x150 + uVar2 * 0x68;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    *(undefined4 *)(lVar3 + 0x60) = 0;
    *(undefined1 *)(lVar3 + 100) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[0] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
    *(int *)(param_1 + 0x6954) = *(int *)(param_1 + 0x6954) + 1;
    _pthread_mutex_unlock(ppVar1);
  }
  return puVar5;
}




ulong FUN_1004e703c(long param_1,void *param_2)

{
  void *pvVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong extraout_x0;
  
  pvVar1 = (void *)(param_1 + 0x150);
  if ((pvVar1 <= param_2) && (param_2 <= (void *)(param_1 + 0x68e8U))) {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x6960));
    if (*(long *)((long)param_2 + 0x30) != 0) {
      FUN_1004e6eb8(DAT_101d91750);
    }
    if (*(short *)(param_1 + 0x6950) == -1) {
      sVar3 = (short)((uint)((int)param_2 - (int)pvVar1) >> 3) * 0x4ec5;
      *(short *)(param_1 + 0x6952) = sVar3;
      *(short *)(param_1 + 0x6950) = sVar3;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x6952);
      sVar3 = (short)((uint)((int)param_2 - (int)pvVar1) >> 3) * 0x4ec5;
      *(short *)(param_1 + 0x6952) = sVar3;
      *(short *)((long)pvVar1 + (ulong)uVar2 * 0x68) = sVar3;
    }
    *(int *)(param_1 + 0x6954) = *(int *)(param_1 + 0x6954) + -1;
    uVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x6960));
    return (ulong)uVar4;
  }
  if (*(long *)((long)param_2 + 0x30) != 0) {
    FUN_1004e6eb8(DAT_101d91750);
  }
  operator_delete(param_2);
  return extraout_x0;
}




undefined8 FUN_1004e712c(void)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_101d91750;
  ppVar1 = (pthread_mutex_t *)(DAT_101d91750 + 0x108);
  _pthread_mutex_lock(ppVar1);
  uVar3 = FUN_1004e7b90(lVar2 + 0xf0);
  _pthread_mutex_unlock(ppVar1);
  return uVar3;
}




int FUN_1004e7170(undefined8 param_1)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = DAT_101d91750;
  ppVar1 = (pthread_mutex_t *)(DAT_101d91750 + 0x108);
  _pthread_mutex_lock(ppVar1);
  FUN_1004e7c98(lVar2 + 0xf0,param_1);
  iVar3 = _pthread_mutex_unlock(ppVar1);
  return iVar3;
}




void FUN_1004e71b8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x60) = 1;
  if (*(char *)(param_1 + 100) == '\x03') {
    plVar2 = (long *)(*(long *)(param_1 + 0x40) + -8);
    if (*(long *)(param_1 + 0x40) != 0 && plVar2 != (long *)0x0) {
      do {
        lVar1 = plVar2[1];
        *(undefined1 *)(*plVar2 + 100) = 3;
        plVar2 = (long *)0x0;
        if (lVar1 != 0) {
          plVar2 = (long *)(lVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 100) = 4;
    if (*(long *)(param_1 + 8) != 0) {
      uVar3 = FUN_1004e727c(param_1);
      goto LAB_1004e7234;
    }
  }
  uVar3 = 0;
LAB_1004e7234:
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    _sem_post(**(undefined8 **)(param_1 + 0x30));
  }
  FUN_1004e72f8(param_1,uVar3);
  FUN_1004e7384(param_1);
  *(undefined1 *)(param_1 + 100) = 5;
  FUN_1004e7414(param_1);
  return;
}




undefined8 FUN_1004e727c(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  pvVar1 = _pthread_getspecific(DAT_101d91748);
  local_60 = param_1[0xb];
  uStack_50 = param_1[4];
  local_58 = param_1[3];
  local_48 = param_1[5];
  local_40 = 0;
  local_38 = param_1;
  _pthread_setspecific(DAT_101d91748,&local_60);
  (*(code *)param_1[1])(*param_1);
  _pthread_setspecific(DAT_101d91748,pvVar1);
  return local_40;
}




void FUN_1004e72f8(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if (param_2 == 0) {
    return;
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x40) + -8);
  if (*(long *)(param_1 + 0x40) == 0 || plVar5 == (long *)0x0) {
LAB_1004e7378:
    FUN_1004e6bec(param_2);
    return;
  }
  piVar1 = (int *)(param_2 + 8);
LAB_1004e7314:
  lVar6 = *plVar5;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 0x20);
    do {
      if (*plVar2 != 0) {
        ClearExclusiveLocal();
        plVar2 = (long *)(lVar6 + 0x28);
        goto LAB_1004e733c;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = param_2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_1004e734c;
  }
  goto LAB_1004e7364;
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = param_2;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_1004e733c:
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      goto LAB_1004e7364;
    }
  }
LAB_1004e734c:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_1004e7364:
  plVar2 = plVar5 + 1;
  plVar5 = (long *)0x0;
  if (*plVar2 != 0) {
    plVar5 = (long *)(*plVar2 + -8);
  }
  if (plVar5 == (long *)0x0) goto LAB_1004e7378;
  goto LAB_1004e7314;
}




void FUN_1004e7384(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)(param_1 + 0x40);
  lVar6 = *plVar7;
  plVar8 = (long *)(lVar6 + -8);
  if (lVar6 != 0 && plVar8 != (long *)0x0) {
    do {
      if (*plVar8 != 0) {
        piVar2 = (int *)(*plVar8 + 0x60);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          FUN_1004e7494();
        }
      }
      plVar1 = plVar8 + 1;
      plVar8 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar8 = (long *)(*plVar1 + -8);
      }
    } while (plVar8 != (long *)0x0);
    lVar6 = *plVar7;
  }
  while (lVar6 != 0) {
    FUN_1004e7ef0(plVar7,lVar6 + -8);
    FUN_1004e7170(lVar6 + -8);
    lVar6 = *plVar7;
  }
  return;
}




void FUN_1004e7414(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  
  piVar1 = (int *)(param_1 + 0x60);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_1004e6bec();
    }
    lVar5 = 0;
    bVar4 = true;
    do {
      bVar6 = bVar4;
      if (*(long *)(param_1 + lVar5 * 8 + 0x20) != 0) {
        FUN_1004e6bec();
      }
      lVar5 = 1;
      bVar4 = false;
    } while (bVar6);
    FUN_1004e703c(DAT_101d91750,param_1);
    return;
  }
  return;
}




void FUN_1004e7494(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 100) != '\x03')) {
    *(undefined1 *)(param_1 + 100) = 2;
    FUN_1004e57e0(*(long *)(param_1 + 0x10),thunk_FUN_1004e71b8);
    return;
  }
  FUN_1004e71b8(param_1);
  return;
}




void thunk_FUN_1004e71b8(void)

{
  FUN_1004e71b8();
  return;
}




void FUN_1004e74cc(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      _sem_post(**(undefined8 **)(param_1 + 0x30));
      FUN_1004e6eb8(DAT_101d91750,*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    uVar1 = FUN_1004e6db0(DAT_101d91750);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}




undefined8 FUN_1004e7524(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e755c(*(undefined8 *)(param_1 + 0x30));
  if ((int)uVar1 != 0) {
    FUN_1004e7414(param_1);
  }
  return uVar1;
}




undefined8 FUN_1004e755c(float param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  timespec local_70;
  timeval local_60;
  timeval local_50;
  
  _gettimeofday(&local_50,(void *)0x0);
  iVar4 = local_50.tv_usec + (int)((param_1 - (float)(int)param_1) * 1e+06);
  if (iVar4 < 1000000) {
    lVar3 = local_50.tv_sec + (ulong)(uint)(int)param_1;
  }
  else {
    iVar2 = iVar4;
    if (0x1e847e < iVar4) {
      iVar2 = 1999999;
    }
    uVar1 = (uint)((iVar4 + 999999) - iVar2) / 1000000;
    iVar4 = iVar4 + uVar1 * -1000000 + -1000000;
    lVar3 = local_50.tv_sec + (ulong)uVar1 + (ulong)(uint)(int)param_1 + 1;
  }
  local_70.tv_nsec = 1000000;
  local_70.tv_sec = 0;
  iVar2 = _sem_trywait(*param_2);
  if (iVar2 == -1) {
    do {
      _gettimeofday(&local_60,(void *)0x0);
      if ((lVar3 < local_60.tv_sec) ||
         ((local_60.tv_sec == lVar3 && (iVar4 * 1000 <= local_60.tv_usec * 1000)))) {
        return 0;
      }
      _nanosleep(&local_70,(timespec *)0x0);
      iVar2 = _sem_trywait(*param_2);
    } while (iVar2 == -1);
  }
  return 1;
}




void FUN_1004e76a0(long *param_1,undefined8 param_2)

{
  *(undefined8 *)(*param_1 + 0x10) = param_2;
  return;
}




void FUN_1004e76ac(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x38) = param_2;
  return;
}




undefined8 * FUN_1004e76b8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1004e6b50(param_2,*param_1);
  return param_1;
}




undefined8 * FUN_1004e76e8(undefined8 *param_1)

{
  FUN_1004e6b50(*param_1);
  return param_1;
}




undefined8 * FUN_1004e7710(undefined8 *param_1)

{
  FUN_1004e74cc(*param_1);
  return param_1;
}




void FUN_1004e7738(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x58) = param_2;
  return;
}




void FUN_1004e7744(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  
  plVar1 = (long *)(*param_1 + 0x18);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = param_2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  piVar2 = (int *)(param_2 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = *piVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}




long FUN_1004e777c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 100) = 1;
  *param_1 = 0;
  return lVar1;
}




void FUN_1004e7794(void)

{
  return;
}




pthread_mutex_t * FUN_1004e7798(pthread_mutex_t *param_1)

{
  uint uVar1;
  pthread_mutex_t *ppVar2;
  pthread_mutex_t *ppVar3;
  ulong uVar4;
  long lVar5;
  
  ppVar3 = param_1 + 1;
  uVar1 = (uint)ppVar3->__sig;
  if (uVar1 != 0) {
    uVar4 = 0;
    lVar5 = 8;
    do {
      ppVar2 = *(pthread_mutex_t **)(*(long *)param_1[1].__opaque + lVar5);
      if (ppVar2 != (pthread_mutex_t *)0x0) {
        ppVar2[1].__sig = 0;
        ppVar2[1].__opaque[0] = '\0';
        ppVar2[1].__opaque[1] = '\0';
        ppVar2[1].__opaque[2] = '\0';
        ppVar2[1].__opaque[3] = '\0';
        ppVar2[1].__opaque[4] = '\0';
        ppVar2[1].__opaque[5] = '\0';
        ppVar2[1].__opaque[6] = '\0';
        ppVar2[1].__opaque[7] = '\0';
        ppVar2[1].__opaque[8] = '\0';
        ppVar2[1].__opaque[9] = '\0';
        ppVar2[1].__opaque[10] = '\0';
        ppVar2[1].__opaque[0xb] = '\0';
        _pthread_mutex_destroy(ppVar2);
        operator_delete(ppVar2);
        uVar1 = (uint)ppVar3->__sig;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < uVar1);
  }
  if (*(void **)param_1[1].__opaque != (void *)0x0) {
    operator_delete__(*(void **)param_1[1].__opaque);
    ppVar3->__sig = 0;
    param_1[1].__opaque[0] = '\0';
    param_1[1].__opaque[1] = '\0';
    param_1[1].__opaque[2] = '\0';
    param_1[1].__opaque[3] = '\0';
    param_1[1].__opaque[4] = '\0';
    param_1[1].__opaque[5] = '\0';
    param_1[1].__opaque[6] = '\0';
    param_1[1].__opaque[7] = '\0';
  }
  _pthread_mutex_destroy(param_1);
  return param_1;
}




undefined8 * FUN_1004e782c(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  pthread_mutexattr_t apStack_f0 [8];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = 0;
  FUN_1004e6c4c(param_1 + 1);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffff0000;
  do {
    param_1[lVar7 + 0xd] = 0;
    if (((DAT_10184e3b0 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_10184e3b0), iVar3 != 0)) {
      DAT_10184e3ac = _getpid();
      ___cxa_guard_release(&DAT_10184e3b0);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x10184e3a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_10184e3a8 = DAT_10184e3a8 + 1;
      }
    } while (cVar1 != '\0');
    FUN_1004d2698(apStack_f0,"/s-%d-%d");
    uVar4 = _sem_open(apStack_f0,0x200);
    param_1[lVar7 + 0xd] = uVar4;
    _sem_unlink(apStack_f0);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x10);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  _pthread_mutexattr_init(apStack_f0);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x21),apStack_f0);
  lVar7 = 0x150;
  lVar6 = 1;
  do {
    *(short *)((long)param_1 + lVar7) = (short)lVar6;
    lVar7 = lVar7 + 0x68;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x100);
  param_1[0xd2a] = 0xff0000;
  _pthread_mutexattr_init(apStack_f0);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xd2c),apStack_f0);
  pvVar5 = operator_new__(param_2 & 0xffffffff);
  *param_1 = pvVar5;
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 5));
  FUN_101109650(param_1 + 1,pvVar5,param_2);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 5));
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(iVar3);
  }
  return param_1;
}




undefined8 * FUN_1004e79fc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_1004e7a6c(param_1 + 0x1e);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xd2c));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x21));
  lVar2 = 0x68;
  do {
    iVar1 = _sem_close(*(undefined8 *)((long)param_1 + lVar2));
    *(long *)((long)param_1 + lVar2) = (long)iVar1;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xe8);
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
  return param_1;
}




void FUN_1004e7a6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_1004e7abc(param_1,lVar1);
    FUN_1004e6d34(DAT_101d91750,lVar1);
    lVar1 = *param_1;
  }
  return;
}




void FUN_1004e7abc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  if (param_2 == (long *)*param_1) {
    plVar2 = (long *)0x0;
    *param_1 = *param_2;
  }
  else {
    do {
      plVar2 = plVar1;
      if (plVar2 == (long *)0x0) break;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != param_2);
    *plVar2 = *param_2;
  }
  if (param_2 == (long *)param_1[1]) {
    param_1[1] = (long)plVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




long FUN_1004e7b14(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)(param_1 + 0x80);
  do {
    uVar5 = *puVar1;
    if (uVar5 == 0xffffffff) {
      return 0;
    }
    while (*puVar1 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 + 1 | uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar5 = uVar5 + 1 & (uVar5 ^ 0xffffffff);
        if (uVar5 < 2) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            uVar4 = uVar4 + 1;
            bVar3 = 3 < uVar5;
            uVar5 = uVar5 >> 1;
          } while (bVar3);
          if (uVar4 == 0x10) {
            return 0;
          }
        }
        return param_1 + (ulong)uVar4 * 8;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}




long * FUN_1004e7b90(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  ulong uVar4;
  
  for (plVar1 = (long *)*param_1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    uVar4 = (ulong)*(ushort *)(plVar1 + 0x1fe);
    if (uVar4 != 0xffff) goto LAB_1004e7c08;
  }
  plVar1 = (long *)FUN_1004e7c54(param_1);
  if (*param_1 == 0) {
    *plVar1 = 0;
    plVar2 = param_1 + 1;
    *param_1 = (long)plVar1;
  }
  else {
    *plVar1 = *param_1;
    plVar2 = param_1;
  }
  *plVar2 = (long)plVar1;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  uVar4 = (ulong)*(ushort *)(plVar1 + 0x1fe);
  if (uVar4 == 0xffff) {
    plVar2 = (long *)0x0;
  }
  else {
LAB_1004e7c08:
    plVar2 = plVar1 + uVar4 * 2 + 2;
    if ((uint)uVar4 == (uint)*(ushort *)((long)plVar1 + 0xff2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = (undefined2)*plVar2;
    }
    *(undefined2 *)(plVar1 + 0x1fe) = uVar3;
    *plVar2 = 0;
    plVar1[uVar4 * 2 + 3] = 0;
    *(int *)((long)plVar1 + 0xff4) = *(int *)((long)plVar1 + 0xff4) + 1;
  }
  return plVar2;
}




void FUN_1004e7c54(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_1004e6cc8(DAT_101d91750,0x1000);
  *puVar1 = 0;
  lVar3 = 1;
  puVar2 = puVar1;
  do {
    puVar2 = puVar2 + 2;
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xfe);
  puVar1[0x1fe] = 0xfd0000;
  return;
}




void FUN_1004e7c98(long *param_1,ulong param_2)

{
  ulong uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  plVar6 = plVar5;
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar1 = (ulong)(plVar6 + 2);
    if ((uVar1 <= param_2) && (param_2 <= plVar6 + 0x1fc)) break;
    plVar6 = (long *)*plVar6;
  }
  if (*(short *)(plVar6 + 0x1fe) == -1) {
    uVar3 = (undefined2)((uint)((int)param_2 - (int)uVar1) >> 4);
    *(undefined2 *)((long)plVar6 + 0xff2) = uVar3;
    *(undefined2 *)(plVar6 + 0x1fe) = uVar3;
  }
  else {
    uVar2 = *(ushort *)((long)plVar6 + 0xff2);
    uVar3 = (undefined2)((uint)((int)param_2 - (int)uVar1) >> 4);
    *(undefined2 *)((long)plVar6 + 0xff2) = uVar3;
    *(undefined2 *)(uVar1 + (ulong)uVar2 * 0x10) = uVar3;
  }
  iVar4 = *(int *)((long)plVar6 + 0xff4) + -1;
  *(int *)((long)plVar6 + 0xff4) = iVar4;
  if (iVar4 != 0) {
    return;
  }
  if (*plVar5 == 0) {
    return;
  }
  FUN_1004e7abc(param_1,plVar6);
  FUN_1004e6d34(DAT_101d91750,plVar6);
  return;
}




void FUN_1004e7d54(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar5 = puVar5 + 3;
        lVar3 = lVar3 + -0x18;
        puVar4 = puVar4 + 3;
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




undefined8 * FUN_1004e7de0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  pthread_mutexattr_t pStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  puVar2 = param_1 + 2;
  param_1[3] = 0;
  *puVar2 = 0;
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[5] = 0;
  param_1[4] = 0;
  _pthread_mutexattr_init(&pStack_38);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 6),&pStack_38);
  _pthread_mutexattr_init(&pStack_38);
  iVar1 = _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xe),&pStack_38);
  param_1[4] = 0;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




void FUN_1004e7e74(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
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




void FUN_1004e7ef0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e7f4c(void)

{
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  DAT_101d916c0 = 0;
  DAT_101d916c8 = 0;
  DAT_101d916d0 = 0x40002000;
  DAT_101d916b0 = &PTR_FUN_10149dee0;
  DAT_101d916b8 = 0;
  _pthread_mutexattr_init(&local_38);
  _pthread_mutex_init((pthread_mutex_t *)&DAT_101d91660,&local_38);
  DAT_101d916a0 = 0;
  DAT_101d916a8 = 0;
  ___cxa_atexit(FUN_1004e499c,&DAT_101d91660,0x100000000);
  local_38.__sig = 0;
  _pthread_key_create((pthread_key_t *)&local_38,(void *)0x0);
  DAT_101d916e8 = local_38.__sig;
  ___cxa_atexit(FUN_1004e4d70,&DAT_101d916e8,0x100000000);
  local_38.__sig = 0;
  _pthread_key_create((pthread_key_t *)&local_38,(void *)0x0);
  DAT_101d916f0 = local_38.__sig;
  ___cxa_atexit(FUN_1004e4d98,&DAT_101d916f0,0x100000000);
  ___cxa_atexit(FUN_1004e4dc0,&DAT_101d916f8,0x100000000);
  _pthread_mutexattr_init(&local_38);
  _pthread_mutex_init((pthread_mutex_t *)&DAT_101e94580,&local_38);
  _DAT_101e945c0 = 0;
  DAT_101e945c8 = 0;
  ___cxa_atexit(thunk_FUN_1004e7798,&DAT_101e94580,0x100000000);
  DAT_101d91740 = 0;
  local_38.__sig = 0;
  _pthread_key_create((pthread_key_t *)&local_38,(void *)0x0);
  DAT_101d91748 = local_38.__sig;
  ___cxa_atexit(FUN_1004e6954,&DAT_101d91748,0x100000000);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004e80dc(void)

{
  if (DAT_101e945d0 == (long *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = (long)&PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  (**(code **)(*DAT_101e945d0 + 0x10))();
  if (DAT_101e945d0 == (long *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = (long)&PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  (**(code **)(*DAT_101e945d0 + 0x30))();
  return;
}




void FUN_1004e816c(void)

{
  if (DAT_101e945d0 == (long *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = (long)&PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  (**(code **)(*DAT_101e945d0 + 0x38))();
  if (DAT_101e945d0 == (long *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = (long)&PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  (**(code **)(*DAT_101e945d0 + 0x18))();
  if (DAT_101e945d0 != (long *)0x0) {
    (**(code **)(*DAT_101e945d0 + 8))();
  }
  DAT_101e945d0 = (long *)0x0;
  return;
}




void FUN_1004e8218(void)

{
  if (DAT_101e945d0 == (long *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = (long)&PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  (**(code **)(*DAT_101e945d0 + 0x20))();
  return;
}




void FUN_1004e826c(void)

{
  if (DAT_101e945d0 == (long *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = (long)&PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  (**(code **)(*DAT_101e945d0 + 0x28))();
  return;
}




undefined4 FUN_1004e82c0(long param_1)

{
  undefined8 *puVar1;
  long local_28;
  
  if (DAT_101e945d0 == (undefined8 *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = &PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  puVar1 = DAT_101e945d0;
  *(undefined8 **)(param_1 + 0x10) = DAT_101e945d0;
  local_28 = param_1;
  FUN_1004e8470(puVar1 + 3,&local_28);
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_1004e8330(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined8 * FUN_1004e8338(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  if (DAT_101e945d0 == (undefined8 *)0x0) {
    DAT_101e945d0 = operator_new(0x28);
    iVar2 = 6;
    *(undefined4 *)(DAT_101e945d0 + 1) = 6;
    *DAT_101e945d0 = &PTR_thunk_FUN_1004e83dc_10149df48;
    DAT_101e945d0[3] = 0;
    DAT_101e945d0[4] = 0;
    DAT_101e945d0[2] = 0;
  }
  else {
    iVar2 = *(int *)(DAT_101e945d0 + 1);
  }
  puVar1 = DAT_101e945d0;
  if (iVar2 != param_1) {
    uVar3 = (ulong)*(uint *)(DAT_101e945d0 + 3);
    if (*(uint *)(DAT_101e945d0 + 3) != 0) {
      plVar4 = (long *)DAT_101e945d0[4];
      do {
        if (*(int *)((undefined8 *)*plVar4 + 1) == param_1) {
          return (undefined8 *)*plVar4;
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




void FUN_1004e83c4(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_10149def8;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  return;
}




undefined8 * FUN_1004e83dc(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1004e83dc_10149df48;
  puVar3 = (uint *)(param_1 + 3);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[4] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[4] = 0;
  }
  return param_1;
}




void thunk_FUN_1004e83dc(void)

{
  FUN_1004e83dc();
  return;
}




void FUN_1004e845c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e83dc();
  operator_delete(pvVar1);
  return;
}




void FUN_1004e8470(uint *param_1,undefined8 *param_2)

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
    FUN_1004e86d4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1004e84f0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar1 * 8) + 0x10))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  return;
}




void FUN_1004e853c(long param_1)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x18) * 8 + -8;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + lVar1) + 0x18))();
      lVar1 = lVar1 + -8;
    } while (lVar1 != -8);
  }
  return;
}




void FUN_1004e8588(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar1 * 8) + 0x20))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  return;
}




void FUN_1004e85d4(long param_1)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x18) * 8 + -8;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + lVar1) + 0x28))();
      lVar1 = lVar1 + -8;
    } while (lVar1 != -8);
  }
  return;
}




uint FUN_1004e8620(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    uVar2 = 1;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar3 * 8) + 0x30))();
      uVar2 = uVar2 & uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x18));
  }
  return uVar2;
}




void FUN_1004e8688(long param_1)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x18) * 8 + -8;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + lVar1) + 0x38))();
      lVar1 = lVar1 + -8;
    } while (lVar1 != -8);
  }
  return;
}




void FUN_1004e86d4(uint *param_1,uint param_2)

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




void FUN_1004e8750(long param_1)

{
  long lVar1;
  
  FUN_1004e87d0();
  FUN_1004e883c(param_1);
  DAT_10184dc58 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dc58 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dc58 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1004e8bec;
  *(code **)(lVar1 + 0xb8) = FUN_1004e936c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dc58;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x400;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_1004e87d0(long param_1)

{
  long lVar1;
  
  DAT_10184ded0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184ded0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184ded0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1004e931c;
  *(code **)(lVar1 + 0xb8) = FUN_1004e935c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184ded0;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_1004e8964,0);
  return;
}




void FUN_1004e883c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_101867488 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867488 + 1;
  lVar2 = param_1 + (ulong)DAT_101867488 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_1004e9378;
  *(code **)(lVar2 + 0xb8) = FUN_1004e938c;
  *(uint *)(lVar2 + 0xa4) = DAT_101867488;
  *(undefined4 *)(lVar2 + 0xa8) = 0x30;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 100;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  FUN_1010a0944(param_1,0,FUN_1004e91f4,0);
  FUN_1010a0944(param_1,1,FUN_1004e9254,0);
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_101872df8,FUN_1004e927c);
  return;
}




void FUN_1004e88f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1004e88f4_10149df98;
  if (param_1[0x16] != 0) {
    FUN_1010a8698(param_1 + 6);
  }
  uVar1 = FUN_1010a8710();
  FUN_1010a8ad8(uVar1,param_1[0x15]);
  FUN_1010ad0c4(param_1[0x14]);
  FUN_1010a7eb4(param_1 + 6);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_1004e88f4(void)

{
  FUN_1004e88f4();
  return;
}




void FUN_1004e8950(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e88f4();
  operator_delete(pvVar1);
  return;
}




void FUN_1004e8964(long param_1)

{
  FUN_1010a1cd4();
  FUN_1010a7ed8(param_1 + 0x30);
  return;
}




void FUN_1004e8988(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dc58) {
        *(long *)(param_1 + 0x28) = lVar2;
        uVar1 = FUN_1010a4580();
        *(undefined8 *)(lVar2 + 0x38) = uVar1;
        FUN_1010a5270(lVar2 + 0x58,param_1 + 0x30);
        return;
      }
    }
  }
  return;
}




void FUN_1004e89f4(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_1010a4574();
  }
  else {
    uVar1 = FUN_1010a4580();
  }
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}




long FUN_1004e8a24(long param_1)

{
  return param_1 + 0x58;
}




void FUN_1004e8a2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dc58) {
        lVar1 = FUN_1010a5280(lVar2 + 0x58);
        if (lVar1 == param_1 + 0x30) {
          FUN_1010a5278(lVar2 + 0x58);
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
        return;
      }
    }
  }
  return;
}




void FUN_1004e8aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010acfb8(param_2);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_1010a8710();
  uVar1 = FUN_1010a88cc(uVar1,param_3);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return;
}




void FUN_1004e8ae0(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                  long param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_6 + 0xb0) != 0) {
    FUN_1010a8698(param_6 + 0x30);
  }
  uVar1 = FUN_1010a8710();
  plVar2 = (long *)FUN_1010a8bf0(uVar1,*(undefined8 *)(param_6 + 0xa8));
  *(long **)(param_6 + 0xb0) = plVar2;
  *(undefined4 *)((long)plVar2 + 0x14) = param_7;
  *(undefined4 *)(plVar2 + 3) = param_1;
  *(float *)((long)plVar2 + 0x1c) = param_3;
  fVar3 = *(float *)(plVar2 + 1);
  if (*(float *)(plVar2 + 1) < param_3) {
    *(float *)(plVar2 + 1) = param_3;
    fVar3 = param_3;
  }
  *(float *)(plVar2 + 4) = param_4;
  fVar4 = (float)NEON_fminnm(*(float *)(*plVar2 + 4) - param_4,*(float *)(*plVar2 + 4));
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar4 < fVar3) {
    *(float *)(plVar2 + 1) = fVar4;
  }
  *(float *)(plVar2 + 1) = *(float *)(*(long *)(param_6 + 0xa8) + 4) * param_5;
  *(undefined4 *)((long)plVar2 + 0xc) = 0;
  *(undefined4 *)(plVar2 + 2) = param_2;
  FUN_1010a8680(param_6 + 0x30);
  return;
}




undefined8 FUN_1004e8bb0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xb0);
  if ((plVar1 != (long *)0x0) &&
     ((*(int *)((long)plVar1 + 0x14) == 1 ||
      ((*(int *)((long)plVar1 + 0x14) == 0 && (*(float *)(plVar1 + 1) < *(float *)(*plVar1 + 4))))))
     ) {
    return 1;
  }
  return 0;
}




undefined8 * FUN_1004e8bec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  uVar1 = FUN_1010a4574();
  *(undefined4 *)(param_1 + 6) = 0x7000000;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_thunk_FUN_1004e8d4c_10149dfc8;
  param_1[5] = &PTR_FUN_10149e018;
  param_1[7] = uVar1;
  param_1[8] = &PTR_FUN_10149e048;
  FUN_1010a5200(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0x13] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x15] = 0x3f80000000000000;
  param_1[0x14] = 0;
  FUN_1004e8ca0(param_1,&DAT_1013cd800,1);
  return param_1;
}




void FUN_1004e8ca0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_38 = 0xbf800000bf800000;
  local_30 = 0xbf800000;
  local_2c = 0x3f8000003f800000;
  local_24 = 0x3f800000;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  uVar2 = FUN_1010a1cc8();
  uVar1 = FUN_1010a1dcc(uVar2,&local_38,param_3,param_1 + 0x30);
  *(undefined2 *)(param_1 + 0xb0) = uVar1;
  *(int *)(param_1 + 0xb4) = (int)param_3;
  return;
}




void FUN_1004e8d4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1004e8d4c_10149dfc8;
  param_1[5] = &PTR_FUN_10149e018;
  param_1[8] = &PTR_FUN_10149e048;
  uVar2 = FUN_1010a1cc8();
  FUN_1010a1e70(uVar2,*(undefined2 *)(param_1 + 0x16));
  puVar1 = param_1 + 0xb;
  FUN_1010a5300(puVar1,param_1 + 8);
  FUN_1010a44f8(puVar1);
  FUN_1010a523c(puVar1);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_1004e8d4c(void)

{
  FUN_1004e8d4c();
  return;
}




void FUN_1004e8dc4(long param_1)

{
  FUN_1004e8d4c(param_1 + -0x28);
  return;
}




void FUN_1004e8dcc(long param_1)

{
  FUN_1004e8d4c(param_1 + -0x40);
  return;
}




void FUN_1004e8dd4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e8d4c();
  operator_delete(pvVar1);
  return;
}




void FUN_1004e8de8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e8d4c(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1004e8e00(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e8d4c(param_1 + -0x40);
  operator_delete(pvVar1);
  return;
}




void FUN_1004e8e18(long param_1,undefined8 param_2)

{
  FUN_1010a43d0(param_1 + 0x58,param_2,param_1 + 0x40);
  return;
}




long FUN_1004e8e28(long param_1)

{
  return param_1 + 0x58;
}




long FUN_1004e8e30(long param_1)

{
  return param_1 + 0x30;
}




void FUN_1004e8e38(long param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (((((*param_2 != *(float *)(param_1 + 0x70)) || (param_2[1] != *(float *)(param_1 + 0x74))) ||
       (param_2[2] != *(float *)(param_1 + 0x78))) ||
      (((param_2[3] != *(float *)(param_1 + 0x7c) || (param_2[4] != *(float *)(param_1 + 0x80))) ||
       ((param_2[5] != *(float *)(param_1 + 0x84) ||
        ((param_2[6] != *(float *)(param_1 + 0x88) || (param_2[7] != *(float *)(param_1 + 0x8c))))))
       ))) || ((param_2[8] != *(float *)(param_1 + 0x90) ||
               (((((param_2[9] != *(float *)(param_1 + 0x94) ||
                   (param_2[10] != *(float *)(param_1 + 0x98))) ||
                  (param_2[0xb] != *(float *)(param_1 + 0x9c))) ||
                 ((param_2[0xc] != *(float *)(param_1 + 0xa0) ||
                  (param_2[0xd] != *(float *)(param_1 + 0xa4))))) ||
                ((param_2[0xe] != *(float *)(param_1 + 0xa8) ||
                 (param_2[0xf] != *(float *)(param_1 + 0xac))))))))) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0xe);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    *(undefined8 *)(param_1 + 0xa0) = uVar7;
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    iVar1 = FUN_1010a5260(param_1 + 0x58);
    if (iVar1 != 0) {
      FUN_1004e8f84(param_1);
      return;
    }
  }
  return;
}




void FUN_1004e8f84(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_1010a5288(param_1 + 0x58);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = 0;
    uStack_50 = (undefined4)puVar1[2];
    uStack_4c = (undefined4)((ulong)puVar1[2] >> 0x20);
    fStack_54 = (float)((ulong)puVar1[1] >> 0x20);
    local_30 = *puVar1;
    local_28 = *(undefined4 *)(puVar1 + 1);
    local_40 = CONCAT44(uStack_50,fStack_54);
    local_38 = uStack_4c;
    lVar4 = param_1 + 0x70;
    fStack_54 = *(float *)(param_1 + 0xa0);
    uStack_50 = *(undefined4 *)(param_1 + 0xa4);
    local_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_4c = *(undefined4 *)(param_1 + 0xa8);
    uStack_58 = uStack_4c;
    fVar6 = fStack_54;
    fVar7 = fStack_54;
    while( true ) {
      lVar5 = 0;
      do {
        fVar8 = *(float *)(lVar4 + lVar5 * 4);
        fVar9 = *(float *)((long)&local_30 + lVar5) * fVar8;
        fVar8 = (float)NEON_fminnm(fVar9,*(float *)((long)&local_40 + lVar5) * fVar8);
        fVar7 = fVar8 + fVar7;
        fVar6 = fVar6 + fVar9;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      *(float *)((long)&local_60 + lVar3 * 4) = fVar7;
      *(float *)(((ulong)&local_60 | 0xc) + lVar3 * 4) = fVar6;
      lVar3 = lVar3 + 1;
      if (lVar3 == 3) break;
      fVar7 = *(float *)((long)&local_60 + lVar3 * 4);
      fVar6 = *(float *)(((ulong)&local_60 | 0xc) + lVar3 * 4);
      lVar4 = lVar4 + 4;
    }
    uVar2 = FUN_1010a1cc8();
    FUN_1010a1ef8(uVar2,*(undefined2 *)(param_1 + 0xb0),&local_60,0);
  }
  return;
}




long FUN_1004e9080(long param_1)

{
  return param_1 + 0x70;
}




long FUN_1004e9088(long param_1)

{
  return param_1 + 0x48;
}




void FUN_1004e9090(long param_1,float *param_2)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0xa0) != *param_2) || (*(float *)(param_1 + 0xa4) != param_2[1])) ||
     (*(float *)(param_1 + 0xa8) != param_2[2])) {
    *(float *)(param_1 + 0xa0) = *param_2;
    *(float *)(param_1 + 0xa4) = param_2[1];
    *(float *)(param_1 + 0xa8) = param_2[2];
    iVar1 = FUN_1010a5260(param_1 + 0x58);
    if (iVar1 != 0) {
      FUN_1004e8f84(param_1);
      return;
    }
  }
  return;
}




void FUN_1004e910c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  local_24 = param_2;
  uVar1 = FUN_1010a1cc8();
  FUN_1010a1ef8(uVar1,*(undefined2 *)(param_1 + 0xb0),0,&local_24);
  return;
}




void FUN_1004e914c(long param_1)

{
  FUN_1010a52b4(param_1 + 0x58);
  return;
}




void FUN_1004e9154(long param_1)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  local_24 = *(undefined4 *)(param_1 + 0xb4);
  uVar1 = FUN_1010a1cc8();
  FUN_1010a1ef8(uVar1,*(undefined2 *)(param_1 + 0xb0),0,&local_24);
  return;
}




void FUN_1004e9194(long param_1)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  local_24 = 0;
  uVar1 = FUN_1010a1cc8();
  FUN_1010a1ef8(uVar1,*(undefined2 *)(param_1 + 0xb0),0,&local_24);
  return;
}




void FUN_1004e91d0(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_1004e8f84();
    return;
  }
  return;
}




void FUN_1004e91e0(long param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_1004e8f84(param_1 + -0x40);
    return;
  }
  return;
}




void FUN_1004e91f4(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_100663ad4(2);
  *(long *)(param_1 + 0x28) = lVar1;
  *(undefined1 *)(lVar1 + 0xc) = 1;
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x14) = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  auVar2 = NEON_fmov(0x3f800000,4);
  *(long *)(lVar1 + 0x2c) = auVar2._8_8_;
  *(long *)(lVar1 + 0x24) = auVar2._0_8_;
  *(undefined4 *)(lVar1 + 0x34) = 0;
  FUN_100663b4c(lVar1,4,0xffff);
  return;
}




void FUN_1004e9254(long param_1)

{
  FUN_100663ae8(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_1004e927c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    lVar1 = FUN_1010a1540(DAT_101867488,0);
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_101867488) {
      lVar1 = 0;
    }
    lVar1 = *(long *)(lVar1 + 0x28);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)((long)param_3 + 0x34);
    uVar2 = *(undefined4 *)((long)param_3 + 0x2c);
    *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)((long)param_3 + 0x24);
    *(undefined4 *)(lVar1 + 0x2c) = uVar2;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar1 + 0x14) = *param_3;
    *(undefined4 *)(lVar1 + 0x1c) = uVar2;
  }
  return;
}




void FUN_1004e92ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e070;
  FUN_1010a0064();
  return;
}




void FUN_1004e92fc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149e070;
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_1004e931c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1004e88f4_10149df98;
  param_1[5] = 0;
  FUN_1010a7e48(param_1 + 6);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}




void FUN_1004e935c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * thunk_FUN_1004e8bec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  uVar1 = FUN_1010a4574();
  *(undefined4 *)(param_1 + 6) = 0x7000000;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_thunk_FUN_1004e8d4c_10149dfc8;
  param_1[5] = &PTR_FUN_10149e018;
  param_1[7] = uVar1;
  param_1[8] = &PTR_FUN_10149e048;
  FUN_1010a5200(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0x13] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x15] = 0x3f80000000000000;
  param_1[0x14] = 0;
  FUN_1004e8ca0(param_1,&DAT_1013cd800,1);
  return param_1;
}




void FUN_1004e936c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1004e9378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e070;
  param_1[5] = 0;
  return;
}




void FUN_1004e938c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1004e9398(void)

{
  if ((DAT_10184ded8 & 1) == 0) {
    DAT_10184ded0 = DAT_101872e38;
    DAT_10184ded8 = 1;
  }
  return;
}




void FUN_1004e93c4(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




void FUN_1004e93f0(void)

{
  if ((DAT_101867490 & 1) == 0) {
    DAT_101867488 = DAT_101872e38;
    DAT_101867490 = 1;
  }
  return;
}




void FUN_1004e941c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e0a0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = DAT_101d91760;
  return;
}




void FUN_1004e9440(void)

{
  return;
}




void FUN_1004e9444(void)

{
  return;
}




void FUN_1004e944c(void)

{
  return;
}




void FUN_1004e9450(void)

{
  return;
}




void FUN_1004e9454(void)

{
  return;
}




void FUN_1004e9458(void)

{
  return;
}




void FUN_1004e945c(void)

{
  return;
}




void FUN_1004e9460(void)

{
  return;
}




void FUN_1004e9464(void)

{
  return;
}




void FUN_1004e9468(void)

{
  return;
}




void FUN_1004e946c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1004e9474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 8));
  return;
}




void FUN_1004e948c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
  return;
}




void FUN_1004e949c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e94ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),1);
  return;
}




void FUN_1004e94b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e94c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),0);
  return;
}




void FUN_1004e94c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e94d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
  return;
}




void FUN_1004e94d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e94e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
  return;
}




void FUN_1004e94e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x78))();
  return;
}




void FUN_1004e94f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x80))();
  return;
}




void FUN_1004e9504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x88))();
  return;
}




void FUN_1004e9514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x90))();
  return;
}




void FUN_1004e9524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x98))();
  return;
}




void FUN_1004e9534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xa0))();
  return;
}




void FUN_1004e9544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))();
  return;
}




void FUN_1004e9554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  return;
}




void FUN_1004e9564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xc0))();
  return;
}




void FUN_1004e9574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 200))();
  return;
}




void FUN_1004e9584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e100;
  param_1[1] = &DAT_101d91758;
  return;
}




void FUN_1004e959c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e100;
  param_1[1] = 0;
  return;
}




void FUN_1004e95ac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004e95b0);
  (*pcVar1)();
}




void FUN_1004e95b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004e95b4);
  (*pcVar1)();
}




void FUN_1004e95b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e95c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x10))();
  return;
}




void FUN_1004e95c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e95d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x18))();
  return;
}




void FUN_1004e95dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e95ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x30))();
  return;
}




void FUN_1004e95f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x38))();
  return;
}




void FUN_1004e9604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x40))();
  return;
}




void FUN_1004e9618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x48))();
  return;
}




void FUN_1004e962c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e963c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x20))();
  return;
}




void FUN_1004e9640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x28))();
  return;
}




void FUN_1004e9654(string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_1004e2e18(&DAT_101d911b0,0);
  FUN_10001549c(local_38,uVar1);
  lVar2 = std::string::rfind((char)local_38,0x2f);
  std::string::string((string *)local_50,(string *)local_38,0,lVar2 + 1,(allocator *)local_38);
  std::string::string(param_1,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1004e96e8(void)

{
  return;
}




void FUN_1004e96ec(void)

{
  return;
}




undefined1  [16] FUN_1004e96f0(void)

{
  return ZEXT816(0x3f800000);
}




void FUN_1004e96f8(void)

{
  return;
}




undefined8 FUN_1004e96fc(void)

{
  return DAT_101d91758;
}




void FUN_1004e9708(undefined8 param_1,undefined8 param_2)

{
  DAT_101d91760 = param_1;
  DAT_101d91758 = (long *)FUN_10011ace4();
                    /* WARNING: Could not recover jumptable at 0x0001004e9740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101d91758 + 0x10))(DAT_101d91758,param_2);
  return;
}




void FUN_1004e9744(void)

{
  (**(code **)(*DAT_101d91758 + 0x18))();
  if (DAT_101d91758 != (long *)0x0) {
    (**(code **)(*DAT_101d91758 + 8))();
  }
  DAT_101d91758 = (long *)0x0;
  if (DAT_101d91760 != (long *)0x0) {
    (**(code **)(*DAT_101d91760 + 8))();
  }
  DAT_101d91760 = (long *)0x0;
  return;
}




void FUN_1004e97a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e97b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101d91758 + 0x20))();
  return;
}




void FUN_1004e97b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e97c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101d91758 + 0x28))();
  return;
}




void FUN_1004e97cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e97e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101d91758 + 0x30))(DAT_101d91758,param_1,param_2);
  return;
}




void FUN_1004e97e8(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4bc0();
  if (iVar1 != 0) {
    FUN_1004e4e60(&DAT_101e945d8,2,PTR_s___Main_OS_Serial_Queue_101867460);
    return;
  }
  return;
}




void FUN_1004e9820(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101e945d8);
  if (iVar1 != 0) {
    FUN_1004e5ff0(&DAT_101e945d8,1);
    FUN_1004e4edc(&DAT_101e945d8);
    return;
  }
  return;
}




void FUN_1004e986c(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101e945d8);
  if (iVar1 != 0) {
    FUN_1004e5ff0(&DAT_101e945d8,0);
    return;
  }
  return;
}




void FUN_1004e98a0(void)

{
  thunk_FUN_1004e4dcc(&DAT_101e945d8);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101e945d8,0x100000000);
  return;
}




void FUN_1004eab70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1004e9584();
  *puVar1 = &PTR_thunk_FUN_1004e959c_10149e1e0;
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  return;
}




void FUN_1004eaba8(long param_1,undefined8 param_2)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"startTick:",param_2);
  return;
}




void FUN_1004eabbc(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"stopTick");
  return;
}




void FUN_1004eabcc(undefined8 param_1,undefined1 param_2)

{
  undefined *local_40;
  undefined8 local_38;
  code *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_40 = PTR___NSConcreteStackBlock_101444138;
  local_38 = 0xc0000000;
  local_30 = FUN_1004eac28;
  puStack_28 = &DAT_10149e2b0;
  local_20 = param_1;
  local_18 = param_2;
  _dispatch_async(PTR___dispatch_main_q_101444238,&local_40);
  return;
}




void FUN_1004eac28(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar3 + 0x18);
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (iVar1 == 0) {
      return;
    }
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    _objc_msgSend(uVar2,"setIdleTimerDisabled:",0);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    _objc_msgSend(uVar2,"setIdleTimerDisabled:",1);
    uVar4 = 0;
  }
  else {
    if (iVar1 == 1) {
      return;
    }
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    uVar4 = 1;
    _objc_msgSend(uVar2,"setIdleTimerDisabled:",1);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    _objc_msgSend(uVar2,"setIdleTimerDisabled:",0);
  }
  *(undefined4 *)(lVar3 + 0x18) = uVar4;
  return;
}




void FUN_1004ead04(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"setContentScale:");
  return;
}




void FUN_1004ead14(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"getFullContentScale");
  return;
}




void FUN_1004ead24(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"swapBuffers");
  return;
}




void FUN_1004ead34(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"exitMainLoop");
  return;
}




void FUN_1004ead44(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                  long param_5,int *param_6,int *param_7)

{
  _objc_msgSend(*(undefined8 *)(param_5 + 0x10),"getSize");
  *param_6 = (int)param_3;
  *param_7 = (int)param_4;
  return;
}




void FUN_1004ead84(long param_1,undefined8 param_2)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"setAllowedOrientations:",param_2);
  return;
}




void FUN_1004ead98(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"grabGraphicsContext");
  return;
}




void FUN_1004eada8(void)

{
  return;
}




void FUN_1004eadac(char *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar1 = _NSSearchPathForDirectoriesInDomains(0xe,1,1);
  uVar1 = _objc_msgSend(uVar1,"objectAtIndexedSubscript:",0);
  uVar1 = _objc_msgSend(uVar1,"UTF8String");
  pcVar2 = (char *)FUN_10001549c(param_1,uVar1);
  std::string::append(pcVar2);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = _objc_msgSend(uVar1,"bundleIdentifier");
  _objc_msgSend(uVar1,"UTF8String");
  std::string::append(param_1);
  std::string::append(param_1);
  if ((DAT_101e9471c & 1) == 0) {
    DAT_101e9471c = 1;
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
    pcVar2 = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      pcVar2 = param_1;
    }
    uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar2);
    _objc_msgSend(uVar1,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",uVar3,
                  1,0,0);
  }
  return;
}




void thunk_FUN_1004e959c(void)

{
  FUN_1004e959c();
  return;
}




void FUN_1004eaee4(void *param_1)

{
  FUN_1004e959c();
  operator_delete(param_1);
  return;
}




void FUN_1004eaf1c(void)

{
  return;
}




void FUN_1004eaf20(void)

{
  return;
}




void FUN_1004eaf24(void)

{
  return;
}




void FUN_1004eaf28(void)

{
  return;
}




void FUN_1004eb238(void)

{
  undefined8 *****pppppuVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  double dVar11;
  void *local_5a8 [2];
  char local_591;
  undefined8 ****local_590;
  undefined8 uStack_588;
  long local_580;
  utsname uStack_578;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = _objc_autoreleasePoolPush();
  uVar5 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  dVar11 = (double)_objc_msgSend(uVar5,"scale");
  _uname(&uStack_578);
  uVar5 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithCString:encoding:",uStack_578.machine,4);
  _NSLog(&cf_type_____);
  uVar6 = _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  iVar2 = _objc_msgSend(uVar6,"respondsToSelector:","userInterfaceIdiom");
  if (iVar2 == 0) {
LAB_1004eb358:
    iVar2 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"instancesRespondToSelector:","scale");
    if (iVar2 != 0) {
      DAT_101d91627 = DAT_101d91627 & 0xfe | 1.0 < dVar11;
      iVar2 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPod);
      DAT_101d911d8._0_4_ = 4;
      if (iVar2 == 0) {
        DAT_101d911d8._0_4_ = 1;
      }
    }
  }
  else {
    uVar6 = _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    lVar7 = _objc_msgSend(uVar6,"userInterfaceIdiom");
    if (lVar7 != 1) goto LAB_1004eb358;
    DAT_101d91627 = DAT_101d91627 & 0xfe | 1.0 < dVar11;
    DAT_101d911d8._0_4_ = 2;
  }
  uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone1_1);
  if ((uVar8 & 1) == 0) {
    uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone1_2);
    if (((uVar8 & 1) == 0) &&
       (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone2_), (uVar8 & 1) == 0)) {
      uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone3_);
      if (((uVar8 & 1) == 0) &&
         (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone4_), (uVar8 & 1) == 0)) {
        uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone5_);
        if (((uVar8 & 1) == 0) &&
           (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone6_), (uVar8 & 1) == 0)) {
          uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone7_);
          if (((uVar8 & 1) == 0) &&
             (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone8_), (uVar8 & 1) == 0)) {
            uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone9_);
            if ((uVar8 & 1) == 0) {
              uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone10_1);
              if (((((uVar8 & 1) == 0) &&
                   (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone10_4), (uVar8 & 1) == 0)) &&
                  (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone10_2), (uVar8 & 1) == 0)) &&
                 (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone10_5), (uVar8 & 1) == 0)) {
                uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone10_3);
                if ((((uVar8 & 1) == 0) &&
                    (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone10_6), (uVar8 & 1) == 0)) &&
                   ((uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone11_), (uVar8 & 1) == 0 &&
                    (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPhone12_), (uVar8 & 1) == 0)))) {
                  uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPod1_);
                  if ((uVar8 & 1) == 0) {
                    uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPod2_);
                    if ((uVar8 & 1) == 0) {
                      uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPod3_);
                      if ((uVar8 & 1) == 0) {
                        uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPod4_);
                        if ((uVar8 & 1) == 0) {
                          uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPod5_);
                          if ((uVar8 & 1) == 0) {
                            uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPod7_);
                            if ((uVar8 & 1) == 0) {
                              uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad1_);
                              if ((uVar8 & 1) == 0) {
                                uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad2_);
                                if ((uVar8 & 1) == 0) {
                                  uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad3_1);
                                  if ((((uVar8 & 1) == 0) &&
                                      (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad3_2),
                                      (uVar8 & 1) == 0)) &&
                                     (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad3_3),
                                     (uVar8 & 1) == 0)) {
                                    uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad3_4);
                                    if ((((uVar8 & 1) == 0) &&
                                        (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad3_5),
                                        (uVar8 & 1) == 0)) &&
                                       (uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad3_6),
                                       (uVar8 & 1) == 0)) {
                                      uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad4_);
                                      if ((uVar8 & 1) == 0) {
                                        uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad5_);
                                        if ((uVar8 & 1) == 0) {
                                          uVar8 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad6_);
                                          if ((uVar8 & 1) == 0) {
                                            iVar2 = _objc_msgSend(uVar5,"hasPrefix:",&cf_iPad8_);
                                            DAT_101d911d8._4_4_ = 0x16;
                                            if (iVar2 == 0) {
                                              DAT_101d911d8._4_4_ = 0;
                                            }
                                          }
                                          else {
                                            DAT_101d911d8._4_4_ = 0x15;
                                          }
                                        }
                                        else {
                                          DAT_101d911d8._4_4_ = 0x14;
                                        }
                                      }
                                      else {
                                        DAT_101d911d8._4_4_ = 0x13;
                                      }
                                    }
                                    else {
                                      DAT_101d911d8._4_4_ = 0x12;
                                    }
                                  }
                                  else {
                                    DAT_101d911d8._4_4_ = 0x11;
                                  }
                                }
                                else {
                                  DAT_101d911d8._4_4_ = 0x10;
                                }
                              }
                              else {
                                DAT_101d911d8._4_4_ = 0xf;
                              }
                            }
                            else {
                              DAT_101d911d8._4_4_ = 0xe;
                            }
                          }
                          else {
                            DAT_101d911d8._4_4_ = 0xd;
                          }
                        }
                        else {
                          DAT_101d911d8._4_4_ = 0xc;
                        }
                      }
                      else {
                        DAT_101d911d8._4_4_ = 0xb;
                      }
                    }
                    else {
                      DAT_101d911d8._4_4_ = 10;
                    }
                  }
                  else {
                    DAT_101d911d8._4_4_ = 9;
                  }
                }
                else {
                  DAT_101d911d8._4_4_ = 8;
                }
              }
              else {
                DAT_101d911d8._4_4_ = 7;
              }
            }
            else {
              DAT_101d911d8._4_4_ = 6;
            }
          }
          else {
            DAT_101d911d8._4_4_ = 5;
          }
        }
        else {
          DAT_101d911d8._4_4_ = 4;
        }
      }
      else {
        DAT_101d911d8._4_4_ = 3;
      }
    }
    else {
      DAT_101d911d8._4_4_ = 2;
    }
  }
  else {
    DAT_101d911d8._4_4_ = 1;
  }
  uVar5 = _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar5 = _objc_msgSend(uVar5,"systemName");
  uVar6 = _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar6 = _objc_msgSend(uVar6,"systemVersion");
  _objc_msgSend(uVar5,"UTF8String");
  _objc_msgSend(uVar6,"UTF8String");
  FUN_1004d2698(&DAT_101d91360,"%s (%s)");
  FUN_1004d2650("%s");
  uVar5 = _objc_msgSend(uVar6,"componentsSeparatedByString:",&cf__);
  uVar6 = _objc_alloc(&_OBJC_CLASS___NSNumberFormatter);
  uVar6 = _objc_msgSend(uVar6,"init");
  _objc_msgSend(uVar6,"setNumberStyle:",1);
  lVar7 = _objc_msgSend(uVar5,"count");
  if (lVar7 == 3) {
    uVar9 = _objc_msgSend(uVar5,"objectAtIndex:",2);
    uVar9 = _objc_msgSend(uVar6,"numberFromString:",uVar9);
    DAT_101d913e2 = _objc_msgSend(uVar9,"intValue");
LAB_1004eb580:
    uVar9 = _objc_msgSend(uVar5,"objectAtIndex:",1);
    uVar9 = _objc_msgSend(uVar6,"numberFromString:",uVar9);
    DAT_101d913e1 = _objc_msgSend(uVar9,"intValue");
  }
  else {
    if (lVar7 == 2) goto LAB_1004eb580;
    if (lVar7 != 1) goto LAB_1004eb5d8;
  }
  uVar5 = _objc_msgSend(uVar5,"objectAtIndex:",0);
  uVar5 = _objc_msgSend(uVar6,"numberFromString:",uVar5);
  DAT_101d913e0 = _objc_msgSend(uVar5,"intValue");
LAB_1004eb5d8:
  _objc_release(uVar6);
  uVar5 = _objc_msgSend(&_OBJC_CLASS___ASIdentifierManager,"sharedManager");
  iVar2 = _objc_msgSend(uVar5,"isAdvertisingTrackingEnabled");
  if (iVar2 == 0) {
    DAT_101d912a0 = 0;
  }
  else {
    uVar5 = _objc_msgSend(&_OBJC_CLASS___ASIdentifierManager,"sharedManager");
    uVar5 = _objc_msgSend(uVar5,"advertisingIdentifier");
    uVar5 = _objc_msgSend(uVar5,"UUIDString");
    pcVar10 = (char *)_objc_msgSend(uVar5,"UTF8String");
    _strcpy(&DAT_101d912a0,pcVar10);
  }
  uVar5 = _objc_msgSend(&_OBJC_CLASS___NSLocale,"currentLocale");
  lVar7 = _objc_msgSend(uVar5,"objectForKey:",*(undefined8 *)PTR__NSLocaleCountryCode_1014440a0);
  if (lVar7 != 0) {
    _objc_msgSend(lVar7,"UTF8String");
  }
  FUN_1004d2698(&DAT_101d913e3,"%s");
  local_590 = (undefined8 *****)0x0;
  uStack_588 = 0;
  local_580 = 0;
  uVar5 = _objc_msgSend(&_OBJC_CLASS___NSLocale,"preferredLanguages");
  uVar3 = _objc_msgSend(uVar5,"count");
  if (uVar3 == 0) {
    FUN_10001549c(local_5a8,"en");
    std::string::operator=((string *)&local_590,(string *)local_5a8);
    if (local_591 < '\0') {
      operator_delete(local_5a8[0]);
    }
  }
  else {
    std::string::reserve((ulong)&local_590);
    uVar8 = 0;
    do {
      uVar5 = _objc_msgSend(&_OBJC_CLASS___NSLocale,"preferredLanguages");
      uVar5 = _objc_msgSend(uVar5,"objectAtIndex:",uVar8);
      _objc_msgSend(uVar5,"UTF8String");
      std::string::append((char *)&local_590);
      std::string::append((char *)&local_590);
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  pppppuVar1 = (undefined8 *****)local_590;
  if (-1 < local_580) {
    pppppuVar1 = &local_590;
  }
  FUN_1004d2628(&DAT_101d913e7,pppppuVar1,0xff);
  DAT_101d914df._7_1_ = 0;
  if (local_580 < 0) {
    operator_delete(local_590);
  }
  _objc_autoreleasePoolPop(uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1004ebe24(void)

{
  return 0;
}




void FUN_1004ebe2c(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  DAT_101e94720 = FUN_1004ebf00(pvVar1,param_1);
  return;
}




void FUN_1004ebe60(undefined8 param_1)

{
  if (DAT_101e94720 != 0) {
    FUN_1004ebe78(DAT_101e94720,param_1);
    return;
  }
  return;
}




void FUN_1004ebe78(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1004ebec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_101e94720;
  if (DAT_101e94720 != (undefined8 *)0x0) {
    if (*(char *)((long)DAT_101e94720 + 0x17) < '\0') {
      operator_delete((void *)*DAT_101e94720);
    }
    operator_delete(puVar1);
  }
  DAT_101e94720 = (undefined8 *)0x0;
  return;
}




undefined8 * FUN_1004ebf00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004ebfc0();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_1004ebf94;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
LAB_1004ebf94:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  FUN_1004ebe78(param_1,param_2);
  return param_1;
}




void FUN_1004ebfc0(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_1004ebfcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e320;
  FUN_1004e24c0(param_1 + 1);
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined4 *)((long)param_1 + 0x4d4) = 0xbf800000;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  *param_1 = &PTR_FUN_10149e2e0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  FUN_1004ec99c(param_1 + 0x9e);
  param_1[0xd7] = 0;
  return param_1;
}




undefined8 * FUN_1004ec034(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *param_1 = &PTR_FUN_10149e320;
  iVar1 = FUN_1004e262c(puVar2);
  if (iVar1 != 0) {
    FUN_1004ec720(puVar2);
    FUN_1004e2508(puVar2);
  }
  FUN_1004e24d0(puVar2);
  return param_1;
}




void FUN_1004ec088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e2e0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  FUN_1004ec034();
  return;
}




void FUN_1004ec0b0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149e2e0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  pvVar1 = (void *)FUN_1004ec034();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1004ec0e8(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x6b8) = param_2;
  }
  return 1;
}




void FUN_1004ec0f8(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_1004e262c(lVar1);
  if (iVar2 != 0) {
    FUN_1004ec720(lVar1);
    FUN_1004e2508(lVar1);
  }
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  return;
}




undefined8
FUN_1004ec13c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1 + 8;
  uVar1 = FUN_1004e253c(lVar4);
  if ((int)uVar1 != 0) {
    FUN_1004ec6f0(lVar4);
    plVar2 = *(long **)(param_1 + 0x6b8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    uVar3 = FUN_1004e264c(lVar4,param_2,param_3,param_4,param_5);
    if ((uVar3 & 1) == 0) {
      FUN_1004ec720(lVar4);
      FUN_1004e2508(lVar4);
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4e8) = 1;
      *(undefined4 *)(param_1 + 0x4c8) = 2;
      plVar2 = (long *)(param_1 + 0x508);
      do {
        lVar4 = *plVar2;
        plVar2 = (long *)(lVar4 + 0x4d8);
      } while (lVar4 != 0);
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      *(long *)(param_1 + 0x4e0) = *(long *)(param_1 + 0x528);
      plVar2 = (long *)(param_1 + 0x520);
      if (*(long *)(param_1 + 0x520) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x528) + 0x4d8);
      }
      *plVar2 = param_1;
      *(long *)(param_1 + 0x528) = param_1;
      *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
      uVar1 = 1;
    }
  }
  return uVar1;
}




void FUN_1004ec234(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c8) = param_2;
  return;
}




void FUN_1004ec23c(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x520);
  if (lVar4 != 0) {
    lVar2 = param_1 + 0x520;
    do {
      if (lVar4 == param_1) goto LAB_1004ec26c;
      lVar4 = *(long *)(lVar4 + 0x4d8);
    } while (lVar4 != 0);
  }
  lVar2 = param_1 + 0x508;
LAB_1004ec26c:
  FUN_1004ece98(lVar2,param_1);
  FUN_1004ec720(param_1 + 8);
  FUN_1004e2508(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  plVar3 = *(long **)(param_1 + 0x6b8);
  if ((plVar3 != (long *)0x0) && (iVar1 == 2)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ec2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
    return;
  }
  return;
}




ulong FUN_1004ec2c4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004e262c(param_1 + 8);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(param_1 + 0x4e8) == 1);
  }
  return uVar1;
}




ulong FUN_1004ec2f8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004e262c(param_1 + 8);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(param_1 + 0x4e8) == 2);
  }
  return uVar1;
}




bool FUN_1004ec32c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004e262c(param_1 + 8);
  if ((uVar2 & 1) == 0) {
    bVar1 = *(int *)(param_1 + 0x4e8) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




void FUN_1004ec368(long param_1)

{
  FUN_1004ec370(param_1 + 0x4f0);
  return;
}




void FUN_1004ec370(undefined8 param_1,float param_2,long *param_3)

{
  uint64_t uVar1;
  long *plVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_2 < 0.0) {
    FUN_1004eca64(param_1,param_3);
    return;
  }
  fVar5 = (float)param_1;
  fVar4 = (float)NEON_fminnm(param_2,fVar5);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  dVar7 = -1.0;
  if (0.0 <= fVar5) {
    uVar1 = _mach_absolute_time();
    dVar7 = (double)fVar5 + (double)((uVar1 - *param_3) * DAT_101d91638) * 1e-09;
  }
  do {
    uVar1 = _mach_absolute_time();
    uVar3 = (uVar1 - *param_3) * DAT_101d91638;
    dVar6 = -1.0;
    if (0.0 <= fVar5) {
      uVar1 = _mach_absolute_time();
      dVar6 = dVar7 + (double)((uVar1 - *param_3) * DAT_101d91638) * -1e-09;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
    }
    dVar8 = 0.0;
    if (fVar5 != 0.0) {
      dVar8 = dVar6;
    }
    uVar1 = _mach_absolute_time();
    dVar6 = (double)fVar4 + ((double)uVar3 - (double)((uVar1 - *param_3) * DAT_101d91638)) * 1e-09;
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    dVar6 = (double)NEON_fminnm(dVar8,dVar6);
    FUN_1004eca64((float)dVar6,param_3);
    FUN_1004ece58(param_3);
  } while ((dVar7 < 0.0) ||
          (uVar1 = _mach_absolute_time(),
          (double)((uVar1 - *param_3) * DAT_101d91638) * 1e-09 <= dVar7));
  uVar1 = _mach_absolute_time();
  dVar7 = (double)((uVar1 - *param_3) * DAT_101d91638) * 1e-09;
  fVar4 = (float)(dVar7 - (double)param_3[1]);
  plVar2 = (long *)param_3[6];
  if (plVar2 != (long *)0x0) {
    do {
      if ((0.0 <= fVar4) && (0.0 <= *(float *)((long)plVar2 + 0x4d4))) {
        fVar5 = *(float *)((long)plVar2 + 0x4d4) - fVar4;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        *(float *)((long)plVar2 + 0x4d4) = fVar5;
        if (fVar5 == 0.0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      plVar2 = (long *)plVar2[0x9b];
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = (long *)param_3[3];
  if (plVar2 != (long *)0x0) {
    do {
      if ((0.0 <= fVar4) && (0.0 <= *(float *)((long)plVar2 + 0x4d4))) {
        fVar5 = *(float *)((long)plVar2 + 0x4d4) - fVar4;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        *(float *)((long)plVar2 + 0x4d4) = fVar5;
        if (fVar5 == 0.0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      plVar2 = (long *)plVar2[0x9b];
    } while (plVar2 != (long *)0x0);
  }
  param_3[1] = (long)dVar7;
  return;
}




void FUN_1004ec5bc(long param_1)

{
  *(undefined4 *)(param_1 + 0x504) = 1;
  return;
}




void FUN_1004ec5cc(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x6b8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x4e8) == 1) {
      iVar1 = FUN_1004e2a90(param_1 + 8);
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_1 + 0x6b8) + 0x28))(*(long **)(param_1 + 0x6b8),param_1);
LAB_1004ec6a8:
        FUN_1004ec23c(param_1);
        return;
      }
      *(undefined4 *)(param_1 + 0x4e8) = 2;
      iVar1 = (**(code **)(**(long **)(param_1 + 0x6b8) + 0x18))
                        (*(long **)(param_1 + 0x6b8),param_1);
      if (iVar1 == 0) goto LAB_1004ec6a8;
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if (plVar2 != (long *)0x0 && (param_2 & 1) != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if ((plVar2 != (long *)0x0) && ((param_2 >> 1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if ((plVar2 != (long *)0x0) && ((param_2 >> 2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ec698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
      return;
    }
  }
  return;
}




void FUN_1004ec6b8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004e262c(param_1 + 8);
  if (iVar1 != 0) {
    FUN_1004ec720(param_1 + 8);
    return;
  }
  return;
}




void FUN_1004ec6f0(undefined8 param_1)

{
  FUN_1004e25cc(param_1,1);
  FUN_1004e2a18(param_1);
  FUN_1004e29c8(param_1);
  return;
}




undefined4 FUN_1004ec720(long param_1)

{
  undefined4 local_24;
  
  local_24 = 0;
  if (*(int *)(param_1 + 0x4bc) < 1) {
    local_24 = 0;
  }
  else {
    FUN_1004e2594(param_1,param_1 + 0xc,*(int *)(param_1 + 0x4bc),&local_24);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  return local_24;
}




ulong FUN_1004ec770(long param_1,void *param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  if (*(int *)(param_1 + 0x4bc) + uVar3 < 0x4b0) {
    _memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,param_3 & 0xffffffff);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + uVar3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_1004ec720(param_1);
    if (0x4af < uVar3) {
      uVar2 = FUN_1004e2594(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    _memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,param_3 & 0xffffffff);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + uVar3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar1;
    }
  }
  return param_3;
}




void FUN_1004ec84c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ec850);
  (*pcVar1)();
}




void FUN_1004ec850(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004ec854);
  (*pcVar1)();
}




void FUN_1004ec854(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_1004e262c(lVar1);
  if (iVar2 != 0) {
    FUN_1004ec720(lVar1);
    FUN_1004e2508(lVar1);
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0xbf800000;
  return;
}




void FUN_1004ec898(float param_1,long *param_2)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)((long)param_2 + 0x4d4) = param_1;
  if (param_1 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x0001004ec8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))();
    return;
  }
  return;
}




void FUN_1004ec8bc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004e2550(param_1 + 8);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + iVar1;
  }
  return;
}




undefined8 FUN_1004ec8f4(long param_1,long param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_44;
  
  local_44 = 0;
  if ((int)param_3 != 0) {
    do {
      uVar3 = FUN_1004e262c(param_1 + 8);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      iVar2 = FUN_1004ec770(param_1 + 8,param_2,param_3,&local_44);
      if (param_4 != (int *)0x0) {
        *param_4 = local_44;
      }
      if (local_44 != 0) {
        return 0;
      }
      param_2 = param_2 + iVar2;
      *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + iVar2;
      uVar1 = (int)param_3 - iVar2;
      param_3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return 1;
}




void FUN_1004ec994(long param_1)

{
  FUN_1004e262c(param_1 + 8);
  return;
}




long * FUN_1004ec99c(long *param_1)

{
  uint64_t uVar1;
  
  FUN_1004e3004();
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  FUN_1004e3004(param_1);
  uVar1 = _mach_absolute_time();
  param_1[1] = (long)((double)((uVar1 - *param_1) * DAT_101d91638) * 1e-09);
  return param_1;
}




void FUN_1004eca64(float param_1,long *param_2)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  FUN_1004ecba4();
  dVar6 = -1.0;
  if (0.0 <= param_1) {
    uVar2 = _mach_absolute_time();
    dVar6 = (double)param_1 + (double)((uVar2 - *param_2) * DAT_101d91638) * 1e-09;
  }
  lVar3 = param_2[3];
  while ((lVar3 != 0 && (*(int *)((long)param_2 + 0x14) == 0))) {
    dVar5 = -1.0;
    if (0.0 <= param_1) {
      uVar2 = _mach_absolute_time();
      dVar5 = dVar6 + (double)((uVar2 - *param_2) * DAT_101d91638) * -1e-09;
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
    }
    fVar4 = param_1;
    if (param_1 != 0.0) {
      fVar4 = (float)dVar5;
    }
    iVar1 = FUN_1004ecc14(fVar4,param_2);
    if (iVar1 < 1) break;
    FUN_1004ecdb0(param_2);
    FUN_1004ecba4(param_2);
    if ((0.0 <= dVar6) &&
       (uVar2 = _mach_absolute_time(), dVar6 < (double)((uVar2 - *param_2) * DAT_101d91638) * 1e-09)
       ) break;
    lVar3 = param_2[3];
  }
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}




void FUN_1004ecba4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  plVar4 = (long *)(param_1 + 0x30);
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    iVar6 = *(int *)(param_1 + 0x40);
    iVar7 = *(int *)(param_1 + 0x28);
    do {
      if (lVar5 == *(long *)(param_1 + 0x38)) {
        *plVar4 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        *plVar4 = *(long *)(lVar5 + 0x4d8);
      }
      iVar6 = iVar6 + -1;
      *(undefined8 *)(lVar5 + 0x4d8) = 0;
      lVar2 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      *(long *)(lVar5 + 0x4e0) = lVar3;
      plVar1 = (long *)(param_1 + 0x18);
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar3 + 0x4d8);
      }
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x20) = lVar5;
      iVar7 = iVar7 + 1;
      lVar5 = *(long *)(param_1 + 0x30);
    } while (lVar5 != 0);
    *(int *)(param_1 + 0x40) = iVar6;
    *(int *)(param_1 + 0x28) = iVar7;
  }
  return;
}




void FUN_1004ecc14(float param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *puVar6 = 0;
  puVar7 = (undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  lVar1 = param_2 + 0x148;
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(param_2 + 0x188) = 0;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  *(undefined8 *)(param_2 + 0x198) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar9 == 0) {
    iVar8 = -1;
  }
  else {
    iVar8 = -1;
    do {
      while( true ) {
        uVar3 = *(uint *)(lVar9 + 0x4c8);
        piVar2 = (int *)(lVar9 + 8);
        lVar9 = *(long *)(lVar9 + 0x4d8);
        if ((uVar3 & 1) == 0) break;
        FUN_1004ecefc(puVar6,piVar2);
        if ((uVar3 >> 1 & 1) != 0) goto LAB_1004eccbc;
LAB_1004ecc9c:
        if ((uVar3 >> 2 & 1) == 0) goto LAB_1004ecca0;
LAB_1004ecccc:
        FUN_1004ecefc(lVar1,piVar2);
LAB_1004eccd8:
        iVar5 = *piVar2;
        if (*piVar2 <= iVar8) {
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        if (lVar9 == 0) goto LAB_1004eccf0;
      }
      if ((uVar3 >> 1 & 1) == 0) goto LAB_1004ecc9c;
LAB_1004eccbc:
      FUN_1004ecefc(puVar7,piVar2);
      if ((uVar3 >> 2 & 1) != 0) goto LAB_1004ecccc;
LAB_1004ecca0:
      if (uVar3 != 0) goto LAB_1004eccd8;
    } while (lVar9 != 0);
  }
LAB_1004eccf0:
  if (param_1 < 0.0) {
    FUN_1004e2bc8(iVar8 + 1,puVar6,puVar7,lVar1);
    return;
  }
  if (param_1 == 0.0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = (int)param_1;
    iVar5 = (int)((param_1 - (float)(int)param_1) * 1e+06) % 1000000;
  }
  FUN_1004e2bd0(iVar8 + 1,puVar6,puVar7,lVar1,iVar4,iVar5);
  return;
}




void FUN_1004ecdb0(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x18);
    do {
      plVar6 = (long *)plVar5[0x9b];
      plVar1 = plVar5 + 1;
      uVar3 = FUN_1004ecf58(param_1 + 0x48,plVar1);
      iVar4 = FUN_1004ecf58(param_1 + 200,plVar1);
      uVar2 = uVar3 | 2;
      if (iVar4 == 0) {
        uVar2 = uVar3;
      }
      iVar4 = FUN_1004ecf58(param_1 + 0x148,plVar1);
      uVar3 = uVar2 | 4;
      if (iVar4 == 0) {
        uVar3 = uVar2;
      }
      if (uVar3 != 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      plVar5 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}




void FUN_1004ece58(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  while (lVar3 != 0) {
    lVar1 = lVar3 + 8;
    lVar3 = *(long *)(lVar3 + 0x4d8);
    iVar2 = FUN_1004e262c(lVar1);
    if (iVar2 != 0) {
      FUN_1004ec720(lVar1);
    }
  }
  return;
}




void FUN_1004ece98(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x4d8);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x4e0);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x4d8) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x4e0);
    *(undefined8 *)(lVar1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
    *(long *)(*(long *)(param_2 + 0x4d8) + 0x4e0) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_1004ecefc(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if ((PTR____darwin_check_fd_set_overflow_101444200 == (undefined *)0x0) ||
     (iVar2 = ___darwin_check_fd_set_overflow((long)(int)uVar1,param_1,0), iVar2 != 0)) {
    uVar3 = (ulong)(long)(int)uVar1 >> 3 & 0x1ffffffffffffffc;
    *(uint *)(param_1 + uVar3) = *(uint *)(param_1 + uVar3) | 1 << (ulong)(uVar1 & 0x1f);
  }
  return;
}




ulong FUN_1004ecf58(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if ((PTR____darwin_check_fd_set_overflow_101444200 == (undefined *)0x0) ||
     (uVar2 = ___darwin_check_fd_set_overflow((long)(int)uVar1,param_1,0), (int)uVar2 != 0)) {
    uVar2 = (ulong)(*(uint *)(param_1 + ((ulong)(long)(int)uVar1 >> 3 & 0x1ffffffffffffffc)) >>
                    (ulong)(uVar1 & 0x1f) & 1);
  }
  return uVar2;
}




void thunk_FUN_1004e24b0(void)

{
  _signal(0xd);
  return;
}




void thunk_FUN_1004e24bc(void)

{
  return;
}




undefined8 * FUN_1004ecfb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e360;
  _bzero(param_1 + 1,0x1400);
  return param_1;
}




undefined8 * FUN_1004ecfe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e360;
  _bzero(param_1 + 1,0x1400);
  return param_1;
}




void FUN_1004ed020(long param_1)

{
  FUN_1010d0460(param_1 + 8);
  return;
}




uint FUN_1004ed028(undefined8 param_1,int param_2)

{
  return param_2 + 7U & 0xfffffff8;
}




undefined8 FUN_1004ed034(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_1004ed03c(long *param_1,void *param_2,ulong param_3,void *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  _memmove(param_4,param_2,param_3 & 0xffffffff);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
  uVar3 = (uint)param_3;
  if (uVar3 < uVar2) {
    _bzero((void *)((long)param_4 + (param_3 & 0xffffffff)),(ulong)(uVar2 + ~uVar3) + 1);
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      FUN_1010d031c(param_1 + 1,(long)param_4 + uVar4,(long)param_4 + (uVar4 | 4));
      uVar1 = (int)uVar4 + 8;
      uVar4 = (ulong)uVar1;
    } while (uVar1 < uVar3);
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar2;
  }
  return;
}




bool FUN_1004ed0f0(long *param_1,void *param_2,ulong param_3,void *param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (uint)param_3;
  uVar2 = uVar4 + 7 & 0xfffffff8;
  if (uVar2 == uVar4) {
    _memmove(param_4,param_2,param_3 & 0xffffffff);
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        FUN_1010d03bc(param_1 + 1,(long)param_4 + uVar5,(long)param_4 + (uVar5 | 4));
        uVar1 = (int)uVar5 + 8;
        uVar5 = (ulong)uVar1;
      } while (uVar1 < uVar4);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = uVar3;
    }
  }
  return uVar2 == uVar4;
}




undefined8 FUN_1004ed1a4(void)

{
  return 0;
}




undefined4 FUN_1004ed1ac(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined4 uVar6;
  
  bVar5 = *(byte *)(param_1 + 0x17);
  uVar3 = (ulong)bVar5;
  uVar4 = *(ulong *)(param_1 + 8);
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 3) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013dd76c);
    if (iVar2 == 0) {
      return 1;
    }
    bVar5 = *(byte *)(param_1 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (-1 < (char)bVar5) {
    uVar4 = uVar3;
  }
  uVar6 = 1;
  if (uVar4 == 4) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x10141b04b);
    uVar6 = 1;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
  }
  return uVar6;
}




int FUN_1004ed258(long param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_1010eb520(3);
  ppVar1 = DAT_101e94728;
  iVar2 = _pthread_mutex_lock(DAT_101e94728);
  uVar3 = FUN_1010efa64(iVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




undefined8 * FUN_1004ed298(undefined8 *param_1)

{
  FUN_1004ed2e4();
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}




int FUN_1004ed2e4(undefined8 *param_1)

{
  void *pvVar1;
  pthread_mutex_t *ppVar2;
  int iVar3;
  void *pvVar4;
  
  FUN_1004ed374();
  ppVar2 = DAT_101e94728;
  _pthread_mutex_lock(DAT_101e94728);
  pvVar1 = (void *)*param_1;
  while (pvVar1 != (void *)0x0) {
    pvVar4 = *(void **)((long)pvVar1 + 0x50);
    FUN_1004ed460(param_1,pvVar1);
    if (*(void **)((long)pvVar1 + 0x60) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x60));
      *(undefined8 *)((long)pvVar1 + 0x58) = 0;
      *(undefined8 *)((long)pvVar1 + 0x60) = 0;
    }
    if (*(char *)((long)pvVar1 + 0x1f) < '\0') {
      operator_delete(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
    pvVar1 = pvVar4;
  }
  FUN_1010f19a0(param_1[9]);
  FUN_1010eb5dc();
  iVar3 = _pthread_mutex_unlock(ppVar2);
  return iVar3;
}




int FUN_1004ed374(long param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  ppVar1 = DAT_101e94728;
  _pthread_mutex_lock(DAT_101e94728);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    do {
      if (*(long *)(param_1 + 0x18) == lVar3) {
        *(long *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x48);
        *(long *)(param_1 + 0x20) = lVar3;
        *(undefined8 *)(lVar3 + 0x50) = 0;
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      FUN_1004edac8(param_1);
      lVar3 = *(long *)(param_1 + 0x20);
    } while (lVar3 != 0);
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    do {
      if (*(long *)(param_1 + 0x30) == lVar3) {
        *(long *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        lVar4 = *(long *)(lVar3 + 0x48);
        *(long *)(param_1 + 0x38) = lVar4;
        *(undefined8 *)(lVar4 + 0x50) = 0;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      FUN_1010efe70(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(lVar3 + 0x28));
      FUN_1010eb86c(*(undefined8 *)(lVar3 + 0x28));
      FUN_1004ed518(param_1,*(undefined4 *)(lVar3 + 0x20));
      FUN_1004edac8(param_1,lVar3);
      lVar3 = *(long *)(param_1 + 0x38);
    } while (lVar3 != 0);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




void FUN_1004ed460(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x50);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x48);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x50) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x48);
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(long *)(*(long *)(param_2 + 0x50) + 0x48) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




int FUN_1004ed4c0(long param_1,long param_2)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  
  ppVar1 = DAT_101e94728;
  _pthread_mutex_lock(DAT_101e94728);
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  *(int *)(param_2 + 0x18) = iVar2;
  FUN_1000e6a60(param_1 + 0x58,(int *)(param_2 + 0x18));
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




void FUN_1004ed518(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    uVar3 = (ulong)uVar1;
    if (uVar1 != 0) {
      piVar2 = *(int **)(param_1 + 0x60);
      do {
        if (*piVar2 == param_2) {
          FUN_10012bb98((uint *)(param_1 + 0x58),piVar2,piVar2 + 1);
          return;
        }
        piVar2 = piVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}




undefined4 FUN_1004ed554(long param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  undefined4 uVar3;
  string sVar4;
  pthread_mutex_t *ppVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  string *psVar11;
  string *psVar12;
  string *psVar13;
  
  sVar4 = param_2[0x17];
  uVar8 = (ulong)(byte)sVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)sVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar13 = *(string **)param_2;
    psVar11 = psVar13;
    if (-1 < (char)sVar4) {
      psVar11 = param_2;
    }
    psVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      psVar12 = (string *)&DAT_101d91198;
    }
    if ((char)sVar4 < '\0') {
      if (sVar1 == 0) {
        return 0;
      }
      iVar6 = _memcmp(psVar11,psVar12,sVar1);
      if (iVar6 == 0) {
        return 0;
      }
      goto LAB_1004ed624;
    }
    if (sVar1 == 0) {
      return 0;
    }
    psVar11 = param_2;
    if ((uint)(byte)*psVar12 == ((uint)psVar13 & 0xff)) {
      do {
        uVar8 = uVar8 - 1;
        psVar12 = psVar12 + 1;
        psVar11 = psVar11 + 1;
        if (uVar8 == 0) {
          return 0;
        }
      } while (*psVar11 == *psVar12);
    }
  }
  psVar13 = param_2;
  if ((char)sVar4 < '\0') {
    psVar13 = *(string **)param_2;
  }
LAB_1004ed624:
  iVar6 = FUN_1004d2524(psVar13);
  if (iVar6 == 0) {
    return 0;
  }
  FUN_1004ed4c0(param_1,param_2);
  ppVar5 = DAT_101e94728;
  _pthread_mutex_lock(DAT_101e94728);
  puVar7 = (undefined8 *)FUN_1004ed6d4(param_1);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 0x18);
    std::string::operator=((string *)(puVar7 + 1),param_2);
    puVar7[7] = param_3;
    puVar7[8] = param_4;
    *puVar7 = 0;
    plVar9 = (long *)(param_1 + 0x18);
    lVar10 = *plVar9;
    puVar7[9] = 0;
    puVar7[10] = lVar10;
    if (lVar10 == 0) {
      *(undefined8 **)(param_1 + 0x18) = puVar7;
      plVar9 = (long *)(param_1 + 0x20);
    }
    else {
      *(undefined8 **)(lVar10 + 0x48) = puVar7;
    }
    *plVar9 = (long)puVar7;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  _pthread_mutex_unlock(ppVar5);
  return uVar3;
}




undefined8 * FUN_1004ed6d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = operator_new(0x68);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xc] = 0;
  }
  else {
    if ((undefined8 *)*param_1 == puVar2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lVar1 = puVar2[9];
      param_1[1] = lVar1;
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
    if (puVar2[0xc] != 0) {
      *(undefined4 *)(puVar2 + 0xb) = 0;
    }
    *(undefined4 *)(puVar2 + 4) = 0;
    std::string::operator=((string *)(puVar2 + 1),(string *)&DAT_101d91198);
  }
  return puVar2;
}




int FUN_1004ed768(long param_1)

{
  uint uVar1;
  long *plVar2;
  pthread_mutex_t *ppVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 local_78;
  void *local_70;
  int local_68;
  undefined8 local_60;
  undefined1 auStack_54 [4];
  
  ppVar3 = DAT_101e94728;
  iVar5 = _pthread_mutex_lock(DAT_101e94728);
  lVar6 = FUN_1004d29d0(iVar5);
  plVar9 = *(long **)(param_1 + 0x18);
  while (plVar2 = plVar9, plVar2 != (long *)0x0) {
    plVar9 = (long *)plVar2[10];
    if (*plVar2 <= lVar6) {
      FUN_1004ed460((long *)(param_1 + 0x18),plVar2);
      FUN_1004ed948(param_1,plVar2);
    }
  }
  do {
    iVar5 = FUN_1010f0880(*(undefined8 *)(param_1 + 0x48),auStack_54);
  } while (iVar5 == -1);
  piVar7 = (int *)FUN_1010f1ac0(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
  if (piVar7 == (int *)0x0) {
LAB_1004ed924:
    iVar5 = _pthread_mutex_unlock(ppVar3);
    return iVar5;
  }
LAB_1004ed814:
  if (*piVar7 == 1) {
    lVar10 = *(long *)(piVar7 + 2);
    local_60 = 0;
    FUN_1010eb878(lVar10,0x200002);
    FUN_1010efe70(*(undefined8 *)(param_1 + 0x48),lVar10);
    FUN_1010eb86c(lVar10);
    for (lVar6 = *(long *)(param_1 + 0x30); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x50)) {
      if (*(long *)(lVar6 + 0x28) == lVar10) {
        FUN_1004ed460(param_1 + 0x30,lVar6);
        local_78 = 0;
        local_70 = (void *)0x0;
        local_68 = 0;
        local_80 = local_60;
        FUN_1004ede5c(&local_78,lVar6 + 0x58);
        local_68 = *(int *)(lVar6 + 0x20);
        uVar1 = *(uint *)(param_1 + 0x58);
        iVar5 = local_68;
        if (uVar1 == 0) goto LAB_1004ed8f0;
        if (**(int **)(param_1 + 0x60) == local_68) goto LAB_1004ed8e0;
        uVar4 = 1;
        goto LAB_1004ed8bc;
      }
    }
  }
  goto LAB_1004ed914;
  while (uVar4 = uVar8 + 1, (*(int **)(param_1 + 0x60))[uVar8] != local_68) {
LAB_1004ed8bc:
    uVar8 = uVar4;
    if (uVar1 == uVar8) break;
  }
  if (uVar8 < uVar1) {
LAB_1004ed8e0:
    (**(code **)(lVar6 + 0x40))(*(undefined8 *)(lVar6 + 0x38),&local_80);
    iVar5 = *(int *)(lVar6 + 0x20);
  }
LAB_1004ed8f0:
  FUN_1004ed518(param_1,iVar5);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  FUN_1004edac8(param_1,lVar6);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
LAB_1004ed914:
  piVar7 = (int *)FUN_1010f1ac0(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
  if (piVar7 == (int *)0x0) goto LAB_1004ed924;
  goto LAB_1004ed814;
}




void FUN_1004ed948(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  void *local_40;
  undefined4 local_38;
  
  lVar5 = FUN_1010eb624();
  if (lVar5 != 0) {
    *(long *)(param_2 + 0x28) = lVar5;
    FUN_1010eb66c(lVar5,0x2712);
    FUN_1010eb66c(lVar5,0x4e2b);
    FUN_1010eb66c(lVar5,0x2711);
    FUN_1010eb66c(lVar5,0xd);
    FUN_1010eb66c(lVar5,0x2776);
    FUN_1010eb66c(lVar5,99);
    FUN_1010d05bc(lVar5);
    FUN_1010efa70(*(undefined8 *)(param_1 + 0x48),lVar5);
    *(undefined8 *)(param_2 + 0x50) = 0;
    lVar5 = *(long *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x38);
    *(long *)(param_2 + 0x48) = lVar2;
    plVar1 = (long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar2 + 0x50);
    }
    *plVar1 = param_2;
    *(long *)(param_1 + 0x38) = param_2;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    return;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_40 = (void *)0x0;
  uVar3 = *(uint *)(param_1 + 0x58);
  if (uVar3 != 0) {
    if (**(int **)(param_1 + 0x60) != *(int *)(param_2 + 0x20)) {
      uVar4 = 1;
      do {
        uVar6 = uVar4;
        if (uVar3 == uVar6) break;
        uVar4 = uVar6 + 1;
      } while ((*(int **)(param_1 + 0x60))[uVar6] != *(int *)(param_2 + 0x20));
      if (uVar3 <= uVar6) goto LAB_1004eda9c;
    }
    (**(code **)(param_2 + 0x40))(*(undefined8 *)(param_2 + 0x38),&local_50);
  }
LAB_1004eda9c:
  FUN_1004edac8(param_1,param_2);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  return;
}




void FUN_1004edac8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  std::string::operator=((string *)(param_2 + 1),(string *)&DAT_101d91198);
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if (param_2[0xc] != 0) {
    *(undefined4 *)(param_2 + 0xb) = 0;
  }
  lVar2 = *param_1;
  lVar3 = param_1[1];
  param_2[9] = lVar3;
  param_2[10] = 0;
  plVar1 = param_1;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x50);
  }
  *plVar1 = (long)param_2;
  param_1[1] = (long)param_2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




uint FUN_1004edb38(void *param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 * param_2;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_4 + 0x58);
    FUN_100116af8((uint *)(param_4 + 0x58),uVar1 + uVar2,0);
    _memmove((void *)(*(long *)(param_4 + 0x60) + (ulong)uVar1),param_1,(ulong)uVar2);
  }
  return uVar2;
}




int FUN_1004edba0(undefined8 param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = DAT_101e94730;
  ppVar1 = DAT_101e94728;
  _pthread_mutex_lock(DAT_101e94728);
  FUN_1004ed518(uVar2,param_1);
  iVar3 = _pthread_mutex_unlock(ppVar1);
  return iVar3;
}




void FUN_1004edbec(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x40);
  FUN_1004e4464(pvVar1,1);
  DAT_101e94728 = pvVar1;
  puVar2 = operator_new(0x70);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 1;
  FUN_1004ed258();
  DAT_101e94730 = puVar2;
  return;
}




void FUN_1004edc64(void)

{
  pthread_mutex_t *ppVar1;
  void *pvVar2;
  
  if (DAT_101e94730 != 0) {
    pvVar2 = (void *)FUN_1004ed298();
    operator_delete(pvVar2);
  }
  ppVar1 = DAT_101e94728;
  if (DAT_101e94728 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_destroy(DAT_101e94728);
    operator_delete(ppVar1);
  }
  DAT_101e94730 = 0;
  DAT_101e94728 = (pthread_mutex_t *)0x0;
  return;
}




void FUN_1004edcbc(void)

{
  FUN_1004ed768(DAT_101e94730);
  return;
}




void FUN_1004edcc8(void)

{
  FUN_1004ed374(DAT_101e94730);
  return;
}




void FUN_1004edcd4(string *param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1004edba0();
  }
  std::string::operator=(param_1,(string *)&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x18) = 0x271000000000;
  *(undefined4 *)(param_1 + 0x20) = 1000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}




undefined8 * FUN_1004edd24(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1004edcd4();
  return param_1;
}




undefined8 * FUN_1004edd58(undefined8 *param_1)

{
  FUN_1004edba0(*(undefined4 *)(param_1 + 3));
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




undefined8 * thunk_FUN_1004edd58(undefined8 *param_1)

{
  FUN_1004edba0(*(undefined4 *)(param_1 + 3));
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




void FUN_1004edd94(string *param_1,long param_2)

{
  void *local_38 [2];
  char local_21;
  
  if (param_2 == 0) {
    FUN_10003330c(local_38,&DAT_101d91198);
  }
  else {
    FUN_10001549c(local_38);
  }
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




bool FUN_1004eddf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = FUN_1004ed554(DAT_101e94730,param_1,param_2,param_3);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




void FUN_1004ede34(char *param_1,long param_2)

{
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  if (*(int *)(param_2 + 8) != 0) {
    std::string::append(param_1,*(ulong *)(param_2 + 0x10));
    return;
  }
  return;
}




undefined8 FUN_1004ede54(undefined8 *param_1)

{
  return *param_1;
}




void FUN_1004ede5c(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1000cb364(param_1,*param_2);
    uVar2 = (ulong)*param_2;
    uVar1 = 0;
    if (*param_2 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 2);
      puVar4 = *(undefined1 **)(param_1 + 2);
      do {
        *puVar4 = *puVar3;
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




undefined8 FUN_1004edec8(undefined8 param_1)

{
  FUN_10014d3e8(param_1,1);
  return param_1;
}




string * FUN_1004edef0(string *param_1,long *param_2)

{
  string *psVar1;
  string sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ushort *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  string *psVar18;
  void *local_b8 [2];
  char local_a1;
  void *local_a0;
  ulong local_98;
  byte local_89;
  char *local_88;
  ulong local_80;
  ulong local_78;
  undefined1 local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(string **)(param_1 + 0x30) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(string **)(param_1 + 0x48) = param_1 + 0x50;
  psVar18 = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)psVar18 = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  psVar1 = param_1 + 0x140;
  sVar2 = param_1[0x142];
  *(undefined2 *)(param_1 + 0x140) = 0xffff;
  param_1[0x142] = SUB41((byte)sVar2 & 0xfff0,0);
  if ((int)param_2[0xb] != 0) {
    uVar15 = ((byte)sVar2 & 0xfff0) << 0x10 | 0xfffa;
    goto LAB_1004eead8;
  }
  lVar4 = FUN_1000e86c0(param_2,"httpStatus");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_1004ee004:
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe);
  }
  else {
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    lVar4 = FUN_1000e87dc(param_2,&local_88);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_1004ee004;
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_88);
    iVar3 = *piVar8;
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe | iVar3 == 0x130);
    if (iVar3 == 0x130) {
      return param_1;
    }
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "tag";
  local_80 = 3;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1 + 0x18,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "time";
  local_80 = 4;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78._0_4_ = 0x100005;
  local_88 = "text";
  local_80 = 4;
  plVar6 = (long *)FUN_1000e87dc(param_2,&local_88);
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "code";
  local_80 = 4;
  puVar7 = (ushort *)FUN_1000e87dc(plVar6,&local_88);
  *(ushort *)psVar1 = *puVar7;
  *(undefined4 *)(param_1 + 0x138) = 4;
  FUN_10014eb80(psVar18,0);
  lVar4 = FUN_1000e86c0(plVar6,"quintPartyStateUpdate");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
    lVar4 = FUN_1000e86c0(plVar6,"quintPartyJoinRequest");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
      lVar4 = FUN_1000e86c0(plVar6,"quintPartyPlayerLeft");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
        lVar4 = FUN_1000e86c0(plVar6,"quintPartyMemberKick");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          lVar4 = FUN_1000e86c0(plVar6,"type");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
            local_78._0_4_ = 0x100005;
            local_88 = "type";
            local_80 = 4;
            uVar9 = FUN_1000e87dc(plVar6,&local_88);
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"states"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "states";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "states";
                local_80 = 6;
                plVar5 = (long *)FUN_1000e87dc(plVar6,&local_88);
                uVar16 = (ulong)*(uint *)(plVar5 + 1);
                if (*(uint *)(plVar5 + 1) != 0) {
                  lVar4 = *plVar5;
                  puVar10 = (undefined8 *)(lVar4 + 0x18);
                  do {
                    if ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0) {
                      puVar13 = puVar10;
                      if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                        puVar13 = (undefined8 *)*puVar10;
                      }
                      FUN_1000ee4ec(&local_88,puVar13);
                      if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
                        puVar13 = (undefined8 *)puVar10[-3];
                      }
                      else {
                        puVar13 = puVar10 + -3;
                      }
                      FUN_1000ee4ec(&local_a0,puVar13);
                      psVar18 = (string *)FUN_1001339ec(param_1 + 0x30,&local_a0);
                      std::string::operator=(psVar18,(string *)&local_88);
                      if ((char)local_89 < '\0') {
                        operator_delete(local_a0);
                      }
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      lVar4 = *plVar5;
                      uVar16 = (ulong)*(uint *)(plVar5 + 1);
                    }
                    puVar13 = puVar10 + 3;
                    puVar10 = puVar10 + 6;
                  } while (puVar13 != (undefined8 *)(lVar4 + uVar16 * 0x30));
                }
                if (*(int *)(param_1 + 0x40) != 0) {
                  param_1[0x142] = (string)((byte)param_1[0x142] | 8);
                }
              }
            }
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"counts"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "counts";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "counts";
                local_80 = 6;
                puVar10 = (undefined8 *)FUN_1000e87dc(plVar6,&local_88);
                uVar15 = *(uint *)(puVar10 + 1);
                if (uVar15 != 0) {
                  puVar17 = (undefined8 *)*puVar10;
                  puVar13 = puVar17;
                  do {
                    if ((*(byte *)((long)puVar13 + 0x29) >> 2 & 1) != 0) {
                      puVar17 = puVar13;
                      if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                        puVar17 = (undefined8 *)*puVar13;
                      }
                      uVar14 = *(undefined4 *)(puVar13 + 3);
                      FUN_1000ee4ec(&local_88,puVar17);
                      puVar11 = (undefined4 *)FUN_1002115d0(param_1 + 0x48,&local_88);
                      *puVar11 = uVar14;
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      puVar17 = (undefined8 *)*puVar10;
                      uVar15 = *(uint *)(puVar10 + 1);
                    }
                    puVar13 = puVar13 + 6;
                  } while (puVar13 != puVar17 + (ulong)uVar15 * 6);
                }
              }
            }
          }
          goto LAB_1004eea98;
        }
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
            else {
              puVar13 = puVar10 + -3;
            }
            FUN_1000ee4ec(&local_88,puVar13);
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
            else {
              puVar13 = puVar10 + -3;
            }
            FUN_1000ee4ec(&local_88,puVar13);
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0e2),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004ee8d8:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004ee8d8;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 1;
      }
    }
    else {
      if (*(uint *)(plVar6 + 1) != 0) {
        puVar10 = (undefined8 *)(*plVar6 + 0x18);
        do {
          if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
            puVar13 = (undefined8 *)puVar10[-3];
          }
          else {
            puVar13 = puVar10 + -3;
          }
          FUN_1000ee4ec(&local_88,puVar13);
          uVar16 = local_80;
          if (-1 < (long)local_78) {
            uVar16 = local_78 >> 0x38;
          }
          if (((uVar16 == 9) &&
              (iVar3 = std::string::compare
                                 ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
              iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
            puVar13 = puVar10;
            if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
              puVar13 = (undefined8 *)*puVar10;
            }
            FUN_1000ee4ec(&local_a0,puVar13);
            psVar18 = param_1 + 0xa0;
LAB_1004ee724:
            std::string::operator=(psVar18,(string *)&local_a0);
            if ((char)local_89 < '\0') {
              operator_delete(local_a0);
            }
          }
          else {
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
            if (((uVar16 == 0x15) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b093),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x70;
              goto LAB_1004ee724;
            }
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
            if (((uVar16 == 6) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x1013db10a),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x88;
              goto LAB_1004ee724;
            }
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
            if (((uVar16 != 3) ||
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0b3),
                iVar3 != 0)) || ((*(byte *)((long)puVar10 + 0x11) >> 2 & 1) == 0)) {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 0x10) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0b7),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0xb8;
              }
              else {
                uVar16 = local_80;
                if (-1 < (long)local_78) {
                  uVar16 = local_78 >> 0x38;
                }
                if (((uVar16 == 0xb) &&
                    (iVar3 = std::string::compare
                                       ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0c8),
                    iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                  puVar13 = puVar10;
                  if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                    puVar13 = (undefined8 *)*puVar10;
                  }
                  FUN_1000ee4ec(&local_a0,puVar13);
                  psVar18 = param_1 + 0xd0;
                }
                else {
                  uVar16 = local_80;
                  if (-1 < (long)local_78) {
                    uVar16 = local_78 >> 0x38;
                  }
                  if (((uVar16 != 0xd) ||
                      (iVar3 = std::string::compare
                                         ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0d4)
                      , iVar3 != 0)) || ((*(uint *)(puVar10 + 2) >> 0x14 & 1) == 0))
                  goto LAB_1004ee738;
                  puVar13 = puVar10;
                  if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                    puVar13 = (undefined8 *)*puVar10;
                  }
                  FUN_1000ee4ec(&local_a0,puVar13);
                  psVar18 = param_1 + 0xe8;
                }
              }
              goto LAB_1004ee724;
            }
            *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)puVar10;
          }
LAB_1004ee738:
          if ((long)local_78 < 0) {
            operator_delete(local_88);
          }
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 6;
        } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
      }
      uVar14 = 0;
    }
    param_1[0x142] = (string)((byte)param_1[0x142] | 8);
    *(undefined4 *)(param_1 + 0x138) = uVar14;
  }
  else {
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "quintPartyStateUpdate";
    local_80 = 0x15;
    plVar6 = (long *)FUN_1000e87dc(plVar6,&local_88);
    if ((int)plVar6[1] != 0) {
      plVar5 = (long *)*plVar6;
      do {
        local_80 = 0;
        local_78 = 0;
        local_88 = (char *)0x0;
        if ((int)plVar5[1] != 0) {
          piVar8 = (int *)(*plVar5 + 0x18);
          do {
            if ((*(byte *)((long)piVar8 + -6) >> 6 & 1) == 0) {
              piVar12 = *(int **)(piVar8 + -6);
            }
            else {
              piVar12 = piVar8 + -6;
            }
            FUN_1000ee4ec(&local_a0,piVar12);
            uVar16 = local_98;
            if (-1 < (char)local_89) {
              uVar16 = (ulong)local_89;
            }
            if (((uVar16 == 6) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_a0,0,(char *)0xffffffffffffffff,0x1013db10a),
                iVar3 == 0)) && (((uint)piVar8[4] >> 0x14 & 1) != 0)) {
              piVar12 = piVar8;
              if (((uint)piVar8[4] >> 0x16 & 1) == 0) {
                piVar12 = *(int **)piVar8;
              }
              FUN_1000ee4ec(local_b8,piVar12);
              std::string::operator=((string *)&local_88,(string *)local_b8);
              if (local_a1 < '\0') {
                operator_delete(local_b8[0]);
              }
            }
            else {
              uVar16 = local_98;
              if (-1 < (char)local_89) {
                uVar16 = (ulong)local_89;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_a0,0,(char *)0xffffffffffffffff,0x10141b07b),
                  iVar3 == 0)) && ((*(byte *)((long)piVar8 + 0x11) >> 2 & 1) != 0)) {
                local_70 = *piVar8 != 0;
              }
              else {
                uVar16 = local_98;
                if (-1 < (char)local_89) {
                  uVar16 = (ulong)local_89;
                }
                if (((uVar16 == 4) &&
                    (iVar3 = std::string::compare
                                       ((ulong)&local_a0,0,(char *)0xffffffffffffffff,0x10141b085),
                    iVar3 == 0)) && ((*(byte *)((long)piVar8 + 0x11) >> 2 & 1) != 0)) {
                  local_6c = *piVar8;
                }
                else {
                  uVar16 = local_98;
                  if (-1 < (char)local_89) {
                    uVar16 = (ulong)local_89;
                  }
                  if (((uVar16 == 8) &&
                      (iVar3 = std::string::compare
                                         ((ulong)&local_a0,0,(char *)0xffffffffffffffff,0x10141b08a)
                      , iVar3 == 0)) && ((*(byte *)((long)piVar8 + 0x11) >> 2 & 1) != 0)) {
                    local_68 = *piVar8;
                  }
                  else {
                    uVar16 = local_98;
                    if (-1 < (char)local_89) {
                      uVar16 = (ulong)local_89;
                    }
                    if (((uVar16 == 6) &&
                        (iVar3 = std::string::compare
                                           ((ulong)&local_a0,0,(char *)0xffffffffffffffff,
                                            0x1013d9fb2), iVar3 == 0)) &&
                       ((*(byte *)((long)piVar8 + 0x11) >> 2 & 1) != 0)) {
                      local_64 = *piVar8;
                    }
                  }
                }
              }
            }
            if ((char)local_89 < '\0') {
              operator_delete(local_a0);
            }
            piVar12 = piVar8 + 6;
            piVar8 = piVar8 + 0xc;
          } while (piVar12 != (int *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30));
        }
        FUN_1004eed9c(psVar18,&local_88);
        param_1[0x142] = (string)((byte)param_1[0x142] | 8);
        *(undefined4 *)(param_1 + 0x138) = 2;
        if ((long)local_78 < 0) {
          operator_delete(local_88);
        }
        plVar5 = plVar5 + 3;
      } while (plVar5 != (long *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x18));
    }
  }
LAB_1004eea98:
  lVar4 = FUN_1000e86c0(param_2,"friendsListUpdate");
  uVar15 = *(uint3 *)psVar1 & 0xfff80000 |
           (uint)*(ushort *)psVar1 | ((byte)param_1[0x142] & 3) << 0x10 |
           (uint)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) << 0x12;
LAB_1004eead8:
  *(ushort *)psVar1 = (ushort)uVar15;
  param_1[0x142] = SUB41(uVar15 >> 0x10,0);
  return param_1;
}




void FUN_1004eed9c(uint *param_1,long param_2)

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
    FUN_100521fdc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10003330c(lVar4 + -0x28,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_1004eee2c(int param_1)

{
  if (param_1 == 0) {
    DAT_101e94738 = 0;
  }
  else {
    operator_new(0x2d10);
    DAT_101e94738 = FUN_1004f320c();
  }
  DAT_1018675c8 = 1;
  return;
}




void FUN_1004eee68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001004eee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x10))(DAT_101e94738,param_1,param_2,param_3);
  return;
}




void FUN_1004eee88(void)

{
  long lVar1;
  
  lVar1 = (**(code **)(*DAT_101e94738 + 0x4d0))();
  if (*(int *)(lVar1 + 0x98) != 0) {
    (**(code **)(*DAT_101e94738 + 800))();
  }
  if (DAT_101e94738 != (long *)0x0) {
    (**(code **)(*DAT_101e94738 + 8))();
  }
  DAT_101e94738 = (long *)0x0;
  return;
}




bool FUN_1004eeee4(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 800))();
  return iVar1 == 1;
}




bool FUN_1004eef10(void)

{
  return DAT_101e94738 != 0;
}




undefined8 FUN_1004eef24(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_101e94738 != (long *)0x0) &&
     (lVar1 = (**(code **)(*DAT_101e94738 + 0x4d0))(), *(int *)(lVar1 + 0x98) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001004eef64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*DAT_101e94738 + 0x18))();
    return uVar2;
  }
  return 0;
}




void FUN_1004eef78(void)

{
  if (DAT_101e94738 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004eef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e94738 + 0x528))();
    return;
  }
  return;
}




bool FUN_1004eef94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x20))(DAT_101e94738,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_1004eefd0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = "";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  iVar2 = (**(code **)(*DAT_101e94738 + 0x28))(DAT_101e94738,param_1,param_2,pcVar1);
  return iVar2 == 1;
}




bool FUN_1004ef018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x30))(DAT_101e94738,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_1004ef054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_1004d2524(param_3);
  if ((uVar2 < 0x41) && (uVar2 = FUN_1004d2524(param_4), uVar2 < 0x41)) {
    iVar3 = (**(code **)(*DAT_101e94738 + 0x38))
                      (DAT_101e94738,param_1,param_2,param_3,param_4,param_5);
    bVar1 = iVar3 == 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




bool FUN_1004ef0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x40))
                    (DAT_101e94738,param_1,param_2,param_3,param_4,param_5);
  return iVar1 == 1;
}




bool FUN_1004ef128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x48))
                    (DAT_101e94738,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1 == 1;
}




void FUN_1004ef16c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004ef180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x50))(DAT_101e94738,param_1);
  return;
}




void FUN_1004ef184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004ef198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x58))(DAT_101e94738,param_1);
  return;
}




void FUN_1004ef19c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004ef1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x60))(DAT_101e94738,param_1);
  return;
}




undefined8 FUN_1004ef1b4(void)

{
  undefined8 uVar1;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uVar1 = (**(code **)(*DAT_101e94738 + 0x60))(DAT_101e94738,&local_38);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return uVar1;
}




uint FUN_1004ef20c(void)

{
  uint uVar1;
  
  uVar1 = FUN_1004ef1b4();
  return uVar1 ^ 1;
}




bool FUN_1004ef224(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x68))(DAT_101e94738,param_1);
  return iVar1 != 0;
}




void FUN_1004ef254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001004ef270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x80))(DAT_101e94738,param_1,param_2,param_3);
  return;
}




bool FUN_1004ef274(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xa8))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xb0))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004ef2e0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xc0))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




void FUN_1004ef310(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004ef324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0xd0))(DAT_101e94738,param_1);
  return;
}




void FUN_1004ef328(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004ef340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0xd8))(DAT_101e94738,param_1,param_2);
  return;
}




bool FUN_1004ef344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 200))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004ef37c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xe0))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef3ac(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xe8))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef3dc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xf0))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef410(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xf8))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef444(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x100))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef478(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x108))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef4ac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x118))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef4e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x120))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef514(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x128))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef548(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x140))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef578(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x148))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef5a8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x150))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef5d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x168))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef60c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x170))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef63c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x178))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef66c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x158))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef69c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x180))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef6d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x188))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef704(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 400))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef738(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x198))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1a0))
                    (DAT_101e94738,param_1,param_2,param_3,param_4,param_5);
  return iVar1 == 1;
}




bool FUN_1004ef7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1a8))(DAT_101e94738,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_1004ef7e8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1b8))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef818(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1c0))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef848(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1c8))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef878(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x160))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1d8))
                    (DAT_101e94738,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1 == 1;
}




bool FUN_1004ef8ec(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1e0))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004ef91c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1e8))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef950(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1f0))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef984(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x1f8))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef9b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x200))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004ef9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x210))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x218))(DAT_101e94738,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_1004efa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x220))(DAT_101e94738,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_1004efa9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x228))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x230))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efb0c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x208))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004efb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x238))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x240))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x248))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efbe8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x250))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004efc18(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 600))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004efc48(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x260))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004efc78(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x268))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004efca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x270))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x278))(DAT_101e94738,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_1004efd1c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x280))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004efd4c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x288))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004efd80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x290))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004efdb4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x298))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004efde8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2a0))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004efe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2a8))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efe54(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2b0))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004efe84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2b8))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2c8))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004efef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2e0))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004eff2c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2e8))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004eff5c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x2f8))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004eff90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x300))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004effc4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x308))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004efff8(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = "";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  iVar2 = (**(code **)(*DAT_101e94738 + 0x318))(DAT_101e94738,param_1,param_2,pcVar1);
  return iVar2 == 1;
}




void thunk_FUN_1004e6bc8(void)

{
  FUN_1004e6bc8();
  return;
}




void thunk_FUN_1004e6bc8(void)

{
  FUN_1004e6bc8();
  return;
}




void thunk_FUN_1004e6bc8(void)

{
  FUN_1004e6bc8();
  return;
}




void thunk_FUN_1004e6bc8(void)

{
  FUN_1004e6bc8();
  return;
}




void thunk_FUN_1004e6bc8(void)

{
  FUN_1004e6bc8();
  return;
}




void thunk_FUN_1004e6bc8(void)

{
  FUN_1004e6bc8();
  return;
}




void thunk_FUN_1004e6bc8(void)

{
  FUN_1004e6bc8();
  return;
}




void thunk_FUN_1004e4e84(void)

{
  thunk_FUN_1004e4e84();
  return;
}

