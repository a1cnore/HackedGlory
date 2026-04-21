// functions/01984 — 30 functions
#include "libGameKindred.h"




int FUN_0198433c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3c));
  uVar2 = *(undefined8 *)(param_1 + 100);
  param_2[1] = *(undefined8 *)(param_1 + 0x6c);
  *param_2 = uVar2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3c));
  return iVar1;
}




void FUN_0198437c(undefined8 *param_1)

{
  FUN_01980f34();
  *param_1 = &PTR_FUN_02baec70;
  DAT_02c08f30 = FUN_019843c8;
  DAT_03214448 = param_1;
  return;
}




void FUN_019843c8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  if (DAT_03214448 != 0) {
    FUN_01984460(DAT_03214448,param_1,param_2,param_3 & 1);
    return;
  }
  return;
}




void FUN_019843f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec70;
  DAT_02c08f30 = 0;
  DAT_03214448 = 0;
  FUN_01981004();
  return;
}




void FUN_01984418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec70;
  DAT_02c08f30 = 0;
  DAT_03214448 = 0;
  FUN_01981004();
  operator_delete(param_1);
  return;
}




int FUN_01984460(float param_1,float param_2,float param_3,long param_4,int param_5,uint param_6,
                uint param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_4 + 0x80c));
  param_1 = param_1 * param_3;
  param_2 = param_2 * param_3;
  uVar5 = 0;
  if (param_6 == 0) {
    puVar4 = (uint *)(param_4 + 0x28);
    do {
      if ((*(long *)(puVar4 + 6) == 0) && (((byte)*puVar4 >> 2 & 1) == 0)) {
        puVar4[1] = (uint)param_1;
        puVar4[2] = (uint)param_2;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = (param_7 & 1) << 1 | 9;
        *(long *)(puVar4 + 6) = (long)(param_5 + 1);
        break;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x10;
    } while (uVar5 < 0x20);
  }
  else {
    puVar4 = (uint *)(param_4 + 0x28);
    do {
      if ((*(long *)(puVar4 + 6) == (long)(param_5 + 1)) && (((byte)*puVar4 >> 2 & 1) == 0)) {
        if ((param_6 | 1) == 3) {
          uVar2 = *puVar4;
          uVar1 = uVar2 | 0xfffffff8;
          if ((uVar2 & 0xfffffff8) != 8) {
            uVar1 = uVar2 & 0xfffffffa;
          }
          *puVar4 = uVar1 | 4;
        }
        fVar6 = (float)puVar4[1];
        fVar7 = (float)puVar4[2];
        puVar4[1] = (uint)param_1;
        puVar4[2] = (uint)param_2;
        puVar4[3] = (uint)(param_1 - fVar6);
        puVar4[4] = (uint)(param_2 - fVar7);
        break;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x10;
    } while (uVar5 < 0x20);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x80c));
  return iVar3;
}




void FUN_0198459c(undefined8 *param_1)

{
  FUN_01980e28();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_02baec90;
  FUN_00e77acc(param_1 + 5,0);
  DAT_02c08f70 = FUN_01984610;
  DAT_02c08f38 = FUN_01984624;
  DAT_03214450 = param_1;
  return;
}




void FUN_01984610(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = DAT_03214450;
  if (DAT_03214450 != 0) {
    *(undefined4 *)(DAT_03214450 + 0x68) = param_1;
    *(undefined4 *)(lVar1 + 0x6c) = param_2;
  }
  return;
}




void FUN_01984624(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  if (DAT_03214450 != 0) {
    FUN_019846f8(DAT_03214450,param_2,param_2,param_3 & 1,param_4 & 1,param_5 & 1,param_6 & 1);
    return;
  }
  return;
}




void FUN_01984658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec90;
  DAT_02c08f70 = 0;
  DAT_03214450 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
  FUN_01980e54(param_1);
  return;
}




void FUN_019846a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec90;
  DAT_02c08f70 = 0;
  DAT_03214450 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
  FUN_01980e54(param_1);
  operator_delete(param_1);
  return;
}




void FUN_019846f0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x68) = param_1;
  *(undefined4 *)(param_3 + 0x6c) = param_2;
  return;
}




int FUN_019846f8(float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
                int param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_4 + 0x28));
  if (param_6 == 2) {
    if ((param_8 & 1) == 0) {
      FUN_01980df8(param_4 + 0x50,0);
      FUN_01980df8(param_4 + 0x5c,0);
    }
    if ((param_9 & 1) == 0) {
      FUN_01980df8(param_4 + 0x50,1);
      FUN_01980df8(param_4 + 0x5c,1);
    }
    if ((param_10 & 1) == 0) {
      FUN_01980df8(param_4 + 0x50,2);
      FUN_01980df8(param_4 + 0x5c,2);
    }
  }
  else if (param_6 == 0) {
    if ((param_8 & 1) != 0) {
      if ((param_7 & 1) != 0) {
        FUN_01980dd8(param_4 + 0x5c,0);
      }
      FUN_01980dd8(param_4 + 0x50,0);
    }
    if ((param_9 & 1) != 0) {
      if ((param_7 & 1) != 0) {
        FUN_01980dd8(param_4 + 0x5c,1);
      }
      FUN_01980dd8(param_4 + 0x50,1);
    }
    if ((param_10 & 1) != 0) {
      if ((param_7 & 1) != 0) {
        FUN_01980dd8(param_4 + 0x5c,2);
      }
      FUN_01980dd8(param_4 + 0x50,2);
    }
  }
  *(float *)(param_4 + 0x60) = param_1 * param_3;
  *(float *)(param_4 + 100) = param_2 * param_3;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x28));
  return iVar1;
}




int FUN_01984840(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  param_2[1] = *(undefined8 *)(param_1 + 0x58);
  *param_2 = uVar2;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar1;
}




void FUN_01984884(void)

{
  return;
}




int FUN_01984978(void)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (pthread_mutex_t *)(DAT_03214470 + 0x18);
  pthread_mutex_lock(__mutex);
  *(byte *)(DAT_03214470 + 0x14) = *(byte *)(DAT_03214470 + 0x14) | 1;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_019849b8(undefined8 param_1,undefined8 param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(DAT_03214470 + 0x18);
  pthread_mutex_lock(__mutex);
  lVar1 = DAT_03214470;
  *(byte *)(DAT_03214470 + 0x14) = *(byte *)(DAT_03214470 + 0x14) | 4;
  FUN_00910394(lVar1,param_2);
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




int FUN_01984a0c(undefined8 param_1,undefined8 param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(DAT_03214470 + 0x18);
  pthread_mutex_lock(__mutex);
  lVar1 = DAT_03214470;
  *(byte *)(DAT_03214470 + 0x14) = *(byte *)(DAT_03214470 + 0x14) | 2;
  FUN_00910394(lVar1,param_2);
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




int FUN_01984a74(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  int iVar3;
  
  __mutex = (pthread_mutex_t *)(DAT_03214470 + 0x18);
  pthread_mutex_lock(__mutex);
  lVar2 = DAT_03214470;
  pbVar1 = (byte *)(DAT_03214470 + 0x14);
  *(int *)(DAT_03214470 + 0x10) = (int)param_1;
  *(byte *)(lVar2 + 0x14) = *pbVar1 | 8;
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 8) + 0x40))(param_1);
  }
  iVar3 = pthread_mutex_unlock(__mutex);
  return iVar3;
}




void FUN_01984ae8(undefined8 *param_1)

{
  FUN_00e734e4(param_1,"TextField","open","(Ljava/lang/String;IIIIIZ)V");
  *param_1 = &PTR_FUN_02baecc8;
  return;
}




void FUN_01984b30(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e7368c();
  if (DAT_02be3008 != 1.0) {
    param_3 = (int)((1.0 / DAT_02be3008) * (float)param_3);
    param_4 = (int)((1.0 / DAT_02be3008) * (float)param_4);
  }
  FUN_00e73f80(auStack_78,uVar2,param_2);
  uVar3 = FUN_00e7410c(auStack_78);
  FUN_00e73934(param_1,uVar2,uVar3,param_3,param_4,param_5,param_6,param_7,param_8 & 1);
  FUN_00e740f0(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01984c38(undefined8 *param_1)

{
  FUN_00e734e4(param_1,"TextField","setPosition","(IIII)V");
  *param_1 = &PTR_FUN_02baece8;
  return;
}




void FUN_01984c80(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_02be3008 != 1.0) {
    param_2 = (int)((1.0 / DAT_02be3008) * (float)param_2);
    param_3 = (int)((1.0 / DAT_02be3008) * (float)param_3);
  }
  uVar1 = FUN_00e7368c(param_1);
  FUN_00e73934(param_1,uVar1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_01984d10(undefined8 *param_1)

{
  FUN_00e734e4(param_1,"TextField","close",&DAT_01beef0d);
  *param_1 = &PTR_FUN_02baed08;
  return;
}




void FUN_01984d58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e7368c();
  FUN_00e73934(param_1,uVar1);
  return;
}




void FUN_01984d80(undefined8 *param_1)

{
  FUN_00e734e4(param_1,"TextField","setText","(Ljava/lang/String;)V");
  *param_1 = &PTR_FUN_02baed28;
  return;
}




void FUN_01984dc8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e7368c();
  FUN_00e73f80(auStack_48,uVar2,&DAT_03210450);
  uVar3 = FUN_00e7410c(auStack_48);
  FUN_00e73934(param_1,uVar2,uVar3);
  FUN_00e740f0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01984e50(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_02baed48;
  param_1[1] = 0;
  FUN_00e734e4(param_1 + 2,"TextField","open","(Ljava/lang/String;IIIIIZ)V");
  param_1[2] = &PTR_FUN_02baecc8;
  FUN_00e734e4(param_1 + 5,"TextField","setPosition","(IIII)V");
  param_1[5] = &PTR_FUN_02baece8;
  FUN_00e734e4(param_1 + 8,"TextField","close",&DAT_01beef0d);
  param_1[8] = &PTR_FUN_02baed08;
  FUN_00e734e4(param_1 + 0xb,"TextField","setText","(Ljava/lang/String;)V");
  param_1[0xb] = &PTR_FUN_02baed28;
  DAT_03214468 = param_1;
  pvVar1 = operator_new(0x40);
  FUN_01984f50();
  DAT_03214470 = pvVar1;
  return;
}




void FUN_01984f50(long param_1)

{
  FUN_00e70510();
  FUN_00e77acc(param_1 + 0x18,0);
  FUN_00910394(param_1,&DAT_03210450);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf0;
  return;
}




void FUN_01984f9c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_02baed48;
  param_1[1] = 0;
  pvVar1 = DAT_03214470;
  DAT_03214468 = 0;
  if (DAT_03214470 != (void *)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)((long)DAT_03214470 + 0x18));
    pvVar2 = *(void **)((long)pvVar1 + 8);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    operator_delete(pvVar1);
  }
  DAT_03214470 = (void *)0x0;
  FUN_00e748b8(param_1 + 0xb);
  FUN_00e748b8(param_1 + 8);
  FUN_00e748b8(param_1 + 5);
  FUN_00e748b8(param_1 + 2);
  return;
}

