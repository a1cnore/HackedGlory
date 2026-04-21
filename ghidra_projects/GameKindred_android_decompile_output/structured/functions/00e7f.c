// functions/00e7f — 38 functions
#include "libGameKindred.h"




void thunk_FUN_00e7f85c(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x28);
  FUN_00e77acc(pvVar1,1);
  DAT_032106e0 = pvVar1;
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
  FUN_00e7edd4();
  DAT_032106e8 = puVar2;
  return;
}




void thunk_FUN_00e7f8d4(void)

{
  pthread_mutex_t *ppVar1;
  void *pvVar2;
  
  pvVar2 = DAT_032106e8;
  if (DAT_032106e8 != (void *)0x0) {
    FUN_00e7ee14(DAT_032106e8);
    operator_delete(pvVar2);
  }
  ppVar1 = DAT_032106e0;
  if (DAT_032106e0 != (pthread_mutex_t *)0x0) {
    pthread_mutex_destroy(DAT_032106e0);
    operator_delete(ppVar1);
  }
  DAT_032106e8 = (void *)0x0;
  DAT_032106e0 = (pthread_mutex_t *)0x0;
  return;
}




void thunk_FUN_00e7f934(void)

{
  FUN_00e7f37c(DAT_032106e8);
  return;
}




void thunk_FUN_00e7f940(void)

{
  FUN_00e7eeec(DAT_032106e8);
  return;
}




int FUN_00e7f038(long param_1,long param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = DAT_032106e0;
  pthread_mutex_lock(DAT_032106e0);
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar1 + 1;
  *(int *)(param_2 + 0x18) = iVar1;
  FUN_00933c34(param_1 + 0x58,(int *)(param_2 + 0x18));
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




ulong FUN_00e7f090(undefined8 param_1,undefined4 param_2,uint param_3)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  ulong uVar2;
  
  __mutex = DAT_032106e0;
  if ((param_3 & 1) != 0) {
    pthread_mutex_lock(DAT_032106e0);
    FUN_00e7f0f4(param_1,param_2);
    uVar1 = pthread_mutex_unlock(__mutex);
    return (ulong)uVar1;
  }
  uVar2 = FUN_00e7f0f4(param_1,param_2);
  return uVar2;
}




void FUN_00e7f0f4(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if (uVar1 != 0) {
      uVar3 = 0;
      lVar2 = *(long *)(param_1 + 0x60);
      do {
        if (*(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar3 * 4) == param_2) {
          FUN_009342e4((uint *)(param_1 + 0x58),lVar2,lVar2 + 4);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 4;
      } while (uVar3 < uVar1);
    }
  }
  return;
}




undefined4 FUN_00e7f140(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  size_t __n;
  size_t sVar1;
  byte *__s1;
  undefined4 uVar2;
  byte bVar3;
  pthread_mutex_t *__mutex;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar8 = *(byte **)(param_2 + 0x10);
    __s1 = pbVar8;
    if ((bVar3 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) != 0) {
      if (__n == 0) {
        return 0;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return 0;
      }
      goto LAB_00e7f208;
    }
    if (__n == 0) {
      return 0;
    }
    lVar7 = -(ulong)(bVar3 >> 1);
    pbVar8 = param_2;
    while (pbVar8 = pbVar8 + 1, *pbVar8 == *__s2) {
      lVar7 = lVar7 + 1;
      __s2 = __s2 + 1;
      if (lVar7 == 0) {
        return 0;
      }
    }
  }
  if ((bVar3 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  else {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
LAB_00e7f208:
  iVar4 = FUN_00e6a474(pbVar8);
  if (iVar4 == 0) {
    return 0;
  }
  FUN_00e7f038(param_1,param_2);
  __mutex = DAT_032106e0;
  pthread_mutex_lock(DAT_032106e0);
  puVar5 = (undefined8 *)FUN_00e7f2b8(param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_2 + 0x18);
    FUN_008fce60(puVar5 + 1,param_2);
    puVar5[7] = param_3;
    puVar5[8] = param_4;
    *puVar5 = 0;
    plVar6 = (long *)(param_1 + 0x18);
    lVar7 = *plVar6;
    puVar5[9] = 0;
    puVar5[10] = lVar7;
    if (lVar7 == 0) {
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      plVar6 = (long *)(param_1 + 0x20);
    }
    else {
      *(undefined8 **)(lVar7 + 0x48) = puVar5;
    }
    *plVar6 = (long)puVar5;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}




void * FUN_00e7f2b8(undefined8 *param_1)

{
  long lVar1;
  void *__s;
  
  __s = (void *)param_1[1];
  if (__s == (void *)0x0) {
    __s = operator_new(0x68);
    memset(__s,0,0x68);
  }
  else {
    if ((void *)*param_1 == __s) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lVar1 = *(long *)((long)__s + 0x48);
      param_1[1] = lVar1;
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
    if (*(long *)((long)__s + 0x60) != 0) {
      *(undefined4 *)((long)__s + 0x58) = 0;
    }
    *(undefined4 *)((long)__s + 0x20) = 0;
    FUN_008fce60((long)__s + 8,&DAT_0320ffa8);
  }
  return __s;
}




void FUN_00e7f344(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  *param_2 = param_3;
  plVar1 = (long *)(param_1 + 0x18);
  lVar2 = *plVar1;
  param_2[9] = 0;
  param_2[10] = lVar2;
  if (lVar2 == 0) {
    *(undefined8 **)(param_1 + 0x18) = param_2;
    plVar1 = (long *)(param_1 + 0x20);
  }
  else {
    *(undefined8 **)(lVar2 + 0x48) = param_2;
  }
  *plVar1 = (long)param_2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}




void FUN_00e7f37c(long param_1)

{
  long lVar1;
  long *plVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_88;
  undefined1 auStack_7c [4];
  undefined8 local_78;
  undefined1 auStack_70 [16];
  int local_60;
  long local_58;
  
  __mutex = DAT_032106e0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar3 = pthread_mutex_lock(DAT_032106e0);
  lVar4 = FUN_00e6b5e4(iVar3);
  plVar7 = *(long **)(param_1 + 0x18);
  while (plVar2 = plVar7, plVar2 != (long *)0x0) {
    plVar7 = (long *)plVar2[10];
    if (*plVar2 <= lVar4) {
      FUN_00e7efd8((long *)(param_1 + 0x18),plVar2);
      FUN_00e7f560(param_1,plVar2);
    }
  }
  do {
    iVar3 = FUN_019befa4(*(undefined8 *)(param_1 + 0x48),auStack_7c);
  } while (iVar3 == -1);
  piVar5 = (int *)FUN_019c01d8(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
  if (piVar5 == (int *)0x0) {
LAB_00e7f528:
    iVar3 = pthread_mutex_unlock(__mutex);
    if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar3);
    }
    return;
  }
LAB_00e7f430:
  if (*piVar5 == 1) {
    lVar8 = *(long *)(piVar5 + 2);
    local_88 = 0;
    FUN_019bc74c(lVar8,0x200002,&local_88);
    FUN_019be4c8(*(undefined8 *)(param_1 + 0x48),lVar8);
    FUN_019bc688(lVar8);
    for (lVar4 = *(long *)(param_1 + 0x30); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x50)) {
      if (*(long *)(lVar4 + 0x28) == lVar8) {
        FUN_00e7efd8(param_1 + 0x30,lVar4);
        FUN_00e7fb3c(&local_78);
        local_78 = local_88;
        FUN_00e7f94c(auStack_70,lVar4 + 0x58);
        local_60 = *(int *)(lVar4 + 0x20);
        iVar3 = local_60;
        if (*(uint *)(param_1 + 0x58) == 0) goto LAB_00e7f4f8;
        uVar6 = 0;
        goto LAB_00e7f4cc;
      }
    }
  }
  goto LAB_00e7f518;
  while (uVar6 = uVar6 + 1, uVar6 < *(uint *)(param_1 + 0x58)) {
LAB_00e7f4cc:
    if (*(int *)(*(long *)(param_1 + 0x60) + uVar6 * 4) == local_60) {
      (**(code **)(lVar4 + 0x40))(*(undefined8 *)(lVar4 + 0x38),&local_78);
      iVar3 = *(int *)(lVar4 + 0x20);
      break;
    }
  }
LAB_00e7f4f8:
  FUN_00e7f0f4(param_1,iVar3);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  FUN_00e7f714(param_1,lVar4);
  FUN_00e7fb4c(&local_78);
LAB_00e7f518:
  piVar5 = (int *)FUN_019c01d8(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
  if (piVar5 == (int *)0x0) goto LAB_00e7f528;
  goto LAB_00e7f430;
}




void FUN_00e7f560(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_019bc3b0();
  if (lVar3 == 0) {
    FUN_00e7fb3c(auStack_58);
    if (*(uint *)(param_1 + 0x58) != 0) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x60) + uVar5 * 4) == *(int *)(param_2 + 0x20)) {
          (**(code **)(param_2 + 0x40))(*(undefined8 *)(param_2 + 0x38),auStack_58);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x58));
    }
    FUN_00e7f714(param_1,param_2);
    FUN_00e7fb4c(auStack_58);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x18);
    if ((*(byte *)(param_2 + 8) & 1) == 0) {
      lVar4 = param_2 + 9;
    }
    *(long *)(param_2 + 0x28) = lVar3;
    FUN_019bc404(lVar3,0x2712,lVar4);
    FUN_019bc404(lVar3,0x4e2b,FUN_00e7f78c);
    FUN_019bc404(lVar3,0x2711,param_2);
    FUN_019bc404(lVar3,0xd,10);
    FUN_019bc404(lVar3,0x2776,PTR_s_gzip_02bf2510);
    FUN_019bc404(lVar3,99,1);
    FUN_019bc1ac(lVar3);
    FUN_019be100(*(undefined8 *)(param_1 + 0x48),lVar3);
    *(undefined8 *)(param_2 + 0x50) = 0;
    lVar3 = *(long *)(param_1 + 0x38);
    *(long *)(param_2 + 0x48) = lVar3;
    plVar1 = (long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x30) != 0) {
      plVar1 = (long *)(lVar3 + 0x50);
    }
    *plVar1 = param_2;
    *(long *)(param_1 + 0x38) = param_2;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00e7f6dc(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x58) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x60) + uVar1 * 4) == param_2) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x58));
  }
  return 0;
}




void FUN_00e7f714(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  *param_2 = 0;
  FUN_008fce60(param_2 + 1,&DAT_0320ffa8);
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if (param_2[0xc] != 0) {
    *(undefined4 *)(param_2 + 0xb) = 0;
  }
  param_2[10] = 0;
  lVar2 = param_1[1];
  param_2[9] = lVar2;
  plVar1 = param_1;
  if (*param_1 != 0) {
    plVar1 = (long *)(lVar2 + 0x50);
  }
  *plVar1 = (long)param_2;
  param_1[1] = (long)param_2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




uint FUN_00e7f78c(void *param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 * param_2;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_4 + 0x58);
    FUN_0091aea8((uint *)(param_4 + 0x58),uVar1 + uVar2,0);
    memmove((void *)(*(long *)(param_4 + 0x60) + (ulong)uVar1),param_1,(ulong)uVar2);
  }
  return uVar2;
}




int FUN_00e7f7f4(undefined4 param_1)

{
  pthread_mutex_t *__mutex;
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = DAT_032106e8;
  __mutex = DAT_032106e0;
  pthread_mutex_lock(DAT_032106e0);
  FUN_00e7f0f4(uVar1,param_1);
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




void FUN_00e7f840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00e7f140(DAT_032106e8,param_1,param_2,param_3);
  return;
}




void FUN_00e7f85c(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x28);
  FUN_00e77acc(pvVar1,1);
  DAT_032106e0 = pvVar1;
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
  FUN_00e7edd4();
  DAT_032106e8 = puVar2;
  return;
}




void FUN_00e7f8d4(void)

{
  pthread_mutex_t *ppVar1;
  void *pvVar2;
  
  pvVar2 = DAT_032106e8;
  if (DAT_032106e8 != (void *)0x0) {
    FUN_00e7ee14(DAT_032106e8);
    operator_delete(pvVar2);
  }
  ppVar1 = DAT_032106e0;
  if (DAT_032106e0 != (pthread_mutex_t *)0x0) {
    pthread_mutex_destroy(DAT_032106e0);
    operator_delete(ppVar1);
  }
  DAT_032106e8 = (void *)0x0;
  DAT_032106e0 = (pthread_mutex_t *)0x0;
  return;
}




void FUN_00e7f934(void)

{
  FUN_00e7f37c(DAT_032106e8);
  return;
}




void FUN_00e7f940(void)

{
  FUN_00e7eeec(DAT_032106e8);
  return;
}




void FUN_00e7f94c(uint *param_1,uint *param_2)

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
    FUN_0091af28(param_1,*param_2);
    uVar2 = (ulong)*param_2;
    uVar1 = 0;
    if (*param_2 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 2);
      puVar4 = *(undefined1 **)(param_1 + 2);
      do {
        uVar2 = uVar2 - 1;
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00e7f9b8(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00e7f9cc();
  return;
}




void FUN_00e7f9cc(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00e7f7f4();
  }
  FUN_008fce60(param_1,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x20) = 1000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x271000000000;
  return;
}




void FUN_00e7fa1c(byte *param_1)

{
  FUN_00e7f7f4(*(undefined4 *)(param_1 + 0x18));
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_00e7fa58(undefined8 param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    FUN_008fcdb8(local_50,&DAT_0320ffa8);
  }
  else {
    FUN_008fa54c(local_50);
  }
  FUN_008fce60(param_1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7fae8(undefined8 param_1,undefined8 param_2)

{
  FUN_008fcdb8(param_1,param_2);
  return;
}




undefined4 FUN_00e7faf4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




void FUN_00e7fafc(long param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x1c) = param_2 * 1000;
  *(int *)(param_1 + 0x20) = param_3 * 1000;
  return;
}




bool FUN_00e7fb10(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = FUN_00e7f840();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




void FUN_00e7fb3c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  return;
}




void FUN_00e7fb4c(long param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_00e7fb78(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    FUN_0090de84(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  return;
}




long FUN_00e7fba4(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00e7fbac(undefined8 *param_1)

{
  return *param_1;
}




undefined4 FUN_00e7fbb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




void FUN_00e7fbbc(undefined8 param_1)

{
  FUN_00947050(param_1,1);
  return;
}




void FUN_00e7fbc4(undefined8 *param_1,long *param_2)

{
  uint3 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ushort *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  char ***local_d0 [2];
  void *local_c0;
  char **local_b8;
  ulong local_b0;
  void *local_a8;
  undefined1 auStack_a0 [8];
  char *local_98;
  ulong local_90;
  void *local_88;
  undefined1 local_80;
  int local_7c;
  int local_78;
  int local_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar10 = param_1 + 0xc;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = param_1 + 7;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  memset(puVar10,0,0xa4);
  *(undefined2 *)(param_1 + 0x28) = 0xffff;
  puVar1 = (uint3 *)(param_1 + 0x28);
  uVar13 = *(byte *)((long)param_1 + 0x142) & 0xfff0;
  *(char *)((long)param_1 + 0x142) = (char)uVar13;
  if ((int)param_2[0xb] == 0) {
    lVar4 = FUN_008fd190(param_2,"httpStatus");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_00e7fcd0:
      iVar3 = 200;
    }
    else {
      local_98 = "httpStatus";
      local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
      local_90 = 10;
      lVar4 = FUN_008feca4(param_2,&local_98);
      if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_00e7fcd0;
      local_98 = "httpStatus";
      local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
      local_90 = 10;
      piVar5 = (int *)FUN_008feca4(param_2,&local_98);
      iVar3 = *piVar5;
    }
    *(byte *)((long)param_1 + 0x142) = *(byte *)((long)param_1 + 0x142) & 0xfe | iVar3 == 0x130;
    if (iVar3 == 0x130) goto LAB_00e807d8;
    local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
    local_98 = "tag";
    local_90 = 3;
    plVar6 = (long *)FUN_008feca4(param_2,&local_98);
    if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
      plVar6 = (long *)*plVar6;
    }
    FUN_008fa54c(&local_98,plVar6);
    FUN_008fce60(param_1 + 3,&local_98);
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
    local_98 = "time";
    local_90 = 4;
    plVar6 = (long *)FUN_008feca4(param_2,&local_98);
    if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
      plVar6 = (long *)*plVar6;
    }
    FUN_008fa54c(&local_98,plVar6);
    FUN_008fce60(param_1,&local_98);
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    local_88._0_4_ = 0x100005;
    local_98 = "text";
    local_90 = 4;
    plVar6 = (long *)FUN_008feca4(param_2,&local_98);
    local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
    local_98 = "code";
    local_90 = 4;
    puVar7 = (ushort *)FUN_008feca4(plVar6,&local_98);
    *(ushort *)puVar1 = *puVar7;
    *(undefined4 *)(param_1 + 0x27) = 4;
    FUN_00948a38(puVar10,0);
    lVar4 = FUN_008fd190(plVar6,"quintPartyStateUpdate");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
      lVar4 = FUN_008fd190(plVar6,"quintPartyJoinRequest");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
        lVar4 = FUN_008fd190(plVar6,"quintPartyPlayerLeft");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          lVar4 = FUN_008fd190(plVar6,"quintPartyMemberKick");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
            lVar4 = FUN_008fd190(plVar6,"type");
            if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
              local_98 = "type";
              local_88._0_4_ = 0x100005;
              local_90 = 4;
              uVar8 = FUN_008feca4(plVar6,&local_98);
              local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
              local_98 = "stateUpdate";
              local_90 = 0xb;
              uVar9 = FUN_00e80c5c(uVar8,&local_98);
              if (((uVar9 & 1) != 0) &&
                 (lVar4 = FUN_008fd190(plVar6,"states"),
                 *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
                local_98 = "states";
                local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
                local_90 = 6;
                lVar4 = FUN_008feca4(plVar6,&local_98);
                if (*(int *)(lVar4 + 0x10) == 3) {
                  local_98 = "states";
                  local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
                  local_90 = 6;
                  plVar16 = (long *)FUN_008feca4(plVar6,&local_98);
                  uVar9 = (ulong)*(uint *)(plVar16 + 1);
                  if (*(uint *)(plVar16 + 1) != 0) {
                    lVar4 = *plVar16;
                    puVar10 = (undefined8 *)(lVar4 + 0x18);
                    do {
                      if ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0) {
                        puVar12 = puVar10;
                        if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                          puVar12 = (undefined8 *)*puVar10;
                        }
                        FUN_008fa54c(&local_98,puVar12);
                        if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
                          puVar12 = (undefined8 *)puVar10[-3];
                        }
                        else {
                          puVar12 = puVar10 + -3;
                        }
                        FUN_008fa54c(&local_b8,puVar12);
                        local_d0[0] = &local_b8;
                        lVar4 = FUN_00941474(param_1 + 6,&local_b8,&DAT_01bef519,local_d0,auStack_a0
                                            );
                        FUN_008fce60(lVar4 + 0x38,&local_98);
                        if (((ulong)local_b8 & 1) != 0) {
                          operator_delete(local_a8);
                        }
                        if (((ulong)local_98 & 1) != 0) {
                          operator_delete(local_88);
                        }
                        lVar4 = *plVar16;
                        uVar9 = (ulong)*(uint *)(plVar16 + 1);
                      }
                      puVar12 = puVar10 + 3;
                      puVar10 = puVar10 + 6;
                    } while (puVar12 != (undefined8 *)(lVar4 + uVar9 * 0x30));
                  }
                  if (*(int *)(param_1 + 8) != 0) {
                    *(byte *)((long)param_1 + 0x142) = *(byte *)((long)param_1 + 0x142) | 8;
                  }
                }
              }
              local_98 = "stateUpdate";
              local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
              local_90 = 0xb;
              uVar9 = FUN_00e80c5c(uVar8,&local_98);
              if (((uVar9 & 1) != 0) &&
                 (lVar4 = FUN_008fd190(plVar6,"counts"),
                 *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
                local_98 = "counts";
                local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
                local_90 = 6;
                lVar4 = FUN_008feca4(plVar6,&local_98);
                if (*(int *)(lVar4 + 0x10) == 3) {
                  local_98 = "counts";
                  local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
                  local_90 = 6;
                  puVar10 = (undefined8 *)FUN_008feca4(plVar6,&local_98);
                  uVar13 = *(uint *)(puVar10 + 1);
                  if (uVar13 != 0) {
                    puVar15 = (undefined8 *)*puVar10;
                    puVar12 = puVar15;
                    do {
                      if ((*(byte *)((long)puVar12 + 0x29) >> 2 & 1) != 0) {
                        uVar14 = *(undefined4 *)(puVar12 + 3);
                        puVar15 = puVar12;
                        if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                          puVar15 = (undefined8 *)*puVar12;
                        }
                        FUN_008fa54c(&local_98,puVar15);
                        local_b8 = &local_98;
                        lVar4 = FUN_009edb34(param_1 + 9,&local_98,&DAT_01bef519,&local_b8,local_d0)
                        ;
                        *(undefined4 *)(lVar4 + 0x38) = uVar14;
                        if (((ulong)local_98 & 1) != 0) {
                          operator_delete(local_88);
                        }
                        puVar15 = (undefined8 *)*puVar10;
                        uVar13 = *(uint *)(puVar10 + 1);
                      }
                      puVar12 = puVar12 + 6;
                    } while (puVar12 != puVar15 + (ulong)uVar13 * 6);
                  }
                }
              }
            }
            goto LAB_00e80780;
          }
          if (*(uint *)(plVar6 + 1) != 0) {
            puVar10 = (undefined8 *)(*plVar6 + 0x18);
            do {
              if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
                puVar12 = (undefined8 *)puVar10[-3];
              }
              else {
                puVar12 = puVar10 + -3;
              }
              FUN_008fa54c(&local_98,puVar12);
              uVar9 = (ulong)local_98 >> 1 & 0x7f;
              if (((ulong)local_98 & 1) != 0) {
                uVar9 = local_90;
              }
              if (((uVar9 == 0x14) &&
                  (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"quintPartyMemberKick",0x14),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar12 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar10;
                }
                FUN_008fa54c(&local_b8,puVar12);
                puVar12 = param_1 + 0x21;
LAB_00e80728:
                FUN_008fce60(puVar12,&local_b8);
                if (((ulong)local_b8 & 1) != 0) {
                  operator_delete(local_a8);
                }
              }
              else {
                uVar9 = (ulong)local_98 >> 1 & 0x7f;
                if (((ulong)local_98 & 1) != 0) {
                  uVar9 = local_90;
                }
                if (((uVar9 == 9) &&
                    (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"quintCode",9), iVar3 == 0)
                    ) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                  puVar12 = puVar10;
                  if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar10;
                  }
                  FUN_008fa54c(&local_b8,puVar12);
                  puVar12 = param_1 + 0x24;
                  goto LAB_00e80728;
                }
              }
              if (((ulong)local_98 & 1) != 0) {
                operator_delete(local_88);
              }
              puVar12 = puVar10 + 3;
              puVar10 = puVar10 + 6;
            } while (puVar12 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
          }
          uVar14 = 3;
        }
        else {
          if (*(uint *)(plVar6 + 1) != 0) {
            puVar10 = (undefined8 *)(*plVar6 + 0x18);
            do {
              if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
                puVar12 = (undefined8 *)puVar10[-3];
              }
              else {
                puVar12 = puVar10 + -3;
              }
              FUN_008fa54c(&local_98,puVar12);
              uVar9 = (ulong)local_98 >> 1 & 0x7f;
              if (((ulong)local_98 & 1) != 0) {
                uVar9 = local_90;
              }
              if (((uVar9 == 0x14) &&
                  (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"quintPartyPlayerLeft",0x14),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar12 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar10;
                }
                FUN_008fa54c(&local_b8,puVar12);
                puVar12 = param_1 + 0x21;
LAB_00e805b8:
                FUN_008fce60(puVar12,&local_b8);
                if (((ulong)local_b8 & 1) != 0) {
                  operator_delete(local_a8);
                }
              }
              else {
                uVar9 = (ulong)local_98 >> 1 & 0x7f;
                if (((ulong)local_98 & 1) != 0) {
                  uVar9 = local_90;
                }
                if (((uVar9 == 9) &&
                    (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"quintCode",9), iVar3 == 0)
                    ) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                  puVar12 = puVar10;
                  if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar10;
                  }
                  FUN_008fa54c(&local_b8,puVar12);
                  puVar12 = param_1 + 0x24;
                  goto LAB_00e805b8;
                }
              }
              if (((ulong)local_98 & 1) != 0) {
                operator_delete(local_88);
              }
              puVar12 = puVar10 + 3;
              puVar10 = puVar10 + 6;
            } while (puVar12 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
          }
          uVar14 = 1;
        }
        *(byte *)((long)param_1 + 0x142) = *(byte *)((long)param_1 + 0x142) | 8;
        *(undefined4 *)(param_1 + 0x27) = uVar14;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar12 = (undefined8 *)puVar10[-3];
            }
            else {
              puVar12 = puVar10 + -3;
            }
            FUN_008fa54c(&local_98,puVar12);
            uVar9 = (ulong)local_98 >> 1 & 0x7f;
            if (((ulong)local_98 & 1) != 0) {
              uVar9 = local_90;
            }
            if (((uVar9 == 9) &&
                (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"quintCode",9), iVar3 == 0)) &&
               ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar12 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar12 = (undefined8 *)*puVar10;
              }
              FUN_008fa54c(&local_b8,puVar12);
              puVar12 = param_1 + 0x14;
LAB_00e8043c:
              FUN_008fce60(puVar12,&local_b8);
              if (((ulong)local_b8 & 1) != 0) {
                operator_delete(local_a8);
              }
            }
            else {
              uVar9 = (ulong)local_98 >> 1 & 0x7f;
              if (((ulong)local_98 & 1) != 0) {
                uVar9 = local_90;
              }
              if (((uVar9 == 0x15) &&
                  (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"quintPartyJoinRequest",0x15)
                  , iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar12 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar10;
                }
                FUN_008fa54c(&local_b8,puVar12);
                puVar12 = param_1 + 0xe;
                goto LAB_00e8043c;
              }
              uVar9 = (ulong)local_98 >> 1 & 0x7f;
              if (((ulong)local_98 & 1) != 0) {
                uVar9 = local_90;
              }
              if (((uVar9 == 6) &&
                  (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"handle",6), iVar3 == 0)) &&
                 ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar12 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar10;
                }
                FUN_008fa54c(&local_b8,puVar12);
                puVar12 = param_1 + 0x11;
                goto LAB_00e8043c;
              }
              uVar9 = (ulong)local_98 >> 1 & 0x7f;
              if (((ulong)local_98 & 1) != 0) {
                uVar9 = local_90;
              }
              if (((uVar9 != 3) ||
                  (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,&DAT_01bef494,3), iVar3 != 0)
                  ) || ((*(byte *)((long)puVar10 + 0x11) >> 2 & 1) == 0)) {
                uVar9 = (ulong)local_98 >> 1 & 0x7f;
                if (((ulong)local_98 & 1) != 0) {
                  uVar9 = local_90;
                }
                if (((uVar9 == 0x10) &&
                    (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"equippedPingPack",0x10),
                    iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                  puVar12 = puVar10;
                  if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar10;
                  }
                  FUN_008fa54c(&local_b8,puVar12);
                  puVar12 = param_1 + 0x17;
                }
                else {
                  uVar9 = (ulong)local_98 >> 1 & 0x7f;
                  if (((ulong)local_98 & 1) != 0) {
                    uVar9 = local_90;
                  }
                  if (((uVar9 == 0xb) &&
                      (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"equippedHat",0xb),
                      iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                    puVar12 = puVar10;
                    if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                      puVar12 = (undefined8 *)*puVar10;
                    }
                    FUN_008fa54c(&local_b8,puVar12);
                    puVar12 = param_1 + 0x1a;
                  }
                  else {
                    uVar9 = (ulong)local_98 >> 1 & 0x7f;
                    if (((ulong)local_98 & 1) != 0) {
                      uVar9 = local_90;
                    }
                    if (((uVar9 != 0xd) ||
                        (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"equippedEmoji",0xd),
                        iVar3 != 0)) || ((*(uint *)(puVar10 + 2) >> 0x14 & 1) == 0))
                    goto LAB_00e80450;
                    puVar12 = puVar10;
                    if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                      puVar12 = (undefined8 *)*puVar10;
                    }
                    FUN_008fa54c(&local_b8,puVar12);
                    puVar12 = param_1 + 0x1d;
                  }
                }
                goto LAB_00e8043c;
              }
              *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)puVar10;
            }
LAB_00e80450:
            if (((ulong)local_98 & 1) != 0) {
              operator_delete(local_88);
            }
            puVar12 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar12 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        *(byte *)((long)param_1 + 0x142) = *(byte *)((long)param_1 + 0x142) | 8;
        *(undefined4 *)(param_1 + 0x27) = 0;
      }
    }
    else {
      local_98 = "quintPartyStateUpdate";
      local_88 = (void *)CONCAT44(local_88._4_4_,0x100005);
      local_90 = 0x15;
      plVar6 = (long *)FUN_008feca4(plVar6,&local_98);
      if ((int)plVar6[1] != 0) {
        plVar16 = (long *)*plVar6;
        do {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = (char *)0x0;
          if ((int)plVar16[1] != 0) {
            piVar5 = (int *)(*plVar16 + 0x18);
            do {
              if ((*(byte *)((long)piVar5 + -6) >> 6 & 1) == 0) {
                piVar11 = *(int **)(piVar5 + -6);
              }
              else {
                piVar11 = piVar5 + -6;
              }
              FUN_008fa54c(&local_b8,piVar11);
              uVar9 = (ulong)local_b8 >> 1 & 0x7f;
              if (((ulong)local_b8 & 1) != 0) {
                uVar9 = local_b0;
              }
              if (((uVar9 == 6) &&
                  (iVar3 = FUN_0090d610(&local_b8,0,0xffffffffffffffff,"handle",6), iVar3 == 0)) &&
                 (((uint)piVar5[4] >> 0x14 & 1) != 0)) {
                piVar11 = piVar5;
                if (((uint)piVar5[4] >> 0x16 & 1) == 0) {
                  piVar11 = *(int **)piVar5;
                }
                FUN_008fa54c(local_d0,piVar11);
                FUN_008fce60(&local_98,local_d0);
                if (((ulong)local_d0[0] & 1) != 0) {
                  operator_delete(local_c0);
                }
              }
              else {
                uVar9 = (ulong)local_b8 >> 1 & 0x7f;
                if (((ulong)local_b8 & 1) != 0) {
                  uVar9 = local_b0;
                }
                if (((uVar9 == 9) &&
                    (iVar3 = FUN_0090d610(&local_b8,0,0xffffffffffffffff,"isCaptain",9), iVar3 == 0)
                    ) && ((*(byte *)((long)piVar5 + 0x11) >> 2 & 1) != 0)) {
                  local_80 = *piVar5 != 0;
                }
                else {
                  uVar9 = (ulong)local_b8 >> 1 & 0x7f;
                  if (((ulong)local_b8 & 1) != 0) {
                    uVar9 = local_b0;
                  }
                  if (((uVar9 == 4) &&
                      (iVar3 = FUN_0090d610(&local_b8,0,0xffffffffffffffff,"slot",4), iVar3 == 0))
                     && ((*(byte *)((long)piVar5 + 0x11) >> 2 & 1) != 0)) {
                    local_7c = *piVar5;
                  }
                  else {
                    uVar9 = (ulong)local_b8 >> 1 & 0x7f;
                    if (((ulong)local_b8 & 1) != 0) {
                      uVar9 = local_b0;
                    }
                    if (((uVar9 == 8) &&
                        (iVar3 = FUN_0090d610(&local_b8,0,0xffffffffffffffff,"userTeam",8),
                        iVar3 == 0)) && ((*(byte *)((long)piVar5 + 0x11) >> 2 & 1) != 0)) {
                      local_78 = *piVar5;
                    }
                    else {
                      uVar9 = (ulong)local_b8 >> 1 & 0x7f;
                      if (((ulong)local_b8 & 1) != 0) {
                        uVar9 = local_b0;
                      }
                      if (((uVar9 == 6) &&
                          (iVar3 = FUN_0090d610(&local_b8,0,0xffffffffffffffff,"status",6),
                          iVar3 == 0)) && ((*(byte *)((long)piVar5 + 0x11) >> 2 & 1) != 0)) {
                        local_74 = *piVar5;
                      }
                    }
                  }
                }
              }
              if (((ulong)local_b8 & 1) != 0) {
                operator_delete(local_a8);
              }
              piVar11 = piVar5 + 6;
              piVar5 = piVar5 + 0xc;
            } while (piVar11 != (int *)(*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 0x30));
          }
          FUN_00e80ae4(puVar10,&local_98);
          *(byte *)((long)param_1 + 0x142) = *(byte *)((long)param_1 + 0x142) | 8;
          *(undefined4 *)(param_1 + 0x27) = 2;
          if (((ulong)local_98 & 1) != 0) {
            operator_delete(local_88);
          }
          plVar16 = plVar16 + 3;
        } while (plVar16 != (long *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x18));
      }
    }
LAB_00e80780:
    lVar4 = FUN_008fd190(param_2,"friendsListUpdate");
    uVar13 = *puVar1 & 0xfff80000 |
             (uint)(ushort)*puVar1 | (*(byte *)((long)param_1 + 0x142) & 3) << 0x10 |
             (uint)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) << 0x12;
  }
  else {
    uVar13 = uVar13 << 0x10 | 0xfffa;
  }
  *(ushort *)puVar1 = (ushort)uVar13;
  *(char *)((long)param_1 + 0x142) = (char)(uVar13 >> 0x10);
LAB_00e807d8:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

