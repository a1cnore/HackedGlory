// functions/1010c — 244 functions
#include "GameKindred.h"




void FUN_1010c0178(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  iVar3 = param_2 - *(int *)(param_1 + 0x68);
  if (0 < iVar3) {
    FUN_1010c0870(param_1,iVar3,
                  *(long *)(param_1 + 0x20) +
                  (long)(*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x68)) * 4);
    iVar1 = **(int **)(param_1 + 0x10);
    uVar2 = iVar1 * iVar3;
    if (0 < (int)uVar2) {
      uVar5 = (ulong)uVar2;
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      puVar6 = (undefined1 *)
               (*(long *)(*(int **)(param_1 + 0x10) + 0xe) +
               (long)*(int *)(param_1 + 0x68) * (long)iVar1);
      do {
        *puVar6 = (char)((uint)*puVar4 >> 8);
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
    *(int *)(param_1 + 0x70) = param_2;
    *(int *)(param_1 + 0x68) = param_2;
  }
  return;
}




undefined8 FUN_1010c0210(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == (undefined4 *)0x0) {
      *param_1 = 2;
      return 0;
    }
    *(undefined4 **)(param_1 + 4) = param_2;
    *param_1 = 0;
    FUN_1010cd034(param_1 + 0xc,*(undefined8 *)(param_2 + 0x1a),*(undefined8 *)(param_2 + 0x18));
    iVar1 = FUN_1010be780(param_1 + 0xc,&uStack_34,&local_38,auStack_3c);
    if (iVar1 == 0) {
      *param_1 = 3;
    }
    else {
      *param_2 = uStack_34;
      param_2[1] = local_38;
      *(undefined8 *)(param_1 + 1) = 0x200000001;
      iVar1 = FUN_1010beacc(uStack_34,local_38,1,param_1,0);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_1010be85c(param_1);
  }
  return 0;
}




undefined8 FUN_1010c02cc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_1 = 3;
  puVar6 = *(undefined4 **)(param_1 + 4);
  puVar9 = *(undefined8 **)(puVar6 + 0xe);
  *(undefined8 *)(param_1 + 6) = *puVar9;
  iVar4 = FUN_1010c1334(puVar9[5],puVar6,3);
  if (iVar4 == 0) {
    uVar10 = 2;
LAB_1010c03ec:
    uVar7 = 0;
    *param_1 = uVar10;
    goto LAB_1010c03fc;
  }
  iVar4 = FUN_1010bf470(param_1,*puVar6);
  if (iVar4 != 0) {
    if (puVar6[0x22] == 0) {
LAB_1010c0394:
      if (**(int **)(param_1 + 6) - 7U < 4) goto LAB_1010c03a8;
    }
    else {
      uVar1 = puVar6[3];
      uVar2 = puVar6[4];
      uVar3 = puVar6[0x24];
      lVar8 = (long)(int)puVar6[0x23];
      uVar10 = 1;
      lVar5 = FUN_1010ce974(lVar8 * 0x24 + 0x68,1);
      if (lVar5 == 0) goto LAB_1010c03ec;
      *(long *)(param_1 + 0x4a) = lVar5;
      *(long *)(param_1 + 0x4c) = lVar5;
      FUN_1010ce328(lVar5,uVar1,uVar2,lVar5 + 0x68 + lVar8 * 0x20,lVar8,uVar3,0,4,lVar5 + 0x68);
      if (puVar6[0x22] == 0) goto LAB_1010c0394;
LAB_1010c03a8:
      FUN_1010c1590();
    }
    param_1[1] = 0;
    iVar4 = FUN_1010bf984(param_1,*(undefined8 *)(param_1 + 8),param_1[0x18],param_1[0x19],
                          param_1[0x19],FUN_1010c0428);
    if (iVar4 != 0) {
      *(undefined4 *)(puVar9 + 4) = param_1[0x1c];
      uVar7 = 1;
      goto LAB_1010c03fc;
    }
  }
  uVar7 = 0;
LAB_1010c03fc:
  FUN_1010be85c(param_1);
  return uVar7;
}




void FUN_1010c0428(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  iVar10 = param_2 - *(int *)(param_1 + 0x68);
  if (0 < iVar10) {
    FUN_1010c0870(param_1,iVar10,
                  *(long *)(param_1 + 0x20) +
                  (long)(*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x68)) * 4);
    piVar7 = *(int **)(param_1 + 0x10);
    iVar11 = *(int *)(param_1 + 0x68);
    iVar14 = piVar7[0x20];
    iVar10 = piVar7[0x21];
    if (param_2 <= piVar7[0x21]) {
      iVar10 = param_2;
    }
    iVar1 = iVar14;
    if (iVar14 <= iVar11) {
      iVar1 = iVar11;
    }
    iVar12 = iVar10 - iVar1;
    if (iVar12 != 0 && iVar1 <= iVar10) {
      iVar4 = *piVar7 * 4;
      lVar8 = *(long *)(param_1 + 0x28);
      iVar10 = (iVar14 - iVar11) * iVar4;
      if (iVar14 - iVar11 == 0 || iVar14 < iVar11) {
        iVar10 = 0;
      }
      lVar13 = (long)piVar7[0x1e] * 4;
      lVar18 = lVar8 + lVar13 + iVar10;
      iVar11 = piVar7[0x1f] - piVar7[0x1e];
      piVar7[2] = iVar1 - iVar14;
      piVar7[3] = iVar11;
      piVar7[4] = iVar12;
      puVar6 = *(uint **)(param_1 + 0x18);
      uVar2 = *puVar6;
      if (uVar2 < 0xb) {
        lVar8 = *(long *)(puVar6 + 4);
        lVar9 = (long)(int)puVar6[6];
        lVar13 = lVar9 * *(int *)(param_1 + 0x70);
        if (piVar7[0x22] == 0) {
          iVar10 = iVar12;
          if (0 < iVar12) {
            lVar8 = lVar8 + lVar13;
            iVar12 = iVar12 + 1;
            do {
              FUN_1010c57fc(lVar18,iVar11,uVar2,lVar8);
              lVar18 = lVar18 + iVar4;
              lVar8 = lVar8 + lVar9;
              iVar12 = iVar12 + -1;
            } while (1 < iVar12);
          }
        }
        else if (iVar12 < 1) {
          iVar10 = 0;
        }
        else {
          iVar14 = 0;
          iVar10 = 0;
          do {
            lVar15 = lVar18 + (long)iVar14 * (long)iVar4;
            uVar5 = FUN_1010ce4d4(*(undefined8 *)(param_1 + 0x130),iVar12 - iVar14);
            FUN_1010c14a8(lVar15,iVar4,*(undefined4 *)(*(long *)(param_1 + 0x130) + 0x2c),uVar5,0);
            FUN_1010ce4f4(*(undefined8 *)(param_1 + 0x130),iVar12 - iVar14,lVar15,iVar4);
            iVar11 = 0;
            lVar15 = *(long *)(param_1 + 0x130);
            if (*(int *)(lVar15 + 0x40) < *(int *)(lVar15 + 0x38)) {
              iVar11 = 0;
              uVar16 = *(undefined8 *)(lVar15 + 0x48);
              uVar3 = *(undefined4 *)(lVar15 + 0x34);
              lVar17 = lVar8 + lVar13 + iVar10 * lVar9;
              do {
                if (0 < *(int *)(lVar15 + 0x18)) break;
                FUN_1010ce0e4(lVar15);
                (*DAT_101dc1ce8)(uVar16,uVar3,1);
                FUN_1010c57fc(uVar16,uVar3,uVar2,lVar17);
                iVar11 = iVar11 + 1;
                lVar17 = lVar17 + lVar9;
              } while (*(int *)(lVar15 + 0x40) < *(int *)(lVar15 + 0x38));
            }
            iVar14 = (int)uVar5 + iVar14;
            iVar10 = iVar11 + iVar10;
          } while (iVar14 < iVar12);
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar10;
      }
      else {
        iVar14 = *(int *)(param_1 + 0x70);
        if (piVar7[0x22] == 0) {
          if (0 < iVar12) {
            FUN_1010c0918(lVar18,iVar11,iVar14);
            iVar14 = iVar14 + 1;
            if (iVar12 != 1) {
              lVar8 = lVar8 + lVar13 + iVar10 + (long)iVar4;
              iVar12 = iVar12 + 1;
              do {
                FUN_1010c0918(lVar8,iVar11,iVar14,*(undefined8 *)(param_1 + 0x18));
                iVar14 = iVar14 + 1;
                lVar8 = lVar8 + iVar4;
                iVar12 = iVar12 + -1;
              } while (2 < iVar12);
            }
          }
        }
        else if (0 < iVar12) {
          iVar10 = 0;
          do {
            uVar5 = FUN_1010ce4d4(*(undefined8 *)(param_1 + 0x130),iVar12 - iVar10);
            FUN_1010c14a8(lVar18,iVar4,*(undefined4 *)(*(long *)(param_1 + 0x130) + 0x2c),uVar5,0);
            FUN_1010ce4f4(*(undefined8 *)(param_1 + 0x130),iVar12 - iVar10,lVar18,iVar4);
            iVar11 = 0;
            lVar8 = *(long *)(param_1 + 0x130);
            if (*(int *)(lVar8 + 0x40) < *(int *)(lVar8 + 0x38)) {
              iVar11 = 0;
              uVar16 = *(undefined8 *)(lVar8 + 0x48);
              uVar3 = *(undefined4 *)(lVar8 + 0x34);
              do {
                if (0 < *(int *)(lVar8 + 0x18)) break;
                FUN_1010ce0e4(lVar8);
                (*DAT_101dc1ce8)(uVar16,uVar3,1);
                FUN_1010c0918(uVar16,uVar3,iVar14 + iVar11,*(undefined8 *)(param_1 + 0x18));
                iVar11 = iVar11 + 1;
              } while (*(int *)(lVar8 + 0x40) < *(int *)(lVar8 + 0x38));
            }
            iVar10 = (int)uVar5 + iVar10;
            lVar18 = lVar18 + (long)(int)uVar5 * (long)iVar4;
            iVar14 = iVar11 + iVar14;
          } while (iVar10 < iVar12);
        }
        *(int *)(param_1 + 0x70) = iVar14;
      }
    }
    *(int *)(param_1 + 0x68) = param_2;
  }
  return;
}




void FUN_1010c0814(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = (long)*(int *)(param_1 + 0x68);
  iVar2 = (int)param_2;
  if (*(int *)(param_1 + 0x68) < iVar2) {
    FUN_1010c4ff8(param_1 + 0xc0,lVar1,param_2,
                  *(long *)(param_1 + 0x20) + *(int *)(param_1 + 0x60) * lVar1,
                  *(long *)(*(int **)(param_1 + 0x10) + 0xe) + **(int **)(param_1 + 0x10) * lVar1);
  }
  *(int *)(param_1 + 0x70) = iVar2;
  *(int *)(param_1 + 0x68) = iVar2;
  return;
}




void FUN_1010c0870(long param_1,int param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xb8);
  uVar2 = *(int *)(param_1 + 0x60) * param_2;
  iVar1 = *(int *)(param_1 + 0x68);
  pvVar3 = *(void **)(param_1 + 0x28);
  _memcpy(pvVar3,param_3,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
  if (0 < (int)uVar5) {
    lVar4 = (ulong)uVar5 + 1;
    do {
      uVar5 = uVar5 - 1;
      FUN_1010c50b8(param_1 + (ulong)uVar5 * 0x18 + 0xc0,iVar1,iVar1 + param_2,param_3,pvVar3);
      lVar4 = lVar4 + -1;
      param_3 = pvVar3;
    } while (1 < lVar4);
  }
  return;
}




void FUN_1010c0918(uint *param_1,uint param_2,uint param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  uint *puVar17;
  
  if (0 < (int)param_2) {
    uVar12 = (ulong)param_2;
    puVar15 = (undefined1 *)
              (*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x30) * (long)(int)param_3);
    puVar17 = param_1;
    do {
      uVar14 = *puVar17;
      *puVar15 = (char)((uVar14 >> 0x10 & 0xff) * 0x41c7 + (uVar14 & 0xff) * 0x1914 +
                        (uVar14 >> 8 & 0xff) * 0x8123 + 0x108000 >> 0x10);
      uVar12 = uVar12 - 1;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    } while (uVar12 != 0);
  }
  lVar8 = (long)((ulong)param_3 << 0x20) >> 0x21;
  pbVar16 = (byte *)(*(long *)(param_4 + 0x18) + *(int *)(param_4 + 0x34) * lVar8);
  pbVar13 = (byte *)(*(long *)(param_4 + 0x20) + *(int *)(param_4 + 0x38) * lVar8);
  if ((int)param_2 < 2) {
    uVar14 = 0;
  }
  else {
    uVar14 = param_2 >> 1;
    uVar12 = (ulong)uVar14;
    puVar17 = param_1 + 1;
    pbVar9 = pbVar16;
    pbVar10 = pbVar13;
    do {
      uVar4 = puVar17[-1];
      uVar5 = *puVar17;
      iVar1 = (uVar5 >> 0xf & 0x1fe) + (uVar4 >> 0xf & 0x1fe);
      iVar2 = (uVar5 >> 7 & 0x1fe) + (uVar4 >> 7 & 0x1fe);
      iVar3 = (uVar5 & 0xff) * 2 + (uVar4 & 0xff) * 2;
      uVar4 = iVar2 * -0x4a89 + iVar1 * -0x25f7 + iVar3 * 0x7080 + 0x2020000U >> 0x12;
      if ((param_3 & 1) == 0) {
        *pbVar9 = (byte)uVar4;
        bVar11 = (byte)(iVar2 * -0x5e34 + iVar1 * 0x7080 + iVar3 * -0x124c + 0x2020000U >> 0x12);
      }
      else {
        *pbVar9 = (byte)(uVar4 + *pbVar9 + 1 >> 1);
        bVar11 = (byte)((uint)*pbVar10 +
                        (iVar2 * -0x5e34 + iVar1 * 0x7080 + iVar3 * -0x124c + 0x2020000U >> 0x12) +
                        1 >> 1);
      }
      *pbVar10 = bVar11;
      puVar17 = puVar17 + 2;
      pbVar9 = pbVar9 + 1;
      uVar12 = uVar12 - 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar12 != 0);
  }
  if ((param_2 & 1) != 0) {
    uVar6 = param_1[uVar14 << 1];
    uVar4 = uVar6 >> 0xe & 0x3fc;
    uVar5 = uVar6 >> 6 & 0x3fc;
    uVar6 = uVar6 & 0xff;
    uVar7 = uVar5 * -0x4a89 + uVar4 * -0x25f7 + uVar6 * 0x1c200 + 0x2020000 >> 0x12;
    if ((param_3 & 1) == 0) {
      pbVar16[uVar14] = (byte)uVar7;
      bVar11 = (byte)(uVar5 * -0x5e34 + uVar4 * 0x7080 + uVar6 * -0x4930 + 0x2020000 >> 0x12);
    }
    else {
      pbVar16[uVar14] = (byte)(uVar7 + pbVar16[uVar14] + 1 >> 1);
      bVar11 = (byte)((uint)pbVar13[uVar14] +
                      (uVar5 * -0x5e34 + uVar4 * 0x7080 + uVar6 * -0x4930 + 0x2020000 >> 0x12) + 1
                     >> 1);
    }
    pbVar13[uVar14] = bVar11;
  }
  if ((*(long *)(param_4 + 0x28) != 0) && (0 < (int)param_2)) {
    uVar12 = (ulong)param_2;
    puVar15 = (undefined1 *)
              (*(long *)(param_4 + 0x28) + (long)*(int *)(param_4 + 0x3c) * (long)(int)param_3);
    do {
      *puVar15 = *(undefined1 *)((long)param_1 + 3);
      param_1 = param_1 + 1;
      uVar12 = uVar12 - 1;
      puVar15 = puVar15 + 1;
    } while (uVar12 != 0);
  }
  return;
}




int FUN_1010c0b7c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  local_14 = 0;
  iVar2 = FUN_1010c0bd4(*param_1,param_1[1],0,0,0,&local_14,0);
  iVar1 = 4;
  if (iVar2 != 7 && iVar2 != 0 || local_14 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}




undefined8
FUN_1010c0bd4(int *param_1,ulong param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
             undefined4 *param_7,undefined8 *param_8)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  uint local_68;
  uint local_64;
  
  if (param_8 == (undefined8 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_8 + 2);
  }
  if (param_1 == (int *)0x0) {
    return 7;
  }
  uVar9 = param_2 - 0xc;
  if (param_2 < 0xc) {
    return 7;
  }
  bVar1 = *param_1 != 0x46464952;
  if (*param_1 == 0x46464952) {
    if (param_1[2] != 0x50424557) {
      return 3;
    }
    uVar16 = (ulong)(uint)param_1[1];
    if (0xffffffea < param_1[1] - 0xcU) {
      return 3;
    }
    if ((iVar8 != 0) && (param_2 - 8 < uVar16)) {
      return 7;
    }
    if (uVar9 < 8) {
      return 7;
    }
    piVar18 = param_1 + 3;
  }
  else {
    uVar16 = 0;
    piVar18 = param_1;
    uVar9 = param_2;
  }
  bVar6 = *piVar18 != 0x58385056;
  if (bVar6) {
    uVar10 = 0;
    uVar11 = 0;
    uVar7 = 0;
    uVar12 = 0;
    uVar20 = 0;
  }
  else {
    if (piVar18[1] != 10) {
      return 3;
    }
    bVar5 = uVar9 < 0x12;
    uVar9 = uVar9 - 0x12;
    if (bVar5) {
      return 7;
    }
    uVar20 = *(uint3 *)(piVar18 + 3) + 1;
    uVar12 = *(uint3 *)((long)piVar18 + 0xf) + 1;
    if (((ulong)uVar20 * (ulong)uVar12 & 0xffffffff00000000) != 0) {
      return 3;
    }
    if (bVar1) {
      return 3;
    }
    pbVar2 = (byte *)(piVar18 + 2);
    uVar7 = (uint)*pbVar2;
    piVar18 = (int *)((long)piVar18 + 0x12);
    uVar11 = *pbVar2 >> 1 & 1;
    uVar10 = uVar7 & 1;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar7 >> 4 & 1;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar11;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  local_68 = uVar12;
  local_64 = uVar20;
  if (((!bVar6) && ((uVar7 & 3) != 0)) && (param_8 == (undefined8 *)0x0)) {
    piVar19 = (int *)0x0;
    goto LAB_1010c0d3c;
  }
  if (uVar9 < 4) {
LAB_1010c0cb8:
    piVar19 = (int *)0x0;
  }
  else if (bVar1 || bVar6) {
    piVar19 = (int *)0x0;
    if ((bVar1) && (bVar6)) {
      if (*piVar18 == 0x48504c41) goto LAB_1010c0cb0;
      piVar19 = (int *)0x0;
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
    }
LAB_1010c0e7c:
    uVar7 = (uint)(*piVar18 == 0x4c385056);
    uVar14 = uVar9 - 8;
    if (7 < uVar9) {
      if ((*piVar18 == 0x20385056) || (*piVar18 == 0x4c385056)) {
        uVar9 = (ulong)(uint)piVar18[1];
        if ((0xb < uVar16) && (uVar16 - 0xc < uVar9)) {
          return 3;
        }
        if ((iVar8 != 0) && (uVar14 < uVar9)) goto LAB_1010c0cbc;
        piVar18 = piVar18 + 2;
      }
      else {
        uVar7 = FUN_1010be6a0(piVar18,uVar9);
        uVar14 = uVar9;
      }
      if (0xfffffff6 < uVar9) {
        return 3;
      }
      if (((param_7 != (undefined4 *)0x0) && (uVar11 == 0)) && (uVar10 == 0)) {
        uVar13 = 1;
        if (uVar7 != 0) {
          uVar13 = 2;
        }
        *param_7 = uVar13;
      }
      if (uVar7 == 0) {
        if (9 < uVar14) {
          iVar8 = FUN_1010bcec8(piVar18,uVar14,uVar9,&local_64,&local_68);
          goto joined_r0x0001010c0fcc;
        }
      }
      else if (4 < uVar14) {
        iVar8 = FUN_1010be6cc(piVar18,uVar14,&local_64,&local_68,param_5);
joined_r0x0001010c0fcc:
        if (iVar8 == 0) {
          return 3;
        }
        if (!bVar6) {
          if (uVar20 != local_64) {
            return 3;
          }
          if (uVar12 != local_68) {
            return 3;
          }
        }
        if (param_8 != (undefined8 *)0x0) {
          *param_8 = param_1;
          param_8[1] = param_2;
          param_8[4] = piVar19;
          param_8[5] = uVar17;
          param_8[6] = uVar9;
          param_8[7] = uVar16;
          *(uint *)(param_8 + 8) = uVar7;
          *(undefined4 *)((long)param_8 + 0x44) = 0;
          param_8[2] = 0;
          param_8[3] = (long)piVar18 - (long)param_1;
        }
        goto LAB_1010c0d3c;
      }
    }
  }
  else {
LAB_1010c0cb0:
    if (uVar9 < 8) goto LAB_1010c0cb8;
    piVar19 = (int *)0x0;
    uVar14 = 0x16;
    uVar17 = 0;
    do {
      uVar7 = piVar18[1];
      if (0xfffffff6 < uVar7) {
        return 3;
      }
      uVar15 = (ulong)(uVar7 + 9) & 0xfffffffe;
      uVar14 = (ulong)(uint)((int)uVar15 + (int)uVar14);
      if ((!bVar1) && (uVar16 < uVar14)) {
        return 3;
      }
      if ((*piVar18 == 0x20385056) || (*piVar18 == 0x4c385056)) goto LAB_1010c0e7c;
      bVar5 = uVar9 < uVar15;
      uVar9 = uVar9 - uVar15;
      if (bVar5) break;
      uVar3 = (ulong)uVar7;
      piVar4 = piVar18 + 2;
      if (*piVar18 != 0x48504c41) {
        uVar3 = uVar17;
        piVar4 = piVar19;
      }
      piVar19 = piVar4;
      uVar17 = uVar3;
      piVar18 = (int *)((long)piVar18 + uVar15);
    } while (7 < uVar9);
  }
LAB_1010c0cbc:
  if (bVar6) {
    return 7;
  }
  if (param_8 != (undefined8 *)0x0) {
    return 7;
  }
LAB_1010c0d3c:
  if (param_5 != (uint *)0x0) {
    *param_5 = *param_5 | (uint)(piVar19 != (int *)0x0);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_64;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_68;
    return 0;
  }
  return 0;
}




ulong FUN_1010c1028(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  long local_118;
  long lStack_110;
  undefined4 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_70;
  long lStack_68;
  
  local_108 = 1;
  local_118 = param_1;
  lStack_110 = param_2;
  uVar3 = FUN_1010c0b7c(&local_118);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  FUN_1010bcd88(&local_d0,0x203);
  lStack_68 = local_118 + local_100;
  local_70 = lStack_110 - local_100;
  FUN_1010bab50(param_3,&local_d0);
  if (local_d8 == 0) {
    puVar4 = (uint *)FUN_1010bcdcc();
    if (puVar4 == (uint *)0x0) {
      return 1;
    }
    *(undefined8 *)(puVar4 + 0x24a) = local_f8;
    *(undefined8 *)(puVar4 + 0x24c) = uStack_f0;
    iVar1 = FUN_1010bcf70(puVar4,&local_d0);
    if (iVar1 == 0) {
LAB_1010c117c:
      uVar3 = (ulong)*puVar4;
    }
    else {
      uVar3 = FUN_1010b9350(local_d0,uStack_cc,param_3[5],*param_3);
      if ((int)uVar3 == 0) {
        uVar2 = FUN_1010ba7b4(param_3[5],&local_118,local_d0,uStack_cc);
        puVar4[0x30] = uVar2;
        FUN_1010b9714(param_3[5],puVar4);
        iVar1 = FUN_1010bd9a4(puVar4,&local_d0);
        if (iVar1 == 0) goto LAB_1010c117c;
        uVar3 = 0;
      }
    }
    FUN_1010bce28(puVar4);
    iVar1 = (int)uVar3;
    goto joined_r0x0001010c1188;
  }
  puVar4 = (uint *)FUN_1010be814();
  if (puVar4 == (uint *)0x0) {
    return 1;
  }
  iVar1 = FUN_1010c0210(puVar4,&local_d0);
  if (iVar1 == 0) {
LAB_1010c1168:
    uVar3 = (ulong)*puVar4;
  }
  else {
    uVar3 = FUN_1010b9350(local_d0,uStack_cc,param_3[5],*param_3);
    if ((int)uVar3 == 0) {
      iVar1 = FUN_1010c02cc(puVar4);
      if (iVar1 == 0) goto LAB_1010c1168;
      uVar3 = 0;
    }
  }
  FUN_1010be924(puVar4);
  iVar1 = (int)uVar3;
joined_r0x0001010c1188:
  if (iVar1 != 0) {
    FUN_1010b96e0(*param_3);
  }
  return uVar3;
}




undefined8 FUN_1010c1198(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((param_3 != (undefined8 *)0x0) && (param_1 != 0)) {
    param_3[4] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    uVar1 = FUN_1010c0bd4();
    return uVar1;
  }
  return 2;
}




undefined8 FUN_1010c11d0(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 0xffffff00) != 0x200 || param_1 == (undefined8 *)0x0) {
    return 0;
  }
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  FUN_1010b96a4(param_1 + 5,0x203);
  return 1;
}




undefined8 FUN_1010c1230(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((param_4 & 0xffffff00) != 0x200 || param_3 == 0) {
    return 2;
  }
  uVar1 = FUN_1010c1198();
  return uVar1;
}




ulong FUN_1010c124c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long local_220 [6];
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_3 == 0) {
    uVar3 = 2;
  }
  else {
    uVar2 = FUN_1010c1198();
    if (uVar2 == 0) {
      local_38 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_d0 = 0;
      local_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_110 = 0;
      local_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_120 = 0;
      local_128 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      uStack_170 = 0;
      local_178 = 0;
      uStack_180 = 0;
      local_188 = 0;
      uStack_190 = 0;
      local_198 = 0;
      uStack_1a0 = 0;
      local_1a8 = 0;
      uStack_1b0 = 0;
      local_1b8 = 0;
      uStack_1c0 = 0;
      local_1c8 = 0;
      uStack_1d0 = 0;
      local_1d8 = 0;
      uStack_1e0 = 0;
      local_1e8 = 0;
      uStack_1f0 = 0;
      local_220[4] = 0;
      local_220[3] = 0;
      local_220[2] = 0;
      local_220[1] = 0;
      local_220[0] = param_3 + 0x28;
      local_220[5] = param_3 + 0xa0;
      uVar3 = FUN_1010c1028(param_1,param_2,local_220);
    }
    else {
      uVar1 = 3;
      if (uVar2 != 7) {
        uVar1 = uVar2;
      }
      uVar3 = (ulong)uVar1;
    }
  }
  return uVar3;
}




undefined8 FUN_1010c1334(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (param_1 == (int *)0x0) {
    param_2[0x1d] = 0;
  }
  else {
    iVar5 = param_1[2];
    param_2[0x1d] = (uint)(0 < iVar5);
    if (0 < iVar5) {
      uVar3 = param_1[4] & 0xfffffffe;
      uVar4 = param_1[3] & 0xfffffffe;
      if (param_3 < 0xb) {
        uVar3 = param_1[4];
        uVar4 = param_1[3];
      }
      if ((int)uVar4 < 0) {
        return 0;
      }
      if ((int)uVar3 < 0) {
        return 0;
      }
      iVar5 = param_1[5];
      if (iVar5 < 1) {
        return 0;
      }
      iVar6 = param_1[6];
      if (iVar6 < 1) {
        return 0;
      }
      if (iVar1 < (int)(uVar4 + iVar5) || iVar2 < (int)(uVar3 + iVar6)) {
        return 0;
      }
      goto LAB_1010c13c8;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  iVar5 = iVar1;
  iVar6 = iVar2;
LAB_1010c13c8:
  param_2[0x1e] = uVar4;
  param_2[0x1f] = iVar5 + uVar4;
  param_2[0x20] = uVar3;
  param_2[0x21] = iVar6 + uVar3;
  param_2[3] = iVar5;
  param_2[4] = iVar6;
  if (param_1 == (int *)0x0) {
    param_2[0x22] = 0;
    param_2[0x1c] = 0;
    param_2[0x16] = 1;
  }
  else {
    iVar5 = param_1[7];
    param_2[0x22] = (uint)(0 < iVar5);
    if (0 < iVar5) {
      if ((param_1[8] < 1) || (iVar6 = param_1[9], iVar6 < 1)) {
        return 0;
      }
      param_2[0x23] = param_1[8];
      param_2[0x24] = iVar6;
    }
    iVar6 = param_1[1];
    param_2[0x1c] = (uint)(*param_1 != 0);
    param_2[0x16] = (uint)(iVar6 == 0);
    if (0 < iVar5) {
      iVar1 = iVar1 * 3;
      iVar5 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar5 = iVar1;
      }
      if (param_2[0x23] < iVar5 >> 2) {
        iVar2 = iVar2 * 3;
        iVar1 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        uVar3 = (uint)(param_2[0x24] < iVar1 >> 2);
      }
      else {
        uVar3 = 0;
      }
      param_2[0x1c] = uVar3;
      param_2[0x16] = 0;
    }
  }
  return 1;
}




void FUN_1010c14a8(long param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  if (0 < param_4) {
    do {
      (*DAT_101dc1ce8)(param_1,param_3,param_5);
      param_1 = param_1 + param_2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}




void FUN_1010c1510(long param_1,int param_2,long param_3,int param_4,undefined8 param_5,int param_6,
                  undefined8 param_7)

{
  if (0 < param_6) {
    do {
      (*DAT_101dc1cf0)(param_1,param_3,param_5,param_7);
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}




void FUN_1010c1590(void)

{
  if (PTR_LOOP_1018735c0 != PTR_FUN_1018735c8) {
    DAT_101dc1ce8 = FUN_1010c1604;
    DAT_101dc1cf0 = FUN_1010c1698;
    DAT_101dc1cd0 = FUN_1010c1700;
    DAT_101dc1cd8 = FUN_1010c17a8;
    DAT_101dc1ce0 = FUN_1010c1844;
    PTR_LOOP_1018735c0 = PTR_FUN_1018735c8;
  }
  return;
}




void FUN_1010c1604(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      uVar4 = *param_1;
      uVar1 = uVar4 >> 0x18;
      if (uVar1 < 0xff) {
        if (uVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = 0xff000000 / uVar1;
          }
          uVar1 = uVar1 * 0x10101;
          if (param_3 != 0) {
            uVar1 = uVar2;
          }
          uVar4 = uVar4 & 0xff000000 | uVar1 * (uVar4 & 0xff) + 0x800000 >> 0x18 |
                  uVar1 * (uVar4 >> 8 & 0xff) + 0x800000 >> 0x10 & 0xff00 |
                  uVar1 * (uVar4 >> 0x10 & 0xff) + 0x800000 >> 8 & 0xff0000;
        }
        *param_1 = uVar4;
      }
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




void FUN_1010c1698(byte *param_1,byte *param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (0 < (int)param_3) {
    uVar3 = (ulong)param_3;
    do {
      bVar1 = *param_2;
      if (bVar1 != 0xff) {
        if (bVar1 == 0) {
          *param_1 = 0;
        }
        else {
          uVar4 = (uint)bVar1;
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = 0xff000000 / uVar4;
          }
          uVar4 = uVar4 * 0x10101;
          if (param_4 != 0) {
            uVar4 = uVar2;
          }
          *param_1 = (byte)(uVar4 * *param_1 + 0x800000 >> 0x18);
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




void FUN_1010c1700(long param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar3 = 3;
  if (param_2 != 0) {
    uVar3 = 0;
  }
  if (0 < param_4) {
    lVar5 = param_1 + (ulong)(param_2 != 0);
    do {
      if (0 < (int)param_3) {
        uVar6 = 0;
        do {
          uVar7 = (uint)*(byte *)(param_1 + (uVar3 | uVar6));
          if (uVar7 != 0xff) {
            iVar4 = uVar7 * 0x8081;
            pbVar2 = (byte *)(lVar5 + uVar6);
            *pbVar2 = (byte)(iVar4 * (uint)*pbVar2 >> 0x17);
            pbVar2[1] = (byte)(iVar4 * (uint)pbVar2[1] >> 0x17);
            pbVar2[2] = (byte)(iVar4 * (uint)pbVar2[2] >> 0x17);
          }
          uVar6 = uVar6 + 4;
        } while ((ulong)param_3 * 4 - uVar6 != 0);
      }
      param_1 = param_1 + param_5;
      lVar5 = lVar5 + param_5;
      bVar1 = 1 < param_4;
      param_4 = param_4 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_1010c17a8(long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  
  if (0 < param_3) {
    do {
      if (0 < (int)param_2) {
        lVar6 = 0;
        do {
          pbVar2 = (byte *)(param_1 + lVar6);
          bVar3 = pbVar2[1];
          bVar4 = *pbVar2;
          iVar5 = (bVar4 & 0xf) * 0x1111;
          pbVar2[1] = (byte)(iVar5 * (bVar3 & 0xf0 | (uint)(bVar3 >> 4)) >> 0x10) & 0xf0 |
                      (byte)(iVar5 * (bVar3 & 0xfffff00f | (bVar3 & 0xf) << 4) >> 0x14);
          *pbVar2 = (byte)(iVar5 * (bVar4 & 0xf0 | (uint)(bVar4 >> 4)) >> 0x10) & 0xf0 | bVar4 & 0xf
          ;
          lVar6 = lVar6 + 2;
        } while ((ulong)param_2 * 2 - lVar6 != 0);
      }
      param_1 = param_1 + param_4;
      bVar1 = 1 < param_3;
      param_3 = param_3 + -1;
    } while (bVar1);
  }
  return;
}




bool FUN_1010c1844(byte *param_1,int param_2,uint param_3,int param_4,long param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  
  if (param_4 < 1) {
    bVar3 = 0xff;
  }
  else {
    iVar2 = 0;
    bVar3 = 0xff;
    do {
      if (0 < (int)param_3) {
        uVar4 = 0;
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          *(byte *)(param_5 + uVar4) = bVar1;
          bVar3 = bVar1 & bVar3;
          uVar4 = uVar4 + 1;
          pbVar5 = pbVar5 + 4;
        } while (param_3 != uVar4);
      }
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_4);
  }
  return bVar3 == 0xff;
}




undefined8 FUN_1010c18b4(void)

{
  return 1;
}




void FUN_1010c18bc(int *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 4;
  lVar3 = -1;
  lVar4 = -0x20;
  do {
    uVar2 = uVar2 + *(byte *)((long)param_1 + lVar4) + (uint)*(byte *)((long)param_1 + lVar3);
    lVar3 = lVar3 + 0x20;
    lVar4 = lVar4 + 1;
  } while (lVar4 != -0x1c);
  iVar1 = (uVar2 >> 3 & 0xff) * 0x1010101;
  *param_1 = iVar1;
  param_1[8] = iVar1;
  param_1[0x10] = iVar1;
  param_1[0x18] = iVar1;
  return;
}




void FUN_1010c1908(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = 0;
  bVar1 = *(byte *)(param_1 + -0x21);
  lVar4 = param_1 + -0x20;
  do {
    lVar5 = 0;
    bVar2 = *(byte *)(param_1 + -1);
    do {
      *(undefined *)(param_1 + lVar5) =
           (&DAT_1013cb5e1)[((ulong)bVar2 - (ulong)bVar1) + (ulong)*(byte *)(lVar4 + lVar5)];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
    param_1 = param_1 + 0x20;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return;
}




void FUN_1010c195c(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  
  lVar9 = 0;
  bVar3 = *(byte *)(param_1 + -0x21);
  bVar4 = *(byte *)(param_1 + -0x20);
  bVar5 = *(byte *)(param_1 + -0x1f);
  iVar1 = bVar5 + 2;
  bVar6 = *(byte *)(param_1 + -0x1e);
  iVar2 = bVar6 + 2;
  bVar7 = *(byte *)(param_1 + -0x1d);
  bVar8 = *(byte *)(param_1 + -0x1c);
  do {
    *(uint *)(param_1 + lVar9) =
         CONCAT13((char)(iVar2 + (uint)bVar7 * 2 + (uint)bVar8 >> 2),
                  CONCAT12((char)(iVar1 + (uint)bVar6 * 2 + (uint)bVar7 >> 2),
                           CONCAT11((char)(iVar2 + (uint)bVar4 + (uint)bVar5 * 2 >> 2),
                                    (char)(iVar1 + (uint)bVar3 + (uint)bVar4 * 2 >> 2))));
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x80);
  return;
}




void FUN_1010c19e0(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = *(byte *)((long)param_1 + 0x5f);
  iVar1 = *(byte *)((long)param_1 + 0x1f) + 2;
  *param_1 = (iVar1 + (uint)*(byte *)((long)param_1 + -0x21) +
              (uint)*(byte *)((long)param_1 + -1) * 2 >> 2) * 0x1010101;
  iVar2 = *(byte *)((long)param_1 + 0x3f) + 2;
  param_1[8] = (iVar2 + (uint)*(byte *)((long)param_1 + -1) +
                (uint)*(byte *)((long)param_1 + 0x1f) * 2 >> 2) * 0x1010101;
  param_1[0x10] = (iVar1 + (uint)*(byte *)((long)param_1 + 0x3f) * 2 + (uint)bVar3 >> 2) * 0x1010101
  ;
  param_1[0x18] = (iVar2 + (uint)bVar3 + (uint)bVar3 * 2 >> 2) * 0x1010101;
  return;
}




void FUN_1010c1a54(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  
  bVar3 = param_1[-0x21];
  bVar4 = param_1[-0x20];
  bVar5 = param_1[-0x1f];
  iVar1 = (byte)param_1[0x1f] + 2;
  iVar2 = (byte)param_1[-1] + 2;
  param_1[0x60] = (char)(iVar1 + (uint)(byte)param_1[0x3f] * 2 + (uint)(byte)param_1[0x5f] >> 2);
  uVar6 = (undefined1)(iVar2 + (uint)(byte)param_1[0x1f] * 2 + (uint)(byte)param_1[0x3f] >> 2);
  param_1[0x61] = uVar6;
  param_1[0x40] = uVar6;
  uVar6 = (undefined1)(iVar1 + (uint)(byte)param_1[-1] * 2 + (uint)bVar3 >> 2);
  param_1[0x62] = uVar6;
  param_1[0x41] = uVar6;
  param_1[0x20] = uVar6;
  uVar6 = (undefined1)(iVar2 + (uint)bVar4 + (uint)bVar3 * 2 >> 2);
  param_1[99] = uVar6;
  param_1[0x42] = uVar6;
  param_1[0x21] = uVar6;
  *param_1 = uVar6;
  uVar6 = (undefined1)((uint)bVar3 + (uint)bVar5 + (uint)bVar4 * 2 + 2 >> 2);
  param_1[0x43] = uVar6;
  param_1[0x22] = uVar6;
  param_1[1] = uVar6;
  uVar6 = (undefined1)((uint)bVar4 + (uint)(byte)param_1[-0x1e] + (uint)bVar5 * 2 + 2 >> 2);
  param_1[0x23] = uVar6;
  param_1[2] = uVar6;
  param_1[3] = (char)((uint)bVar5 + (uint)(byte)param_1[-0x1d] + (uint)(byte)param_1[-0x1e] * 2 + 2
                     >> 2);
  return;
}




void FUN_1010c1b24(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  bVar3 = param_1[-0x21];
  bVar4 = param_1[-0x20];
  bVar5 = param_1[-0x1f];
  iVar1 = bVar4 + 1;
  iVar2 = (byte)param_1[-1] + 2;
  bVar6 = param_1[-0x1e];
  uVar7 = (undefined1)(iVar1 + (uint)bVar3 >> 1);
  param_1[0x41] = uVar7;
  *param_1 = uVar7;
  uVar7 = (undefined1)(iVar1 + (uint)bVar5 >> 1);
  param_1[0x42] = uVar7;
  param_1[1] = uVar7;
  iVar1 = bVar3 + 2;
  uVar7 = (undefined1)((uint)bVar5 + (uint)bVar6 + 1 >> 1);
  param_1[0x43] = uVar7;
  param_1[2] = uVar7;
  param_1[3] = (char)((uint)bVar6 + (uint)(byte)param_1[-0x1d] + 1 >> 1);
  param_1[0x60] = (char)(iVar2 + (uint)(byte)param_1[0x3f] + (uint)(byte)param_1[0x1f] * 2 >> 2);
  param_1[0x40] = (char)(iVar1 + (uint)(byte)param_1[0x1f] + (uint)(byte)param_1[-1] * 2 >> 2);
  uVar7 = (undefined1)(iVar2 + (uint)bVar3 * 2 + (uint)bVar4 >> 2);
  param_1[0x61] = uVar7;
  param_1[0x20] = uVar7;
  uVar8 = (uint)bVar5;
  uVar7 = (undefined1)(iVar1 + (uint)bVar4 * 2 + uVar8 >> 2);
  param_1[0x62] = uVar7;
  param_1[0x21] = uVar7;
  uVar7 = (undefined1)((uint)bVar4 + uVar8 * 2 + (uint)bVar6 + 2 >> 2);
  param_1[99] = uVar7;
  param_1[0x22] = uVar7;
  param_1[0x23] = (char)(uVar8 + (uint)bVar6 * 2 + (uint)(byte)param_1[-0x1d] + 2 >> 2);
  return;
}




void FUN_1010c1c0c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  
  bVar3 = param_1[-0x1c];
  bVar4 = param_1[-0x1b];
  bVar5 = param_1[-0x1a];
  iVar1 = (byte)param_1[-0x1e] + 2;
  iVar2 = (byte)param_1[-0x1d] + 2;
  bVar6 = param_1[-0x19];
  *param_1 = (char)(iVar1 + (uint)(byte)param_1[-0x20] + (uint)(byte)param_1[-0x1f] * 2 >> 2);
  uVar7 = (undefined1)(iVar2 + (uint)(byte)param_1[-0x1f] + (uint)(byte)param_1[-0x1e] * 2 >> 2);
  param_1[0x20] = uVar7;
  param_1[1] = uVar7;
  uVar7 = (undefined1)(iVar1 + (uint)(byte)param_1[-0x1d] * 2 + (uint)bVar3 >> 2);
  param_1[0x40] = uVar7;
  param_1[0x21] = uVar7;
  param_1[2] = uVar7;
  uVar7 = (undefined1)(iVar2 + (uint)bVar3 * 2 + (uint)bVar4 >> 2);
  param_1[0x60] = uVar7;
  param_1[0x41] = uVar7;
  param_1[0x22] = uVar7;
  param_1[3] = uVar7;
  uVar7 = (undefined1)((uint)bVar3 + (uint)bVar4 * 2 + (uint)bVar5 + 2 >> 2);
  param_1[0x61] = uVar7;
  param_1[0x42] = uVar7;
  param_1[0x23] = uVar7;
  uVar7 = (undefined1)((uint)bVar4 + (uint)bVar5 * 2 + (uint)bVar6 + 2 >> 2);
  param_1[0x62] = uVar7;
  param_1[0x43] = uVar7;
  param_1[99] = (char)((uint)bVar5 + (uint)bVar6 + (uint)bVar6 * 2 + 2 >> 2);
  return;
}




void FUN_1010c1cd8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  
  bVar3 = param_1[-0x1f];
  bVar4 = param_1[-0x1e];
  iVar1 = bVar3 + 1;
  bVar5 = param_1[-0x1d];
  bVar6 = param_1[-0x1c];
  bVar7 = param_1[-0x1b];
  *param_1 = (char)(iVar1 + (uint)(byte)param_1[-0x20] >> 1);
  uVar8 = (undefined1)(iVar1 + (uint)bVar4 >> 1);
  param_1[0x40] = uVar8;
  param_1[1] = uVar8;
  iVar1 = bVar4 + 2;
  uVar8 = (undefined1)((uint)bVar4 + (uint)bVar5 + 1 >> 1);
  param_1[0x41] = uVar8;
  param_1[2] = uVar8;
  iVar2 = bVar5 + 2;
  uVar8 = (undefined1)((uint)bVar5 + (uint)bVar6 + 1 >> 1);
  param_1[0x42] = uVar8;
  param_1[3] = uVar8;
  param_1[0x20] = (char)(iVar1 + (uint)(byte)param_1[-0x20] + (uint)bVar3 * 2 >> 2);
  uVar8 = (undefined1)(iVar2 + (uint)bVar3 + (uint)bVar4 * 2 >> 2);
  param_1[0x60] = uVar8;
  param_1[0x21] = uVar8;
  uVar8 = (undefined1)(iVar1 + (uint)bVar5 * 2 + (uint)bVar6 >> 2);
  param_1[0x61] = uVar8;
  param_1[0x22] = uVar8;
  uVar8 = (undefined1)(iVar2 + (uint)bVar6 * 2 + (uint)bVar7 >> 2);
  param_1[0x62] = uVar8;
  param_1[0x23] = uVar8;
  param_1[0x43] = (char)((uint)bVar6 + (uint)bVar7 * 2 + (uint)(byte)param_1[-0x1a] + 2 >> 2);
  param_1[99] = (char)((uint)bVar7 + (uint)(byte)param_1[-0x1a] * 2 + (uint)(byte)param_1[-0x19] + 2
                      >> 2);
  return;
}




void FUN_1010c1dc0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  
  bVar5 = param_1[-1];
  bVar3 = param_1[0x1f];
  bVar6 = param_1[-0x21];
  iVar1 = bVar5 + 1;
  bVar4 = param_1[0x3f];
  bVar7 = param_1[-0x20];
  uVar8 = (undefined1)(iVar1 + (uint)bVar6 >> 1);
  param_1[0x22] = uVar8;
  *param_1 = uVar8;
  uVar8 = (undefined1)(iVar1 + (uint)bVar3 >> 1);
  param_1[0x42] = uVar8;
  param_1[0x20] = uVar8;
  uVar8 = (undefined1)((uint)bVar3 + (uint)bVar4 + 1 >> 1);
  param_1[0x62] = uVar8;
  param_1[0x40] = uVar8;
  param_1[0x60] = (char)((uint)bVar4 + (uint)(byte)param_1[0x5f] + 1 >> 1);
  param_1[3] = (char)((uint)bVar7 + (uint)(byte)param_1[-0x1f] * 2 + (uint)(byte)param_1[-0x1e] + 2
                     >> 2);
  param_1[2] = (char)((uint)bVar6 + (uint)bVar7 * 2 + (uint)(byte)param_1[-0x1f] + 2 >> 2);
  iVar1 = bVar5 + 2;
  uVar8 = (undefined1)(iVar1 + (uint)bVar6 * 2 + (uint)bVar7 >> 2);
  param_1[0x23] = uVar8;
  param_1[1] = uVar8;
  iVar2 = bVar3 + 2;
  uVar8 = (undefined1)(iVar2 + (uint)bVar5 * 2 + (uint)bVar6 >> 2);
  param_1[0x43] = uVar8;
  param_1[0x21] = uVar8;
  uVar8 = (undefined1)(iVar1 + (uint)bVar4 + (uint)bVar3 * 2 >> 2);
  param_1[99] = uVar8;
  param_1[0x41] = uVar8;
  param_1[0x61] = (char)(iVar2 + (uint)(byte)param_1[0x5f] + (uint)bVar4 * 2 >> 2);
  return;
}




void FUN_1010c1ea8(undefined1 *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  
  bVar2 = param_1[0x1f];
  bVar3 = param_1[0x3f];
  bVar4 = param_1[0x5f];
  iVar1 = bVar2 + 1;
  *param_1 = (char)(iVar1 + (uint)(byte)param_1[-1] >> 1);
  uVar5 = (undefined1)(iVar1 + (uint)bVar3 >> 1);
  param_1[0x20] = uVar5;
  param_1[2] = uVar5;
  uVar5 = (undefined1)((uint)bVar3 + (uint)bVar4 + 1 >> 1);
  param_1[0x40] = uVar5;
  param_1[0x22] = uVar5;
  iVar1 = bVar3 + 2;
  param_1[1] = (char)(iVar1 + (uint)(byte)param_1[-1] + (uint)bVar2 * 2 >> 2);
  uVar5 = (undefined1)((uint)bVar4 + (uint)bVar2 + (uint)bVar3 * 2 + 2 >> 2);
  param_1[0x21] = uVar5;
  param_1[3] = uVar5;
  uVar5 = (undefined1)(iVar1 + (uint)bVar4 * 3 >> 2);
  param_1[0x41] = uVar5;
  param_1[0x23] = uVar5;
  param_1[0x42] = bVar4;
  param_1[0x43] = bVar4;
  *(uint *)(param_1 + 0x60) = (uint)bVar4 * 0x1010101;
  return;
}




void FUN_1010c1f44(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar1 = 0;
  uVar2 = 0x10;
  pbVar4 = (byte *)(param_1 + -1);
  do {
    uVar2 = uVar2 + *pbVar4 + (uint)*(byte *)(param_1 + -0x20 + lVar1);
    lVar1 = lVar1 + 1;
    pbVar4 = pbVar4 + 0x20;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  lVar3 = ((ulong)(uVar2 >> 5) & 0xff) * 0x101010101010101;
  do {
    *(long *)(param_1 + lVar1) = lVar3;
    ((long *)(param_1 + lVar1))[1] = lVar3;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x200);
  return;
}




void FUN_1010c1f98(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = 0;
  bVar1 = *(byte *)(param_1 + -0x21);
  lVar4 = param_1 + -0x20;
  do {
    lVar5 = 0;
    bVar2 = *(byte *)(param_1 + -1);
    do {
      *(undefined *)(param_1 + lVar5) =
           (&DAT_1013cb5e1)[((ulong)bVar2 - (ulong)bVar1) + (ulong)*(byte *)(lVar4 + lVar5)];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x10);
    param_1 = param_1 + 0x20;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}




void FUN_1010c1fec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  do {
    uVar2 = *(undefined8 *)(param_1 + -0x20);
    ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(param_1 + -0x18);
    *(undefined8 *)(param_1 + lVar1) = uVar2;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x200);
  return;
}




void FUN_1010c200c(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0x11;
  do {
    lVar2 = (ulong)*(byte *)((long)param_1 + -1) * 0x101010101010101;
    *param_1 = lVar2;
    param_1[1] = lVar2;
    uVar1 = uVar1 - 1;
    param_1 = param_1 + 4;
  } while (1 < uVar1);
  return;
}




void FUN_1010c2030(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 8;
  lVar3 = -1;
  do {
    uVar1 = uVar1 + *(byte *)(param_1 + lVar3);
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x1ff);
  lVar3 = 0;
  lVar2 = ((ulong)(uVar1 >> 4) & 0xff) * 0x101010101010101;
  do {
    *(long *)(param_1 + lVar3) = lVar2;
    ((long *)(param_1 + lVar3))[1] = lVar2;
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x200);
  return;
}




void FUN_1010c2074(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar4 = 8;
  iVar5 = 0;
  do {
    uVar1 = *(uint *)(param_1 + -0x20 + lVar2);
    iVar4 = iVar4 + (uVar1 & 0xff);
    iVar5 = iVar5 + (uVar1 >> 8 & 0xff);
    iVar6 = iVar6 + (uVar1 >> 0x10 & 0xff);
    iVar7 = iVar7 + (uVar1 >> 0x18);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  lVar3 = ((ulong)((uint)(iVar4 + iVar5 + iVar6 + iVar7) >> 4) & 0xff) * 0x101010101010101;
  do {
    *(long *)(param_1 + lVar2) = lVar3;
    ((long *)(param_1 + lVar2))[1] = lVar3;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x200);
  return;
}




void FUN_1010c20cc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1) = 0x8080808080808080;
    ((undefined8 *)(param_1 + lVar1))[1] = 0x8080808080808080;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x200);
  return;
}




void FUN_1010c20ec(long param_1)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  
  lVar1 = 0;
  uVar2 = 8;
  pbVar3 = (byte *)(param_1 + -1);
  do {
    uVar2 = uVar2 + *(byte *)(param_1 + -0x20 + lVar1) + (uint)*pbVar3;
    lVar1 = lVar1 + 1;
    pbVar3 = pbVar3 + 0x20;
  } while (lVar1 != 8);
  lVar1 = 0;
  do {
    *(ulong *)(param_1 + lVar1) = ((ulong)(uVar2 >> 4) & 0xff) * 0x101010101010101;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  return;
}




void FUN_1010c213c(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = 0;
  bVar1 = *(byte *)(param_1 + -0x21);
  lVar4 = param_1 + -0x20;
  do {
    lVar5 = 0;
    bVar2 = *(byte *)(param_1 + -1);
    do {
      *(undefined *)(param_1 + lVar5) =
           (&DAT_1013cb5e1)[((ulong)bVar2 - (ulong)bVar1) + (ulong)*(byte *)(lVar4 + lVar5)];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    param_1 = param_1 + 0x20;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return;
}




void FUN_1010c2190(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  uVar2 = *(undefined8 *)(param_1 + -0x20);
  do {
    *(undefined8 *)(param_1 + lVar1) = uVar2;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  return;
}




void FUN_1010c21ac(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(ulong *)(param_1 + lVar1) = (ulong)*(byte *)(param_1 + lVar1 + -1) * 0x101010101010101;
    lVar1 = lVar1 + 0x20;
  } while ((int)lVar1 != 0x100);
  return;
}




void FUN_1010c21d4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 4;
  lVar2 = -1;
  do {
    uVar1 = uVar1 + *(byte *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xff);
  lVar2 = 0;
  do {
    *(ulong *)(param_1 + lVar2) = ((ulong)(uVar1 >> 3) & 0xff) * 0x101010101010101;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  return;
}




void FUN_1010c2214(long param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  
  lVar2 = 0;
  uVar1 = *(uint *)(param_1 + -0x20);
  uVar4 = *(uint *)(param_1 + -0x1c);
  bVar3 = (byte)(uVar4 >> 8);
  do {
    *(ulong *)(param_1 + lVar2) =
         ((ulong)((uVar1 & 0xff) + (CONCAT12(bVar3,(ushort)(byte)uVar4) & 0xffff) + 4 +
                  (uVar1 >> 8 & 0xff) + (uint)bVar3 +
                  (uVar1 >> 0x10 & 0xff) + (uVar4 >> 0x10 & 0xff) +
                  (uVar1 >> 0x18) + (uVar4 >> 0x18) >> 3) & 0xff) * 0x101010101010101;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  return;
}




void FUN_1010c225c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1) = 0x8080808080808080;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  return;
}




void FUN_1010c2278(void)

{
  int iVar1;
  
  if (PTR_LOOP_1018735d0 != PTR_FUN_1018735c8) {
    FUN_1010c3224();
    DAT_101dc1d60 = FUN_1010c23f0;
    DAT_101dc1d38 = FUN_1010c24cc;
    DAT_101dc1d58 = FUN_1010c2518;
    DAT_101dc1d48 = FUN_1010c2560;
    DAT_101dc1d50 = FUN_1010c25ac;
    DAT_101dc1d40 = FUN_1010c2644;
    DAT_101dc1d68 = FUN_1010c2780;
    DAT_101dc1cf8 = FUN_1010c2798;
    DAT_101dc1d78 = FUN_1010c27b4;
    DAT_101dc1d08 = FUN_1010c2828;
    DAT_101dc1d70 = FUN_1010c2898;
    DAT_101dc1d00 = FUN_1010c2918;
    DAT_101dc1d80 = FUN_1010c2988;
    DAT_101dc1d10 = FUN_1010c2a04;
    DAT_101dc1d28 = FUN_1010c2a78;
    DAT_101dc1d18 = FUN_1010c2b3c;
    DAT_101dc1d30 = FUN_1010c2bf8;
    DAT_101dc1d20 = FUN_1010c2c58;
    if ((PTR_FUN_1018735c8 != (undefined *)0x0) &&
       (iVar1 = (*(code *)PTR_FUN_1018735c8)(4), iVar1 != 0)) {
      FUN_1010c3228();
    }
    PTR_LOOP_1018735d0 = PTR_FUN_1018735c8;
  }
  return;
}




void FUN_1010c23f0(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  long lVar2;
  int *piVar3;
  short sVar6;
  int iVar4;
  short sVar7;
  undefined8 uVar5;
  short sVar9;
  int iVar8;
  int iVar10;
  int iVar11;
  short sVar14;
  int iVar12;
  short sVar15;
  undefined8 uVar13;
  short sVar17;
  int iVar16;
  int iVar18;
  int iVar19;
  short sVar21;
  short sVar22;
  undefined8 uVar20;
  short sVar23;
  short sVar25;
  short sVar26;
  undefined8 uVar24;
  short sVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long local_18;
  
  lVar2 = 0;
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  uVar5 = *param_1;
  uVar13 = param_1[1];
  uVar24 = param_1[2];
  uVar20 = param_1[3];
  sVar21 = (short)((ulong)uVar20 >> 0x10);
  sVar22 = (short)((ulong)uVar20 >> 0x20);
  sVar23 = (short)((ulong)uVar20 >> 0x30);
  sVar6 = (short)((ulong)uVar5 >> 0x10);
  sVar7 = (short)((ulong)uVar5 >> 0x20);
  sVar9 = (short)((ulong)uVar5 >> 0x30);
  iVar28 = (int)(short)uVar20 + (int)(short)uVar5;
  iVar29 = (int)sVar21 + (int)sVar6;
  iVar30 = (int)sVar22 + (int)sVar7;
  iVar31 = (int)sVar23 + (int)sVar9;
  sVar25 = (short)((ulong)uVar24 >> 0x10);
  sVar26 = (short)((ulong)uVar24 >> 0x20);
  sVar27 = (short)((ulong)uVar24 >> 0x30);
  sVar14 = (short)((ulong)uVar13 >> 0x10);
  sVar15 = (short)((ulong)uVar13 >> 0x20);
  sVar17 = (short)((ulong)uVar13 >> 0x30);
  iVar32 = (int)(short)uVar24 + (int)(short)uVar13;
  iVar33 = (int)sVar25 + (int)sVar14;
  iVar34 = (int)sVar26 + (int)sVar15;
  iVar35 = (int)sVar27 + (int)sVar17;
  iVar12 = (int)(short)uVar13 - (int)(short)uVar24;
  iVar16 = (int)sVar14 - (int)sVar25;
  iVar18 = (int)sVar15 - (int)sVar26;
  iVar19 = (int)sVar17 - (int)sVar27;
  iVar4 = (int)(short)uVar5 - (int)(short)uVar20;
  iVar8 = (int)sVar6 - (int)sVar21;
  iVar10 = (int)sVar7 - (int)sVar22;
  iVar11 = (int)sVar9 - (int)sVar23;
  local_60 = CONCAT44(iVar33 + iVar29,iVar32 + iVar28);
  uStack_58 = CONCAT44(iVar35 + iVar31,iVar34 + iVar30);
  local_40 = CONCAT44(iVar29 - iVar33,iVar28 - iVar32);
  uStack_38 = CONCAT44(iVar31 - iVar35,iVar30 - iVar34);
  uStack_48 = CONCAT44(iVar19 + iVar11,iVar18 + iVar10);
  uStack_50 = CONCAT44(iVar16 + iVar8,iVar12 + iVar4);
  uStack_30 = CONCAT44(iVar8 - iVar16,iVar4 - iVar12);
  uStack_28 = CONCAT44(iVar11 - iVar19,iVar10 - iVar18);
  piVar3 = (int *)((ulong)&local_60 | 8);
  do {
    puVar1 = (undefined2 *)(param_2 + lVar2);
    iVar4 = piVar3[-2] + 3 + piVar3[1];
    iVar8 = *piVar3 + piVar3[-1];
    iVar10 = piVar3[-1] - *piVar3;
    iVar11 = (piVar3[-2] + 3) - piVar3[1];
    *puVar1 = (short)((uint)(iVar8 + iVar4) >> 3);
    puVar1[0x10] = (short)((uint)(iVar10 + iVar11) >> 3);
    puVar1[0x20] = (short)((uint)(iVar4 - iVar8) >> 3);
    puVar1[0x30] = (short)((uint)(iVar11 - iVar10) >> 3);
    lVar2 = lVar2 + 0x80;
    piVar3 = piVar3 + 4;
  } while (lVar2 != 0x200);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010c24cc(long param_1,long param_2,int param_3)

{
  FUN_1010c2ca8();
  if (param_3 != 0) {
    FUN_1010c2ca8(param_1 + 0x20,param_2 + 4);
    return;
  }
  return;
}




void FUN_1010c2518(long param_1,long param_2)

{
  (*DAT_101dc1d38)(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0001010c255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_101dc1d38)(param_1 + 0x40,param_2 + 0x80,1);
  return;
}




void FUN_1010c2560(short *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar2 = 0;
  iVar1 = *param_1 + 4 >> 3;
  do {
    uVar4 = *(uint *)(param_2 + lVar2);
    bVar3 = (byte)(uVar4 >> 8);
    auVar5._0_4_ = iVar1 + (CONCAT12(bVar3,(ushort)(byte)uVar4) & 0xffff);
    auVar5._4_4_ = iVar1 + (uint)bVar3;
    auVar5._8_4_ = iVar1 + (uVar4 >> 0x10 & 0xff);
    auVar5._12_4_ = iVar1 + (uVar4 >> 0x18);
    auVar5 = NEON_smax(auVar5,ZEXT216(0),4);
    auVar6._8_8_ = 0xff000000ff;
    auVar6._0_8_ = 0xff000000ff;
    auVar6 = NEON_smin(auVar5,auVar6,4);
    *(uint *)(param_2 + lVar2) =
         CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x80);
  return;
}




void FUN_1010c25ac(short *param_1,long param_2)

{
  if (*param_1 != 0) {
    (*DAT_101dc1d48)(param_1,param_2);
  }
  if (param_1[0x10] != 0) {
    (*DAT_101dc1d48)(param_1 + 0x10,param_2 + 4);
  }
  if (param_1[0x20] != 0) {
    (*DAT_101dc1d48)(param_1 + 0x20,param_2 + 0x80);
  }
  if (param_1[0x30] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001010c2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_101dc1d48)(param_1 + 0x30,param_2 + 0x84);
    return;
  }
  return;
}




void FUN_1010c2644(short *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  int iVar12;
  int iVar14;
  undefined1 auVar13 [16];
  int iVar15;
  int iVar19;
  int iVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar21;
  undefined1 auVar18 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  iVar2 = *param_1 + 4;
  sVar5 = param_1[4];
  iVar12 = param_1[1] * 0x14e7b >> 0x10;
  iVar14 = param_1[1] * 0x8a8c >> 0x10;
  auVar16._4_4_ = iVar12;
  auVar16._0_4_ = iVar12;
  auVar16._8_4_ = iVar14;
  auVar16._12_4_ = iVar14;
  auVar17 = NEON_ext(auVar16,auVar16,4,1);
  iVar1 = sVar5 * 0x14e7b >> 0x10;
  iVar3 = iVar2 + iVar1;
  uVar22 = *param_2;
  bVar11 = (byte)(uVar22 >> 8);
  iVar15 = auVar17._0_4_;
  auVar23._0_4_ = iVar3 - iVar15;
  iVar19 = auVar17._4_4_;
  auVar23._4_4_ = iVar3 - iVar19;
  iVar20 = auVar17._8_4_;
  auVar23._8_4_ = iVar3 - iVar20;
  iVar21 = auVar17._12_4_;
  auVar23._12_4_ = iVar3 - iVar21;
  auVar17._4_4_ = iVar3 + iVar14;
  auVar17._0_4_ = iVar3 + iVar12;
  auVar17._8_4_ = iVar3;
  auVar17._12_4_ = iVar3;
  auVar17 = NEON_ext(auVar23,auVar17,8,1);
  auVar17 = NEON_ext(auVar17,auVar17,8,1);
  auVar25._0_4_ = (CONCAT12(bVar11,(ushort)(byte)uVar22) & 0xffff) + (auVar17._0_4_ >> 3);
  auVar25._4_4_ = (uint)bVar11 + (auVar17._4_4_ >> 3);
  auVar25._8_4_ = (uVar22 >> 0x10 & 0xff) + (auVar17._8_4_ >> 3);
  auVar25._12_4_ = (uVar22 >> 0x18) + (auVar17._12_4_ >> 3);
  auVar24 = ZEXT216(0);
  auVar17 = NEON_smax(auVar25,auVar24,4);
  auVar6._8_4_ = 0xff;
  auVar6._0_8_ = 0xff000000ff;
  auVar6._12_4_ = 0xff;
  auVar17 = NEON_smin(auVar17,auVar6,4);
  *param_2 = CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
  iVar3 = sVar5 * 0x8a8c >> 0x10;
  iVar4 = iVar2 + iVar3;
  uVar22 = param_2[8];
  bVar11 = (byte)(uVar22 >> 8);
  auVar29._0_4_ = iVar4 - iVar15;
  auVar29._4_4_ = iVar4 - iVar19;
  auVar29._8_4_ = iVar4 - iVar20;
  auVar29._12_4_ = iVar4 - iVar21;
  auVar9._4_4_ = iVar4 + iVar14;
  auVar9._0_4_ = iVar4 + iVar12;
  auVar9._8_4_ = iVar4;
  auVar9._12_4_ = iVar4;
  auVar17 = NEON_ext(auVar29,auVar9,8,1);
  auVar17 = NEON_ext(auVar17,auVar17,8,1);
  auVar26._0_4_ = (CONCAT12(bVar11,(ushort)(byte)uVar22) & 0xffff) + (auVar17._0_4_ >> 3);
  auVar26._4_4_ = (uint)bVar11 + (auVar17._4_4_ >> 3);
  auVar26._8_4_ = (uVar22 >> 0x10 & 0xff) + (auVar17._8_4_ >> 3);
  auVar26._12_4_ = (uVar22 >> 0x18) + (auVar17._12_4_ >> 3);
  auVar17 = NEON_smax(auVar26,auVar24,4);
  auVar7._8_4_ = 0xff;
  auVar7._0_8_ = 0xff000000ff;
  auVar7._12_4_ = 0xff;
  auVar17 = NEON_smin(auVar17,auVar7,4);
  param_2[8] = CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
  iVar3 = iVar2 - iVar3;
  uVar22 = param_2[0x10];
  bVar11 = (byte)(uVar22 >> 8);
  auVar30._0_4_ = iVar3 - iVar15;
  auVar30._4_4_ = iVar3 - iVar19;
  auVar30._8_4_ = iVar3 - iVar20;
  auVar30._12_4_ = iVar3 - iVar21;
  auVar10._4_4_ = iVar3 + iVar14;
  auVar10._0_4_ = iVar3 + iVar12;
  auVar10._8_4_ = iVar3;
  auVar10._12_4_ = iVar3;
  auVar17 = NEON_ext(auVar30,auVar10,8,1);
  auVar17 = NEON_ext(auVar17,auVar17,8,1);
  auVar27._0_4_ = (CONCAT12(bVar11,(ushort)(byte)uVar22) & 0xffff) + (auVar17._0_4_ >> 3);
  auVar27._4_4_ = (uint)bVar11 + (auVar17._4_4_ >> 3);
  auVar27._8_4_ = (uVar22 >> 0x10 & 0xff) + (auVar17._8_4_ >> 3);
  auVar27._12_4_ = (uVar22 >> 0x18) + (auVar17._12_4_ >> 3);
  auVar17 = NEON_smax(auVar27,auVar24,4);
  auVar8._8_4_ = 0xff;
  auVar8._0_8_ = 0xff000000ff;
  auVar8._12_4_ = 0xff;
  auVar17 = NEON_smin(auVar17,auVar8,4);
  param_2[0x10] = CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
  iVar2 = iVar2 - iVar1;
  uVar22 = param_2[0x18];
  bVar11 = (byte)(uVar22 >> 8);
  auVar13._0_4_ = iVar2 + iVar12;
  auVar13._4_4_ = iVar2 + iVar14;
  auVar13._8_4_ = iVar2;
  auVar13._12_4_ = iVar2;
  auVar18._0_4_ = iVar2 - iVar15;
  auVar18._4_4_ = iVar2 - iVar19;
  auVar18._8_4_ = iVar2 - iVar20;
  auVar18._12_4_ = iVar2 - iVar21;
  auVar17 = NEON_ext(auVar18,auVar13,8,1);
  auVar17 = NEON_ext(auVar17,auVar17,8,1);
  auVar28._0_4_ = (CONCAT12(bVar11,(ushort)(byte)uVar22) & 0xffff) + (auVar17._0_4_ >> 3);
  auVar28._4_4_ = (uint)bVar11 + (auVar17._4_4_ >> 3);
  auVar28._8_4_ = (uVar22 >> 0x10 & 0xff) + (auVar17._8_4_ >> 3);
  auVar28._12_4_ = (uVar22 >> 0x18) + (auVar17._12_4_ >> 3);
  auVar17 = NEON_smax(auVar28,auVar24,4);
  auVar24._8_4_ = 0xff;
  auVar24._0_8_ = 0xff000000ff;
  auVar24._12_4_ = 0xff;
  auVar17 = NEON_smin(auVar17,auVar24,4);
  param_2[0x18] = CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
  return;
}




void FUN_1010c2780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1010c2de8(param_1,param_2,1,0x10,param_3,param_4,param_5);
  return;
}




void FUN_1010c2798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1010c2de8(param_1,1,param_2,0x10,param_3,param_4,param_5);
  return;
}




void FUN_1010c27b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1010c2de8(param_1,param_3,1,8,param_4,param_5,param_6);
  FUN_1010c2de8(param_2,param_3,1,8,param_4,param_5,param_6);
  return;
}




void FUN_1010c2828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1010c2de8(param_1,1,param_3,8,param_4,param_5,param_6);
  FUN_1010c2de8(param_2,1,param_3,8,param_4,param_5,param_6);
  return;
}




void FUN_1010c2898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_2 << 2;
  param_1 = param_1 + iVar1;
  uVar2 = 4;
  do {
    FUN_1010c3024(param_1,param_2,1,0x10,param_3,param_4,param_5);
    uVar2 = uVar2 - 1;
    param_1 = param_1 + iVar1;
  } while (1 < uVar2);
  return;
}




void FUN_1010c2918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  
  uVar1 = 4;
  do {
    param_1 = param_1 + 4;
    FUN_1010c3024(param_1,1,param_2,0x10,param_3,param_4,param_5);
    uVar1 = uVar1 - 1;
  } while (1 < uVar1);
  return;
}




void FUN_1010c2988(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (int)param_3 << 2;
  FUN_1010c3024(param_1 + iVar1,param_3,1,8,param_4,param_5,param_6);
  FUN_1010c3024(param_2 + iVar1,param_3,1,8,param_4,param_5,param_6);
  return;
}




void FUN_1010c2a04(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1010c3024(param_1 + 4,1,param_3,8,param_4,param_5,param_6);
  FUN_1010c3024(param_2 + 4,1,param_3,8,param_4,param_5,param_6);
  return;
}




void FUN_1010c2a78(long param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    bVar2 = *(byte *)((param_1 - param_2) + lVar6);
    bVar3 = *(byte *)(param_1 + lVar6);
    lVar5 = (ulong)*(byte *)(param_1 + (long)param_2 * -2 + lVar6) -
            (ulong)*(byte *)(param_1 + param_2 + lVar6);
    if ((int)((uint)(byte)(&DAT_1013cb8e0)[lVar5] +
             (uint)(byte)(&DAT_1013cb8e0)[(ulong)bVar2 - (ulong)bVar3] * 4) <=
        (int)(param_3 << 1 | 1U)) {
      iVar1 = ((uint)bVar3 - (uint)bVar2) * 3 + (int)(char)(&DAT_1013cb004)[lVar5];
      cVar4 = (&DAT_1013cb471)[iVar1 + 4 >> 3];
      *(undefined *)((param_1 - param_2) + lVar6) =
           (&DAT_1013cb5e1)[(long)(char)(&DAT_1013cb471)[iVar1 + 3 >> 3] + (ulong)(uint)bVar2];
      *(undefined *)(param_1 + lVar6) = (&DAT_1013cb5e1)[(ulong)bVar3 - (long)cVar4];
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  return;
}




void FUN_1010c2b3c(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  
  lVar5 = 0x10;
  do {
    bVar4 = param_1[-1];
    bVar2 = *param_1;
    if ((int)((uint)(byte)(&DAT_1013cb8e0)[(ulong)param_1[-2] - (ulong)param_1[1]] +
             (uint)(byte)(&DAT_1013cb8e0)[(ulong)bVar4 - (ulong)bVar2] * 4) <=
        (int)(param_3 << 1 | 1U)) {
      iVar1 = ((uint)bVar2 - (uint)bVar4) * 3 +
              (int)(char)(&DAT_1013cb004)[(ulong)param_1[-2] - (ulong)param_1[1]];
      cVar3 = (&DAT_1013cb471)[iVar1 + 4 >> 3];
      param_1[-1] = (&DAT_1013cb5e1)
                    [(long)(char)(&DAT_1013cb471)[iVar1 + 3 >> 3] + (ulong)(uint)bVar4];
      *param_1 = (&DAT_1013cb5e1)[(ulong)bVar2 - (long)cVar3];
    }
    param_1 = param_1 + param_2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}




void FUN_1010c2bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_2 << 2;
  param_1 = param_1 + iVar1;
  uVar2 = 4;
  do {
    FUN_1010c2a78(param_1,param_2,param_3);
    uVar2 = uVar2 - 1;
    param_1 = param_1 + iVar1;
  } while (1 < uVar2);
  return;
}




void FUN_1010c2c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = 4;
  do {
    param_1 = param_1 + 4;
    FUN_1010c2b3c(param_1,param_2,param_3);
    uVar1 = uVar1 - 1;
  } while (1 < uVar1);
  return;
}




void FUN_1010c2ca8(undefined8 *param_1,uint *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  short sVar23;
  int iVar19;
  short sVar24;
  undefined8 uVar20;
  short sVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar26;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar27 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int local_40 [4];
  int local_30 [4];
  int local_20 [4];
  int local_10 [4];
  
  lVar14 = 0;
  uVar5 = *param_1;
  uVar9 = param_1[1];
  uVar20 = param_1[2];
  uVar26 = param_1[3];
  sVar23 = (short)((ulong)uVar20 >> 0x10);
  sVar24 = (short)((ulong)uVar20 >> 0x20);
  sVar25 = (short)((ulong)uVar20 >> 0x30);
  sVar1 = (short)((ulong)uVar5 >> 0x10);
  sVar2 = (short)((ulong)uVar5 >> 0x20);
  sVar3 = (short)((ulong)uVar5 >> 0x30);
  iVar31 = (int)(short)uVar20 + (int)(short)uVar5;
  iVar32 = (int)sVar23 + (int)sVar1;
  iVar33 = (int)sVar24 + (int)sVar2;
  iVar34 = (int)sVar25 + (int)sVar3;
  iVar4 = (int)(short)uVar5 - (int)(short)uVar20;
  iVar6 = (int)sVar1 - (int)sVar23;
  iVar7 = (int)sVar2 - (int)sVar24;
  iVar8 = (int)sVar3 - (int)sVar25;
  iVar16 = (int)(short)((ulong)uVar9 >> 0x10);
  iVar17 = (int)(short)((ulong)uVar9 >> 0x20);
  iVar18 = (int)(short)((ulong)uVar9 >> 0x30);
  iVar28 = (int)(short)((ulong)uVar26 >> 0x10);
  iVar29 = (int)(short)((ulong)uVar26 >> 0x20);
  iVar30 = (int)(short)((ulong)uVar26 >> 0x30);
  iVar35 = ((short)uVar9 * 0x8a8c >> 0x10) - ((short)uVar26 * 0x14e7b >> 0x10);
  iVar39 = (iVar16 * 0x8a8c >> 0x10) - (iVar28 * 0x14e7b >> 0x10);
  iVar40 = (iVar17 * 0x8a8c >> 0x10) - (iVar29 * 0x14e7b >> 0x10);
  iVar41 = (iVar18 * 0x8a8c >> 0x10) - (iVar30 * 0x14e7b >> 0x10);
  iVar19 = ((short)uVar26 * 0x8a8c >> 0x10) + ((short)uVar9 * 0x14e7b >> 0x10);
  iVar16 = (iVar28 * 0x8a8c >> 0x10) + (iVar16 * 0x14e7b >> 0x10);
  iVar17 = (iVar29 * 0x8a8c >> 0x10) + (iVar17 * 0x14e7b >> 0x10);
  iVar18 = (iVar30 * 0x8a8c >> 0x10) + (iVar18 * 0x14e7b >> 0x10);
  local_40[0] = iVar19 + iVar31;
  local_40[1] = iVar35 + iVar4;
  local_40[2] = iVar4 - iVar35;
  local_40[3] = iVar31 - iVar19;
  local_30[0] = iVar16 + iVar32;
  local_30[1] = iVar39 + iVar6;
  local_30[2] = iVar6 - iVar39;
  local_30[3] = iVar32 - iVar16;
  local_20[0] = iVar17 + iVar33;
  local_20[1] = iVar40 + iVar7;
  local_20[2] = iVar7 - iVar40;
  local_20[3] = iVar33 - iVar17;
  local_10[0] = iVar18 + iVar34;
  local_10[1] = iVar41 + iVar8;
  local_10[2] = iVar8 - iVar41;
  local_10[3] = iVar34 - iVar18;
  do {
    iVar4 = *(int *)((long)local_40 + lVar14) + 4;
    iVar17 = *(int *)((long)local_20 + lVar14);
    iVar6 = *(int *)((long)local_30 + lVar14) * 0x8a8c >> 0x10;
    iVar7 = *(int *)((long)local_10 + lVar14) * 0x14e7b >> 0x10;
    iVar8 = *(int *)((long)local_10 + lVar14) * 0x8a8c >> 0x10;
    iVar16 = *(int *)((long)local_30 + lVar14) * 0x14e7b >> 0x10;
    iVar18 = iVar8 + iVar16;
    iVar19 = iVar6 + iVar7;
    iVar28 = iVar4 + iVar17;
    iVar29 = iVar4 + iVar17;
    auVar21._0_4_ = iVar8 - iVar16;
    auVar21._4_4_ = iVar6 - iVar7;
    auVar21._8_4_ = iVar4 - iVar17;
    auVar21._12_4_ = iVar4 - iVar17;
    auVar37._4_4_ = iVar19;
    auVar37._0_4_ = iVar18;
    auVar37._8_4_ = iVar28;
    auVar37._12_4_ = iVar29;
    auVar27 = NEON_ext(auVar37,auVar21,0xc,1);
    auVar10._4_4_ = iVar19;
    auVar10._0_4_ = iVar18;
    auVar10._8_4_ = iVar28;
    auVar10._12_4_ = iVar29;
    auVar37 = NEON_ext(auVar27,auVar10,4,1);
    auVar27 = NEON_ext(auVar27,auVar27,8,1);
    auVar37 = NEON_ext(auVar37,auVar27,0xc,1);
    uVar36 = *param_2;
    bVar15 = (byte)(uVar36 >> 8);
    auVar11._4_4_ = iVar19;
    auVar11._0_4_ = iVar18;
    auVar11._8_4_ = iVar28;
    auVar11._12_4_ = iVar29;
    auVar27 = NEON_ext(auVar21,auVar11,4,1);
    auVar27 = NEON_rev64(auVar27,4);
    auVar12._4_4_ = iVar19;
    auVar12._0_4_ = iVar18;
    auVar12._8_4_ = iVar28;
    auVar12._12_4_ = iVar29;
    auVar27 = NEON_ext(auVar12,auVar27,0xc,1);
    auVar22._0_4_ = auVar37._0_4_ - auVar27._0_4_;
    auVar22._4_4_ = auVar37._4_4_ - auVar27._4_4_;
    auVar22._8_4_ = auVar37._8_4_ - auVar27._8_4_;
    auVar22._12_4_ = auVar37._12_4_ - auVar27._12_4_;
    auVar13._4_4_ = auVar37._4_4_ + auVar27._4_4_;
    auVar13._0_4_ = auVar37._0_4_ + auVar27._0_4_;
    auVar13._8_4_ = auVar37._8_4_ + auVar27._8_4_;
    auVar13._12_4_ = auVar37._12_4_ + auVar27._12_4_;
    auVar27 = NEON_ext(auVar22,auVar13,8,1);
    auVar27 = NEON_ext(auVar27,auVar27,8,1);
    auVar38._0_4_ = (CONCAT12(bVar15,(ushort)(byte)uVar36) & 0xffff) + (auVar27._0_4_ >> 3);
    auVar38._4_4_ = (uint)bVar15 + (auVar27._4_4_ >> 3);
    auVar38._8_4_ = (uVar36 >> 0x10 & 0xff) + (auVar27._8_4_ >> 3);
    auVar38._12_4_ = (uVar36 >> 0x18) + (auVar27._12_4_ >> 3);
    auVar37 = NEON_smax(auVar38,ZEXT216(0),4);
    auVar27._8_4_ = 0xff;
    auVar27._0_8_ = 0xff000000ff;
    auVar27._12_4_ = 0xff;
    auVar27 = NEON_smin(auVar37,auVar27,4);
    *param_2 = CONCAT13(auVar27[0xc],CONCAT12(auVar27[8],CONCAT11(auVar27[4],auVar27[0])));
    param_2 = param_2 + 8;
    lVar14 = lVar14 + 4;
  } while ((int)lVar14 != 0x10);
  return;
}




void FUN_1010c2de8(byte *param_1,ulong param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  
  if (0 < param_4) {
    iVar7 = (int)param_2;
    lVar9 = (long)iVar7;
    lVar10 = lVar9 + (long)iVar7 * -4;
    lVar6 = -(long)iVar7;
    uVar11 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
    param_4 = param_4 + 1;
    do {
      uVar15 = (ulong)param_1[(long)iVar7 * -2];
      uVar13 = (ulong)param_1[lVar6];
      bVar3 = *param_1;
      uVar12 = (ulong)bVar3;
      uVar14 = (ulong)param_1[lVar9];
      if (((((int)((uint)(byte)(&DAT_1013cb8e0)[uVar15 - uVar14] +
                  (uint)(byte)(&DAT_1013cb8e0)[uVar13 - uVar12] * 4) <= (int)(param_5 << 1 | 1U)) &&
           (uVar17 = (ulong)param_1[lVar10],
           (int)(uint)(byte)(&DAT_1013cb8e0)[param_1[(long)iVar7 * -4] - uVar17] <= param_6)) &&
          ((int)(uint)(byte)(&DAT_1013cb8e0)[uVar17 - uVar15] <= param_6)) &&
         ((int)(uint)(byte)(&DAT_1013cb8e0)[uVar15 - uVar13] <= param_6)) {
        pbVar16 = param_1 + uVar11;
        bVar4 = *pbVar16;
        if ((((int)(uint)(byte)(&DAT_1013cb8e0)[(ulong)param_1[uVar11 + (long)iVar7] - (ulong)bVar4]
              <= param_6) && ((int)(uint)(byte)(&DAT_1013cb8e0)[bVar4 - uVar14] <= param_6)) &&
           ((int)(uint)(byte)(&DAT_1013cb8e0)[uVar14 - uVar12] <= param_6)) {
          if ((param_7 < (int)(uint)(byte)(&DAT_1013cb8e0)[uVar15 - uVar13]) ||
             (param_7 < (int)(uint)(byte)(&DAT_1013cb8e0)[uVar14 - uVar12])) {
            iVar8 = ((uint)bVar3 - (uint)param_1[lVar6]) * 3 +
                    (int)(char)(&DAT_1013cb004)[uVar15 - uVar14];
            cVar5 = (&DAT_1013cb471)[iVar8 + 4 >> 3];
            param_1[lVar6] = (&DAT_1013cb5e1)[(long)(char)(&DAT_1013cb471)[iVar8 + 3 >> 3] + uVar13]
            ;
            iVar8 = (uint)bVar3 - (int)cVar5;
            pbVar16 = param_1;
          }
          else {
            cVar5 = (&DAT_1013cb004)
                    [(uVar12 - uVar13) * 3 + (long)(char)(&DAT_1013cb004)[uVar15 - uVar14]];
            iVar8 = cVar5 * 9 + 0x3f >> 7;
            iVar1 = cVar5 * 0x12 + 0x3f >> 7;
            param_1[lVar10] = (&DAT_1013cb5e1)[uVar17 + (long)iVar8];
            iVar2 = cVar5 * 0x1b + 0x3f >> 7;
            param_1[(long)iVar7 * -2] = (&DAT_1013cb5e1)[uVar15 + (long)iVar1];
            param_1[lVar6] = (&DAT_1013cb5e1)[uVar13 + (long)iVar2];
            *param_1 = (&DAT_1013cb5e1)[uVar12 - (long)iVar2];
            param_1[lVar9] = (&DAT_1013cb5e1)[uVar14 - (long)iVar1];
            iVar8 = (uint)bVar4 - iVar8;
          }
          *pbVar16 = (&DAT_1013cb5e1)[iVar8];
        }
      }
      param_1 = param_1 + param_3;
      param_4 = param_4 + -1;
    } while (1 < param_4);
  }
  return;
}




void FUN_1010c3024(byte *param_1,ulong param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (0 < param_4) {
    iVar6 = (int)param_2;
    lVar5 = -(long)iVar6;
    uVar10 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
    param_4 = param_4 + 1;
    do {
      uVar13 = (ulong)param_1[(long)iVar6 * -2];
      bVar2 = param_1[lVar5];
      uVar11 = (ulong)bVar2;
      uVar9 = (ulong)*param_1;
      pbVar12 = param_1 + iVar6;
      bVar1 = *pbVar12;
      uVar14 = (ulong)bVar1;
      if ((((((int)((uint)(byte)(&DAT_1013cb8e0)[uVar13 - uVar14] +
                   (uint)(byte)(&DAT_1013cb8e0)[uVar11 - uVar9] * 4) <= (int)(param_5 << 1 | 1U)) &&
            ((int)(uint)(byte)(&DAT_1013cb8e0)
                              [(ulong)param_1[(long)iVar6 * -4] -
                               (ulong)param_1[(long)iVar6 + (long)iVar6 * -4]] <= param_6)) &&
           ((int)(uint)(byte)(&DAT_1013cb8e0)[param_1[(long)iVar6 + (long)iVar6 * -4] - uVar13] <=
            param_6)) &&
          (((int)(uint)(byte)(&DAT_1013cb8e0)[uVar13 - uVar11] <= param_6 &&
           ((int)(uint)(byte)(&DAT_1013cb8e0)
                             [(ulong)param_1[uVar10 + (long)iVar6] - (ulong)param_1[uVar10]] <=
            param_6)))) &&
         (((int)(uint)(byte)(&DAT_1013cb8e0)[param_1[uVar10] - uVar14] <= param_6 &&
          ((int)(uint)(byte)(&DAT_1013cb8e0)[uVar14 - uVar9] <= param_6)))) {
        uVar7 = (uint)*param_1;
        if ((param_7 < (int)(uint)(byte)(&DAT_1013cb8e0)[uVar13 - uVar11]) ||
           (param_7 < (int)(uint)(byte)(&DAT_1013cb8e0)[uVar14 - uVar9])) {
          iVar8 = (uVar7 - bVar2) * 3 + (int)(char)(&DAT_1013cb004)[uVar13 - uVar14];
          cVar3 = (&DAT_1013cb471)[iVar8 + 4 >> 3];
          param_1[lVar5] = (&DAT_1013cb5e1)[(long)(char)(&DAT_1013cb471)[iVar8 + 3 >> 3] + uVar11];
          iVar8 = uVar7 - (int)cVar3;
          pbVar12 = param_1;
        }
        else {
          iVar8 = (uVar7 - bVar2) * 3;
          cVar3 = (&DAT_1013cb471)[iVar8 + 4 >> 3];
          cVar4 = (&DAT_1013cb471)[iVar8 + 3 >> 3];
          iVar8 = cVar3 + 1 >> 1;
          param_1[(long)iVar6 * -2] = (&DAT_1013cb5e1)[uVar13 + (long)iVar8];
          param_1[lVar5] = (&DAT_1013cb5e1)[(long)cVar4 + (ulong)(uint)bVar2];
          *param_1 = (&DAT_1013cb5e1)[uVar9 - (long)cVar3];
          iVar8 = (uint)bVar1 - iVar8;
        }
        *pbVar12 = (&DAT_1013cb5e1)[iVar8];
      }
      param_1 = param_1 + param_3;
      param_4 = param_4 + -1;
    } while (1 < param_4);
  }
  return;
}




void FUN_1010c3224(void)

{
  return;
}




void FUN_1010c3228(void)

{
  DAT_101dc1d38 = FUN_1010c336c;
  DAT_101dc1d40 = FUN_1010c356c;
  DAT_101dc1d48 = FUN_1010c3628;
  DAT_101dc1d60 = FUN_1010c3670;
  DAT_101dc1d68 = FUN_1010c376c;
  DAT_101dc1d70 = FUN_1010c3884;
  DAT_101dc1cf8 = FUN_1010c39f8;
  DAT_101dc1d00 = FUN_1010c3dc0;
  DAT_101dc1d78 = FUN_1010c41e4;
  DAT_101dc1d80 = FUN_1010c43a8;
  DAT_101dc1d08 = FUN_1010c4568;
  DAT_101dc1d10 = FUN_1010c47e8;
  DAT_101dc1d28 = FUN_1010c4a54;
  DAT_101dc1d18 = FUN_1010c4aec;
  DAT_101dc1d30 = FUN_1010c4cac;
  DAT_101dc1d20 = FUN_1010c4d64;
  return;
}




void FUN_1010c336c(undefined1 (*param_1) [16],undefined4 *param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  undefined2 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined4 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar81;
  undefined4 uVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar21 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar19 [16];
  undefined1 auVar28 [16];
  undefined1 auVar34 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar30 [16];
  undefined1 auVar37 [16];
  undefined1 auVar43 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [16];
  undefined1 auVar32 [16];
  undefined1 auVar39 [16];
  undefined1 auVar45 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar68 [16];
  undefined1 auVar78 [16];
  undefined1 auVar69 [16];
  undefined1 auVar79 [16];
  undefined1 auVar70 [16];
  undefined1 auVar80 [16];
  
  auVar48 = *param_1;
  auVar50 = param_1[1];
  auVar59 = NEON_ext(auVar48,auVar48,8,1);
  auVar13 = NEON_ext(auVar50,auVar50,8,1);
  auVar60._0_8_ = auVar59._0_8_;
  auVar60._8_8_ = auVar13._0_8_;
  auVar14._8_2_ = 0x4e7b;
  auVar14._0_8_ = 0x4e7b4e7b4e7b4e7b;
  auVar14._10_2_ = 0x4e7b;
  auVar14._12_2_ = 0x4e7b;
  auVar14._14_2_ = 0x4e7b;
  auVar82 = NEON_sqdmulh(auVar60,auVar14,2);
  auVar23._8_2_ = 0x4546;
  auVar23._0_8_ = 0x4546454645464546;
  auVar23._10_2_ = 0x4546;
  auVar23._12_2_ = 0x4546;
  auVar23._14_2_ = 0x4546;
  auVar88 = NEON_sqdmulh(auVar60,auVar23,2);
  auVar61._0_8_ =
       CONCAT26(auVar59._6_2_ + (auVar82._6_2_ >> 1),
                CONCAT24(auVar59._4_2_ + (auVar82._4_2_ >> 1),
                         CONCAT22(auVar59._2_2_ + (auVar82._2_2_ >> 1),
                                  auVar59._0_2_ + (auVar82._0_2_ >> 1))));
  auVar61._8_2_ = auVar13._0_2_ + (auVar82._8_2_ >> 1);
  auVar61._10_2_ = auVar13._2_2_ + (auVar82._10_2_ >> 1);
  auVar61._12_2_ = auVar13._4_2_ + (auVar82._12_2_ >> 1);
  auVar61._14_2_ = auVar13._6_2_ + (auVar82._14_2_ >> 1);
  auVar83._0_8_ = NEON_sqadd(auVar48._0_8_,auVar50._0_8_,2);
  uVar26 = NEON_sqsub(auVar48._0_8_,auVar50._0_8_,2);
  auVar48 = NEON_ext(auVar61,auVar61,8,1);
  uVar47 = NEON_sqsub(auVar88._0_8_,auVar48._0_8_,2);
  auVar48 = NEON_ext(auVar88,auVar88,8,1);
  auVar62._0_8_ = NEON_sqadd(auVar61._0_8_,auVar48._0_8_,2);
  auVar83._8_8_ = uVar26;
  auVar62._8_8_ = uVar47;
  auVar48 = NEON_sqadd(auVar83,auVar62,2);
  auVar49 = NEON_sqsub(auVar83,auVar62,2);
  auVar63 = NEON_ext(auVar49,auVar49,8,1);
  auVar64._0_8_ = auVar63._0_8_;
  auVar64._8_8_ = auVar49._0_8_;
  auVar59._0_8_ = auVar48._6_8_ << 0x30;
  auVar59._10_6_ = auVar48._10_6_;
  auVar59._8_2_ = auVar48._12_2_;
  uVar9 = auVar48._14_2_;
  auVar50._0_12_ = auVar59._0_12_;
  auVar50._12_2_ = uVar9;
  auVar50._14_2_ = uVar9;
  auVar82._0_10_ = CONCAT82(auVar50._8_8_,auVar49._2_2_) << 0x30;
  auVar82._12_4_ = auVar50._12_4_;
  auVar82._10_2_ = auVar49._4_2_;
  uVar12 = auVar49._6_2_;
  auVar13._0_14_ = auVar82._0_14_;
  auVar13._14_2_ = uVar12;
  auVar1._2_10_ = auVar64._6_10_;
  auVar1._0_2_ = auVar63._0_2_;
  auVar67._0_8_ = auVar1._0_8_ << 0x20;
  auVar67._10_6_ = auVar49._2_6_;
  auVar67._8_2_ = auVar48._2_2_;
  auVar69._0_12_ = auVar67._0_12_;
  auVar69._12_2_ = auVar63._2_2_;
  auVar69._14_2_ = uVar12;
  auVar65._4_12_ = auVar69._4_12_;
  auVar65._2_2_ = auVar48._8_2_;
  auVar65._0_2_ = auVar48._0_2_;
  auVar66._8_8_ = auVar69._8_8_;
  auVar66._0_8_ = CONCAT26(auVar49._0_2_,auVar65._0_6_);
  auVar68._12_4_ = auVar69._12_4_;
  auVar68._0_10_ = auVar66._0_10_;
  auVar68._10_2_ = auVar48._10_2_;
  auVar70._0_14_ = auVar68._0_14_;
  auVar70._14_2_ = auVar49._2_2_;
  auVar2._2_10_ = auVar13._6_10_;
  auVar2._0_2_ = auVar63._4_2_;
  auVar28._0_8_ = auVar2._0_8_ << 0x20;
  auVar28._10_6_ = auVar13._10_6_;
  auVar28._8_2_ = auVar48._6_2_;
  auVar88._0_12_ = auVar28._0_12_;
  auVar88._12_2_ = auVar63._6_2_;
  auVar88._14_2_ = uVar12;
  auVar27._4_12_ = auVar88._4_12_;
  auVar27._2_2_ = auVar48._12_2_;
  auVar27._0_2_ = auVar48._4_2_;
  auVar63._8_8_ = auVar88._8_8_;
  auVar63._0_8_ = CONCAT26(auVar49._4_2_,auVar27._0_6_);
  auVar49._12_4_ = auVar88._12_4_;
  auVar49._0_10_ = auVar63._0_10_;
  auVar49._10_2_ = uVar9;
  auVar48._0_14_ = auVar49._0_14_;
  auVar48._14_2_ = uVar12;
  auVar50 = NEON_ext(auVar70,auVar70,8,1);
  auVar48 = NEON_ext(auVar48,auVar48,8,1);
  auVar51._0_8_ = auVar50._0_8_;
  auVar51._8_8_ = auVar48._0_8_;
  auVar13 = NEON_sqdmulh(auVar51,auVar14,2);
  auVar59 = NEON_sqdmulh(auVar51,auVar23,2);
  auVar52._0_8_ =
       CONCAT26(auVar50._6_2_ + (auVar13._6_2_ >> 1),
                CONCAT24(auVar50._4_2_ + (auVar13._4_2_ >> 1),
                         CONCAT22(auVar50._2_2_ + (auVar13._2_2_ >> 1),
                                  auVar50._0_2_ + (auVar13._0_2_ >> 1))));
  auVar52._8_2_ = auVar48._0_2_ + (auVar13._8_2_ >> 1);
  auVar52._10_2_ = auVar48._2_2_ + (auVar13._10_2_ >> 1);
  auVar52._12_2_ = auVar48._4_2_ + (auVar13._12_2_ >> 1);
  auVar52._14_2_ = auVar48._6_2_ + (auVar13._14_2_ >> 1);
  auVar84._0_8_ = NEON_sqadd(auVar66._0_8_,auVar63._0_8_,2);
  uVar26 = NEON_sqsub(auVar66._0_8_,auVar63._0_8_,2);
  auVar48 = NEON_ext(auVar52,auVar52,8,1);
  uVar47 = NEON_sqsub(auVar59._0_8_,auVar48._0_8_,2);
  auVar48 = NEON_ext(auVar59,auVar59,8,1);
  auVar53._0_8_ = NEON_sqadd(auVar52._0_8_,auVar48._0_8_,2);
  auVar84._8_8_ = uVar26;
  auVar53._8_8_ = uVar47;
  auVar48 = NEON_sqadd(auVar84,auVar53,2);
  auVar50 = NEON_sqsub(auVar84,auVar53,2);
  auVar13 = NEON_ext(auVar50,auVar50,8,1);
  auVar29._0_8_ = auVar48._6_8_ << 0x30;
  sVar7 = auVar48._12_2_;
  auVar29._10_6_ = auVar48._10_6_;
  auVar29._8_2_ = sVar7;
  sVar8 = auVar48._14_2_;
  auVar31._0_12_ = auVar29._0_12_;
  auVar31._12_2_ = sVar8;
  auVar31._14_2_ = sVar8;
  auVar30._0_10_ = CONCAT82(auVar31._8_8_,auVar50._2_2_) << 0x30;
  sVar10 = auVar50._4_2_;
  auVar30._12_4_ = auVar31._12_4_;
  auVar30._10_2_ = sVar10;
  sVar11 = auVar50._6_2_;
  auVar32._0_14_ = auVar30._0_14_;
  auVar32._14_2_ = sVar11;
  auVar3._2_10_ = auVar32._6_10_;
  auVar3._0_2_ = auVar13._4_2_;
  auVar34._0_8_ = auVar3._0_8_ << 0x20;
  auVar34._10_6_ = auVar32._10_6_;
  auVar34._8_2_ = auVar48._6_2_;
  auVar35._0_12_ = auVar34._0_12_;
  auVar35._12_2_ = auVar13._6_2_;
  auVar35._14_2_ = sVar11;
  auVar33._4_12_ = auVar35._4_12_;
  auVar33._2_2_ = sVar7;
  auVar33._0_2_ = auVar48._4_2_;
  uVar46 = *param_2;
  uVar58 = param_2[8];
  uVar81 = param_2[0x10];
  uVar87 = param_2[0x18];
  auVar54._0_2_ = (ushort)(byte)uVar46 + (auVar48._0_2_ >> 3);
  auVar54._2_2_ = (ushort)(byte)((uint)uVar46 >> 8) + (auVar48._8_2_ >> 3);
  auVar54._4_2_ = (ushort)(byte)((uint)uVar46 >> 0x10) + (auVar13._0_2_ >> 3);
  auVar54._6_2_ = (ushort)(byte)((uint)uVar46 >> 0x18) + (auVar50._0_2_ >> 3);
  auVar54._8_2_ = (ushort)(byte)uVar58 + (auVar48._2_2_ >> 3);
  auVar54._10_2_ = (ushort)(byte)((uint)uVar58 >> 8) + (auVar48._10_2_ >> 3);
  auVar54._12_2_ = (ushort)(byte)((uint)uVar58 >> 0x10) + (auVar13._2_2_ >> 3);
  auVar54._14_2_ = (ushort)(byte)((uint)uVar58 >> 0x18) + (auVar50._2_2_ >> 3);
  auVar85._0_2_ = (ushort)(byte)uVar81 + (auVar48._4_2_ >> 3);
  auVar85._2_2_ = (ushort)(byte)((uint)uVar81 >> 8) + (sVar7 >> 3);
  auVar85._4_2_ = (ushort)(byte)((uint)uVar81 >> 0x10) + (auVar13._4_2_ >> 3);
  auVar85._6_2_ = (ushort)(byte)((uint)uVar81 >> 0x18) + (sVar10 >> 3);
  auVar85._8_2_ = (ushort)(byte)uVar87 + (auVar48._6_2_ >> 3);
  auVar85._10_2_ = (ushort)(byte)((uint)uVar87 >> 8) + (sVar8 >> 3);
  auVar85._12_2_ = (ushort)(byte)((uint)uVar87 >> 0x10) + (auVar13._6_2_ >> 3);
  auVar85._14_2_ = (ushort)(byte)((uint)uVar87 >> 0x18) + (sVar11 >> 3);
  uVar26 = NEON_sqxtun(CONCAT26(sVar10,auVar33._0_6_),auVar54,2);
  *param_2 = (int)uVar26;
  param_2[8] = (int)((ulong)uVar26 >> 0x20);
  uVar26 = NEON_sqxtun(uVar26,auVar85,2);
  param_2[0x10] = (int)uVar26;
  param_2[0x18] = (int)((ulong)uVar26 >> 0x20);
  if (param_3 != 0) {
    auVar48 = param_1[2];
    auVar50 = param_1[3];
    auVar13 = NEON_ext(auVar48,auVar48,8,1);
    auVar59 = NEON_ext(auVar50,auVar50,8,1);
    auVar71._0_8_ = auVar13._0_8_;
    auVar71._8_8_ = auVar59._0_8_;
    auVar82 = NEON_sqdmulh(auVar71,auVar14,2);
    auVar88 = NEON_sqdmulh(auVar71,auVar23,2);
    auVar72._0_8_ =
         CONCAT26(auVar13._6_2_ + (auVar82._6_2_ >> 1),
                  CONCAT24(auVar13._4_2_ + (auVar82._4_2_ >> 1),
                           CONCAT22(auVar13._2_2_ + (auVar82._2_2_ >> 1),
                                    auVar13._0_2_ + (auVar82._0_2_ >> 1))));
    auVar72._8_2_ = auVar59._0_2_ + (auVar82._8_2_ >> 1);
    auVar72._10_2_ = auVar59._2_2_ + (auVar82._10_2_ >> 1);
    auVar72._12_2_ = auVar59._4_2_ + (auVar82._12_2_ >> 1);
    auVar72._14_2_ = auVar59._6_2_ + (auVar82._14_2_ >> 1);
    auVar86._0_8_ = NEON_sqadd(auVar48._0_8_,auVar50._0_8_,2);
    uVar26 = NEON_sqsub(auVar48._0_8_,auVar50._0_8_,2);
    auVar48 = NEON_ext(auVar72,auVar72,8,1);
    uVar47 = NEON_sqsub(auVar88._0_8_,auVar48._0_8_,2);
    auVar48 = NEON_ext(auVar88,auVar88,8,1);
    auVar73._0_8_ = NEON_sqadd(auVar72._0_8_,auVar48._0_8_,2);
    auVar86._8_8_ = uVar26;
    auVar73._8_8_ = uVar47;
    auVar48 = NEON_sqadd(auVar86,auVar73,2);
    auVar50 = NEON_sqsub(auVar86,auVar73,2);
    auVar13 = NEON_ext(auVar50,auVar50,8,1);
    auVar74._0_8_ = auVar13._0_8_;
    auVar74._8_8_ = auVar50._0_8_;
    auVar36._0_8_ = auVar48._6_8_ << 0x30;
    auVar36._10_6_ = auVar48._10_6_;
    auVar36._8_2_ = auVar48._12_2_;
    uVar9 = auVar48._14_2_;
    auVar38._0_12_ = auVar36._0_12_;
    auVar38._12_2_ = uVar9;
    auVar38._14_2_ = uVar9;
    auVar37._0_10_ = CONCAT82(auVar38._8_8_,auVar50._2_2_) << 0x30;
    auVar37._12_4_ = auVar38._12_4_;
    auVar37._10_2_ = auVar50._4_2_;
    uVar12 = auVar50._6_2_;
    auVar39._0_14_ = auVar37._0_14_;
    auVar39._14_2_ = uVar12;
    auVar4._2_10_ = auVar74._6_10_;
    auVar4._0_2_ = auVar13._0_2_;
    auVar77._0_8_ = auVar4._0_8_ << 0x20;
    auVar77._10_6_ = auVar50._2_6_;
    auVar77._8_2_ = auVar48._2_2_;
    auVar79._0_12_ = auVar77._0_12_;
    auVar79._12_2_ = auVar13._2_2_;
    auVar79._14_2_ = uVar12;
    auVar75._4_12_ = auVar79._4_12_;
    auVar75._2_2_ = auVar48._8_2_;
    auVar75._0_2_ = auVar48._0_2_;
    auVar76._8_8_ = auVar79._8_8_;
    auVar76._0_8_ = CONCAT26(auVar50._0_2_,auVar75._0_6_);
    auVar78._12_4_ = auVar79._12_4_;
    auVar78._0_10_ = auVar76._0_10_;
    auVar78._10_2_ = auVar48._10_2_;
    auVar80._0_14_ = auVar78._0_14_;
    auVar80._14_2_ = auVar50._2_2_;
    auVar5._2_10_ = auVar39._6_10_;
    auVar5._0_2_ = auVar13._4_2_;
    auVar42._0_8_ = auVar5._0_8_ << 0x20;
    auVar42._10_6_ = auVar39._10_6_;
    auVar42._8_2_ = auVar48._6_2_;
    auVar44._0_12_ = auVar42._0_12_;
    auVar44._12_2_ = auVar13._6_2_;
    auVar44._14_2_ = uVar12;
    auVar40._4_12_ = auVar44._4_12_;
    auVar40._2_2_ = auVar48._12_2_;
    auVar40._0_2_ = auVar48._4_2_;
    auVar41._8_8_ = auVar44._8_8_;
    auVar41._0_8_ = CONCAT26(auVar50._4_2_,auVar40._0_6_);
    auVar43._12_4_ = auVar44._12_4_;
    auVar43._0_10_ = auVar41._0_10_;
    auVar43._10_2_ = uVar9;
    auVar45._0_14_ = auVar43._0_14_;
    auVar45._14_2_ = uVar12;
    auVar13 = NEON_ext(auVar80,auVar80,8,1);
    auVar59 = NEON_ext(auVar45,auVar45,8,1);
    auVar55._0_8_ = auVar13._0_8_;
    auVar55._8_8_ = auVar59._0_8_;
    auVar48 = NEON_sqdmulh(auVar55,auVar14,2);
    auVar50 = NEON_sqdmulh(auVar55,auVar23,2);
    auVar56._0_8_ =
         CONCAT26(auVar13._6_2_ + (auVar48._6_2_ >> 1),
                  CONCAT24(auVar13._4_2_ + (auVar48._4_2_ >> 1),
                           CONCAT22(auVar13._2_2_ + (auVar48._2_2_ >> 1),
                                    auVar13._0_2_ + (auVar48._0_2_ >> 1))));
    auVar56._8_2_ = auVar59._0_2_ + (auVar48._8_2_ >> 1);
    auVar56._10_2_ = auVar59._2_2_ + (auVar48._10_2_ >> 1);
    auVar56._12_2_ = auVar59._4_2_ + (auVar48._12_2_ >> 1);
    auVar56._14_2_ = auVar59._6_2_ + (auVar48._14_2_ >> 1);
    auVar15._0_8_ = NEON_sqadd(auVar76._0_8_,auVar41._0_8_,2);
    uVar26 = NEON_sqsub(auVar76._0_8_,auVar41._0_8_,2);
    auVar48 = NEON_ext(auVar56,auVar56,8,1);
    uVar47 = NEON_sqsub(auVar50._0_8_,auVar48._0_8_,2);
    auVar48 = NEON_ext(auVar50,auVar50,8,1);
    auVar24._0_8_ = NEON_sqadd(auVar56._0_8_,auVar48._0_8_,2);
    auVar15._8_8_ = uVar26;
    auVar24._8_8_ = uVar47;
    auVar13 = NEON_sqadd(auVar15,auVar24,2);
    auVar48 = NEON_sqsub(auVar15,auVar24,2);
    auVar50 = NEON_ext(auVar48,auVar48,8,1);
    auVar16._0_8_ = auVar48._6_8_ << 0x30;
    sVar7 = auVar13._4_2_;
    auVar16._10_6_ = auVar48._10_6_;
    auVar16._8_2_ = sVar7;
    sVar8 = auVar13._6_2_;
    auVar18._14_2_ = auVar48._14_2_;
    auVar18._0_12_ = auVar16._0_12_;
    auVar18._12_2_ = sVar8;
    auVar17._0_10_ = CONCAT82(auVar18._8_8_,auVar50._2_2_) << 0x30;
    sVar10 = auVar50._4_2_;
    auVar17._12_4_ = auVar18._12_4_;
    auVar17._10_2_ = sVar10;
    sVar11 = auVar50._6_2_;
    auVar19._0_14_ = auVar17._0_14_;
    auVar19._14_2_ = sVar11;
    auVar6._2_10_ = auVar19._6_10_;
    auVar6._0_2_ = sVar10;
    auVar21._0_8_ = auVar6._0_8_ << 0x20;
    auVar21._10_6_ = auVar19._10_6_;
    auVar21._8_2_ = sVar8;
    auVar22._0_12_ = auVar21._0_12_;
    auVar22._12_2_ = sVar11;
    auVar22._14_2_ = sVar11;
    auVar20._4_12_ = auVar22._4_12_;
    auVar20._2_2_ = auVar13._12_2_;
    auVar20._0_2_ = sVar7;
    uVar46 = param_2[1];
    uVar58 = param_2[9];
    uVar81 = param_2[0x11];
    uVar87 = param_2[0x19];
    auVar25._0_2_ = (ushort)(byte)uVar46 + (auVar13._0_2_ >> 3);
    auVar25._2_2_ = (ushort)(byte)((uint)uVar46 >> 8) + (auVar13._8_2_ >> 3);
    auVar25._4_2_ = (ushort)(byte)((uint)uVar46 >> 0x10) + (auVar50._0_2_ >> 3);
    auVar25._6_2_ = (ushort)(byte)((uint)uVar46 >> 0x18) + (auVar48._0_2_ >> 3);
    auVar25._8_2_ = (ushort)(byte)uVar58 + (auVar13._2_2_ >> 3);
    auVar25._10_2_ = (ushort)(byte)((uint)uVar58 >> 8) + (auVar13._10_2_ >> 3);
    auVar25._12_2_ = (ushort)(byte)((uint)uVar58 >> 0x10) + (auVar50._2_2_ >> 3);
    auVar25._14_2_ = (ushort)(byte)((uint)uVar58 >> 0x18) + (auVar48._2_2_ >> 3);
    auVar57._0_2_ = (ushort)(byte)uVar81 + (sVar7 >> 3);
    auVar57._2_2_ = (ushort)(byte)((uint)uVar81 >> 8) + (auVar13._12_2_ >> 3);
    auVar57._4_2_ = (ushort)(byte)((uint)uVar81 >> 0x10) + (sVar10 >> 3);
    auVar57._6_2_ = (ushort)(byte)((uint)uVar81 >> 0x18) + (auVar48._4_2_ >> 3);
    auVar57._8_2_ = (ushort)(byte)uVar87 + (sVar8 >> 3);
    auVar57._10_2_ = (ushort)(byte)((uint)uVar87 >> 8) + (auVar13._14_2_ >> 3);
    auVar57._12_2_ = (ushort)(byte)((uint)uVar87 >> 0x10) + (sVar11 >> 3);
    auVar57._14_2_ = (ushort)(byte)((uint)uVar87 >> 0x18) + (auVar48._6_2_ >> 3);
    uVar26 = NEON_sqxtun(CONCAT26(auVar48._4_2_,auVar20._0_6_),auVar25,2);
    param_2[1] = (int)uVar26;
    param_2[9] = (int)((ulong)uVar26 >> 0x20);
    uVar26 = NEON_sqxtun(uVar26,auVar57,2);
    param_2[0x11] = (int)uVar26;
    param_2[0x19] = (int)((ulong)uVar26 >> 0x20);
  }
  return;
}




void FUN_1010c356c(undefined2 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined2 uVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  short sVar14;
  ushort uVar15;
  short sVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar3 = *param_1;
  uVar10 = (undefined2)((uint)((short)param_1[4] * 0x8a8c) >> 0x10);
  uVar17 = CONCAT26(uVar10,CONCAT24(uVar10,CONCAT22(uVar10,uVar10)));
  uVar10 = (undefined2)((uint)((short)param_1[4] * 0x14e7b) >> 0x10);
  uVar2 = (short)param_1[1] * 0x8a8c;
  uVar1 = (short)param_1[1] * 0x14e7b >> 0x10;
  uVar6 = NEON_sqadd(CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3))),
                     CONCAT44(-(uVar2 >> 0x10),uVar2 & 0xffff0000 | uVar1 & 0xffff) & 0xffffffffffff
                     | (ulong)-uVar1 << 0x30,2);
  uVar21 = NEON_sqadd(uVar6,CONCAT26(uVar10,CONCAT24(uVar10,CONCAT22(uVar10,uVar10))),2);
  uVar22 = NEON_sqadd(uVar6,uVar17,2);
  uVar18 = NEON_sqsub(uVar6,uVar17,2);
  uVar6 = NEON_sqsub(uVar6,CONCAT26(uVar10,CONCAT24(uVar10,CONCAT22(uVar10,uVar10))),2);
  uVar5 = *param_2;
  uVar7 = param_2[8];
  uVar13 = (ushort)uVar7;
  uVar15 = (ushort)((uint)uVar7 >> 0x10);
  uVar7 = param_2[0x10];
  uVar9 = param_2[0x18];
  uVar19 = (ushort)uVar9;
  uVar20 = (ushort)((uint)uVar9 >> 0x10);
  sVar11 = (ushort)(byte)uVar5 + ((short)uVar21 >> 3);
  sVar12 = (ushort)(byte)((uint)uVar5 >> 8) + ((short)((ulong)uVar21 >> 0x10) >> 3);
  sVar14 = (ushort)(byte)((uint)uVar5 >> 0x10) + ((short)((ulong)uVar21 >> 0x20) >> 3);
  sVar16 = (ushort)(byte)((uint)uVar5 >> 0x18) + (short)((long)uVar21 >> 0x33);
  auVar4._2_2_ = sVar12;
  auVar4._0_2_ = sVar11;
  auVar4._4_2_ = sVar14;
  auVar4._6_2_ = sVar16;
  auVar4._8_2_ = (uVar13 & 0xff) + ((short)uVar22 >> 3);
  auVar4._10_2_ = (uVar13 >> 8) + ((short)((ulong)uVar22 >> 0x10) >> 3);
  auVar4._12_2_ = (uVar15 & 0xff) + ((short)((ulong)uVar22 >> 0x20) >> 3);
  auVar4._14_2_ = (uVar15 >> 8) + (short)((long)uVar22 >> 0x33);
  uVar17 = NEON_sqxtun(CONCAT26(sVar16,CONCAT24(sVar14,CONCAT22(sVar12,sVar11))),auVar4,2);
  *param_2 = (int)uVar17;
  param_2[8] = (int)((ulong)uVar17 >> 0x20);
  auVar8._2_2_ = (ushort)(byte)((uint)uVar7 >> 8) + ((short)((ulong)uVar18 >> 0x10) >> 3);
  auVar8._0_2_ = (ushort)(byte)uVar7 + ((short)uVar18 >> 3);
  auVar8._4_2_ = (ushort)(byte)((uint)uVar7 >> 0x10) + ((short)((ulong)uVar18 >> 0x20) >> 3);
  auVar8._6_2_ = (ushort)(byte)((uint)uVar7 >> 0x18) + (short)((long)uVar18 >> 0x33);
  auVar8._8_2_ = (uVar19 & 0xff) + ((short)uVar6 >> 3);
  auVar8._10_2_ = (uVar19 >> 8) + ((short)((ulong)uVar6 >> 0x10) >> 3);
  auVar8._12_2_ = (uVar20 & 0xff) + ((short)((ulong)uVar6 >> 0x20) >> 3);
  auVar8._14_2_ = (uVar20 >> 8) + (short)((long)uVar6 >> 0x33);
  uVar6 = NEON_sqxtun(uVar17,auVar8,2);
  param_2[0x10] = (int)uVar6;
  param_2[0x18] = (int)((ulong)uVar6 >> 0x20);
  return;
}




void FUN_1010c3628(short *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  short sVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  
  sVar1 = *param_1;
  uVar3 = *param_2;
  uVar4 = param_2[8];
  uVar9 = (ushort)uVar4;
  uVar10 = (ushort)((uint)uVar4 >> 0x10);
  uVar4 = param_2[0x10];
  uVar6 = param_2[0x18];
  uVar11 = (ushort)uVar6;
  uVar12 = (ushort)((uint)uVar6 >> 0x10);
  sVar7 = sVar1 >> 3;
  auVar2._2_2_ = (ushort)(byte)((uint)uVar3 >> 8) + sVar7;
  auVar2._0_2_ = (ushort)(byte)uVar3 + sVar7;
  auVar2._4_2_ = (ushort)(byte)((uint)uVar3 >> 0x10) + sVar7;
  auVar2._6_2_ = (ushort)(byte)((uint)uVar3 >> 0x18) + sVar7;
  auVar2._8_2_ = (uVar9 & 0xff) + sVar7;
  auVar2._10_2_ = (uVar9 >> 8) + sVar7;
  auVar2._12_2_ = (uVar10 & 0xff) + sVar7;
  auVar2._14_2_ = (uVar10 >> 8) + sVar7;
  uVar8 = NEON_sqxtun(CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))),auVar2,2);
  *param_2 = (int)uVar8;
  param_2[8] = (int)((ulong)uVar8 >> 0x20);
  auVar5._2_2_ = (ushort)(byte)((uint)uVar4 >> 8) + sVar7;
  auVar5._0_2_ = (ushort)(byte)uVar4 + sVar7;
  auVar5._4_2_ = (ushort)(byte)((uint)uVar4 >> 0x10) + sVar7;
  auVar5._6_2_ = (ushort)(byte)((uint)uVar4 >> 0x18) + sVar7;
  auVar5._8_2_ = (uVar11 & 0xff) + sVar7;
  auVar5._10_2_ = (uVar11 >> 8) + sVar7;
  auVar5._12_2_ = (uVar12 & 0xff) + sVar7;
  auVar5._14_2_ = (uVar12 >> 8) + sVar7;
  uVar8 = NEON_sqxtun(uVar8,auVar5,2);
  param_2[0x10] = (int)uVar8;
  param_2[0x18] = (int)((ulong)uVar8 >> 0x20);
  return;
}




void FUN_1010c3670(undefined8 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  undefined2 uVar18;
  short sVar19;
  undefined2 uVar20;
  short sVar25;
  int iVar21;
  short sVar26;
  undefined8 uVar22;
  short sVar28;
  int iVar27;
  int iVar29;
  int iVar30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar31;
  short sVar32;
  short sVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  undefined2 uVar37;
  undefined2 uVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  undefined2 uVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  int iVar47;
  int iVar49;
  int iVar50;
  int iVar51;
  undefined1 auVar48 [16];
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  
  uVar2 = *param_1;
  sVar16 = (short)((ulong)uVar2 >> 0x10);
  sVar17 = (short)((ulong)uVar2 >> 0x20);
  sVar19 = (short)((ulong)uVar2 >> 0x30);
  uVar22 = param_1[1];
  uVar8 = param_1[2];
  sVar31 = (short)((ulong)uVar8 >> 0x10);
  sVar32 = (short)((ulong)uVar8 >> 0x20);
  sVar33 = (short)((ulong)uVar8 >> 0x30);
  uVar14 = param_1[3];
  sVar39 = (short)((ulong)uVar14 >> 0x10);
  sVar40 = (short)((ulong)uVar14 >> 0x20);
  sVar41 = (short)((ulong)uVar14 >> 0x30);
  iVar47 = (int)(short)uVar14 + (int)(short)uVar2;
  iVar49 = (int)sVar39 + (int)sVar16;
  iVar50 = (int)sVar40 + (int)sVar17;
  iVar51 = (int)sVar41 + (int)sVar19;
  sVar25 = (short)((ulong)uVar22 >> 0x10);
  sVar26 = (short)((ulong)uVar22 >> 0x20);
  sVar28 = (short)((ulong)uVar22 >> 0x30);
  iVar52 = (int)(short)uVar8 + (int)(short)uVar22;
  iVar53 = (int)sVar31 + (int)sVar25;
  iVar54 = (int)sVar32 + (int)sVar26;
  iVar55 = (int)sVar33 + (int)sVar28;
  iVar21 = (int)(short)uVar22 - (int)(short)uVar8;
  iVar27 = (int)sVar25 - (int)sVar31;
  iVar29 = (int)sVar26 - (int)sVar32;
  iVar30 = (int)sVar28 - (int)sVar33;
  iVar1 = (int)(short)uVar2 - (int)(short)uVar14;
  iVar3 = (int)sVar16 - (int)sVar39;
  iVar4 = (int)sVar17 - (int)sVar40;
  iVar5 = (int)sVar19 - (int)sVar41;
  iVar7 = iVar47 + iVar52;
  iVar9 = iVar49 + iVar53;
  uVar34 = (undefined2)((uint)iVar9 >> 0x10);
  iVar10 = iVar50 + iVar54;
  uVar35 = (undefined2)iVar10;
  uVar36 = (undefined2)((uint)iVar10 >> 0x10);
  iVar10 = iVar51 + iVar55;
  uVar37 = (undefined2)iVar10;
  uVar38 = (undefined2)((uint)iVar10 >> 0x10);
  iVar13 = iVar1 + iVar21;
  iVar10 = iVar3 + iVar27;
  uVar42 = (undefined2)((uint)iVar10 >> 0x10);
  iVar15 = iVar4 + iVar29;
  uVar43 = (undefined2)iVar15;
  uVar44 = (undefined2)((uint)iVar15 >> 0x10);
  iVar15 = iVar5 + iVar30;
  uVar45 = (undefined2)iVar15;
  uVar46 = (undefined2)((uint)iVar15 >> 0x10);
  auVar48._0_4_ = iVar47 - iVar52;
  auVar48._4_4_ = iVar49 - iVar53;
  auVar48._8_4_ = iVar50 - iVar54;
  auVar48._12_4_ = iVar51 - iVar55;
  iVar1 = iVar1 - iVar21;
  iVar3 = iVar3 - iVar27;
  uVar18 = (undefined2)iVar3;
  uVar20 = (undefined2)((uint)iVar3 >> 0x10);
  iVar4 = iVar4 - iVar29;
  iVar5 = iVar5 - iVar30;
  auVar24._4_2_ = (short)iVar9;
  auVar24._0_4_ = iVar7;
  auVar24._6_2_ = uVar34;
  auVar24._8_2_ = uVar35;
  auVar24._10_2_ = uVar36;
  auVar24._12_2_ = uVar37;
  auVar24._14_2_ = uVar38;
  auVar23 = NEON_ext(auVar48,auVar24,8,1);
  auVar6._4_2_ = (short)iVar9;
  auVar6._0_4_ = iVar7;
  auVar6._6_2_ = uVar34;
  auVar6._8_2_ = uVar35;
  auVar6._10_2_ = uVar36;
  auVar6._12_2_ = uVar37;
  auVar6._14_2_ = uVar38;
  auVar24 = NEON_ext(auVar6,auVar23,8,1);
  uVar35 = (undefined2)((uint)auVar48._0_4_ >> 0x10);
  auVar23._4_2_ = uVar18;
  auVar23._0_4_ = iVar1;
  auVar23._6_2_ = uVar20;
  auVar23._8_2_ = (short)iVar4;
  auVar23._10_2_ = (short)((uint)iVar4 >> 0x10);
  auVar23._12_2_ = (short)iVar5;
  auVar23._14_2_ = (short)((uint)iVar5 >> 0x10);
  auVar11._4_2_ = (short)iVar10;
  auVar11._0_4_ = iVar13;
  auVar11._6_2_ = uVar42;
  auVar11._8_2_ = uVar43;
  auVar11._10_2_ = uVar44;
  auVar11._12_2_ = uVar45;
  auVar11._14_2_ = uVar46;
  auVar23 = NEON_ext(auVar23,auVar11,8,1);
  auVar12._4_2_ = (short)iVar10;
  auVar12._0_4_ = iVar13;
  auVar12._6_2_ = uVar42;
  auVar12._8_2_ = uVar43;
  auVar12._10_2_ = uVar44;
  auVar12._12_2_ = uVar45;
  auVar12._14_2_ = uVar46;
  auVar23 = NEON_ext(auVar12,auVar23,8,1);
  uVar36 = (undefined2)((uint)iVar1 >> 0x10);
  iVar15 = (int)(CONCAT24((short)((uint)auVar48._4_4_ >> 0x10),CONCAT22((short)auVar48._4_4_,uVar35)
                         ) >> 0x10);
  iVar21 = (int)(CONCAT24(uVar20,CONCAT22(uVar18,uVar36)) >> 0x10);
  iVar4 = (int)(CONCAT24(uVar35,CONCAT22((short)auVar48._0_4_,uVar34)) >> 0x10) + 3;
  iVar5 = (int)(CONCAT24(uVar36,CONCAT22((short)iVar1,uVar42)) >> 0x10) + 3;
  iVar27 = iVar7 + 3 + auVar24._4_4_;
  iVar29 = iVar13 + 3 + auVar23._4_4_;
  iVar30 = iVar4 + auVar24._12_4_;
  iVar47 = iVar5 + auVar23._12_4_;
  iVar49 = auVar24._0_4_ + iVar9;
  iVar50 = auVar23._0_4_ + iVar10;
  iVar51 = auVar24._8_4_ + iVar15;
  iVar52 = auVar23._8_4_ + iVar21;
  iVar9 = iVar9 - auVar24._0_4_;
  iVar10 = iVar10 - auVar23._0_4_;
  iVar15 = iVar15 - auVar24._8_4_;
  iVar21 = iVar21 - auVar23._8_4_;
  iVar1 = (iVar7 + 3) - auVar24._4_4_;
  iVar3 = (iVar13 + 3) - auVar23._4_4_;
  iVar4 = iVar4 - auVar24._12_4_;
  iVar5 = iVar5 - auVar23._12_4_;
  *param_2 = (short)((uint)(iVar27 + iVar49) >> 3);
  param_2[0x10] = (short)((uint)(iVar1 + iVar9) >> 3);
  param_2[0x20] = (short)((uint)(iVar27 - iVar49) >> 3);
  param_2[0x30] = (short)((uint)(iVar1 - iVar9) >> 3);
  param_2[0x40] = (short)((uint)(iVar29 + iVar50) >> 3);
  param_2[0x50] = (short)((uint)(iVar3 + iVar10) >> 3);
  param_2[0x60] = (short)((uint)(iVar29 - iVar50) >> 3);
  param_2[0x70] = (short)((uint)(iVar3 - iVar10) >> 3);
  param_2[0x80] = (short)((uint)(iVar30 + iVar51) >> 3);
  param_2[0x90] = (short)((uint)(iVar4 + iVar15) >> 3);
  param_2[0xa0] = (short)((uint)(iVar30 - iVar51) >> 3);
  param_2[0xb0] = (short)((uint)(iVar4 - iVar15) >> 3);
  param_2[0xc0] = (short)((uint)(iVar47 + iVar52) >> 3);
  param_2[0xd0] = (short)((uint)(iVar5 + iVar21) >> 3);
  param_2[0xe0] = (short)((uint)(iVar47 - iVar52) >> 3);
  param_2[0xf0] = (short)((uint)(iVar5 - iVar21) >> 3);
  return;
}




void FUN_1010c376c(undefined1 (*param_1) [16],int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pauVar2 = (undefined1 (*) [16])((long)param_1 + (long)param_2 * -2);
  pauVar4 = (undefined1 (*) [16])((long)pauVar2 - (long)param_2);
  pauVar1 = (undefined1 (*) [16])(*param_1 + (long)param_2 * 2);
  pauVar3 = (undefined1 (*) [16])((long)pauVar1 - (long)param_2);
  auVar5 = NEON_uabd(*(undefined1 (*) [16])((long)pauVar2 + (long)param_2 * -2),*pauVar4,1);
  auVar7 = NEON_uabd(*pauVar4,*pauVar2,1);
  auVar8 = NEON_uabd(*pauVar2,*(undefined1 (*) [16])(*pauVar2 + param_2),1);
  auVar6 = NEON_uabd(*(undefined1 (*) [16])(*pauVar1 + param_2),*pauVar1,1);
  auVar9 = NEON_uabd(*pauVar1,*pauVar3,1);
  auVar10 = NEON_uabd(*pauVar3,*param_1,1);
  auVar5 = NEON_umax(auVar5,auVar7,1);
  auVar6 = NEON_umax(auVar8,auVar6,1);
  auVar7 = NEON_umax(auVar9,auVar10,1);
  auVar5 = NEON_umax(auVar5,auVar6,1);
  NEON_umax(auVar5,auVar7,1);
  auVar5 = NEON_uabd(*(undefined1 (*) [16])(*pauVar2 + param_2),*param_1,1);
  auVar6 = NEON_uabd(*pauVar2,*pauVar3,1);
  auVar5 = NEON_uqadd(auVar5,auVar5,1);
  auVar7[0] = auVar6[0] >> 1;
  auVar7[1] = auVar6[1] >> 1;
  auVar7[2] = auVar6[2] >> 1;
  auVar7[3] = auVar6[3] >> 1;
  auVar7[4] = auVar6[4] >> 1;
  auVar7[5] = auVar6[5] >> 1;
  auVar7[6] = auVar6[6] >> 1;
  auVar7[7] = auVar6[7] >> 1;
  auVar7[8] = auVar6[8] >> 1;
  auVar7[9] = auVar6[9] >> 1;
  auVar7[10] = auVar6[10] >> 1;
  auVar7[0xb] = auVar6[0xb] >> 1;
  auVar7[0xc] = auVar6[0xc] >> 1;
  auVar7[0xd] = auVar6[0xd] >> 1;
  auVar7[0xe] = auVar6[0xe] >> 1;
  auVar7[0xf] = auVar6[0xf] >> 1;
  NEON_uqadd(auVar5,auVar7,1);
  FUN_1010c4db0(&local_50,&local_60,&uStack_70,&local_80,&uStack_90,&local_a0);
  *(undefined8 *)(*pauVar4 + 8) = uStack_48;
  *(undefined8 *)*pauVar4 = local_50;
  *(undefined8 *)(*pauVar2 + 8) = uStack_58;
  *(undefined8 *)*pauVar2 = local_60;
  ((undefined8 *)((long)param_1 - (long)param_2))[1] = uStack_68;
  *(undefined8 *)((long)param_1 - (long)param_2) = uStack_70;
  *(undefined8 *)(*param_1 + 8) = uStack_78;
  *(undefined8 *)*param_1 = local_80;
  *(undefined8 *)(*pauVar3 + 8) = uStack_88;
  *(undefined8 *)*pauVar3 = uStack_90;
  *(undefined8 *)(*pauVar1 + 8) = uStack_98;
  *(undefined8 *)*pauVar1 = local_a0;
  return;
}




void FUN_1010c3884(undefined1 (*param_1) [16],uint param_2,byte param_3,byte param_4,byte param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  bool bVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  byte bVar18;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar19 [16];
  byte bVar36;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte bVar37;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined1 auVar38 [16];
  byte bVar54;
  undefined1 auVar39 [16];
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar91;
  undefined8 uVar92;
  undefined1 auVar93 [16];
  
  puVar1 = (undefined8 *)(*param_1 + (long)(int)param_2 * 2);
  uVar15 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  auVar19 = *param_1;
  auVar38 = *(undefined1 (*) [16])((long)puVar1 - (long)(int)param_2);
  uVar91 = puVar1[1];
  bVar63 = (byte)uVar91;
  bVar64 = (byte)((ulong)uVar91 >> 8);
  bVar65 = (byte)((ulong)uVar91 >> 0x10);
  bVar66 = (byte)((ulong)uVar91 >> 0x18);
  bVar67 = (byte)((ulong)uVar91 >> 0x20);
  bVar68 = (byte)((ulong)uVar91 >> 0x28);
  bVar69 = (byte)((ulong)uVar91 >> 0x30);
  bVar70 = (byte)((ulong)uVar91 >> 0x38);
  uVar91 = *puVar1;
  uVar55 = (undefined1)uVar91;
  uVar56 = (undefined1)((ulong)uVar91 >> 8);
  uVar57 = (undefined1)((ulong)uVar91 >> 0x10);
  uVar58 = (undefined1)((ulong)uVar91 >> 0x18);
  uVar59 = (undefined1)((ulong)uVar91 >> 0x20);
  uVar60 = (undefined1)((ulong)uVar91 >> 0x28);
  uVar61 = (undefined1)((ulong)uVar91 >> 0x30);
  uVar62 = (undefined1)((ulong)uVar91 >> 0x38);
  auVar71 = *(undefined1 (*) [16])((long)puVar1 + (long)(int)param_2);
  pauVar16 = (undefined1 (*) [16])(*param_1 + (long)(int)param_2 * 4);
  iVar17 = -3;
  do {
    auVar73 = *pauVar16;
    puVar2 = (ulong *)((long)pauVar16 + (uVar15 - (long)(int)param_2));
    uVar13 = puVar2[1];
    bVar77 = (byte)(uVar13 >> 8);
    bVar78 = (byte)(uVar13 >> 0x10);
    bVar79 = (byte)(uVar13 >> 0x18);
    bVar80 = (byte)(uVar13 >> 0x20);
    bVar81 = (byte)(uVar13 >> 0x28);
    bVar82 = (byte)(uVar13 >> 0x30);
    bVar83 = (byte)(uVar13 >> 0x38);
    auVar93[1] = uVar56;
    auVar93[0] = uVar55;
    auVar93[2] = uVar57;
    auVar93[3] = uVar58;
    auVar93[4] = uVar59;
    auVar93[5] = uVar60;
    auVar93[6] = uVar61;
    auVar93[7] = uVar62;
    auVar93[8] = bVar63;
    auVar93[9] = bVar64;
    auVar93[10] = bVar65;
    auVar93[0xb] = bVar66;
    auVar93[0xc] = bVar67;
    auVar93[0xd] = bVar68;
    auVar93[0xe] = bVar69;
    auVar93[0xf] = bVar70;
    auVar84 = NEON_uabd(auVar38,auVar93,1);
    auVar4[1] = uVar56;
    auVar4[0] = uVar55;
    auVar4[2] = uVar57;
    auVar4[3] = uVar58;
    auVar4[4] = uVar59;
    auVar4[5] = uVar60;
    auVar4[6] = uVar61;
    auVar4[7] = uVar62;
    auVar4[8] = bVar63;
    auVar4[9] = bVar64;
    auVar4[10] = bVar65;
    auVar4[0xb] = bVar66;
    auVar4[0xc] = bVar67;
    auVar4[0xd] = bVar68;
    auVar4[0xe] = bVar69;
    auVar4[0xf] = bVar70;
    auVar87 = NEON_uabd(auVar4,auVar71,1);
    auVar5[1] = uVar56;
    auVar5[0] = uVar55;
    auVar5[2] = uVar57;
    auVar5[3] = uVar58;
    auVar5[4] = uVar59;
    auVar5[5] = uVar60;
    auVar5[6] = uVar61;
    auVar5[7] = uVar62;
    auVar5[8] = bVar63;
    auVar5[9] = bVar64;
    auVar5[10] = bVar65;
    auVar5[0xb] = bVar66;
    auVar5[0xc] = bVar67;
    auVar5[0xd] = bVar68;
    auVar5[0xe] = bVar69;
    auVar5[0xf] = bVar70;
    auVar8[9] = bVar77;
    auVar8._0_9_ = *(unkbyte9 *)puVar2;
    auVar8[10] = bVar78;
    auVar8[0xb] = bVar79;
    auVar8[0xc] = bVar80;
    auVar8[0xd] = bVar81;
    auVar8[0xe] = bVar82;
    auVar8[0xf] = bVar83;
    auVar89 = NEON_uabd(auVar5,auVar8,1);
    pauVar3 = (undefined1 (*) [16])(*pauVar16 + uVar15);
    uVar92 = *(undefined8 *)(*pauVar3 + 8);
    uVar91 = *(undefined8 *)*pauVar3;
    auVar93 = NEON_uabd(auVar71,auVar73,1);
    auVar72._0_8_ = auVar71._0_8_ ^ 0x8080808080808080;
    auVar72[8] = auVar71[8] ^ 0x80;
    auVar72[9] = auVar71[9] ^ 0x80;
    auVar72[10] = auVar71[10] ^ 0x80;
    auVar72[0xb] = auVar71[0xb] ^ 0x80;
    auVar72[0xc] = auVar71[0xc] ^ 0x80;
    auVar72[0xd] = auVar71[0xd] ^ 0x80;
    auVar72[0xe] = auVar71[0xe] ^ 0x80;
    auVar72[0xf] = auVar71[0xf] ^ 0x80;
    auVar71 = *(undefined1 (*) [16])(*pauVar16 + (long)(int)param_2 + (long)(int)param_2 * 2);
    auVar19 = NEON_uabd(auVar19,auVar38,1);
    auVar38 = NEON_uabd(*(undefined1 (*) [16])
                         (*pauVar16 + (long)(int)param_2 + (long)(int)param_2 * 2),*pauVar3,1);
    auVar19 = NEON_umax(auVar19,auVar84,1);
    auVar9[9] = bVar77;
    auVar9._0_9_ = *(unkbyte9 *)puVar2;
    auVar9[10] = bVar78;
    auVar9[0xb] = bVar79;
    auVar9[0xc] = bVar80;
    auVar9[0xd] = bVar81;
    auVar9[0xe] = bVar82;
    auVar9[0xf] = bVar83;
    auVar84 = NEON_uabd(*pauVar3,auVar9,1);
    auVar38 = NEON_umax(auVar87,auVar38,1);
    auVar19 = NEON_umax(auVar19,auVar38,1);
    auVar10[9] = bVar77;
    auVar10._0_9_ = *(unkbyte9 *)puVar2;
    auVar10[10] = bVar78;
    auVar10[0xb] = bVar79;
    auVar10[0xc] = bVar80;
    auVar10[0xd] = bVar81;
    auVar10[0xe] = bVar82;
    auVar10[0xf] = bVar83;
    auVar38 = NEON_uabd(auVar10,auVar73,1);
    auVar84 = NEON_umax(auVar84,auVar38,1);
    auVar19 = NEON_umax(auVar19,auVar84,1);
    auVar84 = NEON_uqadd(auVar93,auVar93,1);
    auVar90[0] = auVar89[0] >> 1;
    auVar90[1] = auVar89[1] >> 1;
    auVar90[2] = auVar89[2] >> 1;
    auVar90[3] = auVar89[3] >> 1;
    auVar90[4] = auVar89[4] >> 1;
    auVar90[5] = auVar89[5] >> 1;
    auVar90[6] = auVar89[6] >> 1;
    auVar90[7] = auVar89[7] >> 1;
    auVar90[8] = auVar89[8] >> 1;
    auVar90[9] = auVar89[9] >> 1;
    auVar90[10] = auVar89[10] >> 1;
    auVar90[0xb] = auVar89[0xb] >> 1;
    auVar90[0xc] = auVar89[0xc] >> 1;
    auVar90[0xd] = auVar89[0xd] >> 1;
    auVar90[0xe] = auVar89[0xe] >> 1;
    auVar90[0xf] = auVar89[0xf] >> 1;
    auVar84 = NEON_uqadd(auVar84,auVar90,1);
    bVar18 = -(auVar84[0] <= param_3) & -(auVar19[0] <= param_4);
    bVar22 = -(auVar84[1] <= param_3) & -(auVar19[1] <= param_4);
    bVar23 = -(auVar84[2] <= param_3) & -(auVar19[2] <= param_4);
    bVar24 = -(auVar84[3] <= param_3) & -(auVar19[3] <= param_4);
    bVar25 = -(auVar84[4] <= param_3) & -(auVar19[4] <= param_4);
    bVar26 = -(auVar84[5] <= param_3) & -(auVar19[5] <= param_4);
    bVar27 = -(auVar84[6] <= param_3) & -(auVar19[6] <= param_4);
    bVar28 = -(auVar84[7] <= param_3) & -(auVar19[7] <= param_4);
    bVar29 = -(auVar84[8] <= param_3) & -(auVar19[8] <= param_4);
    bVar30 = -(auVar84[9] <= param_3) & -(auVar19[9] <= param_4);
    bVar31 = -(auVar84[10] <= param_3) & -(auVar19[10] <= param_4);
    bVar32 = -(auVar84[0xb] <= param_3) & -(auVar19[0xb] <= param_4);
    bVar33 = -(auVar84[0xc] <= param_3) & -(auVar19[0xc] <= param_4);
    bVar34 = -(auVar84[0xd] <= param_3) & -(auVar19[0xd] <= param_4);
    bVar35 = -(auVar84[0xe] <= param_3) & -(auVar19[0xe] <= param_4);
    bVar36 = -(auVar84[0xf] <= param_3) & -(auVar19[0xf] <= param_4);
    auVar75._0_8_ = auVar73._0_8_ ^ 0x8080808080808080;
    auVar75[8] = auVar73[8] ^ 0x80;
    auVar75[9] = auVar73[9] ^ 0x80;
    auVar75[10] = auVar73[10] ^ 0x80;
    auVar75[0xb] = auVar73[0xb] ^ 0x80;
    auVar75[0xc] = auVar73[0xc] ^ 0x80;
    auVar75[0xd] = auVar73[0xd] ^ 0x80;
    auVar75[0xe] = auVar73[0xe] ^ 0x80;
    auVar75[0xf] = auVar73[0xf] ^ 0x80;
    bVar76 = (byte)uVar13 ^ 0x80;
    bVar37 = bVar18 & (-(param_5 < auVar38[0]) | -(param_5 < auVar87[0]));
    bVar40 = bVar22 & (-(param_5 < auVar38[1]) | -(param_5 < auVar87[1]));
    bVar41 = bVar23 & (-(param_5 < auVar38[2]) | -(param_5 < auVar87[2]));
    bVar42 = bVar24 & (-(param_5 < auVar38[3]) | -(param_5 < auVar87[3]));
    bVar43 = bVar25 & (-(param_5 < auVar38[4]) | -(param_5 < auVar87[4]));
    bVar44 = bVar26 & (-(param_5 < auVar38[5]) | -(param_5 < auVar87[5]));
    bVar45 = bVar27 & (-(param_5 < auVar38[6]) | -(param_5 < auVar87[6]));
    bVar46 = bVar28 & (-(param_5 < auVar38[7]) | -(param_5 < auVar87[7]));
    bVar47 = bVar29 & (-(param_5 < auVar38[8]) | -(param_5 < auVar87[8]));
    bVar48 = bVar30 & (-(param_5 < auVar38[9]) | -(param_5 < auVar87[9]));
    bVar49 = bVar31 & (-(param_5 < auVar38[10]) | -(param_5 < auVar87[10]));
    bVar50 = bVar32 & (-(param_5 < auVar38[0xb]) | -(param_5 < auVar87[0xb]));
    bVar51 = bVar33 & (-(param_5 < auVar38[0xc]) | -(param_5 < auVar87[0xc]));
    bVar52 = bVar34 & (-(param_5 < auVar38[0xd]) | -(param_5 < auVar87[0xd]));
    bVar53 = bVar35 & (-(param_5 < auVar38[0xe]) | -(param_5 < auVar87[0xe]));
    bVar54 = bVar36 & (-(param_5 < auVar38[0xf]) | -(param_5 < auVar87[0xf]));
    auVar19 = NEON_sqsub(auVar75,auVar72,1);
    auVar6[8] = bVar63 ^ 0x80;
    auVar6._0_8_ = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(uVar58,
                                                  CONCAT12(uVar57,CONCAT11(uVar56,uVar55))))))) ^
                   0x8080808080808080;
    auVar6[9] = bVar64 ^ 0x80;
    auVar6[10] = bVar65 ^ 0x80;
    auVar6[0xb] = bVar66 ^ 0x80;
    auVar6[0xc] = bVar67 ^ 0x80;
    auVar6[0xd] = bVar68 ^ 0x80;
    auVar6[0xe] = bVar69 ^ 0x80;
    auVar6[0xf] = bVar70 ^ 0x80;
    auVar11[8] = bVar76;
    auVar11._0_8_ = *puVar2 ^ 0x8080808080808080;
    auVar11[9] = bVar77 ^ 0x80;
    auVar11[10] = bVar78 ^ 0x80;
    auVar11[0xb] = bVar79 ^ 0x80;
    auVar11[0xc] = bVar80 ^ 0x80;
    auVar11[0xd] = bVar81 ^ 0x80;
    auVar11[0xe] = bVar82 ^ 0x80;
    auVar11[0xf] = bVar83 ^ 0x80;
    auVar38 = NEON_sqsub(auVar6,auVar11,1);
    auVar38 = NEON_sqadd(auVar38,auVar19,1);
    auVar38 = NEON_sqadd(auVar19,auVar38,1);
    auVar19 = NEON_sqadd(auVar19,auVar38,1);
    auVar85[0] = auVar19[0] & bVar37;
    auVar85[1] = auVar19[1] & bVar40;
    auVar85[2] = auVar19[2] & bVar41;
    auVar85[3] = auVar19[3] & bVar42;
    auVar85[4] = auVar19[4] & bVar43;
    auVar85[5] = auVar19[5] & bVar44;
    auVar85[6] = auVar19[6] & bVar45;
    auVar85[7] = auVar19[7] & bVar46;
    auVar85[8] = auVar19[8] & bVar47;
    auVar85[9] = auVar19[9] & bVar48;
    auVar85[10] = auVar19[10] & bVar49;
    auVar85[0xb] = auVar19[0xb] & bVar50;
    auVar85[0xc] = auVar19[0xc] & bVar51;
    auVar85[0xd] = auVar19[0xd] & bVar52;
    auVar85[0xe] = auVar19[0xe] & bVar53;
    auVar85[0xf] = auVar19[0xf] & bVar54;
    auVar73[8] = 3;
    auVar73._0_8_ = 0x303030303030303;
    auVar73[9] = 3;
    auVar73[10] = 3;
    auVar73[0xb] = 3;
    auVar73[0xc] = 3;
    auVar73[0xd] = 3;
    auVar73[0xe] = 3;
    auVar73[0xf] = 3;
    auVar38 = NEON_sqadd(auVar85,auVar73,1);
    auVar87[8] = 4;
    auVar87._0_8_ = 0x404040404040404;
    auVar87[9] = 4;
    auVar87[10] = 4;
    auVar87[0xb] = 4;
    auVar87[0xc] = 4;
    auVar87[0xd] = 4;
    auVar87[0xe] = 4;
    auVar87[0xf] = 4;
    auVar19 = NEON_sqadd(auVar85,auVar87,1);
    auVar88[0] = auVar38[0] >> 3;
    auVar88[1] = auVar38[1] >> 3;
    auVar88[2] = auVar38[2] >> 3;
    auVar88[3] = auVar38[3] >> 3;
    auVar88[4] = auVar38[4] >> 3;
    auVar88[5] = auVar38[5] >> 3;
    auVar88[6] = auVar38[6] >> 3;
    auVar88[7] = auVar38[7] >> 3;
    auVar88[8] = auVar38[8] >> 3;
    auVar88[9] = auVar38[9] >> 3;
    auVar88[10] = auVar38[10] >> 3;
    auVar88[0xb] = auVar38[0xb] >> 3;
    auVar88[0xc] = auVar38[0xc] >> 3;
    auVar88[0xd] = auVar38[0xd] >> 3;
    auVar88[0xe] = auVar38[0xe] >> 3;
    auVar88[0xf] = auVar38[0xf] >> 3;
    auVar86[0] = auVar19[0] >> 3;
    auVar86[1] = auVar19[1] >> 3;
    auVar86[2] = auVar19[2] >> 3;
    auVar86[3] = auVar19[3] >> 3;
    auVar86[4] = auVar19[4] >> 3;
    auVar86[5] = auVar19[5] >> 3;
    auVar86[6] = auVar19[6] >> 3;
    auVar86[7] = auVar19[7] >> 3;
    auVar86[8] = auVar19[8] >> 3;
    auVar86[9] = auVar19[9] >> 3;
    auVar86[10] = auVar19[10] >> 3;
    auVar86[0xb] = auVar19[0xb] >> 3;
    auVar86[0xc] = auVar19[0xc] >> 3;
    auVar86[0xd] = auVar19[0xd] >> 3;
    auVar86[0xe] = auVar19[0xe] >> 3;
    auVar86[0xf] = auVar19[0xf] >> 3;
    auVar73 = NEON_sqadd(auVar72,auVar88,1);
    auVar87 = NEON_sqsub(auVar75,auVar86,1);
    auVar19 = NEON_sqsub(auVar87,auVar73,1);
    auVar38 = NEON_sqadd(auVar19,auVar19,1);
    auVar19 = NEON_sqadd(auVar19,auVar38,1);
    auVar20[0] = auVar19[0] & (bVar37 ^ bVar18);
    auVar20[1] = auVar19[1] & (bVar40 ^ bVar22);
    auVar20[2] = auVar19[2] & (bVar41 ^ bVar23);
    auVar20[3] = auVar19[3] & (bVar42 ^ bVar24);
    auVar20[4] = auVar19[4] & (bVar43 ^ bVar25);
    auVar20[5] = auVar19[5] & (bVar44 ^ bVar26);
    auVar20[6] = auVar19[6] & (bVar45 ^ bVar27);
    auVar20[7] = auVar19[7] & (bVar46 ^ bVar28);
    auVar20[8] = auVar19[8] & (bVar47 ^ bVar29);
    auVar20[9] = auVar19[9] & (bVar48 ^ bVar30);
    auVar20[10] = auVar19[10] & (bVar49 ^ bVar31);
    auVar20[0xb] = auVar19[0xb] & (bVar50 ^ bVar32);
    auVar20[0xc] = auVar19[0xc] & (bVar51 ^ bVar33);
    auVar20[0xd] = auVar19[0xd] & (bVar52 ^ bVar34);
    auVar20[0xe] = auVar19[0xe] & (bVar53 ^ bVar35);
    auVar20[0xf] = auVar19[0xf] & (bVar54 ^ bVar36);
    auVar89[8] = 4;
    auVar89._0_8_ = 0x404040404040404;
    auVar89[9] = 4;
    auVar89[10] = 4;
    auVar89[0xb] = 4;
    auVar89[0xc] = 4;
    auVar89[0xd] = 4;
    auVar89[0xe] = 4;
    auVar89[0xf] = 4;
    auVar38 = NEON_sqadd(auVar20,auVar89,1);
    auVar84[8] = 3;
    auVar84._0_8_ = 0x303030303030303;
    auVar84[9] = 3;
    auVar84[10] = 3;
    auVar84[0xb] = 3;
    auVar84[0xc] = 3;
    auVar84[0xd] = 3;
    auVar84[0xe] = 3;
    auVar84[0xf] = 3;
    auVar19 = NEON_sqadd(auVar20,auVar84,1);
    auVar39[0] = auVar38[0] >> 3;
    auVar39[1] = auVar38[1] >> 3;
    auVar39[2] = auVar38[2] >> 3;
    auVar39[3] = auVar38[3] >> 3;
    auVar39[4] = auVar38[4] >> 3;
    auVar39[5] = auVar38[5] >> 3;
    auVar39[6] = auVar38[6] >> 3;
    auVar39[7] = auVar38[7] >> 3;
    auVar39[8] = auVar38[8] >> 3;
    auVar39[9] = auVar38[9] >> 3;
    auVar39[10] = auVar38[10] >> 3;
    auVar39[0xb] = auVar38[0xb] >> 3;
    auVar39[0xc] = auVar38[0xc] >> 3;
    auVar39[0xd] = auVar38[0xd] >> 3;
    auVar39[0xe] = auVar38[0xe] >> 3;
    auVar39[0xf] = auVar38[0xf] >> 3;
    auVar21[0] = auVar19[0] >> 3;
    auVar21[1] = auVar19[1] >> 3;
    auVar21[2] = auVar19[2] >> 3;
    auVar21[3] = auVar19[3] >> 3;
    auVar21[4] = auVar19[4] >> 3;
    auVar21[5] = auVar19[5] >> 3;
    auVar21[6] = auVar19[6] >> 3;
    auVar21[7] = auVar19[7] >> 3;
    auVar21[8] = auVar19[8] >> 3;
    auVar21[9] = auVar19[9] >> 3;
    auVar21[10] = auVar19[10] >> 3;
    auVar21[0xb] = auVar19[0xb] >> 3;
    auVar21[0xc] = auVar19[0xc] >> 3;
    auVar21[0xd] = auVar19[0xd] >> 3;
    auVar21[0xe] = auVar19[0xe] >> 3;
    auVar21[0xf] = auVar19[0xf] >> 3;
    auVar84 = NEON_srshr(auVar39,1,1);
    auVar19 = NEON_sqadd(auVar73,auVar21,1);
    auVar74._0_8_ = auVar19._0_8_ ^ 0x8080808080808080;
    auVar74[8] = auVar19[8] ^ 0x80;
    auVar74[9] = auVar19[9] ^ 0x80;
    auVar74[10] = auVar19[10] ^ 0x80;
    auVar74[0xb] = auVar19[0xb] ^ 0x80;
    auVar74[0xc] = auVar19[0xc] ^ 0x80;
    auVar74[0xd] = auVar19[0xd] ^ 0x80;
    auVar74[0xe] = auVar19[0xe] ^ 0x80;
    auVar74[0xf] = auVar19[0xf] ^ 0x80;
    auVar38 = NEON_sqsub(auVar87,auVar39,1);
    auVar19._0_8_ = auVar38._0_8_ ^ 0x8080808080808080;
    auVar19[8] = auVar38[8] ^ 0x80;
    auVar19[9] = auVar38[9] ^ 0x80;
    auVar19[10] = auVar38[10] ^ 0x80;
    auVar19[0xb] = auVar38[0xb] ^ 0x80;
    auVar19[0xc] = auVar38[0xc] ^ 0x80;
    auVar19[0xd] = auVar38[0xd] ^ 0x80;
    auVar19[0xe] = auVar38[0xe] ^ 0x80;
    auVar19[0xf] = auVar38[0xf] ^ 0x80;
    auVar7[8] = bVar63 ^ 0x80;
    auVar7._0_8_ = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(uVar58,
                                                  CONCAT12(uVar57,CONCAT11(uVar56,uVar55))))))) ^
                   0x8080808080808080;
    auVar7[9] = bVar64 ^ 0x80;
    auVar7[10] = bVar65 ^ 0x80;
    auVar7[0xb] = bVar66 ^ 0x80;
    auVar7[0xc] = bVar67 ^ 0x80;
    auVar7[0xd] = bVar68 ^ 0x80;
    auVar7[0xe] = bVar69 ^ 0x80;
    auVar7[0xf] = bVar70 ^ 0x80;
    auVar73 = NEON_sqadd(auVar7,auVar84,1);
    auVar12[8] = bVar76;
    auVar12._0_8_ = *puVar2 ^ 0x8080808080808080;
    auVar12[9] = bVar77 ^ 0x80;
    auVar12[10] = bVar78 ^ 0x80;
    auVar12[0xb] = bVar79 ^ 0x80;
    auVar12[0xc] = bVar80 ^ 0x80;
    auVar12[0xd] = bVar81 ^ 0x80;
    auVar12[0xe] = bVar82 ^ 0x80;
    auVar12[0xf] = bVar83 ^ 0x80;
    auVar84 = NEON_sqsub(auVar12,auVar84,1);
    auVar38._0_8_ = auVar84._0_8_ ^ 0x8080808080808080;
    auVar38[8] = auVar84[8] ^ 0x80;
    auVar38[9] = auVar84[9] ^ 0x80;
    auVar38[10] = auVar84[10] ^ 0x80;
    auVar38[0xb] = auVar84[0xb] ^ 0x80;
    auVar38[0xc] = auVar84[0xc] ^ 0x80;
    auVar38[0xd] = auVar84[0xd] ^ 0x80;
    auVar38[0xe] = auVar84[0xe] ^ 0x80;
    auVar38[0xf] = auVar84[0xf] ^ 0x80;
    puVar2 = (ulong *)((long)pauVar16 + (long)(int)param_2 * -2);
    puVar2[1] = auVar73._8_8_ ^ 0x8080808080808080;
    *puVar2 = auVar73._0_8_ ^ 0x8080808080808080;
    ((ulong *)((long)pauVar16 - (long)(int)param_2))[1] = auVar74._8_8_;
    *(ulong *)((long)pauVar16 - (long)(int)param_2) = auVar74._0_8_;
    *(long *)(*pauVar16 + 8) = auVar19._8_8_;
    *(ulong *)*pauVar16 = auVar19._0_8_;
    *(ulong *)((long)(*pauVar16 + (int)param_2) + 8) = auVar38._8_8_;
    *(ulong *)(*pauVar16 + (int)param_2) = auVar38._0_8_;
    pauVar16 = (undefined1 (*) [16])
               (*pauVar16 + (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2));
    bVar63 = (byte)uVar92;
    bVar64 = (byte)((ulong)uVar92 >> 8);
    bVar65 = (byte)((ulong)uVar92 >> 0x10);
    bVar66 = (byte)((ulong)uVar92 >> 0x18);
    bVar67 = (byte)((ulong)uVar92 >> 0x20);
    bVar68 = (byte)((ulong)uVar92 >> 0x28);
    bVar69 = (byte)((ulong)uVar92 >> 0x30);
    bVar70 = (byte)((ulong)uVar92 >> 0x38);
    uVar55 = (undefined1)uVar91;
    uVar56 = (undefined1)((ulong)uVar91 >> 8);
    uVar57 = (undefined1)((ulong)uVar91 >> 0x10);
    uVar58 = (undefined1)((ulong)uVar91 >> 0x18);
    uVar59 = (undefined1)((ulong)uVar91 >> 0x20);
    uVar60 = (undefined1)((ulong)uVar91 >> 0x28);
    uVar61 = (undefined1)((ulong)uVar91 >> 0x30);
    uVar62 = (undefined1)((ulong)uVar91 >> 0x38);
    bVar14 = iVar17 != -1;
    iVar17 = iVar17 + 1;
  } while (bVar14);
  return;
}




void FUN_1010c39f8(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  ulong uVar43;
  long lVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar39 = param_1 + -4;
  uVar43 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  iVar35 = (int)param_2;
  puVar38 = puVar39 + iVar35;
  puVar42 = puVar39 + (long)iVar35 * 2;
  auVar74[0] = *puVar39;
  uVar45 = param_1[-2];
  auVar53[0] = param_1[-1];
  puVar36 = puVar39 + uVar43;
  auVar74[1] = *puVar38;
  uVar46 = puVar38[2];
  auVar53[1] = puVar38[3];
  auVar74[2] = *puVar42;
  uVar47 = puVar42[2];
  auVar53[2] = puVar42[3];
  lVar1 = (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar35
  ;
  puVar7 = puVar39 + lVar1;
  auVar74[3] = *puVar7;
  uVar48 = puVar7[2];
  auVar53[3] = puVar7[3];
  puVar2 = puVar39 + (long)iVar35 * 4;
  lVar3 = (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + (long)iVar35
  ;
  puVar8 = puVar39 + lVar3;
  auVar74[4] = *puVar2;
  uVar49 = puVar2[2];
  auVar53[4] = puVar2[3];
  puVar9 = puVar39 + lVar1 * 2;
  auVar74[5] = *puVar8;
  uVar50 = puVar8[2];
  auVar53[5] = puVar8[3];
  auVar74[6] = *puVar9;
  uVar51 = puVar9[2];
  auVar53[6] = puVar9[3];
  lVar44 = uVar43 - (long)iVar35;
  puVar39 = puVar39 + lVar44;
  auVar74[7] = *puVar39;
  uVar52 = puVar39[2];
  auVar53[7] = puVar39[3];
  puVar40 = puVar36 + lVar44;
  puVar4 = puVar36 + iVar35;
  auVar74[9] = *puVar4;
  auVar74[8] = *puVar36;
  auVar53[9] = puVar4[3];
  auVar53[8] = puVar36[3];
  puVar5 = puVar36 + (long)iVar35 * 2;
  auVar74[10] = *puVar5;
  auVar53[10] = puVar5[3];
  puVar10 = puVar36 + lVar1;
  auVar74[0xb] = *puVar10;
  auVar53[0xb] = puVar10[3];
  puVar6 = puVar36 + (long)iVar35 * 4;
  auVar74[0xc] = *puVar6;
  auVar53[0xc] = puVar6[3];
  puVar11 = puVar36 + lVar3;
  auVar74[0xd] = *puVar11;
  auVar53[0xd] = puVar11[3];
  puVar12 = puVar36 + lVar1 * 2;
  auVar74[0xe] = *puVar12;
  auVar53[0xe] = puVar12[3];
  auVar74[0xf] = *puVar40;
  uVar71 = CONCAT17(puVar40[1],
                    CONCAT16(puVar12[1],
                             CONCAT15(puVar11[1],
                                      CONCAT14(puVar6[1],
                                               CONCAT13(puVar10[1],
                                                        CONCAT12(puVar5[1],
                                                                 CONCAT11(puVar4[1],puVar36[1]))))))
                   );
  uVar73 = CONCAT17(puVar40[2],
                    CONCAT16(puVar12[2],
                             CONCAT15(puVar11[2],
                                      CONCAT14(puVar6[2],
                                               CONCAT13(puVar10[2],
                                                        CONCAT12(puVar5[2],
                                                                 CONCAT11(puVar4[2],puVar36[2]))))))
                   );
  auVar53[0xf] = puVar40[3];
  auVar54[0] = *param_1;
  uVar55 = param_1[1];
  puVar37 = param_1 + uVar43;
  puVar4 = param_1 + iVar35;
  auVar54[1] = *puVar4;
  uVar56 = puVar4[1];
  puVar5 = param_1 + (long)iVar35 * 2;
  auVar54[2] = *puVar5;
  uVar57 = puVar5[1];
  puVar36 = param_1 + lVar1;
  auVar54[3] = *puVar36;
  uVar58 = puVar36[1];
  puVar6 = param_1 + (long)iVar35 * 4;
  auVar54[4] = *puVar6;
  uVar59 = puVar6[1];
  puVar40 = param_1 + lVar3;
  auVar54[5] = *puVar40;
  uVar60 = puVar40[1];
  puVar13 = param_1 + lVar1 * 2;
  auVar54[6] = *puVar13;
  uVar61 = puVar13[1];
  puVar14 = param_1 + lVar44;
  auVar54[7] = *puVar14;
  uVar62 = puVar14[1];
  puVar41 = puVar37 + lVar44;
  puVar10 = puVar37 + iVar35;
  auVar54[9] = *puVar10;
  auVar54[8] = *puVar37;
  puVar11 = puVar37 + (long)iVar35 * 2;
  auVar54[10] = *puVar11;
  puVar15 = puVar37 + lVar1;
  auVar54[0xb] = *puVar15;
  puVar12 = puVar37 + (long)iVar35 * 4;
  auVar54[0xc] = *puVar12;
  puVar16 = puVar37 + lVar3;
  auVar54[0xd] = *puVar16;
  puVar17 = puVar37 + lVar1 * 2;
  auVar54[0xe] = *puVar17;
  auVar54[0xf] = *puVar41;
  uVar64 = CONCAT17(puVar41[1],
                    CONCAT16(puVar17[1],
                             CONCAT15(puVar16[1],
                                      CONCAT14(puVar12[1],
                                               CONCAT13(puVar15[1],
                                                        CONCAT12(puVar11[1],
                                                                 CONCAT11(puVar10[1],puVar37[1])))))
                            ));
  uVar66 = CONCAT17(puVar41[2],
                    CONCAT16(puVar17[2],
                             CONCAT15(puVar16[2],
                                      CONCAT14(puVar12[2],
                                               CONCAT13(puVar15[2],
                                                        CONCAT12(puVar11[2],
                                                                 CONCAT11(puVar10[2],puVar37[2])))))
                            ));
  auVar63[1] = puVar38[1];
  auVar63[0] = param_1[-3];
  auVar63[2] = puVar42[1];
  auVar63[3] = puVar7[1];
  auVar63[4] = puVar2[1];
  auVar63[5] = puVar8[1];
  auVar63[6] = puVar9[1];
  auVar63[7] = puVar39[1];
  auVar63._8_8_ = uVar71;
  auVar63 = NEON_uabd(auVar74,auVar63,1);
  auVar65[1] = puVar38[1];
  auVar65[0] = param_1[-3];
  auVar65[2] = puVar42[1];
  auVar65[3] = puVar7[1];
  auVar65[4] = puVar2[1];
  auVar65[5] = puVar8[1];
  auVar65[6] = puVar9[1];
  auVar65[7] = puVar39[1];
  auVar65._8_8_ = uVar71;
  auVar67[1] = uVar46;
  auVar67[0] = uVar45;
  auVar67[2] = uVar47;
  auVar67[3] = uVar48;
  auVar67[4] = uVar49;
  auVar67[5] = uVar50;
  auVar67[6] = uVar51;
  auVar67[7] = uVar52;
  auVar67._8_8_ = uVar73;
  auVar65 = NEON_uabd(auVar65,auVar67,1);
  auVar68[1] = uVar46;
  auVar68[0] = uVar45;
  auVar68[2] = uVar47;
  auVar68[3] = uVar48;
  auVar68[4] = uVar49;
  auVar68[5] = uVar50;
  auVar68[6] = uVar51;
  auVar68[7] = uVar52;
  auVar68._8_8_ = uVar73;
  auVar67 = NEON_uabd(auVar68,auVar53,1);
  auVar20[1] = puVar4[2];
  auVar20[0] = param_1[2];
  auVar20[2] = puVar5[2];
  auVar20[3] = puVar36[2];
  auVar20[4] = puVar6[2];
  auVar20[5] = puVar40[2];
  auVar20[6] = puVar13[2];
  auVar20[7] = puVar14[2];
  auVar20._8_8_ = uVar66;
  auVar22[1] = puVar4[3];
  auVar22[0] = param_1[3];
  auVar22[2] = puVar5[3];
  auVar22[3] = puVar36[3];
  auVar22[4] = puVar6[3];
  auVar22[5] = puVar40[3];
  auVar22[6] = puVar13[3];
  auVar22[7] = puVar14[3];
  auVar22[8] = puVar37[3];
  auVar22[9] = puVar10[3];
  auVar22[10] = puVar11[3];
  auVar22[0xb] = puVar15[3];
  auVar22[0xc] = puVar12[3];
  auVar22[0xd] = puVar16[3];
  auVar22[0xe] = puVar17[3];
  auVar22[0xf] = puVar41[3];
  auVar68 = NEON_uabd(auVar22,auVar20,1);
  auVar72[1] = uVar56;
  auVar72[0] = uVar55;
  auVar72[2] = uVar57;
  auVar72[3] = uVar58;
  auVar72[4] = uVar59;
  auVar72[5] = uVar60;
  auVar72[6] = uVar61;
  auVar72[7] = uVar62;
  auVar72._8_8_ = uVar64;
  auVar21[1] = puVar4[2];
  auVar21[0] = param_1[2];
  auVar21[2] = puVar5[2];
  auVar21[3] = puVar36[2];
  auVar21[4] = puVar6[2];
  auVar21[5] = puVar40[2];
  auVar21[6] = puVar13[2];
  auVar21[7] = puVar14[2];
  auVar21._8_8_ = uVar66;
  auVar70 = NEON_uabd(auVar21,auVar72,1);
  auVar18[1] = uVar56;
  auVar18[0] = uVar55;
  auVar18[2] = uVar57;
  auVar18[3] = uVar58;
  auVar18[4] = uVar59;
  auVar18[5] = uVar60;
  auVar18[6] = uVar61;
  auVar18[7] = uVar62;
  auVar18._8_8_ = uVar64;
  auVar72 = NEON_uabd(auVar18,auVar54,1);
  auVar63 = NEON_umax(auVar63,auVar65,1);
  auVar65 = NEON_umax(auVar67,auVar68,1);
  auVar67 = NEON_umax(auVar70,auVar72,1);
  auVar63 = NEON_umax(auVar63,auVar65,1);
  NEON_umax(auVar63,auVar67,1);
  auVar63 = NEON_uabd(auVar53,auVar54,1);
  auVar70[1] = uVar46;
  auVar70[0] = uVar45;
  auVar70[2] = uVar47;
  auVar70[3] = uVar48;
  auVar70[4] = uVar49;
  auVar70[5] = uVar50;
  auVar70[6] = uVar51;
  auVar70[7] = uVar52;
  auVar70._8_8_ = uVar73;
  auVar19[1] = uVar56;
  auVar19[0] = uVar55;
  auVar19[2] = uVar57;
  auVar19[3] = uVar58;
  auVar19[4] = uVar59;
  auVar19[5] = uVar60;
  auVar19[6] = uVar61;
  auVar19[7] = uVar62;
  auVar19._8_8_ = uVar64;
  auVar65 = NEON_uabd(auVar70,auVar19,1);
  auVar63 = NEON_uqadd(auVar63,auVar63,1);
  auVar69[0] = auVar65[0] >> 1;
  auVar69[1] = auVar65[1] >> 1;
  auVar69[2] = auVar65[2] >> 1;
  auVar69[3] = auVar65[3] >> 1;
  auVar69[4] = auVar65[4] >> 1;
  auVar69[5] = auVar65[5] >> 1;
  auVar69[6] = auVar65[6] >> 1;
  auVar69[7] = auVar65[7] >> 1;
  auVar69[8] = auVar65[8] >> 1;
  auVar69[9] = auVar65[9] >> 1;
  auVar69[10] = auVar65[10] >> 1;
  auVar69[0xb] = auVar65[0xb] >> 1;
  auVar69[0xc] = auVar65[0xc] >> 1;
  auVar69[0xd] = auVar65[0xd] >> 1;
  auVar69[0xe] = auVar65[0xe] >> 1;
  auVar69[0xf] = auVar65[0xf] >> 1;
  NEON_uqadd(auVar63,auVar69,1);
  FUN_1010c4db0(&local_50,&local_60,&uStack_70,&local_80,&uStack_90,&local_a0);
  auVar34._8_8_ = uStack_48;
  auVar34._0_8_ = local_50;
  auVar33._8_8_ = uStack_48;
  auVar33._0_8_ = local_50;
  auVar32._8_8_ = uStack_58;
  auVar32._0_8_ = local_60;
  auVar31._8_8_ = uStack_58;
  auVar31._0_8_ = local_60;
  puVar38 = param_1 + -3;
  *puVar38 = (char)local_50;
  param_1[-2] = (char)local_60;
  puVar42 = puVar38 + uVar43;
  puVar38[iVar35] = (char)((ulong)local_50 >> 8);
  (puVar38 + iVar35)[1] = (char)((ulong)local_60 >> 8);
  puVar38[(long)iVar35 * 2] = (char)((ulong)local_50 >> 0x10);
  (puVar38 + (long)iVar35 * 2)[1] = (char)((ulong)local_60 >> 0x10);
  puVar38[lVar1] = (char)((ulong)local_50 >> 0x18);
  (puVar38 + lVar1)[1] = (char)((ulong)local_60 >> 0x18);
  puVar38[(long)iVar35 * 4] = (char)((ulong)local_50 >> 0x20);
  (puVar38 + (long)iVar35 * 4)[1] = (char)((ulong)local_60 >> 0x20);
  puVar38[lVar3] = (char)((ulong)local_50 >> 0x28);
  (puVar38 + lVar3)[1] = (char)((ulong)local_60 >> 0x28);
  auVar63 = NEON_ext(auVar33,auVar34,8,1);
  auVar65 = NEON_ext(auVar31,auVar32,8,1);
  puVar38[lVar1 * 2] = (char)((ulong)local_50 >> 0x30);
  (puVar38 + lVar1 * 2)[1] = (char)((ulong)local_60 >> 0x30);
  puVar38[lVar44] = (char)((ulong)local_50 >> 0x38);
  (puVar38 + lVar44)[1] = (char)((ulong)local_60 >> 0x38);
  *puVar42 = auVar63[0];
  puVar42[1] = auVar65[0];
  puVar42[iVar35] = auVar63[1];
  (puVar42 + iVar35)[1] = auVar65[1];
  puVar42[(long)iVar35 * 2] = auVar63[2];
  (puVar42 + (long)iVar35 * 2)[1] = auVar65[2];
  puVar42[lVar1] = auVar63[3];
  (puVar42 + lVar1)[1] = auVar65[3];
  puVar42[(long)iVar35 * 4] = auVar63[4];
  (puVar42 + (long)iVar35 * 4)[1] = auVar65[4];
  puVar42[lVar3] = auVar63[5];
  (puVar42 + lVar3)[1] = auVar65[5];
  puVar42[lVar1 * 2] = auVar63[6];
  (puVar42 + lVar1 * 2)[1] = auVar65[6];
  puVar42[lVar44] = auVar63[7];
  (puVar42 + lVar44)[1] = auVar65[7];
  auVar28._8_8_ = uStack_78;
  auVar28._0_8_ = local_80;
  auVar27._8_8_ = uStack_78;
  auVar27._0_8_ = local_80;
  auVar30._8_8_ = uStack_68;
  auVar30._0_8_ = uStack_70;
  auVar29._8_8_ = uStack_68;
  auVar29._0_8_ = uStack_70;
  puVar38 = param_1 + -1;
  *puVar38 = (char)uStack_70;
  *param_1 = (char)local_80;
  puVar42 = puVar38 + uVar43;
  puVar38[iVar35] = (char)((ulong)uStack_70 >> 8);
  (puVar38 + iVar35)[1] = (char)((ulong)local_80 >> 8);
  puVar38[(long)iVar35 * 2] = (char)((ulong)uStack_70 >> 0x10);
  (puVar38 + (long)iVar35 * 2)[1] = (char)((ulong)local_80 >> 0x10);
  puVar38[lVar1] = (char)((ulong)uStack_70 >> 0x18);
  (puVar38 + lVar1)[1] = (char)((ulong)local_80 >> 0x18);
  puVar38[(long)iVar35 * 4] = (char)((ulong)uStack_70 >> 0x20);
  (puVar38 + (long)iVar35 * 4)[1] = (char)((ulong)local_80 >> 0x20);
  puVar38[lVar3] = (char)((ulong)uStack_70 >> 0x28);
  (puVar38 + lVar3)[1] = (char)((ulong)local_80 >> 0x28);
  auVar63 = NEON_ext(auVar29,auVar30,8,1);
  auVar65 = NEON_ext(auVar27,auVar28,8,1);
  puVar38[lVar1 * 2] = (char)((ulong)uStack_70 >> 0x30);
  (puVar38 + lVar1 * 2)[1] = (char)((ulong)local_80 >> 0x30);
  puVar38[lVar44] = (char)((ulong)uStack_70 >> 0x38);
  (puVar38 + lVar44)[1] = (char)((ulong)local_80 >> 0x38);
  *puVar42 = auVar63[0];
  puVar42[1] = auVar65[0];
  puVar42[iVar35] = auVar63[1];
  (puVar42 + iVar35)[1] = auVar65[1];
  puVar42[(long)iVar35 * 2] = auVar63[2];
  (puVar42 + (long)iVar35 * 2)[1] = auVar65[2];
  puVar42[lVar1] = auVar63[3];
  (puVar42 + lVar1)[1] = auVar65[3];
  puVar42[(long)iVar35 * 4] = auVar63[4];
  (puVar42 + (long)iVar35 * 4)[1] = auVar65[4];
  puVar42[lVar3] = auVar63[5];
  (puVar42 + lVar3)[1] = auVar65[5];
  puVar42[lVar1 * 2] = auVar63[6];
  (puVar42 + lVar1 * 2)[1] = auVar65[6];
  puVar42[lVar44] = auVar63[7];
  (puVar42 + lVar44)[1] = auVar65[7];
  auVar24._8_8_ = uStack_98;
  auVar24._0_8_ = local_a0;
  auVar23._8_8_ = uStack_98;
  auVar23._0_8_ = local_a0;
  auVar26._8_8_ = uStack_88;
  auVar26._0_8_ = uStack_90;
  auVar25._8_8_ = uStack_88;
  auVar25._0_8_ = uStack_90;
  puVar38 = param_1 + 1;
  *puVar38 = (char)uStack_90;
  param_1[2] = (char)local_a0;
  puVar42 = puVar38 + uVar43;
  puVar38[iVar35] = (char)((ulong)uStack_90 >> 8);
  (puVar38 + iVar35)[1] = (char)((ulong)local_a0 >> 8);
  puVar38[(long)iVar35 * 2] = (char)((ulong)uStack_90 >> 0x10);
  (puVar38 + (long)iVar35 * 2)[1] = (char)((ulong)local_a0 >> 0x10);
  puVar38[lVar1] = (char)((ulong)uStack_90 >> 0x18);
  (puVar38 + lVar1)[1] = (char)((ulong)local_a0 >> 0x18);
  puVar38[(long)iVar35 * 4] = (char)((ulong)uStack_90 >> 0x20);
  (puVar38 + (long)iVar35 * 4)[1] = (char)((ulong)local_a0 >> 0x20);
  puVar38[lVar3] = (char)((ulong)uStack_90 >> 0x28);
  (puVar38 + lVar3)[1] = (char)((ulong)local_a0 >> 0x28);
  auVar63 = NEON_ext(auVar25,auVar26,8,1);
  auVar65 = NEON_ext(auVar23,auVar24,8,1);
  puVar38[lVar1 * 2] = (char)((ulong)uStack_90 >> 0x30);
  (puVar38 + lVar1 * 2)[1] = (char)((ulong)local_a0 >> 0x30);
  puVar38[lVar44] = (char)((ulong)uStack_90 >> 0x38);
  (puVar38 + lVar44)[1] = (char)((ulong)local_a0 >> 0x38);
  *puVar42 = auVar63[0];
  puVar42[1] = auVar65[0];
  puVar42[iVar35] = auVar63[1];
  (puVar42 + iVar35)[1] = auVar65[1];
  puVar42[(long)iVar35 * 2] = auVar63[2];
  (puVar42 + (long)iVar35 * 2)[1] = auVar65[2];
  puVar42[lVar1] = auVar63[3];
  (puVar42 + lVar1)[1] = auVar65[3];
  puVar42[(long)iVar35 * 4] = auVar63[4];
  (puVar42 + (long)iVar35 * 4)[1] = auVar65[4];
  puVar42[lVar3] = auVar63[5];
  (puVar42 + lVar3)[1] = auVar65[5];
  puVar42[lVar1 * 2] = auVar63[6];
  (puVar42 + lVar1 * 2)[1] = auVar65[6];
  puVar42[lVar44] = auVar63[7];
  (puVar42 + lVar44)[1] = auVar65[7];
  return;
}




void FUN_1010c3dc0(undefined1 *param_1,ulong param_2,byte param_3,byte param_4,byte param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  undefined1 *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar44 [16];
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  undefined1 auVar100 [16];
  byte bVar109;
  undefined1 auVar101 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  
  lVar28 = 0;
  iVar27 = (int)param_2;
  auVar96[0] = param_1[2];
  auVar111[0] = param_1[3];
  puVar1 = param_1 + iVar27;
  auVar95[1] = *puVar1;
  auVar95[0] = *param_1;
  auVar100[1] = puVar1[1];
  auVar100[0] = param_1[1];
  auVar96[1] = puVar1[2];
  auVar111[1] = puVar1[3];
  puVar2 = param_1 + (long)iVar27 * 2;
  auVar95[2] = *puVar2;
  auVar100[2] = puVar2[1];
  auVar96[2] = puVar2[2];
  auVar111[2] = puVar2[3];
  lVar3 = (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar27
  ;
  puVar8 = param_1 + lVar3;
  auVar95[3] = *puVar8;
  auVar100[3] = puVar8[1];
  auVar96[3] = puVar8[2];
  auVar111[3] = puVar8[3];
  puVar4 = param_1 + (long)iVar27 * 4;
  auVar95[4] = *puVar4;
  auVar100[4] = puVar4[1];
  auVar96[4] = puVar4[2];
  auVar111[4] = puVar4[3];
  lVar5 = (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + (long)iVar27
  ;
  puVar9 = param_1 + lVar5;
  auVar95[5] = *puVar9;
  auVar100[5] = puVar9[1];
  auVar96[5] = puVar9[2];
  auVar111[5] = puVar9[3];
  puVar10 = param_1 + lVar3 * 2;
  auVar95[6] = *puVar10;
  auVar100[6] = puVar10[1];
  auVar96[6] = puVar10[2];
  auVar111[6] = puVar10[3];
  uVar30 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  lVar29 = uVar30 - (long)iVar27;
  puVar11 = param_1 + lVar29;
  auVar95[7] = *puVar11;
  auVar100[7] = puVar11[1];
  auVar96[7] = puVar11[2];
  auVar111[7] = puVar11[3];
  puVar6 = param_1 + (long)iVar27 * 8;
  puVar31 = puVar6 + lVar29;
  puVar7 = puVar6 + iVar27;
  auVar95[9] = *puVar7;
  auVar95[8] = *puVar6;
  auVar100[9] = puVar7[1];
  auVar100[8] = puVar6[1];
  auVar96[9] = puVar7[2];
  auVar96[8] = puVar6[2];
  auVar111[9] = puVar7[3];
  auVar111[8] = puVar6[3];
  puVar7 = puVar6 + (long)iVar27 * 2;
  auVar95[10] = *puVar7;
  auVar100[10] = puVar7[1];
  auVar96[10] = puVar7[2];
  auVar111[10] = puVar7[3];
  puVar7 = puVar6 + lVar3;
  auVar95[0xb] = *puVar7;
  auVar100[0xb] = puVar7[1];
  auVar96[0xb] = puVar7[2];
  auVar111[0xb] = puVar7[3];
  puVar7 = puVar6 + (long)iVar27 * 4;
  auVar95[0xc] = *puVar7;
  auVar100[0xc] = puVar7[1];
  auVar96[0xc] = puVar7[2];
  auVar111[0xc] = puVar7[3];
  puVar7 = puVar6 + lVar5;
  auVar95[0xd] = *puVar7;
  auVar100[0xd] = puVar7[1];
  auVar96[0xd] = puVar7[2];
  auVar111[0xd] = puVar7[3];
  puVar7 = puVar6 + lVar3 * 2;
  auVar95[0xe] = *puVar7;
  auVar100[0xe] = puVar7[1];
  auVar96[0xe] = puVar7[2];
  auVar111[0xe] = puVar7[3];
  auVar95[0xf] = *puVar31;
  auVar100[0xf] = puVar31[1];
  auVar96[0xf] = puVar31[2];
  auVar111[0xf] = puVar31[3];
  do {
    uVar63 = param_1[lVar28 + 4];
    uVar71 = param_1[lVar28 + 5];
    uVar79 = param_1[lVar28 + 6];
    uVar87 = param_1[lVar28 + 7];
    uVar64 = puVar1[lVar28 + 4];
    uVar72 = puVar1[lVar28 + 5];
    uVar80 = puVar1[lVar28 + 6];
    uVar88 = puVar1[lVar28 + 7];
    uVar65 = puVar2[lVar28 + 4];
    uVar73 = puVar2[lVar28 + 5];
    uVar81 = puVar2[lVar28 + 6];
    uVar89 = puVar2[lVar28 + 7];
    uVar66 = puVar8[lVar28 + 4];
    uVar74 = puVar8[lVar28 + 5];
    uVar82 = puVar8[lVar28 + 6];
    uVar90 = puVar8[lVar28 + 7];
    uVar67 = puVar4[lVar28 + 4];
    uVar75 = puVar4[lVar28 + 5];
    uVar83 = puVar4[lVar28 + 6];
    uVar91 = puVar4[lVar28 + 7];
    uVar68 = puVar9[lVar28 + 4];
    uVar76 = puVar9[lVar28 + 5];
    uVar84 = puVar9[lVar28 + 6];
    uVar92 = puVar9[lVar28 + 7];
    uVar69 = puVar10[lVar28 + 4];
    uVar77 = puVar10[lVar28 + 5];
    uVar85 = puVar10[lVar28 + 6];
    uVar93 = puVar10[lVar28 + 7];
    uVar70 = puVar11[lVar28 + 4];
    uVar78 = puVar11[lVar28 + 5];
    uVar86 = puVar11[lVar28 + 6];
    uVar94 = puVar11[lVar28 + 7];
    lVar20 = lVar28 + (long)iVar27 + (long)iVar27 * 8;
    bVar45 = puVar6[lVar28 + 4];
    bVar53 = puVar6[lVar28 + 5];
    bVar46 = param_1[lVar20 + 4];
    bVar54 = param_1[lVar20 + 5];
    lVar26 = lVar28 + uVar30 + (long)iVar27 * 2;
    lVar25 = lVar28 + lVar3 + (long)iVar27 * 8;
    bVar47 = param_1[lVar26 + 4];
    bVar55 = param_1[lVar26 + 5];
    bVar48 = param_1[lVar25 + 4];
    bVar56 = param_1[lVar25 + 5];
    lVar24 = lVar28 + uVar30 + (long)iVar27 * 4;
    lVar23 = lVar28 + lVar5 + (long)iVar27 * 8;
    bVar49 = param_1[lVar24 + 4];
    bVar57 = param_1[lVar24 + 5];
    bVar50 = param_1[lVar23 + 4];
    bVar58 = param_1[lVar23 + 5];
    lVar22 = lVar28 + lVar3 * 2 + (long)iVar27 * 8;
    lVar21 = lVar28 + lVar29 + (long)iVar27 * 8;
    bVar51 = param_1[lVar22 + 4];
    bVar59 = param_1[lVar22 + 5];
    bVar52 = param_1[lVar21 + 4];
    bVar60 = param_1[lVar21 + 5];
    uVar61 = CONCAT17(param_1[lVar21 + 6],
                      CONCAT16(param_1[lVar22 + 6],
                               CONCAT15(param_1[lVar23 + 6],
                                        CONCAT14(param_1[lVar24 + 6],
                                                 CONCAT13(param_1[lVar25 + 6],
                                                          CONCAT12(param_1[lVar26 + 6],
                                                                   CONCAT11(param_1[lVar20 + 6],
                                                                            puVar6[lVar28 + 6]))))))
                     );
    uVar62 = CONCAT17(param_1[lVar21 + 7],
                      CONCAT16(param_1[lVar22 + 7],
                               CONCAT15(param_1[lVar23 + 7],
                                        CONCAT14(param_1[lVar24 + 7],
                                                 CONCAT13(param_1[lVar25 + 7],
                                                          CONCAT12(param_1[lVar26 + 7],
                                                                   CONCAT11(param_1[lVar20 + 7],
                                                                            puVar6[lVar28 + 7]))))))
                     );
    auVar115 = NEON_uabd(auVar95,auVar100,1);
    auVar95 = NEON_uabd(auVar100,auVar96,1);
    auVar100 = NEON_uabd(auVar96,auVar111,1);
    auVar17[1] = uVar80;
    auVar17[0] = uVar79;
    auVar17[2] = uVar81;
    auVar17[3] = uVar82;
    auVar17[4] = uVar83;
    auVar17[5] = uVar84;
    auVar17[6] = uVar85;
    auVar17[7] = uVar86;
    auVar17._8_8_ = uVar61;
    auVar19[1] = uVar88;
    auVar19[0] = uVar87;
    auVar19[2] = uVar89;
    auVar19[3] = uVar90;
    auVar19[4] = uVar91;
    auVar19[5] = uVar92;
    auVar19[6] = uVar93;
    auVar19[7] = uVar94;
    auVar19._8_8_ = uVar62;
    auVar110 = NEON_uabd(auVar19,auVar17,1);
    auVar14[1] = uVar72;
    auVar14[0] = uVar71;
    auVar14[2] = uVar73;
    auVar14[3] = uVar74;
    auVar14[4] = uVar75;
    auVar14[5] = uVar76;
    auVar14[6] = uVar77;
    auVar14[7] = uVar78;
    auVar14[8] = bVar53;
    auVar14[9] = bVar54;
    auVar14[10] = bVar55;
    auVar14[0xb] = bVar56;
    auVar14[0xc] = bVar57;
    auVar14[0xd] = bVar58;
    auVar14[0xe] = bVar59;
    auVar14[0xf] = bVar60;
    auVar18[1] = uVar80;
    auVar18[0] = uVar79;
    auVar18[2] = uVar81;
    auVar18[3] = uVar82;
    auVar18[4] = uVar83;
    auVar18[5] = uVar84;
    auVar18[6] = uVar85;
    auVar18[7] = uVar86;
    auVar18._8_8_ = uVar61;
    auVar113 = NEON_uabd(auVar18,auVar14,1);
    auVar95 = NEON_umax(auVar115,auVar95,1);
    auVar12[1] = uVar64;
    auVar12[0] = uVar63;
    auVar12[2] = uVar65;
    auVar12[3] = uVar66;
    auVar12[4] = uVar67;
    auVar12[5] = uVar68;
    auVar12[6] = uVar69;
    auVar12[7] = uVar70;
    auVar12[8] = bVar45;
    auVar12[9] = bVar46;
    auVar12[10] = bVar47;
    auVar12[0xb] = bVar48;
    auVar12[0xc] = bVar49;
    auVar12[0xd] = bVar50;
    auVar12[0xe] = bVar51;
    auVar12[0xf] = bVar52;
    auVar15[1] = uVar72;
    auVar15[0] = uVar71;
    auVar15[2] = uVar73;
    auVar15[3] = uVar74;
    auVar15[4] = uVar75;
    auVar15[5] = uVar76;
    auVar15[6] = uVar77;
    auVar15[7] = uVar78;
    auVar15[8] = bVar53;
    auVar15[9] = bVar54;
    auVar15[10] = bVar55;
    auVar15[0xb] = bVar56;
    auVar15[0xc] = bVar57;
    auVar15[0xd] = bVar58;
    auVar15[0xe] = bVar59;
    auVar15[0xf] = bVar60;
    auVar115 = NEON_uabd(auVar15,auVar12,1);
    auVar110 = NEON_umax(auVar100,auVar110,1);
    auVar113 = NEON_umax(auVar113,auVar115,1);
    auVar95 = NEON_umax(auVar95,auVar110,1);
    auVar13[1] = uVar64;
    auVar13[0] = uVar63;
    auVar13[2] = uVar65;
    auVar13[3] = uVar66;
    auVar13[4] = uVar67;
    auVar13[5] = uVar68;
    auVar13[6] = uVar69;
    auVar13[7] = uVar70;
    auVar13[8] = bVar45;
    auVar13[9] = bVar46;
    auVar13[10] = bVar47;
    auVar13[0xb] = bVar48;
    auVar13[0xc] = bVar49;
    auVar13[0xd] = bVar50;
    auVar13[0xe] = bVar51;
    auVar13[0xf] = bVar52;
    auVar110 = NEON_uabd(auVar111,auVar13,1);
    auVar16[1] = uVar72;
    auVar16[0] = uVar71;
    auVar16[2] = uVar73;
    auVar16[3] = uVar74;
    auVar16[4] = uVar75;
    auVar16[5] = uVar76;
    auVar16[6] = uVar77;
    auVar16[7] = uVar78;
    auVar16[8] = bVar53;
    auVar16[9] = bVar54;
    auVar16[10] = bVar55;
    auVar16[0xb] = bVar56;
    auVar16[0xc] = bVar57;
    auVar16[0xd] = bVar58;
    auVar16[0xe] = bVar59;
    auVar16[0xf] = bVar60;
    auVar117 = NEON_uabd(auVar96,auVar16,1);
    auVar95 = NEON_umax(auVar95,auVar113,1);
    auVar110 = NEON_uqadd(auVar110,auVar110,1);
    auVar114[0] = auVar117[0] >> 1;
    auVar114[1] = auVar117[1] >> 1;
    auVar114[2] = auVar117[2] >> 1;
    auVar114[3] = auVar117[3] >> 1;
    auVar114[4] = auVar117[4] >> 1;
    auVar114[5] = auVar117[5] >> 1;
    auVar114[6] = auVar117[6] >> 1;
    auVar114[7] = auVar117[7] >> 1;
    auVar114[8] = auVar117[8] >> 1;
    auVar114[9] = auVar117[9] >> 1;
    auVar114[10] = auVar117[10] >> 1;
    auVar114[0xb] = auVar117[0xb] >> 1;
    auVar114[0xc] = auVar117[0xc] >> 1;
    auVar114[0xd] = auVar117[0xd] >> 1;
    auVar114[0xe] = auVar117[0xe] >> 1;
    auVar114[0xf] = auVar117[0xf] >> 1;
    auVar110 = NEON_uqadd(auVar110,auVar114,1);
    auVar116._0_8_ = auVar96._0_8_ ^ 0x8080808080808080;
    auVar116[8] = auVar96[8] ^ 0x80;
    auVar116[9] = auVar96[9] ^ 0x80;
    auVar116[10] = auVar96[10] ^ 0x80;
    auVar116[0xb] = auVar96[0xb] ^ 0x80;
    auVar116[0xc] = auVar96[0xc] ^ 0x80;
    auVar116[0xd] = auVar96[0xd] ^ 0x80;
    auVar116[0xe] = auVar96[0xe] ^ 0x80;
    auVar116[0xf] = auVar96[0xf] ^ 0x80;
    auVar32._0_8_ = auVar111._0_8_ ^ 0x8080808080808080;
    auVar32[8] = auVar111[8] ^ 0x80;
    auVar32[9] = auVar111[9] ^ 0x80;
    auVar32[10] = auVar111[10] ^ 0x80;
    auVar32[0xb] = auVar111[0xb] ^ 0x80;
    auVar32[0xc] = auVar111[0xc] ^ 0x80;
    auVar32[0xd] = auVar111[0xd] ^ 0x80;
    auVar32[0xe] = auVar111[0xe] ^ 0x80;
    auVar32[0xf] = auVar111[0xf] ^ 0x80;
    auVar33._0_8_ =
         CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,CONCAT13(uVar66,CONCAT12(
                                                  uVar65,CONCAT11(uVar64,uVar63))))))) ^
         0x8080808080808080;
    auVar33[8] = bVar45 ^ 0x80;
    auVar33[9] = bVar46 ^ 0x80;
    auVar33[10] = bVar47 ^ 0x80;
    auVar33[0xb] = bVar48 ^ 0x80;
    auVar33[0xc] = bVar49 ^ 0x80;
    auVar33[0xd] = bVar50 ^ 0x80;
    auVar33[0xe] = bVar51 ^ 0x80;
    auVar33[0xf] = bVar52 ^ 0x80;
    bVar45 = -(auVar110[0] <= param_3) & -(auVar95[0] <= param_4);
    bVar46 = -(auVar110[1] <= param_3) & -(auVar95[1] <= param_4);
    bVar47 = -(auVar110[2] <= param_3) & -(auVar95[2] <= param_4);
    bVar48 = -(auVar110[3] <= param_3) & -(auVar95[3] <= param_4);
    bVar49 = -(auVar110[4] <= param_3) & -(auVar95[4] <= param_4);
    bVar50 = -(auVar110[5] <= param_3) & -(auVar95[5] <= param_4);
    bVar51 = -(auVar110[6] <= param_3) & -(auVar95[6] <= param_4);
    bVar52 = -(auVar110[7] <= param_3) & -(auVar95[7] <= param_4);
    bVar36 = -(auVar110[8] <= param_3) & -(auVar95[8] <= param_4);
    bVar37 = -(auVar110[9] <= param_3) & -(auVar95[9] <= param_4);
    bVar38 = -(auVar110[10] <= param_3) & -(auVar95[10] <= param_4);
    bVar39 = -(auVar110[0xb] <= param_3) & -(auVar95[0xb] <= param_4);
    bVar40 = -(auVar110[0xc] <= param_3) & -(auVar95[0xc] <= param_4);
    bVar41 = -(auVar110[0xd] <= param_3) & -(auVar95[0xd] <= param_4);
    bVar42 = -(auVar110[0xe] <= param_3) & -(auVar95[0xe] <= param_4);
    bVar43 = -(auVar110[0xf] <= param_3) & -(auVar95[0xf] <= param_4);
    auVar44._0_8_ =
         CONCAT17(uVar78,CONCAT16(uVar77,CONCAT15(uVar76,CONCAT14(uVar75,CONCAT13(uVar74,CONCAT12(
                                                  uVar73,CONCAT11(uVar72,uVar71))))))) ^
         0x8080808080808080;
    auVar44[8] = bVar53 ^ 0x80;
    auVar44[9] = bVar54 ^ 0x80;
    auVar44[10] = bVar55 ^ 0x80;
    auVar44[0xb] = bVar56 ^ 0x80;
    auVar44[0xc] = bVar57 ^ 0x80;
    auVar44[0xd] = bVar58 ^ 0x80;
    auVar44[0xe] = bVar59 ^ 0x80;
    auVar44[0xf] = bVar60 ^ 0x80;
    auVar96 = NEON_sqsub(auVar33,auVar32,1);
    auVar111 = NEON_sqsub(auVar116,auVar44,1);
    auVar111 = NEON_sqadd(auVar111,auVar96,1);
    auVar111 = NEON_sqadd(auVar96,auVar111,1);
    bVar53 = bVar45 & (-(param_5 < auVar115[0]) | -(param_5 < auVar100[0]));
    bVar54 = bVar46 & (-(param_5 < auVar115[1]) | -(param_5 < auVar100[1]));
    bVar55 = bVar47 & (-(param_5 < auVar115[2]) | -(param_5 < auVar100[2]));
    bVar56 = bVar48 & (-(param_5 < auVar115[3]) | -(param_5 < auVar100[3]));
    bVar57 = bVar49 & (-(param_5 < auVar115[4]) | -(param_5 < auVar100[4]));
    bVar58 = bVar50 & (-(param_5 < auVar115[5]) | -(param_5 < auVar100[5]));
    bVar59 = bVar51 & (-(param_5 < auVar115[6]) | -(param_5 < auVar100[6]));
    bVar60 = bVar52 & (-(param_5 < auVar115[7]) | -(param_5 < auVar100[7]));
    bVar102 = bVar36 & (-(param_5 < auVar115[8]) | -(param_5 < auVar100[8]));
    bVar103 = bVar37 & (-(param_5 < auVar115[9]) | -(param_5 < auVar100[9]));
    bVar104 = bVar38 & (-(param_5 < auVar115[10]) | -(param_5 < auVar100[10]));
    bVar105 = bVar39 & (-(param_5 < auVar115[0xb]) | -(param_5 < auVar100[0xb]));
    bVar106 = bVar40 & (-(param_5 < auVar115[0xc]) | -(param_5 < auVar100[0xc]));
    bVar107 = bVar41 & (-(param_5 < auVar115[0xd]) | -(param_5 < auVar100[0xd]));
    bVar108 = bVar42 & (-(param_5 < auVar115[0xe]) | -(param_5 < auVar100[0xe]));
    bVar109 = bVar43 & (-(param_5 < auVar115[0xf]) | -(param_5 < auVar100[0xf]));
    auVar96 = NEON_sqadd(auVar96,auVar111,1);
    auVar97[0] = auVar96[0] & bVar53;
    auVar97[1] = auVar96[1] & bVar54;
    auVar97[2] = auVar96[2] & bVar55;
    auVar97[3] = auVar96[3] & bVar56;
    auVar97[4] = auVar96[4] & bVar57;
    auVar97[5] = auVar96[5] & bVar58;
    auVar97[6] = auVar96[6] & bVar59;
    auVar97[7] = auVar96[7] & bVar60;
    auVar97[8] = auVar96[8] & bVar102;
    auVar97[9] = auVar96[9] & bVar103;
    auVar97[10] = auVar96[10] & bVar104;
    auVar97[0xb] = auVar96[0xb] & bVar105;
    auVar97[0xc] = auVar96[0xc] & bVar106;
    auVar97[0xd] = auVar96[0xd] & bVar107;
    auVar97[0xe] = auVar96[0xe] & bVar108;
    auVar97[0xf] = auVar96[0xf] & bVar109;
    auVar110[8] = 3;
    auVar110._0_8_ = 0x303030303030303;
    auVar110[9] = 3;
    auVar110[10] = 3;
    auVar110[0xb] = 3;
    auVar110[0xc] = 3;
    auVar110[0xd] = 3;
    auVar110[0xe] = 3;
    auVar110[0xf] = 3;
    auVar111 = NEON_sqadd(auVar97,auVar110,1);
    auVar115[8] = 4;
    auVar115._0_8_ = 0x404040404040404;
    auVar115[9] = 4;
    auVar115[10] = 4;
    auVar115[0xb] = 4;
    auVar115[0xc] = 4;
    auVar115[0xd] = 4;
    auVar115[0xe] = 4;
    auVar115[0xf] = 4;
    auVar96 = NEON_sqadd(auVar97,auVar115,1);
    auVar112[0] = auVar111[0] >> 3;
    auVar112[1] = auVar111[1] >> 3;
    auVar112[2] = auVar111[2] >> 3;
    auVar112[3] = auVar111[3] >> 3;
    auVar112[4] = auVar111[4] >> 3;
    auVar112[5] = auVar111[5] >> 3;
    auVar112[6] = auVar111[6] >> 3;
    auVar112[7] = auVar111[7] >> 3;
    auVar112[8] = auVar111[8] >> 3;
    auVar112[9] = auVar111[9] >> 3;
    auVar112[10] = auVar111[10] >> 3;
    auVar112[0xb] = auVar111[0xb] >> 3;
    auVar112[0xc] = auVar111[0xc] >> 3;
    auVar112[0xd] = auVar111[0xd] >> 3;
    auVar112[0xe] = auVar111[0xe] >> 3;
    auVar112[0xf] = auVar111[0xf] >> 3;
    auVar98[0] = auVar96[0] >> 3;
    auVar98[1] = auVar96[1] >> 3;
    auVar98[2] = auVar96[2] >> 3;
    auVar98[3] = auVar96[3] >> 3;
    auVar98[4] = auVar96[4] >> 3;
    auVar98[5] = auVar96[5] >> 3;
    auVar98[6] = auVar96[6] >> 3;
    auVar98[7] = auVar96[7] >> 3;
    auVar98[8] = auVar96[8] >> 3;
    auVar98[9] = auVar96[9] >> 3;
    auVar98[10] = auVar96[10] >> 3;
    auVar98[0xb] = auVar96[0xb] >> 3;
    auVar98[0xc] = auVar96[0xc] >> 3;
    auVar98[0xd] = auVar96[0xd] >> 3;
    auVar98[0xe] = auVar96[0xe] >> 3;
    auVar98[0xf] = auVar96[0xf] >> 3;
    auVar96 = NEON_sqadd(auVar32,auVar112,1);
    auVar111 = NEON_sqsub(auVar33,auVar98,1);
    auVar95 = NEON_sqsub(auVar111,auVar96,1);
    auVar100 = NEON_sqadd(auVar95,auVar95,1);
    auVar95 = NEON_sqadd(auVar95,auVar100,1);
    auVar34[0] = auVar95[0] & (bVar53 ^ bVar45);
    auVar34[1] = auVar95[1] & (bVar54 ^ bVar46);
    auVar34[2] = auVar95[2] & (bVar55 ^ bVar47);
    auVar34[3] = auVar95[3] & (bVar56 ^ bVar48);
    auVar34[4] = auVar95[4] & (bVar57 ^ bVar49);
    auVar34[5] = auVar95[5] & (bVar58 ^ bVar50);
    auVar34[6] = auVar95[6] & (bVar59 ^ bVar51);
    auVar34[7] = auVar95[7] & (bVar60 ^ bVar52);
    auVar34[8] = auVar95[8] & (bVar102 ^ bVar36);
    auVar34[9] = auVar95[9] & (bVar103 ^ bVar37);
    auVar34[10] = auVar95[10] & (bVar104 ^ bVar38);
    auVar34[0xb] = auVar95[0xb] & (bVar105 ^ bVar39);
    auVar34[0xc] = auVar95[0xc] & (bVar106 ^ bVar40);
    auVar34[0xd] = auVar95[0xd] & (bVar107 ^ bVar41);
    auVar34[0xe] = auVar95[0xe] & (bVar108 ^ bVar42);
    auVar34[0xf] = auVar95[0xf] & (bVar109 ^ bVar43);
    auVar117[8] = 4;
    auVar117._0_8_ = 0x404040404040404;
    auVar117[9] = 4;
    auVar117[10] = 4;
    auVar117[0xb] = 4;
    auVar117[0xc] = 4;
    auVar117[0xd] = 4;
    auVar117[0xe] = 4;
    auVar117[0xf] = 4;
    auVar100 = NEON_sqadd(auVar34,auVar117,1);
    auVar113[8] = 3;
    auVar113._0_8_ = 0x303030303030303;
    auVar113[9] = 3;
    auVar113[10] = 3;
    auVar113[0xb] = 3;
    auVar113[0xc] = 3;
    auVar113[0xd] = 3;
    auVar113[0xe] = 3;
    auVar113[0xf] = 3;
    auVar95 = NEON_sqadd(auVar34,auVar113,1);
    auVar118[0] = auVar100[0] >> 3;
    auVar118[1] = auVar100[1] >> 3;
    auVar118[2] = auVar100[2] >> 3;
    auVar118[3] = auVar100[3] >> 3;
    auVar118[4] = auVar100[4] >> 3;
    auVar118[5] = auVar100[5] >> 3;
    auVar118[6] = auVar100[6] >> 3;
    auVar118[7] = auVar100[7] >> 3;
    auVar118[8] = auVar100[8] >> 3;
    auVar118[9] = auVar100[9] >> 3;
    auVar118[10] = auVar100[10] >> 3;
    auVar118[0xb] = auVar100[0xb] >> 3;
    auVar118[0xc] = auVar100[0xc] >> 3;
    auVar118[0xd] = auVar100[0xd] >> 3;
    auVar118[0xe] = auVar100[0xe] >> 3;
    auVar118[0xf] = auVar100[0xf] >> 3;
    auVar35[0] = auVar95[0] >> 3;
    auVar35[1] = auVar95[1] >> 3;
    auVar35[2] = auVar95[2] >> 3;
    auVar35[3] = auVar95[3] >> 3;
    auVar35[4] = auVar95[4] >> 3;
    auVar35[5] = auVar95[5] >> 3;
    auVar35[6] = auVar95[6] >> 3;
    auVar35[7] = auVar95[7] >> 3;
    auVar35[8] = auVar95[8] >> 3;
    auVar35[9] = auVar95[9] >> 3;
    auVar35[10] = auVar95[10] >> 3;
    auVar35[0xb] = auVar95[0xb] >> 3;
    auVar35[0xc] = auVar95[0xc] >> 3;
    auVar35[0xd] = auVar95[0xd] >> 3;
    auVar35[0xe] = auVar95[0xe] >> 3;
    auVar35[0xf] = auVar95[0xf] >> 3;
    auVar100 = NEON_srshr(auVar118,1,1);
    auVar96 = NEON_sqadd(auVar96,auVar35,1);
    auVar101._0_8_ = auVar96._0_8_ ^ 0x8080808080808080;
    auVar101[8] = auVar96[8] ^ 0x80;
    auVar101[9] = auVar96[9] ^ 0x80;
    auVar101[10] = auVar96[10] ^ 0x80;
    auVar101[0xb] = auVar96[0xb] ^ 0x80;
    auVar101[0xc] = auVar96[0xc] ^ 0x80;
    auVar101[0xd] = auVar96[0xd] ^ 0x80;
    auVar101[0xe] = auVar96[0xe] ^ 0x80;
    auVar101[0xf] = auVar96[0xf] ^ 0x80;
    auVar96 = NEON_sqsub(auVar111,auVar118,1);
    auVar95._0_8_ = auVar96._0_8_ ^ 0x8080808080808080;
    auVar95[8] = auVar96[8] ^ 0x80;
    auVar95[9] = auVar96[9] ^ 0x80;
    auVar95[10] = auVar96[10] ^ 0x80;
    auVar95[0xb] = auVar96[0xb] ^ 0x80;
    auVar95[0xc] = auVar96[0xc] ^ 0x80;
    auVar95[0xd] = auVar96[0xd] ^ 0x80;
    auVar95[0xe] = auVar96[0xe] ^ 0x80;
    auVar95[0xf] = auVar96[0xf] ^ 0x80;
    auVar96 = NEON_sqadd(auVar116,auVar100,1);
    auVar99._0_8_ = auVar96._0_8_ ^ 0x8080808080808080;
    auVar99[8] = auVar96[8] ^ 0x80;
    auVar99[9] = auVar96[9] ^ 0x80;
    auVar99[10] = auVar96[10] ^ 0x80;
    auVar99[0xb] = auVar96[0xb] ^ 0x80;
    auVar99[0xc] = auVar96[0xc] ^ 0x80;
    auVar99[0xd] = auVar96[0xd] ^ 0x80;
    auVar99[0xe] = auVar96[0xe] ^ 0x80;
    auVar99[0xf] = auVar96[0xf] ^ 0x80;
    auVar96 = NEON_sqsub(auVar44,auVar100,1);
    auVar100._0_8_ = auVar96._0_8_ ^ 0x8080808080808080;
    auVar100[8] = auVar96[8] ^ 0x80;
    auVar100[9] = auVar96[9] ^ 0x80;
    auVar100[10] = auVar96[10] ^ 0x80;
    auVar100[0xb] = auVar96[0xb] ^ 0x80;
    auVar100[0xc] = auVar96[0xc] ^ 0x80;
    auVar100[0xd] = auVar96[0xd] ^ 0x80;
    auVar100[0xe] = auVar96[0xe] ^ 0x80;
    auVar100[0xf] = auVar96[0xf] ^ 0x80;
    param_1[lVar28 + 2] = (char)auVar99._0_8_;
    param_1[lVar28 + 3] = (char)auVar101._0_8_;
    param_1[lVar28 + 4] = (char)auVar95._0_8_;
    param_1[lVar28 + 5] = (char)auVar100._0_8_;
    puVar1[lVar28 + 2] = (char)(auVar99._0_8_ >> 8);
    puVar1[lVar28 + 3] = (char)(auVar101._0_8_ >> 8);
    puVar1[lVar28 + 4] = (char)(auVar95._0_8_ >> 8);
    puVar1[lVar28 + 5] = (char)(auVar100._0_8_ >> 8);
    puVar2[lVar28 + 2] = (char)(auVar99._0_8_ >> 0x10);
    puVar2[lVar28 + 3] = (char)(auVar101._0_8_ >> 0x10);
    puVar2[lVar28 + 4] = (char)(auVar95._0_8_ >> 0x10);
    puVar2[lVar28 + 5] = (char)(auVar100._0_8_ >> 0x10);
    puVar8[lVar28 + 2] = (char)(auVar99._0_8_ >> 0x18);
    puVar8[lVar28 + 3] = (char)(auVar101._0_8_ >> 0x18);
    puVar8[lVar28 + 4] = (char)(auVar95._0_8_ >> 0x18);
    puVar8[lVar28 + 5] = (char)(auVar100._0_8_ >> 0x18);
    puVar4[lVar28 + 2] = (char)(auVar99._0_8_ >> 0x20);
    puVar4[lVar28 + 3] = (char)(auVar101._0_8_ >> 0x20);
    puVar4[lVar28 + 4] = (char)(auVar95._0_8_ >> 0x20);
    puVar4[lVar28 + 5] = (char)(auVar100._0_8_ >> 0x20);
    puVar9[lVar28 + 2] = (char)(auVar99._0_8_ >> 0x28);
    puVar9[lVar28 + 3] = (char)(auVar101._0_8_ >> 0x28);
    puVar9[lVar28 + 4] = (char)(auVar95._0_8_ >> 0x28);
    puVar9[lVar28 + 5] = (char)(auVar100._0_8_ >> 0x28);
    puVar10[lVar28 + 2] = (char)(auVar99._0_8_ >> 0x30);
    puVar10[lVar28 + 3] = (char)(auVar101._0_8_ >> 0x30);
    puVar10[lVar28 + 4] = (char)(auVar95._0_8_ >> 0x30);
    puVar10[lVar28 + 5] = (char)(auVar100._0_8_ >> 0x30);
    puVar11[lVar28 + 2] = (char)(auVar99._0_8_ >> 0x38);
    puVar11[lVar28 + 3] = (char)(auVar101._0_8_ >> 0x38);
    puVar11[lVar28 + 4] = (char)(auVar95._0_8_ >> 0x38);
    puVar11[lVar28 + 5] = (char)(auVar100._0_8_ >> 0x38);
    auVar96 = NEON_ext(auVar99,auVar99,8,1);
    auVar111 = NEON_ext(auVar101,auVar101,8,1);
    auVar110 = NEON_ext(auVar95,auVar95,8,1);
    auVar113 = NEON_ext(auVar100,auVar100,8,1);
    puVar6[lVar28 + 2] = auVar96[0];
    puVar6[lVar28 + 3] = auVar111[0];
    puVar6[lVar28 + 4] = auVar110[0];
    puVar6[lVar28 + 5] = auVar113[0];
    param_1[lVar20 + 2] = auVar96[1];
    param_1[lVar20 + 3] = auVar111[1];
    param_1[lVar20 + 4] = auVar110[1];
    param_1[lVar20 + 5] = auVar113[1];
    param_1[lVar26 + 2] = auVar96[2];
    param_1[lVar26 + 3] = auVar111[2];
    param_1[lVar26 + 4] = auVar110[2];
    param_1[lVar26 + 5] = auVar113[2];
    param_1[lVar25 + 2] = auVar96[3];
    param_1[lVar25 + 3] = auVar111[3];
    param_1[lVar25 + 4] = auVar110[3];
    param_1[lVar25 + 5] = auVar113[3];
    param_1[lVar24 + 2] = auVar96[4];
    param_1[lVar24 + 3] = auVar111[4];
    param_1[lVar24 + 4] = auVar110[4];
    param_1[lVar24 + 5] = auVar113[4];
    param_1[lVar23 + 2] = auVar96[5];
    param_1[lVar23 + 3] = auVar111[5];
    param_1[lVar23 + 4] = auVar110[5];
    param_1[lVar23 + 5] = auVar113[5];
    param_1[lVar22 + 2] = auVar96[6];
    param_1[lVar22 + 3] = auVar111[6];
    param_1[lVar22 + 4] = auVar110[6];
    param_1[lVar22 + 5] = auVar113[6];
    param_1[lVar21 + 2] = auVar96[7];
    param_1[lVar21 + 3] = auVar111[7];
    param_1[lVar21 + 4] = auVar110[7];
    param_1[lVar21 + 5] = auVar113[7];
    lVar28 = lVar28 + 4;
    auVar96[1] = uVar80;
    auVar96[0] = uVar79;
    auVar96[2] = uVar81;
    auVar96[3] = uVar82;
    auVar96[4] = uVar83;
    auVar96[5] = uVar84;
    auVar96[6] = uVar85;
    auVar96[7] = uVar86;
    auVar96._8_8_ = uVar61;
    auVar111[1] = uVar88;
    auVar111[0] = uVar87;
    auVar111[2] = uVar89;
    auVar111[3] = uVar90;
    auVar111[4] = uVar91;
    auVar111[5] = uVar92;
    auVar111[6] = uVar93;
    auVar111[7] = uVar94;
    auVar111._8_8_ = uVar62;
  } while ((int)lVar28 != 0xc);
  return;
}




void FUN_1010c41e4(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  iVar16 = (int)param_3;
  auVar26._0_8_ = *(undefined8 *)((long)param_1 - (long)(iVar16 << 2));
  auVar26._8_8_ = *(undefined8 *)((long)param_2 - (long)(iVar16 << 2));
  lVar1 = (-(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1) + (long)iVar16
  ;
  auVar19._0_8_ = *(undefined8 *)((long)param_1 - lVar1);
  auVar19._8_8_ = *(undefined8 *)((long)param_2 - lVar1);
  puVar18 = (undefined8 *)((long)param_1 + (long)iVar16 * -2);
  uVar20 = *puVar18;
  puVar17 = (undefined8 *)((long)param_2 + (long)iVar16 * -2);
  uVar21 = *puVar17;
  uVar22 = *(undefined8 *)((long)param_1 - (long)iVar16);
  uVar23 = *(undefined8 *)((long)param_2 - (long)iVar16);
  uVar24 = *(undefined8 *)((long)param_1 + (long)iVar16);
  uVar25 = *(undefined8 *)((long)param_2 + (long)iVar16);
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar16 * 2);
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar16 * 2);
  auVar28._0_8_ = *(undefined8 *)((long)param_1 + lVar1);
  auVar28._8_8_ = *(undefined8 *)((long)param_2 + lVar1);
  auVar27 = NEON_uabd(auVar26,auVar19,1);
  auVar30._8_8_ = uVar21;
  auVar30._0_8_ = uVar20;
  auVar30 = NEON_uabd(auVar19,auVar30,1);
  auVar29._8_8_ = uVar21;
  auVar29._0_8_ = uVar20;
  auVar32._8_8_ = uVar23;
  auVar32._0_8_ = uVar22;
  auVar32 = NEON_uabd(auVar29,auVar32,1);
  auVar8._8_8_ = *puVar3;
  auVar8._0_8_ = *puVar2;
  auVar29 = NEON_uabd(auVar28,auVar8,1);
  auVar5._8_8_ = uVar25;
  auVar5._0_8_ = uVar24;
  auVar9._8_8_ = *puVar3;
  auVar9._0_8_ = *puVar2;
  auVar33 = NEON_uabd(auVar9,auVar5,1);
  auVar34._8_8_ = *param_2;
  auVar34._0_8_ = *param_1;
  auVar6._8_8_ = uVar25;
  auVar6._0_8_ = uVar24;
  auVar34 = NEON_uabd(auVar6,auVar34,1);
  auVar30 = NEON_umax(auVar27,auVar30,1);
  auVar29 = NEON_umax(auVar32,auVar29,1);
  auVar27 = NEON_umax(auVar33,auVar34,1);
  auVar30 = NEON_umax(auVar30,auVar29,1);
  NEON_umax(auVar30,auVar27,1);
  auVar33._8_8_ = uVar23;
  auVar33._0_8_ = uVar22;
  auVar4._8_8_ = *param_2;
  auVar4._0_8_ = *param_1;
  auVar30 = NEON_uabd(auVar33,auVar4,1);
  auVar27._8_8_ = uVar21;
  auVar27._0_8_ = uVar20;
  auVar7._8_8_ = uVar25;
  auVar7._0_8_ = uVar24;
  auVar29 = NEON_uabd(auVar27,auVar7,1);
  auVar30 = NEON_uqadd(auVar30,auVar30,1);
  auVar31[0] = auVar29[0] >> 1;
  auVar31[1] = auVar29[1] >> 1;
  auVar31[2] = auVar29[2] >> 1;
  auVar31[3] = auVar29[3] >> 1;
  auVar31[4] = auVar29[4] >> 1;
  auVar31[5] = auVar29[5] >> 1;
  auVar31[6] = auVar29[6] >> 1;
  auVar31[7] = auVar29[7] >> 1;
  auVar31[8] = auVar29[8] >> 1;
  auVar31[9] = auVar29[9] >> 1;
  auVar31[10] = auVar29[10] >> 1;
  auVar31[0xb] = auVar29[0xb] >> 1;
  auVar31[0xc] = auVar29[0xc] >> 1;
  auVar31[0xd] = auVar29[0xd] >> 1;
  auVar31[0xe] = auVar29[0xe] >> 1;
  auVar31[0xf] = auVar29[0xf] >> 1;
  NEON_uqadd(auVar30,auVar31,1);
  FUN_1010c4db0(auStack_70,&local_80,auStack_90,&local_a0,auStack_b0,&local_c0);
  auVar15._8_8_ = uStack_78;
  auVar15._0_8_ = local_80;
  auVar14._8_8_ = uStack_78;
  auVar14._0_8_ = local_80;
  *(long *)((long)puVar18 - (long)iVar16) = auStack_70._0_8_;
  *puVar18 = local_80;
  auVar30 = NEON_ext(auStack_70,auStack_70,8,1);
  *(long *)((long)puVar17 - (long)iVar16) = auVar30._0_8_;
  auVar30 = NEON_ext(auVar14,auVar15,8,1);
  *puVar17 = auVar30._0_8_;
  auVar13._8_8_ = uStack_98;
  auVar13._0_8_ = local_a0;
  auVar12._8_8_ = uStack_98;
  auVar12._0_8_ = local_a0;
  *(undefined8 *)((long)param_1 - (long)iVar16) = auStack_90._0_8_;
  *param_1 = local_a0;
  auVar30 = NEON_ext(auStack_90,auStack_90,8,1);
  *(undefined8 *)((long)param_2 - (long)iVar16) = auVar30._0_8_;
  auVar30 = NEON_ext(auVar12,auVar13,8,1);
  *param_2 = auVar30._0_8_;
  auVar11._8_8_ = uStack_b8;
  auVar11._0_8_ = local_c0;
  auVar10._8_8_ = uStack_b8;
  auVar10._0_8_ = local_c0;
  *(long *)((long)puVar2 - (long)iVar16) = auStack_b0._0_8_;
  *puVar2 = local_c0;
  auVar30 = NEON_ext(auStack_b0,auStack_b0,8,1);
  *(long *)((long)puVar3 - (long)iVar16) = auVar30._0_8_;
  auVar30 = NEON_ext(auVar10,auVar11,8,1);
  *puVar3 = auVar30._0_8_;
  return;
}




void FUN_1010c43a8(undefined8 *param_1,undefined8 *param_2,uint param_3,byte param_4,byte param_5,
                  byte param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar31;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar51;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  puVar1 = (ulong *)((long)param_1 + (long)(int)param_3 * 4);
  puVar2 = (undefined8 *)((long)param_2 + (long)(int)param_3 * 4);
  auVar78._0_8_ = *param_1;
  auVar78._8_8_ = *param_2;
  uVar8 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
  lVar3 = uVar8 + (long)(int)param_3;
  auVar32._0_8_ = *(undefined8 *)((long)puVar1 - lVar3);
  auVar32._8_8_ = *(undefined8 *)((long)puVar2 - lVar3);
  auVar9._0_8_ = *(ulong *)((long)puVar1 + (long)(int)param_3 * -2);
  uVar52 = *(undefined8 *)((long)puVar2 + (long)(int)param_3 * -2);
  auVar9._8_8_ = uVar52;
  puVar7 = (ulong *)((long)puVar1 - (long)(int)param_3);
  auVar53._0_8_ = *puVar7;
  puVar6 = (undefined8 *)((long)puVar2 - (long)(int)param_3);
  uVar56 = *puVar6;
  auVar53._8_8_ = uVar56;
  auVar57._0_8_ = *puVar1;
  uVar4 = *puVar2;
  auVar57._8_8_ = uVar4;
  uVar5 = *(ulong *)((long)puVar1 + (long)(int)param_3);
  uVar67 = *(undefined8 *)((long)puVar2 + (long)(int)param_3);
  bVar59 = (byte)uVar67;
  bVar60 = (byte)((ulong)uVar67 >> 8);
  bVar61 = (byte)((ulong)uVar67 >> 0x10);
  bVar62 = (byte)((ulong)uVar67 >> 0x18);
  bVar63 = (byte)((ulong)uVar67 >> 0x20);
  bVar64 = (byte)((ulong)uVar67 >> 0x28);
  bVar65 = (byte)((ulong)uVar67 >> 0x30);
  bVar66 = (byte)((ulong)uVar67 >> 0x38);
  auVar68._0_8_ = *(undefined8 *)((long)puVar1 + uVar8);
  auVar68._8_8_ = *(undefined8 *)((long)puVar2 + uVar8);
  auVar70._0_8_ = *(undefined8 *)((long)puVar1 + lVar3);
  auVar70._8_8_ = *(undefined8 *)((long)puVar2 + lVar3);
  auVar11 = NEON_uabd(auVar78,auVar32,1);
  auVar33 = NEON_uabd(auVar32,auVar9,1);
  auVar76 = NEON_uabd(auVar9,auVar53,1);
  auVar71 = NEON_uabd(auVar70,auVar68,1);
  auVar12[8] = bVar59;
  auVar12._0_8_ = uVar5;
  auVar12[9] = bVar60;
  auVar12[10] = bVar61;
  auVar12[0xb] = bVar62;
  auVar12[0xc] = bVar63;
  auVar12[0xd] = bVar64;
  auVar12[0xe] = bVar65;
  auVar12[0xf] = bVar66;
  auVar69 = NEON_uabd(auVar68,auVar12,1);
  auVar34[8] = bVar59;
  auVar34._0_8_ = uVar5;
  auVar34[9] = bVar60;
  auVar34[10] = bVar61;
  auVar34[0xb] = bVar62;
  auVar34[0xc] = bVar63;
  auVar34[0xd] = bVar64;
  auVar34[0xe] = bVar65;
  auVar34[0xf] = bVar66;
  auVar78 = NEON_uabd(auVar34,auVar57,1);
  auVar12 = NEON_umax(auVar11,auVar33,1);
  auVar34 = NEON_umax(auVar76,auVar71,1);
  auVar11 = NEON_umax(auVar69,auVar78,1);
  auVar12 = NEON_umax(auVar12,auVar34,1);
  auVar12 = NEON_umax(auVar12,auVar11,1);
  auVar34 = NEON_uabd(auVar53,auVar57,1);
  auVar11[8] = bVar59;
  auVar11._0_8_ = uVar5;
  auVar11[9] = bVar60;
  auVar11[10] = bVar61;
  auVar11[0xb] = bVar62;
  auVar11[0xc] = bVar63;
  auVar11[0xd] = bVar64;
  auVar11[0xe] = bVar65;
  auVar11[0xf] = bVar66;
  auVar11 = NEON_uabd(auVar9,auVar11,1);
  auVar34 = NEON_uqadd(auVar34,auVar34,1);
  auVar72[0] = auVar11[0] >> 1;
  auVar72[1] = auVar11[1] >> 1;
  auVar72[2] = auVar11[2] >> 1;
  auVar72[3] = auVar11[3] >> 1;
  auVar72[4] = auVar11[4] >> 1;
  auVar72[5] = auVar11[5] >> 1;
  auVar72[6] = auVar11[6] >> 1;
  auVar72[7] = auVar11[7] >> 1;
  auVar72[8] = auVar11[8] >> 1;
  auVar72[9] = auVar11[9] >> 1;
  auVar72[10] = auVar11[10] >> 1;
  auVar72[0xb] = auVar11[0xb] >> 1;
  auVar72[0xc] = auVar11[0xc] >> 1;
  auVar72[0xd] = auVar11[0xd] >> 1;
  auVar72[0xe] = auVar11[0xe] >> 1;
  auVar72[0xf] = auVar11[0xf] >> 1;
  auVar34 = NEON_uqadd(auVar34,auVar72,1);
  bVar10 = -(auVar34[0] <= param_4) & -(auVar12[0] <= param_5);
  bVar16 = -(auVar34[1] <= param_4) & -(auVar12[1] <= param_5);
  bVar17 = -(auVar34[2] <= param_4) & -(auVar12[2] <= param_5);
  bVar18 = -(auVar34[3] <= param_4) & -(auVar12[3] <= param_5);
  bVar19 = -(auVar34[4] <= param_4) & -(auVar12[4] <= param_5);
  bVar20 = -(auVar34[5] <= param_4) & -(auVar12[5] <= param_5);
  bVar21 = -(auVar34[6] <= param_4) & -(auVar12[6] <= param_5);
  bVar22 = -(auVar34[7] <= param_4) & -(auVar12[7] <= param_5);
  bVar23 = -(auVar34[8] <= param_4) & -(auVar12[8] <= param_5);
  bVar24 = -(auVar34[9] <= param_4) & -(auVar12[9] <= param_5);
  bVar25 = -(auVar34[10] <= param_4) & -(auVar12[10] <= param_5);
  bVar26 = -(auVar34[0xb] <= param_4) & -(auVar12[0xb] <= param_5);
  bVar27 = -(auVar34[0xc] <= param_4) & -(auVar12[0xc] <= param_5);
  bVar28 = -(auVar34[0xd] <= param_4) & -(auVar12[0xd] <= param_5);
  bVar29 = -(auVar34[0xe] <= param_4) & -(auVar12[0xe] <= param_5);
  bVar30 = -(auVar34[0xf] <= param_4) & -(auVar12[0xf] <= param_5);
  auVar71._0_8_ = auVar9._0_8_ ^ 0x8080808080808080;
  auVar71[8] = (byte)uVar52 ^ 0x80;
  auVar71[9] = (byte)((ulong)uVar52 >> 8) ^ 0x80;
  auVar71[10] = (byte)((ulong)uVar52 >> 0x10) ^ 0x80;
  auVar71[0xb] = (byte)((ulong)uVar52 >> 0x18) ^ 0x80;
  auVar71[0xc] = (byte)((ulong)uVar52 >> 0x20) ^ 0x80;
  auVar71[0xd] = (byte)((ulong)uVar52 >> 0x28) ^ 0x80;
  auVar71[0xe] = (byte)((ulong)uVar52 >> 0x30) ^ 0x80;
  auVar71[0xf] = (byte)((ulong)uVar52 >> 0x38) ^ 0x80;
  auVar54._0_8_ = auVar53._0_8_ ^ 0x8080808080808080;
  auVar54[8] = (byte)uVar56 ^ 0x80;
  auVar54[9] = (byte)((ulong)uVar56 >> 8) ^ 0x80;
  auVar54[10] = (byte)((ulong)uVar56 >> 0x10) ^ 0x80;
  auVar54[0xb] = (byte)((ulong)uVar56 >> 0x18) ^ 0x80;
  auVar54[0xc] = (byte)((ulong)uVar56 >> 0x20) ^ 0x80;
  auVar54[0xd] = (byte)((ulong)uVar56 >> 0x28) ^ 0x80;
  auVar54[0xe] = (byte)((ulong)uVar56 >> 0x30) ^ 0x80;
  auVar54[0xf] = (byte)((ulong)uVar56 >> 0x38) ^ 0x80;
  auVar58._0_8_ = auVar57._0_8_ ^ 0x8080808080808080;
  auVar58[8] = (byte)uVar4 ^ 0x80;
  auVar58[9] = (byte)((ulong)uVar4 >> 8) ^ 0x80;
  auVar58[10] = (byte)((ulong)uVar4 >> 0x10) ^ 0x80;
  auVar58[0xb] = (byte)((ulong)uVar4 >> 0x18) ^ 0x80;
  auVar58[0xc] = (byte)((ulong)uVar4 >> 0x20) ^ 0x80;
  auVar58[0xd] = (byte)((ulong)uVar4 >> 0x28) ^ 0x80;
  auVar58[0xe] = (byte)((ulong)uVar4 >> 0x30) ^ 0x80;
  auVar58[0xf] = (byte)((ulong)uVar4 >> 0x38) ^ 0x80;
  bVar31 = bVar10 & (-(param_6 < auVar78[0]) | -(param_6 < auVar76[0]));
  bVar37 = bVar16 & (-(param_6 < auVar78[1]) | -(param_6 < auVar76[1]));
  bVar38 = bVar17 & (-(param_6 < auVar78[2]) | -(param_6 < auVar76[2]));
  bVar39 = bVar18 & (-(param_6 < auVar78[3]) | -(param_6 < auVar76[3]));
  bVar40 = bVar19 & (-(param_6 < auVar78[4]) | -(param_6 < auVar76[4]));
  bVar41 = bVar20 & (-(param_6 < auVar78[5]) | -(param_6 < auVar76[5]));
  bVar42 = bVar21 & (-(param_6 < auVar78[6]) | -(param_6 < auVar76[6]));
  bVar43 = bVar22 & (-(param_6 < auVar78[7]) | -(param_6 < auVar76[7]));
  bVar44 = bVar23 & (-(param_6 < auVar78[8]) | -(param_6 < auVar76[8]));
  bVar45 = bVar24 & (-(param_6 < auVar78[9]) | -(param_6 < auVar76[9]));
  bVar46 = bVar25 & (-(param_6 < auVar78[10]) | -(param_6 < auVar76[10]));
  bVar47 = bVar26 & (-(param_6 < auVar78[0xb]) | -(param_6 < auVar76[0xb]));
  bVar48 = bVar27 & (-(param_6 < auVar78[0xc]) | -(param_6 < auVar76[0xc]));
  bVar49 = bVar28 & (-(param_6 < auVar78[0xd]) | -(param_6 < auVar76[0xd]));
  bVar50 = bVar29 & (-(param_6 < auVar78[0xe]) | -(param_6 < auVar76[0xe]));
  bVar51 = bVar30 & (-(param_6 < auVar78[0xf]) | -(param_6 < auVar76[0xf]));
  auVar12 = NEON_sqsub(auVar58,auVar54,1);
  auVar33[8] = bVar59 ^ 0x80;
  auVar33._0_8_ = uVar5 ^ 0x8080808080808080;
  auVar33[9] = bVar60 ^ 0x80;
  auVar33[10] = bVar61 ^ 0x80;
  auVar33[0xb] = bVar62 ^ 0x80;
  auVar33[0xc] = bVar63 ^ 0x80;
  auVar33[0xd] = bVar64 ^ 0x80;
  auVar33[0xe] = bVar65 ^ 0x80;
  auVar33[0xf] = bVar66 ^ 0x80;
  auVar34 = NEON_sqsub(auVar71,auVar33,1);
  auVar34 = NEON_sqadd(auVar34,auVar12,1);
  auVar34 = NEON_sqadd(auVar12,auVar34,1);
  auVar12 = NEON_sqadd(auVar12,auVar34,1);
  auVar73[0] = auVar12[0] & bVar31;
  auVar73[1] = auVar12[1] & bVar37;
  auVar73[2] = auVar12[2] & bVar38;
  auVar73[3] = auVar12[3] & bVar39;
  auVar73[4] = auVar12[4] & bVar40;
  auVar73[5] = auVar12[5] & bVar41;
  auVar73[6] = auVar12[6] & bVar42;
  auVar73[7] = auVar12[7] & bVar43;
  auVar73[8] = auVar12[8] & bVar44;
  auVar73[9] = auVar12[9] & bVar45;
  auVar73[10] = auVar12[10] & bVar46;
  auVar73[0xb] = auVar12[0xb] & bVar47;
  auVar73[0xc] = auVar12[0xc] & bVar48;
  auVar73[0xd] = auVar12[0xd] & bVar49;
  auVar73[0xe] = auVar12[0xe] & bVar50;
  auVar73[0xf] = auVar12[0xf] & bVar51;
  auVar75[8] = 3;
  auVar75._0_8_ = 0x303030303030303;
  auVar75[9] = 3;
  auVar75[10] = 3;
  auVar75[0xb] = 3;
  auVar75[0xc] = 3;
  auVar75[0xd] = 3;
  auVar75[0xe] = 3;
  auVar75[0xf] = 3;
  auVar34 = NEON_sqadd(auVar73,auVar75,1);
  auVar79[8] = 4;
  auVar79._0_8_ = 0x404040404040404;
  auVar79[9] = 4;
  auVar79[10] = 4;
  auVar79[0xb] = 4;
  auVar79[0xc] = 4;
  auVar79[0xd] = 4;
  auVar79[0xe] = 4;
  auVar79[0xf] = 4;
  auVar12 = NEON_sqadd(auVar73,auVar79,1);
  auVar77[0] = auVar34[0] >> 3;
  auVar77[1] = auVar34[1] >> 3;
  auVar77[2] = auVar34[2] >> 3;
  auVar77[3] = auVar34[3] >> 3;
  auVar77[4] = auVar34[4] >> 3;
  auVar77[5] = auVar34[5] >> 3;
  auVar77[6] = auVar34[6] >> 3;
  auVar77[7] = auVar34[7] >> 3;
  auVar77[8] = auVar34[8] >> 3;
  auVar77[9] = auVar34[9] >> 3;
  auVar77[10] = auVar34[10] >> 3;
  auVar77[0xb] = auVar34[0xb] >> 3;
  auVar77[0xc] = auVar34[0xc] >> 3;
  auVar77[0xd] = auVar34[0xd] >> 3;
  auVar77[0xe] = auVar34[0xe] >> 3;
  auVar77[0xf] = auVar34[0xf] >> 3;
  auVar74[0] = auVar12[0] >> 3;
  auVar74[1] = auVar12[1] >> 3;
  auVar74[2] = auVar12[2] >> 3;
  auVar74[3] = auVar12[3] >> 3;
  auVar74[4] = auVar12[4] >> 3;
  auVar74[5] = auVar12[5] >> 3;
  auVar74[6] = auVar12[6] >> 3;
  auVar74[7] = auVar12[7] >> 3;
  auVar74[8] = auVar12[8] >> 3;
  auVar74[9] = auVar12[9] >> 3;
  auVar74[10] = auVar12[10] >> 3;
  auVar74[0xb] = auVar12[0xb] >> 3;
  auVar74[0xc] = auVar12[0xc] >> 3;
  auVar74[0xd] = auVar12[0xd] >> 3;
  auVar74[0xe] = auVar12[0xe] >> 3;
  auVar74[0xf] = auVar12[0xf] >> 3;
  auVar11 = NEON_sqadd(auVar54,auVar77,1);
  auVar33 = NEON_sqsub(auVar58,auVar74,1);
  auVar12 = NEON_sqsub(auVar33,auVar11,1);
  auVar34 = NEON_sqadd(auVar12,auVar12,1);
  auVar12 = NEON_sqadd(auVar12,auVar34,1);
  auVar13[0] = auVar12[0] & (bVar31 ^ bVar10);
  auVar13[1] = auVar12[1] & (bVar37 ^ bVar16);
  auVar13[2] = auVar12[2] & (bVar38 ^ bVar17);
  auVar13[3] = auVar12[3] & (bVar39 ^ bVar18);
  auVar13[4] = auVar12[4] & (bVar40 ^ bVar19);
  auVar13[5] = auVar12[5] & (bVar41 ^ bVar20);
  auVar13[6] = auVar12[6] & (bVar42 ^ bVar21);
  auVar13[7] = auVar12[7] & (bVar43 ^ bVar22);
  auVar13[8] = auVar12[8] & (bVar44 ^ bVar23);
  auVar13[9] = auVar12[9] & (bVar45 ^ bVar24);
  auVar13[10] = auVar12[10] & (bVar46 ^ bVar25);
  auVar13[0xb] = auVar12[0xb] & (bVar47 ^ bVar26);
  auVar13[0xc] = auVar12[0xc] & (bVar48 ^ bVar27);
  auVar13[0xd] = auVar12[0xd] & (bVar49 ^ bVar28);
  auVar13[0xe] = auVar12[0xe] & (bVar50 ^ bVar29);
  auVar13[0xf] = auVar12[0xf] & (bVar51 ^ bVar30);
  auVar34 = NEON_sqadd(auVar13,auVar79,1);
  auVar12 = NEON_sqadd(auVar13,auVar75,1);
  auVar35[0] = auVar34[0] >> 3;
  auVar35[1] = auVar34[1] >> 3;
  auVar35[2] = auVar34[2] >> 3;
  auVar35[3] = auVar34[3] >> 3;
  auVar35[4] = auVar34[4] >> 3;
  auVar35[5] = auVar34[5] >> 3;
  auVar35[6] = auVar34[6] >> 3;
  auVar35[7] = auVar34[7] >> 3;
  auVar35[8] = auVar34[8] >> 3;
  auVar35[9] = auVar34[9] >> 3;
  auVar35[10] = auVar34[10] >> 3;
  auVar35[0xb] = auVar34[0xb] >> 3;
  auVar35[0xc] = auVar34[0xc] >> 3;
  auVar35[0xd] = auVar34[0xd] >> 3;
  auVar35[0xe] = auVar34[0xe] >> 3;
  auVar35[0xf] = auVar34[0xf] >> 3;
  auVar14[0] = auVar12[0] >> 3;
  auVar14[1] = auVar12[1] >> 3;
  auVar14[2] = auVar12[2] >> 3;
  auVar14[3] = auVar12[3] >> 3;
  auVar14[4] = auVar12[4] >> 3;
  auVar14[5] = auVar12[5] >> 3;
  auVar14[6] = auVar12[6] >> 3;
  auVar14[7] = auVar12[7] >> 3;
  auVar14[8] = auVar12[8] >> 3;
  auVar14[9] = auVar12[9] >> 3;
  auVar14[10] = auVar12[10] >> 3;
  auVar14[0xb] = auVar12[0xb] >> 3;
  auVar14[0xc] = auVar12[0xc] >> 3;
  auVar14[0xd] = auVar12[0xd] >> 3;
  auVar14[0xe] = auVar12[0xe] >> 3;
  auVar14[0xf] = auVar12[0xf] >> 3;
  auVar34 = NEON_srshr(auVar35,1,1);
  auVar12 = NEON_sqadd(auVar11,auVar14,1);
  auVar15._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar15[8] = auVar12[8] ^ 0x80;
  auVar15[9] = auVar12[9] ^ 0x80;
  auVar15[10] = auVar12[10] ^ 0x80;
  auVar15[0xb] = auVar12[0xb] ^ 0x80;
  auVar15[0xc] = auVar12[0xc] ^ 0x80;
  auVar15[0xd] = auVar12[0xd] ^ 0x80;
  auVar15[0xe] = auVar12[0xe] ^ 0x80;
  auVar15[0xf] = auVar12[0xf] ^ 0x80;
  auVar12 = NEON_sqsub(auVar33,auVar35,1);
  auVar36._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar36[8] = auVar12[8] ^ 0x80;
  auVar36[9] = auVar12[9] ^ 0x80;
  auVar36[10] = auVar12[10] ^ 0x80;
  auVar36[0xb] = auVar12[0xb] ^ 0x80;
  auVar36[0xc] = auVar12[0xc] ^ 0x80;
  auVar36[0xd] = auVar12[0xd] ^ 0x80;
  auVar36[0xe] = auVar12[0xe] ^ 0x80;
  auVar36[0xf] = auVar12[0xf] ^ 0x80;
  auVar12 = NEON_sqadd(auVar71,auVar34,1);
  auVar76._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar76[8] = auVar12[8] ^ 0x80;
  auVar76[9] = auVar12[9] ^ 0x80;
  auVar76[10] = auVar12[10] ^ 0x80;
  auVar76[0xb] = auVar12[0xb] ^ 0x80;
  auVar76[0xc] = auVar12[0xc] ^ 0x80;
  auVar76[0xd] = auVar12[0xd] ^ 0x80;
  auVar76[0xe] = auVar12[0xe] ^ 0x80;
  auVar76[0xf] = auVar12[0xf] ^ 0x80;
  auVar69[8] = bVar59 ^ 0x80;
  auVar69._0_8_ = uVar5 ^ 0x8080808080808080;
  auVar69[9] = bVar60 ^ 0x80;
  auVar69[10] = bVar61 ^ 0x80;
  auVar69[0xb] = bVar62 ^ 0x80;
  auVar69[0xc] = bVar63 ^ 0x80;
  auVar69[0xd] = bVar64 ^ 0x80;
  auVar69[0xe] = bVar65 ^ 0x80;
  auVar69[0xf] = bVar66 ^ 0x80;
  auVar12 = NEON_sqsub(auVar69,auVar34,1);
  *(ulong *)((long)puVar7 - (long)(int)param_3) = auVar76._0_8_;
  *puVar7 = auVar15._0_8_;
  auVar55._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar55[8] = auVar12[8] ^ 0x80;
  auVar55[9] = auVar12[9] ^ 0x80;
  auVar55[10] = auVar12[10] ^ 0x80;
  auVar55[0xb] = auVar12[0xb] ^ 0x80;
  auVar55[0xc] = auVar12[0xc] ^ 0x80;
  auVar55[0xd] = auVar12[0xd] ^ 0x80;
  auVar55[0xe] = auVar12[0xe] ^ 0x80;
  auVar55[0xf] = auVar12[0xf] ^ 0x80;
  auVar12 = NEON_ext(auVar76,auVar76,8,1);
  *(long *)((long)puVar6 - (long)(int)param_3) = auVar12._0_8_;
  auVar12 = NEON_ext(auVar15,auVar15,8,1);
  *puVar6 = auVar12._0_8_;
  *puVar1 = auVar36._0_8_;
  *(ulong *)((long)puVar1 + (long)(int)param_3) = auVar55._0_8_;
  auVar12 = NEON_ext(auVar36,auVar36,8,1);
  *puVar2 = auVar12._0_8_;
  auVar12 = NEON_ext(auVar55,auVar55,8,1);
  *(long *)((long)puVar2 + (long)(int)param_3) = auVar12._0_8_;
  return;
}




void FUN_1010c4568(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined3 uVar21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [11];
  undefined1 auVar26 [14];
  undefined1 auVar27 [11];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  int iVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  ulong uVar33;
  long lVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined2 uVar38;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined2 uVar46;
  undefined4 uVar39;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  byte bVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined8 uVar96;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar107 [16];
  undefined8 uVar111;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined8 uVar146;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar162 [16];
  undefined1 auVar168 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 uVar174;
  undefined1 uVar175;
  undefined1 uVar176;
  undefined1 uVar177;
  undefined2 uVar178;
  undefined4 uVar179;
  undefined8 uVar181;
  undefined1 auVar190 [16];
  undefined4 uVar191;
  undefined1 in_q17 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 in_q18 [16];
  undefined1 auVar198 [16];
  undefined1 auVar204 [16];
  undefined1 in_q19 [16];
  undefined1 auVar206 [16];
  undefined1 auVar208 [16];
  undefined1 in_q20 [16];
  undefined1 auVar209 [16];
  undefined1 auVar213 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar93 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar94 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar71 [12];
  undefined1 auVar70 [12];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar95 [16];
  undefined1 auVar72 [14];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar91 [16];
  undefined1 auVar87 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar97 [12];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  undefined1 auVar110 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar117 [16];
  undefined1 auVar133 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar134 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar113 [12];
  undefined1 auVar112 [12];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar130 [16];
  undefined1 auVar129 [16];
  undefined1 auVar135 [16];
  undefined1 auVar114 [14];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar131 [16];
  undefined1 auVar127 [16];
  undefined1 auVar151 [16];
  undefined1 auVar169 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar164 [16];
  undefined1 auVar163 [16];
  undefined1 auVar170 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar148 [12];
  undefined1 auVar147 [12];
  undefined1 auVar158 [16];
  undefined1 auVar157 [16];
  undefined1 auVar166 [16];
  undefined1 auVar165 [16];
  undefined1 auVar171 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar167 [16];
  undefined1 auVar161 [16];
  undefined1 auVar186 [15];
  undefined6 uVar180;
  undefined8 uVar182;
  undefined1 auVar188 [16];
  undefined1 auVar184 [12];
  undefined1 auVar183 [12];
  undefined1 auVar189 [16];
  undefined1 auVar185 [14];
  undefined1 auVar187 [16];
  undefined1 auVar193 [16];
  undefined1 auVar192 [12];
  undefined1 auVar194 [16];
  undefined1 auVar200 [16];
  undefined1 auVar199 [16];
  undefined1 auVar197 [12];
  undefined1 auVar202 [16];
  undefined1 auVar201 [16];
  undefined1 auVar203 [16];
  undefined1 auVar205 [12];
  undefined1 auVar207 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  
  puVar31 = (undefined8 *)(param_1 + -4);
  auVar73._0_8_ = *puVar31;
  puVar32 = (undefined8 *)(param_2 + -4);
  uVar96 = *puVar32;
  auVar73._8_8_ = uVar96;
  iVar30 = (int)param_3;
  auVar98._0_8_ = *(undefined8 *)((long)puVar31 + (long)iVar30);
  uVar111 = *(undefined8 *)((long)puVar32 + (long)iVar30);
  auVar98._8_8_ = uVar111;
  uVar33 = -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
  auVar115._0_8_ = *(undefined8 *)((long)puVar31 + uVar33);
  uVar1 = *(undefined8 *)((long)puVar32 + uVar33);
  auVar115._8_8_ = uVar1;
  lVar34 = uVar33 + (long)iVar30;
  uVar2 = *(undefined8 *)((long)puVar31 + lVar34);
  uVar5 = *(undefined8 *)((long)puVar32 + lVar34);
  uVar136 = (undefined1)((ulong)uVar5 >> 0x20);
  uVar137 = (undefined1)((ulong)uVar5 >> 0x28);
  uVar138 = (undefined1)((ulong)uVar5 >> 0x30);
  uVar33 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  uVar6 = *(undefined8 *)((long)puVar31 + uVar33);
  uVar11 = *(undefined8 *)((long)puVar32 + uVar33);
  uVar139 = (undefined1)((ulong)uVar11 >> 0x20);
  uVar140 = (undefined1)((ulong)uVar11 >> 0x28);
  uVar141 = (undefined1)((ulong)uVar11 >> 0x30);
  uVar12 = *(undefined8 *)((long)puVar31 + uVar33 + (long)iVar30);
  uVar146 = *(undefined8 *)((long)puVar32 + uVar33 + (long)iVar30);
  uVar142 = (undefined1)((ulong)uVar146 >> 8);
  uVar143 = (undefined1)((ulong)uVar146 >> 0x20);
  uVar144 = (undefined1)((ulong)uVar146 >> 0x28);
  uVar145 = (undefined1)((ulong)uVar146 >> 0x30);
  auVar149._0_8_ = *(undefined8 *)((long)puVar31 + lVar34 * 2);
  uVar13 = *(undefined8 *)((long)puVar32 + lVar34 * 2);
  auVar149._8_8_ = uVar13;
  lVar34 = (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3) -
           (long)iVar30;
  uVar14 = *(undefined8 *)((long)puVar31 + lVar34);
  uVar181 = *(undefined8 *)((long)puVar32 + lVar34);
  uVar174 = (undefined1)((ulong)uVar181 >> 0x20);
  uVar175 = (undefined1)((ulong)uVar181 >> 0x28);
  uVar176 = (undefined1)((ulong)uVar181 >> 0x30);
  uVar177 = (undefined1)((ulong)uVar181 >> 0x38);
  auVar186._0_4_ = ((uint)((ulong)auVar73._0_8_ >> 0x10) & 0xff) << 0x10;
  auVar186[4] = (char)((ulong)auVar73._0_8_ >> 0x20);
  auVar186[5] = 0;
  auVar186[6] = (char)((ulong)auVar73._0_8_ >> 0x30);
  auVar186[7] = uVar177;
  auVar186[8] = (char)uVar96;
  auVar186[9] = 0;
  auVar186[10] = (char)((ulong)uVar96 >> 0x10);
  uVar47 = (undefined1)((ulong)uVar96 >> 0x20);
  auVar186[0xb] = 0;
  auVar186[0xc] = uVar47;
  uVar53 = (undefined1)((ulong)uVar96 >> 0x30);
  auVar186[0xd] = 0;
  auVar186[0xe] = uVar53;
  uVar178 = CONCAT11((char)auVar98._0_8_,(char)auVar73._0_8_);
  auVar15._2_13_ = auVar186._2_13_;
  auVar15._0_2_ = uVar178;
  uVar39 = CONCAT13((char)((ulong)auVar98._0_8_ >> 0x10),auVar15._0_3_);
  auVar16._4_11_ = auVar186._4_11_;
  auVar16._0_4_ = uVar39;
  uVar180 = CONCAT15((char)((ulong)auVar98._0_8_ >> 0x20),auVar16._0_5_);
  auVar17._6_9_ = auVar186._6_9_;
  auVar17._0_6_ = uVar180;
  uVar182 = CONCAT17((char)((ulong)auVar98._0_8_ >> 0x30),auVar17._0_7_);
  auVar18._8_7_ = auVar186._8_7_;
  auVar18._0_8_ = uVar182;
  auVar19[9] = (char)uVar111;
  auVar19._0_9_ = auVar18._0_9_;
  auVar19._10_5_ = auVar186._10_5_;
  auVar183._0_11_ = auVar19._0_11_;
  auVar183[0xb] = (char)((ulong)uVar111 >> 0x10);
  auVar20._12_3_ = auVar186._12_3_;
  auVar20._0_12_ = auVar183;
  uVar67 = (undefined1)((ulong)uVar111 >> 0x20);
  auVar185._0_13_ = auVar20._0_13_;
  auVar185[0xd] = uVar67;
  auVar187[0xe] = uVar53;
  auVar187._0_14_ = auVar185;
  uVar69 = (undefined1)((ulong)uVar111 >> 0x30);
  auVar187[0xf] = uVar69;
  auVar22._1_13_ = auVar73._3_13_;
  auVar22[0] = (char)((ulong)auVar73._0_8_ >> 0x18);
  auVar76._0_4_ = auVar22._0_4_ << 0x10;
  auVar76._5_11_ = auVar73._5_11_;
  auVar76[4] = (char)((ulong)auVar73._0_8_ >> 0x28);
  auVar78._7_9_ = auVar73._7_9_;
  auVar78._0_6_ = auVar76._0_6_;
  auVar78[6] = (char)((ulong)auVar73._0_8_ >> 0x38);
  auVar80._9_7_ = (undefined7)((ulong)uVar96 >> 8);
  auVar80._0_8_ = auVar78._0_8_;
  auVar80[8] = (char)((ulong)uVar96 >> 8);
  auVar82._11_5_ = (undefined5)((ulong)uVar96 >> 0x18);
  auVar82._0_10_ = auVar80._0_10_;
  auVar82[10] = (char)((ulong)uVar96 >> 0x18);
  uVar50 = (undefined1)((ulong)uVar96 >> 0x28);
  auVar84._13_3_ = (undefined3)((ulong)uVar96 >> 0x28);
  auVar84._0_12_ = auVar82._0_12_;
  auVar84[0xc] = uVar50;
  uVar35 = (undefined1)((ulong)uVar96 >> 0x38);
  auVar86._0_14_ = auVar84._0_14_;
  auVar86[0xe] = uVar35;
  auVar86[0xf] = uVar35;
  auVar74._2_14_ = auVar86._2_14_;
  auVar74._0_2_ = CONCAT11((char)((ulong)auVar98._0_8_ >> 8),(char)((ulong)auVar73._0_8_ >> 8));
  auVar75._4_12_ = auVar86._4_12_;
  auVar75._0_4_ = CONCAT13((char)((ulong)auVar98._0_8_ >> 0x18),auVar74._0_3_);
  auVar77._6_10_ = auVar86._6_10_;
  auVar77._0_6_ = CONCAT15((char)((ulong)auVar98._0_8_ >> 0x28),auVar75._0_5_);
  auVar79._8_8_ = auVar86._8_8_;
  auVar79._0_8_ = CONCAT17((char)((ulong)auVar98._0_8_ >> 0x38),auVar77._0_7_);
  auVar81._10_6_ = auVar86._10_6_;
  auVar81._0_10_ = CONCAT19((char)((ulong)uVar111 >> 8),auVar79._0_9_);
  auVar83._12_4_ = auVar86._12_4_;
  auVar70._0_11_ = auVar81._0_11_;
  auVar70[0xb] = (char)((ulong)uVar111 >> 0x18);
  auVar83._0_12_ = auVar70;
  uVar68 = (undefined1)((ulong)uVar111 >> 0x28);
  auVar85._14_2_ = auVar86._14_2_;
  auVar72._0_13_ = auVar83._0_13_;
  auVar72[0xd] = uVar68;
  auVar85._0_14_ = auVar72;
  uVar36 = (undefined1)((ulong)uVar111 >> 0x38);
  auVar87._0_15_ = auVar85._0_15_;
  auVar87[0xf] = uVar36;
  auVar23._1_13_ = auVar98._3_13_;
  auVar23[0] = (char)((ulong)auVar115._0_8_ >> 0x10);
  uVar35 = (undefined1)((ulong)auVar115._0_8_ >> 0x20);
  uVar43 = (undefined1)((ulong)auVar115._0_8_ >> 0x30);
  auVar99._0_8_ = auVar98._7_8_ << 0x38;
  auVar99._9_7_ = (undefined7)((ulong)uVar111 >> 8);
  auVar99[8] = (char)uVar1;
  auVar101._11_5_ = (undefined5)((ulong)uVar111 >> 0x18);
  auVar101._0_10_ = auVar99._0_10_;
  auVar101[10] = (char)((ulong)uVar1 >> 0x10);
  uVar48 = (undefined1)((ulong)uVar1 >> 0x20);
  auVar103._13_3_ = (undefined3)((ulong)uVar111 >> 0x28);
  auVar103._0_12_ = auVar101._0_12_;
  auVar103[0xc] = uVar48;
  uVar54 = (undefined1)((ulong)uVar1 >> 0x30);
  auVar105._0_14_ = auVar103._0_14_;
  auVar105[0xe] = uVar54;
  auVar105[0xf] = uVar36;
  uVar57 = (undefined1)((ulong)uVar2 >> 0x20);
  bVar63 = (byte)((ulong)uVar2 >> 0x30);
  auVar100._0_9_ = CONCAT81(auVar105._8_8_,bVar63) << 0x38;
  auVar100._10_6_ = auVar105._10_6_;
  auVar100[9] = (char)uVar5;
  auVar102._12_4_ = auVar105._12_4_;
  auVar97._0_11_ = auVar100._0_11_;
  auVar97[0xb] = (char)((ulong)uVar5 >> 0x10);
  auVar102._0_12_ = auVar97;
  auVar104._14_2_ = auVar105._14_2_;
  auVar104._0_13_ = auVar102._0_13_;
  auVar104[0xd] = uVar136;
  auVar106._0_15_ = auVar104._0_15_;
  auVar106[0xf] = uVar138;
  auVar24._1_13_ = auVar115._3_13_;
  auVar24[0] = (char)((ulong)auVar115._0_8_ >> 0x18);
  auVar117._0_4_ = auVar24._0_4_ << 0x10;
  uVar40 = (undefined1)((ulong)auVar115._0_8_ >> 0x28);
  auVar117._5_11_ = auVar115._5_11_;
  auVar117[4] = uVar40;
  auVar118._7_9_ = auVar115._7_9_;
  auVar118._0_6_ = auVar117._0_6_;
  auVar118[6] = (char)((ulong)auVar115._0_8_ >> 0x38);
  auVar120._9_7_ = (undefined7)((ulong)uVar1 >> 8);
  auVar120._0_8_ = auVar118._0_8_;
  auVar120[8] = (char)((ulong)uVar1 >> 8);
  auVar122._11_5_ = (undefined5)((ulong)uVar1 >> 0x18);
  auVar122._0_10_ = auVar120._0_10_;
  auVar122[10] = (char)((ulong)uVar1 >> 0x18);
  uVar51 = (undefined1)((ulong)uVar1 >> 0x28);
  auVar124._13_3_ = (undefined3)((ulong)uVar1 >> 0x28);
  auVar124._0_12_ = auVar122._0_12_;
  auVar124[0xc] = uVar51;
  uVar36 = (undefined1)((ulong)uVar1 >> 0x38);
  auVar126._0_14_ = auVar124._0_14_;
  auVar126[0xe] = uVar36;
  auVar126[0xf] = uVar36;
  auVar116._2_14_ = auVar126._2_14_;
  auVar116._0_2_ = CONCAT11((char)((ulong)uVar2 >> 8),(char)((ulong)auVar115._0_8_ >> 8));
  bVar60 = (byte)((ulong)uVar2 >> 0x28);
  auVar25._1_10_ = auVar126._6_10_;
  auVar25[0] = bVar60;
  auVar119._8_8_ = auVar126._8_8_;
  auVar119._0_8_ = CONCAT17((char)((ulong)uVar2 >> 0x38),auVar25._0_7_ << 0x28);
  auVar121._10_6_ = auVar126._10_6_;
  auVar121._0_10_ = CONCAT19((char)((ulong)uVar5 >> 8),auVar119._0_9_);
  auVar123._12_4_ = auVar126._12_4_;
  auVar112._0_11_ = auVar121._0_11_;
  auVar112[0xb] = (char)((ulong)uVar5 >> 0x18);
  auVar123._0_12_ = auVar112;
  auVar125._14_2_ = auVar126._14_2_;
  auVar114._0_13_ = auVar123._0_13_;
  auVar114[0xd] = uVar137;
  auVar125._0_14_ = auVar114;
  auVar127._0_15_ = auVar125._0_15_;
  auVar127[0xf] = (char)((ulong)uVar5 >> 0x38);
  uVar36 = (undefined1)((ulong)uVar6 >> 0x20);
  uVar44 = (undefined1)((ulong)uVar6 >> 0x30);
  uVar58 = (undefined1)((ulong)uVar12 >> 0x20);
  uVar64 = (undefined1)((ulong)uVar12 >> 0x30);
  uVar41 = (undefined1)((ulong)uVar6 >> 0x28);
  uVar61 = (undefined1)((ulong)uVar12 >> 0x28);
  uVar66 = (undefined1)((ulong)uVar12 >> 0x38);
  uVar37 = (undefined1)((ulong)auVar149._0_8_ >> 0x20);
  uVar45 = (undefined1)((ulong)auVar149._0_8_ >> 0x30);
  uVar49 = (undefined1)((ulong)uVar13 >> 0x20);
  uVar55 = (undefined1)((ulong)uVar13 >> 0x30);
  bVar59 = (byte)((ulong)uVar14 >> 0x20);
  bVar65 = (byte)((ulong)uVar14 >> 0x30);
  auVar26._1_13_ = auVar149._3_13_;
  auVar26[0] = (char)((ulong)auVar149._0_8_ >> 0x18);
  auVar151._0_4_ = auVar26._0_4_ << 0x10;
  uVar42 = (undefined1)((ulong)auVar149._0_8_ >> 0x28);
  auVar151._5_11_ = auVar149._5_11_;
  auVar151[4] = uVar42;
  auVar152._7_9_ = auVar149._7_9_;
  auVar152._0_6_ = auVar151._0_6_;
  auVar152[6] = (char)((ulong)auVar149._0_8_ >> 0x38);
  auVar154._9_7_ = (undefined7)((ulong)uVar13 >> 8);
  auVar154._0_8_ = auVar152._0_8_;
  auVar154[8] = (char)((ulong)uVar13 >> 8);
  auVar156._11_5_ = (undefined5)((ulong)uVar13 >> 0x18);
  auVar156._0_10_ = auVar154._0_10_;
  auVar156[10] = (char)((ulong)uVar13 >> 0x18);
  uVar52 = (undefined1)((ulong)uVar13 >> 0x28);
  auVar158._13_3_ = (undefined3)((ulong)uVar13 >> 0x28);
  auVar158._0_12_ = auVar156._0_12_;
  auVar158[0xc] = uVar52;
  uVar56 = (undefined1)((ulong)uVar13 >> 0x38);
  auVar160._0_14_ = auVar158._0_14_;
  auVar160[0xe] = uVar56;
  auVar160[0xf] = uVar56;
  auVar150._2_14_ = auVar160._2_14_;
  auVar150._0_2_ = CONCAT11((char)((ulong)uVar14 >> 8),(char)((ulong)auVar149._0_8_ >> 8));
  bVar62 = (byte)((ulong)uVar14 >> 0x28);
  auVar27._1_10_ = auVar160._6_10_;
  auVar27[0] = bVar62;
  auVar153._8_8_ = auVar160._8_8_;
  auVar153._0_8_ = CONCAT17((char)((ulong)uVar14 >> 0x38),auVar27._0_7_ << 0x28);
  auVar155._10_6_ = auVar160._10_6_;
  auVar155._0_10_ = CONCAT19((char)((ulong)uVar181 >> 8),auVar153._0_9_);
  auVar157._12_4_ = auVar160._12_4_;
  auVar147._0_11_ = auVar155._0_11_;
  auVar147[0xb] = (char)((ulong)uVar181 >> 0x18);
  auVar157._0_12_ = auVar147;
  auVar159._14_2_ = auVar160._14_2_;
  auVar159._0_13_ = auVar157._0_13_;
  auVar159[0xd] = uVar175;
  auVar161._0_15_ = auVar159._0_15_;
  auVar161[0xf] = uVar177;
  uVar46 = (undefined2)((ulong)uVar182 >> 0x30);
  auVar188._0_8_ = auVar185._6_8_ << 0x30;
  auVar188._10_6_ = auVar187._10_6_;
  auVar188._8_2_ = auVar183._10_2_;
  auVar189._0_12_ = auVar188._0_12_;
  auVar189._12_2_ = auVar187._14_2_;
  auVar189._14_2_ = auVar187._14_2_;
  uVar179 = CONCAT22((short)(CONCAT13((char)((ulong)uVar2 >> 0x10),
                                      (int3)(CONCAT14(uVar35,auVar23._0_4_ << 0x10) >> 0x10) << 0x10
                                     ) >> 0x10),(short)((uint)uVar39 >> 0x10));
  auVar184._0_10_ = CONCAT82(auVar189._8_8_,(short)(((ulong)bVar63 << 0x38) >> 0x30)) << 0x30;
  auVar184._10_2_ = auVar97._10_2_;
  uVar38 = (undefined2)((uint6)auVar77._0_6_ >> 0x20);
  auVar193._0_8_ = in_q17._6_8_ << 0x30;
  auVar193._10_6_ = in_q17._10_6_;
  auVar193._8_2_ = (short)((unkuint10)auVar81._0_10_ >> 0x40);
  auVar194._14_2_ = in_q17._14_2_;
  auVar194._0_12_ = auVar193._0_12_;
  auVar194._12_2_ = auVar72._12_2_;
  uVar191 = CONCAT22(auVar116._0_2_,auVar74._0_2_);
  auVar192._0_10_ = CONCAT82(auVar194._8_8_,(short)(((uint6)bVar60 << 0x28) >> 0x20)) << 0x30;
  auVar192._10_2_ = (short)((unkuint10)auVar121._0_10_ >> 0x40);
  auVar28._2_10_ = in_q18._6_10_;
  auVar28._0_2_ = (short)((ulong)auVar79._0_8_ >> 0x30);
  auVar200._0_8_ = auVar28._0_8_ << 0x20;
  auVar200._10_6_ = in_q18._10_6_;
  auVar200._8_2_ = auVar70._10_2_;
  auVar202._14_2_ = in_q18._14_2_;
  auVar202._0_12_ = auVar200._0_12_;
  auVar202._12_2_ = auVar87._14_2_;
  auVar198._4_12_ = auVar202._4_12_;
  auVar198._0_4_ =
       CONCAT22((short)(CONCAT13((char)((ulong)uVar2 >> 0x18),auVar116._0_3_) >> 0x10),
                (short)((uint)auVar75._0_4_ >> 0x10));
  auVar199._8_8_ = auVar202._8_8_;
  auVar199._0_8_ = CONCAT26((short)((ulong)auVar119._0_8_ >> 0x30),auVar198._0_6_);
  auVar201._12_4_ = auVar202._12_4_;
  auVar197._0_10_ = auVar199._0_10_;
  auVar197._10_2_ = auVar112._10_2_;
  auVar201._0_12_ = auVar197;
  auVar203._0_14_ = auVar201._0_14_;
  auVar203._14_2_ = auVar127._14_2_;
  auVar210[7] = (char)uVar14;
  auVar210[6] = (char)auVar149._0_8_;
  auVar91[0xf] = uVar174;
  auVar91[0xe] = uVar49;
  auVar210[5] = (char)uVar12;
  auVar210[4] = (char)uVar6;
  auVar90[0xd] = uVar143;
  auVar90[0xc] = uVar139;
  auVar88._0_8_ = auVar72._6_8_ << 0x30;
  auVar88._10_6_ = auVar87._10_6_;
  auVar88._8_2_ = (short)(CONCAT12((char)uVar146,CONCAT11((char)uVar11,uVar64)) >> 8);
  auVar90._0_12_ = auVar88._0_12_;
  auVar90._14_2_ = auVar87._14_2_;
  auVar71._0_10_ = CONCAT82(auVar90._8_8_,(short)(((uint6)bVar59 << 0x28) >> 0x20)) << 0x30;
  auVar89._12_4_ = auVar90._12_4_;
  auVar71._10_2_ = (short)(CONCAT12((char)uVar181,CONCAT11((char)uVar13,bVar65)) >> 8);
  auVar89._0_12_ = auVar71;
  auVar91._0_14_ = auVar89._0_14_;
  auVar108[7] = (char)((ulong)uVar14 >> 0x10);
  auVar108[6] = (char)((ulong)auVar149._0_8_ >> 0x10);
  auVar131[0xf] = uVar176;
  auVar131[0xe] = uVar55;
  auVar108[5] = (char)((ulong)uVar12 >> 0x10);
  auVar108[4] = (char)((ulong)uVar6 >> 0x10);
  auVar130[0xd] = uVar145;
  auVar130[0xc] = uVar141;
  auVar128._0_8_ = auVar114._6_8_ << 0x30;
  auVar128._10_6_ = auVar127._10_6_;
  auVar128._8_2_ =
       (short)(CONCAT12((char)((ulong)uVar146 >> 0x10),
                        CONCAT11((char)((ulong)uVar11 >> 0x10),(char)uVar146)) >> 8);
  auVar130._0_12_ = auVar128._0_12_;
  auVar130._14_2_ = auVar127._14_2_;
  auVar113._0_10_ = CONCAT82(auVar130._8_8_,(short)(((uint6)bVar65 << 0x28) >> 0x20)) << 0x30;
  auVar129._12_4_ = auVar130._12_4_;
  auVar113._10_2_ =
       (short)(CONCAT12((char)((ulong)uVar181 >> 0x10),
                        CONCAT11((char)((ulong)uVar13 >> 0x10),(char)uVar181)) >> 8);
  auVar129._0_12_ = auVar113;
  auVar131._0_14_ = auVar129._0_14_;
  auVar93[5] = (char)((ulong)uVar12 >> 8);
  auVar93[4] = (char)((ulong)uVar6 >> 8);
  auVar207[0xd] = uVar144;
  auVar207[0xc] = uVar140;
  auVar206._0_8_ = in_q19._6_8_ << 0x30;
  auVar206._10_6_ = in_q19._10_6_;
  auVar206._8_2_ = (short)(CONCAT12(uVar142,CONCAT11((char)((ulong)uVar11 >> 8),uVar66)) >> 8);
  auVar207._14_2_ = in_q19._14_2_;
  auVar207._0_12_ = auVar206._0_12_;
  auVar93._6_2_ = auVar150._0_2_;
  auVar205._0_10_ = CONCAT82(auVar207._8_8_,(short)(((uint6)bVar62 << 0x28) >> 0x20)) << 0x30;
  auVar205._10_2_ = (short)((unkuint10)auVar155._0_10_ >> 0x40);
  auVar29[1] = uVar66;
  auVar29[0] = (char)((ulong)uVar6 >> 0x38);
  auVar166[0xd] = (char)((ulong)uVar146 >> 0x38);
  auVar166[0xc] = (char)((ulong)uVar11 >> 0x38);
  auVar29._2_10_ = auVar161._6_10_;
  auVar164._0_8_ = auVar29._0_8_ << 0x20;
  auVar164._10_6_ = auVar161._10_6_;
  auVar164._8_2_ =
       (short)(CONCAT12((char)((ulong)uVar146 >> 0x18),
                        CONCAT11((char)((ulong)uVar11 >> 0x18),uVar142)) >> 8);
  auVar166._14_2_ = auVar161._14_2_;
  auVar166._0_12_ = auVar164._0_12_;
  auVar162._4_12_ = auVar166._4_12_;
  auVar162._0_4_ =
       CONCAT22((short)(CONCAT13((char)((ulong)uVar14 >> 0x18),auVar150._0_3_) >> 0x10),
                CONCAT11((char)((ulong)uVar12 >> 0x18),(char)((ulong)uVar6 >> 0x18)));
  auVar163._8_8_ = auVar166._8_8_;
  auVar163._0_8_ = CONCAT26((short)((ulong)auVar153._0_8_ >> 0x30),auVar162._0_6_);
  auVar165._12_4_ = auVar166._12_4_;
  auVar148._0_10_ = auVar163._0_10_;
  auVar148._10_2_ = auVar147._10_2_;
  auVar165._0_12_ = auVar148;
  auVar167._0_14_ = auVar165._0_14_;
  auVar167._14_2_ = auVar166._14_2_;
  uVar39 = CONCAT13((char)uVar2,CONCAT12((char)auVar115._0_8_,uVar178));
  auVar209._4_12_ = in_q20._4_12_;
  auVar209._0_4_ = uVar39;
  auVar211._12_4_ = in_q20._12_4_;
  auVar211._0_8_ = auVar209._0_8_;
  auVar211._8_4_ =
       (int)(CONCAT14((char)uVar5,
                      CONCAT13((char)uVar1,CONCAT12((char)uVar111,CONCAT11((char)uVar96,uVar57))))
            >> 8);
  auVar210._8_8_ = auVar211._8_8_;
  auVar210._0_4_ = uVar39;
  auVar212._0_12_ = auVar210._0_12_;
  auVar212._12_4_ = auVar71._8_4_;
  uVar21 = CONCAT12(uVar35,(short)((uint6)uVar180 >> 0x20));
  auVar107._4_12_ = auVar106._4_12_;
  auVar107._0_4_ = uVar179;
  auVar109._12_4_ = auVar106._12_4_;
  auVar109._0_8_ = auVar107._0_8_;
  auVar109._8_4_ = auVar184._8_4_;
  auVar108._8_8_ = auVar109._8_8_;
  auVar108._0_4_ = uVar179;
  auVar110._0_12_ = auVar108._0_12_;
  auVar110._12_4_ = auVar113._8_4_;
  auVar92._4_12_ = auVar91._4_12_;
  auVar92._0_4_ = uVar191;
  auVar94._12_4_ = auVar91._12_4_;
  auVar94._0_8_ = auVar92._0_8_;
  auVar94._8_4_ = auVar192._8_4_;
  auVar93._8_8_ = auVar94._8_8_;
  auVar93._0_4_ = uVar191;
  auVar95._0_12_ = auVar93._0_12_;
  auVar95._12_4_ = auVar205._8_4_;
  auVar132._4_12_ = auVar131._4_12_;
  auVar132._0_4_ = auVar198._0_4_;
  auVar134._12_4_ = auVar131._12_4_;
  auVar134._0_8_ = auVar132._0_8_;
  auVar134._8_4_ = auVar197._8_4_;
  auVar133._8_8_ = auVar134._8_8_;
  auVar133._4_4_ = auVar162._0_4_;
  auVar133._0_4_ = auVar198._0_4_;
  auVar135._0_12_ = auVar133._0_12_;
  auVar135._12_4_ = auVar148._8_4_;
  uVar39 = (undefined4)((ulong)auVar199._0_8_ >> 0x20);
  auVar168._4_12_ = auVar167._4_12_;
  auVar168._0_4_ = uVar39;
  auVar170._12_4_ = auVar167._12_4_;
  auVar170._0_8_ = auVar168._0_8_;
  auVar170._8_4_ = auVar203._12_4_;
  auVar169._8_8_ = auVar170._8_8_;
  auVar169._4_4_ = (int)((ulong)auVar163._0_8_ >> 0x20);
  auVar169._0_4_ = uVar39;
  auVar171._0_12_ = auVar169._0_12_;
  auVar171._12_4_ = auVar170._12_4_;
  auVar190 = NEON_uabd(auVar212,auVar95,1);
  auVar195 = NEON_uabd(auVar95,auVar110,1);
  auVar204 = NEON_uabd(auVar110,auVar135,1);
  auVar7[2] = uVar43;
  auVar7._0_2_ = uVar46;
  auVar7[3] = bVar63;
  auVar7[4] = uVar44;
  auVar7[5] = uVar64;
  auVar7[6] = uVar45;
  auVar7[7] = bVar65;
  auVar7[8] = uVar53;
  auVar7[9] = uVar69;
  auVar7[10] = uVar54;
  auVar7[0xb] = uVar138;
  auVar7[0xc] = uVar141;
  auVar7[0xd] = uVar145;
  auVar7[0xe] = uVar55;
  auVar7[0xf] = uVar176;
  auVar172 = NEON_uabd(auVar171,auVar7,1);
  auVar208[2] = uVar40;
  auVar208._0_2_ = uVar38;
  auVar208[3] = bVar60;
  auVar208[4] = uVar41;
  auVar208[5] = uVar61;
  auVar208[6] = uVar42;
  auVar208[7] = bVar62;
  auVar208[8] = uVar50;
  auVar208[9] = uVar68;
  auVar208[10] = uVar51;
  auVar208[0xb] = uVar137;
  auVar208[0xc] = uVar140;
  auVar208[0xd] = uVar144;
  auVar208[0xe] = uVar52;
  auVar208[0xf] = uVar175;
  auVar8[2] = uVar43;
  auVar8._0_2_ = uVar46;
  auVar8[3] = bVar63;
  auVar8[4] = uVar44;
  auVar8[5] = uVar64;
  auVar8[6] = uVar45;
  auVar8[7] = bVar65;
  auVar8[8] = uVar53;
  auVar8[9] = uVar69;
  auVar8[10] = uVar54;
  auVar8[0xb] = uVar138;
  auVar8[0xc] = uVar141;
  auVar8[0xd] = uVar145;
  auVar8[0xe] = uVar55;
  auVar8[0xf] = uVar176;
  auVar208 = NEON_uabd(auVar8,auVar208,1);
  auVar173[3] = uVar57;
  auVar173._0_3_ = uVar21;
  auVar173[4] = uVar36;
  auVar173[5] = uVar58;
  auVar173[6] = uVar37;
  auVar173[7] = bVar59;
  auVar173[8] = uVar47;
  auVar173[9] = uVar67;
  auVar173[10] = uVar48;
  auVar173[0xb] = uVar136;
  auVar173[0xc] = uVar139;
  auVar173[0xd] = uVar143;
  auVar173[0xe] = uVar49;
  auVar173[0xf] = uVar174;
  auVar213[2] = uVar40;
  auVar213._0_2_ = uVar38;
  auVar213[3] = bVar60;
  auVar213[4] = uVar41;
  auVar213[5] = uVar61;
  auVar213[6] = uVar42;
  auVar213[7] = bVar62;
  auVar213[8] = uVar50;
  auVar213[9] = uVar68;
  auVar213[10] = uVar51;
  auVar213[0xb] = uVar137;
  auVar213[0xc] = uVar140;
  auVar213[0xd] = uVar144;
  auVar213[0xe] = uVar52;
  auVar213[0xf] = uVar175;
  auVar213 = NEON_uabd(auVar213,auVar173,1);
  auVar190 = NEON_umax(auVar190,auVar195,1);
  auVar173 = NEON_umax(auVar204,auVar172,1);
  auVar172 = NEON_umax(auVar208,auVar213,1);
  auVar173 = NEON_umax(auVar190,auVar173,1);
  NEON_umax(auVar173,auVar172,1);
  auVar172[3] = uVar57;
  auVar172._0_3_ = uVar21;
  auVar172[4] = uVar36;
  auVar172[5] = uVar58;
  auVar172[6] = uVar37;
  auVar172[7] = bVar59;
  auVar172[8] = uVar47;
  auVar172[9] = uVar67;
  auVar172[10] = uVar48;
  auVar172[0xb] = uVar136;
  auVar172[0xc] = uVar139;
  auVar172[0xd] = uVar143;
  auVar172[0xe] = uVar49;
  auVar172[0xf] = uVar174;
  auVar173 = NEON_uabd(auVar135,auVar172,1);
  auVar204[2] = uVar40;
  auVar204._0_2_ = uVar38;
  auVar204[3] = bVar60;
  auVar204[4] = uVar41;
  auVar204[5] = uVar61;
  auVar204[6] = uVar42;
  auVar204[7] = bVar62;
  auVar204[8] = uVar50;
  auVar204[9] = uVar68;
  auVar204[10] = uVar51;
  auVar204[0xb] = uVar137;
  auVar204[0xc] = uVar140;
  auVar204[0xd] = uVar144;
  auVar204[0xe] = uVar52;
  auVar204[0xf] = uVar175;
  auVar172 = NEON_uabd(auVar110,auVar204,1);
  auVar173 = NEON_uqadd(auVar173,auVar173,1);
  auVar196[0] = auVar172[0] >> 1;
  auVar196[1] = auVar172[1] >> 1;
  auVar196[2] = auVar172[2] >> 1;
  auVar196[3] = auVar172[3] >> 1;
  auVar196[4] = auVar172[4] >> 1;
  auVar196[5] = auVar172[5] >> 1;
  auVar196[6] = auVar172[6] >> 1;
  auVar196[7] = auVar172[7] >> 1;
  auVar196[8] = auVar172[8] >> 1;
  auVar196[9] = auVar172[9] >> 1;
  auVar196[10] = auVar172[10] >> 1;
  auVar196[0xb] = auVar172[0xb] >> 1;
  auVar196[0xc] = auVar172[0xc] >> 1;
  auVar196[0xd] = auVar172[0xd] >> 1;
  auVar196[0xe] = auVar172[0xe] >> 1;
  auVar196[0xf] = auVar172[0xf] >> 1;
  NEON_uqadd(auVar173,auVar196,1);
  FUN_1010c4db0(&local_40,&uStack_50,&local_60,auStack_70,local_80,local_90);
  uVar35 = (undefined1)((uint7)uStack_37 >> 8);
  uVar36 = (undefined1)((uint7)uStack_37 >> 0x10);
  uVar37 = (undefined1)((uint7)uStack_37 >> 0x18);
  uVar40 = (undefined1)((uint7)uStack_37 >> 0x20);
  uVar41 = (undefined1)((uint7)uStack_37 >> 0x28);
  uVar42 = (undefined1)((uint7)uStack_37 >> 0x30);
  auVar195[8] = uStack_38;
  auVar195._0_8_ = local_40;
  auVar190[8] = uStack_38;
  auVar190._0_8_ = local_40;
  uVar50 = (undefined1)((uint7)uStack_57 >> 8);
  uVar51 = (undefined1)((uint7)uStack_57 >> 0x10);
  uVar52 = (undefined1)((uint7)uStack_57 >> 0x18);
  uVar53 = (undefined1)((uint7)uStack_57 >> 0x20);
  uVar54 = (undefined1)((uint7)uStack_57 >> 0x28);
  uVar55 = (undefined1)((uint7)uStack_57 >> 0x30);
  auVar10[8] = uStack_58;
  auVar10._0_8_ = local_60;
  auVar9[8] = uStack_58;
  auVar9._0_8_ = local_60;
  uVar43 = (undefined1)((uint7)uStack_47 >> 8);
  uVar44 = (undefined1)((uint7)uStack_47 >> 0x10);
  uVar45 = (undefined1)((uint7)uStack_47 >> 0x18);
  uVar47 = (undefined1)((uint7)uStack_47 >> 0x20);
  uVar48 = (undefined1)((uint7)uStack_47 >> 0x28);
  uVar49 = (undefined1)((uint7)uStack_47 >> 0x30);
  auVar4[8] = uStack_48;
  auVar4._0_8_ = uStack_50;
  auVar3[8] = uStack_48;
  auVar3._0_8_ = uStack_50;
  auVar190[9] = (char)uStack_37;
  auVar190[10] = uVar35;
  auVar190[0xb] = uVar36;
  auVar190[0xc] = uVar37;
  auVar190[0xd] = uVar40;
  auVar190[0xe] = uVar41;
  auVar190[0xf] = uVar42;
  auVar195[9] = (char)uStack_37;
  auVar195[10] = uVar35;
  auVar195[0xb] = uVar36;
  auVar195[0xc] = uVar37;
  auVar195[0xd] = uVar40;
  auVar195[0xe] = uVar41;
  auVar195[0xf] = uVar42;
  auVar173 = NEON_ext(auVar190,auVar195,8,1);
  auVar3[9] = (char)uStack_47;
  auVar3[10] = uVar43;
  auVar3[0xb] = uVar44;
  auVar3[0xc] = uVar45;
  auVar3[0xd] = uVar47;
  auVar3[0xe] = uVar48;
  auVar3[0xf] = uVar49;
  auVar4[9] = (char)uStack_47;
  auVar4[10] = uVar43;
  auVar4[0xb] = uVar44;
  auVar4[0xc] = uVar45;
  auVar4[0xd] = uVar47;
  auVar4[0xe] = uVar48;
  auVar4[0xf] = uVar49;
  auVar172 = NEON_ext(auVar3,auVar4,8,1);
  auVar9[9] = (char)uStack_57;
  auVar9[10] = uVar50;
  auVar9[0xb] = uVar51;
  auVar9[0xc] = uVar52;
  auVar9[0xd] = uVar53;
  auVar9[0xe] = uVar54;
  auVar9[0xf] = uVar55;
  auVar10[9] = (char)uStack_57;
  auVar10[10] = uVar50;
  auVar10[0xb] = uVar51;
  auVar10[0xc] = uVar52;
  auVar10[0xd] = uVar53;
  auVar10[0xe] = uVar54;
  auVar10[0xf] = uVar55;
  auVar190 = NEON_ext(auVar9,auVar10,8,1);
  auVar195 = NEON_ext(auStack_70,auStack_70,8,1);
  auVar208 = NEON_ext(local_80,local_80,8,1);
  param_1[-3] = (char)local_40;
  param_1[-2] = (char)uStack_50;
  param_1[-1] = (char)local_60;
  *param_1 = auStack_70[0];
  param_1[1] = local_80[0];
  param_1[2] = local_90[0];
  param_1 = param_1 + iVar30;
  param_1[-3] = (char)((ulong)local_40 >> 8);
  param_1[-2] = (char)((ulong)uStack_50 >> 8);
  param_1[-1] = (char)((ulong)local_60 >> 8);
  *param_1 = auStack_70[1];
  param_1[1] = local_80[1];
  param_1[2] = local_90[1];
  param_1 = param_1 + iVar30;
  param_1[-3] = (char)((ulong)local_40 >> 0x10);
  param_1[-2] = (char)((ulong)uStack_50 >> 0x10);
  param_1[-1] = (char)((ulong)local_60 >> 0x10);
  *param_1 = auStack_70[2];
  param_1[1] = local_80[2];
  param_1[2] = local_90[2];
  param_1 = param_1 + iVar30;
  param_1[-3] = (char)((ulong)local_40 >> 0x18);
  param_1[-2] = (char)((ulong)uStack_50 >> 0x18);
  param_1[-1] = (char)((ulong)local_60 >> 0x18);
  *param_1 = auStack_70[3];
  param_1[1] = local_80[3];
  param_1[2] = local_90[3];
  param_1 = param_1 + iVar30;
  param_1[-3] = (char)((ulong)local_40 >> 0x20);
  param_1[-2] = (char)((ulong)uStack_50 >> 0x20);
  param_1[-1] = (char)((ulong)local_60 >> 0x20);
  *param_1 = auStack_70[4];
  param_1[1] = local_80[4];
  param_1[2] = local_90[4];
  param_1 = param_1 + iVar30;
  param_1[-3] = (char)((ulong)local_40 >> 0x28);
  param_1[-2] = (char)((ulong)uStack_50 >> 0x28);
  param_1[-1] = (char)((ulong)local_60 >> 0x28);
  *param_1 = auStack_70[5];
  param_1[1] = local_80[5];
  param_1[2] = local_90[5];
  param_1 = param_1 + iVar30;
  param_1[-3] = (char)((ulong)local_40 >> 0x30);
  param_1[-2] = (char)((ulong)uStack_50 >> 0x30);
  param_1[-1] = (char)((ulong)local_60 >> 0x30);
  *param_1 = auStack_70[6];
  param_1[1] = local_80[6];
  param_1[2] = local_90[6];
  param_1 = param_1 + iVar30;
  auVar213 = NEON_ext(local_90,local_90,8,1);
  param_1[-3] = (char)((ulong)local_40 >> 0x38);
  param_1[-2] = (char)((ulong)uStack_50 >> 0x38);
  param_1[-1] = (char)((ulong)local_60 >> 0x38);
  *param_1 = auStack_70[7];
  param_1[1] = local_80[7];
  param_1[2] = local_90[7];
  param_2[-3] = auVar173[0];
  param_2[-2] = auVar172[0];
  param_2[-1] = auVar190[0];
  *param_2 = auVar195[0];
  param_2[1] = auVar208[0];
  param_2[2] = auVar213[0];
  param_2 = param_2 + iVar30;
  param_2[-3] = auVar173[1];
  param_2[-2] = auVar172[1];
  param_2[-1] = auVar190[1];
  *param_2 = auVar195[1];
  param_2[1] = auVar208[1];
  param_2[2] = auVar213[1];
  param_2 = param_2 + iVar30;
  param_2[-3] = auVar173[2];
  param_2[-2] = auVar172[2];
  param_2[-1] = auVar190[2];
  *param_2 = auVar195[2];
  param_2[1] = auVar208[2];
  param_2[2] = auVar213[2];
  param_2 = param_2 + iVar30;
  param_2[-3] = auVar173[3];
  param_2[-2] = auVar172[3];
  param_2[-1] = auVar190[3];
  *param_2 = auVar195[3];
  param_2[1] = auVar208[3];
  param_2[2] = auVar213[3];
  param_2 = param_2 + iVar30;
  param_2[-3] = auVar173[4];
  param_2[-2] = auVar172[4];
  param_2[-1] = auVar190[4];
  *param_2 = auVar195[4];
  param_2[1] = auVar208[4];
  param_2[2] = auVar213[4];
  param_2 = param_2 + iVar30;
  param_2[-3] = auVar173[5];
  param_2[-2] = auVar172[5];
  param_2[-1] = auVar190[5];
  *param_2 = auVar195[5];
  param_2[1] = auVar208[5];
  param_2[2] = auVar213[5];
  param_2 = param_2 + iVar30;
  param_2[-3] = auVar173[6];
  param_2[-2] = auVar172[6];
  param_2[-1] = auVar190[6];
  *param_2 = auVar195[6];
  param_2[1] = auVar208[6];
  param_2[2] = auVar213[6];
  param_2 = param_2 + iVar30;
  param_2[-3] = auVar173[7];
  param_2[-2] = auVar172[7];
  param_2[-1] = auVar190[7];
  *param_2 = auVar195[7];
  param_2[1] = auVar208[7];
  param_2[2] = auVar213[7];
  return;
}




void FUN_1010c47e8(undefined8 *param_1,undefined8 *param_2,uint param_3,byte param_4,byte param_5,
                  byte param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  uint7 uVar19;
  uint7 uVar20;
  uint7 uVar21;
  uint7 uVar22;
  uint7 uVar23;
  uint7 uVar24;
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [11];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  ulong uVar38;
  long lVar39;
  undefined1 *puVar40;
  byte *pbVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined2 uVar54;
  undefined4 uVar55;
  undefined1 uVar59;
  undefined1 uVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  undefined1 auVar93 [16];
  undefined1 auVar105 [16];
  undefined1 auVar111 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  byte bVar133;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  byte bVar134;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  undefined8 uVar135;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar154 [16];
  undefined1 auVar160 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  byte bVar173;
  byte bVar181;
  undefined1 auVar166 [16];
  undefined8 uVar182;
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar199 [16];
  undefined1 auVar205 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined8 uVar211;
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar230 [16];
  undefined1 auVar236 [16];
  undefined1 auVar240 [16];
  undefined8 uVar241;
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar258 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 uVar266;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  undefined8 uVar271;
  undefined1 auVar274 [16];
  undefined1 auVar276 [16];
  undefined1 auVar284 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined8 uVar290;
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar299 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined4 uVar305;
  undefined8 uVar307;
  undefined1 auVar313 [15];
  undefined1 auVar319 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar92 [16];
  undefined1 auVar112 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar107 [16];
  undefined1 auVar106 [16];
  undefined1 auVar113 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar90 [12];
  undefined1 auVar89 [12];
  undefined1 auVar101 [16];
  undefined1 auVar100 [16];
  undefined1 auVar109 [16];
  undefined1 auVar108 [16];
  undefined1 auVar114 [16];
  undefined1 auVar91 [14];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  undefined1 auVar110 [16];
  undefined1 auVar104 [16];
  undefined1 auVar142 [16];
  undefined1 auVar141 [16];
  undefined1 auVar161 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar156 [16];
  undefined1 auVar155 [16];
  undefined1 auVar162 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar137 [12];
  undefined1 auVar136 [12];
  undefined1 auVar150 [16];
  undefined1 auVar149 [16];
  undefined1 auVar158 [16];
  undefined1 auVar157 [16];
  undefined1 auVar163 [16];
  undefined1 auVar138 [14];
  undefined1 auVar152 [16];
  undefined1 auVar151 [16];
  undefined1 auVar159 [16];
  undefined1 auVar153 [16];
  undefined1 auVar188 [16];
  undefined1 auVar206 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar201 [16];
  undefined1 auVar200 [16];
  undefined1 auVar207 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar184 [12];
  undefined1 auVar183 [12];
  undefined1 auVar195 [16];
  undefined1 auVar194 [16];
  undefined1 auVar203 [16];
  undefined1 auVar202 [16];
  undefined1 auVar208 [16];
  undefined1 auVar185 [14];
  undefined1 auVar197 [16];
  undefined1 auVar196 [16];
  undefined1 auVar204 [16];
  undefined1 auVar198 [16];
  undefined1 auVar218 [16];
  undefined1 auVar217 [16];
  undefined1 auVar237 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar232 [16];
  undefined1 auVar231 [16];
  undefined1 auVar238 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar213 [12];
  undefined1 auVar212 [12];
  undefined1 auVar226 [16];
  undefined1 auVar225 [16];
  undefined1 auVar234 [16];
  undefined1 auVar233 [16];
  undefined1 auVar239 [16];
  undefined1 auVar214 [14];
  undefined1 auVar228 [16];
  undefined1 auVar227 [16];
  undefined1 auVar235 [16];
  undefined1 auVar229 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar260 [16];
  undefined1 auVar259 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar243 [12];
  undefined1 auVar242 [12];
  undefined1 auVar244 [13];
  undefined1 auVar253 [16];
  undefined1 auVar262 [16];
  undefined1 auVar261 [16];
  undefined1 auVar255 [16];
  undefined1 auVar254 [16];
  undefined1 auVar256 [16];
  undefined1 auVar263 [16];
  undefined1 auVar257 [16];
  undefined1 auVar285 [16];
  undefined1 auVar275 [16];
  undefined1 auVar286 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar272 [12];
  undefined1 auVar273 [13];
  undefined1 auVar279 [16];
  undefined1 auVar287 [16];
  undefined1 auVar281 [16];
  undefined1 auVar280 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar300 [16];
  undefined1 auVar295 [16];
  undefined1 auVar294 [16];
  undefined1 auVar301 [16];
  undefined1 auVar291 [12];
  undefined1 auVar297 [16];
  undefined1 auVar296 [16];
  undefined1 auVar302 [16];
  undefined1 auVar298 [16];
  undefined1 auVar320 [16];
  undefined6 uVar306;
  undefined8 uVar308;
  undefined1 auVar315 [16];
  undefined1 auVar321 [16];
  unkbyte10 Var309;
  undefined1 auVar311 [12];
  undefined1 auVar310 [12];
  undefined1 auVar317 [16];
  undefined1 auVar316 [16];
  undefined1 auVar322 [16];
  undefined1 auVar312 [14];
  undefined1 auVar314 [16];
  undefined1 auVar318 [16];
  
  auVar328._0_8_ = *param_1;
  uVar135 = *param_2;
  auVar328._8_8_ = uVar135;
  auVar139._0_8_ = *(undefined8 *)((long)param_1 + (long)(int)param_3);
  uVar182 = *(undefined8 *)((long)param_2 + (long)(int)param_3);
  auVar139._8_8_ = uVar182;
  uVar38 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
  auVar186._0_8_ = *(undefined8 *)((long)param_1 + uVar38);
  uVar211 = *(undefined8 *)((long)param_2 + uVar38);
  auVar186._8_8_ = uVar211;
  lVar1 = uVar38 + (long)(int)param_3;
  auVar215._0_8_ = *(undefined8 *)((long)param_1 + lVar1);
  uVar241 = *(undefined8 *)((long)param_2 + lVar1);
  auVar215._8_8_ = uVar241;
  uVar38 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
  auVar245._0_8_ = *(undefined8 *)((long)param_1 + uVar38);
  uVar10 = *(undefined8 *)((long)param_2 + uVar38);
  auVar245._8_8_ = uVar10;
  lVar2 = uVar38 + (long)(int)param_3;
  uVar11 = *(undefined8 *)((long)param_1 + lVar2);
  uVar271 = *(undefined8 *)((long)param_2 + lVar2);
  uVar266 = (undefined1)((ulong)uVar271 >> 8);
  bVar267 = (byte)((ulong)uVar271 >> 0x10);
  bVar268 = (byte)((ulong)uVar271 >> 0x18);
  bVar269 = (byte)((ulong)uVar271 >> 0x20);
  bVar270 = (byte)((ulong)uVar271 >> 0x28);
  auVar274._0_8_ = *(undefined8 *)((long)param_1 + lVar1 * 2);
  uVar290 = *(undefined8 *)((long)param_2 + lVar1 * 2);
  auVar274._8_8_ = uVar290;
  lVar39 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3) -
           (long)(int)param_3;
  auVar292._0_8_ = *(undefined8 *)((long)param_1 + lVar39);
  uVar307 = *(undefined8 *)((long)param_2 + lVar39);
  auVar292._8_8_ = uVar307;
  auVar313._0_4_ = ((uint)((ulong)auVar328._0_8_ >> 0x10) & 0xff) << 0x10;
  uVar50 = (undefined1)((ulong)auVar328._0_8_ >> 0x20);
  auVar313[4] = uVar50;
  uVar12 = (undefined1)((ulong)uVar307 >> 0x38);
  auVar313[5] = 0;
  auVar313[6] = (char)((ulong)auVar328._0_8_ >> 0x30);
  auVar313[7] = uVar12;
  auVar313[8] = (char)uVar135;
  bVar134 = (byte)((ulong)uVar135 >> 0x10);
  auVar313[9] = 0;
  auVar313[10] = bVar134;
  bVar174 = (byte)((ulong)uVar135 >> 0x20);
  auVar313[0xb] = 0;
  auVar313[0xc] = bVar174;
  uVar42 = (undefined1)((ulong)uVar135 >> 0x30);
  auVar313[0xd] = 0;
  auVar313[0xe] = uVar42;
  uVar45 = CONCAT11((char)auVar139._0_8_,(char)auVar328._0_8_);
  auVar13._2_13_ = auVar313._2_13_;
  auVar13._0_2_ = uVar45;
  uVar55 = CONCAT13((char)((ulong)auVar139._0_8_ >> 0x10),auVar13._0_3_);
  auVar14._4_11_ = auVar313._4_11_;
  auVar14._0_4_ = uVar55;
  uVar71 = (undefined1)((ulong)auVar139._0_8_ >> 0x20);
  uVar306 = CONCAT15(uVar71,auVar14._0_5_);
  auVar15._6_9_ = auVar313._6_9_;
  auVar15._0_6_ = uVar306;
  uVar308 = CONCAT17((char)((ulong)auVar139._0_8_ >> 0x30),auVar15._0_7_);
  auVar16._8_7_ = auVar313._8_7_;
  auVar16._0_8_ = uVar308;
  Var309 = CONCAT19((char)uVar182,auVar16._0_9_);
  auVar17._10_5_ = auVar313._10_5_;
  auVar17._0_10_ = Var309;
  bVar178 = (byte)((ulong)uVar182 >> 0x10);
  auVar310._0_11_ = auVar17._0_11_;
  auVar310[0xb] = bVar178;
  auVar18._12_3_ = auVar313._12_3_;
  auVar18._0_12_ = auVar310;
  bVar82 = (byte)((ulong)uVar182 >> 0x20);
  auVar312._0_13_ = auVar18._0_13_;
  auVar312[0xd] = bVar82;
  auVar314[0xe] = uVar42;
  auVar314._0_14_ = auVar312;
  auVar314[0xf] = (char)((ulong)uVar182 >> 0x30);
  auVar25._1_13_ = auVar328._3_13_;
  auVar25[0] = (char)((ulong)auVar328._0_8_ >> 0x18);
  auVar93._0_4_ = auVar25._0_4_ << 0x10;
  auVar93._5_11_ = auVar328._5_11_;
  auVar93[4] = (char)((ulong)auVar328._0_8_ >> 0x28);
  auVar95._7_9_ = auVar328._7_9_;
  auVar95._0_6_ = auVar93._0_6_;
  auVar95[6] = (char)((ulong)auVar328._0_8_ >> 0x38);
  auVar97._9_7_ = (undefined7)((ulong)uVar135 >> 8);
  auVar97._0_8_ = auVar95._0_8_;
  auVar97[8] = (char)((ulong)uVar135 >> 8);
  bVar170 = (byte)((ulong)uVar135 >> 0x18);
  auVar99._11_5_ = (undefined5)((ulong)uVar135 >> 0x18);
  auVar99._0_10_ = auVar97._0_10_;
  auVar99[10] = bVar170;
  bVar61 = (byte)((ulong)uVar135 >> 0x28);
  auVar101._13_3_ = (undefined3)((ulong)uVar135 >> 0x28);
  auVar101._0_12_ = auVar99._0_12_;
  auVar101[0xc] = bVar61;
  uVar42 = (undefined1)((ulong)uVar135 >> 0x38);
  auVar103._0_14_ = auVar101._0_14_;
  auVar103[0xe] = uVar42;
  auVar103[0xf] = uVar42;
  auVar210._2_14_ = auVar103._2_14_;
  auVar210._0_2_ = CONCAT11((char)((ulong)auVar139._0_8_ >> 8),(char)((ulong)auVar328._0_8_ >> 8));
  auVar92._4_12_ = auVar103._4_12_;
  auVar92._0_4_ = CONCAT13((char)((ulong)auVar139._0_8_ >> 0x18),auVar210._0_3_);
  auVar94._6_10_ = auVar103._6_10_;
  auVar94._0_6_ = CONCAT15((char)((ulong)auVar139._0_8_ >> 0x28),auVar92._0_5_);
  auVar96._8_8_ = auVar103._8_8_;
  auVar96._0_8_ = CONCAT17((char)((ulong)auVar139._0_8_ >> 0x38),auVar94._0_7_);
  auVar98._10_6_ = auVar103._10_6_;
  auVar98._0_10_ = CONCAT19((char)((ulong)uVar182 >> 8),auVar96._0_9_);
  bVar181 = (byte)((ulong)uVar182 >> 0x18);
  auVar100._12_4_ = auVar103._12_4_;
  auVar89._0_11_ = auVar98._0_11_;
  auVar89[0xb] = bVar181;
  auVar100._0_12_ = auVar89;
  bVar85 = (byte)((ulong)uVar182 >> 0x28);
  auVar102._14_2_ = auVar103._14_2_;
  auVar91._0_13_ = auVar100._0_13_;
  auVar91[0xd] = bVar85;
  auVar102._0_14_ = auVar91;
  uVar43 = (undefined1)((ulong)uVar182 >> 0x38);
  auVar104._0_15_ = auVar102._0_15_;
  auVar104[0xf] = uVar43;
  uVar42 = (undefined1)((ulong)auVar186._0_8_ >> 0x10);
  auVar26._1_13_ = auVar139._3_13_;
  auVar26[0] = uVar42;
  auVar142._0_4_ = auVar26._0_4_ << 0x10;
  uVar51 = (undefined1)((ulong)auVar186._0_8_ >> 0x20);
  auVar142._5_11_ = auVar139._5_11_;
  auVar142[4] = uVar51;
  auVar144._7_9_ = auVar139._7_9_;
  auVar144._0_6_ = auVar142._0_6_;
  auVar144[6] = (char)((ulong)auVar186._0_8_ >> 0x30);
  auVar146._9_7_ = (undefined7)((ulong)uVar182 >> 8);
  auVar146._0_8_ = auVar144._0_8_;
  auVar146[8] = (char)uVar211;
  bVar167 = (byte)((ulong)uVar211 >> 0x10);
  auVar148._11_5_ = (undefined5)((ulong)uVar182 >> 0x18);
  auVar148._0_10_ = auVar146._0_10_;
  auVar148[10] = bVar167;
  bVar175 = (byte)((ulong)uVar211 >> 0x20);
  auVar150._13_3_ = (undefined3)((ulong)uVar182 >> 0x28);
  auVar150._0_12_ = auVar148._0_12_;
  auVar150[0xc] = bVar175;
  auVar152._0_14_ = auVar150._0_14_;
  auVar152[0xe] = (char)((ulong)uVar211 >> 0x30);
  auVar152[0xf] = uVar43;
  auVar140._2_14_ = auVar152._2_14_;
  auVar140._0_2_ = CONCAT11((char)auVar215._0_8_,(char)auVar186._0_8_);
  uVar66 = (undefined1)((ulong)auVar215._0_8_ >> 0x10);
  auVar141._4_12_ = auVar152._4_12_;
  auVar141._0_4_ = CONCAT13(uVar66,auVar140._0_3_);
  uVar72 = (undefined1)((ulong)auVar215._0_8_ >> 0x20);
  auVar143._6_10_ = auVar152._6_10_;
  auVar143._0_6_ = CONCAT15(uVar72,auVar141._0_5_);
  auVar145._8_8_ = auVar152._8_8_;
  auVar145._0_8_ = CONCAT17((char)((ulong)auVar215._0_8_ >> 0x30),auVar143._0_7_);
  auVar147._10_6_ = auVar152._10_6_;
  auVar147._0_10_ = CONCAT19((char)uVar241,auVar145._0_9_);
  bVar179 = (byte)((ulong)uVar241 >> 0x10);
  auVar149._12_4_ = auVar152._12_4_;
  auVar136._0_11_ = auVar147._0_11_;
  auVar136[0xb] = bVar179;
  auVar149._0_12_ = auVar136;
  bVar83 = (byte)((ulong)uVar241 >> 0x20);
  auVar151._14_2_ = auVar152._14_2_;
  auVar138._0_13_ = auVar149._0_13_;
  auVar138[0xd] = bVar83;
  auVar151._0_14_ = auVar138;
  auVar153._0_15_ = auVar151._0_15_;
  auVar153[0xf] = (char)((ulong)uVar241 >> 0x30);
  uVar47 = (undefined1)((ulong)auVar186._0_8_ >> 0x18);
  auVar27._1_13_ = auVar186._3_13_;
  auVar27[0] = uVar47;
  auVar188._0_4_ = auVar27._0_4_ << 0x10;
  uVar56 = (undefined1)((ulong)auVar186._0_8_ >> 0x28);
  auVar188._5_11_ = auVar186._5_11_;
  auVar188[4] = uVar56;
  auVar189._7_9_ = auVar186._7_9_;
  auVar189._0_6_ = auVar188._0_6_;
  auVar189[6] = (char)((ulong)auVar186._0_8_ >> 0x38);
  auVar191._9_7_ = (undefined7)((ulong)uVar211 >> 8);
  auVar191._0_8_ = auVar189._0_8_;
  auVar191[8] = (char)((ulong)uVar211 >> 8);
  bVar171 = (byte)((ulong)uVar211 >> 0x18);
  auVar193._11_5_ = (undefined5)((ulong)uVar211 >> 0x18);
  auVar193._0_10_ = auVar191._0_10_;
  auVar193[10] = bVar171;
  bVar62 = (byte)((ulong)uVar211 >> 0x28);
  auVar195._13_3_ = (undefined3)((ulong)uVar211 >> 0x28);
  auVar195._0_12_ = auVar193._0_12_;
  auVar195[0xc] = bVar62;
  uVar43 = (undefined1)((ulong)uVar211 >> 0x38);
  auVar197._0_14_ = auVar195._0_14_;
  auVar197[0xe] = uVar43;
  auVar197[0xf] = uVar43;
  auVar187._2_14_ = auVar197._2_14_;
  auVar187._0_2_ = CONCAT11((char)((ulong)auVar215._0_8_ >> 8),(char)((ulong)auVar186._0_8_ >> 8));
  uVar69 = (undefined1)((ulong)auVar215._0_8_ >> 0x18);
  bVar75 = (byte)((ulong)auVar215._0_8_ >> 0x28);
  auVar28._1_10_ = auVar197._6_10_;
  auVar28[0] = bVar75;
  auVar190._8_8_ = auVar197._8_8_;
  auVar190._0_8_ = CONCAT17((char)((ulong)auVar215._0_8_ >> 0x38),auVar28._0_7_ << 0x28);
  auVar192._10_6_ = auVar197._10_6_;
  auVar192._0_10_ = CONCAT19((char)((ulong)uVar241 >> 8),auVar190._0_9_);
  bVar80 = (byte)((ulong)uVar241 >> 0x18);
  auVar194._12_4_ = auVar197._12_4_;
  auVar183._0_11_ = auVar192._0_11_;
  auVar183[0xb] = bVar80;
  auVar194._0_12_ = auVar183;
  bVar86 = (byte)((ulong)uVar241 >> 0x28);
  auVar196._14_2_ = auVar197._14_2_;
  auVar185._0_13_ = auVar194._0_13_;
  auVar185[0xd] = bVar86;
  auVar196._0_14_ = auVar185;
  uVar44 = (undefined1)((ulong)uVar241 >> 0x38);
  auVar198._0_15_ = auVar196._0_15_;
  auVar198[0xf] = uVar44;
  uVar43 = (undefined1)((ulong)auVar245._0_8_ >> 0x10);
  auVar29._1_13_ = auVar215._3_13_;
  auVar29[0] = uVar43;
  auVar218._0_4_ = auVar29._0_4_ << 0x10;
  uVar52 = (undefined1)((ulong)auVar245._0_8_ >> 0x20);
  auVar218._5_11_ = auVar215._5_11_;
  auVar218[4] = uVar52;
  auVar220._7_9_ = auVar215._7_9_;
  auVar220._0_6_ = auVar218._0_6_;
  auVar220[6] = (char)((ulong)auVar245._0_8_ >> 0x30);
  auVar222._9_7_ = (undefined7)((ulong)uVar241 >> 8);
  auVar222._0_8_ = auVar220._0_8_;
  auVar222[8] = (char)uVar10;
  bVar168 = (byte)((ulong)uVar10 >> 0x10);
  auVar224._11_5_ = (undefined5)((ulong)uVar241 >> 0x18);
  auVar224._0_10_ = auVar222._0_10_;
  auVar224[10] = bVar168;
  bVar176 = (byte)((ulong)uVar10 >> 0x20);
  auVar226._13_3_ = (undefined3)((ulong)uVar241 >> 0x28);
  auVar226._0_12_ = auVar224._0_12_;
  auVar226[0xc] = bVar176;
  auVar228._0_14_ = auVar226._0_14_;
  auVar228[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar228[0xf] = uVar44;
  auVar216._2_14_ = auVar228._2_14_;
  auVar216._0_2_ = CONCAT11((char)uVar11,(char)auVar245._0_8_);
  uVar67 = (undefined1)((ulong)uVar11 >> 0x10);
  auVar217._4_12_ = auVar228._4_12_;
  auVar217._0_4_ = CONCAT13(uVar67,auVar216._0_3_);
  uVar73 = (undefined1)((ulong)uVar11 >> 0x20);
  auVar219._6_10_ = auVar228._6_10_;
  auVar219._0_6_ = CONCAT15(uVar73,auVar217._0_5_);
  auVar221._8_8_ = auVar228._8_8_;
  auVar221._0_8_ = CONCAT17((char)((ulong)uVar11 >> 0x30),auVar219._0_7_);
  auVar223._10_6_ = auVar228._10_6_;
  auVar223._0_10_ = CONCAT19((char)uVar271,auVar221._0_9_);
  auVar225._12_4_ = auVar228._12_4_;
  auVar212._0_11_ = auVar223._0_11_;
  auVar212[0xb] = bVar267;
  auVar225._0_12_ = auVar212;
  auVar227._14_2_ = auVar228._14_2_;
  auVar214._0_13_ = auVar225._0_13_;
  auVar214[0xd] = bVar269;
  auVar227._0_14_ = auVar214;
  auVar229._0_15_ = auVar227._0_15_;
  auVar229[0xf] = (char)((ulong)uVar271 >> 0x30);
  uVar48 = (undefined1)((ulong)auVar245._0_8_ >> 0x18);
  auVar30._1_13_ = auVar245._3_13_;
  auVar30[0] = uVar48;
  auVar247._0_4_ = auVar30._0_4_ << 0x10;
  uVar57 = (undefined1)((ulong)auVar245._0_8_ >> 0x28);
  auVar247._5_11_ = auVar245._5_11_;
  auVar247[4] = uVar57;
  auVar248._7_9_ = auVar245._7_9_;
  auVar248._0_6_ = auVar247._0_6_;
  auVar248[6] = (char)((ulong)auVar245._0_8_ >> 0x38);
  uVar59 = (undefined1)((ulong)uVar10 >> 8);
  auVar250._9_7_ = (undefined7)((ulong)uVar10 >> 8);
  auVar250._0_8_ = auVar248._0_8_;
  auVar250[8] = uVar59;
  bVar172 = (byte)((ulong)uVar10 >> 0x18);
  auVar252._11_5_ = (undefined5)((ulong)uVar10 >> 0x18);
  auVar252._0_10_ = auVar250._0_10_;
  auVar252[10] = bVar172;
  bVar63 = (byte)((ulong)uVar10 >> 0x28);
  auVar254._13_3_ = (undefined3)((ulong)uVar10 >> 0x28);
  auVar244._0_12_ = auVar252._0_12_;
  auVar244[0xc] = bVar63;
  auVar254._0_13_ = auVar244;
  uVar44 = (undefined1)((ulong)uVar10 >> 0x38);
  auVar256._0_14_ = auVar254._0_14_;
  auVar256[0xe] = uVar44;
  auVar256[0xf] = uVar44;
  auVar246._2_14_ = auVar256._2_14_;
  auVar246._0_2_ = CONCAT11((char)((ulong)uVar11 >> 8),(char)((ulong)auVar245._0_8_ >> 8));
  uVar70 = (undefined1)((ulong)uVar11 >> 0x18);
  uVar76 = (undefined1)((ulong)uVar11 >> 0x28);
  auVar249._8_8_ = auVar256._8_8_;
  auVar249._0_8_ = CONCAT17((char)((ulong)uVar11 >> 0x38),auVar244._6_7_ << 0x30);
  auVar251._10_6_ = auVar256._10_6_;
  auVar251._0_9_ = auVar249._0_9_;
  auVar251[9] = uVar266;
  auVar253._12_4_ = auVar256._12_4_;
  auVar242._0_11_ = auVar251._0_11_;
  auVar242[0xb] = bVar268;
  auVar253._0_12_ = auVar242;
  auVar255._14_2_ = auVar256._14_2_;
  auVar255._0_13_ = auVar253._0_13_;
  auVar255[0xd] = bVar270;
  auVar257._0_15_ = auVar255._0_15_;
  auVar257[0xf] = (char)((ulong)uVar271 >> 0x38);
  uVar44 = (undefined1)((ulong)auVar274._0_8_ >> 0x10);
  uVar53 = (undefined1)((ulong)auVar274._0_8_ >> 0x20);
  bVar169 = (byte)((ulong)uVar290 >> 0x10);
  bVar177 = (byte)((ulong)uVar290 >> 0x20);
  uVar68 = (undefined1)((ulong)auVar292._0_8_ >> 0x10);
  uVar74 = (undefined1)((ulong)auVar292._0_8_ >> 0x20);
  uVar78 = (undefined1)((ulong)auVar292._0_8_ >> 0x30);
  bVar180 = (byte)((ulong)uVar307 >> 0x10);
  bVar84 = (byte)((ulong)uVar307 >> 0x20);
  uVar49 = (undefined1)((ulong)auVar274._0_8_ >> 0x18);
  auVar31._1_13_ = auVar274._3_13_;
  auVar31[0] = uVar49;
  uVar58 = (undefined1)((ulong)auVar274._0_8_ >> 0x28);
  auVar276._0_8_ = (long)CONCAT91(auVar274._7_9_,(char)((ulong)auVar274._0_8_ >> 0x38)) << 0x30;
  uVar60 = (undefined1)((ulong)uVar290 >> 8);
  auVar276._9_7_ = (undefined7)((ulong)uVar290 >> 8);
  auVar276[8] = uVar60;
  bVar173 = (byte)((ulong)uVar290 >> 0x18);
  auVar278._11_5_ = (undefined5)((ulong)uVar290 >> 0x18);
  auVar278._0_10_ = auVar276._0_10_;
  auVar278[10] = bVar173;
  bVar64 = (byte)((ulong)uVar290 >> 0x28);
  auVar280._13_3_ = (undefined3)((ulong)uVar290 >> 0x28);
  auVar273._0_12_ = auVar278._0_12_;
  auVar273[0xc] = bVar64;
  auVar280._0_13_ = auVar273;
  uVar65 = (undefined1)((ulong)uVar290 >> 0x38);
  auVar282._0_14_ = auVar280._0_14_;
  auVar282[0xe] = uVar65;
  auVar282[0xf] = uVar65;
  uVar65 = (undefined1)((ulong)auVar292._0_8_ >> 0x18);
  uVar77 = (undefined1)((ulong)auVar292._0_8_ >> 0x28);
  auVar275._8_8_ = auVar282._8_8_;
  auVar275._0_8_ = CONCAT17((char)((ulong)auVar292._0_8_ >> 0x38),auVar273._6_7_ << 0x30);
  uVar79 = (undefined1)((ulong)uVar307 >> 8);
  auVar277._10_6_ = auVar282._10_6_;
  auVar277._0_9_ = auVar275._0_9_;
  auVar277[9] = uVar79;
  bVar81 = (byte)((ulong)uVar307 >> 0x18);
  auVar279._12_4_ = auVar282._12_4_;
  auVar272._0_11_ = auVar277._0_11_;
  auVar272[0xb] = bVar81;
  auVar279._0_12_ = auVar272;
  bVar87 = (byte)((ulong)uVar307 >> 0x28);
  auVar281._14_2_ = auVar282._14_2_;
  auVar281._0_13_ = auVar279._0_13_;
  auVar281[0xd] = bVar87;
  auVar283._0_15_ = auVar281._0_15_;
  auVar283[0xf] = uVar12;
  auVar32._2_10_ = auVar292._6_10_;
  auVar32._0_2_ = (short)((uint6)uVar306 >> 0x20);
  auVar295._0_8_ = auVar32._0_8_ << 0x20;
  auVar295._10_6_ = (undefined6)((ulong)uVar307 >> 0x10);
  auVar295._8_2_ = (short)((unkuint10)Var309 >> 0x40);
  auVar297._14_2_ = (undefined2)((ulong)uVar307 >> 0x30);
  auVar297._0_12_ = auVar295._0_12_;
  auVar297._12_2_ = auVar312._12_2_;
  auVar293._4_12_ = auVar297._4_12_;
  auVar293._0_4_ = CONCAT22(auVar140._0_2_,uVar45);
  auVar294._8_8_ = auVar297._8_8_;
  auVar294._0_8_ = CONCAT26((short)((uint6)auVar143._0_6_ >> 0x20),auVar293._0_6_);
  auVar296._12_4_ = auVar297._12_4_;
  auVar291._0_10_ = auVar294._0_10_;
  auVar291._10_2_ = (short)((unkuint10)auVar147._0_10_ >> 0x40);
  auVar296._0_12_ = auVar291;
  auVar298._0_14_ = auVar296._0_14_;
  auVar298._14_2_ = auVar138._12_2_;
  uVar45 = (undefined2)((uint)uVar55 >> 0x10);
  auVar33._2_10_ = auVar153._6_10_;
  auVar33._0_2_ = (short)((ulong)uVar308 >> 0x30);
  auVar156._0_8_ = auVar33._0_8_ << 0x20;
  auVar156._10_6_ = auVar153._10_6_;
  auVar156._8_2_ = auVar310._10_2_;
  auVar158._14_2_ = auVar153._14_2_;
  auVar158._0_12_ = auVar156._0_12_;
  auVar158._12_2_ = auVar314._14_2_;
  auVar154._4_12_ = auVar158._4_12_;
  auVar154._0_4_ = CONCAT22((short)((uint)auVar141._0_4_ >> 0x10),uVar45);
  auVar155._8_8_ = auVar158._8_8_;
  auVar155._0_8_ = CONCAT26((short)((ulong)auVar145._0_8_ >> 0x30),auVar154._0_6_);
  auVar157._12_4_ = auVar158._12_4_;
  auVar137._0_10_ = auVar155._0_10_;
  auVar137._10_2_ = auVar136._10_2_;
  auVar157._0_12_ = auVar137;
  auVar159._0_14_ = auVar157._0_14_;
  auVar159._14_2_ = auVar158._14_2_;
  uVar54 = (undefined2)((uint6)auVar94._0_6_ >> 0x20);
  auVar315._0_8_ = auVar312._6_8_ << 0x30;
  auVar315._10_6_ = auVar314._10_6_;
  auVar315._8_2_ = (short)((unkuint10)auVar98._0_10_ >> 0x40);
  auVar317._0_12_ = auVar315._0_12_;
  auVar317._12_2_ = auVar91._12_2_;
  auVar317._14_2_ = auVar314._14_2_;
  uVar305 = CONCAT22(auVar187._0_2_,auVar210._0_2_);
  auVar311._0_10_ = CONCAT82(auVar317._8_8_,(short)(((uint6)bVar75 << 0x28) >> 0x20)) << 0x30;
  auVar316._12_4_ = auVar317._12_4_;
  auVar311._10_2_ = (short)((unkuint10)auVar192._0_10_ >> 0x40);
  auVar316._0_12_ = auVar311;
  auVar318._0_14_ = auVar316._0_14_;
  auVar318._14_2_ = auVar185._12_2_;
  uVar46 = (undefined2)((uint)auVar92._0_4_ >> 0x10);
  auVar34._2_10_ = auVar104._6_10_;
  auVar34._0_2_ = (short)((ulong)auVar96._0_8_ >> 0x30);
  auVar107._0_8_ = auVar34._0_8_ << 0x20;
  auVar107._10_6_ = auVar104._10_6_;
  auVar107._8_2_ = auVar89._10_2_;
  auVar109._0_12_ = auVar107._0_12_;
  auVar109._12_2_ = auVar104._14_2_;
  auVar109._14_2_ = auVar104._14_2_;
  auVar105._4_12_ = auVar109._4_12_;
  auVar105._0_4_ = CONCAT22((short)(CONCAT13(uVar69,auVar187._0_3_) >> 0x10),uVar46);
  auVar106._8_8_ = auVar109._8_8_;
  auVar106._0_8_ = CONCAT26((short)((ulong)auVar190._0_8_ >> 0x30),auVar105._0_6_);
  auVar108._12_4_ = auVar109._12_4_;
  auVar90._0_10_ = auVar106._0_10_;
  auVar90._10_2_ = auVar183._10_2_;
  auVar108._0_12_ = auVar90;
  auVar110._0_14_ = auVar108._0_14_;
  auVar110._14_2_ = auVar198._14_2_;
  auVar204[0xf] = bVar84;
  auVar204[0xe] = bVar177;
  auVar35._2_10_ = auVar198._6_10_;
  auVar35._0_2_ = (short)((uint6)auVar219._0_6_ >> 0x20);
  auVar201._0_8_ = auVar35._0_8_ << 0x20;
  auVar201._10_6_ = auVar198._10_6_;
  auVar201._8_2_ = (short)((unkuint10)auVar223._0_10_ >> 0x40);
  auVar203._0_12_ = auVar201._0_12_;
  auVar203._12_2_ = auVar214._12_2_;
  auVar203._14_2_ = auVar198._14_2_;
  auVar199._4_12_ = auVar203._4_12_;
  auVar199._0_4_ = CONCAT22(CONCAT11((char)auVar292._0_8_,(char)auVar274._0_8_),auVar216._0_2_);
  auVar200._8_8_ = auVar203._8_8_;
  auVar200._0_8_ = CONCAT26(CONCAT11(uVar74,uVar53),auVar199._0_6_);
  auVar202._12_4_ = auVar203._12_4_;
  auVar184._0_10_ = auVar200._0_10_;
  auVar184._10_2_ = (short)(CONCAT12((char)uVar307,CONCAT11((char)uVar290,uVar78)) >> 8);
  auVar202._0_12_ = auVar184;
  auVar204._0_14_ = auVar202._0_14_;
  auVar235[0xf] = (char)((ulong)uVar307 >> 0x30);
  auVar235[0xe] = (char)((ulong)uVar290 >> 0x30);
  auVar36._2_10_ = auVar229._6_10_;
  auVar36._0_2_ = (short)((ulong)auVar221._0_8_ >> 0x30);
  auVar232._0_8_ = auVar36._0_8_ << 0x20;
  auVar232._10_6_ = auVar229._10_6_;
  auVar232._8_2_ = auVar212._10_2_;
  auVar234._0_12_ = auVar232._0_12_;
  auVar234._12_2_ = auVar229._14_2_;
  auVar234._14_2_ = auVar229._14_2_;
  auVar230._4_12_ = auVar234._4_12_;
  auVar230._0_4_ = CONCAT22(CONCAT11(uVar68,uVar44),(short)((uint)auVar217._0_4_ >> 0x10));
  auVar231._8_8_ = auVar234._8_8_;
  auVar231._0_8_ = CONCAT26(CONCAT11(uVar78,(char)((ulong)auVar274._0_8_ >> 0x30)),auVar230._0_6_);
  auVar233._12_4_ = auVar234._12_4_;
  auVar213._0_10_ = auVar231._0_10_;
  auVar213._10_2_ = (short)(CONCAT12(bVar180,CONCAT11(bVar169,(char)uVar307)) >> 8);
  auVar233._0_12_ = auVar213;
  auVar235._0_14_ = auVar233._0_14_;
  auVar37._2_10_ = auVar257._6_10_;
  auVar37._0_2_ = (short)((ulong)auVar249._0_8_ >> 0x30);
  auVar260._0_8_ = auVar37._0_8_ << 0x20;
  auVar260._10_6_ = auVar257._10_6_;
  auVar260._8_2_ = auVar242._10_2_;
  auVar262._0_12_ = auVar260._0_12_;
  auVar262._12_2_ = auVar257._14_2_;
  auVar262._14_2_ = auVar257._14_2_;
  auVar258._4_12_ = auVar262._4_12_;
  auVar258._0_4_ =
       CONCAT22((short)(CONCAT13(uVar65,(int3)(CONCAT14(uVar58,auVar31._0_4_ << 0x10) >> 0x10) <<
                                        0x10) >> 0x10),
                (short)(CONCAT13(uVar70,auVar246._0_3_) >> 0x10));
  auVar259._8_8_ = auVar262._8_8_;
  auVar259._0_8_ = CONCAT26((short)((ulong)auVar275._0_8_ >> 0x30),auVar258._0_6_);
  auVar261._12_4_ = auVar262._12_4_;
  auVar243._0_10_ = auVar259._0_10_;
  auVar243._10_2_ = auVar272._10_2_;
  auVar261._0_12_ = auVar243;
  auVar263._0_14_ = auVar261._0_14_;
  auVar263._14_2_ = auVar283._14_2_;
  auVar284._4_12_ = auVar283._4_12_;
  auVar284._0_4_ = auVar293._0_4_;
  auVar286._12_4_ = auVar283._12_4_;
  auVar286._0_8_ = auVar284._0_8_;
  auVar286._8_4_ = auVar291._8_4_;
  auVar285._8_8_ = auVar286._8_8_;
  auVar285._4_4_ = auVar199._0_4_;
  auVar285._0_4_ = auVar293._0_4_;
  auVar287._0_12_ = auVar285._0_12_;
  auVar287._12_4_ = auVar184._8_4_;
  uVar55 = (undefined4)((ulong)auVar294._0_8_ >> 0x20);
  auVar205._4_12_ = auVar204._4_12_;
  auVar205._0_4_ = uVar55;
  auVar207._12_4_ = auVar204._12_4_;
  auVar207._0_8_ = auVar205._0_8_;
  auVar207._8_4_ = auVar298._12_4_;
  auVar206._8_8_ = auVar207._8_8_;
  auVar206._4_4_ = (int)((ulong)auVar200._0_8_ >> 0x20);
  auVar206._0_4_ = uVar55;
  auVar208._0_12_ = auVar206._0_12_;
  auVar208._12_4_ = auVar207._12_4_;
  auVar299._4_12_ = auVar298._4_12_;
  auVar299._0_4_ = auVar154._0_4_;
  auVar301._0_8_ = auVar299._0_8_;
  auVar301._8_4_ = auVar137._8_4_;
  auVar301._12_4_ = auVar298._12_4_;
  auVar300._8_8_ = auVar301._8_8_;
  auVar300._4_4_ = auVar230._0_4_;
  auVar300._0_4_ = auVar154._0_4_;
  auVar302._0_12_ = auVar300._0_12_;
  auVar302._12_4_ = auVar213._8_4_;
  uVar55 = (undefined4)((ulong)auVar155._0_8_ >> 0x20);
  auVar160._4_12_ = auVar159._4_12_;
  auVar160._0_4_ = uVar55;
  auVar162._0_8_ = auVar160._0_8_;
  auVar162._8_4_ = auVar159._12_4_;
  auVar162._12_4_ = auVar159._12_4_;
  auVar161._8_8_ = auVar162._8_8_;
  auVar161._4_4_ = (int)((ulong)auVar231._0_8_ >> 0x20);
  auVar161._0_4_ = uVar55;
  auVar163._0_12_ = auVar161._0_12_;
  auVar163._12_4_ = auVar235._12_4_;
  auVar237[6] = (char)((ulong)auVar274._0_8_ >> 8);
  auVar237._4_2_ = auVar246._0_2_;
  auVar237[7] = (char)((ulong)auVar292._0_8_ >> 8);
  auVar236._4_12_ = auVar235._4_12_;
  auVar236._0_4_ = uVar305;
  auVar238._0_8_ = auVar236._0_8_;
  auVar238._8_4_ = auVar311._8_4_;
  auVar238._12_4_ = auVar235._12_4_;
  auVar237._8_8_ = auVar238._8_8_;
  auVar237._0_4_ = uVar305;
  auVar239._0_12_ = auVar237._0_12_;
  auVar239._12_4_ =
       (int)(CONCAT14(uVar79,CONCAT13(uVar60,CONCAT12(uVar266,CONCAT11(uVar59,uVar77)))) >> 8);
  auVar319._4_12_ = auVar318._4_12_;
  auVar319._0_4_ = auVar105._0_4_;
  auVar321._12_4_ = auVar318._12_4_;
  auVar321._0_8_ = auVar319._0_8_;
  auVar321._8_4_ = auVar90._8_4_;
  auVar320._8_8_ = auVar321._8_8_;
  auVar320._4_4_ = auVar258._0_4_;
  auVar320._0_4_ = auVar105._0_4_;
  auVar322._0_12_ = auVar320._0_12_;
  auVar322._12_4_ = auVar243._8_4_;
  uVar55 = (undefined4)((ulong)auVar106._0_8_ >> 0x20);
  auVar111._4_12_ = auVar110._4_12_;
  auVar111._0_4_ = uVar55;
  auVar113._0_8_ = auVar111._0_8_;
  auVar113._8_4_ = auVar110._12_4_;
  auVar113._12_4_ = auVar110._12_4_;
  auVar112._8_8_ = auVar113._8_8_;
  auVar112._4_4_ = (int)((ulong)auVar259._0_8_ >> 0x20);
  auVar112._0_4_ = uVar55;
  auVar114._0_12_ = auVar112._0_12_;
  auVar114._12_4_ = auVar263._12_4_;
  auVar288 = NEON_uabd(auVar287,auVar239,1);
  auVar240 = NEON_uabd(auVar239,auVar302,1);
  auVar325 = NEON_uabd(auVar302,auVar322,1);
  auVar115 = NEON_uabd(auVar114,auVar163,1);
  auVar116[2] = uVar56;
  auVar116._0_2_ = uVar54;
  auVar116[3] = bVar75;
  auVar116[4] = uVar57;
  auVar116[5] = uVar76;
  auVar116[6] = uVar58;
  auVar116[7] = uVar77;
  auVar116[8] = bVar61;
  auVar116[9] = bVar85;
  auVar116[10] = bVar62;
  auVar116[0xb] = bVar86;
  auVar116[0xc] = bVar63;
  auVar116[0xd] = bVar270;
  auVar116[0xe] = bVar64;
  auVar116[0xf] = bVar87;
  auVar164 = NEON_uabd(auVar163,auVar116,1);
  auVar165[2] = uVar56;
  auVar165._0_2_ = uVar54;
  auVar165[3] = bVar75;
  auVar165[4] = uVar57;
  auVar165[5] = uVar76;
  auVar165[6] = uVar58;
  auVar165[7] = uVar77;
  auVar165[8] = bVar61;
  auVar165[9] = bVar85;
  auVar165[10] = bVar62;
  auVar165[0xb] = bVar86;
  auVar165[0xc] = bVar63;
  auVar165[0xd] = bVar270;
  auVar165[0xe] = bVar64;
  auVar165[0xf] = bVar87;
  auVar328 = NEON_uabd(auVar165,auVar208,1);
  auVar240 = NEON_umax(auVar288,auVar240,1);
  auVar116 = NEON_umax(auVar325,auVar115,1);
  auVar165 = NEON_umax(auVar164,auVar328,1);
  auVar116 = NEON_umax(auVar240,auVar116,1);
  auVar116 = NEON_umax(auVar116,auVar165,1);
  auVar165 = NEON_uabd(auVar322,auVar208,1);
  auVar115[2] = uVar56;
  auVar115._0_2_ = uVar54;
  auVar115[3] = bVar75;
  auVar115[4] = uVar57;
  auVar115[5] = uVar76;
  auVar115[6] = uVar58;
  auVar115[7] = uVar77;
  auVar115[8] = bVar61;
  auVar115[9] = bVar85;
  auVar115[10] = bVar62;
  auVar115[0xb] = bVar86;
  auVar115[0xc] = bVar63;
  auVar115[0xd] = bVar270;
  auVar115[0xe] = bVar64;
  auVar115[0xf] = bVar87;
  auVar115 = NEON_uabd(auVar302,auVar115,1);
  auVar165 = NEON_uqadd(auVar165,auVar165,1);
  auVar264[0] = auVar115[0] >> 1;
  auVar264[1] = auVar115[1] >> 1;
  auVar264[2] = auVar115[2] >> 1;
  auVar264[3] = auVar115[3] >> 1;
  auVar264[4] = auVar115[4] >> 1;
  auVar264[5] = auVar115[5] >> 1;
  auVar264[6] = auVar115[6] >> 1;
  auVar264[7] = auVar115[7] >> 1;
  auVar264[8] = auVar115[8] >> 1;
  auVar264[9] = auVar115[9] >> 1;
  auVar264[10] = auVar115[10] >> 1;
  auVar264[0xb] = auVar115[0xb] >> 1;
  auVar264[0xc] = auVar115[0xc] >> 1;
  auVar264[0xd] = auVar115[0xd] >> 1;
  auVar264[0xe] = auVar115[0xe] >> 1;
  auVar264[0xf] = auVar115[0xf] >> 1;
  auVar165 = NEON_uqadd(auVar165,auVar264,1);
  bVar88 = -(auVar165[0] <= param_4) & -(auVar116[0] <= param_5);
  bVar119 = -(auVar165[1] <= param_4) & -(auVar116[1] <= param_5);
  bVar120 = -(auVar165[2] <= param_4) & -(auVar116[2] <= param_5);
  bVar121 = -(auVar165[3] <= param_4) & -(auVar116[3] <= param_5);
  bVar122 = -(auVar165[4] <= param_4) & -(auVar116[4] <= param_5);
  bVar123 = -(auVar165[5] <= param_4) & -(auVar116[5] <= param_5);
  bVar124 = -(auVar165[6] <= param_4) & -(auVar116[6] <= param_5);
  bVar125 = -(auVar165[7] <= param_4) & -(auVar116[7] <= param_5);
  bVar126 = -(auVar165[8] <= param_4) & -(auVar116[8] <= param_5);
  bVar127 = -(auVar165[9] <= param_4) & -(auVar116[9] <= param_5);
  bVar128 = -(auVar165[10] <= param_4) & -(auVar116[10] <= param_5);
  bVar129 = -(auVar165[0xb] <= param_4) & -(auVar116[0xb] <= param_5);
  bVar130 = -(auVar165[0xc] <= param_4) & -(auVar116[0xc] <= param_5);
  bVar131 = -(auVar165[0xd] <= param_4) & -(auVar116[0xd] <= param_5);
  bVar132 = -(auVar165[0xe] <= param_4) & -(auVar116[0xe] <= param_5);
  bVar133 = -(auVar165[0xf] <= param_4) & -(auVar116[0xf] <= param_5);
  auVar265._0_8_ =
       CONCAT17(uVar68,CONCAT16(uVar44,CONCAT15(uVar67,CONCAT14(uVar43,CONCAT13(uVar66,CONCAT12(
                                                  uVar42,uVar45)))))) ^ 0x8080808080808080;
  auVar265[8] = bVar134 ^ 0x80;
  auVar265[9] = bVar178 ^ 0x80;
  auVar265[10] = bVar167 ^ 0x80;
  auVar265[0xb] = bVar179 ^ 0x80;
  auVar265[0xc] = bVar168 ^ 0x80;
  auVar265[0xd] = bVar267 ^ 0x80;
  auVar265[0xe] = bVar169 ^ 0x80;
  auVar265[0xf] = bVar180 ^ 0x80;
  auVar289._0_8_ =
       CONCAT17(uVar65,CONCAT16(uVar49,CONCAT15(uVar70,CONCAT14(uVar48,CONCAT13(uVar69,CONCAT12(
                                                  uVar47,uVar46)))))) ^ 0x8080808080808080;
  auVar289[8] = bVar170 ^ 0x80;
  auVar289[9] = bVar181 ^ 0x80;
  auVar289[10] = bVar171 ^ 0x80;
  auVar289[0xb] = bVar80 ^ 0x80;
  auVar289[0xc] = bVar172 ^ 0x80;
  auVar289[0xd] = bVar268 ^ 0x80;
  auVar289[0xe] = bVar173 ^ 0x80;
  auVar289[0xf] = bVar81 ^ 0x80;
  auVar209._0_8_ =
       CONCAT17(uVar74,CONCAT16(uVar53,CONCAT15(uVar73,CONCAT14(uVar52,CONCAT13(uVar72,CONCAT12(
                                                  uVar51,CONCAT11(uVar71,uVar50))))))) ^
       0x8080808080808080;
  auVar209[8] = bVar174 ^ 0x80;
  auVar209[9] = bVar82 ^ 0x80;
  auVar209[10] = bVar175 ^ 0x80;
  auVar209[0xb] = bVar83 ^ 0x80;
  auVar209[0xc] = bVar176 ^ 0x80;
  auVar209[0xd] = bVar269 ^ 0x80;
  auVar209[0xe] = bVar177 ^ 0x80;
  auVar209[0xf] = bVar84 ^ 0x80;
  bVar134 = bVar88 & (-(param_6 < auVar328[0]) | -(param_6 < auVar325[0]));
  bVar167 = bVar119 & (-(param_6 < auVar328[1]) | -(param_6 < auVar325[1]));
  bVar168 = bVar120 & (-(param_6 < auVar328[2]) | -(param_6 < auVar325[2]));
  bVar169 = bVar121 & (-(param_6 < auVar328[3]) | -(param_6 < auVar325[3]));
  bVar170 = bVar122 & (-(param_6 < auVar328[4]) | -(param_6 < auVar325[4]));
  bVar171 = bVar123 & (-(param_6 < auVar328[5]) | -(param_6 < auVar325[5]));
  bVar172 = bVar124 & (-(param_6 < auVar328[6]) | -(param_6 < auVar325[6]));
  bVar173 = bVar125 & (-(param_6 < auVar328[7]) | -(param_6 < auVar325[7]));
  bVar174 = bVar126 & (-(param_6 < auVar328[8]) | -(param_6 < auVar325[8]));
  bVar175 = bVar127 & (-(param_6 < auVar328[9]) | -(param_6 < auVar325[9]));
  bVar176 = bVar128 & (-(param_6 < auVar328[10]) | -(param_6 < auVar325[10]));
  bVar177 = bVar129 & (-(param_6 < auVar328[0xb]) | -(param_6 < auVar325[0xb]));
  bVar178 = bVar130 & (-(param_6 < auVar328[0xc]) | -(param_6 < auVar325[0xc]));
  bVar179 = bVar131 & (-(param_6 < auVar328[0xd]) | -(param_6 < auVar325[0xd]));
  bVar180 = bVar132 & (-(param_6 < auVar328[0xe]) | -(param_6 < auVar325[0xe]));
  bVar181 = bVar133 & (-(param_6 < auVar328[0xf]) | -(param_6 < auVar325[0xf]));
  auVar116 = NEON_sqsub(auVar209,auVar289,1);
  auVar164[8] = bVar61 ^ 0x80;
  auVar164._0_8_ =
       CONCAT17(uVar77,CONCAT16(uVar58,CONCAT15(uVar76,CONCAT14(uVar57,CONCAT13(bVar75,CONCAT12(
                                                  uVar56,uVar54)))))) ^ 0x8080808080808080;
  auVar164[9] = bVar85 ^ 0x80;
  auVar164[10] = bVar62 ^ 0x80;
  auVar164[0xb] = bVar86 ^ 0x80;
  auVar164[0xc] = bVar63 ^ 0x80;
  auVar164[0xd] = bVar270 ^ 0x80;
  auVar164[0xe] = bVar64 ^ 0x80;
  auVar164[0xf] = bVar87 ^ 0x80;
  auVar165 = NEON_sqsub(auVar265,auVar164,1);
  auVar165 = NEON_sqadd(auVar165,auVar116,1);
  auVar165 = NEON_sqadd(auVar116,auVar165,1);
  auVar116 = NEON_sqadd(auVar116,auVar165,1);
  auVar303[0] = auVar116[0] & bVar134;
  auVar303[1] = auVar116[1] & bVar167;
  auVar303[2] = auVar116[2] & bVar168;
  auVar303[3] = auVar116[3] & bVar169;
  auVar303[4] = auVar116[4] & bVar170;
  auVar303[5] = auVar116[5] & bVar171;
  auVar303[6] = auVar116[6] & bVar172;
  auVar303[7] = auVar116[7] & bVar173;
  auVar303[8] = auVar116[8] & bVar174;
  auVar303[9] = auVar116[9] & bVar175;
  auVar303[10] = auVar116[10] & bVar176;
  auVar303[0xb] = auVar116[0xb] & bVar177;
  auVar303[0xc] = auVar116[0xc] & bVar178;
  auVar303[0xd] = auVar116[0xd] & bVar179;
  auVar303[0xe] = auVar116[0xe] & bVar180;
  auVar303[0xf] = auVar116[0xf] & bVar181;
  auVar323[8] = 3;
  auVar323._0_8_ = 0x303030303030303;
  auVar323[9] = 3;
  auVar323[10] = 3;
  auVar323[0xb] = 3;
  auVar323[0xc] = 3;
  auVar323[0xd] = 3;
  auVar323[0xe] = 3;
  auVar323[0xf] = 3;
  auVar165 = NEON_sqadd(auVar303,auVar323,1);
  auVar329[8] = 4;
  auVar329._0_8_ = 0x404040404040404;
  auVar329[9] = 4;
  auVar329[10] = 4;
  auVar329[0xb] = 4;
  auVar329[0xc] = 4;
  auVar329[0xd] = 4;
  auVar329[0xe] = 4;
  auVar329[0xf] = 4;
  auVar116 = NEON_sqadd(auVar303,auVar329,1);
  auVar326[0] = auVar165[0] >> 3;
  auVar326[1] = auVar165[1] >> 3;
  auVar326[2] = auVar165[2] >> 3;
  auVar326[3] = auVar165[3] >> 3;
  auVar326[4] = auVar165[4] >> 3;
  auVar326[5] = auVar165[5] >> 3;
  auVar326[6] = auVar165[6] >> 3;
  auVar326[7] = auVar165[7] >> 3;
  auVar326[8] = auVar165[8] >> 3;
  auVar326[9] = auVar165[9] >> 3;
  auVar326[10] = auVar165[10] >> 3;
  auVar326[0xb] = auVar165[0xb] >> 3;
  auVar326[0xc] = auVar165[0xc] >> 3;
  auVar326[0xd] = auVar165[0xd] >> 3;
  auVar326[0xe] = auVar165[0xe] >> 3;
  auVar326[0xf] = auVar165[0xf] >> 3;
  auVar304[0] = auVar116[0] >> 3;
  auVar304[1] = auVar116[1] >> 3;
  auVar304[2] = auVar116[2] >> 3;
  auVar304[3] = auVar116[3] >> 3;
  auVar304[4] = auVar116[4] >> 3;
  auVar304[5] = auVar116[5] >> 3;
  auVar304[6] = auVar116[6] >> 3;
  auVar304[7] = auVar116[7] >> 3;
  auVar304[8] = auVar116[8] >> 3;
  auVar304[9] = auVar116[9] >> 3;
  auVar304[10] = auVar116[10] >> 3;
  auVar304[0xb] = auVar116[0xb] >> 3;
  auVar304[0xc] = auVar116[0xc] >> 3;
  auVar304[0xd] = auVar116[0xd] >> 3;
  auVar304[0xe] = auVar116[0xe] >> 3;
  auVar304[0xf] = auVar116[0xf] >> 3;
  auVar164 = NEON_sqadd(auVar289,auVar326,1);
  auVar115 = NEON_sqsub(auVar209,auVar304,1);
  auVar116 = NEON_sqsub(auVar115,auVar164,1);
  auVar165 = NEON_sqadd(auVar116,auVar116,1);
  auVar116 = NEON_sqadd(auVar116,auVar165,1);
  auVar117[0] = auVar116[0] & (bVar134 ^ bVar88);
  auVar117[1] = auVar116[1] & (bVar167 ^ bVar119);
  auVar117[2] = auVar116[2] & (bVar168 ^ bVar120);
  auVar117[3] = auVar116[3] & (bVar169 ^ bVar121);
  auVar117[4] = auVar116[4] & (bVar170 ^ bVar122);
  auVar117[5] = auVar116[5] & (bVar171 ^ bVar123);
  auVar117[6] = auVar116[6] & (bVar172 ^ bVar124);
  auVar117[7] = auVar116[7] & (bVar173 ^ bVar125);
  auVar117[8] = auVar116[8] & (bVar174 ^ bVar126);
  auVar117[9] = auVar116[9] & (bVar175 ^ bVar127);
  auVar117[10] = auVar116[10] & (bVar176 ^ bVar128);
  auVar117[0xb] = auVar116[0xb] & (bVar177 ^ bVar129);
  auVar117[0xc] = auVar116[0xc] & (bVar178 ^ bVar130);
  auVar117[0xd] = auVar116[0xd] & (bVar179 ^ bVar131);
  auVar117[0xe] = auVar116[0xe] & (bVar180 ^ bVar132);
  auVar117[0xf] = auVar116[0xf] & (bVar181 ^ bVar133);
  auVar165 = NEON_sqadd(auVar117,auVar329,1);
  auVar116 = NEON_sqadd(auVar117,auVar323,1);
  auVar166[0] = auVar165[0] >> 3;
  auVar166[1] = auVar165[1] >> 3;
  auVar166[2] = auVar165[2] >> 3;
  auVar166[3] = auVar165[3] >> 3;
  auVar166[4] = auVar165[4] >> 3;
  auVar166[5] = auVar165[5] >> 3;
  auVar166[6] = auVar165[6] >> 3;
  auVar166[7] = auVar165[7] >> 3;
  auVar166[8] = auVar165[8] >> 3;
  auVar166[9] = auVar165[9] >> 3;
  auVar166[10] = auVar165[10] >> 3;
  auVar166[0xb] = auVar165[0xb] >> 3;
  auVar166[0xc] = auVar165[0xc] >> 3;
  auVar166[0xd] = auVar165[0xd] >> 3;
  auVar166[0xe] = auVar165[0xe] >> 3;
  auVar166[0xf] = auVar165[0xf] >> 3;
  auVar118[0] = auVar116[0] >> 3;
  auVar118[1] = auVar116[1] >> 3;
  auVar118[2] = auVar116[2] >> 3;
  auVar118[3] = auVar116[3] >> 3;
  auVar118[4] = auVar116[4] >> 3;
  auVar118[5] = auVar116[5] >> 3;
  auVar118[6] = auVar116[6] >> 3;
  auVar118[7] = auVar116[7] >> 3;
  auVar118[8] = auVar116[8] >> 3;
  auVar118[9] = auVar116[9] >> 3;
  auVar118[10] = auVar116[10] >> 3;
  auVar118[0xb] = auVar116[0xb] >> 3;
  auVar118[0xc] = auVar116[0xc] >> 3;
  auVar118[0xd] = auVar116[0xd] >> 3;
  auVar118[0xe] = auVar116[0xe] >> 3;
  auVar118[0xf] = auVar116[0xf] >> 3;
  auVar288 = NEON_srshr(auVar166,1,1);
  auVar116 = NEON_sqadd(auVar164,auVar118,1);
  uVar20 = auVar116._0_7_ ^ 0x80808080;
  uVar19 = auVar116._0_7_ ^ 0x808080808080;
  auVar327._0_8_ = auVar116._0_8_ ^ 0x8080808080808080;
  auVar327[8] = auVar116[8] ^ 0x80;
  auVar327[9] = auVar116[9] ^ 0x80;
  auVar327[10] = auVar116[10] ^ 0x80;
  auVar327[0xb] = auVar116[0xb] ^ 0x80;
  auVar327[0xc] = auVar116[0xc] ^ 0x80;
  auVar327[0xd] = auVar116[0xd] ^ 0x80;
  auVar327[0xe] = auVar116[0xe] ^ 0x80;
  auVar327[0xf] = auVar116[0xf] ^ 0x80;
  auVar165 = NEON_sqsub(auVar115,auVar166,1);
  uVar22 = auVar165._0_7_ ^ 0x80808080;
  uVar21 = auVar165._0_7_ ^ 0x808080808080;
  auVar330._0_8_ = auVar165._0_8_ ^ 0x8080808080808080;
  auVar330[8] = auVar165[8] ^ 0x80;
  auVar330[9] = auVar165[9] ^ 0x80;
  auVar330[10] = auVar165[10] ^ 0x80;
  auVar330[0xb] = auVar165[0xb] ^ 0x80;
  auVar330[0xc] = auVar165[0xc] ^ 0x80;
  auVar330[0xd] = auVar165[0xd] ^ 0x80;
  auVar330[0xe] = auVar165[0xe] ^ 0x80;
  auVar330[0xf] = auVar165[0xf] ^ 0x80;
  auVar115 = NEON_sqadd(auVar265,auVar288,1);
  uVar24 = auVar115._0_7_ ^ 0x80808080;
  uVar23 = auVar115._0_7_ ^ 0x808080808080;
  auVar324._0_8_ = auVar115._0_8_ ^ 0x8080808080808080;
  auVar324[8] = auVar115[8] ^ 0x80;
  auVar324[9] = auVar115[9] ^ 0x80;
  auVar324[10] = auVar115[10] ^ 0x80;
  auVar324[0xb] = auVar115[0xb] ^ 0x80;
  auVar324[0xc] = auVar115[0xc] ^ 0x80;
  auVar324[0xd] = auVar115[0xd] ^ 0x80;
  auVar324[0xe] = auVar115[0xe] ^ 0x80;
  auVar324[0xf] = auVar115[0xf] ^ 0x80;
  auVar240[8] = bVar61 ^ 0x80;
  auVar240._0_8_ =
       CONCAT17(uVar77,CONCAT16(uVar58,CONCAT15(uVar76,CONCAT14(uVar57,CONCAT13(bVar75,CONCAT12(
                                                  uVar56,uVar54)))))) ^ 0x8080808080808080;
  auVar240[9] = bVar85 ^ 0x80;
  auVar240[10] = bVar62 ^ 0x80;
  auVar240[0xb] = bVar86 ^ 0x80;
  auVar240[0xc] = bVar63 ^ 0x80;
  auVar240[0xd] = bVar270 ^ 0x80;
  auVar240[0xe] = bVar64 ^ 0x80;
  auVar240[0xf] = bVar87 ^ 0x80;
  auVar164 = NEON_sqsub(auVar240,auVar288,1);
  bVar134 = auVar164[8] ^ 0x80;
  bVar167 = auVar164[9] ^ 0x80;
  bVar168 = auVar164[10] ^ 0x80;
  bVar169 = auVar164[0xb] ^ 0x80;
  bVar170 = auVar164[0xc] ^ 0x80;
  bVar171 = auVar164[0xd] ^ 0x80;
  bVar172 = auVar164[0xe] ^ 0x80;
  bVar173 = auVar164[0xf] ^ 0x80;
  puVar6 = (undefined1 *)((long)param_1 + 2);
  puVar3 = puVar6 + (int)param_3;
  puVar4 = puVar6 + (long)(int)param_3 * 2;
  puVar7 = puVar6 + lVar1;
  puVar5 = puVar6 + (long)(int)param_3 * 4;
  *puVar6 = (char)uVar24;
  *(char *)((long)param_1 + 3) = (char)uVar20;
  *(char *)((long)param_1 + 4) = (char)uVar22;
  *(byte *)((long)param_1 + 5) = auVar164[0] ^ 0x80;
  pbVar41 = puVar6 + lVar39;
  *puVar3 = (char)(uVar24 >> 8);
  puVar3[1] = (char)(uVar20 >> 8);
  puVar3[2] = (char)(uVar22 >> 8);
  puVar3[3] = auVar164[1] ^ 0x80;
  *puVar4 = (char)(uVar24 >> 0x10);
  puVar4[1] = (char)(uVar20 >> 0x10);
  puVar4[2] = (char)(uVar22 >> 0x10);
  puVar4[3] = auVar164[2] ^ 0x80;
  puVar3 = puVar6 + lVar2;
  pbVar8 = puVar6 + lVar1 * 2;
  *puVar7 = (char)(uVar24 >> 0x18);
  puVar7[1] = (char)(uVar20 >> 0x18);
  puVar7[2] = (char)(uVar22 >> 0x18);
  puVar7[3] = auVar164[3] ^ 0x80;
  auVar240 = NEON_ext(auVar324,auVar324,8,1);
  auVar328 = NEON_ext(auVar327,auVar327,8,1);
  auVar210 = NEON_ext(auVar330,auVar330,8,1);
  auVar288[8] = bVar134;
  auVar288._0_8_ = auVar164._0_8_ ^ 0x8080808080808080;
  auVar288[9] = bVar167;
  auVar288[10] = bVar168;
  auVar288[0xb] = bVar169;
  auVar288[0xc] = bVar170;
  auVar288[0xd] = bVar171;
  auVar288[0xe] = bVar172;
  auVar288[0xf] = bVar173;
  auVar325[8] = bVar134;
  auVar325._0_8_ = auVar164._0_8_ ^ 0x8080808080808080;
  auVar325[9] = bVar167;
  auVar325[10] = bVar168;
  auVar325[0xb] = bVar169;
  auVar325[0xc] = bVar170;
  auVar325[0xd] = bVar171;
  auVar325[0xe] = bVar172;
  auVar325[0xf] = bVar173;
  auVar288 = NEON_ext(auVar288,auVar325,8,1);
  *puVar5 = (char)(uVar23 >> 0x20);
  puVar5[1] = (char)(uVar19 >> 0x20);
  puVar5[2] = (char)(uVar21 >> 0x20);
  puVar5[3] = auVar164[4] ^ 0x80;
  *puVar3 = (char)(uVar23 >> 0x28);
  puVar3[1] = (char)(uVar19 >> 0x28);
  puVar3[2] = (char)(uVar21 >> 0x28);
  puVar3[3] = auVar164[5] ^ 0x80;
  *pbVar8 = auVar115[6] ^ 0x80;
  pbVar8[1] = auVar116[6] ^ 0x80;
  pbVar8[2] = auVar165[6] ^ 0x80;
  pbVar8[3] = auVar164[6] ^ 0x80;
  *pbVar41 = auVar115[7] ^ 0x80;
  pbVar41[1] = auVar116[7] ^ 0x80;
  pbVar41[2] = auVar165[7] ^ 0x80;
  pbVar41[3] = auVar164[7] ^ 0x80;
  puVar6 = (undefined1 *)((long)param_2 + 2);
  puVar3 = puVar6 + (int)param_3;
  puVar4 = puVar6 + (long)(int)param_3 * 2;
  puVar7 = puVar6 + lVar1;
  *puVar6 = auVar240[0];
  *(char *)((long)param_2 + 3) = auVar328[0];
  *(char *)((long)param_2 + 4) = auVar210[0];
  *(char *)((long)param_2 + 5) = auVar288[0];
  puVar40 = puVar6 + lVar39;
  puVar5 = puVar6 + (long)(int)param_3 * 4;
  puVar9 = puVar6 + lVar2;
  puVar6 = puVar6 + lVar1 * 2;
  *puVar3 = auVar240[1];
  puVar3[1] = auVar328[1];
  puVar3[2] = auVar210[1];
  puVar3[3] = auVar288[1];
  *puVar4 = auVar240[2];
  puVar4[1] = auVar328[2];
  puVar4[2] = auVar210[2];
  puVar4[3] = auVar288[2];
  *puVar7 = auVar240[3];
  puVar7[1] = auVar328[3];
  puVar7[2] = auVar210[3];
  puVar7[3] = auVar288[3];
  *puVar5 = auVar240[4];
  puVar5[1] = auVar328[4];
  puVar5[2] = auVar210[4];
  puVar5[3] = auVar288[4];
  *puVar9 = auVar240[5];
  puVar9[1] = auVar328[5];
  puVar9[2] = auVar210[5];
  puVar9[3] = auVar288[5];
  *puVar6 = auVar240[6];
  puVar6[1] = auVar328[6];
  puVar6[2] = auVar210[6];
  puVar6[3] = auVar288[6];
  *puVar40 = auVar240[7];
  puVar40[1] = auVar328[7];
  puVar40[2] = auVar210[7];
  puVar40[3] = auVar288[7];
  return;
}




void FUN_1010c4a54(ulong *param_1,int param_2,byte param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  auVar4 = *(undefined1 (*) [16])((long)param_1 - (long)(param_2 << 1));
  pauVar3 = (undefined1 (*) [16])((long)param_1 - (long)param_2);
  auVar24 = *pauVar3;
  auVar1 = *(undefined1 (*) [16])((long)param_1 + (long)param_2);
  uVar2 = param_1[1];
  bVar14 = (byte)(uVar2 >> 8);
  bVar15 = (byte)(uVar2 >> 0x10);
  bVar16 = (byte)(uVar2 >> 0x18);
  bVar17 = (byte)(uVar2 >> 0x20);
  bVar18 = (byte)(uVar2 >> 0x28);
  bVar19 = (byte)(uVar2 >> 0x30);
  bVar20 = (byte)(uVar2 >> 0x38);
  auVar21[9] = bVar14;
  auVar21._0_9_ = *(unkbyte9 *)param_1;
  auVar21[10] = bVar15;
  auVar21[0xb] = bVar16;
  auVar21[0xc] = bVar17;
  auVar21[0xd] = bVar18;
  auVar21[0xe] = bVar19;
  auVar21[0xf] = bVar20;
  auVar21 = NEON_uabd(auVar24,auVar21,1);
  auVar22 = NEON_uabd(auVar4,auVar1,1);
  auVar21 = NEON_uqadd(auVar21,auVar21,1);
  auVar23[0] = auVar22[0] >> 1;
  auVar23[1] = auVar22[1] >> 1;
  auVar23[2] = auVar22[2] >> 1;
  auVar23[3] = auVar22[3] >> 1;
  auVar23[4] = auVar22[4] >> 1;
  auVar23[5] = auVar22[5] >> 1;
  auVar23[6] = auVar22[6] >> 1;
  auVar23[7] = auVar22[7] >> 1;
  auVar23[8] = auVar22[8] >> 1;
  auVar23[9] = auVar22[9] >> 1;
  auVar23[10] = auVar22[10] >> 1;
  auVar23[0xb] = auVar22[0xb] >> 1;
  auVar23[0xc] = auVar22[0xc] >> 1;
  auVar23[0xd] = auVar22[0xd] >> 1;
  auVar23[0xe] = auVar22[0xe] >> 1;
  auVar23[0xf] = auVar22[0xf] >> 1;
  auVar21 = NEON_uqadd(auVar21,auVar23,1);
  auVar22._0_8_ = auVar4._0_8_ ^ 0x8080808080808080;
  auVar22[8] = auVar4[8] ^ 0x80;
  auVar22[9] = auVar4[9] ^ 0x80;
  auVar22[10] = auVar4[10] ^ 0x80;
  auVar22[0xb] = auVar4[0xb] ^ 0x80;
  auVar22[0xc] = auVar4[0xc] ^ 0x80;
  auVar22[0xd] = auVar4[0xd] ^ 0x80;
  auVar22[0xe] = auVar4[0xe] ^ 0x80;
  auVar22[0xf] = auVar4[0xf] ^ 0x80;
  auVar8._0_8_ = auVar24._0_8_ ^ 0x8080808080808080;
  auVar8[8] = auVar24[8] ^ 0x80;
  auVar8[9] = auVar24[9] ^ 0x80;
  auVar8[10] = auVar24[10] ^ 0x80;
  auVar8[0xb] = auVar24[0xb] ^ 0x80;
  auVar8[0xc] = auVar24[0xc] ^ 0x80;
  auVar8[0xd] = auVar24[0xd] ^ 0x80;
  auVar8[0xe] = auVar24[0xe] ^ 0x80;
  auVar8[0xf] = auVar24[0xf] ^ 0x80;
  bVar13 = (byte)uVar2 ^ 0x80;
  bVar14 = bVar14 ^ 0x80;
  bVar15 = bVar15 ^ 0x80;
  bVar16 = bVar16 ^ 0x80;
  bVar17 = bVar17 ^ 0x80;
  bVar18 = bVar18 ^ 0x80;
  bVar19 = bVar19 ^ 0x80;
  bVar20 = bVar20 ^ 0x80;
  auVar10._0_8_ = auVar1._0_8_ ^ 0x8080808080808080;
  auVar10[8] = auVar1[8] ^ 0x80;
  auVar10[9] = auVar1[9] ^ 0x80;
  auVar10[10] = auVar1[10] ^ 0x80;
  auVar10[0xb] = auVar1[0xb] ^ 0x80;
  auVar10[0xc] = auVar1[0xc] ^ 0x80;
  auVar10[0xd] = auVar1[0xd] ^ 0x80;
  auVar10[0xe] = auVar1[0xe] ^ 0x80;
  auVar10[0xf] = auVar1[0xf] ^ 0x80;
  auVar24[8] = bVar13;
  auVar24._0_8_ = *param_1 ^ 0x8080808080808080;
  auVar24[9] = bVar14;
  auVar24[10] = bVar15;
  auVar24[0xb] = bVar16;
  auVar24[0xc] = bVar17;
  auVar24[0xd] = bVar18;
  auVar24[0xe] = bVar19;
  auVar24[0xf] = bVar20;
  auVar24 = NEON_sqsub(auVar24,auVar8,1);
  auVar4 = NEON_sqsub(auVar22,auVar10,1);
  auVar4 = NEON_sqadd(auVar4,auVar24,1);
  auVar4 = NEON_sqadd(auVar24,auVar4,1);
  auVar4 = NEON_sqadd(auVar24,auVar4,1);
  auVar5[0] = auVar4[0] & ~-(param_3 < auVar21[0]);
  auVar5[1] = auVar4[1] & ~-(param_3 < auVar21[1]);
  auVar5[2] = auVar4[2] & ~-(param_3 < auVar21[2]);
  auVar5[3] = auVar4[3] & ~-(param_3 < auVar21[3]);
  auVar5[4] = auVar4[4] & ~-(param_3 < auVar21[4]);
  auVar5[5] = auVar4[5] & ~-(param_3 < auVar21[5]);
  auVar5[6] = auVar4[6] & ~-(param_3 < auVar21[6]);
  auVar5[7] = auVar4[7] & ~-(param_3 < auVar21[7]);
  auVar5[8] = auVar4[8] & ~-(param_3 < auVar21[8]);
  auVar5[9] = auVar4[9] & ~-(param_3 < auVar21[9]);
  auVar5[10] = auVar4[10] & ~-(param_3 < auVar21[10]);
  auVar5[0xb] = auVar4[0xb] & ~-(param_3 < auVar21[0xb]);
  auVar5[0xc] = auVar4[0xc] & ~-(param_3 < auVar21[0xc]);
  auVar5[0xd] = auVar4[0xd] & ~-(param_3 < auVar21[0xd]);
  auVar5[0xe] = auVar4[0xe] & ~-(param_3 < auVar21[0xe]);
  auVar5[0xf] = auVar4[0xf] & ~-(param_3 < auVar21[0xf]);
  auVar11[8] = 3;
  auVar11._0_8_ = 0x303030303030303;
  auVar11[9] = 3;
  auVar11[10] = 3;
  auVar11[0xb] = 3;
  auVar11[0xc] = 3;
  auVar11[0xd] = 3;
  auVar11[0xe] = 3;
  auVar11[0xf] = 3;
  auVar21 = NEON_sqadd(auVar5,auVar11,1);
  auVar4[8] = 4;
  auVar4._0_8_ = 0x404040404040404;
  auVar4[9] = 4;
  auVar4[10] = 4;
  auVar4[0xb] = 4;
  auVar4[0xc] = 4;
  auVar4[0xd] = 4;
  auVar4[0xe] = 4;
  auVar4[0xf] = 4;
  auVar4 = NEON_sqadd(auVar5,auVar4,1);
  auVar12[0] = auVar21[0] >> 3;
  auVar12[1] = auVar21[1] >> 3;
  auVar12[2] = auVar21[2] >> 3;
  auVar12[3] = auVar21[3] >> 3;
  auVar12[4] = auVar21[4] >> 3;
  auVar12[5] = auVar21[5] >> 3;
  auVar12[6] = auVar21[6] >> 3;
  auVar12[7] = auVar21[7] >> 3;
  auVar12[8] = auVar21[8] >> 3;
  auVar12[9] = auVar21[9] >> 3;
  auVar12[10] = auVar21[10] >> 3;
  auVar12[0xb] = auVar21[0xb] >> 3;
  auVar12[0xc] = auVar21[0xc] >> 3;
  auVar12[0xd] = auVar21[0xd] >> 3;
  auVar12[0xe] = auVar21[0xe] >> 3;
  auVar12[0xf] = auVar21[0xf] >> 3;
  auVar6[0] = auVar4[0] >> 3;
  auVar6[1] = auVar4[1] >> 3;
  auVar6[2] = auVar4[2] >> 3;
  auVar6[3] = auVar4[3] >> 3;
  auVar6[4] = auVar4[4] >> 3;
  auVar6[5] = auVar4[5] >> 3;
  auVar6[6] = auVar4[6] >> 3;
  auVar6[7] = auVar4[7] >> 3;
  auVar6[8] = auVar4[8] >> 3;
  auVar6[9] = auVar4[9] >> 3;
  auVar6[10] = auVar4[10] >> 3;
  auVar6[0xb] = auVar4[0xb] >> 3;
  auVar6[0xc] = auVar4[0xc] >> 3;
  auVar6[0xd] = auVar4[0xd] >> 3;
  auVar6[0xe] = auVar4[0xe] >> 3;
  auVar6[0xf] = auVar4[0xf] >> 3;
  auVar21 = NEON_sqadd(auVar8,auVar12,1);
  auVar1[8] = bVar13;
  auVar1._0_8_ = *param_1 ^ 0x8080808080808080;
  auVar1[9] = bVar14;
  auVar1[10] = bVar15;
  auVar1[0xb] = bVar16;
  auVar1[0xc] = bVar17;
  auVar1[0xd] = bVar18;
  auVar1[0xe] = bVar19;
  auVar1[0xf] = bVar20;
  auVar4 = NEON_sqsub(auVar1,auVar6,1);
  auVar9._0_8_ = auVar21._0_8_ ^ 0x8080808080808080;
  auVar9[8] = auVar21[8] ^ 0x80;
  auVar9[9] = auVar21[9] ^ 0x80;
  auVar9[10] = auVar21[10] ^ 0x80;
  auVar9[0xb] = auVar21[0xb] ^ 0x80;
  auVar9[0xc] = auVar21[0xc] ^ 0x80;
  auVar9[0xd] = auVar21[0xd] ^ 0x80;
  auVar9[0xe] = auVar21[0xe] ^ 0x80;
  auVar9[0xf] = auVar21[0xf] ^ 0x80;
  auVar7._0_8_ = auVar4._0_8_ ^ 0x8080808080808080;
  auVar7[8] = auVar4[8] ^ 0x80;
  auVar7[9] = auVar4[9] ^ 0x80;
  auVar7[10] = auVar4[10] ^ 0x80;
  auVar7[0xb] = auVar4[0xb] ^ 0x80;
  auVar7[0xc] = auVar4[0xc] ^ 0x80;
  auVar7[0xd] = auVar4[0xd] ^ 0x80;
  auVar7[0xe] = auVar4[0xe] ^ 0x80;
  auVar7[0xf] = auVar4[0xf] ^ 0x80;
  *(long *)(*pauVar3 + 8) = auVar9._8_8_;
  *(ulong *)*pauVar3 = auVar9._0_8_;
  param_1[1] = auVar7._8_8_;
  *param_1 = auVar7._0_8_;
  return;
}




void FUN_1010c4aec(byte *param_1,uint param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  undefined3 uVar11;
  undefined4 uVar12;
  undefined5 uVar13;
  undefined6 uVar14;
  undefined7 uVar15;
  ulong uVar16;
  uint7 uVar17;
  uint7 uVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  
  pbVar24 = param_1 + -2;
  uVar20 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
  auVar26[0] = *pbVar24;
  auVar30[0] = param_1[-1];
  bVar34 = *param_1;
  auVar42[0] = param_1[1];
  pbVar21 = pbVar24 + uVar20;
  pbVar19 = pbVar24 + (int)param_2;
  auVar26[1] = *pbVar19;
  auVar30[1] = pbVar19[1];
  bVar35 = pbVar19[2];
  auVar42[1] = pbVar19[3];
  pbVar19 = pbVar24 + (long)(int)param_2 * 2;
  auVar26[2] = *pbVar19;
  auVar30[2] = pbVar19[1];
  bVar36 = pbVar19[2];
  auVar42[2] = pbVar19[3];
  lVar1 = (-(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1) +
          (long)(int)param_2;
  pbVar22 = pbVar24 + lVar1;
  pbVar19 = pbVar24 + (long)(int)param_2 * 4;
  lVar2 = (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2) +
          (long)(int)param_2;
  pbVar3 = pbVar24 + lVar2;
  auVar26[3] = *pbVar22;
  auVar30[3] = pbVar22[1];
  bVar37 = pbVar22[2];
  auVar42[3] = pbVar22[3];
  pbVar22 = pbVar24 + lVar1 * 2;
  auVar26[4] = *pbVar19;
  auVar30[4] = pbVar19[1];
  bVar38 = pbVar19[2];
  auVar42[4] = pbVar19[3];
  auVar26[5] = *pbVar3;
  auVar30[5] = pbVar3[1];
  bVar39 = pbVar3[2];
  auVar42[5] = pbVar3[3];
  lVar23 = uVar20 - (long)(int)param_2;
  pbVar24 = pbVar24 + lVar23;
  auVar26[6] = *pbVar22;
  auVar30[6] = pbVar22[1];
  bVar40 = pbVar22[2];
  auVar42[6] = pbVar22[3];
  auVar26[7] = *pbVar24;
  auVar30[7] = pbVar24[1];
  bVar41 = pbVar24[2];
  auVar42[7] = pbVar24[3];
  pbVar25 = pbVar21 + lVar23;
  pbVar19 = pbVar21 + (int)param_2;
  auVar26[9] = *pbVar19;
  auVar26[8] = *pbVar21;
  auVar30[9] = pbVar19[1];
  auVar30[8] = pbVar21[1];
  pbVar22 = pbVar21 + (long)(int)param_2 * 2;
  auVar26[10] = *pbVar22;
  auVar30[10] = pbVar22[1];
  pbVar24 = pbVar21 + lVar1;
  auVar26[0xb] = *pbVar24;
  auVar30[0xb] = pbVar24[1];
  pbVar3 = pbVar21 + (long)(int)param_2 * 4;
  auVar26[0xc] = *pbVar3;
  auVar30[0xc] = pbVar3[1];
  pbVar4 = pbVar21 + lVar2;
  auVar26[0xd] = *pbVar4;
  auVar30[0xd] = pbVar4[1];
  pbVar5 = pbVar21 + lVar1 * 2;
  auVar26[0xe] = *pbVar5;
  auVar30[0xe] = pbVar5[1];
  auVar26[0xf] = *pbVar25;
  auVar30[0xf] = pbVar25[1];
  auVar42[9] = pbVar19[3];
  auVar42[8] = pbVar21[3];
  auVar42[10] = pbVar22[3];
  auVar42[0xb] = pbVar24[3];
  auVar42[0xc] = pbVar3[3];
  auVar42[0xd] = pbVar4[3];
  auVar42[0xe] = pbVar5[3];
  auVar42[0xf] = pbVar25[3];
  auVar44[1] = bVar35;
  auVar44[0] = bVar34;
  auVar44[2] = bVar36;
  auVar44[3] = bVar37;
  auVar44[4] = bVar38;
  auVar44[5] = bVar39;
  auVar44[6] = bVar40;
  auVar44[7] = bVar41;
  auVar44[8] = pbVar21[2];
  auVar44[9] = pbVar19[2];
  auVar44[10] = pbVar22[2];
  auVar44[0xb] = pbVar24[2];
  auVar44[0xc] = pbVar3[2];
  auVar44[0xd] = pbVar4[2];
  auVar44[0xe] = pbVar5[2];
  auVar44[0xf] = pbVar25[2];
  auVar44 = NEON_uabd(auVar30,auVar44,1);
  auVar46 = NEON_uabd(auVar26,auVar42,1);
  auVar44 = NEON_uqadd(auVar44,auVar44,1);
  auVar47[0] = auVar46[0] >> 1;
  auVar47[1] = auVar46[1] >> 1;
  auVar47[2] = auVar46[2] >> 1;
  auVar47[3] = auVar46[3] >> 1;
  auVar47[4] = auVar46[4] >> 1;
  auVar47[5] = auVar46[5] >> 1;
  auVar47[6] = auVar46[6] >> 1;
  auVar47[7] = auVar46[7] >> 1;
  auVar47[8] = auVar46[8] >> 1;
  auVar47[9] = auVar46[9] >> 1;
  auVar47[10] = auVar46[10] >> 1;
  auVar47[0xb] = auVar46[0xb] >> 1;
  auVar47[0xc] = auVar46[0xc] >> 1;
  auVar47[0xd] = auVar46[0xd] >> 1;
  auVar47[0xe] = auVar46[0xe] >> 1;
  auVar47[0xf] = auVar46[0xf] >> 1;
  auVar45 = NEON_uqadd(auVar44,auVar47,1);
  uVar10 = CONCAT11(auVar26[1],auVar26[0]);
  uVar11 = CONCAT12(auVar26[2],uVar10);
  uVar12 = CONCAT13(auVar26[3],uVar11);
  uVar13 = CONCAT14(auVar26[4],uVar12);
  uVar14 = CONCAT15(auVar26[5],uVar13);
  uVar15 = CONCAT16(auVar26[6],uVar14);
  uVar16 = CONCAT17(auVar26[7],uVar15);
  auVar48._0_8_ = uVar16 ^ 0x8080808080808080;
  auVar48[8] = *pbVar21 ^ 0x80;
  auVar48[9] = *pbVar19 ^ 0x80;
  auVar48[10] = *pbVar22 ^ 0x80;
  auVar48[0xb] = *pbVar24 ^ 0x80;
  auVar48[0xc] = *pbVar3 ^ 0x80;
  auVar48[0xd] = *pbVar4 ^ 0x80;
  auVar48[0xe] = *pbVar5 ^ 0x80;
  auVar48[0xf] = *pbVar25 ^ 0x80;
  bVar49 = pbVar21[1] ^ 0x80;
  bVar50 = pbVar19[1] ^ 0x80;
  bVar51 = pbVar22[1] ^ 0x80;
  bVar52 = pbVar24[1] ^ 0x80;
  bVar53 = pbVar3[1] ^ 0x80;
  bVar54 = pbVar4[1] ^ 0x80;
  bVar55 = pbVar5[1] ^ 0x80;
  bVar56 = pbVar25[1] ^ 0x80;
  bVar57 = pbVar21[2] ^ 0x80;
  bVar58 = pbVar19[2] ^ 0x80;
  bVar59 = pbVar22[2] ^ 0x80;
  bVar60 = pbVar24[2] ^ 0x80;
  bVar61 = pbVar3[2] ^ 0x80;
  bVar62 = pbVar4[2] ^ 0x80;
  bVar63 = pbVar5[2] ^ 0x80;
  bVar64 = pbVar25[2] ^ 0x80;
  uVar10 = CONCAT11(auVar42[1],auVar42[0]);
  uVar11 = CONCAT12(auVar42[2],uVar10);
  uVar12 = CONCAT13(auVar42[3],uVar11);
  uVar13 = CONCAT14(auVar42[4],uVar12);
  uVar14 = CONCAT15(auVar42[5],uVar13);
  uVar15 = CONCAT16(auVar42[6],uVar14);
  uVar16 = CONCAT17(auVar42[7],uVar15);
  auVar27._0_8_ = uVar16 ^ 0x8080808080808080;
  auVar27[8] = pbVar21[3] ^ 0x80;
  auVar27[9] = pbVar19[3] ^ 0x80;
  auVar27[10] = pbVar22[3] ^ 0x80;
  auVar27[0xb] = pbVar24[3] ^ 0x80;
  auVar27[0xc] = pbVar3[3] ^ 0x80;
  auVar27[0xd] = pbVar4[3] ^ 0x80;
  auVar27[0xe] = pbVar5[3] ^ 0x80;
  auVar27[0xf] = pbVar25[3] ^ 0x80;
  uVar10 = CONCAT11(auVar30[1],auVar30[0]);
  uVar11 = CONCAT12(auVar30[2],uVar10);
  uVar12 = CONCAT13(auVar30[3],uVar11);
  uVar13 = CONCAT14(auVar30[4],uVar12);
  uVar14 = CONCAT15(auVar30[5],uVar13);
  uVar15 = CONCAT16(auVar30[6],uVar14);
  uVar16 = CONCAT17(auVar30[7],uVar15);
  auVar43[8] = bVar49;
  auVar43._0_8_ = uVar16 ^ 0x8080808080808080;
  auVar43[9] = bVar50;
  auVar43[10] = bVar51;
  auVar43[0xb] = bVar52;
  auVar43[0xc] = bVar53;
  auVar43[0xd] = bVar54;
  auVar43[0xe] = bVar55;
  auVar43[0xf] = bVar56;
  auVar8[8] = bVar57;
  auVar8._0_8_ = CONCAT17(bVar41,CONCAT16(bVar40,CONCAT15(bVar39,CONCAT14(bVar38,CONCAT13(bVar37,
                                                  CONCAT12(bVar36,CONCAT11(bVar35,bVar34))))))) ^
                 0x8080808080808080;
  auVar8[9] = bVar58;
  auVar8[10] = bVar59;
  auVar8[0xb] = bVar60;
  auVar8[0xc] = bVar61;
  auVar8[0xd] = bVar62;
  auVar8[0xe] = bVar63;
  auVar8[0xf] = bVar64;
  auVar46 = NEON_sqsub(auVar8,auVar43,1);
  auVar44 = NEON_sqsub(auVar48,auVar27,1);
  auVar44 = NEON_sqadd(auVar44,auVar46,1);
  auVar44 = NEON_sqadd(auVar46,auVar44,1);
  auVar44 = NEON_sqadd(auVar46,auVar44,1);
  auVar28[0] = auVar44[0] & ~-(param_3 < auVar45[0]);
  auVar28[1] = auVar44[1] & ~-(param_3 < auVar45[1]);
  auVar28[2] = auVar44[2] & ~-(param_3 < auVar45[2]);
  auVar28[3] = auVar44[3] & ~-(param_3 < auVar45[3]);
  auVar28[4] = auVar44[4] & ~-(param_3 < auVar45[4]);
  auVar28[5] = auVar44[5] & ~-(param_3 < auVar45[5]);
  auVar28[6] = auVar44[6] & ~-(param_3 < auVar45[6]);
  auVar28[7] = auVar44[7] & ~-(param_3 < auVar45[7]);
  auVar28[8] = auVar44[8] & ~-(param_3 < auVar45[8]);
  auVar28[9] = auVar44[9] & ~-(param_3 < auVar45[9]);
  auVar28[10] = auVar44[10] & ~-(param_3 < auVar45[10]);
  auVar28[0xb] = auVar44[0xb] & ~-(param_3 < auVar45[0xb]);
  auVar28[0xc] = auVar44[0xc] & ~-(param_3 < auVar45[0xc]);
  auVar28[0xd] = auVar44[0xd] & ~-(param_3 < auVar45[0xd]);
  auVar28[0xe] = auVar44[0xe] & ~-(param_3 < auVar45[0xe]);
  auVar28[0xf] = auVar44[0xf] & ~-(param_3 < auVar45[0xf]);
  auVar31[8] = 3;
  auVar31._0_8_ = 0x303030303030303;
  auVar31[9] = 3;
  auVar31[10] = 3;
  auVar31[0xb] = 3;
  auVar31[0xc] = 3;
  auVar31[0xd] = 3;
  auVar31[0xe] = 3;
  auVar31[0xf] = 3;
  auVar45 = NEON_sqadd(auVar28,auVar31,1);
  auVar46[8] = 4;
  auVar46._0_8_ = 0x404040404040404;
  auVar46[9] = 4;
  auVar46[10] = 4;
  auVar46[0xb] = 4;
  auVar46[0xc] = 4;
  auVar46[0xd] = 4;
  auVar46[0xe] = 4;
  auVar46[0xf] = 4;
  auVar44 = NEON_sqadd(auVar28,auVar46,1);
  auVar32[0] = auVar45[0] >> 3;
  auVar32[1] = auVar45[1] >> 3;
  auVar32[2] = auVar45[2] >> 3;
  auVar32[3] = auVar45[3] >> 3;
  auVar32[4] = auVar45[4] >> 3;
  auVar32[5] = auVar45[5] >> 3;
  auVar32[6] = auVar45[6] >> 3;
  auVar32[7] = auVar45[7] >> 3;
  auVar32[8] = auVar45[8] >> 3;
  auVar32[9] = auVar45[9] >> 3;
  auVar32[10] = auVar45[10] >> 3;
  auVar32[0xb] = auVar45[0xb] >> 3;
  auVar32[0xc] = auVar45[0xc] >> 3;
  auVar32[0xd] = auVar45[0xd] >> 3;
  auVar32[0xe] = auVar45[0xe] >> 3;
  auVar32[0xf] = auVar45[0xf] >> 3;
  auVar29[0] = auVar44[0] >> 3;
  auVar29[1] = auVar44[1] >> 3;
  auVar29[2] = auVar44[2] >> 3;
  auVar29[3] = auVar44[3] >> 3;
  auVar29[4] = auVar44[4] >> 3;
  auVar29[5] = auVar44[5] >> 3;
  auVar29[6] = auVar44[6] >> 3;
  auVar29[7] = auVar44[7] >> 3;
  auVar29[8] = auVar44[8] >> 3;
  auVar29[9] = auVar44[9] >> 3;
  auVar29[10] = auVar44[10] >> 3;
  auVar29[0xb] = auVar44[0xb] >> 3;
  auVar29[0xc] = auVar44[0xc] >> 3;
  auVar29[0xd] = auVar44[0xd] >> 3;
  auVar29[0xe] = auVar44[0xe] >> 3;
  auVar29[0xf] = auVar44[0xf] >> 3;
  uVar10 = CONCAT11(auVar30[1],auVar30[0]);
  uVar11 = CONCAT12(auVar30[2],uVar10);
  uVar12 = CONCAT13(auVar30[3],uVar11);
  uVar13 = CONCAT14(auVar30[4],uVar12);
  uVar14 = CONCAT15(auVar30[5],uVar13);
  uVar15 = CONCAT16(auVar30[6],uVar14);
  uVar16 = CONCAT17(auVar30[7],uVar15);
  auVar7[8] = bVar49;
  auVar7._0_8_ = uVar16 ^ 0x8080808080808080;
  auVar7[9] = bVar50;
  auVar7[10] = bVar51;
  auVar7[0xb] = bVar52;
  auVar7[0xc] = bVar53;
  auVar7[0xd] = bVar54;
  auVar7[0xe] = bVar55;
  auVar7[0xf] = bVar56;
  auVar46 = NEON_sqadd(auVar7,auVar32,1);
  auVar9[8] = bVar57;
  auVar9._0_8_ = CONCAT17(bVar41,CONCAT16(bVar40,CONCAT15(bVar39,CONCAT14(bVar38,CONCAT13(bVar37,
                                                  CONCAT12(bVar36,CONCAT11(bVar35,bVar34))))))) ^
                 0x8080808080808080;
  auVar9[9] = bVar58;
  auVar9[10] = bVar59;
  auVar9[0xb] = bVar60;
  auVar9[0xc] = bVar61;
  auVar9[0xd] = bVar62;
  auVar9[0xe] = bVar63;
  auVar9[0xf] = bVar64;
  auVar44 = NEON_sqsub(auVar9,auVar29,1);
  uVar18 = auVar46._0_7_ ^ 0x80808080;
  uVar17 = auVar46._0_7_ ^ 0x808080808080;
  auVar33._0_8_ = auVar46._0_8_ ^ 0x8080808080808080;
  auVar33[8] = auVar46[8] ^ 0x80;
  auVar33[9] = auVar46[9] ^ 0x80;
  auVar33[10] = auVar46[10] ^ 0x80;
  auVar33[0xb] = auVar46[0xb] ^ 0x80;
  auVar33[0xc] = auVar46[0xc] ^ 0x80;
  auVar33[0xd] = auVar46[0xd] ^ 0x80;
  auVar33[0xe] = auVar46[0xe] ^ 0x80;
  auVar33[0xf] = auVar46[0xf] ^ 0x80;
  bVar34 = auVar44[8] ^ 0x80;
  bVar35 = auVar44[9] ^ 0x80;
  bVar36 = auVar44[10] ^ 0x80;
  bVar37 = auVar44[0xb] ^ 0x80;
  bVar38 = auVar44[0xc] ^ 0x80;
  bVar39 = auVar44[0xd] ^ 0x80;
  bVar40 = auVar44[0xe] ^ 0x80;
  bVar41 = auVar44[0xf] ^ 0x80;
  pbVar22 = param_1 + -1;
  *pbVar22 = (byte)uVar18;
  *param_1 = auVar44[0] ^ 0x80;
  pbVar19 = pbVar22 + uVar20;
  pbVar22[(int)param_2] = (byte)(uVar18 >> 8);
  (pbVar22 + (int)param_2)[1] = auVar44[1] ^ 0x80;
  pbVar22[(long)(int)param_2 * 2] = (byte)(uVar18 >> 0x10);
  (pbVar22 + (long)(int)param_2 * 2)[1] = auVar44[2] ^ 0x80;
  pbVar22[lVar1] = (byte)(uVar18 >> 0x18);
  (pbVar22 + lVar1)[1] = auVar44[3] ^ 0x80;
  pbVar22[(long)(int)param_2 * 4] = (byte)(uVar17 >> 0x20);
  (pbVar22 + (long)(int)param_2 * 4)[1] = auVar44[4] ^ 0x80;
  pbVar22[lVar2] = (byte)(uVar17 >> 0x28);
  (pbVar22 + lVar2)[1] = auVar44[5] ^ 0x80;
  auVar43 = NEON_ext(auVar33,auVar33,8,1);
  auVar45[8] = bVar34;
  auVar45._0_8_ = auVar44._0_8_ ^ 0x8080808080808080;
  auVar45[9] = bVar35;
  auVar45[10] = bVar36;
  auVar45[0xb] = bVar37;
  auVar45[0xc] = bVar38;
  auVar45[0xd] = bVar39;
  auVar45[0xe] = bVar40;
  auVar45[0xf] = bVar41;
  auVar6[8] = bVar34;
  auVar6._0_8_ = auVar44._0_8_ ^ 0x8080808080808080;
  auVar6[9] = bVar35;
  auVar6[10] = bVar36;
  auVar6[0xb] = bVar37;
  auVar6[0xc] = bVar38;
  auVar6[0xd] = bVar39;
  auVar6[0xe] = bVar40;
  auVar6[0xf] = bVar41;
  auVar45 = NEON_ext(auVar45,auVar6,8,1);
  pbVar22[lVar1 * 2] = auVar46[6] ^ 0x80;
  (pbVar22 + lVar1 * 2)[1] = auVar44[6] ^ 0x80;
  pbVar22[lVar23] = auVar46[7] ^ 0x80;
  (pbVar22 + lVar23)[1] = auVar44[7] ^ 0x80;
  *pbVar19 = auVar43[0];
  pbVar19[1] = auVar45[0];
  pbVar19[(int)param_2] = auVar43[1];
  (pbVar19 + (int)param_2)[1] = auVar45[1];
  pbVar19[(long)(int)param_2 * 2] = auVar43[2];
  (pbVar19 + (long)(int)param_2 * 2)[1] = auVar45[2];
  pbVar19[lVar1] = auVar43[3];
  (pbVar19 + lVar1)[1] = auVar45[3];
  pbVar19[(long)(int)param_2 * 4] = auVar43[4];
  (pbVar19 + (long)(int)param_2 * 4)[1] = auVar45[4];
  pbVar19[lVar2] = auVar43[5];
  (pbVar19 + lVar2)[1] = auVar45[5];
  pbVar19[lVar1 * 2] = auVar43[6];
  (pbVar19 + lVar1 * 2)[1] = auVar45[6];
  pbVar19[lVar23] = auVar43[7];
  (pbVar19 + lVar23)[1] = auVar45[7];
  return;
}




void FUN_1010c4cac(long param_1,uint param_2,byte param_3)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  iVar5 = -3;
  puVar6 = (ulong *)(param_1 + (long)(int)param_2 * 4);
  do {
    auVar8 = *(undefined1 (*) [16])((long)puVar6 - (long)(int)(param_2 << 1));
    auVar27 = *(undefined1 (*) [16])((long)puVar6 + -(long)(int)param_2);
    auVar2 = *(undefined1 (*) [16])((long)puVar6 + (long)(int)param_2);
    uVar3 = puVar6[1];
    bVar17 = (byte)(uVar3 >> 8);
    bVar18 = (byte)(uVar3 >> 0x10);
    bVar19 = (byte)(uVar3 >> 0x18);
    bVar20 = (byte)(uVar3 >> 0x20);
    bVar21 = (byte)(uVar3 >> 0x28);
    bVar22 = (byte)(uVar3 >> 0x30);
    bVar23 = (byte)(uVar3 >> 0x38);
    auVar24[9] = bVar17;
    auVar24._0_9_ = *(unkbyte9 *)puVar6;
    auVar24[10] = bVar18;
    auVar24[0xb] = bVar19;
    auVar24[0xc] = bVar20;
    auVar24[0xd] = bVar21;
    auVar24[0xe] = bVar22;
    auVar24[0xf] = bVar23;
    auVar24 = NEON_uabd(auVar27,auVar24,1);
    auVar25 = NEON_uabd(auVar8,auVar2,1);
    auVar24 = NEON_uqadd(auVar24,auVar24,1);
    auVar26[0] = auVar25[0] >> 1;
    auVar26[1] = auVar25[1] >> 1;
    auVar26[2] = auVar25[2] >> 1;
    auVar26[3] = auVar25[3] >> 1;
    auVar26[4] = auVar25[4] >> 1;
    auVar26[5] = auVar25[5] >> 1;
    auVar26[6] = auVar25[6] >> 1;
    auVar26[7] = auVar25[7] >> 1;
    auVar26[8] = auVar25[8] >> 1;
    auVar26[9] = auVar25[9] >> 1;
    auVar26[10] = auVar25[10] >> 1;
    auVar26[0xb] = auVar25[0xb] >> 1;
    auVar26[0xc] = auVar25[0xc] >> 1;
    auVar26[0xd] = auVar25[0xd] >> 1;
    auVar26[0xe] = auVar25[0xe] >> 1;
    auVar26[0xf] = auVar25[0xf] >> 1;
    auVar24 = NEON_uqadd(auVar24,auVar26,1);
    auVar7._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
    auVar7[8] = auVar8[8] ^ 0x80;
    auVar7[9] = auVar8[9] ^ 0x80;
    auVar7[10] = auVar8[10] ^ 0x80;
    auVar7[0xb] = auVar8[0xb] ^ 0x80;
    auVar7[0xc] = auVar8[0xc] ^ 0x80;
    auVar7[0xd] = auVar8[0xd] ^ 0x80;
    auVar7[0xe] = auVar8[0xe] ^ 0x80;
    auVar7[0xf] = auVar8[0xf] ^ 0x80;
    auVar12._0_8_ = auVar27._0_8_ ^ 0x8080808080808080;
    auVar12[8] = auVar27[8] ^ 0x80;
    auVar12[9] = auVar27[9] ^ 0x80;
    auVar12[10] = auVar27[10] ^ 0x80;
    auVar12[0xb] = auVar27[0xb] ^ 0x80;
    auVar12[0xc] = auVar27[0xc] ^ 0x80;
    auVar12[0xd] = auVar27[0xd] ^ 0x80;
    auVar12[0xe] = auVar27[0xe] ^ 0x80;
    auVar12[0xf] = auVar27[0xf] ^ 0x80;
    bVar16 = (byte)uVar3 ^ 0x80;
    bVar17 = bVar17 ^ 0x80;
    bVar18 = bVar18 ^ 0x80;
    bVar19 = bVar19 ^ 0x80;
    bVar20 = bVar20 ^ 0x80;
    bVar21 = bVar21 ^ 0x80;
    bVar22 = bVar22 ^ 0x80;
    bVar23 = bVar23 ^ 0x80;
    auVar14._0_8_ = auVar2._0_8_ ^ 0x8080808080808080;
    auVar14[8] = auVar2[8] ^ 0x80;
    auVar14[9] = auVar2[9] ^ 0x80;
    auVar14[10] = auVar2[10] ^ 0x80;
    auVar14[0xb] = auVar2[0xb] ^ 0x80;
    auVar14[0xc] = auVar2[0xc] ^ 0x80;
    auVar14[0xd] = auVar2[0xd] ^ 0x80;
    auVar14[0xe] = auVar2[0xe] ^ 0x80;
    auVar14[0xf] = auVar2[0xf] ^ 0x80;
    auVar2[8] = bVar16;
    auVar2._0_8_ = *puVar6 ^ 0x8080808080808080;
    auVar2[9] = bVar17;
    auVar2[10] = bVar18;
    auVar2[0xb] = bVar19;
    auVar2[0xc] = bVar20;
    auVar2[0xd] = bVar21;
    auVar2[0xe] = bVar22;
    auVar2[0xf] = bVar23;
    auVar27 = NEON_sqsub(auVar2,auVar12,1);
    auVar8 = NEON_sqsub(auVar7,auVar14,1);
    auVar8 = NEON_sqadd(auVar8,auVar27,1);
    auVar8 = NEON_sqadd(auVar27,auVar8,1);
    auVar8 = NEON_sqadd(auVar27,auVar8,1);
    auVar9[0] = auVar8[0] & ~-(param_3 < auVar24[0]);
    auVar9[1] = auVar8[1] & ~-(param_3 < auVar24[1]);
    auVar9[2] = auVar8[2] & ~-(param_3 < auVar24[2]);
    auVar9[3] = auVar8[3] & ~-(param_3 < auVar24[3]);
    auVar9[4] = auVar8[4] & ~-(param_3 < auVar24[4]);
    auVar9[5] = auVar8[5] & ~-(param_3 < auVar24[5]);
    auVar9[6] = auVar8[6] & ~-(param_3 < auVar24[6]);
    auVar9[7] = auVar8[7] & ~-(param_3 < auVar24[7]);
    auVar9[8] = auVar8[8] & ~-(param_3 < auVar24[8]);
    auVar9[9] = auVar8[9] & ~-(param_3 < auVar24[9]);
    auVar9[10] = auVar8[10] & ~-(param_3 < auVar24[10]);
    auVar9[0xb] = auVar8[0xb] & ~-(param_3 < auVar24[0xb]);
    auVar9[0xc] = auVar8[0xc] & ~-(param_3 < auVar24[0xc]);
    auVar9[0xd] = auVar8[0xd] & ~-(param_3 < auVar24[0xd]);
    auVar9[0xe] = auVar8[0xe] & ~-(param_3 < auVar24[0xe]);
    auVar9[0xf] = auVar8[0xf] & ~-(param_3 < auVar24[0xf]);
    auVar8[8] = 3;
    auVar8._0_8_ = 0x303030303030303;
    auVar8[9] = 3;
    auVar8[10] = 3;
    auVar8[0xb] = 3;
    auVar8[0xc] = 3;
    auVar8[0xd] = 3;
    auVar8[0xe] = 3;
    auVar8[0xf] = 3;
    auVar24 = NEON_sqadd(auVar9,auVar8,1);
    auVar27[8] = 4;
    auVar27._0_8_ = 0x404040404040404;
    auVar27[9] = 4;
    auVar27[10] = 4;
    auVar27[0xb] = 4;
    auVar27[0xc] = 4;
    auVar27[0xd] = 4;
    auVar27[0xe] = 4;
    auVar27[0xf] = 4;
    auVar8 = NEON_sqadd(auVar9,auVar27,1);
    auVar15[0] = auVar24[0] >> 3;
    auVar15[1] = auVar24[1] >> 3;
    auVar15[2] = auVar24[2] >> 3;
    auVar15[3] = auVar24[3] >> 3;
    auVar15[4] = auVar24[4] >> 3;
    auVar15[5] = auVar24[5] >> 3;
    auVar15[6] = auVar24[6] >> 3;
    auVar15[7] = auVar24[7] >> 3;
    auVar15[8] = auVar24[8] >> 3;
    auVar15[9] = auVar24[9] >> 3;
    auVar15[10] = auVar24[10] >> 3;
    auVar15[0xb] = auVar24[0xb] >> 3;
    auVar15[0xc] = auVar24[0xc] >> 3;
    auVar15[0xd] = auVar24[0xd] >> 3;
    auVar15[0xe] = auVar24[0xe] >> 3;
    auVar15[0xf] = auVar24[0xf] >> 3;
    auVar10[0] = auVar8[0] >> 3;
    auVar10[1] = auVar8[1] >> 3;
    auVar10[2] = auVar8[2] >> 3;
    auVar10[3] = auVar8[3] >> 3;
    auVar10[4] = auVar8[4] >> 3;
    auVar10[5] = auVar8[5] >> 3;
    auVar10[6] = auVar8[6] >> 3;
    auVar10[7] = auVar8[7] >> 3;
    auVar10[8] = auVar8[8] >> 3;
    auVar10[9] = auVar8[9] >> 3;
    auVar10[10] = auVar8[10] >> 3;
    auVar10[0xb] = auVar8[0xb] >> 3;
    auVar10[0xc] = auVar8[0xc] >> 3;
    auVar10[0xd] = auVar8[0xd] >> 3;
    auVar10[0xe] = auVar8[0xe] >> 3;
    auVar10[0xf] = auVar8[0xf] >> 3;
    auVar27 = NEON_sqadd(auVar12,auVar15,1);
    auVar25[8] = bVar16;
    auVar25._0_8_ = *puVar6 ^ 0x8080808080808080;
    auVar25[9] = bVar17;
    auVar25[10] = bVar18;
    auVar25[0xb] = bVar19;
    auVar25[0xc] = bVar20;
    auVar25[0xd] = bVar21;
    auVar25[0xe] = bVar22;
    auVar25[0xf] = bVar23;
    auVar8 = NEON_sqsub(auVar25,auVar10,1);
    auVar13._0_8_ = auVar27._0_8_ ^ 0x8080808080808080;
    auVar13[8] = auVar27[8] ^ 0x80;
    auVar13[9] = auVar27[9] ^ 0x80;
    auVar13[10] = auVar27[10] ^ 0x80;
    auVar13[0xb] = auVar27[0xb] ^ 0x80;
    auVar13[0xc] = auVar27[0xc] ^ 0x80;
    auVar13[0xd] = auVar27[0xd] ^ 0x80;
    auVar13[0xe] = auVar27[0xe] ^ 0x80;
    auVar13[0xf] = auVar27[0xf] ^ 0x80;
    auVar11._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
    auVar11[8] = auVar8[8] ^ 0x80;
    auVar11[9] = auVar8[9] ^ 0x80;
    auVar11[10] = auVar8[10] ^ 0x80;
    auVar11[0xb] = auVar8[0xb] ^ 0x80;
    auVar11[0xc] = auVar8[0xc] ^ 0x80;
    auVar11[0xd] = auVar8[0xd] ^ 0x80;
    auVar11[0xe] = auVar8[0xe] ^ 0x80;
    auVar11[0xf] = auVar8[0xf] ^ 0x80;
    puVar1 = (ulong *)((long)puVar6 + -(long)(int)param_2);
    puVar1[1] = auVar13._8_8_;
    *puVar1 = auVar13._0_8_;
    puVar6[1] = auVar11._8_8_;
    *puVar6 = auVar11._0_8_;
    puVar6 = (ulong *)((long)puVar6 +
                      (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2));
    bVar4 = iVar5 != -1;
    iVar5 = iVar5 + 1;
  } while (bVar4);
  return;
}




void FUN_1010c4d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 4;
  do {
    FUN_1010c4aec(param_1 + lVar1,param_2,param_3);
    lVar1 = lVar1 + 4;
  } while ((int)lVar1 != 0x10);
  return;
}




void FUN_1010c4db0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
                  undefined1 param_7 [16],undefined1 param_8 [16],ulong *param_9,ulong *param_10,
                  ulong *param_11,ulong *param_12,ulong *param_13,ulong *param_14)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar30;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  
  auVar10._0_8_ = param_1._0_8_ ^ 0x8080808080808080;
  auVar10[8] = param_1[8] ^ 0x80;
  auVar10[9] = param_1[9] ^ 0x80;
  auVar10[10] = param_1[10] ^ 0x80;
  auVar10[0xb] = param_1[0xb] ^ 0x80;
  auVar10[0xc] = param_1[0xc] ^ 0x80;
  auVar10[0xd] = param_1[0xd] ^ 0x80;
  auVar10[0xe] = param_1[0xe] ^ 0x80;
  auVar10[0xf] = param_1[0xf] ^ 0x80;
  auVar12._0_8_ = param_2._0_8_ ^ 0x8080808080808080;
  auVar12[8] = param_2[8] ^ 0x80;
  auVar12[9] = param_2[9] ^ 0x80;
  auVar12[10] = param_2[10] ^ 0x80;
  auVar12[0xb] = param_2[0xb] ^ 0x80;
  auVar12[0xc] = param_2[0xc] ^ 0x80;
  auVar12[0xd] = param_2[0xd] ^ 0x80;
  auVar12[0xe] = param_2[0xe] ^ 0x80;
  auVar12[0xf] = param_2[0xf] ^ 0x80;
  auVar15._0_8_ = param_3._0_8_ ^ 0x8080808080808080;
  auVar15[8] = param_3[8] ^ 0x80;
  auVar15[9] = param_3[9] ^ 0x80;
  auVar15[10] = param_3[10] ^ 0x80;
  auVar15[0xb] = param_3[0xb] ^ 0x80;
  auVar15[0xc] = param_3[0xc] ^ 0x80;
  auVar15[0xd] = param_3[0xd] ^ 0x80;
  auVar15[0xe] = param_3[0xe] ^ 0x80;
  auVar15[0xf] = param_3[0xf] ^ 0x80;
  auVar19._0_8_ = param_4._0_8_ ^ 0x8080808080808080;
  auVar19[8] = param_4[8] ^ 0x80;
  auVar19[9] = param_4[9] ^ 0x80;
  auVar19[10] = param_4[10] ^ 0x80;
  auVar19[0xb] = param_4[0xb] ^ 0x80;
  auVar19[0xc] = param_4[0xc] ^ 0x80;
  auVar19[0xd] = param_4[0xd] ^ 0x80;
  auVar19[0xe] = param_4[0xe] ^ 0x80;
  auVar19[0xf] = param_4[0xf] ^ 0x80;
  bVar20 = param_5[8] ^ 0x80;
  bVar21 = param_5[9] ^ 0x80;
  bVar22 = param_5[10] ^ 0x80;
  bVar23 = param_5[0xb] ^ 0x80;
  bVar24 = param_5[0xc] ^ 0x80;
  bVar25 = param_5[0xd] ^ 0x80;
  bVar26 = param_5[0xe] ^ 0x80;
  bVar27 = param_5[0xf] ^ 0x80;
  bVar30 = param_8[0] & param_7[0];
  bVar34 = param_8[1] & param_7[1];
  bVar35 = param_8[2] & param_7[2];
  bVar36 = param_8[3] & param_7[3];
  bVar37 = param_8[4] & param_7[4];
  bVar38 = param_8[5] & param_7[5];
  bVar39 = param_8[6] & param_7[6];
  bVar40 = param_8[7] & param_7[7];
  bVar41 = param_8[8] & param_7[8];
  bVar42 = param_8[9] & param_7[9];
  bVar43 = param_8[10] & param_7[10];
  bVar44 = param_8[0xb] & param_7[0xb];
  bVar45 = param_8[0xc] & param_7[0xc];
  bVar46 = param_8[0xd] & param_7[0xd];
  bVar47 = param_8[0xe] & param_7[0xe];
  bVar48 = param_8[0xf] & param_7[0xf];
  auVar49 = NEON_sqsub(auVar19,auVar15,1);
  auVar52[8] = bVar20;
  auVar52._0_8_ = param_5._0_8_ ^ 0x8080808080808080;
  auVar52[9] = bVar21;
  auVar52[10] = bVar22;
  auVar52[0xb] = bVar23;
  auVar52[0xc] = bVar24;
  auVar52[0xd] = bVar25;
  auVar52[0xe] = bVar26;
  auVar52[0xf] = bVar27;
  auVar52 = NEON_sqsub(auVar12,auVar52,1);
  auVar52 = NEON_sqadd(auVar52,auVar49,1);
  auVar52 = NEON_sqadd(auVar49,auVar52,1);
  auVar50 = NEON_sqadd(auVar49,auVar52,1);
  auVar53[0] = auVar50[0] & bVar30;
  auVar53[1] = auVar50[1] & bVar34;
  auVar53[2] = auVar50[2] & bVar35;
  auVar53[3] = auVar50[3] & bVar36;
  auVar53[4] = auVar50[4] & bVar37;
  auVar53[5] = auVar50[5] & bVar38;
  auVar53[6] = auVar50[6] & bVar39;
  auVar53[7] = auVar50[7] & bVar40;
  auVar53[8] = auVar50[8] & bVar41;
  auVar53[9] = auVar50[9] & bVar42;
  auVar53[10] = auVar50[10] & bVar43;
  auVar53[0xb] = auVar50[0xb] & bVar44;
  auVar53[0xc] = auVar50[0xc] & bVar45;
  auVar53[0xd] = auVar50[0xd] & bVar46;
  auVar53[0xe] = auVar50[0xe] & bVar47;
  auVar53[0xf] = auVar50[0xf] & bVar48;
  auVar56[8] = 3;
  auVar56._0_8_ = 0x303030303030303;
  auVar56[9] = 3;
  auVar56[10] = 3;
  auVar56[0xb] = 3;
  auVar56[0xc] = 3;
  auVar56[0xd] = 3;
  auVar56[0xe] = 3;
  auVar56[0xf] = 3;
  auVar49 = NEON_sqadd(auVar53,auVar56,1);
  auVar33[8] = 4;
  auVar33._0_8_ = 0x404040404040404;
  auVar33[9] = 4;
  auVar33[10] = 4;
  auVar33[0xb] = 4;
  auVar33[0xc] = 4;
  auVar33[0xd] = 4;
  auVar33[0xe] = 4;
  auVar33[0xf] = 4;
  auVar52 = NEON_sqadd(auVar53,auVar33,1);
  auVar57[0] = auVar49[0] >> 3;
  auVar57[1] = auVar49[1] >> 3;
  auVar57[2] = auVar49[2] >> 3;
  auVar57[3] = auVar49[3] >> 3;
  auVar57[4] = auVar49[4] >> 3;
  auVar57[5] = auVar49[5] >> 3;
  auVar57[6] = auVar49[6] >> 3;
  auVar57[7] = auVar49[7] >> 3;
  auVar57[8] = auVar49[8] >> 3;
  auVar57[9] = auVar49[9] >> 3;
  auVar57[10] = auVar49[10] >> 3;
  auVar57[0xb] = auVar49[0xb] >> 3;
  auVar57[0xc] = auVar49[0xc] >> 3;
  auVar57[0xd] = auVar49[0xd] >> 3;
  auVar57[0xe] = auVar49[0xe] >> 3;
  auVar57[0xf] = auVar49[0xf] >> 3;
  auVar54[0] = auVar52[0] >> 3;
  auVar54[1] = auVar52[1] >> 3;
  auVar54[2] = auVar52[2] >> 3;
  auVar54[3] = auVar52[3] >> 3;
  auVar54[4] = auVar52[4] >> 3;
  auVar54[5] = auVar52[5] >> 3;
  auVar54[6] = auVar52[6] >> 3;
  auVar54[7] = auVar52[7] >> 3;
  auVar54[8] = auVar52[8] >> 3;
  auVar54[9] = auVar52[9] >> 3;
  auVar54[10] = auVar52[10] >> 3;
  auVar54[0xb] = auVar52[0xb] >> 3;
  auVar54[0xc] = auVar52[0xc] >> 3;
  auVar54[0xd] = auVar52[0xd] >> 3;
  auVar54[0xe] = auVar52[0xe] >> 3;
  auVar54[0xf] = auVar52[0xf] >> 3;
  auVar52 = NEON_sqadd(auVar15,auVar57,1);
  auVar49 = NEON_sqsub(auVar19,auVar54,1);
  bVar30 = auVar50[0] & (bVar30 ^ param_7[0]);
  bVar34 = auVar50[1] & (bVar34 ^ param_7[1]);
  bVar35 = auVar50[2] & (bVar35 ^ param_7[2]);
  bVar36 = auVar50[3] & (bVar36 ^ param_7[3]);
  bVar37 = auVar50[4] & (bVar37 ^ param_7[4]);
  bVar38 = auVar50[5] & (bVar38 ^ param_7[5]);
  bVar39 = auVar50[6] & (bVar39 ^ param_7[6]);
  bVar40 = auVar50[7] & (bVar40 ^ param_7[7]);
  auVar28._0_8_ =
       CONCAT17(bVar40,CONCAT16(bVar39,CONCAT15(bVar38,CONCAT14(bVar37,CONCAT13(bVar36,CONCAT12(
                                                  bVar35,CONCAT11(bVar34,bVar30)))))));
  auVar28[8] = auVar50[8] & (bVar41 ^ param_7[8]);
  auVar28[9] = auVar50[9] & (bVar42 ^ param_7[9]);
  auVar28[10] = auVar50[10] & (bVar43 ^ param_7[10]);
  auVar28[0xb] = auVar50[0xb] & (bVar44 ^ param_7[0xb]);
  auVar28[0xc] = auVar50[0xc] & (bVar45 ^ param_7[0xc]);
  auVar28[0xd] = auVar50[0xd] & (bVar46 ^ param_7[0xd]);
  auVar28[0xe] = auVar50[0xe] & (bVar47 ^ param_7[0xe]);
  auVar28[0xf] = auVar50[0xf] & (bVar48 ^ param_7[0xf]);
  auVar58._0_8_ =
       CONCAT26((char)bVar36 * 0x1b + 0x3f,
                CONCAT24((char)bVar35 * 0x1b + 0x3f,
                         CONCAT22((char)bVar34 * 0x1b + 0x3f,(char)bVar30 * 0x1b + 0x3f)));
  auVar58._8_2_ = (char)bVar37 * 0x1b + 0x3f;
  auVar58._10_2_ = (char)bVar38 * 0x1b + 0x3f;
  auVar58._12_2_ = (char)bVar39 * 0x1b + 0x3f;
  auVar58._14_2_ = (char)bVar40 * 0x1b + 0x3f;
  auVar29._8_8_ = auVar28._8_8_;
  auVar51._0_2_ = (char)auVar28[8] * 0x1b + 0x3f;
  auVar51._2_2_ = (char)auVar28[9] * 0x1b + 0x3f;
  auVar51._4_2_ = (char)auVar28[10] * 0x1b + 0x3f;
  auVar51._6_2_ = (char)auVar28[0xb] * 0x1b + 0x3f;
  auVar51._8_2_ = (char)auVar28[0xc] * 0x1b + 0x3f;
  auVar51._10_2_ = (char)auVar28[0xd] * 0x1b + 0x3f;
  auVar51._12_2_ = (char)auVar28[0xe] * 0x1b + 0x3f;
  auVar51._14_2_ = (char)auVar28[0xf] * 0x1b + 0x3f;
  sVar1 = (char)auVar28[9] * 0x12 + 0x3f;
  sVar2 = (char)auVar28[10] * 0x12 + 0x3f;
  sVar3 = (char)auVar28[0xb] * 0x12 + 0x3f;
  sVar4 = (char)auVar28[0xc] * 0x12 + 0x3f;
  sVar5 = (char)auVar28[0xd] * 0x12 + 0x3f;
  sVar6 = (char)auVar28[0xe] * 0x12 + 0x3f;
  sVar7 = (char)auVar28[0xf] * 0x12 + 0x3f;
  auVar31[8] = 9;
  auVar31._0_8_ = 0x909090909090909;
  auVar31[9] = 9;
  auVar31[10] = 9;
  auVar31[0xb] = 9;
  auVar31[0xc] = 9;
  auVar31[0xd] = 9;
  auVar31[0xe] = 9;
  auVar31[0xf] = 9;
  auVar32._8_8_ = auVar31._8_8_;
  auVar55._0_2_ = (char)auVar28[8] * 9 + 0x3f;
  auVar55._2_2_ = (char)auVar28[9] * 9 + 0x3f;
  auVar55._4_2_ = (char)auVar28[10] * 9 + 0x3f;
  auVar55._6_2_ = (char)auVar28[0xb] * 9 + 0x3f;
  auVar55._8_2_ = (char)auVar28[0xc] * 9 + 0x3f;
  auVar55._10_2_ = (char)auVar28[0xd] * 9 + 0x3f;
  auVar55._12_2_ = (char)auVar28[0xe] * 9 + 0x3f;
  auVar55._14_2_ = (char)auVar28[0xf] * 9 + 0x3f;
  auVar29._0_8_ = NEON_sqshrn(auVar28._0_8_,auVar58,7,2);
  auVar8._2_2_ = (char)bVar34 * 0x12 + 0x3f;
  auVar8._0_2_ = (char)bVar30 * 0x12 + 0x3f;
  auVar8._4_2_ = (char)bVar35 * 0x12 + 0x3f;
  auVar8._6_2_ = (char)bVar36 * 0x12 + 0x3f;
  auVar8._8_2_ = (char)bVar37 * 0x12 + 0x3f;
  auVar8._10_2_ = (char)bVar38 * 0x12 + 0x3f;
  auVar8._12_2_ = (char)bVar39 * 0x12 + 0x3f;
  auVar8._14_2_ = (char)bVar40 * 0x12 + 0x3f;
  auVar32._0_8_ = NEON_sqshrn(0x909090909090909,auVar8,7,2);
  auVar59._8_8_ = auVar58._8_8_;
  auVar9._2_2_ = (char)bVar34 * 9 + 0x3f;
  auVar9._0_2_ = (char)bVar30 * 9 + 0x3f;
  auVar9._4_2_ = (char)bVar35 * 9 + 0x3f;
  auVar9._6_2_ = (char)bVar36 * 9 + 0x3f;
  auVar9._8_2_ = (char)bVar37 * 9 + 0x3f;
  auVar9._10_2_ = (char)bVar38 * 9 + 0x3f;
  auVar9._12_2_ = (char)bVar39 * 9 + 0x3f;
  auVar9._14_2_ = (char)bVar40 * 9 + 0x3f;
  auVar59._0_8_ = NEON_sqshrn(auVar58._0_8_,auVar9,7,2);
  auVar50 = NEON_sqshrn2(auVar29,auVar51,7,2);
  auVar60[2] = (char)sVar1;
  auVar60._0_2_ = (char)auVar28[8] * 0x12 + 0x3f;
  auVar60[3] = (char)((ushort)sVar1 >> 8);
  auVar60[4] = (char)sVar2;
  auVar60[5] = (char)((ushort)sVar2 >> 8);
  auVar60[6] = (char)sVar3;
  auVar60[7] = (char)((ushort)sVar3 >> 8);
  auVar60[8] = (char)sVar4;
  auVar60[9] = (char)((ushort)sVar4 >> 8);
  auVar60[10] = (char)sVar5;
  auVar60[0xb] = (char)((ushort)sVar5 >> 8);
  auVar60[0xc] = (char)sVar6;
  auVar60[0xd] = (char)((ushort)sVar6 >> 8);
  auVar60[0xe] = (char)sVar7;
  auVar60[0xf] = (char)((ushort)sVar7 >> 8);
  auVar33 = NEON_sqshrn2(auVar32,auVar60,7,2);
  auVar60 = NEON_sqshrn2(auVar59,auVar55,7,2);
  auVar52 = NEON_sqadd(auVar52,auVar50,1);
  auVar16._0_8_ = auVar52._0_8_ ^ 0x8080808080808080;
  auVar16[8] = auVar52[8] ^ 0x80;
  auVar16[9] = auVar52[9] ^ 0x80;
  auVar16[10] = auVar52[10] ^ 0x80;
  auVar16[0xb] = auVar52[0xb] ^ 0x80;
  auVar16[0xc] = auVar52[0xc] ^ 0x80;
  auVar16[0xd] = auVar52[0xd] ^ 0x80;
  auVar16[0xe] = auVar52[0xe] ^ 0x80;
  auVar16[0xf] = auVar52[0xf] ^ 0x80;
  param_11[1] = auVar16._8_8_;
  *param_11 = auVar16._0_8_;
  auVar52 = NEON_sqsub(auVar49,auVar50,1);
  auVar17._0_8_ = auVar52._0_8_ ^ 0x8080808080808080;
  auVar17[8] = auVar52[8] ^ 0x80;
  auVar17[9] = auVar52[9] ^ 0x80;
  auVar17[10] = auVar52[10] ^ 0x80;
  auVar17[0xb] = auVar52[0xb] ^ 0x80;
  auVar17[0xc] = auVar52[0xc] ^ 0x80;
  auVar17[0xd] = auVar52[0xd] ^ 0x80;
  auVar17[0xe] = auVar52[0xe] ^ 0x80;
  auVar17[0xf] = auVar52[0xf] ^ 0x80;
  param_12[1] = auVar17._8_8_;
  *param_12 = auVar17._0_8_;
  auVar49[8] = bVar20;
  auVar49._0_8_ = param_5._0_8_ ^ 0x8080808080808080;
  auVar49[9] = bVar21;
  auVar49[10] = bVar22;
  auVar49[0xb] = bVar23;
  auVar49[0xc] = bVar24;
  auVar49[0xd] = bVar25;
  auVar49[0xe] = bVar26;
  auVar49[0xf] = bVar27;
  auVar52 = NEON_sqsub(auVar49,auVar33,1);
  auVar18._0_8_ = auVar52._0_8_ ^ 0x8080808080808080;
  auVar18[8] = auVar52[8] ^ 0x80;
  auVar18[9] = auVar52[9] ^ 0x80;
  auVar18[10] = auVar52[10] ^ 0x80;
  auVar18[0xb] = auVar52[0xb] ^ 0x80;
  auVar18[0xc] = auVar52[0xc] ^ 0x80;
  auVar18[0xd] = auVar52[0xd] ^ 0x80;
  auVar18[0xe] = auVar52[0xe] ^ 0x80;
  auVar18[0xf] = auVar52[0xf] ^ 0x80;
  param_13[1] = auVar18._8_8_;
  *param_13 = auVar18._0_8_;
  auVar52 = NEON_sqadd(auVar12,auVar33,1);
  auVar13._0_8_ = auVar52._0_8_ ^ 0x8080808080808080;
  auVar13[8] = auVar52[8] ^ 0x80;
  auVar13[9] = auVar52[9] ^ 0x80;
  auVar13[10] = auVar52[10] ^ 0x80;
  auVar13[0xb] = auVar52[0xb] ^ 0x80;
  auVar13[0xc] = auVar52[0xc] ^ 0x80;
  auVar13[0xd] = auVar52[0xd] ^ 0x80;
  auVar13[0xe] = auVar52[0xe] ^ 0x80;
  auVar13[0xf] = auVar52[0xf] ^ 0x80;
  param_10[1] = auVar13._8_8_;
  *param_10 = auVar13._0_8_;
  auVar50[8] = param_6[8] ^ 0x80;
  auVar50._0_8_ = param_6._0_8_ ^ 0x8080808080808080;
  auVar50[9] = param_6[9] ^ 0x80;
  auVar50[10] = param_6[10] ^ 0x80;
  auVar50[0xb] = param_6[0xb] ^ 0x80;
  auVar50[0xc] = param_6[0xc] ^ 0x80;
  auVar50[0xd] = param_6[0xd] ^ 0x80;
  auVar50[0xe] = param_6[0xe] ^ 0x80;
  auVar50[0xf] = param_6[0xf] ^ 0x80;
  auVar52 = NEON_sqsub(auVar50,auVar60,1);
  auVar14._0_8_ = auVar52._0_8_ ^ 0x8080808080808080;
  auVar14[8] = auVar52[8] ^ 0x80;
  auVar14[9] = auVar52[9] ^ 0x80;
  auVar14[10] = auVar52[10] ^ 0x80;
  auVar14[0xb] = auVar52[0xb] ^ 0x80;
  auVar14[0xc] = auVar52[0xc] ^ 0x80;
  auVar14[0xd] = auVar52[0xd] ^ 0x80;
  auVar14[0xe] = auVar52[0xe] ^ 0x80;
  auVar14[0xf] = auVar52[0xf] ^ 0x80;
  param_14[1] = auVar14._8_8_;
  *param_14 = auVar14._0_8_;
  auVar52 = NEON_sqadd(auVar10,auVar60,1);
  auVar11._0_8_ = auVar52._0_8_ ^ 0x8080808080808080;
  auVar11[8] = auVar52[8] ^ 0x80;
  auVar11[9] = auVar52[9] ^ 0x80;
  auVar11[10] = auVar52[10] ^ 0x80;
  auVar11[0xb] = auVar52[0xb] ^ 0x80;
  auVar11[0xc] = auVar52[0xc] ^ 0x80;
  auVar11[0xd] = auVar52[0xd] ^ 0x80;
  auVar11[0xe] = auVar52[0xe] ^ 0x80;
  auVar11[0xf] = auVar52[0xf] ^ 0x80;
  param_9[1] = auVar11._8_8_;
  *param_9 = auVar11._0_8_;
  return;
}




void FUN_1010c4ebc(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      *param_1 = uVar1 & 0xff00ff00 | uVar1 - (uVar1 >> 8) & 0xff |
                 uVar1 + (uVar1 >> 8) * -0x10000 & 0xff0000;
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_1010c4ef8(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      *param_1 = (uVar1 & 0xff00ff) + (uVar1 >> 8 & 0xff) + (uVar1 >> 8 & 0xff) * 0x10000 & 0xff00ff
                 | uVar1 & 0xff00ff00;
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_1010c4f3c(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  
  if (0 < (int)param_3) {
    cVar2 = *param_1;
    cVar3 = param_1[1];
    uVar6 = (ulong)param_3;
    cVar4 = param_1[2];
    do {
      uVar1 = *param_2;
      iVar5 = (int)(uVar1 << 0x10) >> 0x18;
      *param_2 = uVar1 & 0xff000000 |
                 uVar1 & 0xff00 | ((uVar1 >> 0x10) - ((uint)(iVar5 * cVar2) >> 5) & 0xff) << 0x10 |
                 uVar1 - (((uint)(iVar5 * cVar3) >> 5) +
                         ((uint)(((int)(uVar1 << 8) >> 0x18) * (int)cVar4) >> 5)) & 0xff;
      uVar6 = uVar6 - 1;
      param_2 = param_2 + 1;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_1010c4f9c(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  
  if (0 < (int)param_3) {
    cVar3 = *param_1;
    cVar4 = param_1[1];
    uVar7 = (ulong)param_3;
    cVar5 = param_1[2];
    do {
      uVar2 = *param_2;
      iVar6 = (int)(uVar2 << 0x10) >> 0x18;
      uVar1 = ((uint)(iVar6 * cVar3) >> 5) + (uVar2 >> 0x10);
      *param_2 = uVar2 & 0xff000000 | uVar2 & 0xff00 | (uVar1 & 0xff) << 0x10 |
                 uVar2 + ((uint)(iVar6 * cVar4) >> 5) + ((uint)((int)(char)uVar1 * (int)cVar5) >> 5)
                 & 0xff;
      uVar7 = uVar7 - 1;
      param_2 = param_2 + 1;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_1010c4ff8(long param_1,int param_2,int param_3,byte *param_4,undefined1 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = 8 >> (ulong)(uVar1 & 0x1f);
  lVar6 = *(long *)(param_1 + 0x10);
  if (uVar3 < 8) {
    if (param_2 < param_3) {
      do {
        if (0 < iVar2) {
          lVar8 = 0;
          uVar9 = 0;
          pbVar4 = param_4;
          do {
            param_4 = pbVar4;
            if (((uint)lVar8 & ~(-1 << (ulong)(uVar1 & 0x1f))) == 0) {
              param_4 = pbVar4 + 1;
              uVar9 = (uint)*pbVar4;
            }
            param_5[lVar8] =
                 (char)((uint)*(undefined4 *)
                               (lVar6 + (ulong)(uVar9 & ~(-1 << (ulong)(uVar3 & 0x1f))) * 4) >> 8);
            uVar9 = uVar9 >> (ulong)(uVar3 & 0x1f);
            lVar8 = lVar8 + 1;
            pbVar4 = param_4;
          } while (iVar2 != (int)lVar8);
          param_5 = param_5 + lVar8;
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
  }
  else if (param_2 < param_3) {
    do {
      pbVar4 = param_4;
      puVar5 = param_5;
      iVar7 = iVar2;
      if (0 < iVar2) {
        do {
          param_4 = pbVar4 + 1;
          param_5 = puVar5 + 1;
          *puVar5 = (char)((uint)*(undefined4 *)(lVar6 + (ulong)*pbVar4 * 4) >> 8);
          iVar7 = iVar7 + -1;
          pbVar4 = param_4;
          puVar5 = param_5;
        } while (iVar7 != 0);
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_1010c50b8(uint *param_1,ulong param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  code *pcVar17;
  ulong uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined2 local_68;
  undefined1 local_66;
  
  if (*param_1 < 4) {
    uVar1 = param_1[2];
    lVar7 = (long)(int)uVar1;
    uVar19 = (uint)param_2;
    switch(*param_1) {
    case 0:
      puVar6 = param_5;
      if (uVar19 == 0) {
        uVar5 = *param_5 - 0x1000000;
        *param_5 = uVar5;
        if (1 < (int)uVar1) {
          lVar8 = (ulong)uVar1 - 1;
          do {
            puVar6 = puVar6 + 1;
            uVar5 = (*puVar6 & 0xff00ff00) + (uVar5 & 0xff00ff00) & 0xff00ff00 |
                    (*puVar6 & 0xff00ff) + (uVar5 & 0xff00ff) & 0xff00ff;
            *puVar6 = uVar5;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar6 = param_5 + lVar7;
        param_2 = 1;
      }
      if ((int)param_2 < (int)param_3) {
        uVar5 = param_1[1];
        iVar3 = 1 << (ulong)(uVar5 & 0x1f);
        uVar2 = (iVar3 - 1U) + uVar1 >> (ulong)(uVar5 & 0x1f);
        puVar12 = (uint *)(*(long *)(param_1 + 4) +
                          (long)(int)(uVar2 * ((int)param_2 >> (uVar5 & 0x1f))) * 4);
        puVar9 = puVar6 + -lVar7;
        puVar16 = puVar6 + -1;
        do {
          *puVar6 = (*puVar6 & 0xff00ff00) + (puVar6[-lVar7] & 0xff00ff00) & 0xff00ff00 |
                    (*puVar6 & 0xff00ff) + (puVar6[-lVar7] & 0xff00ff) & 0xff00ff;
          if ((int)(uVar1 & -iVar3) < 2) {
            uVar10 = 1;
            puVar14 = puVar12;
          }
          else {
            iVar11 = 1;
            uVar10 = 1;
            puVar13 = puVar12;
            do {
              puVar14 = puVar13 + 1;
              if (iVar11 < iVar3) {
                pcVar17 = *(code **)(&DAT_101dc1df0 + ((ulong)(*puVar13 >> 8) & 0xf) * 8);
                iVar11 = iVar3 - iVar11;
                uVar18 = -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
                do {
                  puVar13 = (uint *)((long)puVar6 + uVar18);
                  uVar5 = (*pcVar17)(puVar13[-1],(long)puVar9 + uVar18);
                  *puVar13 = (*puVar13 & 0xff00ff00) + (uVar5 & 0xff00ff00) & 0xff00ff00 |
                             (*puVar13 & 0xff00ff) + (uVar5 & 0xff00ff) & 0xff00ff;
                  uVar10 = (ulong)((int)uVar10 + 1);
                  uVar18 = uVar18 + 4;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              iVar11 = 0;
              puVar13 = puVar14;
            } while ((int)uVar10 < (int)(uVar1 & -iVar3));
          }
          if ((int)uVar10 < (int)uVar1) {
            pcVar17 = *(code **)(&DAT_101dc1df0 + ((ulong)(*puVar14 >> 8) & 0xf) * 8);
            iVar11 = uVar1 - (int)uVar10;
            uVar10 = -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
            do {
              puVar15 = (undefined4 *)((long)puVar16 + uVar10);
              uVar5 = (*pcVar17)(*puVar15,(long)puVar9 + uVar10);
              puVar15[1] = (puVar15[1] & 0xff00ff00) + (uVar5 & 0xff00ff00) & 0xff00ff00 |
                           (puVar15[1] & 0xff00ff) + (uVar5 & 0xff00ff) & 0xff00ff;
              uVar10 = uVar10 + 4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          puVar6 = puVar6 + lVar7;
          uVar5 = (int)param_2 + 1;
          param_2 = (ulong)uVar5;
          uVar4 = uVar2;
          if ((uVar5 & iVar3 - 1U) != 0) {
            uVar4 = 0;
          }
          puVar12 = puVar12 + (int)uVar4;
          puVar9 = puVar9 + lVar7;
          puVar16 = puVar16 + lVar7;
        } while (uVar5 != param_3);
      }
      if (param_1[3] != param_3) {
        _memcpy(param_5 + -lVar7,param_5 + (int)(uVar1 * (~uVar19 + param_3)),lVar7 << 2);
      }
      break;
    case 1:
      if ((int)uVar19 < (int)param_3) {
        uVar2 = param_1[1];
        iVar3 = 1 << (ulong)(uVar2 & 0x1f);
        uVar5 = uVar1 & -iVar3;
        uVar4 = (iVar3 - 1U) + uVar1 >> (ulong)(uVar2 & 0x1f);
        puVar15 = (undefined4 *)
                  (*(long *)(param_1 + 4) + (long)(int)(uVar4 * ((int)uVar19 >> (uVar2 & 0x1f))) * 4
                  );
        do {
          puVar6 = param_5;
          puVar21 = puVar15;
          if (0 < (int)uVar5) {
            puVar20 = puVar15;
            do {
              puVar21 = puVar20 + 1;
              local_68 = (undefined2)*puVar20;
              local_66 = (undefined1)((uint)*puVar20 >> 0x10);
              (*DAT_101dc1e80)(&local_68,puVar6,(long)iVar3);
              puVar6 = puVar6 + iVar3;
              puVar20 = puVar21;
            } while (puVar6 < param_5 + (int)uVar5);
          }
          if (puVar6 < param_5 + lVar7) {
            local_68 = (undefined2)*puVar21;
            local_66 = (undefined1)((uint)*puVar21 >> 0x10);
            (*DAT_101dc1e80)(&local_68,puVar6,(long)(int)(uVar1 - uVar5));
            puVar6 = puVar6 + (int)(uVar1 - uVar5);
          }
          uVar19 = (int)param_2 + 1;
          param_2 = (ulong)uVar19;
          uVar2 = uVar4;
          if ((uVar19 & iVar3 - 1U) != 0) {
            uVar2 = 0;
          }
          puVar15 = puVar15 + (int)uVar2;
          param_5 = puVar6;
        } while (uVar19 != param_3);
      }
      break;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0001010c5574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_101dc1d88)(param_5,uVar1 * (param_3 - uVar19));
      return;
    case 3:
      puVar6 = param_4;
      if ((param_4 == param_5) && (uVar5 = param_1[1], 0 < (int)uVar5)) {
        uVar5 = ((uVar1 + (1 << (ulong)(uVar5 & 0x1f))) - 1 >> (ulong)(uVar5 & 0x1f)) *
                (param_3 - uVar19);
        _memmove(param_4 + ((long)(int)(uVar1 * (param_3 - uVar19)) - (long)(int)uVar5),param_4,
                 -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
        puVar6 = param_4 + ((long)(int)(uVar1 * (param_3 - uVar19)) - (long)(int)uVar5);
        param_5 = param_4;
      }
      FUN_1010c5620(param_1,param_2,param_3,puVar6,param_5);
      return;
    }
  }
  return;
}




void FUN_1010c5620(long param_1,int param_2,int param_3,long param_4,undefined4 *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = 8 >> (ulong)(uVar6 & 0x1f);
  lVar5 = *(long *)(param_1 + 0x10);
  if (uVar3 < 8) {
    if (param_2 < param_3) {
      do {
        if (0 < (int)uVar2) {
          uVar7 = 0;
          uVar8 = 0;
          puVar4 = param_5;
          do {
            if ((uVar7 & ~(-1 << (ulong)(uVar6 & 0x1f))) == 0) {
              uVar8 = (uint)*(byte *)(param_4 + 1);
              param_4 = param_4 + 4;
            }
            param_5 = puVar4 + 1;
            *puVar4 = *(undefined4 *)(lVar5 + (ulong)(uVar8 & ~(-1 << (ulong)(uVar3 & 0x1f))) * 4);
            uVar8 = uVar8 >> (ulong)(uVar3 & 0x1f);
            uVar7 = uVar7 + 1;
            puVar4 = param_5;
          } while (uVar2 != uVar7);
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
  }
  else if (param_2 < param_3) {
    do {
      puVar4 = param_5;
      uVar6 = uVar2;
      if (0 < (int)uVar2) {
        do {
          lVar1 = param_4 + 4;
          puVar4 = param_5 + 1;
          *param_5 = *(undefined4 *)(lVar5 + (ulong)*(byte *)(param_4 + 1) * 4);
          uVar6 = uVar6 - 1;
          param_4 = lVar1;
          param_5 = puVar4;
        } while (uVar6 != 0);
      }
      param_2 = param_2 + 1;
      param_5 = puVar4;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_1010c56ec(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (char)((uint)uVar1 >> 0x10);
      param_3[1] = (char)((uint)uVar1 >> 8);
      param_3[2] = (char)uVar1;
      param_3 = param_3 + 3;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_1010c5720(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (char)((uint)uVar1 >> 0x10);
      param_3[1] = (char)((uint)uVar1 >> 8);
      param_3[2] = (char)uVar1;
      param_3[3] = (char)((uint)uVar1 >> 0x18);
      param_3 = param_3 + 4;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_1010c575c(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (byte)uVar1 & 0xf0 | (byte)(uVar1 >> 0x1c);
      param_3[1] = (byte)(uVar1 >> 0x10) & 0xf0 | (byte)(uVar1 >> 0xc) & 0xf;
      param_3 = param_3 + 2;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_1010c5790(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (byte)(uVar1 >> 5) & 0xe0 | (byte)(uVar1 >> 3) & 0x1f;
      param_3[1] = (byte)(uVar1 >> 0x10) & 0xf8 | (byte)(uVar1 >> 0xd) & 7;
      param_3 = param_3 + 2;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_1010c57c8(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (char)uVar1;
      param_3[1] = (char)((uint)uVar1 >> 8);
      param_3[2] = (char)((uint)uVar1 >> 0x10);
      param_3 = param_3 + 3;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_1010c57fc(uint *param_1,ulong param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar5;
  int iVar6;
  uint *puVar3;
  
  iVar6 = (int)param_2;
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = DAT_101dc1d98;
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = DAT_101dc1da8;
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = DAT_101dc1d90;
    break;
  case 3:
    _memcpy(param_4,param_1,
            -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
    return;
  case 4:
    if (iVar6 < 1) {
      return;
    }
    puVar2 = param_1;
    do {
      puVar5 = puVar2 + 1;
      uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
      *param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar2 = puVar5;
      param_4 = param_4 + 1;
    } while (puVar5 < param_1 + iVar6);
    return;
  case 5:
    UNRECOVERED_JUMPTABLE = DAT_101dc1db0;
    break;
  case 6:
    UNRECOVERED_JUMPTABLE = DAT_101dc1da0;
    break;
  case 7:
    (*DAT_101dc1da8)(param_1,param_2,param_4);
    goto LAB_1010c58f0;
  case 8:
    _memcpy(param_4,param_1,
            -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
LAB_1010c58f0:
    uVar4 = 0;
LAB_1010c5940:
                    /* WARNING: Could not recover jumptable at 0x0001010c5954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_101dc1cd0)(param_4,uVar4,param_2,1,0);
    return;
  case 9:
    if (0 < iVar6) {
      puVar2 = param_1;
      puVar5 = param_4;
      do {
        puVar3 = puVar2 + 1;
        uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
        *puVar5 = uVar1 >> 0x10 | uVar1 << 0x10;
        puVar2 = puVar3;
        puVar5 = puVar5 + 1;
      } while (puVar3 < param_1 + iVar6);
    }
    uVar4 = 1;
    goto LAB_1010c5940;
  case 10:
    (*DAT_101dc1db0)(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001010c5994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_101dc1cd8)(param_4,param_2,1,0);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001010c58c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c5998(void)

{
  int iVar1;
  
  if (PTR_LOOP_1018735d8 != PTR_FUN_1018735c8) {
    DAT_101dc1e70 = FUN_1010c4ebc;
    DAT_101dc1d88 = FUN_1010c4ef8;
    DAT_101dc1e78 = FUN_1010c4f3c;
    DAT_101dc1e80 = FUN_1010c4f9c;
    DAT_101dc1d98 = FUN_1010c56ec;
    DAT_101dc1da8 = FUN_1010c5720;
    DAT_101dc1db0 = FUN_1010c575c;
    DAT_101dc1da0 = FUN_1010c5790;
    DAT_101dc1d90 = FUN_1010c57c8;
    DAT_101dc1dc8 = FUN_1010c5b18;
    DAT_101dc1dd0 = FUN_1010c5bb4;
    DAT_101dc1db8 = FUN_1010c5c48;
    DAT_101dc1dc0 = FUN_1010c5c90;
    DAT_101dc1e38 = FUN_1010c609c;
    DAT_101dc1e30 = FUN_1010c6080;
    DAT_101dc1e48 = FUN_1010c6100;
    DAT_101dc1e40 = FUN_1010c60b8;
    DAT_101dc1e58 = FUN_1010c6264;
    DAT_101dc1e50 = FUN_1010c61b8;
    pcRam0000000101dc1e68 = FUN_1010c5ff4;
    _DAT_101dc1e60 = FUN_1010c5ff4;
    pcRam0000000101dc1df8 = FUN_1010c5ffc;
    _DAT_101dc1df0 = FUN_1010c5ff4;
    pcRam0000000101dc1e08 = FUN_1010c6008;
    _DAT_101dc1e00 = FUN_1010c6000;
    DAT_101dc1e18 = FUN_1010c6018;
    _DAT_101dc1e10 = FUN_1010c6010;
    DAT_101dc1e28 = FUN_1010c6064;
    DAT_101dc1e20 = FUN_1010c6048;
    DAT_101dc1de8 = FUN_1010c5ce4;
    DAT_101dc1de0 = FUN_1010c5da8;
    DAT_101dc1dd8 = FUN_1010c5e84;
    if ((PTR_FUN_1018735c8 != (undefined *)0x0) &&
       (iVar1 = (*(code *)PTR_FUN_1018735c8)(4), iVar1 != 0)) {
      FUN_1010c6338();
    }
    PTR_LOOP_1018735d8 = PTR_FUN_1018735c8;
  }
  return;
}




float FUN_1010c5b18(uint param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  double dVar6;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    iVar2 = 1;
    uVar5 = (ulong)param_1;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = uVar5 >> 1;
      iVar2 = iVar2 * 2;
      uVar4 = (uint)uVar5;
      uVar5 = uVar1;
    } while (0x1ff < uVar4);
    dVar6 = (double)(*(float *)(&DAT_1013cba14 + uVar1 * 4) + (float)iVar3);
    if (0xfff < param_1) {
      dVar6 = (double)((iVar2 - 1U & param_1) * 0x17 >> 4) / (double)param_1 + dVar6;
    }
  }
  else {
    dVar6 = (double)_log((double)param_1);
    dVar6 = dVar6 * 1.4426950408889634;
  }
  return (float)dVar6;
}




float FUN_1010c5bb4(uint param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  double dVar7;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 1;
    iVar2 = 0;
    uVar5 = (ulong)param_1;
    do {
      iVar2 = iVar2 + 1;
      uVar1 = uVar5 >> 1;
      iVar3 = iVar3 * 2;
      uVar4 = (uint)uVar5;
      uVar5 = uVar1;
    } while (0x1ff < uVar4);
    fVar6 = (float)((iVar3 - 1U & param_1) * 0x17 >> 4) +
            (float)param_1 * (*(float *)(&DAT_1013cba14 + uVar1 * 4) + (float)iVar2);
  }
  else {
    dVar7 = (double)_log();
    fVar6 = (float)((double)param_1 * 1.4426950408889634 * dVar7);
  }
  return fVar6;
}




undefined1  [16] FUN_1010c5c48(long param_1,int param_2)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar2 = 0.0;
  if (4 < param_2) {
    lVar1 = 0;
    dVar2 = 0.0;
    do {
      dVar2 = dVar2 + (double)(*(int *)(param_1 + 0x10 + lVar1 * 4) * ((int)lVar1 + 2U >> 1));
      lVar1 = lVar1 + 1;
    } while ((ulong)(param_2 - 2) - 2 != lVar1);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}




undefined1  [16] FUN_1010c5c90(long param_1,long param_2,int param_3)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar2 = 0.0;
  if (4 < param_3) {
    lVar1 = 0;
    dVar2 = 0.0;
    do {
      dVar2 = dVar2 + (double)(int)((*(int *)(param_2 + 0x10 + lVar1 * 4) +
                                    *(int *)(param_1 + 0x10 + lVar1 * 4)) * ((int)lVar1 + 2U >> 1));
      lVar1 = lVar1 + 1;
    } while ((ulong)(param_3 - 2) - 2 != lVar1);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}




void FUN_1010c5ce4(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 < 2) {
    uVar3 = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = (ulong)(param_3 - 1);
    uVar6 = uVar3;
    iVar8 = *param_2;
    iVar7 = 0;
    piVar4 = param_2;
    do {
      piVar4 = piVar4 + 1;
      iVar5 = iVar7 + 1;
      iVar1 = *piVar4;
      if (iVar8 != iVar1) {
        uVar9 = (ulong)(iVar8 != 0);
        iVar8 = *(int *)((long)param_1 + uVar9 * 4);
        if (2 < iVar7) {
          iVar8 = iVar8 + 1;
        }
        *(int *)((long)param_1 + uVar9 * 4) = iVar8;
        lVar2 = (ulong)(2 < iVar7) * 4 + uVar9 * 8;
        *(int *)((long)param_1 + lVar2 + 8) = *(int *)((long)param_1 + lVar2 + 8) + iVar5;
        iVar5 = 0;
      }
      uVar6 = uVar6 - 1;
      iVar8 = iVar1;
      iVar7 = iVar5;
    } while (uVar6 != 0);
  }
  uVar3 = (ulong)(param_2[uVar3] != 0);
  lVar2 = (ulong)(2 < iVar5) * 4 + uVar3 * 8;
  iVar7 = *(int *)((long)param_1 + lVar2 + 8);
  iVar8 = *(int *)((long)param_1 + uVar3 * 4);
  if (2 < iVar5) {
    iVar8 = iVar8 + 1;
  }
  *(int *)((long)param_1 + uVar3 * 4) = iVar8;
  *(int *)((long)param_1 + lVar2 + 8) = iVar5 + iVar7 + 1;
  return;
}




void FUN_1010c5da8(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_4 < 2) {
    iVar8 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)(param_4 - 1);
    iVar5 = *param_2;
    iVar7 = *param_3;
    uVar9 = uVar3;
    iVar10 = 0;
    piVar4 = param_2;
    piVar6 = param_3;
    do {
      piVar6 = piVar6 + 1;
      piVar4 = piVar4 + 1;
      iVar1 = iVar7 + iVar5;
      iVar5 = *piVar4;
      iVar7 = *piVar6;
      iVar8 = iVar10 + 1;
      if (iVar1 != iVar7 + iVar5) {
        uVar11 = (ulong)(iVar1 != 0);
        iVar1 = *(int *)((long)param_1 + uVar11 * 4);
        if (2 < iVar10) {
          iVar1 = iVar1 + 1;
        }
        *(int *)((long)param_1 + uVar11 * 4) = iVar1;
        lVar2 = (ulong)(2 < iVar10) * 4 + uVar11 * 8;
        *(int *)((long)param_1 + lVar2 + 8) = *(int *)((long)param_1 + lVar2 + 8) + iVar8;
        iVar8 = 0;
      }
      uVar9 = uVar9 - 1;
      iVar10 = iVar8;
    } while (uVar9 != 0);
  }
  uVar3 = (ulong)(param_2[uVar3] + param_3[uVar3] != 0);
  lVar2 = (ulong)(2 < iVar8) * 4 + uVar3 * 8;
  iVar7 = *(int *)((long)param_1 + lVar2 + 8);
  iVar5 = *(int *)((long)param_1 + uVar3 * 4);
  if (2 < iVar8) {
    iVar5 = iVar5 + 1;
  }
  *(int *)((long)param_1 + uVar3 * 4) = iVar5;
  *(int *)((long)param_1 + lVar2 + 8) = iVar8 + iVar7 + 1;
  return;
}




void FUN_1010c5e84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar1 = (1 << (ulong)(*(uint *)(param_1 + 0x195) & 0x1f)) + 0x118;
  if ((int)*(uint *)(param_1 + 0x195) < 1) {
    uVar1 = 0x118;
  }
  if (param_2 == param_3) {
    if (0 < (int)uVar1) {
      uVar5 = (ulong)uVar1;
      piVar3 = (int *)*param_1;
      piVar4 = (int *)*param_2;
      do {
        *piVar4 = *piVar4 + *piVar3;
        uVar5 = uVar5 - 1;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 != 0);
    }
    lVar2 = 0;
    do {
      *(int *)((long)param_2 + lVar2 + 0xc08) =
           *(int *)((long)param_2 + lVar2 + 0xc08) + *(int *)((long)param_1 + lVar2 + 0xc08);
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0xa0);
    lVar2 = 0;
    do {
      *(int *)((long)param_2 + lVar2 + 8) =
           *(int *)((long)param_2 + lVar2 + 8) + *(int *)((long)param_1 + lVar2 + 8);
      *(int *)((long)param_2 + lVar2 + 0x408) =
           *(int *)((long)param_2 + lVar2 + 0x408) + *(int *)((long)param_1 + lVar2 + 0x408);
      *(int *)((long)param_2 + lVar2 + 0x808) =
           *(int *)((long)param_2 + lVar2 + 0x808) + *(int *)((long)param_1 + lVar2 + 0x808);
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x400);
  }
  else {
    if (0 < (int)uVar1) {
      uVar5 = (ulong)uVar1;
      piVar3 = (int *)*param_1;
      piVar4 = (int *)*param_2;
      piVar6 = (int *)*param_3;
      do {
        *piVar6 = *piVar4 + *piVar3;
        uVar5 = uVar5 - 1;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar5 != 0);
    }
    lVar2 = 0;
    do {
      *(int *)((long)param_3 + lVar2 + 0xc08) =
           *(int *)((long)param_2 + lVar2 + 0xc08) + *(int *)((long)param_1 + lVar2 + 0xc08);
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0xa0);
    lVar2 = 0;
    do {
      *(int *)((long)param_3 + lVar2 + 8) =
           *(int *)((long)param_2 + lVar2 + 8) + *(int *)((long)param_1 + lVar2 + 8);
      *(int *)((long)param_3 + lVar2 + 0x408) =
           *(int *)((long)param_2 + lVar2 + 0x408) + *(int *)((long)param_1 + lVar2 + 0x408);
      *(int *)((long)param_3 + lVar2 + 0x808) =
           *(int *)((long)param_2 + lVar2 + 0x808) + *(int *)((long)param_1 + lVar2 + 0x808);
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x400);
  }
  return;
}




undefined8 FUN_1010c5ff4(void)

{
  return 0xff000000;
}




void FUN_1010c5ffc(void)

{
  return;
}




undefined4 FUN_1010c6000(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}




undefined4 FUN_1010c6008(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + 4);
}




undefined4 FUN_1010c6010(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + -4);
}




int FUN_1010c6018(uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = ((param_2[1] ^ param_1) >> 1 & 0x7f7f7f7f) + (param_2[1] & param_1);
  return ((uVar1 ^ *param_2) >> 1 & 0x7f7f7f7f) + (uVar1 & *param_2);
}




int FUN_1010c6048(uint param_1,long param_2)

{
  return ((*(uint *)(param_2 + -4) ^ param_1) >> 1 & 0x7f7f7f7f) +
         (*(uint *)(param_2 + -4) & param_1);
}




int FUN_1010c6064(uint param_1,uint *param_2)

{
  return ((*param_2 ^ param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & param_1);
}




int FUN_1010c6080(undefined8 param_1,uint *param_2)

{
  return ((*param_2 ^ param_2[-1]) >> 1 & 0x7f7f7f7f) + (*param_2 & param_2[-1]);
}




int FUN_1010c609c(undefined8 param_1,uint *param_2)

{
  return ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
}




int FUN_1010c60b8(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((param_2[-1] ^ param_1) >> 1 & 0x7f7f7f7f) + (param_2[-1] & param_1);
  uVar2 = ((param_2[1] ^ *param_2) >> 1 & 0x7f7f7f7f) + (param_2[1] & *param_2);
  return ((uVar2 ^ uVar1) >> 1 & 0x7f7f7f7f) + (uVar2 & uVar1);
}




uint FUN_1010c6100(uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = param_2[-1];
  uVar3 = *param_2;
  iVar4 = (param_1 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
  iVar6 = (uVar3 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
  iVar1 = -iVar4;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  iVar4 = -iVar6;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  uVar13 = CONCAT44(uVar3 >> 8,param_1 >> 8) & 0xff000000ff;
  uVar5 = uVar2 >> 8 & 0xff;
  uVar7 = NEON_ushl(CONCAT44(uVar3,param_1),0xffffffe8ffffff01,4);
  iVar6 = MP_INT_ABS((int)uVar13 - uVar5);
  iVar8 = MP_INT_ABS((int)(uVar13 >> 0x20) - uVar5);
  uVar13 = CONCAT44(uVar2,uVar2) & 0xff000000ff;
  uVar14 = NEON_ushl(CONCAT44(uVar2,uVar2),0xffffffe8ffffff01,4);
  uVar15 = NEON_ext(uVar14,uVar13,4,1);
  iVar9 = MP_INT_ABS((param_1 & 0xff) - (int)uVar13);
  iVar10 = MP_INT_ABS((int)((ulong)uVar7 >> 0x20) - (int)((ulong)uVar14 >> 0x20));
  iVar11 = MP_INT_ABS((param_1 >> 0x18) - (int)uVar15);
  iVar12 = MP_INT_ABS((uVar3 & 0xff) - (int)((ulong)uVar15 >> 0x20));
  if (0 < ((iVar9 + iVar11 + iVar6) - (iVar10 + iVar12 + iVar8 + iVar4)) + iVar1) {
    uVar3 = param_1;
  }
  return uVar3;
}




uint FUN_1010c61b8(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar7;
  undefined8 uVar6;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = param_2[-1];
  uVar2 = *param_2;
  uVar3 = ((uVar2 >> 0x18) + (param_1 >> 0x18)) - (uVar1 >> 0x18);
  if (0xff < uVar3) {
    uVar3 = ~uVar3 >> 0x18;
  }
  uVar5 = NEON_ushl(CONCAT44(param_1,param_1),0xfffffff8fffffff0,4);
  uVar9 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffff8fffffff0,4);
  uVar8 = NEON_ushl(CONCAT44(uVar1,uVar1),0xfffffff8fffffff0,4);
  uVar4 = ((int)(uVar9 & 0xff000000ff) + (int)(uVar5 & 0xff000000ff)) - (int)(uVar8 & 0xff000000ff);
  uVar7 = ((int)((uVar9 & 0xff000000ff) >> 0x20) + (int)((uVar5 & 0xff000000ff) >> 0x20)) -
          (int)((uVar8 & 0xff000000ff) >> 0x20);
  uVar1 = ((uVar2 & 0xff) + (param_1 & 0xff)) - (uVar1 & 0xff);
  if (0xff < uVar1) {
    uVar1 = ~uVar1 >> 0x18;
  }
  uVar6 = NEON_ushl(CONCAT44(uVar7,uVar4) ^
                    (CONCAT44(uVar7,uVar4) ^
                    CONCAT44((uint)(((ulong)(byte)~(byte)(uVar7 >> 0x18) << 0x38) >> 0x38),
                             (uint)(byte)~(byte)(uVar4 >> 0x18))) &
                    ~CONCAT44(-(uint)(uVar7 < 0x100),-(uint)(uVar4 < 0x100)),0x800000010,4);
  return uVar1 | uVar3 << 0x18 | (uint)uVar6 | (uint)((ulong)uVar6 >> 0x20);
}




uint FUN_1010c6264(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_2[-1];
  uVar1 = ((*param_2 ^ param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & param_1);
  uVar5 = (uVar1 >> 0x18) - (uVar2 >> 0x18);
  uVar5 = (uVar1 >> 0x18) + ((int)(uVar5 + ((uVar5 & 0x8000) >> 0xf)) >> 1);
  if (0xff < uVar5) {
    uVar5 = ~uVar5 >> 0x18;
  }
  uVar3 = (uVar1 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
  uVar3 = ((int)(uVar3 + ((uVar3 & 0x8000) >> 0xf)) >> 1) + (uVar1 >> 0x10 & 0xff);
  if (0xff < uVar3) {
    uVar3 = ~uVar3 >> 0x18;
  }
  uVar4 = (uVar1 >> 8 & 0xff) - (uVar2 >> 8 & 0xff);
  uVar4 = ((int)(uVar4 + ((uVar4 & 0x8000) >> 0xf)) >> 1) + (uVar1 >> 8 & 0xff);
  if (0xff < uVar4) {
    uVar4 = ~uVar4 >> 0x18;
  }
  uVar2 = (uVar1 & 0xff) - (uVar2 & 0xff);
  uVar1 = ((int)(uVar2 + ((uVar2 & 0x8000) >> 0xf)) >> 1) + (uVar1 & 0xff);
  if (0xff < uVar1) {
    uVar1 = ~uVar1 >> 0x18;
  }
  return uVar1 | uVar5 << 0x18 | uVar3 << 0x10 | uVar4 << 8;
}




void FUN_1010c6338(void)

{
  DAT_101dc1da8 = FUN_1010c6404;
  DAT_101dc1d90 = FUN_1010c643c;
  DAT_101dc1d98 = FUN_1010c6464;
  DAT_101dc1e18 = FUN_1010c6498;
  DAT_101dc1e20 = FUN_1010c64bc;
  DAT_101dc1e28 = FUN_1010c64d8;
  DAT_101dc1e30 = FUN_1010c64f4;
  DAT_101dc1e38 = FUN_1010c6510;
  DAT_101dc1e40 = FUN_1010c6528;
  DAT_101dc1e48 = FUN_1010c6558;
  DAT_101dc1e50 = FUN_1010c6598;
  DAT_101dc1e58 = FUN_1010c65c8;
  DAT_101dc1e70 = FUN_1010c6604;
  DAT_101dc1d88 = FUN_1010c6658;
  return;
}




void FUN_1010c6404(undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  
  if (0 < (int)(param_2 & 0xfffffff0)) {
    puVar1 = param_1 + (long)(int)(param_2 & 0xfffffff0) * 4;
    do {
      uVar3 = *param_1;
      uVar19 = param_1[1];
      puVar2 = param_1 + 2;
      uVar50 = param_1[3];
      uVar4 = param_1[4];
      uVar20 = param_1[5];
      uVar35 = param_1[6];
      uVar51 = param_1[7];
      uVar5 = param_1[8];
      uVar21 = param_1[9];
      uVar36 = param_1[10];
      uVar52 = param_1[0xb];
      uVar6 = param_1[0xc];
      uVar22 = param_1[0xd];
      uVar37 = param_1[0xe];
      uVar53 = param_1[0xf];
      uVar7 = param_1[0x10];
      uVar23 = param_1[0x11];
      uVar38 = param_1[0x12];
      uVar54 = param_1[0x13];
      uVar8 = param_1[0x14];
      uVar24 = param_1[0x15];
      uVar39 = param_1[0x16];
      uVar55 = param_1[0x17];
      uVar9 = param_1[0x18];
      uVar25 = param_1[0x19];
      uVar40 = param_1[0x1a];
      uVar56 = param_1[0x1b];
      uVar10 = param_1[0x1c];
      uVar26 = param_1[0x1d];
      uVar41 = param_1[0x1e];
      uVar57 = param_1[0x1f];
      uVar11 = param_1[0x20];
      uVar27 = param_1[0x21];
      uVar42 = param_1[0x22];
      uVar58 = param_1[0x23];
      uVar12 = param_1[0x24];
      uVar28 = param_1[0x25];
      uVar43 = param_1[0x26];
      uVar59 = param_1[0x27];
      uVar13 = param_1[0x28];
      uVar29 = param_1[0x29];
      uVar44 = param_1[0x2a];
      uVar60 = param_1[0x2b];
      uVar14 = param_1[0x2c];
      uVar30 = param_1[0x2d];
      uVar45 = param_1[0x2e];
      uVar61 = param_1[0x2f];
      uVar15 = param_1[0x30];
      uVar31 = param_1[0x31];
      uVar46 = param_1[0x32];
      uVar62 = param_1[0x33];
      uVar16 = param_1[0x34];
      uVar32 = param_1[0x35];
      uVar47 = param_1[0x36];
      uVar63 = param_1[0x37];
      uVar17 = param_1[0x38];
      uVar33 = param_1[0x39];
      uVar48 = param_1[0x3a];
      uVar64 = param_1[0x3b];
      uVar18 = param_1[0x3c];
      uVar34 = param_1[0x3d];
      uVar49 = param_1[0x3e];
      uVar65 = param_1[0x3f];
      param_1 = param_1 + 0x40;
      *param_3 = *puVar2;
      param_3[1] = uVar19;
      param_3[2] = uVar3;
      param_3[3] = uVar50;
      param_3[4] = uVar35;
      param_3[5] = uVar20;
      param_3[6] = uVar4;
      param_3[7] = uVar51;
      param_3[8] = uVar36;
      param_3[9] = uVar21;
      param_3[10] = uVar5;
      param_3[0xb] = uVar52;
      param_3[0xc] = uVar37;
      param_3[0xd] = uVar22;
      param_3[0xe] = uVar6;
      param_3[0xf] = uVar53;
      param_3[0x10] = uVar38;
      param_3[0x11] = uVar23;
      param_3[0x12] = uVar7;
      param_3[0x13] = uVar54;
      param_3[0x14] = uVar39;
      param_3[0x15] = uVar24;
      param_3[0x16] = uVar8;
      param_3[0x17] = uVar55;
      param_3[0x18] = uVar40;
      param_3[0x19] = uVar25;
      param_3[0x1a] = uVar9;
      param_3[0x1b] = uVar56;
      param_3[0x1c] = uVar41;
      param_3[0x1d] = uVar26;
      param_3[0x1e] = uVar10;
      param_3[0x1f] = uVar57;
      param_3[0x20] = uVar42;
      param_3[0x21] = uVar27;
      param_3[0x22] = uVar11;
      param_3[0x23] = uVar58;
      param_3[0x24] = uVar43;
      param_3[0x25] = uVar28;
      param_3[0x26] = uVar12;
      param_3[0x27] = uVar59;
      param_3[0x28] = uVar44;
      param_3[0x29] = uVar29;
      param_3[0x2a] = uVar13;
      param_3[0x2b] = uVar60;
      param_3[0x2c] = uVar45;
      param_3[0x2d] = uVar30;
      param_3[0x2e] = uVar14;
      param_3[0x2f] = uVar61;
      param_3[0x30] = uVar46;
      param_3[0x31] = uVar31;
      param_3[0x32] = uVar15;
      param_3[0x33] = uVar62;
      param_3[0x34] = uVar47;
      param_3[0x35] = uVar32;
      param_3[0x36] = uVar16;
      param_3[0x37] = uVar63;
      param_3[0x38] = uVar48;
      param_3[0x39] = uVar33;
      param_3[0x3a] = uVar17;
      param_3[0x3b] = uVar64;
      param_3[0x3c] = uVar49;
      param_3[0x3d] = uVar34;
      param_3[0x3e] = uVar18;
      param_3[0x3f] = uVar65;
      param_3 = param_3 + 0x40;
    } while (param_1 < puVar1);
  }
  FUN_1010c5720(param_1,param_2 & 0xf);
  return;
}




void FUN_1010c643c(undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  
  if (0 < (int)(param_2 & 0xfffffff0)) {
    puVar1 = param_1 + (long)(int)(param_2 & 0xfffffff0) * 4;
    do {
      uVar2 = *param_1;
      uVar18 = param_1[1];
      uVar34 = param_1[2];
      uVar3 = param_1[4];
      uVar19 = param_1[5];
      uVar35 = param_1[6];
      uVar4 = param_1[8];
      uVar20 = param_1[9];
      uVar36 = param_1[10];
      uVar5 = param_1[0xc];
      uVar21 = param_1[0xd];
      uVar37 = param_1[0xe];
      uVar6 = param_1[0x10];
      uVar22 = param_1[0x11];
      uVar38 = param_1[0x12];
      uVar7 = param_1[0x14];
      uVar23 = param_1[0x15];
      uVar39 = param_1[0x16];
      uVar8 = param_1[0x18];
      uVar24 = param_1[0x19];
      uVar40 = param_1[0x1a];
      uVar9 = param_1[0x1c];
      uVar25 = param_1[0x1d];
      uVar41 = param_1[0x1e];
      uVar10 = param_1[0x20];
      uVar26 = param_1[0x21];
      uVar42 = param_1[0x22];
      uVar11 = param_1[0x24];
      uVar27 = param_1[0x25];
      uVar43 = param_1[0x26];
      uVar12 = param_1[0x28];
      uVar28 = param_1[0x29];
      uVar44 = param_1[0x2a];
      uVar13 = param_1[0x2c];
      uVar29 = param_1[0x2d];
      uVar45 = param_1[0x2e];
      uVar14 = param_1[0x30];
      uVar30 = param_1[0x31];
      uVar46 = param_1[0x32];
      uVar15 = param_1[0x34];
      uVar31 = param_1[0x35];
      uVar47 = param_1[0x36];
      uVar16 = param_1[0x38];
      uVar32 = param_1[0x39];
      uVar48 = param_1[0x3a];
      uVar17 = param_1[0x3c];
      uVar33 = param_1[0x3d];
      uVar49 = param_1[0x3e];
      param_1 = param_1 + 0x40;
      *param_3 = uVar2;
      param_3[1] = uVar18;
      param_3[2] = uVar34;
      param_3[3] = uVar3;
      param_3[4] = uVar19;
      param_3[5] = uVar35;
      param_3[6] = uVar4;
      param_3[7] = uVar20;
      param_3[8] = uVar36;
      param_3[9] = uVar5;
      param_3[10] = uVar21;
      param_3[0xb] = uVar37;
      param_3[0xc] = uVar6;
      param_3[0xd] = uVar22;
      param_3[0xe] = uVar38;
      param_3[0xf] = uVar7;
      param_3[0x10] = uVar23;
      param_3[0x11] = uVar39;
      param_3[0x12] = uVar8;
      param_3[0x13] = uVar24;
      param_3[0x14] = uVar40;
      param_3[0x15] = uVar9;
      param_3[0x16] = uVar25;
      param_3[0x17] = uVar41;
      param_3[0x18] = uVar10;
      param_3[0x19] = uVar26;
      param_3[0x1a] = uVar42;
      param_3[0x1b] = uVar11;
      param_3[0x1c] = uVar27;
      param_3[0x1d] = uVar43;
      param_3[0x1e] = uVar12;
      param_3[0x1f] = uVar28;
      param_3[0x20] = uVar44;
      param_3[0x21] = uVar13;
      param_3[0x22] = uVar29;
      param_3[0x23] = uVar45;
      param_3[0x24] = uVar14;
      param_3[0x25] = uVar30;
      param_3[0x26] = uVar46;
      param_3[0x27] = uVar15;
      param_3[0x28] = uVar31;
      param_3[0x29] = uVar47;
      param_3[0x2a] = uVar16;
      param_3[0x2b] = uVar32;
      param_3[0x2c] = uVar48;
      param_3[0x2d] = uVar17;
      param_3[0x2e] = uVar33;
      param_3[0x2f] = uVar49;
      param_3 = param_3 + 0x30;
    } while (param_1 < puVar1);
  }
  FUN_1010c57c8(param_1,param_2 & 0xf);
  return;
}




void FUN_1010c6464(undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  
  if (0 < (int)(param_2 & 0xfffffff0)) {
    puVar1 = param_1 + (long)(int)(param_2 & 0xfffffff0) * 4;
    do {
      uVar3 = *param_1;
      uVar19 = param_1[1];
      puVar2 = param_1 + 2;
      uVar4 = param_1[4];
      uVar20 = param_1[5];
      uVar35 = param_1[6];
      uVar5 = param_1[8];
      uVar21 = param_1[9];
      uVar36 = param_1[10];
      uVar6 = param_1[0xc];
      uVar22 = param_1[0xd];
      uVar37 = param_1[0xe];
      uVar7 = param_1[0x10];
      uVar23 = param_1[0x11];
      uVar38 = param_1[0x12];
      uVar8 = param_1[0x14];
      uVar24 = param_1[0x15];
      uVar39 = param_1[0x16];
      uVar9 = param_1[0x18];
      uVar25 = param_1[0x19];
      uVar40 = param_1[0x1a];
      uVar10 = param_1[0x1c];
      uVar26 = param_1[0x1d];
      uVar41 = param_1[0x1e];
      uVar11 = param_1[0x20];
      uVar27 = param_1[0x21];
      uVar42 = param_1[0x22];
      uVar12 = param_1[0x24];
      uVar28 = param_1[0x25];
      uVar43 = param_1[0x26];
      uVar13 = param_1[0x28];
      uVar29 = param_1[0x29];
      uVar44 = param_1[0x2a];
      uVar14 = param_1[0x2c];
      uVar30 = param_1[0x2d];
      uVar45 = param_1[0x2e];
      uVar15 = param_1[0x30];
      uVar31 = param_1[0x31];
      uVar46 = param_1[0x32];
      uVar16 = param_1[0x34];
      uVar32 = param_1[0x35];
      uVar47 = param_1[0x36];
      uVar17 = param_1[0x38];
      uVar33 = param_1[0x39];
      uVar48 = param_1[0x3a];
      uVar18 = param_1[0x3c];
      uVar34 = param_1[0x3d];
      uVar49 = param_1[0x3e];
      param_1 = param_1 + 0x40;
      *param_3 = *puVar2;
      param_3[1] = uVar19;
      param_3[2] = uVar3;
      param_3[3] = uVar35;
      param_3[4] = uVar20;
      param_3[5] = uVar4;
      param_3[6] = uVar36;
      param_3[7] = uVar21;
      param_3[8] = uVar5;
      param_3[9] = uVar37;
      param_3[10] = uVar22;
      param_3[0xb] = uVar6;
      param_3[0xc] = uVar38;
      param_3[0xd] = uVar23;
      param_3[0xe] = uVar7;
      param_3[0xf] = uVar39;
      param_3[0x10] = uVar24;
      param_3[0x11] = uVar8;
      param_3[0x12] = uVar40;
      param_3[0x13] = uVar25;
      param_3[0x14] = uVar9;
      param_3[0x15] = uVar41;
      param_3[0x16] = uVar26;
      param_3[0x17] = uVar10;
      param_3[0x18] = uVar42;
      param_3[0x19] = uVar27;
      param_3[0x1a] = uVar11;
      param_3[0x1b] = uVar43;
      param_3[0x1c] = uVar28;
      param_3[0x1d] = uVar12;
      param_3[0x1e] = uVar44;
      param_3[0x1f] = uVar29;
      param_3[0x20] = uVar13;
      param_3[0x21] = uVar45;
      param_3[0x22] = uVar30;
      param_3[0x23] = uVar14;
      param_3[0x24] = uVar46;
      param_3[0x25] = uVar31;
      param_3[0x26] = uVar15;
      param_3[0x27] = uVar47;
      param_3[0x28] = uVar32;
      param_3[0x29] = uVar16;
      param_3[0x2a] = uVar48;
      param_3[0x2b] = uVar33;
      param_3[0x2c] = uVar17;
      param_3[0x2d] = uVar49;
      param_3[0x2e] = uVar34;
      param_3[0x2f] = uVar18;
      param_3 = param_3 + 0x30;
    } while (param_1 < puVar1);
  }
  FUN_1010c56ec(param_1,param_2 & 0xf);
  return;
}




ulong FUN_1010c6498(uint param_1,uint *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)param_2[1],1);
  uVar2 = NEON_uhadd(uVar1,(ulong)*param_2,1);
  return uVar2 & 0xffffffff;
}




ulong FUN_1010c64bc(uint param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)*(uint *)(param_2 + -4),1);
  return uVar1 & 0xffffffff;
}




ulong FUN_1010c64d8(uint param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)*param_2,1);
  return uVar1 & 0xffffffff;
}




ulong FUN_1010c64f4(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)param_2[-1],(ulong)*param_2,1);
  return uVar1 & 0xffffffff;
}




ulong FUN_1010c6510(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = NEON_uhadd((ulong)*param_2,(ulong)param_2[1],1);
  return uVar1 & 0xffffffff;
}




ulong FUN_1010c6528(uint param_1,uint *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)param_2[-1],1);
  uVar3 = NEON_uhadd((ulong)*param_2,(ulong)param_2[1],1);
  uVar2 = NEON_uhadd(uVar1,uVar3,1);
  return uVar2 & 0xffffffff;
}




uint FUN_1010c6558(uint param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = NEON_uabd((ulong)param_1,(ulong)param_2[-1],1);
  uVar2 = NEON_uabd((ulong)*param_2,(ulong)param_2[-1],1);
  uVar1 = *param_2;
  if (0 < (int)(short)(((ushort)(byte)uVar3 + (ushort)(byte)((ulong)uVar3 >> 8)) -
                      ((ushort)(byte)uVar2 + (ushort)(byte)((ulong)uVar2 >> 8))) +
          (int)(short)(((ushort)(byte)((ulong)uVar3 >> 0x10) + (ushort)(byte)((ulong)uVar3 >> 0x18))
                      - ((ushort)(byte)((ulong)uVar2 >> 0x10) + (ushort)(byte)((ulong)uVar2 >> 0x18)
                        ))) {
    uVar1 = param_1;
  }
  return uVar1;
}




ulong FUN_1010c6598(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[-1];
  auVar4._0_2_ = (ushort)(byte)uVar1 + (ushort)(byte)param_1;
  auVar4._2_2_ = (ushort)(byte)((uint)uVar1 >> 8) + (ushort)(byte)((uint)param_1 >> 8);
  auVar4._4_2_ = (ushort)(byte)((uint)uVar1 >> 0x10) + (ushort)(byte)((uint)param_1 >> 0x10);
  auVar4._6_2_ = (ushort)(byte)((uint)uVar1 >> 0x18) + (ushort)(byte)((uint)param_1 >> 0x18);
  auVar4._8_8_ = 0;
  auVar4 = NEON_uqsub(auVar4,ZEXT716(CONCAT16((char)((uint)uVar2 >> 0x18),
                                              (uint6)CONCAT14((char)((uint)uVar2 >> 0x10),
                                                              (uint)CONCAT12((char)((uint)uVar2 >> 8
                                                                                   ),(ushort)(byte)
                                                  uVar2)))),2);
  uVar3 = NEON_uqxtn(auVar4._0_8_,auVar4,2);
  return uVar3 & 0xffffffff;
}




ulong FUN_1010c65c8(uint param_1,uint *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = NEON_uhadd((ulong)param_1,(ulong)*param_2,1);
  uVar3 = NEON_uqsub(uVar1,(ulong)param_2[-1],1);
  uVar4 = NEON_uqsub((ulong)param_2[-1],uVar1,1);
  uVar1 = NEON_uqadd(uVar1,CONCAT17((byte)((ulong)uVar3 >> 0x39),
                                    CONCAT16((byte)((ulong)uVar3 >> 0x30) >> 1,
                                             CONCAT15((byte)((ulong)uVar3 >> 0x28) >> 1,
                                                      CONCAT14((byte)((ulong)uVar3 >> 0x20) >> 1,
                                                               CONCAT13((byte)((ulong)uVar3 >> 0x18)
                                                                        >> 1,CONCAT12((byte)((ulong)
                                                  uVar3 >> 0x10) >> 1,
                                                  CONCAT11((byte)((ulong)uVar3 >> 8) >> 1,
                                                           (byte)uVar3 >> 1))))))),1);
  uVar2 = NEON_uqsub(uVar1,CONCAT17((byte)((ulong)uVar4 >> 0x39),
                                    CONCAT16((byte)((ulong)uVar4 >> 0x30) >> 1,
                                             CONCAT15((byte)((ulong)uVar4 >> 0x28) >> 1,
                                                      CONCAT14((byte)((ulong)uVar4 >> 0x20) >> 1,
                                                               CONCAT13((byte)((ulong)uVar4 >> 0x18)
                                                                        >> 1,CONCAT12((byte)((ulong)
                                                  uVar4 >> 0x10) >> 1,
                                                  CONCAT11((byte)((ulong)uVar4 >> 8) >> 1,
                                                           (byte)uVar4 >> 1))))))),1);
  return uVar2 & 0xffffffff;
}




void FUN_1010c6604(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulong *puVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (0 < (int)(param_2 & 0xfffffffc)) {
    puVar1 = (ulong *)((long)param_1 + (long)(int)(param_2 & 0xfffffffc) * 4);
    puVar7 = param_1;
    do {
      uVar4 = puVar7[1];
      cVar8 = (char)(uVar4 >> 8);
      cVar9 = (char)(uVar4 >> 0x10);
      cVar10 = (char)(uVar4 >> 0x18);
      cVar11 = (char)(uVar4 >> 0x20);
      cVar12 = (char)(uVar4 >> 0x28);
      cVar13 = (char)(uVar4 >> 0x30);
      cVar14 = (char)(uVar4 >> 0x38);
      uVar3 = *puVar7;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar3;
      uVar6 = a64_TBL(ZEXT816(0),auVar5,0xff05ff05ff01ff01);
      auVar16[9] = cVar8;
      auVar16._0_9_ = *(unkbyte9 *)puVar7;
      auVar16[10] = cVar9;
      auVar16[0xb] = cVar10;
      auVar16[0xc] = cVar11;
      auVar16[0xd] = cVar12;
      auVar16[0xe] = cVar13;
      auVar16[0xf] = cVar14;
      auVar2[9] = cVar8;
      auVar2._0_9_ = *(unkbyte9 *)puVar7;
      auVar2[10] = cVar9;
      auVar2[0xb] = cVar10;
      auVar2[0xc] = cVar11;
      auVar2[0xd] = cVar12;
      auVar2[0xe] = cVar13;
      auVar2[0xf] = cVar14;
      auVar16 = NEON_ext(auVar16,auVar2,8,1);
      auVar17._0_8_ = auVar16._0_8_;
      auVar17._8_8_ = 0;
      uVar15 = a64_TBL(ZEXT816(0),auVar17,0xff05ff05ff01ff01);
      param_1 = puVar7 + 2;
      puVar7[1] = CONCAT17(cVar14 - (char)((ulong)uVar15 >> 0x38),
                           CONCAT16(cVar13 - (char)((ulong)uVar15 >> 0x30),
                                    CONCAT15(cVar12 - (char)((ulong)uVar15 >> 0x28),
                                             CONCAT14(cVar11 - (char)((ulong)uVar15 >> 0x20),
                                                      CONCAT13(cVar10 - (char)((ulong)uVar15 >> 0x18
                                                                              ),
                                                               CONCAT12(cVar9 - (char)((ulong)uVar15
                                                                                      >> 0x10),
                                                                        CONCAT11(cVar8 - (char)((
                                                  ulong)uVar15 >> 8),(char)uVar4 - (char)uVar15)))))
                                   ));
      *puVar7 = CONCAT17((char)(uVar3 >> 0x38) - (char)((ulong)uVar6 >> 0x38),
                         CONCAT16((char)(uVar3 >> 0x30) - (char)((ulong)uVar6 >> 0x30),
                                  CONCAT15((char)(uVar3 >> 0x28) - (char)((ulong)uVar6 >> 0x28),
                                           CONCAT14((char)(uVar3 >> 0x20) -
                                                    (char)((ulong)uVar6 >> 0x20),
                                                    CONCAT13((char)(uVar3 >> 0x18) -
                                                             (char)((ulong)uVar6 >> 0x18),
                                                             CONCAT12((char)(uVar3 >> 0x10) -
                                                                      (char)((ulong)uVar6 >> 0x10),
                                                                      CONCAT11((char)(uVar3 >> 8) -
                                                                               (char)((ulong)uVar6
                                                                                     >> 8),
                                                                               (char)uVar3 -
                                                                               (char)uVar6)))))));
      puVar7 = param_1;
    } while (param_1 < puVar1);
  }
  FUN_1010c4ebc(param_1,param_2 & 3);
  return;
}




void FUN_1010c6658(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulong *puVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (0 < (int)(param_2 & 0xfffffffc)) {
    puVar1 = (ulong *)((long)param_1 + (long)(int)(param_2 & 0xfffffffc) * 4);
    puVar7 = param_1;
    do {
      uVar4 = puVar7[1];
      cVar8 = (char)(uVar4 >> 8);
      cVar9 = (char)(uVar4 >> 0x10);
      cVar10 = (char)(uVar4 >> 0x18);
      cVar11 = (char)(uVar4 >> 0x20);
      cVar12 = (char)(uVar4 >> 0x28);
      cVar13 = (char)(uVar4 >> 0x30);
      cVar14 = (char)(uVar4 >> 0x38);
      uVar3 = *puVar7;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar3;
      uVar6 = a64_TBL(ZEXT816(0),auVar5,0xff05ff05ff01ff01);
      auVar16[9] = cVar8;
      auVar16._0_9_ = *(unkbyte9 *)puVar7;
      auVar16[10] = cVar9;
      auVar16[0xb] = cVar10;
      auVar16[0xc] = cVar11;
      auVar16[0xd] = cVar12;
      auVar16[0xe] = cVar13;
      auVar16[0xf] = cVar14;
      auVar2[9] = cVar8;
      auVar2._0_9_ = *(unkbyte9 *)puVar7;
      auVar2[10] = cVar9;
      auVar2[0xb] = cVar10;
      auVar2[0xc] = cVar11;
      auVar2[0xd] = cVar12;
      auVar2[0xe] = cVar13;
      auVar2[0xf] = cVar14;
      auVar16 = NEON_ext(auVar16,auVar2,8,1);
      auVar17._0_8_ = auVar16._0_8_;
      auVar17._8_8_ = 0;
      uVar15 = a64_TBL(ZEXT816(0),auVar17,0xff05ff05ff01ff01);
      param_1 = puVar7 + 2;
      puVar7[1] = CONCAT17((char)((ulong)uVar15 >> 0x38) + cVar14,
                           CONCAT16((char)((ulong)uVar15 >> 0x30) + cVar13,
                                    CONCAT15((char)((ulong)uVar15 >> 0x28) + cVar12,
                                             CONCAT14((char)((ulong)uVar15 >> 0x20) + cVar11,
                                                      CONCAT13((char)((ulong)uVar15 >> 0x18) +
                                                               cVar10,CONCAT12((char)((ulong)uVar15
                                                                                     >> 0x10) +
                                                                               cVar9,CONCAT11((char)
                                                  ((ulong)uVar15 >> 8) + cVar8,
                                                  (char)uVar15 + (char)uVar4)))))));
      *puVar7 = CONCAT17((char)((ulong)uVar6 >> 0x38) + (char)(uVar3 >> 0x38),
                         CONCAT16((char)((ulong)uVar6 >> 0x30) + (char)(uVar3 >> 0x30),
                                  CONCAT15((char)((ulong)uVar6 >> 0x28) + (char)(uVar3 >> 0x28),
                                           CONCAT14((char)((ulong)uVar6 >> 0x20) +
                                                    (char)(uVar3 >> 0x20),
                                                    CONCAT13((char)((ulong)uVar6 >> 0x18) +
                                                             (char)(uVar3 >> 0x18),
                                                             CONCAT12((char)((ulong)uVar6 >> 0x10) +
                                                                      (char)(uVar3 >> 0x10),
                                                                      CONCAT11((char)((ulong)uVar6
                                                                                     >> 8) +
                                                                               (char)(uVar3 >> 8),
                                                                               (char)uVar6 +
                                                                               (char)uVar3)))))));
      puVar7 = param_1;
    } while (param_1 < puVar1);
  }
  FUN_1010c4ef8(param_1,param_2 & 3);
  return;
}




void FUN_1010c66ac(void)

{
  int iVar1;
  
  if (PTR_LOOP_1018735e0 != PTR_FUN_1018735c8) {
    DAT_101dc1e88 = FUN_1010c6e28;
    DAT_101dc1e90 = FUN_1010c74bc;
    DAT_101dc1e98 = FUN_1010c7b68;
    DAT_101dc1ea0 = FUN_1010c8204;
    DAT_101dc1ea8 = FUN_1010c88b8;
    DAT_101dc1eb0 = FUN_1010c8f64;
    DAT_101dc1eb8 = FUN_1010c962c;
    DAT_101dc1ec0 = FUN_1010c74bc;
    DAT_101dc1ec8 = FUN_1010c8204;
    DAT_101dc1ed0 = FUN_1010c88b8;
    DAT_101dc1ed8 = FUN_1010c8f64;
    if ((PTR_FUN_1018735c8 != (undefined *)0x0) &&
       (iVar1 = (*(code *)PTR_FUN_1018735c8)(4), iVar1 != 0)) {
      FUN_1010c9d34();
    }
    PTR_LOOP_1018735e0 = PTR_FUN_1018735c8;
  }
  return;
}




void FUN_1010c6754(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  if (0 < (int)param_5) {
    uVar9 = (ulong)param_5;
    puVar10 = (undefined1 *)(param_4 + 2);
    do {
      bVar4 = *param_2;
      bVar5 = *param_3;
      iVar8 = (uint)*param_1 * 0x4a85;
      uVar6 = iVar8 + (uint)bVar5 * 0x6625;
      uVar1 = uVar6 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-2] = uVar3;
      iVar7 = iVar8 + (uint)bVar4 * -0x1913 + (uint)bVar5 * -0x3408;
      uVar1 = iVar7 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar7) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-1] = uVar3;
      uVar6 = iVar8 + (uint)bVar4 * 0x811a;
      uVar1 = uVar6 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      *puVar10 = uVar3;
      uVar9 = uVar9 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar10 = puVar10 + 3;
    } while (uVar9 != 0);
  }
  return;
}




void FUN_1010c6844(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  if (0 < (int)param_5) {
    uVar9 = (ulong)param_5;
    puVar10 = (undefined1 *)(param_4 + 3);
    do {
      bVar4 = *param_2;
      bVar5 = *param_3;
      iVar8 = (uint)*param_1 * 0x4a85;
      uVar6 = iVar8 + (uint)bVar5 * 0x6625;
      uVar1 = uVar6 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-3] = uVar3;
      iVar7 = iVar8 + (uint)bVar4 * -0x1913 + (uint)bVar5 * -0x3408;
      uVar1 = iVar7 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar7) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-2] = uVar3;
      uVar6 = iVar8 + (uint)bVar4 * 0x811a;
      uVar1 = uVar6 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-1] = uVar3;
      *puVar10 = 0xff;
      uVar9 = uVar9 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar10 = puVar10 + 4;
    } while (uVar9 != 0);
  }
  return;
}




void FUN_1010c6938(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  if (0 < (int)param_5) {
    uVar9 = (ulong)param_5;
    puVar10 = (undefined1 *)(param_4 + 2);
    do {
      bVar4 = *param_2;
      bVar5 = *param_3;
      iVar8 = (uint)*param_1 * 0x4a85;
      uVar6 = iVar8 + (uint)bVar4 * 0x811a;
      uVar1 = uVar6 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-2] = uVar3;
      iVar7 = iVar8 + (uint)bVar4 * -0x1913 + (uint)bVar5 * -0x3408;
      uVar1 = iVar7 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar7) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-1] = uVar3;
      uVar6 = iVar8 + (uint)bVar5 * 0x6625;
      uVar1 = uVar6 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      *puVar10 = uVar3;
      uVar9 = uVar9 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar10 = puVar10 + 3;
    } while (uVar9 != 0);
  }
  return;
}




void FUN_1010c6a28(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  if (0 < (int)param_5) {
    uVar9 = (ulong)param_5;
    puVar10 = (undefined1 *)(param_4 + 3);
    do {
      bVar4 = *param_2;
      bVar5 = *param_3;
      iVar8 = (uint)*param_1 * 0x4a85;
      uVar6 = iVar8 + (uint)bVar4 * 0x811a;
      uVar1 = uVar6 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-3] = uVar3;
      iVar7 = iVar8 + (uint)bVar4 * -0x1913 + (uint)bVar5 * -0x3408;
      uVar1 = iVar7 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar7) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-2] = uVar3;
      uVar6 = iVar8 + (uint)bVar5 * 0x6625;
      uVar1 = uVar6 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar10[-1] = uVar3;
      *puVar10 = 0xff;
      uVar9 = uVar9 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar10 = puVar10 + 4;
    } while (uVar9 != 0);
  }
  return;
}




void FUN_1010c6b1c(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  
  if (0 < (int)param_5) {
    uVar10 = (ulong)param_5;
    puVar11 = (undefined1 *)(param_4 + 3);
    do {
      bVar4 = *param_1;
      bVar5 = *param_2;
      bVar6 = *param_3;
      puVar11[-3] = 0xff;
      iVar9 = (uint)bVar4 * 0x4a85;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar1 = uVar7 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar7) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar11[-2] = uVar3;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar1 = iVar8 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar8) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      puVar11[-1] = uVar3;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar1 = uVar7 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar7) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      *puVar11 = uVar3;
      uVar10 = uVar10 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar11 = puVar11 + 4;
    } while (uVar10 != 0);
  }
  return;
}




void FUN_1010c6c10(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  
  if (0 < (int)param_5) {
    uVar8 = (ulong)param_5;
    pbVar9 = (byte *)(param_4 + 1);
    do {
      iVar7 = (uint)*param_1 * 0x4a85;
      uVar5 = iVar7 + (uint)*param_3 * 0x6625;
      uVar1 = uVar5 - 0x379ad0;
      bVar10 = 0;
      if (0x379acf < uVar5) {
        bVar10 = 0xf0;
      }
      bVar2 = (byte)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        bVar2 = bVar10;
      }
      iVar6 = iVar7 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408;
      uVar1 = iVar6 + 0x220530;
      bVar10 = 0;
      if (-0x220531 < iVar6) {
        bVar10 = 0xf;
      }
      bVar3 = (byte)(uVar1 >> 0x12);
      if (0x3fffff < uVar1) {
        bVar3 = bVar10;
      }
      uVar5 = iVar7 + (uint)*param_2 * 0x811a;
      uVar1 = uVar5 - 0x451550;
      bVar10 = 0;
      if (0x45154f < uVar5) {
        bVar10 = 0xf0;
      }
      bVar4 = (byte)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        bVar4 = bVar10;
      }
      pbVar9[-1] = bVar4 | 0xf;
      *pbVar9 = bVar2 & 0xf0 | bVar3;
      uVar8 = uVar8 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pbVar9 = pbVar9 + 2;
    } while (uVar8 != 0);
  }
  return;
}




void FUN_1010c6d18(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  
  if (0 < (int)param_5) {
    uVar8 = (ulong)param_5;
    pbVar9 = (byte *)(param_4 + 1);
    do {
      iVar6 = (uint)*param_1 * 0x4a85;
      uVar7 = iVar6 + (uint)*param_3 * 0x6625;
      uVar1 = uVar7 - 0x379ad0;
      bVar10 = 0;
      if (0x379acf < uVar7) {
        bVar10 = 0xf8;
      }
      bVar2 = (byte)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        bVar2 = bVar10;
      }
      iVar5 = iVar6 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408;
      uVar1 = iVar5 + 0x220530;
      uVar7 = 0;
      if (-0x220531 < iVar5) {
        uVar7 = 0xff;
      }
      uVar4 = (int)uVar1 >> 0xe;
      if (0x3fffff < uVar1) {
        uVar4 = uVar7;
      }
      uVar7 = iVar6 + (uint)*param_2 * 0x811a;
      uVar1 = uVar7 - 0x451550;
      bVar10 = 0;
      if (0x45154f < uVar7) {
        bVar10 = 0x1f;
      }
      bVar3 = (byte)(uVar1 >> 0x11);
      if (0x3fffff < uVar1) {
        bVar3 = bVar10;
      }
      pbVar9[-1] = (byte)((uVar4 & 0x1c) << 3) | bVar3;
      *pbVar9 = bVar2 & 0xf8 | (byte)(uVar4 >> 5);
      uVar8 = uVar8 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pbVar9 = pbVar9 + 2;
    } while (uVar8 != 0);
  }
  return;
}




void FUN_1010c6e28(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  
  uVar19 = (long)param_9 - 1;
  uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar15 = uVar12 * 3 + uVar13 + 0x20002;
  uVar9 = uVar15 >> 2 & 0xff;
  uVar15 = uVar15 >> 0x12;
  iVar8 = (uint)*param_1 * 0x4a85;
  uVar5 = iVar8 + uVar15 * 0x6625;
  uVar16 = uVar5 - 0x379ad0;
  uVar14 = 0xff;
  uVar2 = 0;
  if (0x379acf < uVar5) {
    uVar2 = 0xff;
  }
  uVar3 = (char)(uVar16 >> 0xe);
  if (0x3fffff < uVar16) {
    uVar3 = uVar2;
  }
  *param_7 = uVar3;
  iVar6 = iVar8 + uVar15 * -0x3408 + uVar9 * -0x1913;
  uVar15 = iVar6 + 0x220530;
  uVar2 = 0;
  if (-0x220531 < iVar6) {
    uVar2 = uVar14;
  }
  uVar3 = (char)(uVar15 >> 0xe);
  if (0x3fffff < uVar15) {
    uVar3 = uVar2;
  }
  param_7[1] = uVar3;
  uVar16 = iVar8 + uVar9 * 0x811a;
  uVar15 = uVar16 - 0x451550;
  uVar2 = 0;
  if (0x45154f < uVar16) {
    uVar2 = uVar14;
  }
  uVar3 = (char)(uVar15 >> 0xe);
  if (0x3fffff < uVar15) {
    uVar3 = uVar2;
  }
  param_7[2] = uVar3;
  if (param_2 != (byte *)0x0) {
    uVar15 = uVar12 + 0x20002 + uVar13 * 3;
    uVar9 = uVar15 >> 2 & 0xff;
    uVar15 = uVar15 >> 0x12;
    iVar8 = (uint)*param_2 * 0x4a85;
    uVar5 = iVar8 + uVar15 * 0x6625;
    uVar16 = uVar5 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar5) {
      uVar2 = uVar14;
    }
    uVar14 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar14 = uVar2;
    }
    *param_8 = uVar14;
    iVar6 = uVar15 * -0x3408 + uVar9 * -0x1913 + iVar8;
    uVar15 = iVar6 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar6) {
      uVar2 = 0xff;
    }
    uVar14 = (char)(uVar15 >> 0xe);
    if (0x3fffff < uVar15) {
      uVar14 = uVar2;
    }
    param_8[1] = uVar14;
    uVar16 = iVar8 + uVar9 * 0x811a;
    uVar15 = uVar16 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar16) {
      uVar2 = 0xff;
    }
    uVar14 = (char)(uVar15 >> 0xe);
    if (0x3fffff < uVar15) {
      uVar14 = uVar2;
    }
    param_8[2] = uVar14;
  }
  if (2 < param_9) {
    iVar8 = (int)uVar19 >> 1;
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    lVar17 = (ulong)(iVar8 + 1) - 1;
    puVar18 = param_8 + 4;
    puVar20 = param_7 + 4;
    uVar15 = uVar12;
    uVar16 = uVar13;
    pbVar10 = param_1;
    pbVar11 = param_2;
    do {
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar8 = uVar12 + uVar16 + uVar15 + uVar13 + 0x80008;
      uVar5 = iVar8 + (uVar12 + uVar16) * 2;
      uVar9 = iVar8 + (uVar13 + uVar15) * 2;
      uVar15 = uVar15 + (uVar5 >> 3);
      uVar4 = uVar15 >> 0x11;
      iVar8 = (uint)pbVar10[1] * 0x4a85;
      uVar7 = iVar8 + uVar4 * 0x6625;
      uVar1 = uVar7 - 0x379ad0;
      uVar14 = 0xff;
      uVar2 = 0;
      if (0x379acf < uVar7) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      uVar1 = uVar12 + (uVar9 >> 3);
      uVar7 = uVar15 >> 1 & 0xff;
      puVar20[-1] = uVar3;
      iVar6 = iVar8 + uVar4 * -0x3408 + uVar7 * -0x1913;
      uVar15 = iVar6 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar6) {
        uVar2 = uVar14;
      }
      uVar3 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar3 = uVar2;
      }
      *puVar20 = uVar3;
      uVar4 = iVar8 + uVar7 * 0x811a;
      uVar15 = uVar4 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar4) {
        uVar2 = uVar14;
      }
      uVar3 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar3 = uVar2;
      }
      puVar20[1] = uVar3;
      uVar4 = uVar1 >> 0x11;
      iVar8 = (uint)pbVar10[2] * 0x4a85;
      uVar7 = iVar8 + uVar4 * 0x6625;
      uVar15 = uVar7 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar7) {
        uVar2 = uVar14;
      }
      uVar14 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar14 = uVar2;
      }
      uVar1 = uVar1 >> 1 & 0xff;
      puVar20[2] = uVar14;
      iVar6 = iVar8 + uVar4 * -0x3408 + uVar1 * -0x1913;
      uVar15 = iVar6 + 0x220530;
      uVar14 = 0xff;
      uVar2 = 0;
      if (-0x220531 < iVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar3 = uVar2;
      }
      puVar20[3] = uVar3;
      uVar1 = iVar8 + uVar1 * 0x811a;
      uVar15 = uVar1 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar1) {
        uVar2 = uVar14;
      }
      uVar3 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar3 = uVar2;
      }
      puVar20[4] = uVar3;
      if (param_2 != (byte *)0x0) {
        uVar16 = (uVar9 >> 3) + uVar16;
        uVar15 = (uVar5 >> 3) + uVar13;
        uVar1 = uVar16 >> 1 & 0xff;
        uVar16 = uVar16 >> 0x11;
        iVar8 = (uint)pbVar11[1] * 0x4a85;
        uVar9 = iVar8 + uVar16 * 0x6625;
        uVar5 = uVar9 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar9) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar5 >> 0xe);
        if (0x3fffff < uVar5) {
          uVar3 = uVar2;
        }
        puVar18[-1] = uVar3;
        iVar6 = uVar16 * -0x3408 + uVar1 * -0x1913 + iVar8;
        uVar16 = iVar6 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar6) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        *puVar18 = uVar3;
        uVar5 = iVar8 + uVar1 * 0x811a;
        uVar16 = uVar5 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar5) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        puVar18[1] = uVar3;
        uVar9 = uVar15 >> 1 & 0xff;
        uVar15 = uVar15 >> 0x11;
        iVar8 = (uint)pbVar11[2] * 0x4a85;
        uVar5 = iVar8 + uVar15 * 0x6625;
        uVar16 = uVar5 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar5) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        puVar18[2] = uVar3;
        iVar6 = uVar15 * -0x3408 + uVar9 * -0x1913 + iVar8;
        uVar15 = iVar6 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar6) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar3 = uVar2;
        }
        puVar18[3] = uVar3;
        uVar16 = iVar8 + uVar9 * 0x811a;
        uVar15 = uVar16 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar16) {
          uVar2 = uVar14;
        }
        uVar14 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar14 = uVar2;
        }
        puVar18[4] = uVar14;
      }
      puVar18 = puVar18 + 6;
      puVar20 = puVar20 + 6;
      lVar17 = lVar17 + -1;
      uVar15 = uVar12;
      uVar16 = uVar13;
      pbVar10 = pbVar10 + 2;
      pbVar11 = pbVar11 + 2;
    } while (lVar17 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar15 = uVar13 + 0x20002 + uVar12 * 3;
    uVar9 = uVar15 >> 2 & 0xff;
    uVar15 = uVar15 >> 0x12;
    lVar17 = (-(uVar19 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar19 & 0xffffffff) << 1) +
             (long)(int)uVar19;
    param_7 = param_7 + lVar17;
    iVar8 = (uint)param_1[uVar19] * 0x4a85;
    uVar5 = iVar8 + uVar15 * 0x6625;
    uVar16 = uVar5 - 0x379ad0;
    uVar14 = 0xff;
    uVar2 = 0;
    if (0x379acf < uVar5) {
      uVar2 = 0xff;
    }
    uVar3 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar3 = uVar2;
    }
    *param_7 = uVar3;
    iVar6 = uVar15 * -0x3408 + uVar9 * -0x1913 + iVar8;
    uVar15 = iVar6 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar6) {
      uVar2 = uVar14;
    }
    uVar3 = (char)(uVar15 >> 0xe);
    if (0x3fffff < uVar15) {
      uVar3 = uVar2;
    }
    param_7[1] = uVar3;
    uVar16 = iVar8 + uVar9 * 0x811a;
    uVar15 = uVar16 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar16) {
      uVar2 = uVar14;
    }
    uVar3 = (char)(uVar15 >> 0xe);
    if (0x3fffff < uVar15) {
      uVar3 = uVar2;
    }
    param_7[2] = uVar3;
    if (param_2 != (byte *)0x0) {
      uVar15 = uVar12 + 0x20002 + uVar13 * 3;
      uVar13 = uVar15 >> 2 & 0xff;
      uVar15 = uVar15 >> 0x12;
      param_8 = param_8 + lVar17;
      iVar8 = (uint)param_2[uVar19] * 0x4a85;
      uVar12 = iVar8 + uVar15 * 0x6625;
      uVar16 = uVar12 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar12) {
        uVar2 = uVar14;
      }
      uVar14 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar14 = uVar2;
      }
      *param_8 = uVar14;
      iVar6 = uVar15 * -0x3408 + uVar13 * -0x1913 + iVar8;
      uVar15 = iVar6 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar6) {
        uVar2 = 0xff;
      }
      uVar14 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar14 = uVar2;
      }
      param_8[1] = uVar14;
      uVar16 = iVar8 + uVar13 * 0x811a;
      uVar15 = uVar16 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar16) {
        uVar2 = 0xff;
      }
      uVar14 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar14 = uVar2;
      }
      param_8[2] = uVar14;
    }
  }
  return;
}




void FUN_1010c74bc(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  
  uVar18 = (long)param_9 - 1;
  uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar14 = uVar12 * 3 + uVar13 + 0x20002;
  uVar7 = uVar14 >> 2 & 0xff;
  uVar8 = uVar14 >> 0x12 & 0xff;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar15 = iVar6 + uVar8 * 0x6625;
  uVar14 = uVar15 - 0x379ad0;
  uVar2 = 0;
  if (0x379acf < uVar15) {
    uVar2 = 0xff;
  }
  uVar20 = (char)(uVar14 >> 0xe);
  if (0x3fffff < uVar14) {
    uVar20 = uVar2;
  }
  *param_7 = uVar20;
  iVar4 = iVar6 + uVar7 * -0x1913 + uVar8 * -0x3408;
  uVar14 = iVar4 + 0x220530;
  uVar2 = 0;
  if (-0x220531 < iVar4) {
    uVar2 = 0xff;
  }
  uVar20 = (char)(uVar14 >> 0xe);
  if (0x3fffff < uVar14) {
    uVar20 = uVar2;
  }
  param_7[1] = uVar20;
  uVar15 = iVar6 + uVar7 * 0x811a;
  uVar14 = uVar15 - 0x451550;
  uVar2 = 0;
  if (0x45154f < uVar15) {
    uVar2 = 0xff;
  }
  uVar20 = (char)(uVar14 >> 0xe);
  if (0x3fffff < uVar14) {
    uVar20 = uVar2;
  }
  param_7[2] = uVar20;
  param_7[3] = 0xff;
  if (param_2 != (byte *)0x0) {
    uVar14 = uVar12 + 0x20002 + uVar13 * 3;
    uVar7 = uVar14 >> 2 & 0xff;
    uVar8 = uVar14 >> 0x12 & 0xff;
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar15 = iVar6 + uVar8 * 0x6625;
    uVar14 = uVar15 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    *param_8 = uVar20;
    iVar4 = uVar7 * -0x1913 + uVar8 * -0x3408 + iVar6;
    uVar14 = iVar4 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar4) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_8[1] = uVar20;
    uVar15 = iVar6 + uVar7 * 0x811a;
    uVar14 = uVar15 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_8[2] = uVar20;
    param_8[3] = 0xff;
  }
  if (2 < param_9) {
    iVar6 = (int)uVar18 >> 1;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    lVar16 = (ulong)(iVar6 + 1) - 1;
    puVar17 = param_8 + 5;
    puVar19 = param_7 + 5;
    uVar14 = uVar12;
    uVar15 = uVar13;
    pbVar10 = param_2;
    pbVar11 = param_1;
    do {
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar6 = uVar12 + uVar15 + uVar14 + uVar13 + 0x80008;
      uVar7 = iVar6 + (uVar12 + uVar15) * 2;
      uVar8 = iVar6 + (uVar13 + uVar14) * 2;
      uVar14 = uVar14 + (uVar7 >> 3);
      uVar9 = uVar14 >> 0x11 & 0xff;
      iVar6 = (uint)pbVar11[1] * 0x4a85;
      uVar5 = iVar6 + uVar9 * 0x6625;
      uVar1 = uVar5 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar5) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar20 = uVar2;
      }
      uVar1 = uVar12 + (uVar8 >> 3);
      uVar5 = uVar14 >> 1 & 0xff;
      puVar19[-1] = uVar20;
      iVar4 = iVar6 + uVar5 * -0x1913 + uVar9 * -0x3408;
      uVar14 = iVar4 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar4) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      *puVar19 = uVar20;
      uVar5 = iVar6 + uVar5 * 0x811a;
      uVar14 = uVar5 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar5) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      puVar19[1] = uVar20;
      puVar19[2] = 0xff;
      uVar9 = uVar1 >> 0x11 & 0xff;
      iVar6 = (uint)pbVar11[2] * 0x4a85;
      uVar5 = iVar6 + uVar9 * 0x6625;
      uVar14 = uVar5 - 0x379ad0;
      uVar20 = 0xff;
      uVar2 = 0;
      if (0x379acf < uVar5) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar3 = uVar2;
      }
      uVar1 = uVar1 >> 1 & 0xff;
      puVar19[3] = uVar3;
      iVar4 = iVar6 + uVar1 * -0x1913 + uVar9 * -0x3408;
      uVar14 = iVar4 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar4) {
        uVar2 = uVar20;
      }
      uVar3 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar3 = uVar2;
      }
      puVar19[4] = uVar3;
      uVar1 = iVar6 + uVar1 * 0x811a;
      uVar14 = uVar1 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar1) {
        uVar2 = uVar20;
      }
      uVar3 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar3 = uVar2;
      }
      puVar19[5] = uVar3;
      puVar19[6] = 0xff;
      if (param_2 != (byte *)0x0) {
        uVar15 = (uVar8 >> 3) + uVar15;
        uVar14 = (uVar7 >> 3) + uVar13;
        uVar8 = uVar15 >> 1 & 0xff;
        uVar1 = uVar15 >> 0x11 & 0xff;
        iVar6 = (uint)pbVar10[1] * 0x4a85;
        uVar7 = iVar6 + uVar1 * 0x6625;
        uVar15 = uVar7 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar7) {
          uVar2 = uVar20;
        }
        uVar3 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar3 = uVar2;
        }
        puVar17[-1] = uVar3;
        iVar4 = uVar8 * -0x1913 + uVar1 * -0x3408 + iVar6;
        uVar15 = iVar4 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar4) {
          uVar2 = uVar20;
        }
        uVar3 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar3 = uVar2;
        }
        *puVar17 = uVar3;
        uVar7 = iVar6 + uVar8 * 0x811a;
        uVar15 = uVar7 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar7) {
          uVar2 = uVar20;
        }
        uVar20 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar20 = uVar2;
        }
        puVar17[1] = uVar20;
        puVar17[2] = 0xff;
        uVar7 = uVar14 >> 1 & 0xff;
        uVar8 = uVar14 >> 0x11 & 0xff;
        iVar6 = (uint)pbVar10[2] * 0x4a85;
        uVar15 = iVar6 + uVar8 * 0x6625;
        uVar14 = uVar15 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar15) {
          uVar2 = 0xff;
        }
        uVar20 = (char)(uVar14 >> 0xe);
        if (0x3fffff < uVar14) {
          uVar20 = uVar2;
        }
        puVar17[3] = uVar20;
        iVar4 = uVar7 * -0x1913 + uVar8 * -0x3408 + iVar6;
        uVar14 = iVar4 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar4) {
          uVar2 = 0xff;
        }
        uVar20 = (char)(uVar14 >> 0xe);
        if (0x3fffff < uVar14) {
          uVar20 = uVar2;
        }
        puVar17[4] = uVar20;
        uVar15 = iVar6 + uVar7 * 0x811a;
        uVar14 = uVar15 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar15) {
          uVar2 = 0xff;
        }
        uVar20 = (char)(uVar14 >> 0xe);
        if (0x3fffff < uVar14) {
          uVar20 = uVar2;
        }
        puVar17[5] = uVar20;
        puVar17[6] = 0xff;
      }
      puVar17 = puVar17 + 8;
      puVar19 = puVar19 + 8;
      lVar16 = lVar16 + -1;
      uVar14 = uVar12;
      uVar15 = uVar13;
      pbVar10 = pbVar10 + 2;
      pbVar11 = pbVar11 + 2;
    } while (lVar16 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar14 = uVar13 + 0x20002 + uVar12 * 3;
    param_7 = param_7 + (long)(int)uVar18 * 4;
    uVar7 = uVar14 >> 2 & 0xff;
    uVar8 = uVar14 >> 0x12 & 0xff;
    iVar6 = (uint)param_1[uVar18] * 0x4a85;
    uVar15 = iVar6 + uVar8 * 0x6625;
    uVar14 = uVar15 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    *param_7 = uVar20;
    iVar4 = uVar7 * -0x1913 + uVar8 * -0x3408 + iVar6;
    uVar14 = iVar4 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar4) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_7[1] = uVar20;
    uVar15 = iVar6 + uVar7 * 0x811a;
    uVar14 = uVar15 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_7[2] = uVar20;
    param_7[3] = 0xff;
    if (param_2 != (byte *)0x0) {
      uVar14 = uVar12 + 0x20002 + uVar13 * 3;
      param_8 = param_8 + (-(uVar18 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar18 & 0xffffffff) << 2);
      uVar13 = uVar14 >> 2 & 0xff;
      uVar15 = uVar14 >> 0x12 & 0xff;
      iVar6 = (uint)param_2[uVar18] * 0x4a85;
      uVar12 = iVar6 + uVar15 * 0x6625;
      uVar14 = uVar12 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar12) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      *param_8 = uVar20;
      iVar4 = uVar13 * -0x1913 + uVar15 * -0x3408 + iVar6;
      uVar14 = iVar4 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar4) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      param_8[1] = uVar20;
      uVar12 = iVar6 + uVar13 * 0x811a;
      uVar14 = uVar12 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar12) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      param_8[2] = uVar20;
      param_8[3] = 0xff;
    }
  }
  return;
}




void FUN_1010c7b68(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  
  uVar19 = (long)param_9 - 1;
  uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar15 = uVar12 * 3 + uVar13 + 0x20002;
  uVar8 = uVar15 >> 2 & 0xff;
  uVar15 = uVar15 >> 0x12;
  iVar7 = (uint)*param_1 * 0x4a85;
  uVar4 = iVar7 + uVar8 * 0x811a;
  uVar16 = uVar4 - 0x451550;
  uVar14 = 0xff;
  uVar2 = 0;
  if (0x45154f < uVar4) {
    uVar2 = 0xff;
  }
  uVar3 = (char)(uVar16 >> 0xe);
  if (0x3fffff < uVar16) {
    uVar3 = uVar2;
  }
  *param_7 = uVar3;
  iVar5 = iVar7 + uVar15 * -0x3408 + uVar8 * -0x1913;
  uVar16 = iVar5 + 0x220530;
  uVar2 = 0;
  if (-0x220531 < iVar5) {
    uVar2 = uVar14;
  }
  uVar3 = (char)(uVar16 >> 0xe);
  if (0x3fffff < uVar16) {
    uVar3 = uVar2;
  }
  param_7[1] = uVar3;
  uVar16 = iVar7 + uVar15 * 0x6625;
  uVar15 = uVar16 - 0x379ad0;
  uVar2 = 0;
  if (0x379acf < uVar16) {
    uVar2 = uVar14;
  }
  uVar3 = (char)(uVar15 >> 0xe);
  if (0x3fffff < uVar15) {
    uVar3 = uVar2;
  }
  param_7[2] = uVar3;
  if (param_2 != (byte *)0x0) {
    uVar15 = uVar12 + 0x20002 + uVar13 * 3;
    uVar8 = uVar15 >> 2 & 0xff;
    uVar15 = uVar15 >> 0x12;
    iVar7 = (uint)*param_2 * 0x4a85;
    uVar4 = iVar7 + uVar8 * 0x811a;
    uVar16 = uVar4 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar4) {
      uVar2 = uVar14;
    }
    uVar14 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar14 = uVar2;
    }
    *param_8 = uVar14;
    iVar5 = uVar15 * -0x3408 + uVar8 * -0x1913 + iVar7;
    uVar16 = iVar5 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar5) {
      uVar2 = 0xff;
    }
    uVar14 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar14 = uVar2;
    }
    param_8[1] = uVar14;
    uVar16 = iVar7 + uVar15 * 0x6625;
    uVar15 = uVar16 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar16) {
      uVar2 = 0xff;
    }
    uVar14 = (char)(uVar15 >> 0xe);
    if (0x3fffff < uVar15) {
      uVar14 = uVar2;
    }
    param_8[2] = uVar14;
  }
  if (2 < param_9) {
    iVar7 = (int)uVar19 >> 1;
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    lVar17 = (ulong)(iVar7 + 1) - 1;
    puVar18 = param_8 + 4;
    puVar20 = param_7 + 4;
    uVar15 = uVar12;
    uVar16 = uVar13;
    pbVar10 = param_1;
    pbVar11 = param_2;
    do {
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar7 = uVar12 + uVar16 + uVar15 + uVar13 + 0x80008;
      uVar4 = iVar7 + (uVar12 + uVar16) * 2;
      uVar8 = iVar7 + (uVar13 + uVar15) * 2;
      uVar15 = uVar15 + (uVar4 >> 3);
      uVar9 = uVar15 >> 1 & 0xff;
      iVar7 = (uint)pbVar10[1] * 0x4a85;
      uVar6 = iVar7 + uVar9 * 0x811a;
      uVar1 = uVar6 - 0x451550;
      uVar14 = 0xff;
      uVar2 = 0;
      if (0x45154f < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar3 = uVar2;
      }
      uVar1 = uVar12 + (uVar8 >> 3);
      uVar15 = uVar15 >> 0x11;
      puVar20[-1] = uVar3;
      iVar5 = iVar7 + uVar15 * -0x3408 + uVar9 * -0x1913;
      uVar6 = iVar5 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar5) {
        uVar2 = uVar14;
      }
      uVar3 = (char)(uVar6 >> 0xe);
      if (0x3fffff < uVar6) {
        uVar3 = uVar2;
      }
      *puVar20 = uVar3;
      uVar6 = iVar7 + uVar15 * 0x6625;
      uVar15 = uVar6 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar6) {
        uVar2 = uVar14;
      }
      uVar3 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar3 = uVar2;
      }
      puVar20[1] = uVar3;
      uVar9 = uVar1 >> 1 & 0xff;
      iVar7 = (uint)pbVar10[2] * 0x4a85;
      uVar6 = iVar7 + uVar9 * 0x811a;
      uVar15 = uVar6 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar6) {
        uVar2 = uVar14;
      }
      uVar14 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar14 = uVar2;
      }
      uVar1 = uVar1 >> 0x11;
      puVar20[2] = uVar14;
      iVar5 = iVar7 + uVar1 * -0x3408 + uVar9 * -0x1913;
      uVar15 = iVar5 + 0x220530;
      uVar14 = 0xff;
      uVar2 = 0;
      if (-0x220531 < iVar5) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar3 = uVar2;
      }
      puVar20[3] = uVar3;
      uVar1 = iVar7 + uVar1 * 0x6625;
      uVar15 = uVar1 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar1) {
        uVar2 = uVar14;
      }
      uVar3 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar3 = uVar2;
      }
      puVar20[4] = uVar3;
      if (param_2 != (byte *)0x0) {
        uVar16 = (uVar8 >> 3) + uVar16;
        uVar15 = (uVar4 >> 3) + uVar13;
        uVar1 = uVar16 >> 1 & 0xff;
        uVar16 = uVar16 >> 0x11;
        iVar7 = (uint)pbVar11[1] * 0x4a85;
        uVar8 = iVar7 + uVar1 * 0x811a;
        uVar4 = uVar8 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar8) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar4 >> 0xe);
        if (0x3fffff < uVar4) {
          uVar3 = uVar2;
        }
        puVar18[-1] = uVar3;
        iVar5 = uVar16 * -0x3408 + uVar1 * -0x1913 + iVar7;
        uVar4 = iVar5 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar5) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar4 >> 0xe);
        if (0x3fffff < uVar4) {
          uVar3 = uVar2;
        }
        *puVar18 = uVar3;
        uVar4 = iVar7 + uVar16 * 0x6625;
        uVar16 = uVar4 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar4) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        puVar18[1] = uVar3;
        uVar8 = uVar15 >> 1 & 0xff;
        uVar15 = uVar15 >> 0x11;
        iVar7 = (uint)pbVar11[2] * 0x4a85;
        uVar4 = iVar7 + uVar8 * 0x811a;
        uVar16 = uVar4 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar4) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        puVar18[2] = uVar3;
        iVar5 = uVar15 * -0x3408 + uVar8 * -0x1913 + iVar7;
        uVar16 = iVar5 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar5) {
          uVar2 = uVar14;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        puVar18[3] = uVar3;
        uVar16 = iVar7 + uVar15 * 0x6625;
        uVar15 = uVar16 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar16) {
          uVar2 = uVar14;
        }
        uVar14 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar14 = uVar2;
        }
        puVar18[4] = uVar14;
      }
      puVar18 = puVar18 + 6;
      puVar20 = puVar20 + 6;
      lVar17 = lVar17 + -1;
      uVar15 = uVar12;
      uVar16 = uVar13;
      pbVar10 = pbVar10 + 2;
      pbVar11 = pbVar11 + 2;
    } while (lVar17 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar15 = uVar13 + 0x20002 + uVar12 * 3;
    uVar8 = uVar15 >> 2 & 0xff;
    uVar15 = uVar15 >> 0x12;
    lVar17 = (-(uVar19 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar19 & 0xffffffff) << 1) +
             (long)(int)uVar19;
    param_7 = param_7 + lVar17;
    iVar7 = (uint)param_1[uVar19] * 0x4a85;
    uVar4 = iVar7 + uVar8 * 0x811a;
    uVar16 = uVar4 - 0x451550;
    uVar14 = 0xff;
    uVar2 = 0;
    if (0x45154f < uVar4) {
      uVar2 = 0xff;
    }
    uVar3 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar3 = uVar2;
    }
    *param_7 = uVar3;
    iVar5 = uVar15 * -0x3408 + uVar8 * -0x1913 + iVar7;
    uVar16 = iVar5 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar5) {
      uVar2 = uVar14;
    }
    uVar3 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar3 = uVar2;
    }
    param_7[1] = uVar3;
    uVar16 = iVar7 + uVar15 * 0x6625;
    uVar15 = uVar16 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar16) {
      uVar2 = uVar14;
    }
    uVar3 = (char)(uVar15 >> 0xe);
    if (0x3fffff < uVar15) {
      uVar3 = uVar2;
    }
    param_7[2] = uVar3;
    if (param_2 != (byte *)0x0) {
      uVar15 = uVar12 + 0x20002 + uVar13 * 3;
      uVar13 = uVar15 >> 2 & 0xff;
      uVar15 = uVar15 >> 0x12;
      param_8 = param_8 + lVar17;
      iVar7 = (uint)param_2[uVar19] * 0x4a85;
      uVar12 = iVar7 + uVar13 * 0x811a;
      uVar16 = uVar12 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar12) {
        uVar2 = uVar14;
      }
      uVar14 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar14 = uVar2;
      }
      *param_8 = uVar14;
      iVar5 = uVar15 * -0x3408 + uVar13 * -0x1913 + iVar7;
      uVar16 = iVar5 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar5) {
        uVar2 = 0xff;
      }
      uVar14 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar14 = uVar2;
      }
      param_8[1] = uVar14;
      uVar16 = iVar7 + uVar15 * 0x6625;
      uVar15 = uVar16 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar16) {
        uVar2 = 0xff;
      }
      uVar14 = (char)(uVar15 >> 0xe);
      if (0x3fffff < uVar15) {
        uVar14 = uVar2;
      }
      param_8[2] = uVar14;
    }
  }
  return;
}




void FUN_1010c8204(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  
  uVar18 = (long)param_9 - 1;
  uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar14 = uVar12 * 3 + uVar13 + 0x20002;
  uVar7 = uVar14 >> 2 & 0xff;
  uVar8 = uVar14 >> 0x12 & 0xff;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar15 = iVar6 + uVar7 * 0x811a;
  uVar14 = uVar15 - 0x451550;
  uVar2 = 0;
  if (0x45154f < uVar15) {
    uVar2 = 0xff;
  }
  uVar20 = (char)(uVar14 >> 0xe);
  if (0x3fffff < uVar14) {
    uVar20 = uVar2;
  }
  *param_7 = uVar20;
  iVar4 = iVar6 + uVar7 * -0x1913 + uVar8 * -0x3408;
  uVar14 = iVar4 + 0x220530;
  uVar2 = 0;
  if (-0x220531 < iVar4) {
    uVar2 = 0xff;
  }
  uVar20 = (char)(uVar14 >> 0xe);
  if (0x3fffff < uVar14) {
    uVar20 = uVar2;
  }
  param_7[1] = uVar20;
  uVar15 = iVar6 + uVar8 * 0x6625;
  uVar14 = uVar15 - 0x379ad0;
  uVar2 = 0;
  if (0x379acf < uVar15) {
    uVar2 = 0xff;
  }
  uVar20 = (char)(uVar14 >> 0xe);
  if (0x3fffff < uVar14) {
    uVar20 = uVar2;
  }
  param_7[2] = uVar20;
  param_7[3] = 0xff;
  if (param_2 != (byte *)0x0) {
    uVar14 = uVar12 + 0x20002 + uVar13 * 3;
    uVar7 = uVar14 >> 2 & 0xff;
    uVar8 = uVar14 >> 0x12 & 0xff;
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar15 = iVar6 + uVar7 * 0x811a;
    uVar14 = uVar15 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    *param_8 = uVar20;
    iVar4 = uVar7 * -0x1913 + uVar8 * -0x3408 + iVar6;
    uVar14 = iVar4 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar4) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_8[1] = uVar20;
    uVar15 = iVar6 + uVar8 * 0x6625;
    uVar14 = uVar15 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_8[2] = uVar20;
    param_8[3] = 0xff;
  }
  if (2 < param_9) {
    iVar6 = (int)uVar18 >> 1;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    lVar16 = (ulong)(iVar6 + 1) - 1;
    puVar17 = param_8 + 5;
    puVar19 = param_7 + 5;
    uVar14 = uVar12;
    uVar15 = uVar13;
    pbVar10 = param_2;
    pbVar11 = param_1;
    do {
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      uVar12 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar13 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar6 = uVar12 + uVar15 + uVar14 + uVar13 + 0x80008;
      uVar7 = iVar6 + (uVar12 + uVar15) * 2;
      uVar8 = iVar6 + (uVar13 + uVar14) * 2;
      uVar14 = uVar14 + (uVar7 >> 3);
      uVar9 = uVar14 >> 1 & 0xff;
      iVar6 = (uint)pbVar11[1] * 0x4a85;
      uVar5 = iVar6 + uVar9 * 0x811a;
      uVar1 = uVar5 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar5) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar20 = uVar2;
      }
      uVar1 = uVar12 + (uVar8 >> 3);
      uVar5 = uVar14 >> 0x11 & 0xff;
      puVar19[-1] = uVar20;
      iVar4 = iVar6 + uVar9 * -0x1913 + uVar5 * -0x3408;
      uVar14 = iVar4 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar4) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      *puVar19 = uVar20;
      uVar5 = iVar6 + uVar5 * 0x6625;
      uVar14 = uVar5 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar5) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      puVar19[1] = uVar20;
      puVar19[2] = 0xff;
      uVar9 = uVar1 >> 1 & 0xff;
      iVar6 = (uint)pbVar11[2] * 0x4a85;
      uVar5 = iVar6 + uVar9 * 0x811a;
      uVar14 = uVar5 - 0x451550;
      uVar20 = 0xff;
      uVar2 = 0;
      if (0x45154f < uVar5) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar3 = uVar2;
      }
      uVar1 = uVar1 >> 0x11 & 0xff;
      puVar19[3] = uVar3;
      iVar4 = iVar6 + uVar9 * -0x1913 + uVar1 * -0x3408;
      uVar14 = iVar4 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar4) {
        uVar2 = uVar20;
      }
      uVar3 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar3 = uVar2;
      }
      puVar19[4] = uVar3;
      uVar1 = iVar6 + uVar1 * 0x6625;
      uVar14 = uVar1 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar1) {
        uVar2 = uVar20;
      }
      uVar3 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar3 = uVar2;
      }
      puVar19[5] = uVar3;
      puVar19[6] = 0xff;
      if (param_2 != (byte *)0x0) {
        uVar15 = (uVar8 >> 3) + uVar15;
        uVar14 = (uVar7 >> 3) + uVar13;
        uVar8 = uVar15 >> 1 & 0xff;
        uVar1 = uVar15 >> 0x11 & 0xff;
        iVar6 = (uint)pbVar10[1] * 0x4a85;
        uVar7 = iVar6 + uVar8 * 0x811a;
        uVar15 = uVar7 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar7) {
          uVar2 = uVar20;
        }
        uVar3 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar3 = uVar2;
        }
        puVar17[-1] = uVar3;
        iVar4 = uVar8 * -0x1913 + uVar1 * -0x3408 + iVar6;
        uVar15 = iVar4 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar4) {
          uVar2 = uVar20;
        }
        uVar3 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar3 = uVar2;
        }
        *puVar17 = uVar3;
        uVar7 = iVar6 + uVar1 * 0x6625;
        uVar15 = uVar7 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar7) {
          uVar2 = uVar20;
        }
        uVar20 = (char)(uVar15 >> 0xe);
        if (0x3fffff < uVar15) {
          uVar20 = uVar2;
        }
        puVar17[1] = uVar20;
        puVar17[2] = 0xff;
        uVar7 = uVar14 >> 1 & 0xff;
        uVar8 = uVar14 >> 0x11 & 0xff;
        iVar6 = (uint)pbVar10[2] * 0x4a85;
        uVar15 = iVar6 + uVar7 * 0x811a;
        uVar14 = uVar15 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar15) {
          uVar2 = 0xff;
        }
        uVar20 = (char)(uVar14 >> 0xe);
        if (0x3fffff < uVar14) {
          uVar20 = uVar2;
        }
        puVar17[3] = uVar20;
        iVar4 = uVar7 * -0x1913 + uVar8 * -0x3408 + iVar6;
        uVar14 = iVar4 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar4) {
          uVar2 = 0xff;
        }
        uVar20 = (char)(uVar14 >> 0xe);
        if (0x3fffff < uVar14) {
          uVar20 = uVar2;
        }
        puVar17[4] = uVar20;
        uVar15 = iVar6 + uVar8 * 0x6625;
        uVar14 = uVar15 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar15) {
          uVar2 = 0xff;
        }
        uVar20 = (char)(uVar14 >> 0xe);
        if (0x3fffff < uVar14) {
          uVar20 = uVar2;
        }
        puVar17[5] = uVar20;
        puVar17[6] = 0xff;
      }
      puVar17 = puVar17 + 8;
      puVar19 = puVar19 + 8;
      lVar16 = lVar16 + -1;
      uVar14 = uVar12;
      uVar15 = uVar13;
      pbVar10 = pbVar10 + 2;
      pbVar11 = pbVar11 + 2;
    } while (lVar16 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar14 = uVar13 + 0x20002 + uVar12 * 3;
    param_7 = param_7 + (long)(int)uVar18 * 4;
    uVar7 = uVar14 >> 2 & 0xff;
    uVar8 = uVar14 >> 0x12 & 0xff;
    iVar6 = (uint)param_1[uVar18] * 0x4a85;
    uVar15 = iVar6 + uVar7 * 0x811a;
    uVar14 = uVar15 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    *param_7 = uVar20;
    iVar4 = uVar7 * -0x1913 + uVar8 * -0x3408 + iVar6;
    uVar14 = iVar4 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar4) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_7[1] = uVar20;
    uVar15 = iVar6 + uVar8 * 0x6625;
    uVar14 = uVar15 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar15) {
      uVar2 = 0xff;
    }
    uVar20 = (char)(uVar14 >> 0xe);
    if (0x3fffff < uVar14) {
      uVar20 = uVar2;
    }
    param_7[2] = uVar20;
    param_7[3] = 0xff;
    if (param_2 != (byte *)0x0) {
      uVar14 = uVar12 + 0x20002 + uVar13 * 3;
      param_8 = param_8 + (-(uVar18 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar18 & 0xffffffff) << 2);
      uVar13 = uVar14 >> 2 & 0xff;
      uVar15 = uVar14 >> 0x12 & 0xff;
      iVar6 = (uint)param_2[uVar18] * 0x4a85;
      uVar12 = iVar6 + uVar13 * 0x811a;
      uVar14 = uVar12 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar12) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      *param_8 = uVar20;
      iVar4 = uVar13 * -0x1913 + uVar15 * -0x3408 + iVar6;
      uVar14 = iVar4 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar4) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      param_8[1] = uVar20;
      uVar12 = iVar6 + uVar15 * 0x6625;
      uVar14 = uVar12 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar12) {
        uVar2 = 0xff;
      }
      uVar20 = (char)(uVar14 >> 0xe);
      if (0x3fffff < uVar14) {
        uVar20 = uVar2;
      }
      param_8[2] = uVar20;
      param_8[3] = 0xff;
    }
  }
  return;
}




void FUN_1010c88b8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  
  uVar20 = (long)param_9 - 1;
  uVar13 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar14 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar16 = uVar13 * 3 + uVar14 + 0x20002;
  bVar4 = *param_1;
  *param_7 = 0xff;
  uVar8 = uVar16 >> 2 & 0xff;
  uVar9 = uVar16 >> 0x12 & 0xff;
  iVar7 = (uint)bVar4 * 0x4a85;
  uVar17 = iVar7 + uVar9 * 0x6625;
  uVar16 = uVar17 - 0x379ad0;
  uVar2 = 0;
  if (0x379acf < uVar17) {
    uVar2 = 0xff;
  }
  uVar15 = (char)(uVar16 >> 0xe);
  if (0x3fffff < uVar16) {
    uVar15 = uVar2;
  }
  param_7[1] = uVar15;
  iVar5 = iVar7 + uVar8 * -0x1913 + uVar9 * -0x3408;
  uVar16 = iVar5 + 0x220530;
  uVar15 = 0xff;
  uVar2 = 0;
  if (-0x220531 < iVar5) {
    uVar2 = 0xff;
  }
  uVar3 = (char)(uVar16 >> 0xe);
  if (0x3fffff < uVar16) {
    uVar3 = uVar2;
  }
  param_7[2] = uVar3;
  uVar17 = iVar7 + uVar8 * 0x811a;
  uVar16 = uVar17 - 0x451550;
  uVar2 = 0;
  if (0x45154f < uVar17) {
    uVar2 = uVar15;
  }
  uVar3 = (char)(uVar16 >> 0xe);
  if (0x3fffff < uVar16) {
    uVar3 = uVar2;
  }
  param_7[3] = uVar3;
  if (param_2 != (byte *)0x0) {
    uVar16 = uVar13 + 0x20002 + uVar14 * 3;
    bVar4 = *param_2;
    *param_8 = 0xff;
    uVar8 = uVar16 >> 2 & 0xff;
    uVar9 = uVar16 >> 0x12 & 0xff;
    iVar7 = (uint)bVar4 * 0x4a85;
    uVar17 = iVar7 + uVar9 * 0x6625;
    uVar16 = uVar17 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar17) {
      uVar2 = uVar15;
    }
    uVar3 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar3 = uVar2;
    }
    param_8[1] = uVar3;
    iVar5 = uVar8 * -0x1913 + uVar9 * -0x3408 + iVar7;
    uVar16 = iVar5 + 0x220530;
    uVar2 = 0;
    if (-0x220531 < iVar5) {
      uVar2 = uVar15;
    }
    uVar3 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar3 = uVar2;
    }
    param_8[2] = uVar3;
    uVar17 = iVar7 + uVar8 * 0x811a;
    uVar16 = uVar17 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar17) {
      uVar2 = uVar15;
    }
    uVar15 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar15 = uVar2;
    }
    param_8[3] = uVar15;
  }
  if (2 < param_9) {
    iVar7 = (int)uVar20 >> 1;
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    lVar18 = (ulong)(iVar7 + 1) - 1;
    puVar19 = param_8 + 5;
    puVar21 = param_7 + 5;
    uVar16 = uVar13;
    uVar17 = uVar14;
    pbVar11 = param_2;
    pbVar12 = param_1;
    do {
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      uVar13 = (uint)*param_3 | (uint)*param_4 << 0x10;
      uVar14 = (uint)*param_5 | (uint)*param_6 << 0x10;
      iVar7 = uVar13 + uVar17 + uVar16 + uVar14 + 0x80008;
      uVar8 = iVar7 + (uVar13 + uVar17) * 2;
      uVar9 = iVar7 + (uVar14 + uVar16) * 2;
      uVar16 = uVar16 + (uVar8 >> 3);
      uVar10 = uVar16 >> 0x11 & 0xff;
      iVar7 = (uint)pbVar12[1] * 0x4a85;
      uVar6 = iVar7 + uVar10 * 0x6625;
      uVar1 = uVar6 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar6) {
        uVar2 = 0xff;
      }
      uVar15 = (char)(uVar1 >> 0xe);
      if (0x3fffff < uVar1) {
        uVar15 = uVar2;
      }
      uVar1 = uVar13 + (uVar9 >> 3);
      puVar21[-1] = 0xff;
      uVar6 = uVar16 >> 1 & 0xff;
      *puVar21 = uVar15;
      iVar5 = iVar7 + uVar6 * -0x1913 + uVar10 * -0x3408;
      uVar16 = iVar5 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar5) {
        uVar2 = 0xff;
      }
      uVar15 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar15 = uVar2;
      }
      puVar21[1] = uVar15;
      uVar6 = iVar7 + uVar6 * 0x811a;
      uVar16 = uVar6 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar6) {
        uVar2 = 0xff;
      }
      uVar15 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar15 = uVar2;
      }
      puVar21[2] = uVar15;
      uVar10 = uVar1 >> 0x11 & 0xff;
      iVar7 = (uint)pbVar12[2] * 0x4a85;
      uVar6 = iVar7 + uVar10 * 0x6625;
      uVar16 = uVar6 - 0x379ad0;
      uVar15 = 0xff;
      uVar2 = 0;
      if (0x379acf < uVar6) {
        uVar2 = 0xff;
      }
      uVar3 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar3 = uVar2;
      }
      uVar1 = uVar1 >> 1 & 0xff;
      puVar21[4] = uVar3;
      iVar5 = iVar7 + uVar1 * -0x1913 + uVar10 * -0x3408;
      uVar16 = iVar5 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar5) {
        uVar2 = uVar15;
      }
      uVar3 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar3 = uVar2;
      }
      puVar21[5] = uVar3;
      uVar1 = iVar7 + uVar1 * 0x811a;
      uVar16 = uVar1 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar1) {
        uVar2 = uVar15;
      }
      uVar3 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar3 = uVar2;
      }
      puVar21[6] = uVar3;
      puVar21[3] = 0xff;
      if (param_2 != (byte *)0x0) {
        uVar17 = (uVar9 >> 3) + uVar17;
        uVar16 = (uVar8 >> 3) + uVar14;
        bVar4 = pbVar11[1];
        puVar19[-1] = 0xff;
        uVar9 = uVar17 >> 1 & 0xff;
        uVar1 = uVar17 >> 0x11 & 0xff;
        iVar7 = (uint)bVar4 * 0x4a85;
        uVar8 = iVar7 + uVar1 * 0x6625;
        uVar17 = uVar8 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar8) {
          uVar2 = uVar15;
        }
        uVar3 = (char)(uVar17 >> 0xe);
        if (0x3fffff < uVar17) {
          uVar3 = uVar2;
        }
        *puVar19 = uVar3;
        iVar5 = uVar9 * -0x1913 + uVar1 * -0x3408 + iVar7;
        uVar17 = iVar5 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar5) {
          uVar2 = uVar15;
        }
        uVar3 = (char)(uVar17 >> 0xe);
        if (0x3fffff < uVar17) {
          uVar3 = uVar2;
        }
        puVar19[1] = uVar3;
        uVar8 = iVar7 + uVar9 * 0x811a;
        uVar17 = uVar8 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar8) {
          uVar2 = uVar15;
        }
        uVar3 = (char)(uVar17 >> 0xe);
        if (0x3fffff < uVar17) {
          uVar3 = uVar2;
        }
        puVar19[2] = uVar3;
        bVar4 = pbVar11[2];
        puVar19[3] = 0xff;
        uVar8 = uVar16 >> 1 & 0xff;
        uVar9 = uVar16 >> 0x11 & 0xff;
        iVar7 = (uint)bVar4 * 0x4a85;
        uVar17 = iVar7 + uVar9 * 0x6625;
        uVar16 = uVar17 - 0x379ad0;
        uVar2 = 0;
        if (0x379acf < uVar17) {
          uVar2 = uVar15;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        puVar19[4] = uVar3;
        iVar5 = uVar8 * -0x1913 + uVar9 * -0x3408 + iVar7;
        uVar16 = iVar5 + 0x220530;
        uVar2 = 0;
        if (-0x220531 < iVar5) {
          uVar2 = uVar15;
        }
        uVar3 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar3 = uVar2;
        }
        puVar19[5] = uVar3;
        uVar17 = iVar7 + uVar8 * 0x811a;
        uVar16 = uVar17 - 0x451550;
        uVar2 = 0;
        if (0x45154f < uVar17) {
          uVar2 = uVar15;
        }
        uVar15 = (char)(uVar16 >> 0xe);
        if (0x3fffff < uVar16) {
          uVar15 = uVar2;
        }
        puVar19[6] = uVar15;
      }
      puVar19 = puVar19 + 8;
      puVar21 = puVar21 + 8;
      lVar18 = lVar18 + -1;
      uVar16 = uVar13;
      uVar17 = uVar14;
      pbVar11 = pbVar11 + 2;
      pbVar12 = pbVar12 + 2;
    } while (lVar18 != 0);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar16 = uVar14 + 0x20002 + uVar13 * 3;
    bVar4 = param_1[uVar20];
    param_7 = param_7 + (long)(int)uVar20 * 4;
    *param_7 = 0xff;
    uVar8 = uVar16 >> 2 & 0xff;
    uVar9 = uVar16 >> 0x12 & 0xff;
    iVar7 = (uint)bVar4 * 0x4a85;
    uVar17 = iVar7 + uVar9 * 0x6625;
    uVar16 = uVar17 - 0x379ad0;
    uVar2 = 0;
    if (0x379acf < uVar17) {
      uVar2 = 0xff;
    }
    uVar15 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar15 = uVar2;
    }
    param_7[1] = uVar15;
    iVar5 = uVar8 * -0x1913 + uVar9 * -0x3408 + iVar7;
    uVar16 = iVar5 + 0x220530;
    uVar15 = 0xff;
    uVar2 = 0;
    if (-0x220531 < iVar5) {
      uVar2 = 0xff;
    }
    uVar3 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar3 = uVar2;
    }
    param_7[2] = uVar3;
    uVar17 = iVar7 + uVar8 * 0x811a;
    uVar16 = uVar17 - 0x451550;
    uVar2 = 0;
    if (0x45154f < uVar17) {
      uVar2 = uVar15;
    }
    uVar3 = (char)(uVar16 >> 0xe);
    if (0x3fffff < uVar16) {
      uVar3 = uVar2;
    }
    param_7[3] = uVar3;
    if (param_2 != (byte *)0x0) {
      uVar16 = uVar13 + 0x20002 + uVar14 * 3;
      bVar4 = param_2[uVar20];
      param_8 = param_8 + (-(uVar20 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar20 & 0xffffffff) << 2);
      *param_8 = 0xff;
      uVar14 = uVar16 >> 2 & 0xff;
      uVar17 = uVar16 >> 0x12 & 0xff;
      iVar7 = (uint)bVar4 * 0x4a85;
      uVar13 = iVar7 + uVar17 * 0x6625;
      uVar16 = uVar13 - 0x379ad0;
      uVar2 = 0;
      if (0x379acf < uVar13) {
        uVar2 = uVar15;
      }
      uVar3 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar3 = uVar2;
      }
      param_8[1] = uVar3;
      iVar5 = uVar14 * -0x1913 + uVar17 * -0x3408 + iVar7;
      uVar16 = iVar5 + 0x220530;
      uVar2 = 0;
      if (-0x220531 < iVar5) {
        uVar2 = uVar15;
      }
      uVar3 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar3 = uVar2;
      }
      param_8[2] = uVar3;
      uVar13 = iVar7 + uVar14 * 0x811a;
      uVar16 = uVar13 - 0x451550;
      uVar2 = 0;
      if (0x45154f < uVar13) {
        uVar2 = uVar15;
      }
      uVar15 = (char)(uVar16 >> 0xe);
      if (0x3fffff < uVar16) {
        uVar15 = uVar2;
      }
      param_8[3] = uVar15;
    }
  }
  return;
}




void FUN_1010c8f64(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  byte bVar26;
  
  uVar18 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar21 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar20 = uVar18 * 3 + uVar21 + 0x20002;
  uVar13 = uVar20 >> 2 & 0xff;
  uVar20 = uVar20 >> 0x12;
  iVar12 = (uint)*param_1 * 0x4a85;
  uVar7 = iVar12 + uVar20 * 0x6625;
  uVar22 = uVar7 - 0x379ad0;
  bVar3 = 0;
  if (0x379acf < uVar7) {
    bVar3 = 0xf0;
  }
  bVar19 = (byte)(uVar22 >> 0xe);
  if (0x3fffff < uVar22) {
    bVar19 = bVar3;
  }
  iVar8 = iVar12 + uVar20 * -0x3408 + uVar13 * -0x1913;
  uVar20 = iVar8 + 0x220530;
  bVar3 = 0;
  if (-0x220531 < iVar8) {
    bVar3 = 0xf;
  }
  bVar4 = (byte)(uVar20 >> 0x12);
  if (0x3fffff < uVar20) {
    bVar4 = bVar3;
  }
  uVar22 = iVar12 + uVar13 * 0x811a;
  uVar20 = uVar22 - 0x451550;
  bVar3 = 0;
  if (0x45154f < uVar22) {
    bVar3 = 0xf0;
  }
  bVar26 = (byte)(uVar20 >> 0xe);
  if (0x3fffff < uVar20) {
    bVar26 = bVar3;
  }
  *param_7 = bVar26 | 0xf;
  param_7[1] = bVar4 | bVar19 & 0xf0;
  uVar17 = (long)param_9 - 1;
  if (param_2 != (byte *)0x0) {
    uVar20 = uVar18 + 0x20002 + uVar21 * 3;
    uVar13 = uVar20 >> 2 & 0xff;
    uVar20 = uVar20 >> 0x12;
    iVar12 = (uint)*param_2 * 0x4a85;
    uVar7 = iVar12 + uVar20 * 0x6625;
    uVar22 = uVar7 - 0x379ad0;
    bVar3 = 0;
    if (0x379acf < uVar7) {
      bVar3 = 0xf0;
    }
    bVar19 = (byte)(uVar22 >> 0xe);
    if (0x3fffff < uVar22) {
      bVar19 = bVar3;
    }
    iVar8 = uVar20 * -0x3408 + uVar13 * -0x1913 + iVar12;
    uVar20 = iVar8 + 0x220530;
    bVar3 = 0;
    if (-0x220531 < iVar8) {
      bVar3 = 0xf;
    }
    bVar4 = (byte)(uVar20 >> 0x12);
    if (0x3fffff < uVar20) {
      bVar4 = bVar3;
    }
    uVar22 = iVar12 + uVar13 * 0x811a;
    uVar20 = uVar22 - 0x451550;
    bVar3 = 0;
    if (0x45154f < uVar22) {
      bVar3 = 0xf0;
    }
    bVar26 = (byte)(uVar20 >> 0xe);
    if (0x3fffff < uVar20) {
      bVar26 = bVar3;
    }
    *param_8 = bVar26 | 0xf;
    param_8[1] = bVar19 & 0xf0 | bVar4;
  }
  if (2 < param_9) {
    lVar23 = 0;
    iVar12 = (int)uVar17 >> 1;
    if (iVar12 < 2) {
      iVar12 = 1;
    }
    lVar24 = 1;
    uVar20 = uVar18;
    uVar22 = uVar21;
    pbVar15 = param_1;
    pbVar16 = param_2;
    do {
      uVar18 = (uint)param_3[lVar24] | (uint)param_4[lVar24] << 0x10;
      uVar21 = (uint)param_5[lVar24] | (uint)param_6[lVar24] << 0x10;
      iVar8 = uVar18 + uVar22 + uVar20 + uVar21 + 0x80008;
      uVar7 = iVar8 + (uVar18 + uVar22) * 2;
      uVar13 = iVar8 + (uVar21 + uVar20) * 2;
      uVar20 = uVar20 + (uVar7 >> 3);
      uVar1 = uVar18 + (uVar13 >> 3);
      uVar14 = uVar20 >> 1 & 0xff;
      uVar20 = uVar20 >> 0x11;
      iVar8 = (uint)pbVar15[1] * 0x4a85;
      uVar9 = iVar8 + uVar20 * 0x6625;
      uVar2 = uVar9 - 0x379ad0;
      bVar19 = 0xf0;
      bVar3 = 0;
      if (0x379acf < uVar9) {
        bVar3 = 0xf0;
      }
      bVar4 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar4 = bVar3;
      }
      iVar10 = iVar8 + uVar20 * -0x3408 + uVar14 * -0x1913;
      uVar20 = iVar10 + 0x220530;
      bVar26 = 0xf;
      bVar3 = 0;
      if (-0x220531 < iVar10) {
        bVar3 = 0xf;
      }
      bVar5 = (byte)(uVar20 >> 0x12);
      if (0x3fffff < uVar20) {
        bVar5 = bVar3;
      }
      iVar10 = (int)lVar23 + 2;
      uVar2 = iVar8 + uVar14 * 0x811a;
      uVar20 = uVar2 - 0x451550;
      bVar25 = 0xf0;
      bVar3 = 0;
      if (0x45154f < uVar2) {
        bVar3 = 0xf0;
      }
      bVar6 = (byte)(uVar20 >> 0xe);
      if (0x3fffff < uVar20) {
        bVar6 = bVar3;
      }
      param_7[iVar10] = bVar6 | 0xf;
      (param_7 + iVar10)[1] = bVar5 | bVar4 & 0xf0;
      uVar9 = uVar1 >> 1 & 0xff;
      uVar1 = uVar1 >> 0x11;
      iVar8 = (uint)pbVar15[2] * 0x4a85;
      uVar2 = iVar8 + uVar1 * 0x6625;
      uVar20 = uVar2 - 0x379ad0;
      bVar3 = 0;
      if (0x379acf < uVar2) {
        bVar3 = bVar19;
      }
      bVar4 = (byte)(uVar20 >> 0xe);
      if (0x3fffff < uVar20) {
        bVar4 = bVar3;
      }
      iVar11 = iVar8 + uVar1 * -0x3408 + uVar9 * -0x1913;
      uVar20 = iVar11 + 0x220530;
      bVar3 = 0;
      if (-0x220531 < iVar11) {
        bVar3 = bVar26;
      }
      bVar5 = (byte)(uVar20 >> 0x12);
      if (0x3fffff < uVar20) {
        bVar5 = bVar3;
      }
      uVar1 = iVar8 + uVar9 * 0x811a;
      uVar20 = uVar1 - 0x451550;
      bVar3 = 0;
      if (0x45154f < uVar1) {
        bVar3 = bVar25;
      }
      bVar6 = (byte)(uVar20 >> 0xe);
      if (0x3fffff < uVar20) {
        bVar6 = bVar3;
      }
      (param_7 + lVar23 + 5)[-1] = bVar6 | 0xf;
      param_7[lVar23 + 5] = bVar5 | bVar4 & 0xf0;
      if (param_2 != (byte *)0x0) {
        uVar22 = (uVar13 >> 3) + uVar22;
        uVar20 = (uVar7 >> 3) + uVar21;
        uVar1 = uVar22 >> 1 & 0xff;
        uVar22 = uVar22 >> 0x11;
        iVar8 = (uint)pbVar16[1] * 0x4a85;
        uVar13 = iVar8 + uVar22 * 0x6625;
        uVar7 = uVar13 - 0x379ad0;
        bVar3 = 0;
        if (0x379acf < uVar13) {
          bVar3 = bVar19;
        }
        bVar4 = (byte)(uVar7 >> 0xe);
        if (0x3fffff < uVar7) {
          bVar4 = bVar3;
        }
        iVar11 = uVar22 * -0x3408 + uVar1 * -0x1913 + iVar8;
        uVar22 = iVar11 + 0x220530;
        bVar3 = 0;
        if (-0x220531 < iVar11) {
          bVar3 = bVar26;
        }
        bVar5 = (byte)(uVar22 >> 0x12);
        if (0x3fffff < uVar22) {
          bVar5 = bVar3;
        }
        uVar7 = iVar8 + uVar1 * 0x811a;
        uVar22 = uVar7 - 0x451550;
        bVar3 = 0;
        if (0x45154f < uVar7) {
          bVar3 = bVar25;
        }
        bVar6 = (byte)(uVar22 >> 0xe);
        if (0x3fffff < uVar22) {
          bVar6 = bVar3;
        }
        param_8[iVar10] = bVar6 | 0xf;
        (param_8 + iVar10)[1] = bVar4 & 0xf0 | bVar5;
        uVar13 = uVar20 >> 1 & 0xff;
        uVar20 = uVar20 >> 0x11;
        iVar8 = (uint)pbVar16[2] * 0x4a85;
        uVar7 = iVar8 + uVar20 * 0x6625;
        uVar22 = uVar7 - 0x379ad0;
        bVar3 = 0;
        if (0x379acf < uVar7) {
          bVar3 = bVar19;
        }
        bVar19 = (byte)(uVar22 >> 0xe);
        if (0x3fffff < uVar22) {
          bVar19 = bVar3;
        }
        iVar10 = uVar20 * -0x3408 + uVar13 * -0x1913 + iVar8;
        uVar20 = iVar10 + 0x220530;
        bVar3 = 0;
        if (-0x220531 < iVar10) {
          bVar3 = bVar26;
        }
        bVar4 = (byte)(uVar20 >> 0x12);
        if (0x3fffff < uVar20) {
          bVar4 = bVar3;
        }
        uVar22 = iVar8 + uVar13 * 0x811a;
        uVar20 = uVar22 - 0x451550;
        bVar3 = 0;
        if (0x45154f < uVar22) {
          bVar3 = bVar25;
        }
        bVar26 = (byte)(uVar20 >> 0xe);
        if (0x3fffff < uVar20) {
          bVar26 = bVar3;
        }
        param_8[lVar23 + 4] = bVar26 | 0xf;
        (param_8 + lVar23 + 4)[1] = bVar19 & 0xf0 | bVar4;
      }
      lVar24 = lVar24 + 1;
      lVar23 = lVar23 + 4;
      uVar20 = uVar18;
      uVar22 = uVar21;
      pbVar15 = pbVar15 + 2;
      pbVar16 = pbVar16 + 2;
    } while ((1 - (ulong)(iVar12 + 1)) + lVar24 != 1);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar20 = uVar21 + 0x20002 + uVar18 * 3;
    uVar13 = uVar20 >> 2 & 0xff;
    uVar20 = uVar20 >> 0x12;
    iVar12 = (uint)param_1[uVar17] * 0x4a85;
    uVar7 = iVar12 + uVar20 * 0x6625;
    uVar22 = uVar7 - 0x379ad0;
    bVar3 = 0;
    if (0x379acf < uVar7) {
      bVar3 = 0xf0;
    }
    bVar19 = (byte)(uVar22 >> 0xe);
    if (0x3fffff < uVar22) {
      bVar19 = bVar3;
    }
    iVar8 = uVar20 * -0x3408 + uVar13 * -0x1913 + iVar12;
    uVar20 = iVar8 + 0x220530;
    bVar3 = 0;
    if (-0x220531 < iVar8) {
      bVar3 = 0xf;
    }
    bVar4 = (byte)(uVar20 >> 0x12);
    if (0x3fffff < uVar20) {
      bVar4 = bVar3;
    }
    uVar22 = iVar12 + uVar13 * 0x811a;
    uVar20 = uVar22 - 0x451550;
    bVar3 = 0;
    if (0x45154f < uVar22) {
      bVar3 = 0xf0;
    }
    bVar26 = (byte)(uVar20 >> 0xe);
    if (0x3fffff < uVar20) {
      bVar26 = bVar3;
    }
    param_7[(long)(int)uVar17 * 2] = bVar26 | 0xf;
    (param_7 + (long)(int)uVar17 * 2)[1] = bVar19 & 0xf0 | bVar4;
    if (param_2 != (byte *)0x0) {
      uVar20 = uVar18 + 0x20002 + uVar21 * 3;
      uVar21 = uVar20 >> 2 & 0xff;
      uVar20 = uVar20 >> 0x12;
      iVar12 = (uint)param_2[uVar17] * 0x4a85;
      uVar18 = iVar12 + uVar20 * 0x6625;
      uVar22 = uVar18 - 0x379ad0;
      bVar3 = 0;
      if (0x379acf < uVar18) {
        bVar3 = 0xf0;
      }
      bVar19 = (byte)(uVar22 >> 0xe);
      if (0x3fffff < uVar22) {
        bVar19 = bVar3;
      }
      iVar8 = uVar20 * -0x3408 + uVar21 * -0x1913 + iVar12;
      uVar20 = iVar8 + 0x220530;
      bVar3 = 0;
      if (-0x220531 < iVar8) {
        bVar3 = 0xf;
      }
      bVar4 = (byte)(uVar20 >> 0x12);
      if (0x3fffff < uVar20) {
        bVar4 = bVar3;
      }
      uVar22 = iVar12 + uVar21 * 0x811a;
      uVar20 = uVar22 - 0x451550;
      bVar3 = 0;
      if (0x45154f < uVar22) {
        bVar3 = 0xf0;
      }
      bVar26 = (byte)(uVar20 >> 0xe);
      if (0x3fffff < uVar20) {
        bVar26 = bVar3;
      }
      param_8[-(uVar17 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar17 & 0xffffffff) << 1] =
           bVar26 | 0xf;
      (param_8 + (-(uVar17 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar17 & 0xffffffff) << 1))[1] =
           bVar19 & 0xf0 | bVar4;
    }
  }
  return;
}




void FUN_1010c962c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  byte bVar24;
  uint uVar25;
  
  uVar17 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar20 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar19 = uVar17 * 3 + uVar20 + 0x20002;
  uVar12 = uVar19 >> 2 & 0xff;
  uVar19 = uVar19 >> 0x12;
  iVar11 = (uint)*param_1 * 0x4a85;
  uVar7 = iVar11 + uVar19 * 0x6625;
  uVar21 = uVar7 - 0x379ad0;
  bVar3 = 0;
  if (0x379acf < uVar7) {
    bVar3 = 0xf8;
  }
  bVar18 = (byte)(uVar21 >> 0xe);
  if (0x3fffff < uVar21) {
    bVar18 = bVar3;
  }
  iVar8 = iVar11 + uVar19 * -0x3408 + uVar12 * -0x1913;
  uVar19 = iVar8 + 0x220530;
  uVar21 = 0;
  if (-0x220531 < iVar8) {
    uVar21 = 0xff;
  }
  uVar7 = (int)uVar19 >> 0xe;
  if (0x3fffff < uVar19) {
    uVar7 = uVar21;
  }
  uVar21 = iVar11 + uVar12 * 0x811a;
  uVar19 = uVar21 - 0x451550;
  bVar3 = 0;
  if (0x45154f < uVar21) {
    bVar3 = 0x1f;
  }
  bVar4 = (byte)(uVar19 >> 0x11);
  if (0x3fffff < uVar19) {
    bVar4 = bVar3;
  }
  *param_7 = (byte)((uVar7 & 0x1c) << 3) | bVar4;
  param_7[1] = bVar18 & 0xf8 | (byte)(uVar7 >> 5);
  uVar16 = (long)param_9 - 1;
  if (param_2 != (byte *)0x0) {
    uVar19 = uVar17 + 0x20002 + uVar20 * 3;
    uVar12 = uVar19 >> 2 & 0xff;
    uVar19 = uVar19 >> 0x12;
    iVar11 = (uint)*param_2 * 0x4a85;
    uVar7 = iVar11 + uVar19 * 0x6625;
    uVar21 = uVar7 - 0x379ad0;
    bVar3 = 0;
    if (0x379acf < uVar7) {
      bVar3 = 0xf8;
    }
    bVar18 = (byte)(uVar21 >> 0xe);
    if (0x3fffff < uVar21) {
      bVar18 = bVar3;
    }
    iVar8 = uVar19 * -0x3408 + uVar12 * -0x1913 + iVar11;
    uVar19 = iVar8 + 0x220530;
    uVar21 = 0;
    if (-0x220531 < iVar8) {
      uVar21 = 0xff;
    }
    uVar7 = (int)uVar19 >> 0xe;
    if (0x3fffff < uVar19) {
      uVar7 = uVar21;
    }
    uVar21 = iVar11 + uVar12 * 0x811a;
    uVar19 = uVar21 - 0x451550;
    bVar3 = 0;
    if (0x45154f < uVar21) {
      bVar3 = 0x1f;
    }
    bVar4 = (byte)(uVar19 >> 0x11);
    if (0x3fffff < uVar19) {
      bVar4 = bVar3;
    }
    *param_8 = (byte)((uVar7 & 0x1c) << 3) | bVar4;
    param_8[1] = bVar18 & 0xf8 | (byte)(uVar7 >> 5);
  }
  if (2 < param_9) {
    lVar22 = 0;
    iVar11 = (int)uVar16 >> 1;
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    lVar23 = 1;
    uVar19 = uVar17;
    uVar21 = uVar20;
    pbVar14 = param_1;
    pbVar15 = param_2;
    do {
      uVar17 = (uint)param_3[lVar23] | (uint)param_4[lVar23] << 0x10;
      uVar20 = (uint)param_5[lVar23] | (uint)param_6[lVar23] << 0x10;
      iVar8 = uVar17 + uVar21 + uVar19 + uVar20 + 0x80008;
      uVar7 = iVar8 + (uVar17 + uVar21) * 2;
      uVar12 = iVar8 + (uVar20 + uVar19) * 2;
      uVar19 = uVar19 + (uVar7 >> 3);
      uVar1 = uVar17 + (uVar12 >> 3);
      uVar13 = uVar19 >> 1 & 0xff;
      uVar19 = uVar19 >> 0x11;
      iVar8 = (uint)pbVar14[1] * 0x4a85;
      uVar25 = iVar8 + uVar19 * 0x6625;
      uVar2 = uVar25 - 0x379ad0;
      bVar18 = 0xf8;
      bVar3 = 0;
      if (0x379acf < uVar25) {
        bVar3 = 0xf8;
      }
      bVar4 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar4 = bVar3;
      }
      iVar9 = iVar8 + uVar19 * -0x3408 + uVar13 * -0x1913;
      uVar19 = iVar9 + 0x220530;
      uVar25 = 0xff;
      uVar2 = 0;
      if (-0x220531 < iVar9) {
        uVar2 = uVar25;
      }
      uVar6 = (int)uVar19 >> 0xe;
      if (0x3fffff < uVar19) {
        uVar6 = uVar2;
      }
      iVar9 = (int)lVar22 + 2;
      uVar2 = iVar8 + uVar13 * 0x811a;
      uVar19 = uVar2 - 0x451550;
      bVar24 = 0x1f;
      bVar3 = 0;
      if (0x45154f < uVar2) {
        bVar3 = 0x1f;
      }
      bVar5 = (byte)(uVar19 >> 0x11);
      if (0x3fffff < uVar19) {
        bVar5 = bVar3;
      }
      param_7[iVar9] = (byte)((uVar6 & 0x1c) << 3) | bVar5;
      (param_7 + iVar9)[1] = bVar4 & 0xf8 | (byte)(uVar6 >> 5);
      uVar13 = uVar1 >> 1 & 0xff;
      uVar1 = uVar1 >> 0x11;
      iVar8 = (uint)pbVar14[2] * 0x4a85;
      uVar2 = iVar8 + uVar1 * 0x6625;
      uVar19 = uVar2 - 0x379ad0;
      bVar3 = 0;
      if (0x379acf < uVar2) {
        bVar3 = bVar18;
      }
      bVar4 = (byte)(uVar19 >> 0xe);
      if (0x3fffff < uVar19) {
        bVar4 = bVar3;
      }
      iVar10 = iVar8 + uVar1 * -0x3408 + uVar13 * -0x1913;
      uVar19 = iVar10 + 0x220530;
      uVar1 = 0;
      if (-0x220531 < iVar10) {
        uVar1 = uVar25;
      }
      uVar2 = (int)uVar19 >> 0xe;
      if (0x3fffff < uVar19) {
        uVar2 = uVar1;
      }
      uVar1 = iVar8 + uVar13 * 0x811a;
      uVar19 = uVar1 - 0x451550;
      bVar3 = 0;
      if (0x45154f < uVar1) {
        bVar3 = bVar24;
      }
      bVar5 = (byte)(uVar19 >> 0x11);
      if (0x3fffff < uVar19) {
        bVar5 = bVar3;
      }
      (param_7 + lVar22 + 5)[-1] = (byte)((uVar2 & 0x1c) << 3) | bVar5;
      param_7[lVar22 + 5] = bVar4 & 0xf8 | (byte)(uVar2 >> 5);
      if (param_2 != (byte *)0x0) {
        uVar21 = (uVar12 >> 3) + uVar21;
        uVar19 = (uVar7 >> 3) + uVar20;
        uVar1 = uVar21 >> 1 & 0xff;
        uVar21 = uVar21 >> 0x11;
        iVar8 = (uint)pbVar15[1] * 0x4a85;
        uVar12 = iVar8 + uVar21 * 0x6625;
        uVar7 = uVar12 - 0x379ad0;
        bVar3 = 0;
        if (0x379acf < uVar12) {
          bVar3 = bVar18;
        }
        bVar4 = (byte)(uVar7 >> 0xe);
        if (0x3fffff < uVar7) {
          bVar4 = bVar3;
        }
        iVar10 = uVar21 * -0x3408 + uVar1 * -0x1913 + iVar8;
        uVar21 = iVar10 + 0x220530;
        uVar7 = 0;
        if (-0x220531 < iVar10) {
          uVar7 = uVar25;
        }
        uVar12 = (int)uVar21 >> 0xe;
        if (0x3fffff < uVar21) {
          uVar12 = uVar7;
        }
        uVar7 = iVar8 + uVar1 * 0x811a;
        uVar21 = uVar7 - 0x451550;
        bVar3 = 0;
        if (0x45154f < uVar7) {
          bVar3 = bVar24;
        }
        bVar5 = (byte)(uVar21 >> 0x11);
        if (0x3fffff < uVar21) {
          bVar5 = bVar3;
        }
        param_8[iVar9] = (byte)((uVar12 & 0x1c) << 3) | bVar5;
        (param_8 + iVar9)[1] = bVar4 & 0xf8 | (byte)(uVar12 >> 5);
        uVar12 = uVar19 >> 1 & 0xff;
        uVar19 = uVar19 >> 0x11;
        iVar8 = (uint)pbVar15[2] * 0x4a85;
        uVar7 = iVar8 + uVar19 * 0x6625;
        uVar21 = uVar7 - 0x379ad0;
        bVar3 = 0;
        if (0x379acf < uVar7) {
          bVar3 = bVar18;
        }
        bVar18 = (byte)(uVar21 >> 0xe);
        if (0x3fffff < uVar21) {
          bVar18 = bVar3;
        }
        iVar9 = uVar19 * -0x3408 + uVar12 * -0x1913 + iVar8;
        uVar19 = iVar9 + 0x220530;
        uVar21 = 0;
        if (-0x220531 < iVar9) {
          uVar21 = uVar25;
        }
        uVar7 = (int)uVar19 >> 0xe;
        if (0x3fffff < uVar19) {
          uVar7 = uVar21;
        }
        uVar21 = iVar8 + uVar12 * 0x811a;
        uVar19 = uVar21 - 0x451550;
        bVar3 = 0;
        if (0x45154f < uVar21) {
          bVar3 = bVar24;
        }
        bVar4 = (byte)(uVar19 >> 0x11);
        if (0x3fffff < uVar19) {
          bVar4 = bVar3;
        }
        param_8[lVar22 + 4] = (byte)((uVar7 & 0x1c) << 3) | bVar4;
        (param_8 + lVar22 + 4)[1] = bVar18 & 0xf8 | (byte)(uVar7 >> 5);
      }
      lVar23 = lVar23 + 1;
      lVar22 = lVar22 + 4;
      uVar19 = uVar17;
      uVar21 = uVar20;
      pbVar14 = pbVar14 + 2;
      pbVar15 = pbVar15 + 2;
    } while ((1 - (ulong)(iVar11 + 1)) + lVar23 != 1);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar19 = uVar20 + 0x20002 + uVar17 * 3;
    uVar12 = uVar19 >> 2 & 0xff;
    uVar19 = uVar19 >> 0x12;
    iVar11 = (uint)param_1[uVar16] * 0x4a85;
    uVar7 = iVar11 + uVar19 * 0x6625;
    uVar21 = uVar7 - 0x379ad0;
    bVar3 = 0;
    if (0x379acf < uVar7) {
      bVar3 = 0xf8;
    }
    bVar18 = (byte)(uVar21 >> 0xe);
    if (0x3fffff < uVar21) {
      bVar18 = bVar3;
    }
    iVar8 = uVar19 * -0x3408 + uVar12 * -0x1913 + iVar11;
    uVar19 = iVar8 + 0x220530;
    uVar21 = 0;
    if (-0x220531 < iVar8) {
      uVar21 = 0xff;
    }
    uVar7 = (int)uVar19 >> 0xe;
    if (0x3fffff < uVar19) {
      uVar7 = uVar21;
    }
    uVar21 = iVar11 + uVar12 * 0x811a;
    uVar19 = uVar21 - 0x451550;
    bVar3 = 0;
    if (0x45154f < uVar21) {
      bVar3 = 0x1f;
    }
    bVar4 = (byte)(uVar19 >> 0x11);
    if (0x3fffff < uVar19) {
      bVar4 = bVar3;
    }
    param_7[(long)(int)uVar16 * 2] = (byte)((uVar7 & 0x1c) << 3) | bVar4;
    (param_7 + (long)(int)uVar16 * 2)[1] = bVar18 & 0xf8 | (byte)(uVar7 >> 5);
    if (param_2 != (byte *)0x0) {
      uVar19 = uVar17 + 0x20002 + uVar20 * 3;
      uVar20 = uVar19 >> 2 & 0xff;
      uVar19 = uVar19 >> 0x12;
      iVar11 = (uint)param_2[uVar16] * 0x4a85;
      uVar17 = iVar11 + uVar19 * 0x6625;
      uVar21 = uVar17 - 0x379ad0;
      bVar3 = 0;
      if (0x379acf < uVar17) {
        bVar3 = 0xf8;
      }
      bVar18 = (byte)(uVar21 >> 0xe);
      if (0x3fffff < uVar21) {
        bVar18 = bVar3;
      }
      iVar8 = uVar19 * -0x3408 + uVar20 * -0x1913 + iVar11;
      uVar19 = iVar8 + 0x220530;
      uVar21 = 0;
      if (-0x220531 < iVar8) {
        uVar21 = 0xff;
      }
      uVar17 = (int)uVar19 >> 0xe;
      if (0x3fffff < uVar19) {
        uVar17 = uVar21;
      }
      uVar21 = iVar11 + uVar20 * 0x811a;
      uVar19 = uVar21 - 0x451550;
      bVar3 = 0;
      if (0x45154f < uVar21) {
        bVar3 = 0x1f;
      }
      bVar4 = (byte)(uVar19 >> 0x11);
      if (0x3fffff < uVar19) {
        bVar4 = bVar3;
      }
      param_8[-(uVar16 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar16 & 0xffffffff) << 1] =
           (byte)((uVar17 & 0x1c) << 3) | bVar4;
      (param_8 + (-(uVar16 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar16 & 0xffffffff) << 1))[1] =
           bVar18 & 0xf8 | (byte)(uVar17 >> 5);
    }
  }
  return;
}




void FUN_1010c9d34(void)

{
  DAT_101dc1e88 = FUN_1010c9d6c;
  DAT_101dc1e90 = FUN_1010ca594;
  DAT_101dc1e98 = FUN_1010cadd0;
  DAT_101dc1ea0 = FUN_1010cb5f8;
  DAT_101dc1ec0 = FUN_1010ca594;
  DAT_101dc1ec8 = FUN_1010cb5f8;
  return;
}




void FUN_1010c9d6c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined6 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint3 uVar34;
  uint3 uVar35;
  uint3 uVar36;
  uint3 uVar37;
  undefined2 uVar38;
  bool bVar39;
  uint uVar40;
  long lVar41;
  int iVar42;
  long lVar43;
  ulong uVar44;
  byte *pbVar45;
  uint uVar46;
  uint uVar47;
  ulong uVar48;
  bool bVar49;
  ulong uVar50;
  ulong uVar51;
  size_t sVar52;
  uint uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar100;
  short sVar101;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  short sVar102;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  byte bVar103;
  short sVar104;
  short sVar105;
  short sVar106;
  short sVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  short sVar114;
  short sVar115;
  short sVar116;
  short sVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  int iVar128;
  undefined8 uVar129;
  int iVar130;
  byte abStack_d9 [2];
  undefined7 uStack_d7;
  byte bStack_d0;
  byte abStack_c9 [2];
  undefined7 uStack_c7;
  byte bStack_c0;
  byte local_b0 [4];
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  byte local_a0 [4];
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  byte local_90 [4];
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  byte local_80 [4];
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  long local_70;
  undefined1 auVar91 [16];
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar43 = (long)((ulong)(param_9 + 1) << 0x20) >> 0x21;
  uVar51 = lVar43 - 1;
  lVar43 = lVar43 - (uVar51 & 0xfffffffffffffff8);
  iVar42 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar53 = iVar42 + (uint)*param_3 >> 1;
  uVar40 = iVar1 + (uint)*param_4 >> 1;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar46 = iVar6 + uVar40 * 0x6625;
  uVar47 = uVar46 - 0x379ad0;
  uVar55 = 0xff;
  uVar54 = 0;
  if (0x379acf < uVar46) {
    uVar54 = 0xff;
  }
  uVar56 = (char)(uVar47 >> 0xe);
  if (0x3fffff < uVar47) {
    uVar56 = uVar54;
  }
  *param_7 = uVar56;
  iVar3 = iVar6 + uVar53 * -0x1913 + uVar40 * -0x3408;
  uVar47 = iVar3 + 0x220530;
  uVar54 = 0;
  if (-0x220531 < iVar3) {
    uVar54 = uVar55;
  }
  uVar56 = (char)(uVar47 >> 0xe);
  if (0x3fffff < uVar47) {
    uVar56 = uVar54;
  }
  param_7[1] = uVar56;
  uVar53 = iVar6 + uVar53 * 0x811a;
  uVar47 = uVar53 - 0x451550;
  uVar54 = 0;
  if (0x45154f < uVar53) {
    uVar54 = uVar55;
  }
  uVar56 = (char)(uVar47 >> 0xe);
  if (0x3fffff < uVar47) {
    uVar56 = uVar54;
  }
  uVar47 = (int)uVar51 >> 3;
  param_7[2] = uVar56;
  if (param_2 != (byte *)0x0) {
    uVar40 = iVar42 + (uint)*param_5 >> 1;
    uVar46 = iVar1 + (uint)*param_6 >> 1;
    iVar42 = (uint)*param_2 * 0x4a85;
    uVar4 = iVar42 + uVar46 * 0x6625;
    uVar53 = uVar4 - 0x379ad0;
    uVar54 = 0;
    if (0x379acf < uVar4) {
      uVar54 = uVar55;
    }
    uVar55 = (char)(uVar53 >> 0xe);
    if (0x3fffff < uVar53) {
      uVar55 = uVar54;
    }
    *param_8 = uVar55;
    iVar1 = iVar42 + uVar40 * -0x1913 + uVar46 * -0x3408;
    uVar53 = iVar1 + 0x220530;
    uVar54 = 0;
    if (-0x220531 < iVar1) {
      uVar54 = 0xff;
    }
    uVar55 = (char)(uVar53 >> 0xe);
    if (0x3fffff < uVar53) {
      uVar55 = uVar54;
    }
    param_8[1] = uVar55;
    uVar40 = iVar42 + uVar40 * 0x811a;
    uVar53 = uVar40 - 0x451550;
    uVar54 = 0;
    if (0x45154f < uVar40) {
      uVar54 = 0xff;
    }
    uVar55 = (char)(uVar53 >> 0xe);
    if (0x3fffff < uVar53) {
      uVar55 = uVar54;
    }
    param_8[2] = uVar55;
  }
  uVar53 = uVar47 << 4 | 1;
  if (0x10 < param_9) {
    uVar51 = 0;
    uVar40 = uVar47;
    if ((int)uVar47 < 2) {
      uVar40 = 1;
    }
    do {
      uVar48 = 0;
      uVar88 = *(undefined8 *)param_3;
      uVar129 = *(undefined8 *)(param_3 + 1);
      bVar77 = (byte)((ulong)uVar129 >> 8);
      bVar78 = (byte)((ulong)uVar129 >> 0x10);
      bVar79 = (byte)((ulong)uVar129 >> 0x18);
      bVar80 = (byte)((ulong)uVar129 >> 0x20);
      bVar81 = (byte)((ulong)uVar129 >> 0x28);
      bVar82 = (byte)((ulong)uVar129 >> 0x30);
      bVar103 = (byte)((ulong)uVar129 >> 0x38);
      uVar89 = *(undefined8 *)param_5;
      uVar54 = (undefined1)((ulong)uVar89 >> 8);
      bVar108 = (byte)((ulong)uVar89 >> 0x10);
      bVar109 = (byte)((ulong)uVar89 >> 0x18);
      bVar110 = (byte)((ulong)uVar89 >> 0x20);
      bVar111 = (byte)((ulong)uVar89 >> 0x28);
      bVar112 = (byte)((ulong)uVar89 >> 0x30);
      bVar113 = (byte)((ulong)uVar89 >> 0x38);
      uVar90 = *(undefined8 *)(param_5 + 1);
      uVar55 = (undefined1)((ulong)uVar90 >> 8);
      bVar118 = (byte)((ulong)uVar90 >> 0x10);
      bVar119 = (byte)((ulong)uVar90 >> 0x18);
      bVar120 = (byte)((ulong)uVar90 >> 0x20);
      bVar121 = (byte)((ulong)uVar90 >> 0x28);
      bVar122 = (byte)((ulong)uVar90 >> 0x30);
      bVar123 = (byte)((ulong)uVar90 >> 0x38);
      bVar70 = (byte)((ulong)uVar88 >> 8);
      bVar71 = (byte)((ulong)uVar88 >> 0x10);
      bVar72 = (byte)((ulong)uVar88 >> 0x18);
      bVar73 = (byte)((ulong)uVar88 >> 0x20);
      bVar74 = (byte)((ulong)uVar88 >> 0x28);
      bVar75 = (byte)((ulong)uVar88 >> 0x30);
      bVar76 = (byte)((ulong)uVar88 >> 0x38);
      uVar34 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      uVar35 = CONCAT12(bVar77,(short)uVar129) & 0xff00ff;
      uVar36 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar37 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      sVar83 = (short)uVar35 + (ushort)(byte)uVar88 + (short)uVar36 + (short)uVar37;
      sVar84 = (ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar70 + (ushort)(byte)(uVar36 >> 0x10) +
               (ushort)(byte)(uVar37 >> 0x10);
      sVar85 = (ushort)bVar78 + (ushort)bVar71 + (ushort)bVar108 + (ushort)bVar118;
      sVar86 = (ushort)bVar79 + (ushort)bVar72 + (ushort)bVar109 + (ushort)bVar119;
      sVar124 = (ushort)bVar80 + (ushort)bVar73 + (ushort)bVar110 + (ushort)bVar120;
      sVar125 = (ushort)bVar81 + (ushort)bVar74 + (ushort)bVar111 + (ushort)bVar121;
      sVar126 = (ushort)bVar82 + (ushort)bVar75 + (ushort)bVar112 + (ushort)bVar122;
      sVar127 = (ushort)bVar103 + (ushort)bVar76 + (ushort)bVar113 + (ushort)bVar123;
      uVar35 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar54 = (undefined1)((ushort)(sVar83 + (ushort)(byte)uVar88 * 2 + (short)uVar34 * 2) >> 3);
      uVar56 = (undefined1)
               ((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)(byte)(uVar34 >> 0x10) * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar118 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar86 + (ushort)bVar72 * 2 + (ushort)bVar119 * 2) >> 3);
      uVar62 = (undefined1)((ushort)(sVar124 + (ushort)bVar73 * 2 + (ushort)bVar120 * 2) >> 3);
      uVar64 = (undefined1)((ushort)(sVar125 + (ushort)bVar74 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar66 = (undefined1)((ushort)(sVar126 + (ushort)bVar75 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar68 = (undefined1)((ushort)(sVar127 + (ushort)bVar76 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(((short)uVar35 + (ushort)(byte)uVar129) * 2 + sVar83) >> 3);
      uVar57 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar78) * 2 + sVar85) >> 3);
      uVar61 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar79) * 2 + sVar86) >> 3);
      uVar63 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar80) * 2 + sVar124) >> 3);
      uVar65 = (undefined1)((ushort)(((ushort)bVar111 + (ushort)bVar81) * 2 + sVar125) >> 3);
      uVar67 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar82) * 2 + sVar126) >> 3);
      uVar69 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar103) * 2 + sVar127) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      uVar129 = NEON_urhadd(uVar129,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      local_b0[0] = (byte)uVar88;
      local_b0[1] = (char)uVar129;
      local_b0[2] = (char)((ulong)uVar88 >> 8);
      local_b0[3] = (char)((ulong)uVar129 >> 8);
      uStack_ac = (char)((ulong)uVar88 >> 0x10);
      uStack_ab = (char)((ulong)uVar129 >> 0x10);
      uStack_aa = (char)((ulong)uVar88 >> 0x18);
      uStack_a9 = (char)((ulong)uVar129 >> 0x18);
      uStack_a8 = (char)((ulong)uVar88 >> 0x20);
      uStack_a7 = (char)((ulong)uVar129 >> 0x20);
      uStack_a6 = (char)((ulong)uVar88 >> 0x28);
      uStack_a5 = (char)((ulong)uVar129 >> 0x28);
      uStack_a4 = (char)((ulong)uVar88 >> 0x30);
      uStack_a3 = (char)((ulong)uVar129 >> 0x30);
      uStack_a2 = (char)((ulong)uVar88 >> 0x38);
      uStack_a1 = (char)((ulong)uVar129 >> 0x38);
      uVar129 = NEON_urhadd(uVar90,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      local_90[0] = (byte)uVar89;
      local_90[1] = (char)uVar129;
      local_90[2] = (char)((ulong)uVar89 >> 8);
      local_90[3] = (char)((ulong)uVar129 >> 8);
      uStack_8c = (char)((ulong)uVar89 >> 0x10);
      uStack_8b = (char)((ulong)uVar129 >> 0x10);
      uStack_8a = (char)((ulong)uVar89 >> 0x18);
      uStack_89 = (char)((ulong)uVar129 >> 0x18);
      uStack_88 = (char)((ulong)uVar89 >> 0x20);
      uStack_87 = (char)((ulong)uVar129 >> 0x20);
      uStack_86 = (char)((ulong)uVar89 >> 0x28);
      uStack_85 = (char)((ulong)uVar129 >> 0x28);
      uStack_84 = (char)((ulong)uVar89 >> 0x30);
      uStack_83 = (char)((ulong)uVar129 >> 0x30);
      uStack_82 = (char)((ulong)uVar89 >> 0x38);
      uStack_81 = (char)((ulong)uVar129 >> 0x38);
      uVar88 = *(undefined8 *)param_4;
      uVar129 = *(undefined8 *)(param_4 + 1);
      bVar77 = (byte)((ulong)uVar129 >> 8);
      bVar78 = (byte)((ulong)uVar129 >> 0x10);
      bVar79 = (byte)((ulong)uVar129 >> 0x18);
      bVar80 = (byte)((ulong)uVar129 >> 0x20);
      bVar81 = (byte)((ulong)uVar129 >> 0x28);
      bVar82 = (byte)((ulong)uVar129 >> 0x30);
      bVar103 = (byte)((ulong)uVar129 >> 0x38);
      uVar89 = *(undefined8 *)param_6;
      uVar54 = (undefined1)((ulong)uVar89 >> 8);
      bVar108 = (byte)((ulong)uVar89 >> 0x10);
      bVar109 = (byte)((ulong)uVar89 >> 0x18);
      bVar110 = (byte)((ulong)uVar89 >> 0x20);
      bVar111 = (byte)((ulong)uVar89 >> 0x28);
      bVar112 = (byte)((ulong)uVar89 >> 0x30);
      bVar113 = (byte)((ulong)uVar89 >> 0x38);
      uVar90 = *(undefined8 *)(param_6 + 1);
      uVar55 = (undefined1)((ulong)uVar90 >> 8);
      bVar118 = (byte)((ulong)uVar90 >> 0x10);
      bVar119 = (byte)((ulong)uVar90 >> 0x18);
      bVar120 = (byte)((ulong)uVar90 >> 0x20);
      bVar121 = (byte)((ulong)uVar90 >> 0x28);
      bVar122 = (byte)((ulong)uVar90 >> 0x30);
      bVar123 = (byte)((ulong)uVar90 >> 0x38);
      bVar70 = (byte)((ulong)uVar88 >> 8);
      bVar71 = (byte)((ulong)uVar88 >> 0x10);
      bVar72 = (byte)((ulong)uVar88 >> 0x18);
      bVar73 = (byte)((ulong)uVar88 >> 0x20);
      bVar74 = (byte)((ulong)uVar88 >> 0x28);
      bVar75 = (byte)((ulong)uVar88 >> 0x30);
      bVar76 = (byte)((ulong)uVar88 >> 0x38);
      uVar34 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      uVar35 = CONCAT12(bVar77,(short)uVar129) & 0xff00ff;
      uVar36 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar37 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      sVar83 = (short)uVar35 + (ushort)(byte)uVar88 + (short)uVar36 + (short)uVar37;
      sVar84 = (ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar70 + (ushort)(byte)(uVar36 >> 0x10) +
               (ushort)(byte)(uVar37 >> 0x10);
      sVar85 = (ushort)bVar78 + (ushort)bVar71 + (ushort)bVar108 + (ushort)bVar118;
      sVar86 = (ushort)bVar79 + (ushort)bVar72 + (ushort)bVar109 + (ushort)bVar119;
      sVar124 = (ushort)bVar80 + (ushort)bVar73 + (ushort)bVar110 + (ushort)bVar120;
      sVar125 = (ushort)bVar81 + (ushort)bVar74 + (ushort)bVar111 + (ushort)bVar121;
      sVar126 = (ushort)bVar82 + (ushort)bVar75 + (ushort)bVar112 + (ushort)bVar122;
      sVar127 = (ushort)bVar103 + (ushort)bVar76 + (ushort)bVar113 + (ushort)bVar123;
      uVar35 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar54 = (undefined1)((ushort)(sVar83 + (ushort)(byte)uVar88 * 2 + (short)uVar34 * 2) >> 3);
      uVar56 = (undefined1)
               ((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)(byte)(uVar34 >> 0x10) * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar118 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar86 + (ushort)bVar72 * 2 + (ushort)bVar119 * 2) >> 3);
      uVar62 = (undefined1)((ushort)(sVar124 + (ushort)bVar73 * 2 + (ushort)bVar120 * 2) >> 3);
      uVar64 = (undefined1)((ushort)(sVar125 + (ushort)bVar74 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar66 = (undefined1)((ushort)(sVar126 + (ushort)bVar75 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar68 = (undefined1)((ushort)(sVar127 + (ushort)bVar76 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(((short)uVar35 + (ushort)(byte)uVar129) * 2 + sVar83) >> 3);
      uVar57 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar78) * 2 + sVar85) >> 3);
      uVar61 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar79) * 2 + sVar86) >> 3);
      uVar63 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar80) * 2 + sVar124) >> 3);
      uVar65 = (undefined1)((ushort)(((ushort)bVar111 + (ushort)bVar81) * 2 + sVar125) >> 3);
      uVar67 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar82) * 2 + sVar126) >> 3);
      uVar69 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar103) * 2 + sVar127) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      uVar129 = NEON_urhadd(uVar129,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      local_a0[0] = (byte)uVar88;
      local_a0[1] = (char)uVar129;
      local_a0[2] = (char)((ulong)uVar88 >> 8);
      local_a0[3] = (char)((ulong)uVar129 >> 8);
      uStack_9c = (char)((ulong)uVar88 >> 0x10);
      uStack_9b = (char)((ulong)uVar129 >> 0x10);
      uStack_9a = (char)((ulong)uVar88 >> 0x18);
      uStack_99 = (char)((ulong)uVar129 >> 0x18);
      uStack_98 = (char)((ulong)uVar88 >> 0x20);
      uStack_97 = (char)((ulong)uVar129 >> 0x20);
      uStack_96 = (char)((ulong)uVar88 >> 0x28);
      uStack_95 = (char)((ulong)uVar129 >> 0x28);
      uStack_94 = (char)((ulong)uVar88 >> 0x30);
      uStack_93 = (char)((ulong)uVar129 >> 0x30);
      uStack_92 = (char)((ulong)uVar88 >> 0x38);
      uStack_91 = (char)((ulong)uVar129 >> 0x38);
      uVar129 = NEON_urhadd(uVar90,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      local_80[0] = (byte)uVar89;
      local_80[1] = (char)uVar129;
      local_80[2] = (char)((ulong)uVar89 >> 8);
      local_80[3] = (char)((ulong)uVar129 >> 8);
      uStack_7c = (char)((ulong)uVar89 >> 0x10);
      uStack_7b = (char)((ulong)uVar129 >> 0x10);
      uStack_7a = (char)((ulong)uVar89 >> 0x18);
      uStack_79 = (char)((ulong)uVar129 >> 0x18);
      uStack_78 = (char)((ulong)uVar89 >> 0x20);
      uStack_77 = (char)((ulong)uVar129 >> 0x20);
      uStack_76 = (char)((ulong)uVar89 >> 0x28);
      uStack_75 = (char)((ulong)uVar129 >> 0x28);
      uStack_74 = (char)((ulong)uVar89 >> 0x30);
      uStack_73 = (char)((ulong)uVar129 >> 0x30);
      uStack_72 = (char)((ulong)uVar89 >> 0x38);
      uStack_71 = (char)((ulong)uVar129 >> 0x38);
      uVar44 = uVar51 << 4 | 1;
      bVar39 = true;
      do {
        bVar49 = bVar39;
        uVar50 = uVar44 | uVar48;
        uVar90 = *(undefined8 *)(param_1 + uVar50);
        uVar129 = *(undefined8 *)(local_b0 + uVar48);
        uVar89 = *(undefined8 *)(local_a0 + uVar48);
        sVar87 = (byte)uVar90 - 0x10;
        sVar100 = (byte)((ulong)uVar90 >> 8) - 0x10;
        sVar101 = (byte)((ulong)uVar90 >> 0x10) - 0x10;
        sVar102 = (byte)((ulong)uVar90 >> 0x18) - 0x10;
        auVar91._0_8_ = CONCAT26(sVar102,CONCAT24(sVar101,CONCAT22(sVar100,sVar87)));
        auVar91._8_2_ = (byte)((ulong)uVar90 >> 0x20) - 0x10;
        auVar91._10_2_ = (byte)((ulong)uVar90 >> 0x28) - 0x10;
        auVar91._12_2_ = (byte)((ulong)uVar90 >> 0x30) - 0x10;
        auVar91._14_2_ = (byte)((ulong)uVar90 >> 0x38) - 0x10;
        uVar34 = CONCAT12((char)((ulong)uVar129 >> 8),(short)uVar129) & 0xff00ff;
        sVar83 = (short)uVar34 + -0x80;
        sVar84 = (byte)(uVar34 >> 0x10) - 0x80;
        sVar85 = (byte)((ulong)uVar129 >> 0x10) - 0x80;
        sVar86 = (byte)((ulong)uVar129 >> 0x18) - 0x80;
        sVar104 = (byte)((ulong)uVar129 >> 0x20) - 0x80;
        sVar105 = (byte)((ulong)uVar129 >> 0x28) - 0x80;
        sVar106 = (byte)((ulong)uVar129 >> 0x30) - 0x80;
        sVar107 = (byte)((ulong)uVar129 >> 0x38) - 0x80;
        uVar34 = CONCAT12((char)((ulong)uVar89 >> 8),(short)uVar89) & 0xff00ff;
        sVar124 = (short)uVar34 + -0x80;
        sVar125 = (byte)(uVar34 >> 0x10) - 0x80;
        sVar126 = (byte)((ulong)uVar89 >> 0x10) - 0x80;
        sVar127 = (byte)((ulong)uVar89 >> 0x18) - 0x80;
        sVar114 = (byte)((ulong)uVar89 >> 0x20) - 0x80;
        sVar115 = (byte)((ulong)uVar89 >> 0x28) - 0x80;
        sVar116 = (byte)((ulong)uVar89 >> 0x30) - 0x80;
        sVar117 = (byte)((ulong)uVar89 >> 0x38) - 0x80;
        auVar92._8_8_ = auVar91._8_8_;
        iVar24 = sVar124 * 0x6625 + sVar87 * 0x4a85;
        iVar25 = sVar125 * 0x6625 + sVar100 * 0x4a85;
        uVar54 = (undefined1)((uint)iVar25 >> 8);
        uVar55 = (undefined1)((uint)iVar25 >> 0x10);
        uVar56 = (undefined1)((uint)iVar25 >> 0x18);
        iVar26 = sVar126 * 0x6625 + sVar101 * 0x4a85;
        iVar27 = sVar127 * 0x6625 + sVar102 * 0x4a85;
        iVar30 = sVar114 * 0x6625 + auVar91._8_2_ * 0x4a85;
        iVar31 = sVar115 * 0x6625 + auVar91._10_2_ * 0x4a85;
        uVar57 = (undefined1)((uint)iVar31 >> 8);
        uVar58 = (undefined1)((uint)iVar31 >> 0x10);
        uVar59 = (undefined1)((uint)iVar31 >> 0x18);
        iVar32 = sVar116 * 0x6625 + auVar91._12_2_ * 0x4a85;
        iVar33 = sVar117 * 0x6625 + auVar91._14_2_ * 0x4a85;
        uVar7 = CONCAT13((char)((ushort)sVar84 >> 8),CONCAT12((char)sVar84,sVar83));
        uVar8 = CONCAT15((char)((ushort)sVar85 >> 8),CONCAT14((char)sVar85,uVar7));
        iVar128 = sVar83 * 0x1913 + sVar124 * 0x3408;
        iVar130 = sVar84 * 0x1913 + sVar125 * 0x3408;
        iVar16 = sVar100 * 0x4a85 - iVar130;
        iVar3 = auVar91._10_2_ * 0x4a85 - (sVar105 * 0x1913 + sVar115 * 0x3408);
        iVar12 = auVar91._12_2_ * 0x4a85 - (sVar106 * 0x1913 + sVar116 * 0x3408);
        iVar13 = auVar91._14_2_ * 0x4a85 - (sVar107 * 0x1913 + sVar117 * 0x3408);
        iVar19 = (short)((uint)uVar7 >> 0x10) * 0x811a + sVar100 * 0x4a85;
        iVar20 = (short)((uint6)uVar8 >> 0x20) * 0x811a + sVar101 * 0x4a85;
        iVar21 = (short)(CONCAT17((char)((ushort)sVar86 >> 8),CONCAT16((char)sVar86,uVar8)) >> 0x30)
                 * 0x811a + sVar102 * 0x4a85;
        iVar42 = CONCAT13(sVar105 >> 0xf,(int3)sVar105) * 0x811a + auVar91._10_2_ * 0x4a85;
        iVar1 = sVar106 * 0x811a + auVar91._12_2_ * 0x4a85;
        iVar6 = sVar107 * 0x811a + auVar91._14_2_ * 0x4a85;
        auVar22[4] = (char)iVar25;
        auVar22._0_4_ = iVar24;
        auVar22[5] = uVar54;
        auVar22[6] = uVar55;
        auVar22[7] = uVar56;
        auVar22._8_2_ = (short)iVar26;
        auVar22._10_2_ = (short)((uint)iVar26 >> 0x10);
        auVar22._12_2_ = (short)iVar27;
        auVar22._14_2_ = (short)((uint)iVar27 >> 0x10);
        auVar92._0_8_ = NEON_rshrn(auVar91._0_8_,auVar22,0xe,4);
        auVar28[4] = (char)iVar31;
        auVar28._0_4_ = iVar30;
        auVar28[5] = uVar57;
        auVar28[6] = uVar58;
        auVar28[7] = uVar59;
        auVar28._8_2_ = (short)iVar32;
        auVar28._10_2_ = (short)((uint)iVar32 >> 0x10);
        auVar28._12_2_ = (short)iVar33;
        auVar28._14_2_ = (short)((uint)iVar33 >> 0x10);
        auVar93 = NEON_rshrn2(auVar92,auVar28,0xe,4);
        uVar129 = NEON_sqxtun(CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14((char)iVar25,
                                                                                       iVar24)))),
                              auVar93,2);
        auVar94._8_8_ = auVar93._8_8_;
        auVar14[4] = (char)iVar16;
        auVar14._0_4_ = sVar87 * 0x4a85 - iVar128;
        auVar14[5] = (char)((uint)iVar16 >> 8);
        auVar14[6] = (char)((uint)iVar16 >> 0x10);
        auVar14[7] = (char)((uint)iVar16 >> 0x18);
        auVar14._8_4_ = sVar101 * 0x4a85 - (sVar85 * 0x1913 + sVar126 * 0x3408);
        auVar14._12_4_ = sVar102 * 0x4a85 - (sVar86 * 0x1913 + sVar127 * 0x3408);
        auVar94._0_8_ = NEON_rshrn(auVar93._0_8_,auVar14,0xe,4);
        auVar10[4] = (char)iVar3;
        auVar10._0_4_ = auVar91._8_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
        auVar10[5] = (char)((uint)iVar3 >> 8);
        auVar10[6] = (char)((uint)iVar3 >> 0x10);
        auVar10[7] = (char)((uint)iVar3 >> 0x18);
        auVar10._8_2_ = (short)iVar12;
        auVar10._10_2_ = (short)((uint)iVar12 >> 0x10);
        auVar10._12_2_ = (short)iVar13;
        auVar10._14_2_ = (short)((uint)iVar13 >> 0x10);
        auVar93 = NEON_rshrn2(auVar94,auVar10,0xe,4);
        uVar89 = NEON_sqxtun(CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14((char)iVar31,
                                                                                      iVar30)))),
                             auVar93,2);
        auVar95._8_8_ = auVar93._8_8_;
        auVar17[4] = (char)iVar19;
        auVar17._0_4_ = sVar83 * 0x811a + sVar87 * 0x4a85;
        auVar17[5] = (char)((uint)iVar19 >> 8);
        auVar17[6] = (char)((uint)iVar19 >> 0x10);
        auVar17[7] = (char)((uint)iVar19 >> 0x18);
        auVar17._8_2_ = (short)iVar20;
        auVar17._10_2_ = (short)((uint)iVar20 >> 0x10);
        auVar17._12_2_ = (short)iVar21;
        auVar17._14_2_ = (short)((uint)iVar21 >> 0x10);
        auVar95._0_8_ = NEON_rshrn(auVar93._0_8_,auVar17,0xe,4);
        auVar93[4] = (char)iVar42;
        auVar93._0_4_ = CONCAT13(sVar104 >> 0xf,(int3)sVar104) * 0x811a + auVar91._8_2_ * 0x4a85;
        auVar93[5] = (char)((uint)iVar42 >> 8);
        auVar93[6] = (char)((uint)iVar42 >> 0x10);
        auVar93[7] = (char)((uint)iVar42 >> 0x18);
        auVar93._8_2_ = (short)iVar1;
        auVar93._10_2_ = (short)((uint)iVar1 >> 0x10);
        auVar93._12_2_ = (short)iVar6;
        auVar93._14_2_ = (short)((uint)iVar6 >> 0x10);
        auVar93 = NEON_rshrn2(auVar95,auVar93,0xe,4);
        uVar90 = NEON_sqxtun(CONCAT44(iVar130,iVar128),auVar93,2);
        puVar2 = param_7 + ((ulong)(uint)((int)uVar50 * 3) & 0xfffffffb);
        *puVar2 = (char)uVar129;
        puVar2[1] = (char)uVar89;
        puVar2[2] = (char)uVar90;
        puVar2[3] = (char)((ulong)uVar129 >> 8);
        puVar2[4] = (char)((ulong)uVar89 >> 8);
        puVar2[5] = (char)((ulong)uVar90 >> 8);
        puVar2[6] = (char)((ulong)uVar129 >> 0x10);
        puVar2[7] = (char)((ulong)uVar89 >> 0x10);
        puVar2[8] = (char)((ulong)uVar90 >> 0x10);
        puVar2[9] = (char)((ulong)uVar129 >> 0x18);
        puVar2[10] = (char)((ulong)uVar89 >> 0x18);
        puVar2[0xb] = (char)((ulong)uVar90 >> 0x18);
        puVar2[0xc] = (char)((ulong)uVar129 >> 0x20);
        puVar2[0xd] = (char)((ulong)uVar89 >> 0x20);
        puVar2[0xe] = (char)((ulong)uVar90 >> 0x20);
        puVar2[0xf] = (char)((ulong)uVar129 >> 0x28);
        puVar2[0x10] = (char)((ulong)uVar89 >> 0x28);
        puVar2[0x11] = (char)((ulong)uVar90 >> 0x28);
        puVar2[0x12] = (char)((ulong)uVar129 >> 0x30);
        puVar2[0x13] = (char)((ulong)uVar89 >> 0x30);
        puVar2[0x14] = (char)((ulong)uVar90 >> 0x30);
        puVar2[0x15] = (char)((ulong)uVar129 >> 0x38);
        puVar2[0x16] = (char)((ulong)uVar89 >> 0x38);
        puVar2[0x17] = (char)((ulong)uVar90 >> 0x38);
        uVar48 = 8;
        bVar39 = false;
      } while (bVar49);
      if (param_2 != (byte *)0x0) {
        uVar48 = 0;
        bVar39 = true;
        do {
          bVar49 = bVar39;
          uVar50 = uVar44 | uVar48;
          uVar90 = *(undefined8 *)(param_2 + uVar50);
          uVar129 = *(undefined8 *)(local_90 + uVar48);
          uVar89 = *(undefined8 *)(local_80 + uVar48);
          sVar87 = (byte)uVar90 - 0x10;
          sVar100 = (byte)((ulong)uVar90 >> 8) - 0x10;
          sVar101 = (byte)((ulong)uVar90 >> 0x10) - 0x10;
          sVar102 = (byte)((ulong)uVar90 >> 0x18) - 0x10;
          auVar96._0_8_ = CONCAT26(sVar102,CONCAT24(sVar101,CONCAT22(sVar100,sVar87)));
          auVar96._8_2_ = (byte)((ulong)uVar90 >> 0x20) - 0x10;
          auVar96._10_2_ = (byte)((ulong)uVar90 >> 0x28) - 0x10;
          auVar96._12_2_ = (byte)((ulong)uVar90 >> 0x30) - 0x10;
          auVar96._14_2_ = (byte)((ulong)uVar90 >> 0x38) - 0x10;
          uVar34 = CONCAT12((char)((ulong)uVar129 >> 8),(short)uVar129) & 0xff00ff;
          sVar83 = (short)uVar34 + -0x80;
          sVar84 = (byte)(uVar34 >> 0x10) - 0x80;
          sVar85 = (byte)((ulong)uVar129 >> 0x10) - 0x80;
          sVar86 = (byte)((ulong)uVar129 >> 0x18) - 0x80;
          sVar104 = (byte)((ulong)uVar129 >> 0x20) - 0x80;
          sVar105 = (byte)((ulong)uVar129 >> 0x28) - 0x80;
          sVar106 = (byte)((ulong)uVar129 >> 0x30) - 0x80;
          sVar107 = (byte)((ulong)uVar129 >> 0x38) - 0x80;
          uVar34 = CONCAT12((char)((ulong)uVar89 >> 8),(short)uVar89) & 0xff00ff;
          sVar124 = (short)uVar34 + -0x80;
          sVar125 = (byte)(uVar34 >> 0x10) - 0x80;
          sVar126 = (byte)((ulong)uVar89 >> 0x10) - 0x80;
          sVar127 = (byte)((ulong)uVar89 >> 0x18) - 0x80;
          sVar114 = (byte)((ulong)uVar89 >> 0x20) - 0x80;
          sVar115 = (byte)((ulong)uVar89 >> 0x28) - 0x80;
          sVar116 = (byte)((ulong)uVar89 >> 0x30) - 0x80;
          sVar117 = (byte)((ulong)uVar89 >> 0x38) - 0x80;
          auVar97._8_8_ = auVar96._8_8_;
          iVar24 = sVar124 * 0x6625 + sVar87 * 0x4a85;
          iVar25 = sVar125 * 0x6625 + sVar100 * 0x4a85;
          uVar54 = (undefined1)((uint)iVar25 >> 8);
          uVar55 = (undefined1)((uint)iVar25 >> 0x10);
          uVar56 = (undefined1)((uint)iVar25 >> 0x18);
          iVar26 = sVar126 * 0x6625 + sVar101 * 0x4a85;
          iVar27 = sVar127 * 0x6625 + sVar102 * 0x4a85;
          iVar30 = sVar114 * 0x6625 + auVar96._8_2_ * 0x4a85;
          iVar31 = sVar115 * 0x6625 + auVar96._10_2_ * 0x4a85;
          uVar57 = (undefined1)((uint)iVar31 >> 8);
          uVar58 = (undefined1)((uint)iVar31 >> 0x10);
          uVar59 = (undefined1)((uint)iVar31 >> 0x18);
          iVar32 = sVar116 * 0x6625 + auVar96._12_2_ * 0x4a85;
          iVar33 = sVar117 * 0x6625 + auVar96._14_2_ * 0x4a85;
          uVar7 = CONCAT13((char)((ushort)sVar84 >> 8),CONCAT12((char)sVar84,sVar83));
          uVar8 = CONCAT15((char)((ushort)sVar85 >> 8),CONCAT14((char)sVar85,uVar7));
          iVar128 = sVar83 * 0x1913 + sVar124 * 0x3408;
          iVar130 = sVar84 * 0x1913 + sVar125 * 0x3408;
          iVar16 = sVar100 * 0x4a85 - iVar130;
          iVar3 = auVar96._10_2_ * 0x4a85 - (sVar105 * 0x1913 + sVar115 * 0x3408);
          iVar12 = auVar96._12_2_ * 0x4a85 - (sVar106 * 0x1913 + sVar116 * 0x3408);
          iVar13 = auVar96._14_2_ * 0x4a85 - (sVar107 * 0x1913 + sVar117 * 0x3408);
          iVar19 = (short)((uint)uVar7 >> 0x10) * 0x811a + sVar100 * 0x4a85;
          iVar20 = (short)((uint6)uVar8 >> 0x20) * 0x811a + sVar101 * 0x4a85;
          iVar21 = (short)(CONCAT17((char)((ushort)sVar86 >> 8),CONCAT16((char)sVar86,uVar8)) >>
                          0x30) * 0x811a + sVar102 * 0x4a85;
          iVar42 = CONCAT13(sVar105 >> 0xf,(int3)sVar105) * 0x811a + auVar96._10_2_ * 0x4a85;
          iVar1 = sVar106 * 0x811a + auVar96._12_2_ * 0x4a85;
          iVar6 = sVar107 * 0x811a + auVar96._14_2_ * 0x4a85;
          auVar23[4] = (char)iVar25;
          auVar23._0_4_ = iVar24;
          auVar23[5] = uVar54;
          auVar23[6] = uVar55;
          auVar23[7] = uVar56;
          auVar23._8_2_ = (short)iVar26;
          auVar23._10_2_ = (short)((uint)iVar26 >> 0x10);
          auVar23._12_2_ = (short)iVar27;
          auVar23._14_2_ = (short)((uint)iVar27 >> 0x10);
          auVar97._0_8_ = NEON_rshrn(auVar96._0_8_,auVar23,0xe,4);
          auVar29[4] = (char)iVar31;
          auVar29._0_4_ = iVar30;
          auVar29[5] = uVar57;
          auVar29[6] = uVar58;
          auVar29[7] = uVar59;
          auVar29._8_2_ = (short)iVar32;
          auVar29._10_2_ = (short)((uint)iVar32 >> 0x10);
          auVar29._12_2_ = (short)iVar33;
          auVar29._14_2_ = (short)((uint)iVar33 >> 0x10);
          auVar93 = NEON_rshrn2(auVar97,auVar29,0xe,4);
          uVar129 = NEON_sqxtun(CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14((char)
                                                  iVar25,iVar24)))),auVar93,2);
          auVar98._8_8_ = auVar93._8_8_;
          auVar15[4] = (char)iVar16;
          auVar15._0_4_ = sVar87 * 0x4a85 - iVar128;
          auVar15[5] = (char)((uint)iVar16 >> 8);
          auVar15[6] = (char)((uint)iVar16 >> 0x10);
          auVar15[7] = (char)((uint)iVar16 >> 0x18);
          auVar15._8_4_ = sVar101 * 0x4a85 - (sVar85 * 0x1913 + sVar126 * 0x3408);
          auVar15._12_4_ = sVar102 * 0x4a85 - (sVar86 * 0x1913 + sVar127 * 0x3408);
          auVar98._0_8_ = NEON_rshrn(auVar93._0_8_,auVar15,0xe,4);
          auVar11[4] = (char)iVar3;
          auVar11._0_4_ = auVar96._8_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
          auVar11[5] = (char)((uint)iVar3 >> 8);
          auVar11[6] = (char)((uint)iVar3 >> 0x10);
          auVar11[7] = (char)((uint)iVar3 >> 0x18);
          auVar11._8_2_ = (short)iVar12;
          auVar11._10_2_ = (short)((uint)iVar12 >> 0x10);
          auVar11._12_2_ = (short)iVar13;
          auVar11._14_2_ = (short)((uint)iVar13 >> 0x10);
          auVar93 = NEON_rshrn2(auVar98,auVar11,0xe,4);
          uVar89 = NEON_sqxtun(CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14((char)iVar31
                                                                                        ,iVar30)))),
                               auVar93,2);
          auVar99._8_8_ = auVar93._8_8_;
          auVar18[4] = (char)iVar19;
          auVar18._0_4_ = sVar83 * 0x811a + sVar87 * 0x4a85;
          auVar18[5] = (char)((uint)iVar19 >> 8);
          auVar18[6] = (char)((uint)iVar19 >> 0x10);
          auVar18[7] = (char)((uint)iVar19 >> 0x18);
          auVar18._8_2_ = (short)iVar20;
          auVar18._10_2_ = (short)((uint)iVar20 >> 0x10);
          auVar18._12_2_ = (short)iVar21;
          auVar18._14_2_ = (short)((uint)iVar21 >> 0x10);
          auVar99._0_8_ = NEON_rshrn(auVar93._0_8_,auVar18,0xe,4);
          auVar9[4] = (char)iVar42;
          auVar9._0_4_ = CONCAT13(sVar104 >> 0xf,(int3)sVar104) * 0x811a + auVar96._8_2_ * 0x4a85;
          auVar9[5] = (char)((uint)iVar42 >> 8);
          auVar9[6] = (char)((uint)iVar42 >> 0x10);
          auVar9[7] = (char)((uint)iVar42 >> 0x18);
          auVar9._8_2_ = (short)iVar1;
          auVar9._10_2_ = (short)((uint)iVar1 >> 0x10);
          auVar9._12_2_ = (short)iVar6;
          auVar9._14_2_ = (short)((uint)iVar6 >> 0x10);
          auVar93 = NEON_rshrn2(auVar99,auVar9,0xe,4);
          uVar90 = NEON_sqxtun(CONCAT44(iVar130,iVar128),auVar93,2);
          puVar2 = param_8 + ((ulong)(uint)((int)uVar50 * 3) & 0xfffffffb);
          *puVar2 = (char)uVar129;
          puVar2[1] = (char)uVar89;
          puVar2[2] = (char)uVar90;
          puVar2[3] = (char)((ulong)uVar129 >> 8);
          puVar2[4] = (char)((ulong)uVar89 >> 8);
          puVar2[5] = (char)((ulong)uVar90 >> 8);
          puVar2[6] = (char)((ulong)uVar129 >> 0x10);
          puVar2[7] = (char)((ulong)uVar89 >> 0x10);
          puVar2[8] = (char)((ulong)uVar90 >> 0x10);
          puVar2[9] = (char)((ulong)uVar129 >> 0x18);
          puVar2[10] = (char)((ulong)uVar89 >> 0x18);
          puVar2[0xb] = (char)((ulong)uVar90 >> 0x18);
          puVar2[0xc] = (char)((ulong)uVar129 >> 0x20);
          puVar2[0xd] = (char)((ulong)uVar89 >> 0x20);
          puVar2[0xe] = (char)((ulong)uVar90 >> 0x20);
          puVar2[0xf] = (char)((ulong)uVar129 >> 0x28);
          puVar2[0x10] = (char)((ulong)uVar89 >> 0x28);
          puVar2[0x11] = (char)((ulong)uVar90 >> 0x28);
          puVar2[0x12] = (char)((ulong)uVar129 >> 0x30);
          puVar2[0x13] = (char)((ulong)uVar89 >> 0x30);
          puVar2[0x14] = (char)((ulong)uVar90 >> 0x30);
          puVar2[0x15] = (char)((ulong)uVar129 >> 0x38);
          puVar2[0x16] = (char)((ulong)uVar89 >> 0x38);
          puVar2[0x17] = (char)((ulong)uVar90 >> 0x38);
          uVar48 = 8;
          bVar39 = false;
        } while (bVar49);
      }
      param_3 = param_3 + 8;
      param_5 = param_5 + 8;
      param_4 = param_4 + 8;
      param_6 = param_6 + 8;
      uVar51 = uVar51 + 1;
    } while (uVar51 != uVar40);
  }
  iVar42 = (int)lVar43;
  lVar41 = (long)iVar42;
  ___memcpy_chk(abStack_c9 + 1,param_3,lVar41,9);
  ___memcpy_chk(abStack_d9 + 1,param_5,lVar41,9);
  sVar52 = (size_t)(9 - iVar42);
  _memset(abStack_c9 + (long)iVar42 + 1,(uint)abStack_c9[lVar43],sVar52);
  _memset(abStack_d9 + (long)iVar42 + 1,(uint)abStack_d9[lVar43],sVar52);
  uVar38 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  bVar70 = (byte)uStack_c7;
  uVar34 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  bVar71 = (byte)((uint7)uStack_c7 >> 8);
  bVar72 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar73 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar74 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar75 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar76 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar77 = (byte)((uint7)uStack_d7 >> 8);
  uVar35 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  bVar78 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar79 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar80 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar81 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar82 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar36 = CONCAT12((char)uStack_d7,(short)CONCAT71(uStack_d7,abStack_d9[1])) & 0xff00ff;
  sVar83 = (short)uVar36 + (ushort)bVar70;
  sVar84 = (ushort)(byte)(uVar36 >> 0x10) + (ushort)bVar71;
  uVar36 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  uVar37 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  sVar85 = sVar83 + (short)uVar36 + (short)uVar37;
  sVar86 = sVar84 + (ushort)(byte)(uVar36 >> 0x10) + (ushort)(byte)(uVar37 >> 0x10);
  sVar124 = (ushort)bVar77 + (ushort)bVar72 + (ushort)bVar71 + (ushort)bVar78;
  sVar125 = (ushort)bVar78 + (ushort)bVar73 + (ushort)bVar72 + (ushort)bVar79;
  sVar126 = (ushort)bVar79 + (ushort)bVar74 + (ushort)bVar73 + (ushort)bVar80;
  sVar127 = (ushort)bVar80 + (ushort)bVar75 + (ushort)bVar74 + (ushort)bVar81;
  sVar87 = (ushort)bVar81 + (ushort)bVar76 + (ushort)bVar75 + (ushort)bVar82;
  sVar100 = (ushort)bVar82 + (ushort)bStack_c0 + (ushort)bVar76 + (ushort)bStack_d0;
  uVar54 = (undefined1)((ushort)(sVar85 + (short)uVar34 * 2 + (short)uVar35 * 2) >> 3);
  uVar56 = (undefined1)
           ((ushort)(sVar86 + (ushort)(byte)(uVar34 >> 0x10) * 2 +
                    (ushort)(byte)(uVar35 >> 0x10) * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar124 + (ushort)bVar71 * 2 + (ushort)bVar78 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar125 + (ushort)bVar72 * 2 + (ushort)bVar79 * 2) >> 3);
  uVar62 = (undefined1)((ushort)(sVar126 + (ushort)bVar73 * 2 + (ushort)bVar80 * 2) >> 3);
  uVar64 = (undefined1)((ushort)(sVar127 + (ushort)bVar74 * 2 + (ushort)bVar81 * 2) >> 3);
  uVar66 = (undefined1)((ushort)(sVar87 + (ushort)bVar75 * 2 + (ushort)bVar82 * 2) >> 3);
  uVar68 = (undefined1)((ushort)(sVar100 + (ushort)bVar76 * 2 + (ushort)bStack_d0 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 * 2 + sVar85) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 * 2 + sVar86) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bVar72) * 2 + sVar124) >> 3);
  uVar61 = (undefined1)((ushort)(((ushort)bVar78 + (ushort)bVar73) * 2 + sVar125) >> 3);
  uVar63 = (undefined1)((ushort)(((ushort)bVar79 + (ushort)bVar74) * 2 + sVar126) >> 3);
  uVar65 = (undefined1)((ushort)(((ushort)bVar80 + (ushort)bVar75) * 2 + sVar127) >> 3);
  uVar67 = (undefined1)((ushort)(((ushort)bVar81 + (ushort)bVar76) * 2 + sVar87) >> 3);
  uVar69 = (undefined1)((ushort)(((ushort)bVar82 + (ushort)bStack_c0) * 2 + sVar100) >> 3);
  uVar90 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  uVar88 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),
                       CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                               )),1);
  uVar129 = NEON_urhadd(CONCAT71(uStack_d7,abStack_d9[1]),
                        CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                                )),1);
  uVar89 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  local_b0[0] = (byte)uVar90;
  local_b0[1] = (byte)uVar88;
  local_b0[2] = (byte)((ulong)uVar90 >> 8);
  local_b0[3] = (byte)((ulong)uVar88 >> 8);
  uStack_ac = (undefined1)((ulong)uVar90 >> 0x10);
  uStack_ab = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_aa = (undefined1)((ulong)uVar90 >> 0x18);
  uStack_a9 = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_a8 = (undefined1)((ulong)uVar90 >> 0x20);
  uStack_a7 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_a6 = (undefined1)((ulong)uVar90 >> 0x28);
  uStack_a5 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_a4 = (undefined1)((ulong)uVar90 >> 0x30);
  uStack_a3 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_a2 = (undefined1)((ulong)uVar90 >> 0x38);
  uStack_a1 = (undefined1)((ulong)uVar88 >> 0x38);
  local_90[0] = (byte)uVar129;
  local_90[1] = (byte)uVar89;
  local_90[2] = (byte)((ulong)uVar129 >> 8);
  local_90[3] = (byte)((ulong)uVar89 >> 8);
  uStack_8c = (undefined1)((ulong)uVar129 >> 0x10);
  uStack_8b = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_8a = (undefined1)((ulong)uVar129 >> 0x18);
  uStack_89 = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_88 = (undefined1)((ulong)uVar129 >> 0x20);
  uStack_87 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_86 = (undefined1)((ulong)uVar129 >> 0x28);
  uStack_85 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_84 = (undefined1)((ulong)uVar129 >> 0x30);
  uStack_83 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_82 = (undefined1)((ulong)uVar129 >> 0x38);
  uStack_81 = (undefined1)((ulong)uVar89 >> 0x38);
  ___memcpy_chk(abStack_c9 + 1,param_4,lVar41,9);
  ___memcpy_chk(abStack_d9 + 1,param_6,lVar41,9);
  _memset(abStack_c9 + (long)iVar42 + 1,(uint)abStack_c9[lVar43],sVar52);
  _memset(abStack_d9 + (long)iVar42 + 1,(uint)abStack_d9[lVar43],sVar52);
  uVar38 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  bVar70 = (byte)uStack_c7;
  uVar34 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  bVar71 = (byte)((uint7)uStack_c7 >> 8);
  bVar72 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar73 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar74 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar75 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar76 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar77 = (byte)((uint7)uStack_d7 >> 8);
  uVar35 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  bVar78 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar79 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar80 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar81 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar82 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar36 = CONCAT12((char)uStack_d7,(short)CONCAT71(uStack_d7,abStack_d9[1])) & 0xff00ff;
  sVar83 = (short)uVar36 + (ushort)bVar70;
  sVar84 = (ushort)(byte)(uVar36 >> 0x10) + (ushort)bVar71;
  uVar36 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  uVar37 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  sVar85 = sVar83 + (short)uVar36 + (short)uVar37;
  sVar86 = sVar84 + (ushort)(byte)(uVar36 >> 0x10) + (ushort)(byte)(uVar37 >> 0x10);
  sVar124 = (ushort)bVar77 + (ushort)bVar72 + (ushort)bVar71 + (ushort)bVar78;
  sVar125 = (ushort)bVar78 + (ushort)bVar73 + (ushort)bVar72 + (ushort)bVar79;
  sVar126 = (ushort)bVar79 + (ushort)bVar74 + (ushort)bVar73 + (ushort)bVar80;
  sVar127 = (ushort)bVar80 + (ushort)bVar75 + (ushort)bVar74 + (ushort)bVar81;
  sVar87 = (ushort)bVar81 + (ushort)bVar76 + (ushort)bVar75 + (ushort)bVar82;
  sVar100 = (ushort)bVar82 + (ushort)bStack_c0 + (ushort)bVar76 + (ushort)bStack_d0;
  uVar54 = (undefined1)((ushort)(sVar85 + (short)uVar34 * 2 + (short)uVar35 * 2) >> 3);
  uVar56 = (undefined1)
           ((ushort)(sVar86 + (ushort)(byte)(uVar34 >> 0x10) * 2 +
                    (ushort)(byte)(uVar35 >> 0x10) * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar124 + (ushort)bVar71 * 2 + (ushort)bVar78 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar125 + (ushort)bVar72 * 2 + (ushort)bVar79 * 2) >> 3);
  uVar62 = (undefined1)((ushort)(sVar126 + (ushort)bVar73 * 2 + (ushort)bVar80 * 2) >> 3);
  uVar64 = (undefined1)((ushort)(sVar127 + (ushort)bVar74 * 2 + (ushort)bVar81 * 2) >> 3);
  uVar66 = (undefined1)((ushort)(sVar87 + (ushort)bVar75 * 2 + (ushort)bVar82 * 2) >> 3);
  uVar68 = (undefined1)((ushort)(sVar100 + (ushort)bVar76 * 2 + (ushort)bStack_d0 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 * 2 + sVar85) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 * 2 + sVar86) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bVar72) * 2 + sVar124) >> 3);
  uVar61 = (undefined1)((ushort)(((ushort)bVar78 + (ushort)bVar73) * 2 + sVar125) >> 3);
  uVar63 = (undefined1)((ushort)(((ushort)bVar79 + (ushort)bVar74) * 2 + sVar126) >> 3);
  uVar65 = (undefined1)((ushort)(((ushort)bVar80 + (ushort)bVar75) * 2 + sVar127) >> 3);
  uVar67 = (undefined1)((ushort)(((ushort)bVar81 + (ushort)bVar76) * 2 + sVar87) >> 3);
  uVar69 = (undefined1)((ushort)(((ushort)bVar82 + (ushort)bStack_c0) * 2 + sVar100) >> 3);
  uVar90 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  uVar88 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),
                       CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                               )),1);
  uVar129 = NEON_urhadd(CONCAT71(uStack_d7,abStack_d9[1]),
                        CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                                )),1);
  uVar89 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  local_a0[0] = (byte)uVar90;
  local_a0[1] = (byte)uVar88;
  local_a0[2] = (byte)((ulong)uVar90 >> 8);
  local_a0[3] = (byte)((ulong)uVar88 >> 8);
  uStack_9c = (undefined1)((ulong)uVar90 >> 0x10);
  uStack_9b = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_9a = (undefined1)((ulong)uVar90 >> 0x18);
  uStack_99 = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_98 = (undefined1)((ulong)uVar90 >> 0x20);
  uStack_97 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_96 = (undefined1)((ulong)uVar90 >> 0x28);
  uStack_95 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_94 = (undefined1)((ulong)uVar90 >> 0x30);
  uStack_93 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_92 = (undefined1)((ulong)uVar90 >> 0x38);
  uStack_91 = (undefined1)((ulong)uVar88 >> 0x38);
  local_80[0] = (byte)uVar129;
  local_80[1] = (byte)uVar89;
  local_80[2] = (byte)((ulong)uVar129 >> 8);
  local_80[3] = (byte)((ulong)uVar89 >> 8);
  uStack_7c = (undefined1)((ulong)uVar129 >> 0x10);
  uStack_7b = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_7a = (undefined1)((ulong)uVar129 >> 0x18);
  uStack_79 = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_78 = (undefined1)((ulong)uVar129 >> 0x20);
  uStack_77 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_76 = (undefined1)((ulong)uVar129 >> 0x28);
  uStack_75 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_74 = (undefined1)((ulong)uVar129 >> 0x30);
  uStack_73 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_72 = (undefined1)((ulong)uVar129 >> 0x38);
  uStack_71 = (undefined1)((ulong)uVar89 >> 0x38);
  if ((int)uVar53 < param_9) {
    uVar44 = (ulong)(~(uVar47 << 4) + param_9);
    uVar46 = uVar47 * 0x30 | 3;
    pbVar45 = local_a0;
    uVar51 = uVar44;
    uVar40 = uVar53;
    do {
      bVar71 = pbVar45[-0x10];
      bVar70 = *pbVar45;
      puVar2 = param_7 + (int)uVar46;
      iVar42 = (uint)param_1[(int)uVar40] * 0x4a85;
      uVar5 = iVar42 + (uint)bVar70 * 0x6625;
      uVar4 = uVar5 - 0x379ad0;
      uVar54 = 0;
      if (0x379acf < uVar5) {
        uVar54 = 0xff;
      }
      uVar55 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar55 = uVar54;
      }
      *puVar2 = uVar55;
      iVar1 = iVar42 + (uint)bVar71 * -0x1913 + (uint)bVar70 * -0x3408;
      uVar4 = iVar1 + 0x220530;
      uVar54 = 0;
      if (-0x220531 < iVar1) {
        uVar54 = 0xff;
      }
      uVar55 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar55 = uVar54;
      }
      puVar2[1] = uVar55;
      uVar5 = iVar42 + (uint)bVar71 * 0x811a;
      uVar4 = uVar5 - 0x451550;
      uVar54 = 0;
      if (0x45154f < uVar5) {
        uVar54 = 0xff;
      }
      uVar55 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar55 = uVar54;
      }
      puVar2[2] = uVar55;
      uVar40 = uVar40 + 1;
      uVar46 = uVar46 + 3;
      uVar51 = uVar51 - 1;
      pbVar45 = pbVar45 + 1;
    } while (uVar51 != 0);
    if (param_2 != (byte *)0x0) {
      uVar47 = uVar47 * 0x30 | 3;
      pbVar45 = local_80;
      do {
        bVar71 = pbVar45[-0x10];
        bVar70 = *pbVar45;
        puVar2 = param_8 + (int)uVar47;
        iVar42 = (uint)param_2[(int)uVar53] * 0x4a85;
        uVar46 = iVar42 + (uint)bVar70 * 0x6625;
        uVar40 = uVar46 - 0x379ad0;
        uVar54 = 0;
        if (0x379acf < uVar46) {
          uVar54 = 0xff;
        }
        uVar55 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar55 = uVar54;
        }
        *puVar2 = uVar55;
        iVar1 = iVar42 + (uint)bVar71 * -0x1913 + (uint)bVar70 * -0x3408;
        uVar40 = iVar1 + 0x220530;
        uVar54 = 0;
        if (-0x220531 < iVar1) {
          uVar54 = 0xff;
        }
        uVar55 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar55 = uVar54;
        }
        puVar2[1] = uVar55;
        uVar46 = iVar42 + (uint)bVar71 * 0x811a;
        uVar40 = uVar46 - 0x451550;
        uVar54 = 0;
        if (0x45154f < uVar46) {
          uVar54 = 0xff;
        }
        uVar55 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar55 = uVar54;
        }
        puVar2[2] = uVar55;
        uVar53 = uVar53 + 1;
        uVar47 = uVar47 + 3;
        uVar44 = uVar44 - 1;
        pbVar45 = pbVar45 + 1;
      } while (uVar44 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010ca594(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined6 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  int iVar26;
  int iVar27;
  uint3 uVar28;
  uint3 uVar29;
  uint3 uVar30;
  undefined2 uVar31;
  uint3 uVar32;
  bool bVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  uint uVar36;
  int iVar37;
  ulong uVar38;
  byte *pbVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  bool bVar44;
  uint uVar45;
  size_t sVar46;
  long lVar47;
  long lVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  undefined8 uVar86;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  short sVar87;
  short sVar97;
  short sVar98;
  undefined8 uVar88;
  undefined8 uVar89;
  short sVar99;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  byte bVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  short sVar114;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  undefined8 uVar115;
  byte bVar127;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined4 local_10c;
  undefined1 local_108;
  undefined7 uStack_107;
  byte bStack_100;
  byte abStack_f9 [2];
  undefined7 uStack_f7;
  byte bStack_f0;
  byte local_e0 [4];
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  byte local_d0 [4];
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  byte local_c0 [4];
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  byte local_b0 [4];
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  long local_a0;
  undefined1 auVar90 [16];
  
  local_a0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar48 = (long)((ulong)(param_9 + 1) << 0x20) >> 0x21;
  uVar42 = lVar48 - 1;
  lVar48 = lVar48 - (uVar42 & 0xfffffffffffffff8);
  iVar37 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar45 = iVar37 + (uint)*param_3 >> 1;
  uVar40 = iVar1 + (uint)*param_4 >> 1;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar36 = iVar6 + uVar40 * 0x6625;
  uVar41 = uVar36 - 0x379ad0;
  uVar49 = 0;
  if (0x379acf < uVar36) {
    uVar49 = 0xff;
  }
  uVar50 = (char)(uVar41 >> 0xe);
  if (0x3fffff < uVar41) {
    uVar50 = uVar49;
  }
  *param_7 = uVar50;
  iVar3 = iVar6 + uVar45 * -0x1913 + uVar40 * -0x3408;
  uVar41 = iVar3 + 0x220530;
  uVar49 = 0;
  if (-0x220531 < iVar3) {
    uVar49 = 0xff;
  }
  uVar50 = (char)(uVar41 >> 0xe);
  if (0x3fffff < uVar41) {
    uVar50 = uVar49;
  }
  param_7[1] = uVar50;
  uVar45 = iVar6 + uVar45 * 0x811a;
  uVar41 = uVar45 - 0x451550;
  uVar49 = 0;
  if (0x45154f < uVar45) {
    uVar49 = 0xff;
  }
  uVar50 = (char)(uVar41 >> 0xe);
  if (0x3fffff < uVar41) {
    uVar50 = uVar49;
  }
  uVar41 = (int)uVar42 >> 3;
  param_7[2] = uVar50;
  param_7[3] = 0xff;
  if (param_2 != (byte *)0x0) {
    uVar40 = iVar37 + (uint)*param_5 >> 1;
    uVar36 = iVar1 + (uint)*param_6 >> 1;
    iVar37 = (uint)*param_2 * 0x4a85;
    uVar4 = iVar37 + uVar36 * 0x6625;
    uVar45 = uVar4 - 0x379ad0;
    uVar49 = 0;
    if (0x379acf < uVar4) {
      uVar49 = 0xff;
    }
    uVar50 = (char)(uVar45 >> 0xe);
    if (0x3fffff < uVar45) {
      uVar50 = uVar49;
    }
    *param_8 = uVar50;
    iVar1 = iVar37 + uVar40 * -0x1913 + uVar36 * -0x3408;
    uVar45 = iVar1 + 0x220530;
    uVar49 = 0;
    if (-0x220531 < iVar1) {
      uVar49 = 0xff;
    }
    uVar50 = (char)(uVar45 >> 0xe);
    if (0x3fffff < uVar45) {
      uVar50 = uVar49;
    }
    param_8[1] = uVar50;
    uVar40 = iVar37 + uVar40 * 0x811a;
    uVar45 = uVar40 - 0x451550;
    uVar49 = 0;
    if (0x45154f < uVar40) {
      uVar49 = 0xff;
    }
    uVar50 = (char)(uVar45 >> 0xe);
    if (0x3fffff < uVar45) {
      uVar50 = uVar49;
    }
    param_8[2] = uVar50;
    param_8[3] = 0xff;
  }
  uVar45 = uVar41 << 4 | 1;
  local_10c = param_9;
  if (0x10 < param_9) {
    uVar38 = 0;
    uVar42 = 0;
    uVar40 = uVar41;
    if ((int)uVar41 < 2) {
      uVar40 = 1;
    }
    do {
      uVar43 = 0;
      puVar35 = param_8 + uVar38 + 4;
      puVar34 = param_7 + uVar38 + 4;
      uVar88 = *(undefined8 *)param_3;
      uVar86 = *(undefined8 *)(param_3 + 1);
      bVar72 = (byte)((ulong)uVar86 >> 8);
      bVar73 = (byte)((ulong)uVar86 >> 0x10);
      bVar74 = (byte)((ulong)uVar86 >> 0x18);
      bVar75 = (byte)((ulong)uVar86 >> 0x20);
      bVar76 = (byte)((ulong)uVar86 >> 0x28);
      bVar77 = (byte)((ulong)uVar86 >> 0x30);
      bVar100 = (byte)((ulong)uVar86 >> 0x38);
      uVar89 = *(undefined8 *)param_5;
      uVar49 = (undefined1)((ulong)uVar89 >> 8);
      bVar105 = (byte)((ulong)uVar89 >> 0x10);
      bVar106 = (byte)((ulong)uVar89 >> 0x18);
      bVar107 = (byte)((ulong)uVar89 >> 0x20);
      bVar108 = (byte)((ulong)uVar89 >> 0x28);
      bVar109 = (byte)((ulong)uVar89 >> 0x30);
      bVar110 = (byte)((ulong)uVar89 >> 0x38);
      uVar115 = *(undefined8 *)(param_5 + 1);
      bVar65 = (byte)((ulong)uVar88 >> 8);
      bVar66 = (byte)((ulong)uVar88 >> 0x10);
      bVar67 = (byte)((ulong)uVar88 >> 0x18);
      bVar68 = (byte)((ulong)uVar88 >> 0x20);
      bVar69 = (byte)((ulong)uVar88 >> 0x28);
      bVar70 = (byte)((ulong)uVar88 >> 0x30);
      bVar71 = (byte)((ulong)uVar88 >> 0x38);
      bVar121 = (byte)((ulong)uVar115 >> 8);
      bVar122 = (byte)((ulong)uVar115 >> 0x10);
      bVar123 = (byte)((ulong)uVar115 >> 0x18);
      bVar124 = (byte)((ulong)uVar115 >> 0x20);
      bVar125 = (byte)((ulong)uVar115 >> 0x28);
      bVar126 = (byte)((ulong)uVar115 >> 0x30);
      bVar127 = (byte)((ulong)uVar115 >> 0x38);
      uVar28 = CONCAT12(bVar72,(short)uVar86) & 0xff00ff;
      uVar29 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar30 = CONCAT12(bVar121,(short)uVar115) & 0xff00ff;
      sVar78 = (short)uVar28 + (ushort)(byte)uVar88 + (short)uVar29 + (short)uVar30;
      sVar79 = (ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar65 + (ushort)(byte)(uVar29 >> 0x10) +
               (ushort)(byte)(uVar30 >> 0x10);
      sVar80 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar105 + (ushort)bVar122;
      sVar81 = (ushort)bVar74 + (ushort)bVar67 + (ushort)bVar106 + (ushort)bVar123;
      sVar82 = (ushort)bVar75 + (ushort)bVar68 + (ushort)bVar107 + (ushort)bVar124;
      sVar83 = (ushort)bVar76 + (ushort)bVar69 + (ushort)bVar108 + (ushort)bVar125;
      sVar84 = (ushort)bVar77 + (ushort)bVar70 + (ushort)bVar109 + (ushort)bVar126;
      sVar85 = (ushort)bVar100 + (ushort)bVar71 + (ushort)bVar110 + (ushort)bVar127;
      uVar28 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar49 = (undefined1)
               ((ushort)(sVar78 + (ushort)(byte)uVar88 * 2 + (ushort)(byte)uVar115 * 2) >> 3);
      uVar51 = (undefined1)((ushort)(sVar79 + (ushort)bVar65 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar53 = (undefined1)((ushort)(sVar80 + (ushort)bVar66 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(sVar81 + (ushort)bVar67 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar57 = (undefined1)((ushort)(sVar82 + (ushort)bVar68 * 2 + (ushort)bVar124 * 2) >> 3);
      uVar59 = (undefined1)((ushort)(sVar83 + (ushort)bVar69 * 2 + (ushort)bVar125 * 2) >> 3);
      uVar61 = (undefined1)((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)bVar126 * 2) >> 3);
      uVar63 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar50 = (undefined1)((ushort)(((short)uVar28 + (ushort)(byte)uVar86) * 2 + sVar78) >> 3);
      uVar52 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar72) * 2 + sVar79) >> 3);
      uVar54 = (undefined1)((ushort)(((ushort)bVar105 + (ushort)bVar73) * 2 + sVar80) >> 3);
      uVar56 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar74) * 2 + sVar81) >> 3);
      uVar58 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar75) * 2 + sVar82) >> 3);
      uVar60 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar76) * 2 + sVar83) >> 3);
      uVar62 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar64 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar100) * 2 + sVar85) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      local_e0[0] = (byte)uVar88;
      local_e0[1] = (char)uVar86;
      local_e0[2] = (char)((ulong)uVar88 >> 8);
      local_e0[3] = (char)((ulong)uVar86 >> 8);
      uStack_dc = (char)((ulong)uVar88 >> 0x10);
      uStack_db = (char)((ulong)uVar86 >> 0x10);
      uStack_da = (char)((ulong)uVar88 >> 0x18);
      uStack_d9 = (char)((ulong)uVar86 >> 0x18);
      uStack_d8 = (char)((ulong)uVar88 >> 0x20);
      uStack_d7 = (char)((ulong)uVar86 >> 0x20);
      uStack_d6 = (char)((ulong)uVar88 >> 0x28);
      uStack_d5 = (char)((ulong)uVar86 >> 0x28);
      uStack_d4 = (char)((ulong)uVar88 >> 0x30);
      uStack_d3 = (char)((ulong)uVar86 >> 0x30);
      uStack_d2 = (char)((ulong)uVar88 >> 0x38);
      uStack_d1 = (char)((ulong)uVar86 >> 0x38);
      uVar88 = NEON_urhadd(uVar115,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      local_c0[0] = (byte)uVar89;
      local_c0[1] = (char)uVar88;
      local_c0[2] = (char)((ulong)uVar89 >> 8);
      local_c0[3] = (char)((ulong)uVar88 >> 8);
      uStack_bc = (char)((ulong)uVar89 >> 0x10);
      uStack_bb = (char)((ulong)uVar88 >> 0x10);
      uStack_ba = (char)((ulong)uVar89 >> 0x18);
      uStack_b9 = (char)((ulong)uVar88 >> 0x18);
      uStack_b8 = (char)((ulong)uVar89 >> 0x20);
      uStack_b7 = (char)((ulong)uVar88 >> 0x20);
      uStack_b6 = (char)((ulong)uVar89 >> 0x28);
      uStack_b5 = (char)((ulong)uVar88 >> 0x28);
      uStack_b4 = (char)((ulong)uVar89 >> 0x30);
      uStack_b3 = (char)((ulong)uVar88 >> 0x30);
      uStack_b2 = (char)((ulong)uVar89 >> 0x38);
      uStack_b1 = (char)((ulong)uVar88 >> 0x38);
      uVar88 = *(undefined8 *)param_4;
      uVar86 = *(undefined8 *)(param_4 + 1);
      bVar72 = (byte)((ulong)uVar86 >> 8);
      bVar73 = (byte)((ulong)uVar86 >> 0x10);
      bVar74 = (byte)((ulong)uVar86 >> 0x18);
      bVar75 = (byte)((ulong)uVar86 >> 0x20);
      bVar76 = (byte)((ulong)uVar86 >> 0x28);
      bVar77 = (byte)((ulong)uVar86 >> 0x30);
      bVar100 = (byte)((ulong)uVar86 >> 0x38);
      uVar89 = *(undefined8 *)param_6;
      uVar49 = (undefined1)((ulong)uVar89 >> 8);
      bVar105 = (byte)((ulong)uVar89 >> 0x10);
      bVar106 = (byte)((ulong)uVar89 >> 0x18);
      bVar107 = (byte)((ulong)uVar89 >> 0x20);
      bVar108 = (byte)((ulong)uVar89 >> 0x28);
      bVar109 = (byte)((ulong)uVar89 >> 0x30);
      bVar110 = (byte)((ulong)uVar89 >> 0x38);
      uVar115 = *(undefined8 *)(param_6 + 1);
      bVar65 = (byte)((ulong)uVar88 >> 8);
      bVar66 = (byte)((ulong)uVar88 >> 0x10);
      bVar67 = (byte)((ulong)uVar88 >> 0x18);
      bVar68 = (byte)((ulong)uVar88 >> 0x20);
      bVar69 = (byte)((ulong)uVar88 >> 0x28);
      bVar70 = (byte)((ulong)uVar88 >> 0x30);
      bVar71 = (byte)((ulong)uVar88 >> 0x38);
      bVar121 = (byte)((ulong)uVar115 >> 8);
      bVar122 = (byte)((ulong)uVar115 >> 0x10);
      bVar123 = (byte)((ulong)uVar115 >> 0x18);
      bVar124 = (byte)((ulong)uVar115 >> 0x20);
      bVar125 = (byte)((ulong)uVar115 >> 0x28);
      bVar126 = (byte)((ulong)uVar115 >> 0x30);
      bVar127 = (byte)((ulong)uVar115 >> 0x38);
      uVar28 = CONCAT12(bVar72,(short)uVar86) & 0xff00ff;
      uVar29 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar30 = CONCAT12(bVar121,(short)uVar115) & 0xff00ff;
      sVar78 = (short)uVar28 + (ushort)(byte)uVar88 + (short)uVar29 + (short)uVar30;
      sVar79 = (ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar65 + (ushort)(byte)(uVar29 >> 0x10) +
               (ushort)(byte)(uVar30 >> 0x10);
      sVar80 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar105 + (ushort)bVar122;
      sVar81 = (ushort)bVar74 + (ushort)bVar67 + (ushort)bVar106 + (ushort)bVar123;
      sVar82 = (ushort)bVar75 + (ushort)bVar68 + (ushort)bVar107 + (ushort)bVar124;
      sVar83 = (ushort)bVar76 + (ushort)bVar69 + (ushort)bVar108 + (ushort)bVar125;
      sVar84 = (ushort)bVar77 + (ushort)bVar70 + (ushort)bVar109 + (ushort)bVar126;
      sVar85 = (ushort)bVar100 + (ushort)bVar71 + (ushort)bVar110 + (ushort)bVar127;
      uVar28 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar49 = (undefined1)
               ((ushort)(sVar78 + (ushort)(byte)uVar88 * 2 + (ushort)(byte)uVar115 * 2) >> 3);
      uVar51 = (undefined1)((ushort)(sVar79 + (ushort)bVar65 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar53 = (undefined1)((ushort)(sVar80 + (ushort)bVar66 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(sVar81 + (ushort)bVar67 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar57 = (undefined1)((ushort)(sVar82 + (ushort)bVar68 * 2 + (ushort)bVar124 * 2) >> 3);
      uVar59 = (undefined1)((ushort)(sVar83 + (ushort)bVar69 * 2 + (ushort)bVar125 * 2) >> 3);
      uVar61 = (undefined1)((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)bVar126 * 2) >> 3);
      uVar63 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar50 = (undefined1)((ushort)(((short)uVar28 + (ushort)(byte)uVar86) * 2 + sVar78) >> 3);
      uVar52 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar72) * 2 + sVar79) >> 3);
      uVar54 = (undefined1)((ushort)(((ushort)bVar105 + (ushort)bVar73) * 2 + sVar80) >> 3);
      uVar56 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar74) * 2 + sVar81) >> 3);
      uVar58 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar75) * 2 + sVar82) >> 3);
      uVar60 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar76) * 2 + sVar83) >> 3);
      uVar62 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar64 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar100) * 2 + sVar85) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      local_d0[0] = (byte)uVar88;
      local_d0[1] = (char)uVar86;
      local_d0[2] = (char)((ulong)uVar88 >> 8);
      local_d0[3] = (char)((ulong)uVar86 >> 8);
      uStack_cc = (char)((ulong)uVar88 >> 0x10);
      uStack_cb = (char)((ulong)uVar86 >> 0x10);
      uStack_ca = (char)((ulong)uVar88 >> 0x18);
      uStack_c9 = (char)((ulong)uVar86 >> 0x18);
      uStack_c8 = (char)((ulong)uVar88 >> 0x20);
      uStack_c7 = (char)((ulong)uVar86 >> 0x20);
      uStack_c6 = (char)((ulong)uVar88 >> 0x28);
      uStack_c5 = (char)((ulong)uVar86 >> 0x28);
      uStack_c4 = (char)((ulong)uVar88 >> 0x30);
      uStack_c3 = (char)((ulong)uVar86 >> 0x30);
      uStack_c2 = (char)((ulong)uVar88 >> 0x38);
      uStack_c1 = (char)((ulong)uVar86 >> 0x38);
      uVar88 = NEON_urhadd(uVar115,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      local_b0[0] = (byte)uVar89;
      local_b0[1] = (char)uVar88;
      local_b0[2] = (char)((ulong)uVar89 >> 8);
      local_b0[3] = (char)((ulong)uVar88 >> 8);
      uStack_ac = (char)((ulong)uVar89 >> 0x10);
      uStack_ab = (char)((ulong)uVar88 >> 0x10);
      uStack_aa = (char)((ulong)uVar89 >> 0x18);
      uStack_a9 = (char)((ulong)uVar88 >> 0x18);
      uStack_a8 = (char)((ulong)uVar89 >> 0x20);
      uStack_a7 = (char)((ulong)uVar88 >> 0x20);
      uStack_a6 = (char)((ulong)uVar89 >> 0x28);
      uStack_a5 = (char)((ulong)uVar88 >> 0x28);
      uStack_a4 = (char)((ulong)uVar89 >> 0x30);
      uStack_a3 = (char)((ulong)uVar88 >> 0x30);
      uStack_a2 = (char)((ulong)uVar89 >> 0x38);
      uStack_a1 = (char)((ulong)uVar88 >> 0x38);
      uVar2 = uVar42 << 4 | 1;
      bVar33 = true;
      do {
        bVar44 = bVar33;
        uVar89 = *(undefined8 *)(param_1 + (uVar2 | uVar43));
        uVar88 = *(undefined8 *)(local_e0 + uVar43);
        uVar86 = *(undefined8 *)(local_d0 + uVar43);
        sVar87 = (byte)uVar89 - 0x10;
        sVar97 = (byte)((ulong)uVar89 >> 8) - 0x10;
        sVar98 = (byte)((ulong)uVar89 >> 0x10) - 0x10;
        sVar99 = (byte)((ulong)uVar89 >> 0x18) - 0x10;
        auVar90._0_8_ = CONCAT26(sVar99,CONCAT24(sVar98,CONCAT22(sVar97,sVar87)));
        auVar90._8_2_ = (byte)((ulong)uVar89 >> 0x20) - 0x10;
        auVar90._10_2_ = (byte)((ulong)uVar89 >> 0x28) - 0x10;
        auVar90._12_2_ = (byte)((ulong)uVar89 >> 0x30) - 0x10;
        auVar90._14_2_ = (byte)((ulong)uVar89 >> 0x38) - 0x10;
        uVar28 = CONCAT12((char)((ulong)uVar88 >> 8),(short)uVar88) & 0xff00ff;
        sVar78 = (short)uVar28 + -0x80;
        sVar79 = (byte)(uVar28 >> 0x10) - 0x80;
        sVar80 = (byte)((ulong)uVar88 >> 0x10) - 0x80;
        sVar81 = (byte)((ulong)uVar88 >> 0x18) - 0x80;
        sVar101 = (byte)((ulong)uVar88 >> 0x20) - 0x80;
        sVar102 = (byte)((ulong)uVar88 >> 0x28) - 0x80;
        sVar103 = (byte)((ulong)uVar88 >> 0x30) - 0x80;
        sVar104 = (byte)((ulong)uVar88 >> 0x38) - 0x80;
        uVar28 = CONCAT12((char)((ulong)uVar86 >> 8),(short)uVar86) & 0xff00ff;
        sVar82 = (short)uVar28 + -0x80;
        sVar83 = (byte)(uVar28 >> 0x10) - 0x80;
        sVar84 = (byte)((ulong)uVar86 >> 0x10) - 0x80;
        sVar85 = (byte)((ulong)uVar86 >> 0x18) - 0x80;
        sVar111 = (byte)((ulong)uVar86 >> 0x20) - 0x80;
        sVar112 = (byte)((ulong)uVar86 >> 0x28) - 0x80;
        sVar113 = (byte)((ulong)uVar86 >> 0x30) - 0x80;
        sVar114 = (byte)((ulong)uVar86 >> 0x38) - 0x80;
        auVar91._8_8_ = auVar90._8_8_;
        iVar37 = sVar83 * 0x6625 + sVar97 * 0x4a85;
        iVar1 = sVar84 * 0x6625 + sVar98 * 0x4a85;
        iVar6 = sVar85 * 0x6625 + sVar99 * 0x4a85;
        uVar11 = CONCAT13((char)((ushort)sVar79 >> 8),CONCAT12((char)sVar79,sVar78));
        uVar12 = CONCAT15((char)((ushort)sVar80 >> 8),CONCAT14((char)sVar80,uVar11));
        iVar3 = sVar112 * 0x6625 + auVar90._10_2_ * 0x4a85;
        iVar9 = sVar113 * 0x6625 + auVar90._12_2_ * 0x4a85;
        iVar10 = sVar114 * 0x6625 + auVar90._14_2_ * 0x4a85;
        auVar116._0_8_ =
             CONCAT44(sVar97 * 0x4a85 - (sVar79 * 0x1913 + sVar83 * 0x3408),
                      sVar87 * 0x4a85 - (sVar78 * 0x1913 + sVar82 * 0x3408));
        auVar116._8_4_ = sVar98 * 0x4a85 - (sVar80 * 0x1913 + sVar84 * 0x3408);
        auVar116._12_4_ = sVar99 * 0x4a85 - (sVar81 * 0x1913 + sVar85 * 0x3408);
        iVar20 = (short)((uint)uVar11 >> 0x10) * 0x811a + sVar97 * 0x4a85;
        iVar21 = (short)((uint6)uVar12 >> 0x20) * 0x811a + sVar98 * 0x4a85;
        iVar22 = (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar12)) >> 0x30
                        ) * 0x811a + sVar99 * 0x4a85;
        iVar25 = auVar90._10_2_ * 0x4a85 - (sVar102 * 0x1913 + sVar112 * 0x3408);
        iVar26 = auVar90._12_2_ * 0x4a85 - (sVar103 * 0x1913 + sVar113 * 0x3408);
        iVar27 = auVar90._14_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
        iVar15 = CONCAT13(sVar102 >> 0xf,(int3)sVar102) * 0x811a + auVar90._10_2_ * 0x4a85;
        iVar16 = sVar103 * 0x811a + auVar90._12_2_ * 0x4a85;
        iVar17 = sVar104 * 0x811a + auVar90._14_2_ * 0x4a85;
        auVar92[4] = (char)iVar37;
        auVar92._0_4_ = sVar82 * 0x6625 + sVar87 * 0x4a85;
        auVar92[5] = (char)((uint)iVar37 >> 8);
        auVar92[6] = (char)((uint)iVar37 >> 0x10);
        auVar92[7] = (char)((uint)iVar37 >> 0x18);
        auVar92._8_2_ = (short)iVar1;
        auVar92._10_2_ = (short)((uint)iVar1 >> 0x10);
        auVar92._12_2_ = (short)iVar6;
        auVar92._14_2_ = (short)((uint)iVar6 >> 0x10);
        auVar91._0_8_ = NEON_rshrn(auVar90._0_8_,auVar92,0xe,4);
        auVar118[4] = (char)iVar3;
        auVar118._0_4_ = sVar111 * 0x6625 + auVar90._8_2_ * 0x4a85;
        auVar118[5] = (char)((uint)iVar3 >> 8);
        auVar118[6] = (char)((uint)iVar3 >> 0x10);
        auVar118[7] = (char)((uint)iVar3 >> 0x18);
        auVar118._8_2_ = (short)iVar9;
        auVar118._10_2_ = (short)((uint)iVar9 >> 0x10);
        auVar118._12_2_ = (short)iVar10;
        auVar118._14_2_ = (short)((uint)iVar10 >> 0x10);
        auVar92 = NEON_rshrn2(auVar91,auVar118,0xe,4);
        auVar117._8_8_ = auVar116._8_8_;
        auVar117._0_8_ = NEON_rshrn(auVar116._0_8_,auVar116,0xe,4);
        in_d23 = NEON_sqxtun(in_d23,auVar92,2);
        auVar23[4] = (char)iVar25;
        auVar23._0_4_ = auVar90._8_2_ * 0x4a85 - (sVar101 * 0x1913 + sVar111 * 0x3408);
        auVar23[5] = (char)((uint)iVar25 >> 8);
        auVar23[6] = (char)((uint)iVar25 >> 0x10);
        auVar23[7] = (char)((uint)iVar25 >> 0x18);
        auVar23._8_2_ = (short)iVar26;
        auVar23._10_2_ = (short)((uint)iVar26 >> 0x10);
        auVar23._12_2_ = (short)iVar27;
        auVar23._14_2_ = (short)((uint)iVar27 >> 0x10);
        auVar118 = NEON_rshrn2(auVar117,auVar23,0xe,4);
        in_d24 = NEON_sqxtun(in_d24,auVar118,2);
        auVar93._8_8_ = auVar92._8_8_;
        auVar18[4] = (char)iVar20;
        auVar18._0_4_ = sVar78 * 0x811a + sVar87 * 0x4a85;
        auVar18[5] = (char)((uint)iVar20 >> 8);
        auVar18[6] = (char)((uint)iVar20 >> 0x10);
        auVar18[7] = (char)((uint)iVar20 >> 0x18);
        auVar18._8_2_ = (short)iVar21;
        auVar18._10_2_ = (short)((uint)iVar21 >> 0x10);
        auVar18._12_2_ = (short)iVar22;
        auVar18._14_2_ = (short)((uint)iVar22 >> 0x10);
        auVar93._0_8_ = NEON_rshrn(auVar92._0_8_,auVar18,0xe,4);
        auVar13[4] = (char)iVar15;
        auVar13._0_4_ = CONCAT13(sVar101 >> 0xf,(int3)sVar101) * 0x811a + auVar90._8_2_ * 0x4a85;
        auVar13[5] = (char)((uint)iVar15 >> 8);
        auVar13[6] = (char)((uint)iVar15 >> 0x10);
        auVar13[7] = (char)((uint)iVar15 >> 0x18);
        auVar13._8_2_ = (short)iVar16;
        auVar13._10_2_ = (short)((uint)iVar16 >> 0x10);
        auVar13._12_2_ = (short)iVar17;
        auVar13._14_2_ = (short)((uint)iVar17 >> 0x10);
        auVar92 = NEON_rshrn2(auVar93,auVar13,0xe,4);
        in_d25 = NEON_sqxtun(in_d25,auVar92,2);
        *puVar34 = (char)in_d23;
        puVar34[1] = (char)in_d24;
        puVar34[2] = (char)in_d25;
        puVar34[3] = 0xff;
        puVar34[4] = (char)((ulong)in_d23 >> 8);
        puVar34[5] = (char)((ulong)in_d24 >> 8);
        puVar34[6] = (char)((ulong)in_d25 >> 8);
        puVar34[7] = 0xff;
        puVar34[8] = (char)((ulong)in_d23 >> 0x10);
        puVar34[9] = (char)((ulong)in_d24 >> 0x10);
        puVar34[10] = (char)((ulong)in_d25 >> 0x10);
        puVar34[0xb] = 0xff;
        puVar34[0xc] = (char)((ulong)in_d23 >> 0x18);
        puVar34[0xd] = (char)((ulong)in_d24 >> 0x18);
        puVar34[0xe] = (char)((ulong)in_d25 >> 0x18);
        puVar34[0xf] = 0xff;
        puVar34[0x10] = (char)((ulong)in_d23 >> 0x20);
        puVar34[0x11] = (char)((ulong)in_d24 >> 0x20);
        puVar34[0x12] = (char)((ulong)in_d25 >> 0x20);
        puVar34[0x13] = 0xff;
        puVar34[0x14] = (char)((ulong)in_d23 >> 0x28);
        puVar34[0x15] = (char)((ulong)in_d24 >> 0x28);
        puVar34[0x16] = (char)((ulong)in_d25 >> 0x28);
        puVar34[0x17] = 0xff;
        puVar34[0x18] = (char)((ulong)in_d23 >> 0x30);
        puVar34[0x19] = (char)((ulong)in_d24 >> 0x30);
        puVar34[0x1a] = (char)((ulong)in_d25 >> 0x30);
        puVar34[0x1b] = 0xff;
        puVar34[0x1c] = (char)((ulong)in_d23 >> 0x38);
        puVar34[0x1d] = (char)((ulong)in_d24 >> 0x38);
        puVar34[0x1e] = (char)((ulong)in_d25 >> 0x38);
        puVar34[0x1f] = 0xff;
        puVar34 = puVar34 + 0x20;
        uVar43 = 8;
        bVar33 = false;
      } while (bVar44);
      if (param_2 != (byte *)0x0) {
        uVar43 = 0;
        bVar33 = true;
        do {
          bVar44 = bVar33;
          uVar89 = *(undefined8 *)(param_2 + (uVar2 | uVar43));
          uVar88 = *(undefined8 *)(local_c0 + uVar43);
          uVar86 = *(undefined8 *)(local_b0 + uVar43);
          sVar87 = (byte)uVar89 - 0x10;
          sVar97 = (byte)((ulong)uVar89 >> 8) - 0x10;
          sVar98 = (byte)((ulong)uVar89 >> 0x10) - 0x10;
          sVar99 = (byte)((ulong)uVar89 >> 0x18) - 0x10;
          auVar94._0_8_ = CONCAT26(sVar99,CONCAT24(sVar98,CONCAT22(sVar97,sVar87)));
          auVar94._8_2_ = (byte)((ulong)uVar89 >> 0x20) - 0x10;
          auVar94._10_2_ = (byte)((ulong)uVar89 >> 0x28) - 0x10;
          auVar94._12_2_ = (byte)((ulong)uVar89 >> 0x30) - 0x10;
          auVar94._14_2_ = (byte)((ulong)uVar89 >> 0x38) - 0x10;
          uVar28 = CONCAT12((char)((ulong)uVar88 >> 8),(short)uVar88) & 0xff00ff;
          sVar78 = (short)uVar28 + -0x80;
          sVar79 = (byte)(uVar28 >> 0x10) - 0x80;
          sVar80 = (byte)((ulong)uVar88 >> 0x10) - 0x80;
          sVar81 = (byte)((ulong)uVar88 >> 0x18) - 0x80;
          sVar101 = (byte)((ulong)uVar88 >> 0x20) - 0x80;
          sVar102 = (byte)((ulong)uVar88 >> 0x28) - 0x80;
          sVar103 = (byte)((ulong)uVar88 >> 0x30) - 0x80;
          sVar104 = (byte)((ulong)uVar88 >> 0x38) - 0x80;
          uVar28 = CONCAT12((char)((ulong)uVar86 >> 8),(short)uVar86) & 0xff00ff;
          sVar82 = (short)uVar28 + -0x80;
          sVar83 = (byte)(uVar28 >> 0x10) - 0x80;
          sVar84 = (byte)((ulong)uVar86 >> 0x10) - 0x80;
          sVar85 = (byte)((ulong)uVar86 >> 0x18) - 0x80;
          sVar111 = (byte)((ulong)uVar86 >> 0x20) - 0x80;
          sVar112 = (byte)((ulong)uVar86 >> 0x28) - 0x80;
          sVar113 = (byte)((ulong)uVar86 >> 0x30) - 0x80;
          sVar114 = (byte)((ulong)uVar86 >> 0x38) - 0x80;
          auVar95._8_8_ = auVar94._8_8_;
          iVar37 = sVar83 * 0x6625 + sVar97 * 0x4a85;
          iVar1 = sVar84 * 0x6625 + sVar98 * 0x4a85;
          iVar6 = sVar85 * 0x6625 + sVar99 * 0x4a85;
          uVar11 = CONCAT13((char)((ushort)sVar79 >> 8),CONCAT12((char)sVar79,sVar78));
          uVar12 = CONCAT15((char)((ushort)sVar80 >> 8),CONCAT14((char)sVar80,uVar11));
          iVar3 = sVar112 * 0x6625 + auVar94._10_2_ * 0x4a85;
          iVar9 = sVar113 * 0x6625 + auVar94._12_2_ * 0x4a85;
          iVar10 = sVar114 * 0x6625 + auVar94._14_2_ * 0x4a85;
          auVar119._0_8_ =
               CONCAT44(sVar97 * 0x4a85 - (sVar79 * 0x1913 + sVar83 * 0x3408),
                        sVar87 * 0x4a85 - (sVar78 * 0x1913 + sVar82 * 0x3408));
          auVar119._8_4_ = sVar98 * 0x4a85 - (sVar80 * 0x1913 + sVar84 * 0x3408);
          auVar119._12_4_ = sVar99 * 0x4a85 - (sVar81 * 0x1913 + sVar85 * 0x3408);
          iVar20 = (short)((uint)uVar11 >> 0x10) * 0x811a + sVar97 * 0x4a85;
          iVar21 = (short)((uint6)uVar12 >> 0x20) * 0x811a + sVar98 * 0x4a85;
          iVar22 = (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar12)) >>
                          0x30) * 0x811a + sVar99 * 0x4a85;
          iVar25 = auVar94._10_2_ * 0x4a85 - (sVar102 * 0x1913 + sVar112 * 0x3408);
          iVar26 = auVar94._12_2_ * 0x4a85 - (sVar103 * 0x1913 + sVar113 * 0x3408);
          iVar27 = auVar94._14_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
          iVar15 = CONCAT13(sVar102 >> 0xf,(int3)sVar102) * 0x811a + auVar94._10_2_ * 0x4a85;
          iVar16 = sVar103 * 0x811a + auVar94._12_2_ * 0x4a85;
          iVar17 = sVar104 * 0x811a + auVar94._14_2_ * 0x4a85;
          auVar7[4] = (char)iVar37;
          auVar7._0_4_ = sVar82 * 0x6625 + sVar87 * 0x4a85;
          auVar7[5] = (char)((uint)iVar37 >> 8);
          auVar7[6] = (char)((uint)iVar37 >> 0x10);
          auVar7[7] = (char)((uint)iVar37 >> 0x18);
          auVar7._8_2_ = (short)iVar1;
          auVar7._10_2_ = (short)((uint)iVar1 >> 0x10);
          auVar7._12_2_ = (short)iVar6;
          auVar7._14_2_ = (short)((uint)iVar6 >> 0x10);
          auVar95._0_8_ = NEON_rshrn(auVar94._0_8_,auVar7,0xe,4);
          auVar8[4] = (char)iVar3;
          auVar8._0_4_ = sVar111 * 0x6625 + auVar94._8_2_ * 0x4a85;
          auVar8[5] = (char)((uint)iVar3 >> 8);
          auVar8[6] = (char)((uint)iVar3 >> 0x10);
          auVar8[7] = (char)((uint)iVar3 >> 0x18);
          auVar8._8_2_ = (short)iVar9;
          auVar8._10_2_ = (short)((uint)iVar9 >> 0x10);
          auVar8._12_2_ = (short)iVar10;
          auVar8._14_2_ = (short)((uint)iVar10 >> 0x10);
          auVar92 = NEON_rshrn2(auVar95,auVar8,0xe,4);
          auVar120._8_8_ = auVar119._8_8_;
          auVar120._0_8_ = NEON_rshrn(auVar119._0_8_,auVar119,0xe,4);
          in_d19 = NEON_sqxtun(in_d19,auVar92,2);
          auVar24[4] = (char)iVar25;
          auVar24._0_4_ = auVar94._8_2_ * 0x4a85 - (sVar101 * 0x1913 + sVar111 * 0x3408);
          auVar24[5] = (char)((uint)iVar25 >> 8);
          auVar24[6] = (char)((uint)iVar25 >> 0x10);
          auVar24[7] = (char)((uint)iVar25 >> 0x18);
          auVar24._8_2_ = (short)iVar26;
          auVar24._10_2_ = (short)((uint)iVar26 >> 0x10);
          auVar24._12_2_ = (short)iVar27;
          auVar24._14_2_ = (short)((uint)iVar27 >> 0x10);
          auVar118 = NEON_rshrn2(auVar120,auVar24,0xe,4);
          in_d20 = NEON_sqxtun(in_d20,auVar118,2);
          auVar96._8_8_ = auVar92._8_8_;
          auVar19[4] = (char)iVar20;
          auVar19._0_4_ = sVar78 * 0x811a + sVar87 * 0x4a85;
          auVar19[5] = (char)((uint)iVar20 >> 8);
          auVar19[6] = (char)((uint)iVar20 >> 0x10);
          auVar19[7] = (char)((uint)iVar20 >> 0x18);
          auVar19._8_2_ = (short)iVar21;
          auVar19._10_2_ = (short)((uint)iVar21 >> 0x10);
          auVar19._12_2_ = (short)iVar22;
          auVar19._14_2_ = (short)((uint)iVar22 >> 0x10);
          auVar96._0_8_ = NEON_rshrn(auVar92._0_8_,auVar19,0xe,4);
          auVar14[4] = (char)iVar15;
          auVar14._0_4_ = CONCAT13(sVar101 >> 0xf,(int3)sVar101) * 0x811a + auVar94._8_2_ * 0x4a85;
          auVar14[5] = (char)((uint)iVar15 >> 8);
          auVar14[6] = (char)((uint)iVar15 >> 0x10);
          auVar14[7] = (char)((uint)iVar15 >> 0x18);
          auVar14._8_2_ = (short)iVar16;
          auVar14._10_2_ = (short)((uint)iVar16 >> 0x10);
          auVar14._12_2_ = (short)iVar17;
          auVar14._14_2_ = (short)((uint)iVar17 >> 0x10);
          auVar92 = NEON_rshrn2(auVar96,auVar14,0xe,4);
          in_d21 = NEON_sqxtun(in_d21,auVar92,2);
          *puVar35 = (char)in_d19;
          puVar35[1] = (char)in_d20;
          puVar35[2] = (char)in_d21;
          puVar35[3] = 0xff;
          puVar35[4] = (char)((ulong)in_d19 >> 8);
          puVar35[5] = (char)((ulong)in_d20 >> 8);
          puVar35[6] = (char)((ulong)in_d21 >> 8);
          puVar35[7] = 0xff;
          puVar35[8] = (char)((ulong)in_d19 >> 0x10);
          puVar35[9] = (char)((ulong)in_d20 >> 0x10);
          puVar35[10] = (char)((ulong)in_d21 >> 0x10);
          puVar35[0xb] = 0xff;
          puVar35[0xc] = (char)((ulong)in_d19 >> 0x18);
          puVar35[0xd] = (char)((ulong)in_d20 >> 0x18);
          puVar35[0xe] = (char)((ulong)in_d21 >> 0x18);
          puVar35[0xf] = 0xff;
          puVar35[0x10] = (char)((ulong)in_d19 >> 0x20);
          puVar35[0x11] = (char)((ulong)in_d20 >> 0x20);
          puVar35[0x12] = (char)((ulong)in_d21 >> 0x20);
          puVar35[0x13] = 0xff;
          puVar35[0x14] = (char)((ulong)in_d19 >> 0x28);
          puVar35[0x15] = (char)((ulong)in_d20 >> 0x28);
          puVar35[0x16] = (char)((ulong)in_d21 >> 0x28);
          puVar35[0x17] = 0xff;
          puVar35[0x18] = (char)((ulong)in_d19 >> 0x30);
          puVar35[0x19] = (char)((ulong)in_d20 >> 0x30);
          puVar35[0x1a] = (char)((ulong)in_d21 >> 0x30);
          puVar35[0x1b] = 0xff;
          puVar35[0x1c] = (char)((ulong)in_d19 >> 0x38);
          puVar35[0x1d] = (char)((ulong)in_d20 >> 0x38);
          puVar35[0x1e] = (char)((ulong)in_d21 >> 0x38);
          puVar35[0x1f] = 0xff;
          puVar35 = puVar35 + 0x20;
          uVar43 = 8;
          bVar33 = false;
        } while (bVar44);
      }
      param_3 = param_3 + 8;
      param_5 = param_5 + 8;
      param_4 = param_4 + 8;
      param_6 = param_6 + 8;
      uVar42 = uVar42 + 1;
      uVar38 = (ulong)((int)uVar38 + 0x40);
    } while (uVar42 != uVar40);
  }
  iVar37 = (int)lVar48;
  lVar47 = (long)iVar37;
  ___memcpy_chk(abStack_f9 + 1,param_3,lVar47,9);
  ___memcpy_chk(&local_108,param_5,lVar47,9);
  sVar46 = (size_t)(9 - iVar37);
  _memset(abStack_f9 + (long)iVar37 + 1,(uint)abStack_f9[lVar48],sVar46);
  _memset(&local_108 + iVar37,(uint)*(byte *)((long)&local_10c + lVar48 + 3),sVar46);
  uVar31 = (undefined2)CONCAT71(uStack_f7,abStack_f9[1]);
  bVar65 = (byte)uStack_f7;
  uVar28 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  bVar66 = (byte)((uint7)uStack_f7 >> 8);
  bVar67 = (byte)((uint7)uStack_f7 >> 0x10);
  bVar68 = (byte)((uint7)uStack_f7 >> 0x18);
  bVar69 = (byte)((uint7)uStack_f7 >> 0x20);
  bVar70 = (byte)((uint7)uStack_f7 >> 0x28);
  bVar71 = (byte)((uint7)uStack_f7 >> 0x30);
  bVar72 = (byte)((uint7)uStack_107 >> 8);
  uVar29 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  bVar73 = (byte)((uint7)uStack_107 >> 0x10);
  bVar74 = (byte)((uint7)uStack_107 >> 0x18);
  bVar75 = (byte)((uint7)uStack_107 >> 0x20);
  bVar76 = (byte)((uint7)uStack_107 >> 0x28);
  bVar77 = (byte)((uint7)uStack_107 >> 0x30);
  uVar30 = CONCAT12((char)uStack_107,(short)CONCAT71(uStack_107,local_108)) & 0xff00ff;
  sVar78 = (short)uVar30 + (ushort)bVar65;
  sVar79 = (ushort)(byte)(uVar30 >> 0x10) + (ushort)bVar66;
  uVar30 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  uVar32 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  sVar80 = sVar78 + (short)uVar30 + (short)uVar32;
  sVar81 = sVar79 + (ushort)(byte)(uVar30 >> 0x10) + (ushort)(byte)(uVar32 >> 0x10);
  sVar82 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar83 = (ushort)bVar73 + (ushort)bVar68 + (ushort)bVar67 + (ushort)bVar74;
  sVar84 = (ushort)bVar74 + (ushort)bVar69 + (ushort)bVar68 + (ushort)bVar75;
  sVar85 = (ushort)bVar75 + (ushort)bVar70 + (ushort)bVar69 + (ushort)bVar76;
  sVar87 = (ushort)bVar76 + (ushort)bVar71 + (ushort)bVar70 + (ushort)bVar77;
  sVar97 = (ushort)bVar77 + (ushort)bStack_f0 + (ushort)bVar71 + (ushort)bStack_100;
  uVar49 = (undefined1)((ushort)(sVar80 + (short)uVar28 * 2 + (short)uVar29 * 2) >> 3);
  uVar51 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar28 >> 0x10) * 2 +
                    (ushort)(byte)(uVar29 >> 0x10) * 2) >> 3);
  uVar53 = (undefined1)((ushort)(sVar82 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 + (ushort)bVar67 * 2 + (ushort)bVar74 * 2) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 + (ushort)bVar68 * 2 + (ushort)bVar75 * 2) >> 3);
  uVar59 = (undefined1)((ushort)(sVar85 + (ushort)bVar69 * 2 + (ushort)bVar76 * 2) >> 3);
  uVar61 = (undefined1)((ushort)(sVar87 + (ushort)bVar70 * 2 + (ushort)bVar77 * 2) >> 3);
  uVar63 = (undefined1)((ushort)(sVar97 + (ushort)bVar71 * 2 + (ushort)bStack_100 * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar78 * 2 + sVar80) >> 3);
  uVar52 = (undefined1)((ushort)(sVar79 * 2 + sVar81) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar82) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bVar68) * 2 + sVar83) >> 3);
  uVar58 = (undefined1)((ushort)(((ushort)bVar74 + (ushort)bVar69) * 2 + sVar84) >> 3);
  uVar60 = (undefined1)((ushort)(((ushort)bVar75 + (ushort)bVar70) * 2 + sVar85) >> 3);
  uVar62 = (undefined1)((ushort)(((ushort)bVar76 + (ushort)bVar71) * 2 + sVar87) >> 3);
  uVar64 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bStack_f0) * 2 + sVar97) >> 3);
  uVar89 = NEON_urhadd(CONCAT71(uStack_f7,abStack_f9[1]),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  uVar115 = NEON_urhadd(CONCAT17(bStack_f0,uStack_f7),
                        CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                                )),1);
  uVar88 = NEON_urhadd(CONCAT71(uStack_107,local_108),
                       CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                               )),1);
  uVar86 = NEON_urhadd(CONCAT17(bStack_100,uStack_107),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  local_e0[0] = (byte)uVar89;
  local_e0[1] = (byte)uVar115;
  local_e0[2] = (byte)((ulong)uVar89 >> 8);
  local_e0[3] = (byte)((ulong)uVar115 >> 8);
  uStack_dc = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_db = (undefined1)((ulong)uVar115 >> 0x10);
  uStack_da = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_d9 = (undefined1)((ulong)uVar115 >> 0x18);
  uStack_d8 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_d7 = (undefined1)((ulong)uVar115 >> 0x20);
  uStack_d6 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_d5 = (undefined1)((ulong)uVar115 >> 0x28);
  uStack_d4 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_d3 = (undefined1)((ulong)uVar115 >> 0x30);
  uStack_d2 = (undefined1)((ulong)uVar89 >> 0x38);
  uStack_d1 = (undefined1)((ulong)uVar115 >> 0x38);
  local_c0[0] = (byte)uVar88;
  local_c0[1] = (byte)uVar86;
  local_c0[2] = (byte)((ulong)uVar88 >> 8);
  local_c0[3] = (byte)((ulong)uVar86 >> 8);
  uStack_bc = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_bb = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_ba = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_b9 = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_b8 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_b7 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_b6 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_b5 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_b4 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_b3 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_b2 = (undefined1)((ulong)uVar88 >> 0x38);
  uStack_b1 = (undefined1)((ulong)uVar86 >> 0x38);
  ___memcpy_chk(abStack_f9 + 1,param_4,lVar47,9);
  ___memcpy_chk(&local_108,param_6,lVar47,9);
  _memset(abStack_f9 + (long)iVar37 + 1,(uint)abStack_f9[lVar48],sVar46);
  _memset(&local_108 + iVar37,(uint)*(byte *)((long)&local_10c + lVar48 + 3),sVar46);
  uVar31 = (undefined2)CONCAT71(uStack_f7,abStack_f9[1]);
  bVar65 = (byte)uStack_f7;
  uVar28 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  bVar66 = (byte)((uint7)uStack_f7 >> 8);
  bVar67 = (byte)((uint7)uStack_f7 >> 0x10);
  bVar68 = (byte)((uint7)uStack_f7 >> 0x18);
  bVar69 = (byte)((uint7)uStack_f7 >> 0x20);
  bVar70 = (byte)((uint7)uStack_f7 >> 0x28);
  bVar71 = (byte)((uint7)uStack_f7 >> 0x30);
  bVar72 = (byte)((uint7)uStack_107 >> 8);
  uVar29 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  bVar73 = (byte)((uint7)uStack_107 >> 0x10);
  bVar74 = (byte)((uint7)uStack_107 >> 0x18);
  bVar75 = (byte)((uint7)uStack_107 >> 0x20);
  bVar76 = (byte)((uint7)uStack_107 >> 0x28);
  bVar77 = (byte)((uint7)uStack_107 >> 0x30);
  uVar30 = CONCAT12((char)uStack_107,(short)CONCAT71(uStack_107,local_108)) & 0xff00ff;
  sVar78 = (short)uVar30 + (ushort)bVar65;
  sVar79 = (ushort)(byte)(uVar30 >> 0x10) + (ushort)bVar66;
  uVar30 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  uVar32 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  sVar80 = sVar78 + (short)uVar30 + (short)uVar32;
  sVar81 = sVar79 + (ushort)(byte)(uVar30 >> 0x10) + (ushort)(byte)(uVar32 >> 0x10);
  sVar82 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar83 = (ushort)bVar73 + (ushort)bVar68 + (ushort)bVar67 + (ushort)bVar74;
  sVar84 = (ushort)bVar74 + (ushort)bVar69 + (ushort)bVar68 + (ushort)bVar75;
  sVar85 = (ushort)bVar75 + (ushort)bVar70 + (ushort)bVar69 + (ushort)bVar76;
  sVar87 = (ushort)bVar76 + (ushort)bVar71 + (ushort)bVar70 + (ushort)bVar77;
  sVar97 = (ushort)bVar77 + (ushort)bStack_f0 + (ushort)bVar71 + (ushort)bStack_100;
  uVar49 = (undefined1)((ushort)(sVar80 + (short)uVar28 * 2 + (short)uVar29 * 2) >> 3);
  uVar51 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar28 >> 0x10) * 2 +
                    (ushort)(byte)(uVar29 >> 0x10) * 2) >> 3);
  uVar53 = (undefined1)((ushort)(sVar82 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 + (ushort)bVar67 * 2 + (ushort)bVar74 * 2) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 + (ushort)bVar68 * 2 + (ushort)bVar75 * 2) >> 3);
  uVar59 = (undefined1)((ushort)(sVar85 + (ushort)bVar69 * 2 + (ushort)bVar76 * 2) >> 3);
  uVar61 = (undefined1)((ushort)(sVar87 + (ushort)bVar70 * 2 + (ushort)bVar77 * 2) >> 3);
  uVar63 = (undefined1)((ushort)(sVar97 + (ushort)bVar71 * 2 + (ushort)bStack_100 * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar78 * 2 + sVar80) >> 3);
  uVar52 = (undefined1)((ushort)(sVar79 * 2 + sVar81) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar82) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bVar68) * 2 + sVar83) >> 3);
  uVar58 = (undefined1)((ushort)(((ushort)bVar74 + (ushort)bVar69) * 2 + sVar84) >> 3);
  uVar60 = (undefined1)((ushort)(((ushort)bVar75 + (ushort)bVar70) * 2 + sVar85) >> 3);
  uVar62 = (undefined1)((ushort)(((ushort)bVar76 + (ushort)bVar71) * 2 + sVar87) >> 3);
  uVar64 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bStack_f0) * 2 + sVar97) >> 3);
  uVar89 = NEON_urhadd(CONCAT71(uStack_f7,abStack_f9[1]),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  uVar115 = NEON_urhadd(CONCAT17(bStack_f0,uStack_f7),
                        CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                                )),1);
  uVar88 = NEON_urhadd(CONCAT71(uStack_107,local_108),
                       CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                               )),1);
  uVar86 = NEON_urhadd(CONCAT17(bStack_100,uStack_107),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  local_d0[0] = (byte)uVar89;
  local_d0[1] = (byte)uVar115;
  local_d0[2] = (byte)((ulong)uVar89 >> 8);
  local_d0[3] = (byte)((ulong)uVar115 >> 8);
  uStack_cc = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_cb = (undefined1)((ulong)uVar115 >> 0x10);
  uStack_ca = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_c9 = (undefined1)((ulong)uVar115 >> 0x18);
  uStack_c8 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_c7 = (undefined1)((ulong)uVar115 >> 0x20);
  uStack_c6 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_c5 = (undefined1)((ulong)uVar115 >> 0x28);
  uStack_c4 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_c3 = (undefined1)((ulong)uVar115 >> 0x30);
  uStack_c2 = (undefined1)((ulong)uVar89 >> 0x38);
  uStack_c1 = (undefined1)((ulong)uVar115 >> 0x38);
  local_b0[0] = (byte)uVar88;
  local_b0[1] = (byte)uVar86;
  local_b0[2] = (byte)((ulong)uVar88 >> 8);
  local_b0[3] = (byte)((ulong)uVar86 >> 8);
  uStack_ac = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_ab = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_aa = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_a9 = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_a8 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_a7 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_a6 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_a5 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_a4 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_a3 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_a2 = (undefined1)((ulong)uVar88 >> 0x38);
  uStack_a1 = (undefined1)((ulong)uVar86 >> 0x38);
  if ((int)uVar45 < local_10c) {
    uVar38 = (ulong)(~(uVar41 << 4) + local_10c);
    uVar40 = uVar41 << 6 | 4;
    pbVar39 = local_d0;
    uVar42 = uVar38;
    uVar36 = uVar45;
    do {
      bVar66 = pbVar39[-0x10];
      bVar65 = *pbVar39;
      puVar35 = param_7 + (int)uVar40;
      iVar37 = (uint)param_1[(int)uVar36] * 0x4a85;
      uVar5 = iVar37 + (uint)bVar65 * 0x6625;
      uVar4 = uVar5 - 0x379ad0;
      uVar49 = 0;
      if (0x379acf < uVar5) {
        uVar49 = 0xff;
      }
      uVar50 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar50 = uVar49;
      }
      *puVar35 = uVar50;
      iVar1 = iVar37 + (uint)bVar66 * -0x1913 + (uint)bVar65 * -0x3408;
      uVar4 = iVar1 + 0x220530;
      uVar49 = 0;
      if (-0x220531 < iVar1) {
        uVar49 = 0xff;
      }
      uVar50 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar50 = uVar49;
      }
      puVar35[1] = uVar50;
      uVar5 = iVar37 + (uint)bVar66 * 0x811a;
      uVar4 = uVar5 - 0x451550;
      uVar49 = 0;
      if (0x45154f < uVar5) {
        uVar49 = 0xff;
      }
      uVar50 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar50 = uVar49;
      }
      puVar35[2] = uVar50;
      puVar35[3] = 0xff;
      uVar40 = uVar40 + 4;
      uVar36 = uVar36 + 1;
      uVar42 = uVar42 - 1;
      pbVar39 = pbVar39 + 1;
    } while (uVar42 != 0);
    if (param_2 != (byte *)0x0) {
      uVar41 = uVar41 << 6 | 4;
      pbVar39 = local_b0;
      do {
        bVar66 = pbVar39[-0x10];
        bVar65 = *pbVar39;
        puVar35 = param_8 + (int)uVar41;
        iVar37 = (uint)param_2[(int)uVar45] * 0x4a85;
        uVar36 = iVar37 + (uint)bVar65 * 0x6625;
        uVar40 = uVar36 - 0x379ad0;
        uVar49 = 0;
        if (0x379acf < uVar36) {
          uVar49 = 0xff;
        }
        uVar50 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar50 = uVar49;
        }
        *puVar35 = uVar50;
        iVar1 = iVar37 + (uint)bVar66 * -0x1913 + (uint)bVar65 * -0x3408;
        uVar40 = iVar1 + 0x220530;
        uVar49 = 0;
        if (-0x220531 < iVar1) {
          uVar49 = 0xff;
        }
        uVar50 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar50 = uVar49;
        }
        puVar35[1] = uVar50;
        uVar36 = iVar37 + (uint)bVar66 * 0x811a;
        uVar40 = uVar36 - 0x451550;
        uVar49 = 0;
        if (0x45154f < uVar36) {
          uVar49 = 0xff;
        }
        uVar50 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar50 = uVar49;
        }
        puVar35[2] = uVar50;
        puVar35[3] = 0xff;
        uVar41 = uVar41 + 4;
        uVar45 = uVar45 + 1;
        uVar38 = uVar38 - 1;
        pbVar39 = pbVar39 + 1;
      } while (uVar38 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010cadd0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined6 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint3 uVar34;
  uint3 uVar35;
  uint3 uVar36;
  uint3 uVar37;
  undefined2 uVar38;
  bool bVar39;
  uint uVar40;
  long lVar41;
  int iVar42;
  long lVar43;
  ulong uVar44;
  byte *pbVar45;
  uint uVar46;
  uint uVar47;
  ulong uVar48;
  bool bVar49;
  ulong uVar50;
  ulong uVar51;
  size_t sVar52;
  uint uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar100;
  short sVar101;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  short sVar102;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  byte bVar103;
  short sVar104;
  short sVar105;
  short sVar106;
  short sVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  short sVar114;
  short sVar115;
  short sVar116;
  short sVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  int iVar128;
  undefined8 uVar129;
  int iVar130;
  byte abStack_d9 [2];
  undefined7 uStack_d7;
  byte bStack_d0;
  byte abStack_c9 [2];
  undefined7 uStack_c7;
  byte bStack_c0;
  byte local_b0 [4];
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  byte local_a0 [4];
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  byte local_90 [4];
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  byte local_80 [4];
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  long local_70;
  undefined1 auVar91 [16];
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar43 = (long)((ulong)(param_9 + 1) << 0x20) >> 0x21;
  uVar51 = lVar43 - 1;
  lVar43 = lVar43 - (uVar51 & 0xfffffffffffffff8);
  iVar42 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar53 = iVar42 + (uint)*param_3 >> 1;
  uVar40 = iVar1 + (uint)*param_4 >> 1;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar46 = iVar6 + uVar53 * 0x811a;
  uVar47 = uVar46 - 0x451550;
  uVar55 = 0xff;
  uVar54 = 0;
  if (0x45154f < uVar46) {
    uVar54 = 0xff;
  }
  uVar56 = (char)(uVar47 >> 0xe);
  if (0x3fffff < uVar47) {
    uVar56 = uVar54;
  }
  *param_7 = uVar56;
  iVar3 = iVar6 + uVar53 * -0x1913 + uVar40 * -0x3408;
  uVar47 = iVar3 + 0x220530;
  uVar54 = 0;
  if (-0x220531 < iVar3) {
    uVar54 = uVar55;
  }
  uVar56 = (char)(uVar47 >> 0xe);
  if (0x3fffff < uVar47) {
    uVar56 = uVar54;
  }
  param_7[1] = uVar56;
  uVar53 = iVar6 + uVar40 * 0x6625;
  uVar47 = uVar53 - 0x379ad0;
  uVar54 = 0;
  if (0x379acf < uVar53) {
    uVar54 = uVar55;
  }
  uVar56 = (char)(uVar47 >> 0xe);
  if (0x3fffff < uVar47) {
    uVar56 = uVar54;
  }
  uVar47 = (int)uVar51 >> 3;
  param_7[2] = uVar56;
  if (param_2 != (byte *)0x0) {
    uVar40 = iVar42 + (uint)*param_5 >> 1;
    uVar46 = iVar1 + (uint)*param_6 >> 1;
    iVar42 = (uint)*param_2 * 0x4a85;
    uVar4 = iVar42 + uVar40 * 0x811a;
    uVar53 = uVar4 - 0x451550;
    uVar54 = 0;
    if (0x45154f < uVar4) {
      uVar54 = uVar55;
    }
    uVar55 = (char)(uVar53 >> 0xe);
    if (0x3fffff < uVar53) {
      uVar55 = uVar54;
    }
    *param_8 = uVar55;
    iVar1 = iVar42 + uVar40 * -0x1913 + uVar46 * -0x3408;
    uVar53 = iVar1 + 0x220530;
    uVar54 = 0;
    if (-0x220531 < iVar1) {
      uVar54 = 0xff;
    }
    uVar55 = (char)(uVar53 >> 0xe);
    if (0x3fffff < uVar53) {
      uVar55 = uVar54;
    }
    param_8[1] = uVar55;
    uVar40 = iVar42 + uVar46 * 0x6625;
    uVar53 = uVar40 - 0x379ad0;
    uVar54 = 0;
    if (0x379acf < uVar40) {
      uVar54 = 0xff;
    }
    uVar55 = (char)(uVar53 >> 0xe);
    if (0x3fffff < uVar53) {
      uVar55 = uVar54;
    }
    param_8[2] = uVar55;
  }
  uVar53 = uVar47 << 4 | 1;
  if (0x10 < param_9) {
    uVar51 = 0;
    uVar40 = uVar47;
    if ((int)uVar47 < 2) {
      uVar40 = 1;
    }
    do {
      uVar48 = 0;
      uVar88 = *(undefined8 *)param_3;
      uVar129 = *(undefined8 *)(param_3 + 1);
      bVar77 = (byte)((ulong)uVar129 >> 8);
      bVar78 = (byte)((ulong)uVar129 >> 0x10);
      bVar79 = (byte)((ulong)uVar129 >> 0x18);
      bVar80 = (byte)((ulong)uVar129 >> 0x20);
      bVar81 = (byte)((ulong)uVar129 >> 0x28);
      bVar82 = (byte)((ulong)uVar129 >> 0x30);
      bVar103 = (byte)((ulong)uVar129 >> 0x38);
      uVar89 = *(undefined8 *)param_5;
      uVar54 = (undefined1)((ulong)uVar89 >> 8);
      bVar108 = (byte)((ulong)uVar89 >> 0x10);
      bVar109 = (byte)((ulong)uVar89 >> 0x18);
      bVar110 = (byte)((ulong)uVar89 >> 0x20);
      bVar111 = (byte)((ulong)uVar89 >> 0x28);
      bVar112 = (byte)((ulong)uVar89 >> 0x30);
      bVar113 = (byte)((ulong)uVar89 >> 0x38);
      uVar90 = *(undefined8 *)(param_5 + 1);
      uVar55 = (undefined1)((ulong)uVar90 >> 8);
      bVar118 = (byte)((ulong)uVar90 >> 0x10);
      bVar119 = (byte)((ulong)uVar90 >> 0x18);
      bVar120 = (byte)((ulong)uVar90 >> 0x20);
      bVar121 = (byte)((ulong)uVar90 >> 0x28);
      bVar122 = (byte)((ulong)uVar90 >> 0x30);
      bVar123 = (byte)((ulong)uVar90 >> 0x38);
      bVar70 = (byte)((ulong)uVar88 >> 8);
      bVar71 = (byte)((ulong)uVar88 >> 0x10);
      bVar72 = (byte)((ulong)uVar88 >> 0x18);
      bVar73 = (byte)((ulong)uVar88 >> 0x20);
      bVar74 = (byte)((ulong)uVar88 >> 0x28);
      bVar75 = (byte)((ulong)uVar88 >> 0x30);
      bVar76 = (byte)((ulong)uVar88 >> 0x38);
      uVar34 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      uVar35 = CONCAT12(bVar77,(short)uVar129) & 0xff00ff;
      uVar36 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar37 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      sVar83 = (short)uVar35 + (ushort)(byte)uVar88 + (short)uVar36 + (short)uVar37;
      sVar84 = (ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar70 + (ushort)(byte)(uVar36 >> 0x10) +
               (ushort)(byte)(uVar37 >> 0x10);
      sVar85 = (ushort)bVar78 + (ushort)bVar71 + (ushort)bVar108 + (ushort)bVar118;
      sVar86 = (ushort)bVar79 + (ushort)bVar72 + (ushort)bVar109 + (ushort)bVar119;
      sVar124 = (ushort)bVar80 + (ushort)bVar73 + (ushort)bVar110 + (ushort)bVar120;
      sVar125 = (ushort)bVar81 + (ushort)bVar74 + (ushort)bVar111 + (ushort)bVar121;
      sVar126 = (ushort)bVar82 + (ushort)bVar75 + (ushort)bVar112 + (ushort)bVar122;
      sVar127 = (ushort)bVar103 + (ushort)bVar76 + (ushort)bVar113 + (ushort)bVar123;
      uVar35 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar54 = (undefined1)((ushort)(sVar83 + (ushort)(byte)uVar88 * 2 + (short)uVar34 * 2) >> 3);
      uVar56 = (undefined1)
               ((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)(byte)(uVar34 >> 0x10) * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar118 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar86 + (ushort)bVar72 * 2 + (ushort)bVar119 * 2) >> 3);
      uVar62 = (undefined1)((ushort)(sVar124 + (ushort)bVar73 * 2 + (ushort)bVar120 * 2) >> 3);
      uVar64 = (undefined1)((ushort)(sVar125 + (ushort)bVar74 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar66 = (undefined1)((ushort)(sVar126 + (ushort)bVar75 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar68 = (undefined1)((ushort)(sVar127 + (ushort)bVar76 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(((short)uVar35 + (ushort)(byte)uVar129) * 2 + sVar83) >> 3);
      uVar57 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar78) * 2 + sVar85) >> 3);
      uVar61 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar79) * 2 + sVar86) >> 3);
      uVar63 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar80) * 2 + sVar124) >> 3);
      uVar65 = (undefined1)((ushort)(((ushort)bVar111 + (ushort)bVar81) * 2 + sVar125) >> 3);
      uVar67 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar82) * 2 + sVar126) >> 3);
      uVar69 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar103) * 2 + sVar127) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      uVar129 = NEON_urhadd(uVar129,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      local_b0[0] = (byte)uVar88;
      local_b0[1] = (char)uVar129;
      local_b0[2] = (char)((ulong)uVar88 >> 8);
      local_b0[3] = (char)((ulong)uVar129 >> 8);
      uStack_ac = (char)((ulong)uVar88 >> 0x10);
      uStack_ab = (char)((ulong)uVar129 >> 0x10);
      uStack_aa = (char)((ulong)uVar88 >> 0x18);
      uStack_a9 = (char)((ulong)uVar129 >> 0x18);
      uStack_a8 = (char)((ulong)uVar88 >> 0x20);
      uStack_a7 = (char)((ulong)uVar129 >> 0x20);
      uStack_a6 = (char)((ulong)uVar88 >> 0x28);
      uStack_a5 = (char)((ulong)uVar129 >> 0x28);
      uStack_a4 = (char)((ulong)uVar88 >> 0x30);
      uStack_a3 = (char)((ulong)uVar129 >> 0x30);
      uStack_a2 = (char)((ulong)uVar88 >> 0x38);
      uStack_a1 = (char)((ulong)uVar129 >> 0x38);
      uVar129 = NEON_urhadd(uVar90,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      local_90[0] = (byte)uVar89;
      local_90[1] = (char)uVar129;
      local_90[2] = (char)((ulong)uVar89 >> 8);
      local_90[3] = (char)((ulong)uVar129 >> 8);
      uStack_8c = (char)((ulong)uVar89 >> 0x10);
      uStack_8b = (char)((ulong)uVar129 >> 0x10);
      uStack_8a = (char)((ulong)uVar89 >> 0x18);
      uStack_89 = (char)((ulong)uVar129 >> 0x18);
      uStack_88 = (char)((ulong)uVar89 >> 0x20);
      uStack_87 = (char)((ulong)uVar129 >> 0x20);
      uStack_86 = (char)((ulong)uVar89 >> 0x28);
      uStack_85 = (char)((ulong)uVar129 >> 0x28);
      uStack_84 = (char)((ulong)uVar89 >> 0x30);
      uStack_83 = (char)((ulong)uVar129 >> 0x30);
      uStack_82 = (char)((ulong)uVar89 >> 0x38);
      uStack_81 = (char)((ulong)uVar129 >> 0x38);
      uVar88 = *(undefined8 *)param_4;
      uVar129 = *(undefined8 *)(param_4 + 1);
      bVar77 = (byte)((ulong)uVar129 >> 8);
      bVar78 = (byte)((ulong)uVar129 >> 0x10);
      bVar79 = (byte)((ulong)uVar129 >> 0x18);
      bVar80 = (byte)((ulong)uVar129 >> 0x20);
      bVar81 = (byte)((ulong)uVar129 >> 0x28);
      bVar82 = (byte)((ulong)uVar129 >> 0x30);
      bVar103 = (byte)((ulong)uVar129 >> 0x38);
      uVar89 = *(undefined8 *)param_6;
      uVar54 = (undefined1)((ulong)uVar89 >> 8);
      bVar108 = (byte)((ulong)uVar89 >> 0x10);
      bVar109 = (byte)((ulong)uVar89 >> 0x18);
      bVar110 = (byte)((ulong)uVar89 >> 0x20);
      bVar111 = (byte)((ulong)uVar89 >> 0x28);
      bVar112 = (byte)((ulong)uVar89 >> 0x30);
      bVar113 = (byte)((ulong)uVar89 >> 0x38);
      uVar90 = *(undefined8 *)(param_6 + 1);
      uVar55 = (undefined1)((ulong)uVar90 >> 8);
      bVar118 = (byte)((ulong)uVar90 >> 0x10);
      bVar119 = (byte)((ulong)uVar90 >> 0x18);
      bVar120 = (byte)((ulong)uVar90 >> 0x20);
      bVar121 = (byte)((ulong)uVar90 >> 0x28);
      bVar122 = (byte)((ulong)uVar90 >> 0x30);
      bVar123 = (byte)((ulong)uVar90 >> 0x38);
      bVar70 = (byte)((ulong)uVar88 >> 8);
      bVar71 = (byte)((ulong)uVar88 >> 0x10);
      bVar72 = (byte)((ulong)uVar88 >> 0x18);
      bVar73 = (byte)((ulong)uVar88 >> 0x20);
      bVar74 = (byte)((ulong)uVar88 >> 0x28);
      bVar75 = (byte)((ulong)uVar88 >> 0x30);
      bVar76 = (byte)((ulong)uVar88 >> 0x38);
      uVar34 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      uVar35 = CONCAT12(bVar77,(short)uVar129) & 0xff00ff;
      uVar36 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar37 = CONCAT12(uVar55,(short)uVar90) & 0xff00ff;
      sVar83 = (short)uVar35 + (ushort)(byte)uVar88 + (short)uVar36 + (short)uVar37;
      sVar84 = (ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar70 + (ushort)(byte)(uVar36 >> 0x10) +
               (ushort)(byte)(uVar37 >> 0x10);
      sVar85 = (ushort)bVar78 + (ushort)bVar71 + (ushort)bVar108 + (ushort)bVar118;
      sVar86 = (ushort)bVar79 + (ushort)bVar72 + (ushort)bVar109 + (ushort)bVar119;
      sVar124 = (ushort)bVar80 + (ushort)bVar73 + (ushort)bVar110 + (ushort)bVar120;
      sVar125 = (ushort)bVar81 + (ushort)bVar74 + (ushort)bVar111 + (ushort)bVar121;
      sVar126 = (ushort)bVar82 + (ushort)bVar75 + (ushort)bVar112 + (ushort)bVar122;
      sVar127 = (ushort)bVar103 + (ushort)bVar76 + (ushort)bVar113 + (ushort)bVar123;
      uVar35 = CONCAT12(uVar54,(short)uVar89) & 0xff00ff;
      uVar54 = (undefined1)((ushort)(sVar83 + (ushort)(byte)uVar88 * 2 + (short)uVar34 * 2) >> 3);
      uVar56 = (undefined1)
               ((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)(byte)(uVar34 >> 0x10) * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar118 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar86 + (ushort)bVar72 * 2 + (ushort)bVar119 * 2) >> 3);
      uVar62 = (undefined1)((ushort)(sVar124 + (ushort)bVar73 * 2 + (ushort)bVar120 * 2) >> 3);
      uVar64 = (undefined1)((ushort)(sVar125 + (ushort)bVar74 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar66 = (undefined1)((ushort)(sVar126 + (ushort)bVar75 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar68 = (undefined1)((ushort)(sVar127 + (ushort)bVar76 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(((short)uVar35 + (ushort)(byte)uVar129) * 2 + sVar83) >> 3);
      uVar57 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar35 >> 0x10) + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar78) * 2 + sVar85) >> 3);
      uVar61 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar79) * 2 + sVar86) >> 3);
      uVar63 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar80) * 2 + sVar124) >> 3);
      uVar65 = (undefined1)((ushort)(((ushort)bVar111 + (ushort)bVar81) * 2 + sVar125) >> 3);
      uVar67 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar82) * 2 + sVar126) >> 3);
      uVar69 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar103) * 2 + sVar127) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      uVar129 = NEON_urhadd(uVar129,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,
                                                  uVar54))))))),1);
      local_a0[0] = (byte)uVar88;
      local_a0[1] = (char)uVar129;
      local_a0[2] = (char)((ulong)uVar88 >> 8);
      local_a0[3] = (char)((ulong)uVar129 >> 8);
      uStack_9c = (char)((ulong)uVar88 >> 0x10);
      uStack_9b = (char)((ulong)uVar129 >> 0x10);
      uStack_9a = (char)((ulong)uVar88 >> 0x18);
      uStack_99 = (char)((ulong)uVar129 >> 0x18);
      uStack_98 = (char)((ulong)uVar88 >> 0x20);
      uStack_97 = (char)((ulong)uVar129 >> 0x20);
      uStack_96 = (char)((ulong)uVar88 >> 0x28);
      uStack_95 = (char)((ulong)uVar129 >> 0x28);
      uStack_94 = (char)((ulong)uVar88 >> 0x30);
      uStack_93 = (char)((ulong)uVar129 >> 0x30);
      uStack_92 = (char)((ulong)uVar88 >> 0x38);
      uStack_91 = (char)((ulong)uVar129 >> 0x38);
      uVar129 = NEON_urhadd(uVar90,CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,
                                                  CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,
                                                  uVar55))))))),1);
      local_80[0] = (byte)uVar89;
      local_80[1] = (char)uVar129;
      local_80[2] = (char)((ulong)uVar89 >> 8);
      local_80[3] = (char)((ulong)uVar129 >> 8);
      uStack_7c = (char)((ulong)uVar89 >> 0x10);
      uStack_7b = (char)((ulong)uVar129 >> 0x10);
      uStack_7a = (char)((ulong)uVar89 >> 0x18);
      uStack_79 = (char)((ulong)uVar129 >> 0x18);
      uStack_78 = (char)((ulong)uVar89 >> 0x20);
      uStack_77 = (char)((ulong)uVar129 >> 0x20);
      uStack_76 = (char)((ulong)uVar89 >> 0x28);
      uStack_75 = (char)((ulong)uVar129 >> 0x28);
      uStack_74 = (char)((ulong)uVar89 >> 0x30);
      uStack_73 = (char)((ulong)uVar129 >> 0x30);
      uStack_72 = (char)((ulong)uVar89 >> 0x38);
      uStack_71 = (char)((ulong)uVar129 >> 0x38);
      uVar44 = uVar51 << 4 | 1;
      bVar39 = true;
      do {
        bVar49 = bVar39;
        uVar50 = uVar44 | uVar48;
        uVar90 = *(undefined8 *)(param_1 + uVar50);
        uVar129 = *(undefined8 *)(local_b0 + uVar48);
        uVar89 = *(undefined8 *)(local_a0 + uVar48);
        sVar87 = (byte)uVar90 - 0x10;
        sVar100 = (byte)((ulong)uVar90 >> 8) - 0x10;
        sVar101 = (byte)((ulong)uVar90 >> 0x10) - 0x10;
        sVar102 = (byte)((ulong)uVar90 >> 0x18) - 0x10;
        auVar91._0_8_ = CONCAT26(sVar102,CONCAT24(sVar101,CONCAT22(sVar100,sVar87)));
        auVar91._8_2_ = (byte)((ulong)uVar90 >> 0x20) - 0x10;
        auVar91._10_2_ = (byte)((ulong)uVar90 >> 0x28) - 0x10;
        auVar91._12_2_ = (byte)((ulong)uVar90 >> 0x30) - 0x10;
        auVar91._14_2_ = (byte)((ulong)uVar90 >> 0x38) - 0x10;
        uVar34 = CONCAT12((char)((ulong)uVar129 >> 8),(short)uVar129) & 0xff00ff;
        sVar83 = (short)uVar34 + -0x80;
        sVar84 = (byte)(uVar34 >> 0x10) - 0x80;
        sVar85 = (byte)((ulong)uVar129 >> 0x10) - 0x80;
        sVar86 = (byte)((ulong)uVar129 >> 0x18) - 0x80;
        sVar104 = (byte)((ulong)uVar129 >> 0x20) - 0x80;
        sVar105 = (byte)((ulong)uVar129 >> 0x28) - 0x80;
        sVar106 = (byte)((ulong)uVar129 >> 0x30) - 0x80;
        sVar107 = (byte)((ulong)uVar129 >> 0x38) - 0x80;
        uVar34 = CONCAT12((char)((ulong)uVar89 >> 8),(short)uVar89) & 0xff00ff;
        sVar124 = (short)uVar34 + -0x80;
        sVar125 = (byte)(uVar34 >> 0x10) - 0x80;
        sVar126 = (byte)((ulong)uVar89 >> 0x10) - 0x80;
        sVar127 = (byte)((ulong)uVar89 >> 0x18) - 0x80;
        sVar114 = (byte)((ulong)uVar89 >> 0x20) - 0x80;
        sVar115 = (byte)((ulong)uVar89 >> 0x28) - 0x80;
        sVar116 = (byte)((ulong)uVar89 >> 0x30) - 0x80;
        sVar117 = (byte)((ulong)uVar89 >> 0x38) - 0x80;
        auVar92._8_8_ = auVar91._8_8_;
        iVar24 = sVar124 * 0x6625 + sVar87 * 0x4a85;
        iVar25 = sVar125 * 0x6625 + sVar100 * 0x4a85;
        uVar54 = (undefined1)((uint)iVar25 >> 8);
        uVar55 = (undefined1)((uint)iVar25 >> 0x10);
        uVar56 = (undefined1)((uint)iVar25 >> 0x18);
        iVar26 = sVar126 * 0x6625 + sVar101 * 0x4a85;
        iVar27 = sVar127 * 0x6625 + sVar102 * 0x4a85;
        iVar30 = sVar114 * 0x6625 + auVar91._8_2_ * 0x4a85;
        iVar31 = sVar115 * 0x6625 + auVar91._10_2_ * 0x4a85;
        uVar57 = (undefined1)((uint)iVar31 >> 8);
        uVar58 = (undefined1)((uint)iVar31 >> 0x10);
        uVar59 = (undefined1)((uint)iVar31 >> 0x18);
        iVar32 = sVar116 * 0x6625 + auVar91._12_2_ * 0x4a85;
        iVar33 = sVar117 * 0x6625 + auVar91._14_2_ * 0x4a85;
        uVar7 = CONCAT13((char)((ushort)sVar84 >> 8),CONCAT12((char)sVar84,sVar83));
        uVar8 = CONCAT15((char)((ushort)sVar85 >> 8),CONCAT14((char)sVar85,uVar7));
        iVar128 = sVar83 * 0x1913 + sVar124 * 0x3408;
        iVar130 = sVar84 * 0x1913 + sVar125 * 0x3408;
        iVar16 = sVar100 * 0x4a85 - iVar130;
        iVar3 = auVar91._10_2_ * 0x4a85 - (sVar105 * 0x1913 + sVar115 * 0x3408);
        iVar12 = auVar91._12_2_ * 0x4a85 - (sVar106 * 0x1913 + sVar116 * 0x3408);
        iVar13 = auVar91._14_2_ * 0x4a85 - (sVar107 * 0x1913 + sVar117 * 0x3408);
        iVar19 = (short)((uint)uVar7 >> 0x10) * 0x811a + sVar100 * 0x4a85;
        iVar20 = (short)((uint6)uVar8 >> 0x20) * 0x811a + sVar101 * 0x4a85;
        iVar21 = (short)(CONCAT17((char)((ushort)sVar86 >> 8),CONCAT16((char)sVar86,uVar8)) >> 0x30)
                 * 0x811a + sVar102 * 0x4a85;
        iVar42 = CONCAT13(sVar105 >> 0xf,(int3)sVar105) * 0x811a + auVar91._10_2_ * 0x4a85;
        iVar1 = sVar106 * 0x811a + auVar91._12_2_ * 0x4a85;
        iVar6 = sVar107 * 0x811a + auVar91._14_2_ * 0x4a85;
        auVar22[4] = (char)iVar25;
        auVar22._0_4_ = iVar24;
        auVar22[5] = uVar54;
        auVar22[6] = uVar55;
        auVar22[7] = uVar56;
        auVar22._8_2_ = (short)iVar26;
        auVar22._10_2_ = (short)((uint)iVar26 >> 0x10);
        auVar22._12_2_ = (short)iVar27;
        auVar22._14_2_ = (short)((uint)iVar27 >> 0x10);
        auVar92._0_8_ = NEON_rshrn(auVar91._0_8_,auVar22,0xe,4);
        auVar28[4] = (char)iVar31;
        auVar28._0_4_ = iVar30;
        auVar28[5] = uVar57;
        auVar28[6] = uVar58;
        auVar28[7] = uVar59;
        auVar28._8_2_ = (short)iVar32;
        auVar28._10_2_ = (short)((uint)iVar32 >> 0x10);
        auVar28._12_2_ = (short)iVar33;
        auVar28._14_2_ = (short)((uint)iVar33 >> 0x10);
        auVar93 = NEON_rshrn2(auVar92,auVar28,0xe,4);
        uVar90 = NEON_sqxtun(CONCAT44(iVar130,iVar128),auVar93,2);
        auVar94._8_8_ = auVar93._8_8_;
        auVar14[4] = (char)iVar16;
        auVar14._0_4_ = sVar87 * 0x4a85 - iVar128;
        auVar14[5] = (char)((uint)iVar16 >> 8);
        auVar14[6] = (char)((uint)iVar16 >> 0x10);
        auVar14[7] = (char)((uint)iVar16 >> 0x18);
        auVar14._8_4_ = sVar101 * 0x4a85 - (sVar85 * 0x1913 + sVar126 * 0x3408);
        auVar14._12_4_ = sVar102 * 0x4a85 - (sVar86 * 0x1913 + sVar127 * 0x3408);
        auVar94._0_8_ = NEON_rshrn(auVar93._0_8_,auVar14,0xe,4);
        auVar10[4] = (char)iVar3;
        auVar10._0_4_ = auVar91._8_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
        auVar10[5] = (char)((uint)iVar3 >> 8);
        auVar10[6] = (char)((uint)iVar3 >> 0x10);
        auVar10[7] = (char)((uint)iVar3 >> 0x18);
        auVar10._8_2_ = (short)iVar12;
        auVar10._10_2_ = (short)((uint)iVar12 >> 0x10);
        auVar10._12_2_ = (short)iVar13;
        auVar10._14_2_ = (short)((uint)iVar13 >> 0x10);
        auVar93 = NEON_rshrn2(auVar94,auVar10,0xe,4);
        uVar89 = NEON_sqxtun(CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14((char)iVar31,
                                                                                      iVar30)))),
                             auVar93,2);
        auVar95._8_8_ = auVar93._8_8_;
        auVar17[4] = (char)iVar19;
        auVar17._0_4_ = sVar83 * 0x811a + sVar87 * 0x4a85;
        auVar17[5] = (char)((uint)iVar19 >> 8);
        auVar17[6] = (char)((uint)iVar19 >> 0x10);
        auVar17[7] = (char)((uint)iVar19 >> 0x18);
        auVar17._8_2_ = (short)iVar20;
        auVar17._10_2_ = (short)((uint)iVar20 >> 0x10);
        auVar17._12_2_ = (short)iVar21;
        auVar17._14_2_ = (short)((uint)iVar21 >> 0x10);
        auVar95._0_8_ = NEON_rshrn(auVar93._0_8_,auVar17,0xe,4);
        auVar93[4] = (char)iVar42;
        auVar93._0_4_ = CONCAT13(sVar104 >> 0xf,(int3)sVar104) * 0x811a + auVar91._8_2_ * 0x4a85;
        auVar93[5] = (char)((uint)iVar42 >> 8);
        auVar93[6] = (char)((uint)iVar42 >> 0x10);
        auVar93[7] = (char)((uint)iVar42 >> 0x18);
        auVar93._8_2_ = (short)iVar1;
        auVar93._10_2_ = (short)((uint)iVar1 >> 0x10);
        auVar93._12_2_ = (short)iVar6;
        auVar93._14_2_ = (short)((uint)iVar6 >> 0x10);
        auVar93 = NEON_rshrn2(auVar95,auVar93,0xe,4);
        uVar129 = NEON_sqxtun(CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14((char)iVar25,
                                                                                       iVar24)))),
                              auVar93,2);
        puVar2 = param_7 + ((ulong)(uint)((int)uVar50 * 3) & 0xfffffffb);
        *puVar2 = (char)uVar129;
        puVar2[1] = (char)uVar89;
        puVar2[2] = (char)uVar90;
        puVar2[3] = (char)((ulong)uVar129 >> 8);
        puVar2[4] = (char)((ulong)uVar89 >> 8);
        puVar2[5] = (char)((ulong)uVar90 >> 8);
        puVar2[6] = (char)((ulong)uVar129 >> 0x10);
        puVar2[7] = (char)((ulong)uVar89 >> 0x10);
        puVar2[8] = (char)((ulong)uVar90 >> 0x10);
        puVar2[9] = (char)((ulong)uVar129 >> 0x18);
        puVar2[10] = (char)((ulong)uVar89 >> 0x18);
        puVar2[0xb] = (char)((ulong)uVar90 >> 0x18);
        puVar2[0xc] = (char)((ulong)uVar129 >> 0x20);
        puVar2[0xd] = (char)((ulong)uVar89 >> 0x20);
        puVar2[0xe] = (char)((ulong)uVar90 >> 0x20);
        puVar2[0xf] = (char)((ulong)uVar129 >> 0x28);
        puVar2[0x10] = (char)((ulong)uVar89 >> 0x28);
        puVar2[0x11] = (char)((ulong)uVar90 >> 0x28);
        puVar2[0x12] = (char)((ulong)uVar129 >> 0x30);
        puVar2[0x13] = (char)((ulong)uVar89 >> 0x30);
        puVar2[0x14] = (char)((ulong)uVar90 >> 0x30);
        puVar2[0x15] = (char)((ulong)uVar129 >> 0x38);
        puVar2[0x16] = (char)((ulong)uVar89 >> 0x38);
        puVar2[0x17] = (char)((ulong)uVar90 >> 0x38);
        uVar48 = 8;
        bVar39 = false;
      } while (bVar49);
      if (param_2 != (byte *)0x0) {
        uVar48 = 0;
        bVar39 = true;
        do {
          bVar49 = bVar39;
          uVar50 = uVar44 | uVar48;
          uVar90 = *(undefined8 *)(param_2 + uVar50);
          uVar129 = *(undefined8 *)(local_90 + uVar48);
          uVar89 = *(undefined8 *)(local_80 + uVar48);
          sVar87 = (byte)uVar90 - 0x10;
          sVar100 = (byte)((ulong)uVar90 >> 8) - 0x10;
          sVar101 = (byte)((ulong)uVar90 >> 0x10) - 0x10;
          sVar102 = (byte)((ulong)uVar90 >> 0x18) - 0x10;
          auVar96._0_8_ = CONCAT26(sVar102,CONCAT24(sVar101,CONCAT22(sVar100,sVar87)));
          auVar96._8_2_ = (byte)((ulong)uVar90 >> 0x20) - 0x10;
          auVar96._10_2_ = (byte)((ulong)uVar90 >> 0x28) - 0x10;
          auVar96._12_2_ = (byte)((ulong)uVar90 >> 0x30) - 0x10;
          auVar96._14_2_ = (byte)((ulong)uVar90 >> 0x38) - 0x10;
          uVar34 = CONCAT12((char)((ulong)uVar129 >> 8),(short)uVar129) & 0xff00ff;
          sVar83 = (short)uVar34 + -0x80;
          sVar84 = (byte)(uVar34 >> 0x10) - 0x80;
          sVar85 = (byte)((ulong)uVar129 >> 0x10) - 0x80;
          sVar86 = (byte)((ulong)uVar129 >> 0x18) - 0x80;
          sVar104 = (byte)((ulong)uVar129 >> 0x20) - 0x80;
          sVar105 = (byte)((ulong)uVar129 >> 0x28) - 0x80;
          sVar106 = (byte)((ulong)uVar129 >> 0x30) - 0x80;
          sVar107 = (byte)((ulong)uVar129 >> 0x38) - 0x80;
          uVar34 = CONCAT12((char)((ulong)uVar89 >> 8),(short)uVar89) & 0xff00ff;
          sVar124 = (short)uVar34 + -0x80;
          sVar125 = (byte)(uVar34 >> 0x10) - 0x80;
          sVar126 = (byte)((ulong)uVar89 >> 0x10) - 0x80;
          sVar127 = (byte)((ulong)uVar89 >> 0x18) - 0x80;
          sVar114 = (byte)((ulong)uVar89 >> 0x20) - 0x80;
          sVar115 = (byte)((ulong)uVar89 >> 0x28) - 0x80;
          sVar116 = (byte)((ulong)uVar89 >> 0x30) - 0x80;
          sVar117 = (byte)((ulong)uVar89 >> 0x38) - 0x80;
          auVar97._8_8_ = auVar96._8_8_;
          iVar24 = sVar124 * 0x6625 + sVar87 * 0x4a85;
          iVar25 = sVar125 * 0x6625 + sVar100 * 0x4a85;
          uVar54 = (undefined1)((uint)iVar25 >> 8);
          uVar55 = (undefined1)((uint)iVar25 >> 0x10);
          uVar56 = (undefined1)((uint)iVar25 >> 0x18);
          iVar26 = sVar126 * 0x6625 + sVar101 * 0x4a85;
          iVar27 = sVar127 * 0x6625 + sVar102 * 0x4a85;
          iVar30 = sVar114 * 0x6625 + auVar96._8_2_ * 0x4a85;
          iVar31 = sVar115 * 0x6625 + auVar96._10_2_ * 0x4a85;
          uVar57 = (undefined1)((uint)iVar31 >> 8);
          uVar58 = (undefined1)((uint)iVar31 >> 0x10);
          uVar59 = (undefined1)((uint)iVar31 >> 0x18);
          iVar32 = sVar116 * 0x6625 + auVar96._12_2_ * 0x4a85;
          iVar33 = sVar117 * 0x6625 + auVar96._14_2_ * 0x4a85;
          uVar7 = CONCAT13((char)((ushort)sVar84 >> 8),CONCAT12((char)sVar84,sVar83));
          uVar8 = CONCAT15((char)((ushort)sVar85 >> 8),CONCAT14((char)sVar85,uVar7));
          iVar128 = sVar83 * 0x1913 + sVar124 * 0x3408;
          iVar130 = sVar84 * 0x1913 + sVar125 * 0x3408;
          iVar16 = sVar100 * 0x4a85 - iVar130;
          iVar3 = auVar96._10_2_ * 0x4a85 - (sVar105 * 0x1913 + sVar115 * 0x3408);
          iVar12 = auVar96._12_2_ * 0x4a85 - (sVar106 * 0x1913 + sVar116 * 0x3408);
          iVar13 = auVar96._14_2_ * 0x4a85 - (sVar107 * 0x1913 + sVar117 * 0x3408);
          iVar19 = (short)((uint)uVar7 >> 0x10) * 0x811a + sVar100 * 0x4a85;
          iVar20 = (short)((uint6)uVar8 >> 0x20) * 0x811a + sVar101 * 0x4a85;
          iVar21 = (short)(CONCAT17((char)((ushort)sVar86 >> 8),CONCAT16((char)sVar86,uVar8)) >>
                          0x30) * 0x811a + sVar102 * 0x4a85;
          iVar42 = CONCAT13(sVar105 >> 0xf,(int3)sVar105) * 0x811a + auVar96._10_2_ * 0x4a85;
          iVar1 = sVar106 * 0x811a + auVar96._12_2_ * 0x4a85;
          iVar6 = sVar107 * 0x811a + auVar96._14_2_ * 0x4a85;
          auVar23[4] = (char)iVar25;
          auVar23._0_4_ = iVar24;
          auVar23[5] = uVar54;
          auVar23[6] = uVar55;
          auVar23[7] = uVar56;
          auVar23._8_2_ = (short)iVar26;
          auVar23._10_2_ = (short)((uint)iVar26 >> 0x10);
          auVar23._12_2_ = (short)iVar27;
          auVar23._14_2_ = (short)((uint)iVar27 >> 0x10);
          auVar97._0_8_ = NEON_rshrn(auVar96._0_8_,auVar23,0xe,4);
          auVar29[4] = (char)iVar31;
          auVar29._0_4_ = iVar30;
          auVar29[5] = uVar57;
          auVar29[6] = uVar58;
          auVar29[7] = uVar59;
          auVar29._8_2_ = (short)iVar32;
          auVar29._10_2_ = (short)((uint)iVar32 >> 0x10);
          auVar29._12_2_ = (short)iVar33;
          auVar29._14_2_ = (short)((uint)iVar33 >> 0x10);
          auVar93 = NEON_rshrn2(auVar97,auVar29,0xe,4);
          uVar90 = NEON_sqxtun(CONCAT44(iVar130,iVar128),auVar93,2);
          auVar98._8_8_ = auVar93._8_8_;
          auVar15[4] = (char)iVar16;
          auVar15._0_4_ = sVar87 * 0x4a85 - iVar128;
          auVar15[5] = (char)((uint)iVar16 >> 8);
          auVar15[6] = (char)((uint)iVar16 >> 0x10);
          auVar15[7] = (char)((uint)iVar16 >> 0x18);
          auVar15._8_4_ = sVar101 * 0x4a85 - (sVar85 * 0x1913 + sVar126 * 0x3408);
          auVar15._12_4_ = sVar102 * 0x4a85 - (sVar86 * 0x1913 + sVar127 * 0x3408);
          auVar98._0_8_ = NEON_rshrn(auVar93._0_8_,auVar15,0xe,4);
          auVar11[4] = (char)iVar3;
          auVar11._0_4_ = auVar96._8_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
          auVar11[5] = (char)((uint)iVar3 >> 8);
          auVar11[6] = (char)((uint)iVar3 >> 0x10);
          auVar11[7] = (char)((uint)iVar3 >> 0x18);
          auVar11._8_2_ = (short)iVar12;
          auVar11._10_2_ = (short)((uint)iVar12 >> 0x10);
          auVar11._12_2_ = (short)iVar13;
          auVar11._14_2_ = (short)((uint)iVar13 >> 0x10);
          auVar93 = NEON_rshrn2(auVar98,auVar11,0xe,4);
          uVar89 = NEON_sqxtun(CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14((char)iVar31
                                                                                        ,iVar30)))),
                               auVar93,2);
          auVar99._8_8_ = auVar93._8_8_;
          auVar18[4] = (char)iVar19;
          auVar18._0_4_ = sVar83 * 0x811a + sVar87 * 0x4a85;
          auVar18[5] = (char)((uint)iVar19 >> 8);
          auVar18[6] = (char)((uint)iVar19 >> 0x10);
          auVar18[7] = (char)((uint)iVar19 >> 0x18);
          auVar18._8_2_ = (short)iVar20;
          auVar18._10_2_ = (short)((uint)iVar20 >> 0x10);
          auVar18._12_2_ = (short)iVar21;
          auVar18._14_2_ = (short)((uint)iVar21 >> 0x10);
          auVar99._0_8_ = NEON_rshrn(auVar93._0_8_,auVar18,0xe,4);
          auVar9[4] = (char)iVar42;
          auVar9._0_4_ = CONCAT13(sVar104 >> 0xf,(int3)sVar104) * 0x811a + auVar96._8_2_ * 0x4a85;
          auVar9[5] = (char)((uint)iVar42 >> 8);
          auVar9[6] = (char)((uint)iVar42 >> 0x10);
          auVar9[7] = (char)((uint)iVar42 >> 0x18);
          auVar9._8_2_ = (short)iVar1;
          auVar9._10_2_ = (short)((uint)iVar1 >> 0x10);
          auVar9._12_2_ = (short)iVar6;
          auVar9._14_2_ = (short)((uint)iVar6 >> 0x10);
          auVar93 = NEON_rshrn2(auVar99,auVar9,0xe,4);
          uVar129 = NEON_sqxtun(CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14((char)
                                                  iVar25,iVar24)))),auVar93,2);
          puVar2 = param_8 + ((ulong)(uint)((int)uVar50 * 3) & 0xfffffffb);
          *puVar2 = (char)uVar129;
          puVar2[1] = (char)uVar89;
          puVar2[2] = (char)uVar90;
          puVar2[3] = (char)((ulong)uVar129 >> 8);
          puVar2[4] = (char)((ulong)uVar89 >> 8);
          puVar2[5] = (char)((ulong)uVar90 >> 8);
          puVar2[6] = (char)((ulong)uVar129 >> 0x10);
          puVar2[7] = (char)((ulong)uVar89 >> 0x10);
          puVar2[8] = (char)((ulong)uVar90 >> 0x10);
          puVar2[9] = (char)((ulong)uVar129 >> 0x18);
          puVar2[10] = (char)((ulong)uVar89 >> 0x18);
          puVar2[0xb] = (char)((ulong)uVar90 >> 0x18);
          puVar2[0xc] = (char)((ulong)uVar129 >> 0x20);
          puVar2[0xd] = (char)((ulong)uVar89 >> 0x20);
          puVar2[0xe] = (char)((ulong)uVar90 >> 0x20);
          puVar2[0xf] = (char)((ulong)uVar129 >> 0x28);
          puVar2[0x10] = (char)((ulong)uVar89 >> 0x28);
          puVar2[0x11] = (char)((ulong)uVar90 >> 0x28);
          puVar2[0x12] = (char)((ulong)uVar129 >> 0x30);
          puVar2[0x13] = (char)((ulong)uVar89 >> 0x30);
          puVar2[0x14] = (char)((ulong)uVar90 >> 0x30);
          puVar2[0x15] = (char)((ulong)uVar129 >> 0x38);
          puVar2[0x16] = (char)((ulong)uVar89 >> 0x38);
          puVar2[0x17] = (char)((ulong)uVar90 >> 0x38);
          uVar48 = 8;
          bVar39 = false;
        } while (bVar49);
      }
      param_3 = param_3 + 8;
      param_5 = param_5 + 8;
      param_4 = param_4 + 8;
      param_6 = param_6 + 8;
      uVar51 = uVar51 + 1;
    } while (uVar51 != uVar40);
  }
  iVar42 = (int)lVar43;
  lVar41 = (long)iVar42;
  ___memcpy_chk(abStack_c9 + 1,param_3,lVar41,9);
  ___memcpy_chk(abStack_d9 + 1,param_5,lVar41,9);
  sVar52 = (size_t)(9 - iVar42);
  _memset(abStack_c9 + (long)iVar42 + 1,(uint)abStack_c9[lVar43],sVar52);
  _memset(abStack_d9 + (long)iVar42 + 1,(uint)abStack_d9[lVar43],sVar52);
  uVar38 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  bVar70 = (byte)uStack_c7;
  uVar34 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  bVar71 = (byte)((uint7)uStack_c7 >> 8);
  bVar72 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar73 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar74 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar75 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar76 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar77 = (byte)((uint7)uStack_d7 >> 8);
  uVar35 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  bVar78 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar79 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar80 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar81 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar82 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar36 = CONCAT12((char)uStack_d7,(short)CONCAT71(uStack_d7,abStack_d9[1])) & 0xff00ff;
  sVar83 = (short)uVar36 + (ushort)bVar70;
  sVar84 = (ushort)(byte)(uVar36 >> 0x10) + (ushort)bVar71;
  uVar36 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  uVar37 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  sVar85 = sVar83 + (short)uVar36 + (short)uVar37;
  sVar86 = sVar84 + (ushort)(byte)(uVar36 >> 0x10) + (ushort)(byte)(uVar37 >> 0x10);
  sVar124 = (ushort)bVar77 + (ushort)bVar72 + (ushort)bVar71 + (ushort)bVar78;
  sVar125 = (ushort)bVar78 + (ushort)bVar73 + (ushort)bVar72 + (ushort)bVar79;
  sVar126 = (ushort)bVar79 + (ushort)bVar74 + (ushort)bVar73 + (ushort)bVar80;
  sVar127 = (ushort)bVar80 + (ushort)bVar75 + (ushort)bVar74 + (ushort)bVar81;
  sVar87 = (ushort)bVar81 + (ushort)bVar76 + (ushort)bVar75 + (ushort)bVar82;
  sVar100 = (ushort)bVar82 + (ushort)bStack_c0 + (ushort)bVar76 + (ushort)bStack_d0;
  uVar54 = (undefined1)((ushort)(sVar85 + (short)uVar34 * 2 + (short)uVar35 * 2) >> 3);
  uVar56 = (undefined1)
           ((ushort)(sVar86 + (ushort)(byte)(uVar34 >> 0x10) * 2 +
                    (ushort)(byte)(uVar35 >> 0x10) * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar124 + (ushort)bVar71 * 2 + (ushort)bVar78 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar125 + (ushort)bVar72 * 2 + (ushort)bVar79 * 2) >> 3);
  uVar62 = (undefined1)((ushort)(sVar126 + (ushort)bVar73 * 2 + (ushort)bVar80 * 2) >> 3);
  uVar64 = (undefined1)((ushort)(sVar127 + (ushort)bVar74 * 2 + (ushort)bVar81 * 2) >> 3);
  uVar66 = (undefined1)((ushort)(sVar87 + (ushort)bVar75 * 2 + (ushort)bVar82 * 2) >> 3);
  uVar68 = (undefined1)((ushort)(sVar100 + (ushort)bVar76 * 2 + (ushort)bStack_d0 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 * 2 + sVar85) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 * 2 + sVar86) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bVar72) * 2 + sVar124) >> 3);
  uVar61 = (undefined1)((ushort)(((ushort)bVar78 + (ushort)bVar73) * 2 + sVar125) >> 3);
  uVar63 = (undefined1)((ushort)(((ushort)bVar79 + (ushort)bVar74) * 2 + sVar126) >> 3);
  uVar65 = (undefined1)((ushort)(((ushort)bVar80 + (ushort)bVar75) * 2 + sVar127) >> 3);
  uVar67 = (undefined1)((ushort)(((ushort)bVar81 + (ushort)bVar76) * 2 + sVar87) >> 3);
  uVar69 = (undefined1)((ushort)(((ushort)bVar82 + (ushort)bStack_c0) * 2 + sVar100) >> 3);
  uVar90 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  uVar88 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),
                       CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                               )),1);
  uVar129 = NEON_urhadd(CONCAT71(uStack_d7,abStack_d9[1]),
                        CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                                )),1);
  uVar89 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  local_b0[0] = (byte)uVar90;
  local_b0[1] = (byte)uVar88;
  local_b0[2] = (byte)((ulong)uVar90 >> 8);
  local_b0[3] = (byte)((ulong)uVar88 >> 8);
  uStack_ac = (undefined1)((ulong)uVar90 >> 0x10);
  uStack_ab = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_aa = (undefined1)((ulong)uVar90 >> 0x18);
  uStack_a9 = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_a8 = (undefined1)((ulong)uVar90 >> 0x20);
  uStack_a7 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_a6 = (undefined1)((ulong)uVar90 >> 0x28);
  uStack_a5 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_a4 = (undefined1)((ulong)uVar90 >> 0x30);
  uStack_a3 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_a2 = (undefined1)((ulong)uVar90 >> 0x38);
  uStack_a1 = (undefined1)((ulong)uVar88 >> 0x38);
  local_90[0] = (byte)uVar129;
  local_90[1] = (byte)uVar89;
  local_90[2] = (byte)((ulong)uVar129 >> 8);
  local_90[3] = (byte)((ulong)uVar89 >> 8);
  uStack_8c = (undefined1)((ulong)uVar129 >> 0x10);
  uStack_8b = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_8a = (undefined1)((ulong)uVar129 >> 0x18);
  uStack_89 = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_88 = (undefined1)((ulong)uVar129 >> 0x20);
  uStack_87 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_86 = (undefined1)((ulong)uVar129 >> 0x28);
  uStack_85 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_84 = (undefined1)((ulong)uVar129 >> 0x30);
  uStack_83 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_82 = (undefined1)((ulong)uVar129 >> 0x38);
  uStack_81 = (undefined1)((ulong)uVar89 >> 0x38);
  ___memcpy_chk(abStack_c9 + 1,param_4,lVar41,9);
  ___memcpy_chk(abStack_d9 + 1,param_6,lVar41,9);
  _memset(abStack_c9 + (long)iVar42 + 1,(uint)abStack_c9[lVar43],sVar52);
  _memset(abStack_d9 + (long)iVar42 + 1,(uint)abStack_d9[lVar43],sVar52);
  uVar38 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  bVar70 = (byte)uStack_c7;
  uVar34 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  bVar71 = (byte)((uint7)uStack_c7 >> 8);
  bVar72 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar73 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar74 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar75 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar76 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar77 = (byte)((uint7)uStack_d7 >> 8);
  uVar35 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  bVar78 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar79 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar80 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar81 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar82 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar36 = CONCAT12((char)uStack_d7,(short)CONCAT71(uStack_d7,abStack_d9[1])) & 0xff00ff;
  sVar83 = (short)uVar36 + (ushort)bVar70;
  sVar84 = (ushort)(byte)(uVar36 >> 0x10) + (ushort)bVar71;
  uVar36 = CONCAT12(bVar70,uVar38) & 0xff00ff;
  uVar37 = CONCAT12(bVar77,(short)uStack_d7) & 0xff00ff;
  sVar85 = sVar83 + (short)uVar36 + (short)uVar37;
  sVar86 = sVar84 + (ushort)(byte)(uVar36 >> 0x10) + (ushort)(byte)(uVar37 >> 0x10);
  sVar124 = (ushort)bVar77 + (ushort)bVar72 + (ushort)bVar71 + (ushort)bVar78;
  sVar125 = (ushort)bVar78 + (ushort)bVar73 + (ushort)bVar72 + (ushort)bVar79;
  sVar126 = (ushort)bVar79 + (ushort)bVar74 + (ushort)bVar73 + (ushort)bVar80;
  sVar127 = (ushort)bVar80 + (ushort)bVar75 + (ushort)bVar74 + (ushort)bVar81;
  sVar87 = (ushort)bVar81 + (ushort)bVar76 + (ushort)bVar75 + (ushort)bVar82;
  sVar100 = (ushort)bVar82 + (ushort)bStack_c0 + (ushort)bVar76 + (ushort)bStack_d0;
  uVar54 = (undefined1)((ushort)(sVar85 + (short)uVar34 * 2 + (short)uVar35 * 2) >> 3);
  uVar56 = (undefined1)
           ((ushort)(sVar86 + (ushort)(byte)(uVar34 >> 0x10) * 2 +
                    (ushort)(byte)(uVar35 >> 0x10) * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar124 + (ushort)bVar71 * 2 + (ushort)bVar78 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar125 + (ushort)bVar72 * 2 + (ushort)bVar79 * 2) >> 3);
  uVar62 = (undefined1)((ushort)(sVar126 + (ushort)bVar73 * 2 + (ushort)bVar80 * 2) >> 3);
  uVar64 = (undefined1)((ushort)(sVar127 + (ushort)bVar74 * 2 + (ushort)bVar81 * 2) >> 3);
  uVar66 = (undefined1)((ushort)(sVar87 + (ushort)bVar75 * 2 + (ushort)bVar82 * 2) >> 3);
  uVar68 = (undefined1)((ushort)(sVar100 + (ushort)bVar76 * 2 + (ushort)bStack_d0 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 * 2 + sVar85) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 * 2 + sVar86) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bVar72) * 2 + sVar124) >> 3);
  uVar61 = (undefined1)((ushort)(((ushort)bVar78 + (ushort)bVar73) * 2 + sVar125) >> 3);
  uVar63 = (undefined1)((ushort)(((ushort)bVar79 + (ushort)bVar74) * 2 + sVar126) >> 3);
  uVar65 = (undefined1)((ushort)(((ushort)bVar80 + (ushort)bVar75) * 2 + sVar127) >> 3);
  uVar67 = (undefined1)((ushort)(((ushort)bVar81 + (ushort)bVar76) * 2 + sVar87) >> 3);
  uVar69 = (undefined1)((ushort)(((ushort)bVar82 + (ushort)bStack_c0) * 2 + sVar100) >> 3);
  uVar90 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  uVar88 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),
                       CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                               )),1);
  uVar129 = NEON_urhadd(CONCAT71(uStack_d7,abStack_d9[1]),
                        CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(
                                                  uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54)))))
                                                )),1);
  uVar89 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar69,CONCAT16(uVar67,CONCAT15(uVar65,CONCAT14(uVar63,CONCAT13(
                                                  uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)))))
                                               )),1);
  local_a0[0] = (byte)uVar90;
  local_a0[1] = (byte)uVar88;
  local_a0[2] = (byte)((ulong)uVar90 >> 8);
  local_a0[3] = (byte)((ulong)uVar88 >> 8);
  uStack_9c = (undefined1)((ulong)uVar90 >> 0x10);
  uStack_9b = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_9a = (undefined1)((ulong)uVar90 >> 0x18);
  uStack_99 = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_98 = (undefined1)((ulong)uVar90 >> 0x20);
  uStack_97 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_96 = (undefined1)((ulong)uVar90 >> 0x28);
  uStack_95 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_94 = (undefined1)((ulong)uVar90 >> 0x30);
  uStack_93 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_92 = (undefined1)((ulong)uVar90 >> 0x38);
  uStack_91 = (undefined1)((ulong)uVar88 >> 0x38);
  local_80[0] = (byte)uVar129;
  local_80[1] = (byte)uVar89;
  local_80[2] = (byte)((ulong)uVar129 >> 8);
  local_80[3] = (byte)((ulong)uVar89 >> 8);
  uStack_7c = (undefined1)((ulong)uVar129 >> 0x10);
  uStack_7b = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_7a = (undefined1)((ulong)uVar129 >> 0x18);
  uStack_79 = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_78 = (undefined1)((ulong)uVar129 >> 0x20);
  uStack_77 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_76 = (undefined1)((ulong)uVar129 >> 0x28);
  uStack_75 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_74 = (undefined1)((ulong)uVar129 >> 0x30);
  uStack_73 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_72 = (undefined1)((ulong)uVar129 >> 0x38);
  uStack_71 = (undefined1)((ulong)uVar89 >> 0x38);
  if ((int)uVar53 < param_9) {
    uVar44 = (ulong)(~(uVar47 << 4) + param_9);
    uVar46 = uVar47 * 0x30 | 3;
    pbVar45 = local_a0;
    uVar51 = uVar44;
    uVar40 = uVar53;
    do {
      bVar71 = pbVar45[-0x10];
      bVar70 = *pbVar45;
      puVar2 = param_7 + (int)uVar46;
      iVar42 = (uint)param_1[(int)uVar40] * 0x4a85;
      uVar5 = iVar42 + (uint)bVar71 * 0x811a;
      uVar4 = uVar5 - 0x451550;
      uVar54 = 0;
      if (0x45154f < uVar5) {
        uVar54 = 0xff;
      }
      uVar55 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar55 = uVar54;
      }
      *puVar2 = uVar55;
      iVar1 = iVar42 + (uint)bVar71 * -0x1913 + (uint)bVar70 * -0x3408;
      uVar4 = iVar1 + 0x220530;
      uVar54 = 0;
      if (-0x220531 < iVar1) {
        uVar54 = 0xff;
      }
      uVar55 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar55 = uVar54;
      }
      puVar2[1] = uVar55;
      uVar5 = iVar42 + (uint)bVar70 * 0x6625;
      uVar4 = uVar5 - 0x379ad0;
      uVar54 = 0;
      if (0x379acf < uVar5) {
        uVar54 = 0xff;
      }
      uVar55 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar55 = uVar54;
      }
      puVar2[2] = uVar55;
      uVar40 = uVar40 + 1;
      uVar46 = uVar46 + 3;
      uVar51 = uVar51 - 1;
      pbVar45 = pbVar45 + 1;
    } while (uVar51 != 0);
    if (param_2 != (byte *)0x0) {
      uVar47 = uVar47 * 0x30 | 3;
      pbVar45 = local_80;
      do {
        bVar71 = pbVar45[-0x10];
        bVar70 = *pbVar45;
        puVar2 = param_8 + (int)uVar47;
        iVar42 = (uint)param_2[(int)uVar53] * 0x4a85;
        uVar46 = iVar42 + (uint)bVar71 * 0x811a;
        uVar40 = uVar46 - 0x451550;
        uVar54 = 0;
        if (0x45154f < uVar46) {
          uVar54 = 0xff;
        }
        uVar55 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar55 = uVar54;
        }
        *puVar2 = uVar55;
        iVar1 = iVar42 + (uint)bVar71 * -0x1913 + (uint)bVar70 * -0x3408;
        uVar40 = iVar1 + 0x220530;
        uVar54 = 0;
        if (-0x220531 < iVar1) {
          uVar54 = 0xff;
        }
        uVar55 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar55 = uVar54;
        }
        puVar2[1] = uVar55;
        uVar46 = iVar42 + (uint)bVar70 * 0x6625;
        uVar40 = uVar46 - 0x379ad0;
        uVar54 = 0;
        if (0x379acf < uVar46) {
          uVar54 = 0xff;
        }
        uVar55 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar55 = uVar54;
        }
        puVar2[2] = uVar55;
        uVar53 = uVar53 + 1;
        uVar47 = uVar47 + 3;
        uVar44 = uVar44 - 1;
        pbVar45 = pbVar45 + 1;
      } while (uVar44 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010cb5f8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined6 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  int iVar26;
  int iVar27;
  uint3 uVar28;
  uint3 uVar29;
  uint3 uVar30;
  undefined2 uVar31;
  uint3 uVar32;
  bool bVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  uint uVar36;
  int iVar37;
  ulong uVar38;
  byte *pbVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  bool bVar44;
  uint uVar45;
  size_t sVar46;
  long lVar47;
  long lVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  undefined8 uVar86;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  short sVar87;
  short sVar97;
  short sVar98;
  undefined8 uVar88;
  undefined8 uVar89;
  short sVar99;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  byte bVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  short sVar114;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  undefined8 uVar115;
  byte bVar127;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined4 local_10c;
  undefined1 local_108;
  undefined7 uStack_107;
  byte bStack_100;
  byte abStack_f9 [2];
  undefined7 uStack_f7;
  byte bStack_f0;
  byte local_e0 [4];
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  byte local_d0 [4];
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  byte local_c0 [4];
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  byte local_b0 [4];
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  long local_a0;
  undefined1 auVar90 [16];
  
  local_a0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar48 = (long)((ulong)(param_9 + 1) << 0x20) >> 0x21;
  uVar42 = lVar48 - 1;
  lVar48 = lVar48 - (uVar42 & 0xfffffffffffffff8);
  iVar37 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar45 = iVar37 + (uint)*param_3 >> 1;
  uVar40 = iVar1 + (uint)*param_4 >> 1;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar36 = iVar6 + uVar45 * 0x811a;
  uVar41 = uVar36 - 0x451550;
  uVar49 = 0;
  if (0x45154f < uVar36) {
    uVar49 = 0xff;
  }
  uVar50 = (char)(uVar41 >> 0xe);
  if (0x3fffff < uVar41) {
    uVar50 = uVar49;
  }
  *param_7 = uVar50;
  iVar3 = iVar6 + uVar45 * -0x1913 + uVar40 * -0x3408;
  uVar41 = iVar3 + 0x220530;
  uVar49 = 0;
  if (-0x220531 < iVar3) {
    uVar49 = 0xff;
  }
  uVar50 = (char)(uVar41 >> 0xe);
  if (0x3fffff < uVar41) {
    uVar50 = uVar49;
  }
  param_7[1] = uVar50;
  uVar45 = iVar6 + uVar40 * 0x6625;
  uVar41 = uVar45 - 0x379ad0;
  uVar49 = 0;
  if (0x379acf < uVar45) {
    uVar49 = 0xff;
  }
  uVar50 = (char)(uVar41 >> 0xe);
  if (0x3fffff < uVar41) {
    uVar50 = uVar49;
  }
  uVar41 = (int)uVar42 >> 3;
  param_7[2] = uVar50;
  param_7[3] = 0xff;
  if (param_2 != (byte *)0x0) {
    uVar40 = iVar37 + (uint)*param_5 >> 1;
    uVar36 = iVar1 + (uint)*param_6 >> 1;
    iVar37 = (uint)*param_2 * 0x4a85;
    uVar4 = iVar37 + uVar40 * 0x811a;
    uVar45 = uVar4 - 0x451550;
    uVar49 = 0;
    if (0x45154f < uVar4) {
      uVar49 = 0xff;
    }
    uVar50 = (char)(uVar45 >> 0xe);
    if (0x3fffff < uVar45) {
      uVar50 = uVar49;
    }
    *param_8 = uVar50;
    iVar1 = iVar37 + uVar40 * -0x1913 + uVar36 * -0x3408;
    uVar45 = iVar1 + 0x220530;
    uVar49 = 0;
    if (-0x220531 < iVar1) {
      uVar49 = 0xff;
    }
    uVar50 = (char)(uVar45 >> 0xe);
    if (0x3fffff < uVar45) {
      uVar50 = uVar49;
    }
    param_8[1] = uVar50;
    uVar40 = iVar37 + uVar36 * 0x6625;
    uVar45 = uVar40 - 0x379ad0;
    uVar49 = 0;
    if (0x379acf < uVar40) {
      uVar49 = 0xff;
    }
    uVar50 = (char)(uVar45 >> 0xe);
    if (0x3fffff < uVar45) {
      uVar50 = uVar49;
    }
    param_8[2] = uVar50;
    param_8[3] = 0xff;
  }
  uVar45 = uVar41 << 4 | 1;
  local_10c = param_9;
  if (0x10 < param_9) {
    uVar38 = 0;
    uVar42 = 0;
    uVar40 = uVar41;
    if ((int)uVar41 < 2) {
      uVar40 = 1;
    }
    do {
      uVar43 = 0;
      puVar35 = param_8 + uVar38 + 4;
      puVar34 = param_7 + uVar38 + 4;
      uVar88 = *(undefined8 *)param_3;
      uVar86 = *(undefined8 *)(param_3 + 1);
      bVar72 = (byte)((ulong)uVar86 >> 8);
      bVar73 = (byte)((ulong)uVar86 >> 0x10);
      bVar74 = (byte)((ulong)uVar86 >> 0x18);
      bVar75 = (byte)((ulong)uVar86 >> 0x20);
      bVar76 = (byte)((ulong)uVar86 >> 0x28);
      bVar77 = (byte)((ulong)uVar86 >> 0x30);
      bVar100 = (byte)((ulong)uVar86 >> 0x38);
      uVar89 = *(undefined8 *)param_5;
      uVar49 = (undefined1)((ulong)uVar89 >> 8);
      bVar105 = (byte)((ulong)uVar89 >> 0x10);
      bVar106 = (byte)((ulong)uVar89 >> 0x18);
      bVar107 = (byte)((ulong)uVar89 >> 0x20);
      bVar108 = (byte)((ulong)uVar89 >> 0x28);
      bVar109 = (byte)((ulong)uVar89 >> 0x30);
      bVar110 = (byte)((ulong)uVar89 >> 0x38);
      uVar115 = *(undefined8 *)(param_5 + 1);
      bVar65 = (byte)((ulong)uVar88 >> 8);
      bVar66 = (byte)((ulong)uVar88 >> 0x10);
      bVar67 = (byte)((ulong)uVar88 >> 0x18);
      bVar68 = (byte)((ulong)uVar88 >> 0x20);
      bVar69 = (byte)((ulong)uVar88 >> 0x28);
      bVar70 = (byte)((ulong)uVar88 >> 0x30);
      bVar71 = (byte)((ulong)uVar88 >> 0x38);
      bVar121 = (byte)((ulong)uVar115 >> 8);
      bVar122 = (byte)((ulong)uVar115 >> 0x10);
      bVar123 = (byte)((ulong)uVar115 >> 0x18);
      bVar124 = (byte)((ulong)uVar115 >> 0x20);
      bVar125 = (byte)((ulong)uVar115 >> 0x28);
      bVar126 = (byte)((ulong)uVar115 >> 0x30);
      bVar127 = (byte)((ulong)uVar115 >> 0x38);
      uVar28 = CONCAT12(bVar72,(short)uVar86) & 0xff00ff;
      uVar29 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar30 = CONCAT12(bVar121,(short)uVar115) & 0xff00ff;
      sVar78 = (short)uVar28 + (ushort)(byte)uVar88 + (short)uVar29 + (short)uVar30;
      sVar79 = (ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar65 + (ushort)(byte)(uVar29 >> 0x10) +
               (ushort)(byte)(uVar30 >> 0x10);
      sVar80 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar105 + (ushort)bVar122;
      sVar81 = (ushort)bVar74 + (ushort)bVar67 + (ushort)bVar106 + (ushort)bVar123;
      sVar82 = (ushort)bVar75 + (ushort)bVar68 + (ushort)bVar107 + (ushort)bVar124;
      sVar83 = (ushort)bVar76 + (ushort)bVar69 + (ushort)bVar108 + (ushort)bVar125;
      sVar84 = (ushort)bVar77 + (ushort)bVar70 + (ushort)bVar109 + (ushort)bVar126;
      sVar85 = (ushort)bVar100 + (ushort)bVar71 + (ushort)bVar110 + (ushort)bVar127;
      uVar28 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar49 = (undefined1)
               ((ushort)(sVar78 + (ushort)(byte)uVar88 * 2 + (ushort)(byte)uVar115 * 2) >> 3);
      uVar51 = (undefined1)((ushort)(sVar79 + (ushort)bVar65 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar53 = (undefined1)((ushort)(sVar80 + (ushort)bVar66 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(sVar81 + (ushort)bVar67 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar57 = (undefined1)((ushort)(sVar82 + (ushort)bVar68 * 2 + (ushort)bVar124 * 2) >> 3);
      uVar59 = (undefined1)((ushort)(sVar83 + (ushort)bVar69 * 2 + (ushort)bVar125 * 2) >> 3);
      uVar61 = (undefined1)((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)bVar126 * 2) >> 3);
      uVar63 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar50 = (undefined1)((ushort)(((short)uVar28 + (ushort)(byte)uVar86) * 2 + sVar78) >> 3);
      uVar52 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar72) * 2 + sVar79) >> 3);
      uVar54 = (undefined1)((ushort)(((ushort)bVar105 + (ushort)bVar73) * 2 + sVar80) >> 3);
      uVar56 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar74) * 2 + sVar81) >> 3);
      uVar58 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar75) * 2 + sVar82) >> 3);
      uVar60 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar76) * 2 + sVar83) >> 3);
      uVar62 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar64 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar100) * 2 + sVar85) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      local_e0[0] = (byte)uVar88;
      local_e0[1] = (char)uVar86;
      local_e0[2] = (char)((ulong)uVar88 >> 8);
      local_e0[3] = (char)((ulong)uVar86 >> 8);
      uStack_dc = (char)((ulong)uVar88 >> 0x10);
      uStack_db = (char)((ulong)uVar86 >> 0x10);
      uStack_da = (char)((ulong)uVar88 >> 0x18);
      uStack_d9 = (char)((ulong)uVar86 >> 0x18);
      uStack_d8 = (char)((ulong)uVar88 >> 0x20);
      uStack_d7 = (char)((ulong)uVar86 >> 0x20);
      uStack_d6 = (char)((ulong)uVar88 >> 0x28);
      uStack_d5 = (char)((ulong)uVar86 >> 0x28);
      uStack_d4 = (char)((ulong)uVar88 >> 0x30);
      uStack_d3 = (char)((ulong)uVar86 >> 0x30);
      uStack_d2 = (char)((ulong)uVar88 >> 0x38);
      uStack_d1 = (char)((ulong)uVar86 >> 0x38);
      uVar88 = NEON_urhadd(uVar115,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      local_c0[0] = (byte)uVar89;
      local_c0[1] = (char)uVar88;
      local_c0[2] = (char)((ulong)uVar89 >> 8);
      local_c0[3] = (char)((ulong)uVar88 >> 8);
      uStack_bc = (char)((ulong)uVar89 >> 0x10);
      uStack_bb = (char)((ulong)uVar88 >> 0x10);
      uStack_ba = (char)((ulong)uVar89 >> 0x18);
      uStack_b9 = (char)((ulong)uVar88 >> 0x18);
      uStack_b8 = (char)((ulong)uVar89 >> 0x20);
      uStack_b7 = (char)((ulong)uVar88 >> 0x20);
      uStack_b6 = (char)((ulong)uVar89 >> 0x28);
      uStack_b5 = (char)((ulong)uVar88 >> 0x28);
      uStack_b4 = (char)((ulong)uVar89 >> 0x30);
      uStack_b3 = (char)((ulong)uVar88 >> 0x30);
      uStack_b2 = (char)((ulong)uVar89 >> 0x38);
      uStack_b1 = (char)((ulong)uVar88 >> 0x38);
      uVar88 = *(undefined8 *)param_4;
      uVar86 = *(undefined8 *)(param_4 + 1);
      bVar72 = (byte)((ulong)uVar86 >> 8);
      bVar73 = (byte)((ulong)uVar86 >> 0x10);
      bVar74 = (byte)((ulong)uVar86 >> 0x18);
      bVar75 = (byte)((ulong)uVar86 >> 0x20);
      bVar76 = (byte)((ulong)uVar86 >> 0x28);
      bVar77 = (byte)((ulong)uVar86 >> 0x30);
      bVar100 = (byte)((ulong)uVar86 >> 0x38);
      uVar89 = *(undefined8 *)param_6;
      uVar49 = (undefined1)((ulong)uVar89 >> 8);
      bVar105 = (byte)((ulong)uVar89 >> 0x10);
      bVar106 = (byte)((ulong)uVar89 >> 0x18);
      bVar107 = (byte)((ulong)uVar89 >> 0x20);
      bVar108 = (byte)((ulong)uVar89 >> 0x28);
      bVar109 = (byte)((ulong)uVar89 >> 0x30);
      bVar110 = (byte)((ulong)uVar89 >> 0x38);
      uVar115 = *(undefined8 *)(param_6 + 1);
      bVar65 = (byte)((ulong)uVar88 >> 8);
      bVar66 = (byte)((ulong)uVar88 >> 0x10);
      bVar67 = (byte)((ulong)uVar88 >> 0x18);
      bVar68 = (byte)((ulong)uVar88 >> 0x20);
      bVar69 = (byte)((ulong)uVar88 >> 0x28);
      bVar70 = (byte)((ulong)uVar88 >> 0x30);
      bVar71 = (byte)((ulong)uVar88 >> 0x38);
      bVar121 = (byte)((ulong)uVar115 >> 8);
      bVar122 = (byte)((ulong)uVar115 >> 0x10);
      bVar123 = (byte)((ulong)uVar115 >> 0x18);
      bVar124 = (byte)((ulong)uVar115 >> 0x20);
      bVar125 = (byte)((ulong)uVar115 >> 0x28);
      bVar126 = (byte)((ulong)uVar115 >> 0x30);
      bVar127 = (byte)((ulong)uVar115 >> 0x38);
      uVar28 = CONCAT12(bVar72,(short)uVar86) & 0xff00ff;
      uVar29 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar30 = CONCAT12(bVar121,(short)uVar115) & 0xff00ff;
      sVar78 = (short)uVar28 + (ushort)(byte)uVar88 + (short)uVar29 + (short)uVar30;
      sVar79 = (ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar65 + (ushort)(byte)(uVar29 >> 0x10) +
               (ushort)(byte)(uVar30 >> 0x10);
      sVar80 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar105 + (ushort)bVar122;
      sVar81 = (ushort)bVar74 + (ushort)bVar67 + (ushort)bVar106 + (ushort)bVar123;
      sVar82 = (ushort)bVar75 + (ushort)bVar68 + (ushort)bVar107 + (ushort)bVar124;
      sVar83 = (ushort)bVar76 + (ushort)bVar69 + (ushort)bVar108 + (ushort)bVar125;
      sVar84 = (ushort)bVar77 + (ushort)bVar70 + (ushort)bVar109 + (ushort)bVar126;
      sVar85 = (ushort)bVar100 + (ushort)bVar71 + (ushort)bVar110 + (ushort)bVar127;
      uVar28 = CONCAT12(uVar49,(short)uVar89) & 0xff00ff;
      uVar49 = (undefined1)
               ((ushort)(sVar78 + (ushort)(byte)uVar88 * 2 + (ushort)(byte)uVar115 * 2) >> 3);
      uVar51 = (undefined1)((ushort)(sVar79 + (ushort)bVar65 * 2 + (ushort)bVar121 * 2) >> 3);
      uVar53 = (undefined1)((ushort)(sVar80 + (ushort)bVar66 * 2 + (ushort)bVar122 * 2) >> 3);
      uVar55 = (undefined1)((ushort)(sVar81 + (ushort)bVar67 * 2 + (ushort)bVar123 * 2) >> 3);
      uVar57 = (undefined1)((ushort)(sVar82 + (ushort)bVar68 * 2 + (ushort)bVar124 * 2) >> 3);
      uVar59 = (undefined1)((ushort)(sVar83 + (ushort)bVar69 * 2 + (ushort)bVar125 * 2) >> 3);
      uVar61 = (undefined1)((ushort)(sVar84 + (ushort)bVar70 * 2 + (ushort)bVar126 * 2) >> 3);
      uVar63 = (undefined1)((ushort)(sVar85 + (ushort)bVar71 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar50 = (undefined1)((ushort)(((short)uVar28 + (ushort)(byte)uVar86) * 2 + sVar78) >> 3);
      uVar52 = (undefined1)
               ((ushort)(((ushort)(byte)(uVar28 >> 0x10) + (ushort)bVar72) * 2 + sVar79) >> 3);
      uVar54 = (undefined1)((ushort)(((ushort)bVar105 + (ushort)bVar73) * 2 + sVar80) >> 3);
      uVar56 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar74) * 2 + sVar81) >> 3);
      uVar58 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar75) * 2 + sVar82) >> 3);
      uVar60 = (undefined1)((ushort)(((ushort)bVar108 + (ushort)bVar76) * 2 + sVar83) >> 3);
      uVar62 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar77) * 2 + sVar84) >> 3);
      uVar64 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar100) * 2 + sVar85) >> 3);
      uVar88 = NEON_urhadd(uVar88,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      uVar89 = NEON_urhadd(uVar89,CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,
                                                  CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,
                                                  uVar49))))))),1);
      local_d0[0] = (byte)uVar88;
      local_d0[1] = (char)uVar86;
      local_d0[2] = (char)((ulong)uVar88 >> 8);
      local_d0[3] = (char)((ulong)uVar86 >> 8);
      uStack_cc = (char)((ulong)uVar88 >> 0x10);
      uStack_cb = (char)((ulong)uVar86 >> 0x10);
      uStack_ca = (char)((ulong)uVar88 >> 0x18);
      uStack_c9 = (char)((ulong)uVar86 >> 0x18);
      uStack_c8 = (char)((ulong)uVar88 >> 0x20);
      uStack_c7 = (char)((ulong)uVar86 >> 0x20);
      uStack_c6 = (char)((ulong)uVar88 >> 0x28);
      uStack_c5 = (char)((ulong)uVar86 >> 0x28);
      uStack_c4 = (char)((ulong)uVar88 >> 0x30);
      uStack_c3 = (char)((ulong)uVar86 >> 0x30);
      uStack_c2 = (char)((ulong)uVar88 >> 0x38);
      uStack_c1 = (char)((ulong)uVar86 >> 0x38);
      uVar88 = NEON_urhadd(uVar115,CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,
                                                  CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,
                                                  uVar50))))))),1);
      local_b0[0] = (byte)uVar89;
      local_b0[1] = (char)uVar88;
      local_b0[2] = (char)((ulong)uVar89 >> 8);
      local_b0[3] = (char)((ulong)uVar88 >> 8);
      uStack_ac = (char)((ulong)uVar89 >> 0x10);
      uStack_ab = (char)((ulong)uVar88 >> 0x10);
      uStack_aa = (char)((ulong)uVar89 >> 0x18);
      uStack_a9 = (char)((ulong)uVar88 >> 0x18);
      uStack_a8 = (char)((ulong)uVar89 >> 0x20);
      uStack_a7 = (char)((ulong)uVar88 >> 0x20);
      uStack_a6 = (char)((ulong)uVar89 >> 0x28);
      uStack_a5 = (char)((ulong)uVar88 >> 0x28);
      uStack_a4 = (char)((ulong)uVar89 >> 0x30);
      uStack_a3 = (char)((ulong)uVar88 >> 0x30);
      uStack_a2 = (char)((ulong)uVar89 >> 0x38);
      uStack_a1 = (char)((ulong)uVar88 >> 0x38);
      uVar2 = uVar42 << 4 | 1;
      bVar33 = true;
      do {
        bVar44 = bVar33;
        uVar89 = *(undefined8 *)(param_1 + (uVar2 | uVar43));
        uVar88 = *(undefined8 *)(local_e0 + uVar43);
        uVar86 = *(undefined8 *)(local_d0 + uVar43);
        sVar87 = (byte)uVar89 - 0x10;
        sVar97 = (byte)((ulong)uVar89 >> 8) - 0x10;
        sVar98 = (byte)((ulong)uVar89 >> 0x10) - 0x10;
        sVar99 = (byte)((ulong)uVar89 >> 0x18) - 0x10;
        auVar90._0_8_ = CONCAT26(sVar99,CONCAT24(sVar98,CONCAT22(sVar97,sVar87)));
        auVar90._8_2_ = (byte)((ulong)uVar89 >> 0x20) - 0x10;
        auVar90._10_2_ = (byte)((ulong)uVar89 >> 0x28) - 0x10;
        auVar90._12_2_ = (byte)((ulong)uVar89 >> 0x30) - 0x10;
        auVar90._14_2_ = (byte)((ulong)uVar89 >> 0x38) - 0x10;
        uVar28 = CONCAT12((char)((ulong)uVar88 >> 8),(short)uVar88) & 0xff00ff;
        sVar78 = (short)uVar28 + -0x80;
        sVar79 = (byte)(uVar28 >> 0x10) - 0x80;
        sVar80 = (byte)((ulong)uVar88 >> 0x10) - 0x80;
        sVar81 = (byte)((ulong)uVar88 >> 0x18) - 0x80;
        sVar101 = (byte)((ulong)uVar88 >> 0x20) - 0x80;
        sVar102 = (byte)((ulong)uVar88 >> 0x28) - 0x80;
        sVar103 = (byte)((ulong)uVar88 >> 0x30) - 0x80;
        sVar104 = (byte)((ulong)uVar88 >> 0x38) - 0x80;
        uVar28 = CONCAT12((char)((ulong)uVar86 >> 8),(short)uVar86) & 0xff00ff;
        sVar82 = (short)uVar28 + -0x80;
        sVar83 = (byte)(uVar28 >> 0x10) - 0x80;
        sVar84 = (byte)((ulong)uVar86 >> 0x10) - 0x80;
        sVar85 = (byte)((ulong)uVar86 >> 0x18) - 0x80;
        sVar111 = (byte)((ulong)uVar86 >> 0x20) - 0x80;
        sVar112 = (byte)((ulong)uVar86 >> 0x28) - 0x80;
        sVar113 = (byte)((ulong)uVar86 >> 0x30) - 0x80;
        sVar114 = (byte)((ulong)uVar86 >> 0x38) - 0x80;
        auVar91._8_8_ = auVar90._8_8_;
        iVar37 = sVar83 * 0x6625 + sVar97 * 0x4a85;
        iVar1 = sVar84 * 0x6625 + sVar98 * 0x4a85;
        iVar6 = sVar85 * 0x6625 + sVar99 * 0x4a85;
        uVar11 = CONCAT13((char)((ushort)sVar79 >> 8),CONCAT12((char)sVar79,sVar78));
        uVar12 = CONCAT15((char)((ushort)sVar80 >> 8),CONCAT14((char)sVar80,uVar11));
        iVar3 = sVar112 * 0x6625 + auVar90._10_2_ * 0x4a85;
        iVar9 = sVar113 * 0x6625 + auVar90._12_2_ * 0x4a85;
        iVar10 = sVar114 * 0x6625 + auVar90._14_2_ * 0x4a85;
        auVar116._0_8_ =
             CONCAT44(sVar97 * 0x4a85 - (sVar79 * 0x1913 + sVar83 * 0x3408),
                      sVar87 * 0x4a85 - (sVar78 * 0x1913 + sVar82 * 0x3408));
        auVar116._8_4_ = sVar98 * 0x4a85 - (sVar80 * 0x1913 + sVar84 * 0x3408);
        auVar116._12_4_ = sVar99 * 0x4a85 - (sVar81 * 0x1913 + sVar85 * 0x3408);
        iVar20 = (short)((uint)uVar11 >> 0x10) * 0x811a + sVar97 * 0x4a85;
        iVar21 = (short)((uint6)uVar12 >> 0x20) * 0x811a + sVar98 * 0x4a85;
        iVar22 = (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar12)) >> 0x30
                        ) * 0x811a + sVar99 * 0x4a85;
        iVar25 = auVar90._10_2_ * 0x4a85 - (sVar102 * 0x1913 + sVar112 * 0x3408);
        iVar26 = auVar90._12_2_ * 0x4a85 - (sVar103 * 0x1913 + sVar113 * 0x3408);
        iVar27 = auVar90._14_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
        iVar15 = CONCAT13(sVar102 >> 0xf,(int3)sVar102) * 0x811a + auVar90._10_2_ * 0x4a85;
        iVar16 = sVar103 * 0x811a + auVar90._12_2_ * 0x4a85;
        iVar17 = sVar104 * 0x811a + auVar90._14_2_ * 0x4a85;
        auVar92[4] = (char)iVar37;
        auVar92._0_4_ = sVar82 * 0x6625 + sVar87 * 0x4a85;
        auVar92[5] = (char)((uint)iVar37 >> 8);
        auVar92[6] = (char)((uint)iVar37 >> 0x10);
        auVar92[7] = (char)((uint)iVar37 >> 0x18);
        auVar92._8_2_ = (short)iVar1;
        auVar92._10_2_ = (short)((uint)iVar1 >> 0x10);
        auVar92._12_2_ = (short)iVar6;
        auVar92._14_2_ = (short)((uint)iVar6 >> 0x10);
        auVar91._0_8_ = NEON_rshrn(auVar90._0_8_,auVar92,0xe,4);
        auVar118[4] = (char)iVar3;
        auVar118._0_4_ = sVar111 * 0x6625 + auVar90._8_2_ * 0x4a85;
        auVar118[5] = (char)((uint)iVar3 >> 8);
        auVar118[6] = (char)((uint)iVar3 >> 0x10);
        auVar118[7] = (char)((uint)iVar3 >> 0x18);
        auVar118._8_2_ = (short)iVar9;
        auVar118._10_2_ = (short)((uint)iVar9 >> 0x10);
        auVar118._12_2_ = (short)iVar10;
        auVar118._14_2_ = (short)((uint)iVar10 >> 0x10);
        auVar92 = NEON_rshrn2(auVar91,auVar118,0xe,4);
        auVar117._8_8_ = auVar116._8_8_;
        auVar117._0_8_ = NEON_rshrn(auVar116._0_8_,auVar116,0xe,4);
        in_d25 = NEON_sqxtun(in_d25,auVar92,2);
        auVar23[4] = (char)iVar25;
        auVar23._0_4_ = auVar90._8_2_ * 0x4a85 - (sVar101 * 0x1913 + sVar111 * 0x3408);
        auVar23[5] = (char)((uint)iVar25 >> 8);
        auVar23[6] = (char)((uint)iVar25 >> 0x10);
        auVar23[7] = (char)((uint)iVar25 >> 0x18);
        auVar23._8_2_ = (short)iVar26;
        auVar23._10_2_ = (short)((uint)iVar26 >> 0x10);
        auVar23._12_2_ = (short)iVar27;
        auVar23._14_2_ = (short)((uint)iVar27 >> 0x10);
        auVar118 = NEON_rshrn2(auVar117,auVar23,0xe,4);
        in_d24 = NEON_sqxtun(in_d24,auVar118,2);
        auVar93._8_8_ = auVar92._8_8_;
        auVar18[4] = (char)iVar20;
        auVar18._0_4_ = sVar78 * 0x811a + sVar87 * 0x4a85;
        auVar18[5] = (char)((uint)iVar20 >> 8);
        auVar18[6] = (char)((uint)iVar20 >> 0x10);
        auVar18[7] = (char)((uint)iVar20 >> 0x18);
        auVar18._8_2_ = (short)iVar21;
        auVar18._10_2_ = (short)((uint)iVar21 >> 0x10);
        auVar18._12_2_ = (short)iVar22;
        auVar18._14_2_ = (short)((uint)iVar22 >> 0x10);
        auVar93._0_8_ = NEON_rshrn(auVar92._0_8_,auVar18,0xe,4);
        auVar13[4] = (char)iVar15;
        auVar13._0_4_ = CONCAT13(sVar101 >> 0xf,(int3)sVar101) * 0x811a + auVar90._8_2_ * 0x4a85;
        auVar13[5] = (char)((uint)iVar15 >> 8);
        auVar13[6] = (char)((uint)iVar15 >> 0x10);
        auVar13[7] = (char)((uint)iVar15 >> 0x18);
        auVar13._8_2_ = (short)iVar16;
        auVar13._10_2_ = (short)((uint)iVar16 >> 0x10);
        auVar13._12_2_ = (short)iVar17;
        auVar13._14_2_ = (short)((uint)iVar17 >> 0x10);
        auVar92 = NEON_rshrn2(auVar93,auVar13,0xe,4);
        in_d23 = NEON_sqxtun(in_d23,auVar92,2);
        *puVar34 = (char)in_d23;
        puVar34[1] = (char)in_d24;
        puVar34[2] = (char)in_d25;
        puVar34[3] = 0xff;
        puVar34[4] = (char)((ulong)in_d23 >> 8);
        puVar34[5] = (char)((ulong)in_d24 >> 8);
        puVar34[6] = (char)((ulong)in_d25 >> 8);
        puVar34[7] = 0xff;
        puVar34[8] = (char)((ulong)in_d23 >> 0x10);
        puVar34[9] = (char)((ulong)in_d24 >> 0x10);
        puVar34[10] = (char)((ulong)in_d25 >> 0x10);
        puVar34[0xb] = 0xff;
        puVar34[0xc] = (char)((ulong)in_d23 >> 0x18);
        puVar34[0xd] = (char)((ulong)in_d24 >> 0x18);
        puVar34[0xe] = (char)((ulong)in_d25 >> 0x18);
        puVar34[0xf] = 0xff;
        puVar34[0x10] = (char)((ulong)in_d23 >> 0x20);
        puVar34[0x11] = (char)((ulong)in_d24 >> 0x20);
        puVar34[0x12] = (char)((ulong)in_d25 >> 0x20);
        puVar34[0x13] = 0xff;
        puVar34[0x14] = (char)((ulong)in_d23 >> 0x28);
        puVar34[0x15] = (char)((ulong)in_d24 >> 0x28);
        puVar34[0x16] = (char)((ulong)in_d25 >> 0x28);
        puVar34[0x17] = 0xff;
        puVar34[0x18] = (char)((ulong)in_d23 >> 0x30);
        puVar34[0x19] = (char)((ulong)in_d24 >> 0x30);
        puVar34[0x1a] = (char)((ulong)in_d25 >> 0x30);
        puVar34[0x1b] = 0xff;
        puVar34[0x1c] = (char)((ulong)in_d23 >> 0x38);
        puVar34[0x1d] = (char)((ulong)in_d24 >> 0x38);
        puVar34[0x1e] = (char)((ulong)in_d25 >> 0x38);
        puVar34[0x1f] = 0xff;
        puVar34 = puVar34 + 0x20;
        uVar43 = 8;
        bVar33 = false;
      } while (bVar44);
      if (param_2 != (byte *)0x0) {
        uVar43 = 0;
        bVar33 = true;
        do {
          bVar44 = bVar33;
          uVar89 = *(undefined8 *)(param_2 + (uVar2 | uVar43));
          uVar88 = *(undefined8 *)(local_c0 + uVar43);
          uVar86 = *(undefined8 *)(local_b0 + uVar43);
          sVar87 = (byte)uVar89 - 0x10;
          sVar97 = (byte)((ulong)uVar89 >> 8) - 0x10;
          sVar98 = (byte)((ulong)uVar89 >> 0x10) - 0x10;
          sVar99 = (byte)((ulong)uVar89 >> 0x18) - 0x10;
          auVar94._0_8_ = CONCAT26(sVar99,CONCAT24(sVar98,CONCAT22(sVar97,sVar87)));
          auVar94._8_2_ = (byte)((ulong)uVar89 >> 0x20) - 0x10;
          auVar94._10_2_ = (byte)((ulong)uVar89 >> 0x28) - 0x10;
          auVar94._12_2_ = (byte)((ulong)uVar89 >> 0x30) - 0x10;
          auVar94._14_2_ = (byte)((ulong)uVar89 >> 0x38) - 0x10;
          uVar28 = CONCAT12((char)((ulong)uVar88 >> 8),(short)uVar88) & 0xff00ff;
          sVar78 = (short)uVar28 + -0x80;
          sVar79 = (byte)(uVar28 >> 0x10) - 0x80;
          sVar80 = (byte)((ulong)uVar88 >> 0x10) - 0x80;
          sVar81 = (byte)((ulong)uVar88 >> 0x18) - 0x80;
          sVar101 = (byte)((ulong)uVar88 >> 0x20) - 0x80;
          sVar102 = (byte)((ulong)uVar88 >> 0x28) - 0x80;
          sVar103 = (byte)((ulong)uVar88 >> 0x30) - 0x80;
          sVar104 = (byte)((ulong)uVar88 >> 0x38) - 0x80;
          uVar28 = CONCAT12((char)((ulong)uVar86 >> 8),(short)uVar86) & 0xff00ff;
          sVar82 = (short)uVar28 + -0x80;
          sVar83 = (byte)(uVar28 >> 0x10) - 0x80;
          sVar84 = (byte)((ulong)uVar86 >> 0x10) - 0x80;
          sVar85 = (byte)((ulong)uVar86 >> 0x18) - 0x80;
          sVar111 = (byte)((ulong)uVar86 >> 0x20) - 0x80;
          sVar112 = (byte)((ulong)uVar86 >> 0x28) - 0x80;
          sVar113 = (byte)((ulong)uVar86 >> 0x30) - 0x80;
          sVar114 = (byte)((ulong)uVar86 >> 0x38) - 0x80;
          auVar95._8_8_ = auVar94._8_8_;
          iVar37 = sVar83 * 0x6625 + sVar97 * 0x4a85;
          iVar1 = sVar84 * 0x6625 + sVar98 * 0x4a85;
          iVar6 = sVar85 * 0x6625 + sVar99 * 0x4a85;
          uVar11 = CONCAT13((char)((ushort)sVar79 >> 8),CONCAT12((char)sVar79,sVar78));
          uVar12 = CONCAT15((char)((ushort)sVar80 >> 8),CONCAT14((char)sVar80,uVar11));
          iVar3 = sVar112 * 0x6625 + auVar94._10_2_ * 0x4a85;
          iVar9 = sVar113 * 0x6625 + auVar94._12_2_ * 0x4a85;
          iVar10 = sVar114 * 0x6625 + auVar94._14_2_ * 0x4a85;
          auVar119._0_8_ =
               CONCAT44(sVar97 * 0x4a85 - (sVar79 * 0x1913 + sVar83 * 0x3408),
                        sVar87 * 0x4a85 - (sVar78 * 0x1913 + sVar82 * 0x3408));
          auVar119._8_4_ = sVar98 * 0x4a85 - (sVar80 * 0x1913 + sVar84 * 0x3408);
          auVar119._12_4_ = sVar99 * 0x4a85 - (sVar81 * 0x1913 + sVar85 * 0x3408);
          iVar20 = (short)((uint)uVar11 >> 0x10) * 0x811a + sVar97 * 0x4a85;
          iVar21 = (short)((uint6)uVar12 >> 0x20) * 0x811a + sVar98 * 0x4a85;
          iVar22 = (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar12)) >>
                          0x30) * 0x811a + sVar99 * 0x4a85;
          iVar25 = auVar94._10_2_ * 0x4a85 - (sVar102 * 0x1913 + sVar112 * 0x3408);
          iVar26 = auVar94._12_2_ * 0x4a85 - (sVar103 * 0x1913 + sVar113 * 0x3408);
          iVar27 = auVar94._14_2_ * 0x4a85 - (sVar104 * 0x1913 + sVar114 * 0x3408);
          iVar15 = CONCAT13(sVar102 >> 0xf,(int3)sVar102) * 0x811a + auVar94._10_2_ * 0x4a85;
          iVar16 = sVar103 * 0x811a + auVar94._12_2_ * 0x4a85;
          iVar17 = sVar104 * 0x811a + auVar94._14_2_ * 0x4a85;
          auVar7[4] = (char)iVar37;
          auVar7._0_4_ = sVar82 * 0x6625 + sVar87 * 0x4a85;
          auVar7[5] = (char)((uint)iVar37 >> 8);
          auVar7[6] = (char)((uint)iVar37 >> 0x10);
          auVar7[7] = (char)((uint)iVar37 >> 0x18);
          auVar7._8_2_ = (short)iVar1;
          auVar7._10_2_ = (short)((uint)iVar1 >> 0x10);
          auVar7._12_2_ = (short)iVar6;
          auVar7._14_2_ = (short)((uint)iVar6 >> 0x10);
          auVar95._0_8_ = NEON_rshrn(auVar94._0_8_,auVar7,0xe,4);
          auVar8[4] = (char)iVar3;
          auVar8._0_4_ = sVar111 * 0x6625 + auVar94._8_2_ * 0x4a85;
          auVar8[5] = (char)((uint)iVar3 >> 8);
          auVar8[6] = (char)((uint)iVar3 >> 0x10);
          auVar8[7] = (char)((uint)iVar3 >> 0x18);
          auVar8._8_2_ = (short)iVar9;
          auVar8._10_2_ = (short)((uint)iVar9 >> 0x10);
          auVar8._12_2_ = (short)iVar10;
          auVar8._14_2_ = (short)((uint)iVar10 >> 0x10);
          auVar92 = NEON_rshrn2(auVar95,auVar8,0xe,4);
          auVar120._8_8_ = auVar119._8_8_;
          auVar120._0_8_ = NEON_rshrn(auVar119._0_8_,auVar119,0xe,4);
          in_d21 = NEON_sqxtun(in_d21,auVar92,2);
          auVar24[4] = (char)iVar25;
          auVar24._0_4_ = auVar94._8_2_ * 0x4a85 - (sVar101 * 0x1913 + sVar111 * 0x3408);
          auVar24[5] = (char)((uint)iVar25 >> 8);
          auVar24[6] = (char)((uint)iVar25 >> 0x10);
          auVar24[7] = (char)((uint)iVar25 >> 0x18);
          auVar24._8_2_ = (short)iVar26;
          auVar24._10_2_ = (short)((uint)iVar26 >> 0x10);
          auVar24._12_2_ = (short)iVar27;
          auVar24._14_2_ = (short)((uint)iVar27 >> 0x10);
          auVar118 = NEON_rshrn2(auVar120,auVar24,0xe,4);
          in_d20 = NEON_sqxtun(in_d20,auVar118,2);
          auVar96._8_8_ = auVar92._8_8_;
          auVar19[4] = (char)iVar20;
          auVar19._0_4_ = sVar78 * 0x811a + sVar87 * 0x4a85;
          auVar19[5] = (char)((uint)iVar20 >> 8);
          auVar19[6] = (char)((uint)iVar20 >> 0x10);
          auVar19[7] = (char)((uint)iVar20 >> 0x18);
          auVar19._8_2_ = (short)iVar21;
          auVar19._10_2_ = (short)((uint)iVar21 >> 0x10);
          auVar19._12_2_ = (short)iVar22;
          auVar19._14_2_ = (short)((uint)iVar22 >> 0x10);
          auVar96._0_8_ = NEON_rshrn(auVar92._0_8_,auVar19,0xe,4);
          auVar14[4] = (char)iVar15;
          auVar14._0_4_ = CONCAT13(sVar101 >> 0xf,(int3)sVar101) * 0x811a + auVar94._8_2_ * 0x4a85;
          auVar14[5] = (char)((uint)iVar15 >> 8);
          auVar14[6] = (char)((uint)iVar15 >> 0x10);
          auVar14[7] = (char)((uint)iVar15 >> 0x18);
          auVar14._8_2_ = (short)iVar16;
          auVar14._10_2_ = (short)((uint)iVar16 >> 0x10);
          auVar14._12_2_ = (short)iVar17;
          auVar14._14_2_ = (short)((uint)iVar17 >> 0x10);
          auVar92 = NEON_rshrn2(auVar96,auVar14,0xe,4);
          in_d19 = NEON_sqxtun(in_d19,auVar92,2);
          *puVar35 = (char)in_d19;
          puVar35[1] = (char)in_d20;
          puVar35[2] = (char)in_d21;
          puVar35[3] = 0xff;
          puVar35[4] = (char)((ulong)in_d19 >> 8);
          puVar35[5] = (char)((ulong)in_d20 >> 8);
          puVar35[6] = (char)((ulong)in_d21 >> 8);
          puVar35[7] = 0xff;
          puVar35[8] = (char)((ulong)in_d19 >> 0x10);
          puVar35[9] = (char)((ulong)in_d20 >> 0x10);
          puVar35[10] = (char)((ulong)in_d21 >> 0x10);
          puVar35[0xb] = 0xff;
          puVar35[0xc] = (char)((ulong)in_d19 >> 0x18);
          puVar35[0xd] = (char)((ulong)in_d20 >> 0x18);
          puVar35[0xe] = (char)((ulong)in_d21 >> 0x18);
          puVar35[0xf] = 0xff;
          puVar35[0x10] = (char)((ulong)in_d19 >> 0x20);
          puVar35[0x11] = (char)((ulong)in_d20 >> 0x20);
          puVar35[0x12] = (char)((ulong)in_d21 >> 0x20);
          puVar35[0x13] = 0xff;
          puVar35[0x14] = (char)((ulong)in_d19 >> 0x28);
          puVar35[0x15] = (char)((ulong)in_d20 >> 0x28);
          puVar35[0x16] = (char)((ulong)in_d21 >> 0x28);
          puVar35[0x17] = 0xff;
          puVar35[0x18] = (char)((ulong)in_d19 >> 0x30);
          puVar35[0x19] = (char)((ulong)in_d20 >> 0x30);
          puVar35[0x1a] = (char)((ulong)in_d21 >> 0x30);
          puVar35[0x1b] = 0xff;
          puVar35[0x1c] = (char)((ulong)in_d19 >> 0x38);
          puVar35[0x1d] = (char)((ulong)in_d20 >> 0x38);
          puVar35[0x1e] = (char)((ulong)in_d21 >> 0x38);
          puVar35[0x1f] = 0xff;
          puVar35 = puVar35 + 0x20;
          uVar43 = 8;
          bVar33 = false;
        } while (bVar44);
      }
      param_3 = param_3 + 8;
      param_5 = param_5 + 8;
      param_4 = param_4 + 8;
      param_6 = param_6 + 8;
      uVar42 = uVar42 + 1;
      uVar38 = (ulong)((int)uVar38 + 0x40);
    } while (uVar42 != uVar40);
  }
  iVar37 = (int)lVar48;
  lVar47 = (long)iVar37;
  ___memcpy_chk(abStack_f9 + 1,param_3,lVar47,9);
  ___memcpy_chk(&local_108,param_5,lVar47,9);
  sVar46 = (size_t)(9 - iVar37);
  _memset(abStack_f9 + (long)iVar37 + 1,(uint)abStack_f9[lVar48],sVar46);
  _memset(&local_108 + iVar37,(uint)*(byte *)((long)&local_10c + lVar48 + 3),sVar46);
  uVar31 = (undefined2)CONCAT71(uStack_f7,abStack_f9[1]);
  bVar65 = (byte)uStack_f7;
  uVar28 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  bVar66 = (byte)((uint7)uStack_f7 >> 8);
  bVar67 = (byte)((uint7)uStack_f7 >> 0x10);
  bVar68 = (byte)((uint7)uStack_f7 >> 0x18);
  bVar69 = (byte)((uint7)uStack_f7 >> 0x20);
  bVar70 = (byte)((uint7)uStack_f7 >> 0x28);
  bVar71 = (byte)((uint7)uStack_f7 >> 0x30);
  bVar72 = (byte)((uint7)uStack_107 >> 8);
  uVar29 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  bVar73 = (byte)((uint7)uStack_107 >> 0x10);
  bVar74 = (byte)((uint7)uStack_107 >> 0x18);
  bVar75 = (byte)((uint7)uStack_107 >> 0x20);
  bVar76 = (byte)((uint7)uStack_107 >> 0x28);
  bVar77 = (byte)((uint7)uStack_107 >> 0x30);
  uVar30 = CONCAT12((char)uStack_107,(short)CONCAT71(uStack_107,local_108)) & 0xff00ff;
  sVar78 = (short)uVar30 + (ushort)bVar65;
  sVar79 = (ushort)(byte)(uVar30 >> 0x10) + (ushort)bVar66;
  uVar30 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  uVar32 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  sVar80 = sVar78 + (short)uVar30 + (short)uVar32;
  sVar81 = sVar79 + (ushort)(byte)(uVar30 >> 0x10) + (ushort)(byte)(uVar32 >> 0x10);
  sVar82 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar83 = (ushort)bVar73 + (ushort)bVar68 + (ushort)bVar67 + (ushort)bVar74;
  sVar84 = (ushort)bVar74 + (ushort)bVar69 + (ushort)bVar68 + (ushort)bVar75;
  sVar85 = (ushort)bVar75 + (ushort)bVar70 + (ushort)bVar69 + (ushort)bVar76;
  sVar87 = (ushort)bVar76 + (ushort)bVar71 + (ushort)bVar70 + (ushort)bVar77;
  sVar97 = (ushort)bVar77 + (ushort)bStack_f0 + (ushort)bVar71 + (ushort)bStack_100;
  uVar49 = (undefined1)((ushort)(sVar80 + (short)uVar28 * 2 + (short)uVar29 * 2) >> 3);
  uVar51 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar28 >> 0x10) * 2 +
                    (ushort)(byte)(uVar29 >> 0x10) * 2) >> 3);
  uVar53 = (undefined1)((ushort)(sVar82 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 + (ushort)bVar67 * 2 + (ushort)bVar74 * 2) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 + (ushort)bVar68 * 2 + (ushort)bVar75 * 2) >> 3);
  uVar59 = (undefined1)((ushort)(sVar85 + (ushort)bVar69 * 2 + (ushort)bVar76 * 2) >> 3);
  uVar61 = (undefined1)((ushort)(sVar87 + (ushort)bVar70 * 2 + (ushort)bVar77 * 2) >> 3);
  uVar63 = (undefined1)((ushort)(sVar97 + (ushort)bVar71 * 2 + (ushort)bStack_100 * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar78 * 2 + sVar80) >> 3);
  uVar52 = (undefined1)((ushort)(sVar79 * 2 + sVar81) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar82) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bVar68) * 2 + sVar83) >> 3);
  uVar58 = (undefined1)((ushort)(((ushort)bVar74 + (ushort)bVar69) * 2 + sVar84) >> 3);
  uVar60 = (undefined1)((ushort)(((ushort)bVar75 + (ushort)bVar70) * 2 + sVar85) >> 3);
  uVar62 = (undefined1)((ushort)(((ushort)bVar76 + (ushort)bVar71) * 2 + sVar87) >> 3);
  uVar64 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bStack_f0) * 2 + sVar97) >> 3);
  uVar89 = NEON_urhadd(CONCAT71(uStack_f7,abStack_f9[1]),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  uVar115 = NEON_urhadd(CONCAT17(bStack_f0,uStack_f7),
                        CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                                )),1);
  uVar88 = NEON_urhadd(CONCAT71(uStack_107,local_108),
                       CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                               )),1);
  uVar86 = NEON_urhadd(CONCAT17(bStack_100,uStack_107),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  local_e0[0] = (byte)uVar89;
  local_e0[1] = (byte)uVar115;
  local_e0[2] = (byte)((ulong)uVar89 >> 8);
  local_e0[3] = (byte)((ulong)uVar115 >> 8);
  uStack_dc = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_db = (undefined1)((ulong)uVar115 >> 0x10);
  uStack_da = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_d9 = (undefined1)((ulong)uVar115 >> 0x18);
  uStack_d8 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_d7 = (undefined1)((ulong)uVar115 >> 0x20);
  uStack_d6 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_d5 = (undefined1)((ulong)uVar115 >> 0x28);
  uStack_d4 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_d3 = (undefined1)((ulong)uVar115 >> 0x30);
  uStack_d2 = (undefined1)((ulong)uVar89 >> 0x38);
  uStack_d1 = (undefined1)((ulong)uVar115 >> 0x38);
  local_c0[0] = (byte)uVar88;
  local_c0[1] = (byte)uVar86;
  local_c0[2] = (byte)((ulong)uVar88 >> 8);
  local_c0[3] = (byte)((ulong)uVar86 >> 8);
  uStack_bc = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_bb = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_ba = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_b9 = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_b8 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_b7 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_b6 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_b5 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_b4 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_b3 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_b2 = (undefined1)((ulong)uVar88 >> 0x38);
  uStack_b1 = (undefined1)((ulong)uVar86 >> 0x38);
  ___memcpy_chk(abStack_f9 + 1,param_4,lVar47,9);
  ___memcpy_chk(&local_108,param_6,lVar47,9);
  _memset(abStack_f9 + (long)iVar37 + 1,(uint)abStack_f9[lVar48],sVar46);
  _memset(&local_108 + iVar37,(uint)*(byte *)((long)&local_10c + lVar48 + 3),sVar46);
  uVar31 = (undefined2)CONCAT71(uStack_f7,abStack_f9[1]);
  bVar65 = (byte)uStack_f7;
  uVar28 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  bVar66 = (byte)((uint7)uStack_f7 >> 8);
  bVar67 = (byte)((uint7)uStack_f7 >> 0x10);
  bVar68 = (byte)((uint7)uStack_f7 >> 0x18);
  bVar69 = (byte)((uint7)uStack_f7 >> 0x20);
  bVar70 = (byte)((uint7)uStack_f7 >> 0x28);
  bVar71 = (byte)((uint7)uStack_f7 >> 0x30);
  bVar72 = (byte)((uint7)uStack_107 >> 8);
  uVar29 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  bVar73 = (byte)((uint7)uStack_107 >> 0x10);
  bVar74 = (byte)((uint7)uStack_107 >> 0x18);
  bVar75 = (byte)((uint7)uStack_107 >> 0x20);
  bVar76 = (byte)((uint7)uStack_107 >> 0x28);
  bVar77 = (byte)((uint7)uStack_107 >> 0x30);
  uVar30 = CONCAT12((char)uStack_107,(short)CONCAT71(uStack_107,local_108)) & 0xff00ff;
  sVar78 = (short)uVar30 + (ushort)bVar65;
  sVar79 = (ushort)(byte)(uVar30 >> 0x10) + (ushort)bVar66;
  uVar30 = CONCAT12(bVar65,uVar31) & 0xff00ff;
  uVar32 = CONCAT12(bVar72,(short)uStack_107) & 0xff00ff;
  sVar80 = sVar78 + (short)uVar30 + (short)uVar32;
  sVar81 = sVar79 + (ushort)(byte)(uVar30 >> 0x10) + (ushort)(byte)(uVar32 >> 0x10);
  sVar82 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar83 = (ushort)bVar73 + (ushort)bVar68 + (ushort)bVar67 + (ushort)bVar74;
  sVar84 = (ushort)bVar74 + (ushort)bVar69 + (ushort)bVar68 + (ushort)bVar75;
  sVar85 = (ushort)bVar75 + (ushort)bVar70 + (ushort)bVar69 + (ushort)bVar76;
  sVar87 = (ushort)bVar76 + (ushort)bVar71 + (ushort)bVar70 + (ushort)bVar77;
  sVar97 = (ushort)bVar77 + (ushort)bStack_f0 + (ushort)bVar71 + (ushort)bStack_100;
  uVar49 = (undefined1)((ushort)(sVar80 + (short)uVar28 * 2 + (short)uVar29 * 2) >> 3);
  uVar51 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar28 >> 0x10) * 2 +
                    (ushort)(byte)(uVar29 >> 0x10) * 2) >> 3);
  uVar53 = (undefined1)((ushort)(sVar82 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar55 = (undefined1)((ushort)(sVar83 + (ushort)bVar67 * 2 + (ushort)bVar74 * 2) >> 3);
  uVar57 = (undefined1)((ushort)(sVar84 + (ushort)bVar68 * 2 + (ushort)bVar75 * 2) >> 3);
  uVar59 = (undefined1)((ushort)(sVar85 + (ushort)bVar69 * 2 + (ushort)bVar76 * 2) >> 3);
  uVar61 = (undefined1)((ushort)(sVar87 + (ushort)bVar70 * 2 + (ushort)bVar77 * 2) >> 3);
  uVar63 = (undefined1)((ushort)(sVar97 + (ushort)bVar71 * 2 + (ushort)bStack_100 * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar78 * 2 + sVar80) >> 3);
  uVar52 = (undefined1)((ushort)(sVar79 * 2 + sVar81) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar82) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bVar68) * 2 + sVar83) >> 3);
  uVar58 = (undefined1)((ushort)(((ushort)bVar74 + (ushort)bVar69) * 2 + sVar84) >> 3);
  uVar60 = (undefined1)((ushort)(((ushort)bVar75 + (ushort)bVar70) * 2 + sVar85) >> 3);
  uVar62 = (undefined1)((ushort)(((ushort)bVar76 + (ushort)bVar71) * 2 + sVar87) >> 3);
  uVar64 = (undefined1)((ushort)(((ushort)bVar77 + (ushort)bStack_f0) * 2 + sVar97) >> 3);
  uVar89 = NEON_urhadd(CONCAT71(uStack_f7,abStack_f9[1]),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  uVar115 = NEON_urhadd(CONCAT17(bStack_f0,uStack_f7),
                        CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                                )),1);
  uVar88 = NEON_urhadd(CONCAT71(uStack_107,local_108),
                       CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(
                                                  uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)))))
                                               )),1);
  uVar86 = NEON_urhadd(CONCAT17(bStack_100,uStack_107),
                       CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,CONCAT13(
                                                  uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)))))
                                               )),1);
  local_d0[0] = (byte)uVar89;
  local_d0[1] = (byte)uVar115;
  local_d0[2] = (byte)((ulong)uVar89 >> 8);
  local_d0[3] = (byte)((ulong)uVar115 >> 8);
  uStack_cc = (undefined1)((ulong)uVar89 >> 0x10);
  uStack_cb = (undefined1)((ulong)uVar115 >> 0x10);
  uStack_ca = (undefined1)((ulong)uVar89 >> 0x18);
  uStack_c9 = (undefined1)((ulong)uVar115 >> 0x18);
  uStack_c8 = (undefined1)((ulong)uVar89 >> 0x20);
  uStack_c7 = (undefined1)((ulong)uVar115 >> 0x20);
  uStack_c6 = (undefined1)((ulong)uVar89 >> 0x28);
  uStack_c5 = (undefined1)((ulong)uVar115 >> 0x28);
  uStack_c4 = (undefined1)((ulong)uVar89 >> 0x30);
  uStack_c3 = (undefined1)((ulong)uVar115 >> 0x30);
  uStack_c2 = (undefined1)((ulong)uVar89 >> 0x38);
  uStack_c1 = (undefined1)((ulong)uVar115 >> 0x38);
  local_b0[0] = (byte)uVar88;
  local_b0[1] = (byte)uVar86;
  local_b0[2] = (byte)((ulong)uVar88 >> 8);
  local_b0[3] = (byte)((ulong)uVar86 >> 8);
  uStack_ac = (undefined1)((ulong)uVar88 >> 0x10);
  uStack_ab = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_aa = (undefined1)((ulong)uVar88 >> 0x18);
  uStack_a9 = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_a8 = (undefined1)((ulong)uVar88 >> 0x20);
  uStack_a7 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_a6 = (undefined1)((ulong)uVar88 >> 0x28);
  uStack_a5 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_a4 = (undefined1)((ulong)uVar88 >> 0x30);
  uStack_a3 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_a2 = (undefined1)((ulong)uVar88 >> 0x38);
  uStack_a1 = (undefined1)((ulong)uVar86 >> 0x38);
  if ((int)uVar45 < local_10c) {
    uVar38 = (ulong)(~(uVar41 << 4) + local_10c);
    uVar40 = uVar41 << 6 | 4;
    pbVar39 = local_d0;
    uVar42 = uVar38;
    uVar36 = uVar45;
    do {
      bVar66 = pbVar39[-0x10];
      bVar65 = *pbVar39;
      puVar35 = param_7 + (int)uVar40;
      iVar37 = (uint)param_1[(int)uVar36] * 0x4a85;
      uVar5 = iVar37 + (uint)bVar66 * 0x811a;
      uVar4 = uVar5 - 0x451550;
      uVar49 = 0;
      if (0x45154f < uVar5) {
        uVar49 = 0xff;
      }
      uVar50 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar50 = uVar49;
      }
      *puVar35 = uVar50;
      iVar1 = iVar37 + (uint)bVar66 * -0x1913 + (uint)bVar65 * -0x3408;
      uVar4 = iVar1 + 0x220530;
      uVar49 = 0;
      if (-0x220531 < iVar1) {
        uVar49 = 0xff;
      }
      uVar50 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar50 = uVar49;
      }
      puVar35[1] = uVar50;
      uVar5 = iVar37 + (uint)bVar65 * 0x6625;
      uVar4 = uVar5 - 0x379ad0;
      uVar49 = 0;
      if (0x379acf < uVar5) {
        uVar49 = 0xff;
      }
      uVar50 = (char)(uVar4 >> 0xe);
      if (0x3fffff < uVar4) {
        uVar50 = uVar49;
      }
      puVar35[2] = uVar50;
      puVar35[3] = 0xff;
      uVar40 = uVar40 + 4;
      uVar36 = uVar36 + 1;
      uVar42 = uVar42 - 1;
      pbVar39 = pbVar39 + 1;
    } while (uVar42 != 0);
    if (param_2 != (byte *)0x0) {
      uVar41 = uVar41 << 6 | 4;
      pbVar39 = local_b0;
      do {
        bVar66 = pbVar39[-0x10];
        bVar65 = *pbVar39;
        puVar35 = param_8 + (int)uVar41;
        iVar37 = (uint)param_2[(int)uVar45] * 0x4a85;
        uVar36 = iVar37 + (uint)bVar66 * 0x811a;
        uVar40 = uVar36 - 0x451550;
        uVar49 = 0;
        if (0x45154f < uVar36) {
          uVar49 = 0xff;
        }
        uVar50 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar50 = uVar49;
        }
        *puVar35 = uVar50;
        iVar1 = iVar37 + (uint)bVar66 * -0x1913 + (uint)bVar65 * -0x3408;
        uVar40 = iVar1 + 0x220530;
        uVar49 = 0;
        if (-0x220531 < iVar1) {
          uVar49 = 0xff;
        }
        uVar50 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar50 = uVar49;
        }
        puVar35[1] = uVar50;
        uVar36 = iVar37 + (uint)bVar65 * 0x6625;
        uVar40 = uVar36 - 0x379ad0;
        uVar49 = 0;
        if (0x379acf < uVar36) {
          uVar49 = 0xff;
        }
        uVar50 = (char)(uVar40 >> 0xe);
        if (0x3fffff < uVar40) {
          uVar50 = uVar49;
        }
        puVar35[2] = uVar50;
        puVar35[3] = 0xff;
        uVar41 = uVar41 + 4;
        uVar45 = uVar45 + 1;
        uVar38 = uVar38 - 1;
        pbVar39 = pbVar39 + 1;
      } while (uVar38 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010cbe34(void)

{
  return;
}




void FUN_1010cbe38(long param_1,int param_2,long param_3,long param_4,uint param_5,long param_6,
                  int param_7,undefined8 param_8,uint param_9,code *param_10)

{
  uint uVar1;
  uint uVar2;
  
  if (0 < (int)param_9) {
    uVar2 = 0;
    do {
      (*param_10)(param_1,param_3,param_4,param_6,param_8);
      param_1 = param_1 + param_2;
      uVar1 = -(uVar2 & 1) & param_5;
      param_4 = param_4 + (int)uVar1;
      param_3 = param_3 + (int)uVar1;
      param_6 = param_6 + param_7;
      uVar2 = uVar2 + 1;
    } while (param_9 != uVar2);
  }
  return;
}




void FUN_1010cbef0(void)

{
  if (PTR_LOOP_1018735e8 != PTR_FUN_1018735c8) {
    DAT_101dc1ef0 = FUN_1010cbf6c;
    DAT_101dc1ef8 = FUN_1010cc174;
    DAT_101dc1f00 = FUN_1010cc388;
    DAT_101dc1f08 = FUN_1010cc590;
    DAT_101dc1f10 = FUN_1010cc7a4;
    DAT_101dc1f18 = FUN_1010cc9b8;
    DAT_101dc1f20 = FUN_1010ccbf0;
    DAT_101dc1f28 = FUN_1010cc174;
    DAT_101dc1f30 = FUN_1010cc590;
    DAT_101dc1f38 = FUN_1010cc7a4;
    DAT_101dc1f40 = FUN_1010cc9b8;
    PTR_LOOP_1018735e8 = PTR_FUN_1018735c8;
  }
  return;
}




void FUN_1010cbf6c(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 uVar12;
  
  puVar1 = param_4;
  if ((param_5 & 0xfffffffe) != 0) {
    puVar1 = param_4 + (int)((param_5 & 0xfffffffe) * 3);
    pbVar10 = param_2;
    pbVar11 = param_3;
    do {
      bVar5 = *pbVar10;
      bVar6 = *pbVar11;
      iVar9 = (uint)*param_1 * 0x4a85;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar12 = 0xff;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      *param_4 = uVar4;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = uVar12;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[1] = uVar4;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = uVar12;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[2] = uVar4;
      param_2 = pbVar10 + 1;
      bVar5 = *pbVar10;
      param_3 = pbVar11 + 1;
      bVar6 = *pbVar11;
      iVar9 = (uint)param_1[1] * 0x4a85;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = uVar12;
      }
      uVar12 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar12 = uVar3;
      }
      param_4[3] = uVar12;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = 0xff;
      }
      uVar12 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar12 = uVar3;
      }
      param_4[4] = uVar12;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = 0xff;
      }
      uVar12 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar12 = uVar3;
      }
      param_4[5] = uVar12;
      param_1 = param_1 + 2;
      param_4 = param_4 + 6;
      pbVar10 = param_2;
      pbVar11 = param_3;
    } while (param_4 != puVar1);
  }
  if ((param_5 & 1) != 0) {
    bVar5 = *param_2;
    bVar6 = *param_3;
    iVar9 = (uint)*param_1 * 0x4a85;
    uVar7 = iVar9 + (uint)bVar6 * 0x6625;
    uVar2 = uVar7 - 0x379ad0;
    uVar3 = 0;
    if (0x379acf < uVar7) {
      uVar3 = 0xff;
    }
    uVar12 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar12 = uVar3;
    }
    *puVar1 = uVar12;
    iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
    uVar2 = iVar8 + 0x220530;
    uVar3 = 0;
    if (-0x220531 < iVar8) {
      uVar3 = 0xff;
    }
    uVar12 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar12 = uVar3;
    }
    puVar1[1] = uVar12;
    uVar7 = iVar9 + (uint)bVar5 * 0x811a;
    uVar2 = uVar7 - 0x451550;
    uVar3 = 0;
    if (0x45154f < uVar7) {
      uVar3 = 0xff;
    }
    uVar12 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar12 = uVar3;
    }
    puVar1[2] = uVar12;
  }
  return;
}




void FUN_1010cc174(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  puVar1 = param_4;
  if ((param_5 & 0x3ffffffe) != 0) {
    puVar1 = param_4 + (int)((param_5 & 0x3ffffffe) << 2);
    pbVar10 = param_2;
    pbVar11 = param_3;
    do {
      bVar5 = *pbVar10;
      bVar6 = *pbVar11;
      iVar9 = (uint)*param_1 * 0x4a85;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      *param_4 = uVar4;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[1] = uVar4;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[2] = uVar4;
      param_4[3] = 0xff;
      param_2 = pbVar10 + 1;
      bVar5 = *pbVar10;
      param_3 = pbVar11 + 1;
      bVar6 = *pbVar11;
      iVar9 = (uint)param_1[1] * 0x4a85;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[4] = uVar4;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[5] = uVar4;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[6] = uVar4;
      param_4[7] = 0xff;
      param_1 = param_1 + 2;
      param_4 = param_4 + 8;
      pbVar10 = param_2;
      pbVar11 = param_3;
    } while (param_4 != puVar1);
  }
  if ((param_5 & 1) != 0) {
    bVar5 = *param_2;
    bVar6 = *param_3;
    iVar9 = (uint)*param_1 * 0x4a85;
    uVar7 = iVar9 + (uint)bVar6 * 0x6625;
    uVar2 = uVar7 - 0x379ad0;
    uVar3 = 0;
    if (0x379acf < uVar7) {
      uVar3 = 0xff;
    }
    uVar4 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar4 = uVar3;
    }
    *puVar1 = uVar4;
    iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
    uVar2 = iVar8 + 0x220530;
    uVar3 = 0;
    if (-0x220531 < iVar8) {
      uVar3 = 0xff;
    }
    uVar4 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar4 = uVar3;
    }
    puVar1[1] = uVar4;
    uVar7 = iVar9 + (uint)bVar5 * 0x811a;
    uVar2 = uVar7 - 0x451550;
    uVar3 = 0;
    if (0x45154f < uVar7) {
      uVar3 = 0xff;
    }
    uVar4 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar4 = uVar3;
    }
    puVar1[2] = uVar4;
    puVar1[3] = 0xff;
  }
  return;
}




void FUN_1010cc388(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 uVar12;
  
  puVar1 = param_4;
  if ((param_5 & 0xfffffffe) != 0) {
    puVar1 = param_4 + (int)((param_5 & 0xfffffffe) * 3);
    pbVar10 = param_2;
    pbVar11 = param_3;
    do {
      bVar5 = *pbVar10;
      bVar6 = *pbVar11;
      iVar9 = (uint)*param_1 * 0x4a85;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar12 = 0xff;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      *param_4 = uVar4;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = uVar12;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[1] = uVar4;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = uVar12;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[2] = uVar4;
      param_2 = pbVar10 + 1;
      bVar5 = *pbVar10;
      param_3 = pbVar11 + 1;
      bVar6 = *pbVar11;
      iVar9 = (uint)param_1[1] * 0x4a85;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = uVar12;
      }
      uVar12 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar12 = uVar3;
      }
      param_4[3] = uVar12;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = 0xff;
      }
      uVar12 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar12 = uVar3;
      }
      param_4[4] = uVar12;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = 0xff;
      }
      uVar12 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar12 = uVar3;
      }
      param_4[5] = uVar12;
      param_1 = param_1 + 2;
      param_4 = param_4 + 6;
      pbVar10 = param_2;
      pbVar11 = param_3;
    } while (param_4 != puVar1);
  }
  if ((param_5 & 1) != 0) {
    bVar5 = *param_2;
    bVar6 = *param_3;
    iVar9 = (uint)*param_1 * 0x4a85;
    uVar7 = iVar9 + (uint)bVar5 * 0x811a;
    uVar2 = uVar7 - 0x451550;
    uVar3 = 0;
    if (0x45154f < uVar7) {
      uVar3 = 0xff;
    }
    uVar12 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar12 = uVar3;
    }
    *puVar1 = uVar12;
    iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
    uVar2 = iVar8 + 0x220530;
    uVar3 = 0;
    if (-0x220531 < iVar8) {
      uVar3 = 0xff;
    }
    uVar12 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar12 = uVar3;
    }
    puVar1[1] = uVar12;
    uVar7 = iVar9 + (uint)bVar6 * 0x6625;
    uVar2 = uVar7 - 0x379ad0;
    uVar3 = 0;
    if (0x379acf < uVar7) {
      uVar3 = 0xff;
    }
    uVar12 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar12 = uVar3;
    }
    puVar1[2] = uVar12;
  }
  return;
}




void FUN_1010cc590(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  puVar1 = param_4;
  if ((param_5 & 0x3ffffffe) != 0) {
    puVar1 = param_4 + (int)((param_5 & 0x3ffffffe) << 2);
    pbVar10 = param_2;
    pbVar11 = param_3;
    do {
      bVar5 = *pbVar10;
      bVar6 = *pbVar11;
      iVar9 = (uint)*param_1 * 0x4a85;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      *param_4 = uVar4;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[1] = uVar4;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[2] = uVar4;
      param_4[3] = 0xff;
      param_2 = pbVar10 + 1;
      bVar5 = *pbVar10;
      param_3 = pbVar11 + 1;
      bVar6 = *pbVar11;
      iVar9 = (uint)param_1[1] * 0x4a85;
      uVar7 = iVar9 + (uint)bVar5 * 0x811a;
      uVar2 = uVar7 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[4] = uVar4;
      iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar8 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar8) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[5] = uVar4;
      uVar7 = iVar9 + (uint)bVar6 * 0x6625;
      uVar2 = uVar7 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar7) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[6] = uVar4;
      param_4[7] = 0xff;
      param_1 = param_1 + 2;
      param_4 = param_4 + 8;
      pbVar10 = param_2;
      pbVar11 = param_3;
    } while (param_4 != puVar1);
  }
  if ((param_5 & 1) != 0) {
    bVar5 = *param_2;
    bVar6 = *param_3;
    iVar9 = (uint)*param_1 * 0x4a85;
    uVar7 = iVar9 + (uint)bVar5 * 0x811a;
    uVar2 = uVar7 - 0x451550;
    uVar3 = 0;
    if (0x45154f < uVar7) {
      uVar3 = 0xff;
    }
    uVar4 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar4 = uVar3;
    }
    *puVar1 = uVar4;
    iVar8 = iVar9 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
    uVar2 = iVar8 + 0x220530;
    uVar3 = 0;
    if (-0x220531 < iVar8) {
      uVar3 = 0xff;
    }
    uVar4 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar4 = uVar3;
    }
    puVar1[1] = uVar4;
    uVar7 = iVar9 + (uint)bVar6 * 0x6625;
    uVar2 = uVar7 - 0x379ad0;
    uVar3 = 0;
    if (0x379acf < uVar7) {
      uVar3 = 0xff;
    }
    uVar4 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar4 = uVar3;
    }
    puVar1[2] = uVar4;
    puVar1[3] = 0xff;
  }
  return;
}




void FUN_1010cc7a4(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 uVar13;
  
  puVar1 = param_4;
  if ((param_5 & 0x3ffffffe) != 0) {
    puVar1 = param_4 + (int)((param_5 & 0x3ffffffe) << 2);
    pbVar11 = param_2;
    pbVar12 = param_3;
    do {
      bVar5 = *param_1;
      bVar6 = *pbVar11;
      bVar7 = *pbVar12;
      *param_4 = 0xff;
      iVar10 = (uint)bVar5 * 0x4a85;
      uVar8 = iVar10 + (uint)bVar7 * 0x6625;
      uVar2 = uVar8 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar8) {
        uVar3 = 0xff;
      }
      uVar13 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar13 = uVar3;
      }
      param_4[1] = uVar13;
      iVar9 = iVar10 + (uint)bVar6 * -0x1913 + (uint)bVar7 * -0x3408;
      uVar2 = iVar9 + 0x220530;
      uVar13 = 0xff;
      uVar3 = 0;
      if (-0x220531 < iVar9) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[2] = uVar4;
      uVar8 = iVar10 + (uint)bVar6 * 0x811a;
      uVar2 = uVar8 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar8) {
        uVar3 = uVar13;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[3] = uVar4;
      bVar7 = param_1[1];
      param_2 = pbVar11 + 1;
      bVar5 = *pbVar11;
      param_3 = pbVar12 + 1;
      bVar6 = *pbVar12;
      param_4[4] = 0xff;
      iVar10 = (uint)bVar7 * 0x4a85;
      uVar8 = iVar10 + (uint)bVar6 * 0x6625;
      uVar2 = uVar8 - 0x379ad0;
      uVar3 = 0;
      if (0x379acf < uVar8) {
        uVar3 = uVar13;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[5] = uVar4;
      iVar9 = iVar10 + (uint)bVar5 * -0x1913 + (uint)bVar6 * -0x3408;
      uVar2 = iVar9 + 0x220530;
      uVar3 = 0;
      if (-0x220531 < iVar9) {
        uVar3 = uVar13;
      }
      uVar4 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar4 = uVar3;
      }
      param_4[6] = uVar4;
      uVar8 = iVar10 + (uint)bVar5 * 0x811a;
      uVar2 = uVar8 - 0x451550;
      uVar3 = 0;
      if (0x45154f < uVar8) {
        uVar3 = uVar13;
      }
      uVar13 = (char)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        uVar13 = uVar3;
      }
      param_4[7] = uVar13;
      param_1 = param_1 + 2;
      param_4 = param_4 + 8;
      pbVar11 = param_2;
      pbVar12 = param_3;
    } while (param_4 != puVar1);
  }
  if ((param_5 & 1) != 0) {
    bVar5 = *param_1;
    bVar6 = *param_2;
    bVar7 = *param_3;
    *puVar1 = 0xff;
    iVar10 = (uint)bVar5 * 0x4a85;
    uVar8 = iVar10 + (uint)bVar7 * 0x6625;
    uVar2 = uVar8 - 0x379ad0;
    uVar3 = 0;
    if (0x379acf < uVar8) {
      uVar3 = 0xff;
    }
    uVar13 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar13 = uVar3;
    }
    puVar1[1] = uVar13;
    iVar9 = iVar10 + (uint)bVar6 * -0x1913 + (uint)bVar7 * -0x3408;
    uVar2 = iVar9 + 0x220530;
    uVar3 = 0;
    if (-0x220531 < iVar9) {
      uVar3 = 0xff;
    }
    uVar13 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar13 = uVar3;
    }
    puVar1[2] = uVar13;
    uVar8 = iVar10 + (uint)bVar6 * 0x811a;
    uVar2 = uVar8 - 0x451550;
    uVar3 = 0;
    if (0x45154f < uVar8) {
      uVar3 = 0xff;
    }
    uVar13 = (char)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      uVar13 = uVar3;
    }
    puVar1[3] = uVar13;
  }
  return;
}




void FUN_1010cc9b8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  
  pbVar1 = param_4;
  if ((param_5 & 0x7ffffffe) != 0) {
    pbVar1 = param_4 + (int)((param_5 & 0x7ffffffe) << 1);
    pbVar9 = param_2;
    pbVar10 = param_3;
    do {
      iVar8 = (uint)*param_1 * 0x4a85;
      uVar6 = iVar8 + (uint)*pbVar10 * 0x6625;
      uVar2 = uVar6 - 0x379ad0;
      bVar11 = 0;
      if (0x379acf < uVar6) {
        bVar11 = 0xf0;
      }
      bVar3 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar3 = bVar11;
      }
      iVar7 = iVar8 + (uint)*pbVar9 * -0x1913 + (uint)*pbVar10 * -0x3408;
      uVar2 = iVar7 + 0x220530;
      bVar11 = 0;
      if (-0x220531 < iVar7) {
        bVar11 = 0xf;
      }
      bVar4 = (byte)(uVar2 >> 0x12);
      if (0x3fffff < uVar2) {
        bVar4 = bVar11;
      }
      uVar6 = iVar8 + (uint)*pbVar9 * 0x811a;
      uVar2 = uVar6 - 0x451550;
      bVar11 = 0;
      if (0x45154f < uVar6) {
        bVar11 = 0xf0;
      }
      bVar5 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar5 = bVar11;
      }
      *param_4 = bVar5 | 0xf;
      param_4[1] = bVar3 & 0xf0 | bVar4;
      param_2 = pbVar9 + 1;
      param_3 = pbVar10 + 1;
      iVar8 = (uint)param_1[1] * 0x4a85;
      uVar6 = iVar8 + (uint)*pbVar10 * 0x6625;
      uVar2 = uVar6 - 0x379ad0;
      bVar11 = 0;
      if (0x379acf < uVar6) {
        bVar11 = 0xf0;
      }
      bVar3 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar3 = bVar11;
      }
      iVar7 = iVar8 + (uint)*pbVar9 * -0x1913 + (uint)*pbVar10 * -0x3408;
      uVar2 = iVar7 + 0x220530;
      bVar11 = 0;
      if (-0x220531 < iVar7) {
        bVar11 = 0xf;
      }
      bVar4 = (byte)(uVar2 >> 0x12);
      if (0x3fffff < uVar2) {
        bVar4 = bVar11;
      }
      uVar6 = iVar8 + (uint)*pbVar9 * 0x811a;
      uVar2 = uVar6 - 0x451550;
      bVar11 = 0;
      if (0x45154f < uVar6) {
        bVar11 = 0xf0;
      }
      bVar5 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar5 = bVar11;
      }
      param_4[2] = bVar5 | 0xf;
      param_4[3] = bVar3 & 0xf0 | bVar4;
      param_1 = param_1 + 2;
      param_4 = param_4 + 4;
      pbVar9 = param_2;
      pbVar10 = param_3;
    } while (param_4 != pbVar1);
  }
  if ((param_5 & 1) != 0) {
    iVar8 = (uint)*param_1 * 0x4a85;
    uVar6 = iVar8 + (uint)*param_3 * 0x6625;
    uVar2 = uVar6 - 0x379ad0;
    bVar11 = 0;
    if (0x379acf < uVar6) {
      bVar11 = 0xf0;
    }
    bVar3 = (byte)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      bVar3 = bVar11;
    }
    iVar7 = iVar8 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408;
    uVar2 = iVar7 + 0x220530;
    bVar11 = 0;
    if (-0x220531 < iVar7) {
      bVar11 = 0xf;
    }
    bVar4 = (byte)(uVar2 >> 0x12);
    if (0x3fffff < uVar2) {
      bVar4 = bVar11;
    }
    uVar6 = iVar8 + (uint)*param_2 * 0x811a;
    uVar2 = uVar6 - 0x451550;
    bVar11 = 0;
    if (0x45154f < uVar6) {
      bVar11 = 0xf0;
    }
    bVar5 = (byte)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      bVar5 = bVar11;
    }
    *pbVar1 = bVar5 | 0xf;
    pbVar1[1] = bVar3 & 0xf0 | bVar4;
  }
  return;
}




void FUN_1010ccbf0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  
  pbVar1 = param_4;
  if ((param_5 & 0x7ffffffe) != 0) {
    pbVar1 = param_4 + (int)((param_5 & 0x7ffffffe) << 1);
    pbVar8 = param_2;
    pbVar9 = param_3;
    do {
      iVar7 = (uint)*param_1 * 0x4a85;
      uVar10 = iVar7 + (uint)*pbVar9 * 0x6625;
      uVar2 = uVar10 - 0x379ad0;
      bVar11 = 0;
      if (0x379acf < uVar10) {
        bVar11 = 0xf8;
      }
      bVar3 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar3 = bVar11;
      }
      iVar6 = iVar7 + (uint)*pbVar8 * -0x1913 + (uint)*pbVar9 * -0x3408;
      uVar2 = iVar6 + 0x220530;
      uVar10 = 0;
      if (-0x220531 < iVar6) {
        uVar10 = 0xff;
      }
      uVar5 = (int)uVar2 >> 0xe;
      if (0x3fffff < uVar2) {
        uVar5 = uVar10;
      }
      uVar10 = iVar7 + (uint)*pbVar8 * 0x811a;
      uVar2 = uVar10 - 0x451550;
      bVar11 = 0;
      if (0x45154f < uVar10) {
        bVar11 = 0x1f;
      }
      bVar4 = (byte)(uVar2 >> 0x11);
      if (0x3fffff < uVar2) {
        bVar4 = bVar11;
      }
      *param_4 = (byte)((uVar5 & 0x1c) << 3) | bVar4;
      param_4[1] = bVar3 & 0xf8 | (byte)(uVar5 >> 5);
      param_2 = pbVar8 + 1;
      param_3 = pbVar9 + 1;
      iVar7 = (uint)param_1[1] * 0x4a85;
      uVar10 = iVar7 + (uint)*pbVar9 * 0x6625;
      uVar2 = uVar10 - 0x379ad0;
      bVar11 = 0;
      if (0x379acf < uVar10) {
        bVar11 = 0xf8;
      }
      bVar3 = (byte)(uVar2 >> 0xe);
      if (0x3fffff < uVar2) {
        bVar3 = bVar11;
      }
      iVar6 = iVar7 + (uint)*pbVar8 * -0x1913 + (uint)*pbVar9 * -0x3408;
      uVar2 = iVar6 + 0x220530;
      uVar10 = 0;
      if (-0x220531 < iVar6) {
        uVar10 = 0xff;
      }
      uVar5 = (int)uVar2 >> 0xe;
      if (0x3fffff < uVar2) {
        uVar5 = uVar10;
      }
      uVar10 = iVar7 + (uint)*pbVar8 * 0x811a;
      uVar2 = uVar10 - 0x451550;
      bVar11 = 0;
      if (0x45154f < uVar10) {
        bVar11 = 0x1f;
      }
      bVar4 = (byte)(uVar2 >> 0x11);
      if (0x3fffff < uVar2) {
        bVar4 = bVar11;
      }
      param_4[2] = (byte)((uVar5 & 0x1c) << 3) | bVar4;
      param_4[3] = bVar3 & 0xf8 | (byte)(uVar5 >> 5);
      param_1 = param_1 + 2;
      param_4 = param_4 + 4;
      pbVar8 = param_2;
      pbVar9 = param_3;
    } while (param_4 != pbVar1);
  }
  if ((param_5 & 1) != 0) {
    iVar7 = (uint)*param_1 * 0x4a85;
    uVar10 = iVar7 + (uint)*param_3 * 0x6625;
    uVar2 = uVar10 - 0x379ad0;
    bVar11 = 0;
    if (0x379acf < uVar10) {
      bVar11 = 0xf8;
    }
    bVar3 = (byte)(uVar2 >> 0xe);
    if (0x3fffff < uVar2) {
      bVar3 = bVar11;
    }
    iVar6 = iVar7 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408;
    uVar2 = iVar6 + 0x220530;
    uVar10 = 0;
    if (-0x220531 < iVar6) {
      uVar10 = 0xff;
    }
    uVar5 = (int)uVar2 >> 0xe;
    if (0x3fffff < uVar2) {
      uVar5 = uVar10;
    }
    uVar10 = iVar7 + (uint)*param_2 * 0x811a;
    uVar2 = uVar10 - 0x451550;
    bVar11 = 0;
    if (0x45154f < uVar10) {
      bVar11 = 0x1f;
    }
    bVar4 = (byte)(uVar2 >> 0x11);
    if (0x3fffff < uVar2) {
      bVar4 = bVar11;
    }
    *pbVar1 = (byte)((uVar5 & 0x1c) << 3) | bVar4;
    pbVar1[1] = bVar3 & 0xf8 | (byte)(uVar5 >> 5);
  }
  return;
}




void FUN_1010cce40(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  *(uint **)(param_1 + 4) = param_2;
  *(uint **)(param_1 + 6) = param_3;
  param_1[0] = 0;
  param_1[1] = 0xfe;
  param_1[2] = 0xfffffff8;
  param_1[8] = 0;
  if (param_3 < param_2 + 1) {
    FUN_1010cce8c();
    return;
  }
  uVar1 = *param_2;
  *(long *)(param_1 + 4) = (long)param_2 + 3;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *param_1 = (uVar1 >> 0x10 | uVar1 << 0x10) >> 8;
  param_1[2] = 0x10;
  return;
}




void FUN_1010cce8c(uint *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 4);
  if (pbVar1 < *(byte **)(param_1 + 6)) {
    param_1[2] = param_1[2] + 8;
    *(byte **)(param_1 + 4) = pbVar1 + 1;
    *param_1 = (uint)*pbVar1 | *param_1 << 8;
    return;
  }
  if (param_1[8] != 0) {
    return;
  }
  *param_1 = *param_1 << 8;
  param_1[2] = param_1[2] + 8;
  param_1[8] = 1;
  return;
}




uint FUN_1010ccef0(uint *param_1,int param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = param_1[1];
    uVar6 = param_1[2];
    param_2 = param_2 + 1;
    do {
      if ((int)uVar6 < 0) {
        puVar2 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar2 + 1) {
          FUN_1010cce8c(param_1);
          uVar6 = param_1[2];
        }
        else {
          uVar3 = *puVar2;
          *(long *)(param_1 + 4) = (long)puVar2 + 3;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar3 >> 0x10 | uVar3 << 0x10) >> 8);
          uVar6 = uVar6 + 0x18;
          param_1[2] = uVar6;
        }
      }
      uVar4 = uVar8 >> 1 & 0xffffff;
      uVar3 = *param_1 >> (ulong)(uVar6 & 0x1f);
      uVar5 = uVar4;
      if (uVar4 < uVar3) {
        *param_1 = *param_1 - (uVar4 + 1 << (ulong)(uVar6 & 0x1f));
        uVar5 = uVar8 - (uVar4 + 1);
      }
      uVar8 = uVar5;
      if (uVar8 < 0x7f) {
        uVar1 = (ulong)uVar8;
        uVar8 = *(uint *)(&DAT_1013cbea8 + (ulong)uVar8 * 4);
        uVar6 = uVar6 - (byte)(&DAT_1013cbe28)[uVar1];
        param_1[2] = uVar6;
      }
      param_1[1] = uVar8;
      uVar7 = (uint)(uVar4 < uVar3) << (ulong)(param_2 - 2U & 0x1f) | uVar7;
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  return uVar7;
}




int FUN_1010ccffc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1010ccef0();
  iVar3 = FUN_1010ccef0(param_1,1);
  iVar1 = -iVar2;
  if (iVar3 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}




void FUN_1010cd034(ulong *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (7 < param_3) {
    param_3 = 8;
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    pbVar3 = param_2;
    do {
      uVar1 = (ulong)*pbVar3 << (uVar2 & 0x3f) | uVar1;
      uVar2 = uVar2 + 8;
      pbVar3 = pbVar3 + 1;
    } while (param_3 * 8 - uVar2 != 0);
  }
  param_1[3] = param_3;
  *param_1 = uVar1;
  param_1[1] = (ulong)param_2;
  return;
}




void FUN_1010cd090(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[3];
  if (uVar1 + 8 < param_1[2]) {
    *(int *)(param_1 + 4) = (int)param_1[4] + -0x20;
    *param_1 = *param_1 >> 0x20 | (ulong)*(uint *)(param_1[1] + uVar1) << 0x20;
    param_1[3] = uVar1 + 4;
    return;
  }
  FUN_1010cd0cc();
  return;
}




void FUN_1010cd0cc(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar4 = (int)param_1[4];
  if (iVar4 < 8) {
    uVar5 = param_1[2];
    uVar6 = param_1[3];
  }
  else {
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    iVar3 = iVar4;
    do {
      iVar4 = iVar3;
      if (uVar5 <= uVar6) break;
      uVar2 = *param_1;
      *param_1 = uVar2 >> 8;
      *param_1 = uVar2 >> 8 | (ulong)*(byte *)(param_1[1] + uVar6) << 0x38;
      uVar6 = uVar6 + 1;
      param_1[3] = uVar6;
      iVar4 = iVar3 + -8;
      *(int *)(param_1 + 4) = iVar4;
      bVar1 = 0xf < iVar3;
      iVar3 = iVar4;
    } while (bVar1);
  }
  *(uint *)((long)param_1 + 0x24) = (uint)(uVar6 == uVar5 && 0x40 < iVar4);
  return;
}




uint FUN_1010cd140(ulong *param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)((long)param_1 + 0x24) == 0 && param_2 < 0x19) {
    uVar1 = *(uint *)((long)&PTR___mh_execute_header_1013cc0a8 + (long)param_2 * 4) &
            (uint)(*param_1 >> ((ulong)(uint)param_1[4] & 0x3f));
    *(uint *)(param_1 + 4) = (uint)param_1[4] + param_2;
    FUN_1010cd0cc();
  }
  else {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 5) = 1;
  }
  return uVar1;
}




bool FUN_1010cd1a4(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_1010ce998((long)(1 << (ulong)(param_2 & 0x1f)),4);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(uint *)(param_1 + 1) = 0x20 - param_2;
  }
  return lVar1 != 0;
}




void FUN_1010cd1f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_1010cd21c(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,char *param_6)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  
  param_5 = param_5 + param_4;
  pcVar2 = param_6 + (long)param_4 * (long)param_3;
  if (param_4 == 0) {
    if (1 < param_1) {
      uVar3 = (ulong)(param_1 - 1);
      cVar4 = *param_6;
      do {
        param_6 = param_6 + 1;
        cVar4 = cVar4 + *param_6;
        *param_6 = cVar4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    pcVar2 = pcVar2 + param_3;
    param_4 = 1;
  }
  if (param_4 < param_5) {
    do {
      cVar4 = pcVar2[-(long)param_3] + *pcVar2;
      *pcVar2 = cVar4;
      if (1 < param_1) {
        uVar3 = 0;
        do {
          uVar1 = uVar3 + 1;
          cVar4 = cVar4 + pcVar2[uVar3 + 1];
          pcVar2[uVar3 + 1] = cVar4;
          uVar3 = uVar1;
        } while (param_1 - 1 != uVar1);
      }
      param_4 = param_4 + 1;
      pcVar2 = pcVar2 + param_3;
    } while (param_4 != param_5);
  }
  return;
}




void FUN_1010cd2d0(uint param_1,undefined8 param_2,int param_3,int param_4,int param_5,char *param_6
                  )

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  
  param_5 = param_5 + param_4;
  pcVar1 = param_6 + (long)param_4 * (long)param_3;
  if (param_4 == 0) {
    if (1 < (int)param_1) {
      uVar5 = (ulong)(param_1 - 1);
      cVar4 = *param_6;
      do {
        param_6 = param_6 + 1;
        cVar4 = cVar4 + *param_6;
        *param_6 = cVar4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    pcVar3 = pcVar1 + param_3;
    param_4 = 1;
    pcVar2 = pcVar1;
  }
  else {
    pcVar2 = pcVar1 + -(long)param_3;
    pcVar3 = pcVar1;
  }
  if (param_4 < param_5) {
    do {
      if (0 < (int)param_1) {
        uVar5 = 0;
        do {
          pcVar3[uVar5] = pcVar2[uVar5] + pcVar3[uVar5];
          uVar5 = uVar5 + 1;
        } while (param_1 != uVar5);
      }
      param_4 = param_4 + 1;
      pcVar2 = pcVar2 + param_3;
      pcVar3 = pcVar3 + param_3;
    } while (param_4 != param_5);
  }
  return;
}




void FUN_1010cd374(uint param_1,undefined8 param_2,int param_3,int param_4,int param_5,char *param_6
                  )

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  
  param_5 = param_5 + param_4;
  pbVar1 = (byte *)(param_6 + (long)param_4 * (long)param_3);
  if (param_4 == 0) {
    if (1 < (int)param_1) {
      uVar3 = (ulong)(param_1 - 1);
      cVar5 = *param_6;
      do {
        param_6 = param_6 + 1;
        cVar5 = cVar5 + *param_6;
        *param_6 = cVar5;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    pbVar1 = pbVar1 + param_3;
    param_4 = 1;
  }
  lVar2 = (long)param_3;
  if (param_4 < param_5) {
    lVar4 = (long)pbVar1 - (long)param_3;
    do {
      uVar6 = (uint)pbVar1[-lVar2] + (uint)*pbVar1;
      *pbVar1 = (byte)uVar6;
      if (1 < (int)param_1) {
        lVar7 = 0;
        do {
          uVar6 = ((uint)((byte *)(lVar4 + lVar7))[1] + (uVar6 & 0xff)) -
                  (uint)*(byte *)(lVar4 + lVar7);
          uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xffffffff;
          }
          uVar6 = pbVar1[lVar7 + 1] + uVar6;
          pbVar1[lVar7 + 1] = (byte)uVar6;
          lVar7 = lVar7 + 1;
        } while ((ulong)param_1 - 1 != lVar7);
      }
      param_4 = param_4 + 1;
      pbVar1 = pbVar1 + lVar2;
      lVar4 = lVar4 + lVar2;
    } while (param_4 != param_5);
  }
  return;
}




void FUN_1010cd44c(long param_1)

{
  if (param_1 != 0) {
    _free(*(void **)(param_1 + 0x280));
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
  }
  return;
}




void FUN_1010cd47c(int param_1)

{
  FUN_1010ce998((long)param_1,0xcd0);
  return;
}




void FUN_1010cd488(void *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1 != (void *)0x0) {
    if (0 < (int)param_2) {
      uVar2 = 0;
      pvVar3 = param_1;
      do {
        lVar4 = 0x280;
        do {
          puVar1 = (undefined8 *)((long)pvVar3 + lVar4);
          _free((void *)*puVar1);
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar4 = lVar4 + 0x290;
        } while (lVar4 != 0xf50);
        uVar2 = uVar2 + 1;
        pvVar3 = (void *)((long)pvVar3 + 0xcd0);
      } while (uVar2 != param_2);
    }
    _free(param_1);
    return;
  }
  return;
}




void FUN_1010cd504(uint *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  int local_a0 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar6 = uVar3;
    puVar8 = param_1;
    uVar4 = 0;
    do {
      uVar1 = *puVar8;
      if ((int)*puVar8 <= (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar6 = uVar6 - 1;
      puVar8 = puVar8 + 1;
      uVar4 = uVar1;
    } while (uVar6 != 0);
    uVar6 = uVar3;
    puVar8 = param_1;
    if (0xf < (int)uVar1) {
      uVar2 = 0;
      goto LAB_1010cd614;
    }
    do {
      *(int *)((long)&local_60 + (long)(int)*puVar8 * 4) =
           *(int *)((long)&local_60 + (long)(int)*puVar8 * 4) + 1;
      uVar6 = uVar6 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar6 != 0);
    if (0 < (int)uVar1) {
      local_a0[0] = 0;
      local_a0[1] = 0;
      if (uVar1 + 1 != 2) {
        iVar5 = 0;
        lVar9 = (ulong)(uVar1 + 1) - 2;
        piVar7 = (int *)((ulong)&local_60 | 4);
        piVar10 = (int *)((ulong)local_a0 | 8);
        do {
          iVar5 = (*piVar7 + iVar5) * 2;
          *piVar10 = iVar5;
          lVar9 = lVar9 + -1;
          piVar7 = piVar7 + 1;
          piVar10 = piVar10 + 1;
        } while (lVar9 != 0);
      }
    }
    local_a0[0] = 0;
    local_a0[1] = 0;
    do {
      uVar4 = *param_1;
      if ((int)uVar4 < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = local_a0[uVar4];
        local_a0[uVar4] = iVar5 + 1;
      }
      *param_3 = iVar5;
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  uVar2 = 1;
LAB_1010cd614:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}




undefined8 FUN_1010cd63c(undefined8 *param_1,long param_2,void *param_3,ulong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  iVar3 = (int)param_4;
  if (iVar3 < 1) {
    uVar4 = FUN_1010cd7c4(param_1,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
LAB_1010cd710:
    _bzero(param_3,-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2);
    iVar2 = FUN_1010cd504(param_2,param_4,param_3);
    if (iVar2 != 0) {
      if (0 < iVar3) {
        uVar5 = 0;
        do {
          if ((0 < *(int *)(param_2 + uVar5 * 4)) &&
             (iVar3 = FUN_1010cd854(param_1,uVar5,*(undefined4 *)((long)param_3 + uVar5 * 4)),
             iVar3 == 0)) goto LAB_1010cd77c;
          uVar5 = uVar5 + 1;
        } while ((param_4 & 0xffffffff) != uVar5);
      }
      if (*(int *)((long)param_1 + 0x28c) == *(int *)(param_1 + 0x51)) {
        return 1;
      }
      goto LAB_1010cd780;
    }
  }
  else {
    uVar5 = 0;
    iVar8 = 0;
    iVar2 = 0;
    do {
      if (0 < *(int *)(param_2 + uVar5 * 4)) {
        iVar2 = iVar2 + 1;
        iVar8 = (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while ((param_4 & 0xffffffff) != uVar5);
    uVar4 = FUN_1010cd7c4(param_1,iVar2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (iVar2 != 1) goto LAB_1010cd710;
    if ((-1 < iVar8) && (iVar8 < iVar3)) {
      lVar7 = 0;
      piVar6 = (int *)param_1[0x50];
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      uVar9 = (undefined1)iVar8;
      uVar10 = (undefined1)((uint)iVar8 >> 8);
      do {
        puVar1 = (undefined8 *)((long)param_1 + lVar7 + 0x80);
        puVar1[1] = CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar10,CONCAT14(uVar9,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,(short)iVar8))))));
        *puVar1 = CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar10,CONCAT14(uVar9,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,(short)iVar8))))));
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x100);
      if (piVar6[1] < 0) {
        piVar6[1] = 0;
      }
      else if (piVar6[1] != 0) {
        return 0;
      }
      *piVar6 = iVar8;
      return 1;
    }
  }
LAB_1010cd77c:
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
LAB_1010cd780:
  _free((void *)param_1[0x50]);
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  return 0;
}




undefined8 FUN_1010cd7c4(undefined8 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = param_2 * 2 + -1;
    *(int *)(param_1 + 0x51) = iVar1;
    lVar2 = FUN_1010ce974((long)iVar1,8);
    param_1[0x50] = lVar2;
    uVar3 = 0;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 4) = 0xffffffff;
      uVar3 = 1;
      *(undefined4 *)((long)param_1 + 0x28c) = 1;
      param_1[1] = 0xffffffffffffffff;
      *param_1 = 0xffffffffffffffff;
      param_1[3] = 0xffffffffffffffff;
      param_1[2] = 0xffffffffffffffff;
      param_1[5] = 0xffffffffffffffff;
      param_1[4] = 0xffffffffffffffff;
      param_1[7] = 0xffffffffffffffff;
      param_1[6] = 0xffffffffffffffff;
      param_1[9] = 0xffffffffffffffff;
      param_1[8] = 0xffffffffffffffff;
      param_1[0xb] = 0xffffffffffffffff;
      param_1[10] = 0xffffffffffffffff;
      param_1[0xd] = 0xffffffffffffffff;
      param_1[0xc] = 0xffffffffffffffff;
      param_1[0xf] = 0xffffffffffffffff;
      param_1[0xe] = 0xffffffffffffffff;
      param_1[0x31] = 0;
      param_1[0x30] = 0;
      param_1[0x33] = 0;
      param_1[0x32] = 0;
      param_1[0x35] = 0;
      param_1[0x34] = 0;
      param_1[0x37] = 0;
      param_1[0x36] = 0;
      param_1[0x39] = 0;
      param_1[0x38] = 0;
      param_1[0x3b] = 0;
      param_1[0x3a] = 0;
      param_1[0x3d] = 0;
      param_1[0x3c] = 0;
      param_1[0x3f] = 0;
      param_1[0x3e] = 0;
      param_1[0x41] = 0;
      param_1[0x40] = 0;
      param_1[0x43] = 0;
      param_1[0x42] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x47] = 0;
      param_1[0x46] = 0;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x4b] = 0;
      param_1[0x4a] = 0;
      param_1[0x4d] = 0;
      param_1[0x4c] = 0;
      param_1[0x4f] = 0;
      param_1[0x4e] = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_1010cd854(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  puVar4 = *(undefined4 **)(param_1 + 0x280);
  iVar8 = *(int *)(param_1 + 0x288);
  if (param_4 - 7 == 0 || (int)param_4 < 7) {
    if ((int)param_4 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar9 = param_3;
      uVar6 = param_4;
      do {
        uVar5 = uVar9 & 1 | uVar5 << 1;
        uVar6 = uVar6 - 1;
        uVar9 = (int)uVar9 >> 1;
      } while (uVar6 != 0);
    }
    if (7 - param_4 != 0x1f) {
      iVar7 = 0;
      iVar3 = 1 << (ulong)(7 - param_4 & 0x1f);
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      do {
        uVar6 = iVar7 << (ulong)(param_4 & 0x1f) | uVar5;
        *(short *)(param_1 + (long)(int)uVar6 * 2 + 0x80) = (short)param_2;
        *(char *)(param_1 + (int)uVar6) = (char)param_4;
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
  }
  else {
    uVar5 = 0;
    iVar7 = 7;
    uVar6 = (int)param_3 >> (param_4 - 7 & 0x1f);
    do {
      uVar5 = uVar6 & 1 | uVar5 << 1;
      iVar7 = iVar7 + -1;
      uVar6 = (int)uVar6 >> 1;
    } while (iVar7 != 0);
  }
  if (0 < (int)param_4) {
    puVar1 = puVar4 + (long)iVar8 * 2;
    iVar8 = 6;
    do {
      if (puVar1 <= puVar4) {
        return 0;
      }
      iVar7 = puVar4[1];
      if (iVar7 < 0) {
        iVar7 = *(int *)(param_1 + 0x28c);
        if (iVar7 == *(int *)(param_1 + 0x288)) {
          return 0;
        }
        lVar2 = *(long *)(param_1 + 0x280) + (long)iVar7 * 8;
        puVar4[1] = (int)((ulong)(lVar2 - (long)puVar4) >> 3);
        *(int *)(param_1 + 0x28c) = iVar7 + 2;
        *(undefined4 *)(lVar2 + 4) = 0xffffffff;
        *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
        iVar7 = puVar4[1];
      }
      else if (iVar7 == 0) {
        return 0;
      }
      puVar4 = puVar4 + (long)(int)(iVar7 + (param_3 >> (ulong)((param_4 + iVar8) - 7 & 0x1f) & 1))
                        * 2;
      if (iVar8 == 0) {
        *(short *)(param_1 + (long)(int)uVar5 * 2 + 0x180) =
             (short)((uint)((int)puVar4 - *(int *)(param_1 + 0x280)) >> 3);
      }
      iVar8 = iVar8 + -1;
    } while (1 < (int)(param_4 + iVar8 + -5));
  }
  if ((int)puVar4[1] < 0) {
    puVar4[1] = 0;
  }
  else if (puVar4[1] != 0) {
    return 0;
  }
  *puVar4 = param_2;
  return 1;
}




undefined8
FUN_1010cd9d4(long param_1,undefined4 *param_2,int *param_3,int *param_4,int param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1010cd7c4(param_1,param_6);
  if ((int)uVar2 != 0) {
    if (0 < (int)param_6) {
      param_6 = param_6 & 0xffffffff;
      do {
        if ((*param_3 != -1) &&
           (((iVar1 = *param_4, iVar1 < 0 || (param_5 <= iVar1)) ||
            (iVar1 = FUN_1010cd854(param_1,iVar1,*param_3,*param_2), iVar1 == 0)))) {
          if (param_1 == 0) {
            return 0;
          }
          goto LAB_1010cda74;
        }
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
    }
    if (*(int *)(param_1 + 0x28c) == *(int *)(param_1 + 0x288)) {
      uVar2 = 1;
    }
    else {
LAB_1010cda74:
      _free(*(void **)(param_1 + 0x280));
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_1010cdaa4(byte *param_1,uint param_2,uint param_3,uint param_4)

{
  short *psVar1;
  ushort *puVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined2 *puVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  ushort *puVar19;
  short *psVar20;
  short *psVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  byte *pbVar32;
  short *psVar33;
  long lVar34;
  byte *pbVar35;
  ulong uVar36;
  short *psVar37;
  size_t sVar38;
  ulong uVar39;
  short sVar40;
  undefined8 uVar41;
  uint uVar42;
  char local_170 [256];
  long local_70;
  ulong uVar14;
  
  uVar41 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if ((((param_4 < 0x65) && (uVar41 = 0, param_1 != (byte *)0x0)) && (0 < (int)param_2)) &&
     ((0 < (int)param_3 && (uVar41 = 1, 0x18 < (int)param_4)))) {
    uVar8 = (int)param_4 / 0x19;
    uVar29 = (uVar8 * 2 + 2) * param_2;
    uVar36 = (ulong)param_2;
    sVar38 = uVar36 * 2;
    psVar11 = (short *)FUN_1010ce974(1,sVar38 + (long)(int)uVar29 * 2 + 0xffe);
    if (psVar11 == (short *)0x0) {
      uVar41 = 0;
    }
    else {
      uVar42 = -uVar8;
      uVar10 = uVar8 * 2 | 1;
      uVar39 = -(ulong)(uVar29 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar29 << 1;
      iVar6 = uVar10 * param_2;
      psVar1 = psVar11 + iVar6;
      _bzero(psVar1 + -uVar36,sVar38);
      puVar2 = (ushort *)((long)psVar11 + uVar39);
      local_170[0xe8] = '\0';
      local_170[0xe9] = '\0';
      local_170[0xea] = '\0';
      local_170[0xeb] = '\0';
      local_170[0xec] = '\0';
      local_170[0xed] = '\0';
      local_170[0xee] = '\0';
      local_170[0xef] = '\0';
      local_170[0xe0] = '\0';
      local_170[0xe1] = '\0';
      local_170[0xe2] = '\0';
      local_170[0xe3] = '\0';
      local_170[0xe4] = '\0';
      local_170[0xe5] = '\0';
      local_170[0xe6] = '\0';
      local_170[0xe7] = '\0';
      local_170[0xf8] = '\0';
      local_170[0xf9] = '\0';
      local_170[0xfa] = '\0';
      local_170[0xfb] = '\0';
      local_170[0xfc] = '\0';
      local_170[0xfd] = '\0';
      local_170[0xfe] = '\0';
      local_170[0xff] = '\0';
      local_170[0xf0] = '\0';
      local_170[0xf1] = '\0';
      local_170[0xf2] = '\0';
      local_170[0xf3] = '\0';
      local_170[0xf4] = '\0';
      local_170[0xf5] = '\0';
      local_170[0xf6] = '\0';
      local_170[0xf7] = '\0';
      local_170[200] = '\0';
      local_170[0xc9] = '\0';
      local_170[0xca] = '\0';
      local_170[0xcb] = '\0';
      local_170[0xcc] = '\0';
      local_170[0xcd] = '\0';
      local_170[0xce] = '\0';
      local_170[0xcf] = '\0';
      local_170[0xc0] = '\0';
      local_170[0xc1] = '\0';
      local_170[0xc2] = '\0';
      local_170[0xc3] = '\0';
      local_170[0xc4] = '\0';
      local_170[0xc5] = '\0';
      local_170[0xc6] = '\0';
      local_170[199] = '\0';
      local_170[0xd8] = '\0';
      local_170[0xd9] = '\0';
      local_170[0xda] = '\0';
      local_170[0xdb] = '\0';
      local_170[0xdc] = '\0';
      local_170[0xdd] = '\0';
      local_170[0xde] = '\0';
      local_170[0xdf] = '\0';
      local_170[0xd0] = '\0';
      local_170[0xd1] = '\0';
      local_170[0xd2] = '\0';
      local_170[0xd3] = '\0';
      local_170[0xd4] = '\0';
      local_170[0xd5] = '\0';
      local_170[0xd6] = '\0';
      local_170[0xd7] = '\0';
      local_170[0xa8] = '\0';
      local_170[0xa9] = '\0';
      local_170[0xaa] = '\0';
      local_170[0xab] = '\0';
      local_170[0xac] = '\0';
      local_170[0xad] = '\0';
      local_170[0xae] = '\0';
      local_170[0xaf] = '\0';
      local_170[0xa0] = '\0';
      local_170[0xa1] = '\0';
      local_170[0xa2] = '\0';
      local_170[0xa3] = '\0';
      local_170[0xa4] = '\0';
      local_170[0xa5] = '\0';
      local_170[0xa6] = '\0';
      local_170[0xa7] = '\0';
      local_170[0xb8] = '\0';
      local_170[0xb9] = '\0';
      local_170[0xba] = '\0';
      local_170[0xbb] = '\0';
      local_170[0xbc] = '\0';
      local_170[0xbd] = '\0';
      local_170[0xbe] = '\0';
      local_170[0xbf] = '\0';
      local_170[0xb0] = '\0';
      local_170[0xb1] = '\0';
      local_170[0xb2] = '\0';
      local_170[0xb3] = '\0';
      local_170[0xb4] = '\0';
      local_170[0xb5] = '\0';
      local_170[0xb6] = '\0';
      local_170[0xb7] = '\0';
      local_170[0x88] = '\0';
      local_170[0x89] = '\0';
      local_170[0x8a] = '\0';
      local_170[0x8b] = '\0';
      local_170[0x8c] = '\0';
      local_170[0x8d] = '\0';
      local_170[0x8e] = '\0';
      local_170[0x8f] = '\0';
      local_170[0x80] = '\0';
      local_170[0x81] = '\0';
      local_170[0x82] = '\0';
      local_170[0x83] = '\0';
      local_170[0x84] = '\0';
      local_170[0x85] = '\0';
      local_170[0x86] = '\0';
      local_170[0x87] = '\0';
      local_170[0x98] = '\0';
      local_170[0x99] = '\0';
      local_170[0x9a] = '\0';
      local_170[0x9b] = '\0';
      local_170[0x9c] = '\0';
      local_170[0x9d] = '\0';
      local_170[0x9e] = '\0';
      local_170[0x9f] = '\0';
      local_170[0x90] = '\0';
      local_170[0x91] = '\0';
      local_170[0x92] = '\0';
      local_170[0x93] = '\0';
      local_170[0x94] = '\0';
      local_170[0x95] = '\0';
      local_170[0x96] = '\0';
      local_170[0x97] = '\0';
      local_170[0x68] = '\0';
      local_170[0x69] = '\0';
      local_170[0x6a] = '\0';
      local_170[0x6b] = '\0';
      local_170[0x6c] = '\0';
      local_170[0x6d] = '\0';
      local_170[0x6e] = '\0';
      local_170[0x6f] = '\0';
      local_170[0x60] = '\0';
      local_170[0x61] = '\0';
      local_170[0x62] = '\0';
      local_170[99] = '\0';
      local_170[100] = '\0';
      local_170[0x65] = '\0';
      local_170[0x66] = '\0';
      local_170[0x67] = '\0';
      local_170[0x78] = '\0';
      local_170[0x79] = '\0';
      local_170[0x7a] = '\0';
      local_170[0x7b] = '\0';
      local_170[0x7c] = '\0';
      local_170[0x7d] = '\0';
      local_170[0x7e] = '\0';
      local_170[0x7f] = '\0';
      local_170[0x70] = '\0';
      local_170[0x71] = '\0';
      local_170[0x72] = '\0';
      local_170[0x73] = '\0';
      local_170[0x74] = '\0';
      local_170[0x75] = '\0';
      local_170[0x76] = '\0';
      local_170[0x77] = '\0';
      local_170[0x48] = '\0';
      local_170[0x49] = '\0';
      local_170[0x4a] = '\0';
      local_170[0x4b] = '\0';
      local_170[0x4c] = '\0';
      local_170[0x4d] = '\0';
      local_170[0x4e] = '\0';
      local_170[0x4f] = '\0';
      local_170[0x40] = '\0';
      local_170[0x41] = '\0';
      local_170[0x42] = '\0';
      local_170[0x43] = '\0';
      local_170[0x44] = '\0';
      local_170[0x45] = '\0';
      local_170[0x46] = '\0';
      local_170[0x47] = '\0';
      local_170[0x58] = '\0';
      local_170[0x59] = '\0';
      local_170[0x5a] = '\0';
      local_170[0x5b] = '\0';
      local_170[0x5c] = '\0';
      local_170[0x5d] = '\0';
      local_170[0x5e] = '\0';
      local_170[0x5f] = '\0';
      local_170[0x50] = '\0';
      local_170[0x51] = '\0';
      local_170[0x52] = '\0';
      local_170[0x53] = '\0';
      local_170[0x54] = '\0';
      local_170[0x55] = '\0';
      local_170[0x56] = '\0';
      local_170[0x57] = '\0';
      local_170[0x28] = '\0';
      local_170[0x29] = '\0';
      local_170[0x2a] = '\0';
      local_170[0x2b] = '\0';
      local_170[0x2c] = '\0';
      local_170[0x2d] = '\0';
      local_170[0x2e] = '\0';
      local_170[0x2f] = '\0';
      local_170[0x20] = '\0';
      local_170[0x21] = '\0';
      local_170[0x22] = '\0';
      local_170[0x23] = '\0';
      local_170[0x24] = '\0';
      local_170[0x25] = '\0';
      local_170[0x26] = '\0';
      local_170[0x27] = '\0';
      local_170[0x38] = '\0';
      local_170[0x39] = '\0';
      local_170[0x3a] = '\0';
      local_170[0x3b] = '\0';
      local_170[0x3c] = '\0';
      local_170[0x3d] = '\0';
      local_170[0x3e] = '\0';
      local_170[0x3f] = '\0';
      local_170[0x30] = '\0';
      local_170[0x31] = '\0';
      local_170[0x32] = '\0';
      local_170[0x33] = '\0';
      local_170[0x34] = '\0';
      local_170[0x35] = '\0';
      local_170[0x36] = '\0';
      local_170[0x37] = '\0';
      local_170[8] = '\0';
      local_170[9] = '\0';
      local_170[10] = '\0';
      local_170[0xb] = '\0';
      local_170[0xc] = '\0';
      local_170[0xd] = '\0';
      local_170[0xe] = '\0';
      local_170[0xf] = '\0';
      local_170[0] = '\0';
      local_170[1] = '\0';
      local_170[2] = '\0';
      local_170[3] = '\0';
      local_170[4] = '\0';
      local_170[5] = '\0';
      local_170[6] = '\0';
      local_170[7] = '\0';
      local_170[0x18] = '\0';
      local_170[0x19] = '\0';
      local_170[0x1a] = '\0';
      local_170[0x1b] = '\0';
      local_170[0x1c] = '\0';
      local_170[0x1d] = '\0';
      local_170[0x1e] = '\0';
      local_170[0x1f] = '\0';
      local_170[0x10] = '\0';
      local_170[0x11] = '\0';
      local_170[0x12] = '\0';
      local_170[0x13] = '\0';
      local_170[0x14] = '\0';
      local_170[0x15] = '\0';
      local_170[0x16] = '\0';
      local_170[0x17] = '\0';
      if ((int)(param_3 * param_2) < 1) {
        uVar23 = 0;
        uVar27 = 0;
        uVar24 = 0xff;
        uVar29 = 0xff;
      }
      else {
        uVar24 = 0xff;
        uVar12 = (ulong)(param_3 * param_2);
        pbVar32 = param_1;
        uVar28 = 0xff;
        uVar26 = 0;
        uVar22 = 0;
        do {
          bVar3 = *pbVar32;
          uVar16 = (uint)bVar3;
          uVar29 = uVar16;
          uVar23 = uVar16;
          if (uVar28 <= bVar3) {
            uVar29 = uVar28;
            uVar23 = uVar24;
          }
          uVar24 = uVar23;
          uVar23 = uVar16;
          if (uVar16 <= uVar26) {
            uVar23 = uVar22;
          }
          uVar27 = (uint)bVar3;
          if (uVar16 <= uVar26) {
            uVar27 = uVar26;
          }
          local_170[bVar3] = '\x01';
          uVar12 = uVar12 - 1;
          pbVar32 = pbVar32 + 1;
          uVar28 = uVar29;
          uVar26 = uVar27;
          uVar22 = uVar23;
        } while (uVar12 != 0);
      }
      iVar25 = 0;
      lVar31 = 0;
      iVar30 = uVar27 - uVar29;
      uVar29 = 0xffffffff;
      uVar27 = 0;
      if (uVar10 * uVar10 != 0) {
        uVar27 = 0x40000 / (uVar10 * uVar10);
      }
      do {
        iVar18 = (uint)lVar31 - uVar29;
        if (iVar30 <= iVar18 || 0x7fffffff < uVar29) {
          iVar18 = iVar30;
        }
        if (local_170[lVar31] != '\0') {
          iVar25 = iVar25 + 1;
          uVar29 = (uint)lVar31;
          iVar30 = iVar18;
        }
        lVar31 = lVar31 + 1;
      } while (lVar31 != 0x100);
      lVar31 = 0;
      iVar5 = iVar30 * 4;
      iVar18 = iVar30 * 0xc >> 2;
      iVar7 = iVar5 - iVar18;
      iVar9 = (iVar30 * 0xc >> 2) * (iVar5 + -1);
      lVar17 = 0x7fc;
      do {
        uVar12 = lVar31 + 1;
        if ((long)((ulong)(uint)(iVar30 * 0xc) << 0x20) >> 0x22 < (long)uVar12) {
          if ((long)uVar12 < (long)iVar5) {
            uVar29 = 0;
            if (iVar7 != 0) {
              uVar29 = iVar9 / iVar7;
            }
            uVar12 = (ulong)uVar29;
          }
          else {
            uVar12 = 0;
          }
        }
        *(short *)((long)psVar11 + lVar31 * 2 + uVar39 + sVar38 + 0x800) = (short)(uVar12 >> 2);
        *(short *)((long)psVar11 + lVar17 + uVar39 + sVar38) = -(short)((uint)uVar12 >> 2);
        lVar31 = lVar31 + 1;
        lVar17 = lVar17 + -2;
        iVar9 = iVar9 - iVar18;
      } while (lVar31 != 0x3ff);
      puVar2[uVar36 + 0x3ff] = 0;
      if ((2 < iVar25) && ((int)uVar42 < (int)param_3)) {
        lVar31 = (long)(int)param_2;
        uVar29 = param_2 - uVar8;
        psVar20 = psVar11;
        pbVar32 = param_1;
        psVar37 = psVar1 + -uVar36;
        do {
          psVar21 = psVar20;
          if (0 < (int)param_2) {
            sVar40 = 0;
            uVar12 = uVar36;
            psVar20 = psVar11 + iVar6;
            psVar33 = psVar21;
            pbVar35 = param_1;
            do {
              sVar40 = (ushort)*pbVar35 + sVar40;
              sVar4 = *psVar37;
              *psVar20 = (sVar4 + sVar40) - *psVar33;
              *psVar33 = sVar4 + sVar40;
              uVar12 = uVar12 - 1;
              psVar20 = psVar20 + 1;
              psVar33 = psVar33 + 1;
              psVar37 = psVar37 + 1;
              pbVar35 = pbVar35 + 1;
            } while (uVar12 != 0);
          }
          psVar20 = psVar11;
          if (psVar21 + lVar31 != psVar1) {
            psVar20 = psVar21 + lVar31;
          }
          lVar17 = lVar31;
          if ((int)(param_3 - 1) <= (int)uVar42 || 0x7fffffff < uVar42) {
            lVar17 = 0;
          }
          if ((int)uVar8 <= (int)uVar42) {
            puVar13 = (ushort *)(psVar11 + (ulong)uVar8 + (long)iVar6);
            puVar19 = puVar2;
            uVar12 = (ulong)(uVar8 + 1);
            iVar25 = uVar8 - 1;
            if ((int)param_4 < -0x18) {
              uVar14 = 0;
            }
            else {
              do {
                *puVar19 = (ushort)(uVar27 * ((uint)*puVar13 + (uint)(ushort)psVar1[iVar25] & 0xffff
                                             ) >> 0x10);
                iVar25 = iVar25 + 1;
                uVar12 = uVar12 - 1;
                uVar14 = (ulong)(uVar8 + 1);
                puVar13 = puVar13 + -1;
                puVar19 = puVar19 + 1;
              } while (uVar12 != 0);
            }
            uVar10 = (uint)uVar14;
            if ((int)uVar10 < (int)uVar29) {
              lVar34 = uVar29 - uVar14;
              iVar25 = ~uVar8 + uVar10;
              iVar30 = uVar8 + uVar10;
              puVar15 = (undefined2 *)((long)psVar11 + uVar14 * 2 + uVar39);
              do {
                *puVar15 = (short)(uVar27 * ((uint)(ushort)psVar1[iVar30] -
                                             (uint)(ushort)psVar1[iVar25] & 0xffff) >> 0x10);
                iVar25 = iVar25 + 1;
                iVar30 = iVar30 + 1;
                lVar34 = lVar34 + -1;
                puVar15 = puVar15 + 1;
                uVar10 = uVar29;
              } while (lVar34 != 0);
            }
            if ((int)uVar10 < (int)param_2) {
              iVar30 = (param_2 * 2 + -2) - (uVar8 + uVar10);
              iVar25 = ~uVar8 + uVar10;
              iVar18 = param_2 - uVar10;
              puVar15 = (undefined2 *)((long)psVar11 + (ulong)uVar10 * 2 + uVar39);
              do {
                *puVar15 = (short)(uVar27 * ((uint)(ushort)psVar1[lVar31 + -1] * 2 -
                                             ((uint)(ushort)psVar1[iVar30] +
                                             (uint)(ushort)psVar1[iVar25]) & 0xffff) >> 0x10);
                iVar30 = iVar30 + -1;
                iVar25 = iVar25 + 1;
                iVar18 = iVar18 + -1;
                puVar15 = puVar15 + 1;
              } while (iVar18 != 0);
            }
            uVar12 = uVar36;
            puVar13 = puVar2;
            pbVar35 = pbVar32;
            if (0 < (int)param_2) {
              do {
                uVar10 = (uint)*pbVar35;
                if (*pbVar35 < uVar23 && uVar24 < uVar10) {
                  uVar10 = (int)(short)(puVar2 + uVar36 + 0x3ff)
                                       [(int)((uint)*puVar13 + uVar10 * -4)] + uVar10;
                  uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
                  if (0xfe < (int)uVar10) {
                    uVar10 = 0xff;
                  }
                  *pbVar35 = (byte)uVar10;
                }
                uVar12 = uVar12 - 1;
                puVar13 = puVar13 + 1;
                pbVar35 = pbVar35 + 1;
              } while (uVar12 != 0);
            }
            pbVar32 = pbVar32 + lVar31;
          }
          param_1 = param_1 + lVar17;
          uVar42 = uVar42 + 1;
          psVar37 = psVar21;
        } while (uVar42 != param_3);
      }
      _free(psVar11);
      uVar41 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar41;
}




void FUN_1010cdf98(float param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  param_2[4] = 0x49ddb84b4a85fef8;
  param_2[3] = 0x14b3b82868385c55;
  param_2[2] = 0x1c88626a775faccb;
  param_2[1] = 0x3b318860de15230;
  param_2[0xc] = 0x7563cce2685feeda;
  param_2[0xb] = 0x73f533e70faa57b1;
  param_2[10] = 0x5abb2c325437f652;
  param_2[9] = 0x32a1755f0c01ee65;
  param_2[8] = 0x38d38c694e19ca72;
  param_2[7] = 0x5492577d5940b7ab;
  param_2[6] = 0xd7ec1da4a290000;
  param_2[5] = 0x5c55028964fcf397;
  param_2[0x14] = 0x141ebf67220414a8;
  param_2[0x13] = 0xa7d871524b35461;
  param_2[0x12] = 0x6425ccdd75762f2a;
  param_2[0x11] = 0x2cbb77d86fcc3706;
  param_2[0x10] = 0x26d7cb1c73990b32;
  param_2[0xf] = 0x541afb0c4f1403fa;
  param_2[0xe] = 0x496b153c4fc0d9c6;
  param_2[0xd] = 0x4730a7ed6e990e83;
  *(undefined8 *)((long)param_2 + 0xdc) = 0x27e5ed3c009f9494;
  *(undefined8 *)((long)param_2 + 0xd4) = 0x78853bbc5181e5f0;
  param_2[0x1a] = 0x5181e5f077ce6b95;
  param_2[0x19] = 0x2b081e8335db3b68;
  param_2[0x18] = 0xd3ad40b1d6ab6fb;
  param_2[0x17] = 0xa50ebed73baaefb;
  param_2[0x16] = 0x28264d4244cab16f;
  param_2[0x15] = 0x73e502e356b41583;
  iVar1 = 0x100;
  if (param_1 <= 1.0) {
    iVar1 = (int)(param_1 * 256.0);
  }
  *param_2 = 0x1f00000000;
  iVar2 = 0;
  if (0.0 <= param_1) {
    iVar2 = iVar1;
  }
  *(int *)((long)param_2 + 0xe4) = iVar2;
  return;
}




void FUN_1010ce028(int *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*param_1 != 0) {
    FUN_1010ce420();
    return;
  }
  uVar2 = param_1[2];
  if (0 < (int)uVar2) {
    uVar6 = 0;
    uVar7 = (ulong)uVar2;
    iVar3 = param_1[0xd];
    do {
      if ((int)uVar6 < (int)((long)iVar3 * (long)(int)uVar2)) {
        iVar8 = 0;
        uVar12 = 0;
        lVar9 = *(long *)(param_1 + 0x18);
        uVar10 = uVar6;
        uVar13 = uVar6;
        do {
          uVar11 = (uint)uVar12;
          iVar8 = param_1[9] + iVar8;
          if (iVar8 < 1) {
            uVar4 = 0;
          }
          else {
            lVar5 = 0;
            do {
              iVar8 = iVar8 - param_1[10];
              bVar1 = *(byte *)(param_2 + (int)uVar13 + lVar5);
              uVar4 = (uint)bVar1;
              uVar11 = (int)uVar12 + (uint)bVar1;
              uVar12 = (ulong)uVar11;
              lVar5 = lVar5 + uVar7;
            } while (0 < iVar8);
            uVar13 = (ulong)(uint)((int)uVar13 + (int)lVar5);
          }
          *(uint *)(lVar9 + uVar10 * 4) = uVar11 * param_1[10] + uVar4 * iVar8;
          uVar12 = (ulong)(uint)param_1[3] * (ulong)-(uVar4 * iVar8) + 0x80000000 >> 0x20;
          uVar10 = uVar10 + uVar7;
        } while ((long)uVar10 < (long)iVar3 * (long)(int)uVar2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  return;
}




void FUN_1010ce0e4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar11 = *(uint *)(param_1 + 0x14);
      if (uVar11 == 0) {
        if (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8)) {
          lVar7 = 0;
          lVar4 = *(long *)(param_1 + 0x58);
          do {
            *(char *)(*(long *)(param_1 + 0x48) + lVar7) = (char)*(undefined4 *)(lVar4 + lVar7 * 4);
            lVar4 = *(long *)(param_1 + 0x58);
            *(undefined4 *)(lVar4 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
        }
      }
      else {
        puVar3 = *(undefined1 **)(param_1 + 0x48);
        puVar5 = *(uint **)(param_1 + 0x58);
        uVar2 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
        iVar1 = *(int *)(param_1 + 0x10) * iVar1;
        if (iVar1 == 0) {
          if (0 < (int)uVar2) {
            *puVar3 = (char)((ulong)uVar11 * (ulong)*puVar5 + 0x80000000 >> 0x20);
            *puVar5 = 0;
            if (uVar2 != 1) {
              lVar7 = (ulong)uVar2 - 1;
              do {
                puVar3 = puVar3 + 1;
                puVar5 = puVar5 + 1;
                *puVar3 = (char)((ulong)*(uint *)(param_1 + 0x14) * (ulong)*puVar5 + 0x80000000 >>
                                0x20);
                *puVar5 = 0;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
          }
        }
        else if (0 < (int)uVar2) {
          puVar9 = *(uint **)(param_1 + 0x60);
          uVar6 = (ulong)(uint)-iVar1;
          uVar10 = (uint)(*puVar9 * uVar6 + 0x80000000 >> 0x20);
          *puVar3 = (char)((ulong)(*puVar5 - uVar10) * (ulong)uVar11 + 0x80000000 >> 0x20);
          *puVar5 = uVar10;
          if (uVar2 != 1) {
            lVar7 = (ulong)uVar2 - 1;
            do {
              puVar9 = puVar9 + 1;
              puVar5 = puVar5 + 1;
              puVar3 = puVar3 + 1;
              uVar11 = (uint)(*puVar9 * uVar6 + 0x80000000 >> 0x20);
              *puVar3 = (char)((ulong)(*puVar5 - uVar11) * (ulong)*(uint *)(param_1 + 0x14) +
                               0x80000000 >> 0x20);
              *puVar5 = uVar11;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
        }
      }
    }
    else {
      uVar11 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        if (0 < (int)uVar11) {
          uVar6 = (ulong)uVar11;
          puVar3 = *(undefined1 **)(param_1 + 0x48);
          puVar5 = *(uint **)(param_1 + 0x60);
          do {
            *puVar3 = (char)((ulong)*(uint *)(param_1 + 0x10) * (ulong)*puVar5 + 0x80000000 >> 0x20)
            ;
            uVar6 = uVar6 - 1;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 != 0);
        }
      }
      else if (0 < (int)uVar11) {
        uVar6 = 0;
        if ((long)*(int *)(param_1 + 0x20) != 0) {
          uVar6 = ((ulong)(uint)-iVar1 << 0x20) / (ulong)(long)*(int *)(param_1 + 0x20);
        }
        uVar8 = (ulong)uVar11;
        puVar3 = *(undefined1 **)(param_1 + 0x48);
        puVar5 = *(uint **)(param_1 + 0x60);
        puVar9 = *(uint **)(param_1 + 0x58);
        do {
          *puVar3 = (char)(((uVar6 & 0xffffffff) * (ulong)*puVar9 +
                            (ulong)(uint)-(int)uVar6 * (ulong)*puVar5 + 0x80000000 >> 0x20) *
                           (ulong)*(uint *)(param_1 + 0x10) + 0x80000000 >> 0x20);
          uVar8 = uVar8 - 1;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    return;
  }
  return;
}




void FUN_1010ce328(uint *param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,void *param_9)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = param_4;
  param_1[0x14] = param_7;
  param_1[1] = (uint)((int)param_3 < (int)param_6);
  param_1[2] = param_8;
  *param_1 = (uint)((int)param_2 < (int)param_5);
  uVar1 = param_2 - 1;
  uVar3 = param_5 - 1;
  if ((int)param_5 <= (int)param_2) {
    uVar1 = param_5;
    uVar3 = param_2;
  }
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
    if (uVar2 >> 0x20 != 0) {
      uVar2 = 0;
    }
    param_1[5] = (uint)uVar2;
    param_1[6] = uVar1;
  }
  uVar1 = 0;
  if ((long)(int)uVar4 != 0) {
    uVar1 = (uint)(0x100000000 / (ulong)(long)(int)uVar4);
  }
  param_1[4] = uVar1;
  *(void **)(param_1 + 0x16) = param_9;
  *(void **)(param_1 + 0x18) = (void *)((long)param_9 + (long)(int)(param_8 * param_5) * 4);
  uVar1 = param_8 * param_5 * 2;
  _bzero(param_9,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  if (DAT_101ea5f50 == (code *)0x0) {
    DAT_101ea5f50 = FUN_1010ce420;
  }
  return;
}




void FUN_1010ce420(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulong)(int)uVar1;
  if (0 < (int)uVar1) {
    uVar4 = 0;
    lVar5 = (long)*(int *)(param_1 + 0x34) * uVar3;
    lVar6 = *(long *)(param_1 + 0x60);
    do {
      uVar10 = (uint)*(byte *)(param_2 + uVar4);
      iVar7 = uVar1 + (int)uVar4;
      uVar8 = uVar10;
      if (1 < *(int *)(param_1 + 0x2c)) {
        uVar8 = (uint)*(byte *)(param_2 + iVar7);
      }
      lVar11 = (long)(int)uVar3;
      iVar12 = *(int *)(param_1 + 0x24);
      *(uint *)(lVar6 + uVar4 * 4) = iVar12 * (uint)*(byte *)(param_2 + uVar4);
      if (iVar7 < (int)lVar5) {
        do {
          iVar12 = iVar12 - *(int *)(param_1 + 0x28);
          if (iVar12 < 0) {
            iVar7 = iVar7 + uVar1;
            uVar9 = (uint)*(byte *)(param_2 + iVar7);
            iVar2 = *(int *)(param_1 + 0x24);
            iVar12 = iVar2 + iVar12;
            uVar10 = uVar8;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x24);
            uVar9 = uVar8;
          }
          *(uint *)(lVar6 + lVar11 * 4) = (uVar10 - uVar9) * iVar12 + iVar2 * uVar9;
          lVar11 = lVar11 + (ulong)uVar1;
          uVar8 = uVar9;
        } while (lVar11 < lVar5);
      }
      uVar4 = uVar4 + 1;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar4 != uVar1);
  }
  return;
}




int FUN_1010ce4d4(long param_1,int param_2)

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




ulong FUN_1010ce4f4(long param_1,ulong param_2,long param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((int)(uint)param_2 < 1) {
    param_2 = 0;
  }
  else {
    uVar6 = 0;
    do {
      if ((*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x18) < 1)) {
        return uVar6;
      }
      if (*(int *)(param_1 + 4) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = uVar2;
      }
      FUN_1010ce028(param_1,param_3);
      if ((*(int *)(param_1 + 4) == 0) && (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8))) {
        lVar5 = 0;
        lVar3 = *(long *)(param_1 + 0x58);
        lVar4 = *(long *)(param_1 + 0x60);
        do {
          *(int *)(lVar3 + lVar5 * 4) = *(int *)(lVar3 + lVar5 * 4) + *(int *)(lVar4 + lVar5 * 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      param_3 = param_3 + param_4;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
    } while (uVar1 != (uint)param_2);
  }
  return param_2;
}




int FUN_1010ce5f8(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    iVar1 = 0;
    do {
      if (0 < *(int *)(param_1 + 0x18)) {
        return iVar1;
      }
      FUN_1010ce0e4(param_1);
      iVar1 = iVar1 + 1;
    } while (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}




undefined ** FUN_1010ce65c(void)

{
  return &PTR_FUN_1018735f0;
}




void FUN_1010ce668(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




bool FUN_1010ce67c(long *param_1)

{
  bool bVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  
  *(undefined4 *)(param_1 + 5) = 0;
  bVar1 = true;
  if ((int)param_1[1] != 1) {
    if ((int)param_1[1] == 0) {
      ppVar3 = (pthread_mutex_t *)FUN_1010ce998(1,0x78);
      *param_1 = (long)ppVar3;
      if (ppVar3 == (pthread_mutex_t *)0x0) {
        bVar1 = false;
      }
      else {
        iVar2 = _pthread_mutex_init(ppVar3,(pthread_mutexattr_t *)0x0);
        if (iVar2 == 0) {
          iVar2 = _pthread_cond_init((pthread_cond_t *)(*param_1 + 0x40),(pthread_condattr_t *)0x0);
          if (iVar2 == 0) {
            _pthread_mutex_lock((pthread_mutex_t *)*param_1);
            iVar2 = _pthread_create((pthread_t *)(*param_1 + 0x70),(pthread_attr_t *)0x0,
                                    (void **)FUN_1010ce854,param_1);
            if (iVar2 == 0) {
              *(undefined4 *)(param_1 + 1) = 1;
              _pthread_mutex_unlock((pthread_mutex_t *)*param_1);
              return true;
            }
            _pthread_mutex_unlock((pthread_mutex_t *)*param_1);
            _pthread_mutex_destroy((pthread_mutex_t *)*param_1);
            _pthread_cond_destroy((pthread_cond_t *)(*param_1 + 0x40));
          }
          else {
            _pthread_mutex_destroy((pthread_mutex_t *)*param_1);
          }
        }
        _free((void *)*param_1);
        bVar1 = false;
        *param_1 = 0;
      }
    }
    else {
      FUN_1010ce8fc(param_1,1);
      bVar1 = (int)param_1[5] == 0;
    }
  }
  return bVar1;
}




bool FUN_1010ce77c(long param_1)

{
  FUN_1010ce8fc(param_1,1);
  return *(int *)(param_1 + 0x28) == 0;
}




void FUN_1010ce7ac(undefined8 param_1)

{
  FUN_1010ce8fc(param_1,2);
  return;
}




void FUN_1010ce7b4(long param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)(iVar1 == 0);
  }
  return;
}




void FUN_1010ce7f8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1010ce8fc(param_1,0);
    _pthread_join(*(pthread_t *)(*param_1 + 0x70),(void **)0x0);
    _pthread_mutex_destroy((pthread_mutex_t *)*param_1);
    _pthread_cond_destroy((pthread_cond_t *)(*param_1 + 0x40));
    _free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 FUN_1010ce854(long *param_1)

{
  int iVar1;
  
  while( true ) {
    _pthread_mutex_lock((pthread_mutex_t *)*param_1);
    while (iVar1 = (int)param_1[1], iVar1 == 1) {
      _pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                         (pthread_mutex_t *)*param_1);
    }
    if (iVar1 == 0) break;
    if (iVar1 == 2) {
      if ((code *)param_1[2] != (code *)0x0) {
        iVar1 = (*(code *)param_1[2])(param_1[3],param_1[4]);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | (uint)(iVar1 == 0);
      }
      *(undefined4 *)(param_1 + 1) = 1;
    }
    _pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x40));
    _pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  }
  _pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x40));
  _pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  return 0;
}




int FUN_1010ce8fc(long *param_1,int param_2)

{
  int iVar1;
  
  if ((pthread_mutex_t *)*param_1 != (pthread_mutex_t *)0x0) {
    _pthread_mutex_lock((pthread_mutex_t *)*param_1);
    iVar1 = (int)param_1[1];
    if (iVar1 != 0) {
      while (iVar1 != 1) {
        _pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                           (pthread_mutex_t *)*param_1);
        iVar1 = (int)param_1[1];
      }
      if (param_2 != 1) {
        *(int *)(param_1 + 1) = param_2;
        _pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x40));
      }
    }
    iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)*param_1);
    return iVar1;
  }
  return 0;
}




void * FUN_1010ce974(ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0x10000000000 / param_1;
    }
    if (uVar1 < param_2) {
      return (void *)0x0;
    }
  }
  pvVar2 = _malloc(param_2 * param_1);
  return pvVar2;
}




void * FUN_1010ce998(ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0x10000000000 / param_1;
    }
    if (uVar1 < param_2) {
      return (void *)0x0;
    }
  }
  pvVar2 = _calloc(param_1,param_2);
  return pvVar2;
}




bool FUN_1010ce9bc(void)

{
  int iVar1;
  
  if (DAT_101ea5f58 == 0) {
    iVar1 = FUN_1004e2f40(&DAT_101d911b0);
    if (((iVar1 == 0x13) && (iVar1 = FUN_1004e2f90(&DAT_101d911b0,0), iVar1 == 8)) &&
       (iVar1 = FUN_1004e2f90(&DAT_101d911b0,1), iVar1 == 0)) {
      DAT_101ea5f58 = 2;
    }
    else {
      if (DAT_101dc1c78 == 0) {
        DAT_101dc1c78 = _MTLCreateSystemDefaultDevice();
      }
      DAT_101ea5f58 = 1;
      if (DAT_101dc1c78 == 0) {
        DAT_101ea5f58 = 2;
      }
    }
  }
  return DAT_101ea5f58 == 1;
}




undefined8 FUN_1010cea54(void)

{
  undefined8 uVar1;
  
  if (DAT_101dc1c72 == '\0') {
    DAT_101dc1c98 = _objc_msgSend(DAT_101dc1c90,"nextDrawable");
    uVar1 = 0;
    if (DAT_101dc1c98 != 0) {
      _objc_retain();
      DAT_101dc1c88 = _objc_msgSend(DAT_101dc1c98,"texture");
      _objc_msgSend(DAT_101dc1c88,"setLabel:",&cf_BackBuffer);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1010cead4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_101dc1ca8;
  uVar2 = _objc_msgSend(param_1,"copy");
  _objc_msgSend(uVar1,"addObject:",uVar2);
  return;
}




void FUN_1010ceb10(undefined8 param_1)

{
  DAT_101dc1c78 = _MTLCreateSystemDefaultDevice();
  DAT_101dc1c80 = _objc_msgSend(DAT_101dc1c78,"newCommandQueue");
  _objc_msgSend(DAT_101dc1c80,"setLabel:",&cf_MainCommandQueue);
  DAT_101dc1c90 = param_1;
  _objc_msgSend(param_1,"setDevice:",DAT_101dc1c78);
  DAT_101dc1c70 = 1;
  return;
}




void FUN_1010ceb88(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _dispatch_semaphore_wait(DAT_101dc1ca0,0xffffffffffffffff);
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  DAT_101dc1ca8 = _objc_msgSend(uVar1,"init");
  uVar2 = FUN_1010cea54();
  if ((uVar2 & 1) == 0) {
    DAT_101dc1cb0 = 1;
  }
  return;
}




void FUN_1010cebdc(void)

{
  return;
}




void FUN_1010cebe0(undefined8 param_1)

{
  _objc_msgSend(param_1,"commit");
  return;
}




void FUN_1010cebec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  uVar2 = _objc_msgSend(DAT_101dc1c80,"commandBuffer");
  uVar1 = DAT_101dc1ca8;
  if ((DAT_101dc1c72 == '\0' && DAT_101dc1c98 != 0) && DAT_101dc1cb0 == '\0') {
    if (DAT_101dc1c71 == '\0') {
      _objc_msgSend(uVar2,"presentDrawable:");
    }
    local_78 = PTR___NSConcreteStackBlock_101444138;
    local_70 = 0xc2000000;
    local_68 = FUN_1010ceda8;
    puStack_60 = &DAT_10182eb38;
    local_58 = DAT_101dc1ca8;
    _objc_msgSend(uVar2,"addCompletedHandler:",&local_78);
    _objc_msgSend(uVar2,"commit");
    if (DAT_101dc1c71 != '\0') {
      _objc_msgSend(uVar2,"waitUntilScheduled");
      _objc_msgSend(DAT_101dc1c98,"present");
    }
    DAT_101dc1c88 = 0;
    _objc_release(DAT_101dc1c98);
    DAT_101dc1c98 = 0;
  }
  else {
    lVar3 = _objc_msgSend(DAT_101dc1ca8,"count");
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        lVar3 = _objc_msgSend(uVar1,"objectAtIndexedSubscript:",uVar5);
        (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
        _objc_release(lVar3);
        uVar5 = uVar5 + 1;
        uVar4 = _objc_msgSend(uVar1,"count");
      } while (uVar5 < uVar4);
    }
    _objc_release(uVar1);
    _dispatch_semaphore_signal(DAT_101dc1ca0);
    _objc_release(DAT_101dc1c98);
    DAT_101dc1cb0 = '\0';
  }
  return;
}




void FUN_1010ceda8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"count");
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      lVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"objectAtIndexedSubscript:",uVar3);
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
      _objc_release(lVar1);
      uVar3 = uVar3 + 1;
      uVar2 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"count");
    } while (uVar3 < uVar2);
  }
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _dispatch_semaphore_signal(DAT_101dc1ca0);
  return;
}




void FUN_1010cee4c(void)

{
  DAT_101dc1ca0 = _dispatch_semaphore_create(2);
  return;
}




void FUN_1010cee6c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10182eb78;
  lVar1 = 0x10;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x30;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x800);
  param_1[0x3002] = 0x7ff0000;
  param_1[0x3005] = 0;
  param_1[0x3004] = 0;
  *(undefined4 *)(param_1 + 0x3006) = 0;
  return;
}




void FUN_1010ceec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182eb78;
  param_1[0x3005] = 0;
  param_1[0x3004] = 0;
  *(undefined4 *)(param_1 + 0x3006) = 0;
  return;
}




uint FUN_1010ceef0(long param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  long *plVar1;
  ushort *puVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *(undefined8 *)(puVar2 + 8) = param_2[2];
  *(undefined8 *)(puVar2 + 4) = uVar7;
  *(undefined8 *)puVar2 = uVar6;
  puVar2[0xc] = param_3;
  lVar4 = *(long *)(param_1 + 0x18020);
  puVar2[0xd] = param_4;
  lVar5 = *(long *)(param_1 + 0x18028);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(long *)(puVar2 + 0x14) = lVar5;
  plVar1 = (long *)(param_1 + 0x18020);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar5 + 0x20);
  }
  *plVar1 = (long)puVar2;
  *(ushort **)(param_1 + 0x18028) = puVar2;
  *(int *)(param_1 + 0x18030) = *(int *)(param_1 + 0x18030) + 1;
  return ((uint)((int)puVar2 - (int)(param_1 + 0x10)) >> 4) * 0xaaab & 0xffff;
}




void FUN_1010cefa8(long param_1,uint param_2,undefined8 *param_3,undefined2 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    puVar1 = (undefined8 *)(param_1 + 0x10 + (ulong)(param_2 & 0xffff) * 0x30);
    puVar1[2] = param_3[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  if (param_4 != (undefined2 *)0x0) {
    *(undefined2 *)(param_1 + 0x10 + (ulong)(param_2 & 0xffff) * 0x30 + 0x18) = *param_4;
  }
  return;
}




void FUN_1010cefe4(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x10;
  lVar5 = lVar1 + (ulong)(param_2 & 0xffff) * 0x30;
  FUN_1010cf08c(param_1 + 0x18020,lVar5);
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




void FUN_1010cf08c(long *param_1,long param_2)

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




uint FUN_1010cf0ec(long param_1,undefined2 *param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x18020);
  if (lVar3 == 0 || param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      puVar2 = param_2;
      if (((param_4 == 0) || ((*(ushort *)(lVar3 + 0x18) & param_4) != 0)) &&
         (iVar1 = FUN_1010cf6f4(param_5 + 0x44,6,lVar3,lVar3 + 0xc), iVar1 != 1)) {
        puVar2 = param_2 + 1;
        *param_2 = *(undefined2 *)(lVar3 + 0x1a);
        uVar4 = uVar4 + 1;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      param_2 = puVar2;
    } while (lVar3 != 0 && uVar4 < param_3);
  }
  return uVar4;
}




void FUN_1010cf194(long param_1,undefined2 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18020);
  uVar1 = 0;
  if (lVar3 != 0 && param_3 != 0) {
    do {
      if ((param_4 == 0) || (puVar2 = param_2, (*(ushort *)(lVar3 + 0x18) & param_4) != 0)) {
        puVar2 = param_2 + 1;
        *param_2 = *(undefined2 *)(lVar3 + 0x1a);
        uVar1 = uVar1 + 1;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      param_2 = puVar2;
    } while (lVar3 != 0 && uVar1 < param_3);
  }
  return;
}




undefined4 FUN_1010cf1e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18030);
}




bool FUN_1010cf1f0(long param_1)

{
  return *(short *)(param_1 + 0x18010) == -1;
}




void FUN_1010cf208(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 2;
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0xd) = uVar1;
  return;
}




void thunk_FUN_1010cf220(float param_1,float param_2,float param_3,float param_4,undefined4 *param_5
                        ,float *param_6,undefined8 *param_7,float *param_8)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  *param_5 = 0;
  uVar1 = *(undefined8 *)param_6;
  param_5[3] = param_6[2];
  *(undefined8 *)(param_5 + 1) = uVar1;
  param_5[0xd] = param_3;
  param_5[0xe] = param_4;
  param_5[0xf] = param_1;
  param_5[0x10] = param_2;
  fVar7 = (float)*param_7 - (float)*(undefined8 *)param_6;
  fVar8 = (float)((ulong)*param_7 >> 0x20) - (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  fVar9 = *(float *)(param_7 + 1) - param_6[2];
  fVar11 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar7 = fVar7 / fVar11;
  fVar8 = fVar8 / fVar11;
  *(ulong *)(param_5 + 7) = CONCAT44(fVar8,fVar7);
  fVar9 = fVar9 / fVar11;
  param_5[9] = fVar9;
  fVar11 = param_8[2];
  fVar12 = -(param_8[1] * fVar9) + fVar11 * fVar8;
  param_5[10] = fVar12;
  fVar13 = *param_8;
  fVar10 = fVar13 * fVar9 - fVar11 * fVar7;
  param_5[0xb] = fVar10;
  fVar11 = -(fVar13 * fVar8) + param_8[1] * fVar7;
  fVar14 = fVar10 * fVar9 - fVar11 * fVar8;
  fVar15 = -(fVar12 * fVar9) + fVar11 * fVar7;
  fVar17 = -(fVar10 * fVar7) + fVar12 * fVar8;
  fVar13 = 1.0 / SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  fVar12 = fVar12 * fVar13;
  fVar10 = fVar10 * fVar13;
  param_5[10] = fVar12;
  param_5[0xb] = fVar10;
  fVar11 = fVar11 * fVar13;
  param_5[0xc] = fVar11;
  fVar13 = 1.0 / SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15);
  fVar14 = fVar14 * fVar13;
  fVar15 = fVar15 * fVar13;
  param_5[4] = fVar14;
  param_5[5] = fVar15;
  fVar17 = fVar17 * fVar13;
  param_5[6] = fVar17;
  fVar13 = (float)_tanf(param_4 * 0.0027777778 * 3.1415927);
  fVar16 = (fVar13 + fVar13) * param_1;
  fVar18 = (fVar13 + fVar13) * param_2;
  fVar19 = param_6[1];
  fVar20 = *param_6 + param_1 * fVar7;
  fVar21 = fVar19 + param_1 * fVar8;
  fVar22 = param_6[2];
  fVar23 = fVar22 + fVar9 * param_1;
  fVar13 = *param_6 + param_2 * fVar7;
  fVar25 = fVar16 * 0.5;
  fVar16 = param_3 * 0.5 * fVar16;
  fVar26 = fVar16 * fVar12;
  fVar27 = fVar16 * fVar10;
  fVar16 = fVar16 * fVar11;
  fVar28 = fVar20 - fVar25 * fVar14;
  fVar29 = fVar21 - fVar25 * fVar15;
  fVar30 = fVar23 - fVar25 * fVar17;
  fVar24 = fVar18 * 0.5;
  fVar18 = param_3 * 0.5 * fVar18;
  fVar12 = fVar18 * fVar12;
  fVar31 = fVar13 - fVar24 * fVar14;
  pfVar2 = (float *)(param_5 + 0x35);
  *pfVar2 = fVar31 + fVar12;
  pfVar3 = (float *)(param_5 + 0x29);
  *pfVar3 = fVar28 + fVar26;
  param_5[0x2a] = fVar29 + fVar27;
  param_5[0x2b] = fVar30 + fVar16;
  pfVar4 = (float *)(param_5 + 0x2c);
  *pfVar4 = fVar28 - fVar26;
  param_5[0x2d] = fVar29 - fVar27;
  param_5[0x2e] = fVar30 - fVar16;
  fVar20 = fVar25 * fVar14 + fVar20;
  fVar21 = fVar25 * fVar15 + fVar21;
  fVar23 = fVar25 * fVar17 + fVar23;
  pfVar5 = (float *)(param_5 + 0x2f);
  *pfVar5 = fVar20 + fVar26;
  param_5[0x30] = fVar21 + fVar27;
  param_5[0x31] = fVar23 + fVar16;
  pfVar6 = (float *)(param_5 + 0x32);
  *pfVar6 = fVar20 - fVar26;
  fVar19 = fVar19 + param_2 * fVar8;
  fVar22 = fVar22 + fVar9 * param_2;
  param_5[0x33] = fVar21 - fVar27;
  param_5[0x34] = fVar23 - fVar16;
  fVar10 = fVar18 * fVar10;
  fVar18 = fVar18 * fVar11;
  fVar11 = fVar19 - fVar24 * fVar15;
  fVar16 = fVar22 - fVar24 * fVar17;
  param_5[0x36] = fVar11 + fVar10;
  param_5[0x37] = fVar16 + fVar18;
  param_5[0x38] = fVar31 - fVar12;
  param_5[0x39] = fVar11 - fVar10;
  param_5[0x3a] = fVar16 - fVar18;
  fVar13 = fVar24 * fVar14 + fVar13;
  fVar19 = fVar24 * fVar15 + fVar19;
  fVar22 = fVar24 * fVar17 + fVar22;
  param_5[0x3b] = fVar13 + fVar12;
  param_5[0x3c] = fVar19 + fVar10;
  param_5[0x3d] = fVar22 + fVar18;
  param_5[0x3e] = fVar13 - fVar12;
  param_5[0x3f] = fVar19 - fVar10;
  param_5[0x40] = fVar22 - fVar18;
  fVar12 = *param_6;
  fVar15 = param_6[1];
  fVar14 = param_6[2];
  *(ulong *)(param_5 + 0x11) = CONCAT44(-fVar8,-fVar7);
  param_5[0x13] = -fVar9;
  fVar11 = *param_6;
  fVar10 = param_6[1];
  fVar13 = param_6[2];
  param_5[0x14] =
       (fVar12 + param_1 * fVar7) * fVar7 + (fVar15 + param_1 * fVar8) * fVar8 +
       fVar9 * (fVar14 + fVar9 * param_1);
  param_5[0x18] =
       -((fVar13 + fVar9 * param_2) * fVar9) -
       ((fVar11 + param_2 * fVar7) * fVar7 + (fVar10 + param_2 * fVar8) * fVar8);
  param_5[0x17] = param_5[9];
  *(undefined8 *)(param_5 + 0x15) = *(undefined8 *)(param_5 + 7);
  FUN_1010cf5f8(param_5 + 0x19,pfVar5,param_5 + 0x3b,pfVar6);
  FUN_1010cf5f8(param_5 + 0x1d,pfVar3,pfVar4,pfVar2);
  FUN_1010cf5f8(param_5 + 0x21,pfVar4,pfVar6,param_5 + 0x38);
  FUN_1010cf5f8(param_5 + 0x25,pfVar3,pfVar2,pfVar5);
  return;
}




void FUN_1010cf220(float param_1,float param_2,float param_3,float param_4,undefined4 *param_5,
                  float *param_6,undefined8 *param_7,float *param_8)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  *param_5 = 0;
  uVar1 = *(undefined8 *)param_6;
  param_5[3] = param_6[2];
  *(undefined8 *)(param_5 + 1) = uVar1;
  param_5[0xd] = param_3;
  param_5[0xe] = param_4;
  param_5[0xf] = param_1;
  param_5[0x10] = param_2;
  fVar7 = (float)*param_7 - (float)*(undefined8 *)param_6;
  fVar8 = (float)((ulong)*param_7 >> 0x20) - (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  fVar9 = *(float *)(param_7 + 1) - param_6[2];
  fVar11 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar7 = fVar7 / fVar11;
  fVar8 = fVar8 / fVar11;
  *(ulong *)(param_5 + 7) = CONCAT44(fVar8,fVar7);
  fVar9 = fVar9 / fVar11;
  param_5[9] = fVar9;
  fVar11 = param_8[2];
  fVar12 = -(param_8[1] * fVar9) + fVar11 * fVar8;
  param_5[10] = fVar12;
  fVar13 = *param_8;
  fVar10 = fVar13 * fVar9 - fVar11 * fVar7;
  param_5[0xb] = fVar10;
  fVar11 = -(fVar13 * fVar8) + param_8[1] * fVar7;
  fVar14 = fVar10 * fVar9 - fVar11 * fVar8;
  fVar15 = -(fVar12 * fVar9) + fVar11 * fVar7;
  fVar17 = -(fVar10 * fVar7) + fVar12 * fVar8;
  fVar13 = 1.0 / SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  fVar12 = fVar12 * fVar13;
  fVar10 = fVar10 * fVar13;
  param_5[10] = fVar12;
  param_5[0xb] = fVar10;
  fVar11 = fVar11 * fVar13;
  param_5[0xc] = fVar11;
  fVar13 = 1.0 / SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15);
  fVar14 = fVar14 * fVar13;
  fVar15 = fVar15 * fVar13;
  param_5[4] = fVar14;
  param_5[5] = fVar15;
  fVar17 = fVar17 * fVar13;
  param_5[6] = fVar17;
  fVar13 = (float)_tanf(param_4 * 0.0027777778 * 3.1415927);
  fVar16 = (fVar13 + fVar13) * param_1;
  fVar18 = (fVar13 + fVar13) * param_2;
  fVar19 = param_6[1];
  fVar20 = *param_6 + param_1 * fVar7;
  fVar21 = fVar19 + param_1 * fVar8;
  fVar22 = param_6[2];
  fVar23 = fVar22 + fVar9 * param_1;
  fVar13 = *param_6 + param_2 * fVar7;
  fVar25 = fVar16 * 0.5;
  fVar16 = param_3 * 0.5 * fVar16;
  fVar26 = fVar16 * fVar12;
  fVar27 = fVar16 * fVar10;
  fVar16 = fVar16 * fVar11;
  fVar28 = fVar20 - fVar25 * fVar14;
  fVar29 = fVar21 - fVar25 * fVar15;
  fVar30 = fVar23 - fVar25 * fVar17;
  fVar24 = fVar18 * 0.5;
  fVar18 = param_3 * 0.5 * fVar18;
  fVar12 = fVar18 * fVar12;
  fVar31 = fVar13 - fVar24 * fVar14;
  pfVar2 = (float *)(param_5 + 0x35);
  *pfVar2 = fVar31 + fVar12;
  pfVar3 = (float *)(param_5 + 0x29);
  *pfVar3 = fVar28 + fVar26;
  param_5[0x2a] = fVar29 + fVar27;
  param_5[0x2b] = fVar30 + fVar16;
  pfVar4 = (float *)(param_5 + 0x2c);
  *pfVar4 = fVar28 - fVar26;
  param_5[0x2d] = fVar29 - fVar27;
  param_5[0x2e] = fVar30 - fVar16;
  fVar20 = fVar25 * fVar14 + fVar20;
  fVar21 = fVar25 * fVar15 + fVar21;
  fVar23 = fVar25 * fVar17 + fVar23;
  pfVar5 = (float *)(param_5 + 0x2f);
  *pfVar5 = fVar20 + fVar26;
  param_5[0x30] = fVar21 + fVar27;
  param_5[0x31] = fVar23 + fVar16;
  pfVar6 = (float *)(param_5 + 0x32);
  *pfVar6 = fVar20 - fVar26;
  fVar19 = fVar19 + param_2 * fVar8;
  fVar22 = fVar22 + fVar9 * param_2;
  param_5[0x33] = fVar21 - fVar27;
  param_5[0x34] = fVar23 - fVar16;
  fVar10 = fVar18 * fVar10;
  fVar18 = fVar18 * fVar11;
  fVar11 = fVar19 - fVar24 * fVar15;
  fVar16 = fVar22 - fVar24 * fVar17;
  param_5[0x36] = fVar11 + fVar10;
  param_5[0x37] = fVar16 + fVar18;
  param_5[0x38] = fVar31 - fVar12;
  param_5[0x39] = fVar11 - fVar10;
  param_5[0x3a] = fVar16 - fVar18;
  fVar13 = fVar24 * fVar14 + fVar13;
  fVar19 = fVar24 * fVar15 + fVar19;
  fVar22 = fVar24 * fVar17 + fVar22;
  param_5[0x3b] = fVar13 + fVar12;
  param_5[0x3c] = fVar19 + fVar10;
  param_5[0x3d] = fVar22 + fVar18;
  param_5[0x3e] = fVar13 - fVar12;
  param_5[0x3f] = fVar19 - fVar10;
  param_5[0x40] = fVar22 - fVar18;
  fVar12 = *param_6;
  fVar15 = param_6[1];
  fVar14 = param_6[2];
  *(ulong *)(param_5 + 0x11) = CONCAT44(-fVar8,-fVar7);
  param_5[0x13] = -fVar9;
  fVar11 = *param_6;
  fVar10 = param_6[1];
  fVar13 = param_6[2];
  param_5[0x14] =
       (fVar12 + param_1 * fVar7) * fVar7 + (fVar15 + param_1 * fVar8) * fVar8 +
       fVar9 * (fVar14 + fVar9 * param_1);
  param_5[0x18] =
       -((fVar13 + fVar9 * param_2) * fVar9) -
       ((fVar11 + param_2 * fVar7) * fVar7 + (fVar10 + param_2 * fVar8) * fVar8);
  param_5[0x17] = param_5[9];
  *(undefined8 *)(param_5 + 0x15) = *(undefined8 *)(param_5 + 7);
  FUN_1010cf5f8(param_5 + 0x19,pfVar5,param_5 + 0x3b,pfVar6);
  FUN_1010cf5f8(param_5 + 0x1d,pfVar3,pfVar4,pfVar2);
  FUN_1010cf5f8(param_5 + 0x21,pfVar4,pfVar6,param_5 + 0x38);
  FUN_1010cf5f8(param_5 + 0x25,pfVar3,pfVar2,pfVar5);
  return;
}




void FUN_1010cf5f8(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar3 = *param_4 - *param_2;
  fVar5 = param_3[2] - param_2[2];
  fVar4 = param_4[1] - param_2[1];
  fVar6 = param_4[2] - param_2[2];
  fVar7 = fVar6 * fVar2 - fVar4 * fVar5;
  fVar5 = fVar3 * fVar5 - fVar6 * fVar1;
  fVar1 = fVar4 * fVar1 - fVar3 * fVar2;
  fVar2 = 1.0 / SQRT(fVar1 * fVar1 + fVar7 * fVar7 + fVar5 * fVar5);
  *param_1 = fVar7 * fVar2;
  param_1[1] = fVar5 * fVar2;
  param_1[2] = fVar1 * fVar2;
  param_1[3] = -(param_2[2] * fVar1 * fVar2) -
               (fVar7 * fVar2 * *param_2 + fVar5 * fVar2 * param_2[1]);
  return;
}




undefined8 FUN_1010cf688(long param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = 0;
  while( true ) {
    lVar1 = param_1 + lVar2;
    fVar3 = (float)*(undefined8 *)(param_2 + 1) * (float)*(undefined8 *)(lVar1 + 0x48) +
            *(float *)(lVar1 + 0x44) * *param_2 +
            (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) *
            (float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) + *(float *)(lVar1 + 0x50);
    if (param_2[3] < fVar3) {
      return 1;
    }
    if (ABS(fVar3) < param_2[3]) break;
    lVar2 = lVar2 + 0x10;
    if (lVar2 == 0x60) {
      return 0;
    }
  }
  return 2;
}




undefined4 FUN_1010cf6f4(long param_1,uint param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = (ulong)param_2;
  pfVar3 = (float *)(param_1 + 8);
  uVar2 = 0;
  while( true ) {
    fVar5 = pfVar3[-2];
    fVar6 = pfVar3[-1];
    fVar8 = *param_3;
    if (fVar5 <= 0.0) {
      fVar8 = *param_4;
    }
    fVar9 = param_3[1];
    if (fVar6 <= 0.0) {
      fVar9 = param_4[1];
    }
    fVar7 = *pfVar3;
    fVar10 = param_3[2];
    if (fVar7 <= 0.0) {
      fVar10 = param_4[2];
    }
    if (0.0 < pfVar3[1] + fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) break;
    fVar8 = param_4[2];
    if (fVar7 <= 0.0) {
      fVar8 = param_3[2];
    }
    fVar9 = param_4[1];
    if (fVar6 <= 0.0) {
      fVar9 = param_3[1];
    }
    fVar10 = *param_4;
    if (fVar5 <= 0.0) {
      fVar10 = *param_3;
    }
    uVar1 = 2;
    if (pfVar3[1] + fVar5 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8 <= 0.0) {
      uVar1 = uVar2;
    }
    pfVar3 = pfVar3 + 4;
    uVar4 = uVar4 - 1;
    uVar2 = uVar1;
    if (uVar4 == 0) {
      return uVar1;
    }
  }
  return 1;
}




bool FUN_1010cf79c(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_4;
  if (*param_2 <= fVar2) {
    fVar1 = 0.0;
    if (*param_3 < fVar2) {
      fVar2 = fVar2 - *param_3;
      if (param_1 < fVar2) {
        return false;
      }
      goto LAB_1010cf7dc;
    }
  }
  else {
    fVar2 = fVar2 - *param_2;
    if (fVar2 < -param_1) {
      return false;
    }
LAB_1010cf7dc:
    fVar1 = fVar2 * fVar2;
  }
  fVar2 = param_4[1];
  if (param_2[1] <= fVar2) {
    if (param_3[1] < fVar2) {
      fVar2 = fVar2 - param_3[1];
      if (param_1 < fVar2) {
        return false;
      }
      goto LAB_1010cf81c;
    }
  }
  else {
    fVar2 = fVar2 - param_2[1];
    if (fVar2 < -param_1) {
      return false;
    }
LAB_1010cf81c:
    fVar1 = fVar1 + fVar2 * fVar2;
  }
  fVar2 = param_4[2];
  if (param_2[2] <= fVar2) {
    if (fVar2 <= param_3[2]) goto LAB_1010cf864;
    fVar2 = fVar2 - param_3[2];
    if (param_1 < fVar2) {
      return false;
    }
  }
  else {
    fVar2 = fVar2 - param_2[2];
    if (fVar2 < -param_1) {
      return false;
    }
  }
  fVar1 = fVar1 + fVar2 * fVar2;
LAB_1010cf864:
  return fVar1 <= param_1 * param_1;
}




bool FUN_1010cf874(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != (float *)0x0) {
    *param_3 = -3.4028235e+38;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = -3.4028235e+38;
  }
  fVar3 = *param_1 - *param_2;
  fVar4 = param_1[1] - param_2[1];
  fVar2 = param_1[3];
  fVar5 = param_1[2] - param_2[2];
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  fVar1 = fVar2 * fVar2 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar2 = fVar2 * fVar3 + fVar4 * fVar6 + fVar5 * fVar7;
  fVar2 = fVar2 + fVar2;
  fVar3 = (fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) - param_2[3] * param_2[3];
  fVar4 = fVar1 * -4.0 * fVar3 + fVar2 * fVar2;
  if (fVar4 < 0.0) {
    return false;
  }
  fVar4 = SQRT(fVar4);
  fVar5 = (fVar4 + fVar2) * -0.5;
  if (0.0 <= fVar2) {
    fVar5 = (fVar4 - fVar2) * 0.5;
  }
  fVar4 = fVar5 / fVar1;
  fVar1 = -fVar2 / fVar1;
  if (fVar5 != 0.0) {
    fVar1 = fVar3 / fVar5;
  }
  fVar1 = (float)NEON_fminnm(fVar4,fVar1);
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar4;
  }
  if (fVar4 != fVar1) {
    if (0.0 <= fVar1) {
      return (bool)2;
    }
    return 0.0 <= fVar4;
  }
  return true;
}




bool FUN_1010cf988(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
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
  
  fVar5 = *param_2 - *param_3;
  fVar2 = param_2[1] - param_3[1];
  fVar4 = param_2[3];
  fVar9 = param_2[2] - param_3[2];
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar3 = param_2[4];
  fVar1 = param_2[5];
  fVar8 = *param_4;
  fVar11 = fVar7 * fVar3 - fVar6 * fVar1;
  fVar12 = fVar8 * fVar1 - fVar4 * fVar7;
  fVar13 = fVar4 * fVar6 - fVar8 * fVar3;
  fVar10 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13);
  if (fVar10 < 1.1920929e-07) {
    fVar1 = fVar7 * fVar9 + fVar2 * fVar6 + fVar5 * fVar8;
    fVar5 = fVar5 - fVar8 * fVar1;
    fVar2 = fVar2 - fVar6 * fVar1;
    fVar9 = fVar9 - fVar7 * fVar1;
    if (param_5 != (float *)0x0) {
      *param_5 = -3.4028235e+38;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = 3.4028235e+38;
    }
    return SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar9 * fVar9) <= param_1;
  }
  fVar14 = 1.0 / fVar10;
  fVar11 = fVar11 * fVar14;
  fVar12 = fVar12 * fVar14;
  fVar13 = fVar13 * fVar14;
  fVar14 = fVar11 * fVar5 + fVar2 * fVar12 + fVar9 * fVar13;
  if (param_1 < ABS(fVar14)) {
    return false;
  }
  if (param_5 != (float *)0x0 || param_6 != (float *)0x0) {
    fVar10 = (fVar11 * (fVar6 * fVar9 - fVar7 * fVar2) + (fVar7 * fVar5 - fVar8 * fVar9) * fVar12 +
             (fVar8 * fVar2 - fVar6 * fVar5) * fVar13) / fVar10;
    fVar9 = fVar12 * fVar7 - fVar13 * fVar6;
    fVar5 = fVar13 * fVar8 - fVar11 * fVar7;
    fVar2 = fVar11 * fVar6 - fVar12 * fVar8;
    fVar1 = ABS(SQRT((fVar9 * fVar9 + fVar5 * fVar5 + fVar2 * fVar2) *
                     (param_1 * param_1 - fVar14 * fVar14)) /
                (fVar9 * fVar4 + fVar3 * fVar5 + fVar1 * fVar2));
    if (param_5 != (float *)0x0) {
      *param_5 = fVar10 - fVar1;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = fVar1 + fVar10;
    }
  }
  return true;
}




void FUN_1010cfb10(undefined1 param_1 [16],float param_2,undefined8 param_3,float *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_80;
  undefined4 local_78;
  float local_74;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  
  iVar1 = FUN_1010cf988();
  if (iVar1 != 0) {
    fVar3 = (float)*param_5;
    fVar2 = (float)((ulong)*param_5 >> 0x20);
    local_68 = -*(float *)(param_5 + 1);
    local_70 = CONCAT44(-fVar2,-fVar3);
    fVar4 = param_4[2] * *(float *)(param_5 + 1);
    fVar3 = *param_4 * fVar3;
    fStack_64 = fVar3 + param_4[1] * fVar2 + fVar4;
    local_80 = *param_5;
    local_78 = *(undefined4 *)(param_5 + 1);
    local_74 = -(fVar3 + (param_4[1] + param_2) * fVar2 + fVar4);
    FUN_1010cfc34(param_3,&local_70,&local_80,&local_54,&local_58,auStack_5c,auStack_5c);
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = local_54;
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = local_58;
    }
  }
  return;
}




void FUN_1010cfc00(undefined8 *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(float *)(param_1 + 1) = param_2[2];
  *param_1 = uVar1;
  *(float *)((long)param_1 + 0xc) =
       -(param_3[2] * param_2[2]) - (*param_3 * *param_2 + param_2[1] * param_3[1]);
  return;
}




bool FUN_1010cfc34(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined4 *param_6,undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *param_6 = 0;
  *param_7 = 0;
  fVar1 = *param_4;
  fVar4 = param_1[2];
  fVar3 = param_1[3];
  fVar8 = param_1[4];
  fVar5 = param_1[5];
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar10 = fVar3 * *param_2 + param_2[1] * fVar8 + param_2[2] * fVar5;
  fVar2 = *param_5;
  fVar9 = fVar6 * *param_2 + param_2[1] * fVar7 + param_2[2] * fVar4 + param_2[3];
  if (fVar10 == 0.0) {
    if (0.0 <= fVar9) {
      return false;
    }
  }
  else {
    fVar9 = -fVar9 / fVar10;
    if (0.0 <= fVar10) {
      if (fVar1 < fVar9 && fVar9 < fVar2) {
        *param_7 = 1;
        fVar2 = fVar9;
      }
      if (fVar9 < fVar1) {
        return false;
      }
    }
    else {
      if (fVar1 < fVar9 && fVar9 < fVar2) {
        *param_6 = 1;
        fVar1 = fVar9;
      }
      if (fVar2 < fVar9) {
        return false;
      }
    }
  }
  fVar5 = *param_3 * fVar3 + fVar8 * param_3[1] + fVar5 * param_3[2];
  fVar3 = *param_3 * fVar6 + fVar7 * param_3[1] + fVar4 * param_3[2] + param_3[3];
  if (fVar5 == 0.0) {
    if (fVar3 < 0.0) goto LAB_1010cfd14;
  }
  else {
    fVar3 = -fVar3 / fVar5;
    if (0.0 <= fVar5) {
      if (fVar1 < fVar3 && fVar3 < fVar2) {
        *param_7 = 2;
        fVar2 = fVar3;
      }
      if (fVar1 <= fVar3) goto LAB_1010cfd14;
    }
    else {
      if (fVar1 < fVar3 && fVar3 < fVar2) {
        *param_6 = 2;
        fVar1 = fVar3;
      }
      if (fVar3 <= fVar2) {
LAB_1010cfd14:
        *param_4 = fVar1;
        *param_5 = fVar2;
        return fVar1 < fVar2;
      }
    }
  }
  return false;
}




undefined8 FUN_1010cfd88(float param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
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
  
  fVar8 = *param_2;
  fVar16 = param_2[1];
  fVar14 = *param_3;
  fVar15 = param_3[1];
  fVar12 = fVar8 - fVar14;
  fVar10 = fVar16 - fVar15;
  param_1 = -param_1 * param_1;
  fVar9 = param_1 + fVar12 * fVar12 + fVar10 * fVar10;
  if (0.0 < fVar9) {
    fVar17 = *param_4;
    fVar20 = param_4[1];
    fVar13 = fVar8 - fVar17;
    fVar11 = fVar16 - fVar20;
    fVar7 = param_1 + fVar13 * fVar13 + fVar11 * fVar11;
    if (0.0 < fVar7) {
      fVar21 = *param_5;
      fVar22 = param_5[1];
      fVar8 = fVar8 - fVar21;
      fVar16 = fVar16 - fVar22;
      fVar6 = param_1 + fVar8 * fVar8 + fVar16 * fVar16;
      if (0.0 < fVar6) {
        fVar18 = fVar17 - fVar14;
        fVar19 = fVar20 - fVar15;
        fVar17 = fVar21 - fVar17;
        fVar20 = fVar22 - fVar20;
        fVar14 = fVar14 - fVar21;
        fVar15 = fVar15 - fVar22;
        bVar1 = true;
        bVar3 = false;
        if (fVar18 * fVar10 <= fVar19 * fVar12) {
          bVar1 = false;
          bVar3 = true;
          if (!NAN(fVar20 * fVar13) && !NAN(fVar17 * fVar11)) {
            bVar1 = fVar20 * fVar13 < fVar17 * fVar11;
            bVar3 = false;
          }
        }
        bVar2 = true;
        bVar4 = false;
        if (bVar1 == bVar3) {
          bVar2 = false;
          bVar4 = true;
          if (!NAN(fVar15 * fVar8) && !NAN(fVar16 * fVar14)) {
            bVar2 = fVar15 * fVar8 < fVar16 * fVar14;
            bVar4 = false;
          }
        }
        if (bVar2 != bVar4) {
          fVar12 = fVar18 * fVar12 + fVar10 * fVar19;
          fVar10 = fVar18 * fVar18 + fVar19 * fVar19;
          bVar1 = false;
          bVar3 = false;
          if (0.0 < fVar12) {
            bVar1 = false;
            bVar3 = true;
            if (!NAN(fVar12) && !NAN(fVar10)) {
              bVar1 = fVar12 < fVar10;
              bVar3 = false;
            }
          }
          fVar10 = fVar10 * fVar9;
          fVar12 = fVar12 * fVar12;
          bVar2 = false;
          bVar4 = false;
          bVar5 = false;
          if (bVar1 != bVar3) {
            bVar2 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar10) && !NAN(fVar12)) {
              bVar2 = fVar10 < fVar12;
              bVar4 = fVar10 == fVar12;
              bVar5 = false;
            }
          }
          if (!bVar4 && bVar2 == bVar5) {
            fVar10 = fVar17 * fVar13 + fVar11 * fVar20;
            fVar9 = fVar17 * fVar17 + fVar20 * fVar20;
            bVar1 = false;
            bVar3 = false;
            if (0.0 < fVar10) {
              bVar1 = false;
              bVar3 = true;
              if (!NAN(fVar10) && !NAN(fVar9)) {
                bVar1 = fVar10 < fVar9;
                bVar3 = false;
              }
            }
            fVar9 = fVar9 * fVar7;
            fVar10 = fVar10 * fVar10;
            bVar2 = false;
            bVar4 = false;
            bVar5 = false;
            if (bVar1 != bVar3) {
              bVar2 = false;
              bVar4 = false;
              bVar5 = true;
              if (!NAN(fVar9) && !NAN(fVar10)) {
                bVar2 = fVar9 < fVar10;
                bVar4 = fVar9 == fVar10;
                bVar5 = false;
              }
            }
            if (!bVar4 && bVar2 == bVar5) {
              fVar8 = fVar8 * fVar14 + fVar15 * fVar16;
              fVar16 = fVar14 * fVar14 + fVar15 * fVar15;
              bVar1 = false;
              bVar3 = false;
              if (0.0 < fVar8) {
                bVar1 = false;
                bVar3 = true;
                if (!NAN(fVar8) && !NAN(fVar16)) {
                  bVar1 = fVar8 < fVar16;
                  bVar3 = false;
                }
              }
              fVar6 = fVar6 * fVar16;
              fVar8 = fVar8 * fVar8;
              bVar2 = false;
              bVar4 = false;
              bVar5 = false;
              if (bVar1 != bVar3) {
                bVar2 = false;
                bVar4 = false;
                bVar5 = true;
                if (!NAN(fVar6) && !NAN(fVar8)) {
                  bVar2 = fVar6 < fVar8;
                  bVar4 = fVar6 == fVar8;
                  bVar5 = false;
                }
              }
              if (!bVar4 && bVar2 == bVar5) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}




undefined8
FUN_1010cfeb0(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 in_d4;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (param_4 != 0) {
    bVar8 = false;
    uVar7 = 0;
    fVar9 = (float)*param_1;
    fVar11 = (float)*param_2 - fVar9;
    fVar10 = (float)((ulong)*param_1 >> 0x20);
    fVar12 = (float)((ulong)*param_2 >> 0x20) - fVar10;
    uVar14 = NEON_rev64(CONCAT44(fVar12,fVar11),4);
    fVar16 = 0.0;
    do {
      uVar18 = *(undefined8 *)(param_3 + (ulong)uVar7 * 8);
      uVar22 = *(undefined8 *)(param_3 + (ulong)(uVar7 + 1) * 8);
      fVar17 = (float)uVar18;
      fVar21 = (float)uVar22;
      fVar19 = (float)((ulong)uVar18 >> 0x20);
      fVar23 = (float)((ulong)uVar22 >> 0x20);
      uVar18 = NEON_rev64(CONCAT44(fVar23 - fVar19,fVar21 - fVar17),4);
      fVar25 = (float)uVar18 * fVar11 - (float)((ulong)uVar18 >> 0x20) * fVar12;
      fVar13 = (float)uVar14;
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      if (fVar25 != 0.0) {
        uVar18 = NEON_rev64(CONCAT44(fVar19 - fVar10,fVar17 - fVar9),4);
        fVar24 = ((float)((ulong)uVar18 >> 0x20) * (fVar23 - fVar19) -
                 (float)uVar18 * (fVar21 - fVar17)) / fVar25;
        bVar1 = false;
        bVar3 = false;
        bVar5 = false;
        if (0.0 <= fVar24) {
          bVar1 = false;
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar24)) {
            bVar1 = fVar24 < 1.0;
            bVar3 = fVar24 == 1.0;
            bVar5 = false;
          }
        }
        if (bVar3 || bVar1 != bVar5) {
          fVar25 = ((fVar17 - fVar9) * fVar13 - (fVar19 - fVar10) * fVar15) / fVar25;
          bVar1 = false;
          bVar3 = false;
          bVar5 = false;
          if (0.0 <= fVar25) {
            bVar1 = false;
            bVar3 = false;
            bVar5 = true;
            if (!NAN(fVar25)) {
              bVar1 = fVar25 < 1.0;
              bVar3 = fVar25 == 1.0;
              bVar5 = false;
            }
          }
          bVar2 = false;
          bVar4 = true;
          bVar6 = false;
          if (bVar3 || bVar1 != bVar5) {
            bVar2 = false;
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar24) && !NAN(fVar16)) {
              bVar2 = fVar24 < fVar16;
              bVar4 = fVar24 == fVar16;
              bVar6 = false;
            }
          }
          if (!bVar4 && bVar2 == bVar6) {
            in_d4 = CONCAT44(fVar10 + fVar12 * fVar24,fVar9 + fVar11 * fVar24);
            bVar8 = true;
            fVar16 = fVar24;
          }
        }
      }
      uVar18 = *(undefined8 *)(param_3 + (ulong)(uVar7 + 2) * 8);
      fVar25 = (float)uVar18;
      fVar24 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = NEON_rev64(CONCAT44(fVar24 - fVar23,fVar25 - fVar21),4);
      fVar26 = (float)uVar18 * fVar11 - (float)((ulong)uVar18 >> 0x20) * fVar12;
      if (fVar26 != 0.0) {
        uVar18 = NEON_rev64(CONCAT44(fVar23 - fVar10,fVar21 - fVar9),4);
        fVar20 = ((fVar24 - fVar23) * (float)((ulong)uVar18 >> 0x20) -
                 (fVar25 - fVar21) * (float)uVar18) / fVar26;
        bVar1 = false;
        bVar3 = false;
        bVar5 = false;
        if (0.0 <= fVar20) {
          bVar1 = false;
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar20)) {
            bVar1 = fVar20 < 1.0;
            bVar3 = fVar20 == 1.0;
            bVar5 = false;
          }
        }
        if (bVar3 || bVar1 != bVar5) {
          fVar26 = ((fVar21 - fVar9) * fVar13 - (fVar23 - fVar10) * fVar15) / fVar26;
          bVar1 = false;
          bVar3 = false;
          bVar5 = false;
          if (0.0 <= fVar26) {
            bVar1 = false;
            bVar3 = false;
            bVar5 = true;
            if (!NAN(fVar26)) {
              bVar1 = fVar26 < 1.0;
              bVar3 = fVar26 == 1.0;
              bVar5 = false;
            }
          }
          bVar2 = false;
          bVar4 = true;
          bVar6 = false;
          if (bVar3 || bVar1 != bVar5) {
            bVar2 = false;
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar20) && !NAN(fVar16)) {
              bVar2 = fVar20 < fVar16;
              bVar4 = fVar20 == fVar16;
              bVar6 = false;
            }
          }
          if (!bVar4 && bVar2 == bVar6) {
            in_d4 = CONCAT44(fVar10 + fVar12 * fVar20,fVar9 + fVar11 * fVar20);
            bVar8 = true;
            fVar16 = fVar20;
          }
        }
      }
      uVar18 = NEON_rev64(CONCAT44(fVar19 - fVar24,fVar17 - fVar25),4);
      fVar21 = (float)uVar18 * fVar11 - (float)((ulong)uVar18 >> 0x20) * fVar12;
      if (fVar21 != 0.0) {
        uVar18 = NEON_rev64(CONCAT44(fVar24 - fVar10,fVar25 - fVar9),4);
        fVar17 = ((float)((ulong)uVar18 >> 0x20) * (fVar19 - fVar24) -
                 (float)uVar18 * (fVar17 - fVar25)) / fVar21;
        bVar1 = false;
        bVar3 = false;
        bVar5 = false;
        if (0.0 <= fVar17) {
          bVar1 = false;
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar17)) {
            bVar1 = fVar17 < 1.0;
            bVar3 = fVar17 == 1.0;
            bVar5 = false;
          }
        }
        if (bVar3 || bVar1 != bVar5) {
          fVar21 = ((fVar25 - fVar9) * fVar13 - (fVar24 - fVar10) * fVar15) / fVar21;
          bVar1 = false;
          bVar3 = false;
          bVar5 = false;
          if (0.0 <= fVar21) {
            bVar1 = false;
            bVar3 = false;
            bVar5 = true;
            if (!NAN(fVar21)) {
              bVar1 = fVar21 < 1.0;
              bVar3 = fVar21 == 1.0;
              bVar5 = false;
            }
          }
          bVar2 = false;
          bVar4 = true;
          bVar6 = false;
          if (bVar3 || bVar1 != bVar5) {
            bVar2 = false;
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar17) && !NAN(fVar16)) {
              bVar2 = fVar17 < fVar16;
              bVar4 = fVar17 == fVar16;
              bVar6 = false;
            }
          }
          if (!bVar4 && bVar2 == bVar6) {
            in_d4 = CONCAT44(fVar10 + fVar12 * fVar17,fVar9 + fVar11 * fVar17);
            bVar8 = true;
            fVar16 = fVar17;
          }
        }
      }
      uVar7 = uVar7 + 3;
    } while (uVar7 < param_4);
    if (bVar8) {
      *param_5 = in_d4;
      return 1;
    }
  }
  return 0;
}

