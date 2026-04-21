// functions/0092f — 21 functions
#include "libGameKindred.h"




undefined4 FUN_0092f26c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0092ea24();
  uVar2 = 1;
  if (iVar1 == 3) {
    uVar2 = 2;
  }
  return uVar2;
}




undefined4 FUN_0092f28c(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return (undefined4)DAT_02c7bfa4;
}




undefined4 FUN_0092f2b8(void)

{
  if ((DAT_02c7bfac & 1) == 0) {
    FUN_0092dba4();
  }
  return DAT_02c7bf9c._4_4_;
}




void FUN_0092f2e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9f90;
  FUN_00e83560(param_1 + 1);
  param_1[1] = &PTR_FUN_027b9f18;
  *param_1 = &PTR_FUN_027b9ec8;
  FUN_00e77acc(param_1 + 4,0);
  memset(param_1 + 9,0,0x50);
  FUN_00e84dac(param_1 + 0x13);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = &PTR_FUN_027b9fd8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = param_1 + 0x1f;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xe0;
  FUN_0092f3b4(param_1);
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_0092f424,0);
  return;
}




void FUN_0092f3b4(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  FUN_0096bf24(&local_38);
  if ((int)local_38 != 0) {
    FUN_0092fcb0(param_1,&local_38);
  }
  FUN_0092fd98(&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0092f424(void)

{
  FUN_0092f3b4();
  return;
}




void FUN_0092f450(undefined8 *param_1)

{
  param_1[1] = &PTR_FUN_027b9f18;
  *param_1 = &PTR_FUN_027b9ec8;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  FUN_00930974(param_1 + 0x1e,param_1[0x1f]);
  param_1[0x13] = &PTR_FUN_027b9fd8;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    operator_delete((void *)param_1[0x1c]);
  }
  FUN_00e84dd8(param_1 + 0x13);
  FUN_0092fd98(param_1 + 0x11,1);
  FUN_009309d0(param_1 + 0xf,1);
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 4));
  FUN_00e835e0(param_1 + 1);
  return;
}




void FUN_0092f528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9fd8;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0092f568(long param_1)

{
  FUN_0092f450(param_1 + -8);
  return;
}




void FUN_0092f570(void *param_1)

{
  FUN_0092f450();
  operator_delete(param_1);
  return;
}




void FUN_0092f594(long param_1)

{
  FUN_0092f450((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}




void FUN_0092f5bc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00e80f58();
  if (((uVar4 & 1) == 0) || (uVar4 = FUN_00e829e0(), *(int *)(uVar4 + 0xa0) == 0))
  goto LAB_0092f950;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  if (DAT_02c7bfc0 != 0) {
    bVar6 = *(byte *)(param_1 + 0x108);
    uVar7 = (uint)bVar6;
    if ((bVar6 & 1) == 0) {
      uVar8 = uVar7;
      if ((bVar6 >> 1 & 1) == 0) goto LAB_0092f624;
LAB_0092f674:
      if ((DAT_02c7bfc0 != 0) && (plVar10 = (long *)(DAT_02c7bfc0 + -8), plVar10 != (long *)0x0)) {
        do {
          (**(code **)(*plVar10 + 0x20))(plVar10);
          plVar1 = plVar10 + 1;
          plVar10 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar10 = (long *)(*plVar1 + -8);
          }
        } while (plVar10 != (long *)0x0);
        uVar8 = (uint)*(byte *)(param_1 + 0x108);
      }
      uVar7 = uVar8 & 0xfffffffd;
      *(char *)(param_1 + 0x108) = (char)uVar7;
      if ((uVar8 >> 2 & 1) != 0) goto LAB_0092f6b8;
LAB_0092f628:
      bVar6 = (byte)uVar7;
    }
    else {
      plVar10 = (long *)(DAT_02c7bfc0 + -8);
      if (plVar10 != (long *)0x0) {
        do {
          (**(code **)(*plVar10 + 0x10))(plVar10,param_1 + 0x88);
          plVar1 = plVar10 + 1;
          plVar10 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar10 = (long *)(*plVar1 + -8);
          }
        } while (plVar10 != (long *)0x0);
        bVar6 = *(byte *)(param_1 + 0x108);
      }
      uVar7 = bVar6 & 0xfe;
      *(char *)(param_1 + 0x108) = (char)uVar7;
      uVar8 = uVar7;
      if ((uVar7 >> 1 & 1) != 0) goto LAB_0092f674;
LAB_0092f624:
      if ((uVar7 >> 2 & 1) == 0) goto LAB_0092f628;
LAB_0092f6b8:
      if ((DAT_02c7bfc0 != 0) && (plVar10 = (long *)(DAT_02c7bfc0 + -8), plVar10 != (long *)0x0)) {
        do {
          (**(code **)(*plVar10 + 0x28))(plVar10);
          plVar1 = plVar10 + 1;
          plVar10 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar10 = (long *)(*plVar1 + -8);
          }
        } while (plVar10 != (long *)0x0);
        uVar7 = (uint)*(byte *)(param_1 + 0x108);
      }
      bVar6 = (byte)uVar7 & 0xfb;
      *(byte *)(param_1 + 0x108) = bVar6;
    }
    if ((uVar7 >> 3 & 1) != 0) {
      if ((DAT_02c7bfc0 != 0) && (plVar10 = (long *)(DAT_02c7bfc0 + -8), plVar10 != (long *)0x0)) {
        do {
          (**(code **)(*plVar10 + 0x30))(plVar10);
          plVar1 = plVar10 + 1;
          plVar10 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar10 = (long *)(*plVar1 + -8);
          }
        } while (plVar10 != (long *)0x0);
        bVar6 = *(byte *)(param_1 + 0x108);
      }
      *(byte *)(param_1 + 0x108) = bVar6 & 0xf7;
    }
  }
  lVar2 = param_1 + 0x98;
  uVar4 = FUN_00e84e74(lVar2);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(param_1 + 0xc4) == 1) {
      if (*(char *)(param_1 + 0xe8) == '\0') {
        FUN_00ec5324(param_1 + 0x48);
        if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
          lVar5 = param_1 + 0x61;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x70);
        }
        FUN_00903e0c(lVar5);
        if ((DAT_02c7bfc0 != 0) && (plVar10 = (long *)(DAT_02c7bfc0 + -8), plVar10 != (long *)0x0))
        {
          do {
            (**(code **)(*plVar10 + 0x18))
                      (plVar10,param_1 + 0x48,(byte *)(param_1 + 0x60),param_1 + 0xd0);
            plVar1 = plVar10 + 1;
            plVar10 = (long *)0x0;
            if (*plVar1 != 0) {
              plVar10 = (long *)(*plVar1 + -8);
            }
          } while (plVar10 != (long *)0x0);
        }
      }
      else {
        FUN_0092f9d8(param_1 + 0x78,param_1 + 0x48);
      }
    }
    else if (*(int *)(param_1 + 0xc4) == 0) {
      FUN_00ec5324(param_1 + 0x48);
      FUN_0092f984(param_1,param_1 + 0x60);
      if ((DAT_02c7bfc0 != 0) && (plVar10 = (long *)(DAT_02c7bfc0 + -8), plVar10 != (long *)0x0)) {
        do {
          (**(code **)(*plVar10 + 0x18))(plVar10,param_1 + 0x48,param_1 + 0x60,param_1 + 0xd0);
          plVar1 = plVar10 + 1;
          plVar10 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar10 = (long *)(*plVar1 + -8);
          }
        } while (plVar10 != (long *)0x0);
      }
    }
    FUN_008fce60(param_1 + 0x48,&DAT_0320ffa8);
    FUN_008fce60(param_1 + 0x60,&DAT_0320ffa8);
  }
  uVar4 = FUN_00e84e4c(lVar2);
  if ((uVar4 & 1) == 0) {
    piVar9 = (int *)(param_1 + 0x78);
    if (*piVar9 != 0) {
      lVar5 = param_1 + 0x48;
      lVar11 = *(long *)(param_1 + 0x80) + (ulong)(*piVar9 - 1) * 0x30;
      FUN_008fce60(lVar5,lVar11);
      FUN_008fce60(param_1 + 0x60,lVar11 + 0x18);
      lVar11 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_1 + 0x78) * 0x30;
      if ((*(byte *)(lVar11 + -0x18) & 1) != 0) {
        operator_delete(*(void **)(lVar11 + -8));
      }
      if ((*(byte *)(lVar11 + -0x30) & 1) != 0) {
        operator_delete(*(void **)(lVar11 + -0x20));
      }
      *piVar9 = *piVar9 + -1;
      FUN_00ec52d8(local_80);
      FUN_00e82378(lVar5,local_80,lVar2);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar4 = FUN_00e84e4c(lVar2);
      if ((uVar4 & 1) == 0) {
        FUN_0092f9d8(piVar9,lVar5);
        FUN_008fce60(lVar5,&DAT_0320ffa8);
        FUN_008fce60(param_1 + 0x60,&DAT_0320ffa8);
      }
    }
  }
  uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  uVar4 = (ulong)uVar7;
LAB_0092f950:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_0092f984(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00930f74(param_1 + 0xf0);
  if (param_1 + 0xf8 == lVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x38);
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    param_1 = param_1 + 0x61;
  }
  else {
    param_1 = *(long *)(param_1 + 0x70);
  }
  FUN_00903990(uVar2,param_1);
  return;
}




void FUN_0092f9d8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00930a5c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_008fcdb8(lVar4 + -0x30,param_2);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_0092fa74(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e80f6c();
  if ((uVar3 & 1) != 0) {
    FUN_00ec532c();
    FUN_00ec52e8(local_40);
    pvVar1 = (void *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      pvVar1 = local_30;
    }
    FUN_008ffc4c("storefront",pvVar1,1);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_0092fa74(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e80f6c();
  if ((uVar3 & 1) != 0) {
    FUN_00ec532c();
    FUN_00ec52e8(abStack_40);
    pvVar1 = (void *)((ulong)abStack_40 | 1);
    if ((abStack_40[0] & 1) != 0) {
      pvVar1 = pvStack_30;
    }
    FUN_008ffc4c("storefront",pvVar1,1);
    if ((abStack_40[0] & 1) != 0) {
      operator_delete(pvStack_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0092fb04(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_3;
  lVar2 = FUN_00930b4c(param_2 + 0xf0,param_3,"",&local_30,auStack_38);
  *(undefined4 *)(lVar2 + 0x38) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_0092fb70(long param_1,byte *param_2,long param_3)

{
  size_t sVar1;
  size_t __n;
  byte *__s1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *__s2;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar7 = 0;
  if (((*(byte *)(param_1 + 0x108) >> 4 & 1) == 0) &&
     (uVar7 = (ulong)*(uint *)(param_1 + 0x88), *(uint *)(param_1 + 0x88) != 0)) {
    bVar2 = *param_2;
    pbVar8 = *(byte **)(param_1 + 0x90);
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    pbVar9 = pbVar8 + uVar7 * 0x58;
    if ((bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar2 >> 1);
    }
    do {
      bVar3 = *pbVar8;
      uVar7 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar7 = *(ulong *)(pbVar8 + 8);
      }
      if (__n == uVar7) {
        __s2 = *(byte **)(pbVar8 + 0x10);
        if ((bVar3 & 1) == 0) {
          __s2 = pbVar8 + 1;
        }
        sVar1 = -(ulong)(bVar2 >> 1);
        pbVar4 = param_2;
        sVar5 = __n;
        if ((bVar2 & 1) == 0) {
          while( true ) {
            if (sVar5 == 0) goto LAB_0092fc50;
            if (pbVar4[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar4 = pbVar4 + 1;
            sVar5 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) {
LAB_0092fc50:
          FUN_008fce60(param_3,pbVar8);
          FUN_00910394(param_3 + 0x18,pbVar8 + 0x18);
          FUN_00910394(param_3 + 0x28,pbVar8 + 0x28);
          FUN_00910394(param_3 + 0x38,pbVar8 + 0x38);
          *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(pbVar8 + 0x50);
          *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(pbVar8 + 0x48);
          return 1;
        }
      }
      pbVar8 = pbVar8 + 0x58;
    } while (pbVar8 != pbVar9);
    uVar7 = 0;
  }
  return uVar7;
}




void FUN_0092fcb0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0092fd98(param_1 + 0x88,0);
  FUN_00930d7c(param_1 + 0x88,param_2);
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 0x10;
  if (*(int *)(param_1 + 0x88) != 0) {
    lVar4 = *(long *)(param_1 + 0x90);
    do {
      uVar1 = *(undefined4 *)(lVar4 + 0x48);
      local_60 = lVar4;
      lVar3 = FUN_00930b4c(param_1 + 0xf0,lVar4,"",&local_60,auStack_68);
      *(undefined4 *)(lVar3 + 0x38) = uVar1;
      lVar4 = lVar4 + 0x58;
    } while (lVar4 != *(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * 0x58);
  }
  FUN_00ec530c(param_2);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0092fd98(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x58;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((void *)puVar2[4] != (void *)0x0) {
          operator_delete__((void *)puVar2[4]);
          puVar2[3] = 0;
          puVar2[4] = 0;
        }
        if ((void *)puVar2[2] != (void *)0x0) {
          operator_delete__((void *)puVar2[2]);
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        if ((*(byte *)(puVar2 + -4) & 1) != 0) {
          operator_delete((void *)puVar2[-2]);
        }
        lVar1 = lVar1 + -0x58;
        puVar2 = puVar2 + 0xb;
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




int FUN_0092fe44(long param_1,uint *param_2)

{
  size_t sVar1;
  size_t __n;
  byte *__s1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  byte *__s2;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  uVar7 = *param_2;
  if (uVar7 != 0) {
    uVar12 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x88);
      if (uVar2 != 0) {
        lVar14 = *(long *)(param_1 + 0x90);
        uVar9 = 0;
        lVar13 = *(long *)(param_2 + 2);
        pbVar10 = (byte *)(lVar13 + uVar12 * 0x58);
        pbVar11 = pbVar10 + 1;
        bVar3 = *pbVar10;
        lVar8 = lVar13 + uVar12 * 0x58;
        __n = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(lVar8 + 8);
        }
        do {
          pbVar10 = (byte *)(lVar14 + uVar9 * 0x58);
          bVar4 = *pbVar10;
          sVar1 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar10 + 8);
          }
          if (__n == sVar1) {
            __s2 = *(byte **)(lVar14 + uVar9 * 0x58 + 0x10);
            __s1 = pbVar11;
            if ((bVar3 & 1) != 0) {
              __s1 = *(byte **)(lVar8 + 0x10);
            }
            if ((bVar4 & 1) == 0) {
              __s2 = pbVar10 + 1;
            }
            pbVar10 = pbVar11;
            sVar1 = -(ulong)(bVar3 >> 1);
            sVar5 = __n;
            if ((bVar3 & 1) == 0) {
              while( true ) {
                if (sVar5 == 0) goto LAB_0092ff7c;
                if (*pbVar10 != *__s2) break;
                sVar1 = sVar1 + 1;
                __s2 = __s2 + 1;
                pbVar10 = pbVar10 + 1;
                sVar5 = sVar1;
              }
            }
            else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) {
LAB_0092ff7c:
              lVar13 = lVar13 + uVar12 * 0x58;
              lVar14 = lVar14 + (uVar9 & 0xffffffff) * 0x58;
              FUN_00910394(lVar14 + 0x18,lVar13 + 0x18);
              FUN_00910394(lVar14 + 0x28,lVar13 + 0x28);
              FUN_00910394(lVar14 + 0x38,lVar13 + 0x38);
              *(undefined4 *)(lVar14 + 0x4c) = *(undefined4 *)(lVar13 + 0x4c);
              uVar7 = *param_2;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar7);
  }
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xef | 1;
  iVar6 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar6;
}

