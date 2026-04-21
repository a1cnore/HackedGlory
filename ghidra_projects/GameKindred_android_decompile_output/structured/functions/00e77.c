// functions/00e77 — 34 functions
#include "libGameKindred.h"




undefined * thunk_FUN_00e7753c(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_032104d0;
  if ((DAT_032104c0 & 1) == 0) {
    puVar1 = &DAT_032104c1;
  }
  return puVar1;
}




void FUN_00e772cc(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78 [8];
  ulong local_70;
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  if (((DAT_032104b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_032104b8), iVar5 != 0)) {
    FUN_00e734e4(&DAT_032104a0,"NuoHelpers","getDataPath","()Ljava/lang/String;");
    DAT_032104a0 = &PTR_FUN_02820790;
    __cxa_atexit(FUN_00e748b8,&DAT_032104a0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032104b8);
  }
  switch(param_2) {
  case 0:
    uVar6 = FUN_00e7012c(&DAT_0320ffc0,0);
    FUN_008fa54c(local_78,uVar6);
    uVar7 = (ulong)(local_78[0] >> 1);
    pvVar2 = (void *)((ulong)local_78 | 1);
    if ((local_78[0] & 1) != 0) {
      uVar7 = local_70;
      pvVar2 = local_68;
    }
    lVar1 = (long)pvVar2 + uVar7;
    lVar8 = lVar1;
    if (0 < (long)uVar7) {
      do {
        if (uVar7 == 0) goto LAB_00e77444;
        lVar3 = uVar7 - 1;
        uVar7 = uVar7 - 1;
      } while (*(char *)((long)pvVar2 + lVar3) != '/');
      lVar8 = (long)pvVar2 + uVar7;
    }
LAB_00e77444:
    lVar3 = 0;
    if (lVar8 != lVar1) {
      lVar3 = (1 - (long)pvVar2) + lVar8;
    }
    FUN_0093ddb0(local_a8,local_78,0,lVar3,local_78);
    FUN_008fcdb8(local_90,local_a8);
    FUN_008fce60(local_60,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    goto LAB_00e773d4;
  case 1:
  case 3:
    uVar6 = FUN_00e7368c(&DAT_032104a0);
    FUN_00e73bd8(local_78,&DAT_032104a0,uVar6);
    break;
  case 2:
    FUN_008fa54c(local_78,param_1 + 0x377);
    break;
  default:
    goto switchD_00e7732c_default;
  }
  FUN_008fce60(local_60,local_78);
LAB_00e773d4:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
switchD_00e7732c_default:
  pvVar2 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar2 = local_50;
  }
  FUN_00e6a50c(param_3,param_4,pvVar2);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00e7753c(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_032104d0;
  if ((DAT_032104c0 & 1) == 0) {
    puVar1 = &DAT_032104c1;
  }
  return puVar1;
}




void FUN_00e775e8(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e7760c(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e77630(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e77654(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e77678(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e7769c(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e776c0(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e776e4(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e77708(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00e7772c(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




ulong FUN_00e77750(char *param_1,undefined8 param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  
  if (param_4 < 3) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      pcVar2 = param_1 + uVar3;
      param_4 = param_4 - 3;
      uVar3 = uVar3 + 4;
      *pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_3 >> 2];
      pcVar2[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(uint)(param_3[1] >> 4) | (*param_3 & 3) << 4];
      pcVar2[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(uint)(param_3[2] >> 6) | (param_3[1] & 0xf) << 2];
      pbVar1 = param_3 + 2;
      param_3 = param_3 + 3;
      pcVar2[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)*pbVar1 & 0x3f];
    } while (2 < param_4);
    param_1 = param_1 + uVar3;
  }
  if (param_4 == 0) {
    return uVar3;
  }
  uVar4 = 0;
  if (param_4 == 2) {
    uVar4 = (uint)param_3[1];
  }
  *param_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*param_3 >> 2];
  param_1[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [uVar4 >> 4 | (*param_3 & 3) << 4];
  cVar5 = '=';
  if (param_4 == 2) {
    cVar5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(uVar4 & 0xf) << 2];
  }
  param_1[2] = cVar5;
  param_1[3] = '=';
  return (ulong)((int)uVar3 + 4);
}




void FUN_00e77848(byte *param_1,undefined8 param_2,byte *param_3,int param_4,uint param_5,
                 uint param_6)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char local_1c [4];
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  if (param_4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    bVar3 = false;
    iVar4 = 0;
    do {
      cVar1 = (&DAT_01bef261)[*param_3];
      if (cVar1 == -0x36) {
        if (iVar6 == 3) {
          iVar5 = 1;
        }
        else {
          if (((iVar6 != 2) || (param_4 = param_4 + -1, param_4 == 0)) ||
             (param_3 = param_3 + 1, *param_3 != 0x3d)) break;
          iVar5 = 2;
          local_1c[2] = 0;
        }
        bVar3 = true;
        local_1c[3] = 0;
LAB_00e77914:
        iVar4 = (3 - iVar5) + iVar4;
        pbVar7 = param_1 + 1;
        *param_1 = (byte)local_1c[1] >> 4 | local_1c[0] << 2;
        if (iVar5 == 2) {
          iVar6 = 0;
        }
        else {
          param_1[1] = (byte)local_1c[2] >> 2 | local_1c[1] << 4;
          iVar6 = 0;
          if (iVar5 == 0) {
            pbVar7 = param_1 + 3;
            param_1[2] = local_1c[3] | local_1c[2] << 6;
          }
          else {
            pbVar7 = param_1 + 2;
          }
        }
      }
      else {
        pbVar7 = param_1;
        if (cVar1 == -0x37) {
LAB_00e778ac:
          if ((param_6 & 1) == 0) break;
        }
        else if (cVar1 == -0x38) {
          if ((param_5 & 1) == 0) goto LAB_00e778ac;
        }
        else {
          if (bVar3) break;
          bVar3 = false;
          local_1c[iVar6] = cVar1;
          if (iVar6 + 1 == 4) goto LAB_00e77914;
          bVar3 = false;
          iVar6 = iVar6 + 1;
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
      param_1 = pbVar7;
    } while (param_4 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}




void FUN_00e779b8(undefined8 param_1,uint param_2,byte *param_3)

{
  ulong uVar1;
  undefined8 extraout_x1;
  byte *pbVar2;
  
  FUN_008f68f8(param_3,param_2 / 3 << 2 | 1,0);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  uVar1 = FUN_00e77750(pbVar2,extraout_x1,param_1,param_2);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  pbVar2[uVar1 & 0xffffffff] = 0;
  return;
}




void FUN_00e77a3c(undefined8 param_1,ulong param_2,byte *param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  undefined8 extraout_x1;
  byte *pbVar2;
  
  FUN_008f68f8(param_3,((uint)(param_2 >> 2) & 0x3fffffff) * 2 + ((uint)param_2 >> 2) + 1,0);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  uVar1 = FUN_00e77848(pbVar2,extraout_x1,param_1,param_2 & 0xffffffff,param_4 & 1,param_5 & 1);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  pbVar2[uVar1 & 0xffffffff] = 0;
  return;
}




void FUN_00e77acc(pthread_mutex_t *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  pthread_mutexattr_t apStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pthread_mutexattr_init(apStack_40);
  if ((param_2 & 1) != 0) {
    pthread_mutexattr_settype(apStack_40,1);
  }
  iVar2 = pthread_mutex_init(param_1,apStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




bool FUN_00e77b48(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock(param_1);
  return iVar1 != 0x10;
}




void FUN_00e77b64(float param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long local_58;
  long local_50;
  timeval local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  gettimeofday(&local_48,(__timezone_ptr_t)0x0);
  uVar4 = (uint)((param_1 - (float)(uint)(int)param_1) * 1e+06);
  local_58 = local_48.tv_sec + (ulong)(uint)(int)param_1;
  uVar3 = local_48.tv_usec + (ulong)uVar4;
  if (999999 < (long)uVar3) {
    uVar5 = 0xffffffffffe17b80;
    if (-2000000 < (long)~uVar3) {
      uVar5 = ~uVar3;
    }
    uVar5 = (local_48.tv_usec + uVar5 + (ulong)uVar4 + 1000000) / 1000000;
    uVar3 = (uVar3 + uVar5 * -1000000) - 1000000;
    local_58 = local_58 + uVar5 + 1;
  }
  local_50 = uVar3 * 1000;
  local_48.tv_sec = local_58;
  local_48.tv_usec = uVar3;
  iVar2 = FUN_01b14788(param_2,&local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != 0x6e);
  }
  return;
}




void FUN_00e77c74(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}




int FUN_00e77c7c(pthread_t *param_1,__start_routine *param_2,void *param_3)

{
  int iVar1;
  
  pthread_create(param_1,(pthread_attr_t *)0x0,param_2,param_3);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_032104d8);
  FUN_00e77de4(&DAT_032104d8,*param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_032104d8);
  return iVar1;
}




void FUN_00e77cc8(void)

{
  return;
}




int FUN_00e77ccc(pthread_t *param_1)

{
  int iVar1;
  
  pthread_join(*param_1,(void **)0x0);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_032104d8);
  FUN_00e77f24(&DAT_032104d8,*param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_032104d8);
  return iVar1;
}




void FUN_00e77d14(pthread_t *param_1)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  *param_1 = pVar1;
  return;
}




bool FUN_00e77d38(pthread_t *param_1,pthread_t *param_2)

{
  int iVar1;
  
  iVar1 = pthread_equal(*param_1,*param_2);
  return iVar1 != 0;
}




int FUN_00e77d5c(undefined8 param_1)

{
  int iVar1;
  pthread_t pVar2;
  long lVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_032104d8);
  pVar2 = pthread_self();
  lVar3 = FUN_00e7807c(&DAT_032104d8,pVar2);
  FUN_00e6a50c(lVar3 + 8,0x10,param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_032104d8);
  return iVar1;
}




void FUN_00e77dac(void)

{
  return;
}




void FUN_00e77db0(void)

{
  return;
}




int FUN_00e77db4(pthread_mutex_t *param_1)

{
  int iVar1;
  
  if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)((long)param_1 + 0x30));
    param_1[1].__align = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
  }
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}




void FUN_00e77de4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = (uint *)(param_1 + 0x28);
  local_68 = param_2;
  if (*puVar3 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      uVar2 = FUN_00e77d38(*(long *)(param_1 + 0x30) + lVar4,&local_68);
      if ((uVar2 & 1) != 0) goto LAB_00e77e64;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < *puVar3);
  }
  uStack_58 = 0;
  local_50 = 0;
  local_60 = local_68;
  FUN_00e77e90(puVar3,&local_60);
LAB_00e77e64:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e77e90(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00e780dc(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x18;
  *(undefined8 *)(lVar2 + -8) = param_2[2];
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x10) = param_2[1];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  return;
}




void FUN_00e77f24(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar3 = FUN_00e77d38(*(long *)(param_1 + 0x30) + lVar5,&local_40);
      if ((uVar3 & 1) != 0) {
        puVar4 = (undefined8 *)
                 (*(long *)(param_1 + 0x30) + (ulong)(*(int *)(param_1 + 0x28) - 1) * 0x18);
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
        puVar1[2] = puVar4[2];
        uVar7 = *puVar4;
        puVar1[1] = puVar4[1];
        *puVar1 = uVar7;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e77fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = FUN_00e77d38(*(long *)(param_1 + 0x30) + lVar3,&local_40);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x30) + lVar3;
        goto LAB_00e78054;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  lVar3 = 0;
LAB_00e78054:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}

