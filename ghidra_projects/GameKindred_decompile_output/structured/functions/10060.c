// functions/10060 — 126 functions
#include "GameKindred.h"




void FUN_10060028c(int *param_1,int param_2,int *param_3,uint param_4,ulong param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (param_4 < 0xd) {
    if (param_4 < 9) {
      if (param_4 < 5) {
        if (param_4 < 3) {
          if (param_4 == 2) {
            if (0 < param_2) {
              iVar3 = param_6[-2];
              iVar14 = param_6[-1];
              do {
                iVar4 = (int)((long)iVar14 * (long)*param_3 + (long)iVar3 * (long)param_3[1] >>
                             (param_5 & 0x3f)) + *param_1;
                *param_6 = iVar4;
                param_2 = param_2 + -1;
                param_1 = param_1 + 1;
                param_6 = param_6 + 1;
                iVar3 = iVar14;
                iVar14 = iVar4;
              } while (param_2 != 0);
            }
          }
          else if (0 < param_2) {
            iVar3 = param_6[-1];
            do {
              iVar3 = (int)((long)iVar3 * (long)*param_3 >> (param_5 & 0x3f)) + *param_1;
              *param_6 = iVar3;
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
            } while (param_2 != 0);
          }
        }
        else if (param_4 == 4) {
          if (0 < param_2) {
            iVar3 = param_6[-4];
            iVar14 = param_6[-3];
            iVar4 = param_6[-2];
            iVar5 = param_6[-1];
            do {
              iVar6 = (int)((long)iVar14 * (long)param_3[2] + (long)iVar3 * (long)param_3[3] +
                            (long)iVar4 * (long)param_3[1] + (long)iVar5 * (long)*param_3 >>
                           (param_5 & 0x3f)) + *param_1;
              *param_6 = iVar6;
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              iVar3 = iVar14;
              iVar14 = iVar4;
              iVar4 = iVar5;
              iVar5 = iVar6;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          iVar14 = param_6[-3];
          iVar4 = param_6[-2];
          iVar3 = param_6[-1];
          do {
            iVar5 = (int)((long)iVar4 * (long)param_3[1] + (long)iVar14 * (long)param_3[2] +
                          (long)iVar3 * (long)*param_3 >> (param_5 & 0x3f)) + *param_1;
            *param_6 = iVar5;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar14 = iVar4;
            iVar4 = iVar3;
            iVar3 = iVar5;
          } while (param_2 != 0);
        }
      }
      else if (param_4 < 7) {
        if (param_4 == 6) {
          if (0 < param_2) {
            iVar3 = param_6[-6];
            iVar14 = param_6[-5];
            iVar4 = param_6[-4];
            iVar5 = param_6[-3];
            iVar6 = param_6[-2];
            iVar7 = param_6[-1];
            do {
              iVar9 = (int)((long)iVar14 * (long)param_3[4] + (long)iVar3 * (long)param_3[5] +
                            (long)iVar4 * (long)param_3[3] + (long)iVar5 * (long)param_3[2] +
                            (long)iVar6 * (long)param_3[1] + (long)iVar7 * (long)*param_3 >>
                           (param_5 & 0x3f)) + *param_1;
              *param_6 = iVar9;
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              iVar3 = iVar14;
              iVar14 = iVar4;
              iVar4 = iVar5;
              iVar5 = iVar6;
              iVar6 = iVar7;
              iVar7 = iVar9;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          iVar14 = param_6[-5];
          iVar4 = param_6[-4];
          iVar5 = param_6[-3];
          iVar6 = param_6[-2];
          iVar3 = param_6[-1];
          do {
            iVar7 = (int)((long)iVar4 * (long)param_3[3] + (long)iVar14 * (long)param_3[4] +
                          (long)iVar5 * (long)param_3[2] + (long)iVar6 * (long)param_3[1] +
                          (long)iVar3 * (long)*param_3 >> (param_5 & 0x3f)) + *param_1;
            *param_6 = iVar7;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar14 = iVar4;
            iVar4 = iVar5;
            iVar5 = iVar6;
            iVar6 = iVar3;
            iVar3 = iVar7;
          } while (param_2 != 0);
        }
      }
      else if (param_4 == 8) {
        if (0 < param_2) {
          iVar3 = param_6[-8];
          iVar14 = param_6[-7];
          iVar4 = param_6[-6];
          iVar5 = param_6[-5];
          iVar6 = param_6[-4];
          iVar7 = param_6[-3];
          iVar9 = param_6[-2];
          iVar10 = param_6[-1];
          do {
            iVar11 = (int)((long)iVar14 * (long)param_3[6] + (long)iVar3 * (long)param_3[7] +
                           (long)iVar4 * (long)param_3[5] + (long)iVar5 * (long)param_3[4] +
                           (long)iVar6 * (long)param_3[3] + (long)iVar7 * (long)param_3[2] +
                           (long)iVar9 * (long)param_3[1] + (long)iVar10 * (long)*param_3 >>
                          (param_5 & 0x3f)) + *param_1;
            *param_6 = iVar11;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar3 = iVar14;
            iVar14 = iVar4;
            iVar4 = iVar5;
            iVar5 = iVar6;
            iVar6 = iVar7;
            iVar7 = iVar9;
            iVar9 = iVar10;
            iVar10 = iVar11;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        iVar14 = param_6[-7];
        iVar4 = param_6[-6];
        iVar5 = param_6[-5];
        iVar6 = param_6[-4];
        iVar7 = param_6[-3];
        iVar9 = param_6[-2];
        iVar3 = param_6[-1];
        do {
          iVar10 = (int)((long)iVar4 * (long)param_3[5] + (long)iVar14 * (long)param_3[6] +
                         (long)iVar5 * (long)param_3[4] + (long)iVar6 * (long)param_3[3] +
                         (long)iVar7 * (long)param_3[2] + (long)iVar9 * (long)param_3[1] +
                         (long)iVar3 * (long)*param_3 >> (param_5 & 0x3f)) + *param_1;
          *param_6 = iVar10;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          param_6 = param_6 + 1;
          iVar14 = iVar4;
          iVar4 = iVar5;
          iVar5 = iVar6;
          iVar6 = iVar7;
          iVar7 = iVar9;
          iVar9 = iVar3;
          iVar3 = iVar10;
        } while (param_2 != 0);
      }
    }
    else if (param_4 < 0xb) {
      if (param_4 == 10) {
        if (0 < param_2) {
          iVar3 = param_6[-10];
          iVar14 = param_6[-9];
          iVar4 = param_6[-8];
          iVar5 = param_6[-7];
          iVar6 = param_6[-6];
          iVar7 = param_6[-5];
          iVar9 = param_6[-4];
          iVar10 = param_6[-3];
          iVar11 = param_6[-2];
          iVar12 = param_6[-1];
          do {
            iVar13 = (int)((long)iVar14 * (long)param_3[8] + (long)iVar3 * (long)param_3[9] +
                           (long)iVar4 * (long)param_3[7] + (long)iVar5 * (long)param_3[6] +
                           (long)iVar6 * (long)param_3[5] + (long)iVar7 * (long)param_3[4] +
                           (long)iVar9 * (long)param_3[3] + (long)iVar10 * (long)param_3[2] +
                           (long)iVar11 * (long)param_3[1] + (long)iVar12 * (long)*param_3 >>
                          (param_5 & 0x3f)) + *param_1;
            *param_6 = iVar13;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar3 = iVar14;
            iVar14 = iVar4;
            iVar4 = iVar5;
            iVar5 = iVar6;
            iVar6 = iVar7;
            iVar7 = iVar9;
            iVar9 = iVar10;
            iVar10 = iVar11;
            iVar11 = iVar12;
            iVar12 = iVar13;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        iVar14 = param_6[-9];
        iVar4 = param_6[-8];
        iVar5 = param_6[-7];
        iVar6 = param_6[-6];
        iVar7 = param_6[-5];
        iVar9 = param_6[-4];
        iVar10 = param_6[-3];
        iVar11 = param_6[-2];
        iVar3 = param_6[-1];
        do {
          iVar12 = (int)((long)iVar4 * (long)param_3[7] + (long)iVar14 * (long)param_3[8] +
                         (long)iVar5 * (long)param_3[6] + (long)iVar6 * (long)param_3[5] +
                         (long)iVar7 * (long)param_3[4] + (long)iVar9 * (long)param_3[3] +
                         (long)iVar10 * (long)param_3[2] + (long)iVar11 * (long)param_3[1] +
                         (long)iVar3 * (long)*param_3 >> (param_5 & 0x3f)) + *param_1;
          *param_6 = iVar12;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          param_6 = param_6 + 1;
          iVar14 = iVar4;
          iVar4 = iVar5;
          iVar5 = iVar6;
          iVar6 = iVar7;
          iVar7 = iVar9;
          iVar9 = iVar10;
          iVar10 = iVar11;
          iVar11 = iVar3;
          iVar3 = iVar12;
        } while (param_2 != 0);
      }
    }
    else if (param_4 == 0xc) {
      if (0 < param_2) {
        iVar3 = param_6[-0xc];
        iVar14 = param_6[-0xb];
        iVar4 = param_6[-10];
        iVar5 = param_6[-9];
        iVar6 = param_6[-8];
        iVar7 = param_6[-7];
        iVar9 = param_6[-6];
        iVar10 = param_6[-5];
        iVar11 = param_6[-4];
        iVar12 = param_6[-3];
        iVar13 = param_6[-2];
        iVar2 = param_6[-1];
        do {
          iVar1 = (int)((long)iVar14 * (long)param_3[10] + (long)iVar3 * (long)param_3[0xb] +
                        (long)iVar4 * (long)param_3[9] + (long)iVar5 * (long)param_3[8] +
                        (long)iVar6 * (long)param_3[7] + (long)iVar7 * (long)param_3[6] +
                        (long)iVar9 * (long)param_3[5] + (long)iVar10 * (long)param_3[4] +
                        (long)iVar11 * (long)param_3[3] + (long)iVar12 * (long)param_3[2] +
                        (long)iVar13 * (long)param_3[1] + (long)iVar2 * (long)*param_3 >>
                       (param_5 & 0x3f)) + *param_1;
          *param_6 = iVar1;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          param_6 = param_6 + 1;
          iVar3 = iVar14;
          iVar14 = iVar4;
          iVar4 = iVar5;
          iVar5 = iVar6;
          iVar6 = iVar7;
          iVar7 = iVar9;
          iVar9 = iVar10;
          iVar10 = iVar11;
          iVar11 = iVar12;
          iVar12 = iVar13;
          iVar13 = iVar2;
          iVar2 = iVar1;
        } while (param_2 != 0);
      }
    }
    else if (0 < param_2) {
      iVar14 = param_6[-0xb];
      iVar4 = param_6[-10];
      iVar5 = param_6[-9];
      iVar6 = param_6[-8];
      iVar7 = param_6[-7];
      iVar9 = param_6[-6];
      iVar10 = param_6[-5];
      iVar11 = param_6[-4];
      iVar12 = param_6[-3];
      iVar13 = param_6[-2];
      iVar3 = param_6[-1];
      do {
        iVar2 = (int)((long)iVar4 * (long)param_3[9] + (long)iVar14 * (long)param_3[10] +
                      (long)iVar5 * (long)param_3[8] + (long)iVar6 * (long)param_3[7] +
                      (long)iVar7 * (long)param_3[6] + (long)iVar9 * (long)param_3[5] +
                      (long)iVar10 * (long)param_3[4] + (long)iVar11 * (long)param_3[3] +
                      (long)iVar12 * (long)param_3[2] + (long)iVar13 * (long)param_3[1] +
                      (long)iVar3 * (long)*param_3 >> (param_5 & 0x3f)) + *param_1;
        *param_6 = iVar2;
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        iVar14 = iVar4;
        iVar4 = iVar5;
        iVar5 = iVar6;
        iVar6 = iVar7;
        iVar7 = iVar9;
        iVar9 = iVar10;
        iVar10 = iVar11;
        iVar11 = iVar12;
        iVar12 = iVar13;
        iVar13 = iVar3;
        iVar3 = iVar2;
      } while (param_2 != 0);
    }
  }
  else if (0 < param_2) {
    param_6 = param_6 + -0x10;
    do {
      lVar8 = 0;
      switch(param_4) {
      case 0x20:
        lVar8 = (long)param_6[-0x10] * (long)param_3[0x1f];
      case 0x1f:
        lVar8 = lVar8 + (long)param_6[-0xf] * (long)param_3[0x1e];
      case 0x1e:
        lVar8 = lVar8 + (long)param_6[-0xe] * (long)param_3[0x1d];
      case 0x1d:
        lVar8 = lVar8 + (long)param_6[-0xd] * (long)param_3[0x1c];
      case 0x1c:
        lVar8 = lVar8 + (long)param_6[-0xc] * (long)param_3[0x1b];
      case 0x1b:
        lVar8 = lVar8 + (long)param_6[-0xb] * (long)param_3[0x1a];
      case 0x1a:
        lVar8 = lVar8 + (long)param_6[-10] * (long)param_3[0x19];
      case 0x19:
        lVar8 = lVar8 + (long)param_6[-9] * (long)param_3[0x18];
      case 0x18:
        lVar8 = lVar8 + (long)param_6[-8] * (long)param_3[0x17];
      case 0x17:
        lVar8 = lVar8 + (long)param_6[-7] * (long)param_3[0x16];
      case 0x16:
        lVar8 = lVar8 + (long)param_6[-6] * (long)param_3[0x15];
      case 0x15:
        lVar8 = lVar8 + (long)param_6[-5] * (long)param_3[0x14];
      case 0x14:
        lVar8 = lVar8 + (long)param_6[-4] * (long)param_3[0x13];
      case 0x13:
        lVar8 = lVar8 + (long)param_6[-3] * (long)param_3[0x12];
      case 0x12:
        lVar8 = lVar8 + (long)param_6[-2] * (long)param_3[0x11];
      case 0x11:
        lVar8 = lVar8 + (long)param_6[-1] * (long)param_3[0x10];
      case 0x10:
        lVar8 = lVar8 + (long)*param_6 * (long)param_3[0xf];
      case 0xf:
        lVar8 = lVar8 + (long)param_6[1] * (long)param_3[0xe];
      case 0xe:
        lVar8 = lVar8 + (long)param_6[2] * (long)param_3[0xd];
      case 0xd:
        lVar8 = lVar8 + (long)param_6[3] * (long)param_3[0xc] +
                (long)param_6[4] * (long)param_3[0xb] + (long)param_6[5] * (long)param_3[10] +
                (long)param_6[6] * (long)param_3[9] + (long)param_6[7] * (long)param_3[8] +
                (long)param_6[8] * (long)param_3[7] + (long)param_6[9] * (long)param_3[6] +
                (long)param_6[10] * (long)param_3[5] + (long)param_6[0xb] * (long)param_3[4] +
                (long)param_6[0xc] * (long)param_3[3] + (long)param_6[0xd] * (long)param_3[2] +
                (long)param_6[0xe] * (long)param_3[1] + (long)param_6[0xf] * (long)*param_3;
      }
      param_6[0x10] = (int)(lVar8 >> (param_5 & 0x3f)) + *param_1;
      param_2 = param_2 + -1;
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined1  [16] FUN_100600d84(double param_1,uint param_2)

{
  double dVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (0.0 < param_1) {
    dVar1 = (double)_log((0.2402265069591007 / (double)param_2) * param_1);
    dVar1 = (dVar1 * 0.5) / 0.6931471805599453;
    if (dVar1 < 0.0) {
      dVar1 = 0.0;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar1;
    return auVar3;
  }
  uVar2 = 0x4693b8b5b5056e17;
  if (0.0 <= param_1) {
    uVar2 = 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar2;
  return auVar4;
}




undefined1  [16] FUN_100600dec(double param_1,double param_2)

{
  double dVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (0.0 < param_1) {
    dVar1 = (double)_log(param_1 * param_2);
    dVar1 = (dVar1 * 0.5) / 0.6931471805599453;
    if (dVar1 < 0.0) {
      dVar1 = 0.0;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar1;
    return auVar3;
  }
  uVar2 = 0x4693b8b5b5056e17;
  if (0.0 <= param_1) {
    uVar2 = 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar2;
  return auVar4;
}




int FUN_100600e44(long param_1,int param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_2 == 0) {
    iVar3 = 1;
  }
  else {
    lVar4 = 0;
    iVar3 = 0;
    uVar1 = (ulong)param_3;
    dVar8 = 4294967295.0;
    uVar5 = param_4;
    do {
      param_3 = param_3 - 1;
      dVar6 = *(double *)(param_1 + lVar4 * 8);
      if (dVar6 <= 0.0) {
        dVar7 = 1e+32;
        if (0.0 <= dVar6) {
          dVar7 = 0.0;
        }
      }
      else {
        dVar6 = (double)_log((0.2402265069591007 / (double)uVar1) * dVar6);
        dVar7 = (dVar6 * 0.5) / 0.6931471805599453;
        if (dVar7 < 0.0) {
          dVar7 = 0.0;
        }
      }
      dVar6 = (double)uVar5 + (double)param_3 * dVar7;
      iVar2 = (int)lVar4;
      if (dVar8 <= dVar6) {
        dVar6 = dVar8;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      lVar4 = lVar4 + 1;
      uVar5 = uVar5 + param_4;
      dVar8 = dVar6;
    } while (param_2 != (int)lVar4);
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}




undefined1  [16] FUN_100600f48(float *param_1,void *param_2,int param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  ulong unaff_d8;
  undefined8 in_register_00005108;
  float afStack_54 [3];
  long local_48;
  
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar14;
  iVar12 = (int)param_4;
  uVar1 = iVar12 + 1;
  puVar4 = (uint *)((long)afStack_54 +
                   (4 - ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + 0xf &
                        0xfffffffffffffff0)));
  pfVar13 = (float *)((long)puVar4 -
                     ((-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2) +
                      0xf & 0xfffffffffffffff0));
  if (uVar1 != 0) {
    iVar6 = param_3 - iVar12;
    lVar10 = (long)iVar12;
    do {
      fVar15 = 0.0;
      pfVar5 = param_1;
      iVar8 = iVar6;
      if (lVar10 < param_3) {
        do {
          fVar15 = fVar15 + pfVar5[lVar10] * *pfVar5;
          iVar8 = iVar8 + -1;
          pfVar5 = pfVar5 + 1;
        } while (iVar8 != 0);
      }
      puVar4[lVar10] = (uint)fVar15;
      iVar6 = iVar6 + 1;
      iVar8 = (int)lVar10;
      lVar10 = lVar10 + -1;
    } while (iVar8 != 0);
    unaff_d8 = (ulong)*puVar4;
    in_register_00005108 = 0;
  }
  if (0 < iVar12) {
    fVar15 = (float)unaff_d8;
    pfVar5 = pfVar13 + -1;
    uVar7 = 0;
    do {
      fVar19 = (float)unaff_d8;
      iVar6 = (int)uVar7;
      if (fVar19 < fVar15 * 1e-09 + 1e-10) {
        _bzero(pfVar13 + iVar6,
               -(ulong)((uint)(iVar12 - iVar6) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar12 - iVar6) << 2);
        break;
      }
      uVar2 = uVar7 + 1;
      fVar17 = -(float)puVar4[uVar2];
      pfVar9 = pfVar13;
      uVar11 = uVar7;
      if ((long)uVar7 < 1) {
        fVar17 = fVar17 / fVar19;
        pfVar13[uVar7] = fVar17;
        iVar8 = 0;
      }
      else {
        do {
          fVar17 = fVar17 - *pfVar9 * (float)puVar4[uVar11];
          uVar11 = uVar11 - 1;
          pfVar9 = pfVar9 + 1;
        } while ((int)uVar11 != 0);
        fVar17 = fVar17 / fVar19;
        pfVar13[uVar7] = fVar17;
        iVar3 = iVar6;
        if (iVar6 < 0) {
          iVar3 = iVar6 + 1;
        }
        if ((long)uVar7 < 2) {
          iVar8 = 0;
        }
        else {
          lVar10 = 0;
          pfVar9 = pfVar5;
          do {
            fVar18 = pfVar13[lVar10];
            pfVar13[lVar10] = fVar18 + fVar17 * *pfVar9;
            *pfVar9 = fVar17 * fVar18 + *pfVar9;
            lVar10 = lVar10 + 1;
            pfVar9 = pfVar9 + -1;
          } while (lVar10 < iVar3 >> 1);
          iVar8 = 1;
          if (3 < iVar6) {
            iVar8 = iVar3 >> 1;
          }
        }
      }
      if ((uVar7 & 1) != 0) {
        pfVar13[iVar8] = pfVar13[iVar8] + fVar17 * pfVar13[iVar8];
      }
      unaff_d8 = (ulong)(uint)(fVar19 * (1.0 - fVar17 * fVar17));
      in_register_00005108 = 0;
      pfVar5 = pfVar5 + 1;
      uVar7 = uVar2;
    } while ((long)uVar2 < (long)iVar12);
    if (0 < iVar12) {
      fVar15 = 0.99;
      pfVar5 = pfVar13;
      do {
        *pfVar5 = fVar15 * *pfVar5;
        fVar15 = fVar15 * 0.99;
        uVar1 = (int)param_4 - 1;
        param_4 = (ulong)uVar1;
        pfVar5 = pfVar5 + 1;
      } while (uVar1 != 0);
      if (0 < iVar12) {
        _memcpy(param_2,pfVar13,(ulong)(iVar12 - 1) * 4 + 4);
      }
    }
  }
  if (lVar14 == local_48) {
    auVar16._8_8_ = in_register_00005108;
    auVar16._0_8_ = unaff_d8;
    return auVar16;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1006011b8(long param_1,void *param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float afStack_50 [2];
  long local_48;
  
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar10;
  pfVar9 = (float *)((long)afStack_50 -
                    ((-(ulong)((uint)(param_5 + param_3) >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uint)(param_5 + param_3) << 2) + 0xf & 0xfffffffffffffff0));
  if (param_2 == (void *)0x0) {
    if (0 < param_3) {
      _bzero(pfVar9,(ulong)(param_3 - 1) * 4 + 4);
    }
  }
  else if (0 < param_3) {
    _memcpy(pfVar9,param_2,(ulong)(param_3 - 1) * 4 + 4);
  }
  if (0 < param_5) {
    lVar2 = 0;
    iVar1 = param_3 + -1;
    pfVar3 = pfVar9;
    do {
      iVar1 = iVar1 + 1;
      fVar11 = 0.0;
      iVar7 = (int)lVar2;
      pfVar5 = pfVar3;
      iVar6 = param_3;
      iVar8 = iVar7;
      pfVar4 = (float *)(param_1 + (long)param_3 * 4);
      if (0 < param_3) {
        do {
          pfVar4 = pfVar4 + -1;
          fVar11 = fVar11 - *pfVar5 * *pfVar4;
          iVar6 = iVar6 + -1;
          pfVar5 = pfVar5 + 1;
          iVar8 = iVar1;
        } while (iVar6 != 0);
      }
      pfVar9[iVar8] = fVar11;
      *(float *)(param_4 + lVar2 * 4) = fVar11;
      lVar2 = lVar2 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar7 != param_5 + -1);
  }
  if (lVar10 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1006012d8(float param_1,float param_2,long param_3,long param_4,int param_5,int param_6,
                  undefined8 *param_7,int param_8)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar3 = param_8 - 1;
  if (0 < param_8) {
    uVar1 = (ulong)uVar3 + 1;
    uVar12 = uVar1 & 0x1fffffffe;
    if (uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      uVar14 = (ulong)uVar3 + 1 & 0xfffffffffffffffe;
      puVar8 = param_7;
      do {
        uVar6 = *puVar8;
        dVar4 = (double)_cos(SUB84((double)(float)((ulong)uVar6 >> 0x20),0));
        dVar5 = (double)_cos(SUB84((double)(float)uVar6,0));
        *puVar8 = CONCAT44((float)dVar4 + (float)dVar4,(float)dVar5 + (float)dVar5);
        uVar14 = uVar14 - 2;
        puVar8 = puVar8 + 1;
      } while (uVar14 != 0);
    }
    if (uVar1 != uVar12) {
      iVar11 = param_8 - (int)uVar12;
      pfVar13 = (float *)((long)param_7 + uVar12 * 4);
      do {
        dVar4 = (double)_cos(SUB84((double)*pfVar13,0));
        *pfVar13 = (float)dVar4 + (float)dVar4;
        iVar11 = iVar11 + -1;
        pfVar13 = pfVar13 + 1;
      } while (iVar11 != 0);
    }
  }
  if (0 < param_5) {
    iVar11 = 0;
    do {
      iVar2 = *(int *)(param_4 + (long)iVar11 * 4);
      dVar4 = (double)_cos(SUB84((double)((3.1415927 / (float)param_6) * (float)iVar2),0));
      fVar17 = (float)dVar4 + (float)dVar4;
      if (param_8 < 2) {
        fVar15 = 0.5;
        fVar16 = 0.5;
        iVar7 = 1;
      }
      else {
        lVar9 = 1;
        fVar15 = 0.5;
        fVar16 = 0.5;
        puVar8 = param_7;
        do {
          fVar15 = fVar15 * (fVar17 - (float)*puVar8);
          fVar16 = fVar16 * (fVar17 - (float)((ulong)*puVar8 >> 0x20));
          lVar9 = lVar9 + 2;
          puVar8 = puVar8 + 1;
          iVar7 = (param_8 - 2U & 0xfffffffe) + 3;
        } while (lVar9 < param_8);
      }
      if (iVar7 == param_8) {
        fVar15 = (fVar17 - *(float *)((long)param_7 + (long)(int)uVar3 * 4)) * fVar15;
        fVar18 = 4.0 - fVar17 * fVar17;
        fVar15 = fVar15 * fVar15;
      }
      else {
        fVar18 = 2.0 - fVar17;
        fVar15 = (fVar17 + 2.0) * fVar15 * fVar15;
      }
      dVar4 = (double)_exp(SUB84((double)((param_1 / SQRT(fVar15 + fVar18 * fVar16 * fVar16) -
                                          param_2) * 0.11512925),0));
      *(float *)(param_3 + (long)iVar11 * 4) = *(float *)(param_3 + (long)iVar11 * 4) * (float)dVar4
      ;
      iVar7 = iVar11 + 1;
      if (*(int *)(param_4 + (long)iVar7 * 4) == iVar2) {
        piVar10 = (int *)(param_4 + (long)(iVar11 + 2) * 4);
        do {
          *(float *)(param_3 + (long)iVar7 * 4) =
               (float)dVar4 * *(float *)(param_3 + (long)iVar7 * 4);
          iVar7 = iVar7 + 1;
          iVar11 = *piVar10;
          piVar10 = piVar10 + 1;
        } while (iVar11 == iVar2);
      }
      iVar11 = iVar7;
    } while (iVar11 < param_5);
  }
  return;
}




int * FUN_10060155c(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  piVar5 = (int *)FUN_1005a0434(param_1,1,0xc88);
  if (piVar5 == (int *)0x0) {
    return (int *)0x0;
  }
  lVar7 = *(long *)(param_2 + 0x20);
  _bzero(piVar5,0xc88);
  iVar1 = FUN_10055afe0(param_3,1);
  if (iVar1 < 0) goto LAB_100601780;
  if (iVar1 == 0) {
    *piVar5 = 1;
  }
  else {
    iVar1 = FUN_10055afe0(param_3,4);
    *piVar5 = iVar1 + 1;
    if (iVar1 < 0) goto LAB_100601780;
  }
  iVar1 = FUN_10055afe0(param_3,1);
  if (iVar1 < 0) goto LAB_100601780;
  if (iVar1 != 0) {
    iVar1 = FUN_10055afe0(param_3,8);
    piVar5[0x121] = iVar1 + 1;
    if (iVar1 < 0) goto LAB_100601780;
    lVar8 = 0;
    iVar1 = *(int *)(param_2 + 4);
    do {
      iVar4 = 0;
      if (iVar1 != 0) {
        uVar3 = iVar1 - 1;
        uVar6 = (ulong)uVar3;
        while (uVar3 != 0) {
          iVar4 = iVar4 + 1;
          uVar6 = uVar6 >> 1;
          uVar3 = (uint)uVar6;
        }
      }
      uVar2 = FUN_10055afe0(param_3,iVar4);
      iVar1 = 0;
      piVar5[lVar8 + 0x122] = uVar2;
      uVar3 = *(int *)(param_2 + 4) - 1;
      uVar6 = (ulong)uVar3;
      if (*(int *)(param_2 + 4) != 0 && uVar3 != 0) {
        do {
          iVar1 = iVar1 + 1;
          uVar6 = uVar6 >> 1;
        } while ((int)uVar6 != 0);
      }
      uVar3 = FUN_10055afe0(param_3,iVar1);
      piVar5[lVar8 + 0x222] = uVar3;
      if ((((uVar2 == uVar3) || ((int)(uVar3 | uVar2) < 0)) ||
          (iVar1 = *(int *)(param_2 + 4), iVar1 <= (int)uVar2)) || (iVar1 <= (int)uVar3))
      goto LAB_100601780;
      lVar8 = lVar8 + 1;
    } while (lVar8 < piVar5[0x121]);
  }
  iVar1 = FUN_10055afe0(param_3,2);
  if (iVar1 != 0) goto LAB_100601780;
  iVar1 = *piVar5;
  if (iVar1 < 2) {
LAB_10060170c:
    if (iVar1 < 1) {
      return piVar5;
    }
  }
  else if (0 < *(int *)(param_2 + 4)) {
    lVar8 = 0;
    do {
      iVar4 = FUN_10055afe0(param_3,4);
      piVar5[lVar8 + 1] = iVar4;
      if ((iVar4 < 0) || (iVar1 = *piVar5, iVar1 <= iVar4)) goto LAB_100601780;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_2 + 4));
    goto LAB_10060170c;
  }
  lVar8 = 0;
  while( true ) {
    FUN_10055afe0(param_3,8);
    iVar1 = FUN_10055afe0(param_3,8);
    piVar5[lVar8 + 0x101] = iVar1;
    if ((iVar1 < 0) || (*(int *)(lVar7 + 0x10) <= iVar1)) break;
    iVar1 = FUN_10055afe0(param_3,8);
    piVar5[lVar8 + 0x111] = iVar1;
    if ((iVar1 < 0) || (*(int *)(lVar7 + 0x14) <= iVar1)) break;
    lVar8 = lVar8 + 1;
    if (*piVar5 <= lVar8) {
      return piVar5;
    }
  }
LAB_100601780:
  _bzero(piVar5,0xc88);
  FUN_1005a04e8(param_1,piVar5);
  return (int *)0x0;
}




void FUN_1006017bc(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    _bzero(param_2,0xc88);
    FUN_1005a04e8(param_1,param_2);
    return;
  }
  return;
}




undefined8 FUN_100601800(undefined8 param_1,long *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  uint auStack_a0 [2];
  ulong local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  long local_78;
  int *local_70;
  long local_68;
  
  local_90 = param_3;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar18 = *(long *)param_2[10];
  lVar16 = *(long *)(lVar18 + 0x20);
  lVar14 = ((long *)param_2[10])[0xe];
  iVar7 = *(int *)(lVar16 + (long)*(int *)((long)param_2 + 0x2c) * 4);
  local_98 = (long)iVar7;
  *(int *)((long)param_2 + 0x34) = iVar7;
  iVar10 = *(int *)(lVar18 + 4);
  uVar8 = (long)iVar10 * 8 + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)auStack_a0 - uVar8;
  uVar9 = (long)iVar10 * 4 + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar13 - uVar9;
  lVar17 = lVar15 - uVar9;
  local_78 = lVar17 - uVar8;
  if (0 < iVar10) {
    lVar12 = 0;
    local_70 = param_3 + 0x101;
    local_80 = (int *)(((long)iVar7 & 0x3fffffffffffffffU) << 1);
    local_88 = param_3 + 1;
    do {
      lVar4 = (**(code **)(*(long *)(&DAT_1014a3460 +
                                    (long)*(int *)(lVar16 + (long)local_70[local_88[lVar12]] * 4 +
                                                  0x520) * 8) + 0x28))
                        (param_1,param_2,
                         *(undefined8 *)
                          (*(long *)(lVar14 + 0x20) + (long)local_70[local_88[lVar12]] * 8));
      *(long *)(local_78 + lVar12 * 8) = lVar4;
      *(uint *)(lVar17 + lVar12 * 4) = (uint)(lVar4 != 0);
      _bzero(*(void **)(*param_2 + lVar12 * 8),(size_t)local_80);
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(lVar18 + 4));
  }
  piVar2 = local_90;
  local_70 = (int *)lVar16;
  iVar10 = local_90[0x121];
  if (0 < iVar10) {
    lVar16 = 0;
    do {
      iVar7 = piVar2[lVar16 + 0x222];
      if ((*(int *)(lVar17 + (long)piVar2[lVar16 + 0x122] * 4) != 0) ||
         (*(int *)(lVar17 + (long)iVar7 * 4) != 0)) {
        *(undefined4 *)(lVar17 + (long)piVar2[lVar16 + 0x122] * 4) = 1;
        *(undefined4 *)(lVar17 + (long)iVar7 * 4) = 1;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar10);
  }
  if (0 < *piVar2) {
    lVar16 = 0;
    local_80 = piVar2 + 0x111;
    do {
      iVar10 = 0;
      iVar7 = *(int *)(lVar18 + 4);
      if (0 < iVar7) {
        lVar12 = 0;
        do {
          if (piVar2[lVar12 + 1] == (int)lVar16) {
            *(uint *)(lVar15 + (long)iVar10 * 4) = (uint)(*(int *)(lVar17 + lVar12 * 4) != 0);
            *(undefined8 *)(lVar13 + (long)iVar10 * 8) = *(undefined8 *)(*param_2 + lVar12 * 8);
            iVar10 = iVar10 + 1;
            iVar7 = *(int *)(lVar18 + 4);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar7);
      }
      (**(code **)((&PTR_DAT_1014a3470)
                   [*(int *)((long)local_70 + (long)local_80[lVar16] * 4 + 0x820)] + 0x38))
                (param_1,param_2,
                 *(undefined8 *)(*(long *)(lVar14 + 0x28) + (long)local_80[lVar16] * 8),lVar13,
                 lVar15);
      lVar16 = lVar16 + 1;
    } while (lVar16 < *piVar2);
    iVar10 = piVar2[0x121];
  }
  piVar3 = local_70;
  lVar13 = local_78;
  if (0 < iVar10) {
    lVar15 = *param_2;
    iVar5 = (int)local_98;
    iVar7 = iVar5;
    if (iVar5 < 0) {
      iVar7 = iVar5 + 1;
    }
    lVar16 = (long)iVar10;
    do {
      if (1 < iVar5) {
        lVar17 = 0;
        lVar12 = *(long *)(lVar15 + (long)piVar2[lVar16 + 0x121] * 8);
        lVar4 = *(long *)(lVar15 + (long)piVar2[lVar16 + 0x221] * 8);
        do {
          lVar11 = lVar17 * 4;
          fVar19 = *(float *)(lVar12 + lVar11);
          fVar20 = *(float *)(lVar4 + lVar11);
          if (fVar19 <= 0.0) {
            if (fVar20 <= 0.0) {
              *(float *)(lVar4 + lVar11) = fVar19;
              fVar19 = fVar19 - fVar20;
              goto LAB_100601b20;
            }
            *(float *)(lVar12 + lVar11) = fVar19;
            *(float *)(lVar4 + lVar11) = fVar19 + fVar20;
          }
          else if (fVar20 <= 0.0) {
            *(float *)(lVar4 + lVar11) = fVar19;
            fVar19 = fVar19 + fVar20;
LAB_100601b20:
            *(float *)(lVar12 + lVar11) = fVar19;
          }
          else {
            *(float *)(lVar12 + lVar11) = fVar19;
            *(float *)(lVar4 + lVar11) = fVar19 - fVar20;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < iVar7 >> 1);
      }
      bVar1 = 1 < lVar16;
      lVar16 = lVar16 + -1;
    } while (bVar1);
  }
  if (0 < *(int *)(lVar18 + 4)) {
    lVar15 = 0;
    do {
      (**(code **)(*(long *)(&DAT_1014a3460 +
                            (long)*(int *)((long)piVar3 +
                                           (long)piVar2[(long)piVar2[lVar15 + 1] + 0x101] * 4 +
                                          0x520) * 8) + 0x30))
                (param_2,*(undefined8 *)
                          (*(long *)(lVar14 + 0x20) +
                          (long)piVar2[(long)piVar2[lVar15 + 1] + 0x101] * 8),
                 *(undefined8 *)(lVar13 + lVar15 * 8),*(undefined8 *)(*param_2 + lVar15 * 8));
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(lVar18 + 4));
    if (0 < *(int *)(lVar18 + 4)) {
      lVar13 = 0;
      do {
        uVar6 = *(undefined8 *)(*param_2 + lVar13 * 8);
        FUN_100602fa8(**(undefined8 **)(lVar14 + (long)*(int *)((long)param_2 + 0x2c) * 8 + 8),uVar6
                      ,uVar6);
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(lVar18 + 4));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100601c20(long param_1)

{
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x67452301;
  *(undefined8 *)(param_1 + 0x44) = 0x98badcfeefcdab89;
  *(undefined4 *)(param_1 + 0x4c) = 0x10325476;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}




void FUN_100601c58(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  void *pvVar5;
  size_t sVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x50);
  puVar4 = param_2 + ((ulong)uVar1 & 0x3f);
  *puVar4 = 0x80;
  iVar3 = -(uVar1 & 0x3f);
  iVar2 = iVar3 + 0x37;
  if (iVar2 < 0) {
    _bzero(puVar4 + 1,(long)(iVar3 + 0x3f));
    FUN_100601d1c(param_2 + 0x40,param_2);
    sVar6 = 0x38;
    puVar4 = param_2;
  }
  else {
    sVar6 = (size_t)iVar2;
    puVar4 = puVar4 + 1;
  }
  _bzero(puVar4,sVar6);
  *(int *)(param_2 + 0x38) = (int)*(ulong *)(param_2 + 0x50) << 3;
  *(int *)(param_2 + 0x3c) = (int)(*(ulong *)(param_2 + 0x50) >> 0x1d);
  FUN_100601d1c(param_2 + 0x40,param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar7;
  _memset(param_2,0,0x68);
  pvVar5 = *(void **)(param_2 + 0x58);
  if (pvVar5 != (void *)0x0) {
    _free(pvVar5);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  return;
}




void FUN_100601d1c(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  uVar11 = param_1[1];
  uVar2 = param_1[2];
  uVar12 = param_1[3];
  iVar3 = *param_2;
  iVar13 = param_2[1];
  uVar1 = *param_1 + iVar3 + ((uVar12 ^ uVar2) & uVar11 ^ uVar12) + 0xd76aa478;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
  uVar12 = uVar12 + iVar13 + (uVar1 & (uVar2 ^ uVar11) ^ uVar2) + 0xe8c7b756;
  uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
  iVar4 = param_2[2];
  iVar14 = param_2[3];
  uVar2 = uVar2 + iVar4 + (uVar12 & (uVar1 ^ uVar11) ^ uVar11) + 0x242070db;
  uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar12;
  uVar11 = uVar11 + iVar14 + (uVar2 & (uVar12 ^ uVar1) ^ uVar1) + 0xc1bdceee;
  uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar2;
  iVar5 = param_2[4];
  iVar15 = param_2[5];
  uVar1 = iVar5 + uVar1 + (uVar11 & (uVar2 ^ uVar12) ^ uVar12) + 0xf57c0faf;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
  uVar12 = iVar15 + uVar12 + (uVar1 & (uVar11 ^ uVar2) ^ uVar2) + 0x4787c62a;
  uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
  iVar6 = param_2[6];
  iVar16 = param_2[7];
  uVar2 = iVar6 + uVar2 + (uVar12 & (uVar1 ^ uVar11) ^ uVar11) + 0xa8304613;
  uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar12;
  uVar11 = iVar16 + uVar11 + (uVar2 & (uVar12 ^ uVar1) ^ uVar1) + 0xfd469501;
  uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar2;
  iVar7 = param_2[8];
  iVar17 = param_2[9];
  uVar1 = iVar7 + uVar1 + (uVar11 & (uVar2 ^ uVar12) ^ uVar12) + 0x698098d8;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
  uVar12 = iVar17 + uVar12 + (uVar1 & (uVar11 ^ uVar2) ^ uVar2) + 0x8b44f7af;
  uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
  iVar8 = param_2[10];
  iVar18 = param_2[0xb];
  uVar2 = (iVar8 + uVar2 + (uVar12 & (uVar1 ^ uVar11) ^ uVar11)) - 0xa44f;
  uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar12;
  uVar11 = iVar18 + uVar11 + (uVar2 & (uVar12 ^ uVar1) ^ uVar1) + 0x895cd7be;
  uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar2;
  iVar9 = param_2[0xc];
  iVar19 = param_2[0xd];
  uVar1 = iVar9 + uVar1 + (uVar11 & (uVar2 ^ uVar12) ^ uVar12) + 0x6b901122;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
  uVar12 = iVar19 + uVar12 + (uVar1 & (uVar11 ^ uVar2) ^ uVar2) + 0xfd987193;
  uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
  iVar10 = param_2[0xe];
  iVar20 = param_2[0xf];
  uVar2 = iVar10 + uVar2 + (uVar12 & (uVar1 ^ uVar11) ^ uVar11) + 0xa679438e;
  uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar12;
  uVar11 = iVar20 + uVar11 + (uVar2 & (uVar12 ^ uVar1) ^ uVar1) + 0x49b40821;
  uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar2;
  uVar1 = iVar13 + uVar1 + ((uVar11 ^ uVar2) & uVar12 ^ uVar2) + 0xf61e2562;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
  uVar12 = iVar6 + uVar12 + ((uVar1 ^ uVar11) & uVar2 ^ uVar11) + 0xc040b340;
  uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
  uVar2 = iVar18 + uVar2 + ((uVar12 ^ uVar1) & uVar11 ^ uVar1) + 0x265e5a51;
  uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar12;
  uVar11 = iVar3 + uVar11 + ((uVar2 ^ uVar12) & uVar1 ^ uVar12) + 0xe9b6c7aa;
  uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar2;
  uVar1 = iVar15 + uVar1 + ((uVar11 ^ uVar2) & uVar12 ^ uVar2) + 0xd62f105d;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
  uVar12 = iVar8 + uVar12 + ((uVar1 ^ uVar11) & uVar2 ^ uVar11) + 0x2441453;
  uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
  uVar2 = iVar20 + uVar2 + ((uVar12 ^ uVar1) & uVar11 ^ uVar1) + 0xd8a1e681;
  uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar12;
  uVar11 = iVar5 + uVar11 + ((uVar2 ^ uVar12) & uVar1 ^ uVar12) + 0xe7d3fbc8;
  uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar2;
  uVar1 = iVar17 + uVar1 + ((uVar11 ^ uVar2) & uVar12 ^ uVar2) + 0x21e1cde6;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
  uVar12 = iVar10 + uVar12 + ((uVar1 ^ uVar11) & uVar2 ^ uVar11) + 0xc33707d6;
  uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
  uVar2 = iVar14 + uVar2 + ((uVar12 ^ uVar1) & uVar11 ^ uVar1) + 0xf4d50d87;
  uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar12;
  uVar11 = iVar7 + uVar11 + ((uVar2 ^ uVar12) & uVar1 ^ uVar12) + 0x455a14ed;
  uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar2;
  uVar1 = iVar19 + uVar1 + ((uVar11 ^ uVar2) & uVar12 ^ uVar2) + 0xa9e3e905;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
  uVar12 = iVar4 + uVar12 + ((uVar1 ^ uVar11) & uVar2 ^ uVar11) + 0xfcefa3f8;
  uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
  uVar2 = iVar16 + uVar2 + ((uVar12 ^ uVar1) & uVar11 ^ uVar1) + 0x676f02d9;
  uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar12;
  uVar11 = iVar9 + uVar11 + ((uVar2 ^ uVar12) & uVar1 ^ uVar12) + 0x8d2a4c8a;
  uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar2;
  uVar1 = (iVar15 + uVar1 + (uVar2 ^ uVar12 ^ uVar11)) - 0x5c6be;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
  uVar12 = iVar7 + uVar12 + (uVar11 ^ uVar2 ^ uVar1) + 0x8771f681;
  uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
  uVar2 = iVar18 + uVar2 + (uVar1 ^ uVar11 ^ uVar12) + 0x6d9d6122;
  uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar12;
  uVar11 = iVar10 + uVar11 + (uVar12 ^ uVar1 ^ uVar2) + 0xfde5380c;
  uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar2;
  uVar1 = iVar13 + uVar1 + (uVar2 ^ uVar12 ^ uVar11) + 0xa4beea44;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
  uVar12 = iVar5 + uVar12 + (uVar11 ^ uVar2 ^ uVar1) + 0x4bdecfa9;
  uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
  uVar2 = iVar16 + uVar2 + (uVar1 ^ uVar11 ^ uVar12) + 0xf6bb4b60;
  uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar12;
  uVar11 = iVar8 + uVar11 + (uVar12 ^ uVar1 ^ uVar2) + 0xbebfbc70;
  uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar2;
  uVar1 = iVar19 + uVar1 + (uVar2 ^ uVar12 ^ uVar11) + 0x289b7ec6;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
  uVar12 = iVar3 + uVar12 + (uVar11 ^ uVar2 ^ uVar1) + 0xeaa127fa;
  uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
  uVar2 = iVar14 + uVar2 + (uVar1 ^ uVar11 ^ uVar12) + 0xd4ef3085;
  uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar12;
  uVar11 = iVar6 + uVar11 + (uVar12 ^ uVar1 ^ uVar2) + 0x4881d05;
  uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar2;
  uVar1 = iVar17 + uVar1 + (uVar2 ^ uVar12 ^ uVar11) + 0xd9d4d039;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
  uVar12 = iVar9 + uVar12 + (uVar11 ^ uVar2 ^ uVar1) + 0xe6db99e5;
  uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
  uVar2 = iVar20 + uVar2 + (uVar1 ^ uVar11 ^ uVar12) + 0x1fa27cf8;
  uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar12;
  uVar11 = iVar4 + uVar11 + (uVar12 ^ uVar1 ^ uVar2) + 0xc4ac5665;
  uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar2;
  uVar1 = iVar3 + uVar1 + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar2) + 0xf4292244;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
  uVar12 = iVar16 + uVar12 + ((uVar1 | uVar2 ^ 0xffffffff) ^ uVar11) + 0x432aff97;
  uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
  uVar2 = iVar10 + uVar2 + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1) + 0xab9423a7;
  uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar12;
  uVar11 = iVar15 + uVar11 + ((uVar2 | uVar1 ^ 0xffffffff) ^ uVar12) + 0xfc93a039;
  uVar11 = (uVar11 >> 0xb | uVar11 * 0x200000) + uVar2;
  uVar1 = iVar9 + uVar1 + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar2) + 0x655b59c3;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
  uVar12 = iVar14 + uVar12 + ((uVar1 | uVar2 ^ 0xffffffff) ^ uVar11) + 0x8f0ccc92;
  uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
  uVar2 = (iVar8 + uVar2 + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1)) - 0x100b83;
  uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar12;
  uVar11 = iVar13 + uVar11 + ((uVar2 | uVar1 ^ 0xffffffff) ^ uVar12) + 0x85845dd1;
  uVar11 = (uVar11 >> 0xb | uVar11 * 0x200000) + uVar2;
  uVar1 = iVar7 + uVar1 + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar2) + 0x6fa87e4f;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
  uVar12 = iVar20 + uVar12 + ((uVar1 | uVar2 ^ 0xffffffff) ^ uVar11) + 0xfe2ce6e0;
  uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
  uVar2 = iVar6 + uVar2 + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1) + 0xa3014314;
  uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar12;
  uVar11 = iVar19 + uVar11 + ((uVar2 | uVar1 ^ 0xffffffff) ^ uVar12) + 0x4e0811a1;
  uVar11 = (uVar11 >> 0xb | uVar11 * 0x200000) + uVar2;
  uVar1 = iVar5 + uVar1 + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar2) + 0xf7537e82;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
  uVar12 = iVar18 + uVar12 + ((uVar1 | uVar2 ^ 0xffffffff) ^ uVar11) + 0xbd3af235;
  uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
  uVar2 = iVar4 + uVar2 + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1) + 0x2ad7d2bb;
  uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar12;
  uVar11 = iVar17 + uVar11 + ((uVar2 | uVar1 ^ 0xffffffff) ^ uVar12) + 0xeb86d391;
  *param_1 = uVar1 + *param_1;
  param_1[1] = uVar2 + param_1[1] + (uVar11 >> 0xb | uVar11 * 0x200000);
  param_1[2] = uVar2 + param_1[2];
  param_1[3] = uVar12 + param_1[3];
  return;
}




undefined8 FUN_100602700(undefined8 *param_1,long *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  size_t sVar8;
  int iVar9;
  undefined2 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  
  uVar18 = (ulong)param_5;
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar20 = 0xffffffffffffffff / uVar18;
  }
  if (uVar20 < param_3) {
    uVar4 = 0;
  }
  else {
    uVar14 = (ulong)param_4;
    uVar11 = uVar18 * param_3;
    uVar20 = 0;
    if (uVar14 != 0) {
      uVar20 = 0xffffffffffffffff / uVar14;
    }
    if (uVar11 < uVar20 || uVar11 - uVar20 == 0) {
      uVar18 = (ulong)param_4 * (ulong)param_3 * uVar18;
      puVar5 = (undefined2 *)param_1[0xb];
      if ((ulong)param_1[0xc] < uVar18) {
        puVar5 = _realloc(puVar5,uVar18);
        if (puVar5 == (undefined2 *)0x0) {
          _free((void *)param_1[0xb]);
          sVar8 = uVar18;
          if (uVar18 == 0) {
            sVar8 = 1;
          }
          pvVar6 = _malloc(sVar8);
          param_1[0xb] = pvVar6;
          if (pvVar6 == (void *)0x0) {
            return 0;
          }
        }
        param_1[0xb] = puVar5;
        param_1[0xc] = uVar18;
      }
      if ((param_3 == 2) && (param_5 == 2)) {
        _memcpy(puVar5,(void *)*param_2,uVar14 << 2);
        if (param_4 != 0) {
          puVar10 = puVar5 + 1;
          lVar12 = param_2[1];
          uVar20 = (ulong)(param_4 - 1) + 1;
          uVar14 = uVar20 & 0x1fffffffe;
          if (uVar14 == 0) {
            uVar14 = 0;
          }
          else {
            puVar10 = puVar10 + uVar14 * 2;
            uVar11 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffffe;
            puVar5 = puVar5 + 3;
            puVar13 = (undefined4 *)(lVar12 + 4);
            do {
              uVar2 = *puVar13;
              puVar5[-2] = (short)puVar13[-1];
              *puVar5 = (short)uVar2;
              uVar11 = uVar11 - 2;
              puVar5 = puVar5 + 4;
              puVar13 = puVar13 + 2;
            } while (uVar11 != 0);
          }
          if (uVar20 != uVar14) {
            iVar9 = param_4 - (int)uVar14;
            puVar13 = (undefined4 *)(lVar12 + uVar14 * 4);
            do {
              *puVar10 = (short)*puVar13;
              iVar9 = iVar9 + -1;
              puVar10 = puVar10 + 2;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
      }
      else if ((param_3 - 1 == 0) && (param_5 == 2)) {
        if (param_4 != 0) {
          lVar12 = *param_2;
          uVar20 = (ulong)(param_4 - 1) + 1;
          uVar14 = uVar20 & 0x1fffffff8;
          if (uVar14 == 0) {
            uVar14 = 0;
            puVar10 = puVar5;
          }
          else {
            puVar10 = puVar5 + uVar14;
            uVar11 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffff8;
            puVar19 = (undefined8 *)(puVar5 + 4);
            puVar7 = (undefined8 *)(lVar12 + 0x10);
            do {
              uVar21 = puVar7[1];
              uVar4 = *puVar7;
              puVar19[-1] = CONCAT26((short)((ulong)puVar7[-1] >> 0x20),
                                     CONCAT24((short)puVar7[-1],
                                              CONCAT22((short)((ulong)puVar7[-2] >> 0x20),
                                                       (short)puVar7[-2])));
              *puVar19 = CONCAT26((short)((ulong)uVar21 >> 0x20),
                                  CONCAT24((short)uVar21,
                                           CONCAT22((short)((ulong)uVar4 >> 0x20),(short)uVar4)));
              uVar11 = uVar11 - 8;
              puVar19 = puVar19 + 2;
              puVar7 = puVar7 + 4;
            } while (uVar11 != 0);
          }
          if (uVar20 != uVar14) {
            iVar9 = param_4 - (int)uVar14;
            puVar13 = (undefined4 *)(lVar12 + uVar14 * 4);
            do {
              *puVar10 = (short)*puVar13;
              iVar9 = iVar9 + -1;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar9 != 0);
          }
        }
      }
      else if (param_5 == 2) {
        if (param_3 == 2) {
          if (param_4 != 0) {
            lVar12 = 0;
            do {
              uVar2 = *(undefined4 *)(*param_2 + lVar12);
              puVar1 = (undefined1 *)((long)puVar5 + lVar12);
              *puVar1 = (char)uVar2;
              puVar1[1] = (char)((uint)uVar2 >> 8);
              uVar2 = *(undefined4 *)(param_2[1] + lVar12);
              puVar1[2] = (char)uVar2;
              puVar1[3] = (char)((uint)uVar2 >> 8);
              param_4 = param_4 - 1;
              lVar12 = lVar12 + 4;
            } while (param_4 != 0);
          }
        }
        else if (param_3 - 1 == 0) {
          if (param_4 != 0) {
            lVar12 = 0;
            do {
              uVar2 = *(undefined4 *)(*param_2 + lVar12 * 4);
              *(char *)puVar5 = (char)uVar2;
              *(char *)((long)puVar5 + 1) = (char)((uint)uVar2 >> 8);
              lVar12 = lVar12 + 1;
              puVar5 = puVar5 + 1;
            } while (param_4 != (uint)lVar12);
          }
        }
        else if (param_4 != 0) {
          lVar12 = 0;
          do {
            plVar15 = param_2;
            puVar10 = puVar5;
            uVar16 = param_3;
            if (param_3 != 0) {
              do {
                uVar2 = *(undefined4 *)(*plVar15 + lVar12 * 4);
                *(char *)puVar10 = (char)uVar2;
                *(char *)((long)puVar10 + 1) = (char)((uint)uVar2 >> 8);
                uVar16 = uVar16 - 1;
                puVar10 = puVar10 + 1;
                plVar15 = plVar15 + 1;
              } while (uVar16 != 0);
              puVar5 = puVar5 + (ulong)(param_3 - 1) + 1;
            }
            iVar9 = (int)lVar12;
            lVar12 = lVar12 + 1;
          } while (iVar9 != param_4 - 1);
        }
      }
      else if (param_5 == 1) {
        if (param_3 == 2) {
          if (param_4 != 0) {
            lVar12 = 0;
            do {
              *(char *)puVar5 = (char)*(undefined4 *)(*param_2 + lVar12 * 4);
              *(char *)((long)puVar5 + 1) = (char)*(undefined4 *)(param_2[1] + lVar12 * 4);
              lVar12 = lVar12 + 1;
              puVar5 = puVar5 + 1;
            } while (param_4 != (uint)lVar12);
          }
        }
        else if (param_3 - 1 == 0) {
          if (param_4 != 0) {
            lVar12 = 0;
            do {
              *(char *)((long)puVar5 + lVar12) = (char)*(undefined4 *)(*param_2 + lVar12 * 4);
              lVar12 = lVar12 + 1;
            } while (param_4 != (uint)lVar12);
          }
        }
        else if (param_4 != 0) {
          lVar12 = 0;
          do {
            plVar15 = param_2;
            puVar10 = puVar5;
            uVar16 = param_3;
            if (param_3 != 0) {
              do {
                *(char *)puVar10 = (char)*(undefined4 *)(*plVar15 + lVar12 * 4);
                uVar16 = uVar16 - 1;
                plVar15 = plVar15 + 1;
                puVar10 = (undefined2 *)((long)puVar10 + 1);
              } while (uVar16 != 0);
              puVar5 = (undefined2 *)((long)puVar5 + (ulong)(param_3 - 1) + 1);
            }
            iVar9 = (int)lVar12;
            lVar12 = lVar12 + 1;
          } while (iVar9 != param_4 - 1);
        }
      }
      else if (param_5 == 3) {
        if (param_3 == 2) {
          if (param_4 != 0) {
            lVar12 = 0;
            do {
              uVar2 = *(undefined4 *)(*param_2 + lVar12 * 4);
              *(char *)puVar5 = (char)uVar2;
              *(char *)((long)puVar5 + 1) = (char)((uint)uVar2 >> 8);
              *(char *)(puVar5 + 1) = (char)((uint)uVar2 >> 0x10);
              uVar2 = *(undefined4 *)(param_2[1] + lVar12 * 4);
              *(char *)((long)puVar5 + 3) = (char)uVar2;
              *(char *)(puVar5 + 2) = (char)((uint)uVar2 >> 8);
              *(char *)((long)puVar5 + 5) = (char)((uint)uVar2 >> 0x10);
              lVar12 = lVar12 + 1;
              puVar5 = puVar5 + 3;
            } while (param_4 != (uint)lVar12);
          }
        }
        else if (param_3 - 1 == 0) {
          if (param_4 != 0) {
            lVar12 = 0;
            do {
              uVar2 = *(undefined4 *)(*param_2 + lVar12 * 4);
              *(char *)puVar5 = (char)uVar2;
              *(char *)((long)puVar5 + 1) = (char)((uint)uVar2 >> 8);
              *(char *)(puVar5 + 1) = (char)((uint)uVar2 >> 0x10);
              lVar12 = lVar12 + 1;
              puVar5 = (undefined2 *)((long)puVar5 + 3);
            } while (param_4 != (uint)lVar12);
          }
        }
        else if (param_4 != 0) {
          lVar12 = 0;
          do {
            plVar15 = param_2;
            puVar10 = puVar5;
            uVar16 = param_3;
            if (param_3 != 0) {
              do {
                uVar2 = *(undefined4 *)(*plVar15 + lVar12 * 4);
                *(char *)puVar10 = (char)uVar2;
                *(char *)((long)puVar10 + 1) = (char)((uint)uVar2 >> 8);
                *(char *)(puVar10 + 1) = (char)((uint)uVar2 >> 0x10);
                uVar16 = uVar16 - 1;
                puVar10 = (undefined2 *)((long)puVar10 + 3);
                plVar15 = plVar15 + 1;
              } while (uVar16 != 0);
              puVar5 = (undefined2 *)((long)puVar5 + (ulong)(param_3 - 1) * 3 + 3);
            }
            iVar9 = (int)lVar12;
            lVar12 = lVar12 + 1;
          } while (iVar9 != param_4 - 1);
        }
      }
      else if (param_4 != 0) {
        lVar12 = 0;
        do {
          plVar15 = param_2;
          puVar10 = puVar5;
          uVar16 = param_3;
          if (param_3 != 0) {
            do {
              uVar2 = *(undefined4 *)(*plVar15 + lVar12 * 4);
              *(char *)puVar10 = (char)uVar2;
              *(char *)((long)puVar10 + 1) = (char)((uint)uVar2 >> 8);
              *(char *)(puVar10 + 1) = (char)((uint)uVar2 >> 0x10);
              *(char *)((long)puVar10 + 3) = (char)((uint)uVar2 >> 0x18);
              uVar16 = uVar16 - 1;
              puVar10 = puVar10 + 2;
              plVar15 = plVar15 + 1;
            } while (uVar16 != 0);
            puVar5 = puVar5 + (ulong)(param_3 - 1) * 2 + 2;
          }
          iVar9 = (int)lVar12;
          lVar12 = lVar12 + 1;
        } while (iVar9 != param_4 - 1);
      }
      puVar19 = (undefined8 *)param_1[0xb];
      uVar16 = *(uint *)(param_1 + 10);
      uVar17 = (uint)uVar18;
      *(uint *)(param_1 + 10) = uVar16 + uVar17;
      if (CARRY4(uVar16,uVar17)) {
        *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + 1;
      }
      uVar3 = 0x40 - (uVar16 & 0x3f);
      uVar20 = (ulong)uVar3;
      puVar7 = (undefined8 *)((long)param_1 + (0x40 - uVar20));
      if (uVar17 < uVar3) {
        sVar8 = uVar18 & 0xffffffff;
        param_1 = puVar7;
        puVar7 = puVar19;
      }
      else {
        _memcpy(puVar7,puVar19,uVar20);
        FUN_100601d1c(param_1 + 8,param_1);
        puVar7 = (undefined8 *)((long)puVar19 + uVar20);
        sVar8 = (size_t)(uVar17 - uVar3);
        if (0x3f < uVar17 - uVar3) {
          uVar17 = (uVar17 + (uVar16 & 0x3f)) - 0x80;
          uVar16 = uVar17 >> 6;
          do {
            uVar4 = puVar7[6];
            param_1[7] = puVar7[7];
            param_1[6] = uVar4;
            uVar4 = puVar7[4];
            param_1[5] = puVar7[5];
            param_1[4] = uVar4;
            uVar4 = puVar7[2];
            param_1[3] = puVar7[3];
            param_1[2] = uVar4;
            uVar4 = *puVar7;
            param_1[1] = puVar7[1];
            *param_1 = uVar4;
            FUN_100601d1c(param_1 + 8,param_1);
            uVar3 = (int)sVar8 - 0x40;
            sVar8 = (size_t)uVar3;
            puVar7 = puVar7 + 8;
          } while (0x3f < uVar3);
          sVar8 = (size_t)(uVar17 + uVar16 * -0x40);
          puVar7 = (undefined8 *)((long)puVar19 + uVar20 + 0x40 + (ulong)uVar16 * 0x40);
        }
      }
      _memcpy(param_1,puVar7,sVar8);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}




undefined8 FUN_100602cf0(undefined8 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double extraout_d0;
  float fVar16;
  double dVar17;
  
  uVar1 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  lVar3 = FUN_1005a03d8(param_1,uVar1 & 0xfffffffc);
  lVar4 = FUN_1005a03d8(param_1,(((int)uVar1 >> 2) + param_3) * 4);
  dVar14 = (double)_log((double)(int)param_3);
  uVar6 = (uint)(float)(int)((float)dVar14 / 0.6931472);
  param_2[1] = uVar6;
  uVar5 = 0xffffff75;
  if ((lVar3 != 0) && (lVar4 != 0)) {
    *param_2 = param_3;
    *(long *)(param_2 + 2) = lVar4;
    *(long *)(param_2 + 4) = lVar3;
    if (3 < (int)param_3) {
      iVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      dVar14 = 3.141592653589793;
      do {
        dVar15 = (double)___sincos_stret((double)iVar11 * (3.141592653589793 / (double)(int)param_3)
                                         ,uVar5);
        dVar17 = (double)(ulong)(uint)(float)dVar14;
        pfVar10 = (float *)(lVar4 + lVar12 * 4);
        *pfVar10 = (float)dVar14;
        pfVar10[1] = -(float)dVar15;
        uVar5 = ___sincos_stret((double)((int)lVar12 + 1) *
                                (3.141592653589793 / (double)(int)(param_3 << 1)));
        dVar14 = (double)(ulong)(uint)(float)dVar17;
        *(float *)(lVar4 + (long)((int)param_3 >> 1) * 4 + lVar12 * 4) = (float)dVar17;
        *(float *)(lVar4 + (long)(((int)param_3 >> 1) + 1 + (int)lVar12) * 4) = (float)extraout_d0;
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 2;
        iVar11 = iVar11 + 4;
      } while (lVar13 < (int)uVar1 >> 2);
      uVar1 = param_3 + 7;
      if (-1 < (int)param_3) {
        uVar1 = param_3;
      }
      if (7 < (int)param_3) {
        lVar13 = 0;
        iVar11 = 2;
        pfVar10 = (float *)(lVar4 + (long)(int)param_3 * 4 + 4);
        do {
          dVar15 = (double)___sincos_stret((double)iVar11 *
                                           (3.141592653589793 / (double)(int)param_3));
          fVar16 = (float)dVar14;
          dVar14 = (double)(ulong)(uint)(fVar16 * 0.5);
          pfVar10[-1] = fVar16 * 0.5;
          *pfVar10 = (float)dVar15 * -0.5;
          lVar13 = lVar13 + 1;
          iVar11 = iVar11 + 4;
          pfVar10 = pfVar10 + 2;
        } while (lVar13 < (int)uVar1 >> 3);
        if (7 < (int)param_3) {
          lVar4 = 0;
          uVar2 = 1 << (ulong)(uVar6 - 2 & 0x1f);
          do {
            uVar7 = 0;
            uVar8 = 0;
            uVar9 = uVar2;
            do {
              if ((uVar9 & (uint)lVar4) != 0) {
                uVar7 = uVar7 | 1 << (ulong)(uVar8 & 0x1f);
              }
              uVar8 = uVar8 + 1;
              uVar9 = (int)uVar2 >> (uVar8 & 0x1f);
            } while (uVar9 != 0);
            *(uint *)(lVar3 + lVar4 * 8) =
                 ((1 << (ulong)(uVar6 - 1 & 0x1f)) - 1U & (uVar7 ^ 0xffffffff)) - 1;
            *(uint *)(lVar3 + (lVar4 << 3 | 4U)) = uVar7;
            lVar4 = lVar4 + 1;
          } while (lVar4 < (int)uVar1 >> 3);
        }
      }
    }
    uVar5 = 0;
    param_2[6] = (uint)(4.0 / (float)(int)param_3);
  }
  return uVar5;
}




void FUN_100602f5c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    if (param_2[1] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[2] != 0) {
      FUN_1005a04e8(param_1);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}




void FUN_100602fa8(int *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar1 = *param_1 >> 1;
  iVar2 = *param_1 >> 2;
  lVar12 = (long)iVar1;
  pfVar8 = param_2 + (long)iVar1 + -7;
  lVar14 = (long)iVar2;
  pfVar13 = param_3 + lVar12 + lVar14;
  lVar5 = *(long *)(param_1 + 2);
  pfVar7 = (float *)(lVar5 + (long)iVar2 * 4 + 8);
  pfVar6 = pfVar13;
  do {
    pfVar6[-4] = -(pfVar8[2] * pfVar7[1]) - *pfVar8 * *pfVar7;
    pfVar6[-3] = *pfVar8 * pfVar7[1] - pfVar8[2] * *pfVar7;
    pfVar6[-2] = -(pfVar8[6] * pfVar7[-1]) - pfVar8[4] * pfVar7[-2];
    pfVar6[-1] = pfVar8[4] * pfVar7[-1] - pfVar8[6] * pfVar7[-2];
    pfVar8 = pfVar8 + -8;
    pfVar7 = pfVar7 + 4;
    pfVar6 = pfVar6 + -4;
  } while (param_2 <= pfVar8);
  pfVar8 = param_2 + lVar12 + -8;
  pfVar6 = (float *)(lVar5 + lVar14 * 4 + -8);
  pfVar7 = pfVar13;
  do {
    *pfVar7 = pfVar8[4] * pfVar6[1] + pfVar8[6] * *pfVar6;
    pfVar7[1] = pfVar8[4] * *pfVar6 - pfVar8[6] * pfVar6[1];
    pfVar7[2] = *pfVar8 * pfVar6[-1] + pfVar8[2] * pfVar6[-2];
    pfVar7[3] = *pfVar8 * pfVar6[-2] - pfVar8[2] * pfVar6[-1];
    pfVar8 = pfVar8 + -8;
    pfVar6 = pfVar6 + -4;
    pfVar7 = pfVar7 + 4;
  } while (param_2 <= pfVar8);
  FUN_10060341c(param_1,param_3 + lVar12,lVar12);
  iVar1 = *param_1 >> 1;
  pfVar7 = param_3 + iVar1;
  lVar5 = *(long *)(param_1 + 2);
  piVar10 = *(int **)(param_1 + 4);
  pfVar8 = (float *)(lVar5 + (long)*param_1 * 4);
  pfVar6 = param_3;
  do {
    fVar15 = param_3[(long)*piVar10 + (long)iVar1];
    fVar16 = (param_3 + (long)*piVar10 + (long)iVar1)[1];
    fVar17 = param_3[(long)piVar10[1] + (long)iVar1];
    fVar18 = (param_3 + (long)piVar10[1] + (long)iVar1)[1];
    fVar19 = fVar16 - fVar18;
    fVar20 = fVar15 + fVar17;
    fVar18 = (fVar16 + fVar18) * 0.5;
    fVar16 = (fVar15 - fVar17) * 0.5;
    fVar17 = fVar20 * *pfVar8 + fVar19 * pfVar8[1];
    fVar15 = fVar20 * pfVar8[1] - fVar19 * *pfVar8;
    *pfVar6 = fVar18 + fVar17;
    pfVar7[-2] = fVar18 - fVar17;
    pfVar6[1] = fVar16 + fVar15;
    pfVar7[-1] = fVar15 - fVar16;
    fVar15 = param_3[(long)piVar10[2] + (long)iVar1];
    fVar16 = (param_3 + (long)piVar10[2] + (long)iVar1)[1];
    fVar17 = param_3[(long)piVar10[3] + (long)iVar1];
    fVar18 = (param_3 + (long)piVar10[3] + (long)iVar1)[1];
    fVar19 = fVar16 - fVar18;
    fVar20 = fVar15 + fVar17;
    fVar18 = (fVar16 + fVar18) * 0.5;
    fVar16 = (fVar15 - fVar17) * 0.5;
    fVar17 = fVar20 * pfVar8[2] + fVar19 * pfVar8[3];
    fVar15 = fVar20 * pfVar8[3] - fVar19 * pfVar8[2];
    pfVar6[2] = fVar18 + fVar17;
    pfVar7[-4] = fVar18 - fVar17;
    pfVar6[3] = fVar16 + fVar15;
    pfVar7[-3] = fVar15 - fVar16;
    pfVar7 = pfVar7 + -4;
    pfVar6 = pfVar6 + 4;
    piVar10 = piVar10 + 4;
    pfVar8 = pfVar8 + 4;
  } while (pfVar6 < pfVar7);
  lVar9 = 0;
  lVar11 = 0;
  lVar3 = lVar12 * 4 + lVar14 * 4;
  pfVar7 = pfVar13;
  pfVar6 = param_3;
  do {
    pfVar8 = (float *)(lVar5 + lVar12 * 4);
    lVar4 = lVar11 + lVar3;
    *(float *)((long)param_3 + lVar4 + -4) = *pfVar6 * pfVar8[1] - pfVar6[1] * *pfVar8;
    *(float *)((long)param_3 + lVar9 + lVar3) = -(*pfVar6 * *pfVar8 + pfVar6[1] * pfVar8[1]);
    *(float *)((long)param_3 + lVar4 + -8) = pfVar6[2] * pfVar8[3] - pfVar6[3] * pfVar8[2];
    pfVar7[1] = -(pfVar6[2] * pfVar8[2] + pfVar6[3] * pfVar8[3]);
    *(float *)((long)param_3 + lVar4 + -0xc) = pfVar6[4] * pfVar8[5] - pfVar6[5] * pfVar8[4];
    pfVar7[2] = -(pfVar6[4] * pfVar8[4] + pfVar6[5] * pfVar8[5]);
    *(float *)((long)param_3 + lVar4 + -0x10) = pfVar6[6] * pfVar8[7] - pfVar6[7] * pfVar8[6];
    pfVar7[3] = -(pfVar6[6] * pfVar8[6] + pfVar6[7] * pfVar8[7]);
    pfVar7 = pfVar7 + 4;
    lVar5 = lVar5 + 0x20;
    lVar11 = lVar11 + -0x10;
    lVar9 = lVar9 + 0x10;
    pfVar6 = pfVar6 + 8;
  } while (pfVar6 < (float *)((long)param_3 + lVar11 + lVar3));
  pfVar7 = param_3 + lVar14;
  pfVar6 = param_3;
  pfVar8 = param_3;
  do {
    fVar15 = pfVar8[lVar12 + lVar14 + -1];
    pfVar8[lVar14 + -1] = fVar15;
    pfVar6[lVar14] = -fVar15;
    fVar15 = pfVar8[lVar12 + lVar14 + -2];
    pfVar8[lVar14 + -2] = fVar15;
    pfVar7[1] = -fVar15;
    fVar15 = pfVar8[lVar12 + lVar14 + -3];
    pfVar8[lVar14 + -3] = fVar15;
    pfVar7[2] = -fVar15;
    fVar15 = pfVar8[lVar12 + lVar14 + -4];
    pfVar8[lVar14 + -4] = fVar15;
    pfVar7[3] = -fVar15;
    pfVar7 = pfVar7 + 4;
    pfVar8 = pfVar8 + -4;
    pfVar6 = pfVar6 + 4;
  } while (pfVar7 < pfVar8 + lVar12 + lVar14);
  pfVar7 = param_3 + lVar12 + lVar14 + 2;
  do {
    pfVar6 = pfVar13 + -4;
    *pfVar6 = pfVar7[1];
    pfVar13[-3] = *pfVar7;
    pfVar13[-2] = pfVar7[-1];
    pfVar13[-1] = pfVar7[-2];
    pfVar7 = pfVar7 + 4;
    pfVar13 = pfVar6;
  } while (param_3 + lVar12 < pfVar6);
  return;
}




void FUN_10060341c(long param_1,float *param_2,int param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  pfVar9 = *(float **)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4);
  if (6 < iVar3) {
    pfVar8 = param_2 + ((param_3 >> 1) + -8);
    pfVar10 = param_2 + (long)param_3 + -4;
    pfVar11 = pfVar9 + 8;
    do {
      fVar17 = pfVar10[2] - pfVar8[6];
      fVar16 = pfVar10[3] - pfVar8[7];
      pfVar10[2] = pfVar10[2] + pfVar8[6];
      pfVar10[3] = pfVar10[3] + pfVar8[7];
      pfVar8[6] = fVar16 * pfVar11[-7] + fVar17 * pfVar11[-8];
      pfVar8[7] = fVar16 * pfVar11[-8] - fVar17 * pfVar11[-7];
      fVar17 = *pfVar10 - pfVar8[4];
      fVar16 = pfVar10[1] - pfVar8[5];
      *pfVar10 = *pfVar10 + pfVar8[4];
      pfVar10[1] = pfVar10[1] + pfVar8[5];
      pfVar8[4] = fVar16 * pfVar11[-3] + fVar17 * pfVar11[-4];
      pfVar8[5] = fVar16 * pfVar11[-4] - fVar17 * pfVar11[-3];
      fVar17 = pfVar10[-2] - pfVar8[2];
      fVar16 = pfVar10[-1] - pfVar8[3];
      pfVar10[-2] = pfVar10[-2] + pfVar8[2];
      pfVar10[-1] = pfVar10[-1] + pfVar8[3];
      pfVar8[2] = fVar16 * pfVar11[1] + fVar17 * *pfVar11;
      pfVar8[3] = fVar16 * *pfVar11 - fVar17 * pfVar11[1];
      fVar17 = pfVar10[-4] - *pfVar8;
      fVar16 = pfVar10[-3] - pfVar8[1];
      pfVar10[-4] = pfVar10[-4] + *pfVar8;
      pfVar10[-3] = pfVar10[-3] + pfVar8[1];
      *pfVar8 = fVar16 * pfVar11[5] + fVar17 * pfVar11[4];
      pfVar8[1] = fVar16 * pfVar11[4] - fVar17 * pfVar11[5];
      pfVar8 = pfVar8 + -8;
      pfVar10 = pfVar10 + -8;
      pfVar11 = pfVar11 + 0x10;
    } while (param_2 <= pfVar8);
  }
  if (1 < iVar3 + -6) {
    uVar12 = 1;
    do {
      if (uVar12 != 0x1f) {
        lVar13 = 0;
        uVar2 = param_3 >> (uVar12 & 0x1f);
        uVar4 = 4 << (ulong)(uVar12 & 0x1f);
        uVar14 = (ulong)uVar4;
        pfVar8 = param_2 + -4;
        do {
          pfVar8 = (float *)((long)pfVar8 +
                            (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
          pfVar11 = param_2 + lVar13 * (int)uVar2 + (long)(((int)uVar2 >> 1) + -8);
          pfVar10 = pfVar9;
          pfVar15 = pfVar8;
          do {
            fVar17 = pfVar15[2] - pfVar11[6];
            fVar16 = pfVar15[3] - pfVar11[7];
            pfVar15[2] = pfVar15[2] + pfVar11[6];
            pfVar15[3] = pfVar15[3] + pfVar11[7];
            pfVar11[6] = fVar16 * pfVar10[1] + fVar17 * *pfVar10;
            pfVar11[7] = fVar16 * *pfVar10 - fVar17 * pfVar10[1];
            fVar17 = *pfVar15 - pfVar11[4];
            fVar16 = pfVar15[1] - pfVar11[5];
            *pfVar15 = *pfVar15 + pfVar11[4];
            pfVar15[1] = pfVar15[1] + pfVar11[5];
            pfVar1 = (float *)((long)pfVar10 +
                              (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2));
            pfVar11[4] = fVar16 * pfVar1[1] + fVar17 * *pfVar1;
            pfVar11[5] = fVar16 * *pfVar1 - fVar17 * pfVar1[1];
            fVar17 = pfVar15[-2] - pfVar11[2];
            fVar16 = pfVar15[-1] - pfVar11[3];
            pfVar15[-2] = pfVar15[-2] + pfVar11[2];
            pfVar15[-1] = pfVar15[-1] + pfVar11[3];
            pfVar1 = (float *)((long)pfVar10 +
                              (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
            pfVar11[2] = fVar16 * pfVar1[1] + fVar17 * *pfVar1;
            pfVar11[3] = fVar16 * *pfVar1 - fVar17 * pfVar1[1];
            fVar17 = pfVar15[-4] - *pfVar11;
            fVar16 = pfVar15[-3] - pfVar11[1];
            pfVar15[-4] = pfVar15[-4] + *pfVar11;
            pfVar15[-3] = pfVar15[-3] + pfVar11[1];
            pfVar1 = pfVar10 + (long)(int)uVar4 * 3;
            *pfVar11 = fVar16 * pfVar1[1] + fVar17 * *pfVar1;
            pfVar11[1] = fVar16 * *pfVar1 - fVar17 * pfVar1[1];
            pfVar11 = pfVar11 + -8;
            pfVar15 = pfVar15 + -8;
            pfVar10 = (float *)((long)pfVar10 +
                               (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          } while (param_2 + lVar13 * (int)uVar2 <= pfVar11);
          lVar13 = lVar13 + 1;
        } while (lVar13 < 1 << (ulong)(uVar12 & 0x1f));
      }
      bVar7 = uVar12 != iVar3 - 7U;
      uVar12 = uVar12 + 1;
    } while (bVar7);
  }
  if (0 < param_3) {
    lVar13 = 0;
    param_2 = param_2 + 0x10;
    do {
      fVar22 = (float)*(undefined8 *)(param_2 + -2);
      fVar42 = (float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20);
      fVar17 = (float)*(undefined8 *)(param_2 + -4);
      fVar18 = (float)((ulong)*(undefined8 *)(param_2 + -4) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_2 + 0xe);
      fVar43 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
      fVar28 = (float)*(undefined8 *)(param_2 + 0xc);
      fVar16 = fVar28 - fVar17;
      fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
      fVar28 = fVar28 + fVar17;
      fVar29 = fVar27 + fVar18;
      fVar30 = fVar36 + fVar22;
      fVar31 = fVar43 + fVar42;
      fVar33 = (float)*(undefined8 *)(param_2 + -6);
      fVar41 = (float)((ulong)*(undefined8 *)(param_2 + -6) >> 0x20);
      fVar17 = (float)*(undefined8 *)(param_2 + -8);
      fVar45 = param_2[8] - fVar17;
      fVar47 = (float)((ulong)*(undefined8 *)(param_2 + -8) >> 0x20);
      auVar23._0_8_ = CONCAT44(param_2[9] + fVar47,param_2[8] + fVar17);
      auVar23._8_4_ = param_2[10] + fVar33;
      auVar23._12_4_ = param_2[0xb] + fVar41;
      fVar25 = (float)*(undefined8 *)(param_2 + 6);
      fVar27 = fVar27 - fVar18;
      fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
      fVar33 = param_2[10] - fVar33;
      fVar17 = (float)*(undefined8 *)(param_2 + 4);
      fVar35 = param_2[-0xc] - fVar17;
      fVar41 = param_2[0xb] - fVar41;
      fVar40 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      auVar34._0_8_ = CONCAT44(param_2[-0xb] + fVar40,param_2[-0xc] + fVar17);
      auVar34._8_4_ = param_2[-10] + fVar25;
      auVar34._12_4_ = param_2[-9] + fVar26;
      fVar47 = param_2[9] - fVar47;
      fVar19 = (float)*(undefined8 *)(param_2 + -0xe);
      fVar25 = fVar25 - param_2[-10];
      fVar38 = (float)*(undefined8 *)(param_2 + 2);
      fVar26 = param_2[-9] - fVar26;
      fVar20 = (float)((ulong)*(undefined8 *)(param_2 + -0xe) >> 0x20);
      fVar40 = param_2[-0xb] - fVar40;
      fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar32 = fVar19 - fVar38;
      fVar17 = (float)*(undefined8 *)param_2;
      fVar18 = (float)*(undefined8 *)(param_2 + -0x10);
      fVar48 = fVar18 - fVar17;
      fVar44 = fVar20 - fVar39;
      fVar37 = (float)((ulong)*(undefined8 *)(param_2 + -0x10) >> 0x20);
      fVar18 = fVar18 + fVar17;
      fVar46 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar17 = fVar37 + fVar46;
      fVar19 = fVar19 + fVar38;
      fVar20 = fVar20 + fVar39;
      fVar37 = fVar37 - fVar46;
      param_2[-2] = fVar36 - fVar22;
      *(ulong *)(param_2 + 0xc) = CONCAT44(fVar29,fVar28);
      auVar5._4_4_ = fVar29;
      auVar5._0_4_ = fVar28;
      auVar5._8_4_ = fVar30;
      auVar5._12_4_ = fVar31;
      auVar6._4_4_ = fVar29;
      auVar6._0_4_ = fVar28;
      auVar6._8_4_ = fVar30;
      auVar6._12_4_ = fVar31;
      auVar21 = NEON_ext(auVar5,auVar6,8,1);
      param_2[-1] = fVar43 - fVar42;
      *(undefined8 *)(param_2 + 8) = auVar23._0_8_;
      auVar24 = NEON_ext(auVar23,auVar23,8,1);
      *(long *)(param_2 + 0xe) = auVar21._0_8_;
      *(undefined8 *)(param_2 + 4) = auVar34._0_8_;
      auVar21 = NEON_ext(auVar34,auVar34,8,1);
      *(long *)(param_2 + 10) = auVar24._0_8_;
      *(ulong *)param_2 = CONCAT44(fVar17,fVar18);
      *(long *)(param_2 + 6) = auVar21._0_8_;
      auVar21._4_4_ = fVar17;
      auVar21._0_4_ = fVar18;
      auVar21._8_4_ = fVar19;
      auVar21._12_4_ = fVar20;
      auVar24._4_4_ = fVar17;
      auVar24._0_4_ = fVar18;
      auVar24._8_4_ = fVar19;
      auVar24._12_4_ = fVar20;
      auVar21 = NEON_ext(auVar21,auVar24,8,1);
      *(long *)(param_2 + 2) = auVar21._0_8_;
      param_2[-10] = fVar26;
      param_2[-9] = fVar25;
      fVar29 = fVar45 * 0.38268343 - fVar47 * 0.9238795;
      fVar42 = fVar45 * 0.9238795 + fVar47 * 0.38268343;
      fVar22 = fVar35 * 0.38268343 + fVar40 * 0.9238795;
      fVar36 = fVar40 * 0.38268343 - fVar35 * 0.9238795;
      fVar31 = (fVar32 + fVar44) * 0.70710677;
      fVar30 = (fVar44 - fVar32) * 0.70710677;
      fVar32 = fVar48 * 0.9238795 + fVar37 * 0.38268343;
      fVar20 = fVar37 * 0.9238795 - fVar48 * 0.38268343;
      fVar28 = param_2[-2] - fVar26;
      fVar37 = param_2[-1] - fVar25;
      fVar26 = fVar26 + param_2[-2];
      fVar25 = fVar25 + param_2[-1];
      param_2[-4] = fVar16 * 0.9238795 - fVar27 * 0.38268343;
      param_2[-3] = fVar16 * 0.38268343 + fVar27 * 0.9238795;
      param_2[-6] = (fVar33 - fVar41) * 0.70710677;
      param_2[-5] = (fVar33 + fVar41) * 0.70710677;
      param_2[-8] = fVar29;
      param_2[-7] = fVar42;
      fVar16 = fVar20 - fVar42;
      fVar19 = fVar32 - fVar29;
      fVar29 = fVar29 + fVar32;
      fVar42 = fVar42 + fVar20;
      fVar20 = fVar30 - param_2[-5];
      fVar35 = param_2[-6] - fVar31;
      fVar31 = fVar31 + param_2[-6];
      fVar30 = fVar30 + param_2[-5];
      fVar27 = param_2[-4] - fVar22;
      fVar32 = param_2[-3] - fVar36;
      fVar22 = fVar22 + param_2[-4];
      fVar36 = fVar36 + param_2[-3];
      fVar41 = (fVar16 + fVar19) * 0.70710677;
      fVar16 = (fVar16 - fVar19) * 0.70710677;
      fVar47 = fVar20 + fVar28;
      fVar28 = fVar28 - fVar20;
      fVar43 = fVar37 - fVar35;
      fVar35 = fVar35 + fVar37;
      fVar37 = fVar31 + fVar26;
      fVar26 = fVar26 - fVar31;
      fVar31 = fVar29 + fVar22;
      fVar22 = fVar22 - fVar29;
      fVar19 = fVar36 - fVar42;
      fVar46 = fVar25 - fVar30;
      fVar42 = fVar42 + fVar36;
      fVar33 = (fVar27 - fVar32) * 0.70710677;
      fVar29 = (fVar27 + fVar32) * 0.70710677;
      fVar20 = fVar41 + fVar33;
      fVar33 = fVar33 - fVar41;
      fVar27 = fVar29 - fVar16;
      fVar16 = fVar16 + fVar29;
      param_2[-2] = fVar31 + fVar37;
      param_2[-4] = fVar37 - fVar31;
      param_2[-8] = fVar19 + fVar26;
      param_2[-6] = fVar26 - fVar19;
      fVar30 = fVar30 + fVar25;
      param_2[-10] = fVar47 + fVar20;
      param_2[-0xc] = fVar47 - fVar20;
      param_2[-0x10] = fVar28 + fVar27;
      param_2[-0xe] = fVar28 - fVar27;
      param_2[-0xd] = fVar33 + fVar43;
      param_2[-0xf] = fVar43 - fVar33;
      param_2[-9] = fVar16 + fVar35;
      param_2[-0xb] = fVar35 - fVar16;
      param_2[-5] = fVar22 + fVar46;
      param_2[-7] = fVar46 - fVar22;
      param_2[-1] = fVar42 + fVar30;
      param_2[-3] = fVar30 - fVar42;
      fVar16 = fVar17 - param_2[9];
      fVar19 = fVar18 - param_2[8];
      fVar18 = fVar18 + param_2[8];
      fVar17 = fVar17 + param_2[9];
      fVar20 = (fVar16 + fVar19) * 0.70710677;
      fVar29 = (fVar16 - fVar19) * 0.70710677;
      fVar26 = param_2[3] - param_2[0xb];
      fVar42 = param_2[10] - param_2[2];
      fVar25 = param_2[10] + param_2[2];
      fVar19 = param_2[3] + param_2[0xb];
      fVar22 = param_2[0xc] - param_2[4];
      fVar27 = param_2[0xd] - param_2[5];
      fVar16 = param_2[0xc] + param_2[4];
      fVar30 = param_2[0xd] + param_2[5];
      fVar28 = (fVar22 - fVar27) * 0.70710677;
      fVar31 = (fVar22 + fVar27) * 0.70710677;
      fVar27 = param_2[0xe] - param_2[6];
      fVar33 = param_2[0xf] - param_2[7];
      fVar22 = param_2[0xe] + param_2[6];
      fVar32 = param_2[0xf] + param_2[7];
      fVar47 = fVar26 + fVar27;
      fVar27 = fVar27 - fVar26;
      fVar26 = fVar20 + fVar28;
      fVar28 = fVar28 - fVar20;
      param_2[6] = fVar47 + fVar26;
      param_2[4] = fVar47 - fVar26;
      fVar20 = fVar31 - fVar29;
      fVar26 = fVar33 - fVar42;
      *param_2 = fVar27 + fVar20;
      param_2[2] = fVar27 - fVar20;
      fVar29 = fVar29 + fVar31;
      fVar42 = fVar42 + fVar33;
      param_2[3] = fVar28 + fVar26;
      param_2[1] = fVar26 - fVar28;
      param_2[7] = fVar29 + fVar42;
      param_2[5] = fVar42 - fVar29;
      fVar20 = fVar25 + fVar22;
      fVar22 = fVar22 - fVar25;
      fVar28 = fVar18 + fVar16;
      fVar16 = fVar16 - fVar18;
      param_2[0xe] = fVar28 + fVar20;
      param_2[0xc] = fVar20 - fVar28;
      fVar18 = fVar30 - fVar17;
      param_2[8] = fVar18 + fVar22;
      param_2[10] = fVar22 - fVar18;
      fVar18 = fVar32 - fVar19;
      param_2[0xb] = fVar16 + fVar18;
      param_2[9] = fVar18 - fVar16;
      fVar17 = fVar17 + fVar30;
      fVar19 = fVar19 + fVar32;
      param_2[0xf] = fVar17 + fVar19;
      param_2[0xd] = fVar19 - fVar17;
      lVar13 = lVar13 + 0x20;
      param_2 = param_2 + 0x20;
    } while (lVar13 < param_3);
  }
  return;
}




void FUN_100603bc4(int *param_1,long param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float afStack_50 [2];
  long local_48;
  
  lVar21 = *(long *)PTR____stack_chk_guard_101444218;
  iVar4 = *param_1;
  uVar2 = iVar4 >> 1;
  iVar22 = iVar4 >> 2;
  iVar3 = iVar4 >> 3;
  pfVar23 = (float *)((long)afStack_50 - ((long)iVar4 * 4 + 0xfU & 0xfffffffffffffff0));
  lVar20 = (long)(int)uVar2;
  uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  iVar1 = uVar2 + iVar22;
  lVar12 = *(long *)(param_1 + 2);
  local_48 = lVar21;
  if (iVar3 < 1) {
    uVar16 = 0;
    lVar18 = (long)iVar1;
    lVar15 = lVar20;
    uVar6 = uVar10;
  }
  else {
    lVar14 = 0;
    uVar16 = iVar3 - 1U >> 1;
    lVar15 = lVar20 + -2 + (ulong)uVar16 * -2;
    lVar18 = (long)iVar1 + -4 + (ulong)uVar16 * -4;
    pfVar11 = (float *)(param_2 + (long)iVar1 * 4 + 4);
    pfVar8 = (float *)(param_2 + (long)(int)(uVar2 + iVar22) * 4 + -8);
    pfVar7 = (float *)(lVar20 * 4 + lVar12 + -4);
    pfVar9 = pfVar23 + lVar20 + 1;
    do {
      fVar24 = *pfVar8;
      fVar25 = *pfVar11;
      fVar26 = pfVar8[-2];
      fVar27 = pfVar11[2];
      pfVar9[-1] = (fVar26 + fVar27) * *pfVar7 + (fVar24 + fVar25) * pfVar7[-1];
      lVar14 = lVar14 + 2;
      *pfVar9 = (fVar26 + fVar27) * pfVar7[-1] - (fVar24 + fVar25) * *pfVar7;
      pfVar8 = pfVar8 + -4;
      pfVar11 = pfVar11 + 4;
      pfVar7 = pfVar7 + -2;
      pfVar9 = pfVar9 + 2;
    } while (lVar14 < iVar3);
    uVar16 = uVar16 * 2 + 2;
    uVar6 = lVar15 * 4;
  }
  lVar14 = lVar12 + uVar6;
  pfVar11 = (float *)(param_2 + 4);
  if ((int)uVar16 < (int)(uVar2 - iVar3)) {
    lVar19 = (long)(int)uVar16;
    uVar5 = ((uVar2 - 1) - uVar16) - iVar3 >> 1;
    lVar17 = (ulong)uVar16 << 0x20;
    pfVar9 = (float *)(param_2 + lVar18 * 4 + -8);
    pfVar7 = (float *)(lVar14 + -4);
    do {
      fVar24 = *pfVar9;
      fVar25 = *pfVar11;
      fVar26 = pfVar9[-2];
      fVar27 = pfVar11[2];
      pfVar23[lVar20 + lVar19] = (fVar26 - fVar27) * *pfVar7 + (fVar24 - fVar25) * pfVar7[-1];
      pfVar23[(lVar17 >> 0x20 | 1U) + lVar20] =
           (fVar26 - fVar27) * pfVar7[-1] - (fVar24 - fVar25) * *pfVar7;
      lVar19 = lVar19 + 2;
      lVar17 = lVar17 + 0x200000000;
      pfVar9 = pfVar9 + -4;
      pfVar11 = pfVar11 + 4;
      pfVar7 = pfVar7 + -2;
    } while (lVar19 < (int)(uVar2 - iVar3));
    uVar16 = uVar5 * 2 + uVar16 + 2;
    pfVar11 = (float *)(param_2 + ((ulong)uVar5 * 4 + 5) * 4);
    lVar14 = lVar12 + (lVar15 + (ulong)uVar5 * -2 + -2) * 4;
  }
  if ((int)uVar16 < (int)uVar2) {
    lVar12 = (long)(int)uVar16;
    lVar18 = (ulong)uVar16 << 0x20;
    pfVar9 = (float *)(param_2 + (long)iVar4 * 4 + -8);
    pfVar7 = (float *)(lVar14 + -4);
    do {
      fVar24 = *pfVar9;
      fVar25 = pfVar9[-2];
      fVar26 = *pfVar11;
      fVar27 = pfVar11[2];
      pfVar23[lVar20 + lVar12] = (-fVar25 - fVar27) * *pfVar7 + (-fVar24 - fVar26) * pfVar7[-1];
      pfVar23[(lVar18 >> 0x20 | 1U) + lVar20] =
           (-fVar25 - fVar27) * pfVar7[-1] - (-fVar24 - fVar26) * *pfVar7;
      lVar12 = lVar12 + 2;
      lVar18 = lVar18 + 0x200000000;
      pfVar9 = pfVar9 + -4;
      pfVar11 = pfVar11 + 4;
      pfVar7 = pfVar7 + -2;
    } while (lVar12 < lVar20);
  }
  FUN_10060341c(param_1,(long)pfVar23 + uVar10,lVar20);
  iVar1 = *param_1 >> 1;
  pfVar11 = pfVar23 + iVar1;
  lVar12 = *(long *)(param_1 + 2);
  piVar13 = *(int **)(param_1 + 4);
  pfVar9 = (float *)(lVar12 + (long)*param_1 * 4);
  pfVar7 = pfVar23;
  do {
    fVar24 = pfVar23[(long)*piVar13 + (long)iVar1];
    fVar25 = (pfVar23 + (long)*piVar13 + (long)iVar1)[1];
    fVar27 = pfVar23[(long)piVar13[1] + (long)iVar1];
    fVar26 = (pfVar23 + (long)piVar13[1] + (long)iVar1)[1];
    fVar28 = fVar25 - fVar26;
    fVar29 = fVar24 + fVar27;
    fVar26 = (fVar25 + fVar26) * 0.5;
    fVar25 = (fVar24 - fVar27) * 0.5;
    fVar27 = fVar29 * *pfVar9 + fVar28 * pfVar9[1];
    fVar24 = fVar29 * pfVar9[1] - fVar28 * *pfVar9;
    *pfVar7 = fVar26 + fVar27;
    pfVar11[-2] = fVar26 - fVar27;
    pfVar7[1] = fVar25 + fVar24;
    pfVar11[-1] = fVar24 - fVar25;
    fVar24 = pfVar23[(long)piVar13[2] + (long)iVar1];
    fVar25 = (pfVar23 + (long)piVar13[2] + (long)iVar1)[1];
    fVar27 = pfVar23[(long)piVar13[3] + (long)iVar1];
    fVar26 = (pfVar23 + (long)piVar13[3] + (long)iVar1)[1];
    fVar28 = fVar25 - fVar26;
    fVar29 = fVar24 + fVar27;
    fVar26 = (fVar25 + fVar26) * 0.5;
    fVar25 = (fVar24 - fVar27) * 0.5;
    fVar27 = fVar29 * pfVar9[2] + fVar28 * pfVar9[3];
    fVar24 = fVar29 * pfVar9[3] - fVar28 * pfVar9[2];
    pfVar7[2] = fVar26 + fVar27;
    pfVar11[-4] = fVar26 - fVar27;
    pfVar7[3] = fVar25 + fVar24;
    pfVar11[-3] = fVar24 - fVar25;
    pfVar11 = pfVar11 + -4;
    pfVar7 = pfVar7 + 4;
    piVar13 = piVar13 + 4;
    pfVar9 = pfVar9 + 4;
  } while (pfVar7 < pfVar11);
  if (0 < iVar22) {
    pfVar11 = (float *)(lVar12 + lVar20 * 4);
    pfVar7 = param_3 + lVar20;
    do {
      pfVar7 = pfVar7 + -1;
      *param_3 = (float)param_1[6] * (*pfVar23 * *pfVar11 + pfVar23[1] * pfVar11[1]);
      *pfVar7 = (float)param_1[6] * (*pfVar23 * pfVar11[1] - pfVar23[1] * *pfVar11);
      iVar22 = iVar22 + -1;
      pfVar23 = pfVar23 + 2;
      pfVar11 = pfVar11 + 2;
      param_3 = param_3 + 1;
    } while (iVar22 != 0);
  }
  if (lVar21 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100604020(size_t param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = _malloc(param_1);
  *param_2 = pvVar1;
  return;
}




undefined8 FUN_10060404c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = _malloc((ulong)(param_1 == 0) | (ulong)param_1 << 2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((void *)*param_2 != (void *)0x0) {
      _free((void *)*param_2);
    }
    *param_2 = pvVar1;
    *param_3 = pvVar1;
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_1006040b0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = _malloc((ulong)(param_1 == 0) | (ulong)param_1 << 2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((void *)*param_2 != (void *)0x0) {
      _free((void *)*param_2);
    }
    *param_2 = pvVar1;
    *param_3 = pvVar1;
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_100604114(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = _malloc((ulong)(param_1 == 0) | (ulong)param_1 << 3);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((void *)*param_2 != (void *)0x0) {
      _free((void *)*param_2);
    }
    *param_2 = pvVar1;
    *param_3 = pvVar1;
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_100604178(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = _malloc((ulong)(param_1 == 0) | (ulong)param_1 << 2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((void *)*param_2 != (void *)0x0) {
      _free((void *)*param_2);
    }
    *param_2 = pvVar1;
    *param_3 = pvVar1;
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_1006041dc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = _malloc((ulong)(param_1 == 0) | (ulong)param_1 << 2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((void *)*param_2 != (void *)0x0) {
      _free((void *)*param_2);
    }
    *param_2 = pvVar1;
    *param_3 = pvVar1;
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_100604240(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    _bzero(param_2,0x714);
    FUN_1005a04e8(param_1,param_2);
    return;
  }
  return;
}




void FUN_100604284(undefined8 param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != (void *)0x0) {
    iVar1 = *(int *)((long)param_2 + 8);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(long *)(*(long *)((long)param_2 + 0x20) + lVar2 * 8) != 0) {
          FUN_1005a04e8(param_1);
          iVar1 = *(int *)((long)param_2 + 8);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    FUN_1005a04e8(param_1,*(undefined8 *)((long)param_2 + 0x20));
    if (0 < *(int *)((long)param_2 + 0x28)) {
      lVar2 = 0;
      do {
        FUN_1005a04e8(param_1,*(undefined8 *)(*(long *)((long)param_2 + 0x30) + lVar2 * 8));
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)((long)param_2 + 0x28));
    }
    FUN_1005a04e8(param_1,*(undefined8 *)((long)param_2 + 0x30));
    _memset(param_2,0,0x48);
    FUN_1005a04e8(param_1,param_2);
    return;
  }
  return;
}




undefined4 * FUN_100604354(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = (undefined4 *)FUN_1005a0434(param_1,1,0x714);
  if (puVar6 != (undefined4 *)0x0) {
    lVar8 = *(long *)(param_2 + 0x20);
    uVar2 = FUN_10055afe0(param_3,0x18);
    *puVar6 = uVar2;
    uVar2 = FUN_10055afe0(param_3,0x18);
    puVar6[1] = uVar2;
    iVar3 = FUN_10055afe0(param_3,0x18);
    puVar6[2] = iVar3 + 1;
    iVar3 = FUN_10055afe0(param_3,6);
    puVar6[3] = iVar3 + 1;
    iVar3 = FUN_10055afe0(param_3,8);
    puVar6[4] = iVar3;
    if (-1 < iVar3) {
      if ((int)puVar6[3] < 1) {
        bVar1 = false;
        iVar3 = 0;
      }
      else {
        lVar9 = 0;
        iVar3 = 0;
        do {
          uVar4 = FUN_10055afe0(param_3,3);
          iVar5 = FUN_10055afe0(param_3,1);
          if (iVar5 < 0) goto LAB_100604548;
          if (iVar5 != 0) {
            iVar5 = FUN_10055afe0(param_3,5);
            if (iVar5 < 0) goto LAB_100604548;
            uVar4 = uVar4 | iVar5 << 3;
          }
          iVar5 = 0;
          puVar6[lVar9 + 5] = uVar4;
          for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
            iVar5 = (uVar4 & 1) + iVar5;
          }
          iVar3 = iVar5 + iVar3;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)puVar6[3]);
        bVar1 = 0 < iVar3;
        if (iVar3 < 1) {
          bVar1 = false;
        }
        else {
          lVar9 = 0;
          do {
            iVar5 = FUN_10055afe0(param_3,8);
            if (iVar5 < 0) goto LAB_100604548;
            puVar6[lVar9 + 0x45] = iVar5;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar3);
        }
      }
      if ((int)puVar6[4] < *(int *)(lVar8 + 0x18)) {
        if (bVar1) {
          lVar9 = 0;
          do {
            if ((*(int *)(lVar8 + 0x18) <= (int)puVar6[lVar9 + 0x45]) ||
               (*(int *)(*(long *)(lVar8 + (long)(int)puVar6[lVar9 + 0x45] * 8 + 0xb20) + 0x10) == 0
               )) goto LAB_100604548;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar3);
        }
        piVar7 = *(int **)(lVar8 + (long)(int)puVar6[4] * 8 + 0xb20);
        iVar3 = *piVar7;
        if (iVar3 < 1) {
          return puVar6;
        }
        iVar3 = iVar3 + 1;
        iVar5 = 1;
        while (iVar5 = puVar6[3] * iVar5, iVar5 <= piVar7[1]) {
          iVar3 = iVar3 + -1;
          if (iVar3 < 2) {
            return puVar6;
          }
        }
      }
    }
LAB_100604548:
    _bzero(puVar6,0x714);
    FUN_1005a04e8(param_1,puVar6);
  }
  return (undefined4 *)0x0;
}




long * FUN_100604584(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar23 [16];
  
  plVar5 = (long *)FUN_1005a0434(param_1,1,0x48);
  if (plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar17 = *(long *)(*param_2 + 0x20);
  *plVar5 = param_3;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(plVar5 + 1) = uVar2;
  lVar7 = *(long *)(lVar17 + 0x1320);
  plVar5[2] = lVar7;
  lVar10 = (long)*(int *)(param_3 + 0x10) * 0x48;
  plVar5[3] = lVar7 + lVar10;
  uVar3 = *(uint *)(lVar7 + lVar10);
  lVar7 = FUN_1005a0434(param_1,uVar2,8);
  plVar5[4] = lVar7;
  if (lVar7 == 0) {
    return (long *)0x0;
  }
  iVar13 = (int)plVar5[1];
  if (iVar13 < 1) {
    iVar15 = 0;
  }
  else {
    lVar7 = 0;
    iVar15 = 0;
    iVar18 = 0;
    do {
      uVar9 = *(uint *)(param_3 + 0x14 + lVar7 * 4);
      if (uVar9 != 0) {
        iVar22 = -1;
        do {
          iVar19 = iVar22;
          uVar9 = uVar9 >> 1;
          iVar22 = iVar19 + 1;
        } while (uVar9 != 0);
        iVar19 = iVar19 + 2;
        if (iVar19 != 0) {
          iVar24 = iVar19;
          if (iVar19 <= iVar15) {
            iVar24 = iVar15;
          }
          uVar6 = FUN_1005a0434(param_1,iVar19,8);
          *(undefined8 *)(plVar5[4] + lVar7 * 8) = uVar6;
          if (*(long *)(plVar5[4] + lVar7 * 8) == 0) {
            return (long *)0x0;
          }
          if (-1 < iVar22) {
            lVar10 = 0;
            uVar9 = *(uint *)(param_3 + 0x14 + lVar7 * 4);
            do {
              if ((uVar9 & 1 << (ulong)((uint)lVar10 & 0x1f)) != 0) {
                lVar1 = (long)iVar18;
                iVar18 = iVar18 + 1;
                *(long *)(*(long *)(plVar5[4] + lVar7 * 8) + lVar10 * 8) =
                     *(long *)(lVar17 + 0x1320) + (long)*(int *)(param_3 + 0x114 + lVar1 * 4) * 0x48
                ;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < iVar19);
          }
          iVar13 = (int)plVar5[1];
          iVar15 = iVar24;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar13);
  }
  *(undefined4 *)(plVar5 + 5) = 1;
  if ((int)uVar3 < 1) {
    iVar18 = 8;
    goto LAB_1006047b0;
  }
  if (uVar3 == 0) {
    uVar9 = 0;
    iVar18 = 1;
LAB_100604798:
    iVar22 = uVar3 - uVar9;
    do {
      iVar18 = iVar18 * iVar13;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  else {
    uVar9 = uVar3 & 0xfffffff8;
    if (uVar9 == 0) {
      uVar9 = 0;
      iVar18 = 1;
      iVar19 = 1;
      iVar20 = 1;
      iVar21 = 1;
      iVar25 = 1;
      iVar26 = 1;
      iVar22 = 1;
      iVar24 = 1;
    }
    else {
      iVar18 = 1;
      iVar19 = 1;
      iVar20 = 1;
      iVar21 = 1;
      iVar25 = 1;
      iVar26 = 1;
      iVar22 = 1;
      iVar24 = 1;
      uVar11 = uVar9;
      do {
        iVar18 = iVar18 * iVar13;
        iVar19 = iVar19 * iVar13;
        iVar20 = iVar20 * iVar13;
        iVar21 = iVar21 * iVar13;
        iVar22 = iVar22 * iVar13;
        iVar24 = iVar24 * iVar13;
        iVar25 = iVar25 * iVar13;
        iVar26 = iVar26 * iVar13;
        uVar11 = uVar11 - 8;
      } while (uVar11 != 0);
    }
    iVar22 = iVar22 * iVar18;
    iVar24 = iVar24 * iVar19;
    auVar23._4_4_ = iVar24;
    auVar23._0_4_ = iVar22;
    auVar23._8_4_ = iVar25 * iVar20;
    auVar23._12_4_ = iVar26 * iVar21;
    auVar4._4_4_ = iVar24;
    auVar4._0_4_ = iVar22;
    auVar4._8_4_ = iVar25 * iVar20;
    auVar4._12_4_ = iVar26 * iVar21;
    auVar23 = NEON_ext(auVar23,auVar4,8,1);
    iVar18 = iVar22 * auVar23._0_4_ * iVar24 * auVar23._4_4_;
    if (uVar3 != uVar9) goto LAB_100604798;
  }
  *(int *)(plVar5 + 5) = iVar18;
  iVar18 = iVar18 << 3;
LAB_1006047b0:
  *(int *)((long)plVar5 + 0xc) = iVar15;
  lVar7 = FUN_1005a03d8(param_1,iVar18);
  plVar5[6] = lVar7;
  if (lVar7 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar16 = (ulong)*(uint *)(plVar5 + 5);
    if (0 < (int)*(uint *)(plVar5 + 5)) {
      uVar14 = 0;
      do {
        lVar7 = plVar5[1];
        uVar6 = FUN_1005a03d8(param_1,uVar3 << 2);
        *(undefined8 *)(plVar5[6] + uVar14 * 8) = uVar6;
        piVar8 = *(int **)(plVar5[6] + uVar14 * 8);
        if (piVar8 == (int *)0x0) {
          return (long *)0x0;
        }
        if (0 < (int)uVar3) {
          iVar13 = 0;
          uVar12 = uVar14;
          uVar9 = uVar3;
          if ((int)lVar7 != 0) {
            iVar13 = (int)uVar16 / (int)lVar7;
          }
          do {
            iVar15 = 0;
            if (iVar13 != 0) {
              iVar15 = (int)uVar12 / iVar13;
            }
            lVar7 = plVar5[1];
            *piVar8 = iVar15;
            uVar9 = uVar9 - 1;
            iVar18 = 0;
            if ((int)lVar7 != 0) {
              iVar18 = iVar13 / (int)lVar7;
            }
            piVar8 = piVar8 + 1;
            uVar12 = (ulong)(uint)((int)uVar12 - iVar15 * iVar13);
            iVar13 = iVar18;
          } while (uVar9 != 0);
        }
        uVar14 = uVar14 + 1;
        uVar16 = (ulong)(int)plVar5[5];
      } while ((long)uVar14 < (long)uVar16);
    }
  }
  return plVar5;
}




undefined8 FUN_100604874(void)

{
  undefined8 uVar1;
  long in_x3;
  long in_x4;
  int in_w5;
  int iVar2;
  long lVar3;
  
  if (0 < in_w5) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(in_x4 + lVar3 * 4) != 0) {
        *(undefined8 *)(in_x3 + (long)iVar2 * 8) = *(undefined8 *)(in_x3 + lVar3 * 8);
        iVar2 = iVar2 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (in_w5 != (int)lVar3);
    if (iVar2 != 0) {
      uVar1 = FUN_1006048c4();
      return uVar1;
    }
  }
  return 0;
}




void FUN_1006048c4(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,ulong param_5,
                  code *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lStack_b0;
  int local_a4;
  ulong local_a0;
  long local_98;
  int local_8c;
  long local_88;
  code *local_80;
  int local_74;
  long local_70;
  long local_68;
  
  local_80 = param_6;
  local_a0 = param_5;
  local_88 = param_4;
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar9;
  piVar11 = (int *)*param_3;
  iVar5 = *(int *)(param_2 + 0x34) >> 1;
  iVar2 = piVar11[1];
  if (iVar5 <= piVar11[1]) {
    iVar2 = iVar5;
  }
  if (iVar2 - *piVar11 < 1) {
    uVar4 = 0;
  }
  else {
    local_74 = piVar11[2];
    iVar5 = *(int *)param_3[3];
    local_98 = (long)iVar5;
    lVar10 = (long)(int)param_5;
    local_8c = 0;
    if (local_74 != 0) {
      local_8c = (iVar2 - *piVar11) / local_74;
    }
    lVar1 = -0xb0 - ((-(param_5 >> 0x1f & 1) & 0xfffffff800000000 | (param_5 & 0xffffffff) << 3) +
                     0xf & 0xfffffffffffffff0);
    if (0 < (int)param_5) {
      lVar8 = 0;
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar2 = (iVar5 + local_8c + -1) / iVar5;
      }
      do {
        lVar3 = FUN_10055b394(param_1,param_2,iVar2 << 3);
        *(long *)((long)&lStack_b0 + lVar8 * 8 + lVar1 + 0xb0) = lVar3;
        if (lVar3 == 0) {
          uVar4 = 0xffffff75;
          goto LAB_100604b5c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar10);
    }
    iVar5 = *(int *)((long)param_3 + 0xc);
    if (iVar5 < 1) {
      uVar4 = 0;
    }
    else {
      lVar8 = 0;
      local_70 = param_2 + 8;
      do {
        if (0 < local_8c) {
          lVar9 = 0;
          iVar5 = 0;
          do {
            if (((uint)lVar8 == 0) && (0 < (int)param_5)) {
              lVar3 = 0;
              do {
                iVar2 = FUN_10055c8b0(param_3[3],local_70);
                if ((iVar2 == -1) ||
                   (lVar6 = *(long *)(param_3[6] + (long)iVar2 * 8),
                   *(long *)(*(long *)((long)&lStack_b0 + lVar3 * 8 + lVar1 + 0xb0) + lVar9 * 8) =
                        lVar6, lVar6 == 0)) goto LAB_100604b3c;
                lVar3 = lVar3 + 1;
              } while (lVar3 < lVar10);
            }
            if ((0 < (int)local_98) && (iVar5 < local_8c)) {
              lVar3 = 0;
              do {
                local_a4 = iVar5;
                if (0 < (int)local_a0) {
                  lVar6 = 0;
                  iVar5 = iVar5 * local_74;
                  do {
                    lVar7 = (long)*(int *)(*(long *)(*(long *)((long)&lStack_b0 +
                                                              lVar6 * 8 + lVar1 + 0xb0) + lVar9 * 8)
                                          + lVar3 * 4);
                    if ((((piVar11[lVar7 + 5] & 1 << (ulong)((uint)lVar8 & 0x1f)) != 0) &&
                        (lVar7 = *(long *)(*(long *)(param_3[4] + lVar7 * 8) + lVar8 * 8),
                        lVar7 != 0)) &&
                       (iVar2 = (*local_80)(lVar7,*(long *)(local_88 + lVar6 * 8) +
                                                  (long)(*piVar11 + iVar5) * 4,local_70,local_74),
                       iVar2 == -1)) goto LAB_100604b3c;
                    lVar6 = lVar6 + 1;
                  } while (lVar6 < lVar10);
                }
                lVar3 = lVar3 + 1;
                iVar5 = local_a4 + 1;
              } while ((lVar3 < local_98) && (iVar5 < local_8c));
            }
            lVar9 = lVar9 + 1;
            param_5 = local_a0;
          } while (iVar5 < local_8c);
          iVar5 = *(int *)((long)param_3 + 0xc);
          lVar9 = *(long *)PTR____stack_chk_guard_101444218;
        }
        uVar4 = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
    }
  }
LAB_100604b5c:
  if (lVar9 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
LAB_100604b3c:
  uVar4 = 0;
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  goto LAB_100604b5c;
}




long FUN_100604b8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_6 < 1) {
    lVar5 = 0;
  }
  else {
    iVar16 = 0;
    puVar7 = param_4;
    do {
      if (*param_5 != 0) {
        param_4[iVar16] = *puVar7;
        iVar16 = iVar16 + 1;
      }
      param_6 = param_6 + -1;
      puVar7 = puVar7 + 1;
      param_5 = param_5 + 1;
    } while (param_6 != 0);
    if (iVar16 == 0) {
      lVar5 = 0;
    }
    else {
      piVar17 = (int *)*param_3;
      iVar1 = piVar17[2];
      iVar2 = piVar17[3];
      iVar8 = *piVar17;
      iVar9 = piVar17[1];
      lVar5 = FUN_10055b394(param_1,param_2,iVar16 << 3);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = (iVar9 - iVar8) / iVar1;
        }
        if (0 < iVar16) {
          lVar14 = 0;
          uVar15 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
          do {
            pvVar6 = (void *)FUN_10055b394(param_1,param_2,uVar15);
            *(void **)(lVar5 + lVar14 * 8) = pvVar6;
            if (pvVar6 == (void *)0x0) {
              return 0;
            }
            _bzero(pvVar6,uVar15);
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar16);
        }
        if (0 < (int)uVar3) {
          iVar8 = 0;
          lVar14 = 0;
          do {
            if (0 < iVar16) {
              lVar11 = 0;
              iVar9 = *piVar17;
              do {
                if (iVar1 < 1) {
                  fVar18 = 0.0;
                  fVar20 = 0.0;
                }
                else {
                  fVar18 = 0.0;
                  pfVar12 = (float *)(param_4[lVar11] + (long)(iVar9 + iVar8) * 4);
                  fVar19 = 0.0;
                  iVar10 = iVar1;
                  do {
                    fVar20 = ABS(*pfVar12);
                    if (fVar20 <= fVar19) {
                      fVar20 = fVar19;
                    }
                    fVar18 = fVar18 + ABS((float)(int)*pfVar12);
                    iVar10 = iVar10 + -1;
                    pfVar12 = pfVar12 + 1;
                    fVar19 = fVar20;
                  } while (iVar10 != 0);
                }
                if (iVar2 < 2) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = 0;
                  fVar18 = (float)(int)((100.0 / (float)iVar1) * fVar18);
                  do {
                    if (fVar20 <= (float)piVar17[lVar13 + 0x145]) {
                      fVar19 = (float)piVar17[lVar13 + 0x185];
                      bVar4 = true;
                      if ((0.0 <= fVar19) && (bVar4 = false, !NAN(fVar18) && !NAN(fVar19))) {
                        bVar4 = fVar18 < fVar19;
                      }
                      if (bVar4) break;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < (long)iVar2 + -1);
                }
                *(int *)(*(long *)(lVar5 + lVar11 * 8) + lVar14 * 4) = (int)lVar13;
                iVar10 = (int)lVar11;
                lVar11 = lVar11 + 1;
              } while (iVar10 != iVar16 + -1);
            }
            iVar8 = iVar8 + iVar1;
            iVar9 = (int)lVar14;
            lVar14 = lVar14 + 1;
          } while (iVar9 != uVar3 - 1);
        }
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      }
    }
  }
  return lVar5;
}




undefined8 FUN_100604db0(void)

{
  undefined8 uVar1;
  long in_x3;
  long in_x4;
  int in_w5;
  int iVar2;
  long lVar3;
  
  if (0 < in_w5) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(in_x4 + lVar3 * 4) != 0) {
        *(undefined8 *)(in_x3 + (long)iVar2 * 8) = *(undefined8 *)(in_x3 + lVar3 * 8);
        iVar2 = iVar2 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (in_w5 != (int)lVar3);
    if (iVar2 != 0) {
      uVar1 = FUN_1006048c4();
      return uVar1;
    }
  }
  return 0;
}




undefined8
FUN_100604e00(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long local_68;
  
  piVar12 = (int *)*param_3;
  iVar4 = (int)param_6;
  iVar1 = *(int *)(param_2 + 0x34) * iVar4 >> 1;
  iVar8 = piVar12[1];
  if (iVar1 <= piVar12[1]) {
    iVar8 = iVar1;
  }
  if (iVar8 - *piVar12 < 1) {
    uVar7 = 0;
  }
  else {
    iVar1 = piVar12[2];
    iVar2 = *(int *)param_3[3];
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (iVar8 - *piVar12) / iVar1;
    }
    iVar8 = 0;
    if (iVar2 != 0) {
      iVar8 = (iVar2 + iVar3 + -1) / iVar2;
    }
    lVar6 = FUN_10055b394(param_1,param_2,iVar8 << 3);
    if (lVar6 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      if (iVar4 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          if (*(int *)(param_5 + lVar9 * 4) != 0) break;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar4);
      }
      if ((int)lVar9 == iVar4) {
        uVar7 = 0;
      }
      else {
        iVar8 = *(int *)((long)param_3 + 0xc);
        if (iVar8 < 1) {
          uVar7 = 0;
        }
        else {
          local_68 = 0;
          do {
            if (0 < iVar3) {
              lVar9 = 0;
              iVar8 = 0;
              do {
                if ((uint)local_68 == 0) {
                  iVar4 = FUN_10055c8b0(param_3[3],param_2 + 8);
                  if (iVar4 == -1) {
                    return 0;
                  }
                  lVar10 = *(long *)(param_3[6] + (long)iVar4 * 8);
                  *(long *)(lVar6 + lVar9 * 8) = lVar10;
                  if (lVar10 == 0) {
                    return 0;
                  }
                }
                if ((0 < iVar2) && (iVar8 < iVar3)) {
                  iVar4 = iVar1 * iVar8;
                  lVar10 = 0;
                  do {
                    lVar11 = (long)*(int *)(*(long *)(lVar6 + lVar9 * 8) + lVar10 * 4);
                    if ((((piVar12[lVar11 + 5] & 1 << (ulong)((uint)local_68 & 0x1f)) != 0) &&
                        (lVar11 = *(long *)(*(long *)(param_3[4] + lVar11 * 8) + local_68 * 8),
                        lVar11 != 0)) &&
                       (iVar5 = FUN_10055d034(lVar11,param_4,iVar4 + *piVar12,param_6,param_2 + 8,
                                              iVar1), iVar5 == -1)) {
                      return 0;
                    }
                    lVar11 = lVar10 + 1;
                  } while ((lVar11 < iVar2) &&
                          (iVar5 = (int)lVar10, iVar4 = iVar4 + iVar1, lVar10 = lVar11,
                          iVar8 + iVar5 + 1 < iVar3));
                  iVar8 = iVar8 + (int)lVar11;
                }
                lVar9 = lVar9 + 1;
              } while (iVar8 < iVar3);
              iVar8 = *(int *)((long)param_3 + 0xc);
            }
            uVar7 = 0;
            local_68 = local_68 + 1;
          } while (local_68 < iVar8);
        }
      }
    }
  }
  return uVar7;
}




int FUN_100605098(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}




uint FUN_1006050b4(float param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  
  if (0.0 <= param_1) {
    uVar1 = 0;
  }
  else {
    param_1 = -param_1;
    uVar1 = 0x80000000;
  }
  dVar3 = (double)_log((double)param_1);
  iVar2 = (int)(double)(long)((float)dVar3 / 0.6931472);
  dVar3 = (double)_ldexp((double)param_1,(long)((float)dVar3 / 0.6931472),0x14 - iVar2);
  return (int)(float)(int)dVar3 | uVar1 | iVar2 * 0x200000 + 0x60000000U;
}




float FUN_100605148(uint param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1 & 0x1fffff);
  if ((param_1 & 0x80000000) != 0) {
    dVar1 = -(double)(param_1 & 0x1fffff);
  }
  dVar1 = (double)_ldexp(dVar1,(param_1 >> 0x15 & 0x3ff) - 0x314);
  return (float)dVar1;
}




void FUN_1006053c4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar24 [16];
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  dVar4 = (double)_pow(SUB84((double)(int)uVar3,0),SUB84((double)(1.0 / (float)(int)uVar2),0));
  iVar8 = (int)(float)(int)dVar4;
  do {
    if ((int)uVar2 < 1) {
      iVar11 = 1;
      iVar19 = 1;
    }
    else {
      iVar1 = iVar8 + 1;
      if (uVar2 == 0) {
        uVar9 = 0;
        iVar11 = 1;
        iVar19 = 1;
      }
      else {
        uVar9 = uVar2 & 0xfffffff8;
        if (uVar9 == 0) {
          uVar9 = 0;
          iVar13 = 1;
          iVar14 = 1;
          iVar11 = 1;
          iVar12 = 1;
          iVar17 = 1;
          iVar18 = 1;
          iVar15 = 1;
          iVar16 = 1;
          iVar21 = 1;
          iVar22 = 1;
          iVar19 = 1;
          iVar20 = 1;
          iVar26 = 1;
          iVar27 = 1;
          iVar23 = 1;
          iVar25 = 1;
        }
        else {
          iVar13 = 1;
          iVar14 = 1;
          iVar11 = 1;
          iVar12 = 1;
          iVar17 = 1;
          iVar18 = 1;
          iVar15 = 1;
          iVar16 = 1;
          iVar21 = 1;
          iVar22 = 1;
          iVar19 = 1;
          iVar20 = 1;
          iVar26 = 1;
          iVar27 = 1;
          iVar23 = 1;
          iVar25 = 1;
          uVar10 = uVar2 & 0xfffffff8;
          do {
            iVar19 = iVar19 * iVar8;
            iVar20 = iVar20 * iVar8;
            iVar21 = iVar21 * iVar8;
            iVar22 = iVar22 * iVar8;
            iVar23 = iVar23 * iVar8;
            iVar25 = iVar25 * iVar8;
            iVar26 = iVar26 * iVar8;
            iVar27 = iVar27 * iVar8;
            iVar11 = iVar11 * iVar1;
            iVar12 = iVar12 * iVar1;
            iVar13 = iVar13 * iVar1;
            iVar14 = iVar14 * iVar1;
            uVar10 = uVar10 - 8;
            iVar15 = iVar15 * iVar1;
            iVar16 = iVar16 * iVar1;
            iVar17 = iVar17 * iVar1;
            iVar18 = iVar18 * iVar1;
          } while (uVar10 != 0);
        }
        auVar24._8_4_ = 1;
        auVar24._0_8_ = 0x100000001;
        auVar24._12_4_ = 1;
        auVar7._4_4_ = iVar25 * iVar20;
        auVar7._0_4_ = iVar23 * iVar19;
        auVar7._8_4_ = iVar26 * iVar21;
        auVar7._12_4_ = iVar27 * iVar22;
        auVar24 = NEON_ext(auVar7,auVar24,8,1);
        iVar19 = iVar23 * iVar19 * auVar24._0_4_ * iVar25 * iVar20 * auVar24._4_4_;
        auVar5._8_4_ = 1;
        auVar5._0_8_ = 0x100000001;
        auVar5._12_4_ = 1;
        auVar6._4_4_ = iVar16 * iVar12;
        auVar6._0_4_ = iVar15 * iVar11;
        auVar6._8_4_ = iVar17 * iVar13;
        auVar6._12_4_ = iVar18 * iVar14;
        auVar24 = NEON_ext(auVar6,auVar5,8,1);
        iVar11 = iVar15 * iVar11 * auVar24._0_4_ * iVar16 * iVar12 * auVar24._4_4_;
        if (uVar2 == uVar9) goto LAB_1006054e0;
      }
      do {
        iVar19 = iVar19 * iVar8;
        iVar11 = iVar11 * iVar1;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
LAB_1006054e0:
    if ((iVar19 <= (int)uVar3) && ((int)uVar3 < iVar11)) {
      return;
    }
    iVar11 = 1;
    if ((int)uVar3 < iVar19) {
      iVar11 = -1;
    }
    iVar8 = iVar8 + iVar11;
  } while( true );
}




long FUN_1006054fc(undefined8 param_1,uint *param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar14;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar15;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar16;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar17;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  int iVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  
  if (param_2[4] - 1 < 2) {
    uVar2 = param_2[5];
    uVar14 = SUB81((double)(uVar2 & 0x1fffff),0);
    if ((uVar2 & 0x80000000) != 0) {
      uVar14 = SUB81(-(double)(uVar2 & 0x1fffff),0);
    }
    _ldexp(uVar14,(uVar2 >> 0x15 & 0x3ff) - 0x314);
    uVar2 = param_2[6];
    uVar14 = SUB81((double)(uVar2 & 0x1fffff),0);
    if ((uVar2 & 0x80000000) != 0) {
      uVar14 = SUB81(-(double)(uVar2 & 0x1fffff),0);
    }
    _ldexp(uVar14,(uVar2 >> 0x15 & 0x3ff) - 0x314);
    lVar7 = FUN_1005a0434(param_1,*param_2 * param_3,4);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      fVar31 = (float)(double)CONCAT17(extraout_var_17,
                                       CONCAT16(extraout_var_14,
                                                CONCAT15(extraout_var_11,
                                                         CONCAT14(extraout_var_08,
                                                                  CONCAT13(extraout_var_05,
                                                                           CONCAT12(extraout_var_02,
                                                                                    CONCAT11(
                                                  extraout_var,extraout_b0)))))));
      fVar32 = (float)(double)CONCAT17(extraout_var_18,
                                       CONCAT16(extraout_var_15,
                                                CONCAT15(extraout_var_12,
                                                         CONCAT14(extraout_var_09,
                                                                  CONCAT13(extraout_var_06,
                                                                           CONCAT12(extraout_var_03,
                                                                                    CONCAT11(
                                                  extraout_var_00,extraout_b0_00)))))));
      if (param_2[4] == 1) {
        uVar2 = *param_2;
        uVar1 = param_2[1];
        _pow(SUB81((double)(int)uVar1,0),SUB84((double)(1.0 / (float)(int)uVar2),0));
        iVar8 = (int)(float)(int)(double)CONCAT17(extraout_var_19,
                                                  CONCAT16(extraout_var_16,
                                                           CONCAT15(extraout_var_13,
                                                                    CONCAT14(extraout_var_10,
                                                                             CONCAT13(
                                                  extraout_var_07,
                                                  CONCAT12(extraout_var_04,
                                                           CONCAT11(extraout_var_01,extraout_b0_01))
                                                  )))));
        do {
          if ((int)uVar2 < 1) {
            iVar18 = 1;
            iVar25 = 1;
          }
          else {
            iVar13 = iVar8 + 1;
            if (uVar2 == 0) {
              uVar10 = 0;
              iVar18 = 1;
              iVar25 = 1;
            }
            else {
              uVar10 = uVar2 & 0xfffffff8;
              if (uVar10 == 0) {
                uVar10 = 0;
                iVar21 = 1;
                iVar22 = 1;
                iVar18 = 1;
                iVar20 = 1;
                auVar24._8_5_ = 0x100000001;
                auVar24._0_8_ = 0x100000001;
                auVar24._13_3_ = 0;
                iVar27 = 1;
                iVar28 = 1;
                iVar25 = 1;
                iVar26 = 1;
                auVar30._8_5_ = 0x100000001;
                auVar30._0_8_ = 0x100000001;
                auVar30._13_3_ = 0;
              }
              else {
                iVar21 = 1;
                iVar22 = 1;
                iVar18 = 1;
                iVar20 = 1;
                auVar23._8_5_ = 0x100000001;
                auVar23._0_8_ = 0x100000001;
                auVar23._13_3_ = 0;
                iVar27 = 1;
                iVar28 = 1;
                iVar25 = 1;
                iVar26 = 1;
                auVar29._8_5_ = 0x100000001;
                auVar29._0_8_ = 0x100000001;
                auVar29._13_3_ = 0;
                uVar12 = uVar2 & 0xfffffff8;
                do {
                  iVar25 = iVar25 * iVar8;
                  iVar26 = iVar26 * iVar8;
                  iVar27 = iVar27 * iVar8;
                  iVar28 = iVar28 * iVar8;
                  auVar30._0_4_ = auVar29._0_4_ * iVar8;
                  auVar30._4_4_ = auVar29._4_4_ * iVar8;
                  auVar30._8_4_ = auVar29._8_4_ * iVar8;
                  auVar30._12_4_ = auVar29._12_4_ * iVar8;
                  iVar18 = iVar18 * iVar13;
                  iVar20 = iVar20 * iVar13;
                  iVar21 = iVar21 * iVar13;
                  iVar22 = iVar22 * iVar13;
                  uVar12 = uVar12 - 8;
                  auVar24._0_4_ = auVar23._0_4_ * iVar13;
                  auVar24._4_4_ = auVar23._4_4_ * iVar13;
                  auVar24._8_4_ = auVar23._8_4_ * iVar13;
                  auVar24._12_4_ = auVar23._12_4_ * iVar13;
                  auVar23 = auVar24;
                  auVar29 = auVar30;
                } while (uVar12 != 0);
              }
              iVar25 = auVar30._0_4_ * iVar25;
              iVar26 = auVar30._4_4_ * iVar26;
              auVar3[8] = 1;
              auVar3._0_8_ = 0x100000001;
              auVar3._9_3_ = 0;
              auVar3[0xc] = 1;
              auVar3._13_3_ = 0;
              auVar6._4_4_ = iVar26;
              auVar6._0_4_ = iVar25;
              auVar6._8_4_ = auVar30._8_4_ * iVar27;
              auVar6._12_4_ = auVar30._12_4_ * iVar28;
              auVar30 = NEON_ext(auVar6,auVar3,8,1);
              iVar25 = iVar25 * auVar30._0_4_ * iVar26 * auVar30._4_4_;
              iVar18 = auVar24._0_4_ * iVar18;
              iVar20 = auVar24._4_4_ * iVar20;
              auVar4[8] = 1;
              auVar4._0_8_ = 0x100000001;
              auVar4._9_3_ = 0;
              auVar4[0xc] = 1;
              auVar4._13_3_ = 0;
              auVar5._4_4_ = iVar20;
              auVar5._0_4_ = iVar18;
              auVar5._8_4_ = auVar24._8_4_ * iVar21;
              auVar5._12_4_ = auVar24._12_4_ * iVar22;
              auVar24 = NEON_ext(auVar5,auVar4,8,1);
              iVar18 = iVar18 * auVar24._0_4_ * iVar20 * auVar24._4_4_;
              if (uVar2 == uVar10) goto LAB_1006056c8;
            }
            iVar21 = uVar2 - uVar10;
            do {
              iVar25 = iVar25 * iVar8;
              iVar21 = iVar21 + -1;
              iVar18 = iVar18 * iVar13;
            } while (iVar21 != 0);
          }
LAB_1006056c8:
          if (((int)uVar1 < iVar18) && (iVar25 <= (int)uVar1)) {
            if ((int)uVar1 < 1) {
              return lVar7;
            }
            lVar9 = 0;
            iVar25 = 0;
            do {
              if ((param_4 == 0) || (*(int *)(*(long *)(param_2 + 2) + lVar9 * 4) != 0)) {
                if (0 < (int)uVar2) {
                  iVar18 = 0;
                  lVar11 = *(long *)(param_2 + 10);
                  uVar10 = param_2[8];
                  iVar13 = 1;
                  uVar14 = 0;
                  uVar15 = 0;
                  uVar16 = 0;
                  uVar17 = 0;
                  do {
                    iVar21 = 0;
                    if (iVar13 != 0) {
                      iVar21 = (int)lVar9 / iVar13;
                    }
                    iVar27 = 0;
                    if (iVar8 != 0) {
                      iVar27 = iVar21 / iVar8;
                    }
                    fVar19 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                             fVar31 + fVar32 * ABS((float)*(int *)(lVar11 + (long)(iVar21 - iVar27 *
                                                                                            iVar8) *
                                                                            4));
                    if (uVar10 != 0) {
                      uVar14 = SUB41(fVar19,0);
                      uVar15 = (undefined1)((uint)fVar19 >> 8);
                      uVar16 = (undefined1)((uint)fVar19 >> 0x10);
                      uVar17 = (undefined1)((uint)fVar19 >> 0x18);
                    }
                    iVar21 = iVar25;
                    if (param_4 != 0) {
                      iVar21 = *(int *)(param_4 + (long)iVar25 * 4);
                    }
                    *(float *)(lVar7 + (long)(int)(iVar18 + uVar2 * iVar21) * 4) = fVar19;
                    iVar13 = iVar13 * iVar8;
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < (int)uVar2);
                }
                iVar25 = iVar25 + 1;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < (int)uVar1);
            return lVar7;
          }
          iVar18 = 1;
          if ((int)uVar1 < iVar25) {
            iVar18 = -1;
          }
          iVar8 = iVar8 + iVar18;
        } while( true );
      }
      if ((param_2[4] == 2) && (uVar2 = param_2[1], 0 < (int)uVar2)) {
        lVar9 = 0;
        iVar8 = 0;
        do {
          if ((param_4 == 0) || (*(int *)(*(long *)(param_2 + 2) + lVar9 * 4) != 0)) {
            uVar1 = *param_2;
            if (0 < (int)uVar1) {
              iVar25 = 0;
              lVar11 = *(long *)(param_2 + 10);
              uVar10 = param_2[8];
              uVar14 = 0;
              uVar15 = 0;
              uVar16 = 0;
              uVar17 = 0;
              do {
                fVar19 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                         fVar31 + fVar32 * ABS((float)*(int *)(lVar11 + (long)(int)(uVar1 * (int)
                                                  lVar9 + iVar25) * 4));
                if (uVar10 != 0) {
                  uVar14 = SUB41(fVar19,0);
                  uVar15 = (undefined1)((uint)fVar19 >> 8);
                  uVar16 = (undefined1)((uint)fVar19 >> 0x10);
                  uVar17 = (undefined1)((uint)fVar19 >> 0x18);
                }
                iVar18 = iVar8;
                if (param_4 != 0) {
                  iVar18 = *(int *)(param_4 + (long)iVar8 * 4);
                }
                *(float *)(lVar7 + (long)(int)(iVar25 + uVar1 * iVar18) * 4) = fVar19;
                iVar25 = iVar25 + 1;
              } while (iVar25 < (int)uVar1);
            }
            iVar8 = iVar8 + 1;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uVar2);
      }
    }
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}




void FUN_10060585c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 6) != 0) {
    if (param_2[5] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[1] != 0) {
      FUN_1005a04e8(param_1);
    }
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return;
}




void FUN_1006058b4(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 6) != 0) {
    if (param_2[5] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[1] != 0) {
      FUN_1005a04e8(param_1);
    }
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    FUN_1005a04e8(param_1,param_2);
    return;
  }
  return;
}




void FUN_100605920(undefined8 param_1,void *param_2)

{
  if (*(long *)((long)param_2 + 0x18) != 0) {
    FUN_1005a04e8(param_1);
  }
  if (*(long *)((long)param_2 + 0x20) != 0) {
    FUN_1005a04e8(param_1);
  }
  if (*(long *)((long)param_2 + 0x28) != 0) {
    FUN_1005a04e8(param_1);
  }
  if (*(long *)((long)param_2 + 0x30) != 0) {
    FUN_1005a04e8(param_1);
  }
  if (*(long *)((long)param_2 + 0x38) != 0) {
    FUN_1005a04e8(param_1);
  }
  _memset(param_2,0,0x48);
  return;
}




void FUN_1006059a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  size_t sVar24;
  long lVar25;
  long *plVar26;
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar45;
  ulong uVar46;
  long alStack_70 [2];
  
  lVar22 = *(long *)PTR____stack_chk_guard_101444218;
  alStack_70[1] = lVar22;
  _memset(param_2,0,0x48);
  iVar23 = 0;
  iVar11 = param_3[1];
  if (0 < iVar11) {
    uVar8 = (ulong)iVar11;
    if (iVar11 == 0) {
      uVar12 = 0;
      iVar23 = 0;
    }
    else {
      uVar12 = uVar8 & 0xfffffffffffffff8;
      if (uVar12 == 0) {
        uVar12 = 0;
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        auVar44 = ZEXT216(0);
      }
      else {
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        puVar15 = (undefined8 *)(*(long *)(param_3 + 2) + 0x10);
        uVar20 = uVar12;
        auVar43 = ZEXT216(0);
        do {
          iVar23 = (uint)(-(0 < (int)puVar15[-2]) & 1) +
                   CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
          uVar27 = (undefined1)iVar23;
          uVar28 = (undefined1)((uint)iVar23 >> 8);
          uVar29 = (undefined1)((uint)iVar23 >> 0x10);
          uVar30 = (undefined1)((uint)iVar23 >> 0x18);
          iVar23 = (uint)(-(0 < (int)((ulong)puVar15[-2] >> 0x20)) & 1) +
                   CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31)));
          uVar31 = (undefined1)iVar23;
          uVar32 = (undefined1)((uint)iVar23 >> 8);
          uVar33 = (undefined1)((uint)iVar23 >> 0x10);
          uVar34 = (undefined1)((uint)iVar23 >> 0x18);
          iVar23 = (uint)(-(0 < (int)puVar15[-1]) & 1) +
                   CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)));
          uVar35 = (undefined1)iVar23;
          uVar36 = (undefined1)((uint)iVar23 >> 8);
          uVar37 = (undefined1)((uint)iVar23 >> 0x10);
          uVar38 = (undefined1)((uint)iVar23 >> 0x18);
          iVar23 = (uint)(-(0 < (int)((ulong)puVar15[-1] >> 0x20)) & 1) +
                   CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
          uVar39 = (undefined1)iVar23;
          uVar40 = (undefined1)((uint)iVar23 >> 8);
          uVar41 = (undefined1)((uint)iVar23 >> 0x10);
          uVar42 = (undefined1)((uint)iVar23 >> 0x18);
          auVar44._0_4_ = (uint)(-(0 < (int)*puVar15) & 1) + auVar43._0_4_;
          auVar44._4_4_ = (uint)(-(0 < (int)((ulong)*puVar15 >> 0x20)) & 1) + auVar43._4_4_;
          auVar44._8_4_ = (uint)(-(0 < (int)puVar15[1]) & 1) + auVar43._8_4_;
          auVar44._12_4_ = (uint)(-(0 < (int)((ulong)puVar15[1] >> 0x20)) & 1) + auVar43._12_4_;
          uVar20 = uVar20 - 8;
          puVar15 = puVar15 + 4;
          auVar43 = auVar44;
        } while (uVar20 != 0);
      }
      iVar23 = auVar44._0_4_ + CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      iVar18 = auVar44._4_4_ + CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31)));
      uVar27 = (undefined1)((uint)iVar18 >> 8);
      uVar28 = (undefined1)((uint)iVar18 >> 0x10);
      uVar29 = (undefined1)((uint)iVar18 >> 0x18);
      iVar21 = auVar44._8_4_ + CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)));
      uVar30 = (undefined1)((uint)iVar21 >> 8);
      uVar31 = (undefined1)((uint)iVar21 >> 0x10);
      uVar32 = (undefined1)((uint)iVar21 >> 0x18);
      iVar5 = auVar44._12_4_ + CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
      uVar33 = (undefined1)((uint)iVar5 >> 8);
      uVar34 = (undefined1)((uint)iVar5 >> 0x10);
      uVar35 = (undefined1)((uint)iVar5 >> 0x18);
      auVar43[4] = (char)iVar18;
      auVar43._0_4_ = iVar23;
      auVar43[5] = uVar27;
      auVar43[6] = uVar28;
      auVar43[7] = uVar29;
      auVar43[8] = (char)iVar21;
      auVar43[9] = uVar30;
      auVar43[10] = uVar31;
      auVar43[0xb] = uVar32;
      auVar43[0xc] = (char)iVar5;
      auVar43[0xd] = uVar33;
      auVar43[0xe] = uVar34;
      auVar43[0xf] = uVar35;
      auVar4[4] = (char)iVar18;
      auVar4._0_4_ = iVar23;
      auVar4[5] = uVar27;
      auVar4[6] = uVar28;
      auVar4[7] = uVar29;
      auVar4[8] = (char)iVar21;
      auVar4[9] = uVar30;
      auVar4[10] = uVar31;
      auVar4[0xb] = uVar32;
      auVar4[0xc] = (char)iVar5;
      auVar4[0xd] = uVar33;
      auVar4[0xe] = uVar34;
      auVar4[0xf] = uVar35;
      auVar44 = NEON_ext(auVar43,auVar4,8,1);
      iVar23 = iVar23 + auVar44._0_4_ + iVar18 + auVar44._4_4_;
      if (uVar8 == uVar12) goto LAB_100605aa0;
    }
    do {
      if (0 < *(int *)(*(long *)(param_3 + 2) + uVar12 * 4)) {
        iVar23 = iVar23 + 1;
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)uVar8);
  }
LAB_100605aa0:
  param_2[1] = iVar11;
  param_2[2] = iVar23;
  *param_2 = *param_3;
  if (iVar23 < 1) {
    uVar7 = 0;
    goto LAB_100605f48;
  }
  puVar6 = (ulong *)FUN_10060517c(param_1,*(undefined8 *)(param_3 + 2),iVar11,iVar23);
  sVar24 = (size_t)iVar23;
  plVar26 = (long *)((long)alStack_70 - (sVar24 * 8 + 0xf & 0xfffffffffffffff0));
  if (puVar6 == (ulong *)0x0) {
LAB_100605f2c:
    FUN_100605920(param_1,param_2);
    uVar7 = 0xffffffff;
  }
  else {
    uVar8 = (ulong)(iVar23 - 1) + 1;
    uVar12 = uVar8 & 0x1fffffffe;
    if (uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      uVar20 = (ulong)(iVar23 - 1) + 1 & 0xfffffffffffffffe;
      puVar16 = puVar6;
      plVar13 = plVar26;
      do {
        uVar46 = *puVar16;
        uVar29 = (undefined1)(uVar46 >> 0x38);
        uVar45 = CONCAT13((char)(uVar46 >> 8),CONCAT12((char)uVar46,(short)(uVar46 >> 0x10)));
        uVar27 = (undefined1)(uVar46 >> 0x20);
        uVar28 = (undefined1)(uVar46 >> 0x28);
        uVar46 = CONCAT44((int)(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar29,CONCAT14((char)(
                                                  uVar46 >> 0x30),uVar45)))) >> 0x20) << 8,
                          uVar45 << 8);
        uVar46 = uVar46 ^ (uVar46 ^ CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar29,uVar45 >> 8))))
                          & 0xff00ff00ff00ff;
        uVar45 = (uint)(uVar46 >> 0x20);
        iVar11 = (int)uVar46 << 4;
        iVar18 = uVar45 << 4;
        uVar27 = (undefined1)((uint)iVar18 >> 8);
        uVar28 = (undefined1)((uint)iVar18 >> 0x10);
        uVar29 = (undefined1)((uint)iVar18 >> 0x18);
        uVar46 = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14((char)iVar18,iVar11)))) ^
                 (CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14((char)iVar18,iVar11)))) ^
                 CONCAT44(uVar45 >> 4,(int)(uVar46 >> 4)) & 0xffffffff0fffffff) & 0xf0f0f0f0f0f0f0f;
        uVar45 = (uint)(uVar46 >> 0x20);
        iVar11 = (int)uVar46 << 2;
        iVar18 = uVar45 << 2;
        uVar27 = (undefined1)((uint)iVar18 >> 8);
        uVar28 = (undefined1)((uint)iVar18 >> 0x10);
        uVar29 = (undefined1)((uint)iVar18 >> 0x18);
        uVar46 = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14((char)iVar18,iVar11)))) ^
                 (CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14((char)iVar18,iVar11)))) ^
                 CONCAT44(uVar45 >> 2,(int)(uVar46 >> 2)) & 0xffffffff3fffffff) & 0x3333333333333333
        ;
        uVar45 = (uint)(uVar46 >> 0x20);
        iVar11 = (int)uVar46 << 1;
        iVar18 = uVar45 << 1;
        uVar27 = (undefined1)((uint)iVar18 >> 8);
        uVar28 = (undefined1)((uint)iVar18 >> 0x10);
        uVar29 = (undefined1)((uint)iVar18 >> 0x18);
        *puVar16 = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14((char)iVar18,iVar11))))
                   ^ (CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14((char)iVar18,iVar11))
                                              )) ^
                     CONCAT44(uVar45 >> 1,(int)(uVar46 >> 1)) & 0xffffffff7fffffff) &
                     0x5555555555555555;
        plVar13[1] = (long)puVar16 + 4;
        *plVar13 = (long)puVar16;
        uVar20 = uVar20 - 2;
        puVar16 = puVar16 + 1;
        plVar13 = plVar13 + 2;
      } while (uVar20 != 0);
    }
    if (uVar8 != uVar12) {
      iVar11 = iVar23 - (int)uVar12;
      puVar9 = (uint *)((long)puVar6 + uVar12 * 4);
      plVar13 = plVar26 + uVar12;
      do {
        uVar45 = *puVar9 >> 0x10 | *puVar9 << 0x10;
        uVar45 = uVar45 >> 8 & 0xff00ff | (uVar45 & 0xff00ff) << 8;
        uVar45 = uVar45 >> 4 & 0xf0f0f0f | (uVar45 & 0xf0f0f0f) << 4;
        uVar45 = uVar45 >> 2 & 0x33333333 | (uVar45 & 0x33333333) << 2;
        *puVar9 = uVar45 >> 1 & 0x55555555 | (uVar45 & 0x55555555) << 1;
        *plVar13 = (long)puVar9;
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 1;
        plVar13 = plVar13 + 1;
      } while (iVar11 != 0);
    }
    _qsort(plVar26,sVar24,8,(int *)FUN_1006060a4);
    lVar25 = (long)plVar26 - (sVar24 * 4 + 0xf & 0xfffffffffffffff0);
    lVar22 = FUN_1005a03d8(param_1,iVar23 << 2);
    *(long *)(param_2 + 8) = lVar22;
    if (lVar22 == 0) goto LAB_100605f2c;
    uVar8 = (ulong)(iVar23 - 1) + 1;
    uVar12 = uVar8 & 0x1fffffffe;
    if (uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      uVar20 = 0;
      do {
        lVar10 = (plVar26 + uVar20)[1];
        *(int *)(lVar25 + (long)(int)((ulong)(plVar26[uVar20] - (long)puVar6) >> 2) * 4) =
             (int)uVar20;
        *(int *)(lVar25 + (long)(int)((ulong)(lVar10 - (long)puVar6) >> 2) * 4) = (int)uVar20 + 1;
        uVar20 = uVar20 + 2;
      } while (((ulong)(iVar23 - 1) + 1 & 0xfffffffffffffffe) != uVar20);
    }
    if (uVar8 != uVar12) {
      do {
        *(int *)(lVar25 + (long)(int)((ulong)(plVar26[uVar12] - (long)puVar6) >> 2) * 4) =
             (int)uVar12;
        uVar12 = uVar12 + 1;
      } while (iVar23 != (int)uVar12);
    }
    lVar10 = 0;
    do {
      *(undefined4 *)(lVar22 + (long)*(int *)(lVar25 + lVar10 * 4) * 4) =
           *(undefined4 *)((long)puVar6 + lVar10 * 4);
      lVar10 = lVar10 + 1;
    } while (iVar23 != (int)lVar10);
    FUN_1005a04e8(param_1,puVar6);
    uVar7 = FUN_1006054fc(param_1,param_3,iVar23,lVar25);
    *(undefined8 *)(param_2 + 6) = uVar7;
    lVar22 = FUN_1005a03d8(param_1,iVar23 << 2);
    *(long *)(param_2 + 10) = lVar22;
    if (lVar22 == 0) goto LAB_100605f2c;
    iVar23 = param_3[1];
    if (iVar23 < 1) {
      iVar11 = 0;
    }
    else {
      lVar10 = 0;
      iVar11 = 0;
      lVar14 = *(long *)(param_3 + 2);
      do {
        if (0 < *(int *)(lVar14 + lVar10 * 4)) {
          lVar1 = (long)iVar11;
          iVar11 = iVar11 + 1;
          *(int *)(lVar22 + (long)*(int *)(lVar25 + lVar1 * 4) * 4) = (int)lVar10;
          iVar23 = param_3[1];
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar23);
    }
    lVar22 = FUN_1005a03d8(param_1,iVar11);
    *(long *)(param_2 + 0xc) = lVar22;
    if (lVar22 == 0) goto LAB_100605f2c;
    iVar23 = 0;
    iVar11 = param_3[1];
    if (0 < iVar11) {
      lVar22 = 0;
      do {
        iVar18 = *(int *)(*(long *)(param_3 + 2) + lVar22 * 4);
        if (0 < iVar18) {
          lVar10 = (long)iVar23;
          iVar23 = iVar23 + 1;
          *(char *)(*(long *)(param_2 + 0xc) + (long)*(int *)(lVar25 + lVar10 * 4)) = (char)iVar18;
          iVar11 = param_3[1];
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < iVar11);
    }
    uVar45 = param_2[2];
    if (uVar45 == 0) {
      uVar45 = 0xfffffffc;
    }
    else {
      iVar11 = -1;
      do {
        iVar18 = iVar11;
        uVar45 = uVar45 >> 1;
        iVar11 = iVar18 + 1;
      } while (uVar45 != 0);
      uVar45 = iVar18 - 2;
    }
    uVar19 = 5;
    if (4 < (int)uVar45) {
      uVar19 = uVar45;
    }
    uVar45 = 8;
    if ((int)uVar19 < 9) {
      uVar45 = uVar19;
    }
    param_2[0x10] = uVar45;
    iVar11 = 1 << (ulong)(uVar45 & 0x1f);
    lVar22 = FUN_1005a0434(param_1,iVar11,4);
    *(long *)(param_2 + 0xe) = lVar22;
    if (lVar22 == 0) goto LAB_100605f2c;
    param_2[0x11] = 0;
    if (iVar23 < 1) {
      iVar18 = param_2[0x10];
    }
    else {
      iVar18 = 0;
      lVar25 = 0;
      lVar10 = *(long *)(param_2 + 0xc);
      while( true ) {
        cVar17 = *(char *)(lVar10 + lVar25);
        if (iVar18 < cVar17) {
          param_2[0x11] = (int)cVar17;
          cVar17 = *(char *)(lVar10 + lVar25);
        }
        uVar19 = (uint)cVar17;
        iVar18 = param_2[0x10];
        if (((int)uVar19 <= iVar18) && (iVar18 - uVar19 != 0x1f)) {
          iVar21 = 0;
          uVar2 = *(uint *)(*(long *)(param_2 + 8) + lVar25 * 4);
          uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
          uVar2 = uVar2 >> 8 & 0xff00ff | (uVar2 & 0xff00ff) << 8;
          uVar2 = uVar2 >> 4 & 0xf0f0f0f | (uVar2 & 0xf0f0f0f) << 4;
          uVar2 = uVar2 >> 2 & 0x33333333 | (uVar2 & 0x33333333) << 2;
          do {
            *(int *)(lVar22 + (ulong)(uVar2 >> 1 & 0x55555555 | (uVar2 & 0x55555555) << 1 |
                                     iVar21 << (ulong)(uVar19 & 0x1f)) * 4) = (int)lVar25 + 1;
            iVar21 = iVar21 + 1;
            iVar18 = param_2[0x10];
            uVar19 = (uint)*(char *)(lVar10 + lVar25);
          } while (iVar21 < 1 << (ulong)(iVar18 - uVar19 & 0x1f));
        }
        if ((int)lVar25 == iVar23 + -1) break;
        lVar25 = lVar25 + 1;
        iVar18 = param_2[0x11];
      }
    }
    if (uVar45 != 0x1f) {
      lVar25 = 0;
      uVar19 = 0;
      iVar21 = 0;
      uVar45 = 0x1f - iVar18;
      do {
        uVar2 = iVar21 << (ulong)(0x20U - iVar18 & 0x1f);
        uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar3 = uVar3 >> 8 & 0xff00ff | (uVar3 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 4 & 0xf0f0f0f | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = uVar3 >> 2 & 0x33333333 | (uVar3 & 0x33333333) << 2;
        uVar8 = (ulong)(uVar3 >> 1 & 0x55555555 | (uVar3 & 0x55555555) << 1);
        if (*(int *)(lVar22 + uVar8 * 4) == 0) {
          lVar10 = (long)(int)(uVar19 + 1);
          uVar3 = uVar19;
          do {
            uVar19 = uVar3;
            if (iVar23 <= (int)lVar10) break;
            lVar14 = lVar10 * 4;
            lVar10 = lVar10 + 1;
            uVar3 = uVar19 + 1;
          } while (*(uint *)(*(long *)(param_2 + 8) + lVar14) <= uVar2);
          if ((int)lVar25 < iVar23) {
            lVar25 = (long)(int)lVar25;
            do {
              if (uVar2 < (*(uint *)(*(long *)(param_2 + 8) + lVar25 * 4) &
                          -2 << (ulong)(uVar45 & 0x1f))) break;
              lVar25 = lVar25 + 1;
            } while (lVar25 < iVar23);
          }
          uVar3 = iVar23 - (int)lVar25;
          uVar2 = 0x7fff;
          if (uVar3 >> 0xf == 0) {
            uVar2 = uVar3;
          }
          uVar3 = 0xbfff8000;
          if (uVar19 >> 0xf == 0) {
            uVar3 = uVar19 << 0xf | 0x80000000;
          }
          *(uint *)(lVar22 + uVar8 * 4) = uVar3 | uVar2;
        }
        iVar21 = iVar21 + 1;
        if (iVar11 <= iVar21) break;
        iVar18 = param_2[0x10];
      } while( true );
    }
    uVar7 = 0;
  }
  lVar22 = *(long *)PTR____stack_chk_guard_101444218;
LAB_100605f48:
  if (lVar22 != alStack_70[1]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar7);
  }
  return;
}




int FUN_1006060a4(undefined8 *param_1,undefined8 *param_2)

{
  return (uint)(*(uint *)*param_2 < *(uint *)*param_1) -
         (uint)(*(uint *)*param_1 < *(uint *)*param_2);
}




void FUN_1006060c8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  
  iVar8 = *param_1;
  if (iVar8 != 1) {
    lVar9 = *(long *)(param_1 + 4);
    iVar10 = *(int *)(lVar9 + 4);
    if (0 < iVar10) {
      iVar10 = iVar10 + 1;
      puVar6 = *(undefined4 **)(param_1 + 2);
      lVar11 = (long)iVar8 + -1;
      iVar4 = 1;
      iVar7 = iVar8;
      iVar12 = iVar8;
      do {
        iVar1 = *(int *)(lVar9 + (long)iVar10 * 4);
        iVar2 = 0;
        if (iVar7 != 0) {
          iVar2 = iVar8 / iVar7;
        }
        iVar12 = iVar12 - iVar2 * (iVar1 + -1);
        iVar5 = 1 - iVar4;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = iVar7 / iVar1;
        }
        if (iVar1 == 2) {
          if (iVar5 == 0) {
            FUN_100606b44(iVar2,iVar3,param_2,puVar6,puVar6 + lVar11 + iVar12);
            goto LAB_100606204;
          }
          FUN_100606b44(iVar2,iVar3,puVar6,param_2,puVar6 + lVar11 + iVar12);
        }
        else if (iVar1 == 4) {
          if (iVar5 == 0) {
            FUN_10060674c(iVar2,iVar3,param_2,puVar6,puVar6 + lVar11 + iVar12,
                          puVar6 + lVar11 + (iVar12 + iVar2),
                          puVar6 + lVar11 + (iVar12 + iVar2 + iVar2));
LAB_100606204:
            iVar5 = 0;
          }
          else {
            FUN_10060674c(iVar2,iVar3,puVar6,param_2,puVar6 + lVar11 + iVar12,
                          puVar6 + lVar11 + (iVar12 + iVar2),
                          puVar6 + lVar11 + (iVar12 + iVar2 + iVar2));
          }
        }
        else {
          if (iVar2 != 1) {
            iVar4 = iVar5;
          }
          if (iVar4 != 0) {
            FUN_100606d70(iVar2,iVar1,iVar3,iVar2 * iVar3,puVar6,puVar6,puVar6,param_2,param_2,
                          puVar6 + lVar11 + iVar12);
            goto LAB_100606204;
          }
          FUN_100606d70(iVar2,iVar1,iVar3,iVar2 * iVar3,param_2,param_2,param_2,puVar6,puVar6,
                        puVar6 + lVar11 + iVar12);
          iVar5 = 1;
        }
        iVar10 = iVar10 + -1;
        iVar4 = iVar5;
        iVar7 = iVar3;
      } while (iVar10 != 1);
      if ((0 < iVar8) && (iVar5 != 1)) {
        do {
          *param_2 = *puVar6;
          iVar8 = iVar8 + -1;
          param_2 = param_2 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar8 != 0);
      }
    }
  }
  return;
}




void FUN_100606278(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  iVar1 = *param_1;
  if (iVar1 != 1) {
    iVar11 = *(int *)(*(long *)(param_1 + 4) + 4);
    if (0 < iVar11) {
      iVar10 = 0;
      puVar9 = *(undefined4 **)(param_1 + 2);
      lVar8 = (long)iVar1 + -1;
      piVar12 = (int *)(*(long *)(param_1 + 4) + 8);
      iVar13 = 1;
      iVar7 = 1;
      do {
        iVar2 = *piVar12;
        iVar3 = iVar2 * iVar7;
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = iVar1 / iVar3;
        }
        if (iVar2 == 2) {
          if (iVar10 == 0) {
            FUN_100608260(iVar4,iVar7,param_2,puVar9,puVar9 + lVar8 + iVar13);
          }
          else {
            FUN_100608260(iVar4,iVar7,puVar9,param_2,puVar9 + lVar8 + iVar13);
          }
LAB_1006063f8:
          iVar7 = 1 - iVar10;
        }
        else {
          if (iVar2 == 3) {
            if (iVar10 == 0) {
              FUN_1006084ac(iVar4,iVar7,param_2,puVar9,puVar9 + lVar8 + iVar13,
                            puVar9 + lVar8 + (iVar4 + iVar13));
            }
            else {
              FUN_1006084ac(iVar4,iVar7,puVar9,param_2,puVar9 + lVar8 + iVar13,
                            puVar9 + lVar8 + (iVar4 + iVar13));
            }
            goto LAB_1006063f8;
          }
          if (iVar2 == 4) {
            puVar5 = param_2;
            puVar6 = puVar9;
            if (iVar10 != 0) {
              puVar5 = puVar9;
              puVar6 = param_2;
            }
            FUN_100607e60(iVar4,iVar7,puVar5,puVar6,puVar9 + lVar8 + iVar13,
                          puVar9 + lVar8 + (iVar4 + iVar13),
                          puVar9 + lVar8 + (iVar4 + iVar13 + iVar4));
            goto LAB_1006063f8;
          }
          puVar5 = param_2;
          puVar6 = puVar9;
          if (iVar10 != 0) {
            puVar5 = puVar9;
            puVar6 = param_2;
          }
          FUN_1006087b8(iVar4,iVar2,iVar7,iVar4 * iVar7,puVar5,puVar5,puVar5,puVar6,puVar6,
                        puVar9 + lVar8 + iVar13);
          iVar7 = 1 - iVar10;
          if (iVar4 != 1) {
            iVar7 = iVar10;
          }
        }
        iVar10 = iVar7;
        iVar13 = iVar13 + (iVar2 + -1) * iVar4;
        iVar11 = iVar11 + -1;
        piVar12 = piVar12 + 1;
        iVar7 = iVar3;
      } while (iVar11 != 0);
      if (0 < iVar1) {
        while (iVar10 != 0) {
          *param_2 = *puVar9;
          iVar1 = iVar1 + -1;
          puVar9 = puVar9 + 1;
          param_2 = param_2 + 1;
          iVar10 = iVar1;
        }
      }
    }
  }
  return;
}




void FUN_10060648c(undefined8 param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  undefined4 uVar22;
  
  *param_2 = param_3;
  uVar4 = FUN_1005a0434(param_1,param_3 * 3,4);
  *(undefined8 *)(param_2 + 2) = uVar4;
  piVar5 = (int *)FUN_1005a0434(param_1,0x20,4);
  *(int **)(param_2 + 4) = piVar5;
  if (param_3 == 1) {
    return;
  }
  iVar9 = 0;
  lVar12 = 0;
  lVar8 = *(long *)(param_2 + 2);
  lVar10 = -1;
  iVar6 = param_3;
  do {
    lVar10 = lVar10 + 1;
    if (lVar10 < 4) {
      iVar9 = (&DAT_10115fed4)[lVar10];
    }
    else {
      iVar9 = iVar9 + 2;
    }
    iVar11 = (int)lVar12;
    lVar12 = (long)iVar11;
    while( true ) {
      iVar11 = iVar11 + 1;
      iVar2 = 0;
      if (iVar9 != 0) {
        iVar2 = iVar6 / iVar9;
      }
      if (iVar6 != iVar2 * iVar9) break;
      lVar1 = lVar12 + 1;
      piVar5[lVar12 + 2] = iVar9;
      iVar13 = (int)lVar12;
      if ((iVar9 == 2) && (iVar13 != 0)) {
        if (0 < lVar12) {
          iVar6 = 0;
          piVar7 = piVar5 + (long)iVar11 + 1;
          do {
            *piVar7 = piVar7[-1];
            iVar6 = iVar6 + 1;
            piVar7 = piVar7 + -1;
          } while (iVar13 != iVar6);
        }
        piVar5[2] = 2;
      }
      lVar12 = lVar1;
      iVar6 = iVar2;
      if (iVar2 == 1) {
        *piVar5 = param_3;
        piVar5[1] = (int)lVar1;
        if (iVar13 < 1) {
          return;
        }
        if (iVar13 == 0) {
          return;
        }
        lVar10 = 0;
        iVar9 = 0;
        fVar21 = 6.2831855;
        iVar6 = 1;
        do {
          iVar11 = piVar5[lVar10 + 2];
          iVar2 = iVar11 * iVar6;
          if (1 < iVar11) {
            iVar17 = 0;
            iVar14 = 0;
            uVar3 = 0;
            if (iVar2 != 0) {
              uVar3 = param_3 / iVar2;
            }
            iVar11 = iVar11 + -1;
            pfVar18 = (float *)(lVar8 + 4 + ((long)param_3 + (long)iVar9) * 4);
            do {
              iVar14 = iVar14 + iVar6;
              if (2 < (int)uVar3) {
                iVar15 = 2;
                fVar19 = 0.0;
                pfVar16 = pfVar18;
                do {
                  uVar22 = 0;
                  fVar19 = fVar19 + 1.0;
                  dVar20 = (double)___sincos_stret((double)((6.2831855 / (float)param_3) *
                                                            (float)iVar14 * fVar19));
                  fVar21 = (float)(double)CONCAT44(uVar22,fVar21);
                  pfVar16[-1] = fVar21;
                  *pfVar16 = (float)dVar20;
                  iVar15 = iVar15 + 2;
                  pfVar16 = pfVar16 + 2;
                } while (iVar15 < (int)uVar3);
              }
              iVar17 = iVar17 + 1;
              pfVar18 = (float *)((long)pfVar18 +
                                 (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2))
              ;
            } while (iVar17 < iVar11);
            if (iVar11 < 2) {
              iVar11 = 1;
            }
            iVar9 = iVar9 + iVar11 * uVar3;
          }
          iVar11 = (int)lVar10;
          lVar10 = lVar10 + 1;
          iVar6 = iVar2;
        } while (iVar11 != iVar13 + -1);
        return;
      }
    }
  } while( true );
}




void FUN_100606700(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    if (param_2[1] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[2] != 0) {
      FUN_1005a04e8(param_1);
    }
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return;
}




void FUN_10060674c(ulong param_1,int param_2,float *param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  iVar11 = (int)param_1;
  if (0 < param_2) {
    iVar13 = 0;
    iVar22 = param_2 * iVar11;
    pfVar14 = param_3;
    iVar20 = param_2;
    do {
      fVar28 = pfVar14[iVar22];
      fVar29 = pfVar14[iVar22 * 3];
      fVar30 = *pfVar14;
      fVar31 = pfVar14[iVar22 * 2];
      *(float *)(param_4 + (long)iVar13 * 4) = fVar28 + fVar29 + fVar30 + fVar31;
      *(float *)(param_4 + (long)(iVar11 * 4 + -1 + iVar13) * 4) =
           (fVar30 + fVar31) - (fVar28 + fVar29);
      *(float *)(param_4 + (long)(iVar11 * 2 + -1 + iVar13) * 4) = *pfVar14 - pfVar14[iVar22 * 2];
      *(float *)(param_4 + (long)(iVar11 * 2 + iVar13) * 4) = pfVar14[iVar22 * 3] - pfVar14[iVar22];
      pfVar14 = (float *)((long)pfVar14 +
                         (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2)
                         );
      iVar13 = iVar13 + iVar11 * 4;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  if (1 < iVar11) {
    if (iVar11 != 2) {
      if (0 < param_2) {
        lVar15 = 0;
        iVar13 = 0;
        iVar4 = iVar11 * 4;
        uVar7 = iVar11 * 2;
        iVar5 = param_2 * iVar11;
        iVar6 = iVar4 + -3;
        iVar19 = uVar7 - 2;
        iVar20 = 1;
        iVar21 = 2;
        iVar22 = 2;
        do {
          uVar17 = (ulong)uVar7;
          lVar25 = 0;
          lVar23 = 0;
          lVar24 = 0;
          uVar16 = uVar17 << 2;
          iVar9 = (int)lVar15;
          iVar26 = iVar5 * 3 + iVar9;
          iVar27 = iVar5 * 2 + iVar9;
          iVar12 = iVar6;
          do {
            fVar28 = *(float *)(param_5 + lVar23);
            fVar29 = ((float *)(param_5 + lVar23))[1];
            iVar18 = (int)lVar25;
            fVar31 = *(float *)(param_6 + lVar23);
            fVar34 = ((float *)(param_6 + lVar23))[1];
            fVar36 = *(float *)(param_7 + lVar23);
            fVar38 = ((float *)(param_7 + lVar23))[1];
            fVar32 = fVar28 * param_3[iVar5 + iVar9 + iVar18 + 1] +
                     fVar29 * param_3[iVar5 + iVar9 + iVar18 + 2];
            fVar28 = fVar28 * param_3[iVar5 + iVar9 + iVar18 + 2] -
                     param_3[iVar5 + iVar9 + iVar18 + 1] * fVar29;
            fVar29 = *(float *)((long)param_3 + lVar15 * 4 + lVar23 + 4);
            fVar30 = fVar31 * param_3[iVar27 + iVar18 + 1] + fVar34 * param_3[iVar27 + iVar18 + 2];
            fVar33 = param_3[iVar22 + lVar25];
            fVar34 = fVar31 * param_3[iVar27 + iVar18 + 2] - param_3[iVar27 + iVar18 + 1] * fVar34;
            fVar31 = fVar36 * param_3[iVar26 + iVar18 + 1] + fVar38 * param_3[iVar26 + iVar18 + 2];
            fVar36 = fVar36 * param_3[iVar26 + iVar18 + 2] - param_3[iVar26 + iVar18 + 1] * fVar38;
            fVar38 = fVar32 + fVar31;
            fVar35 = fVar28 + fVar36;
            fVar28 = fVar28 - fVar36;
            fVar36 = fVar34 + fVar33;
            fVar37 = fVar30 + fVar29;
            fVar29 = fVar29 - fVar30;
            *(float *)(param_4 + (long)iVar20 * 4 + lVar25 * 4) = fVar38 + fVar37;
            *(float *)(param_4 + (long)iVar21 * 4 + lVar25 * 4) = fVar36 + fVar35;
            *(float *)(param_4 + lVar24 +
                      ((-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar16) - 0xc)) =
                 fVar29 - fVar28;
            iVar18 = (int)uVar17;
            uVar8 = iVar18 + 2;
            uVar17 = (ulong)uVar8;
            fVar31 = fVar31 - fVar32;
            fVar33 = fVar33 - fVar34;
            *(float *)(param_4 + (long)iVar19 * 4 + lVar24) = fVar31 - fVar33;
            *(float *)(param_4 + (long)(iVar18 + 1) * 4) = fVar28 + fVar29;
            *(float *)(param_4 + (long)(int)uVar8 * 4) = fVar33 + fVar31;
            *(float *)(param_4 + (long)iVar12 * 4) = fVar37 - fVar38;
            *(float *)(param_4 + (long)(iVar12 + 1) * 4) = fVar35 - fVar36;
            lVar24 = lVar24 + -8;
            lVar23 = lVar23 + 8;
            lVar1 = lVar25 + 4;
            lVar25 = lVar25 + 2;
            iVar12 = iVar12 + -2;
          } while (lVar1 < iVar11);
          lVar15 = lVar15 + iVar11;
          bVar10 = iVar13 != param_2 + -1;
          iVar13 = iVar13 + 1;
          uVar7 = uVar7 + iVar4;
          iVar22 = iVar22 + iVar11;
          iVar20 = iVar20 + iVar4;
          iVar21 = iVar21 + iVar4;
          iVar6 = iVar6 + iVar4;
          iVar19 = iVar19 + iVar4;
        } while (bVar10);
      }
      if ((param_1 & 1) != 0) {
        return;
      }
    }
    if (0 < param_2) {
      uVar16 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
      uVar7 = iVar11 * (param_2 + 1) - 1;
      uVar8 = iVar11 * (param_2 * 3 + 1) - 1;
      uVar17 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
      lVar15 = uVar17 + (long)(param_2 * iVar11) * 4;
      pfVar14 = param_3 + -1;
      do {
        fVar28 = *(float *)((long)pfVar14 + uVar17 + 4);
        fVar29 = *(float *)((long)pfVar14 +
                           (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2) + 4);
        fVar30 = (fVar28 + fVar29) * -0.70710677;
        fVar28 = (fVar28 - fVar29) * 0.70710677;
        pfVar2 = (float *)(uVar16 + (long)pfVar14);
        ((float *)(param_4 + uVar16))[-1] = *pfVar2 + fVar28;
        pfVar3 = (float *)(param_4 + uVar16 + (long)(iVar11 << 1) * 4);
        pfVar3[-1] = *pfVar2 - fVar28;
        *(float *)(param_4 + uVar16) = fVar30 - *(float *)((long)pfVar14 + lVar15 + 4);
        *pfVar3 = fVar30 + *(float *)((long)pfVar14 + lVar15 + 4);
        param_4 = param_4 + (-(ulong)((uint)(iVar11 << 2) >> 0x1f) & 0xfffffffc00000000 |
                            (ulong)(uint)(iVar11 << 2) << 2);
        param_2 = param_2 + -1;
        pfVar14 = pfVar2;
      } while (param_2 != 0);
    }
  }
  return;
}




void FUN_100606b44(uint param_1,int param_2,float *param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  float *pfVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar15 = param_2 * param_1;
  if (0 < param_2) {
    iVar6 = 0;
    pfVar9 = param_3;
    iVar12 = param_2;
    do {
      *(float *)(param_4 + (long)iVar6 * 4) = *pfVar9 + pfVar9[iVar15];
      *(float *)(param_4 + (long)(int)(param_1 * 2 + -1 + iVar6) * 4) = *pfVar9 - pfVar9[iVar15];
      iVar6 = iVar6 + param_1 * 2;
      pfVar9 = (float *)((long)pfVar9 +
                        (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (param_1 - 1 != 0 && 0 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        lVar8 = 0;
        iVar6 = 0;
        iVar1 = param_1 * 2;
        lVar10 = (long)(int)param_1;
        lVar11 = (long)iVar15;
        iVar13 = iVar1 + -2;
        iVar14 = param_2 * param_1 + 2;
        iVar12 = 1;
        iVar4 = 2;
        iVar5 = 2;
        iVar15 = iVar1;
        do {
          lVar16 = 0;
          lVar18 = 2;
          pfVar9 = (float *)(param_4 + -0xc + (long)iVar15 * 4);
          pfVar17 = (float *)(param_4 + (long)iVar13 * 4);
          do {
            fVar19 = *(float *)((long)param_3 + lVar11 * 4 + lVar16 + 4);
            fVar21 = *(float *)(param_5 + lVar16);
            fVar22 = ((float *)(param_5 + lVar16))[1];
            fVar23 = *(float *)((long)param_3 + lVar16 + (long)iVar14 * 4);
            fVar20 = fVar21 * fVar23 - fVar19 * fVar22;
            *(float *)(param_4 + (long)iVar5 * 4 + lVar16) =
                 *(float *)((long)param_3 + lVar16 + (long)iVar4 * 4) + fVar20;
            fVar19 = fVar21 * fVar19 + fVar22 * fVar23;
            *pfVar17 = fVar20 - *(float *)((long)param_3 + lVar16 + (long)iVar4 * 4);
            lVar2 = lVar8 * 4 + lVar16;
            *(float *)(param_4 + (long)iVar12 * 4 + lVar16) =
                 fVar19 + *(float *)((long)param_3 + lVar2 + 4);
            *pfVar9 = *(float *)((long)param_3 + lVar2 + 4) - fVar19;
            lVar18 = lVar18 + 2;
            lVar16 = lVar16 + 8;
            pfVar9 = pfVar9 + -2;
            pfVar17 = pfVar17 + -2;
          } while (lVar18 < lVar10);
          lVar8 = lVar8 + lVar10;
          bVar3 = iVar6 != param_2 + -1;
          iVar6 = iVar6 + 1;
          iVar15 = iVar15 + iVar1;
          lVar11 = lVar11 + lVar10;
          iVar12 = iVar12 + iVar1;
          iVar5 = iVar5 + iVar1;
          iVar4 = iVar4 + param_1;
          iVar13 = iVar13 + iVar1;
          iVar14 = iVar14 + param_1;
        } while (bVar3);
      }
      if ((int)param_1 % 2 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      uVar7 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      pfVar9 = param_3 + (int)(param_1 * (param_2 + 1) + -1);
      param_3 = param_3 + (int)(param_1 - 1);
      do {
        *(float *)(uVar7 + param_4) = -*pfVar9;
        ((float *)(uVar7 + param_4))[-1] = *param_3;
        param_4 = param_4 + (-(ulong)((param_1 << 1) >> 0x1f) & 0xfffffffc00000000 |
                            (ulong)(param_1 << 1) << 2);
        pfVar9 = (float *)((long)pfVar9 + uVar7);
        param_3 = (float *)((long)param_3 + uVar7);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}




void FUN_100606d70(ulong param_1,int param_2,int param_3,ulong param_4,undefined4 *param_5,
                  long param_6,float *param_7,undefined4 *param_8,float *param_9,long param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  int iVar29;
  float *pfVar30;
  float *pfVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  float *pfVar39;
  int iVar40;
  long lVar41;
  undefined4 *puVar42;
  long lVar43;
  float *pfVar44;
  ulong uVar45;
  long lVar46;
  undefined4 *puVar47;
  int iVar48;
  long lVar49;
  float *pfVar50;
  int iVar51;
  int iVar52;
  undefined8 *puVar53;
  ulong uVar54;
  ulong uVar55;
  int iVar56;
  long lVar57;
  ulong uVar58;
  long lVar59;
  ulong uVar60;
  ulong uVar61;
  long lVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar73;
  undefined8 uVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  long local_68;
  
  uVar65 = 0x40c90fdb;
  uVar66 = 0;
  auVar63._0_8_ = (double)(6.2831855 / (float)param_2);
  auVar63._8_8_ = 0;
  auVar63 = ___sincos_stret(auVar63);
  iVar14 = param_2 + 1 >> 1;
  iVar56 = (int)param_1;
  iVar38 = iVar56 + -1;
  iVar52 = iVar38 >> 1;
  uVar5 = param_3 * iVar56;
  uVar61 = (ulong)uVar5;
  iVar34 = (int)param_4;
  if (iVar38 != 0) {
    pfVar17 = param_7;
    pfVar30 = param_9;
    uVar54 = param_4;
    if (0 < iVar34) {
      do {
        *pfVar30 = *pfVar17;
        uVar6 = (int)uVar54 - 1;
        pfVar17 = pfVar17 + 1;
        pfVar30 = pfVar30 + 1;
        uVar54 = (ulong)uVar6;
      } while (uVar6 != 0);
    }
    if (1 < param_2) {
      uVar35 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar61 << 2;
      iVar40 = 1;
      uVar54 = uVar35;
      do {
        uVar55 = uVar54;
        iVar48 = param_3;
        if (0 < param_3) {
          do {
            *(undefined4 *)((long)param_8 + uVar55) = *(undefined4 *)(param_6 + uVar55);
            uVar55 = uVar55 + (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                              (param_1 & 0xffffffff) << 2);
            iVar48 = iVar48 + -1;
          } while (iVar48 != 0);
        }
        uVar54 = uVar54 + uVar35;
        bVar9 = iVar40 != param_2 + -1;
        iVar40 = iVar40 + 1;
      } while (bVar9);
    }
    if (param_3 < iVar52) {
      if (1 < param_2) {
        uVar6 = uVar5 + 2;
        iVar48 = -1;
        iVar51 = 1;
        iVar40 = 1;
        lVar49 = (long)(int)uVar5;
        do {
          if (0 < param_3) {
            iVar11 = 0;
            lVar36 = param_10 + 4 + (long)iVar48 * 4;
            lVar41 = param_10 + (long)iVar51 * 4;
            lVar59 = lVar49;
            uVar3 = uVar6;
            do {
              if (2 < iVar56) {
                lVar25 = 0;
                uVar54 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
                lVar20 = param_6 + uVar54;
                iVar32 = 2;
                do {
                  lVar37 = param_6 + lVar25 + lVar59 * 4;
                  *(float *)((long)param_8 + lVar59 * 4 + lVar25 + 4) =
                       *(float *)(lVar36 + lVar25) * *(float *)(lVar37 + 4) +
                       *(float *)(lVar41 + lVar25) * *(float *)(lVar20 + lVar25);
                  *(float *)((long)param_8 + lVar25 + uVar54) =
                       *(float *)(lVar36 + lVar25) * *(float *)(lVar20 + lVar25) -
                       *(float *)(lVar41 + lVar25) * *(float *)(lVar37 + 4);
                  iVar32 = iVar32 + 2;
                  lVar25 = lVar25 + 8;
                } while (iVar32 < iVar56);
              }
              lVar59 = lVar59 + iVar56;
              bVar9 = iVar11 != param_3 + -1;
              iVar11 = iVar11 + 1;
              uVar3 = uVar3 + iVar56;
            } while (bVar9);
          }
          iVar48 = iVar48 + iVar56;
          bVar9 = iVar40 != param_2 + -1;
          iVar40 = iVar40 + 1;
          lVar49 = lVar49 + (int)uVar5;
          iVar51 = iVar51 + iVar56;
          uVar6 = uVar6 + uVar5;
        } while (bVar9);
      }
    }
    else if (1 < param_2) {
      uVar6 = uVar5 + 2;
      iVar40 = 1;
      iVar48 = -1;
      do {
        if (2 < iVar56) {
          uVar54 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
          iVar51 = 2;
          lVar49 = (long)iVar48;
          do {
            if (0 < param_3) {
              uVar35 = uVar54;
              iVar11 = param_3;
              do {
                lVar36 = (lVar49 + 1) * 4;
                pfVar17 = (float *)(param_6 + uVar35);
                lVar41 = (long)(int)(lVar49 + 2) * 4;
                ((float *)((long)param_8 + uVar35))[-1] =
                     *(float *)(param_10 + lVar36) * pfVar17[-1] +
                     *(float *)(param_10 + lVar41) * *pfVar17;
                *(float *)((long)param_8 + uVar35) =
                     *(float *)(param_10 + lVar36) * *pfVar17 -
                     *(float *)(param_10 + lVar41) * pfVar17[-1];
                uVar35 = uVar35 + (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                                  (param_1 & 0xffffffff) << 2);
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            iVar51 = iVar51 + 2;
            uVar54 = uVar54 + 8;
            lVar49 = lVar49 + 2;
          } while (iVar51 < iVar56);
        }
        uVar6 = uVar6 + uVar5;
        bVar9 = iVar40 != param_2 + -1;
        iVar40 = iVar40 + 1;
        iVar48 = iVar48 + iVar56;
      } while (bVar9);
    }
    if (iVar52 < param_3) {
      if (1 < iVar14) {
        iVar48 = 0;
        iVar51 = uVar5 * param_2;
        uVar3 = uVar5 * (param_2 + -1) + 2;
        uVar6 = uVar5 + 2;
        iVar40 = 1;
        do {
          iVar48 = iVar48 + uVar5;
          iVar51 = iVar51 - uVar5;
          if (2 < iVar56) {
            lVar49 = 0;
            uVar35 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
            uVar54 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
            iVar11 = 2;
            iVar32 = iVar51;
            iVar16 = iVar48;
            do {
              if (0 < param_3) {
                iVar29 = 1;
                lVar36 = lVar49;
                iVar22 = param_3;
                do {
                  uVar55 = -(ulong)((uint)(iVar16 + iVar29) >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)(uint)(iVar16 + iVar29) << 2;
                  uVar58 = -(ulong)((uint)(iVar32 + iVar29) >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)(uint)(iVar32 + iVar29) << 2;
                  *(float *)(param_6 + uVar55) =
                       *(float *)((long)param_8 + uVar55) + *(float *)((long)param_8 + uVar58);
                  *(float *)(param_6 + uVar58) =
                       *(float *)((long)param_8 + lVar36 + uVar54) -
                       *(float *)((long)param_8 + lVar36 + uVar35);
                  *(float *)(param_6 + uVar54 + lVar36) =
                       *(float *)((long)param_8 + lVar36 + uVar54) +
                       *(float *)((long)param_8 + lVar36 + uVar35);
                  *(float *)(param_6 + uVar35 + lVar36) =
                       *(float *)((long)param_8 + uVar58) - *(float *)((long)param_8 + uVar55);
                  iVar22 = iVar22 + -1;
                  lVar36 = lVar36 + (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                                    (param_1 & 0xffffffff) << 2);
                  iVar29 = iVar29 + iVar56;
                } while (iVar22 != 0);
              }
              iVar11 = iVar11 + 2;
              lVar49 = lVar49 + 8;
              iVar32 = iVar32 + 2;
              iVar16 = iVar16 + 2;
            } while (iVar11 < iVar56);
          }
          uVar3 = uVar3 - uVar5;
          bVar9 = iVar40 != iVar14 + -1;
          iVar40 = iVar40 + 1;
          uVar6 = uVar6 + uVar5;
        } while (bVar9);
      }
    }
    else if (1 < iVar14) {
      iVar48 = uVar5 * (param_2 + -1);
      uVar3 = uVar5 * (param_2 + -1) + 2;
      uVar6 = uVar5 + 2;
      iVar40 = 1;
      lVar49 = (long)(int)uVar5;
      do {
        if (0 < param_3) {
          iVar51 = 0;
          lVar36 = (long)iVar48;
          lVar41 = lVar49;
          uVar2 = uVar6;
          uVar1 = uVar3;
          do {
            if (2 < iVar56) {
              lVar59 = 0;
              uVar54 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
              uVar35 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
              iVar11 = 2;
              do {
                lVar25 = lVar41 * 4 + lVar59;
                lVar20 = lVar36 * 4 + lVar59;
                *(float *)(param_6 + lVar59 + lVar41 * 4 + 4) =
                     *(float *)((long)param_8 + lVar25 + 4) + *(float *)((long)param_8 + lVar20 + 4)
                ;
                *(float *)(param_6 + lVar59 + lVar36 * 4 + 4) =
                     *(float *)((long)param_8 + lVar59 + uVar35) -
                     *(float *)((long)param_8 + lVar59 + uVar54);
                *(float *)(param_6 + uVar35 + lVar59) =
                     *(float *)((long)param_8 + lVar59 + uVar35) +
                     *(float *)((long)param_8 + lVar59 + uVar54);
                *(float *)(param_6 + uVar54 + lVar59) =
                     *(float *)((long)param_8 + lVar20 + 4) - *(float *)((long)param_8 + lVar25 + 4)
                ;
                iVar11 = iVar11 + 2;
                lVar59 = lVar59 + 8;
              } while (iVar11 < iVar56);
            }
            lVar36 = lVar36 + iVar56;
            bVar9 = iVar51 != param_3 + -1;
            iVar51 = iVar51 + 1;
            lVar41 = lVar41 + iVar56;
            uVar1 = uVar1 + iVar56;
            uVar2 = uVar2 + iVar56;
          } while (bVar9);
        }
        iVar48 = iVar48 - uVar5;
        bVar9 = iVar40 != iVar14 + -1;
        iVar40 = iVar40 + 1;
        lVar49 = lVar49 + (int)uVar5;
        uVar3 = uVar3 - uVar5;
        uVar6 = uVar6 + uVar5;
      } while (bVar9);
    }
  }
  uVar35 = (ulong)(iVar34 - 1);
  pfVar17 = param_9;
  pfVar30 = param_7;
  uVar54 = param_4;
  if (0 < iVar34) {
    do {
      *pfVar30 = *pfVar17;
      uVar6 = (int)uVar54 - 1;
      pfVar17 = pfVar17 + 1;
      pfVar30 = pfVar30 + 1;
      uVar54 = (ulong)uVar6;
    } while (uVar6 != 0);
  }
  if (1 < iVar14) {
    iVar48 = iVar14 + -1;
    uVar55 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar61 << 2;
    uVar58 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
    uVar6 = iVar34 * param_2 - uVar5;
    iVar40 = 1;
    uVar54 = uVar55;
    do {
      if (0 < param_3) {
        uVar45 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        uVar60 = uVar54;
        iVar51 = param_3;
        do {
          *(float *)(param_6 + uVar60) =
               *(float *)((long)param_8 + uVar60) + *(float *)((long)param_8 + uVar45);
          *(float *)(param_6 + uVar45) =
               *(float *)((long)param_8 + uVar45) - *(float *)((long)param_8 + uVar60);
          iVar51 = iVar51 + -1;
          uVar60 = uVar60 + uVar58;
          uVar45 = uVar45 + uVar58;
        } while (iVar51 != 0);
      }
      uVar54 = uVar54 + uVar55;
      bVar9 = iVar40 != iVar48;
      iVar40 = iVar40 + 1;
      uVar6 = uVar6 - uVar5;
    } while (bVar9);
    if (1 < iVar14) {
      lVar49 = 0;
      lVar59 = (long)iVar34;
      uVar6 = (param_2 + -1) * iVar34;
      uVar55 = (ulong)uVar6;
      lVar41 = (long)(int)uVar6;
      iVar51 = (param_2 + -2) * iVar34;
      lVar36 = (long)(iVar34 << 1);
      uVar54 = uVar35 + 1;
      iVar11 = -iVar34;
      uVar60 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
      uVar58 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar55 << 2;
      pfVar17 = (float *)((long)param_7 + uVar58);
      fVar68 = 1.0;
      iVar40 = 1;
      fVar67 = 0.0;
      local_68 = lVar59;
      pfVar30 = param_9;
      do {
        pfVar30 = (float *)((long)pfVar30 + uVar60);
        iVar32 = (int)uVar55;
        lVar25 = (long)iVar32;
        pfVar13 = param_9 + lVar59 + lVar59 * lVar49;
        pfVar31 = param_9 + lVar59 + uVar35 + lVar59 * lVar49;
        fVar70 = (float)auVar63._0_8_ * fVar68;
        fVar68 = (float)(double)CONCAT44(uVar66,uVar65) * fVar68 - (float)auVar63._0_8_ * fVar67;
        fVar67 = (float)(double)CONCAT44(uVar66,uVar65) * fVar67 + fVar70;
        uVar45 = (ulong)(iVar34 - 1);
        if (0 < iVar34) {
          uVar55 = uVar54 & 0x1fffffffc;
          lVar26 = local_68;
          lVar20 = lVar25;
          lVar37 = lVar41;
          lVar46 = lVar59;
          if (uVar55 == 0) {
LAB_100607650:
            uVar33 = 0;
          }
          else {
            uVar33 = 0;
            iVar16 = uVar6 + iVar11 * (int)lVar49;
            pfVar28 = param_9 + iVar16;
            pfVar24 = param_9 + uVar35 + (long)iVar16;
            if ((pfVar24 < pfVar13 || pfVar31 < pfVar28) &&
               (param_7 + uVar35 < pfVar13 || pfVar31 < param_7)) {
              if ((pfVar13 <= param_7 + lVar59 + uVar35 &&
                   (float *)((long)param_7 + uVar60) <= pfVar31) ||
                 (((pfVar13 <= param_7 + lVar41 + uVar35 && pfVar17 <= pfVar31 ||
                   (pfVar28 <= param_7 + uVar35 && param_7 <= pfVar24)) ||
                  (pfVar28 <= param_7 + lVar59 + uVar35 &&
                   (float *)((long)param_7 + uVar60) <= pfVar24)))) goto LAB_100607650;
              if (param_7 + lVar41 + uVar35 < pfVar28 || pfVar24 < pfVar17) {
                lVar20 = lVar25 + uVar55;
                lVar37 = lVar41 + uVar55;
                lVar46 = lVar59 + uVar55;
                lVar26 = local_68 + uVar55;
                uVar19 = uVar54 & 0xfffffffffffffffc;
                pfVar18 = param_9 + iVar32;
                pfVar24 = pfVar30;
                pfVar28 = param_7;
                do {
                  uVar74 = ((undefined8 *)(uVar60 + (long)pfVar28))[1];
                  uVar73 = *(undefined8 *)(uVar60 + (long)pfVar28);
                  auVar71._0_8_ =
                       CONCAT44(pfVar28[1] + fVar68 * (float)((ulong)uVar73 >> 0x20),
                                *pfVar28 + fVar68 * (float)uVar73);
                  auVar71._8_4_ = pfVar28[2] + fVar68 * (float)uVar74;
                  auVar71._12_4_ = pfVar28[3] + fVar68 * (float)((ulong)uVar74 >> 0x20);
                  *(undefined8 *)pfVar24 = auVar71._0_8_;
                  auVar71 = NEON_ext(auVar71,auVar71,8,1);
                  *(long *)(pfVar24 + 2) = auVar71._0_8_;
                  pfVar27 = (float *)(uVar58 + (long)pfVar28);
                  auVar72._0_8_ = CONCAT44(fVar67 * pfVar27[1],fVar67 * *pfVar27);
                  auVar72._8_4_ = fVar67 * pfVar27[2];
                  auVar72._12_4_ = fVar67 * pfVar27[3];
                  *(undefined8 *)pfVar18 = auVar72._0_8_;
                  auVar71 = NEON_ext(auVar72,auVar72,8,1);
                  *(long *)(pfVar18 + 2) = auVar71._0_8_;
                  uVar19 = uVar19 - 4;
                  pfVar28 = pfVar28 + 4;
                  pfVar24 = pfVar24 + 4;
                  pfVar18 = pfVar18 + 4;
                  uVar33 = uVar55;
                } while (uVar19 != 0);
              }
            }
          }
          if (uVar54 != uVar33) {
            iVar16 = iVar34 - (int)uVar33;
            pfVar28 = param_7 + uVar33;
            pfVar24 = param_9 + lVar20;
            pfVar18 = param_7 + lVar37;
            pfVar27 = param_7 + lVar46;
            pfVar39 = param_9 + lVar26;
            do {
              *pfVar39 = *pfVar28 + fVar68 * *pfVar27;
              *pfVar24 = fVar67 * *pfVar18;
              iVar16 = iVar16 + -1;
              pfVar28 = pfVar28 + 1;
              pfVar24 = pfVar24 + 1;
              pfVar18 = pfVar18 + 1;
              pfVar27 = pfVar27 + 1;
              pfVar39 = pfVar39 + 1;
            } while (iVar16 != 0);
          }
        }
        if (2 < iVar14) {
          lVar20 = 0;
          iVar16 = uVar6 + iVar11 * (int)lVar49;
          pfVar28 = param_9 + iVar16;
          pfVar24 = param_9 + uVar35 + (long)iVar16;
          iVar16 = 2;
          lVar37 = lVar36;
          pfVar18 = param_7 + (iVar34 << 1);
          fVar70 = fVar68;
          fVar69 = fVar67;
          iVar29 = iVar51;
          do {
            fVar75 = fVar67 * fVar70;
            fVar70 = fVar68 * fVar70 - fVar67 * fVar69;
            fVar69 = fVar68 * fVar69 + fVar75;
            if (0 < iVar34) {
              lVar26 = (long)iVar29;
              lVar46 = uVar54 + lVar26;
              uVar55 = uVar54 & 0x1fffffffc;
              lVar23 = lVar37;
              lVar57 = lVar25;
              lVar62 = local_68;
              if (uVar55 == 0) {
                iVar22 = 0;
              }
              else {
                uVar33 = 0;
                iVar22 = 0;
                iVar4 = iVar51 + iVar11 * (int)lVar20;
                if (((pfVar24 < pfVar13 || pfVar31 < pfVar28) &&
                    (param_7 + lVar36 + uVar35 + lVar59 * lVar20 < pfVar13 ||
                     pfVar31 < param_7 + lVar36 + lVar59 * lVar20)) &&
                   ((param_7 + uVar35 + (long)iVar4 < pfVar13 || pfVar31 < param_7 + iVar4 &&
                    (param_7 + lVar36 + uVar35 + lVar59 * lVar20 < pfVar28 ||
                     pfVar24 < param_7 + lVar36 + lVar59 * lVar20)))) {
                  if (pfVar28 <= param_7 + uVar35 + (long)iVar4 && param_7 + iVar4 <= pfVar24)
                  goto LAB_1006078c0;
                  lVar43 = 0;
                  lVar26 = uVar55 + lVar26;
                  lVar62 = local_68 + uVar55;
                  lVar57 = lVar25 + uVar55;
                  lVar23 = lVar37 + uVar55;
                  pfVar27 = pfVar18;
                  uVar19 = uVar54 & 0xfffffffffffffffc;
                  do {
                    puVar53 = (undefined8 *)((long)pfVar30 + lVar43);
                    auVar76._0_8_ =
                         CONCAT44((float)((ulong)*puVar53 >> 0x20) + fVar70 * pfVar27[1],
                                  (float)*puVar53 + fVar70 * *pfVar27);
                    auVar76._8_4_ = (float)puVar53[1] + fVar70 * pfVar27[2];
                    auVar76._12_4_ = (float)((ulong)puVar53[1] >> 0x20) + fVar70 * pfVar27[3];
                    *puVar53 = auVar76._0_8_;
                    auVar71 = NEON_ext(auVar76,auVar76,8,1);
                    puVar53[1] = auVar71._0_8_;
                    pfVar39 = (float *)((long)param_7 + lVar43 + (long)iVar29 * 4);
                    puVar53 = (undefined8 *)((long)(param_9 + iVar32) + lVar43);
                    auVar77._0_8_ =
                         CONCAT44((float)((ulong)*puVar53 >> 0x20) + fVar69 * pfVar39[1],
                                  (float)*puVar53 + fVar69 * *pfVar39);
                    auVar77._8_4_ = (float)puVar53[1] + fVar69 * pfVar39[2];
                    auVar77._12_4_ = (float)((ulong)puVar53[1] >> 0x20) + fVar69 * pfVar39[3];
                    *puVar53 = auVar77._0_8_;
                    auVar71 = NEON_ext(auVar77,auVar77,8,1);
                    puVar53[1] = auVar71._0_8_;
                    uVar19 = uVar19 - 4;
                    lVar43 = lVar43 + 0x10;
                    pfVar27 = pfVar27 + 4;
                    uVar33 = uVar55;
                  } while (uVar19 != 0);
                }
                iVar22 = (int)uVar33;
              }
LAB_1006078c0:
              if (lVar46 != lVar26) {
                iVar22 = iVar34 - iVar22;
                pfVar27 = param_7 + lVar26;
                pfVar39 = param_9 + lVar62;
                pfVar44 = param_9 + lVar57;
                pfVar50 = param_7 + lVar23;
                do {
                  *pfVar39 = *pfVar39 + fVar70 * *pfVar50;
                  *pfVar44 = *pfVar44 + fVar69 * *pfVar27;
                  iVar22 = iVar22 + -1;
                  pfVar27 = pfVar27 + 1;
                  pfVar39 = pfVar39 + 1;
                  pfVar44 = pfVar44 + 1;
                  pfVar50 = pfVar50 + 1;
                } while (iVar22 != 0);
              }
            }
            iVar29 = iVar29 - iVar34;
            bVar9 = iVar16 != iVar48;
            iVar16 = iVar16 + 1;
            lVar37 = lVar37 + lVar59;
            lVar20 = lVar20 + 1;
            pfVar18 = (float *)((long)pfVar18 + uVar60);
          } while (bVar9);
        }
        local_68 = local_68 + lVar59;
        bVar9 = iVar40 != iVar48;
        iVar40 = iVar40 + 1;
        uVar55 = (ulong)(uint)(iVar32 - iVar34);
        lVar49 = lVar49 + 1;
      } while (bVar9);
      if (1 < iVar14) {
        lVar49 = 0;
        lVar41 = (long)iVar34;
        uVar54 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
        puVar53 = (undefined8 *)((long)param_7 + uVar54 + 0x10);
        iVar40 = 1;
        lVar36 = lVar41;
        do {
          if (0 < iVar34) {
            uVar35 = uVar45 + 1 & 0x1fffffff8;
            if ((uVar35 == 0) ||
               (param_9 <= param_7 + lVar41 + uVar45 + lVar41 * lVar49 &&
                param_7 + lVar41 + lVar41 * lVar49 <= param_9 + uVar45)) {
              uVar35 = 0;
              lVar59 = lVar36;
            }
            else {
              lVar59 = lVar36 + uVar35;
              puVar21 = puVar53;
              pfVar17 = param_9 + 4;
              uVar55 = uVar45 + 1 & 0xfffffffffffffff8;
              do {
                auVar64._0_8_ =
                     CONCAT44(*(float *)((long)puVar21 + -0xc) +
                              (float)((ulong)*(undefined8 *)(pfVar17 + -4) >> 0x20),
                              *(float *)(puVar21 + -2) + (float)*(undefined8 *)(pfVar17 + -4));
                auVar64._8_4_ = *(float *)(puVar21 + -1) + (float)*(undefined8 *)(pfVar17 + -2);
                auVar64._12_4_ =
                     *(float *)((long)puVar21 + -4) +
                     (float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20);
                fVar67 = (float)*puVar21 + (float)*(undefined8 *)pfVar17;
                fVar68 = (float)((ulong)*puVar21 >> 0x20) +
                         (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
                fVar70 = (float)puVar21[1] + (float)*(undefined8 *)(pfVar17 + 2);
                fVar69 = (float)((ulong)puVar21[1] >> 0x20) +
                         (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                *(undefined8 *)(pfVar17 + -4) = auVar64._0_8_;
                auVar63 = NEON_ext(auVar64,auVar64,8,1);
                *(long *)(pfVar17 + -2) = auVar63._0_8_;
                *(ulong *)pfVar17 = CONCAT44(fVar68,fVar67);
                auVar7._4_4_ = fVar68;
                auVar7._0_4_ = fVar67;
                auVar7._8_4_ = fVar70;
                auVar7._12_4_ = fVar69;
                auVar8._4_4_ = fVar68;
                auVar8._0_4_ = fVar67;
                auVar8._8_4_ = fVar70;
                auVar8._12_4_ = fVar69;
                auVar63 = NEON_ext(auVar7,auVar8,8,1);
                *(long *)(pfVar17 + 2) = auVar63._0_8_;
                uVar55 = uVar55 - 8;
                pfVar17 = pfVar17 + 8;
                puVar21 = puVar21 + 4;
              } while (uVar55 != 0);
            }
            if (uVar45 + 1 != uVar35) {
              iVar51 = iVar34 - (int)uVar35;
              pfVar17 = param_9 + uVar35;
              pfVar30 = param_7 + lVar59;
              do {
                *pfVar17 = *pfVar30 + *pfVar17;
                iVar51 = iVar51 + -1;
                pfVar17 = pfVar17 + 1;
                pfVar30 = pfVar30 + 1;
              } while (iVar51 != 0);
            }
          }
          lVar36 = lVar36 + lVar41;
          bVar9 = iVar40 != iVar48;
          iVar40 = iVar40 + 1;
          lVar49 = lVar49 + 1;
          puVar53 = (undefined8 *)((long)puVar53 + uVar54);
        } while (bVar9);
      }
    }
  }
  if (iVar56 < param_3) {
    if (0 < iVar56) {
      iVar34 = 0;
      puVar42 = param_8;
      puVar47 = param_5;
      do {
        puVar12 = puVar42;
        puVar15 = puVar47;
        iVar40 = param_3;
        if (0 < param_3) {
          do {
            *puVar15 = *puVar12;
            puVar15 = (undefined4 *)
                      ((long)puVar15 +
                      (-(ulong)((uint)(param_2 * iVar56) >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(uint)(param_2 * iVar56) << 2));
            puVar12 = (undefined4 *)
                      ((long)puVar12 +
                      (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2));
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
        }
        puVar47 = puVar47 + 1;
        bVar9 = iVar34 != iVar38;
        iVar34 = iVar34 + 1;
        puVar42 = puVar42 + 1;
      } while (bVar9);
    }
  }
  else if (0 < param_3) {
    iVar38 = 0;
    puVar42 = param_8;
    puVar47 = param_5;
    do {
      uVar54 = param_1;
      puVar15 = puVar42;
      puVar12 = puVar47;
      if (0 < iVar56) {
        do {
          *puVar12 = *puVar15;
          uVar6 = (int)uVar54 - 1;
          uVar54 = (ulong)uVar6;
          puVar15 = puVar15 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar6 != 0);
      }
      puVar47 = (undefined4 *)
                ((long)puVar47 +
                (-(ulong)((uint)(param_2 * iVar56) >> 0x1f) & 0xfffffffc00000000 |
                (ulong)(uint)(param_2 * iVar56) << 2));
      bVar9 = iVar38 != param_3 + -1;
      iVar38 = iVar38 + 1;
      puVar42 = (undefined4 *)
                ((long)puVar42 +
                (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2));
    } while (bVar9);
  }
  iVar38 = iVar14 + -1;
  if (1 < iVar14) {
    iVar40 = uVar5 * (param_2 + -1);
    uVar54 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
    iVar34 = 1;
    puVar42 = param_5;
    puVar47 = param_8;
    do {
      puVar47 = (undefined4 *)
                ((long)puVar47 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar61 << 2));
      puVar42 = (undefined4 *)
                ((long)puVar42 +
                (-(ulong)((uint)(iVar56 << 1) >> 0x1f) & 0xfffffffc00000000 |
                (ulong)(uint)(iVar56 << 1) << 2));
      if (0 < param_3) {
        puVar15 = param_8 + iVar40;
        puVar10 = puVar47;
        puVar12 = puVar42;
        iVar48 = param_3;
        do {
          puVar12[-1] = *puVar10;
          *puVar12 = *puVar15;
          puVar12 = (undefined4 *)
                    ((long)puVar12 +
                    (-(ulong)((uint)(param_2 * iVar56) >> 0x1f) & 0xfffffffc00000000 |
                    (ulong)(uint)(param_2 * iVar56) << 2));
          puVar10 = (undefined4 *)((long)puVar10 + uVar54);
          puVar15 = (undefined4 *)((long)puVar15 + uVar54);
          iVar48 = iVar48 + -1;
        } while (iVar48 != 0);
      }
      iVar40 = iVar40 - uVar5;
      bVar9 = iVar34 != iVar38;
      iVar34 = iVar34 + 1;
    } while (bVar9);
  }
  if (iVar56 != 1) {
    if (iVar52 < param_3) {
      if (1 < iVar14) {
        uVar3 = uVar5 * (param_2 + -1) + 2;
        uVar6 = uVar5 + 2;
        iVar40 = iVar56 * 2;
        iVar14 = iVar40 + 2;
        iVar34 = iVar40 + -2;
        iVar52 = 1;
        do {
          if (2 < iVar56) {
            iVar48 = 2;
            iVar51 = iVar14;
            iVar11 = iVar34;
            uVar2 = uVar6;
            uVar1 = uVar3;
            do {
              if (0 < param_3) {
                lVar49 = 0;
                puVar47 = param_8;
                iVar32 = param_3;
                do {
                  pfVar17 = (float *)((long)puVar47 +
                                     (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar2 << 2));
                  pfVar30 = (float *)((long)puVar47 +
                                     (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar1 << 2));
                  pfVar13 = (float *)((long)param_5 + lVar49 + (long)iVar51 * 4);
                  pfVar13[-1] = pfVar17[-1] + pfVar30[-1];
                  pfVar31 = (float *)((long)param_5 + lVar49 + (long)iVar11 * 4);
                  pfVar31[-1] = pfVar17[-1] - pfVar30[-1];
                  *pfVar13 = *pfVar17 + *pfVar30;
                  lVar49 = lVar49 + (-(ulong)((uint)(param_2 * iVar56) >> 0x1f) & 0xfffffffc00000000
                                    | (ulong)(uint)(param_2 * iVar56) << 2);
                  puVar47 = (undefined4 *)
                            ((long)puVar47 +
                            (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                            (param_1 & 0xffffffff) << 2));
                  iVar32 = iVar32 + -1;
                  *pfVar31 = *pfVar30 - *pfVar17;
                } while (iVar32 != 0);
              }
              iVar48 = iVar48 + 2;
              uVar1 = uVar1 + 2;
              uVar2 = uVar2 + 2;
              iVar51 = iVar51 + 2;
              iVar11 = iVar11 + -2;
            } while (iVar48 < iVar56);
          }
          uVar3 = uVar3 - uVar5;
          bVar9 = iVar52 != iVar38;
          iVar52 = iVar52 + 1;
          uVar6 = uVar6 + uVar5;
          iVar14 = iVar14 + iVar40;
          iVar34 = iVar34 + iVar40;
        } while (bVar9);
      }
    }
    else if (1 < iVar14) {
      iVar52 = uVar5 * (param_2 + -1);
      uVar61 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar61 << 2;
      uVar54 = -(ulong)((uint)(iVar56 << 1) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar56 << 1) << 2;
      pfVar17 = (float *)((long)param_5 + uVar54 + 8);
      uVar35 = -(ulong)((uint)(param_2 * iVar56) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(param_2 * iVar56) << 2;
      uVar55 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
      pfVar30 = (float *)((long)param_8 + uVar61 + 8);
      pfVar13 = (float *)(param_5 + (long)iVar56 * 2 + -3);
      iVar14 = 1;
      do {
        if (0 < param_3) {
          iVar34 = 0;
          pfVar31 = (float *)(param_8 + (long)iVar52 + 2);
          pfVar18 = pfVar13;
          pfVar24 = pfVar30;
          pfVar28 = pfVar17;
          do {
            lVar49 = 2;
            pfVar27 = pfVar18;
            pfVar39 = pfVar24;
            pfVar44 = pfVar31;
            pfVar50 = pfVar28;
            if (2 < iVar56) {
              do {
                pfVar50[-1] = pfVar39[-1] + pfVar44[-1];
                *pfVar27 = pfVar39[-1] - pfVar44[-1];
                *pfVar50 = *pfVar39 + *pfVar44;
                lVar49 = lVar49 + 2;
                pfVar27[1] = *pfVar44 - *pfVar39;
                pfVar27 = pfVar27 + -2;
                pfVar39 = pfVar39 + 2;
                pfVar44 = pfVar44 + 2;
                pfVar50 = pfVar50 + 2;
              } while (lVar49 < iVar56);
            }
            pfVar28 = (float *)((long)pfVar28 + uVar35);
            bVar9 = iVar34 != param_3 + -1;
            iVar34 = iVar34 + 1;
            pfVar31 = (float *)((long)pfVar31 + uVar55);
            pfVar24 = (float *)((long)pfVar24 + uVar55);
            pfVar18 = (float *)((long)pfVar18 + uVar35);
          } while (bVar9);
        }
        iVar52 = iVar52 - uVar5;
        bVar9 = iVar14 != iVar38;
        iVar14 = iVar14 + 1;
        pfVar17 = (float *)((long)pfVar17 + uVar54);
        pfVar30 = (float *)((long)pfVar30 + uVar61);
        pfVar13 = (float *)((long)pfVar13 + uVar54);
      } while (bVar9);
    }
  }
  return;
}




void FUN_100607e60(ulong param_1,int param_2,float *param_3,float *param_4,long param_5,long param_6
                  ,long param_7)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  iVar9 = (int)param_1;
  if (0 < param_2) {
    uVar3 = iVar9 * 4;
    iVar11 = uVar3 - 1;
    uVar5 = param_2 * iVar9;
    pfVar20 = param_4;
    pfVar21 = param_3;
    iVar18 = param_2;
    do {
      pfVar2 = (float *)((long)pfVar21 +
                        (-(ulong)((uint)(iVar9 << 1) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar9 << 1) << 2));
      fVar30 = pfVar2[-1];
      fVar31 = *pfVar2;
      fVar30 = fVar30 + fVar30;
      fVar32 = *pfVar21 + param_3[iVar11];
      fVar31 = fVar31 + fVar31;
      fVar29 = *pfVar21 - param_3[iVar11];
      *pfVar20 = fVar30 + fVar32;
      pfVar20[(int)uVar5] = fVar29 - fVar31;
      *(float *)((-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3) + (long)pfVar20)
           = fVar32 - fVar30;
      pfVar20[(long)(int)uVar5 * 3] = fVar31 + fVar29;
      pfVar21 = (float *)((long)pfVar21 +
                         (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
      iVar11 = iVar11 + uVar3;
      pfVar20 = (float *)((long)pfVar20 +
                         (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2)
                         );
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  uVar3 = iVar9 - 1;
  if (uVar3 != 0 && 0 < iVar9) {
    if (iVar9 != 2) {
      if (0 < param_2) {
        lVar12 = 0;
        iVar18 = 0;
        uVar4 = iVar9 * 4;
        iVar14 = iVar9 * 2;
        iVar11 = iVar14 + 2;
        iVar17 = iVar14 + -2;
        iVar19 = uVar4 - 2;
        iVar6 = param_2 * iVar9;
        iVar22 = 1;
        iVar23 = 2;
        iVar24 = 2;
        uVar5 = uVar4;
        do {
          lVar28 = 0;
          lVar25 = 0;
          lVar26 = 0;
          iVar7 = (int)lVar12;
          iVar10 = iVar6 * 3 + iVar7;
          iVar15 = iVar6 * 2 + iVar7;
          do {
            fVar29 = *(float *)((long)param_3 + lVar25 + (long)iVar19 * 4);
            fVar32 = param_3[iVar24 + lVar28] + fVar29;
            fVar29 = param_3[iVar24 + lVar28] - fVar29;
            fVar31 = *(float *)((long)param_3 + lVar25 + (long)iVar17 * 4);
            fVar33 = param_3[iVar11 + lVar28] - fVar31;
            fVar35 = *(float *)((long)param_3 +
                               ((-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) -
                               0xc) + lVar25);
            fVar31 = param_3[iVar11 + lVar28] + fVar31;
            fVar37 = param_3[iVar22 + lVar28] - fVar35;
            fVar30 = *(float *)((long)param_3 + lVar25 + (long)iVar14 * 4 + -0xc);
            fVar35 = param_3[iVar22 + lVar28] + fVar35;
            fVar36 = param_3[(long)iVar14 + lVar28 + 1] - fVar30;
            fVar30 = param_3[(long)iVar14 + lVar28 + 1] + fVar30;
            *(float *)((long)param_4 + lVar12 * 4 + lVar26 + 4) = fVar35 + fVar30;
            fVar35 = fVar35 - fVar30;
            fVar30 = fVar29 - fVar33;
            fVar34 = fVar37 - fVar31;
            param_4[iVar23 + lVar28] = fVar29 + fVar33;
            fVar31 = fVar31 + fVar37;
            fVar29 = fVar32 + fVar36;
            pfVar21 = (float *)(param_5 + lVar26);
            iVar27 = (int)lVar28;
            param_4[iVar6 + iVar7 + iVar27 + 1] = fVar34 * *pfVar21 - pfVar21[1] * fVar29;
            fVar32 = fVar32 - fVar36;
            param_4[iVar6 + iVar7 + iVar27 + 2] = fVar29 * *pfVar21 + fVar34 * pfVar21[1];
            pfVar21 = (float *)(param_6 + lVar26);
            param_4[iVar15 + iVar27 + 1] = fVar35 * *pfVar21 - fVar30 * pfVar21[1];
            pfVar20 = (float *)(param_7 + lVar26);
            param_4[iVar15 + iVar27 + 2] = fVar30 * *pfVar21 + fVar35 * pfVar21[1];
            param_4[iVar10 + iVar27 + 1] = fVar31 * *pfVar20 - fVar32 * pfVar20[1];
            lVar26 = lVar26 + 8;
            lVar25 = lVar25 + -8;
            lVar1 = lVar28 + 4;
            lVar28 = lVar28 + 2;
            param_4[iVar10 + iVar27 + 2] = fVar32 * *pfVar20 + fVar31 * pfVar20[1];
          } while (lVar1 < iVar9);
          iVar14 = iVar14 + uVar4;
          bVar8 = iVar18 != param_2 + -1;
          iVar18 = iVar18 + 1;
          uVar5 = uVar5 + uVar4;
          lVar12 = lVar12 + iVar9;
          iVar22 = iVar22 + uVar4;
          iVar24 = iVar24 + uVar4;
          iVar11 = iVar11 + uVar4;
          iVar17 = iVar17 + uVar4;
          iVar19 = iVar19 + uVar4;
          iVar23 = iVar23 + iVar9;
        } while (bVar8);
      }
      if (iVar9 % 2 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      uVar13 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      iVar11 = param_2 * iVar9;
      uVar16 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
      do {
        pfVar21 = (float *)((long)param_3 + uVar16);
        pfVar20 = (float *)((long)param_3 +
                           (-(ulong)((uint)(iVar9 * 3) >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)(uint)(iVar9 * 3) << 2));
        fVar29 = *pfVar21;
        fVar30 = *pfVar20;
        fVar31 = pfVar21[-1];
        fVar32 = pfVar20[-1];
        fVar37 = fVar29 + fVar30;
        fVar30 = fVar30 - fVar29;
        fVar29 = fVar31 - fVar32;
        fVar31 = fVar31 + fVar32;
        *(float *)(uVar13 + (long)param_4) = fVar31 + fVar31;
        *(float *)(uVar13 + (long)iVar11 * 4 + (long)param_4) = (fVar29 - fVar37) * 1.4142135;
        *(float *)(uVar13 + (long)iVar11 * 8 + (long)param_4) = fVar30 + fVar30;
        *(float *)(uVar13 + (long)iVar11 * 0xc + (long)param_4) = (fVar37 + fVar29) * -1.4142135;
        param_3 = (float *)((long)param_3 +
                           (-(ulong)((uint)(iVar9 << 2) >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)(uint)(iVar9 << 2) << 2));
        param_4 = (float *)((long)param_4 + uVar16);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}




void FUN_100608260(uint param_1,int param_2,long param_3,float *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  
  uVar7 = param_2 * param_1;
  if (0 < param_2) {
    uVar12 = 0;
    pfVar14 = param_4;
    iVar15 = param_2;
    do {
      uVar17 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      uVar3 = param_1 * 2 + -1 + (int)uVar12;
      uVar19 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      *pfVar14 = *(float *)(param_3 + uVar17) + *(float *)(param_3 + uVar19);
      pfVar14[(int)uVar7] = *(float *)(param_3 + uVar17) - *(float *)(param_3 + uVar19);
      uVar12 = (ulong)((int)uVar12 + param_1 * 2);
      pfVar14 = (float *)((long)pfVar14 +
                         (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  uVar3 = param_1 - 1;
  if (uVar3 != 0 && 0 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        lVar13 = 0;
        iVar15 = 0;
        iVar6 = param_1 * 2;
        iVar16 = param_2 * param_1 + 2;
        iVar18 = iVar6 + -2;
        iVar9 = 1;
        iVar10 = 2;
        iVar11 = 2;
        iVar20 = iVar6;
        uVar4 = uVar7;
        do {
          lVar21 = 0;
          lVar1 = param_3 + (long)iVar9 * 4;
          lVar2 = param_3 + (long)iVar11 * 4;
          lVar23 = 2;
          pfVar14 = (float *)(param_3 + -0xc + (long)iVar20 * 4);
          pfVar22 = (float *)(param_3 + (long)iVar18 * 4);
          do {
            *(float *)((long)param_4 + lVar13 * 4 + lVar21 + 4) =
                 *(float *)(lVar1 + lVar21) + *pfVar14;
            fVar24 = *(float *)(lVar1 + lVar21);
            fVar25 = *pfVar14;
            *(float *)((long)param_4 + lVar21 + (long)iVar10 * 4) =
                 *(float *)(lVar2 + lVar21) - *pfVar22;
            fVar24 = fVar24 - fVar25;
            fVar25 = *(float *)(lVar2 + lVar21) + *pfVar22;
            pfVar5 = (float *)(param_5 + lVar21);
            *(float *)((long)param_4 +
                      (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2) + 4 +
                      lVar21) = fVar24 * *pfVar5 - fVar25 * pfVar5[1];
            *(float *)((long)param_4 + lVar21 + (long)iVar16 * 4) =
                 fVar25 * *pfVar5 + fVar24 * pfVar5[1];
            lVar23 = lVar23 + 2;
            lVar21 = lVar21 + 8;
            pfVar14 = pfVar14 + -2;
            pfVar22 = pfVar22 + -2;
          } while (lVar23 < (int)param_1);
          uVar4 = uVar4 + param_1;
          bVar8 = iVar15 != param_2 + -1;
          iVar15 = iVar15 + 1;
          iVar20 = iVar20 + iVar6;
          lVar13 = lVar13 + (int)param_1;
          iVar16 = iVar16 + param_1;
          iVar18 = iVar18 + iVar6;
          iVar9 = iVar9 + iVar6;
          iVar11 = iVar11 + iVar6;
          iVar10 = iVar10 + param_1;
        } while (bVar8);
      }
      if ((int)param_1 % 2 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      lVar13 = 0;
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      pfVar14 = (float *)(uVar12 + param_3 + 4);
      do {
        *(float *)((long)param_4 + lVar13 + uVar12) = pfVar14[-1] + pfVar14[-1];
        *(float *)((long)param_4 + lVar13 + ((long)(int)uVar3 + (long)(int)uVar7) * 4) =
             -(*pfVar14 + *pfVar14);
        lVar13 = lVar13 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2);
        pfVar14 = (float *)((long)pfVar14 +
                           (-(ulong)((param_1 << 1) >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)(param_1 << 1) << 2));
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}




void FUN_1006084ac(ulong param_1,int param_2,float *param_3,float *param_4,long param_5,long param_6
                  )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  iVar13 = (int)param_1;
  uVar7 = param_2 * iVar13;
  if (0 < param_2) {
    pfVar19 = param_4;
    pfVar20 = param_3;
    iVar18 = param_2;
    do {
      pfVar4 = (float *)((long)pfVar20 +
                        (-(ulong)((uint)(iVar13 * 2) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar13 * 2) << 2));
      fVar27 = pfVar4[-1];
      fVar27 = fVar27 + fVar27;
      fVar26 = *pfVar20 + fVar27 * -0.5;
      *pfVar19 = *pfVar20 + fVar27;
      fVar27 = *pfVar4;
      fVar27 = (fVar27 + fVar27) * 0.8660254;
      pfVar19[(int)uVar7] = fVar26 - fVar27;
      pfVar19[(int)(uVar7 * 2)] = fVar26 + fVar27;
      pfVar20 = (float *)((long)pfVar20 +
                         (-(ulong)((uint)(iVar13 * 3) >> 0x1f) & 0xfffffffc00000000 |
                         (ulong)(uint)(iVar13 * 3) << 2));
      pfVar19 = (float *)((long)pfVar19 +
                         (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2)
                         );
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  if ((iVar13 != 1) && (0 < param_2)) {
    lVar17 = 0;
    local_68 = 0;
    iVar18 = 0;
    uVar5 = iVar13 * 2;
    iVar9 = iVar13 * 3;
    uVar6 = uVar7 * 2;
    uVar1 = uVar5 + 2;
    uVar8 = uVar5 - 2;
    uVar2 = uVar6 + 2;
    uVar3 = uVar7 + 2;
    uVar22 = 2;
    uVar23 = 2;
    do {
      local_70 = (ulong)uVar1;
      local_78 = (ulong)uVar8;
      local_80 = (ulong)uVar2;
      if (2 < iVar13) {
        lVar24 = 0;
        lVar25 = 0;
        uVar14 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        uVar16 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | local_70 << 2;
        uVar21 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | local_78 << 2;
        lVar15 = 2;
        do {
          lVar10 = lVar25 + uVar14;
          lVar11 = lVar24 + uVar14;
          fVar26 = *(float *)((long)param_3 + lVar10 + 4) +
                   *(float *)((long)param_3 + lVar11 + -0xc);
          fVar28 = *(float *)((long)param_3 +
                             (-(local_68 >> 0x1f) & 0xfffffffc00000000 | local_68 << 2) + 4 + lVar25
                             );
          *(float *)((long)param_4 + lVar17 * 4 + lVar25 + 4) = fVar28 + fVar26;
          fVar28 = fVar28 - fVar26 * 0.5;
          fVar26 = *(float *)((long)param_3 + lVar25 + uVar16) -
                   *(float *)((long)param_3 + lVar24 + uVar21);
          fVar29 = *(float *)((long)param_3 +
                             lVar25 + (-(uVar23 >> 0x1f) & 0xfffffffc00000000 | uVar23 << 2));
          fVar27 = fVar29 - fVar26 * 0.5;
          *(float *)((long)param_4 + lVar25 + (-(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2)
                    ) = fVar29 + fVar26;
          fVar26 = (*(float *)((long)param_3 + lVar10 + 4) -
                   *(float *)((long)param_3 + lVar11 + -0xc)) * 0.8660254;
          fVar29 = (*(float *)((long)param_3 + lVar25 + uVar16) +
                   *(float *)((long)param_3 + lVar24 + uVar21)) * 0.8660254;
          fVar30 = fVar28 - fVar29;
          fVar28 = fVar28 + fVar29;
          fVar29 = fVar27 + fVar26;
          fVar27 = fVar27 - fVar26;
          pfVar20 = (float *)(param_5 + lVar25);
          *(float *)((long)param_4 +
                    (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2) + 4 + lVar25)
               = *pfVar20 * fVar30 - fVar29 * pfVar20[1];
          *(float *)((long)param_4 +
                    lVar25 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2)) =
               fVar29 * *pfVar20 + fVar30 * pfVar20[1];
          pfVar20 = (float *)(param_6 + lVar25);
          *(float *)((long)param_4 +
                    (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2) + 4 + lVar25)
               = fVar28 * *pfVar20 - fVar27 * pfVar20[1];
          *(float *)((long)param_4 +
                    lVar25 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | local_80 << 2)) =
               fVar27 * *pfVar20 + fVar28 * pfVar20[1];
          lVar15 = lVar15 + 2;
          lVar25 = lVar25 + 8;
          lVar24 = lVar24 + -8;
        } while (lVar15 < iVar13);
      }
      uVar5 = uVar5 + iVar9;
      bVar12 = iVar18 != param_2 + -1;
      iVar18 = iVar18 + 1;
      local_68 = (ulong)(uint)((int)local_68 + iVar9);
      uVar6 = uVar6 + iVar13;
      uVar7 = uVar7 + iVar13;
      lVar17 = lVar17 + iVar13;
      uVar1 = uVar1 + iVar9;
      uVar8 = uVar8 + iVar9;
      uVar23 = (ulong)(uint)((int)uVar23 + iVar9);
      uVar2 = uVar2 + iVar13;
      uVar3 = uVar3 + iVar13;
      uVar22 = (ulong)(uint)((int)uVar22 + iVar13);
    } while (bVar12);
  }
  return;
}




void FUN_1006087b8(ulong param_1,int param_2,int param_3,ulong param_4,float *param_5,long param_6,
                  float *param_7,float *param_8,float *param_9,float *param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  float *pfVar33;
  int iVar34;
  ulong uVar35;
  float *pfVar36;
  float *pfVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  int iVar41;
  int iVar42;
  float *pfVar43;
  long lVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  int iVar48;
  int iVar49;
  float *pfVar50;
  float *pfVar51;
  ulong uVar52;
  int iVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  long lVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar68;
  undefined8 uVar69;
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float *local_e8;
  float *local_c8;
  long local_a0;
  long local_98;
  long local_68;
  
  iVar53 = (int)param_1;
  uVar9 = param_2 * iVar53;
  uVar26 = (ulong)uVar9;
  uVar60 = 0x40c90fdb;
  uVar61 = 0;
  auVar58._0_8_ = (double)(6.2831855 / (float)param_2);
  auVar58._8_8_ = 0;
  auVar58 = ___sincos_stret(auVar58);
  iVar46 = param_2 + 1 >> 1;
  if (iVar53 < param_3) {
    if (0 < iVar53) {
      iVar30 = 0;
      pfVar50 = param_8;
      pfVar43 = param_5;
      do {
        pfVar19 = pfVar50;
        pfVar21 = pfVar43;
        iVar14 = param_3;
        if (0 < param_3) {
          do {
            *pfVar19 = *pfVar21;
            pfVar21 = (float *)((long)pfVar21 +
                               (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2));
            pfVar19 = (float *)((long)pfVar19 +
                               (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                               (param_1 & 0xffffffff) << 2));
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        pfVar43 = pfVar43 + 1;
        bVar13 = iVar30 != iVar53 + -1;
        iVar30 = iVar30 + 1;
        pfVar50 = pfVar50 + 1;
      } while (bVar13);
    }
  }
  else if (0 < param_3) {
    iVar30 = 0;
    pfVar50 = param_8;
    pfVar43 = param_5;
    do {
      uVar55 = param_1;
      pfVar21 = pfVar50;
      pfVar19 = pfVar43;
      if (0 < iVar53) {
        do {
          *pfVar21 = *pfVar19;
          uVar10 = (int)uVar55 - 1;
          uVar55 = (ulong)uVar10;
          pfVar21 = pfVar21 + 1;
          pfVar19 = pfVar19 + 1;
        } while (uVar10 != 0);
      }
      pfVar43 = (float *)((long)pfVar43 +
                         (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2));
      bVar13 = iVar30 != param_3 + -1;
      iVar30 = iVar30 + 1;
      pfVar50 = (float *)((long)pfVar50 +
                         (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2)
                         );
    } while (bVar13);
  }
  uVar10 = param_3 * iVar53;
  uVar55 = (ulong)uVar10;
  iVar30 = iVar46 + -1;
  if (1 < iVar46) {
    iVar49 = uVar10 * (param_2 + -1);
    uVar39 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
    iVar14 = 1;
    pfVar43 = param_5;
    pfVar50 = param_8;
    do {
      pfVar50 = (float *)((long)pfVar50 +
                         (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar55 << 2));
      pfVar43 = (float *)((long)pfVar43 +
                         (-(ulong)((uint)(iVar53 << 1) >> 0x1f) & 0xfffffffc00000000 |
                         (ulong)(uint)(iVar53 << 1) << 2));
      if (0 < param_3) {
        pfVar21 = param_8 + iVar49;
        pfVar18 = pfVar50;
        pfVar19 = pfVar43;
        iVar38 = param_3;
        do {
          *pfVar18 = pfVar19[-1] + pfVar19[-1];
          *pfVar21 = *pfVar19 + *pfVar19;
          pfVar21 = (float *)((long)pfVar21 + uVar39);
          pfVar19 = (float *)((long)pfVar19 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2));
          pfVar18 = (float *)((long)pfVar18 + uVar39);
          iVar38 = iVar38 + -1;
        } while (iVar38 != 0);
      }
      iVar49 = iVar49 - uVar10;
      bVar13 = iVar14 != iVar30;
      iVar14 = iVar14 + 1;
    } while (bVar13);
  }
  iVar14 = iVar53 + -1 >> 1;
  iVar49 = (int)param_4;
  if (iVar53 != 1) {
    if (iVar14 < param_3) {
      if (iVar46 < 2) goto LAB_1006094d0;
      iVar17 = iVar53 * 2;
      iVar25 = iVar17 + -2;
      iVar38 = iVar17 + 2;
      iVar41 = uVar10 * (param_2 + -1) + 2;
      iVar42 = uVar10 + 2;
      uVar26 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2;
      iVar48 = 1;
      do {
        if (2 < iVar53) {
          lVar15 = 0;
          pfVar43 = param_5 + iVar38;
          iVar23 = 2;
          pfVar50 = param_5 + iVar25;
          do {
            pfVar19 = pfVar50;
            pfVar21 = pfVar43;
            lVar27 = lVar15;
            iVar34 = param_3;
            if (0 < param_3) {
              do {
                pfVar18 = (float *)((long)param_8 + lVar27 + (long)iVar42 * 4);
                pfVar18[-1] = pfVar21[-1] + pfVar19[-1];
                pfVar36 = (float *)((long)param_8 + lVar27 + (long)iVar41 * 4);
                pfVar36[-1] = pfVar21[-1] - pfVar19[-1];
                *pfVar18 = *pfVar21 - *pfVar19;
                *pfVar36 = *pfVar21 + *pfVar19;
                lVar27 = lVar27 + (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                                  (param_1 & 0xffffffff) << 2);
                pfVar21 = (float *)((long)pfVar21 + uVar26);
                pfVar19 = (float *)((long)pfVar19 + uVar26);
                iVar34 = iVar34 + -1;
              } while (iVar34 != 0);
            }
            iVar23 = iVar23 + 2;
            lVar15 = lVar15 + 8;
            pfVar43 = pfVar43 + 2;
            pfVar50 = pfVar50 + -2;
          } while (iVar23 < iVar53);
        }
        iVar25 = iVar25 + iVar17;
        bVar13 = iVar48 != iVar30;
        iVar48 = iVar48 + 1;
        iVar38 = iVar38 + iVar17;
        iVar41 = iVar41 - uVar10;
        iVar42 = iVar42 + uVar10;
      } while (bVar13);
    }
    else {
      if (iVar46 < 2) goto LAB_1006094d0;
      iVar42 = iVar53 * 2;
      iVar48 = uVar10 * (param_2 + -1);
      uVar6 = iVar42 - 2;
      uVar8 = iVar42 + 2;
      uVar7 = uVar10 * (param_2 + -1) + 2;
      uVar5 = uVar10 + 2;
      iVar38 = 1;
      local_a0 = (long)iVar42;
      local_98 = (long)(int)uVar10;
      do {
        if (0 < param_3) {
          iVar25 = 0;
          lVar27 = (long)iVar48;
          lVar44 = local_98;
          lVar15 = local_a0;
          uVar1 = uVar6;
          uVar4 = uVar5;
          uVar3 = uVar7;
          uVar2 = uVar8;
          do {
            if (2 < iVar53) {
              lVar29 = 0;
              lVar56 = 0;
              uVar39 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
              uVar26 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
              iVar17 = 2;
              do {
                lVar16 = lVar15 * 4;
                *(float *)((long)param_8 + lVar44 * 4 + lVar56 + 4) =
                     *(float *)((long)param_5 + lVar16 + lVar56 + 4) +
                     *(float *)((long)param_5 + lVar16 + lVar29 + -0xc);
                *(float *)((long)param_8 + lVar27 * 4 + lVar56 + 4) =
                     *(float *)((long)param_5 + lVar16 + lVar56 + 4) -
                     *(float *)((long)param_5 + lVar16 + lVar29 + -0xc);
                *(float *)((long)param_8 +
                          lVar56 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2
                                   )) =
                     *(float *)((long)param_5 + lVar56 + uVar26) -
                     *(float *)((long)param_5 + lVar29 + uVar39);
                *(float *)((long)param_8 +
                          lVar56 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2
                                   )) =
                     *(float *)((long)param_5 + lVar56 + uVar26) +
                     *(float *)((long)param_5 + lVar29 + uVar39);
                iVar17 = iVar17 + 2;
                lVar56 = lVar56 + 8;
                lVar29 = lVar29 + -8;
              } while (iVar17 < iVar53);
            }
            lVar15 = lVar15 + (int)uVar9;
            bVar13 = iVar25 != param_3 + -1;
            iVar25 = iVar25 + 1;
            lVar27 = lVar27 + iVar53;
            lVar44 = lVar44 + iVar53;
            uVar1 = uVar1 + uVar9;
            uVar2 = uVar2 + uVar9;
            uVar3 = uVar3 + iVar53;
            uVar4 = uVar4 + iVar53;
          } while (bVar13);
        }
        local_a0 = local_a0 + iVar42;
        bVar13 = iVar38 != iVar30;
        iVar38 = iVar38 + 1;
        iVar48 = iVar48 - uVar10;
        local_98 = local_98 + (int)uVar10;
        uVar6 = uVar6 + iVar42;
        uVar8 = uVar8 + iVar42;
        uVar7 = uVar7 - uVar10;
        uVar5 = uVar5 + uVar10;
      } while (bVar13);
    }
  }
  if (1 < iVar46) {
    lVar15 = 0;
    fVar63 = 1.0;
    fVar62 = 0.0;
    lVar44 = (long)iVar49;
    uVar9 = (param_2 + -1) * iVar49;
    uVar28 = (ulong)uVar9;
    lVar56 = (long)(int)uVar9;
    uVar35 = (ulong)(iVar49 - 1);
    iVar42 = (param_2 + -2) * iVar49;
    lVar27 = (long)(iVar49 << 1);
    uVar26 = uVar35 + 1;
    iVar48 = -iVar49;
    uVar52 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
    uVar39 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2;
    pfVar43 = (float *)((long)param_9 + uVar39);
    iVar38 = 1;
    local_e8 = param_7;
    local_68 = lVar44;
    local_c8 = param_7;
    do {
      local_c8 = (float *)((long)local_c8 + uVar52);
      iVar25 = (int)uVar28;
      lVar29 = (long)iVar25;
      pfVar50 = param_7 + lVar44 + lVar44 * lVar15;
      pfVar21 = param_7 + lVar44 + uVar35 + lVar44 * lVar15;
      fVar65 = (float)auVar58._0_8_ * fVar63;
      fVar63 = (float)(double)CONCAT44(uVar61,uVar60) * fVar63 - (float)auVar58._0_8_ * fVar62;
      fVar62 = (float)(double)CONCAT44(uVar61,uVar60) * fVar62 + fVar65;
      uVar45 = (ulong)(iVar49 - 1);
      if (0 < iVar49) {
        uVar28 = uVar26 & 0x1fffffffc;
        lVar16 = lVar44;
        lVar20 = lVar56;
        lVar31 = lVar29;
        lVar57 = local_68;
        if (uVar28 == 0) {
          uVar40 = 0;
        }
        else {
          uVar40 = 0;
          iVar17 = uVar9 + iVar48 * (int)lVar15;
          pfVar19 = param_7 + iVar17;
          pfVar18 = param_7 + uVar35 + (long)iVar17;
          if (((((pfVar18 < pfVar50 || pfVar21 < pfVar19) &&
                (param_9 + uVar35 < pfVar50 || pfVar21 < param_9)) &&
               (param_9 + lVar44 + uVar35 < pfVar50 || pfVar21 < (float *)((long)param_9 + uVar52)))
              && ((param_9 + lVar56 + uVar35 < pfVar50 || pfVar21 < pfVar43 &&
                  (param_9 + uVar35 < pfVar19 || pfVar18 < param_9)))) &&
             ((param_9 + lVar44 + uVar35 < pfVar19 || pfVar18 < (float *)((long)param_9 + uVar52) &&
              (param_9 + lVar56 + uVar35 < pfVar19 || pfVar18 < pfVar43)))) {
            uVar22 = uVar26 & 0xfffffffffffffffc;
            pfVar36 = local_e8;
            pfVar18 = param_7 + iVar25;
            pfVar19 = param_9;
            do {
              uVar69 = ((undefined8 *)(uVar52 + (long)pfVar19))[1];
              uVar68 = *(undefined8 *)(uVar52 + (long)pfVar19);
              auVar66._0_8_ =
                   CONCAT44(pfVar19[1] + fVar63 * (float)((ulong)uVar68 >> 0x20),
                            *pfVar19 + fVar63 * (float)uVar68);
              auVar66._8_4_ = pfVar19[2] + fVar63 * (float)uVar69;
              auVar66._12_4_ = pfVar19[3] + fVar63 * (float)((ulong)uVar69 >> 0x20);
              *(undefined8 *)(uVar52 + (long)pfVar36) = auVar66._0_8_;
              auVar66 = NEON_ext(auVar66,auVar66,8,1);
              ((undefined8 *)(uVar52 + (long)pfVar36))[1] = auVar66._0_8_;
              pfVar24 = (float *)(uVar39 + (long)pfVar19);
              auVar67._0_8_ = CONCAT44(fVar62 * pfVar24[1],fVar62 * *pfVar24);
              auVar67._8_4_ = fVar62 * pfVar24[2];
              auVar67._12_4_ = fVar62 * pfVar24[3];
              *(undefined8 *)pfVar18 = auVar67._0_8_;
              auVar66 = NEON_ext(auVar67,auVar67,8,1);
              *(long *)(pfVar18 + 2) = auVar66._0_8_;
              uVar22 = uVar22 - 4;
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
              pfVar36 = pfVar36 + 4;
              lVar16 = lVar44 + uVar28;
              lVar20 = uVar28 + lVar56;
              lVar31 = lVar29 + uVar28;
              uVar40 = uVar28;
              lVar57 = local_68 + uVar28;
            } while (uVar22 != 0);
          }
        }
        if (uVar26 + lVar56 != lVar20) {
          iVar17 = iVar49 - (int)uVar40;
          pfVar19 = param_7 + lVar57;
          pfVar18 = param_7 + lVar31;
          pfVar36 = param_9 + lVar20;
          pfVar24 = param_9 + uVar40;
          pfVar33 = param_9 + lVar16;
          do {
            *pfVar19 = *pfVar24 + fVar63 * *pfVar33;
            *pfVar18 = fVar62 * *pfVar36;
            iVar17 = iVar17 + -1;
            pfVar19 = pfVar19 + 1;
            pfVar18 = pfVar18 + 1;
            pfVar36 = pfVar36 + 1;
            pfVar24 = pfVar24 + 1;
            pfVar33 = pfVar33 + 1;
          } while (iVar17 != 0);
        }
      }
      if (2 < iVar46) {
        lVar16 = 0;
        iVar17 = uVar9 + iVar48 * (int)lVar15;
        pfVar19 = param_7 + iVar17;
        pfVar18 = param_7 + uVar35 + (long)iVar17;
        iVar17 = 2;
        pfVar36 = param_9 + (iVar49 << 1);
        lVar20 = lVar27;
        fVar65 = fVar63;
        fVar64 = fVar62;
        iVar41 = iVar42;
        do {
          fVar70 = fVar62 * fVar65;
          fVar65 = fVar63 * fVar65 - fVar62 * fVar64;
          fVar64 = fVar63 * fVar64 + fVar70;
          if (0 < iVar49) {
            lVar57 = (long)iVar41;
            lVar31 = uVar26 + lVar57;
            uVar28 = uVar26 & 0x1fffffffc;
            lVar32 = local_68;
            lVar47 = lVar20;
            lVar54 = lVar29;
            if (uVar28 == 0) {
              uVar40 = 0;
            }
            else {
              uVar40 = 0;
              iVar23 = iVar42 + iVar48 * (int)lVar16;
              if (((pfVar18 < pfVar50 || pfVar21 < pfVar19) &&
                  (param_9 + lVar27 + uVar35 + lVar44 * lVar16 < pfVar50 ||
                   pfVar21 < param_9 + lVar27 + lVar44 * lVar16)) &&
                 ((param_9 + uVar35 + (long)iVar23 < pfVar50 || pfVar21 < param_9 + iVar23 &&
                  ((param_9 + lVar27 + uVar35 + lVar44 * lVar16 < pfVar19 ||
                    pfVar18 < param_9 + lVar27 + lVar44 * lVar16 &&
                   (param_9 + uVar35 + (long)iVar23 < pfVar19 || pfVar18 < param_9 + iVar23)))))) {
                lVar57 = uVar28 + lVar57;
                lVar32 = local_68 + uVar28;
                lVar54 = lVar29 + uVar28;
                lVar47 = lVar20 + uVar28;
                pfVar24 = param_7 + iVar25;
                pfVar37 = pfVar36;
                uVar22 = uVar26 & 0xfffffffffffffffc;
                pfVar33 = local_c8;
                pfVar51 = param_9 + iVar41;
                do {
                  auVar71._0_8_ =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) + fVar65 * pfVar37[1]
                                ,(float)*(undefined8 *)pfVar33 + fVar65 * *pfVar37);
                  auVar71._8_4_ = (float)*(undefined8 *)(pfVar33 + 2) + fVar65 * pfVar37[2];
                  auVar71._12_4_ =
                       (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) + fVar65 * pfVar37[3];
                  *(undefined8 *)pfVar33 = auVar71._0_8_;
                  auVar66 = NEON_ext(auVar71,auVar71,8,1);
                  *(long *)(pfVar33 + 2) = auVar66._0_8_;
                  auVar72._0_8_ =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) + fVar64 * pfVar51[1]
                                ,(float)*(undefined8 *)pfVar24 + fVar64 * *pfVar51);
                  auVar72._8_4_ = (float)*(undefined8 *)(pfVar24 + 2) + fVar64 * pfVar51[2];
                  auVar72._12_4_ =
                       (float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) + fVar64 * pfVar51[3];
                  *(undefined8 *)pfVar24 = auVar72._0_8_;
                  auVar66 = NEON_ext(auVar72,auVar72,8,1);
                  *(long *)(pfVar24 + 2) = auVar66._0_8_;
                  uVar22 = uVar22 - 4;
                  pfVar24 = pfVar24 + 4;
                  pfVar33 = pfVar33 + 4;
                  uVar40 = uVar28;
                  pfVar37 = pfVar37 + 4;
                  pfVar51 = pfVar51 + 4;
                } while (uVar22 != 0);
              }
            }
            if (lVar31 != lVar57) {
              iVar23 = iVar49 - (int)uVar40;
              pfVar24 = param_7 + lVar54;
              pfVar33 = param_7 + lVar32;
              pfVar37 = param_9 + lVar47;
              pfVar51 = param_9 + lVar57;
              do {
                *pfVar33 = *pfVar33 + fVar65 * *pfVar37;
                *pfVar24 = *pfVar24 + fVar64 * *pfVar51;
                iVar23 = iVar23 + -1;
                pfVar24 = pfVar24 + 1;
                pfVar33 = pfVar33 + 1;
                pfVar37 = pfVar37 + 1;
                pfVar51 = pfVar51 + 1;
              } while (iVar23 != 0);
            }
          }
          iVar41 = iVar41 - iVar49;
          bVar13 = iVar17 != iVar30;
          iVar17 = iVar17 + 1;
          lVar20 = lVar20 + lVar44;
          lVar16 = lVar16 + 1;
          pfVar36 = (float *)((long)pfVar36 + uVar52);
        } while (bVar13);
      }
      uVar28 = (ulong)(uint)(iVar25 - iVar49);
      bVar13 = iVar38 != iVar30;
      iVar38 = iVar38 + 1;
      local_68 = local_68 + lVar44;
      lVar15 = lVar15 + 1;
      local_e8 = (float *)((long)local_e8 + uVar52);
    } while (bVar13);
    if (1 < iVar46) {
      lVar15 = 0;
      lVar56 = (long)iVar49;
      iVar38 = 1;
      lVar27 = lVar56;
      pfVar43 = param_9;
      do {
        pfVar43 = pfVar43 + lVar44;
        if (0 < iVar49) {
          uVar26 = uVar45 + 1 & 0x1fffffff8;
          if ((uVar26 == 0) ||
             (param_9 <= param_9 + lVar56 + uVar45 + lVar56 * lVar15 &&
              param_9 + lVar56 + lVar56 * lVar15 <= param_9 + uVar45)) {
            uVar26 = 0;
            lVar29 = lVar27;
          }
          else {
            lVar29 = lVar27 + uVar26;
            pfVar50 = param_9 + 4;
            uVar39 = uVar45 + 1 & 0xfffffffffffffff8;
            pfVar21 = pfVar43;
            do {
              auVar59._0_8_ =
                   CONCAT44(pfVar21[1] + (float)((ulong)*(undefined8 *)(pfVar50 + -4) >> 0x20),
                            *pfVar21 + (float)*(undefined8 *)(pfVar50 + -4));
              auVar59._8_4_ = pfVar21[2] + (float)*(undefined8 *)(pfVar50 + -2);
              auVar59._12_4_ = pfVar21[3] + (float)((ulong)*(undefined8 *)(pfVar50 + -2) >> 0x20);
              fVar62 = (float)*(undefined8 *)(pfVar21 + 4) + (float)*(undefined8 *)pfVar50;
              fVar63 = (float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) +
                       (float)((ulong)*(undefined8 *)pfVar50 >> 0x20);
              fVar65 = (float)*(undefined8 *)(pfVar21 + 6) + (float)*(undefined8 *)(pfVar50 + 2);
              fVar64 = (float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(pfVar50 + 2) >> 0x20);
              *(undefined8 *)(pfVar50 + -4) = auVar59._0_8_;
              auVar58 = NEON_ext(auVar59,auVar59,8,1);
              *(long *)(pfVar50 + -2) = auVar58._0_8_;
              *(ulong *)pfVar50 = CONCAT44(fVar63,fVar62);
              auVar11._4_4_ = fVar63;
              auVar11._0_4_ = fVar62;
              auVar11._8_4_ = fVar65;
              auVar11._12_4_ = fVar64;
              auVar12._4_4_ = fVar63;
              auVar12._0_4_ = fVar62;
              auVar12._8_4_ = fVar65;
              auVar12._12_4_ = fVar64;
              auVar58 = NEON_ext(auVar11,auVar12,8,1);
              *(long *)(pfVar50 + 2) = auVar58._0_8_;
              uVar39 = uVar39 - 8;
              pfVar50 = pfVar50 + 8;
              pfVar21 = pfVar21 + 8;
            } while (uVar39 != 0);
          }
          if (uVar45 + 1 != uVar26) {
            iVar42 = iVar49 - (int)uVar26;
            pfVar50 = param_9 + uVar26;
            pfVar21 = param_9 + lVar29;
            do {
              *pfVar50 = *pfVar21 + *pfVar50;
              iVar42 = iVar42 + -1;
              pfVar50 = pfVar50 + 1;
              pfVar21 = pfVar21 + 1;
            } while (iVar42 != 0);
          }
        }
        lVar27 = lVar27 + lVar56;
        bVar13 = iVar38 != iVar30;
        iVar38 = iVar38 + 1;
        lVar15 = lVar15 + 1;
      } while (bVar13);
      if (1 < iVar46) {
        uVar9 = uVar10 * (param_2 + -1);
        uVar39 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
        uVar28 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar55 << 2;
        iVar38 = 1;
        uVar26 = uVar28;
        do {
          if (0 < param_3) {
            uVar35 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
            uVar52 = uVar26;
            iVar42 = param_3;
            do {
              *(float *)((long)param_8 + uVar52) =
                   *(float *)(param_6 + uVar52) - *(float *)(param_6 + uVar35);
              *(float *)((long)param_8 + uVar35) =
                   *(float *)(param_6 + uVar52) + *(float *)(param_6 + uVar35);
              uVar35 = uVar35 + uVar39;
              uVar52 = uVar52 + uVar39;
              iVar42 = iVar42 + -1;
            } while (iVar42 != 0);
          }
          uVar9 = uVar9 - uVar10;
          bVar13 = iVar38 != iVar30;
          iVar38 = iVar38 + 1;
          uVar26 = uVar26 + uVar28;
        } while (bVar13);
      }
    }
  }
  if (iVar53 == 1) {
    return;
  }
LAB_1006094d0:
  if (iVar14 < param_3) {
    if (1 < iVar46) {
      uVar8 = uVar10 * (param_2 + -1) + 2;
      uVar9 = uVar10 + 2;
      iVar30 = 1;
      do {
        if (2 < iVar53) {
          lVar15 = 0;
          uVar26 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
          uVar39 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
          iVar38 = 2;
          do {
            lVar27 = lVar15;
            iVar42 = param_3;
            if (0 < param_3) {
              do {
                pfVar43 = (float *)(param_6 + uVar26 + lVar27);
                pfVar50 = (float *)(param_6 + uVar39 + lVar27);
                pfVar21 = (float *)((long)param_8 + lVar27 + uVar26);
                pfVar21[-1] = pfVar43[-1] - *pfVar50;
                pfVar19 = (float *)((long)param_8 + lVar27 + uVar39);
                pfVar19[-1] = pfVar43[-1] + *pfVar50;
                *pfVar21 = *pfVar43 + pfVar50[-1];
                lVar27 = lVar27 + (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                                  (param_1 & 0xffffffff) << 2);
                iVar42 = iVar42 + -1;
                *pfVar19 = *pfVar43 - pfVar50[-1];
              } while (iVar42 != 0);
            }
            iVar38 = iVar38 + 2;
            lVar15 = lVar15 + 8;
          } while (iVar38 < iVar53);
        }
        uVar8 = uVar8 - uVar10;
        bVar13 = iVar30 != iVar46 + -1;
        iVar30 = iVar30 + 1;
        uVar9 = uVar9 + uVar10;
      } while (bVar13);
    }
  }
  else if (1 < iVar46) {
    iVar38 = uVar10 * (param_2 + -1);
    uVar8 = uVar10 * (param_2 + -1) + 2;
    uVar9 = uVar10 + 2;
    iVar46 = 1;
    lVar15 = (long)(int)uVar10;
    do {
      if (0 < param_3) {
        iVar42 = 0;
        lVar27 = (long)iVar38;
        lVar44 = lVar15;
        uVar6 = uVar9;
        uVar5 = uVar8;
        do {
          if (2 < iVar53) {
            lVar56 = 0;
            uVar26 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
            uVar39 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
            lVar29 = param_6 + uVar26;
            lVar16 = param_6 + uVar39;
            iVar48 = 2;
            do {
              lVar20 = param_6 + lVar56 + lVar44 * 4;
              *(float *)((long)param_8 + lVar44 * 4 + lVar56 + 4) =
                   *(float *)(lVar20 + 4) - *(float *)(lVar29 + lVar56);
              *(float *)((long)param_8 + lVar27 * 4 + lVar56 + 4) =
                   *(float *)(lVar20 + 4) + *(float *)(lVar29 + lVar56);
              lVar20 = param_6 + lVar56 + lVar27 * 4;
              *(float *)((long)param_8 + lVar56 + uVar39) =
                   *(float *)(lVar16 + lVar56) + *(float *)(lVar20 + 4);
              *(float *)((long)param_8 + lVar56 + uVar26) =
                   *(float *)(lVar16 + lVar56) - *(float *)(lVar20 + 4);
              iVar48 = iVar48 + 2;
              lVar56 = lVar56 + 8;
            } while (iVar48 < iVar53);
          }
          lVar27 = lVar27 + iVar53;
          bVar13 = iVar42 != param_3 + -1;
          iVar42 = iVar42 + 1;
          lVar44 = lVar44 + iVar53;
          uVar5 = uVar5 + iVar53;
          uVar6 = uVar6 + iVar53;
        } while (bVar13);
      }
      iVar38 = iVar38 - uVar10;
      bVar13 = iVar46 != iVar30;
      iVar46 = iVar46 + 1;
      lVar15 = lVar15 + (int)uVar10;
      uVar8 = uVar8 - uVar10;
      uVar9 = uVar9 + uVar10;
    } while (bVar13);
  }
  if (0 < iVar49) {
    do {
      *param_7 = *param_9;
      uVar9 = (int)param_4 - 1;
      param_4 = (ulong)uVar9;
      param_9 = param_9 + 1;
      param_7 = param_7 + 1;
    } while (uVar9 != 0);
  }
  if (1 < param_2) {
    uVar55 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar55 << 2;
    iVar46 = 1;
    uVar26 = uVar55;
    do {
      uVar39 = uVar26;
      iVar30 = param_3;
      if (0 < param_3) {
        do {
          *(undefined4 *)(param_6 + uVar39) = *(undefined4 *)((long)param_8 + uVar39);
          uVar39 = uVar39 + (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                            (param_1 & 0xffffffff) << 2);
          iVar30 = iVar30 + -1;
        } while (iVar30 != 0);
      }
      uVar26 = uVar26 + uVar55;
      bVar13 = iVar46 != param_2 + -1;
      iVar46 = iVar46 + 1;
    } while (bVar13);
  }
  if (param_3 < iVar14) {
    if (1 < param_2) {
      uVar9 = uVar10 + 2;
      iVar30 = 1;
      iVar46 = 1;
      pfVar43 = param_10;
      lVar15 = (long)(int)uVar10;
      do {
        if (0 < param_3) {
          iVar14 = 0;
          lVar27 = lVar15;
          uVar8 = uVar9;
          do {
            if (2 < iVar53) {
              lVar44 = 0;
              uVar26 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
              iVar49 = 2;
              pfVar50 = pfVar43;
              do {
                lVar56 = lVar27 * 4 + lVar44;
                *(float *)(param_6 + lVar44 + lVar27 * 4 + 4) =
                     *pfVar50 * *(float *)((long)param_8 + lVar56 + 4) -
                     *(float *)((long)param_10 + lVar44 + (long)iVar30 * 4) *
                     *(float *)((long)param_8 + lVar44 + uVar26);
                *(float *)(param_6 + uVar26 + lVar44) =
                     *pfVar50 * *(float *)((long)param_8 + lVar44 + uVar26) +
                     *(float *)((long)param_10 + lVar44 + (long)iVar30 * 4) *
                     *(float *)((long)param_8 + lVar56 + 4);
                iVar49 = iVar49 + 2;
                lVar44 = lVar44 + 8;
                pfVar50 = pfVar50 + 2;
              } while (iVar49 < iVar53);
            }
            lVar27 = lVar27 + iVar53;
            bVar13 = iVar14 != param_3 + -1;
            iVar14 = iVar14 + 1;
            uVar8 = uVar8 + iVar53;
          } while (bVar13);
        }
        lVar15 = lVar15 + (int)uVar10;
        bVar13 = iVar46 != param_2 + -1;
        iVar46 = iVar46 + 1;
        pfVar43 = (float *)((long)pfVar43 +
                           (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                           (param_1 & 0xffffffff) << 2));
        iVar30 = iVar30 + iVar53;
        uVar9 = uVar9 + uVar10;
      } while (bVar13);
    }
  }
  else if (1 < param_2) {
    uVar9 = uVar10 + 2;
    iVar46 = 1;
    lVar15 = -1;
    do {
      if (2 < iVar53) {
        uVar26 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
        iVar30 = 2;
        lVar27 = lVar15;
        do {
          if (0 < param_3) {
            iVar49 = (int)(lVar27 + 2);
            uVar55 = uVar26;
            iVar14 = param_3;
            do {
              pfVar43 = (float *)((long)param_8 + uVar55);
              ((float *)(param_6 + uVar55))[-1] =
                   param_10[lVar27 + 1] * pfVar43[-1] - param_10[iVar49] * *pfVar43;
              *(float *)(param_6 + uVar55) =
                   param_10[lVar27 + 1] * *pfVar43 + param_10[iVar49] * pfVar43[-1];
              uVar55 = uVar55 + (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 |
                                (param_1 & 0xffffffff) << 2);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          iVar30 = iVar30 + 2;
          uVar26 = uVar26 + 8;
          lVar27 = lVar27 + 2;
        } while (iVar30 < iVar53);
      }
      uVar9 = uVar9 + uVar10;
      bVar13 = iVar46 != param_2 + -1;
      iVar46 = iVar46 + 1;
      lVar15 = lVar15 + iVar53;
    } while (bVar13);
  }
  return;
}




undefined8 * FUN_100609978(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  puVar1 = _calloc(1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = _calloc(1,0x1c);
    *puVar1 = pvVar2;
    if (pvVar2 != (void *)0x0) {
      pvVar3 = _calloc(1,0x1ad8);
      puVar1[1] = pvVar3;
      if (pvVar3 != (void *)0x0) {
        lVar4 = FUN_1005597f8();
        *(long *)((long)pvVar3 + 0x78) = lVar4;
        if (lVar4 == 0) {
          _free(pvVar3);
          pvVar2 = (void *)*puVar1;
        }
        else {
          *(undefined8 *)((long)pvVar3 + 0x550) = 0x10;
          pvVar5 = _malloc(0x40);
          *(void **)((long)pvVar3 + 0x540) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            _memset((void *)((long)pvVar3 + 0x80),0,0x80);
            *(undefined8 *)((long)pvVar3 + 0x1000) = 0;
            *(undefined8 *)((long)pvVar3 + 0xff8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xff0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xfe8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xfe0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xfd8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xfd0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xfc8) = 0;
            puVar7 = (undefined8 *)puVar1[1];
            *(undefined4 *)(puVar7 + 0x38) = 0;
            *(undefined4 *)((long)puVar7 + 0x1c4) = 0;
            *(undefined4 *)((long)puVar7 + 0x1dc) = 0;
            FUN_1005fc70c(puVar7 + 0x20);
            FUN_1005fc70c(puVar7 + 0x23);
            FUN_1005fc70c(puVar7 + 0x26);
            FUN_1005fc70c(puVar7 + 0x29);
            FUN_1005fc70c(puVar7 + 0x2c);
            FUN_1005fc70c(puVar7 + 0x2f);
            FUN_1005fc70c(puVar7 + 0x32);
            FUN_1005fc70c(puVar7 + 0x35);
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[0xd] = 0;
            puVar7[0xe] = 0;
            _bzero(puVar7 + 0x68,0x200);
            *(undefined4 *)(puVar7 + 0x68) = 1;
            puVar7[0xa9] = 0;
            puVar6 = (undefined4 *)*puVar1;
            puVar6[6] = 0;
            *puVar6 = 9;
            return puVar1;
          }
          FUN_100559804(*(undefined8 *)((long)pvVar3 + 0x78));
          _free(pvVar3);
        }
      }
      _free(pvVar2);
    }
    _free(puVar1);
  }
  return (undefined8 *)0x0;
}




void FUN_100609b08(undefined8 *param_1)

{
  long lVar1;
  
  FUN_100609bb8();
  lVar1 = param_1[1];
  if (*(void **)(lVar1 + 0x540) != (void *)0x0) {
    _free(*(void **)(lVar1 + 0x540));
    lVar1 = param_1[1];
  }
  FUN_100559804(*(undefined8 *)(lVar1 + 0x78));
  FUN_1005fc718(param_1[1] + 0x100);
  FUN_1005fc718(param_1[1] + 0x118);
  FUN_1005fc718(param_1[1] + 0x130);
  FUN_1005fc718(param_1[1] + 0x148);
  FUN_1005fc718(param_1[1] + 0x160);
  FUN_1005fc718(param_1[1] + 0x178);
  FUN_1005fc718(param_1[1] + 400);
  FUN_1005fc718(param_1[1] + 0x1a8);
  _free((void *)param_1[1]);
  _free((void *)*param_1);
  _free(param_1);
  return;
}




bool FUN_100609bb8(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  FILE *pFVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (*(int *)*param_1 == 9) {
    bVar1 = true;
  }
  else {
    FUN_100601c58(param_1[1] + 0x1080,param_1[1] + 0x1018);
    lVar5 = param_1[1];
    if ((*(int *)(lVar5 + 0x1dc) != 0) && (*(void **)(lVar5 + 0x2a8) != (void *)0x0)) {
      _free(*(void **)(lVar5 + 0x2a8));
      lVar5 = param_1[1];
      *(undefined8 *)(lVar5 + 0x2a8) = 0;
      *(undefined4 *)(lVar5 + 0x1dc) = 0;
    }
    FUN_100559830(*(undefined8 *)(lVar5 + 0x78));
    lVar5 = 0;
    do {
      lVar6 = param_1[1];
      lVar8 = *(long *)(lVar6 + lVar5 + 0x80);
      if (lVar8 != 0) {
        _free((void *)(lVar8 + -0x10));
        *(undefined8 *)(param_1[1] + lVar5 + 0x80) = 0;
        lVar6 = param_1[1];
      }
      pvVar3 = *(void **)(lVar6 + lVar5 + 0xfc8);
      if (pvVar3 != (void *)0x0) {
        _free(pvVar3);
        *(undefined8 *)(param_1[1] + lVar5 + 0xc0) = 0;
        *(undefined8 *)(param_1[1] + lVar5 + 0xfc8) = 0;
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x40);
    puVar9 = (undefined8 *)param_1[1];
    *(undefined4 *)(puVar9 + 0x38) = 0;
    *(undefined4 *)((long)puVar9 + 0x1c4) = 0;
    pFVar4 = (FILE *)puVar9[0xe];
    if (pFVar4 != (FILE *)0x0) {
      if (pFVar4 != *(FILE **)PTR____stdinp_101444228) {
        _fclose(pFVar4);
        puVar9 = (undefined8 *)param_1[1];
      }
      puVar9[0xe] = 0;
    }
    bVar1 = true;
    if (*(int *)(puVar9 + 0x201) != 0) {
      iVar2 = _memcmp(puVar9 + 0x43,puVar9 + 0x210,0x10);
      bVar1 = iVar2 == 0;
    }
    *(undefined4 *)(puVar9 + 0x202) = 0;
    puVar9[0xd] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    _bzero(puVar9 + 0x68,0x200);
    lVar5 = param_1[1];
    *(undefined4 *)(lVar5 + 0x340) = 1;
    *(undefined8 *)(lVar5 + 0x548) = 0;
    puVar7 = (undefined4 *)*param_1;
    puVar7[6] = 0;
    *puVar7 = 9;
  }
  return bVar1;
}




void FUN_100609d3c(void)

{
  FUN_100609d6c();
  return;
}




undefined4
FUN_100609d6c(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
             long param_7,long param_8,long param_9,long param_10,long param_11,int param_12)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (*(int *)*param_2 == 9) {
    if (param_12 == 0) {
      uVar2 = 2;
      if ((((param_3 != 0) && (param_8 != 0)) && (param_10 != 0)) &&
         ((param_4 == 0 || (((uVar2 = 2, param_5 != 0 && (param_6 != 0)) && (param_7 != 0)))))) {
        FUN_10055d110(param_2[1] + 0xf8c);
        lVar3 = param_2[1];
        *(code **)(lVar3 + 0x40) = FUN_1005ff9c0;
        *(code **)(lVar3 + 0x48) = FUN_10060028c;
        *(code **)(lVar3 + 0x58) = FUN_1005ff9c0;
        *(code **)(lVar3 + 0x50) = FUN_1005ff9c0;
        *(code **)(lVar3 + 0x60) = FUN_10055a584;
        local_70 = *(undefined8 *)(lVar3 + 0xfbc);
        uStack_78 = *(undefined8 *)(lVar3 + 0xfb4);
        local_80 = *(undefined8 *)(lVar3 + 0xfac);
        uStack_88 = *(undefined8 *)(lVar3 + 0xfa4);
        local_90 = *(undefined8 *)(lVar3 + 0xf9c);
        uStack_98 = *(undefined8 *)(lVar3 + 0xf94);
        local_a0 = *(undefined8 *)(lVar3 + 0xf8c);
        iVar1 = FUN_100559868(param_1,*(undefined8 *)(lVar3 + 0x78),&local_a0,FUN_10060d704,param_2)
        ;
        if (iVar1 == 0) {
          *(undefined4 *)*param_2 = 8;
          uVar2 = 3;
        }
        else {
          plVar4 = (long *)param_2[1];
          *plVar4 = param_3;
          plVar4[1] = param_4;
          plVar4[2] = param_5;
          plVar4[3] = param_6;
          plVar4[4] = param_7;
          plVar4[5] = param_8;
          plVar4[6] = param_9;
          plVar4[7] = param_10;
          plVar4[0xd] = param_11;
          *(undefined4 *)(plVar4 + 0x1f1) = 0;
          *(undefined4 *)(plVar4 + 0x3b) = 0;
          plVar4[0x39] = 0;
          plVar4[0x3a] = 0;
          *(undefined4 *)(plVar4 + 0x201) = *(undefined4 *)(*param_2 + 0x18);
          *(undefined4 *)(plVar4 + 0x202) = 0;
          *(undefined4 *)((long)plVar4 + 0x100c) = 1;
          iVar1 = FUN_10060a3c4(param_2);
          uVar2 = 3;
          if (iVar1 != 0) {
            uVar2 = 0;
          }
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}




undefined4 FUN_100609f14(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)*param_2 != 9) {
    uVar1 = 5;
  }
  return uVar1;
}




undefined8 FUN_100609f30(void)

{
  return 0;
}




undefined8 FUN_100609f38(undefined8 *param_1,int param_2)

{
  if (*(int *)*param_1 == 9) {
    ((int *)*param_1)[6] = param_2;
    return 1;
  }
  return 0;
}




undefined8 FUN_100609f5c(undefined8 *param_1,uint param_2)

{
  long lVar1;
  
  if (0x7e < param_2) {
    return 0;
  }
  if (*(int *)*param_1 == 9) {
    lVar1 = param_1[1];
    *(undefined4 *)(lVar1 + (ulong)param_2 * 4 + 0x340) = 1;
    if (param_2 == 2) {
      *(undefined8 *)(lVar1 + 0x548) = 0;
    }
    return 1;
  }
  return 0;
}




undefined8 FUN_100609fa8(undefined8 *param_1,void *param_2)

{
  void *pvVar1;
  size_t sVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  
  piVar3 = (int *)*param_1;
  if (*piVar3 != 9) {
    return 0;
  }
  lVar5 = param_1[1];
  if (*(int *)(lVar5 + 0x348) == 0) {
    lVar4 = *(long *)(lVar5 + 0x548);
    pvVar1 = *(void **)(lVar5 + 0x540);
    if (lVar4 == *(long *)(lVar5 + 0x550)) {
      if (lVar4 == 0) {
        sVar2 = 0;
      }
      else {
        if (lVar4 < 0) {
          *(undefined8 *)(lVar5 + 0x540) = 0;
          goto LAB_10060a070;
        }
        sVar2 = lVar4 << 1;
      }
      pvVar1 = _realloc(pvVar1,sVar2);
      lVar5 = param_1[1];
      *(void **)(lVar5 + 0x540) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        piVar3 = (int *)*param_1;
LAB_10060a070:
        *piVar3 = 8;
        return 0;
      }
      *(long *)(lVar5 + 0x550) = *(long *)(lVar5 + 0x550) << 1;
      lVar4 = *(long *)(lVar5 + 0x548);
    }
    _memcpy((void *)((long)pvVar1 + lVar4 * 4),param_2,4);
    *(long *)(param_1[1] + 0x548) = *(long *)(param_1[1] + 0x548) + 1;
  }
  return 1;
}




bool FUN_10060a080(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 == 9) {
    _memset_pattern16((void *)(param_1[1] + 0x340),&DAT_10115ff10,0x200);
    *(undefined8 *)(param_1[1] + 0x548) = 0;
  }
  return iVar1 == 9;
}




undefined8 FUN_10060a0d8(undefined8 *param_1,uint param_2)

{
  long lVar1;
  
  if (0x7e < param_2) {
    return 0;
  }
  if (*(int *)*param_1 == 9) {
    lVar1 = param_1[1];
    *(undefined4 *)(lVar1 + (ulong)param_2 * 4 + 0x340) = 0;
    if (param_2 == 2) {
      *(undefined8 *)(lVar1 + 0x548) = 0;
    }
    return 1;
  }
  return 0;
}




undefined8 FUN_10060a120(undefined8 *param_1,void *param_2)

{
  void *pvVar1;
  size_t sVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  
  piVar3 = (int *)*param_1;
  if (*piVar3 != 9) {
    return 0;
  }
  lVar5 = param_1[1];
  if (*(int *)(lVar5 + 0x348) != 0) {
    lVar4 = *(long *)(lVar5 + 0x548);
    pvVar1 = *(void **)(lVar5 + 0x540);
    if (lVar4 == *(long *)(lVar5 + 0x550)) {
      if (lVar4 == 0) {
        sVar2 = 0;
      }
      else {
        if (lVar4 < 0) {
          *(undefined8 *)(lVar5 + 0x540) = 0;
          goto LAB_10060a1e8;
        }
        sVar2 = lVar4 << 1;
      }
      pvVar1 = _realloc(pvVar1,sVar2);
      lVar5 = param_1[1];
      *(void **)(lVar5 + 0x540) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        piVar3 = (int *)*param_1;
LAB_10060a1e8:
        *piVar3 = 8;
        return 0;
      }
      *(long *)(lVar5 + 0x550) = *(long *)(lVar5 + 0x550) << 1;
      lVar4 = *(long *)(lVar5 + 0x548);
    }
    _memcpy((void *)((long)pvVar1 + lVar4 * 4),param_2,4);
    *(long *)(param_1[1] + 0x548) = *(long *)(param_1[1] + 0x548) + 1;
  }
  return 1;
}




bool FUN_10060a1f8(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 == 9) {
    _bzero((void *)(param_1[1] + 0x340),0x200);
    *(undefined8 *)(param_1[1] + 0x548) = 0;
  }
  return iVar1 == 9;
}




undefined4 FUN_10060a248(undefined8 *param_1)

{
  return *(undefined4 *)*param_1;
}




undefined * FUN_10060a254(undefined8 *param_1)

{
  return (&PTR_s_FLAC__STREAM_DECODER_SEARCH_FOR__1014a3550)[*(uint *)*param_1];
}




undefined4 FUN_10060a26c(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0x18);
}




undefined8 FUN_10060a278(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0x1d8) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 8) + 0x210);
  }
  return 0;
}




undefined4 FUN_10060a294(long *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}




undefined4 FUN_10060a2a0(long *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}




undefined4 FUN_10060a2ac(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0xc);
}




undefined4 FUN_10060a2b8(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0x10);
}




undefined4 FUN_10060a2c4(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0x14);
}




undefined8 FUN_10060a2d0(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*(long *)(param_2 + 8) + 0x10);
  if (pcVar4 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*pcVar4)(param_2,param_3,*(undefined8 *)(*(long *)(param_2 + 8) + 0x68));
    if (iVar1 == 0) {
      iVar1 = FUN_100559ba0(*(undefined8 *)(*(long *)(param_2 + 8) + 0x78));
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar3 = FUN_100559bc4(*(undefined8 *)(*(long *)(param_2 + 8) + 0x78));
        *param_3 = *param_3 - (uVar3 >> 3 & 0x1fffffff);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}




ulong FUN_10060a358(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100559bc4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x78));
  return uVar1 >> 3 & 0x1fffffff;
}




bool FUN_10060a378(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + 0x1d0) = 0;
  *(undefined4 *)(lVar2 + 0x1008) = 0;
  iVar1 = FUN_1005598e8(*(undefined8 *)(lVar2 + 0x78));
  uVar3 = 8;
  if (iVar1 != 0) {
    uVar3 = 2;
  }
  *(undefined4 *)*param_1 = uVar3;
  return iVar1 != 0;
}




undefined8 FUN_10060a3c4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  lVar3 = param_1[1];
  *(undefined8 *)(lVar3 + 0x1d0) = 0;
  *(undefined4 *)(lVar3 + 0x1008) = 0;
  iVar1 = FUN_1005598e8(*(undefined8 *)(lVar3 + 0x78));
  uVar2 = 0;
  puVar4 = (undefined4 *)*param_1;
  uVar5 = 8;
  if (iVar1 != 0) {
    uVar5 = 2;
  }
  *puVar4 = uVar5;
  if (iVar1 != 0) {
    lVar3 = param_1[1];
    if (*(int *)(lVar3 + 0x100c) == 0) {
      if (*(long *)(lVar3 + 0x70) == *(long *)PTR____stdinp_101444228) {
        return 0;
      }
      if (*(code **)(lVar3 + 8) != (code *)0x0) {
        iVar1 = (**(code **)(lVar3 + 8))(param_1,0,*(undefined8 *)(lVar3 + 0x68));
        if (iVar1 == 1) {
          return 0;
        }
        puVar4 = (undefined4 *)*param_1;
        lVar3 = param_1[1];
      }
    }
    else {
      *(undefined4 *)(lVar3 + 0x100c) = 0;
    }
    *puVar4 = 0;
    *(undefined4 *)(lVar3 + 0x1d8) = 0;
    if ((*(int *)(lVar3 + 0x1dc) != 0) && (*(void **)(lVar3 + 0x2a8) != (void *)0x0)) {
      _free(*(void **)(lVar3 + 0x2a8));
      lVar3 = param_1[1];
      *(undefined8 *)(lVar3 + 0x2a8) = 0;
      *(undefined4 *)(lVar3 + 0x1dc) = 0;
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined4 *)(lVar3 + 0x1008) = puVar4[6];
    *(undefined4 *)(lVar3 + 0x1cc) = 0;
    *(undefined4 *)(lVar3 + 0x1c8) = 0;
    FUN_100601c20(lVar3 + 0x1018);
    lVar3 = param_1[1];
    *(undefined8 *)(lVar3 + 0x1ac0) = 0;
    *(undefined4 *)(lVar3 + 0x1ad0) = 0;
    uVar2 = 1;
  }
  return uVar2;
}




bool FUN_10060a4d0(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int local_34;
  
  do {
    bVar1 = true;
    switch(*(undefined4 *)*param_2) {
    case 0:
      iVar2 = FUN_10060a5b4(param_1,param_2);
      if (iVar2 != 0) break;
    default:
switchD_10060a510_caseD_5:
      bVar1 = false;
      goto switchD_10060a510_caseD_4;
    case 1:
      iVar2 = FUN_10060a84c(param_1,param_2);
      return iVar2 != 0;
    case 2:
      iVar2 = FUN_10060b81c(param_1,param_2);
      if (iVar2 == 0) goto LAB_10060a55c;
      break;
    case 3:
      iVar2 = FUN_10060b9a4(param_1,param_2,&local_34,1);
      if (iVar2 == 0) goto switchD_10060a510_caseD_5;
      if (local_34 != 0) {
LAB_10060a55c:
        bVar1 = true;
switchD_10060a510_caseD_4:
        return bVar1;
      }
      break;
    case 4:
    case 7:
      goto switchD_10060a510_caseD_4;
    }
  } while( true );
}




undefined4 FUN_10060a5b4(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint local_68;
  uint local_64;
  
  uVar8 = 0;
  bVar4 = true;
LAB_10060a61c:
  do {
    bVar5 = bVar4;
    uVar9 = 0;
    while( true ) {
      lVar7 = param_2[1];
      if (*(int *)(lVar7 + 0xf88) == 0) {
        iVar6 = FUN_100559be0(param_1,*(undefined8 *)(lVar7 + 0x78),&local_68,8);
        if (iVar6 == 0) {
          return 0;
        }
      }
      else {
        local_68 = (uint)*(byte *)(lVar7 + 0xfc6);
        *(undefined4 *)(lVar7 + 0xf88) = 0;
      }
      if (local_68 == (byte)"fLaCCaLf "[uVar8]) {
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        bVar4 = true;
        if (3 < uVar1) {
          *(undefined4 *)*param_2 = 1;
          return 1;
        }
        goto LAB_10060a61c;
      }
      if (local_68 != (byte)(&DAT_10115fef0)[uVar9]) break;
      uVar8 = 0;
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
      if (uVar1 == 3) {
        iVar6 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_64,0x18);
        if ((((iVar6 == 0) ||
             (iVar6 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_64,8),
             uVar1 = local_64, iVar6 == 0)) ||
            (iVar6 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_64,8),
            uVar2 = local_64, iVar6 == 0)) ||
           ((iVar6 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_64,8),
            uVar3 = local_64, iVar6 == 0 ||
            (iVar6 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_64,8),
            iVar6 == 0)))) {
          return 0;
        }
        iVar6 = FUN_10055a0d0(param_1,*(undefined8 *)(param_2[1] + 0x78),
                              (((uVar1 & 0x7f) << 7 | uVar2 & 0x7f) << 7 | uVar3 & 0x7f) << 7 |
                              local_64 & 0x7f);
        uVar8 = 0;
        uVar9 = 3;
        if (iVar6 == 0) {
          return 0;
        }
      }
    }
    if (local_68 == 0xff) {
      *(undefined1 *)(param_2[1] + 0xfc4) = 0xff;
      iVar6 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_68,8);
      if (iVar6 == 0) {
        return 0;
      }
      if (local_68 == 0xff) {
        lVar7 = param_2[1];
        *(undefined1 *)(lVar7 + 0xfc6) = 0xff;
        *(undefined4 *)(lVar7 + 0xf88) = 1;
      }
      else if ((local_68 & 0xfffffffc) == 0xf8) {
        *(char *)(param_2[1] + 0xfc5) = (char)local_68;
        *(undefined4 *)*param_2 = 3;
        return 1;
      }
    }
    uVar8 = 0;
    bVar4 = false;
    if (bVar5) {
      uVar8 = 0;
      lVar7 = param_2[1];
      bVar4 = false;
      if (*(int *)(lVar7 + 0x1010) == 0) {
        (**(code **)(lVar7 + 0x38))(param_2,0,*(undefined8 *)(lVar7 + 0x68));
        uVar8 = 0;
        bVar4 = false;
      }
    }
  } while( true );
}




void FUN_10060a84c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  size_t sVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong local_130;
  uint local_128;
  uint local_124;
  int local_120;
  uint local_11c;
  uint local_118;
  uint uStack_114;
  uint local_110;
  void *local_108;
  void *local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  uint local_e0 [2];
  void *local_d8;
  undefined1 auStack_80 [8];
  uint local_78;
  uint local_74;
  void *local_70;
  long local_68;
  
  lVar16 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar16;
  iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_120,1);
  if (iVar4 == 0) {
    uVar7 = 0;
    goto LAB_10060b78c;
  }
  iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_124,7);
  if (iVar4 == 0) {
    uVar7 = 0;
    goto LAB_10060b78c;
  }
  iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_128,0x18);
  uVar10 = local_124;
  if (iVar4 == 0) {
    uVar7 = 0;
    goto LAB_10060b78c;
  }
  if (local_124 == 3) {
    lVar9 = param_2[1];
    *(undefined4 *)(lVar9 + 0x290) = 3;
    *(uint *)(lVar9 + 0x294) = (uint)(local_120 != 0);
    *(uint *)(lVar9 + 0x298) = local_128;
    *(uint *)(lVar9 + 0x2a0) = local_128 / 0x12;
    if (local_128 < 0x12) {
      sVar8 = 0;
    }
    else {
      sVar8 = ((ulong)local_128 / 0x12) * 0x18;
    }
    pvVar5 = _realloc(*(void **)(lVar9 + 0x2a8),sVar8);
    lVar9 = param_2[1];
    *(void **)(lVar9 + 0x2a8) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      *(undefined4 *)*param_2 = 8;
LAB_10060ad8c:
      uVar7 = 0;
      goto LAB_10060b78c;
    }
    if (*(int *)(lVar9 + 0x2a0) == 0) {
      iVar4 = 0;
    }
    else {
      lVar14 = 0;
      uVar15 = 0;
      do {
        iVar4 = FUN_100559e74(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118,0x40);
        if (iVar4 == 0) goto LAB_10060ad8c;
        lVar9 = param_2[1];
        *(ulong *)(*(long *)(lVar9 + 0x2a8) + lVar14) = CONCAT44(uStack_114,local_118);
        iVar4 = FUN_100559e74(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118,0x40);
        if (iVar4 == 0) goto LAB_10060ad8c;
        lVar9 = param_2[1];
        *(ulong *)(*(long *)(lVar9 + 0x2a8) + lVar14 + 8) = CONCAT44(uStack_114,local_118);
        iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_11c,0x10);
        if (iVar4 == 0) goto LAB_10060ad8c;
        lVar9 = param_2[1];
        *(uint *)(*(long *)(lVar9 + 0x2a8) + lVar14 + 0x10) = local_11c;
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x18;
      } while (uVar15 < *(uint *)(lVar9 + 0x2a0));
      iVar4 = *(uint *)(lVar9 + 0x2a0) * -0x12;
    }
    if (iVar4 + local_128 != 0) {
      iVar4 = FUN_10055a0d0(param_1,*(undefined8 *)(lVar9 + 0x78));
      if (iVar4 == 0) goto LAB_10060ad8c;
      lVar9 = param_2[1];
    }
    *(undefined4 *)(lVar9 + 0x1dc) = 1;
    if (((*(int *)(lVar9 + 0x1010) == 0) && (*(int *)(lVar9 + 0x34c) != 0)) &&
       (*(code **)(lVar9 + 0x30) != (code *)0x0)) {
      (**(code **)(lVar9 + 0x30))(param_2,lVar9 + 0x290,*(undefined8 *)(lVar9 + 0x68));
    }
    goto switchD_10060b538_caseD_1;
  }
  uVar13 = (uint)(local_120 != 0);
  if (local_124 == 0) {
    lVar9 = param_2[1];
    *(undefined4 *)(lVar9 + 0x1e0) = 0;
    *(uint *)(lVar9 + 0x1e4) = uVar13;
    *(uint *)(lVar9 + 0x1e8) = local_128;
    iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118,0x10);
    if (iVar4 != 0) {
      lVar9 = param_2[1];
      *(uint *)(lVar9 + 0x1f0) = local_118;
      iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118,0x10);
      if (iVar4 != 0) {
        lVar9 = param_2[1];
        *(uint *)(lVar9 + 500) = local_118;
        iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118,0x18);
        if (iVar4 != 0) {
          lVar9 = param_2[1];
          *(uint *)(lVar9 + 0x1f8) = local_118;
          iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118,0x18);
          if (iVar4 != 0) {
            lVar9 = param_2[1];
            *(uint *)(lVar9 + 0x1fc) = local_118;
            iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118,0x14);
            if (iVar4 != 0) {
              lVar9 = param_2[1];
              *(uint *)(lVar9 + 0x200) = local_118;
              iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118);
              if (iVar4 != 0) {
                lVar9 = param_2[1];
                *(uint *)(lVar9 + 0x204) = local_118 + 1;
                iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_118);
                if (iVar4 != 0) {
                  lVar9 = param_2[1];
                  *(uint *)(lVar9 + 0x208) = local_118 + 1;
                  iVar4 = FUN_100559e74(param_1,*(undefined8 *)(lVar9 + 0x78),lVar9 + 0x210);
                  if ((iVar4 != 0) &&
                     (iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(param_2[1] + 0x78),
                                            param_2[1] + 0x218,0x10), iVar4 != 0)) {
                    iVar4 = FUN_10055a0d0(param_1,*(undefined8 *)(param_2[1] + 0x78),
                                          local_128 - 0x22);
                    if (iVar4 == 0) {
                      uVar7 = 0;
                      goto LAB_10060b78c;
                    }
                    lVar9 = param_2[1];
                    *(undefined4 *)(lVar9 + 0x1d8) = 1;
                    iVar4 = _memcmp((void *)(lVar9 + 0x218),&DAT_10115fef3,0x10);
                    if (iVar4 == 0) {
                      *(undefined4 *)(lVar9 + 0x1008) = 0;
                    }
                    if (((*(int *)(lVar9 + 0x1010) == 0) && (*(int *)(lVar9 + 0x340) != 0)) &&
                       (*(code **)(lVar9 + 0x30) != (code *)0x0)) {
                      (**(code **)(lVar9 + 0x30))
                                (param_2,lVar9 + 0x1e0,*(undefined8 *)(lVar9 + 0x68));
                    }
                    goto switchD_10060b538_caseD_1;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar7 = 0;
    goto LAB_10060b78c;
  }
  lVar9 = param_2[1];
  bVar3 = *(int *)(lVar9 + (ulong)local_124 * 4 + 0x340) == 0;
  sVar8 = (size_t)local_128;
  _memset(&local_118,0,0xb0);
  local_118 = uVar10;
  local_110 = local_128;
  uStack_114 = uVar13;
  if (uVar10 == 2) {
    iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(lVar9 + 0x78),&local_108,4);
    if (iVar4 != 0) {
      sVar8 = (size_t)(local_128 - 4);
      if (local_128 < 4) {
        uVar7 = 0;
        *(undefined4 *)*param_2 = 8;
        goto LAB_10060b78c;
      }
      lVar9 = param_2[1];
      uVar15 = *(ulong *)(lVar9 + 0x548);
      if (uVar15 != 0) {
        uVar17 = 0;
        pvVar5 = *(void **)(lVar9 + 0x540);
        do {
          iVar4 = _memcmp(pvVar5,&local_108,4);
          if (iVar4 == 0) {
            lVar16 = *(long *)PTR____stack_chk_guard_101444218;
            bVar3 = !bVar3;
            goto LAB_10060ae00;
          }
          uVar17 = uVar17 + 1;
          pvVar5 = (void *)((long)pvVar5 + 4);
        } while (uVar17 < uVar15);
        lVar16 = *(long *)PTR____stack_chk_guard_101444218;
      }
      goto LAB_10060ae00;
    }
    goto LAB_10060b788;
  }
LAB_10060ae00:
  if (bVar3) {
    iVar4 = FUN_10055a0d0(param_1,*(undefined8 *)(lVar9 + 0x78),sVar8);
    if (iVar4 != 0) goto switchD_10060b538_caseD_1;
    goto LAB_10060b788;
  }
  switch(local_124) {
  case 0:
  case 3:
    break;
  case 1:
    iVar4 = FUN_10055a0d0(param_1,*(undefined8 *)(lVar9 + 0x78),sVar8);
joined_r0x00010060aea4:
    if (iVar4 == 0) goto LAB_10060b788;
    break;
  case 2:
    if ((int)sVar8 != 0) {
      pvVar5 = _malloc(sVar8);
      local_100 = pvVar5;
joined_r0x00010060ae3c:
      if (pvVar5 == (void *)0x0) {
LAB_10060b7b8:
        *(undefined4 *)*param_2 = 8;
        uVar7 = 0;
        goto LAB_10060b78c;
      }
      uVar7 = *(undefined8 *)(lVar9 + 0x78);
LAB_10060ae94:
      iVar4 = FUN_10055a1b4(param_1,uVar7,pvVar5,sVar8);
      goto joined_r0x00010060aea4;
    }
    local_100 = (void *)0x0;
    break;
  case 4:
    iVar4 = FUN_100559f30(param_1,*(undefined8 *)(lVar9 + 0x78),&local_108);
    if (iVar4 != 0) {
      uVar15 = (ulong)local_108 & 0xffffffff;
      if ((int)local_108 == 0) {
        local_100 = (void *)0x0;
      }
      else {
        local_100 = _malloc(uVar15 + 1);
        if (local_100 == (void *)0x0) goto LAB_10060b7b8;
        iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(param_2[1] + 0x78),local_100,uVar15);
        if (iVar4 == 0) goto LAB_10060b788;
        *(undefined1 *)((long)local_100 + ((ulong)local_108 & 0xffffffff)) = 0;
      }
      iVar4 = FUN_100559f30(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_f8);
      if (iVar4 != 0) {
        if ((uint)local_f8 == 0) {
          local_f0 = (void *)0x0;
          break;
        }
        local_f0 = _malloc(((ulong)local_f8 & 0xffffffff) << 4);
        if (local_f0 == (void *)0x0) goto LAB_10060b7b8;
        iVar4 = FUN_100559f30(param_1,*(undefined8 *)(param_2[1] + 0x78),local_f0);
        if (iVar4 != 0) {
          uVar15 = 0;
          lVar9 = 0;
          do {
            pvVar5 = local_f0;
            if (*(uint *)((long)local_f0 + lVar9) == 0) {
              *(undefined8 *)((long)local_f0 + lVar9 + 8) = 0;
            }
            else {
              pvVar6 = _malloc((ulong)*(uint *)((long)local_f0 + lVar9) + 1);
              *(void **)((long)pvVar5 + lVar9 + 8) = pvVar6;
              if (pvVar6 == (void *)0x0) goto LAB_10060b7b8;
              iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(param_2[1] + 0x78),pvVar6,
                                    *(undefined4 *)((long)pvVar5 + lVar9));
              if (iVar4 == 0) break;
              *(undefined1 *)
               (*(long *)((uint *)((long)local_f0 + lVar9) + 2) +
               (ulong)*(uint *)((long)local_f0 + lVar9)) = 0;
            }
            uVar15 = uVar15 + 1;
            if (((ulong)local_f8 & 0xffffffff) <= uVar15) goto switchD_10060ae54_caseD_0;
            iVar4 = FUN_100559f30(param_1,*(undefined8 *)(param_2[1] + 0x78),
                                  (long)local_f0 + lVar9 + 0x10);
            lVar9 = lVar9 + 0x10;
          } while (iVar4 != 0);
        }
      }
    }
    goto LAB_10060b788;
  case 5:
    _memset(&local_108,0,0xa0);
    iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(lVar9 + 0x78),&local_108,0x80);
    if (((iVar4 != 0) &&
        (iVar4 = FUN_100559e74(param_1,*(undefined8 *)(param_2[1] + 0x78),auStack_80,0x40),
        iVar4 != 0)) &&
       (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,1), iVar4 != 0))
    {
      local_78 = (uint)(local_11c != 0);
      iVar4 = FUN_10055a00c(param_1,*(undefined8 *)(param_2[1] + 0x78),0x817);
      if ((iVar4 != 0) &&
         (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,8), iVar4 != 0
         )) {
        local_74 = local_11c;
        if (local_11c == 0) break;
        pvVar5 = _calloc((ulong)local_11c,0x20);
        local_70 = pvVar5;
        if (pvVar5 == (void *)0x0) {
LAB_10060b7cc:
          *(undefined4 *)*param_2 = 8;
          uVar7 = 0;
          goto LAB_10060b78c;
        }
        iVar4 = FUN_100559e74(param_1,*(undefined8 *)(param_2[1] + 0x78),pvVar5);
        if (iVar4 != 0) {
          local_130 = 0;
          while (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,8),
                iVar4 != 0) {
            *(char *)((long)pvVar5 + local_130 * 0x20 + 8) = (char)local_11c;
            iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(param_2[1] + 0x78),
                                  (long)pvVar5 + local_130 * 0x20 + 9,0xc);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,1),
               iVar4 == 0)) break;
            pbVar11 = (byte *)((long)pvVar5 + local_130 * 0x20 + 0x16);
            *pbVar11 = *pbVar11 & 0xfe | (byte)local_11c & 1;
            iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,1);
            if (iVar4 == 0) break;
            *pbVar11 = *pbVar11 & 0xfc | *pbVar11 & 1 | (byte)((local_11c & 1) << 1);
            iVar4 = FUN_10055a00c(param_1,*(undefined8 *)(param_2[1] + 0x78),0x6e);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,8),
               iVar4 == 0)) break;
            pbVar11 = (byte *)((long)pvVar5 + local_130 * 0x20 + 0x17);
            *pbVar11 = (byte)local_11c;
            if ((local_11c & 0xff) != 0) {
              pvVar6 = _calloc((ulong)(local_11c & 0xff),0x10);
              puVar12 = (undefined8 *)((long)pvVar5 + local_130 * 0x20 + 0x18);
              *puVar12 = pvVar6;
              if (pvVar6 == (void *)0x0) goto LAB_10060b7cc;
              if (*pbVar11 != 0) {
                iVar4 = FUN_100559e74(param_1,*(undefined8 *)(param_2[1] + 0x78),pvVar6,0x40);
                if (iVar4 == 0) break;
                uVar15 = 0;
                lVar9 = 8;
                while( true ) {
                  iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,8);
                  if (iVar4 == 0) goto LAB_10060b2d0;
                  *(char *)((long)pvVar6 + lVar9) = (char)local_11c;
                  iVar4 = FUN_10055a00c(param_1,*(undefined8 *)(param_2[1] + 0x78),0x18);
                  if (iVar4 == 0) goto LAB_10060b2d0;
                  uVar15 = uVar15 + 1;
                  if (*pbVar11 <= uVar15) break;
                  pvVar6 = (void *)*puVar12;
                  iVar4 = FUN_100559e74(param_1,*(undefined8 *)(param_2[1] + 0x78),
                                        (long)pvVar6 + lVar9 + 8,0x40);
                  lVar9 = lVar9 + 0x10;
                  if (iVar4 == 0) goto LAB_10060b2d0;
                }
              }
            }
            pvVar5 = local_70;
            local_130 = local_130 + 1;
            if (local_74 <= local_130) goto switchD_10060ae54_caseD_0;
            iVar4 = FUN_100559e74(param_1,*(undefined8 *)(param_2[1] + 0x78),
                                  (void *)((long)local_70 + local_130 * 0x20),0x40);
            if (iVar4 == 0) break;
          }
        }
      }
    }
LAB_10060b2d0:
    uVar7 = 0;
    goto LAB_10060b78c;
  case 6:
    iVar4 = FUN_100559be0(param_1,*(undefined8 *)(lVar9 + 0x78),&local_11c,0x20);
    if (iVar4 != 0) {
      local_108 = (void *)CONCAT44(local_108._4_4_,local_11c);
      iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,0x20);
      uVar10 = local_11c;
      if (iVar4 != 0) {
        uVar15 = (ulong)local_11c;
        local_100 = _malloc(uVar15 + 1);
        if (local_100 == (void *)0x0) goto LAB_10060b7b8;
        if (uVar10 == 0) {
          uVar15 = 0;
        }
        else {
          iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(param_2[1] + 0x78),local_100,uVar15);
          if (iVar4 == 0) goto LAB_10060b788;
          uVar15 = (ulong)local_11c;
        }
        *(undefined1 *)((long)local_100 + uVar15) = 0;
        iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_11c,0x20);
        uVar10 = local_11c;
        if (iVar4 != 0) {
          uVar15 = (ulong)local_11c;
          local_f8 = _malloc(uVar15 + 1);
          if (local_f8 == (void *)0x0) goto LAB_10060b7b8;
          if (uVar10 == 0) {
            uVar15 = 0;
          }
          else {
            iVar4 = FUN_10055a1b4(param_1,*(undefined8 *)(param_2[1] + 0x78),local_f8,uVar15);
            if (iVar4 == 0) goto LAB_10060b788;
            uVar15 = (ulong)local_11c;
          }
          *(undefined1 *)((long)local_f8 + uVar15) = 0;
          iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_f0,0x20);
          if ((((iVar4 != 0) &&
               (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),(long)&local_f0 + 4
                                      ,0x20), iVar4 != 0)) &&
              (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),auStack_e8,0x20),
              iVar4 != 0)) &&
             ((iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),auStack_e4,0x20),
              iVar4 != 0 &&
              (iVar4 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),local_e0,0x20),
              iVar4 != 0)))) {
            sVar8 = (size_t)local_e0[0];
            sVar2 = sVar8;
            if (sVar8 == 0) {
              sVar2 = 1;
            }
            pvVar5 = _malloc(sVar2);
            local_d8 = pvVar5;
            if (pvVar5 == (void *)0x0) goto LAB_10060b7b8;
            if (local_e0[0] == 0) break;
            uVar7 = *(undefined8 *)(param_2[1] + 0x78);
            goto LAB_10060ae94;
          }
        }
      }
    }
LAB_10060b788:
    uVar7 = 0;
    goto LAB_10060b78c;
  default:
    if ((int)sVar8 != 0) {
      pvVar5 = _malloc(sVar8);
      local_108 = pvVar5;
      goto joined_r0x00010060ae3c;
    }
    local_108 = (void *)0x0;
  }
switchD_10060ae54_caseD_0:
  lVar9 = param_2[1];
  if ((*(int *)(lVar9 + 0x1010) == 0) && (*(code **)(lVar9 + 0x30) != (code *)0x0)) {
    (**(code **)(lVar9 + 0x30))(param_2,&local_118,*(undefined8 *)(lVar9 + 0x68));
  }
  switch(local_124) {
  case 1:
    break;
  case 2:
    if (local_100 != (void *)0x0) {
      _free(local_100);
    }
    break;
  default:
    if (local_108 != (void *)0x0) {
      _free(local_108);
    }
    break;
  case 4:
    if (local_100 != (void *)0x0) {
      _free(local_100);
    }
    if ((uint)local_f8 != 0) {
      uVar10 = 0;
      lVar9 = 8;
      uVar13 = (uint)local_f8;
      do {
        if (*(void **)((long)local_f0 + lVar9) != (void *)0x0) {
          _free(*(void **)((long)local_f0 + lVar9));
          uVar13 = (uint)local_f8;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (uVar10 < uVar13);
    }
    if (local_f0 != (void *)0x0) {
      _free(local_f0);
    }
    break;
  case 5:
    if (local_74 != 0) {
      uVar10 = 0;
      lVar9 = 0x18;
      uVar13 = local_74;
      do {
        if (*(void **)((long)local_70 + lVar9) != (void *)0x0) {
          _free(*(void **)((long)local_70 + lVar9));
          uVar13 = local_74;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar10 < uVar13);
    }
    if (local_70 != (void *)0x0) {
      _free(local_70);
    }
    break;
  case 6:
    if (local_100 != (void *)0x0) {
      _free(local_100);
    }
    if (local_f8 != (void *)0x0) {
      _free(local_f8);
    }
    if (local_d8 != (void *)0x0) {
      _free(local_d8);
    }
  }
switchD_10060b538_caseD_1:
  if (local_120 != 0) {
    lVar9 = param_2[1];
    if (*(code **)(lVar9 + 0x10) == (code *)0x0) {
LAB_10060b5b4:
      *(undefined8 *)(param_2[1] + 0x1ac0) = 0;
    }
    else {
      plVar1 = (long *)(lVar9 + 0x1ac0);
      iVar4 = (**(code **)(lVar9 + 0x10))(param_2,plVar1,*(undefined8 *)(lVar9 + 0x68));
      if ((iVar4 != 0) || (iVar4 = FUN_100559ba0(*(undefined8 *)(param_2[1] + 0x78)), iVar4 == 0))
      goto LAB_10060b5b4;
      uVar15 = FUN_100559bc4(*(undefined8 *)(param_2[1] + 0x78));
      *plVar1 = *plVar1 - (uVar15 >> 3 & 0x1fffffff);
    }
    *(undefined4 *)*param_2 = 2;
  }
  uVar7 = 1;
LAB_10060b78c:
  if (lVar16 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
}




undefined8 FUN_10060b81c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_34;
  
  lVar5 = param_2[1];
  if (((*(int *)(lVar5 + 0x1d8) == 0) || (*(ulong *)(lVar5 + 0x210) == 0)) ||
     (*(ulong *)(lVar5 + 0x1d0) < *(ulong *)(lVar5 + 0x210))) {
    iVar3 = FUN_100559ba0(*(undefined8 *)(lVar5 + 0x78));
    if (iVar3 == 0) {
      uVar8 = *(undefined8 *)(param_2[1] + 0x78);
      uVar4 = FUN_100559bb0(uVar8);
      iVar3 = FUN_100559be0(param_1,uVar8,&local_34,uVar4);
      if (iVar3 == 0) {
        return 0;
      }
    }
    bVar2 = true;
LAB_10060b8ac:
    bVar1 = bVar2;
    lVar5 = param_2[1];
    if (*(int *)(lVar5 + 0xf88) == 0) {
      iVar3 = FUN_100559be0(param_1,*(undefined8 *)(lVar5 + 0x78),&local_34,8);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      local_34 = (uint)*(byte *)(lVar5 + 0xfc6);
      *(undefined4 *)(lVar5 + 0xf88) = 0;
    }
    if (local_34 == 0xff) {
      *(undefined1 *)(param_2[1] + 0xfc4) = 0xff;
      iVar3 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_34,8);
      if (iVar3 == 0) {
        return 0;
      }
      if (local_34 == 0xff) {
        lVar5 = param_2[1];
        *(undefined1 *)(lVar5 + 0xfc6) = 0xff;
        *(undefined4 *)(lVar5 + 0xf88) = 1;
      }
      else if ((local_34 & 0xfffffffc) == 0xf8) goto LAB_10060b978;
    }
    bVar2 = false;
    if (bVar1) {
      lVar5 = param_2[1];
      bVar2 = false;
      if (*(int *)(lVar5 + 0x1010) == 0) {
        (**(code **)(lVar5 + 0x38))(param_2,0,*(undefined8 *)(lVar5 + 0x68));
        bVar2 = false;
      }
    }
    goto LAB_10060b8ac;
  }
  puVar6 = (undefined4 *)*param_2;
  uVar7 = 4;
LAB_10060b988:
  *puVar6 = uVar7;
  return 1;
LAB_10060b978:
  *(char *)(param_2[1] + 0xfc5) = (char)local_34;
  puVar6 = (undefined4 *)*param_2;
  uVar7 = 3;
  goto LAB_10060b988;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10060b9a4(undefined8 param_1,long *param_2,undefined4 *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  size_t sVar11;
  long lVar12;
  int *piVar13;
  code *pcVar14;
  undefined4 uVar15;
  long lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  byte bVar22;
  long *plVar23;
  undefined8 uVar24;
  byte bVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0 [2];
  undefined4 local_a8;
  long alStack_a0 [7];
  long local_68;
  
  lVar32 = *(long *)PTR____stack_chk_guard_101444218;
  *param_3 = 0;
  lVar12 = param_2[1];
  local_68 = lVar32;
  FUN_100559b24(*(undefined8 *)(lVar12 + 0x78),
                (*(uint *)(&DAT_101867918 +
                          (ulong)((uint)*(byte *)(lVar12 + 0xfc5) ^
                                 *(uint *)(&DAT_101867918 + (ulong)*(byte *)(lVar12 + 0xfc4) * 4) >>
                                 8) * 4) ^
                *(uint *)(&DAT_101867918 + (ulong)*(byte *)(lVar12 + 0xfc4) * 4) << 8) & 0xffff);
  lVar12 = param_2[1];
  bVar22 = *(byte *)(lVar12 + 0xfc5);
  local_a8 = CONCAT22(local_a8._2_2_,*(undefined2 *)(lVar12 + 0xfc4));
  local_b0[0] = 2;
  iVar5 = FUN_100559be0(param_1,*(undefined8 *)(lVar12 + 0x78),local_b0 + 1,8);
  if (iVar5 == 0) goto LAB_10060ce24;
  if (local_b0[1] == 0xff) {
LAB_10060ba90:
    lVar12 = param_2[1];
    *(char *)(lVar12 + 0xfc6) = (char)local_b0[1];
    *(undefined4 *)(lVar12 + 0xf88) = 1;
    if (*(int *)(lVar12 + 0x1010) == 0) {
      (**(code **)(lVar12 + 0x38))(param_2,1,*(undefined8 *)(lVar12 + 0x68));
    }
    goto LAB_10060babc;
  }
  local_b0[0] = 3;
  local_a8._0_3_ = CONCAT12((char)local_b0[1],(undefined2)local_a8);
  iVar5 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),local_b0 + 1,8);
  if (iVar5 == 0) goto LAB_10060ce24;
  if (local_b0[1] == 0xff) goto LAB_10060ba90;
  bVar22 = bVar22 >> 1 & 1;
  uVar27 = (ulong)local_b0[0];
  local_b0[0] = local_b0[0] + 1;
  *(char *)((long)&local_a8 + uVar27) = (char)local_b0[1];
  uVar3 = local_a8;
  bVar25 = local_a8._2_1_ >> 4;
  switch(bVar25) {
  case 0:
    bVar25 = 0;
    bVar22 = 1;
    break;
  case 1:
    bVar25 = 0;
    *(undefined4 *)(param_2[1] + 0x558) = 0xc0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    uVar28 = bVar25 - 2;
    iVar5 = 0x240;
    goto LAB_10060c664;
  case 6:
  case 7:
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar28 = bVar25 - 8;
    iVar5 = 0x100;
LAB_10060c664:
    *(int *)(param_2[1] + 0x558) = iVar5 << (ulong)(uVar28 & 0x1f);
switchD_10060c500_default:
    bVar25 = 0;
    break;
  default:
    goto switchD_10060c500_default;
  }
  uVar28 = local_a8._2_1_ & 0xf;
  switch(uVar28) {
  case 0:
    lVar12 = param_2[1];
    if (*(int *)(lVar12 + 0x1d8) != 0) {
      uVar15 = *(undefined4 *)(lVar12 + 0x200);
      break;
    }
    uVar28 = 0;
    bVar22 = 1;
    goto switchD_10060c6a0_caseD_c;
  case 1:
    lVar12 = param_2[1];
    uVar15 = 0x15888;
    break;
  case 2:
    lVar12 = param_2[1];
    uVar15 = 0x2b110;
    break;
  case 3:
    lVar12 = param_2[1];
    uVar15 = 0x2ee00;
    break;
  case 4:
    lVar12 = param_2[1];
    uVar15 = 8000;
    break;
  case 5:
    lVar12 = param_2[1];
    uVar15 = 16000;
    break;
  case 6:
    lVar12 = param_2[1];
    uVar15 = 0x5622;
    break;
  case 7:
    lVar12 = param_2[1];
    uVar15 = 24000;
    break;
  case 8:
    lVar12 = param_2[1];
    uVar15 = 32000;
    break;
  case 9:
    lVar12 = param_2[1];
    uVar15 = 0xac44;
    break;
  case 10:
    lVar12 = param_2[1];
    uVar15 = 48000;
    break;
  case 0xb:
    lVar12 = param_2[1];
    uVar15 = 96000;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    goto switchD_10060c6a0_caseD_c;
  case 0xf:
    lVar12 = param_2[1];
    local_b0[1] = uVar28;
    goto LAB_10060cb78;
  default:
    uVar28 = 0;
    goto switchD_10060c6a0_caseD_c;
  }
  uVar28 = 0;
  *(undefined4 *)(lVar12 + 0x55c) = uVar15;
switchD_10060c6a0_caseD_c:
  bVar4 = local_a8._3_1_ >> 4;
  if ((int)local_a8 < 0) {
    lVar12 = param_2[1];
    *(undefined4 *)(lVar12 + 0x560) = 2;
    uVar7 = bVar4 & 7;
    if (uVar7 == 2) {
      *(undefined4 *)(lVar12 + 0x564) = 3;
    }
    else if (uVar7 == 1) {
      *(undefined4 *)(lVar12 + 0x564) = 2;
    }
    else if ((bVar4 & 7) == 0) {
      *(undefined4 *)(lVar12 + 0x564) = 1;
    }
    else {
      bVar22 = 1;
    }
  }
  else {
    lVar12 = param_2[1];
    *(uint *)(lVar12 + 0x560) = bVar4 + 1;
    *(undefined4 *)(lVar12 + 0x564) = 0;
  }
  local_b0[1] = local_a8._3_1_ >> 1 & 7;
  switch(local_b0[1]) {
  case 0:
    if (*(int *)(lVar12 + 0x1d8) == 0) goto switchD_10060c8c0_caseD_3;
    *(undefined4 *)(lVar12 + 0x568) = *(undefined4 *)(lVar12 + 0x208);
    break;
  case 1:
    *(undefined4 *)(lVar12 + 0x568) = 8;
    break;
  case 2:
    *(undefined4 *)(lVar12 + 0x568) = 0xc;
    break;
  case 3:
  case 7:
switchD_10060c8c0_caseD_3:
    bVar22 = 1;
    break;
  case 4:
    *(undefined4 *)(lVar12 + 0x568) = 0x10;
    break;
  case 5:
    *(undefined4 *)(lVar12 + 0x568) = 0x14;
    break;
  case 6:
    *(undefined4 *)(lVar12 + 0x568) = 0x18;
  }
  if (((local_a8 & 0x100) == 0) &&
     ((*(int *)(lVar12 + 0x1d8) == 0 || (*(int *)(lVar12 + 0x1f0) == *(int *)(lVar12 + 500))))) {
    iVar5 = FUN_10055a94c(param_1,*(undefined8 *)(lVar12 + 0x78),local_b0 + 1,&local_a8,local_b0);
    if (iVar5 != 0) {
      if (local_b0[1] == 0xffffffff) goto LAB_10060ca78;
      lVar12 = param_2[1];
      *(undefined4 *)(lVar12 + 0x56c) = 0;
      *(uint *)(lVar12 + 0x570) = local_b0[1];
LAB_10060c9b0:
      if (bVar25 != 0) {
        iVar5 = FUN_100559be0(param_1,*(undefined8 *)(lVar12 + 0x78),local_b0 + 1,8);
        if (iVar5 == 0) goto LAB_10060ce24;
        uVar27 = (ulong)local_b0[0];
        local_b0[0] = local_b0[0] + 1;
        *(char *)((long)&local_a8 + uVar27) = (char)local_b0[1];
        if (bVar25 == 7) {
          iVar5 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_bc,8);
          if (iVar5 == 0) goto LAB_10060ce24;
          uVar27 = (ulong)local_b0[0];
          local_b0[0] = local_b0[0] + 1;
          *(char *)((long)&local_a8 + uVar27) = (char)local_bc;
          local_b0[1] = local_bc | local_b0[1] << 8;
        }
        lVar12 = param_2[1];
        *(uint *)(lVar12 + 0x558) = local_b0[1] + 1;
      }
      if (uVar28 != 0) {
        iVar5 = FUN_100559be0(param_1,*(undefined8 *)(lVar12 + 0x78),local_b0 + 1,8);
        if (iVar5 == 0) goto LAB_10060ce24;
        uVar27 = (ulong)local_b0[0];
        local_b0[0] = local_b0[0] + 1;
        *(char *)((long)&local_a8 + uVar27) = (char)local_b0[1];
        if (uVar28 == 0xc) {
          uVar7 = local_b0[1] * 1000;
        }
        else {
          iVar5 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_c0,8);
          if (iVar5 == 0) goto LAB_10060ce24;
          uVar27 = (ulong)local_b0[0];
          local_b0[0] = local_b0[0] + 1;
          *(char *)((long)&local_a8 + uVar27) = (char)local_c0;
          local_b0[1] = local_c0 | local_b0[1] << 8;
          uVar7 = local_b0[1];
          if (uVar28 != 0xd) {
            uVar7 = local_b0[1] * 10;
          }
        }
        lVar12 = param_2[1];
        *(uint *)(lVar12 + 0x55c) = uVar7;
      }
      iVar5 = FUN_100559be0(param_1,*(undefined8 *)(lVar12 + 0x78),local_b0 + 1,8);
      uVar28 = local_b0[1];
      if (iVar5 != 0) {
        uVar7 = FUN_10055d16c(&local_a8,local_b0[0]);
        lVar12 = param_2[1];
        if (uVar7 != (uVar28 & 0xff)) goto LAB_10060cb78;
        *(undefined4 *)(lVar12 + 0x1cc) = 0;
        if (*(int *)(lVar12 + 0x56c) != 0) goto LAB_10060ce78;
        local_b0[1] = *(uint *)(lVar12 + 0x570);
        *(undefined4 *)(lVar12 + 0x56c) = 1;
        uVar28 = *(uint *)(lVar12 + 0x1c8);
        if (uVar28 == 0) {
          if (*(int *)(lVar12 + 0x1d8) == 0) {
            uVar28 = *(uint *)(lVar12 + 0x558);
            if (local_b0[1] != 0) goto LAB_10060ce70;
            *(undefined8 *)(lVar12 + 0x570) = 0;
            *(uint *)(lVar12 + 0x1cc) = uVar28;
            goto LAB_10060ce78;
          }
          uVar28 = *(uint *)(lVar12 + 0x1f0);
          if (uVar28 == *(uint *)(lVar12 + 500)) {
            *(ulong *)(lVar12 + 0x570) = (ulong)uVar28 * (ulong)local_b0[1];
            *(uint *)(lVar12 + 0x1cc) = uVar28;
            goto LAB_10060ce78;
          }
LAB_10060ce8c:
          if (*(int *)(lVar12 + 0x1010) == 0) {
            pcVar14 = *(code **)(lVar12 + 0x38);
            uVar24 = *(undefined8 *)(lVar12 + 0x68);
            uVar10 = 3;
            goto LAB_10060cb8c;
          }
          *(int *)(lVar12 + 0x1ad0) = *(int *)(lVar12 + 0x1ad0) + 1;
          goto LAB_10060babc;
        }
LAB_10060ce70:
        *(ulong *)(lVar12 + 0x570) = (ulong)uVar28 * (ulong)local_b0[1];
LAB_10060ce78:
        if ((bVar22 != 0) || ((uVar3 & 0x1000000) != 0)) goto LAB_10060ce8c;
        piVar13 = (int *)*param_2;
        goto LAB_10060bac8;
      }
    }
LAB_10060ce24:
    uVar10 = 0;
  }
  else {
    iVar5 = FUN_10055aabc(param_1,*(undefined8 *)(lVar12 + 0x78),&local_b8,&local_a8,local_b0);
    if (iVar5 == 0) goto LAB_10060ce24;
    if (CONCAT44(uStack_b4,local_b8) != -1) {
      lVar12 = param_2[1];
      *(undefined4 *)(lVar12 + 0x56c) = 1;
      *(long *)(lVar12 + 0x570) = CONCAT44(uStack_b4,local_b8);
      goto LAB_10060c9b0;
    }
LAB_10060ca78:
    lVar12 = param_2[1];
    *(undefined1 *)(lVar12 + 0xfc6) = *(undefined1 *)((long)&local_a8 + (ulong)(local_b0[0] - 1));
    *(undefined4 *)(lVar12 + 0xf88) = 1;
LAB_10060cb78:
    if (*(int *)(lVar12 + 0x1010) == 0) {
      pcVar14 = *(code **)(lVar12 + 0x38);
      uVar24 = *(undefined8 *)(lVar12 + 0x68);
      uVar10 = 1;
LAB_10060cb8c:
      (*pcVar14)(param_2,uVar10,uVar24);
    }
LAB_10060babc:
    piVar13 = (int *)*param_2;
    *piVar13 = 2;
LAB_10060bac8:
    if (*piVar13 != 2) {
      lVar12 = param_2[1];
      uVar3 = *(uint *)(lVar12 + 0x558);
      uVar28 = *(uint *)(lVar12 + 0x560);
      if ((*(uint *)(lVar12 + 0x1c0) < uVar3) || (*(uint *)(lVar12 + 0x1c4) < uVar28)) {
        lVar26 = 0;
        while( true ) {
          lVar16 = *(long *)(lVar12 + lVar26 + 0x80);
          if (lVar16 != 0) {
            _free((void *)(lVar16 + -0x10));
            *(undefined8 *)(param_2[1] + lVar26 + 0x80) = 0;
            lVar12 = param_2[1];
          }
          pvVar8 = *(void **)(lVar12 + lVar26 + 0xfc8);
          if (pvVar8 != (void *)0x0) {
            _free(pvVar8);
            *(undefined8 *)(param_2[1] + lVar26 + 0xc0) = 0;
            *(undefined8 *)(param_2[1] + lVar26 + 0xfc8) = 0;
          }
          if (lVar26 == 0x38) break;
          lVar12 = param_2[1];
          lVar26 = lVar26 + 8;
        }
        if (uVar28 != 0) {
          uVar27 = (ulong)uVar3 + 4;
          uVar31 = 0;
          if (uVar27 != 0) {
            uVar31 = 0xffffffffffffffff / uVar27;
          }
          if (uVar31 < 4) {
LAB_10060c510:
            uVar10 = 0;
            *(undefined4 *)*param_2 = 8;
            goto LAB_10060ce3c;
          }
          uVar31 = 0;
          lVar12 = 0xc0;
          lVar26 = 0xfc8;
          do {
            puVar9 = _malloc(uVar27 * 4);
            if (puVar9 == (undefined8 *)0x0) goto LAB_10060c510;
            *puVar9 = 0;
            puVar9[1] = 0;
            *(undefined8 **)(param_2[1] + uVar31 * 8 + 0x80) = puVar9 + 2;
            iVar5 = FUN_10060404c((ulong)uVar3,param_2[1] + lVar26,param_2[1] + lVar12);
            if (iVar5 == 0) goto LAB_10060c510;
            uVar31 = uVar31 + 1;
            lVar12 = lVar12 + 8;
            lVar26 = lVar26 + 8;
          } while (uVar31 < uVar28);
        }
        lVar12 = param_2[1];
        *(uint *)(lVar12 + 0x1c0) = uVar3;
        *(uint *)(lVar12 + 0x1c4) = uVar28;
        uVar28 = *(uint *)(lVar12 + 0x560);
      }
      if (uVar28 != 0) {
        uVar27 = 0;
        do {
          uVar28 = *(uint *)(lVar12 + 0x568);
          iVar5 = *(int *)(lVar12 + 0x564);
          iVar6 = (int)uVar27;
          uVar3 = uVar28;
          if (iVar6 == 1) {
            uVar3 = uVar28 + 1;
          }
          uVar7 = uVar28;
          if (iVar6 == 0) {
            uVar7 = uVar28 + 1;
          }
          uVar2 = uVar28;
          if (iVar6 == 1) {
            uVar2 = uVar28 + 1;
          }
          if (iVar5 == 1) {
            uVar28 = uVar2;
          }
          if (iVar5 != 2) {
            uVar7 = uVar28;
          }
          if (iVar5 != 3) {
            uVar3 = uVar7;
          }
          iVar5 = FUN_100559be0(param_1,*(undefined8 *)(lVar12 + 0x78),local_b0 + 1,8);
          uVar28 = local_b0[1];
          if (iVar5 == 0) goto LAB_10060ce24;
          if ((local_b0[1] & 1) == 0) {
            lVar12 = param_2[1];
            *(undefined4 *)(lVar12 + (uVar27 & 0xffffffff) * 0x140 + 0x6b8) = 0;
            local_b0[1] = local_b0[1] & 0xfe;
          }
          else {
            local_b0[1] = local_b0[1] & 0xfe;
            iVar5 = FUN_10055a2c8(param_1,*(undefined8 *)(param_2[1] + 0x78),local_b0);
            if (iVar5 == 0) goto LAB_10060ce24;
            lVar12 = param_2[1];
            *(uint *)(lVar12 + (uVar27 & 0xffffffff) * 0x140 + 0x6b8) = local_b0[0] + 1;
            uVar3 = uVar3 - (local_b0[0] + 1);
          }
          if ((local_b0[1] >> 7 & 1) != 0) {
            if (*(int *)(lVar12 + 0x1010) == 0) {
              pcVar14 = *(code **)(lVar12 + 0x38);
              uVar24 = *(undefined8 *)(lVar12 + 0x68);
              uVar10 = 0;
LAB_10060bd78:
              (*pcVar14)(param_2,uVar10,uVar24);
            }
            goto LAB_10060bf70;
          }
          if (local_b0[1] == 2) {
            uVar31 = 0;
            sVar11 = 0;
            lVar26 = lVar12 + 0x558 + (uVar27 & 0xffffffff) * 0x140;
            lVar16 = *(long *)(lVar12 + (uVar27 & 0xffffffff) * 8 + 0xc0);
            *(undefined4 *)(lVar26 + 0x28) = 1;
            plVar23 = (long *)(lVar26 + 0x30);
            *plVar23 = lVar16;
            if (*(int *)(lVar12 + 0x558) != 0) {
              do {
                iVar5 = FUN_100559e28(param_1,*(undefined8 *)(lVar12 + 0x78),&local_a8,uVar3);
                if (iVar5 == 0) goto LAB_10060ce24;
                *(uint *)(lVar16 + uVar31 * 4) = local_a8;
                uVar31 = uVar31 + 1;
                lVar12 = param_2[1];
              } while (uVar31 < *(uint *)(lVar12 + 0x558));
              sVar11 = (ulong)*(uint *)(lVar12 + 0x558) << 2;
            }
            if (param_4 != 0) {
              _memcpy(*(void **)(lVar12 + (uVar27 & 0xffffffff) * 8 + 0x80),(void *)*plVar23,sVar11)
              ;
            }
LAB_10060be04:
            if ((param_4 != 0) && ((uVar28 & 1) != 0)) {
LAB_10060be1c:
              lVar12 = param_2[1];
              local_b0[1] = *(uint *)(lVar12 + (uVar27 & 0xffffffff) * 0x140 + 0x6b8);
              if (*(int *)(lVar12 + 0x558) != 0) {
                piVar13 = *(int **)(lVar12 + (uVar27 & 0xffffffff) * 8 + 0x80);
                *piVar13 = *piVar13 << (ulong)(local_b0[1] & 0x1f);
                uVar31 = 1;
                if (1 < *(uint *)(lVar12 + 0x558)) {
                  do {
                    piVar13[uVar31] = piVar13[uVar31] << (ulong)(local_b0[1] & 0x1f);
                    uVar31 = uVar31 + 1;
                  } while (uVar31 < *(uint *)(lVar12 + 0x558));
                }
              }
            }
          }
          else {
            if (local_b0[1] == 0) {
              lVar26 = *(long *)(lVar12 + (uVar27 & 0xffffffff) * 8 + 0x80);
              *(undefined4 *)(lVar12 + (uVar27 & 0xffffffff) * 0x140 + 0x580) = 0;
              iVar5 = FUN_100559e28(param_1,*(undefined8 *)(lVar12 + 0x78),&local_a8,uVar3);
              if (iVar5 != 0) {
                *(uint *)(lVar12 + (uVar27 & 0xffffffff) * 0x140 + 0x588) = local_a8;
                if ((param_4 != 0) && (lVar12 = param_2[1], *(int *)(lVar12 + 0x558) != 0)) {
                  uVar31 = 0;
                  do {
                    *(uint *)(lVar26 + uVar31 * 4) = local_a8;
                    uVar31 = uVar31 + 1;
                  } while (uVar31 < *(uint *)(lVar12 + 0x558));
                }
                goto LAB_10060be04;
              }
              goto LAB_10060ce24;
            }
            if (local_b0[1] < 0x10) {
              if (*(int *)(lVar12 + 0x1010) == 0) {
                (**(code **)(lVar12 + 0x38))(param_2,3,*(undefined8 *)(lVar12 + 0x68));
              }
              else {
                *(int *)(lVar12 + 0x1ad0) = *(int *)(lVar12 + 0x1ad0) + 1;
              }
LAB_10060bf70:
              *(undefined4 *)*param_2 = 2;
              goto LAB_10060bf7c;
            }
            if (local_b0[1] < 0x19) {
              uVar7 = local_b0[1] >> 1 & 7;
              uVar29 = (ulong)uVar7;
              uVar31 = uVar27 & 0xffffffff;
              lVar32 = lVar12 + uVar31 * 0x140;
              *(undefined4 *)(lVar32 + 0x580) = 2;
              *(undefined8 *)(lVar32 + 0x5b8) =
                   *(undefined8 *)(lVar12 + (uVar27 & 0xffffffff) * 8 + 0xc0);
              *(uint *)(lVar32 + 0x5a0) = uVar7;
              uVar10 = *(undefined8 *)(lVar12 + 0x78);
              if (uVar7 != 0) {
                uVar30 = 0;
                do {
                  iVar5 = FUN_100559e28(param_1,uVar10,&local_a8,uVar3);
                  if (iVar5 == 0) goto LAB_10060c728;
                  *(uint *)(lVar12 + uVar27 * 0x140 + 0x5a4 + uVar30 * 4) = local_a8;
                  uVar30 = uVar30 + 1;
                  uVar10 = *(undefined8 *)(param_2[1] + 0x78);
                } while (uVar30 < uVar29);
              }
              iVar5 = FUN_100559be0(param_1,uVar10,&local_b8,2);
              if (iVar5 != 0) {
                lVar26 = lVar12 + uVar31 * 0x140;
                *(uint *)(lVar26 + 0x588) = local_b8;
                lVar32 = param_2[1];
                if (1 < local_b8) {
                  if (*(int *)(lVar32 + 0x1010) == 0) {
                    (**(code **)(lVar32 + 0x38))(param_2,3,*(undefined8 *)(lVar32 + 0x68));
                  }
                  else {
                    *(int *)(lVar32 + 0x1ad0) = *(int *)(lVar32 + 0x1ad0) + 1;
                  }
                  *(undefined4 *)*param_2 = 2;
LAB_10060c1c0:
                  lVar32 = *(long *)PTR____stack_chk_guard_101444218;
                  if (param_4 == 0) goto LAB_10060bf7c;
                  goto LAB_10060c430;
                }
                iVar5 = FUN_100559be0(param_1,*(undefined8 *)(lVar32 + 0x78),&local_b8,4);
                if (iVar5 != 0) {
                  lVar20 = lVar12 + uVar31 * 0x140;
                  *(uint *)(lVar20 + 0x590) = local_b8;
                  lVar16 = param_2[1];
                  lVar32 = lVar16 + uVar31 * 0x18 + 0x100;
                  *(long *)(lVar20 + 0x598) = lVar32;
                  uVar3 = *(uint *)(lVar26 + 0x588);
                  if ((1 < uVar3) ||
                     (iVar5 = FUN_10060d7fc(param_1,param_2,uVar29,local_b8,lVar32,
                                            *(undefined8 *)(lVar16 + uVar31 * 8 + 0xc0),uVar3 == 1),
                     iVar5 != 0)) {
                    if (param_4 != 0) {
                      _memcpy(*(void **)(param_2[1] + uVar31 * 8 + 0x80),
                              (void *)(lVar12 + uVar31 * 0x140 + 0x5a4),uVar29 << 2);
                      lVar12 = param_2[1] + uVar31 * 8;
                      FUN_10055db68(*(undefined8 *)(lVar12 + 0xc0),
                                    *(int *)(param_2[1] + 0x558) - uVar7,uVar29,
                                    *(long *)(lVar12 + 0x80) + (ulong)uVar7 * 4);
                    }
                    goto LAB_10060c1c0;
                  }
                }
              }
LAB_10060c728:
              lVar32 = *(long *)PTR____stack_chk_guard_101444218;
              uVar10 = 0;
              goto LAB_10060ce3c;
            }
            if (local_b0[1] < 0x40) {
              if (*(int *)(lVar12 + 0x1010) == 0) {
                pcVar14 = *(code **)(lVar12 + 0x38);
                uVar24 = *(undefined8 *)(lVar12 + 0x68);
                uVar10 = 3;
                goto LAB_10060bd78;
              }
              *(int *)(lVar12 + 0x1ad0) = *(int *)(lVar12 + 0x1ad0) + 1;
              goto LAB_10060bf70;
            }
            uVar31 = 0;
            uVar29 = uVar27 & 0xffffffff;
            puVar17 = (undefined4 *)(lVar12 + 0x580 + uVar29 * 0x140);
            *puVar17 = 3;
            *(undefined8 *)(puVar17 + 0x4c) =
                 *(undefined8 *)(lVar12 + (uVar27 & 0xffffffff) * 8 + 0xc0);
            uVar7 = (local_b0[1] >> 1 & 0x1f) + 1;
            uVar30 = (ulong)uVar7;
            puVar17[8] = uVar7;
            uVar10 = *(undefined8 *)(lVar12 + 0x78);
            do {
              iVar5 = FUN_100559e28(param_1,uVar10,&local_a8,uVar3);
              if (iVar5 == 0) goto LAB_10060c73c;
              *(uint *)(lVar12 + 0x580 + uVar27 * 0x140 + 0xac + uVar31 * 4) = local_a8;
              uVar31 = uVar31 + 1;
              uVar10 = *(undefined8 *)(param_2[1] + 0x78);
            } while (uVar31 < uVar30);
            iVar5 = FUN_100559be0(param_1,uVar10,&local_b8,4);
            if (iVar5 == 0) goto LAB_10060c73c;
            if (local_b8 != 0xf) {
              lVar26 = lVar12 + uVar29 * 0x140;
              *(uint *)(lVar26 + 0x5a4) = local_b8 + 1;
              iVar5 = FUN_100559e28(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_a8,5);
              if (iVar5 != 0) {
                uVar31 = 0;
                puVar1 = (uint *)(lVar26 + 0x5a4);
                puVar18 = (uint *)(lVar12 + 0x580 + uVar29 * 0x140 + 0x28);
                *puVar18 = local_a8;
                uVar10 = *(undefined8 *)(param_2[1] + 0x78);
                do {
                  iVar5 = FUN_100559e28(param_1,uVar10,&local_a8,*puVar1);
                  if (iVar5 == 0) goto LAB_10060c73c;
                  *(uint *)(lVar12 + 0x580 + uVar27 * 0x140 + 0x2c + uVar31 * 4) = local_a8;
                  uVar31 = uVar31 + 1;
                  uVar10 = *(undefined8 *)(param_2[1] + 0x78);
                } while (uVar31 < uVar30);
                iVar5 = FUN_100559be0(param_1,uVar10,&local_b8,2);
                if (iVar5 != 0) {
                  lVar16 = lVar12 + uVar29 * 0x140;
                  *(uint *)(lVar16 + 0x588) = local_b8;
                  lVar26 = param_2[1];
                  if (1 < local_b8) {
                    if (*(int *)(lVar26 + 0x1010) == 0) {
                      (**(code **)(lVar26 + 0x38))(param_2,3,*(undefined8 *)(lVar26 + 0x68));
                    }
                    else {
                      *(int *)(lVar26 + 0x1ad0) = *(int *)(lVar26 + 0x1ad0) + 1;
                    }
                    *(undefined4 *)*param_2 = 2;
                    goto LAB_10060c420;
                  }
                  iVar5 = FUN_100559be0(param_1,*(undefined8 *)(lVar26 + 0x78),&local_b8,4);
                  if (iVar5 != 0) {
                    lVar19 = lVar12 + uVar29 * 0x140;
                    *(uint *)(lVar19 + 0x590) = local_b8;
                    lVar20 = param_2[1];
                    lVar26 = lVar20 + uVar29 * 0x18 + 0x100;
                    *(long *)(lVar19 + 0x598) = lVar26;
                    uVar2 = *(uint *)(lVar16 + 0x588);
                    if ((1 < uVar2) ||
                       (iVar5 = FUN_10060d7fc(param_1,param_2,uVar30,local_b8,lVar26,
                                              *(undefined8 *)(lVar20 + uVar29 * 8 + 0xc0),uVar2 == 1
                                             ), iVar5 != 0)) {
                      if (param_4 == 0) goto LAB_10060c420;
                      _memcpy(*(void **)(param_2[1] + uVar29 * 8 + 0x80),
                              (void *)(lVar12 + uVar29 * 0x140 + 0x62c),uVar30 << 2);
                      uVar2 = *puVar1;
                      iVar5 = FUN_100559568(uVar30);
                      if (uVar2 + uVar3 + iVar5 < 0x21) {
                        if ((0x10 < uVar3) || (0x10 < *puVar1)) {
                          lVar26 = param_2[1];
                          pcVar14 = *(code **)(lVar26 + 0x40);
                          goto LAB_10060c3ec;
                        }
                        lVar16 = param_2[1];
                        lVar26 = lVar16 + uVar29 * 8;
                        uVar10 = *(undefined8 *)(lVar26 + 0xc0);
                        if (uVar7 < 9) {
                          pcVar14 = *(code **)(lVar16 + 0x58);
                        }
                        else {
                          pcVar14 = *(code **)(lVar16 + 0x50);
                        }
                        iVar5 = *(int *)(lVar16 + 0x558) - uVar7;
                        uVar3 = *puVar18;
                        lVar26 = *(long *)(lVar26 + 0x80);
                      }
                      else {
                        lVar26 = param_2[1];
                        pcVar14 = *(code **)(lVar26 + 0x48);
LAB_10060c3ec:
                        lVar16 = lVar26 + uVar29 * 8;
                        uVar10 = *(undefined8 *)(lVar16 + 0xc0);
                        iVar5 = *(int *)(lVar26 + 0x558) - uVar7;
                        uVar3 = *puVar18;
                        lVar26 = *(long *)(lVar16 + 0x80);
                      }
                      (*pcVar14)(uVar10,iVar5,lVar12 + uVar29 * 0x140 + 0x5ac,uVar30,uVar3,
                                 lVar26 + uVar30 * 4);
                      goto LAB_10060c420;
                    }
                  }
                }
              }
LAB_10060c73c:
              uVar10 = 0;
              goto LAB_10060ce3c;
            }
            lVar12 = param_2[1];
            if (*(int *)(lVar12 + 0x1010) == 0) {
              (**(code **)(lVar12 + 0x38))(param_2,0,*(undefined8 *)(lVar12 + 0x68));
            }
            *(undefined4 *)*param_2 = 2;
LAB_10060c420:
            if (param_4 != 0) {
LAB_10060c430:
              if (((uVar28 & 1) == 0) || (*(int *)*param_2 == 2)) goto LAB_10060bf7c;
              goto LAB_10060be1c;
            }
          }
LAB_10060bf7c:
          if (*(int *)*param_2 == 2) goto LAB_10060ce38;
          uVar27 = uVar27 + 1;
          lVar12 = param_2[1];
        } while ((uint)uVar27 < *(uint *)(lVar12 + 0x560));
      }
      iVar5 = FUN_100559ba0(*(undefined8 *)(lVar12 + 0x78));
      if (iVar5 == 0) {
        local_a8 = 0;
        uVar24 = *(undefined8 *)(param_2[1] + 0x78);
        uVar10 = FUN_100559bb0(uVar24);
        iVar5 = FUN_100559be0(param_1,uVar24,&local_a8,uVar10);
        if (iVar5 == 0) goto LAB_10060ce24;
        if (local_a8 != 0) {
          lVar12 = param_2[1];
          if (*(int *)(lVar12 + 0x1010) == 0) {
            (**(code **)(lVar12 + 0x38))(param_2,0,*(undefined8 *)(lVar12 + 0x68));
          }
          *(undefined4 *)*param_2 = 2;
        }
      }
      if (*(int *)*param_2 != 2) {
        iVar5 = FUN_100559b34(*(undefined8 *)(param_2[1] + 0x78));
        iVar6 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_c4,0x10);
        if (iVar6 == 0) goto LAB_10060ce24;
        if (iVar5 == local_c4) {
          if (param_4 != 0) {
            lVar12 = param_2[1];
            iVar5 = *(int *)(lVar12 + 0x564);
            if (iVar5 == 1) {
              if (*(int *)(lVar12 + 0x558) != 0) {
                lVar26 = 0;
                lVar16 = *(long *)(lVar12 + 0x80);
                lVar20 = *(long *)(lVar12 + 0x88);
                do {
                  lVar19 = lVar26 * 4;
                  *(int *)(lVar20 + lVar19) = *(int *)(lVar16 + lVar19) - *(int *)(lVar20 + lVar19);
                  lVar26 = lVar26 + 1;
                } while ((uint)lVar26 < *(uint *)(lVar12 + 0x558));
              }
            }
            else if (iVar5 == 3) {
              if (*(int *)(lVar12 + 0x558) != 0) {
                lVar26 = 0;
                lVar16 = *(long *)(lVar12 + 0x80);
                lVar20 = *(long *)(lVar12 + 0x88);
                do {
                  lVar19 = lVar26 * 4;
                  uVar28 = *(uint *)(lVar20 + lVar19);
                  uVar3 = *(int *)(lVar16 + lVar19) << 1 | uVar28 & 1;
                  *(int *)(lVar16 + lVar19) = (int)(uVar3 + uVar28) >> 1;
                  *(int *)(lVar20 + lVar19) = (int)(uVar3 - uVar28) >> 1;
                  lVar26 = lVar26 + 1;
                } while ((uint)lVar26 < *(uint *)(lVar12 + 0x558));
              }
            }
            else if ((iVar5 == 2) && (*(int *)(lVar12 + 0x558) != 0)) {
              lVar26 = 0;
              lVar16 = *(long *)(lVar12 + 0x80);
              lVar20 = *(long *)(lVar12 + 0x88);
              do {
                lVar19 = lVar26 * 4;
                *(int *)(lVar16 + lVar19) = *(int *)(lVar16 + lVar19) + *(int *)(lVar20 + lVar19);
                lVar26 = lVar26 + 1;
              } while ((uint)lVar26 < *(uint *)(lVar12 + 0x558));
            }
          }
        }
        else {
          lVar12 = param_2[1];
          if (*(int *)(lVar12 + 0x1010) == 0) {
            (**(code **)(lVar12 + 0x38))(param_2,2,*(undefined8 *)(lVar12 + 0x68));
          }
          if ((param_4 != 0) && (lVar12 = param_2[1], *(int *)(lVar12 + 0x560) != 0)) {
            lVar26 = 0;
            do {
              _bzero(*(void **)(lVar12 + lVar26 * 8 + 0x80),(ulong)*(uint *)(lVar12 + 0x558) << 2);
              lVar12 = param_2[1];
              lVar26 = lVar26 + 1;
            } while ((uint)lVar26 < *(uint *)(lVar12 + 0x560));
          }
        }
        *param_3 = 1;
        lVar12 = param_2[1];
        if (*(int *)(lVar12 + 0x1cc) != 0) {
          *(int *)(lVar12 + 0x1c8) = *(int *)(lVar12 + 0x1cc);
        }
        uVar3 = *(uint *)(lVar12 + 0x560);
        uVar31 = (ulong)uVar3;
        lVar26 = *param_2;
        *(uint *)(lVar26 + 4) = uVar3;
        *(undefined4 *)(lVar26 + 8) = *(undefined4 *)(lVar12 + 0x564);
        iVar5 = *(int *)(lVar12 + 0x568);
        *(int *)(lVar26 + 0xc) = iVar5;
        *(undefined4 *)(lVar26 + 0x10) = *(undefined4 *)(lVar12 + 0x55c);
        uVar28 = *(uint *)(lVar12 + 0x558);
        *(uint *)(lVar26 + 0x14) = uVar28;
        uVar29 = *(ulong *)(lVar12 + 0x570);
        uVar27 = uVar28 + uVar29;
        *(ulong *)(lVar12 + 0x1d0) = uVar27;
        if (param_4 != 0) {
          pvVar8 = (void *)(lVar12 + 0x558);
          puVar17 = (undefined4 *)(lVar12 + 0x80);
          if (*(int *)(lVar12 + 0x1010) == 0) {
            if (*(int *)(lVar12 + 0x1d8) == 0) {
              *(undefined4 *)(lVar12 + 0x1008) = 0;
            }
            else if (*(int *)(lVar12 + 0x1008) != 0) {
              iVar5 = FUN_100602700(lVar12 + 0x1018,puVar17,uVar31,(ulong)uVar28,iVar5 + 7U >> 3);
              if (iVar5 == 0) goto LAB_10060ce24;
              lVar12 = param_2[1];
            }
            pcVar14 = *(code **)(lVar12 + 0x28);
            uVar10 = *(undefined8 *)(lVar12 + 0x68);
          }
          else {
            uVar30 = *(ulong *)(lVar12 + 0x1ac8);
            _memcpy((void *)(lVar12 + 0x1090),pvVar8,0xa30);
            if ((uVar30 < uVar29) || (uVar27 <= uVar30)) goto LAB_10060ce2c;
            lVar26 = param_2[1];
            *(undefined4 *)(lVar26 + 0x1010) = 0;
            iVar5 = (int)(uVar30 - uVar29);
            if (iVar5 == 0) {
              pcVar14 = *(code **)(lVar26 + 0x28);
              uVar10 = *(undefined8 *)(lVar26 + 0x68);
            }
            else {
              uVar27 = uVar30 - uVar29 & 0xffffffff;
              if (uVar3 != 0) {
                if (uVar3 == (uVar3 & 3)) {
                  lVar16 = 0;
                }
                else if (((undefined4 *)(lVar12 + uVar31 * 8 + 0x78) < &local_a8) ||
                        (local_b0 + uVar31 * 2 < (uint *)(lVar12 + 0x80U))) {
                  lVar16 = uVar31 - (uVar3 & 3);
                  lVar20 = uVar31 - (uVar31 & 3);
                  lVar19 = uVar27 * 4;
                  plVar23 = alStack_a0 + 1;
                  plVar21 = (long *)(lVar12 + 0x90);
                  do {
                    lVar33 = plVar21[-2];
                    lVar35 = plVar21[1];
                    lVar34 = *plVar21;
                    plVar23[-1] = plVar21[-1] + lVar19;
                    plVar23[-2] = lVar33 + lVar19;
                    plVar23[1] = lVar35 + lVar19;
                    *plVar23 = lVar34 + lVar19;
                    lVar20 = lVar20 + -4;
                    plVar23 = plVar23 + 4;
                    plVar21 = plVar21 + 4;
                  } while (lVar20 != 0);
                }
                else {
                  lVar16 = 0;
                }
                lVar20 = uVar31 - lVar16;
                if (lVar20 != 0) {
                  plVar23 = (long *)(&local_a8 + lVar16 * 2);
                  plVar21 = (long *)(lVar16 * 8 + lVar12 + 0x80);
                  do {
                    *plVar23 = *plVar21 + uVar27 * 4;
                    lVar20 = lVar20 + -1;
                    plVar23 = plVar23 + 1;
                    plVar21 = plVar21 + 1;
                  } while (lVar20 != 0);
                }
              }
              pvVar8 = (void *)(lVar26 + 0x1090);
              *(int *)(lVar26 + 0x1090) = *(int *)(lVar26 + 0x1090) - iVar5;
              *(ulong *)(lVar26 + 0x10a8) = *(long *)(lVar26 + 0x10a8) + uVar27;
              pcVar14 = *(code **)(lVar26 + 0x28);
              uVar10 = *(undefined8 *)(lVar26 + 0x68);
              puVar17 = &local_a8;
            }
          }
          iVar5 = (*pcVar14)(param_2,pvVar8,puVar17,uVar10);
          if (iVar5 != 0) goto LAB_10060ce24;
        }
LAB_10060ce2c:
        *(undefined4 *)*param_2 = 2;
      }
    }
LAB_10060ce38:
    uVar10 = 1;
  }
LAB_10060ce3c:
  if (lVar32 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar10);
  }
  return;
}




undefined8 FUN_10060cf64(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  do {
    switch(*(undefined4 *)*param_2) {
    case 0:
      iVar1 = FUN_10060a5b4(param_1,param_2);
      break;
    case 1:
      iVar1 = FUN_10060a84c(param_1,param_2);
      break;
    case 2:
    case 3:
    case 4:
    case 7:
      return 1;
    default:
      goto switchD_10060cfa0_caseD_2;
    }
  } while (iVar1 != 0);
switchD_10060cfa0_caseD_2:
  return 0;
}




undefined8 FUN_10060cffc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_34 [4];
  
LAB_10060d020:
  do {
    switch(*(undefined4 *)*param_2) {
    case 0:
      iVar1 = FUN_10060a5b4(param_1,param_2);
      break;
    case 1:
      iVar1 = FUN_10060a84c(param_1,param_2);
      break;
    case 2:
      goto switchD_10060d03c_caseD_2;
    case 3:
      iVar1 = FUN_10060b9a4(param_1,param_2,auStack_34,1);
      break;
    case 4:
    case 7:
      goto switchD_10060d03c_caseD_4;
    default:
      goto switchD_10060d03c_caseD_4;
    }
    if (iVar1 == 0) {
switchD_10060d03c_caseD_4:
      return 0;
    }
  } while( true );
switchD_10060d03c_caseD_2:
  iVar1 = FUN_10060b81c(param_1,param_2);
  if (iVar1 == 0) {
switchD_10060d03c_caseD_4:
    return 1;
  }
  goto LAB_10060d020;
}




undefined8 FUN_10060d0d4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_34;
  
  do {
    uVar2 = 0;
    switch(*(undefined4 *)*param_2) {
    case 2:
      iVar1 = FUN_10060b81c(param_1,param_2);
      if (iVar1 == 0) goto switchD_10060d118_caseD_4;
      break;
    case 3:
      iVar1 = FUN_10060b9a4(param_1,param_2,&local_34,0);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_34 != 0) {
switchD_10060d118_caseD_4:
        uVar2 = 1;
switchD_10060d118_caseD_5:
        return uVar2;
      }
      break;
    case 4:
    case 7:
      goto switchD_10060d118_caseD_4;
    default:
      goto switchD_10060d118_caseD_5;
    }
  } while( true );
}




undefined8 FUN_10060d188(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  bool bVar1;
  ulong *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  
  if (*(uint *)*param_2 < 5) {
    lVar10 = param_2[1];
    if (*(long *)(lVar10 + 8) == 0) {
      uVar6 = 0;
    }
    else if ((*(int *)(lVar10 + 0x1d8) == 0) || (param_3 <= *(long *)(lVar10 + 0x210) - 1U)) {
      *(undefined4 *)(lVar10 + 0x1010) = 1;
      *(undefined4 *)(lVar10 + 0x1008) = 0;
      iVar5 = (**(code **)(lVar10 + 0x18))(param_2,&local_88,*(undefined8 *)(lVar10 + 0x68));
      if (iVar5 == 0) {
        puVar15 = (uint *)*param_2;
        uVar17 = *puVar15;
        if (uVar17 < 2) {
          do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(uVar17) {
            case 0:
              iVar5 = FUN_10060a5b4(param_1,param_2);
              break;
            case 1:
              iVar5 = FUN_10060a84c(param_1,param_2);
              break;
            default:
              goto switchD_10060d258_default;
            }
            if (iVar5 == 0) goto switchD_10060d258_default;
            uVar17 = *(uint *)*param_2;
          } while( true );
        }
        lVar10 = param_2[1];
        uVar13 = *(ulong *)(lVar10 + 0x1ac0);
        if (*(int *)(lVar10 + 0x1d8) == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(ulong *)(lVar10 + 0x210);
        }
        iVar5 = *(int *)(lVar10 + 0x1f0);
        uVar17 = puVar15[1];
        uVar20 = puVar15[3];
        piVar3 = (int *)0x0;
        if (*(int *)(lVar10 + 0x1dc) != 0) {
          piVar3 = (int *)(lVar10 + 0x2a0);
        }
        if (uVar17 == 0) {
          uVar17 = *(uint *)(lVar10 + 0x204);
        }
        if (uVar20 == 0) {
          uVar20 = *(uint *)(lVar10 + 0x208);
        }
        if (*(int *)(lVar10 + 0x1fc) == 0) {
          if ((iVar5 == 0) || (iVar5 != *(int *)(lVar10 + 500))) {
            uVar17 = uVar17 * uVar20 * 0x1000 >> 3 | 0x40;
          }
          else {
            uVar17 = (uVar17 * iVar5 * uVar20 >> 3) + 0x40;
          }
        }
        else {
          uVar17 = ((uint)(*(int *)(lVar10 + 0x1f8) + *(int *)(lVar10 + 0x1fc)) >> 1) + 1;
        }
        local_80 = local_88;
        uVar14 = uVar19;
        if (uVar19 == 0) {
          uVar14 = param_3;
        }
        uVar16 = uVar14;
        local_78 = uVar13;
        if (piVar3 == (int *)0x0) {
          uVar22 = 0;
          uVar19 = local_80;
        }
        else {
          iVar5 = *piVar3;
          lVar18 = (long)iVar5;
          if (iVar5 < 1) {
            uVar22 = 0;
            lVar8 = 0;
          }
          else {
            lVar21 = *(long *)(piVar3 + 2);
            uVar19 = uVar19 - 1;
            piVar7 = (int *)(lVar21 + lVar18 * 0x18 + -8);
            lVar8 = lVar18;
            do {
              uVar22 = *(ulong *)(piVar7 + -4);
              if ((uVar22 != 0xffffffffffffffff) &&
                 ((*piVar7 != 0 && uVar22 <= uVar19) && uVar22 <= param_3)) {
                local_78 = *(long *)(lVar21 + (lVar8 + -1) * 0x18 + 8) + uVar13;
                goto LAB_10060d3ec;
              }
              piVar7 = piVar7 + -6;
              bVar1 = 1 < lVar8;
              lVar8 = lVar8 + -1;
            } while (bVar1);
            uVar22 = 0;
LAB_10060d3ec:
            lVar8 = 0;
            piVar7 = (int *)(lVar21 + 0x10);
            do {
              uVar9 = *(ulong *)(piVar7 + -4);
              if ((uVar9 != 0xffffffffffffffff) &&
                 (((*piVar7 != 0 && uVar19 >= uVar9) && param_3 <= uVar9) &&
                  ((*piVar7 == 0 || uVar19 < uVar9) || uVar9 != param_3))) break;
              lVar8 = lVar8 + 1;
              piVar7 = piVar7 + 6;
            } while (lVar8 < lVar18);
          }
          if ((int)lVar8 < iVar5) {
            puVar2 = (ulong *)(*(long *)(piVar3 + 2) + (long)(int)lVar8 * 0x18);
            uVar16 = *puVar2;
            local_88 = puVar2[1] + uVar13;
          }
          uVar19 = local_88;
          if (local_88 < local_78) {
            uVar22 = 0;
            uVar16 = uVar14;
            uVar19 = local_80;
            local_78 = uVar13;
          }
        }
        local_80 = uVar19;
        if (uVar16 == uVar22) {
          uVar16 = uVar16 + 1;
        }
        *(ulong *)(lVar10 + 0x1ac8) = param_3;
        if (uVar22 < uVar16) {
          bVar1 = true;
LAB_10060d494:
          if (local_78 <= local_80) {
            lVar10 = param_2[1];
            do {
              uVar13 = (long)(((double)(param_3 - uVar22) / (double)(uVar16 - uVar22)) *
                             (double)(local_80 - local_78)) + (local_78 - uVar17);
              if ((long)local_80 <= (long)uVar13) {
                uVar13 = local_80 - 1;
              }
              uVar19 = local_78;
              if ((long)local_78 <= (long)uVar13) {
                uVar19 = uVar13;
              }
              iVar5 = (**(code **)(lVar10 + 8))(param_2,uVar19,*(undefined8 *)(lVar10 + 0x68));
              if (iVar5 != 0) break;
              lVar10 = param_2[1];
              *(undefined8 *)(lVar10 + 0x1d0) = 0;
              *(undefined4 *)(lVar10 + 0x1008) = 0;
              iVar5 = FUN_1005598e8(*(undefined8 *)(lVar10 + 0x78));
              uVar6 = 0;
              uVar12 = 8;
              if (iVar5 != 0) {
                uVar12 = 2;
              }
              *(undefined4 *)*param_2 = uVar12;
              if (iVar5 == 0) goto LAB_10060d6a8;
              *(undefined4 *)(param_2[1] + 0x1ad0) = 0;
              iVar5 = FUN_10060a4d0(param_1,param_2);
              if (iVar5 == 0) break;
              lVar10 = param_2[1];
              if (*(int *)(lVar10 + 0x1010) == 0) {
                uVar6 = 1;
                goto LAB_10060d6a8;
              }
              if (*(long *)(lVar10 + 0x1d0) != 0) {
                uVar14 = *(ulong *)(lVar10 + 0x10a8);
                uVar13 = *(uint *)(lVar10 + 0x1090) + uVar14;
                if ((bVar1) || (uVar13 < uVar16)) goto LAB_10060d5a0;
              }
              if (uVar19 == local_78) break;
              uVar20 = uVar17 << 1;
              bVar4 = uVar17 != 0;
              uVar17 = 0x10;
              if (bVar4) {
                uVar17 = uVar20;
              }
              if (local_80 < local_78) break;
            } while( true );
          }
        }
LAB_10060d698:
        uVar6 = 0;
        *(undefined4 *)*param_2 = 6;
      }
      else {
switchD_10060d258_default:
        uVar6 = 0;
      }
LAB_10060d6a8:
      *(undefined4 *)(param_2[1] + 0x1010) = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
LAB_10060d5a0:
  if (uVar14 < uVar22) goto LAB_10060d698;
  pcVar11 = *(code **)(lVar10 + 0x10);
  if (param_3 < uVar14) {
    if (((pcVar11 == (code *)0x0) ||
        (iVar5 = (*pcVar11)(param_2,&local_80,*(undefined8 *)(lVar10 + 0x68)), iVar5 != 0)) ||
       (iVar5 = FUN_100559ba0(*(undefined8 *)(param_2[1] + 0x78)), iVar5 == 0)) goto LAB_10060d698;
    uVar14 = FUN_100559bc4(*(undefined8 *)(param_2[1] + 0x78));
    bVar1 = false;
    local_80 = local_80 - (uVar14 >> 3 & 0x1fffffff);
    uVar17 = (int)(((local_80 - uVar19) * 2) / 3) + 0x10;
    uVar16 = uVar13;
    if (uVar13 <= uVar22) goto LAB_10060d698;
  }
  else {
    if (((pcVar11 == (code *)0x0) ||
        (iVar5 = (*pcVar11)(param_2,&local_78,*(undefined8 *)(lVar10 + 0x68)), iVar5 != 0)) ||
       (iVar5 = FUN_100559ba0(*(undefined8 *)(param_2[1] + 0x78)), iVar5 == 0)) goto LAB_10060d698;
    uVar14 = FUN_100559bc4(*(undefined8 *)(param_2[1] + 0x78));
    bVar1 = false;
    local_78 = local_78 - (uVar14 >> 3 & 0x1fffffff);
    uVar17 = (int)(((local_78 - uVar19) * 2) / 3) + 0x10;
    uVar22 = uVar13;
    if (uVar16 <= uVar13) goto LAB_10060d698;
  }
  goto LAB_10060d494;
}




undefined8 FUN_10060d704(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  pcVar2 = *(code **)(param_4[1] + 0x20);
  if ((pcVar2 == (code *)0x0) ||
     (iVar1 = (*pcVar2)(param_4,*(undefined8 *)(param_4[1] + 0x68)), iVar1 == 0)) {
    if ((*param_3 == 0) ||
       (((puVar4 = (undefined8 *)param_4[1], *(int *)(puVar4 + 0x202) != 0 &&
         (0x14 < *(uint *)(puVar4 + 0x35a))) ||
        (iVar1 = (*(code *)*puVar4)(param_4,param_2,param_3,puVar4[0xd]), iVar1 == 2)))) {
      puVar3 = (undefined4 *)*param_4;
      uVar5 = 7;
      goto LAB_10060d79c;
    }
    if (*param_3 != 0) {
      return 1;
    }
    if (iVar1 != 1) {
      pcVar2 = *(code **)(param_4[1] + 0x20);
      if (pcVar2 == (code *)0x0) {
        return 1;
      }
      iVar1 = (*pcVar2)(param_4,*(undefined8 *)(param_4[1] + 0x68));
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  else {
    *param_3 = 0;
  }
  puVar3 = (undefined4 *)*param_4;
  uVar5 = 4;
LAB_10060d79c:
  *puVar3 = uVar5;
  return 0;
}




undefined8
FUN_10060d7fc(undefined8 param_1,undefined8 *param_2,uint param_3,uint param_4,long *param_5,
             long param_6,int param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 local_68;
  uint local_64;
  
  lVar9 = param_2[1];
  uVar4 = *(uint *)(lVar9 + 0x558);
  uVar1 = uVar4 - param_3;
  if (param_4 != 0) {
    uVar1 = uVar4 >> (ulong)(param_4 & 0x1f);
  }
  puVar2 = &DAT_10115faa0;
  if (param_7 == 0) {
    puVar2 = &DAT_10115fa9c;
  }
  uVar5 = *puVar2;
  puVar3 = &DAT_10115faac;
  if (param_7 == 0) {
    puVar3 = &DAT_10115faa8;
  }
  uVar6 = *puVar3;
  if (param_4 != 0) {
    uVar4 = uVar1;
  }
  if (uVar4 < param_3) {
    if (*(int *)(lVar9 + 0x1010) == 0) {
      (**(code **)(lVar9 + 0x38))(param_2,0,*(undefined8 *)(lVar9 + 0x68));
    }
    *(undefined4 *)*param_2 = 2;
    uVar8 = 1;
  }
  else {
    uVar4 = 6;
    if (5 < param_4) {
      uVar4 = param_4;
    }
    iVar7 = FUN_1005fc754(param_5,uVar4);
    if (iVar7 == 0) {
      uVar8 = 0;
      *(undefined4 *)*param_2 = 8;
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      do {
        iVar7 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_64,uVar5);
        if (iVar7 == 0) {
          return 0;
        }
        *(uint *)(*param_5 + uVar11 * 4) = local_64;
        if (local_64 < uVar6) {
          *(undefined4 *)(param_5[1] + uVar11 * 4) = 0;
          uVar4 = 0;
          if (uVar11 == 0) {
            uVar4 = param_3;
          }
          uVar12 = 0;
          if (param_4 != 0) {
            uVar12 = uVar4;
          }
          iVar7 = (**(code **)(param_2[1] + 0x60))
                            (param_1,*(undefined8 *)(param_2[1] + 0x78),param_6 + uVar10 * 4,
                             uVar1 - uVar12,local_64);
          if (iVar7 == 0) {
            return 0;
          }
          uVar10 = (ulong)((uVar1 - uVar12) + (int)uVar10);
        }
        else {
          iVar7 = FUN_100559be0(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_64,5);
          if (iVar7 == 0) {
            return 0;
          }
          *(uint *)(param_5[1] + uVar11 * 4) = local_64;
          uVar4 = 0;
          if (uVar11 == 0) {
            uVar4 = param_3;
          }
          uVar12 = 0;
          if (param_4 != 0) {
            uVar12 = uVar4;
          }
          for (; uVar12 < uVar1; uVar12 = uVar12 + 1) {
            iVar7 = FUN_100559e28(param_1,*(undefined8 *)(param_2[1] + 0x78),&local_68,local_64);
            if (iVar7 == 0) {
              return 0;
            }
            *(undefined4 *)(param_6 + uVar10 * 4) = local_68;
            uVar10 = (ulong)((int)uVar10 + 1);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)(1 << (ulong)(param_4 & 0x1f)));
      uVar8 = 1;
    }
  }
  return uVar8;
}




undefined8 FUN_10060da6c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = ((long *)param_2[10])[0xe];
  lVar6 = *(long *)param_2[10];
  lVar5 = *(long *)(lVar6 + 0x20);
  uVar4 = FUN_10055b44c();
  if ((int)uVar4 == 0) {
    plVar1 = param_2 + 1;
    FUN_10055ac80(plVar1,*param_3,*(undefined4 *)(param_3 + 1));
    iVar2 = FUN_10055afe0(plVar1,1);
    if (iVar2 == 0) {
      iVar2 = FUN_10055afe0(plVar1,*(undefined4 *)(lVar7 + 0x18));
      if (iVar2 == -1) {
        uVar4 = 0xffffff78;
      }
      else {
        *(int *)(param_2 + 7) = iVar2;
        plVar8 = (long *)(lVar5 + (long)iVar2 * 8 + 0x20);
        iVar2 = *(int *)*plVar8;
        *(int *)((long)param_2 + 0x2c) = iVar2;
        if (iVar2 == 0) {
          lVar7 = 0;
          *(undefined4 *)(param_2 + 5) = 0;
          *(undefined4 *)(param_2 + 6) = 0;
        }
        else {
          uVar3 = FUN_10055afe0(plVar1,1);
          *(undefined4 *)(param_2 + 5) = uVar3;
          iVar2 = FUN_10055afe0(plVar1,1);
          *(int *)(param_2 + 6) = iVar2;
          if (iVar2 == -1) {
            return 0xffffff78;
          }
          lVar7 = (long)*(int *)((long)param_2 + 0x2c);
        }
        param_2[8] = param_3[3];
        param_2[9] = param_3[4];
        *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_3 + 2);
        *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(lVar5 + lVar7 * 4);
        lVar7 = FUN_10055b394(param_1,param_2,*(int *)(lVar6 + 4) << 3);
        *param_2 = lVar7;
        if (lVar7 != 0) {
          if (0 < *(int *)(lVar6 + 4)) {
            lVar7 = 0;
            do {
              uVar4 = FUN_10055b394(param_1,param_2,*(int *)((long)param_2 + 0x34) << 2);
              *(undefined8 *)(*param_2 + lVar7 * 8) = uVar4;
              if (*(long *)(*param_2 + lVar7 * 8) == 0) goto LAB_10060dc14;
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(int *)(lVar6 + 4));
          }
          lVar6 = (long)*(int *)(*plVar8 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010060dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)((&PTR_DAT_1014a3488)[*(int *)(lVar5 + lVar6 * 4 + 0x220)] + 0x20))
                            (param_1,param_2,*(undefined8 *)(lVar5 + lVar6 * 8 + 800));
          return uVar4;
        }
LAB_10060dc14:
        uVar4 = 0xffffff75;
      }
    }
    else {
      uVar4 = 0xffffff79;
    }
  }
  return uVar4;
}




undefined8 FUN_10060dc38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = ((long *)param_2[10])[0xe];
  lVar5 = *(long *)(*(long *)param_2[10] + 0x20);
  uVar4 = FUN_10055b44c();
  if ((int)uVar4 == 0) {
    puVar1 = param_2 + 1;
    FUN_10055ac80(puVar1,*param_3,*(undefined4 *)(param_3 + 1));
    iVar2 = FUN_10055afe0(puVar1,1);
    if (iVar2 == 0) {
      iVar2 = FUN_10055afe0(puVar1,*(undefined4 *)(lVar6 + 0x18));
      if (iVar2 == -1) {
        uVar4 = 0xffffff78;
      }
      else {
        *(int *)(param_2 + 7) = iVar2;
        iVar2 = **(int **)(lVar5 + (long)iVar2 * 8 + 0x20);
        *(int *)((long)param_2 + 0x2c) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(param_2 + 5) = 0;
          *(undefined4 *)(param_2 + 6) = 0;
        }
        else {
          uVar3 = FUN_10055afe0(puVar1,1);
          *(undefined4 *)(param_2 + 5) = uVar3;
          iVar2 = FUN_10055afe0(puVar1,1);
          *(int *)(param_2 + 6) = iVar2;
          if (iVar2 == -1) {
            return 0xffffff78;
          }
        }
        uVar4 = 0;
        param_2[8] = param_3[3];
        param_2[9] = param_3[4];
        *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_3 + 2);
        *(undefined4 *)((long)param_2 + 0x34) = 0;
        *param_2 = 0;
      }
    }
    else {
      uVar4 = 0xffffff79;
    }
  }
  return uVar4;
}




undefined4 FUN_10060dd3c(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_40 [32];
  
  lVar4 = *(long *)(param_1 + 0x20);
  FUN_10055ac80(auStack_40,*param_2,*(undefined4 *)(param_2 + 1));
  iVar2 = FUN_10055afe0(auStack_40,1);
  if (iVar2 == 0) {
    iVar2 = 0;
    for (iVar1 = *(int *)(lVar4 + 8); 1 < iVar1; iVar1 = iVar1 >> 1) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = FUN_10055afe0(auStack_40,iVar2);
    if (iVar2 == -1) {
      uVar3 = 0xffffff78;
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + (long)**(int **)(lVar4 + (long)iVar2 * 8 + 0x20) * 4);
    }
  }
  else {
    uVar3 = 0xffffff79;
  }
  return uVar3;
}




undefined8 FUN_10060ddd4(long param_1,int param_2)

{
  if ((param_2 != 0) && (**(int **)(param_1 + 0x20) < 0x41)) {
    return 0xffffffff;
  }
  (*(int **)(param_1 + 0x20))[0x4ca] = (uint)(param_2 != 0);
  return 0;
}




undefined4 FUN_10060de04(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1328);
}




undefined8 FUN_10060de10(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != (long *)0x0) {
    FUN_10055b4e8(param_1,param_2 + 0x51);
    FUN_10055b534(param_1,param_2 + 0x42);
    FUN_1005fca44(param_1,param_2 + 0x13);
    lVar1 = param_2[0xd];
    if (lVar1 != 0) {
      if ((int)param_2[8] != 0) {
        if (0 < (int)param_2[8]) {
          lVar2 = 0;
          lVar3 = 0;
          lVar4 = 0;
          do {
            FUN_1005fd850(param_1,lVar1 + lVar2);
            FUN_1005fd754(param_1,param_2[0xe] + lVar3);
            lVar4 = lVar4 + 1;
            lVar1 = param_2[0xd];
            lVar3 = lVar3 + 0x20;
            lVar2 = lVar2 + 0x28;
          } while (lVar4 < (int)param_2[8]);
        }
        FUN_1005a04e8(param_1);
        FUN_1005a04e8(param_1,param_2[0xe]);
      }
    }
    if (param_2[10] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[0xc] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[0xb] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[9] != 0) {
      FUN_1005a04e8(param_1);
    }
    FUN_1005fcc44(param_1,param_2 + 4);
    if ((*param_2 != 0) && ((code *)param_2[100] != (code *)0x0)) {
      (*(code *)param_2[100])();
    }
    _bzero(param_2,0x330);
  }
  return 0;
}




void FUN_10060df48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10060dfa4();
  if (iVar1 != 0) {
    return;
  }
  FUN_10060e1e0(param_1,param_3);
  return;
}




undefined8
FUN_10060dfa4(undefined8 param_1,long param_2,long *param_3,void *param_4,undefined8 param_5,
             long *param_6)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  int local_5c;
  void *local_58;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((code *)param_6[1] == (code *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)param_6[1])(param_2,0,1);
  }
  local_58 = (void *)0x0;
  local_5c = 0;
  _bzero(param_3,0x330);
  *param_3 = param_2;
  lVar3 = param_6[2];
  param_3[0x65] = param_6[3];
  param_3[100] = lVar3;
  lVar3 = *param_6;
  param_3[99] = param_6[1];
  param_3[0x62] = lVar3;
  plVar6 = param_3 + 4;
  FUN_1005fcc24(plVar6);
  if (param_4 != (void *)0x0) {
    pvVar2 = (void *)FUN_1005fccd4(param_1,plVar6,param_5);
    if (pvVar2 == (void *)0x0) {
      return 0xffffff75;
    }
    _memcpy(pvVar2,param_4,(long)(int)param_5);
    FUN_1005fcdac(plVar6,param_5);
  }
  if (iVar1 != -1) {
    *(undefined4 *)(param_3 + 1) = 1;
  }
  *(undefined4 *)(param_3 + 8) = 1;
  lVar3 = FUN_1005a0434(param_1,1,0x28);
  param_3[0xd] = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0xffffff75;
  }
  else {
    lVar3 = FUN_1005a0434(param_1,(int)param_3[8],0x20);
    param_3[0xe] = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0xffffff75;
    }
    else {
      FUN_1005fc95c(param_1,param_3 + 0x13,0xffffffff);
      uVar4 = FUN_1006115b0(param_1,param_3,param_3[0xd],param_3[0xe],&local_58,&local_5c,0);
      iVar1 = local_5c;
      if ((int)uVar4 < 0) {
        *param_3 = 0;
        FUN_10060de10(param_1,param_3);
      }
      else {
        puVar5 = (undefined4 *)FUN_1005a0434(param_1,local_5c + 2,4);
        param_3[0xb] = (long)puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          return 0xffffff75;
        }
        *puVar5 = *(undefined4 *)((long)param_3 + 0x84);
        puVar5[1] = iVar1;
        _memcpy(puVar5 + 2,local_58,(long)local_5c << 2);
        lVar3 = FUN_1005a0434(param_1,1,8);
        param_3[9] = lVar3;
        if (lVar3 == 0) {
          return 0xffffff75;
        }
        plVar6 = (long *)FUN_1005a0434(param_1,1,8);
        param_3[10] = (long)plVar6;
        if (plVar6 == (long *)0x0) {
          return 0xffffff75;
        }
        *(undefined8 *)param_3[9] = 0;
        *plVar6 = param_3[2];
        *(undefined4 *)(param_3 + 0x10) = 1;
        *(int *)((long)param_3 + 0x84) = (int)param_3[0x3f];
      }
      if (local_58 != (void *)0x0) {
        FUN_1005a04e8(param_1);
      }
    }
  }
  return uVar4;
}




long FUN_10060e1e0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_4c;
  undefined8 local_48;
  
  if (*(int *)(param_2 + 0x10) != 1) {
    return 0xffffff7d;
  }
  *(undefined4 *)(param_2 + 0x10) = 2;
  if (*(int *)(param_2 + 1) == 0) {
    *(undefined4 *)(param_2 + 0x10) = 3;
    return 0;
  }
  uVar6 = *(undefined8 *)param_2[10];
  local_48 = 0xffffffffffffffff;
  uVar1 = *(undefined4 *)(param_2 + 0x3f);
  local_4c = uVar1;
  lVar3 = FUN_100611968(param_1,param_2,param_2[0xd]);
  if (((code *)param_2[99] == (code *)0x0) || (param_2[0x65] == 0)) {
    param_2[2] = 0xffffffffffffffff;
    param_2[3] = 0xffffffffffffffff;
  }
  else {
    (*(code *)param_2[99])(*param_2,0,2);
    iVar2 = (*(code *)param_2[0x65])(*param_2);
    param_2[2] = (long)iVar2;
    param_2[3] = (long)iVar2;
    if (iVar2 != -1) {
      lVar4 = FUN_100611a84(param_1,param_2,param_2[0xb] + 8,*(undefined4 *)(param_2[0xb] + 4),
                            &local_4c,&local_48);
      if (-1 < lVar4) {
        iVar2 = FUN_100611c50(param_1,param_2,0,uVar6,param_2[2],local_48,local_4c,param_2[0xb] + 8,
                              *(undefined4 *)(param_2[0xb] + 4));
        if (iVar2 < 0) {
          lVar4 = 0xffffff80;
          goto LAB_10060e33c;
        }
        *(undefined8 *)param_2[9] = 0;
        *(undefined4 *)param_2[0xb] = uVar1;
        *(undefined8 *)param_2[10] = uVar6;
        plVar5 = (long *)param_2[0xc];
        *plVar5 = lVar3;
        plVar5[1] = plVar5[1] - lVar3;
        lVar4 = FUN_10060ead4(param_1,param_2,uVar6);
      }
      if ((int)lVar4 == 0) {
        return 0;
      }
      goto LAB_10060e33c;
    }
  }
  lVar4 = 0xffffff7d;
LAB_10060e33c:
  *param_2 = 0;
  FUN_10060de10(param_1,param_2);
  return lVar4;
}




void FUN_10060e380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10060dfa4();
  if (iVar1 == 0) {
    FUN_10060e1e0(param_1,param_3);
  }
  return;
}




int FUN_10060e3d0(FILE *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = _fseek(param_1,(long)param_2,param_3);
    return iVar1;
  }
  return -1;
}




undefined8 FUN_10060e3e4(undefined8 param_1,char *param_2,undefined8 param_3)

{
  FILE *pFVar1;
  undefined8 uVar2;
  code *local_50;
  code *pcStack_48;
  code *pcStack_40;
  code *pcStack_38;
  
  pFVar1 = _fopen(param_2,"rb");
  if (pFVar1 == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pcStack_48 = FUN_10060e3d0;
    local_50 = _fread;
    pcStack_38 = _ftell;
    pcStack_40 = _fclose;
    uVar2 = FUN_10060dfa4(param_1,pFVar1,param_3,0,0,&local_50);
    if (((int)uVar2 == 0) && (uVar2 = FUN_10060e1e0(param_1,param_3), (int)uVar2 == 0)) {
      uVar2 = 0;
    }
    else {
      _fclose(pFVar1);
    }
  }
  return uVar2;
}




undefined8 FUN_10060e494(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((*(long *)(param_2 + 0x68) == 0) || (*(int *)(param_2 + 8) == 0)) {
LAB_10060e54c:
    uVar2 = 0xffffff7d;
  }
  else {
    if (2 < *(int *)(param_2 + 0x80)) {
      FUN_10055b534(param_1,param_2 + 0x210);
      FUN_10055b4e8(param_1,param_2 + 0x288);
      *(undefined4 *)(param_2 + 0x80) = 2;
    }
    if (*(int *)(param_2 + 0x40) < 1) {
      uVar2 = 0;
    }
    else {
      lVar3 = 0;
      lVar4 = 0;
      do {
        iVar1 = FUN_10060ddd4(*(long *)(param_2 + 0x68) + lVar3,param_3);
        if (iVar1 != 0) {
          FUN_10060e494(param_1,param_2,0);
          goto LAB_10060e54c;
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x28;
      } while (lVar4 < *(int *)(param_2 + 0x40));
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_10060e564(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = FUN_10060de04();
    return uVar1;
  }
  return 0xffffff7d;
}




void FUN_10060e578(void)

{
  FUN_10060dfa4();
  return;
}




void FUN_10060e5a8(void)

{
  FUN_10060dfa4();
  return;
}




undefined8 FUN_10060e5d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x80) == 1) {
    uVar1 = FUN_10060e1e0();
    return uVar1;
  }
  return 0xffffff7d;
}




undefined4 FUN_10060e5f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}




undefined4 FUN_10060e5f8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




int FUN_10060e600(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  long lVar13;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    return -0x83;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = (ulong)iVar1;
  iVar2 = (int)param_2;
  if (iVar1 <= iVar2) {
    return -0x83;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 8) == 0)) {
    if (iVar1 < 1) {
      return -0x83;
    }
    lVar4 = *(long *)(param_1 + 0x68);
    if (0 < *(int *)(lVar4 + 0x10)) {
      return *(int *)(lVar4 + 0x10);
    }
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < 1) {
      return -1;
    }
LAB_10060e750:
    if (*(int *)(lVar4 + 0x14) < 1) {
      return iVar1;
    }
    iVar1 = *(int *)(lVar4 + 0x14) + iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    return iVar1 >> 1;
  }
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 8) == 0) {
      lVar5 = (long)iVar2;
      lVar4 = *(long *)(param_1 + 0x68);
      iVar1 = *(int *)(lVar4 + lVar5 * 0x28 + 0x10);
      if (0 < iVar1) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + lVar5 * 0x28 + 0xc);
      if (iVar1 < 1) {
        return -1;
      }
      lVar4 = lVar4 + lVar5 * 0x28;
      goto LAB_10060e750;
    }
    uVar3 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
    lVar4 = *(long *)(uVar3 + *(long *)(param_1 + 0x48) + 8);
    lVar5 = *(long *)(*(long *)(param_1 + 0x50) + uVar3);
    fVar10 = (float)FUN_10060e804();
    fVar10 = (float)((lVar4 - lVar5) * 8) / fVar10;
    goto LAB_10060e7e4;
  }
  if (iVar1 < 1) {
    fVar10 = 0.0;
  }
  else {
    if (iVar1 == 0) {
      uVar6 = 0;
      lVar4 = 0;
LAB_10060e7a8:
      do {
        lVar5 = uVar6 * 8;
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + (*(long *)(*(long *)(param_1 + 0x48) + lVar5 + 8) -
                        *(long *)(*(long *)(param_1 + 0x50) + lVar5)) * 8;
      } while ((long)uVar6 < (long)uVar3);
    }
    else {
      uVar6 = uVar3 & 0xfffffffffffffffc;
      if (uVar6 == 0) {
        uVar6 = 0;
        lVar4 = 0;
        lVar5 = 0;
        lVar12 = 0;
        lVar13 = 0;
      }
      else {
        lVar4 = 0;
        lVar5 = 0;
        lVar12 = 0;
        lVar13 = 0;
        plVar7 = (long *)(*(long *)(param_1 + 0x50) + 0x10);
        plVar8 = (long *)(*(long *)(param_1 + 0x48) + 0x18);
        uVar9 = uVar6;
        do {
          lVar4 = (plVar8[-2] - plVar7[-2]) * 8 + lVar4;
          lVar5 = (plVar8[-1] - plVar7[-1]) * 8 + lVar5;
          lVar12 = (*plVar8 - *plVar7) * 8 + lVar12;
          lVar13 = (plVar8[1] - plVar7[1]) * 8 + lVar13;
          uVar9 = uVar9 - 4;
          plVar7 = plVar7 + 4;
          plVar8 = plVar8 + 4;
        } while (uVar9 != 0);
      }
      lVar4 = lVar12 + lVar4 + lVar13 + lVar5;
      if (uVar3 != uVar6) goto LAB_10060e7a8;
    }
    fVar10 = (float)lVar4;
  }
  fVar11 = (float)FUN_10060e804(param_1,0xffffffff);
  fVar10 = fVar10 / fVar11;
LAB_10060e7e4:
  return (int)(float)(int)fVar10;
}




float FUN_10060e804(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = -131.0;
  if (((1 < *(int *)(param_1 + 0x80)) && (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x40), param_2 < iVar1)) {
    if (param_2 < 0) {
      fVar3 = 0.0;
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          fVar4 = (float)FUN_10060e804(param_1,iVar2);
          fVar3 = fVar3 + fVar4;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
    }
    else {
      fVar3 = (float)*(long *)(*(long *)(param_1 + 0x60) + (long)(int)(param_2 << 1 | 1) * 8) /
              (float)*(int *)(*(long *)(param_1 + 0x68) + (long)param_2 * 0x28 + 8);
    }
  }
  return fVar3;
}




int FUN_10060e8c8(long param_1)

{
  long lVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (long)*(int *)(param_1 + 0x88);
  }
  if (*(int *)(param_1 + 0x80) < 2) {
    return -0x83;
  }
  if (*(float *)(param_1 + 0x90) == 0.0) {
    return -1;
  }
  fVar2 = *(float *)(param_1 + 0x8c);
  iVar3 = *(int *)(*(long *)(param_1 + 0x68) + lVar1 * 0x28 + 8);
  *(undefined8 *)(param_1 + 0x8c) = 0;
  return (int)((fVar2 / *(float *)(param_1 + 0x90)) * (float)iVar3 + 0.5);
}




undefined4 FUN_10060e944(long param_1,int param_2)

{
  int iVar1;
  
  do {
    do {
      iVar1 = param_2;
      param_2 = *(int *)(param_1 + 0x40) + -1;
    } while (*(int *)(param_1 + 0x40) <= iVar1);
  } while ((-1 < iVar1) && (param_2 = -1, *(int *)(param_1 + 8) == 0));
  if (-1 < iVar1) {
    return *(undefined4 *)(*(long *)(param_1 + 0x58) + (long)iVar1 * 4);
  }
  return *(undefined4 *)(param_1 + 0x84);
}




long FUN_10060e98c(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    lVar4 = -0x83;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    lVar4 = -0x83;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
    if (param_2 < iVar2) {
      if (param_2 < 0) {
        lVar4 = 0;
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            lVar3 = FUN_10060e98c(param_1,iVar5);
            lVar4 = lVar3 + lVar4;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
        }
      }
      else {
        plVar1 = (long *)(*(long *)(param_1 + 0x48) + (long)param_2 * 8);
        lVar4 = plVar1[1] - *plVar1;
      }
    }
    else {
      lVar4 = -0x83;
    }
  }
  return lVar4;
}




long FUN_10060ea30(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    lVar3 = -0x83;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    lVar3 = -0x83;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    if (param_2 < iVar1) {
      if (param_2 < 0) {
        lVar3 = 0;
        if (0 < iVar1) {
          iVar4 = 0;
          do {
            lVar2 = FUN_10060ea30(param_1,iVar4);
            lVar3 = lVar2 + lVar3;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar1);
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)(param_2 << 1 | 1) * 8);
      }
    }
    else {
      lVar3 = -0x83;
    }
  }
  return lVar3;
}




void FUN_10060ead4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int local_234;
  int local_22c;
  undefined1 auStack_228 [24];
  long local_210;
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [376];
  long local_68;
  
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar14;
  if ((int)param_2[0x10] < 2) {
    uVar8 = 0xffffff7d;
  }
  else if ((int)param_2[1] == 0) {
    uVar8 = 0xffffff76;
  }
  else if (param_3 < 0) {
    uVar8 = 0xffffff7d;
  }
  else if (param_2[3] < param_3) {
    uVar8 = 0xffffff7d;
  }
  else {
    param_2[0xf] = -1;
    plVar2 = param_2 + 0x13;
    FUN_1005fd590(plVar2,*(undefined4 *)((long)param_2 + 0x84));
    plVar3 = param_2 + 0x42;
    FUN_10055b784(plVar3);
    if (((*param_2 == 0) || ((code *)param_2[99] == (code *)0x0)) ||
       (iVar5 = (*(code *)param_2[99])(*param_2,param_3,0), iVar5 == -1)) {
      param_2[0xf] = -1;
      FUN_1005fca44(param_1,auStack_1e0);
      FUN_10055b534(param_1,plVar3);
      FUN_10055b4e8(param_1,param_2 + 0x51);
      *(undefined4 *)(param_2 + 0x10) = 2;
      uVar8 = 0xffffff77;
    }
    else {
      param_2[2] = param_3;
      FUN_1005fd524(param_2 + 4);
      iVar5 = FUN_1005fc95c(param_1,auStack_1e0,*(undefined4 *)((long)param_2 + 0x84));
      if (iVar5 < 0) {
        uVar8 = 0xffffff75;
      }
      else {
        FUN_1005fd54c(auStack_1e0);
        local_234 = 0;
        bVar1 = false;
        local_22c = 0;
        iVar5 = 0;
LAB_10060ec3c:
        do {
          if (((int)param_2[0x10] < 3) ||
             (iVar6 = FUN_1005fd5dc(auStack_1e0,auStack_228), iVar6 < 1)) {
LAB_10060ec80:
            if (iVar5 != 0) {
              lVar9 = -1;
              goto LAB_10060ee68;
            }
            lVar9 = FUN_10060ef0c(param_1,param_2,auStack_200,0xffffffffffffffff);
            if (lVar9 < 0) {
              lVar9 = FUN_10060ea30(param_2,0xffffffff);
              param_2[0xf] = lVar9;
              goto LAB_10060ee80;
            }
            if ((int)param_2[0x10] < 3) {
LAB_10060ed04:
              uVar8 = FUN_1005fc860(auStack_200);
              iVar6 = (int)param_2[8];
              if (iVar6 < 1) {
                lVar15 = 0;
              }
              else {
                lVar15 = 0;
                do {
                  if (*(int *)(param_2[0xb] + lVar15 * 4) == (int)uVar8) break;
                  lVar15 = lVar15 + 1;
                } while (lVar15 < iVar6);
              }
              iVar7 = (int)lVar15;
              if (iVar7 == iVar6) goto LAB_10060ec3c;
              *(int *)((long)param_2 + 0x84) = (int)uVar8;
              *(int *)(param_2 + 0x11) = iVar7;
              FUN_1005fd590(plVar2,uVar8);
              FUN_1005fd590(auStack_1e0,uVar8);
              *(undefined4 *)(param_2 + 0x10) = 3;
              bVar1 = lVar9 <= *(long *)(param_2[10] + (long)iVar7 * 8);
            }
            else {
              iVar6 = *(int *)((long)param_2 + 0x84);
              iVar7 = FUN_1005fc860(auStack_200);
              if ((iVar6 != iVar7) && (iVar6 = FUN_1005fc7fc(auStack_200), iVar6 != 0)) {
                FUN_10055b534(param_1,plVar3);
                FUN_10055b4e8(param_1,param_2 + 0x51);
                *(undefined4 *)(param_2 + 0x10) = 2;
                FUN_1005fca44(param_1,auStack_1e0);
              }
              if ((int)param_2[0x10] < 3) goto LAB_10060ed04;
            }
            FUN_1005fd01c(param_1,plVar2,auStack_200);
            FUN_1005fd01c(param_1,auStack_1e0,auStack_200);
            local_22c = FUN_1005fc80c(auStack_200);
            goto LAB_10060ec3c;
          }
          if (*(long *)(param_2[0xd] + (long)(int)param_2[0x11] * 0x28 + 0x20) == 0) {
            FUN_1005fd5dc(plVar2,0);
            goto LAB_10060ec80;
          }
          iVar6 = FUN_10060dd3c(param_2[0xd] + (long)(int)param_2[0x11] * 0x28,auStack_228);
          if (iVar6 < 0) {
            FUN_1005fd5dc(plVar2,0);
            iVar6 = 0;
          }
          else if ((local_22c == 0) || (bVar1)) {
            if (iVar5 != 0) {
              local_234 = local_234 + (iVar6 + iVar5 >> 2);
            }
          }
          else {
            FUN_1005fd5dc(plVar2,0);
          }
          iVar5 = iVar6;
        } while (local_210 == -1);
        iVar5 = (int)param_2[0x11];
        lVar9 = param_2[0xc];
        local_210 = local_210 - *(long *)(lVar9 + (long)iVar5 * 0x10);
        lVar15 = 0;
        if (-1 < local_210) {
          lVar15 = local_210;
        }
        if (0 < iVar5) {
          uVar4 = (ulong)(iVar5 - 1) + 1;
          uVar10 = uVar4 & 0x1fffffffe;
          if (uVar10 == 0) {
            uVar10 = 0;
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            uVar13 = (ulong)(iVar5 - 1) + 1 & 0xfffffffffffffffe;
            iVar6 = 1;
            do {
              lVar15 = *(long *)(lVar9 + (long)iVar6 * 8) + lVar15;
              lVar12 = *(long *)(lVar9 + (long)(iVar6 + 2) * 8) + lVar12;
              uVar13 = uVar13 - 2;
              iVar6 = iVar6 + 4;
            } while (uVar13 != 0);
          }
          lVar15 = lVar12 + lVar15;
          if (uVar4 != uVar10) {
            iVar5 = iVar5 - (int)uVar10;
            uVar11 = (int)uVar10 << 1 | 1;
            do {
              lVar15 = *(long *)(lVar9 + (long)(int)uVar11 * 8) + lVar15;
              iVar5 = iVar5 + -1;
              uVar11 = uVar11 + 2;
            } while (iVar5 != 0);
          }
        }
        lVar9 = 0;
        if (-1 < lVar15 - local_234) {
          lVar9 = lVar15 - local_234;
        }
LAB_10060ee68:
        param_2[0xf] = lVar9;
LAB_10060ee80:
        FUN_1005fca44(param_1,auStack_1e0);
        uVar8 = 0;
        *(undefined8 *)((long)param_2 + 0x8c) = 0;
      }
    }
  }
  if (lVar14 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar8);
  }
  return;
}




long FUN_10060ef0c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (0 < param_4) {
    param_4 = param_2[2] + param_4;
  }
  plVar1 = param_2 + 4;
  while( true ) {
    while( true ) {
      if ((0 < param_4) && (param_4 <= param_2[2])) {
        return -1;
      }
      iVar2 = FUN_1005fcdec(plVar1,param_3);
      if (-1 < iVar2) break;
      param_2[2] = param_2[2] - (long)iVar2;
    }
    if (iVar2 != 0) {
      lVar4 = param_2[2];
      param_2[2] = lVar4 + iVar2;
      return lVar4;
    }
    if (param_4 == 0) break;
    piVar3 = ___error();
    *piVar3 = 0;
    if (param_2[0x62] == 0) {
      return -0x80;
    }
    if (*param_2 == 0) {
      return -2;
    }
    lVar4 = FUN_1005fccd4(param_1,plVar1,0x2134);
    if (lVar4 == 0) {
      return -0x8b;
    }
    uVar5 = (*(code *)param_2[0x62])(lVar4,1,0x2134,*param_2);
    iVar2 = (int)uVar5;
    if (iVar2 < 1) {
      if (iVar2 == -0x8b) {
        return -0x8b;
      }
      if (iVar2 == 0) {
        piVar3 = ___error();
        if (*piVar3 != 0) {
          return -0x80;
        }
        return -2;
      }
      if (iVar2 < 0) {
        return -0x80;
      }
    }
    else {
      FUN_1005fcdac(plVar1,uVar5);
    }
  }
  return -1;
}




long FUN_10060f05c(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_f0;
  long local_e0;
  long local_d8;
  undefined1 auStack_c8 [24];
  long local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar9 = FUN_10060ea30(param_2,0xffffffff);
  if ((int)param_2[0x10] < 2) {
    return 0xffffff7d;
  }
  if ((int)param_2[1] == 0) {
    return 0xffffff76;
  }
  if (param_3 < 0) {
    return 0xffffff7d;
  }
  if (lVar9 < param_3) {
    return 0xffffff7d;
  }
  uVar12 = (ulong)(int)param_2[8];
  iVar8 = (int)param_2[8] * 2 + -1;
  do {
    iVar14 = iVar8;
    iVar7 = (int)uVar12;
    if ((long)uVar12 < 1) {
      uVar15 = iVar7 - 1;
      uVar12 = (ulong)uVar15;
      lVar13 = param_2[0xc];
      uVar15 = uVar15 * 2;
      goto LAB_10060f118;
    }
    lVar13 = param_2[0xc];
    lVar9 = lVar9 - *(long *)(lVar13 + (long)iVar14 * 8);
    uVar12 = uVar12 - 1;
    iVar8 = iVar14 + -2;
  } while (param_3 < lVar9);
  uVar15 = iVar14 - 1;
LAB_10060f118:
  lVar18 = *(long *)(param_2[9] + (long)iVar7 * 8);
  iVar8 = (int)uVar12;
  lVar17 = *(long *)(param_2[9] + (long)iVar8 * 8);
  local_d8 = lVar17;
  if (lVar17 < lVar18) {
    local_e0 = *(long *)(lVar13 + (long)(int)uVar15 * 8);
    lVar4 = local_e0 + (param_3 - lVar9);
    local_f0 = *(long *)(lVar13 + (long)(int)(uVar15 | 1) * 8) + local_e0;
    plVar1 = param_2 + 4;
    do {
      lVar13 = lVar17;
      if ((0x2133 < lVar18 - lVar17) &&
         (lVar13 = lVar17 + (long)(((float)(lVar18 - lVar17) * (float)(lVar4 - local_e0)) /
                                  (float)(local_f0 - local_e0)) + -0x2134, lVar13 <= lVar17)) {
        lVar13 = lVar17 + 1;
      }
      if (*param_2 == 0) {
        lVar16 = -0x81;
        goto LAB_10060f64c;
      }
      if (((code *)param_2[99] == (code *)0x0) ||
         (iVar7 = (*(code *)param_2[99])(*param_2,lVar13,0), iVar7 == -1)) goto LAB_10060f648;
      param_2[2] = lVar13;
      FUN_1005fd524(plVar1);
      lVar10 = lVar18;
LAB_10060f1ec:
      do {
        lVar19 = lVar10;
        lVar18 = lVar19;
        lVar6 = local_f0;
        if (lVar19 <= lVar17) break;
        lVar10 = FUN_10060ef0c(param_1,param_2,auStack_80,lVar19 - param_2[2]);
        if (lVar10 == -0x80) goto LAB_10060f648;
        lVar2 = lVar17 + 1;
        lVar18 = lVar13;
        while( true ) {
          while (lVar16 = lVar10, lVar13 = lVar18, lVar10 = lVar17, lVar16 < 0) {
            if (lVar18 <= lVar2) goto LAB_10060f1ec;
            if (lVar18 == 0) goto LAB_10060f64c;
            lVar18 = lVar18 + -0x2134;
            if (lVar18 <= lVar17) {
              lVar18 = lVar2;
            }
            if (*param_2 == 0) {
              lVar16 = -0x81;
              goto LAB_10060f64c;
            }
            if (((code *)param_2[99] == (code *)0x0) ||
               (iVar7 = (*(code *)param_2[99])(*param_2,lVar18,0), iVar7 == -1)) goto LAB_10060f648;
            param_2[2] = lVar18;
            FUN_1005fd524(plVar1);
            lVar10 = FUN_10060ef0c(param_1,param_2,auStack_80,lVar19 - param_2[2]);
            lVar16 = -0x80;
            if (lVar10 == -0x80) goto LAB_10060f64c;
          }
          iVar7 = FUN_1005fc860(auStack_80);
          if ((iVar7 == *(int *)(param_2[0xb] + (long)iVar8 * 4)) &&
             (lVar11 = FUN_1005fc81c(auStack_80), lVar11 != -1)) break;
          lVar10 = FUN_10060ef0c(param_1,param_2,auStack_80,lVar19 - param_2[2]);
          if (lVar10 == -0x80) goto LAB_10060f648;
        }
        if (lVar4 <= lVar11) {
          if (lVar2 < lVar18) {
            lVar6 = lVar11;
            if (lVar19 != param_2[2]) break;
            lVar13 = lVar18 + -0x2134;
            if (lVar18 + -0x2134 <= lVar17) {
              lVar13 = lVar2;
            }
            if (*param_2 == 0) {
              lVar16 = -0x81;
              goto LAB_10060f64c;
            }
            if (((code *)param_2[99] == (code *)0x0) ||
               (iVar7 = (*(code *)param_2[99])(*param_2,lVar13,0), iVar7 == -1)) goto LAB_10060f648;
            param_2[2] = lVar13;
            FUN_1005fd524(plVar1);
            lVar10 = lVar16;
          }
          goto LAB_10060f1ec;
        }
        lVar17 = param_2[2];
        local_e0 = lVar11;
        lVar18 = lVar19;
        local_d8 = lVar16;
        lVar13 = lVar17;
        lVar10 = lVar19;
      } while (lVar4 - lVar11 < 0xac45);
      local_f0 = lVar6;
    } while (lVar17 < lVar18);
  }
  if (*param_2 == 0) {
    lVar16 = -0x81;
  }
  else {
    if (((code *)param_2[99] != (code *)0x0) &&
       (iVar7 = (*(code *)param_2[99])(*param_2,local_d8,0), iVar7 != -1)) {
      param_2[2] = local_d8;
      plVar1 = param_2 + 4;
      FUN_1005fd524(plVar1);
      param_2[0xf] = -1;
      lVar16 = FUN_10060ef0c(param_1,param_2,&local_a0,0xffffffffffffffff);
      if (-1 < lVar16) {
        if (iVar8 == (int)param_2[0x11]) {
          FUN_10055b784(param_2 + 0x42);
          uVar5 = *(undefined4 *)((long)param_2 + 0x84);
        }
        else {
          FUN_10055b534(param_1);
          FUN_10055b4e8(param_1,param_2 + 0x51);
          *(undefined4 *)(param_2 + 0x10) = 2;
          *(int *)(param_2 + 0x11) = iVar8;
          uVar5 = *(undefined4 *)(param_2[0xb] + (long)iVar8 * 4);
          *(undefined4 *)(param_2 + 0x10) = 3;
          *(undefined4 *)((long)param_2 + 0x84) = uVar5;
        }
        plVar3 = param_2 + 0x13;
        FUN_1005fd590(plVar3,uVar5);
        FUN_1005fd01c(param_1,plVar3,&local_a0);
        while (iVar8 = FUN_1005fd6e0(plVar3,auStack_c8), iVar8 != 0) {
          if (iVar8 < 0) {
            lVar16 = -0x88;
            goto LAB_10060f64c;
          }
          if (local_b0 != -1) {
            local_b0 = local_b0 - *(long *)(param_2[0xc] + (long)(int)param_2[0x11] * 0x10);
            lVar13 = 0;
            if (-1 < local_b0) {
              lVar13 = local_b0;
            }
            param_2[0xf] = lVar13 + lVar9;
            if (param_3 < lVar13 + lVar9) {
              lVar16 = -0x81;
            }
            else {
              lVar9 = FUN_10060ea30(param_2,0xffffffff);
              if (param_3 <= lVar9) {
                *(undefined8 *)((long)param_2 + 0x8c) = 0;
                return 0;
              }
              lVar16 = -0x81;
            }
            goto LAB_10060f64c;
          }
          FUN_1005fd5dc(plVar3,0);
        }
        if (*param_2 == 0) {
          lVar16 = -0x81;
        }
        else {
          if (((code *)param_2[99] != (code *)0x0) &&
             (iVar8 = (*(code *)param_2[99])(*param_2,local_d8,0), iVar8 != -1)) {
            param_2[2] = local_d8;
            FUN_1005fd524(plVar1);
            lVar9 = param_2[2];
            lVar13 = lVar9;
            if (lVar9 != 0) {
              do {
                do {
                  lVar18 = 0;
                  if (-1 < lVar9 + -0x2134) {
                    lVar18 = lVar9 + -0x2134;
                  }
                  if (*param_2 == 0) {
                    lVar16 = -0x81;
                    goto LAB_10060f64c;
                  }
                  if (((code *)param_2[99] == (code *)0x0) ||
                     (iVar8 = (*(code *)param_2[99])(*param_2,lVar18,0), iVar8 == -1))
                  goto LAB_10060f648;
                  param_2[2] = lVar18;
                  FUN_1005fd524(plVar1);
                  lVar16 = -1;
                  do {
                    lVar17 = lVar16;
                    lVar9 = lVar13 - param_2[2];
                    if (lVar9 == 0 || lVar13 < param_2[2]) break;
                    local_90 = 0;
                    uStack_88 = 0;
                    local_a0 = 0;
                    local_98 = 0;
                    lVar16 = FUN_10060ef0c(param_1,param_2,&local_a0,lVar9);
                    if ((lVar16 == -0x8b) || (lVar16 == -0x80)) goto LAB_10060f64c;
                  } while (-1 < lVar16);
                  lVar9 = lVar18;
                } while (lVar17 == -1);
                if ((int)local_98 == 0) {
                  if (*param_2 == 0) {
                    lVar16 = -0x81;
                    break;
                  }
                  if (((code *)param_2[99] == (code *)0x0) ||
                     (iVar8 = (*(code *)param_2[99])(*param_2,lVar17,0), iVar8 == -1))
                  goto LAB_10060f648;
                  param_2[2] = lVar17;
                  FUN_1005fd524(plVar1);
                  lVar9 = FUN_10060ef0c(param_1,param_2,&local_a0,0x2134);
                  if (lVar9 < 0) {
                    lVar16 = -0x81;
                    break;
                  }
                }
                iVar8 = FUN_1005fc860(&local_a0);
                if ((iVar8 == *(int *)((long)param_2 + 0x84)) &&
                   ((lVar9 = FUN_1005fc81c(&local_a0), -1 < lVar9 ||
                    (iVar8 = FUN_1005fc7ec(&local_a0), iVar8 == 0)))) {
                  lVar9 = FUN_10060ead4(param_1,param_2,lVar17);
                  return lVar9;
                }
                param_2[2] = lVar17;
                lVar16 = -0x80;
                lVar9 = lVar17;
                lVar13 = lVar17;
              } while (lVar17 != 0);
              goto LAB_10060f64c;
            }
          }
LAB_10060f648:
          lVar16 = -0x80;
        }
      }
      goto LAB_10060f64c;
    }
    lVar16 = -0x80;
  }
  param_2[0xf] = -1;
LAB_10060f64c:
  param_2[0xf] = -1;
  FUN_10055b534(param_1,param_2 + 0x42);
  FUN_10055b4e8(param_1,param_2 + 0x51);
  *(undefined4 *)(param_2 + 0x10) = 2;
  return lVar16;
}




undefined8 FUN_10060f718(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long local_70;
  
  uVar5 = FUN_10060f05c();
  if (((int)uVar5 < 0) || (uVar5 = FUN_10060fa20(param_1,param_2), (int)uVar5 != 0)) {
    return uVar5;
  }
  lVar6 = param_2 + 0x98;
  lVar9 = param_2 + 0x288;
  lVar1 = param_2 + 0x210;
  iVar3 = 0;
LAB_10060f784:
  while (iVar2 = FUN_1005fd6e0(lVar6,auStack_88), 0 < iVar2) {
    iVar2 = FUN_10060dd3c(*(long *)(param_2 + 0x68) + (long)*(int *)(param_2 + 0x88) * 0x28,
                          auStack_88);
    if (iVar2 < 0) {
      FUN_1005fd5dc(lVar6,0);
    }
    else {
      if (iVar3 == 0) {
        lVar10 = *(long *)(param_2 + 0x78);
      }
      else {
        lVar10 = *(long *)(param_2 + 0x78) + (long)(iVar2 + iVar3 >> 2);
        *(long *)(param_2 + 0x78) = lVar10;
      }
      iVar3 = FUN_1005fd7f4(*(undefined8 *)(param_2 + 0x68),1);
      if (param_3 <= lVar10 + (iVar3 + iVar2 >> 2)) goto LAB_10060f97c;
      FUN_1005fd5dc(lVar6,0);
      uVar5 = FUN_10060dc38(param_1,lVar9,auStack_88);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      FUN_10055bc8c(lVar1,lVar9);
      iVar3 = iVar2;
      if (-1 < local_70) {
        iVar2 = *(int *)(param_2 + 0x88);
        lVar7 = local_70 - *(long *)(*(long *)(param_2 + 0x60) + (long)iVar2 * 0x10);
        lVar10 = 0;
        if (-1 < lVar7) {
          lVar10 = lVar7;
        }
        *(long *)(param_2 + 0x78) = lVar10;
        if (0 < iVar2) {
          lVar7 = 0;
          iVar8 = 1;
          do {
            lVar10 = lVar10 + *(long *)(*(long *)(param_2 + 0x60) + (long)iVar8 * 8);
            *(long *)(param_2 + 0x78) = lVar10;
            lVar7 = lVar7 + 1;
            iVar8 = iVar8 + 2;
          } while (lVar7 < iVar2);
        }
      }
    }
  }
  if (((iVar2 < 0) && (iVar2 != -3)) ||
     (lVar10 = FUN_10060ef0c(param_1,param_2,auStack_a8,0xffffffffffffffff), lVar10 < 0)) {
LAB_10060f97c:
    *(undefined8 *)(param_2 + 0x8c) = 0;
    do {
      lVar6 = *(long *)(param_2 + 0x78);
      while( true ) {
        do {
          if (param_3 <= lVar6) {
            return 0;
          }
          lVar9 = param_3 - lVar6;
          iVar2 = FUN_10055c21c(lVar1,0);
          iVar3 = (int)lVar9;
          if (iVar2 <= lVar9) {
            iVar3 = iVar2;
          }
          FUN_10055c294(lVar1,iVar3);
          lVar6 = (long)iVar3 + *(long *)(param_2 + 0x78);
          *(long *)(param_2 + 0x78) = lVar6;
        } while (lVar9 <= iVar3);
        iVar3 = FUN_10060fb00(param_1,param_2,1);
        if (0 < iVar3) break;
        lVar6 = FUN_10060ea30(param_2,0xffffffff);
        *(long *)(param_2 + 0x78) = lVar6;
      }
    } while( true );
  }
  iVar2 = FUN_1005fc7fc(auStack_a8);
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 0x80) < 3) goto LAB_10060f8e0;
  }
  else {
    FUN_10055b534(param_1,lVar1);
    FUN_10055b4e8(param_1,lVar9);
    *(undefined4 *)(param_2 + 0x80) = 2;
LAB_10060f8e0:
    uVar5 = FUN_1005fc860(auStack_a8);
    iVar2 = *(int *)(param_2 + 0x40);
    if (iVar2 < 1) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        if (*(int *)(*(long *)(param_2 + 0x58) + lVar10 * 4) == (int)uVar5) break;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar2);
    }
    if ((int)lVar10 == iVar2) goto LAB_10060f784;
    *(int *)(param_2 + 0x88) = (int)lVar10;
    *(undefined4 *)(param_2 + 0x80) = 3;
    uVar4 = FUN_1005fc860(auStack_a8);
    *(undefined4 *)(param_2 + 0x84) = uVar4;
    FUN_1005fd590(lVar6,uVar5);
    uVar5 = FUN_10060fa20(param_1,param_2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    iVar3 = 0;
  }
  FUN_1005fd01c(param_1,lVar6,auStack_a8);
  goto LAB_10060f784;
}




undefined8 FUN_10060fa20(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_2 + 0x80) < 4) {
    if (*(int *)(param_2 + 0x80) < 3) {
      uVar3 = 0xffffff7f;
    }
    else {
      lVar1 = param_2 + 0x210;
      if (*(int *)(param_2 + 8) == 0) {
        iVar2 = FUN_10055b7ec(param_1,lVar1,*(long *)(param_2 + 0x68));
        if (iVar2 == -0x8b) {
          return 0xffffff75;
        }
        if (iVar2 != 0) {
          return 0xffffff77;
        }
      }
      else {
        iVar2 = FUN_10055b7ec(param_1,lVar1,
                              *(long *)(param_2 + 0x68) + (long)*(int *)(param_2 + 0x88) * 0x28);
        if (iVar2 == -0x8b) {
          return 0xffffff75;
        }
        if (iVar2 != 0) {
          return 0xffffff77;
        }
      }
      iVar2 = FUN_10055b354(param_1,lVar1,param_2 + 0x288);
      if (iVar2 == 0) {
        uVar3 = 0;
        *(undefined4 *)(param_2 + 0x80) = 4;
        *(undefined4 *)(param_2 + 0x8c) = 0;
        *(undefined4 *)(param_2 + 0x90) = 0;
      }
      else {
        uVar3 = 0xffffff75;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_10060fb00(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_a8 [8];
  int local_a0;
  int local_98;
  long local_90;
  undefined1 auStack_80 [8];
  int local_78;
  
  lVar5 = param_2 + 0x98;
  lVar6 = param_2 + 0x210;
  lVar9 = param_2 + 0x288;
  while( true ) {
    iVar2 = *(int *)(param_2 + 0x80);
    if (iVar2 == 3) {
      uVar4 = FUN_10060fa20(param_1,param_2);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      iVar2 = *(int *)(param_2 + 0x80);
    }
    if (iVar2 == 4) {
      while( true ) {
        iVar2 = FUN_1005fd5dc(lVar5,auStack_a8);
        lVar11 = local_90;
        if (iVar2 == -0x8b) {
          return 0xffffff75;
        }
        if (iVar2 == -1) {
          return 0xfffffffd;
        }
        if (iVar2 < 1) break;
        iVar2 = FUN_10060da6c(param_1,lVar9,auStack_a8);
        if (iVar2 == -0x8b) {
          return 0xffffff75;
        }
        if (iVar2 == 0) {
          iVar2 = FUN_10055c21c(lVar6,0);
          if (iVar2 != 0) {
            return 0xffffff7f;
          }
          FUN_10055bc8c(lVar6,lVar9);
          iVar2 = FUN_10055c21c(lVar6,0);
          *(float *)(param_2 + 0x90) = *(float *)(param_2 + 0x90) + (float)iVar2;
          *(float *)(param_2 + 0x8c) = *(float *)(param_2 + 0x8c) + (float)(local_a0 << 3);
          if (lVar11 == -1) {
            return 1;
          }
          if (local_98 == 0) {
            if (*(int *)(param_2 + 8) == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(param_2 + 0x88);
              if (0 < iVar2) {
                lVar11 = lVar11 - *(long *)(*(long *)(param_2 + 0x60) + (long)iVar2 * 0x10);
              }
            }
            lVar5 = 0;
            if (-1 < lVar11) {
              lVar5 = lVar11;
            }
            iVar3 = FUN_10055c21c(lVar6,0);
            lVar5 = lVar5 - iVar3;
            if (0 < iVar2) {
              lVar6 = *(long *)(param_2 + 0x60);
              uVar1 = (ulong)(iVar2 - 1) + 1;
              uVar7 = uVar1 & 0x1fffffffe;
              if (uVar7 == 0) {
                uVar7 = 0;
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                uVar10 = (ulong)(iVar2 - 1) + 1 & 0xfffffffffffffffe;
                iVar3 = 1;
                do {
                  lVar5 = *(long *)(lVar6 + (long)iVar3 * 8) + lVar5;
                  lVar9 = *(long *)(lVar6 + (long)(iVar3 + 2) * 8) + lVar9;
                  uVar10 = uVar10 - 2;
                  iVar3 = iVar3 + 4;
                } while (uVar10 != 0);
              }
              lVar5 = lVar9 + lVar5;
              if (uVar1 != uVar7) {
                iVar2 = iVar2 - (int)uVar7;
                uVar8 = (int)uVar7 << 1 | 1;
                do {
                  lVar5 = *(long *)(lVar6 + (long)(int)uVar8 * 8) + lVar5;
                  iVar2 = iVar2 + -1;
                  uVar8 = uVar8 + 2;
                } while (iVar2 != 0);
              }
            }
            *(long *)(param_2 + 0x78) = lVar5;
            return 1;
          }
          return 1;
        }
      }
      iVar2 = *(int *)(param_2 + 0x80);
    }
    if (iVar2 < 2) break;
    do {
      lVar11 = FUN_10060ef0c(param_1,param_2,auStack_80,0xffffffffffffffff);
      if (lVar11 < 0) {
        return 0xfffffffe;
      }
      *(float *)(param_2 + 0x8c) = *(float *)(param_2 + 0x8c) + (float)(local_78 << 3);
      iVar2 = *(int *)(param_2 + 0x80);
      if (iVar2 != 4) goto LAB_10060fc70;
      iVar2 = *(int *)(param_2 + 0x84);
      iVar3 = FUN_1005fc860(auStack_80);
      if (iVar2 == iVar3) goto LAB_10060fc6c;
      iVar2 = FUN_1005fc7fc(auStack_80);
    } while (iVar2 == 0);
    if (param_3 == 0) {
      return 0xfffffffe;
    }
    FUN_10055b534(param_1,lVar6);
    FUN_10055b4e8(param_1,lVar9);
    *(undefined4 *)(param_2 + 0x80) = 2;
    if (*(int *)(param_2 + 8) == 0) {
      FUN_1005fd850(param_1,*(undefined8 *)(param_2 + 0x68));
      FUN_1005fd754(param_1,*(undefined8 *)(param_2 + 0x70));
      break;
    }
LAB_10060fc80:
    uVar4 = FUN_1005fc860(auStack_80);
    iVar2 = *(int *)(param_2 + 0x40);
    if (iVar2 < 1) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      do {
        if (*(int *)(*(long *)(param_2 + 0x58) + lVar11 * 4) == (int)uVar4) break;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar2);
    }
    if ((int)lVar11 != iVar2) {
      *(int *)(param_2 + 0x84) = (int)uVar4;
      *(int *)(param_2 + 0x88) = (int)lVar11;
      FUN_1005fd590(lVar5,uVar4);
      *(undefined4 *)(param_2 + 0x80) = 3;
LAB_10060fb44:
      FUN_1005fd01c(param_1,lVar5,auStack_80);
    }
  }
LAB_10060fc6c:
  iVar2 = *(int *)(param_2 + 0x80);
LAB_10060fc70:
  if (iVar2 < 3) {
    if (*(int *)(param_2 + 8) != 0) goto LAB_10060fc80;
    uVar4 = FUN_1006115b0(param_1,param_2,*(undefined8 *)(param_2 + 0x68),
                          *(undefined8 *)(param_2 + 0x70),0,0,auStack_80);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x1f8);
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + 1;
  }
  goto LAB_10060fb44;
}




undefined8 FUN_10060fe94(float param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (1 < *(int *)(param_3 + 0x80)) {
    if (*(int *)(param_3 + 8) == 0) {
      return 0xffffff76;
    }
    if (0.0 <= param_1) {
      iVar1 = *(int *)(param_3 + 0x40);
      if (iVar1 < 1) {
        lVar3 = 0;
        lVar4 = 0;
        fVar7 = 0.0;
      }
      else {
        lVar3 = 0;
        lVar4 = 0;
        iVar5 = 1;
        fVar7 = 0.0;
        do {
          fVar6 = (float)FUN_10060e804(param_3,lVar3);
          fVar6 = fVar7 + fVar6;
          if (param_1 < fVar6) break;
          lVar4 = *(long *)(*(long *)(param_3 + 0x60) + (long)iVar5 * 8) + lVar4;
          lVar3 = lVar3 + 1;
          iVar5 = iVar5 + 2;
          fVar7 = fVar6;
        } while (lVar3 < iVar1);
      }
      if ((int)lVar3 != iVar1) {
        uVar2 = FUN_10060f718(param_2,param_3,
                              (long)((float)lVar4 +
                                    (param_1 - fVar7) *
                                    (float)*(int *)(*(long *)(param_3 + 0x68) +
                                                    (long)(int)lVar3 * 0x28 + 8)));
        return uVar2;
      }
    }
  }
  return 0xffffff7d;
}




undefined8 FUN_10060ffd0(float param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (1 < *(int *)(param_3 + 0x80)) {
    if (*(int *)(param_3 + 8) == 0) {
      return 0xffffff76;
    }
    if (0.0 <= param_1) {
      iVar1 = *(int *)(param_3 + 0x40);
      if (iVar1 < 1) {
        lVar3 = 0;
        lVar4 = 0;
        fVar7 = 0.0;
      }
      else {
        lVar3 = 0;
        lVar4 = 0;
        iVar5 = 1;
        fVar7 = 0.0;
        do {
          fVar6 = (float)FUN_10060e804(param_3,lVar3);
          fVar6 = fVar7 + fVar6;
          if (param_1 < fVar6) break;
          lVar4 = *(long *)(*(long *)(param_3 + 0x60) + (long)iVar5 * 8) + lVar4;
          lVar3 = lVar3 + 1;
          iVar5 = iVar5 + 2;
          fVar7 = fVar6;
        } while (lVar3 < iVar1);
      }
      if ((int)lVar3 != iVar1) {
        uVar2 = FUN_10060f05c(param_2,param_3,
                              (long)((float)lVar4 +
                                    (param_1 - fVar7) *
                                    (float)*(int *)(*(long *)(param_3 + 0x68) +
                                                    (long)(int)lVar3 * 0x28 + 8)));
        return uVar2;
      }
    }
  }
  return 0xffffff7d;
}

