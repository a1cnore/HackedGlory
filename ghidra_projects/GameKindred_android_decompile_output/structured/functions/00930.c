// functions/00930 — 43 functions
#include "libGameKindred.h"




void FUN_00930000(long param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  void *__s1;
  byte *pbVar12;
  size_t sVar13;
  size_t sVar14;
  long lVar15;
  ulong local_98 [2];
  void *local_88;
  ulong auStack_80 [2];
  void *pvStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar8 = FUN_009580b8();
  if (*(char *)(uVar8 + 0x568c) != '\0') goto LAB_00930224;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  uVar7 = *(uint *)(param_1 + 0x78);
  if (uVar7 == 0) {
    bVar3 = *param_2;
    sVar13 = *(size_t *)(param_2 + 8);
    sVar14 = (size_t)(bVar3 >> 1);
  }
  else {
    bVar3 = *param_2;
    sVar13 = *(size_t *)(param_2 + 8);
    pbVar12 = *(byte **)(param_2 + 0x10);
    lVar15 = *(long *)(param_1 + 0x80);
    uVar8 = 0;
    sVar14 = (size_t)(bVar3 >> 1);
    sVar2 = sVar13;
    if ((bVar3 & 1) == 0) {
      pbVar12 = param_2 + 1;
      sVar2 = sVar14;
    }
    do {
      pbVar9 = (byte *)(lVar15 + uVar8 * 0x30);
      bVar4 = *pbVar9;
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar9 + 8);
      }
      if (uVar1 == sVar2) {
        pbVar11 = *(byte **)(lVar15 + uVar8 * 0x30 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        if ((bVar4 & 1) == 0) {
          if (sVar2 == 0) goto LAB_0093021c;
          lVar10 = -(ulong)(bVar4 >> 1);
          pbVar11 = pbVar12;
          while (pbVar9 = pbVar9 + 1, *pbVar9 == *pbVar11) {
            lVar10 = lVar10 + 1;
            pbVar11 = pbVar11 + 1;
            if (lVar10 == 0) goto LAB_0093021c;
          }
        }
        else if ((sVar2 == 0) || (iVar6 = memcmp(pbVar11,pbVar12,sVar2), iVar6 == 0))
        goto LAB_0093021c;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  bVar4 = *(byte *)(param_1 + 0x48);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x50);
  }
  if ((bVar3 & 1) != 0) {
    sVar14 = sVar13;
  }
  if (sVar2 == sVar14) {
    __s1 = *(void **)(param_1 + 0x58);
    pbVar12 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x49);
    }
    if ((bVar3 & 1) == 0) {
      pbVar12 = param_2 + 1;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pbVar9 = (byte *)(param_1 + 0x49);
        lVar15 = -(ulong)(bVar4 >> 1);
        do {
          if (*pbVar9 != *pbVar12) goto LAB_009301c0;
          pbVar9 = pbVar9 + 1;
          lVar15 = lVar15 + 1;
          pbVar12 = pbVar12 + 1;
        } while (lVar15 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar6 = memcmp(__s1,pbVar12,sVar2), iVar6 != 0)) goto LAB_009301c0;
  }
  else {
LAB_009301c0:
    pvStack_70 = (void *)0x0;
    auStack_80[1] = 0;
    auStack_80[0] = 0;
    local_88 = (void *)0x0;
    local_98[1] = 0;
    local_98[0] = 0;
    FUN_008fce60(local_98,param_2);
    FUN_008fce60(auStack_80,param_3);
    FUN_0092f9d8((uint *)(param_1 + 0x78),local_98);
    if ((auStack_80[0] & 1) != 0) {
      operator_delete(pvStack_70);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
LAB_0093021c:
  uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  uVar8 = (ulong)uVar7;
LAB_00930224:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}




void FUN_00930258(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  void *__s1;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  size_t sVar14;
  size_t sVar15;
  ulong local_98 [2];
  void *local_88;
  ulong auStack_80 [2];
  void *pvStack_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  uVar3 = *(uint *)(param_1 + 0x78);
  if (uVar3 == 0) {
    bVar4 = *param_2;
    sVar14 = *(size_t *)(param_2 + 8);
    sVar15 = (size_t)(bVar4 >> 1);
  }
  else {
    bVar4 = *param_2;
    sVar14 = *(size_t *)(param_2 + 8);
    pbVar11 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_1 + 0x80);
    uVar12 = 0;
    sVar15 = (size_t)(bVar4 >> 1);
    sVar2 = sVar14;
    if ((bVar4 & 1) == 0) {
      pbVar11 = param_2 + 1;
      sVar2 = sVar15;
    }
    do {
      pbVar8 = (byte *)(lVar13 + uVar12 * 0x30);
      bVar5 = *pbVar8;
      uVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar8 + 8);
      }
      if (uVar1 == sVar2) {
        pbVar10 = *(byte **)(lVar13 + uVar12 * 0x30 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar10 = pbVar8 + 1;
        }
        if ((bVar5 & 1) == 0) {
          if (sVar2 == 0) goto LAB_0093046c;
          lVar9 = -(ulong)(bVar5 >> 1);
          pbVar10 = pbVar11;
          while (pbVar8 = pbVar8 + 1, *pbVar8 == *pbVar10) {
            lVar9 = lVar9 + 1;
            pbVar10 = pbVar10 + 1;
            if (lVar9 == 0) goto LAB_0093046c;
          }
        }
        else if ((sVar2 == 0) || (iVar7 = memcmp(pbVar10,pbVar11,sVar2), iVar7 == 0))
        goto LAB_0093046c;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar3);
  }
  bVar5 = *(byte *)(param_1 + 0x48);
  sVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x50);
  }
  if ((bVar4 & 1) != 0) {
    sVar15 = sVar14;
  }
  if (sVar2 == sVar15) {
    __s1 = *(void **)(param_1 + 0x58);
    pbVar11 = *(byte **)(param_2 + 0x10);
    if ((bVar5 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x49);
    }
    if ((bVar4 & 1) == 0) {
      pbVar11 = param_2 + 1;
    }
    if ((bVar5 & 1) == 0) {
      if (sVar2 != 0) {
        pbVar8 = (byte *)(param_1 + 0x49);
        lVar13 = -(ulong)(bVar5 >> 1);
        do {
          if (*pbVar8 != *pbVar11) goto LAB_00930400;
          pbVar8 = pbVar8 + 1;
          lVar13 = lVar13 + 1;
          pbVar11 = pbVar11 + 1;
        } while (lVar13 != 0);
      }
      goto LAB_0093046c;
    }
    if ((sVar2 == 0) || (iVar7 = memcmp(__s1,pbVar11,sVar2), iVar7 == 0)) goto LAB_0093046c;
  }
LAB_00930400:
  pvStack_70 = (void *)0x0;
  auStack_80[1] = 0;
  auStack_80[0] = 0;
  local_88 = (void *)0x0;
  local_98[1] = 0;
  local_98[0] = 0;
  FUN_008fce60(local_98,param_2);
  FUN_008fce60(auStack_80,&DAT_0320ffa8);
  FUN_0092f9d8((uint *)(param_1 + 0x78),local_98);
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 2;
  if ((auStack_80[0] & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_0093046c:
  iVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}




int FUN_009304ac(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 4;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}




int FUN_009304e4(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 8;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}




void FUN_0093051c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9f48;
  FUN_00930530();
  return;
}




void FUN_00930530(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (DAT_02c7bfc0 != 0) {
    lVar2 = DAT_02c7bfc0 + -8;
    while (lVar2 != 0) {
      if (lVar2 == param_1) {
        FUN_009307f8(&DAT_02c7bfc0);
        return;
      }
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    }
  }
  return;
}




void FUN_00930574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9f48;
  FUN_00930530();
  operator_delete(param_1);
  return;
}




void FUN_009305a8(void)

{
  void *pvVar1;
  ulong uVar2;
  
  pvVar1 = operator_new(0x110);
  FUN_0092f2e4();
  DAT_02c7bfd8 = pvVar1;
  uVar2 = FUN_00ec52f8();
  if ((uVar2 & 1) != 0) {
    FUN_00ec5300(DAT_02c7bfd8);
    return;
  }
  return;
}




void FUN_009305f0(void)

{
  FUN_00ec5304();
  if (DAT_02c7bfd8 != (long *)0x0) {
    (**(code **)(*DAT_02c7bfd8 + 8))();
  }
  DAT_02c7bfd8 = (long *)0x0;
  return;
}




void FUN_00930628(void)

{
  if (DAT_02c7bfd8 != 0) {
    FUN_0092f5bc();
    return;
  }
  return;
}




void FUN_0093063c(undefined8 param_1)

{
  if (DAT_02c7bfd8 != 0) {
    FUN_0092fcb0(DAT_02c7bfd8,param_1);
    return;
  }
  return;
}




uint FUN_00930658(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte local_f8 [16];
  void *local_e8;
  ulong local_e0 [2];
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (DAT_02c7bfd8 == 0) {
    uVar3 = 0;
    goto LAB_0093074c;
  }
  lVar4 = FUN_009580b8();
  local_e0[0] = 0;
  local_e0[1] = 0;
  pbVar1 = (byte *)(lVar4 + 0x5508);
  local_d0 = (void *)0x0;
  if ((*pbVar1 & 1) == 0) {
    if (*pbVar1 >> 1 != 0) {
LAB_009306c0:
      thunk_FUN_00e6dd88(auStack_90);
      FUN_00e6d83c(auStack_90,pbVar1);
      thunk_FUN_00e6e91c(auStack_90,auStack_a0);
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
      local_c8 = 0;
      FUN_00e6d9c4(auStack_a0,&local_c8,0);
      FUN_008fa54c(local_f8,&local_c8);
      FUN_008fce60(local_e0,local_f8);
      if ((local_f8[0] & 1) != 0) {
        operator_delete(local_e8);
      }
    }
  }
  else if ((int)*(undefined8 *)(lVar4 + 0x5510) != 0) goto LAB_009306c0;
  uVar3 = FUN_00ec531c(param_1,local_e0,pbVar1);
  if ((local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
LAB_0093074c:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}




undefined8 FUN_00930778(void)

{
  undefined8 uVar1;
  
  if (DAT_02c7bfd8 != 0) {
    uVar1 = FUN_00ec5324();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00930790(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_02c7bfd8 != 0) {
    uVar1 = FUN_0092fb70(DAT_02c7bfd8,param_1,param_2);
    return uVar1;
  }
  return 0;
}




void FUN_009307b4(void)

{
  if (DAT_02c7bfd8 != 0) {
    FUN_00ec532c();
    return;
  }
  return;
}




void FUN_009307c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  puVar1 = &DAT_02c7bfc0;
  if (DAT_02c7bfc0 != 0) {
    puVar1 = DAT_02c7bfc8;
  }
  *puVar1 = puVar2;
  DAT_02c7bfc8 = puVar2;
  DAT_02c7bfd0 = DAT_02c7bfd0 + 1;
  return;
}




void FUN_009307f8(long *param_1,long param_2)

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




void FUN_00930854(void)

{
  DAT_02c7bfc0 = 0;
  DAT_02c7bfc8 = 0;
  DAT_02c7bfd0 = 0;
  return;
}




void FUN_00930868(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_02c7bfd8 != 0) {
    local_30 = param_2;
    lVar2 = FUN_00930b4c(DAT_02c7bfd8 + 0xf0,param_2,"",&local_30,auStack_38);
    *(undefined4 *)(lVar2 + 0x38) = param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009308e4(void)

{
  return DAT_02c7bfd8;
}




void FUN_009308f0(void)

{
  return;
}




void FUN_009308f4(void)

{
  return;
}




void FUN_009308f8(void)

{
  return;
}




void FUN_009308fc(void)

{
  return;
}




void FUN_00930900(void)

{
  return;
}




void FUN_00930904(void)

{
  return;
}




void FUN_00930908(void)

{
  return;
}




void FUN_00930910(void)

{
  return;
}




void FUN_00930914(void)

{
  return;
}




void FUN_00930918(void)

{
  return;
}




void FUN_0093091c(void)

{
  return;
}




void FUN_00930920(void)

{
  return;
}




void FUN_00930924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9fd8;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_0093096c(void)

{
  return 0x18;
}




void FUN_00930974(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00930974(param_1,*param_2);
    FUN_00930974(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_009309d0(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x30;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x18);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        lVar1 = lVar1 + -0x30;
        pbVar2 = pbVar2 + 0x30;
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




void FUN_00930a5c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
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
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        pbVar3 = (byte *)((long)pvVar2 + 0x18);
        do {
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x10));
          }
          if ((pbVar3[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          lVar4 = lVar4 + -0x30;
          pbVar3 = pbVar3 + 0x30;
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




void * FUN_00930b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00930bfc(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined4 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_00930d28(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00930bfc(long param_1,undefined8 *param_2,byte *param_3)

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
LAB_00930c60:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00930c7c;
          if (iVar4 < 0) goto LAB_00930c84;
          goto LAB_00930cfc;
        }
LAB_00930ce8:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00930ce8;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00930c60;
      }
LAB_00930c7c:
      if (uVar2 <= uVar1) break;
LAB_00930c84:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00930cfc:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00930d28(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_00930d7c(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_0092fd98(param_1,1);
    FUN_00930e3c(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x58;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        thunk_FUN_00e7051c(lVar4 + 0x18,lVar3 + 0x18);
        thunk_FUN_00e7051c(lVar4 + 0x28,lVar3 + 0x28);
        thunk_FUN_00e7051c(lVar4 + 0x38,lVar3 + 0x38);
        *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(lVar3 + 0x50);
        puVar1 = (undefined8 *)(lVar3 + 0x48);
        lVar3 = lVar3 + 0x58;
        *(undefined8 *)(lVar4 + 0x48) = *puVar1;
        lVar4 = lVar4 + 0x58;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00930e3c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x58);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x58);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        thunk_FUN_00e7051c((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        thunk_FUN_00e7051c((long)pvVar5 + 0x28,(long)pvVar2 + 0x28);
        thunk_FUN_00e7051c((long)pvVar5 + 0x38,(long)pvVar2 + 0x38);
        *(undefined4 *)((long)pvVar5 + 0x50) = *(undefined4 *)((long)pvVar2 + 0x50);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x48);
        pvVar2 = (void *)((long)pvVar2 + 0x58);
        *(undefined8 *)((long)pvVar5 + 0x48) = *puVar3;
        pvVar5 = (void *)((long)pvVar5 + 0x58);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x58;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        do {
          if ((void *)puVar3[4] != (void *)0x0) {
            operator_delete__((void *)puVar3[4]);
            puVar3[3] = 0;
            puVar3[4] = 0;
          }
          if ((void *)puVar3[2] != (void *)0x0) {
            operator_delete__((void *)puVar3[2]);
            puVar3[1] = 0;
            puVar3[2] = 0;
          }
          if ((void *)*puVar3 != (void *)0x0) {
            operator_delete__((void *)*puVar3);
            puVar3[-1] = 0;
            *puVar3 = 0;
          }
          if ((*(byte *)(puVar3 + -4) & 1) != 0) {
            operator_delete((void *)puVar3[-2]);
          }
          lVar4 = lVar4 + -0x58;
          puVar3 = puVar3 + 0xb;
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




undefined8 * FUN_00930f74(long param_1,byte *param_2)

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
  puVar6 = (undefined8 *)FUN_0093102c(param_1,param_2,*puVar7,puVar7);
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

