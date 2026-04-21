// functions/00ee5 — 5 functions
#include "libGameKindred.h"




void FUN_00ee5054(long *param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  double *pdVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  code *pcVar20;
  ushort uVar21;
  ushort uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  if (0 < (int)param_1[7]) {
    lVar17 = param_1[0x4f];
    lVar18 = param_1[0x26];
    lVar16 = 0;
    uVar19 = 0;
    pcVar20 = (code *)0x0;
    auVar27 = NEON_fmov(0x3fc0000000000000,8);
    do {
      iVar3 = *(int *)(lVar18 + 0x24);
      iVar1 = *(int *)(lVar18 + 0x28) + iVar3 * 0x100;
      if (iVar1 < 0x70e) {
        if (iVar1 < 0x404) {
          if (iVar1 < 0x204) {
            if (iVar1 < 0x201) {
              if (iVar1 == 0x101) {
                pcVar20 = FUN_00ee928c;
              }
              else {
                if (iVar1 != 0x102) {
LAB_00ee50c4:
                  lVar8 = *param_1;
                  *(undefined4 *)(lVar8 + 0x28) = 7;
                  *(int *)(lVar8 + 0x2c) = iVar3;
                  *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)(lVar18 + 0x28);
                  (**(code **)*param_1)(param_1);
                  goto LAB_00ee542c;
                }
                pcVar20 = FUN_00eee448;
              }
            }
            else if (iVar1 == 0x201) {
              pcVar20 = FUN_00eece44;
            }
            else {
              if (iVar1 != 0x202) goto LAB_00ee50c4;
              pcVar20 = FUN_00ee91f0;
            }
          }
          else if (iVar1 < 0x306) {
            if (iVar1 == 0x204) {
              pcVar20 = FUN_00eee2bc;
            }
            else {
              if (iVar1 != 0x303) goto LAB_00ee50c4;
              pcVar20 = FUN_00ee90ac;
            }
          }
          else if (iVar1 == 0x306) {
            pcVar20 = FUN_00eee0f4;
          }
          else {
            if (iVar1 != 0x402) goto LAB_00ee50c4;
            pcVar20 = FUN_00eeccf8;
          }
        }
        else if (iVar1 < 0x603) {
          if (iVar1 < 0x505) {
            if (iVar1 == 0x404) {
              pcVar20 = FUN_00ee8f24;
            }
            else {
              if (iVar1 != 0x408) goto LAB_00ee50c4;
              pcVar20 = FUN_00eeddc8;
            }
          }
          else if (iVar1 == 0x505) {
            pcVar20 = FUN_00ee8d1c;
          }
          else {
            if (iVar1 != 0x50a) goto LAB_00ee50c4;
            pcVar20 = FUN_00eedac0;
          }
        }
        else if (iVar1 < 0x60c) {
          if (iVar1 == 0x603) {
            pcVar20 = FUN_00eecb40;
          }
          else {
            if (iVar1 != 0x606) goto LAB_00ee50c4;
            pcVar20 = FUN_00ee8ae8;
          }
        }
        else if (iVar1 == 0x60c) {
          pcVar20 = FUN_00eed754;
        }
        else {
          if (iVar1 != 0x707) goto LAB_00ee50c4;
          pcVar20 = FUN_00ee8794;
        }
LAB_00ee5428:
        uVar19 = 0;
      }
      else {
        if (0xc05 < iVar1) {
          if (iVar1 < 0xe0e) {
            if (iVar1 < 0xd0d) {
              if (iVar1 == 0xc06) {
                pcVar20 = FUN_00eec280;
              }
              else {
                if (iVar1 != 0xc0c) goto LAB_00ee50c4;
                pcVar20 = FUN_00ee9ed8;
              }
            }
            else if (iVar1 == 0xd0d) {
              pcVar20 = FUN_00eea34c;
            }
            else {
              if (iVar1 != 0xe07) goto LAB_00ee50c4;
              pcVar20 = FUN_00eebe58;
            }
          }
          else if (iVar1 < 0x1008) {
            if (iVar1 == 0xe0e) {
              pcVar20 = FUN_00eea8a4;
            }
            else {
              if (iVar1 != 0xf0f) goto LAB_00ee50c4;
              pcVar20 = FUN_00eead9c;
            }
          }
          else if (iVar1 == 0x1008) {
            pcVar20 = FUN_00eeb900;
          }
          else {
            if (iVar1 != 0x1010) goto LAB_00ee50c4;
            pcVar20 = FUN_00eeb2f8;
          }
          goto LAB_00ee5428;
        }
        if (0x908 < iVar1) {
          if (iVar1 < 0xa0a) {
            if (iVar1 == 0x909) {
              pcVar20 = FUN_00ee92bc;
            }
            else {
              if (iVar1 != 0xa05) goto LAB_00ee50c4;
              pcVar20 = FUN_00eec5d4;
            }
          }
          else if (iVar1 == 0xa0a) {
            pcVar20 = FUN_00ee9658;
          }
          else {
            if (iVar1 != 0xb0b) goto LAB_00ee50c4;
            pcVar20 = FUN_00ee9a30;
          }
          goto LAB_00ee5428;
        }
        if (iVar1 < 0x808) {
          if (iVar1 == 0x70e) {
            pcVar20 = FUN_00eed33c;
          }
          else {
            if (iVar1 != 0x804) goto LAB_00ee50c4;
            pcVar20 = FUN_00eec8c4;
          }
          goto LAB_00ee5428;
        }
        if (iVar1 != 0x808) {
          if (iVar1 != 0x810) goto LAB_00ee50c4;
          pcVar20 = FUN_00eece94;
          goto LAB_00ee5428;
        }
        uVar4 = *(uint *)(param_1 + 0xc);
        if (uVar4 < 3) {
          pcVar20 = (code *)(&PTR_FUN_02824560)[(int)uVar4];
          uVar19 = uVar4;
        }
        else {
          puVar9 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar9 + 5) = 0x31;
          (*(code *)*puVar9)(param_1);
        }
      }
LAB_00ee542c:
      *(code **)(lVar17 + lVar16 * 8 + 8) = pcVar20;
      if (((*(int *)(lVar18 + 0x34) != 0) &&
          (puVar10 = (uint *)(lVar17 + lVar16 * 4 + 0x58), *puVar10 != uVar19)) &&
         (lVar8 = *(long *)(lVar18 + 0x50), lVar8 != 0)) {
        *puVar10 = uVar19;
        if (uVar19 == 2) {
          puVar9 = *(undefined8 **)(lVar18 + 0x58);
          lVar12 = 0;
          do {
            dVar5 = (double)(&DAT_01bf36f0)[lVar12];
            lVar13 = 0;
            puVar14 = puVar9;
            pdVar15 = (double *)&DAT_01bf36f0;
            do {
              puVar2 = (ushort *)(lVar8 + lVar13);
              uVar21 = puVar2[1];
              lVar13 = lVar13 + 4;
              auVar25._0_8_ = (ulong)CONCAT24(uVar21,(uint)*puVar2) & 0xffffffff;
              auVar25._8_2_ = uVar21;
              auVar25._10_6_ = 0;
              auVar26 = NEON_ucvtf(auVar25,8);
              dVar6 = dVar5 * auVar26._0_8_ * *pdVar15 * auVar27._0_8_;
              dVar7 = dVar5 * auVar26._8_8_ * pdVar15[1] * auVar27._8_8_;
              auVar26._8_4_ = SUB84(dVar7,0);
              auVar26._0_8_ = dVar6;
              auVar26._12_4_ = (int)((ulong)dVar7 >> 0x20);
              *puVar14 = CONCAT44((float)auVar26._8_8_,(float)dVar6);
              puVar14 = puVar14 + 1;
              pdVar15 = pdVar15 + 2;
            } while (lVar13 != 0x10);
            lVar12 = lVar12 + 1;
            puVar9 = puVar9 + 4;
            lVar8 = lVar8 + 0x10;
          } while (lVar12 != 8);
        }
        else if (uVar19 == 1) {
          lVar12 = 0;
          puVar9 = *(undefined8 **)(lVar18 + 0x58);
          do {
            uVar24 = *(undefined8 *)(lVar8 + lVar12);
            uVar23 = *(undefined8 *)((long)&DAT_01bf3670 + lVar12);
            lVar12 = lVar12 + 8;
            uVar21 = (ushort)((ulong)uVar24 >> 0x10);
            uVar22 = (ushort)((ulong)uVar24 >> 0x30);
            puVar9[1] = CONCAT44((int)((long)(int)(short)((ulong)uVar23 >> 0x30) * (ulong)uVar22 +
                                       0x800 >> 0xc),
                                 (int)((long)(int)(short)((ulong)uVar23 >> 0x20) *
                                       ((ulong)CONCAT24(uVar22,(uint)(ushort)((ulong)uVar24 >> 0x20)
                                                       ) & 0xffffffff) + 0x800 >> 0xc));
            *puVar9 = CONCAT44((int)((long)(int)(short)((ulong)uVar23 >> 0x10) * (ulong)uVar21 +
                                     0x800 >> 0xc),
                               (int)((long)(int)(short)uVar23 *
                                     ((ulong)(CONCAT24(uVar21,(int)uVar24) & 0xffff0000ffff) &
                                     0xffffffff) + 0x800 >> 0xc));
            puVar9 = puVar9 + 2;
          } while (lVar12 != 0x80);
        }
        else if (uVar19 == 0) {
          lVar12 = 0;
          puVar11 = *(ulong **)(lVar18 + 0x58);
          do {
            uVar23 = *(undefined8 *)(lVar8 + lVar12);
            lVar12 = lVar12 + 8;
            puVar11[1] = (ulong)CONCAT24((short)((ulong)uVar23 >> 0x30),
                                         (uint)(ushort)((ulong)uVar23 >> 0x20));
            *puVar11 = (ulong)(CONCAT24((short)((ulong)uVar23 >> 0x10),(int)uVar23) & 0xffff0000ffff
                              );
            puVar11 = puVar11 + 2;
          } while (lVar12 != 0x80);
        }
        else {
          puVar9 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar9 + 5) = 0x31;
          (*(code *)*puVar9)(param_1);
        }
      }
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x60;
    } while (lVar16 < (int)param_1[7]);
  }
  return;
}




void FUN_00ee55e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__s;
  long lVar3;
  int iVar4;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x170);
  *(undefined8 **)(param_1 + 0x270) = puVar2;
  *puVar2 = FUN_00ee56c0;
  if (*(int *)(param_1 + 0x13c) == 0) {
    lVar3 = 0;
    puVar2[0x10] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    do {
      puVar1 = (undefined8 *)((long)puVar2 + lVar3 + 0x88);
      lVar3 = lVar3 + 0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
    } while (lVar3 != 0x20);
  }
  else {
    __s = (void *)(*(code *)**(undefined8 **)(param_1 + 8))
                            (param_1,1,(long)*(int *)(param_1 + 0x38) << 8);
    *(void **)(param_1 + 0xc0) = __s;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar4 = 0;
      do {
        memset(__s,0xff,0x100);
        iVar4 = iVar4 + 1;
        __s = (void *)((long)__s + 0x100);
      } while (iVar4 < *(int *)(param_1 + 0x38));
    }
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
  }
  return;
}




void FUN_00ee56c0(long *param_1)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar10 = param_1[0x4e];
  iVar11 = *(int *)((long)param_1 + 0x21c);
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    if ((((iVar11 != 0) || (*(int *)((long)param_1 + 0x224) != 0)) || ((int)param_1[0x45] != 0)) ||
       ((((int)param_1[0x27] != 0 || ((int)param_1[0x44] < 0x40)) &&
        ((int)param_1[0x44] != (int)param_1[0x47])))) {
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x7d;
      (**(code **)(lVar9 + 8))(param_1,0xffffffff);
    }
    pcVar2 = FUN_00ee6d98;
    if ((int)param_1[0x47] != 0x3f) {
      pcVar2 = FUN_00ee6954;
    }
    *(code **)(lVar10 + 8) = pcVar2;
    if (0 < (int)param_1[0x38]) {
      lVar9 = 0;
      do {
        lVar6 = param_1[lVar9 + 0x39];
        lVar13 = (long)*(int *)(lVar6 + 0x14);
        FUN_00ee6630(param_1,1,lVar13,lVar10 + lVar13 * 8 + 0x68);
        if ((int)param_1[0x47] != 0) {
          lVar13 = (long)*(int *)(lVar6 + 0x18);
          FUN_00ee6630(param_1,0,lVar13,lVar10 + lVar13 * 8 + 0x88);
        }
        *(undefined4 *)(lVar10 + 0x24 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[0x38]);
    }
    if (0 < (int)param_1[0x3e]) {
      lVar9 = 0;
      do {
        lVar13 = lVar10 + 0x148 + lVar9 * 8;
        lVar6 = param_1[(long)*(int *)((long)param_1 + lVar9 * 4 + 500) + 0x39];
        *(undefined8 *)(lVar13 + -0xa0) =
             *(undefined8 *)(lVar10 + (long)*(int *)(lVar6 + 0x14) * 8 + 0x68);
        *(undefined8 *)(lVar13 + -0x50) =
             *(undefined8 *)(lVar10 + (long)*(int *)(lVar6 + 0x18) * 8 + 0x88);
        iVar11 = 0;
        if (*(int *)(lVar6 + 0x34) != 0) {
          iVar4 = (int)param_1[0x47];
          iVar11 = *(int *)(lVar6 + 0x24);
          iVar8 = *(int *)(lVar6 + 0x28);
          if (iVar4 < 0xf) {
            if (iVar4 == 0) {
              iVar11 = 1;
              goto LAB_00ee59f4;
            }
            if (iVar4 == 3) {
              lVar6 = (long)(int)(iVar8 - 1U);
              lVar13 = (long)(int)(iVar11 - 1U);
              if (1 < iVar8 - 1U) {
                lVar6 = 1;
              }
              if (1 < iVar11 - 1U) {
                lVar13 = 1;
              }
              puVar12 = &UNK_01bf3730 + lVar6 * 8;
            }
            else {
              if (iVar4 != 8) goto LAB_00ee59c8;
              lVar6 = 2;
              if (iVar8 - 1U < 3) {
                lVar6 = (long)(int)(iVar8 - 1U);
              }
              lVar13 = 2;
              if (iVar11 - 1U < 3) {
                lVar13 = (long)(int)(iVar11 - 1U);
              }
              puVar12 = &UNK_01bf3740 + lVar6 * 0xc;
            }
          }
          else if (iVar4 < 0x23) {
            if (iVar4 == 0xf) {
              lVar6 = 3;
              if (iVar8 - 1U < 4) {
                lVar6 = (long)(int)(iVar8 - 1U);
              }
              lVar13 = 3;
              if (iVar11 - 1U < 4) {
                lVar13 = (long)(int)(iVar11 - 1U);
              }
              puVar12 = &UNK_01bf3764 + lVar6 * 0x10;
            }
            else if (iVar4 == 0x18) {
              lVar6 = 4;
              if (iVar8 - 1U < 5) {
                lVar6 = (long)(int)(iVar8 - 1U);
              }
              lVar13 = 4;
              if (iVar11 - 1U < 5) {
                lVar13 = (long)(int)(iVar11 - 1U);
              }
              puVar12 = &UNK_01bf37a4 + lVar6 * 0x14;
            }
            else {
LAB_00ee59c8:
              lVar6 = 7;
              if (iVar8 - 1U < 8) {
                lVar6 = (long)(int)(iVar8 - 1U);
              }
              lVar13 = 7;
              if (iVar11 - 1U < 8) {
                lVar13 = (long)(int)(iVar11 - 1U);
              }
              puVar12 = &UNK_01bf395c + lVar6 * 0x20;
            }
          }
          else if (iVar4 == 0x23) {
            lVar6 = 5;
            if (iVar8 - 1U < 6) {
              lVar6 = (long)(int)(iVar8 - 1U);
            }
            lVar13 = 5;
            if (iVar11 - 1U < 6) {
              lVar13 = (long)(int)(iVar11 - 1U);
            }
            puVar12 = &UNK_01bf3808 + lVar6 * 0x18;
          }
          else {
            if (iVar4 != 0x30) goto LAB_00ee59c8;
            lVar6 = 6;
            if (iVar8 - 1U < 7) {
              lVar6 = (long)(int)(iVar8 - 1U);
            }
            lVar13 = 6;
            if (iVar11 - 1U < 7) {
              lVar13 = (long)(int)(iVar11 - 1U);
            }
            puVar12 = &UNK_01bf3898 + lVar6 * 0x1c;
          }
          iVar11 = *(int *)(puVar12 + lVar13 * 4) + 1;
        }
LAB_00ee59f4:
        *(int *)(lVar10 + 0x148 + lVar9 * 4) = iVar11;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[0x3e]);
    }
    goto LAB_00ee5c1c;
  }
  iVar8 = (int)param_1[0x44];
  if (iVar11 == 0) {
    if (iVar8 == 0) goto LAB_00ee5a10;
LAB_00ee5a38:
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x11;
    *(int *)(lVar9 + 0x2c) = iVar11;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x44];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x45];
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar8 < iVar11) || ((int)param_1[0x47] < iVar8)) || ((int)param_1[0x38] != 1))
    goto LAB_00ee5a38;
LAB_00ee5a10:
    if (*(int *)((long)param_1 + 0x224) == 0) {
      iVar8 = (int)param_1[0x45];
    }
    else {
      iVar8 = *(int *)((long)param_1 + 0x224) + -1;
      if (iVar8 != (int)param_1[0x45]) goto LAB_00ee5a38;
    }
    if (0xd < iVar8) goto LAB_00ee5a38;
  }
  iVar11 = (int)param_1[0x38];
  if (0 < iVar11) {
    lVar9 = 0;
    do {
      lVar13 = param_1[0x18];
      iVar11 = *(int *)(param_1[lVar9 + 0x39] + 4);
      iVar8 = *(int *)((long)param_1 + 0x21c);
      if ((iVar8 != 0) && (*(int *)(lVar13 + (long)iVar11 * 0x100) < 0)) {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x76;
        *(int *)(lVar6 + 0x2c) = iVar11;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar8 = *(int *)((long)param_1 + 0x21c);
      }
      if (iVar8 <= (int)param_1[0x44]) {
        lVar13 = lVar13 + (long)iVar11 * 0x100;
        lVar6 = (long)iVar8;
        do {
          uVar5 = *(uint *)(lVar13 + lVar6 * 4);
          if (*(uint *)((long)param_1 + 0x224) != (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU))) {
            lVar7 = *param_1;
            *(undefined4 *)(lVar7 + 0x28) = 0x76;
            *(int *)(lVar7 + 0x2c) = iVar11;
            *(int *)(*param_1 + 0x30) = (int)lVar6;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          }
          *(int *)(lVar13 + lVar6 * 4) = (int)param_1[0x45];
          bVar1 = lVar6 < (int)param_1[0x44];
          lVar6 = lVar6 + 1;
        } while (bVar1);
      }
      iVar11 = (int)param_1[0x38];
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar11);
  }
  iVar8 = *(int *)((long)param_1 + 0x21c);
  pcVar2 = FUN_00ee60f4;
  pcVar3 = FUN_00ee5c70;
  if (iVar8 != 0) {
    pcVar2 = FUN_00ee6220;
    pcVar3 = FUN_00ee5e94;
  }
  if (*(int *)((long)param_1 + 0x224) != 0) {
    pcVar3 = pcVar2;
  }
  *(code **)(lVar10 + 8) = pcVar3;
  if (0 < iVar11) {
    lVar9 = 0;
    while( true ) {
      if (iVar8 == 0) {
        if (*(int *)((long)param_1 + 0x224) == 0) {
          lVar13 = (long)*(int *)(param_1[lVar9 + 0x39] + 0x14);
          FUN_00ee6630(param_1,1,lVar13,lVar10 + lVar13 * 8 + 0x40);
        }
      }
      else {
        lVar6 = (long)*(int *)(param_1[lVar9 + 0x39] + 0x18);
        lVar13 = lVar10 + lVar6 * 8;
        FUN_00ee6630(param_1,0,lVar6,lVar13 + 0x40);
        *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar13 + 0x40);
      }
      *(undefined4 *)(lVar10 + 0x24 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
      if ((int)param_1[0x38] <= lVar9) break;
      iVar8 = *(int *)((long)param_1 + 0x21c);
    }
  }
  *(undefined4 *)(lVar10 + 0x20) = 0;
LAB_00ee5c1c:
  *(undefined4 *)(lVar10 + 0x18) = 0;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined4 *)(lVar10 + 0x34) = 0;
  *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}




void FUN_00ee5c70(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined2 *puVar17;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  uint local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar14 = *(long *)(param_1 + 0x270);
  uVar2 = *(uint *)(param_1 + 0x228);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar14 + 0x38) != 0)) ||
     (uVar6 = FUN_00ee71d0(param_1), (int)uVar6 != 0)) {
    if (*(int *)(lVar14 + 0x34) == 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x28);
      local_a8 = *puVar11;
      uStack_a0 = puVar11[1];
      lVar7 = *(long *)(lVar14 + 0x10);
      uVar5 = *(uint *)(lVar14 + 0x18);
      uVar9 = (ulong)uVar5;
      local_70 = *(undefined4 *)(lVar14 + 0x30);
      local_80 = *(undefined8 *)(lVar14 + 0x20);
      uStack_78 = *(undefined8 *)(lVar14 + 0x28);
      local_88 = param_1;
      if (0 < *(int *)(param_1 + 0x1f0)) {
        lVar15 = 0;
        do {
          lVar16 = (long)*(int *)(param_1 + 500 + lVar15 * 4);
          puVar17 = *(undefined2 **)(param_2 + lVar15 * 8);
          lVar13 = *(long *)(lVar14 + (long)*(int *)(*(long *)(param_1 + lVar16 * 8 + 0x1c8) + 0x14)
                                      * 8 + 0x40);
          if ((int)uVar9 < 8) {
            uVar6 = FUN_00ee7264(&local_a8,lVar7,uVar9,0);
            if ((int)uVar6 == 0) goto LAB_00ee5e58;
            uVar9 = (ulong)local_90;
            lVar7 = local_98;
            if (7 < (int)local_90) goto LAB_00ee5d58;
            uVar6 = 1;
LAB_00ee5d8c:
            uVar5 = FUN_00ee73b0(&local_a8,lVar7,uVar9,lVar13,uVar6);
            if ((int)uVar5 < 0) {
              uVar6 = 0;
              goto LAB_00ee5e58;
            }
            uVar9 = (ulong)local_90;
            lVar7 = local_98;
            if (uVar5 == 0) goto LAB_00ee5d80;
LAB_00ee5dac:
            uVar8 = (uint)uVar9;
            if (((int)(uint)uVar9 < (int)uVar5) &&
               (uVar6 = FUN_00ee7264(&local_a8,lVar7,uVar9,uVar5), lVar7 = local_98,
               uVar8 = local_90, (int)uVar6 == 0)) goto LAB_00ee5e58;
            uVar9 = (ulong)(uVar8 - uVar5);
            uVar8 = *(uint *)(&DAT_01bf3a5c + (long)(int)uVar5 * 4) &
                    (uint)(lVar7 >> (uVar9 & 0x3f));
            uVar1 = 0;
            if ((int)uVar8 <= *(int *)(&DAT_01bf3a58 + (long)(int)uVar5 * 4)) {
              uVar1 = *(uint *)(&DAT_01bf3a5c + (long)(int)uVar5 * 4);
            }
            iVar10 = uVar8 - uVar1;
          }
          else {
LAB_00ee5d58:
            uVar12 = lVar7 >> ((ulong)((int)uVar9 - 8) & 0x3f);
            iVar10 = *(int *)(lVar13 + (uVar12 & 0xff) * 4 + 0x120);
            if (iVar10 == 0) {
              uVar6 = 9;
              goto LAB_00ee5d8c;
            }
            bVar3 = *(byte *)(lVar13 + (uVar12 & 0xff) + 0x520);
            uVar5 = (uint)bVar3;
            uVar9 = (ulong)(uint)((int)uVar9 - iVar10);
            if (bVar3 != 0) goto LAB_00ee5dac;
LAB_00ee5d80:
            iVar10 = 0;
          }
          uVar5 = (uint)uVar9;
          lVar16 = lVar16 * 4;
          lVar15 = lVar15 + 1;
          iVar10 = *(int *)((long)&local_80 + lVar16 + 4) + iVar10;
          *(int *)((long)&local_80 + lVar16 + 4) = iVar10;
          *puVar17 = (short)(iVar10 << (ulong)(uVar2 & 0x1f));
        } while (lVar15 < *(int *)(param_1 + 0x1f0));
        puVar11 = *(undefined8 **)(param_1 + 0x28);
      }
      *puVar11 = local_a8;
      puVar11[1] = uStack_a0;
      *(long *)(lVar14 + 0x10) = lVar7;
      *(uint *)(lVar14 + 0x18) = uVar5;
      *(undefined4 *)(lVar14 + 0x30) = local_70;
      *(undefined8 *)(lVar14 + 0x28) = uStack_78;
      *(undefined8 *)(lVar14 + 0x20) = local_80;
    }
    uVar6 = 1;
    *(int *)(lVar14 + 0x38) = *(int *)(lVar14 + 0x38) + -1;
  }
LAB_00ee5e58:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




void FUN_00ee5e94(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  uint local_78;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar17 = *(long *)(param_1 + 0x270);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar17 + 0x38) != 0)) ||
     (uVar8 = FUN_00ee71d0(param_1), (int)uVar8 != 0)) {
    if (*(int *)(lVar17 + 0x34) == 0) {
      if (*(int *)(lVar17 + 0x20) == 0) {
        iVar3 = *(int *)(param_1 + 0x220);
        uVar4 = *(uint *)(param_1 + 0x228);
        lVar18 = *(long *)(param_1 + 0x230);
        uStack_88 = (*(undefined8 **)(param_1 + 0x28))[1];
        local_90 = **(undefined8 **)(param_1 + 0x28);
        iVar12 = *(int *)(param_1 + 0x21c);
        lVar9 = *(long *)(lVar17 + 0x10);
        uVar10 = *(uint *)(lVar17 + 0x18);
        uVar11 = (ulong)uVar10;
        local_70 = param_1;
        if (iVar12 <= iVar3) {
          lVar13 = *param_2;
          lVar16 = *(long *)(lVar17 + 0x60);
          do {
            if ((int)uVar11 < 8) {
              uVar8 = FUN_00ee7264(&local_90,lVar9,uVar11,0);
              if ((int)uVar8 == 0) goto LAB_00ee6068;
              uVar11 = (ulong)local_78;
              lVar9 = local_80;
              if (7 < (int)local_78) goto LAB_00ee5f6c;
              uVar8 = 1;
LAB_00ee5f98:
              uVar7 = FUN_00ee73b0(&local_90,lVar9,uVar11,lVar16,uVar8);
              lVar9 = local_80;
              uVar10 = local_78;
              if ((int)uVar7 < 0) {
                uVar8 = 0;
                goto LAB_00ee6068;
              }
            }
            else {
LAB_00ee5f6c:
              uVar14 = lVar9 >> ((ulong)((int)uVar11 - 8) & 0x3f);
              iVar1 = *(int *)(lVar16 + (uVar14 & 0xff) * 4 + 0x120);
              if (iVar1 == 0) {
                uVar8 = 9;
                goto LAB_00ee5f98;
              }
              uVar7 = (uint)*(byte *)(lVar16 + (uVar14 & 0xff) + 0x520);
              uVar10 = (int)uVar11 - iVar1;
            }
            uVar11 = (ulong)uVar10;
            uVar2 = uVar7 & 0xf;
            uVar5 = uVar7 >> 4;
            if ((uVar7 & 0xf) == 0) {
              if (uVar5 != 0xf) {
                if (uVar5 != 0) {
                  if (((int)uVar10 < (int)uVar5) &&
                     (uVar8 = FUN_00ee7264(&local_90,lVar9,uVar11,uVar5), lVar9 = local_80,
                     uVar10 = local_78, (int)uVar8 == 0)) goto LAB_00ee6068;
                  uVar10 = uVar10 - uVar5;
                  iVar12 = (1 << (ulong)(uVar5 & 0x1f)) +
                           (*(uint *)(&DAT_01bf3a5c + (ulong)uVar5 * 4) &
                           (uint)(lVar9 >> ((ulong)uVar10 & 0x3f))) + -1;
                  goto LAB_00ee6040;
                }
                break;
              }
              iVar1 = iVar12 + 0xf;
            }
            else {
              if (((int)uVar10 < (int)uVar2) &&
                 (uVar8 = FUN_00ee7264(&local_90,lVar9,uVar11,uVar2), lVar9 = local_80,
                 uVar10 = local_78, (int)uVar8 == 0)) goto LAB_00ee6068;
              uVar11 = (ulong)(uVar10 - uVar2);
              uVar10 = *(uint *)(&DAT_01bf3a5c + (ulong)uVar2 * 4) &
                       (uint)(lVar9 >> (uVar11 & 0x3f));
              iVar1 = uVar5 + iVar12;
              uVar7 = 0;
              if ((int)uVar10 <= *(int *)(&DAT_01bf3a58 + (long)(int)uVar2 * 4)) {
                uVar7 = *(uint *)(&DAT_01bf3a5c + (ulong)uVar2 * 4);
              }
              *(short *)(lVar13 + (long)*(int *)(lVar18 + (long)iVar1 * 4) * 2) =
                   (short)(uVar10 - uVar7 << (ulong)(uVar4 & 0x1f));
            }
            uVar10 = (uint)uVar11;
            iVar12 = iVar1 + 1;
          } while (iVar1 < iVar3);
        }
        iVar12 = 0;
LAB_00ee6040:
        puVar15 = *(undefined8 **)(param_1 + 0x28);
        puVar15[1] = uStack_88;
        *puVar15 = local_90;
        *(long *)(lVar17 + 0x10) = lVar9;
        *(uint *)(lVar17 + 0x18) = uVar10;
      }
      else {
        iVar12 = *(int *)(lVar17 + 0x20) + -1;
      }
      *(int *)(lVar17 + 0x20) = iVar12;
    }
    uVar8 = 1;
    *(int *)(lVar17 + 0x38) = *(int *)(lVar17 + 0x38) + -1;
  }
LAB_00ee6068:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

