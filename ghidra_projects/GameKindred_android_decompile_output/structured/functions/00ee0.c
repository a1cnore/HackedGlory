// functions/00ee0 — 10 functions
#include "libGameKindred.h"




void FUN_00ee00c4(long *param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  void *__s;
  long lVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = param_1[0x52];
  lVar5 = *(long *)(lVar4 + 0x30);
  bVar1 = (int)param_1[0xe] != 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xe) = 2;
  }
  if (param_2 != 0) {
    *(code **)(lVar4 + 8) = FUN_00ee02d8;
    *(code **)(lVar4 + 0x10) = FUN_00ee0350;
    *(undefined4 *)(lVar4 + 0x38) = 1;
    goto LAB_00ee01dc;
  }
  pcVar2 = FUN_00ee06ac;
  if (!bVar1) {
    pcVar2 = FUN_00ee09a8;
  }
  *(code **)(lVar4 + 8) = pcVar2;
  *(code **)(lVar4 + 0x10) = FUN_00ee0a8c;
  if (*(int *)((long)param_1 + 0x9c) < 1) {
    lVar3 = *param_1;
    uVar6 = 0x10000003a;
LAB_00ee0168:
    *(undefined8 *)(lVar3 + 0x28) = uVar6;
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < *(int *)((long)param_1 + 0x9c)) {
    lVar3 = *param_1;
    uVar6 = 0x1000000003b;
    goto LAB_00ee0168;
  }
  if ((int)param_1[0xe] == 2) {
    __s = *(void **)(lVar4 + 0x40);
    __n = (ulong)((int)param_1[0x11] + 2) * 6;
    if (__s == (void *)0x0) {
      __s = (void *)(**(code **)(param_1[1] + 8))(param_1,1,__n);
      *(void **)(lVar4 + 0x40) = __s;
    }
    memset(__s,0,__n);
    if (*(long *)(lVar4 + 0x50) == 0) {
      FUN_00ee0228(param_1);
    }
    *(undefined4 *)(lVar4 + 0x48) = 0;
  }
LAB_00ee01dc:
  if (*(int *)(lVar4 + 0x38) != 0) {
    lVar3 = 0;
    do {
      memset(*(void **)(lVar5 + lVar3),0,0x1000);
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x100);
    *(undefined4 *)(lVar4 + 0x38) = 0;
  }
  return;
}




void FUN_00ee0218(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x38) = 1;
  return;
}




void FUN_00ee0228(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x290);
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x7fc);
  lVar3 = 0;
  lVar5 = 0;
  lVar6 = lVar1 + 0x3fc;
  *(long *)(lVar8 + 0x50) = lVar6;
  do {
    *(int *)(lVar6 + lVar5 * 4) = (int)lVar5;
    lVar5 = lVar5 + 1;
    *(int *)(lVar6 + lVar3 * 4) = (int)lVar3;
    lVar3 = lVar3 + -1;
  } while (lVar5 != 0x10);
  iVar2 = 0x10;
  lVar6 = 0x10f;
  lVar5 = 0x3bc;
  do {
    iVar4 = (int)lVar6;
    *(int *)(lVar1 + lVar6 * 4) = iVar2;
    *(int *)(lVar1 + lVar5) = -iVar2;
    lVar6 = lVar6 + 1;
    iVar2 = (~(iVar4 - 0xfeU) & 1) + iVar2;
    lVar5 = lVar5 + -4;
  } while (lVar6 != 0x12f);
  lVar6 = 0x33c;
  piVar7 = (int *)(lVar1 + 0x4bc);
  do {
    *piVar7 = iVar2;
    *(int *)(lVar1 + lVar6) = -iVar2;
    lVar6 = lVar6 + -4;
    piVar7 = piVar7 + 1;
  } while (lVar6 != -4);
  return;
}




void FUN_00ee02d8(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  
  if (0 < (int)param_4) {
    iVar4 = *(int *)(param_1 + 0x88);
    uVar8 = 0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
    do {
      if (iVar4 != 0) {
        pbVar10 = *(byte **)(param_2 + uVar8 * 8);
        iVar7 = iVar4;
        do {
          bVar5 = *pbVar10;
          pbVar1 = pbVar10 + 1;
          pbVar2 = pbVar10 + 2;
          pbVar10 = pbVar10 + 3;
          lVar3 = *(long *)(lVar9 + ((ulong)bVar5 & 0xf8)) + (ulong)(*pbVar1 >> 2) * 0x40;
          sVar6 = *(short *)(lVar3 + (ulong)(*pbVar2 >> 3) * 2);
          if (sVar6 != -1) {
            sVar6 = sVar6 + 1;
          }
          iVar7 = iVar7 + -1;
          *(short *)(lVar3 + (ulong)(*pbVar2 >> 3) * 2) = sVar6;
        } while (iVar7 != 0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
  return;
}




void FUN_00ee0350(long *param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  
  lVar24 = param_1[0x52];
  uVar25 = 1;
  param_1[0x14] = *(long *)(lVar24 + 0x20);
  iVar5 = *(int *)(lVar24 + 0x28);
  piVar11 = (int *)(**(code **)param_1[1])(param_1,1,(long)iVar5 * 0x28);
  piVar11[4] = 0;
  piVar11[5] = 0x1f;
  piVar11[2] = 0;
  piVar11[3] = 0x3f;
  piVar11[0] = 0;
  piVar11[1] = 0x1f;
  FUN_00ee0a90(param_1,piVar11);
  if (1 < iVar5) {
    uVar25 = 1;
    do {
      if (iVar5 < (int)uVar25 * 2) {
        uVar16 = 0;
        lVar18 = 0;
        piVar12 = (int *)0x0;
        piVar19 = piVar11;
        do {
          uVar16 = uVar16 + 1;
          piVar13 = piVar19;
          lVar20 = *(long *)(piVar19 + 6);
          if (*(long *)(piVar19 + 6) <= lVar18) {
            piVar13 = piVar12;
            lVar20 = lVar18;
          }
          lVar18 = lVar20;
          piVar19 = piVar19 + 10;
          piVar12 = piVar13;
        } while (uVar25 != uVar16);
      }
      else {
        uVar16 = 0;
        piVar12 = (int *)0x0;
        lVar18 = 0;
        piVar19 = piVar11;
        do {
          piVar13 = piVar12;
          lVar20 = lVar18;
          if ((lVar18 < *(long *)(piVar19 + 8)) &&
             (piVar13 = piVar19, lVar20 = *(long *)(piVar19 + 8), *(long *)(piVar19 + 6) < 1)) {
            piVar13 = piVar12;
            lVar20 = lVar18;
          }
          uVar16 = uVar16 + 1;
          piVar19 = piVar19 + 10;
          piVar12 = piVar13;
          lVar18 = lVar20;
        } while (uVar25 != uVar16);
      }
      if (piVar13 == (int *)0x0) {
        if ((int)uVar25 < 1) goto LAB_00ee0668;
        break;
      }
      piVar19 = piVar11 + uVar25 * 10;
      piVar19[5] = piVar13[5];
      uVar28 = *(undefined8 *)piVar13;
      *(undefined8 *)(piVar19 + 2) = *(undefined8 *)(piVar13 + 2);
      *(undefined8 *)piVar19 = uVar28;
      piVar19[4] = piVar13[4];
      iVar10 = piVar13[3] - piVar13[2];
      iVar6 = (piVar13[1] - *piVar13) * 0x10;
      iVar17 = iVar10 * 0xc;
      iVar4 = iVar6;
      if (iVar6 <= iVar17) {
        iVar4 = iVar10 * 0xc;
      }
      cVar3 = '\x02';
      if ((piVar13[5] - piVar13[4]) * 8 <= iVar4) {
        cVar3 = iVar6 <= iVar17;
      }
      if (cVar3 == '\x02') {
        iVar17 = piVar13[4] + piVar13[5];
        if (iVar17 < 0) {
          iVar17 = iVar17 + 1;
        }
        piVar12 = piVar19 + 4;
        iVar17 = iVar17 >> 1;
        piVar13[5] = iVar17;
LAB_00ee0514:
        *piVar12 = iVar17 + 1;
      }
      else {
        if (cVar3 == '\x01') {
          iVar17 = piVar13[2] + piVar13[3];
          if (iVar17 < 0) {
            iVar17 = iVar17 + 1;
          }
          iVar17 = iVar17 >> 1;
          piVar12 = piVar11 + uVar25 * 10 + 2;
          piVar13[3] = iVar17;
          goto LAB_00ee0514;
        }
        if (cVar3 == '\0') {
          iVar17 = *piVar13 + piVar13[1];
          if (iVar17 < 0) {
            iVar17 = iVar17 + 1;
          }
          iVar17 = iVar17 >> 1;
          piVar13[1] = iVar17;
          piVar12 = piVar19;
          goto LAB_00ee0514;
        }
      }
      FUN_00ee0a90(param_1);
      FUN_00ee0a90(param_1,piVar19);
      uVar25 = uVar25 + 1;
    } while ((long)uVar25 < (long)iVar5);
  }
  uVar16 = 0;
  do {
    piVar19 = piVar11 + uVar16 * 10;
    lVar18 = 0;
    lVar22 = 0;
    lVar20 = 0;
    lVar21 = 0;
    if (*piVar19 <= piVar19[1]) {
      iVar5 = piVar19[2];
      iVar17 = piVar19[4];
      lVar21 = 0;
      lVar20 = 0;
      lVar22 = 0;
      lVar18 = 0;
      lVar23 = (long)*piVar19;
      do {
        if (iVar5 <= piVar19[3]) {
          lVar14 = *(long *)(*(long *)(param_1[0x52] + 0x30) + lVar23 * 8) + (long)iVar5 * 0x40;
          lVar15 = (long)iVar5;
          do {
            if (iVar17 <= piVar19[5]) {
              lVar26 = (long)iVar17;
              uVar2 = iVar17 << 3 | 4;
              do {
                uVar27 = (ulong)*(ushort *)(lVar14 + lVar26 * 2);
                if (uVar27 != 0) {
                  lVar18 = lVar18 + uVar27;
                  lVar22 = lVar22 + uVar27 * (long)(int)((int)lVar23 << 3 | 4);
                  lVar20 = lVar20 + uVar27 * (long)(int)((int)lVar15 << 2 | 2);
                  lVar21 = lVar21 + uVar27 * (long)(int)uVar2;
                }
                uVar2 = uVar2 + 8;
                bVar1 = lVar26 < piVar19[5];
                lVar26 = lVar26 + 1;
              } while (bVar1);
            }
            lVar14 = lVar14 + 0x40;
            bVar1 = lVar15 < piVar19[3];
            lVar15 = lVar15 + 1;
          } while (bVar1);
        }
        bVar1 = lVar23 < piVar19[1];
        lVar23 = lVar23 + 1;
      } while (bVar1);
    }
    lVar23 = lVar18 >> 1;
    uVar7 = 0;
    if (lVar18 != 0) {
      uVar7 = (undefined1)((lVar22 + lVar23) / lVar18);
    }
    uVar8 = 0;
    if (lVar18 != 0) {
      uVar8 = (undefined1)((lVar20 + lVar23) / lVar18);
    }
    uVar9 = 0;
    if (lVar18 != 0) {
      uVar9 = (undefined1)((lVar21 + lVar23) / lVar18);
    }
    *(undefined1 *)(*(long *)param_1[0x14] + uVar16) = uVar7;
    *(undefined1 *)(*(long *)(param_1[0x14] + 8) + uVar16) = uVar8;
    *(undefined1 *)(*(long *)(param_1[0x14] + 0x10) + uVar16) = uVar9;
    uVar16 = uVar16 + 1;
  } while (uVar16 != (uVar25 & 0xffffffff));
LAB_00ee0668:
  lVar18 = *param_1;
  *(int *)((long)param_1 + 0x9c) = (int)uVar25;
  *(undefined4 *)(lVar18 + 0x28) = 0x62;
  *(int *)(lVar18 + 0x2c) = (int)uVar25;
  (**(code **)(*param_1 + 8))(param_1,1);
  *(undefined4 *)(lVar24 + 0x38) = 1;
  return;
}




void FUN_00ee06ac(long param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  long lVar16;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  undefined2 *puVar27;
  long lVar28;
  undefined2 *puVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  byte *pbVar36;
  short *psVar37;
  undefined1 *puVar38;
  undefined2 uVar39;
  int iVar40;
  int iVar41;
  undefined2 uVar42;
  int iVar43;
  
  if (0 < (int)param_4) {
    uVar26 = 0;
    iVar7 = *(int *)(param_1 + 0x88);
    plVar23 = *(long **)(param_1 + 0xa0);
    lVar31 = *(long *)(param_1 + 0x290);
    lVar34 = *(long *)(param_1 + 0x1b8);
    lVar5 = *plVar23;
    lVar6 = plVar23[1];
    lVar20 = plVar23[2];
    lVar35 = *(long *)(lVar31 + 0x30);
    lVar16 = *(long *)(lVar31 + 0x50);
    do {
      lVar28 = *(long *)(param_2 + uVar26 * 8);
      puVar38 = *(undefined1 **)(param_3 + uVar26 * 8);
      bVar4 = *(int *)(lVar31 + 0x48) == 0;
      if (bVar4) {
        puVar27 = *(undefined2 **)(lVar31 + 0x40);
        uVar30 = 3;
        lVar21 = 1;
      }
      else {
        uVar30 = 0xfffffffd;
        lVar28 = lVar28 + (ulong)(iVar7 * 3 - 3);
        lVar21 = -1;
        puVar38 = puVar38 + (iVar7 - 1);
        puVar27 = (undefined2 *)(*(long *)(lVar31 + 0x40) + (ulong)(iVar7 * 3 + 3) * 2);
      }
      *(uint *)(lVar31 + 0x48) = (uint)bVar4;
      if (iVar7 == 0) {
        uVar39 = 0;
        uVar42 = 0;
        uVar17 = 0;
        puVar29 = puVar27;
      }
      else {
        pbVar36 = (byte *)(lVar28 + 1);
        iVar25 = 0;
        iVar22 = 0;
        iVar24 = 0;
        iVar43 = 0;
        iVar40 = 0;
        puVar29 = (undefined2 *)((long)puVar27 + ((ulong)(iVar7 - 1) * 2 + 2) * (long)(int)uVar30);
        psVar37 = puVar27 + 2;
        iVar41 = iVar7;
        iVar19 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar18 = 0;
        do {
          psVar3 = (short *)((long)psVar37 + (-(uVar30 >> 0x1f) & 0xfffffffe00000000 | uVar30 << 1))
          ;
          bVar8 = *(byte *)(lVar34 + (long)*(int *)(lVar16 + (long)(iVar25 + psVar3[-2] + 8 >> 4) *
                                                             4) + (ulong)pbVar36[-1]);
          bVar9 = *(byte *)(lVar34 + (long)*(int *)(lVar16 + (long)(iVar22 + psVar3[-1] + 8 >> 4) *
                                                             4) + (ulong)*pbVar36);
          bVar10 = *(byte *)(lVar34 + (long)*(int *)(lVar16 + (long)(iVar24 + *psVar3 + 8 >> 4) * 4)
                                      + (ulong)pbVar36[1]);
          puVar1 = (ushort *)
                   (*(long *)(lVar35 + (ulong)(bVar8 >> 3) * 8) + (ulong)(bVar9 >> 2) * 0x40 +
                   (ulong)(bVar10 >> 3) * 2);
          uVar11 = *puVar1;
          if (uVar11 == 0) {
            FUN_00ee0e54(param_1);
            uVar11 = *puVar1;
          }
          lVar28 = (ulong)uVar11 - 1;
          *puVar38 = (char)lVar28;
          iVar41 = iVar41 + -1;
          iVar12 = (uint)bVar8 - (uint)*(byte *)(lVar5 + lVar28);
          puVar38 = puVar38 + lVar21;
          iVar13 = (uint)bVar9 - (uint)*(byte *)(lVar6 + lVar28);
          iVar2 = iVar12 * 5 + iVar19;
          uVar17 = (undefined2)iVar2;
          iVar14 = (uint)bVar10 - (uint)*(byte *)(lVar20 + lVar28);
          psVar37[-1] = (short)iVar13 * 3 + (short)iVar43;
          iVar43 = iVar13 * 5 + iVar32;
          uVar42 = (undefined2)iVar43;
          sVar15 = (short)iVar40;
          iVar40 = iVar14 * 5 + iVar33;
          uVar39 = (undefined2)iVar40;
          psVar37[-2] = (short)iVar12 * 3 + (short)iVar18;
          iVar25 = iVar12 * 7;
          iVar22 = iVar13 * 7;
          iVar24 = iVar14 * 7;
          *psVar37 = (short)iVar14 * 3 + sVar15;
          pbVar36 = pbVar36 + (int)uVar30;
          psVar37 = psVar3;
          iVar19 = iVar12;
          iVar32 = iVar13;
          iVar33 = iVar14;
          iVar18 = iVar2;
        } while (iVar41 != 0);
      }
      uVar26 = uVar26 + 1;
      *puVar29 = uVar17;
      puVar29[1] = uVar42;
      puVar29[2] = uVar39;
    } while (uVar26 != param_4);
  }
  return;
}




void FUN_00ee09a8(long param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  
  if (0 < (int)param_4) {
    iVar2 = *(int *)(param_1 + 0x88);
    uVar5 = 0;
    lVar6 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
    do {
      if (iVar2 != 0) {
        pbVar8 = *(byte **)(param_2 + uVar5 * 8);
        pcVar7 = *(char **)(param_3 + uVar5 * 8);
        iVar3 = iVar2;
        do {
          puVar1 = (ushort *)
                   (*(long *)(lVar6 + (ulong)(*pbVar8 >> 3) * 8) + (ulong)(pbVar8[1] >> 2) * 0x40 +
                   (ulong)(pbVar8[2] >> 3) * 2);
          uVar4 = *puVar1;
          if (uVar4 == 0) {
            FUN_00ee0e54(param_1,*pbVar8 >> 3,(ulong)(pbVar8[1] >> 2),(ulong)(pbVar8[2] >> 3));
            uVar4 = (ushort)(byte)*puVar1;
          }
          iVar3 = iVar3 + -1;
          *pcVar7 = (char)uVar4 + -1;
          pbVar8 = pbVar8 + 3;
          pcVar7 = pcVar7 + 1;
        } while (iVar3 != 0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_4);
  }
  return;
}




void FUN_00ee0a8c(void)

{
  return;
}




void FUN_00ee0a90(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  
  iVar4 = *param_2;
  iVar17 = param_2[1];
  iVar15 = param_2[2];
  iVar12 = param_2[3];
  iVar10 = param_2[4];
  iVar13 = param_2[5];
  lVar9 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
  lVar16 = (long)iVar15;
  lVar14 = (long)iVar12;
  lVar11 = (long)iVar10;
  if (iVar4 < iVar17) {
    lVar5 = (long)iVar4;
    do {
      if (iVar15 <= iVar12) {
        lVar6 = lVar16;
        do {
          if (iVar10 <= iVar13) {
            psVar7 = (short *)(*(long *)(lVar9 + lVar5 * 8) + lVar6 * 0x40 + lVar11 * 2);
            iVar8 = iVar10 + -1;
            do {
              if (*psVar7 != 0) {
                iVar4 = (int)lVar5;
                *param_2 = iVar4;
                goto LAB_00ee0b2c;
              }
              iVar8 = iVar8 + 1;
              psVar7 = psVar7 + 1;
            } while (iVar8 < iVar13);
          }
          bVar1 = lVar6 < lVar14;
          lVar6 = lVar6 + 1;
        } while (bVar1);
      }
      bVar1 = lVar5 < iVar17;
      lVar5 = lVar5 + 1;
    } while (bVar1);
  }
LAB_00ee0b2c:
  if (iVar4 < iVar17) {
    lVar5 = (long)iVar17;
    do {
      if (iVar15 <= iVar12) {
        lVar6 = lVar16;
        do {
          if (iVar10 <= iVar13) {
            psVar7 = (short *)(*(long *)(lVar9 + lVar5 * 8) + lVar6 * 0x40 + lVar11 * 2);
            iVar8 = iVar10 + -1;
            do {
              if (*psVar7 != 0) {
                iVar17 = (int)lVar5;
                param_2[1] = iVar17;
                goto LAB_00ee0ba4;
              }
              iVar8 = iVar8 + 1;
              psVar7 = psVar7 + 1;
            } while (iVar8 < iVar13);
          }
          bVar1 = lVar6 < lVar14;
          lVar6 = lVar6 + 1;
        } while (bVar1);
      }
      bVar1 = iVar4 < lVar5;
      lVar5 = lVar5 + -1;
    } while (bVar1);
  }
LAB_00ee0ba4:
  if (iVar15 < iVar12) {
    do {
      lVar5 = (long)iVar4;
      if (iVar4 <= iVar17) {
        do {
          if (iVar10 <= iVar13) {
            psVar7 = (short *)(*(long *)(lVar9 + lVar5 * 8) + lVar16 * 0x40 + lVar11 * 2);
            iVar8 = iVar10 + -1;
            do {
              if (*psVar7 != 0) {
                iVar15 = (int)lVar16;
                param_2[2] = iVar15;
                goto LAB_00ee0c20;
              }
              iVar8 = iVar8 + 1;
              psVar7 = psVar7 + 1;
            } while (iVar8 < iVar13);
          }
          bVar1 = lVar5 < iVar17;
          lVar5 = lVar5 + 1;
        } while (bVar1);
      }
      bVar1 = lVar16 < lVar14;
      lVar16 = lVar16 + 1;
    } while (bVar1);
  }
LAB_00ee0c20:
  if (iVar15 < iVar12) {
    do {
      lVar16 = (long)iVar4;
      if (iVar4 <= iVar17) {
        do {
          if (iVar10 <= iVar13) {
            psVar7 = (short *)(*(long *)(lVar9 + lVar16 * 8) + lVar14 * 0x40 + lVar11 * 2);
            iVar8 = iVar10 + -1;
            do {
              if (*psVar7 != 0) {
                iVar12 = (int)lVar14;
                param_2[3] = iVar12;
                goto LAB_00ee0ca0;
              }
              iVar8 = iVar8 + 1;
              psVar7 = psVar7 + 1;
            } while (iVar8 < iVar13);
          }
          bVar1 = lVar16 < iVar17;
          lVar16 = lVar16 + 1;
        } while (bVar1);
      }
      bVar1 = iVar15 < lVar14;
      lVar14 = lVar14 + -1;
    } while (bVar1);
  }
LAB_00ee0ca0:
  if (iVar10 < iVar13) {
    do {
      lVar14 = (long)iVar4;
      if (iVar4 <= iVar17) {
        do {
          if (iVar15 <= iVar12) {
            psVar7 = (short *)(*(long *)(lVar9 + lVar14 * 8) + (long)iVar15 * 0x40 + lVar11 * 2);
            iVar8 = iVar15 + -1;
            do {
              if (*psVar7 != 0) {
                iVar10 = (int)lVar11;
                param_2[4] = iVar10;
                goto LAB_00ee0d24;
              }
              iVar8 = iVar8 + 1;
              psVar7 = psVar7 + 0x20;
            } while (iVar8 < iVar12);
          }
          bVar1 = lVar14 < iVar17;
          lVar14 = lVar14 + 1;
        } while (bVar1);
      }
      bVar1 = lVar11 < iVar13;
      lVar11 = lVar11 + 1;
    } while (bVar1);
  }
LAB_00ee0d24:
  if (iVar10 < iVar13) {
    lVar11 = (long)iVar13;
    do {
      lVar14 = (long)iVar4;
      if (iVar4 <= iVar17) {
        do {
          if (iVar15 <= iVar12) {
            psVar7 = (short *)(*(long *)(lVar9 + lVar14 * 8) + (long)iVar15 * 0x40 + lVar11 * 2);
            iVar8 = iVar15 + -1;
            do {
              if (*psVar7 != 0) {
                iVar13 = (int)lVar11;
                param_2[5] = iVar13;
                goto LAB_00ee0da8;
              }
              iVar8 = iVar8 + 1;
              psVar7 = psVar7 + 0x20;
            } while (iVar8 < iVar12);
          }
          bVar1 = lVar14 < iVar17;
          lVar14 = lVar14 + 1;
        } while (bVar1);
      }
      bVar1 = iVar10 < lVar11;
      lVar11 = lVar11 + -1;
    } while (bVar1);
  }
LAB_00ee0da8:
  iVar8 = (iVar12 - iVar15) * 0xc;
  iVar2 = (iVar17 - iVar4) * 0x10;
  iVar3 = (iVar13 - iVar10) * 8;
  lVar11 = 0;
  *(long *)(param_2 + 6) =
       (long)iVar8 * (long)iVar8 + (long)iVar2 * (long)iVar2 + (long)iVar3 * (long)iVar3;
  if (iVar4 <= iVar17) {
    lVar11 = 0;
    lVar14 = (long)iVar4;
    do {
      if (iVar15 <= iVar12) {
        lVar16 = (long)iVar15;
        do {
          if (iVar10 <= iVar13) {
            psVar7 = (short *)(*(long *)(lVar9 + lVar14 * 8) + lVar16 * 0x40 + (long)iVar10 * 2);
            iVar4 = iVar10 + -1;
            do {
              iVar4 = iVar4 + 1;
              if (*psVar7 != 0) {
                lVar11 = lVar11 + 1;
              }
              psVar7 = psVar7 + 1;
            } while (iVar4 < iVar13);
          }
          bVar1 = lVar16 < iVar12;
          lVar16 = lVar16 + 1;
        } while (bVar1);
      }
      bVar1 = lVar14 < iVar17;
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  *(long *)(param_2 + 8) = lVar11;
  return;
}




void FUN_00ee0e54(long param_1,ulong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar8;
  uint uVar9;
  byte bVar10;
  long lVar11;
  uint uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  uint uVar29;
  undefined1 *puVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  undefined1 local_9f0 [128];
  byte local_970 [256];
  long local_870 [256];
  long local_70;
  uint uVar7;
  
  puVar20 = local_9f0;
  lVar11 = tpidr_el0;
  uVar12 = (uint)(param_2 >> 2) & 0x3fffffff;
  local_70 = *(long *)(lVar11 + 0x28);
  uVar9 = *(uint *)(param_1 + 0x9c);
  lVar19 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
  uVar1 = uVar12 << 5 | 4;
  uVar2 = (param_3 >> 3) << 5 | 2;
  uVar3 = (param_4 >> 2) << 5 | 4;
  if ((int)uVar9 < 1) {
    uVar12 = 0;
  }
  else {
    puVar17 = *(undefined8 **)(param_1 + 0xa0);
    pbVar14 = (byte *)*puVar17;
    pbVar16 = (byte *)puVar17[1];
    pbVar18 = (byte *)puVar17[2];
    uVar12 = uVar12 << 5 | 0x1c;
    uVar4 = (param_3 >> 3) << 5 | 0x1e;
    uVar5 = (param_4 >> 2) << 5 | 0x1c;
    lVar21 = 0x7fffffff;
    plVar24 = local_870;
    uVar22 = (ulong)uVar9;
    do {
      bVar10 = *pbVar14;
      uVar7 = uVar1;
      uVar6 = uVar12;
      if (((int)(uint)bVar10 < (int)uVar1) ||
         (uVar29 = (uint)bVar10, uVar7 = uVar12, uVar6 = uVar1, (int)uVar12 < (int)uVar29)) {
        iVar28 = bVar10 - uVar6;
        iVar34 = (bVar10 - uVar7) * 2;
        lVar26 = (long)iVar34 * (long)iVar34;
      }
      else {
        if ((int)(uVar12 + uVar1) >> 1 < (int)uVar29) {
          uVar7 = uVar1;
        }
        iVar28 = uVar29 - uVar7;
        lVar26 = 0;
      }
      bVar10 = *pbVar16;
      uVar6 = uVar4;
      uVar7 = uVar2;
      if (((int)(uint)bVar10 < (int)uVar2) ||
         (uVar6 = uVar2, uVar7 = uVar4, (int)uVar4 < (int)(uint)bVar10)) {
        lVar15 = ((ulong)bVar10 - (long)(int)uVar7) * 3;
        lVar26 = lVar26 + lVar15 * lVar15;
      }
      else {
        uVar6 = uVar4;
        if ((int)(uVar4 + uVar2) >> 1 < (int)(uint)bVar10) {
          uVar6 = uVar2;
        }
      }
      lVar15 = ((ulong)bVar10 - (long)(int)uVar6) * 3;
      bVar10 = *pbVar18;
      uVar32 = (ulong)bVar10;
      uVar7 = uVar3;
      uVar6 = uVar5;
      if (((int)(uint)bVar10 < (int)uVar3) ||
         (uVar7 = uVar5, uVar6 = uVar3, (int)uVar5 < (int)(uint)bVar10)) {
        lVar26 = lVar26 + (uVar32 - (long)(int)uVar7) * (uVar32 - (long)(int)uVar7);
        lVar31 = (uVar32 - (long)(int)uVar6) * (uVar32 - (long)(int)uVar6);
      }
      else {
        if ((int)(uVar5 + uVar3) >> 1 < (int)(uint)bVar10) {
          uVar7 = uVar3;
        }
        lVar31 = (uVar32 - (long)(int)uVar7) * (uVar32 - (long)(int)uVar7);
      }
      lVar31 = lVar15 * lVar15 + (long)(iVar28 * 2) * (long)(iVar28 * 2) + lVar31;
      *plVar24 = lVar26;
      pbVar18 = pbVar18 + 1;
      if (lVar21 <= lVar31) {
        lVar31 = lVar21;
      }
      uVar22 = uVar22 - 1;
      pbVar16 = pbVar16 + 1;
      pbVar14 = pbVar14 + 1;
      lVar21 = lVar31;
      plVar24 = plVar24 + 1;
    } while (uVar22 != 0);
    uVar22 = 0;
    uVar12 = 0;
    do {
      if (local_870[uVar22] <= lVar31) {
        local_970[(int)uVar12] = (byte)uVar22;
        uVar12 = uVar12 + 1;
      }
      uVar22 = uVar22 + 1;
    } while (uVar9 != uVar22);
  }
  lVar21 = 0;
  do {
    *(undefined8 *)((long)local_870 + lVar21 + 8) = 0x7fffffff;
    *(undefined8 *)((long)local_870 + lVar21) = 0x7fffffff;
    lVar21 = lVar21 + 0x10;
  } while (lVar21 != 0x400);
  if (0 < (int)uVar12) {
    uVar22 = 0;
    do {
      plVar23 = *(long **)(param_1 + 0xa0);
      bVar10 = local_970[uVar22];
      uVar32 = (ulong)bVar10;
      plVar24 = local_870;
      lVar15 = (long)(int)uVar2 - (ulong)*(byte *)(plVar23[1] + uVar32);
      lVar31 = (long)(int)uVar3 - (ulong)*(byte *)(plVar23[2] + uVar32);
      uVar9 = (uVar1 - *(byte *)(*plVar23 + uVar32)) * 2;
      lVar26 = lVar15 * 3;
      lVar21 = (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5) + 0x100;
      lVar26 = lVar26 * lVar26 + (long)(int)uVar9 * (long)(int)uVar9 + lVar31 * lVar31;
      puVar13 = local_9f0;
      iVar28 = 3;
      do {
        lVar25 = lVar15 * 0x48 + 0x90;
        lVar27 = lVar26;
        puVar30 = puVar13;
        plVar23 = plVar24;
        iVar34 = 7;
        do {
          lVar33 = 0;
          lVar35 = lVar31 * 0x10 + 0x40;
          lVar36 = lVar27;
          do {
            if (lVar36 < plVar23[lVar33]) {
              plVar23[lVar33] = lVar36;
              puVar30[lVar33] = bVar10;
            }
            lVar33 = lVar33 + 1;
            lVar36 = lVar36 + lVar35;
            lVar35 = lVar35 + 0x80;
          } while ((int)lVar33 != 4);
          plVar23 = plVar23 + 4;
          puVar30 = puVar30 + 4;
          lVar27 = lVar27 + lVar25;
          lVar25 = lVar25 + 0x120;
          bVar8 = iVar34 != 0;
          iVar34 = iVar34 + -1;
        } while (bVar8);
        plVar24 = plVar24 + 0x20;
        puVar13 = puVar13 + 0x20;
        lVar26 = lVar26 + lVar21;
        lVar21 = lVar21 + 0x200;
        bVar8 = iVar28 != 0;
        iVar28 = iVar28 + -1;
      } while (bVar8);
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar12);
  }
  lVar21 = 0;
  do {
    lVar26 = 0;
    lVar15 = *(long *)(lVar19 + (lVar21 + (int)((uint)param_2 & 0xfffffffc)) * 8) +
             (long)(int)(param_3 & 0xfffffff8) * 0x40 + (long)(int)(param_4 & 0xfffffffc) * 2;
    puVar13 = puVar20;
    do {
      lVar31 = 0;
      do {
        *(ushort *)(lVar15 + lVar31 * 2) = (byte)puVar13[lVar31] + 1;
        lVar31 = lVar31 + 1;
      } while (lVar31 != 4);
      lVar26 = lVar26 + 1;
      lVar15 = lVar15 + 0x40;
      puVar13 = puVar13 + 4;
    } while (lVar26 != 8);
    lVar21 = lVar21 + 1;
    puVar20 = puVar20 + 0x20;
  } while (lVar21 != 4);
  if (*(long *)(lVar11 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

