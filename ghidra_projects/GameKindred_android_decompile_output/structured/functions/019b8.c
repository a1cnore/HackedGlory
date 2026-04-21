// functions/019b8 — 4 functions
#include "libGameKindred.h"




void FUN_019b820c(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0xff;
  *param_1 = 0xffff;
  return;
}




bool FUN_019b8220(uint *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  
  if (0 < *(int *)(param_2 + 400)) {
    uVar22 = 0;
    do {
      lVar21 = *(long *)(param_2 + 0x888);
      lVar16 = *(long *)(param_2 + 0x8f0);
      if (*(int *)(param_2 + 0x7c) == 0) {
        uVar11 = 0;
      }
      else {
        uVar13 = param_1[1];
        uVar10 = param_1[2];
        bVar6 = *(byte *)(param_2 + 0x45c);
        if ((int)uVar10 < 0) {
          puVar5 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar5 + 1) {
            FUN_019b6920(param_1);
            uVar10 = param_1[2];
          }
          else {
            uVar18 = *puVar5;
            uVar10 = uVar10 + 0x18;
            param_1[2] = uVar10;
            *(long *)(param_1 + 4) = (long)puVar5 + 3;
            uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
            *param_1 = (uint)(CONCAT44(*param_1,uVar18 >> 0x10 | uVar18 << 0x10) >> 8);
          }
        }
        uVar12 = *param_1;
        uVar18 = uVar13 * bVar6;
        uVar17 = uVar18 >> 8;
        uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
        uVar18 = uVar18 >> 8;
        if (uVar18 < uVar9) {
          iVar20 = uVar17 + 1;
          uVar17 = uVar13 - iVar20;
          uVar12 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
          *param_1 = uVar12;
        }
        if (uVar17 < 0x7f) {
          uVar23 = (ulong)uVar17;
          uVar17 = *(uint *)(&DAT_01e1e558 + (ulong)uVar17 * 4);
          uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
          param_1[2] = uVar10;
        }
        param_1[1] = uVar17;
        if (uVar18 < uVar9) {
          bVar6 = *(byte *)(param_2 + 0x45e);
          if ((int)uVar10 < 0) {
            puVar5 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar5 + 1) {
              FUN_019b6920(param_1);
              uVar10 = param_1[2];
              uVar12 = *param_1;
            }
            else {
              uVar13 = *puVar5;
              uVar10 = uVar10 + 0x18;
              param_1[2] = uVar10;
              *(long *)(param_1 + 4) = (long)puVar5 + 3;
              uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
              uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
              *param_1 = uVar12;
            }
          }
          uVar18 = uVar17 * bVar6;
          uVar13 = uVar18 >> 8;
          if (uVar18 >> 8 < uVar12 >> (ulong)(uVar10 & 0x1f)) {
            iVar20 = uVar13 + 1;
            uVar13 = uVar17 - iVar20;
            *param_1 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
            uVar11 = 3;
          }
          else {
            uVar11 = 2;
          }
        }
        else {
          bVar6 = *(byte *)(param_2 + 0x45d);
          if ((int)uVar10 < 0) {
            puVar5 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar5 + 1) {
              FUN_019b6920(param_1);
              uVar10 = param_1[2];
              uVar12 = *param_1;
            }
            else {
              uVar13 = *puVar5;
              uVar10 = uVar10 + 0x18;
              param_1[2] = uVar10;
              *(long *)(param_1 + 4) = (long)puVar5 + 3;
              uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
              uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
              *param_1 = uVar12;
            }
          }
          uVar18 = uVar17 * bVar6;
          uVar13 = uVar18 >> 8;
          if (uVar18 >> 8 < uVar12 >> (ulong)(uVar10 & 0x1f)) {
            iVar20 = uVar13 + 1;
            uVar13 = uVar17 - iVar20;
            *param_1 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
        }
        if (uVar13 < 0x7f) {
          uVar23 = (ulong)uVar13;
          uVar13 = *(uint *)(&DAT_01e1e558 + (ulong)uVar13 * 4);
          param_1[2] = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
        }
        param_1[1] = uVar13;
      }
      *(undefined1 *)(lVar16 + uVar22 * 800 + 0x31e) = uVar11;
      if (*(int *)(param_2 + 0x880) == 0) {
        uVar13 = param_1[1];
        uVar10 = param_1[2];
      }
      else {
        uVar18 = param_1[1];
        uVar10 = param_1[2];
        bVar6 = *(byte *)(param_2 + 0x884);
        if ((int)uVar10 < 0) {
          puVar5 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar5 + 1) {
            FUN_019b6920(param_1);
            uVar10 = param_1[2];
          }
          else {
            uVar13 = *puVar5;
            uVar10 = uVar10 + 0x18;
            param_1[2] = uVar10;
            *(long *)(param_1 + 4) = (long)puVar5 + 3;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            *param_1 = (uint)(CONCAT44(*param_1,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
          }
        }
        uVar12 = uVar18 * bVar6;
        uVar13 = uVar12 >> 8;
        uVar17 = *param_1 >> (ulong)(uVar10 & 0x1f);
        uVar12 = uVar12 >> 8;
        if (uVar12 < uVar17) {
          iVar20 = uVar13 + 1;
          uVar13 = uVar18 - iVar20;
          *param_1 = *param_1 - (iVar20 << (ulong)(uVar10 & 0x1f));
        }
        if (uVar13 < 0x7f) {
          uVar23 = (ulong)uVar13;
          uVar13 = *(uint *)(&DAT_01e1e558 + (ulong)uVar13 * 4);
          uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
          param_1[2] = uVar10;
        }
        param_1[1] = uVar13;
        *(bool *)(lVar16 + uVar22 * 800 + 0x31d) = uVar12 < uVar17;
      }
      if ((int)uVar10 < 0) {
        puVar5 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar5 + 1) {
          FUN_019b6920(param_1);
          uVar10 = param_1[2];
        }
        else {
          uVar18 = *puVar5;
          uVar10 = uVar10 + 0x18;
          param_1[2] = uVar10;
          *(long *)(param_1 + 4) = (long)puVar5 + 3;
          uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar18 >> 0x10 | uVar18 << 0x10) >> 8);
        }
      }
      uVar12 = *param_1;
      uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
      uVar18 = uVar13 * 0x91 >> 8;
      uVar17 = uVar13 * 0x91 >> 8;
      if (uVar18 < uVar9) {
        iVar20 = uVar17 + 1;
        uVar17 = uVar13 - iVar20;
        uVar12 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
        *param_1 = uVar12;
      }
      piVar3 = (int *)(lVar21 + (uVar22 & 0x3fffffff) * 4);
      if (uVar17 < 0x7f) {
        uVar23 = (ulong)uVar17;
        uVar17 = *(uint *)(&DAT_01e1e558 + (ulong)uVar17 * 4);
        uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
        param_1[2] = uVar10;
      }
      param_1[1] = uVar17;
      *(bool *)(lVar16 + uVar22 * 800 + 0x300) = uVar9 <= uVar18;
      if (uVar18 < uVar9) {
        if ((int)uVar10 < 0) {
          puVar5 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar5 + 1) {
            FUN_019b6920(param_1);
            uVar10 = param_1[2];
            uVar12 = *param_1;
          }
          else {
            uVar13 = *puVar5;
            uVar10 = uVar10 + 0x18;
            param_1[2] = uVar10;
            *(long *)(param_1 + 4) = (long)puVar5 + 3;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
            *param_1 = uVar12;
          }
        }
        uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
        uVar13 = uVar17 * 0x9c >> 8;
        uVar18 = uVar17 * 0x9c >> 8;
        if (uVar13 < uVar9) {
          iVar20 = uVar18 + 1;
          uVar18 = uVar17 - iVar20;
          uVar12 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
          *param_1 = uVar12;
        }
        if (uVar18 < 0x7f) {
          uVar23 = (ulong)uVar18;
          uVar18 = *(uint *)(&DAT_01e1e558 + (ulong)uVar18 * 4);
          uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
          param_1[2] = uVar10;
        }
        param_1[1] = uVar18;
        if (uVar13 < uVar9) {
          if ((int)uVar10 < 0) {
            puVar5 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar5 + 1) {
              FUN_019b6920(param_1);
              uVar10 = param_1[2];
              uVar12 = *param_1;
            }
            else {
              uVar13 = *puVar5;
              uVar10 = uVar10 + 0x18;
              param_1[2] = uVar10;
              *(long *)(param_1 + 4) = (long)puVar5 + 3;
              uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
              uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
              *param_1 = uVar12;
            }
          }
          uVar9 = uVar18 >> 1 & 0xffffff;
          uVar17 = uVar12 >> (ulong)(uVar10 & 0x1f);
          uVar13 = uVar9;
          if (uVar9 < uVar17) {
            *param_1 = uVar12 - (uVar9 + 1 << (ulong)(uVar10 & 0x1f));
            uVar13 = uVar18 - (uVar9 + 1);
          }
          if (uVar13 < 0x7f) {
            uVar23 = (ulong)uVar13;
            uVar13 = *(uint *)(&DAT_01e1e558 + (ulong)uVar13 * 4);
            param_1[2] = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
          }
          iVar20 = 3;
          param_1[1] = uVar13;
          if (uVar9 < uVar17) {
            iVar20 = 1;
          }
        }
        else {
          if ((int)uVar10 < 0) {
            puVar5 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar5 + 1) {
              FUN_019b6920(param_1);
              uVar10 = param_1[2];
              uVar12 = *param_1;
            }
            else {
              uVar13 = *puVar5;
              uVar10 = uVar10 + 0x18;
              param_1[2] = uVar10;
              *(long *)(param_1 + 4) = (long)puVar5 + 3;
              uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
              uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
              *param_1 = uVar12;
            }
          }
          uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
          uVar13 = uVar18 * 0xa3 >> 8;
          uVar17 = uVar18 * 0xa3 >> 8;
          if (uVar13 < uVar9) {
            iVar20 = uVar17 + 1;
            uVar17 = uVar18 - iVar20;
            *param_1 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
          }
          if (uVar17 < 0x7f) {
            uVar23 = (ulong)uVar17;
            uVar17 = *(uint *)(&DAT_01e1e558 + (ulong)uVar17 * 4);
            param_1[2] = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
          }
          iVar20 = 0;
          if (uVar13 < uVar9) {
            iVar20 = 2;
          }
          param_1[1] = uVar17;
        }
        *(char *)(lVar16 + uVar22 * 800 + 0x301) = (char)iVar20;
        *piVar3 = iVar20 * 0x1010101;
        *(int *)(param_2 + 0x890) = iVar20 * 0x1010101;
      }
      else {
        lVar21 = 0;
        piVar15 = (int *)(lVar16 + uVar22 * 800 + 0x301);
        do {
          lVar4 = param_2 + lVar21;
          uVar23 = (ulong)*(byte *)(lVar4 + 0x890);
          lVar19 = 0;
          do {
            bVar6 = *(byte *)((long)piVar3 + lVar19);
            uVar13 = param_1[1];
            uVar10 = param_1[2];
            bVar7 = (&UNK_01e1f264)
                    [(-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3) + (long)(int)uVar23 +
                     (ulong)bVar6 * 0x5a];
            if ((int)uVar10 < 0) {
              puVar5 = *(uint **)(param_1 + 4);
              if (*(uint **)(param_1 + 6) < puVar5 + 1) {
                FUN_019b6920(param_1);
                uVar10 = param_1[2];
              }
              else {
                uVar18 = *puVar5;
                uVar10 = uVar10 + 0x18;
                param_1[2] = uVar10;
                *(long *)(param_1 + 4) = (long)puVar5 + 3;
                uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
                *param_1 = (uint)(CONCAT44(*param_1,uVar18 >> 0x10 | uVar18 << 0x10) >> 8);
              }
            }
            uVar12 = *param_1;
            uVar18 = uVar13 * bVar7;
            uVar17 = uVar18 >> 8;
            uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
            uVar18 = uVar18 >> 8;
            if (uVar18 < uVar9) {
              iVar20 = uVar17 + 1;
              uVar17 = uVar13 - iVar20;
              uVar12 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
              *param_1 = uVar12;
            }
            uVar14 = (ulong)(uVar18 < uVar9);
            if (uVar17 < 0x7f) {
              uVar1 = (ulong)uVar17;
              uVar17 = *(uint *)(&DAT_01e1e558 + (ulong)uVar17 * 4);
              uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar1];
              param_1[2] = uVar10;
            }
            cVar8 = (&DAT_01e1f5e8)[uVar14];
            iVar20 = (int)cVar8;
            param_1[1] = uVar17;
            if ((0xa2eaUL >> uVar14 & 1) != 0) {
              do {
                bVar7 = (&UNK_01e1f264)[(long)cVar8 + (long)(int)uVar23 * 9 + (ulong)bVar6 * 0x5a];
                if ((int)uVar10 < 0) {
                  puVar5 = *(uint **)(param_1 + 4);
                  if (*(uint **)(param_1 + 6) < puVar5 + 1) {
                    FUN_019b6920(param_1);
                    uVar10 = param_1[2];
                    uVar12 = *param_1;
                  }
                  else {
                    uVar13 = *puVar5;
                    uVar10 = uVar10 + 0x18;
                    param_1[2] = uVar10;
                    *(long *)(param_1 + 4) = (long)puVar5 + 3;
                    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                    uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
                    *param_1 = uVar12;
                  }
                }
                uVar18 = uVar12 >> (ulong)(uVar10 & 0x1f);
                uVar13 = uVar17 * bVar7 >> 8;
                uVar9 = uVar17 * bVar7 >> 8;
                if (uVar13 < uVar18) {
                  iVar2 = uVar9 + 1;
                  uVar12 = uVar12 - (iVar2 << (ulong)(uVar10 & 0x1f));
                  *param_1 = uVar12;
                  uVar9 = uVar17 - iVar2;
                }
                uVar17 = uVar9;
                if (uVar17 < 0x7f) {
                  uVar14 = (ulong)uVar17;
                  uVar17 = *(uint *)(&DAT_01e1e558 + (ulong)uVar17 * 4);
                  uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar14];
                  param_1[2] = uVar10;
                }
                uVar13 = (uint)(uVar13 < uVar18) | iVar20 << 1;
                cVar8 = (&DAT_01e1f5e8)[(int)uVar13];
                iVar20 = (int)cVar8;
                param_1[1] = uVar17;
              } while ((0xa2eaUL >> ((long)(int)uVar13 & 0x3fU) & 1) != 0);
            }
            uVar23 = (ulong)(uint)-iVar20;
            uVar11 = (undefined1)-iVar20;
            *(undefined1 *)((long)piVar3 + lVar19) = uVar11;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 4);
          *piVar15 = *piVar3;
          lVar21 = lVar21 + 1;
          *(undefined1 *)(lVar4 + 0x890) = uVar11;
          piVar15 = piVar15 + 1;
        } while (lVar21 != 4);
      }
      uVar13 = param_1[1];
      uVar10 = param_1[2];
      if ((int)uVar10 < 0) {
        puVar5 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar5 + 1) {
          FUN_019b6920(param_1);
          uVar10 = param_1[2];
        }
        else {
          uVar18 = *puVar5;
          uVar10 = uVar10 + 0x18;
          param_1[2] = uVar10;
          *(long *)(param_1 + 4) = (long)puVar5 + 3;
          uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar18 >> 0x10 | uVar18 << 0x10) >> 8);
        }
      }
      uVar12 = *param_1;
      uVar18 = uVar13 * 0x8e;
      uVar17 = uVar18 >> 8;
      uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
      uVar18 = uVar18 >> 8;
      if (uVar18 < uVar9) {
        iVar20 = uVar17 + 1;
        uVar17 = uVar13 - iVar20;
        uVar12 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
        *param_1 = uVar12;
      }
      if (uVar17 < 0x7f) {
        uVar23 = (ulong)uVar17;
        uVar17 = *(uint *)(&DAT_01e1e558 + (ulong)uVar17 * 4);
        uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
        param_1[2] = uVar10;
      }
      param_1[1] = uVar17;
      if (uVar18 < uVar9) {
        if ((int)uVar10 < 0) {
          puVar5 = *(uint **)(param_1 + 4);
          if (*(uint **)(param_1 + 6) < puVar5 + 1) {
            FUN_019b6920(param_1);
            uVar10 = param_1[2];
            uVar12 = *param_1;
          }
          else {
            uVar13 = *puVar5;
            uVar10 = uVar10 + 0x18;
            param_1[2] = uVar10;
            *(long *)(param_1 + 4) = (long)puVar5 + 3;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
            *param_1 = uVar12;
          }
        }
        uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
        uVar13 = uVar17 * 0x72 >> 8;
        uVar18 = uVar17 * 0x72 >> 8;
        if (uVar13 < uVar9) {
          iVar20 = uVar18 + 1;
          uVar18 = uVar17 - iVar20;
          uVar12 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
          *param_1 = uVar12;
        }
        if (uVar18 < 0x7f) {
          uVar23 = (ulong)uVar18;
          uVar18 = *(uint *)(&DAT_01e1e558 + (ulong)uVar18 * 4);
          uVar10 = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
          param_1[2] = uVar10;
        }
        param_1[1] = uVar18;
        if (uVar13 < uVar9) {
          if ((int)uVar10 < 0) {
            puVar5 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar5 + 1) {
              FUN_019b6920(param_1);
              uVar10 = param_1[2];
              uVar12 = *param_1;
            }
            else {
              uVar13 = *puVar5;
              uVar10 = uVar10 + 0x18;
              param_1[2] = uVar10;
              *(long *)(param_1 + 4) = (long)puVar5 + 3;
              uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
              uVar12 = (uint)(CONCAT44(uVar12,uVar13 >> 0x10 | uVar13 << 0x10) >> 8);
              *param_1 = uVar12;
            }
          }
          uVar9 = uVar12 >> (ulong)(uVar10 & 0x1f);
          uVar13 = uVar18 * 0xb7 >> 8;
          uVar17 = uVar18 * 0xb7 >> 8;
          if (uVar13 < uVar9) {
            iVar20 = uVar17 + 1;
            uVar17 = uVar18 - iVar20;
            *param_1 = uVar12 - (iVar20 << (ulong)(uVar10 & 0x1f));
          }
          if (uVar17 < 0x7f) {
            uVar23 = (ulong)uVar17;
            uVar17 = *(uint *)(&DAT_01e1e558 + (ulong)uVar17 * 4);
            param_1[2] = uVar10 - (byte)(&DAT_01e1e4d8)[uVar23];
          }
          uVar11 = 3;
          if (uVar13 < uVar9) {
            uVar11 = 1;
          }
          param_1[1] = uVar17;
        }
        else {
          uVar11 = 2;
        }
      }
      else {
        uVar11 = 0;
      }
      *(undefined1 *)(lVar16 + uVar22 * 800 + 0x311) = uVar11;
      uVar22 = uVar22 + 1;
    } while ((long)uVar22 < (long)*(int *)(param_2 + 400));
  }
  return *(int *)(param_2 + 0x30) == 0;
}




void FUN_019b8d58(uint *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  lVar10 = 0;
  lVar21 = param_2 + 0x45f;
  puVar15 = &DAT_01e1ea24;
  puVar18 = &DAT_01e1ee44;
  do {
    lVar11 = 0;
    puVar16 = puVar15;
    puVar19 = puVar18;
    lVar22 = lVar21;
    do {
      lVar14 = 0;
      puVar17 = puVar16;
      puVar20 = puVar19;
      lVar23 = lVar22;
      do {
        lVar13 = 0;
        do {
          uVar3 = param_1[1];
          uVar9 = param_1[2];
          bVar5 = puVar17[lVar13];
          if ((int)uVar9 < 0) {
            puVar4 = *(uint **)(param_1 + 4);
            if (*(uint **)(param_1 + 6) < puVar4 + 1) {
              FUN_019b6920(param_1);
              uVar9 = param_1[2];
            }
            else {
              uVar1 = *puVar4;
              uVar9 = uVar9 + 0x18;
              param_1[2] = uVar9;
              *(long *)(param_1 + 4) = (long)puVar4 + 3;
              uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
              *param_1 = (uint)(CONCAT44(*param_1,uVar1 >> 0x10 | uVar1 << 0x10) >> 8);
            }
          }
          uVar12 = uVar3 * bVar5;
          uVar6 = *param_1 >> (ulong)(uVar9 & 0x1f);
          uVar1 = uVar12 >> 8;
          uVar12 = uVar12 >> 8;
          if (uVar1 < uVar6) {
            iVar8 = uVar12 + 1;
            uVar12 = uVar3 - iVar8;
            *param_1 = *param_1 - (iVar8 << (ulong)(uVar9 & 0x1f));
          }
          if (uVar12 < 0x7f) {
            uVar2 = (ulong)uVar12;
            uVar12 = *(uint *)(&DAT_01e1e558 + (ulong)uVar12 * 4);
            param_1[2] = uVar9 - (byte)(&DAT_01e1e4d8)[uVar2];
          }
          param_1[1] = uVar12;
          if (uVar1 < uVar6) {
            uVar7 = FUN_019b6984(param_1,8);
          }
          else {
            uVar7 = puVar20[lVar13];
          }
          *(undefined1 *)(lVar23 + lVar13) = uVar7;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0xb);
        lVar14 = lVar14 + 1;
        puVar17 = puVar17 + 0xb;
        puVar20 = puVar20 + 0xb;
        lVar23 = lVar23 + 0xb;
      } while (lVar14 != 3);
      lVar11 = lVar11 + 1;
      puVar16 = puVar16 + 0x21;
      puVar19 = puVar19 + 0x21;
      lVar22 = lVar22 + 0x21;
    } while (lVar11 != 8);
    lVar10 = lVar10 + 1;
    puVar15 = puVar15 + 0x108;
    puVar18 = puVar18 + 0x108;
    lVar21 = lVar21 + 0x108;
  } while (lVar10 != 4);
  iVar8 = FUN_019b6984(param_1,1);
  *(int *)(param_2 + 0x880) = iVar8;
  if (iVar8 != 0) {
    uVar7 = FUN_019b6984(param_1,8);
    *(undefined1 *)(param_2 + 0x884) = uVar7;
  }
  return;
}




void FUN_019b8f2c(long param_1,int param_2,int param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  int iVar28;
  undefined4 auStack_198 [64];
  undefined4 auStack_98 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  memset(auStack_198 + 0x10,0,0x100);
  if (3 < param_3) {
    uVar10 = -(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_4 << 1;
    lVar11 = 2;
    lVar8 = param_1 + (long)(int)param_4 * 2 + 1;
    lVar13 = param_1 + ((uVar10 + 2) - (long)param_2);
    do {
      if (3 < param_2) {
        uVar15 = (uint)*(byte *)(param_1 + lVar11 * (int)param_4);
        lVar14 = 0;
        do {
          bVar2 = ((byte *)(lVar8 + lVar14))[1];
          iVar17 = bVar2 - uVar15;
          iVar9 = -iVar17;
          if (-1 < iVar17) {
            iVar9 = iVar17;
          }
          uVar5 = (uint)*(byte *)(lVar8 + lVar14);
          uVar7 = (uint)*(byte *)(lVar13 + lVar14);
          iVar18 = bVar2 - uVar5;
          uVar5 = (uVar7 + uVar5) - (uint)((byte *)(lVar13 + lVar14))[-1];
          iVar17 = -iVar18;
          if (-1 < iVar18) {
            iVar17 = iVar18;
          }
          uVar16 = (uint)bVar2;
          iVar19 = uVar16 - uVar7;
          iVar18 = -iVar19;
          if (-1 < iVar19) {
            iVar18 = iVar19;
          }
          if (0xff < uVar5) {
            uVar5 = ((int)uVar5 >> 0x1f & 0xffffff01U) + 0xff;
          }
          iVar20 = uVar16 - uVar5;
          iVar19 = -iVar20;
          if (-1 < iVar20) {
            iVar19 = iVar20;
          }
          auStack_198[(long)(iVar9 >> 4) + 0x10] = 1;
          lVar1 = lVar14 + 4;
          lVar14 = lVar14 + 2;
          uVar15 = (int)(uVar15 * 3 + uVar16 + 2) >> 2;
          auStack_198[(long)(iVar17 >> 4) + 0x20] = 1;
          auStack_198[(long)(iVar18 >> 4) + 0x30] = 1;
          auStack_98[iVar19 >> 4] = 1;
        } while (lVar1 < param_2 + -1);
      }
      lVar11 = lVar11 + 2;
      lVar13 = lVar13 + uVar10;
      lVar8 = lVar8 + uVar10;
    } while (lVar11 < param_3 + -1);
  }
  lVar8 = 0;
  uVar6 = 0;
  puVar12 = auStack_198;
  iVar9 = 0x7fffffff;
  do {
    puVar12 = puVar12 + 0x10;
    lVar11 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    uVar21 = 0x100000000;
    uVar22 = 0x300000002;
    do {
      uVar27 = ((undefined8 *)((long)puVar12 + lVar11))[1];
      uVar24 = *(undefined8 *)((long)puVar12 + lVar11);
      lVar11 = lVar11 + 0x10;
      iVar23 = -(uint)(0 < (int)uVar24);
      iVar25 = -(uint)(0 < (int)((ulong)uVar24 >> 0x20));
      iVar26 = -(uint)(0 < (int)uVar27);
      iVar28 = -(uint)(0 < (int)((ulong)uVar27 >> 0x20));
      iVar23 = CONCAT13((byte)((ulong)uVar21 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                        CONCAT12((byte)((ulong)uVar21 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar21 >> 8) & (byte)((uint)iVar23 >> 8),
                                          (byte)uVar21 & (byte)iVar23)));
      iVar26 = CONCAT13((byte)((ulong)uVar22 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                        CONCAT12((byte)((ulong)uVar22 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar22 >> 8) & (byte)((uint)iVar26 >> 8),
                                          (byte)uVar22 & (byte)iVar26)));
      iVar17 = iVar23 + iVar17;
      iVar18 = (int)(CONCAT17((byte)((ulong)uVar21 >> 0x38) & (byte)((uint)iVar25 >> 0x18),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) & (byte)((uint)iVar25 >> 0x10),
                                       CONCAT15((byte)((ulong)uVar21 >> 0x28) &
                                                (byte)((uint)iVar25 >> 8),
                                                CONCAT14((byte)((ulong)uVar21 >> 0x20) &
                                                         (byte)iVar25,iVar23)))) >> 0x20) + iVar18;
      iVar19 = iVar26 + iVar19;
      iVar20 = (int)(CONCAT17((byte)((ulong)uVar22 >> 0x38) & (byte)((uint)iVar28 >> 0x18),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) & (byte)((uint)iVar28 >> 0x10),
                                       CONCAT15((byte)((ulong)uVar22 >> 0x28) &
                                                (byte)((uint)iVar28 >> 8),
                                                CONCAT14((byte)((ulong)uVar22 >> 0x20) &
                                                         (byte)iVar28,iVar26)))) >> 0x20) + iVar20;
      uVar21 = CONCAT44((int)((ulong)uVar21 >> 0x20) + 4,(int)uVar21 + 4);
      uVar22 = CONCAT44((int)((ulong)uVar22 >> 0x20) + 4,(int)uVar22 + 4);
    } while (lVar11 != 0x40);
    iVar17 = iVar17 + iVar18 + iVar19 + iVar20;
    uVar4 = (int)lVar8;
    if (iVar9 <= iVar17) {
      iVar17 = iVar9;
      uVar4 = uVar6;
    }
    uVar6 = uVar4;
    lVar8 = lVar8 + 1;
    iVar9 = iVar17;
  } while (lVar8 != 4);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

