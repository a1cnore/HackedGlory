// functions/00917 — 6 functions
#include "libGameKindred.h"




undefined8 FUN_009170c0(long *param_1,ulong param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = *param_1;
  puVar2 = *(undefined1 **)(lVar5 + 0x18);
  puVar4 = puVar2 + 1;
  bVar1 = *(undefined1 **)(lVar5 + 0x20) <= puVar4;
  if ((param_2 & 1) == 0) {
    if (bVar1) {
      FUN_008fe7c0(lVar5,1);
      puVar2 = *(undefined1 **)(lVar5 + 0x18);
      puVar4 = puVar2 + 1;
    }
    *(undefined1 **)(lVar5 + 0x18) = puVar4;
    *puVar2 = 0x66;
    lVar5 = *param_1;
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
    if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
      FUN_008fe7c0(lVar5,1);
      puVar2 = *(undefined1 **)(lVar5 + 0x18);
      puVar4 = puVar2 + 1;
    }
    *(undefined1 **)(lVar5 + 0x18) = puVar4;
    *puVar2 = 0x61;
    lVar5 = *param_1;
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
    if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
      FUN_008fe7c0(lVar5,1);
      puVar2 = *(undefined1 **)(lVar5 + 0x18);
      puVar4 = puVar2 + 1;
    }
    *(undefined1 **)(lVar5 + 0x18) = puVar4;
    *puVar2 = 0x6c;
    lVar5 = *param_1;
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
    if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
      FUN_008fe7c0(lVar5,1);
      puVar2 = *(undefined1 **)(lVar5 + 0x18);
      puVar4 = puVar2 + 1;
    }
    *(undefined1 **)(lVar5 + 0x18) = puVar4;
    uVar3 = 0x73;
  }
  else {
    if (bVar1) {
      FUN_008fe7c0(lVar5,1);
      puVar2 = *(undefined1 **)(lVar5 + 0x18);
      puVar4 = puVar2 + 1;
    }
    *(undefined1 **)(lVar5 + 0x18) = puVar4;
    *puVar2 = 0x74;
    lVar5 = *param_1;
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
    if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
      FUN_008fe7c0(lVar5,1);
      puVar2 = *(undefined1 **)(lVar5 + 0x18);
      puVar4 = puVar2 + 1;
    }
    *(undefined1 **)(lVar5 + 0x18) = puVar4;
    *puVar2 = 0x72;
    lVar5 = *param_1;
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
    if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
      FUN_008fe7c0(lVar5,1);
      puVar2 = *(undefined1 **)(lVar5 + 0x18);
      puVar4 = puVar2 + 1;
    }
    *(undefined1 **)(lVar5 + 0x18) = puVar4;
    uVar3 = 0x75;
  }
  *puVar2 = uVar3;
  lVar5 = *param_1;
  puVar2 = *(undefined1 **)(lVar5 + 0x18);
  puVar4 = puVar2 + 1;
  if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
    FUN_008fe7c0(lVar5,1);
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
  }
  *(undefined1 **)(lVar5 + 0x18) = puVar4;
  *puVar2 = 0x65;
  return 1;
}




void FUN_00917274(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if (*param_1 == 0) {
      pvVar2 = operator_new(1);
      *param_1 = (long)pvVar2;
      param_1[1] = (long)pvVar2;
    }
    uVar3 = param_1[5];
  }
  else {
    uVar3 = (param_1[4] - lVar4) + ((param_1[4] - lVar4) + 1U >> 1);
  }
  uVar1 = (param_1[3] - lVar4) + param_2 * 0x10;
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  FUN_008fe358(param_1,uVar1);
  return;
}




undefined8 FUN_009172e8(long *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  
  lVar9 = *param_1;
  puVar3 = *(undefined1 **)(lVar9 + 0x18);
  puVar6 = puVar3 + 1;
  if (*(undefined1 **)(lVar9 + 0x20) <= puVar6) {
    FUN_008fe7c0(lVar9,1);
    puVar3 = *(undefined1 **)(lVar9 + 0x18);
    puVar6 = puVar3 + 1;
  }
  *(undefined1 **)(lVar9 + 0x18) = puVar6;
  *puVar3 = 0x22;
  if (param_3 != 0) {
    pbVar10 = param_2;
    do {
      bVar1 = *pbVar10;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 == '\0') {
        lVar9 = *param_1;
        pbVar5 = *(byte **)(lVar9 + 0x18);
        pbVar8 = pbVar5 + 1;
        if (*(byte **)(lVar9 + 0x20) <= pbVar8) {
          FUN_008fe7c0(lVar9,1);
          pbVar5 = *(byte **)(lVar9 + 0x18);
          pbVar8 = pbVar5 + 1;
        }
        *(byte **)(lVar9 + 0x18) = pbVar8;
        *pbVar5 = bVar1;
      }
      else {
        lVar9 = *param_1;
        puVar3 = *(undefined1 **)(lVar9 + 0x18);
        puVar6 = puVar3 + 1;
        if (*(undefined1 **)(lVar9 + 0x20) <= puVar6) {
          FUN_008fe7c0(lVar9,1);
          puVar3 = *(undefined1 **)(lVar9 + 0x18);
          puVar6 = puVar3 + 1;
        }
        *(undefined1 **)(lVar9 + 0x18) = puVar6;
        *puVar3 = 0x5c;
        lVar9 = *param_1;
        pcVar4 = *(char **)(lVar9 + 0x18);
        pcVar7 = pcVar4 + 1;
        if (*(char **)(lVar9 + 0x20) <= pcVar7) {
          FUN_008fe7c0(lVar9,1);
          pcVar4 = *(char **)(lVar9 + 0x18);
          pcVar7 = pcVar4 + 1;
        }
        *(char **)(lVar9 + 0x18) = pcVar7;
        *pcVar4 = cVar2;
        if (cVar2 == 'u') {
          lVar9 = *param_1;
          puVar3 = *(undefined1 **)(lVar9 + 0x18);
          puVar6 = puVar3 + 1;
          if (*(undefined1 **)(lVar9 + 0x20) <= puVar6) {
            FUN_008fe7c0(lVar9,1);
            puVar3 = *(undefined1 **)(lVar9 + 0x18);
            puVar6 = puVar3 + 1;
          }
          *(undefined1 **)(lVar9 + 0x18) = puVar6;
          *puVar3 = 0x30;
          lVar9 = *param_1;
          puVar3 = *(undefined1 **)(lVar9 + 0x18);
          puVar6 = puVar3 + 1;
          if (*(undefined1 **)(lVar9 + 0x20) <= puVar6) {
            FUN_008fe7c0(lVar9,1);
            puVar3 = *(undefined1 **)(lVar9 + 0x18);
            puVar6 = puVar3 + 1;
          }
          *(undefined1 **)(lVar9 + 0x18) = puVar6;
          *puVar3 = 0x30;
          lVar9 = *param_1;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
          pcVar4 = *(char **)(lVar9 + 0x18);
          pcVar7 = pcVar4 + 1;
          if (*(char **)(lVar9 + 0x20) <= pcVar7) {
            FUN_008fe7c0(lVar9,1);
            pcVar4 = *(char **)(lVar9 + 0x18);
            pcVar7 = pcVar4 + 1;
          }
          *(char **)(lVar9 + 0x18) = pcVar7;
          *pcVar4 = cVar2;
          lVar9 = *param_1;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 & 0xf];
          pcVar4 = *(char **)(lVar9 + 0x18);
          pcVar7 = pcVar4 + 1;
          if (*(char **)(lVar9 + 0x20) <= pcVar7) {
            FUN_008fe7c0(lVar9,1);
            pcVar4 = *(char **)(lVar9 + 0x18);
            pcVar7 = pcVar4 + 1;
          }
          *(char **)(lVar9 + 0x18) = pcVar7;
          *pcVar4 = cVar2;
        }
      }
      pbVar10 = pbVar10 + 1;
    } while ((ulong)((long)pbVar10 - (long)param_2) < (ulong)param_3);
  }
  lVar9 = *param_1;
  puVar3 = *(undefined1 **)(lVar9 + 0x18);
  puVar6 = puVar3 + 1;
  if (*(undefined1 **)(lVar9 + 0x20) <= puVar6) {
    FUN_008fe7c0(lVar9,1);
    puVar3 = *(undefined1 **)(lVar9 + 0x18);
    puVar6 = puVar3 + 1;
  }
  *(undefined1 **)(lVar9 + 0x18) = puVar6;
  *puVar3 = 0x22;
  return 1;
}




char * FUN_0091754c(ulong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  
  uVar7 = (uint)param_1;
  if (0x270 < ((uint)(param_1 >> 4) & 0xfffffff)) {
    if (99999999 < uVar7) {
      uVar6 = uVar7 % 100000000;
      if (uVar7 < 1000000000) {
        pcVar10 = param_2 + 1;
        *param_2 = (char)(uVar7 / 100000000) + '0';
      }
      else {
        lVar11 = (ulong)(uVar7 / 100000000) * 2;
        cVar1 = (&DAT_01b93778)[(uint)lVar11 | 1];
        pcVar10 = param_2 + 2;
        *param_2 = (&DAT_01b93778)[lVar11];
        param_2[1] = cVar1;
      }
      uVar12 = (ulong)uVar6 / 500000 & 0x3ffe;
      cVar1 = (&DAT_01b93778)[(uint)uVar12 | 1];
      lVar13 = (ulong)(uVar6 / 10000 + (uVar6 / 1000000) * -100) * 2;
      lVar15 = ((ulong)(uVar6 % 10000) / 100) * 2;
      cVar2 = (&DAT_01b93778)[lVar13];
      *pcVar10 = (&DAT_01b93778)[uVar12];
      cVar3 = (&DAT_01b93778)[lVar15];
      lVar11 = (ulong)((uVar6 % 10000) % 100) * 2;
      cVar4 = (&DAT_01b93778)[(uint)lVar13 | 1];
      cVar5 = (&DAT_01b93778)[(uint)lVar15 | 1];
      pcVar10[1] = cVar1;
      cVar1 = (&DAT_01b93778)[lVar11];
      pcVar14 = &DAT_01b93778 + ((uint)lVar11 | 1);
      pcVar9 = pcVar10 + 7;
      pcVar8 = pcVar10 + 8;
      pcVar10[2] = cVar2;
      pcVar10[4] = cVar3;
      pcVar10[3] = cVar4;
      pcVar10[5] = cVar5;
      pcVar10[6] = cVar1;
      goto LAB_00917808;
    }
    uVar12 = (param_1 & 0xffffffff) / 10000 & 0xffff;
    uVar6 = uVar7 + (int)((param_1 & 0xffffffff) / 10000) * -10000;
    uVar16 = (param_1 & 0xffffffff) / 500000 & 0x3ffe;
    lVar15 = (ulong)(uint)((int)uVar12 + (int)(uVar12 / 100) * -100) * 2;
    lVar13 = ((ulong)uVar6 / 100) * 2;
    lVar11 = (ulong)(uVar6 % 100) * 2;
    if (uVar7 < 10000000) {
      if (999999 < uVar7) goto LAB_009176d0;
      pcVar10 = param_2;
      if (0xc34 < uVar7 >> 5) goto LAB_009176e4;
    }
    else {
      *param_2 = (&DAT_01b93778)[uVar16];
      param_2 = param_2 + 1;
LAB_009176d0:
      *param_2 = (&DAT_01b93778)[(uint)uVar16 | 1];
      pcVar10 = param_2 + 1;
LAB_009176e4:
      param_2 = pcVar10 + 1;
      *pcVar10 = (&DAT_01b93778)[lVar15];
    }
    cVar1 = (&DAT_01b93778)[(uint)lVar13 | 1];
    param_2[1] = (&DAT_01b93778)[lVar13];
    cVar2 = (&DAT_01b93778)[lVar11];
    cVar3 = (&DAT_01b93778)[(ulong)((uint)lVar15 | 1) & 0xffff];
    param_2[2] = cVar1;
    param_2[3] = cVar2;
    pcVar8 = param_2 + 5;
    pcVar9 = param_2 + 4;
    *param_2 = cVar3;
    pcVar14 = &DAT_01b93778 + ((uint)lVar11 | 1);
    goto LAB_00917808;
  }
  lVar13 = ((ulong)(uVar7 & 0xffff) / 100) * 2;
  lVar11 = ((ulong)(uVar7 + ((uVar7 & 0xffff) / 100) * -100) & 0xffff) * 2;
  if (uVar7 < 1000) {
    pcVar10 = param_2;
    if (99 < uVar7) goto LAB_00917638;
    pcVar9 = param_2;
    if (9 < uVar7) goto LAB_00917650;
  }
  else {
    *param_2 = (&DAT_01b93778)[lVar13];
    pcVar10 = param_2 + 1;
LAB_00917638:
    param_2 = pcVar10 + 1;
    *pcVar10 = (&DAT_01b93778)[(uint)lVar13 | 1];
LAB_00917650:
    *param_2 = (&DAT_01b93778)[lVar11];
    pcVar9 = param_2 + 1;
  }
  pcVar14 = &DAT_01b93778 + (ushort)((ushort)lVar11 | 1);
  pcVar8 = pcVar9 + 1;
LAB_00917808:
  *pcVar9 = *pcVar14;
  return pcVar8;
}




char * FUN_00917824(ulong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  
  if (99999999 < param_1) {
    if (9999999999999999 < param_1) {
      uVar17 = param_1 / 10000000000000000;
      uVar21 = (uint)uVar17;
      if (uVar21 < 10) {
        pcVar14 = param_2 + 1;
        *param_2 = (char)uVar17 + '0';
      }
      else if (uVar21 < 100) {
        cVar2 = (&DAT_01b93778)[(uint)(uVar17 * 2) | 1];
        pcVar14 = param_2 + 2;
        *param_2 = (&DAT_01b93778)[uVar17 * 2];
        param_2[1] = cVar2;
      }
      else if (uVar21 < 1000) {
        lVar16 = (ulong)(uVar21 % 100) * 2;
        cVar2 = (&DAT_01b93778)[lVar16];
        cVar3 = (&DAT_01b93778)[(uint)lVar16 | 1];
        *param_2 = (char)(uVar21 / 100) + '0';
        param_2[1] = cVar2;
        pcVar14 = param_2 + 3;
        param_2[2] = cVar3;
      }
      else {
        lVar19 = (uVar17 / 100) * 2;
        lVar16 = (ulong)(uVar21 % 100) * 2;
        cVar2 = (&DAT_01b93778)[(uint)lVar19 | 1];
        *param_2 = (&DAT_01b93778)[lVar19];
        cVar3 = (&DAT_01b93778)[lVar16];
        cVar4 = (&DAT_01b93778)[(uint)lVar16 | 1];
        pcVar14 = param_2 + 4;
        param_2[1] = cVar2;
        param_2[2] = cVar3;
        param_2[3] = cVar4;
      }
      uVar17 = (param_1 % 10000000000000000) / 100000000;
      uVar23 = (param_1 % 10000000000000000) % 100000000;
      uVar26 = uVar17 / 500000 & 0x3ffe;
      iVar29 = (int)(uVar17 / 10000);
      uVar21 = (int)uVar17 + iVar29 * -10000;
      iVar20 = (int)(uVar23 / 10000);
      uVar12 = (int)uVar23 + iVar20 * -10000;
      uVar28 = uVar23 / 500000 & 0x3ffe;
      cVar2 = (&DAT_01b93778)[(uint)uVar26 | 1];
      cVar3 = (&DAT_01b93778)[uVar28];
      lVar25 = (ulong)(uint)(iVar29 + (int)(uVar17 / 1000000) * -100) * 2;
      lVar16 = ((ulong)uVar21 / 100) * 2;
      cVar4 = (&DAT_01b93778)[(uint)uVar28 | 1];
      lVar19 = (ulong)(uVar21 % 100) * 2;
      lVar24 = ((ulong)uVar12 / 100) * 2;
      cVar1 = (&DAT_01b93778)[lVar25];
      cVar5 = (&DAT_01b93778)[lVar16];
      *pcVar14 = (&DAT_01b93778)[uVar26];
      lVar22 = (ulong)(uint)(iVar20 + (int)(uVar23 / 1000000) * -100) * 2;
      cVar6 = (&DAT_01b93778)[(uint)lVar25 | 1];
      cVar7 = (&DAT_01b93778)[(uint)lVar16 | 1];
      cVar8 = (&DAT_01b93778)[lVar19];
      pcVar14[1] = cVar2;
      cVar2 = (&DAT_01b93778)[lVar22];
      pcVar14[8] = cVar3;
      cVar3 = (&DAT_01b93778)[lVar24];
      lVar16 = (ulong)(uVar12 % 100) * 2;
      cVar9 = (&DAT_01b93778)[(uint)lVar19 | 1];
      cVar10 = (&DAT_01b93778)[(uint)lVar22 | 1];
      cVar11 = (&DAT_01b93778)[(uint)lVar24 | 1];
      pcVar14[9] = cVar4;
      cVar4 = (&DAT_01b93778)[lVar16];
      pcVar18 = &DAT_01b93778 + ((uint)lVar16 | 1);
      pcVar15 = pcVar14 + 0xf;
      pcVar14[5] = cVar7;
      pcVar13 = pcVar14 + 0x10;
      pcVar14[2] = cVar1;
      pcVar14[4] = cVar5;
      pcVar14[3] = cVar6;
      pcVar14[6] = cVar8;
      pcVar14[10] = cVar2;
      pcVar14[0xc] = cVar3;
      pcVar14[7] = cVar9;
      pcVar14[0xb] = cVar10;
      pcVar14[0xd] = cVar11;
      pcVar14[0xe] = cVar4;
      goto LAB_00917e70;
    }
    uVar23 = param_1 % 100000000;
    uVar26 = param_1 / 100000000 & 0xffffffff;
    uVar17 = uVar26 / 10000 & 0xffff;
    uVar21 = (int)(param_1 / 100000000) + (int)(uVar26 / 10000) * -10000;
    uVar28 = uVar26 / 500000 & 0x3ffe;
    iVar20 = (int)(uVar23 / 10000);
    uVar12 = (int)uVar23 + iVar20 * -10000;
    uVar26 = uVar23 / 500000 & 0x3ffe;
    lVar25 = ((ulong)uVar21 / 100) * 2;
    lVar27 = (ulong)(uint)((int)uVar17 + (int)(uVar17 / 100) * -100) * 2;
    lVar24 = (ulong)(uVar21 % 100) * 2;
    lVar22 = (ulong)(uint)(iVar20 + (int)(uVar23 / 1000000) * -100) * 2;
    lVar19 = ((ulong)uVar12 / 100) * 2;
    lVar16 = (ulong)(uVar12 % 100) * 2;
    if (param_1 < 1000000000000000) {
      if (99999999999999 < param_1) goto LAB_00917a6c;
      pcVar14 = param_2;
      if (9999999999999 < param_1) goto LAB_00917a80;
      if (999999999999 < param_1) goto LAB_00917a90;
      if (99999999999 < param_1) goto LAB_00917aa8;
      if (9999999999 < param_1) goto LAB_00917ab8;
      if (999999999 < param_1) goto LAB_00917acc;
    }
    else {
      *param_2 = (&DAT_01b93778)[uVar28];
      param_2 = param_2 + 1;
LAB_00917a6c:
      *param_2 = (&DAT_01b93778)[(uint)uVar28 | 1];
      pcVar14 = param_2 + 1;
LAB_00917a80:
      param_2 = pcVar14 + 1;
      *pcVar14 = (&DAT_01b93778)[lVar27];
LAB_00917a90:
      *param_2 = (&DAT_01b93778)[(ulong)((uint)lVar27 | 1) & 0xffff];
      pcVar14 = param_2 + 1;
LAB_00917aa8:
      param_2 = pcVar14 + 1;
      *pcVar14 = (&DAT_01b93778)[lVar25];
LAB_00917ab8:
      *param_2 = (&DAT_01b93778)[(uint)lVar25 | 1];
      pcVar14 = param_2 + 1;
LAB_00917acc:
      param_2 = pcVar14 + 1;
      *pcVar14 = (&DAT_01b93778)[lVar24];
    }
    cVar2 = (&DAT_01b93778)[(uint)lVar24 | 1];
    cVar3 = (&DAT_01b93778)[(uint)uVar26 | 1];
    param_2[1] = (&DAT_01b93778)[uVar26];
    pcVar13 = param_2 + 9;
    *param_2 = cVar2;
    param_2[2] = cVar3;
    cVar2 = (&DAT_01b93778)[(uint)lVar22 | 1];
    cVar3 = (&DAT_01b93778)[lVar19];
    cVar4 = (&DAT_01b93778)[(uint)lVar19 | 1];
    param_2[3] = (&DAT_01b93778)[lVar22];
    cVar1 = (&DAT_01b93778)[lVar16];
    param_2[4] = cVar2;
    param_2[5] = cVar3;
    param_2[6] = cVar4;
    param_2[7] = cVar1;
    pcVar15 = param_2 + 8;
    pcVar18 = &DAT_01b93778 + ((uint)lVar16 | 1);
    goto LAB_00917e70;
  }
  uVar21 = (uint)param_1;
  if (0x270 < ((uint)(param_1 >> 4) & 0xfffffff)) {
    uVar17 = (param_1 & 0xffffffff) / 10000 & 0xffff;
    uVar21 = uVar21 + (int)((param_1 & 0xffffffff) / 10000) * -10000;
    uVar23 = (param_1 & 0xffffffff) / 500000 & 0x3ffe;
    lVar22 = (ulong)(uint)((int)uVar17 + (int)(uVar17 / 100) * -100) * 2;
    lVar19 = ((ulong)uVar21 / 100) * 2;
    lVar16 = (ulong)(uVar21 % 100) * 2;
    if (param_1 < 10000000) {
      if (999999 < param_1) goto LAB_00917b58;
      pcVar14 = param_2;
      if (0xc34 < param_1 >> 5) goto LAB_00917b6c;
    }
    else {
      *param_2 = (&DAT_01b93778)[uVar23];
      param_2 = param_2 + 1;
LAB_00917b58:
      *param_2 = (&DAT_01b93778)[(uint)uVar23 | 1];
      pcVar14 = param_2 + 1;
LAB_00917b6c:
      param_2 = pcVar14 + 1;
      *pcVar14 = (&DAT_01b93778)[lVar22];
    }
    cVar2 = (&DAT_01b93778)[(uint)lVar19 | 1];
    param_2[1] = (&DAT_01b93778)[lVar19];
    cVar3 = (&DAT_01b93778)[lVar16];
    cVar4 = (&DAT_01b93778)[(ulong)((uint)lVar22 | 1) & 0xffff];
    param_2[2] = cVar2;
    param_2[3] = cVar3;
    pcVar13 = param_2 + 5;
    pcVar15 = param_2 + 4;
    *param_2 = cVar4;
    pcVar18 = &DAT_01b93778 + ((uint)lVar16 | 1);
    goto LAB_00917e70;
  }
  lVar19 = ((ulong)(uVar21 & 0xffff) / 100) * 2;
  lVar16 = ((ulong)(uVar21 + ((uVar21 & 0xffff) / 100) * -100) & 0xffff) * 2;
  if (uVar21 < 1000) {
    pcVar14 = param_2;
    if (99 < uVar21) goto LAB_00917a18;
    pcVar15 = param_2;
    if (9 < uVar21) goto LAB_00917a30;
  }
  else {
    *param_2 = (&DAT_01b93778)[lVar19];
    pcVar14 = param_2 + 1;
LAB_00917a18:
    param_2 = pcVar14 + 1;
    *pcVar14 = (&DAT_01b93778)[(uint)lVar19 | 1];
LAB_00917a30:
    *param_2 = (&DAT_01b93778)[lVar16];
    pcVar15 = param_2 + 1;
  }
  pcVar18 = &DAT_01b93778 + (ushort)((ushort)lVar16 | 1);
  pcVar13 = pcVar15 + 1;
LAB_00917e70:
  *pcVar15 = *pcVar18;
  return pcVar13;
}




char * FUN_00917e7c(undefined2 *param_1,int param_2,int param_3)

{
  undefined1 *__src;
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  uint uVar6;
  long lVar7;
  
  iVar2 = param_3 + param_2;
  if ((-1 < param_3) && (iVar2 < 0x16)) {
    if (0 < param_3) {
      iVar3 = iVar2;
      if (iVar2 <= param_2 + 1) {
        iVar3 = param_2 + 1;
      }
      memset((void *)((long)param_1 + (long)param_2),0x30,(ulong)(uint)((iVar3 + -1) - param_2) + 1)
      ;
    }
    pcVar4 = (char *)((long)param_1 + (long)iVar2);
    uVar5 = 0x302e;
    goto LAB_00917ed8;
  }
  uVar6 = iVar2 - 1;
  if (uVar6 < 0x15) {
    __src = (undefined1 *)((long)param_1 + (long)iVar2);
    memmove(__src + 1,__src,(long)-param_3);
    *__src = 0x2e;
    return (char *)((long)param_1 + (long)param_2 + 1);
  }
  if (iVar2 + 5U < 6) {
    iVar3 = 2 - iVar2;
    lVar7 = (long)iVar3;
    memmove((void *)((long)param_1 + (long)iVar3),param_1,(long)param_2);
    *param_1 = 0x2e30;
    if (iVar2 < 0) {
      if (iVar3 < 4) {
        iVar3 = 3;
      }
      memset(param_1 + 1,0x30,(ulong)(iVar3 - 2));
    }
    return (char *)((long)param_1 + lVar7 + param_2);
  }
  if (param_2 + -1 == 0) {
    *(undefined1 *)((long)param_1 + 1) = 0x65;
    if ((int)uVar6 < 0) {
      *(undefined1 *)(param_1 + 1) = 0x2d;
      puVar1 = param_1;
LAB_00917fdc:
      pcVar4 = (char *)((long)puVar1 + 3);
      uVar6 = 1 - iVar2;
    }
    else {
      pcVar4 = (char *)(param_1 + 1);
    }
  }
  else {
    puVar1 = (undefined2 *)((long)param_1 + (long)param_2);
    memmove(param_1 + 1,(void *)((long)param_1 + 1),(long)(param_2 + -1));
    pcVar4 = (char *)(puVar1 + 1);
    *(undefined1 *)((long)param_1 + 1) = 0x2e;
    *(undefined1 *)((long)puVar1 + 1) = 0x65;
    if ((int)uVar6 < 0) {
      *pcVar4 = '-';
      goto LAB_00917fdc;
    }
  }
  if (99 < (int)uVar6) {
    uVar5 = *(undefined2 *)(&DAT_01b93778 + (ulong)(uVar6 % 100) * 2);
    *pcVar4 = (char)(uVar6 / 100) + '0';
    *(undefined2 *)(pcVar4 + 1) = uVar5;
    return pcVar4 + 3;
  }
  if ((int)uVar6 < 10) {
    *pcVar4 = (char)uVar6 + '0';
    return pcVar4 + 1;
  }
  uVar5 = *(undefined2 *)(&DAT_01b93778 + (long)(int)uVar6 * 2);
LAB_00917ed8:
  *(undefined2 *)pcVar4 = uVar5;
  return pcVar4 + 2;
}

