// functions/019a6 — 3 functions
#include "libGameKindred.h"




void FUN_019a6358(long param_1)

{
  *(undefined2 *)(*(long *)(param_1 + 0x8a0) + -2) = 0;
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  return;
}




ulong FUN_019a636c(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*param_1 != 0) {
      return 0;
    }
    *(char **)(param_1 + 2) = "NULL VP8Io parameter in VP8Decode().";
    param_1[0] = 2;
    param_1[1] = 0;
    return 0;
  }
  if ((param_1[1] == 0) && (uVar4 = FUN_019a5908(param_1,param_2), (int)uVar4 == 0)) {
    return uVar4;
  }
  iVar1 = FUN_019a3c24(param_1,param_2);
  if (iVar1 != 0) goto LAB_019a63b8;
  iVar1 = FUN_019a3eb8(param_1,param_2);
  if (iVar1 == 0) {
LAB_019a64dc:
    uVar7 = 0;
  }
  else {
    param_1[0x23b] = 0;
    if (0 < param_1[0x69]) {
      uVar7 = 0;
      do {
        iVar1 = param_1[0x6a];
        iVar2 = FUN_019b8220(param_1 + 4,param_1);
        if (iVar2 == 0) {
          uVar7 = 0;
          if (*param_1 == 0) {
            uVar8 = 7;
            pcVar6 = "Premature end-of-partition0 encountered.";
LAB_019a6504:
            uVar7 = 0;
            *(char **)(param_1 + 2) = pcVar6;
            *(undefined8 *)param_1 = uVar8;
          }
          goto LAB_019a650c;
        }
        if (param_1[0x23a] < param_1[100]) {
          do {
            iVar2 = FUN_019a5edc(param_1,param_1 + (long)(int)(iVar1 - 1U & uVar7) * 10 + 0x6c);
            if (iVar2 == 0) {
              uVar7 = 0;
              if (*param_1 != 0) goto LAB_019a650c;
              uVar8 = 7;
              pcVar6 = "Premature end-of-file encountered.";
              goto LAB_019a6504;
            }
            iVar2 = param_1[0x23a];
            param_1[0x23a] = iVar2 + 1;
          } while (iVar2 + 1 < param_1[100]);
        }
        *(undefined2 *)(*(long *)(param_1 + 0x228) + -2) = 0;
        param_1[0x224] = 0;
        param_1[0x23a] = 0;
        iVar1 = FUN_019a2e4c(param_1,param_2);
        if (iVar1 == 0) {
          uVar7 = 0;
          if (*param_1 == 0) {
            uVar8 = 6;
            pcVar6 = "Output aborted.";
            goto LAB_019a6504;
          }
          goto LAB_019a650c;
        }
        uVar7 = param_1[0x23b] + 1;
        param_1[0x23b] = uVar7;
      } while ((int)uVar7 < param_1[0x69]);
    }
    if (0 < param_1[0x30]) {
      lVar5 = FUN_019b7a58();
      iVar1 = (**(code **)(lVar5 + 0x10))(param_1 + 0x24);
      if (iVar1 == 0) goto LAB_019a64dc;
    }
    uVar7 = 1;
  }
LAB_019a650c:
  uVar3 = FUN_019a3e38(param_1,param_2);
  if ((uVar3 & uVar7) != 0) {
    param_1[1] = 0;
    return (ulong)(uVar3 & uVar7);
  }
LAB_019a63b8:
  FUN_019a5794(param_1);
  return 0;
}




ulong FUN_019a6580(uint *param_1,long param_2,int param_3,long param_4,uint param_5,long param_6)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  ushort uVar19;
  long lVar20;
  long lVar21;
  
  uVar18 = (ulong)param_5;
  if ((int)param_5 < 0x10) {
    uVar14 = param_1[1];
    uVar9 = param_1[2];
    pbVar13 = (byte *)(param_2 + (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 | uVar18 << 5) +
                                 (long)(int)param_5 + (long)param_3 * 0xb);
    do {
      bVar5 = *pbVar13;
      if ((int)uVar9 < 0) {
        puVar4 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar4 + 1) {
          FUN_019b6920(param_1);
          uVar9 = param_1[2];
        }
        else {
          uVar15 = *puVar4;
          uVar9 = uVar9 + 0x18;
          param_1[2] = uVar9;
          *(long *)(param_1 + 4) = (long)puVar4 + 3;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar15 >> 0x10 | uVar15 << 0x10) >> 8);
        }
      }
      uVar10 = *param_1;
      uVar11 = uVar14 * bVar5 >> 8;
      uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
      uVar15 = uVar14 * bVar5 >> 8;
      if (uVar15 < uVar6) {
        iVar17 = uVar11 + 1;
        uVar11 = uVar14 - iVar17;
        uVar10 = uVar10 - (iVar17 << (ulong)(uVar9 & 0x1f));
        *param_1 = uVar10;
      }
      if (uVar11 < 0x7f) {
        uVar2 = (ulong)uVar11;
        uVar11 = *(uint *)(&DAT_01e1e558 + (ulong)uVar11 * 4);
        uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar2];
        param_1[2] = uVar9;
      }
      param_1[1] = uVar11;
      if (uVar6 <= uVar15) {
        return uVar18;
      }
      piVar16 = (int *)(&UNK_01e1c778 + (long)(int)uVar18 * 4);
      lVar21 = uVar18 << 0x20;
      while( true ) {
        piVar16 = piVar16 + 1;
        bVar5 = pbVar13[1];
        if ((int)uVar9 < 0) {
          puVar4 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar4 + 1) {
            FUN_019b6920(param_1);
            uVar9 = param_1[2];
            uVar10 = *param_1;
          }
          else {
            uVar14 = *puVar4;
            uVar9 = uVar9 + 0x18;
            param_1[2] = uVar9;
            *(long *)(param_1 + 4) = (long)puVar4 + 3;
            uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
            uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
            *param_1 = uVar10;
          }
        }
        uVar15 = uVar10 >> (ulong)(uVar9 & 0x1f);
        uVar14 = uVar11 * bVar5 >> 8;
        uVar6 = uVar11 * bVar5 >> 8;
        if (uVar14 < uVar15) {
          iVar17 = uVar6 + 1;
          uVar10 = uVar10 - (iVar17 << (ulong)(uVar9 & 0x1f));
          *param_1 = uVar10;
          uVar6 = uVar11 - iVar17;
        }
        uVar11 = uVar6;
        if (uVar11 < 0x7f) {
          uVar2 = (ulong)uVar11;
          uVar11 = *(uint *)(&DAT_01e1e558 + (ulong)uVar11 * 4);
          uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar2];
          param_1[2] = uVar9;
        }
        param_1[1] = uVar11;
        lVar20 = (long)*piVar16;
        iVar17 = (int)uVar18;
        if (uVar14 < uVar15) break;
        uVar18 = (ulong)(iVar17 + 1U);
        lVar21 = lVar21 + 0x100000000;
        pbVar13 = (byte *)(param_2 + lVar20 * 0x21);
        if (iVar17 + 1U == 0x10) {
          return 0x10;
        }
      }
      bVar5 = pbVar13[2];
      if ((int)uVar9 < 0) {
        puVar4 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar4 + 1) {
          FUN_019b6920(param_1);
          uVar9 = param_1[2];
          uVar10 = *param_1;
        }
        else {
          uVar14 = *puVar4;
          uVar9 = uVar9 + 0x18;
          param_1[2] = uVar9;
          *(long *)(param_1 + 4) = (long)puVar4 + 3;
          uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
          *param_1 = uVar10;
        }
      }
      uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
      uVar14 = uVar11 * bVar5 >> 8;
      uVar15 = uVar11 * bVar5 >> 8;
      if (uVar14 < uVar6) {
        iVar3 = uVar15 + 1;
        uVar15 = uVar11 - iVar3;
        uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
        *param_1 = uVar10;
      }
      if (uVar15 < 0x7f) {
        uVar18 = (ulong)uVar15;
        uVar15 = *(uint *)(&DAT_01e1e558 + (ulong)uVar15 * 4);
        uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
        param_1[2] = uVar9;
      }
      param_1[1] = uVar15;
      if (uVar14 < uVar6) {
        bVar5 = pbVar13[3];
        if ((int)uVar9 < 0) {
          puVar4 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar4 + 1) {
            FUN_019b6920(param_1);
            uVar9 = param_1[2];
            uVar10 = *param_1;
          }
          else {
            uVar14 = *puVar4;
            uVar9 = uVar9 + 0x18;
            param_1[2] = uVar9;
            *(long *)(param_1 + 4) = (long)puVar4 + 3;
            uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
            uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
            *param_1 = uVar10;
          }
        }
        uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
        uVar14 = uVar15 * bVar5 >> 8;
        uVar11 = uVar15 * bVar5 >> 8;
        if (uVar14 < uVar6) {
          iVar3 = uVar11 + 1;
          uVar11 = uVar15 - iVar3;
          uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
          *param_1 = uVar10;
        }
        if (uVar11 < 0x7f) {
          uVar18 = (ulong)uVar11;
          uVar11 = *(uint *)(&DAT_01e1e558 + (ulong)uVar11 * 4);
          uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
          param_1[2] = uVar9;
        }
        param_1[1] = uVar11;
        if (uVar14 < uVar6) {
          bVar5 = pbVar13[6];
          if ((int)uVar9 < 0) {
            puVar4 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar4 + 1) {
              FUN_019b6920(param_1);
              uVar9 = param_1[2];
              uVar10 = *param_1;
            }
            else {
              uVar14 = *puVar4;
              uVar9 = uVar9 + 0x18;
              param_1[2] = uVar9;
              *(long *)(param_1 + 4) = (long)puVar4 + 3;
              uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
              uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
              *param_1 = uVar10;
            }
          }
          uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
          uVar14 = uVar11 * bVar5 >> 8;
          uVar15 = uVar11 * bVar5 >> 8;
          if (uVar14 < uVar6) {
            iVar3 = uVar15 + 1;
            uVar15 = uVar11 - iVar3;
            uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
            *param_1 = uVar10;
          }
          if (uVar15 < 0x7f) {
            uVar18 = (ulong)uVar15;
            uVar15 = *(uint *)(&DAT_01e1e558 + (ulong)uVar15 * 4);
            uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
            param_1[2] = uVar9;
          }
          param_1[1] = uVar15;
          if (uVar14 < uVar6) {
            bVar5 = pbVar13[8];
            if ((int)uVar9 < 0) {
              puVar4 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                FUN_019b6920(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar14 = *puVar4;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
                *(long *)(param_1 + 4) = (long)puVar4 + 3;
                uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
                *param_1 = uVar10;
              }
            }
            uVar14 = uVar15 * bVar5 >> 8;
            bVar1 = uVar15 * bVar5 >> 8 < uVar10 >> (ulong)(uVar9 & 0x1f);
            if (bVar1) {
              iVar3 = uVar14 + 1;
              uVar14 = uVar15 - iVar3;
              uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
            }
            if (uVar14 < 0x7f) {
              uVar18 = (ulong)uVar14;
              uVar14 = *(uint *)(&DAT_01e1e558 + (ulong)uVar14 * 4);
              uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar14;
            bVar5 = pbVar13[(ulong)bVar1 + 9];
            if ((int)uVar9 < 0) {
              puVar4 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                FUN_019b6920(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar15 = *puVar4;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
                *(long *)(param_1 + 4) = (long)puVar4 + 3;
                uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar15 >> 0x10 | uVar15 << 0x10) >> 8);
                *param_1 = uVar10;
              }
            }
            uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
            uVar11 = uVar14 * bVar5 >> 8;
            uVar15 = uVar14 * bVar5 >> 8;
            if (uVar11 < uVar6) {
              iVar3 = uVar15 + 1;
              uVar15 = uVar14 - iVar3;
              uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
            }
            if (uVar15 < 0x7f) {
              uVar18 = (ulong)uVar15;
              uVar15 = *(uint *)(&DAT_01e1e558 + (ulong)uVar15 * 4);
              uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
              param_1[2] = uVar9;
            }
            uVar14 = (uint)(uVar11 < uVar6) | (uint)bVar1 << 1;
            pbVar13 = (&PTR_DAT_02baf820)[uVar14];
            param_1[1] = uVar15;
            uVar11 = (uint)*pbVar13;
            if (*pbVar13 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              do {
                pbVar13 = pbVar13 + 1;
                if ((int)uVar9 < 0) {
                  puVar4 = *(uint **)(param_1 + 4);
                  if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                    FUN_019b6920(param_1);
                    uVar9 = param_1[2];
                    uVar10 = *param_1;
                  }
                  else {
                    uVar6 = *puVar4;
                    uVar9 = uVar9 + 0x18;
                    param_1[2] = uVar9;
                    *(long *)(param_1 + 4) = (long)puVar4 + 3;
                    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                    uVar10 = (uint)(CONCAT44(uVar10,uVar6 >> 0x10 | uVar6 << 0x10) >> 8);
                    *param_1 = uVar10;
                  }
                }
                uVar7 = uVar10 >> (ulong)(uVar9 & 0x1f);
                uVar6 = uVar15 * uVar11 >> 8;
                uVar11 = uVar15 * uVar11 >> 8;
                if (uVar6 < uVar7) {
                  iVar3 = uVar11 + 1;
                  uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
                  *param_1 = uVar10;
                  uVar11 = uVar15 - iVar3;
                }
                uVar15 = uVar11;
                if (uVar15 < 0x7f) {
                  uVar18 = (ulong)uVar15;
                  uVar15 = *(uint *)(&DAT_01e1e558 + (ulong)uVar15 * 4);
                  uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
                  param_1[2] = uVar9;
                }
                param_1[1] = uVar15;
                uVar11 = (uint)*pbVar13;
                uVar19 = (ushort)(uVar6 < uVar7) | uVar19 << 1;
              } while (uVar11 != 0);
            }
            uVar19 = uVar19 + ((ushort)(8 << (ulong)uVar14) | 3);
          }
          else {
            bVar5 = pbVar13[7];
            if ((int)uVar9 < 0) {
              puVar4 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                FUN_019b6920(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar14 = *puVar4;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
                *(long *)(param_1 + 4) = (long)puVar4 + 3;
                uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
                *param_1 = uVar10;
              }
            }
            uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
            uVar14 = uVar15 * bVar5 >> 8;
            uVar11 = uVar15 * bVar5 >> 8;
            if (uVar14 < uVar6) {
              iVar3 = uVar11 + 1;
              uVar11 = uVar15 - iVar3;
              uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
            }
            if (uVar11 < 0x7f) {
              uVar18 = (ulong)uVar11;
              uVar11 = *(uint *)(&DAT_01e1e558 + (ulong)uVar11 * 4);
              uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar11;
            if (uVar6 <= uVar14) {
              if ((int)uVar9 < 0) {
                puVar4 = *(uint **)(param_1 + 4);
                if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                  FUN_019b6920(param_1);
                  uVar9 = param_1[2];
                  uVar10 = *param_1;
                }
                else {
                  uVar14 = *puVar4;
                  uVar9 = uVar9 + 0x18;
                  param_1[2] = uVar9;
                  *(long *)(param_1 + 4) = (long)puVar4 + 3;
                  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                  uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
                  *param_1 = uVar10;
                }
              }
              uVar15 = uVar11 * 0x9f >> 8;
              if (uVar11 * 0x9f >> 8 < uVar10 >> (ulong)(uVar9 & 0x1f)) {
                iVar3 = uVar15 + 1;
                uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
                *param_1 = uVar10;
                uVar19 = 6;
                uVar15 = uVar11 - iVar3;
              }
              else {
                uVar19 = 5;
              }
              goto LAB_019a6f70;
            }
            if ((int)uVar9 < 0) {
              puVar4 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                FUN_019b6920(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar14 = *puVar4;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
                *(long *)(param_1 + 4) = (long)puVar4 + 3;
                uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
                *param_1 = uVar10;
              }
            }
            uVar14 = uVar11 * 0xa5 >> 8;
            if (uVar11 * 0xa5 >> 8 < uVar10 >> (ulong)(uVar9 & 0x1f)) {
              iVar3 = uVar14 + 1;
              uVar14 = uVar11 - iVar3;
              uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
              sVar12 = 9;
              *param_1 = uVar10;
            }
            else {
              sVar12 = 7;
            }
            if (uVar14 < 0x7f) {
              uVar18 = (ulong)uVar14;
              uVar14 = *(uint *)(&DAT_01e1e558 + (ulong)uVar14 * 4);
              uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar14;
            if ((int)uVar9 < 0) {
              puVar4 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                FUN_019b6920(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar15 = *puVar4;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
                *(long *)(param_1 + 4) = (long)puVar4 + 3;
                uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar15 >> 0x10 | uVar15 << 0x10) >> 8);
                *param_1 = uVar10;
              }
            }
            uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
            uVar11 = uVar14 * 0x91 >> 8;
            uVar15 = uVar14 * 0x91 >> 8;
            if (uVar11 < uVar6) {
              iVar3 = uVar15 + 1;
              uVar15 = uVar14 - iVar3;
              uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
              *param_1 = uVar10;
            }
            if (uVar15 < 0x7f) {
              uVar18 = (ulong)uVar15;
              uVar15 = *(uint *)(&DAT_01e1e558 + (ulong)uVar15 * 4);
              uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar15;
            uVar19 = (ushort)(uVar11 < uVar6) + sVar12;
          }
        }
        else {
          bVar5 = pbVar13[4];
          if ((int)uVar9 < 0) {
            puVar4 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar4 + 1) {
              FUN_019b6920(param_1);
              uVar9 = param_1[2];
              uVar10 = *param_1;
            }
            else {
              uVar14 = *puVar4;
              uVar9 = uVar9 + 0x18;
              param_1[2] = uVar9;
              *(long *)(param_1 + 4) = (long)puVar4 + 3;
              uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
              uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
              *param_1 = uVar10;
            }
          }
          uVar6 = uVar10 >> (ulong)(uVar9 & 0x1f);
          uVar14 = uVar11 * bVar5 >> 8;
          uVar15 = uVar11 * bVar5 >> 8;
          if (uVar14 < uVar6) {
            iVar3 = uVar15 + 1;
            uVar15 = uVar11 - iVar3;
            uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
            *param_1 = uVar10;
          }
          if (uVar15 < 0x7f) {
            uVar18 = (ulong)uVar15;
            uVar15 = *(uint *)(&DAT_01e1e558 + (ulong)uVar15 * 4);
            uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
            param_1[2] = uVar9;
          }
          param_1[1] = uVar15;
          if (uVar14 < uVar6) {
            bVar5 = pbVar13[5];
            if ((int)uVar9 < 0) {
              puVar4 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar4 + 1) {
                FUN_019b6920(param_1);
                uVar9 = param_1[2];
                uVar10 = *param_1;
              }
              else {
                uVar14 = *puVar4;
                uVar9 = uVar9 + 0x18;
                param_1[2] = uVar9;
                *(long *)(param_1 + 4) = (long)puVar4 + 3;
                uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
                *param_1 = uVar10;
              }
            }
            uVar14 = uVar15 * bVar5 >> 8;
            if (uVar15 * bVar5 >> 8 < uVar10 >> (ulong)(uVar9 & 0x1f)) {
              iVar3 = uVar14 + 1;
              uVar10 = uVar10 - (iVar3 << (ulong)(uVar9 & 0x1f));
              uVar19 = 4;
              *param_1 = uVar10;
              uVar15 = uVar15 - iVar3;
            }
            else {
              uVar19 = 3;
              uVar15 = uVar14;
            }
LAB_019a6f70:
            if (uVar15 < 0x7f) {
              uVar18 = (ulong)uVar15;
              uVar15 = *(uint *)(&DAT_01e1e558 + (ulong)uVar15 * 4);
              uVar9 = uVar9 - (byte)(&DAT_01e1e4d8)[uVar18];
              param_1[2] = uVar9;
            }
            param_1[1] = uVar15;
          }
          else {
            uVar19 = 2;
          }
        }
        pbVar13 = (byte *)(param_2 + lVar20 * 0x21 + 0x16);
      }
      else {
        pbVar13 = (byte *)(param_2 + lVar20 * 0x21 + 0xb);
        uVar19 = 1;
      }
      if ((int)uVar9 < 0) {
        puVar4 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar4 + 1) {
          FUN_019b6920(param_1);
          uVar15 = param_1[1];
          uVar9 = param_1[2];
          uVar10 = *param_1;
        }
        else {
          uVar14 = *puVar4;
          uVar9 = uVar9 + 0x18;
          param_1[2] = uVar9;
          *(long *)(param_1 + 4) = (long)puVar4 + 3;
          uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          uVar10 = (uint)(CONCAT44(uVar10,uVar14 >> 0x10 | uVar14 << 0x10) >> 8);
          *param_1 = uVar10;
        }
      }
      iVar3 = (uVar15 >> 1) - (uVar10 >> (ulong)(uVar9 & 0x1f));
      uVar11 = iVar3 >> 0x1f;
      bVar5 = (&DAT_01e1c5d0)[lVar21 >> 0x20];
      uVar6 = uVar9 & 0x1f;
      uVar9 = uVar9 - 1;
      uVar14 = uVar15 + uVar11 | 1;
      param_1[1] = uVar14;
      param_1[2] = uVar9;
      *param_1 = uVar10 - (((uVar15 >> 1) + 1 & uVar11) << (ulong)uVar6);
      uVar8 = (ushort)(iVar3 >> 0x1f);
      uVar18 = (ulong)(iVar17 + 1);
      *(ushort *)(param_6 + (ulong)bVar5 * 2) =
           ((uVar19 ^ uVar8) - uVar8) * (short)*(undefined4 *)(param_4 + (ulong)(0 < iVar17) * 4);
    } while (iVar17 < 0xf);
  }
  return 0x10;
}

