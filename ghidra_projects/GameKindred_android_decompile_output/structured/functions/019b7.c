// functions/019b7 — 25 functions
#include "libGameKindred.h"




undefined4 FUN_019b7098(void *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    iVar1 = param_2 * 2 + -1;
    *(int *)((long)param_1 + 0x288) = iVar1;
    lVar2 = FUN_019a2d40((long)iVar1,8);
    *(long *)((long)param_1 + 0x280) = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 4) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x28c) = 1;
      memset(param_1,0xff,0x80);
      memset((void *)((long)param_1 + 0x180),0,0x100);
      return 1;
    }
  }
  return 0;
}




undefined8 FUN_019b7114(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  puVar3 = *(undefined4 **)(param_1 + 0x280);
  iVar5 = *(int *)(param_1 + 0x288);
  if (param_4 - 7 == 0 || (int)param_4 < 7) {
    if ((int)param_4 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar6 = param_4;
      uVar8 = param_3;
      do {
        uVar4 = uVar8 & 1 | uVar4 << 1;
        uVar6 = uVar6 - 1;
        uVar8 = (int)uVar8 >> 1;
      } while (uVar6 != 0);
    }
    if (7 - param_4 != 0x1f) {
      iVar7 = 0;
      do {
        uVar6 = iVar7 << (ulong)(param_4 & 0x1f);
        iVar7 = iVar7 + 1;
        uVar6 = uVar6 | uVar4;
        *(short *)(param_1 + (long)(int)uVar6 * 2 + 0x80) = (short)param_2;
        *(char *)(param_1 + (int)uVar6) = (char)param_4;
      } while (iVar7 < 1 << (ulong)(7 - param_4 & 0x1f));
    }
  }
  else {
    uVar4 = 0;
    iVar7 = 7;
    uVar6 = (int)param_3 >> (param_4 - 7 & 0x1f);
    do {
      uVar4 = uVar6 & 1 | uVar4 << 1;
      iVar7 = iVar7 + -1;
      uVar6 = (int)uVar6 >> 1;
    } while (iVar7 != 0);
  }
  if (0 < (int)param_4) {
    puVar1 = puVar3 + (long)iVar5 * 2;
    iVar5 = 6;
    do {
      if (puVar1 <= puVar3) {
        return 0;
      }
      iVar7 = puVar3[1];
      if (iVar7 < 0) {
        iVar7 = *(int *)(param_1 + 0x28c);
        if (iVar7 == *(int *)(param_1 + 0x288)) {
          return 0;
        }
        lVar2 = *(long *)(param_1 + 0x280) + (long)iVar7 * 8;
        puVar3[1] = (int)((ulong)(lVar2 - (long)puVar3) >> 3);
        *(int *)(param_1 + 0x28c) = iVar7 + 2;
        *(undefined4 *)(lVar2 + 4) = 0xffffffff;
        *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
        iVar7 = puVar3[1];
      }
      else if (iVar7 == 0) {
        return 0;
      }
      puVar3 = puVar3 + (long)(int)(iVar7 + (param_3 >> (ulong)((param_4 + iVar5) - 7 & 0x1f) & 1))
                        * 2;
      if (iVar5 == 0) {
        *(short *)(param_1 + (long)(int)uVar4 * 2 + 0x180) =
             (short)((uint)((int)puVar3 - *(int *)(param_1 + 0x280)) >> 3);
      }
      iVar5 = iVar5 + -1;
    } while (1 < (int)(param_4 + iVar5 + -5));
  }
  if ((int)puVar3[1] < 0) {
    puVar3[1] = 0;
  }
  else if (puVar3[1] != 0) {
    return 0;
  }
  *puVar3 = param_2;
  return 1;
}




undefined8 FUN_019b7294(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_019b7098(param_1,param_6);
  if ((int)uVar3 != 0) {
    if (0 < param_6) {
      lVar4 = 0;
      do {
        iVar2 = *(int *)(param_3 + lVar4 * 4);
        if ((iVar2 != -1) &&
           (((iVar1 = *(int *)(param_4 + lVar4 * 4), iVar1 < 0 || (param_5 <= iVar1)) ||
            (iVar2 = FUN_019b7114(param_1,iVar1,iVar2,*(undefined4 *)(param_2 + lVar4 * 4)),
            iVar2 == 0)))) {
          if (param_1 == 0) {
            return 0;
          }
          goto LAB_019b7334;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < param_6);
    }
    if (*(int *)(param_1 + 0x28c) == *(int *)(param_1 + 0x288)) {
      uVar3 = 1;
    }
    else {
LAB_019b7334:
      free(*(void **)(param_1 + 0x280));
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
    }
  }
  return uVar3;
}




void FUN_019b7368(float param_1,undefined8 *param_2)

{
  int iVar1;
  
  memcpy(param_2 + 1,&DAT_01e1e7c8,0xdc);
  iVar1 = 0;
  *param_2 = 0x1f00000000;
  if (0.0 <= param_1) {
    if (param_1 <= 1.0) {
      iVar1 = (int)(param_1 * 256.0);
    }
    else {
      iVar1 = 0x100;
    }
  }
  *(int *)((long)param_2 + 0xe4) = iVar1;
  return;
}




void FUN_019b73d8(int *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  if (*param_1 == 0) {
    uVar1 = param_1[2];
    lVar4 = (long)(int)uVar1;
    if (0 < (int)uVar1) {
      iVar2 = param_1[0xd];
      uVar5 = 0;
      do {
        if ((int)uVar5 < (int)(iVar2 * lVar4)) {
          iVar6 = 0;
          uVar10 = 0;
          uVar8 = uVar5 & 0xffffffff;
          uVar7 = uVar5;
          do {
            uVar9 = (uint)uVar10;
            iVar6 = param_1[9] + iVar6;
            if (iVar6 < 1) {
              uVar11 = 0;
            }
            else {
              pbVar3 = (byte *)(param_2 + (int)uVar8);
              do {
                uVar11 = (uint)*pbVar3;
                iVar6 = iVar6 - param_1[10];
                uVar8 = (ulong)((int)uVar8 + uVar1);
                uVar9 = (int)uVar10 + (uint)*pbVar3;
                uVar10 = (ulong)uVar9;
                pbVar3 = pbVar3 + lVar4;
              } while (0 < iVar6);
            }
            *(uint *)(*(long *)(param_1 + 0x18) + uVar7 * 4) = iVar6 * uVar11 + uVar9 * param_1[10];
            uVar7 = uVar7 + lVar4;
            uVar10 = (ulong)(uint)param_1[3] * (ulong)-(iVar6 * uVar11) + 0x80000000 >> 0x20;
          } while ((long)uVar7 < iVar2 * lVar4);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar1);
    }
    return;
  }
  FUN_019b77c4();
  return;
}




void FUN_019b7490(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar12 = *(uint *)(param_1 + 0x14);
      if (uVar12 == 0) {
        if (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8)) {
          lVar4 = *(long *)(param_1 + 0x58);
          lVar9 = 0;
          do {
            *(char *)(*(long *)(param_1 + 0x48) + lVar9) = (char)*(undefined4 *)(lVar4 + lVar9 * 4);
            lVar4 = *(long *)(param_1 + 0x58);
            *(undefined4 *)(lVar4 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
        }
      }
      else {
        puVar5 = *(undefined1 **)(param_1 + 0x48);
        puVar8 = *(uint **)(param_1 + 0x58);
        uVar2 = -(iVar1 * *(int *)(param_1 + 0x10));
        uVar3 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
        if (uVar2 == 0) {
          if (0 < (int)uVar3) {
            *puVar5 = (char)((ulong)uVar12 * (ulong)*puVar8 + 0x80000000 >> 0x20);
            *puVar8 = 0;
            if (uVar3 != 1) {
              lVar9 = (ulong)uVar3 - 1;
              do {
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
                lVar9 = lVar9 + -1;
                *puVar5 = (char)((ulong)*(uint *)(param_1 + 0x14) * (ulong)*puVar8 + 0x80000000 >>
                                0x20);
                *puVar8 = 0;
              } while (lVar9 != 0);
            }
          }
        }
        else if (0 < (int)uVar3) {
          puVar10 = *(uint **)(param_1 + 0x60);
          uVar11 = (uint)((ulong)*puVar10 * (ulong)uVar2 + 0x80000000 >> 0x20);
          *puVar5 = (char)((ulong)(*puVar8 - uVar11) * (ulong)uVar12 + 0x80000000 >> 0x20);
          *puVar8 = uVar11;
          if (uVar3 != 1) {
            lVar9 = (ulong)uVar3 - 1;
            do {
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
              puVar5 = puVar5 + 1;
              lVar9 = lVar9 + -1;
              uVar12 = (uint)((ulong)*puVar10 * (ulong)uVar2 + 0x80000000 >> 0x20);
              *puVar5 = (char)((ulong)(*puVar8 - uVar12) * (ulong)*(uint *)(param_1 + 0x14) +
                               0x80000000 >> 0x20);
              *puVar8 = uVar12;
            } while (lVar9 != 0);
          }
        }
      }
    }
    else {
      uVar12 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        if (0 < (int)uVar12) {
          uVar6 = (ulong)uVar12;
          puVar5 = *(undefined1 **)(param_1 + 0x48);
          puVar8 = *(uint **)(param_1 + 0x60);
          do {
            uVar6 = uVar6 - 1;
            *puVar5 = (char)((ulong)*(uint *)(param_1 + 0x10) * (ulong)*puVar8 + 0x80000000 >> 0x20)
            ;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 != 0);
        }
      }
      else if (0 < (int)uVar12) {
        uVar6 = 0;
        if ((long)*(int *)(param_1 + 0x20) != 0) {
          uVar6 = ((ulong)(uint)-iVar1 << 0x20) / (ulong)(long)*(int *)(param_1 + 0x20);
        }
        uVar7 = (ulong)uVar12;
        puVar5 = *(undefined1 **)(param_1 + 0x48);
        puVar8 = *(uint **)(param_1 + 0x60);
        puVar10 = *(uint **)(param_1 + 0x58);
        do {
          uVar7 = uVar7 - 1;
          *puVar5 = (char)(((uVar6 & 0xffffffff) * (ulong)*puVar10 +
                            (ulong)(uint)-(int)uVar6 * (ulong)*puVar8 + 0x80000000 >> 0x20) *
                           (ulong)*(uint *)(param_1 + 0x10) + 0x80000000 >> 0x20);
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar7 != 0);
      }
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    return;
  }
  return;
}




void FUN_019b76d0(uint *param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,void *param_9)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2 - 1;
  uVar3 = param_5 - 1;
  if ((int)param_5 <= (int)param_2) {
    uVar1 = param_5;
    uVar3 = param_2;
  }
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = param_4;
  param_1[0x14] = param_7;
  *param_1 = (uint)((int)param_2 < (int)param_5);
  param_1[1] = (uint)((int)param_3 < (int)param_6);
  param_1[2] = param_8;
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  if ((int)param_5 <= (int)param_2) {
    uVar4 = 0;
    if ((long)(int)uVar1 != 0) {
      uVar4 = (uint)(0x100000000 / (ulong)(long)(int)uVar1);
    }
    param_1[3] = uVar4;
  }
  uVar1 = param_3 - ((int)param_3 < (int)param_6);
  uVar4 = param_6 - ((int)param_3 < (int)param_6);
  param_1[7] = uVar1;
  param_1[8] = uVar4;
  if ((int)param_3 < (int)param_6) {
    param_1[6] = uVar4;
    uVar4 = uVar3;
  }
  else {
    uVar2 = 0;
    if ((long)(int)(uVar1 * uVar3) != 0) {
      uVar2 = ((ulong)param_6 << 0x20) / (ulong)(long)(int)(uVar1 * uVar3);
    }
    uVar3 = (uint)uVar2;
    if ((uVar2 & 0xffffffff00000000) != 0) {
      uVar3 = 0;
    }
    param_1[5] = uVar3;
    param_1[6] = uVar1;
  }
  uVar1 = 0;
  if ((long)(int)uVar4 != 0) {
    uVar1 = (uint)(0x100000000 / (ulong)(long)(int)uVar4);
  }
  uVar3 = param_8 * param_5 * 2;
  param_1[4] = uVar1;
  *(void **)(param_1 + 0x16) = param_9;
  *(void **)(param_1 + 0x18) = (void *)((long)param_9 + (long)(int)(param_8 * param_5) * 4);
  memset(param_9,0,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
  if (DAT_032157f8 == (code *)0x0) {
    DAT_032157f8 = FUN_019b77c4;
  }
  return;
}




void FUN_019b77c4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar3) {
    iVar5 = *(int *)(param_1 + 0x34);
    lVar9 = (long)(int)uVar3;
    uVar8 = 0;
    uVar10 = uVar3;
    do {
      bVar4 = *(byte *)(param_2 + uVar8);
      iVar12 = *(int *)(param_1 + 0x24);
      uVar11 = (ulong)(int)uVar10;
      uVar13 = uVar8 + lVar9;
      uVar14 = (uint)bVar4;
      if (1 < *(int *)(param_1 + 0x2c)) {
        uVar14 = (uint)*(byte *)(param_2 + uVar13);
      }
      lVar15 = *(long *)(param_1 + 0x60);
      *(uint *)(lVar15 + uVar8 * 4) = iVar12 * (uint)bVar4;
      uVar1 = (uint)bVar4;
      uVar2 = uVar13;
      while ((long)uVar2 < iVar5 * lVar9) {
        iVar12 = iVar12 - *(int *)(param_1 + 0x28);
        if (iVar12 < 0) {
          uVar1 = (int)uVar13 + uVar3;
          uVar13 = (ulong)uVar1;
          uVar7 = (uint)*(byte *)(param_2 + (int)uVar1);
          iVar6 = *(int *)(param_1 + 0x24);
          iVar12 = iVar6 + iVar12;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x24);
          uVar7 = uVar14;
          uVar14 = uVar1;
        }
        *(uint *)(lVar15 + uVar11 * 4) = (uVar14 - uVar7) * iVar12 + iVar6 * uVar7;
        uVar11 = uVar11 + lVar9;
        uVar1 = uVar14;
        uVar14 = uVar7;
        uVar2 = uVar11;
      }
      uVar8 = uVar8 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar3);
  }
  return;
}




int FUN_019b787c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (*(int *)(param_1 + 0x18) + iVar1 + -1) / iVar1;
  }
  if (iVar2 <= param_2) {
    param_2 = iVar2;
  }
  return param_2;
}




int FUN_019b789c(long param_1,int param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      if ((*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x18) < 1)) {
        return iVar5;
      }
      if (*(int *)(param_1 + 4) != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = uVar1;
      }
      FUN_019b73d8(param_1,param_3);
      if ((*(int *)(param_1 + 4) == 0) && (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8))) {
        lVar2 = *(long *)(param_1 + 0x58);
        lVar3 = *(long *)(param_1 + 0x60);
        lVar4 = 0;
        do {
          *(int *)(lVar2 + lVar4 * 4) = *(int *)(lVar2 + lVar4 * 4) + *(int *)(lVar3 + lVar4 * 4);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
      }
      iVar5 = iVar5 + 1;
      param_3 = param_3 + param_4;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
    } while (iVar5 < param_2);
  }
  return iVar5;
}




int FUN_019b7994(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    iVar1 = 0;
    do {
      if (0 < *(int *)(param_1 + 0x18)) {
        return iVar1;
      }
      FUN_019b7490(param_1);
      iVar1 = iVar1 + 1;
    } while (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38));
  }
  return iVar1;
}




undefined8 FUN_019b79f4(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    if ((((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
       (((param_1[3] == 0 || (param_1[4] == 0)) || (param_1[5] == 0)))) {
      return 0;
    }
    PTR_FUN_02bf74a0 = (undefined *)param_1[5];
    PTR_FUN_02bf7498 = (undefined *)param_1[4];
    PTR_FUN_02bf7490 = (undefined *)param_1[3];
    PTR_FUN_02bf7488 = (undefined *)param_1[2];
    PTR_FUN_02bf7480 = (undefined *)param_1[1];
    PTR_FUN_02bf7478 = (undefined *)*param_1;
    uVar1 = 1;
  }
  return uVar1;
}




undefined ** FUN_019b7a58(void)

{
  return &PTR_FUN_02bf7478;
}




void FUN_019b7a64(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}




bool FUN_019b7a74(long *param_1)

{
  bool bVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  *(undefined4 *)(param_1 + 5) = 0;
  bVar1 = true;
  if ((int)param_1[1] != 1) {
    if ((int)param_1[1] == 0) {
      __mutex = (pthread_mutex_t *)FUN_019a2d64(1,0x60);
      *param_1 = (long)__mutex;
      if (__mutex == (pthread_mutex_t *)0x0) {
        bVar1 = false;
      }
      else {
        iVar2 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
        if (iVar2 == 0) {
          iVar2 = pthread_cond_init((pthread_cond_t *)(*param_1 + 0x28),(pthread_condattr_t *)0x0);
          if (iVar2 == 0) {
            pthread_mutex_lock((pthread_mutex_t *)*param_1);
            iVar2 = pthread_create((pthread_t *)(*param_1 + 0x58),(pthread_attr_t *)0x0,FUN_019b7c50
                                   ,param_1);
            if (iVar2 == 0) {
              *(undefined4 *)(param_1 + 1) = 1;
              pthread_mutex_unlock((pthread_mutex_t *)*param_1);
              return true;
            }
            pthread_mutex_unlock((pthread_mutex_t *)*param_1);
            pthread_mutex_destroy((pthread_mutex_t *)*param_1);
            pthread_cond_destroy((pthread_cond_t *)(*param_1 + 0x28));
          }
          else {
            pthread_mutex_destroy((pthread_mutex_t *)*param_1);
          }
        }
        free((void *)*param_1);
        bVar1 = false;
        *param_1 = 0;
      }
    }
    else {
      FUN_019b7d00(param_1,1);
      bVar1 = (int)param_1[5] == 0;
    }
  }
  return bVar1;
}




bool FUN_019b7b78(long param_1)

{
  FUN_019b7d00(param_1,1);
  return *(int *)(param_1 + 0x28) == 0;
}




void FUN_019b7ba8(undefined8 param_1)

{
  FUN_019b7d00(param_1,2);
  return;
}




void FUN_019b7bb0(long param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)(iVar1 == 0);
  }
  return;
}




void FUN_019b7bf0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_019b7d00(param_1,0);
    pthread_join(*(pthread_t *)(*param_1 + 0x58),(void **)0x0);
    pthread_mutex_destroy((pthread_mutex_t *)*param_1);
    pthread_cond_destroy((pthread_cond_t *)(*param_1 + 0x28));
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 FUN_019b7c50(long *param_1)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    pthread_mutex_lock((pthread_mutex_t *)*param_1);
    while (iVar1 = (int)param_1[1], iVar1 == 1) {
      pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                        (pthread_mutex_t *)*param_1);
    }
    if (iVar1 == 0) break;
    if (iVar1 == 2) {
      if ((code *)param_1[2] != (code *)0x0) {
        iVar1 = (*(code *)param_1[2])(param_1[3],param_1[4]);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | (uint)(iVar1 == 0);
      }
      lVar2 = *param_1;
      *(undefined4 *)(param_1 + 1) = 1;
    }
    else {
      lVar2 = *param_1;
    }
    pthread_cond_signal((pthread_cond_t *)(lVar2 + 0x28));
    pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  }
  pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x28));
  pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  return 0;
}




int FUN_019b7d00(long *param_1,int param_2)

{
  int iVar1;
  
  if ((pthread_mutex_t *)*param_1 == (pthread_mutex_t *)0x0) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)*param_1);
  iVar1 = (int)param_1[1];
  if (iVar1 != 0) {
    while (iVar1 != 1) {
      pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                        (pthread_mutex_t *)*param_1);
      iVar1 = (int)param_1[1];
    }
    if (param_2 != 1) {
      *(int *)(param_1 + 1) = param_2;
      pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x28));
    }
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  return iVar1;
}




void FUN_019b7d78(void)

{
  FUN_019a2d64(1,200);
  return;
}




void FUN_019b7d84(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_019a7334(*(undefined8 *)((long)param_1 + 0x18));
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    free(param_1);
    return;
  }
  return;
}




long FUN_019b7dc0(long param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  if (param_2 < 0) {
    return 0;
  }
  if ((int)param_3 < 1) {
    return 0;
  }
  uVar4 = *(ushort *)(param_1 + 0x42);
  if ((int)(uint)uVar4 < (int)(param_3 + param_2)) {
    return 0;
  }
  uVar5 = *(ushort *)(param_1 + 0x40);
  uVar13 = (ulong)uVar5;
  uVar14 = param_3;
  if (param_2 == 0) {
    puVar9 = (uint *)FUN_019a2d64(1,200);
    *(uint **)(param_1 + 0x920) = puVar9;
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    uVar12 = *(ulong *)(param_1 + 0x930);
    pbVar11 = *(byte **)(param_1 + 0x928);
    uVar10 = *(undefined8 *)(param_1 + 0x940);
    *puVar9 = (uint)uVar5;
    puVar9[1] = (uint)uVar4;
    if (uVar12 < 2) goto LAB_019b7f5c;
    bVar3 = *pbVar11;
    uVar14 = bVar3 & 3;
    puVar9[2] = uVar14;
    puVar9[3] = *pbVar11 >> 2 & 3;
    uVar2 = *pbVar11 >> 4 & 3;
    puVar9[4] = uVar2;
    if (((1 < uVar14) || (1 < uVar2)) || (0x3f < *pbVar11)) goto LAB_019b7f5c;
    uVar12 = uVar12 - 1;
    if ((bVar3 & 3) == 0) {
      if (uVar12 < uVar4 * uVar13) goto LAB_019b7f5c;
    }
    else {
      iVar7 = FUN_019a736c(puVar9,pbVar11 + 1,uVar12,uVar10);
      puVar9 = *(uint **)(param_1 + 0x920);
      if (iVar7 == 0) goto LAB_019b7f5c;
    }
    uVar14 = (uint)uVar4;
    if (puVar9[4] != 1) {
      *(undefined4 *)(param_1 + 0x948) = 0;
      uVar14 = param_3;
    }
  }
  if (*(int *)(param_1 + 0x938) != 0) goto LAB_019b7e20;
  piVar8 = *(int **)(param_1 + 0x920);
  lVar15 = *(long *)(param_1 + 0x940);
  iVar7 = *piVar8;
  iVar1 = piVar8[1];
  uVar2 = piVar8[3];
  if (piVar8[2] == 0) {
    memcpy((void *)(lVar15 + iVar7 * param_2),
           (void *)(*(long *)(param_1 + 0x928) + (long)(iVar7 * param_2) + 1),
           (long)(int)(iVar7 * uVar14));
LAB_019b7ed8:
    if (*(code **)(&DAT_02bafa28 + (ulong)uVar2 * 8) != (code *)0x0) {
      (**(code **)(&DAT_02bafa28 + (ulong)uVar2 * 8))(iVar7,iVar1,iVar7,param_2,uVar14,lVar15);
    }
    if (uVar14 + param_2 == (uint)*(ushort *)(param_1 + 0x42)) {
      *(undefined4 *)(param_1 + 0x938) = 1;
    }
    if ((*(int *)(param_1 + 0x948) < 1) ||
       (iVar7 = FUN_019b9538(*(undefined8 *)(param_1 + 0x940),uVar13,(ulong)uVar4), iVar7 != 0)) {
      if (*(int *)(param_1 + 0x938) != 0) {
        FUN_019b7d84(*(undefined8 *)(param_1 + 0x920));
        *(undefined8 *)(param_1 + 0x920) = 0;
      }
LAB_019b7e20:
      return *(long *)(param_1 + 0x940) + uVar13 * (long)param_2;
    }
  }
  else {
    iVar6 = FUN_019a7eb8(piVar8,uVar14 + param_2);
    if (iVar6 != 0) goto LAB_019b7ed8;
  }
  puVar9 = *(uint **)(param_1 + 0x920);
LAB_019b7f5c:
  FUN_019b7d84(puVar9);
  *(undefined8 *)(param_1 + 0x920) = 0;
  return 0;
}




void FUN_019b7fe4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  
  lVar19 = param_1 + 0x10;
  uVar12 = FUN_019b6984(lVar19,7);
  iVar13 = FUN_019b6984(lVar19,1);
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = FUN_019b6a88(lVar19,4);
  }
  iVar14 = FUN_019b6984(lVar19,1);
  if (iVar14 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = FUN_019b6a88(lVar19,4);
  }
  iVar15 = FUN_019b6984(lVar19,1);
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = FUN_019b6a88(lVar19,4);
  }
  iVar16 = FUN_019b6984(lVar19,1);
  if (iVar16 == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = FUN_019b6a88(lVar19,4);
  }
  iVar17 = FUN_019b6984(lVar19,1);
  iVar18 = 0;
  if (iVar17 != 0) {
    iVar18 = FUN_019b6a88(lVar19,4);
  }
  iVar17 = *(int *)(param_1 + 0x78);
  lVar19 = 0x3f4;
  lVar20 = 0x84;
  do {
    if (iVar17 == 0) {
      uVar21 = uVar12;
      if (lVar19 == 0x3f4) goto LAB_019b8148;
      uVar22 = *(undefined8 *)(param_1 + 0x3ec);
      puVar6 = (undefined8 *)(param_1 + lVar19);
      *puVar6 = *(undefined8 *)(param_1 + 0x3f4);
      puVar6[-1] = uVar22;
      uVar22 = *(undefined8 *)(param_1 + 0x3dc);
      puVar6[-2] = *(undefined8 *)(param_1 + 0x3e4);
      puVar6[-3] = uVar22;
    }
    else {
      uVar21 = uVar12;
      if (*(int *)(param_1 + 0x80) != 0) {
        uVar21 = 0;
      }
      uVar21 = uVar21 + (int)*(char *)(param_1 + lVar20);
LAB_019b8148:
      uVar1 = uVar21 + iVar13;
      uVar2 = uVar21 + iVar14;
      if (0x7e < (int)uVar1) {
        uVar1 = 0x7f;
      }
      uVar3 = uVar21 + iVar15;
      uVar4 = uVar21 + iVar16;
      uVar5 = uVar21 + iVar18;
      if (0x7e < (int)uVar21) {
        uVar21 = 0x7f;
      }
      if (0x7e < (int)uVar2) {
        uVar2 = 0x7f;
      }
      if (0x7e < (int)uVar3) {
        uVar3 = 0x7f;
      }
      uVar10 = *(ushort *)
                (&DAT_01e1e924 + (ulong)(uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)) * 2);
      uVar11 = *(ushort *)(&DAT_01e1e924 + (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) * 2);
      bVar8 = (&DAT_01e1e8a4)[uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)];
      puVar7 = (uint *)(param_1 + lVar19);
      puVar7[-6] = (uint)(byte)(&DAT_01e1e8a4)[uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)];
      puVar7[-5] = (uint)uVar10;
      uVar21 = 8;
      if (0x7ffff < (uint)uVar11 * 0x18ccd) {
        uVar21 = (uint)uVar11 * 0x18ccd >> 0x10;
      }
      if (0x74 < (int)uVar4) {
        uVar4 = 0x75;
      }
      uVar1 = uVar5;
      if (0x7e < (int)uVar5) {
        uVar1 = 0x7f;
      }
      bVar9 = (&DAT_01e1e8a4)[uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)];
      uVar10 = *(ushort *)(&DAT_01e1e924 + (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 2);
      puVar7[-4] = (uint)bVar8 << 1;
      puVar7[-3] = uVar21;
      *puVar7 = uVar5;
      puVar7[-2] = (uint)bVar9;
      puVar7[-1] = (uint)uVar10;
    }
    lVar19 = lVar19 + 0x20;
    lVar20 = lVar20 + 1;
    if (lVar19 == 0x474) {
      return;
    }
  } while( true );
}

