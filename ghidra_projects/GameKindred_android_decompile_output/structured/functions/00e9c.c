// functions/00e9c — 9 functions
#include "libGameKindred.h"




void FUN_00e9c044(long param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  undefined4 uVar11;
  double *pdVar12;
  ulong uVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  double dVar20;
  double dVar21;
  
  pbVar14 = (byte *)*param_2;
  lVar1 = param_2[1];
  bVar2 = *pbVar14;
  pbVar19 = pbVar14 + 1;
  if (bVar2 != 0x2d) {
    pbVar19 = pbVar14;
  }
  uVar17 = *pbVar19 - 0x30;
  uVar7 = (ulong)uVar17;
  if (uVar17 == 0) {
    uVar8 = 0;
    bVar4 = false;
    uVar13 = 0;
    bVar5 = false;
    pbVar14 = pbVar19 + 1;
    dVar20 = 0.0;
    goto LAB_00e9c33c;
  }
  if (*pbVar19 - 0x31 < 9) {
    pbVar14 = pbVar19 + 1;
    uVar17 = (uint)*pbVar14;
    bVar3 = *pbVar14 - 0x30;
    if (bVar2 == 0x2d) {
      if (bVar3 < 10) {
        uVar13 = 0;
LAB_00e9c0e4:
        uVar6 = (uint)uVar7;
        if (uVar6 < 0xccccccc) {
LAB_00e9c104:
          pbVar14 = pbVar19 + uVar13 + 2;
          uVar7 = (ulong)((uVar6 * 10 + uVar17) - 0x30);
          uVar17 = (uint)*pbVar14;
          uVar13 = uVar13 + 1;
          if (9 < uVar17 - 0x30) goto LAB_00e9c1a0;
          goto LAB_00e9c0e4;
        }
        if (uVar6 != 0xccccccc) goto LAB_00e9c1dc;
        if (uVar17 < 0x39) goto LAB_00e9c104;
        uVar7 = 0xccccccc;
LAB_00e9c1dc:
        uVar17 = (uint)*pbVar14;
        bVar3 = *pbVar14 - 0x30;
        uVar8 = uVar7;
        if (bVar2 == 0x2d) {
          if (9 < bVar3) {
LAB_00e9c2d4:
            dVar20 = 0.0;
            bVar4 = false;
            goto LAB_00e9c338;
          }
          pbVar19 = pbVar14 + 1;
          do {
            if ((0xccccccccccccccb < uVar8) && ((uVar8 != 0xccccccccccccccc || (0x38 < uVar17))))
            goto LAB_00e9c2dc;
            uVar6 = uVar17 - 0x30;
            pbVar18 = pbVar19 + 1;
            uVar17 = (uint)*pbVar19;
            uVar8 = (ulong)uVar6 + uVar8 * 10;
            uVar13 = (ulong)((int)uVar13 + 1);
            pbVar14 = pbVar19;
            pbVar19 = pbVar18;
          } while (uVar17 - 0x30 < 10);
        }
        else {
          if (9 < bVar3) goto LAB_00e9c2d4;
          pbVar19 = pbVar14 + 1;
          do {
            if ((0x1999999999999998 < uVar8) && ((uVar8 != 0x1999999999999999 || (0x35 < uVar17))))
            goto LAB_00e9c2dc;
            uVar6 = uVar17 - 0x30;
            pbVar18 = pbVar19 + 1;
            uVar17 = (uint)*pbVar19;
            uVar8 = (ulong)uVar6 + uVar8 * 10;
            uVar13 = (ulong)((int)uVar13 + 1);
            pbVar14 = pbVar19;
            pbVar19 = pbVar18;
          } while (uVar17 - 0x30 < 10);
        }
        dVar20 = 0.0;
        bVar4 = false;
        pbVar14 = pbVar18 + -1;
        goto LAB_00e9c338;
      }
    }
    else if (bVar3 < 10) {
      uVar13 = 0;
      do {
        uVar6 = (uint)uVar7;
        if (0x19999998 < uVar6) {
          if (uVar6 != 0x19999999) goto LAB_00e9c1dc;
          if (0x35 < uVar17) {
            uVar7 = 0x19999999;
            goto LAB_00e9c1dc;
          }
        }
        pbVar14 = pbVar19 + uVar13 + 2;
        uVar7 = (ulong)((uVar6 * 10 + uVar17) - 0x30);
        uVar17 = (uint)*pbVar14;
        uVar13 = uVar13 + 1;
      } while (uVar17 - 0x30 < 10);
LAB_00e9c1a0:
      dVar20 = 0.0;
      uVar8 = 0;
      bVar4 = false;
      bVar5 = false;
      pbVar14 = pbVar19 + uVar13 + 1;
      goto LAB_00e9c33c;
    }
    dVar20 = 0.0;
    uVar8 = 0;
    bVar4 = false;
    uVar13 = 0;
    bVar5 = false;
    goto LAB_00e9c33c;
  }
  lVar9 = (long)pbVar19 - lVar1;
  uVar11 = 3;
  goto LAB_00e9c694;
LAB_00e9c2dc:
  dVar20 = (double)uVar8;
  bVar3 = *pbVar14;
  while (bVar3 - 0x30 < 10) {
    if (1.7976931348623158e+307 <= dVar20) {
      *(undefined4 *)(param_1 + 0x30) = 0xd;
      *(long *)(param_1 + 0x38) = (long)pbVar14 - lVar1;
      goto LAB_00e9c69c;
    }
    dVar20 = dVar20 * 10.0 + (double)(int)(bVar3 - 0x30);
    bVar3 = pbVar14[1];
    pbVar14 = pbVar14 + 1;
  }
  bVar4 = true;
LAB_00e9c338:
  bVar5 = true;
LAB_00e9c33c:
  uVar17 = (uint)*pbVar14;
  if (*pbVar14 == 0x2e) {
    pbVar19 = pbVar14 + 1;
    bVar3 = *pbVar19;
    if (9 < bVar3 - 0x30) {
      lVar9 = (long)pbVar19 - lVar1;
      uVar11 = 0xe;
      goto LAB_00e9c694;
    }
    if (bVar4) {
      iVar15 = 0;
    }
    else {
      lVar9 = 0;
      if (!bVar5) {
        uVar8 = uVar7;
      }
      do {
        lVar16 = lVar9;
        uVar17 = (uint)bVar3;
        lVar9 = lVar16;
        if ((uVar8 >> 0x35 != 0) || (0x39 < uVar17)) goto LAB_00e9c3dc;
        pbVar19 = pbVar14 + lVar16 + 2;
        bVar3 = *pbVar19;
        uVar8 = (ulong)(uVar17 - 0x30) + uVar8 * 10;
        uVar17 = (uint)uVar13;
        if (uVar8 != 0) {
          uVar17 = uVar17 + 1;
        }
        uVar13 = (ulong)uVar17;
        lVar9 = lVar16 + 1;
      } while (0x2f < bVar3);
      pbVar19 = pbVar14 + lVar16 + 2;
LAB_00e9c3dc:
      iVar15 = -(int)lVar9;
      dVar20 = (double)uVar8;
    }
    bVar3 = *pbVar19;
    while (uVar17 = (uint)bVar3, uVar17 - 0x30 < 10) {
      if ((int)uVar13 < 0x11) {
        dVar20 = dVar20 * 10.0 + (double)(int)(uVar17 - 0x30);
        iVar15 = iVar15 + -1;
        if (0.0 < dVar20) {
          uVar13 = (ulong)((int)uVar13 + 1);
        }
      }
      pbVar19 = pbVar19 + 1;
      bVar3 = *pbVar19;
    }
    bVar4 = true;
  }
  else {
    iVar15 = 0;
    pbVar19 = pbVar14;
  }
  if ((uVar17 | 0x20) == 0x65) {
    if (!bVar5) {
      uVar8 = uVar7;
    }
    bVar3 = pbVar19[1];
    if (!bVar4) {
      dVar20 = (double)uVar8;
    }
    if (bVar3 == 0x2d) {
      pbVar19 = pbVar19 + 2;
      bVar4 = true;
    }
    else if (bVar3 == 0x2b) {
      bVar4 = false;
      pbVar19 = pbVar19 + 2;
    }
    else {
      bVar4 = false;
      pbVar19 = pbVar19 + 1;
    }
    uVar6 = *pbVar19 - 0x30;
    if (uVar6 < 10) {
      pbVar19 = pbVar19 + 1;
      if (bVar4) {
        bVar3 = *pbVar19;
        while (bVar3 - 0x30 < 10) {
          uVar6 = (uVar6 * 10 + (uint)bVar3) - 0x30;
          pbVar19 = pbVar19 + 1;
          if (0xccccccb < (int)uVar6) {
            bVar3 = *pbVar19;
            while (bVar3 - 0x30 < 10) {
              pbVar19 = pbVar19 + 1;
              bVar3 = *pbVar19;
            }
          }
          bVar3 = *pbVar19;
        }
LAB_00e9c594:
        uVar17 = -uVar6;
        if (!bVar4) {
          uVar17 = uVar6;
        }
        goto LAB_00e9c59c;
      }
      do {
        if (9 < *pbVar19 - 0x30) goto LAB_00e9c594;
        uVar6 = ((uint)*pbVar19 + uVar6 * 10) - 0x30;
        pbVar19 = pbVar19 + 1;
      } while ((int)uVar6 <= 0x134 - iVar15);
      lVar9 = (long)pbVar19 - lVar1;
      uVar11 = 0xd;
    }
    else {
      lVar9 = (long)pbVar19 - lVar1;
      uVar11 = 0xf;
    }
  }
  else {
    if (bVar4) {
      uVar17 = 0;
LAB_00e9c59c:
      iVar15 = uVar17 + iVar15;
      if (iVar15 < -0x134) {
        dVar21 = 0.0;
        if (-0x269 < iVar15) {
          dVar21 = (dVar20 / 1e+308) / *(double *)(&DAT_01b90e20 + (long)(-0x134 - iVar15) * 8);
        }
      }
      else if (iVar15 < 0) {
        dVar21 = dVar20 / *(double *)(&DAT_01b90e20 + (long)iVar15 * -8);
      }
      else {
        dVar21 = dVar20 * *(double *)(&DAT_01b90e20 + (long)iVar15 * 8);
      }
      pdVar10 = *(double **)(param_3 + 0x40);
      dVar20 = -dVar21;
      if (bVar2 != 0x2d) {
        dVar20 = dVar21;
      }
      pdVar12 = pdVar10 + 3;
      if (*(double **)(param_3 + 0x48) <= pdVar12) {
        FUN_008fe2e0(param_3 + 0x28,1);
        pdVar10 = *(double **)(param_3 + 0x40);
        pdVar12 = pdVar10 + 3;
      }
      *(double **)(param_3 + 0x40) = pdVar12;
      pdVar10[1] = 0.0;
      *(undefined4 *)(pdVar10 + 2) = 0x4206;
      *pdVar10 = dVar20;
      pbVar14 = pbVar19;
      goto LAB_00e9c69c;
    }
    if (bVar5) {
      if (bVar2 == 0x2d) {
        uVar7 = FUN_008fea70(param_3,-uVar8);
      }
      else {
        uVar7 = FUN_008feb08(param_3,uVar8);
      }
    }
    else if (bVar2 == 0x2d) {
      uVar7 = FUN_008feb8c(param_3,-(int)uVar7);
    }
    else {
      uVar7 = FUN_008febf4(param_3);
    }
    pbVar14 = pbVar19;
    if ((uVar7 & 1) != 0) goto LAB_00e9c69c;
    lVar9 = (long)pbVar19 - lVar1;
    uVar11 = 0x10;
  }
LAB_00e9c694:
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(long *)(param_1 + 0x38) = lVar9;
  pbVar14 = pbVar19;
LAB_00e9c69c:
  *param_2 = (long)pbVar14;
  param_2[1] = lVar1;
  return;
}




void FUN_00e9c6d0(long param_1,long *param_2,undefined8 param_3)

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
      bVar1 = (&DAT_01bf0648)[pbVar3[1]];
      if (bVar1 != 0) goto LAB_00e9c754;
      if (pbVar3[1] != 0x75) {
        lVar6 = param_2[1];
        pbVar3 = pbVar3 + 1;
        goto LAB_00e9c848;
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
              goto LAB_00e9c7ec;
            }
            lVar6 = param_2[1];
            uVar7 = 9;
            pbVar3 = (byte *)(*param_2 + -2);
            goto LAB_00e9c86c;
          }
        }
        lVar6 = param_2[1];
        pbVar3 = (byte *)(pcVar4 + -2);
        uVar7 = 9;
        goto LAB_00e9c86c;
      }
LAB_00e9c7ec:
      FUN_008fe6fc(param_3,uVar8);
    }
    else {
      if (bVar1 == 0) {
        lVar6 = param_2[1];
        pbVar3 = pbVar3 + -1;
        uVar7 = 0xb;
        goto LAB_00e9c86c;
      }
      if (bVar1 == 0x22) {
        *param_2 = (long)(pbVar3 + 1);
        FUN_008fe608(param_3,0);
        return;
      }
      if (bVar1 < 0x20) {
        lVar6 = param_2[1];
        pbVar3 = pbVar3 + -1;
LAB_00e9c848:
        uVar7 = 10;
LAB_00e9c86c:
        *(undefined4 *)(param_1 + 0x30) = uVar7;
        *(long *)(param_1 + 0x38) = (long)pbVar3 - lVar6;
        return;
      }
      *param_2 = (long)(pbVar3 + 1);
      bVar1 = *pbVar3;
LAB_00e9c754:
      FUN_008fe608(param_3,bVar1);
    }
    pbVar3 = (byte *)*param_2;
  } while( true );
}




void FUN_00e9c890(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x148);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x148);
      pvVar5 = pvVar2;
      do {
        FUN_008fcdb8(pvVar5,pvVar3);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar3 + 0x18);
        FUN_00e9c980((long)pvVar5 + 0x30,(long)pvVar3 + 0x30);
        *(undefined1 *)((long)pvVar5 + 0x142) = *(undefined1 *)((long)pvVar3 + 0x142);
        puVar1 = (undefined2 *)((long)pvVar3 + 0x140);
        pvVar3 = (void *)((long)pvVar3 + 0x148);
        *(undefined2 *)((long)pvVar5 + 0x140) = *puVar1;
        pvVar5 = (void *)((long)pvVar5 + 0x148);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x148;
        do {
          FUN_00948920(pvVar3);
          lVar4 = lVar4 + -0x148;
          pvVar3 = (void *)((long)pvVar3 + 0x148);
        } while (lVar4 != 0);
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




void FUN_00e9c980(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = param_1 + 1;
  *puVar5 = 0;
  param_1[2] = 0;
  *param_1 = puVar5;
  plVar6 = (long *)*param_2;
  while (plVar6 != param_2 + 1) {
    FUN_00e9cbbc(param_1,puVar5,plVar6 + 4,plVar6 + 4);
    plVar2 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar2 = plVar6 + 2;
      bVar1 = *(long **)*plVar2 != plVar6;
      plVar6 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar4 = *plVar2;
          plVar2 = (long *)(lVar4 + 0x10);
          plVar6 = (long *)*plVar2;
        } while (*plVar6 != lVar4);
      }
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  puVar5 = param_1 + 4;
  *puVar5 = 0;
  param_1[5] = 0;
  param_1[3] = puVar5;
  if ((long *)param_2[3] != param_2 + 4) {
    plVar6 = (long *)param_2[3];
    do {
      FUN_009ed38c(param_1 + 3,puVar5,plVar6 + 4,plVar6 + 4);
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar2 = plVar6 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar6) {
          do {
            lVar4 = *plVar2;
            plVar2 = (long *)(lVar4 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar4);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar6 = plVar3;
    } while (plVar3 != param_2 + 4);
  }
  FUN_00e9cb3c(param_1 + 6,param_2 + 6);
  FUN_008fcdb8(param_1 + 8,param_2 + 8);
  FUN_008fcdb8(param_1 + 0xb,param_2 + 0xb);
  FUN_008fcdb8(param_1 + 0xe,param_2 + 0xe);
  FUN_008fcdb8(param_1 + 0x11,param_2 + 0x11);
  FUN_008fcdb8(param_1 + 0x14,param_2 + 0x14);
  FUN_008fcdb8(param_1 + 0x17,param_2 + 0x17);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  FUN_008fcdb8(param_1 + 0x1b,param_2 + 0x1b);
  FUN_008fcdb8(param_1 + 0x1e,param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  return;
}




void FUN_00e9cb3c(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00e80b80(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x28;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      puVar1 = (undefined8 *)(lVar3 + 0x20);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x28;
      *(undefined8 *)(lVar4 + 0x20) = *puVar1;
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      lVar4 = lVar4 + 0x28;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void * FUN_00e9cbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00e9cc6c(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x50);
    FUN_008fcdb8((long)pvVar3 + 0x20,param_4);
    FUN_008fcdb8((long)pvVar3 + 0x38,param_4 + 0x18);
    FUN_00941654(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00e9cc6c(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  if (param_1 + 1 == param_2) {
LAB_00e9cd20:
    plVar14 = (long *)*param_2;
    plVar9 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar6 = plVar14;
      plVar13 = param_2;
      if (plVar14 == (long *)0x0) {
        do {
          plVar9 = (long *)plVar13[2];
          bVar7 = (long *)*plVar9 == plVar13;
          plVar13 = plVar9;
        } while (bVar7);
      }
      else {
        do {
          plVar9 = plVar6;
          plVar6 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      bVar4 = *(byte *)(plVar9 + 4);
      bVar5 = *param_5;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(param_5 + 8);
      }
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = plVar9[5];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 != 0) {
        pvVar11 = (void *)plVar9[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)plVar9 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        iVar8 = memcmp(pvVar11,pbVar10,sVar3);
        if (iVar8 != 0) {
          if (-1 < iVar8) goto LAB_00e9ce10;
          goto LAB_00e9ce40;
        }
      }
      if (uVar2 <= uVar1) goto LAB_00e9ce10;
    }
LAB_00e9ce40:
    param_4 = param_2;
    if (plVar14 != (long *)0x0) {
      *param_3 = (long)plVar9;
      return plVar9 + 1;
    }
LAB_00e9ce5c:
    *param_3 = (long)param_2;
  }
  else {
    bVar4 = *(byte *)(param_2 + 4);
    bVar5 = *param_5;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = param_2[5];
    }
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_00e9cd18:
      if (uVar1 < uVar2) goto LAB_00e9cd20;
      if (sVar3 != 0) {
        pvVar11 = (void *)param_2[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)param_2 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        goto LAB_00e9cd6c;
      }
LAB_00e9ce64:
      if (uVar2 < uVar1) {
LAB_00e9ce6c:
        param_4 = param_2 + 1;
        plVar9 = (long *)*param_4;
        if ((long *)*param_4 == (long *)0x0) {
          plVar9 = param_2 + 2;
          plVar14 = (long *)*plVar9;
          if ((long *)*plVar14 != param_2) {
            do {
              lVar12 = *plVar9;
              plVar9 = (long *)(lVar12 + 0x10);
              plVar14 = (long *)*plVar9;
            } while (*plVar14 != lVar12);
          }
        }
        else {
          do {
            plVar14 = plVar9;
            plVar9 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        if (plVar14 != param_1 + 1) {
          bVar4 = *(byte *)(plVar14 + 4);
          uVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = plVar14[5];
          }
          sVar3 = uVar2;
          if (uVar1 <= uVar2) {
            sVar3 = uVar1;
          }
          if (sVar3 != 0) {
            pbVar10 = *(byte **)(param_5 + 0x10);
            pvVar11 = (void *)plVar14[6];
            if ((bVar5 & 1) == 0) {
              pbVar10 = param_5 + 1;
            }
            if ((bVar4 & 1) == 0) {
              pvVar11 = (void *)((long)plVar14 + 0x21);
            }
            iVar8 = memcmp(pbVar10,pvVar11,sVar3);
            if (iVar8 != 0) {
              if (-1 < iVar8) goto LAB_00e9ce10;
              goto LAB_00e9cf18;
            }
          }
          if (uVar2 <= uVar1) {
LAB_00e9ce10:
            plVar9 = (long *)FUN_00941528(param_1,param_3,param_5);
            return plVar9;
          }
        }
LAB_00e9cf18:
        if (param_2[1] != 0) {
          *param_3 = (long)plVar14;
          return plVar14;
        }
        goto LAB_00e9ce5c;
      }
    }
    else {
      pbVar10 = *(byte **)(param_5 + 0x10);
      pvVar11 = (void *)param_2[6];
      if ((bVar5 & 1) == 0) {
        pbVar10 = param_5 + 1;
      }
      if ((bVar4 & 1) == 0) {
        pvVar11 = (void *)((long)param_2 + 0x21);
      }
      iVar8 = memcmp(pbVar10,pvVar11,sVar3);
      if (iVar8 == 0) goto LAB_00e9cd18;
      if (iVar8 < 0) goto LAB_00e9cd20;
LAB_00e9cd6c:
      iVar8 = memcmp(pvVar11,pbVar10,sVar3);
      if (iVar8 == 0) goto LAB_00e9ce64;
      if (iVar8 < 0) goto LAB_00e9ce6c;
    }
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
  }
  return param_4;
}




void FUN_00e9cf58(long param_1)

{
  long lVar1;
  code *pcVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar2 = (code *)**(undefined8 **)(param_1 + 8);
  FUN_008fcdb8(local_40);
  (*pcVar2)(local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9cfc0(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  ulong local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_50 = (undefined1 *)0x0;
  bVar4 = (*param_1 & 1) != 0;
  uVar1 = (ulong)(*param_1 >> 1);
  if (bVar4) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  uVar2 = (long)(uVar1 << 2) >> 2;
  pbVar9 = param_1 + 4;
  if (bVar4) {
    pbVar9 = *(byte **)(param_1 + 0x10);
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar2 < 0x17) {
    local_60 = (ulong)(byte)((int)uVar1 << 1);
    puVar5 = (undefined1 *)((ulong)&local_60 | 1);
  }
  else {
    uVar8 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar5 = operator_new(uVar8);
    local_60 = uVar8 | 1;
    local_58 = uVar2;
    local_50 = puVar5;
  }
  if (uVar1 != 0) {
    lVar6 = uVar1 << 2;
    puVar7 = puVar5;
    do {
      lVar6 = lVar6 + -4;
      *puVar7 = (char)*(undefined4 *)pbVar9;
      puVar7 = puVar7 + 1;
      pbVar9 = pbVar9 + 4;
    } while (lVar6 != 0);
    puVar5 = puVar5 + (uVar1 * 4 - 4 >> 2) + 1;
  }
  *puVar5 = 0;
  FUN_008fcdb8(local_78,&local_60);
  FUN_008fce60(param_2,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

