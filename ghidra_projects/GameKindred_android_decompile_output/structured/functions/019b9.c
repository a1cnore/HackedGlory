// functions/019b9 — 21 functions
#include "libGameKindred.h"




void FUN_019b9118(char *param_1,int param_2,int param_3,int param_4,char *param_5)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  
  *param_5 = *param_1;
  if (1 < param_2) {
    uVar5 = (ulong)(param_2 - 1U);
    pcVar4 = param_5;
    pcVar1 = param_1;
    do {
      pcVar4 = pcVar4 + 1;
      uVar5 = uVar5 - 1;
      *pcVar4 = pcVar1[1] - *pcVar1;
      pcVar1 = pcVar1 + 1;
    } while (uVar5 != 0);
  }
  if (1 < param_3) {
    lVar2 = (long)param_4;
    iVar3 = 1;
    do {
      param_5[lVar2] = param_1[lVar2] - *param_1;
      lVar6 = lVar2;
      uVar5 = (ulong)(param_2 - 1U);
      if (1 < param_2) {
        do {
          uVar5 = uVar5 - 1;
          param_5[lVar6 + 1] = (param_1 + lVar6)[1] - param_1[lVar6];
          lVar6 = lVar6 + 1;
        } while (uVar5 != 0);
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + lVar2;
      param_5 = param_5 + lVar2;
    } while (iVar3 != param_3);
  }
  return;
}




void FUN_019b91cc(char *param_1,uint param_2,int param_3,int param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  
  *param_5 = *param_1;
  if (1 < (int)param_2) {
    uVar4 = (ulong)(param_2 - 1);
    pcVar2 = param_5;
    pcVar1 = param_1;
    do {
      pcVar2 = pcVar2 + 1;
      uVar4 = uVar4 - 1;
      *pcVar2 = pcVar1[1] - *pcVar1;
      pcVar1 = pcVar1 + 1;
    } while (uVar4 != 0);
  }
  if (1 < param_3) {
    iVar3 = 1;
    do {
      param_5 = param_5 + param_4;
      if (0 < (int)param_2) {
        uVar4 = 0;
        do {
          param_5[uVar4] = (param_1 + param_4)[uVar4] - param_1[uVar4];
          uVar4 = uVar4 + 1;
        } while (param_2 != uVar4);
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + param_4;
    } while (iVar3 != param_3);
  }
  return;
}




void FUN_019b925c(char *param_1,uint param_2,int param_3,int param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  *param_5 = *param_1;
  if (1 < (int)param_2) {
    uVar5 = (ulong)(param_2 - 1);
    pcVar3 = param_5;
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar3 + 1;
      uVar5 = uVar5 - 1;
      *pcVar3 = pcVar2[1] - *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (uVar5 != 0);
  }
  if (1 < param_3) {
    iVar4 = 1;
    do {
      pcVar3 = param_1 + param_4;
      param_5 = param_5 + param_4;
      *param_5 = *pcVar3 - *param_1;
      if (1 < (int)param_2) {
        lVar6 = 0;
        do {
          uVar7 = ((uint)(byte)(param_1 + lVar6)[1] + (uint)(byte)pcVar3[lVar6]) -
                  (uint)(byte)param_1[lVar6];
          if (0xff < uVar7) {
            uVar7 = ((int)uVar7 >> 0x1f & 0xffffff01U) + 0xff;
          }
          lVar1 = lVar6 + 1;
          param_5[lVar6 + 1] = pcVar3[lVar6 + 1] - (char)uVar7;
          lVar6 = lVar1;
        } while ((ulong)param_2 - 1 != lVar1);
      }
      iVar4 = iVar4 + 1;
      param_1 = pcVar3;
    } while (iVar4 != param_3);
  }
  return;
}




void FUN_019b9330(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  
  lVar2 = (long)param_3;
  param_5 = param_5 + param_4;
  pcVar3 = (char *)(param_6 + (long)param_4 * (long)param_3);
  if (param_4 == 0) {
    if (1 < param_1) {
      cVar4 = *pcVar3;
      uVar6 = (ulong)(param_1 - 1);
      pcVar5 = pcVar3;
      do {
        pcVar5 = pcVar5 + 1;
        uVar6 = uVar6 - 1;
        cVar4 = cVar4 + *pcVar5;
        *pcVar5 = cVar4;
      } while (uVar6 != 0);
    }
    pcVar3 = pcVar3 + lVar2;
    param_4 = 1;
  }
  if (param_4 < param_5) {
    do {
      cVar4 = pcVar3[-lVar2] + *pcVar3;
      *pcVar3 = cVar4;
      if (1 < param_1) {
        uVar6 = 0;
        do {
          uVar1 = uVar6 + 1;
          cVar4 = cVar4 + pcVar3[uVar6 + 1];
          pcVar3[uVar6 + 1] = cVar4;
          uVar6 = uVar1;
        } while (param_1 - 1 != uVar1);
      }
      param_4 = param_4 + 1;
      pcVar3 = pcVar3 + lVar2;
    } while (param_4 < param_5);
  }
  return;
}




void FUN_019b93cc(uint param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  
  param_5 = param_5 + param_4;
  pcVar1 = (char *)(param_6 + (long)param_4 * (long)param_3);
  if (param_4 == 0) {
    if (1 < (int)param_1) {
      cVar2 = *pcVar1;
      uVar5 = (ulong)(param_1 - 1);
      pcVar4 = pcVar1;
      do {
        pcVar4 = pcVar4 + 1;
        uVar5 = uVar5 - 1;
        cVar2 = cVar2 + *pcVar4;
        *pcVar4 = cVar2;
      } while (uVar5 != 0);
    }
    pcVar3 = pcVar1 + param_3;
    param_4 = 1;
    pcVar4 = pcVar1;
  }
  else {
    pcVar4 = pcVar1 + -(long)param_3;
    pcVar3 = pcVar1;
  }
  if (param_4 < param_5) {
    do {
      if (0 < (int)param_1) {
        uVar5 = 0;
        do {
          pcVar3[uVar5] = pcVar4[uVar5] + pcVar3[uVar5];
          uVar5 = uVar5 + 1;
        } while (param_1 != uVar5);
      }
      param_4 = param_4 + 1;
      pcVar4 = pcVar4 + param_3;
      pcVar3 = pcVar3 + param_3;
    } while (param_4 < param_5);
  }
  return;
}




void FUN_019b9468(uint param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar2 = (long)param_3;
  param_5 = param_5 + param_4;
  pbVar3 = (byte *)(param_6 + (long)param_4 * (long)param_3);
  if (param_4 == 0) {
    if (1 < (int)param_1) {
      bVar4 = *pbVar3;
      uVar7 = (ulong)(param_1 - 1);
      pbVar5 = pbVar3;
      do {
        pbVar5 = pbVar5 + 1;
        uVar7 = uVar7 - 1;
        bVar4 = bVar4 + *pbVar5;
        *pbVar5 = bVar4;
      } while (uVar7 != 0);
    }
    pbVar3 = pbVar3 + lVar2;
    param_4 = 1;
  }
  if (param_4 < param_5) {
    lVar6 = (long)pbVar3 - lVar2;
    do {
      uVar9 = (uint)pbVar3[-lVar2] + (uint)*pbVar3;
      *pbVar3 = (byte)uVar9;
      if (1 < (int)param_1) {
        lVar8 = 0;
        do {
          uVar9 = ((uint)((byte *)(lVar6 + lVar8))[1] + (uVar9 & 0xff)) -
                  (uint)*(byte *)(lVar6 + lVar8);
          if (0xff < uVar9) {
            uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
          }
          lVar1 = lVar8 + 1;
          uVar9 = pbVar3[lVar8 + 1] + uVar9;
          pbVar3[lVar8 + 1] = (byte)uVar9;
          lVar8 = lVar1;
        } while ((ulong)param_1 - 1 != lVar1);
      }
      param_4 = param_4 + 1;
      pbVar3 = pbVar3 + lVar2;
      lVar6 = lVar6 + lVar2;
    } while (param_4 < param_5);
  }
  return;
}




void FUN_019b9538(byte *param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  short *psVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  short *__ptr;
  ulong uVar14;
  long lVar15;
  short *psVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  byte bVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  byte *pbVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  ushort *puVar34;
  short *psVar35;
  ulong uVar36;
  byte *pbVar37;
  ushort *puVar38;
  short *psVar39;
  uint uVar40;
  long lVar41;
  short *psVar42;
  char local_170 [256];
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  uVar13 = 0;
  if (param_4 < 0x65) {
    if ((param_1 == (byte *)0x0) || ((int)param_2 < 1)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if ((0 < (int)param_3) && (uVar13 = 1, 0x18 < (int)param_4)) {
        uVar12 = (int)param_4 / 0x19;
        uVar5 = uVar12 * 2 | 1;
        uVar8 = (uVar5 + 1) * param_2;
        uVar36 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
        __ptr = (short *)FUN_019a2d40(1,uVar36 + (long)(int)uVar8 * 2 + 0xffe);
        uVar13 = 0;
        if (__ptr != (short *)0x0) {
          iVar9 = uVar5 * param_2;
          uVar40 = -uVar12;
          lVar41 = (long)(int)param_2;
          psVar2 = __ptr + iVar9;
          memset(psVar2 + -lVar41,0,uVar36);
          puVar4 = (ushort *)
                   ((long)__ptr + (-(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1)
                   );
          memset(local_170,0,0x100);
          if ((int)(param_3 * param_2) < 1) {
            uVar19 = 0;
            uVar26 = 0;
            uVar20 = 0xff;
            uVar31 = 0xff;
          }
          else {
            uVar21 = (ulong)(param_3 * param_2);
            uVar20 = 0xff;
            pbVar28 = param_1;
            uVar18 = 0;
            uVar22 = 0;
            uVar30 = 0xff;
            do {
              bVar24 = *pbVar28;
              uVar33 = (uint)bVar24;
              uVar31 = uVar33;
              uVar19 = uVar33;
              if (uVar30 <= bVar24) {
                uVar31 = uVar30;
                uVar19 = uVar20;
              }
              uVar20 = uVar19;
              uVar19 = uVar33;
              if (uVar33 <= uVar22) {
                uVar19 = uVar18;
              }
              uVar26 = (uint)bVar24;
              if (uVar33 <= uVar22) {
                uVar26 = uVar22;
              }
              uVar21 = uVar21 - 1;
              local_170[bVar24] = '\x01';
              pbVar28 = pbVar28 + 1;
              uVar18 = uVar19;
              uVar22 = uVar26;
              uVar30 = uVar31;
            } while (uVar21 != 0);
          }
          iVar25 = 0;
          lVar29 = 0;
          iVar32 = uVar26 - uVar31;
          iVar23 = -1;
          uVar31 = 0;
          if (uVar5 * uVar5 != 0) {
            uVar31 = 0x40000 / (uVar5 * uVar5);
          }
          do {
            iVar7 = iVar32;
            iVar27 = iVar23;
            if (local_170[lVar29] != '\0') {
              iVar25 = iVar25 + 1;
              iVar27 = (int)lVar29;
              if ((-1 < iVar23) && (iVar7 = iVar27 - iVar23, iVar32 <= iVar27 - iVar23)) {
                iVar7 = iVar32;
              }
            }
            iVar23 = iVar27;
            iVar32 = iVar7;
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0x100);
          iVar7 = iVar32 * 4;
          lVar29 = 0;
          puVar3 = (undefined2 *)((long)puVar4 + uVar36 + 0x7fe);
          iVar23 = iVar32 * 0xc >> 2;
          iVar10 = iVar7 - iVar23;
          iVar27 = (iVar32 * 0xc >> 2) * (iVar7 + -1);
          lVar15 = 0x7fc;
          do {
            uVar21 = lVar29 + 1;
            uVar14 = uVar21;
            if (((long)((ulong)(uint)(iVar32 * 0xc) << 0x20) >> 0x22 < (long)uVar21) &&
               (uVar14 = 0, (long)uVar21 < (long)iVar7)) {
              uVar5 = 0;
              if (iVar10 != 0) {
                uVar5 = iVar27 / iVar10;
              }
              uVar14 = (ulong)uVar5;
            }
            lVar1 = lVar29 * 2;
            lVar29 = lVar29 + 1;
            *(short *)((long)puVar4 + lVar1 + uVar36 + 0x800) = (short)(uVar14 >> 2);
            *(short *)((long)puVar4 + lVar15 + uVar36) = -(short)((uint)uVar14 >> 2);
            lVar15 = lVar15 + -2;
            iVar27 = iVar27 - iVar23;
          } while (lVar29 != 0x3ff);
          *puVar3 = 0;
          if ((2 < iVar25) && ((int)uVar40 < (int)param_3)) {
            uVar5 = param_2 - uVar12;
            psVar39 = __ptr;
            pbVar28 = param_1;
            psVar35 = psVar2 + -lVar41;
            do {
              psVar16 = psVar39;
              if (0 < (int)param_2) {
                sVar17 = 0;
                uVar36 = (ulong)param_2;
                pbVar37 = pbVar28;
                psVar39 = psVar16;
                psVar42 = __ptr + iVar9;
                do {
                  sVar6 = *psVar35;
                  uVar36 = uVar36 - 1;
                  sVar17 = (ushort)*pbVar37 + sVar17;
                  *psVar42 = (sVar6 + sVar17) - *psVar39;
                  *psVar39 = sVar6 + sVar17;
                  psVar35 = psVar35 + 1;
                  pbVar37 = pbVar37 + 1;
                  psVar39 = psVar39 + 1;
                  psVar42 = psVar42 + 1;
                } while (uVar36 != 0);
              }
              psVar39 = __ptr;
              if (psVar16 + lVar41 != psVar2) {
                psVar39 = psVar16 + lVar41;
              }
              pbVar37 = pbVar28 + lVar41;
              if ((int)(param_3 - 1) <= (int)uVar40 || 0x7fffffff < uVar40) {
                pbVar37 = pbVar28;
              }
              if ((int)uVar12 <= (int)uVar40) {
                puVar34 = (ushort *)(__ptr + (long)(int)uVar12 + (long)iVar9);
                puVar38 = puVar4;
                uVar36 = (ulong)(uVar12 + 1);
                uVar26 = 0;
                iVar25 = uVar12 - 1;
                if (-0x19 < (int)param_4) {
                  do {
                    lVar29 = (long)iVar25;
                    uVar36 = uVar36 - 1;
                    iVar25 = iVar25 + 1;
                    *puVar38 = (ushort)(uVar31 * ((uint)*puVar34 + (uint)(ushort)psVar2[lVar29] &
                                                 0xffff) >> 0x10);
                    puVar34 = puVar34 + -1;
                    puVar38 = puVar38 + 1;
                    uVar26 = uVar12 + 1;
                  } while (uVar36 != 0);
                }
                if ((int)uVar26 < (int)uVar5) {
                  uVar36 = (ulong)(int)uVar26;
                  iVar25 = ~uVar12 + uVar26;
                  do {
                    lVar29 = (long)iVar25;
                    iVar25 = iVar25 + 1;
                    puVar4[uVar36 & 0xffffffff] =
                         (ushort)(uVar31 * ((uint)(ushort)(__ptr + (long)(int)uVar12 + (long)iVar9)
                                                          [uVar36] - (uint)(ushort)psVar2[lVar29] &
                                           0xffff) >> 0x10);
                    uVar36 = uVar36 + 1;
                    uVar26 = uVar5;
                  } while ((long)(int)uVar5 != uVar36);
                }
                if ((int)uVar26 < (int)param_2) {
                  iVar25 = ~uVar12 + uVar26;
                  iVar32 = ((param_2 * 2 + -2) - uVar12) - uVar26;
                  iVar23 = param_2 - uVar26;
                  psVar35 = __ptr + (long)(int)uVar8 + (ulong)uVar26;
                  do {
                    lVar29 = (long)iVar32;
                    iVar32 = iVar32 + -1;
                    iVar23 = iVar23 + -1;
                    *psVar35 = (short)(uVar31 * (((uint)(ushort)psVar2[lVar41 + -1] * 2 -
                                                 (uint)(ushort)psVar2[lVar29]) -
                                                 (uint)(ushort)psVar2[iVar25] & 0xffff) >> 0x10);
                    iVar25 = iVar25 + 1;
                    psVar35 = psVar35 + 1;
                  } while (iVar23 != 0);
                }
                pbVar28 = param_1;
                uVar36 = (ulong)param_2;
                puVar34 = puVar4;
                if (0 < (int)param_2) {
                  do {
                    if ((*pbVar28 < uVar19) && (uVar26 = (uint)*pbVar28, uVar20 < uVar26)) {
                      uVar26 = (int)(short)puVar3[(int)((uint)*puVar34 + uVar26 * -4)] + uVar26;
                      if (uVar26 < 0x100) {
                        bVar24 = (byte)uVar26;
                      }
                      else {
                        bVar24 = ((byte)((int)uVar26 >> 0x1f) & 1) - 1;
                      }
                      *pbVar28 = bVar24;
                    }
                    uVar36 = uVar36 - 1;
                    pbVar28 = pbVar28 + 1;
                    puVar34 = puVar34 + 1;
                  } while (uVar36 != 0);
                }
                param_1 = param_1 + lVar41;
              }
              uVar40 = uVar40 + 1;
              pbVar28 = pbVar37;
              psVar35 = psVar16;
            } while (uVar40 != param_3);
          }
          free(__ptr);
          uVar13 = 1;
        }
      }
    }
  }
  if (*(long *)(lVar11 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}




void FUN_019b9a18(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_02bafa58;
  lVar2 = 1;
  puVar1 = param_1 + 2;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0x800);
  param_1[0x3002] = 0x7ff0000;
  param_1[0x3005] = 0;
  param_1[0x3004] = 0;
  *(undefined4 *)(param_1 + 0x3006) = 0;
  return;
}




void FUN_019b9a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02bafa58;
  param_1[0x3005] = 0;
  param_1[0x3004] = 0;
  *(undefined4 *)(param_1 + 0x3006) = 0;
  return;
}




uint FUN_019b9aa4(long param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  long *plVar1;
  ushort *puVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(ushort *)(param_1 + 0x18010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + 0x10 + (ulong)uVar3 * 0x30);
    if (uVar3 == *(ushort *)(param_1 + 0x18012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar2;
    }
    *(ushort *)(param_1 + 0x18010) = uVar3;
    *(int *)(param_1 + 0x18014) = *(int *)(param_1 + 0x18014) + 1;
  }
  *(undefined8 *)(puVar2 + 8) = param_2[2];
  uVar6 = param_2[1];
  uVar5 = *param_2;
  puVar2[0xc] = param_3;
  puVar2[0xd] = param_4;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(undefined8 *)(puVar2 + 4) = uVar6;
  *(undefined8 *)puVar2 = uVar5;
  lVar4 = *(long *)(param_1 + 0x18028);
  *(long *)(puVar2 + 0x14) = lVar4;
  plVar1 = (long *)(param_1 + 0x18020);
  if (*(long *)(param_1 + 0x18020) != 0) {
    plVar1 = (long *)(lVar4 + 0x20);
  }
  *plVar1 = (long)puVar2;
  *(ushort **)(param_1 + 0x18028) = puVar2;
  *(int *)(param_1 + 0x18030) = *(int *)(param_1 + 0x18030) + 1;
  return ((uint)((int)puVar2 - (int)(param_1 + 0x10)) >> 4) * 0xaaab & 0xffff;
}




void FUN_019b9b90(long param_1,uint param_2,undefined8 *param_3,undefined2 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(param_1 + 0x10 + (ulong)(param_2 & 0xffff) * 0x30);
    puVar1[2] = param_3[2];
    uVar2 = *param_3;
    puVar1[1] = param_3[1];
    *puVar1 = uVar2;
  }
  if (param_4 != (undefined2 *)0x0) {
    *(undefined2 *)(param_1 + 0x10 + (ulong)(param_2 & 0xffff) * 0x30 + 0x18) = *param_4;
  }
  return;
}




void FUN_019b9bcc(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x10;
  lVar5 = lVar1 + (ulong)(param_2 & 0xffff) * 0x30;
  FUN_019b9c98(param_1 + 0x18020,lVar5);
  iVar4 = (int)lVar5;
  if (*(short *)(param_1 + 0x18010) == -1) {
    sVar3 = (short)((uint)(iVar4 - (int)lVar1) >> 4) * -0x5555;
    *(short *)(param_1 + 0x18012) = sVar3;
    *(short *)(param_1 + 0x18010) = sVar3;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x18012);
    sVar3 = (short)((uint)(iVar4 - (int)lVar1) >> 4) * -0x5555;
    *(short *)(param_1 + 0x18012) = sVar3;
    *(short *)(lVar1 + (ulong)uVar2 * 0x30) = sVar3;
  }
  *(int *)(param_1 + 0x18014) = *(int *)(param_1 + 0x18014) + -1;
  return;
}




void FUN_019b9c98(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x20);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x28);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(long *)(*(long *)(param_2 + 0x20) + 0x28) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




uint FUN_019b9cf8(long param_1,undefined2 *param_2,uint param_3,ushort param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  long lVar4;
  
  uVar2 = 0;
  if ((param_3 != 0) && (lVar4 = *(long *)(param_1 + 0x18020), lVar4 != 0)) {
    uVar2 = 0;
    do {
      puVar3 = param_2;
      if (((param_4 == 0) || ((*(ushort *)(lVar4 + 0x18) & param_4) != 0)) &&
         (iVar1 = FUN_019ba5c8(param_5 + 0x44,6,lVar4,lVar4 + 0xc), iVar1 != 1)) {
        uVar2 = uVar2 + 1;
        puVar3 = param_2 + 1;
        *param_2 = *(undefined2 *)(lVar4 + 0x1a);
      }
    } while ((uVar2 < param_3) && (lVar4 = *(long *)(lVar4 + 0x20), param_2 = puVar3, lVar4 != 0));
  }
  return uVar2;
}




uint FUN_019b9d9c(long param_1,undefined2 *param_2,uint param_3,ushort param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  long lVar3;
  
  uVar1 = 0;
  if ((param_3 != 0) && (lVar3 = *(long *)(param_1 + 0x18020), lVar3 != 0)) {
    uVar1 = 0;
    do {
      if ((param_4 == 0) || (puVar2 = param_2, (*(ushort *)(lVar3 + 0x18) & param_4) != 0)) {
        uVar1 = uVar1 + 1;
        puVar2 = param_2 + 1;
        *param_2 = *(undefined2 *)(lVar3 + 0x1a);
      }
    } while ((uVar1 < param_3) && (lVar3 = *(long *)(lVar3 + 0x20), param_2 = puVar2, lVar3 != 0));
  }
  return uVar1;
}




undefined4 FUN_019b9df0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18030);
}




bool FUN_019b9e00(long param_1)

{
  return *(short *)(param_1 + 0x18010) == -1;
}




void FUN_019b9e18(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0xd) = uVar1;
  return;
}




void FUN_019b9e2c(void)

{
  return;
}




void thunk_FUN_019b9e34(float param_1,float param_2,float param_3,float param_4,undefined4 *param_5,
                       float *param_6,float *param_7,float *param_8)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  long lStack_98;
  
  lVar1 = tpidr_el0;
  lStack_98 = *(long *)(lVar1 + 0x28);
  *param_5 = 0;
  param_5[3] = param_6[2];
  uVar2 = *(undefined8 *)param_6;
  param_5[0xd] = param_3;
  param_5[0xe] = param_4;
  param_5[0xf] = param_1;
  param_5[0x10] = param_2;
  *(undefined8 *)(param_5 + 1) = uVar2;
  fVar12 = *param_7 - *param_6;
  fVar11 = param_7[1] - param_6[1];
  fVar10 = param_7[2] - param_6[2];
  fVar4 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar12 = fVar12 / fVar3;
  fVar11 = fVar11 / fVar3;
  fVar10 = fVar10 / fVar3;
  param_5[7] = fVar12;
  param_5[8] = fVar11;
  param_5[9] = fVar10;
  fVar3 = param_8[2];
  fVar6 = fVar11 * fVar3 - fVar10 * param_8[1];
  param_5[10] = fVar6;
  fVar4 = *param_8;
  fVar5 = fVar10 * fVar4 - fVar12 * fVar3;
  param_5[0xb] = fVar5;
  fVar3 = fVar12 * param_8[1] - fVar11 * fVar4;
  param_5[0xc] = fVar3;
  fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3;
  param_5[4] = fVar10 * fVar5 - fVar11 * fVar3;
  param_5[5] = fVar12 * fVar3 - fVar10 * fVar6;
  fVar3 = SQRT(fVar4);
  param_5[6] = fVar11 * fVar6 - fVar12 * fVar5;
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  param_5[10] = (float)param_5[10] / fVar3;
  param_5[0xb] = (float)param_5[0xb] / fVar3;
  param_5[0xc] = (float)param_5[0xc] / fVar3;
  fVar10 = (float)param_5[4] * (float)param_5[4] + (float)param_5[5] * (float)param_5[5] +
           (float)param_5[6] * (float)param_5[6];
  fVar3 = SQRT(fVar10);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar10);
  }
  param_5[6] = (float)param_5[6] / fVar3;
  *(ulong *)(param_5 + 4) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) / fVar3,
                (float)*(undefined8 *)(param_5 + 4) / fVar3);
  fVar3 = tanf(param_4 * 0.017453292 * 0.5);
  fVar6 = (float)param_5[9];
  fVar10 = (fVar3 + fVar3) * param_1;
  fVar3 = (fVar3 + fVar3) * param_2;
  fVar16 = fVar10 * 0.5;
  fVar5 = fVar3 * 0.5;
  fVar17 = fVar10 * param_3 * 0.5;
  fVar18 = fVar3 * param_3 * 0.5;
  fVar3 = (float)*(undefined8 *)(param_5 + 7);
  fVar10 = (float)((ulong)*(undefined8 *)(param_5 + 7) >> 0x20);
  fVar22 = fVar16 * (float)param_5[4];
  fVar24 = fVar16 * (float)param_5[5];
  fVar16 = fVar16 * (float)param_5[6];
  fVar25 = fVar17 * (float)param_5[10];
  fVar26 = fVar17 * (float)param_5[0xb];
  fVar7 = fVar5 * (float)param_5[4];
  fVar8 = fVar5 * (float)param_5[5];
  fVar5 = fVar5 * (float)param_5[6];
  fVar13 = fVar18 * (float)param_5[10];
  fVar14 = fVar18 * (float)param_5[0xb];
  fVar18 = fVar18 * (float)param_5[0xc];
  fVar17 = fVar17 * (float)param_5[0xc];
  fVar15 = fVar3 * param_1 + *param_6;
  fVar9 = fVar6 * param_1 + param_6[2];
  fVar4 = param_2 * fVar3 + *param_6;
  fVar20 = param_2 * fVar10 + param_6[1];
  fVar11 = fVar6 * param_2 + param_6[2];
  fVar12 = fVar10 * param_1 + param_6[1];
  fVar19 = fVar15 - fVar22;
  fVar21 = fVar9 - fVar16;
  fVar15 = fVar15 + fVar22;
  fVar9 = fVar9 + fVar16;
  fVar22 = fVar4 - fVar7;
  fVar23 = fVar20 - fVar8;
  fVar16 = fVar11 - fVar5;
  fVar4 = fVar4 + fVar7;
  fVar20 = fVar20 + fVar8;
  fVar11 = fVar11 + fVar5;
  fVar5 = fVar12 - fVar24;
  fVar12 = fVar12 + fVar24;
  uStack_a8 = CONCAT44(-fVar10,-fVar3);
  fStack_a0 = -fVar6;
  param_5[0x2b] = fVar21 + fVar17;
  param_5[0x2c] = fVar19 - fVar25;
  param_5[0x31] = fVar9 + fVar17;
  param_5[0x32] = fVar15 - fVar25;
  param_5[0x35] = fVar22 + fVar13;
  param_5[0x36] = fVar23 + fVar14;
  param_5[0x37] = fVar16 + fVar18;
  param_5[0x38] = fVar22 - fVar13;
  param_5[0x39] = fVar23 - fVar14;
  param_5[0x3a] = fVar16 - fVar18;
  param_5[0x3b] = fVar4 + fVar13;
  param_5[0x3c] = fVar20 + fVar14;
  param_5[0x3d] = fVar11 + fVar18;
  param_5[0x3e] = fVar4 - fVar13;
  param_5[0x3f] = fVar20 - fVar14;
  param_5[0x40] = fVar11 - fVar18;
  param_5[0x29] = fVar19 + fVar25;
  param_5[0x2a] = fVar5 + fVar26;
  param_5[0x2d] = fVar5 - fVar26;
  param_5[0x2e] = fVar21 - fVar17;
  param_5[0x2f] = fVar15 + fVar25;
  param_5[0x30] = fVar12 + fVar26;
  param_5[0x33] = fVar12 - fVar26;
  param_5[0x34] = fVar9 - fVar17;
  uStack_b8 = CONCAT44(fVar10 * param_1 + (float)((ulong)*(undefined8 *)param_6 >> 0x20),
                       fVar3 * param_1 + (float)*(undefined8 *)param_6);
  fStack_b0 = fVar6 * param_1 + param_6[2];
  FUN_019bbda8(param_5 + 0x11,&uStack_a8,&uStack_b8);
  uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 7) >> 0x20) * param_2 +
                       (float)((ulong)*(undefined8 *)param_6 >> 0x20),
                       (float)*(undefined8 *)(param_5 + 7) * param_2 + (float)*(undefined8 *)param_6
                      );
  fStack_a0 = (float)param_5[9] * param_2 + param_6[2];
  FUN_019bbda8(param_5 + 0x15,param_5 + 7,&uStack_a8);
  FUN_019bbdec(param_5 + 0x19,param_5 + 0x2f,param_5 + 0x3b,param_5 + 0x32);
  FUN_019bbdec(param_5 + 0x1d,param_5 + 0x29,param_5 + 0x2c,param_5 + 0x35);
  FUN_019bbdec(param_5 + 0x21,param_5 + 0x2c,param_5 + 0x32,param_5 + 0x38);
  FUN_019bbdec(param_5 + 0x25,param_5 + 0x29,param_5 + 0x35,param_5 + 0x2f);
  if (*(long *)(lVar1 + 0x28) != lStack_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019b9e34(float param_1,float param_2,float param_3,float param_4,undefined4 *param_5,
                 float *param_6,float *param_7,float *param_8)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  *param_5 = 0;
  param_5[3] = param_6[2];
  uVar2 = *(undefined8 *)param_6;
  param_5[0xd] = param_3;
  param_5[0xe] = param_4;
  param_5[0xf] = param_1;
  param_5[0x10] = param_2;
  *(undefined8 *)(param_5 + 1) = uVar2;
  fVar12 = *param_7 - *param_6;
  fVar11 = param_7[1] - param_6[1];
  fVar10 = param_7[2] - param_6[2];
  fVar4 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar12 = fVar12 / fVar3;
  fVar11 = fVar11 / fVar3;
  fVar10 = fVar10 / fVar3;
  param_5[7] = fVar12;
  param_5[8] = fVar11;
  param_5[9] = fVar10;
  fVar3 = param_8[2];
  fVar6 = fVar11 * fVar3 - fVar10 * param_8[1];
  param_5[10] = fVar6;
  fVar4 = *param_8;
  fVar5 = fVar10 * fVar4 - fVar12 * fVar3;
  param_5[0xb] = fVar5;
  fVar3 = fVar12 * param_8[1] - fVar11 * fVar4;
  param_5[0xc] = fVar3;
  fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3;
  param_5[4] = fVar10 * fVar5 - fVar11 * fVar3;
  param_5[5] = fVar12 * fVar3 - fVar10 * fVar6;
  fVar3 = SQRT(fVar4);
  param_5[6] = fVar11 * fVar6 - fVar12 * fVar5;
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  param_5[10] = (float)param_5[10] / fVar3;
  param_5[0xb] = (float)param_5[0xb] / fVar3;
  param_5[0xc] = (float)param_5[0xc] / fVar3;
  fVar10 = (float)param_5[4] * (float)param_5[4] + (float)param_5[5] * (float)param_5[5] +
           (float)param_5[6] * (float)param_5[6];
  fVar3 = SQRT(fVar10);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar10);
  }
  param_5[6] = (float)param_5[6] / fVar3;
  *(ulong *)(param_5 + 4) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) / fVar3,
                (float)*(undefined8 *)(param_5 + 4) / fVar3);
  fVar3 = tanf(param_4 * 0.017453292 * 0.5);
  fVar6 = (float)param_5[9];
  fVar10 = (fVar3 + fVar3) * param_1;
  fVar3 = (fVar3 + fVar3) * param_2;
  fVar16 = fVar10 * 0.5;
  fVar5 = fVar3 * 0.5;
  fVar17 = fVar10 * param_3 * 0.5;
  fVar18 = fVar3 * param_3 * 0.5;
  fVar3 = (float)*(undefined8 *)(param_5 + 7);
  fVar10 = (float)((ulong)*(undefined8 *)(param_5 + 7) >> 0x20);
  fVar22 = fVar16 * (float)param_5[4];
  fVar24 = fVar16 * (float)param_5[5];
  fVar16 = fVar16 * (float)param_5[6];
  fVar25 = fVar17 * (float)param_5[10];
  fVar26 = fVar17 * (float)param_5[0xb];
  fVar7 = fVar5 * (float)param_5[4];
  fVar8 = fVar5 * (float)param_5[5];
  fVar5 = fVar5 * (float)param_5[6];
  fVar13 = fVar18 * (float)param_5[10];
  fVar14 = fVar18 * (float)param_5[0xb];
  fVar18 = fVar18 * (float)param_5[0xc];
  fVar17 = fVar17 * (float)param_5[0xc];
  fVar15 = fVar3 * param_1 + *param_6;
  fVar9 = fVar6 * param_1 + param_6[2];
  fVar4 = param_2 * fVar3 + *param_6;
  fVar20 = param_2 * fVar10 + param_6[1];
  fVar11 = fVar6 * param_2 + param_6[2];
  fVar12 = fVar10 * param_1 + param_6[1];
  fVar19 = fVar15 - fVar22;
  fVar21 = fVar9 - fVar16;
  fVar15 = fVar15 + fVar22;
  fVar9 = fVar9 + fVar16;
  fVar22 = fVar4 - fVar7;
  fVar23 = fVar20 - fVar8;
  fVar16 = fVar11 - fVar5;
  fVar4 = fVar4 + fVar7;
  fVar20 = fVar20 + fVar8;
  fVar11 = fVar11 + fVar5;
  fVar5 = fVar12 - fVar24;
  fVar12 = fVar12 + fVar24;
  local_a8 = CONCAT44(-fVar10,-fVar3);
  local_a0 = -fVar6;
  param_5[0x2b] = fVar21 + fVar17;
  param_5[0x2c] = fVar19 - fVar25;
  param_5[0x31] = fVar9 + fVar17;
  param_5[0x32] = fVar15 - fVar25;
  param_5[0x35] = fVar22 + fVar13;
  param_5[0x36] = fVar23 + fVar14;
  param_5[0x37] = fVar16 + fVar18;
  param_5[0x38] = fVar22 - fVar13;
  param_5[0x39] = fVar23 - fVar14;
  param_5[0x3a] = fVar16 - fVar18;
  param_5[0x3b] = fVar4 + fVar13;
  param_5[0x3c] = fVar20 + fVar14;
  param_5[0x3d] = fVar11 + fVar18;
  param_5[0x3e] = fVar4 - fVar13;
  param_5[0x3f] = fVar20 - fVar14;
  param_5[0x40] = fVar11 - fVar18;
  param_5[0x29] = fVar19 + fVar25;
  param_5[0x2a] = fVar5 + fVar26;
  param_5[0x2d] = fVar5 - fVar26;
  param_5[0x2e] = fVar21 - fVar17;
  param_5[0x2f] = fVar15 + fVar25;
  param_5[0x30] = fVar12 + fVar26;
  param_5[0x33] = fVar12 - fVar26;
  param_5[0x34] = fVar9 - fVar17;
  local_b8 = CONCAT44(fVar10 * param_1 + (float)((ulong)*(undefined8 *)param_6 >> 0x20),
                      fVar3 * param_1 + (float)*(undefined8 *)param_6);
  local_b0 = fVar6 * param_1 + param_6[2];
  FUN_019bbda8(param_5 + 0x11,&local_a8,&local_b8);
  local_a8 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 7) >> 0x20) * param_2 +
                      (float)((ulong)*(undefined8 *)param_6 >> 0x20),
                      (float)*(undefined8 *)(param_5 + 7) * param_2 + (float)*(undefined8 *)param_6)
  ;
  local_a0 = (float)param_5[9] * param_2 + param_6[2];
  FUN_019bbda8(param_5 + 0x15,param_5 + 7,&local_a8);
  FUN_019bbdec(param_5 + 0x19,param_5 + 0x2f,param_5 + 0x3b,param_5 + 0x32);
  FUN_019bbdec(param_5 + 0x1d,param_5 + 0x29,param_5 + 0x2c,param_5 + 0x35);
  FUN_019bbdec(param_5 + 0x21,param_5 + 0x2c,param_5 + 0x32,param_5 + 0x38);
  FUN_019bbdec(param_5 + 0x25,param_5 + 0x29,param_5 + 0x35,param_5 + 0x2f);
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

