// functions/00ae2 — 16 functions
#include "libGameKindred.h"




void thunk_FUN_00ae20b4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_LEAVE_APP");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae20b4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_LEAVE_APP");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae2124(uint *param_1,long param_2)

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
    FUN_00ae2e28(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_008fcdb8(lVar4 + -0x30,param_2);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_00ae21c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ae2200(param_1,param_2,param_5);
  return;
}




void FUN_00ae21c8(long param_1)

{
  if (*(long *)(param_1 + 0x670) != 0) {
    FUN_00adec44(*(long *)(param_1 + 0x670),0,0);
    *(undefined8 *)(param_1 + 0x670) = 0;
  }
  return;
}




void thunk_FUN_00ae2834(long param_1)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  void *pvVar10;
  byte abStack_60 [16];
  void *pvStack_50;
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 0x670);
  if (lVar8 == 0) goto LAB_00ae29c0;
  pbVar9 = (byte *)(lVar8 + 0x34a8);
  if ((*pbVar9 & 1) == 0) {
    if (*pbVar9 >> 1 != 0) {
LAB_00ae2888:
      bVar2 = *(byte *)(lVar8 + 0x34c0);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar8 + 0x34c8);
      }
      sVar1 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar1 = DAT_0320ffb0;
      }
      if (__n == sVar1) {
        pvVar10 = *(void **)(lVar8 + 0x34d0);
        __s1 = pvVar10;
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar8 + 0x34c1);
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar6 = (char *)(lVar8 + 0x34c1);
            lVar7 = -(ulong)(bVar2 >> 1);
            do {
              if (*pcVar6 != *__s2) goto LAB_00ae2914;
              pcVar6 = pcVar6 + 1;
              lVar7 = lVar7 + 1;
              __s2 = __s2 + 1;
            } while (lVar7 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00ae2934;
      }
      else {
LAB_00ae2914:
        if ((bVar2 & 1) == 0) {
          pvVar10 = (void *)(lVar8 + 0x34c1);
        }
        else {
          pvVar10 = *(void **)(lVar8 + 0x34d0);
        }
LAB_00ae2934:
        if ((*(byte *)(lVar8 + 0x34d8) & 1) == 0) {
          lVar8 = lVar8 + 0x34d9;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x34e8);
        }
        FUN_00909490(pvVar10,lVar8,0,1,0);
        pbVar9 = (byte *)(*(long *)(param_1 + 0x670) + 0x34a8);
      }
      FUN_008fcdb8(abStack_60,pbVar9);
      uVar5 = FUN_009b8d90();
      FUN_009bb46c(uVar5,abStack_60,&DAT_0320ffa8,0,0);
      if ((abStack_60[0] & 1) != 0) {
        operator_delete(pvStack_50);
      }
      lVar8 = *(long *)(param_1 + 0x670);
    }
  }
  else if (*(long *)(lVar8 + 0x34b0) != 0) goto LAB_00ae2888;
  FUN_00adec44(lVar8,0,0);
  *(undefined8 *)(param_1 + 0x670) = 0;
LAB_00ae29c0:
  if (*(long *)(lVar3 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ae2200(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long *__s;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  char *pcVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  void *pvVar20;
  byte local_280 [8];
  ulong local_278;
  long *local_270;
  undefined8 local_268;
  void *local_260;
  undefined8 local_258;
  void *local_250;
  undefined8 local_248;
  void *local_240;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [48];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [48];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [96];
  undefined1 auStack_118 [168];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  FUN_00b63fc0(auStack_228);
  if ((*(long *)(param_1 + 0x670) != 0) &&
     (FUN_00adec44(*(long *)(param_1 + 0x670),0,0), *(long *)(param_1 + 0x670) == param_3)) {
    *(undefined8 *)(param_1 + 0x670) = 0;
    goto LAB_00ae24f4;
  }
  bVar9 = DAT_0320ffa8;
  pbVar1 = (byte *)(param_3 + 0x3518);
  bVar6 = *pbVar1;
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = *(size_t *)(param_3 + 0x3520);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pvVar20 = *(void **)(param_3 + 0x3528);
    if ((bVar6 & 1) == 0) {
      pvVar20 = (void *)(param_3 + 0x3519);
    }
    pcVar15 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar15 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar17 = (char *)(param_3 + 0x3519);
        lVar19 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar17 != *pcVar15) goto LAB_00ae22fc;
          pcVar17 = pcVar17 + 1;
          lVar19 = lVar19 + 1;
          pcVar15 = pcVar15 + 1;
        } while (lVar19 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar10 = memcmp(pvVar20,pcVar15,sVar3), iVar10 != 0))
    goto LAB_00ae22fc;
    uVar11 = FUN_00ae1fb0(param_3,auStack_228,auStack_118,auStack_218,auStack_208,auStack_1f8,
                          auStack_1c8,auStack_1b8,auStack_188,auStack_178);
    if ((uVar11 & 1) == 0) {
      FUN_008fcdb8(local_280,param_3 + 0x34a8);
      uVar11 = (ulong)(local_280[0] >> 1);
      plVar8 = (long *)((ulong)local_280 | 1);
      if ((local_280[0] & 1) != 0) {
        uVar11 = local_278;
        plVar8 = local_270;
      }
      plVar2 = (long *)((long)plVar8 + uVar11);
      uVar18 = uVar11;
      plVar14 = plVar8;
      while( true ) {
        __s = plVar8;
        if ((((long)uVar18 < 0xc) || (uVar18 - 0xb == 0)) ||
           (plVar14 = memchr(plVar14,0x76,uVar18 - 0xb), plVar14 == (long *)0x0))
        goto joined_r0x00ae25cc;
        iVar10 = memcmp(plVar14,"vainglory://",0xc);
        if (iVar10 == 0) break;
        plVar14 = (long *)((long)plVar14 + 1);
        uVar18 = (long)plVar2 - (long)plVar14;
      }
      if ((plVar14 != plVar2) && (plVar14 == plVar8)) goto LAB_00ae2628;
joined_r0x00ae25cc:
      do {
        if (((long)uVar11 < 8) ||
           ((uVar11 - 7 == 0 || (plVar14 = memchr(__s,0x76,uVar11 - 7), plVar14 == (long *)0x0))))
        goto LAB_00ae26c4;
        if (*plVar14 == 0x2f2f3a6f65646976) goto LAB_00ae2618;
        uVar11 = (long)plVar2 - ((long)plVar14 + 1);
        __s = (long *)((long)plVar14 + 1);
      } while( true );
    }
    FUN_00f048e0(local_280,DAT_0313375c,auStack_228);
    FUN_00f04760(param_1,local_280,1);
    goto LAB_00ae24f4;
  }
LAB_00ae22fc:
  *(undefined8 *)(param_1 + 0x670) = 0;
  bVar6 = *(byte *)(param_3 + 0x34c0);
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = *(size_t *)(param_3 + 0x34c8);
  }
  if (sVar3 == sVar4) {
    pvVar20 = *(void **)(param_3 + 0x34d0);
    pvVar5 = pvVar20;
    if ((bVar6 & 1) == 0) {
      pvVar5 = (void *)(param_3 + 0x34c1);
    }
    pcVar15 = DAT_0320ffb8;
    if ((bVar9 & 1) == 0) {
      pcVar15 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar17 = (char *)(param_3 + 0x34c1);
        lVar19 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar17 != *pcVar15) goto LAB_00ae2370;
          pcVar17 = pcVar17 + 1;
          lVar19 = lVar19 + 1;
          pcVar15 = pcVar15 + 1;
        } while (lVar19 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar10 = memcmp(pvVar5,pcVar15,sVar4), iVar10 != 0))
    goto LAB_00ae23f8;
  }
  else {
LAB_00ae2370:
    if ((bVar6 & 1) == 0) {
      pvVar20 = (void *)(param_3 + 0x34c1);
    }
    else {
      pvVar20 = *(void **)(param_3 + 0x34d0);
    }
LAB_00ae23f8:
    if ((*(byte *)(param_3 + 0x34d8) & 1) == 0) {
      lVar19 = param_3 + 0x34d9;
    }
    else {
      lVar19 = *(long *)(param_3 + 0x34e8);
    }
    FUN_00909490(pvVar20,lVar19,0,1,1);
  }
  FUN_0097b388(local_280);
  FUN_00930790(pbVar1,local_280);
  uVar11 = FUN_00930658(local_280);
  if ((*pbVar1 & 1) == 0) {
    param_3 = param_3 + 0x3519;
  }
  else {
    param_3 = *(long *)(param_3 + 0x3528);
  }
  FUN_009038d8(param_3);
  if ((uVar11 & 1) == 0) {
    uVar16 = FUN_00e6ce7c("MARKET_GOLD_STORE_UNAVAILABLE_TITLE",0);
    uVar12 = FUN_00e6ce7c("MARKET_GOLD_STORE_UNAVAILABLE_BODY",0);
    uVar13 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar16,uVar12,uVar13,0,0);
  }
  if (local_240 != (void *)0x0) {
    operator_delete__(local_240);
    local_248 = 0;
    local_240 = (void *)0x0;
  }
  if (local_250 != (void *)0x0) {
    operator_delete__(local_250);
    local_258 = 0;
    local_250 = (void *)0x0;
  }
  if (local_260 != (void *)0x0) {
    operator_delete__(local_260);
    local_268 = 0;
    local_260 = (void *)0x0;
  }
  goto LAB_00ae24e4;
LAB_00ae2628:
  uVar16 = FUN_009b8d90();
  FUN_009bb46c(uVar16,local_280,&DAT_0320ffa8,0,0);
  bVar6 = *(byte *)(param_3 + 0x34c0);
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = *(size_t *)(param_3 + 0x34c8);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pvVar20 = *(void **)(param_3 + 0x34d0);
    pvVar5 = pvVar20;
    if ((bVar6 & 1) == 0) {
      pvVar5 = (void *)(param_3 + 0x34c1);
    }
    pcVar15 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar15 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar17 = (char *)(param_3 + 0x34c1);
        lVar19 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar17 != *pcVar15) goto LAB_00ae27b4;
          pcVar17 = pcVar17 + 1;
          lVar19 = lVar19 + 1;
          pcVar15 = pcVar15 + 1;
        } while (lVar19 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar10 = memcmp(pvVar5,pcVar15,sVar3), iVar10 != 0))
    goto LAB_00ae27d4;
  }
  else {
LAB_00ae27b4:
    if ((bVar6 & 1) == 0) {
      pvVar20 = (void *)(param_3 + 0x34c1);
    }
    else {
      pvVar20 = *(void **)(param_3 + 0x34d0);
    }
LAB_00ae27d4:
    if ((*(byte *)(param_3 + 0x34d8) & 1) == 0) {
      param_3 = param_3 + 0x34d9;
    }
    else {
      param_3 = *(long *)(param_3 + 0x34e8);
    }
    uVar16 = 0;
LAB_00ae27a4:
    FUN_00909490(pvVar20,param_3,uVar16,0,0);
  }
  goto LAB_00ae24e4;
LAB_00ae2618:
  if ((plVar14 != plVar2) && (plVar14 == plVar8)) goto LAB_00ae2628;
LAB_00ae26c4:
  *(long *)(param_1 + 0x670) = param_3;
  if (param_3 != 0) {
    FUN_00adec44(param_3,1,0);
    bVar6 = *(byte *)(param_3 + 0x34c0);
    sVar3 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar3 = *(size_t *)(param_3 + 0x34c8);
    }
    sVar4 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar4 = DAT_0320ffb0;
    }
    if (sVar3 != sVar4) {
LAB_00ae2760:
      if ((bVar6 & 1) == 0) {
        pvVar20 = (void *)(param_3 + 0x34c1);
      }
      else {
        pvVar20 = *(void **)(param_3 + 0x34d0);
      }
LAB_00ae2780:
      if ((*(byte *)(param_3 + 0x34d8) & 1) == 0) {
        param_3 = param_3 + 0x34d9;
      }
      else {
        param_3 = *(long *)(param_3 + 0x34e8);
      }
      uVar16 = 1;
      goto LAB_00ae27a4;
    }
    pvVar20 = *(void **)(param_3 + 0x34d0);
    pvVar5 = pvVar20;
    if ((bVar6 & 1) == 0) {
      pvVar5 = (void *)(param_3 + 0x34c1);
    }
    pcVar15 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar15 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar17 = (char *)(param_3 + 0x34c1);
        lVar19 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar17 != *pcVar15) goto LAB_00ae2760;
          pcVar17 = pcVar17 + 1;
          lVar19 = lVar19 + 1;
          pcVar15 = pcVar15 + 1;
        } while (lVar19 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar10 = memcmp(pvVar5,pcVar15,sVar3), iVar10 != 0))
    goto LAB_00ae2780;
  }
LAB_00ae24e4:
  if ((local_280[0] & 1) != 0) {
    operator_delete(local_270);
  }
LAB_00ae24f4:
  FUN_0096910c(auStack_228);
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ae2800(long param_1)

{
  if (*(long *)(param_1 + 0x670) != 0) {
    FUN_00adec44(*(long *)(param_1 + 0x670),0,0);
    *(undefined8 *)(param_1 + 0x670) = 0;
  }
  return;
}




void FUN_00ae2834(long param_1)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  void *pvVar10;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 0x670);
  if (lVar8 == 0) goto LAB_00ae29c0;
  pbVar9 = (byte *)(lVar8 + 0x34a8);
  if ((*pbVar9 & 1) == 0) {
    if (*pbVar9 >> 1 != 0) {
LAB_00ae2888:
      bVar2 = *(byte *)(lVar8 + 0x34c0);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar8 + 0x34c8);
      }
      sVar1 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar1 = DAT_0320ffb0;
      }
      if (__n == sVar1) {
        pvVar10 = *(void **)(lVar8 + 0x34d0);
        __s1 = pvVar10;
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar8 + 0x34c1);
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar6 = (char *)(lVar8 + 0x34c1);
            lVar7 = -(ulong)(bVar2 >> 1);
            do {
              if (*pcVar6 != *__s2) goto LAB_00ae2914;
              pcVar6 = pcVar6 + 1;
              lVar7 = lVar7 + 1;
              __s2 = __s2 + 1;
            } while (lVar7 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00ae2934;
      }
      else {
LAB_00ae2914:
        if ((bVar2 & 1) == 0) {
          pvVar10 = (void *)(lVar8 + 0x34c1);
        }
        else {
          pvVar10 = *(void **)(lVar8 + 0x34d0);
        }
LAB_00ae2934:
        if ((*(byte *)(lVar8 + 0x34d8) & 1) == 0) {
          lVar8 = lVar8 + 0x34d9;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x34e8);
        }
        FUN_00909490(pvVar10,lVar8,0,1,0);
        pbVar9 = (byte *)(*(long *)(param_1 + 0x670) + 0x34a8);
      }
      FUN_008fcdb8(local_60,pbVar9);
      uVar5 = FUN_009b8d90();
      FUN_009bb46c(uVar5,local_60,&DAT_0320ffa8,0,0);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      lVar8 = *(long *)(param_1 + 0x670);
    }
  }
  else if (*(long *)(lVar8 + 0x34b0) != 0) goto LAB_00ae2888;
  FUN_00adec44(lVar8,0,0);
  *(undefined8 *)(param_1 + 0x670) = 0;
LAB_00ae29c0:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ae29ec(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ec5c9c();
  if ((uVar2 & 1) != 0) {
    FUN_008fa54c(local_40,PTR_s_http___video_vainglorygame_com_O_02be3680);
    FUN_008fa54c(local_58,"[LOC]");
    FUN_0092ed98(local_70);
    FUN_00937db8(local_40,local_58,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    uVar3 = FUN_009b8d90();
    FUN_009ba5d4(uVar3,local_40,1,1,1);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae2ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8968;
  if ((*(byte *)(param_1 + 0x6bc) & 1) != 0) {
    operator_delete((void *)param_1[0x6be]);
  }
  if ((void *)param_1[0x6bb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6bb]);
    param_1[0x6bb] = 0;
    param_1[0x6ba] = 0;
  }
  if ((*(byte *)(param_1 + 0x6b7) & 1) != 0) {
    operator_delete((void *)param_1[0x6b9]);
  }
  if ((void *)param_1[0x6b6] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6b6]);
    param_1[0x6b6] = 0;
    param_1[0x6b5] = 0;
  }
  if ((*(byte *)(param_1 + 0x6b2) & 1) != 0) {
    operator_delete((void *)param_1[0x6b4]);
  }
  if ((void *)param_1[0x6b1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6b1]);
    param_1[0x6b1] = 0;
    param_1[0x6b0] = 0;
  }
  if ((void *)param_1[0x6af] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6af]);
    param_1[0x6af] = 0;
    param_1[0x6ae] = 0;
  }
  if ((*(byte *)(param_1 + 0x6ab) & 1) != 0) {
    operator_delete((void *)param_1[0x6ad]);
  }
  if ((void *)param_1[0x6aa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6aa]);
    param_1[0x6aa] = 0;
    param_1[0x6a9] = 0;
  }
  FUN_00ae2d9c(param_1 + 0x6a6,1);
  if ((*(byte *)(param_1 + 0x6a3) & 1) != 0) {
    operator_delete((void *)param_1[0x6a5]);
  }
  if ((*(byte *)(param_1 + 0x69b) & 1) != 0) {
    operator_delete((void *)param_1[0x69d]);
  }
  if ((*(byte *)(param_1 + 0x698) & 1) != 0) {
    operator_delete((void *)param_1[0x69a]);
  }
  if ((*(byte *)(param_1 + 0x695) & 1) != 0) {
    operator_delete((void *)param_1[0x697]);
  }
  if ((*(byte *)(param_1 + 0x692) & 1) != 0) {
    operator_delete((void *)param_1[0x694]);
  }
  if ((*(byte *)(param_1 + 0x68f) & 1) != 0) {
    operator_delete((void *)param_1[0x691]);
  }
  if ((*(byte *)(param_1 + 0x68c) & 1) != 0) {
    operator_delete((void *)param_1[0x68e]);
  }
  if ((void *)param_1[0x68b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x68b]);
    param_1[0x68b] = 0;
    param_1[0x68a] = 0;
  }
  if ((void *)param_1[0x689] != (void *)0x0) {
    operator_delete__((void *)param_1[0x689]);
    param_1[0x689] = 0;
    param_1[0x688] = 0;
  }
  if ((void *)param_1[0x687] != (void *)0x0) {
    operator_delete__((void *)param_1[0x687]);
    param_1[0x687] = 0;
    param_1[0x686] = 0;
  }
  if ((void *)param_1[0x685] != (void *)0x0) {
    operator_delete__((void *)param_1[0x685]);
    param_1[0x685] = 0;
    param_1[0x684] = 0;
  }
  if ((void *)param_1[0x683] != (void *)0x0) {
    operator_delete__((void *)param_1[0x683]);
    param_1[0x683] = 0;
    param_1[0x682] = 0;
  }
  FUN_009c7fa8(param_1 + 0x3ca);
  param_1[0x3ac] = &PTR_FUN_028266f0;
  param_1[0x3c3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3c6);
  FUN_00f13d08(param_1 + 0x3ac);
  FUN_00f01868(param_1 + 0x39b);
  FUN_009c7fa8(param_1 + 0xe3);
  FUN_00f0d3a4(param_1 + 0xbd);
  FUN_00f0d3a4(param_1 + 0x97);
  FUN_00f01868(param_1 + 0x86);
  param_1[0x69] = &PTR_FUN_027da660;
  param_1[0x7a] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    operator_delete((void *)param_1[0x82]);
  }
  FUN_0199fb94(param_1 + 0x7d);
  FUN_00f01868(param_1 + 0x69);
  param_1[0x4b] = &PTR_FUN_028266f0;
  param_1[0x62] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x65);
  FUN_00f13d08(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ae2d78(void *param_1)

{
  FUN_00ae2ab8();
  operator_delete(param_1);
  return;
}




void FUN_00ae2d9c(uint *param_1,uint param_2)

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




void FUN_00ae2e28(uint *param_1,uint param_2)

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




void FUN_00ae2f18(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_00ae2d9c(param_1,1);
    FUN_00ae2e28(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = lVar2 + (ulong)*param_2 * 0x30;
      do {
        FUN_008fcdb8(lVar3,lVar2);
        FUN_008fcdb8(lVar3 + 0x18,lVar2 + 0x18);
        lVar2 = lVar2 + 0x30;
        lVar3 = lVar3 + 0x30;
      } while (lVar2 != lVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00ae2fb0(long *param_1)

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
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar14 = tpidr_el0;
  local_80 = *(long *)(lVar14 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027d8ab0;
  FUN_00f13ca4(param_1 + 0x17);
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x4c;
  FUN_00f0d160(plVar1);
  FUN_00f0e4a8();
  plVar2 = param_1 + 0x90;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0xb6;
  FUN_00abaee8(plVar3,0);
  plVar4 = param_1 + 0x175;
  FUN_00abaee8(plVar4,0);
  plVar5 = param_1 + 0x234;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x252;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x270;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x28e;
  FUN_00ac5ab8(plVar8,0);
  plVar9 = param_1 + 0x40f;
  FUN_00b2a3e4(plVar9,0);
  plVar10 = param_1 + 0x58f;
  FUN_00f0d160(plVar10);
  FUN_00b1e884();
  plVar11 = param_1 + 0x611;
  FUN_00f0d160(plVar11);
  FUN_00b1d5d8();
  FUN_00f0d160();
  FUN_00b1d5d8();
  FUN_00f0d160();
  plVar12 = param_1 + 0x777;
  FUN_00f0e4a8();
  param_1[0x799] = 0;
  *(undefined4 *)(param_1 + 0x795) = 0x41;
  param_1[0x797] = 0;
  param_1[0x796] = 0;
  param_1[0x79b] = 0;
  param_1[0x79a] = 0;
  FUN_00e70510(param_1 + 0x79c);
  param_1[0x7a0] = 0;
  param_1[0x79f] = 0;
  param_1[0x79e] = 0;
  FUN_00e70510(param_1 + 0x7a1);
  FUN_00e70510(param_1 + 0x7a3);
  param_1[0x7a7] = 0;
  param_1[0x7a6] = 0;
  param_1[0x7a5] = 0;
  FUN_00e70510(param_1 + 0x7a8);
  FUN_00e70510(param_1 + 0x7aa);
  param_1[0x7ae] = 0;
  param_1[0x7ad] = 0;
  param_1[0x7ac] = 0;
  memset(param_1 + 0x7b0,0,0x43);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x637,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6b1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6d7,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x751,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  local_b0 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_b0);
  FUN_00f0e548(param_1 + 0x2e,PTR_s_build___MenuPartsCommon_tga_02be3530,"friendslist_status_circle"
              );
  if ((*(float *)(param_1 + 0x56) != 0.0) || (*(float *)((long)param_1 + 0x2b4) != 0.5)) {
    param_1[0x56] = 0x3f00000000000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(param_1 + 0x72,PTR_s_build___MenuPartsCommon_tga_02be3530,
               "generic_chat_bubble_outline");
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffffb;
  FUN_00f0e578(param_1 + 0x151,"generic_check");
  *(uint *)((long)param_1 + 0x92c) = *(uint *)((long)param_1 + 0x92c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa1c) = *(uint *)((long)param_1 + 0xa1c) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar3);
  FUN_00b0914c(plVar3,1);
  lVar16 = NEON_fmov(0xc1200000,4);
  uVar13 = DAT_03210c64;
  param_1[0xc1] = lVar16;
  local_b0 = thunk_FUN_00ae6eb8;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar13;
  FUN_009693a0(param_1 + 0xb7,&local_b0);
  FUN_00f0e578(param_1 + 0x210,"generic_x");
  *(uint *)((long)param_1 + 0xf24) = *(uint *)((long)param_1 + 0xf24) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1014) = *(uint *)((long)param_1 + 0x1014) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar4);
  FUN_00b0914c(plVar4,1);
  param_1[0x180] = lVar16;
  local_b0 = thunk_FUN_00ae6f04;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar13;
  FUN_009693a0(param_1 + 0x176,&local_b0);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar15 = *(uint *)((long)param_1 + 0x1224);
  if ((uVar15 & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x1224) = uVar15 & 0xffff807f | 0x1f80;
    FUN_0091ada4(plVar5);
    uVar15 = *(uint *)((long)param_1 + 0x1224);
  }
  *(uint *)((long)param_1 + 0x1224) = uVar15 & 0xfffffffb;
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0x26d) = *(byte *)(param_1 + 0x26d) | 1;
  uVar15 = *(uint *)((long)param_1 + 0x1314);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x1314) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  uVar15 = *(uint *)((long)param_1 + 0x1404);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x1404) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_0091ada4(plVar7);
  }
  FUN_00ac6004(0x40e00000,0x40800000,plVar8);
  FUN_00b2a974(0x40800000,plVar9);
  uVar15 = *(uint *)((long)param_1 + 0x2cfc);
  if ((uVar15 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2cfc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar10);
  }
  uVar15 = *(uint *)((long)param_1 + 0x310c);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x310c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_0091ada4(plVar11);
  }
  uVar15 = *(uint *)((long)param_1 + 0x360c);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x360c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_0091ada4(param_1 + 0x6b1);
  }
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_b0 = (code *)CONCAT44(local_b0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar12,&local_b0,2);
  uVar15 = *(uint *)((long)param_1 + 0x3c3c);
  if ((uVar15 & 0x7f80) != 0xa00) {
    *(uint *)((long)param_1 + 0x3c3c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0xa00;
    FUN_0091ada4(plVar12);
  }
  local_88 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  local_b0 = FUN_00ae37fc;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_b0);
  local_b0 = FUN_00ae37fc;
  local_88 = DAT_03210f8c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_b0);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7f6);
  if (*(long *)(lVar14 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

