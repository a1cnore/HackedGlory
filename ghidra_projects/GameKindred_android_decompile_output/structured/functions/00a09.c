// functions/00a09 — 36 functions
#include "libGameKindred.h"




bool FUN_00a0904c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_00a09090();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    FUN_00a09148(param_1,lVar2);
  }
  return bVar1;
}




undefined8 * FUN_00a09090(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00a091ec(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long * FUN_00a09148(undefined8 *param_1,void *param_2)

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
  FUN_009343e8(param_1[1],param_2);
  if ((*(byte *)((long)param_2 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_2 + 0x30));
  }
  operator_delete(param_2);
  return plVar3;
}




long FUN_00a091ec(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00a09260:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_00a09260;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void * FUN_00a0929c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00a09348(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x38);
    FUN_008fcdb8((long)pvVar4 + 0x20,param_3);
    puVar3 = (undefined8 *)FUN_00a08a94(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00a09348(long param_1,undefined8 *param_2,byte *param_3)

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
LAB_00a093ac:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00a093c8;
          if (iVar4 < 0) goto LAB_00a093d0;
          goto LAB_00a09448;
        }
LAB_00a09434:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00a09434;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00a093ac;
      }
LAB_00a093c8:
      if (uVar2 <= uVar1) break;
LAB_00a093d0:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00a09448:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00a09474(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_008fcdb8();
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00a0949c(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  FUN_00a09564();
  DAT_03130a80 = pvVar1;
  pvVar1 = operator_new(0x28);
  FUN_00e77acc(pvVar1,0);
  DAT_03130a88 = pvVar1;
  return;
}




void FUN_00a094e8(void)

{
  pthread_mutex_t *ppVar1;
  
  if (DAT_03130a80 != (long *)0x0) {
    (**(code **)(*DAT_03130a80 + 8))();
  }
  ppVar1 = DAT_03130a88;
  DAT_03130a80 = (long *)0x0;
  if (DAT_03130a88 != (pthread_mutex_t *)0x0) {
    pthread_mutex_destroy(DAT_03130a88);
    operator_delete(ppVar1);
  }
  DAT_03130a88 = (pthread_mutex_t *)0x0;
  return;
}




bool FUN_00a09544(void)

{
  return DAT_03130a80 != 0;
}




undefined8 FUN_00a09558(void)

{
  return DAT_03130a80;
}




void FUN_00a09564(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c7a80;
  FUN_00e84dac(param_1 + 1);
  param_1[1] = &PTR_FUN_027c7aa0;
  uVar2 = thunk_FUN_00ec9300();
  if ((uVar2 & 1) != 0) {
    pcStack_40 = thunk_FUN_00a096a4;
    local_48 = param_1;
    FUN_00f02e98(0x3dcccccd,&local_48,0,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a09608(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c7a80;
  uVar2 = thunk_FUN_00ec9300();
  if ((uVar2 & 1) != 0) {
    pcStack_30 = thunk_FUN_00a096a4;
    local_38 = param_1;
    FUN_00f03390(&local_38);
  }
  FUN_00e84dd8(param_1 + 1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a09680(void *param_1)

{
  FUN_00a09608();
  operator_delete(param_1);
  return;
}




void FUN_00a096a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **local_68;
  undefined8 uStack_60;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e74(param_1 + 8);
  if ((uVar2 & 1) == 0) goto LAB_00a097f0;
  pthread_mutex_lock(DAT_03130a88);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x25) >> 0x18);
  local_68 = &PTR_FUN_027c7aa0;
  uStack_60 = 0;
  local_40 = *(undefined8 *)(param_1 + 0x30);
  local_58 = 0;
  uStack_53 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  pthread_mutex_unlock(DAT_03130a88);
  uVar2 = FUN_00e84e5c(&local_68);
  if ((uVar2 & 1) != 0) {
    if ((int)local_40 - 2U < 2) {
      uVar3 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
      pcVar4 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_WRONG_CREDENTIALS";
    }
    else {
      if ((int)local_40 == 4) {
        FUN_00ec645c(1);
        FUN_00cc0b30();
        FUN_00938b64();
        FUN_0094800c();
        FUN_00948018();
        goto LAB_00a097e8;
      }
      if ((int)local_40 == 1) {
        uVar3 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar4 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_ALREADY_LINKED";
      }
      else {
        uVar3 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar4 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_GENERIC_FAILURE";
      }
    }
    uVar5 = FUN_00e6ce7c(pcVar4,0);
    uVar6 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_BUTTON_TEXT",0);
    FUN_00a9b8b8(uVar3,uVar5,uVar6,param_1,thunk_FUN_00a0981c);
  }
LAB_00a097e8:
  FUN_00e84dd8(&local_68);
LAB_00a097f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a0981c(void)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_00ec9300();
  if (((uVar1 & 1) != 0) && (uVar1 = thunk_FUN_00ec99e0(), (uVar1 & 1) == 0)) {
    FUN_00cc0b30();
    FUN_00cc0ae0(&DAT_01e277f2);
    return;
  }
  return;
}




void FUN_00a0981c(void)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_00ec9300();
  if (((uVar1 & 1) != 0) && (uVar1 = thunk_FUN_00ec99e0(), (uVar1 & 1) == 0)) {
    FUN_00cc0b30();
    FUN_00cc0ae0(&DAT_01e277f2);
    return;
  }
  return;
}




void FUN_00a09850(long param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = thunk_FUN_00ec9300();
  if (((uVar2 & 1) != 0) && (uVar2 = thunk_FUN_00ec99e0(), (uVar2 & 1) == 0)) {
    FUN_009486e8(local_50);
    FUN_00ec52d8(local_68);
    thunk_FUN_00ec9538(local_80);
    pbVar3 = *(byte **)(param_2 + 0x10);
    pbVar4 = *(byte **)(param_3 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
    }
    if ((*param_3 & 1) == 0) {
      pbVar4 = param_3 + 1;
    }
    FUN_00e811b8(local_50,local_68,local_80,pbVar3,pbVar4,param_1 + 8);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a0981c(void)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_00ec9300();
  if (((uVar1 & 1) != 0) && (uVar1 = thunk_FUN_00ec99e0(), (uVar1 & 1) == 0)) {
    FUN_00cc0b30();
    FUN_00cc0ae0(&DAT_01e277f2);
    return;
  }
  return;
}




void FUN_00a09934(void *param_1)

{
  FUN_00e84dd8();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00a09958(void)

{
  return 4;
}




void thunk_FUN_00a096a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e74(param_1 + 8);
  if ((uVar2 & 1) == 0) goto LAB_00a097f0;
  pthread_mutex_lock(DAT_03130a88);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x25) >> 0x18);
  ppuStack_68 = &PTR_FUN_027c7aa0;
  uStack_60 = 0;
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = 0;
  uStack_53 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  pthread_mutex_unlock(DAT_03130a88);
  uVar2 = FUN_00e84e5c(&ppuStack_68);
  if ((uVar2 & 1) != 0) {
    if ((int)uStack_40 - 2U < 2) {
      uVar3 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
      pcVar4 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_WRONG_CREDENTIALS";
    }
    else {
      if ((int)uStack_40 == 4) {
        FUN_00ec645c(1);
        FUN_00cc0b30();
        FUN_00938b64();
        FUN_0094800c();
        FUN_00948018();
        goto LAB_00a097e8;
      }
      if ((int)uStack_40 == 1) {
        uVar3 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar4 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_ALREADY_LINKED";
      }
      else {
        uVar3 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar4 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_GENERIC_FAILURE";
      }
    }
    uVar5 = FUN_00e6ce7c(pcVar4,0);
    uVar6 = FUN_00e6ce7c("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_BUTTON_TEXT",0);
    FUN_00a9b8b8(uVar3,uVar5,uVar6,param_1,thunk_FUN_00a0981c);
  }
LAB_00a097e8:
  FUN_00e84dd8(&ppuStack_68);
LAB_00a097f0:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a09964(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x68);
  FUN_00948cd8();
  FUN_00e83560(puVar1 + 3);
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_027c7ad0;
  puVar1[3] = &PTR_FUN_027c7e70;
  DAT_03130a90 = puVar1;
  return;
}




void FUN_00a099c4(void)

{
  if (DAT_03130a90 != (long *)0x0) {
    (**(code **)(*DAT_03130a90 + 8))();
  }
  DAT_03130a90 = (long *)0x0;
  return;
}




undefined8 FUN_00a099f8(void)

{
  return DAT_03130a90;
}




void FUN_00a09a04(undefined8 *param_1)

{
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c7ad0;
  param_1[3] = &PTR_FUN_027c7e70;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}




void FUN_00a09a54(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_00a0a064(param_1 + 0x50,0);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}




void FUN_00a09a8c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_00a0a064(param_1 + 0x38,0);
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}




void FUN_00a09ac4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_108;
  void *local_100;
  undefined1 auStack_f8 [8];
  long local_f0;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_00a0a064(param_1 + 0x50,0);
  FUN_00950ef4(&local_108,param_2 + 0x48);
  FUN_00950f54(auStack_f8,param_2 + 0x58);
  if ((uint)local_108 != 0) {
    uVar3 = 0;
    do {
      lVar2 = local_f0;
      memset(local_e8,0,0x60);
      lVar2 = lVar2 + (ulong)uVar3 * 0x90;
      FUN_008fce60(local_e8,lVar2 + 0x18);
      FUN_008fce60(local_d0,lVar2 + 0x30);
      FUN_008fce60(local_b8,lVar2 + 0x48);
      FUN_008fce60(local_a0,lVar2 + 0x60);
      uStack_80 = *(undefined8 *)(lVar2 + 0x80);
      local_88 = *(undefined8 *)(lVar2 + 0x78);
      local_78 = *(undefined4 *)(lVar2 + 0x88);
      FUN_00a09cb4((undefined4 *)(param_1 + 0x40),&local_88,local_e8);
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      uVar3 = uVar3 + 1;
    } while ((uint)local_108 != uVar3);
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20);
  }
  FUN_00951478(auStack_f8,1);
  if (local_100 != (void *)0x0) {
    operator_delete__(local_100);
    local_108 = 0;
    local_100 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a09cb4(uint *param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c = FUN_0091ed5c(0,0,*param_2);
  uVar1 = *param_1;
  lVar4 = *(long *)(param_1 + 2);
  if (uVar1 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar1 * (ulong)local_3c >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)local_3c >> 0x20)) {
      do {
        if (*(uint *)(lVar4 + uVar6 * 4) <= local_3c) break;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
    }
    while ((iVar5 = (int)uVar6, iVar5 < (int)uVar1 && (*(uint *)(lVar4 + uVar6 * 4) < local_3c))) {
      uVar6 = (ulong)(iVar5 + 1);
    }
  }
  FUN_0091f770(param_1,lVar4 + (long)iVar5 * 4,&local_3c,&local_38);
  FUN_00a0a110(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar5 * 0x78,param_3,param_3 + 0x78);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a09da4(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  uVar2 = FUN_00a09e10(param_1 + 0x40,&local_2c);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00a0a624(param_1 + 0x40,&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




bool FUN_00a09e10(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = FUN_0091ed5c(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar5 = (ulong)uVar1 * (ulong)uVar3 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar3) break;
        iVar4 = (int)uVar5;
        uVar2 = iVar4 - 1;
        uVar5 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
    }
    if ((int)uVar1 <= (int)uVar5) {
      return false;
    }
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
      if (uVar3 <= uVar2) {
        return uVar2 == uVar3;
      }
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar2;
    } while ((int)uVar2 < (int)uVar1);
  }
  return false;
}




void FUN_00a09ea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7ad0;
  param_1[3] = &PTR_FUN_027c7e70;
  FUN_00a0a064(param_1 + 10,1);
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00a09f10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7ad0;
  param_1[3] = &PTR_FUN_027c7e70;
  FUN_00a0a064(param_1 + 10,1);
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a09f84(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_027c7ad0;
  *param_1 = &PTR_FUN_027c7e70;
  FUN_00a0a064(param_1 + 7,1);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00e835e0(param_1);
  FUN_00948d58(param_1 + -3);
  return;
}




void FUN_00a09ff0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_027c7ad0;
  *param_1 = &PTR_FUN_027c7e70;
  FUN_00a0a064(param_1 + 7,1);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00e835e0(param_1);
  FUN_00948d58(puVar1);
  operator_delete(puVar1);
  return;
}

