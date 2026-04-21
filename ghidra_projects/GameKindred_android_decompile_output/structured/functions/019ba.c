// functions/019ba — 9 functions
#include "libGameKindred.h"




void FUN_019ba2b0(long param_1)

{
  FUN_019b9e34(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  return;
}




undefined8 FUN_019ba2bc(long param_1,float *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  
  uVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x50);
  while( true ) {
    fVar3 = *pfVar2 + pfVar2[-3] * *param_2 +
                      (float)*(undefined8 *)(pfVar2 + -2) * (float)*(undefined8 *)(param_2 + 1) +
                      (float)((ulong)*(undefined8 *)(pfVar2 + -2) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
    if (param_2[3] < fVar3) {
      return 1;
    }
    if (ABS(fVar3) < param_2[3]) break;
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 4;
    if (5 < uVar1) {
      return 0;
    }
  }
  return 2;
}




undefined8 FUN_019ba330(long param_1,float *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = FUN_019ba5c8(param_1 + 0x44,6,param_2,param_2 + 3);
  if ((int)uVar2 == 2) {
    fVar4 = param_2[3];
    lVar3 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    do {
      pfVar1 = (float *)(param_1 + 0xa4 + lVar3);
      lVar3 = lVar3 + 0x30;
      iVar5 = iVar5 + (uint)(fVar4 < *pfVar1);
      iVar6 = iVar6 + (uint)(fVar4 < pfVar1[3]);
      iVar7 = iVar7 + (uint)(fVar4 < pfVar1[6]);
      iVar8 = iVar8 + (uint)(fVar4 < pfVar1[9]);
    } while (lVar3 != 0x30);
    iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
    lVar3 = 0;
    do {
      pfVar1 = (float *)(param_1 + 0xd4 + lVar3);
      lVar3 = lVar3 + 0xc;
      iVar5 = iVar5 + (uint)(fVar4 < *pfVar1);
    } while (lVar3 != 0x30);
    if (iVar5 != 8) {
      fVar4 = *param_2;
      lVar3 = 0;
      iVar5 = 0;
      iVar6 = 0;
      iVar7 = 0;
      iVar8 = 0;
      do {
        pfVar1 = (float *)(param_1 + 0xa4 + lVar3);
        lVar3 = lVar3 + 0x30;
        iVar5 = iVar5 + (uint)(*pfVar1 < fVar4);
        iVar6 = iVar6 + (uint)(pfVar1[3] < fVar4);
        iVar7 = iVar7 + (uint)(pfVar1[6] < fVar4);
        iVar8 = iVar8 + (uint)(pfVar1[9] < fVar4);
      } while (lVar3 != 0x30);
      iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
      lVar3 = 0;
      do {
        pfVar1 = (float *)(param_1 + 0xd4 + lVar3);
        lVar3 = lVar3 + 0xc;
        iVar5 = iVar5 + (uint)(*pfVar1 < fVar4);
      } while (lVar3 != 0x30);
      if (iVar5 != 8) {
        fVar4 = param_2[4];
        lVar3 = 0;
        iVar5 = 0;
        iVar6 = 0;
        iVar7 = 0;
        iVar8 = 0;
        do {
          pfVar1 = (float *)(param_1 + 0xa8 + lVar3);
          lVar3 = lVar3 + 0x30;
          iVar5 = iVar5 + (uint)(fVar4 < *pfVar1);
          iVar6 = iVar6 + (uint)(fVar4 < pfVar1[3]);
          iVar7 = iVar7 + (uint)(fVar4 < pfVar1[6]);
          iVar8 = iVar8 + (uint)(fVar4 < pfVar1[9]);
        } while (lVar3 != 0x30);
        iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
        lVar3 = 0;
        do {
          pfVar1 = (float *)(param_1 + 0xd8 + lVar3);
          lVar3 = lVar3 + 0xc;
          iVar5 = iVar5 + (uint)(fVar4 < *pfVar1);
        } while (lVar3 != 0x30);
        if (iVar5 != 8) {
          fVar4 = param_2[1];
          lVar3 = 0;
          iVar5 = 0;
          iVar6 = 0;
          iVar7 = 0;
          iVar8 = 0;
          do {
            pfVar1 = (float *)(param_1 + 0xa8 + lVar3);
            lVar3 = lVar3 + 0x30;
            iVar5 = iVar5 + (uint)(*pfVar1 < fVar4);
            iVar6 = iVar6 + (uint)(pfVar1[3] < fVar4);
            iVar7 = iVar7 + (uint)(pfVar1[6] < fVar4);
            iVar8 = iVar8 + (uint)(pfVar1[9] < fVar4);
          } while (lVar3 != 0x30);
          iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
          lVar3 = 0;
          do {
            pfVar1 = (float *)(param_1 + 0xd8 + lVar3);
            lVar3 = lVar3 + 0xc;
            iVar5 = iVar5 + (uint)(*pfVar1 < fVar4);
          } while (lVar3 != 0x30);
          if (iVar5 != 8) {
            fVar4 = param_2[5];
            lVar3 = 0;
            iVar5 = 0;
            iVar6 = 0;
            iVar7 = 0;
            iVar8 = 0;
            do {
              pfVar1 = (float *)(param_1 + 0xac + lVar3);
              lVar3 = lVar3 + 0x30;
              iVar5 = iVar5 + (uint)(fVar4 < *pfVar1);
              iVar6 = iVar6 + (uint)(fVar4 < pfVar1[3]);
              iVar7 = iVar7 + (uint)(fVar4 < pfVar1[6]);
              iVar8 = iVar8 + (uint)(fVar4 < pfVar1[9]);
            } while (lVar3 != 0x30);
            iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
            lVar3 = 0;
            do {
              pfVar1 = (float *)(param_1 + 0xdc + lVar3);
              lVar3 = lVar3 + 0xc;
              iVar5 = iVar5 + (uint)(fVar4 < *pfVar1);
            } while (lVar3 != 0x30);
            if (iVar5 != 8) {
              fVar4 = param_2[2];
              lVar3 = 0;
              iVar5 = 0;
              iVar6 = 0;
              iVar7 = 0;
              iVar8 = 0;
              do {
                pfVar1 = (float *)(param_1 + 0xac + lVar3);
                lVar3 = lVar3 + 0x30;
                iVar5 = iVar5 + (uint)(*pfVar1 < fVar4);
                iVar6 = iVar6 + (uint)(pfVar1[3] < fVar4);
                iVar7 = iVar7 + (uint)(pfVar1[6] < fVar4);
                iVar8 = iVar8 + (uint)(pfVar1[9] < fVar4);
              } while (lVar3 != 0x30);
              iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
              lVar3 = 0;
              do {
                pfVar1 = (float *)(param_1 + 0xdc + lVar3);
                lVar3 = lVar3 + 0xc;
                iVar5 = iVar5 + (uint)(*pfVar1 < fVar4);
              } while (lVar3 != 0x30);
              if (iVar5 != 8) {
                return uVar2;
              }
            }
          }
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}




undefined4 FUN_019ba5c8(long param_1,uint param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = 0;
  pfVar6 = (float *)(param_1 + 8);
  uVar5 = 0;
  while( true ) {
    fVar8 = pfVar6[-2];
    fVar9 = pfVar6[-1];
    fVar10 = *pfVar6;
    fVar1 = *param_3;
    if (fVar8 <= 0.0) {
      fVar1 = *param_4;
    }
    fVar2 = param_3[1];
    if (fVar9 <= 0.0) {
      fVar2 = param_4[1];
    }
    fVar3 = param_3[2];
    if (fVar10 <= 0.0) {
      fVar3 = param_4[2];
    }
    if (0.0 < pfVar6[1] + fVar8 * fVar1 + fVar9 * fVar2 + fVar10 * fVar3) break;
    fVar1 = param_4[2];
    if (fVar10 <= 0.0) {
      fVar1 = param_3[2];
    }
    fVar2 = param_4[1];
    if (fVar9 <= 0.0) {
      fVar2 = param_3[1];
    }
    fVar3 = *param_4;
    if (fVar8 <= 0.0) {
      fVar3 = *param_3;
    }
    uVar7 = uVar7 + 1;
    uVar4 = 2;
    if (pfVar6[1] + fVar8 * fVar3 + fVar9 * fVar2 + fVar10 * fVar1 <= 0.0) {
      uVar4 = uVar5;
    }
    pfVar6 = pfVar6 + 4;
    uVar5 = uVar4;
    if (param_2 <= uVar7) {
      return uVar4;
    }
  }
  return 1;
}




undefined8 FUN_019ba6a8(float param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar5 = *param_2;
  param_1 = param_1 * param_1;
  fVar10 = *param_3 - fVar5;
  fVar6 = (float)*(undefined8 *)(param_2 + 1);
  fVar8 = (float)*(undefined8 *)(param_3 + 1) - fVar6;
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20) - fVar7;
  fVar2 = *param_4 - fVar5;
  fVar3 = (float)*(undefined8 *)(param_4 + 1) - fVar6;
  fVar4 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20) - fVar7;
  fVar5 = *param_5 - fVar5;
  fVar6 = (float)*(undefined8 *)(param_5 + 1) - fVar6;
  fVar7 = (float)((ulong)*(undefined8 *)(param_5 + 1) >> 0x20) - fVar7;
  fVar15 = fVar2 - fVar10;
  fVar13 = fVar3 - fVar8;
  fVar14 = fVar4 - fVar9;
  fVar18 = (fVar5 - fVar10) * fVar14 - fVar15 * (fVar7 - fVar9);
  fVar11 = fVar15 * (fVar6 - fVar8) - fVar13 * (fVar5 - fVar10);
  fVar12 = fVar13 * (fVar7 - fVar9) - fVar14 * (fVar6 - fVar8);
  fVar16 = fVar9 * fVar11 + fVar10 * fVar12 + fVar18 * fVar8;
  uVar1 = 0;
  if (fVar16 * fVar16 <= param_1 * (fVar11 * fVar11 + fVar12 * fVar12 + fVar18 * fVar18)) {
    fVar12 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
    fVar16 = fVar10 * fVar2 + fVar8 * fVar3 + fVar9 * fVar4;
    fVar11 = fVar10 * fVar5 + fVar8 * fVar6 + fVar9 * fVar7;
    if (((fVar12 <= param_1) || (fVar16 <= fVar12)) || (uVar1 = 0, fVar11 <= fVar12)) {
      fVar18 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
      fVar19 = fVar2 * fVar5 + fVar3 * fVar6 + fVar4 * fVar7;
      if ((((fVar18 <= param_1) || (fVar16 <= fVar18)) || (uVar1 = 0, fVar19 <= fVar18)) &&
         (((fVar17 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7, fVar19 <= fVar17 ||
           (fVar17 <= param_1)) || (uVar1 = 0, fVar11 <= fVar17)))) {
        fVar16 = fVar16 - fVar12;
        fVar12 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
        fVar15 = fVar10 * fVar12 - fVar15 * fVar16;
        fVar13 = fVar8 * fVar12 - fVar13 * fVar16;
        fVar14 = fVar9 * fVar12 - fVar14 * fVar16;
        if ((fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13 <= fVar12 * param_1 * fVar12) ||
           (uVar1 = 0,
           fVar14 * (fVar7 * fVar12 - fVar14) +
           fVar15 * (fVar5 * fVar12 - fVar15) + fVar13 * (fVar6 * fVar12 - fVar13) <= 0.0)) {
          fVar12 = fVar5 - fVar2;
          fVar14 = fVar6 - fVar3;
          fVar15 = fVar7 - fVar4;
          fVar19 = fVar19 - fVar18;
          fVar13 = fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15;
          fVar16 = fVar2 * fVar13 - fVar12 * fVar19;
          fVar12 = fVar3 * fVar13 - fVar14 * fVar19;
          fVar14 = fVar4 * fVar13 - fVar15 * fVar19;
          if ((fVar14 * fVar14 + fVar16 * fVar16 + fVar12 * fVar12 <= fVar13 * param_1 * fVar13) ||
             (uVar1 = 0,
             fVar14 * (fVar9 * fVar13 - fVar14) +
             fVar16 * (fVar10 * fVar13 - fVar16) + fVar12 * (fVar8 * fVar13 - fVar12) <= 0.0)) {
            fVar10 = fVar10 - fVar5;
            fVar8 = fVar8 - fVar6;
            fVar9 = fVar9 - fVar7;
            fVar11 = fVar11 - fVar17;
            fVar12 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
            fVar10 = fVar5 * fVar12 - fVar10 * fVar11;
            fVar5 = fVar6 * fVar12 - fVar8 * fVar11;
            fVar6 = fVar7 * fVar12 - fVar9 * fVar11;
            if ((fVar6 * fVar6 + fVar10 * fVar10 + fVar5 * fVar5 <= fVar12 * param_1 * fVar12) ||
               (uVar1 = 0,
               fVar6 * (fVar4 * fVar12 - fVar6) +
               fVar10 * (fVar2 * fVar12 - fVar10) + fVar5 * (fVar3 * fVar12 - fVar5) <= 0.0)) {
              uVar1 = 1;
            }
          }
        }
      }
    }
  }
  return uVar1;
}




bool FUN_019ba9d8(float param_1,float *param_2,float *param_3,float *param_4)

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
      goto LAB_019baa20;
    }
  }
  else {
    fVar2 = fVar2 - *param_2;
    if (fVar2 < -param_1) {
      return false;
    }
LAB_019baa20:
    fVar1 = fVar2 * fVar2 + 0.0;
  }
  fVar2 = param_4[1];
  if (param_2[1] <= fVar2) {
    if (param_3[1] < fVar2) {
      fVar2 = fVar2 - param_3[1];
      if (param_1 < fVar2) {
        return false;
      }
      goto LAB_019baa70;
    }
  }
  else {
    fVar2 = fVar2 - param_2[1];
    if (fVar2 < -param_1) {
      return false;
    }
LAB_019baa70:
    fVar1 = fVar1 + fVar2 * fVar2;
  }
  fVar2 = param_4[2];
  if (param_2[2] <= fVar2) {
    if (fVar2 <= param_3[2]) goto LAB_019baac4;
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
LAB_019baac4:
  return fVar1 <= param_1 * param_1;
}




undefined8 FUN_019baad8(float *param_1,float *param_2,float *param_3,float *param_4)

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
  fVar4 = param_1[3];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar1 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  fVar3 = param_1[2] - param_2[2];
  fVar7 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar4 = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6;
  fVar4 = fVar4 + fVar4;
  fVar2 = (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) - param_2[3] * param_2[3];
  fVar1 = fVar4 * fVar4 + fVar7 * -4.0 * fVar2;
  if (fVar1 < 0.0) {
    return 0;
  }
  if (fVar1 <= 0.0) {
    fVar4 = fVar4 * -0.5;
    if (fVar4 < 0.0) {
      return 0;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = fVar4;
    }
    if (param_4 == (float *)0x0) {
      return 1;
    }
  }
  else {
    fVar3 = SQRT(fVar1);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar1);
    }
    fVar1 = -fVar4 - fVar3;
    if (0.0 <= fVar4) {
      fVar1 = fVar3 - fVar4;
    }
    fVar7 = (fVar1 * 0.5) / fVar7;
    fVar2 = fVar2 / (fVar1 * 0.5);
    if (fVar7 <= fVar2) {
      fVar7 = fVar2;
    }
    if (fVar7 < 0.0) {
      return 0;
    }
    if ((param_3 != (float *)0x0) && (fVar7 = (-fVar4 - fVar3) * 0.5, 0.0 <= fVar7)) {
      *param_3 = fVar7;
    }
    if (param_4 == (float *)0x0) {
      return 1;
    }
    fVar4 = (fVar3 - fVar4) * 0.5;
    if (fVar4 <= 0.0) {
      return 1;
    }
  }
  *param_4 = fVar4;
  return 1;
}




undefined1 FUN_019bac60(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 != (float *)0x0) {
    *param_3 = -3.4028235e+38;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = -3.4028235e+38;
  }
  fVar5 = param_1[3];
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  uVar1 = 0;
  fVar2 = *param_1 - *param_2;
  fVar3 = param_1[1] - param_2[1];
  fVar4 = param_1[2] - param_2[2];
  fVar8 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar5 = fVar2 * fVar5 + fVar3 * fVar6 + fVar4 * fVar7;
  fVar5 = fVar5 + fVar5;
  fVar2 = (fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4) - param_2[3] * param_2[3];
  fVar3 = fVar5 * fVar5 + fVar8 * -4.0 * fVar2;
  if (0.0 <= fVar3) {
    fVar4 = SQRT(fVar3);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar3);
    }
    fVar3 = -fVar5 - fVar4;
    if (0.0 <= fVar5) {
      fVar3 = fVar4 - fVar5;
    }
    fVar3 = fVar3 * 0.5;
    fVar4 = fVar3 / fVar8;
    if (fVar3 == 0.0) {
      fVar2 = -fVar5 / fVar8;
    }
    else {
      fVar2 = fVar2 / fVar3;
    }
    fVar3 = fVar4;
    if (fVar4 <= fVar2) {
      fVar3 = fVar2;
      fVar2 = fVar4;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = fVar2;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = fVar3;
    }
    if (fVar3 == fVar2) {
      uVar1 = 1;
    }
    else if (0.0 <= fVar2) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0.0 <= fVar3;
    }
  }
  return uVar1;
}




bool FUN_019bade4(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  bool bVar1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar15 = *param_2;
  fVar16 = param_2[1];
  fVar4 = param_2[4] * param_4[2] - param_2[5] * param_4[1];
  fVar14 = param_2[5] * *param_4 - param_4[2] * param_2[3];
  fVar13 = param_4[1] * param_2[3] - param_2[4] * *param_4;
  fVar11 = *param_3;
  fVar9 = param_3[1];
  fVar12 = param_3[2];
  fVar6 = param_2[2];
  fVar8 = fVar13 * fVar13 + fVar4 * fVar4 + fVar14 * fVar14;
  fVar17 = SQRT(fVar8);
  if (NAN(fVar17)) {
    fVar17 = sqrtf(fVar8);
  }
  fVar15 = fVar15 - fVar11;
  fVar16 = fVar16 - fVar9;
  fVar6 = fVar6 - fVar12;
  if (1.1920929e-07 <= ABS(fVar17)) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    fVar4 = fVar4 / fVar9;
    fVar14 = fVar14 / fVar9;
    fVar13 = fVar13 / fVar9;
    fVar8 = fVar6 * fVar13 + fVar15 * fVar4 + fVar16 * fVar14;
    bVar1 = false;
    if (ABS(fVar8) <= param_1) {
      if (param_5 != (float *)0x0 || param_6 != (float *)0x0) {
        fVar2 = param_4[1];
        fVar12 = param_4[2];
        fVar3 = *param_4;
        fVar7 = fVar14 * fVar12 - fVar13 * fVar2;
        fVar10 = fVar13 * fVar3 - fVar4 * fVar12;
        fVar5 = fVar4 * fVar2 - fVar14 * fVar3;
        fVar9 = fVar5 * fVar5 + fVar7 * fVar7 + fVar10 * fVar10;
        fVar11 = SQRT(fVar9);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar9);
        }
        fVar9 = param_1 * param_1 - fVar8 * fVar8;
        fVar8 = SQRT(fVar9);
        if (NAN(fVar8)) {
          fVar8 = sqrtf(fVar9);
        }
        fVar17 = -(fVar13 * (fVar15 * fVar2 - fVar16 * fVar3) +
                  fVar4 * (fVar16 * fVar12 - fVar6 * fVar2) +
                  fVar14 * (fVar6 * fVar3 - fVar15 * fVar12)) / fVar17;
        fVar15 = ABS(fVar8 / ((fVar7 / fVar11) * param_2[3] + (fVar10 / fVar11) * param_2[4] +
                             (fVar5 / fVar11) * param_2[5]));
        if (param_5 != (float *)0x0) {
          *param_5 = fVar17 - fVar15;
        }
        if (param_6 != (float *)0x0) {
          *param_6 = fVar17 + fVar15;
        }
      }
      bVar1 = true;
    }
  }
  else {
    fVar17 = fVar15 * *param_4 + fVar16 * param_4[1] + fVar6 * param_4[2];
    fVar15 = fVar15 - *param_4 * fVar17;
    fVar16 = fVar16 - param_4[1] * fVar17;
    fVar6 = fVar6 - param_4[2] * fVar17;
    fVar15 = fVar6 * fVar6 + fVar15 * fVar15 + fVar16 * fVar16;
    fVar17 = SQRT(fVar15);
    if (NAN(fVar17)) {
      fVar17 = sqrtf(fVar15);
    }
    if (param_5 != (float *)0x0) {
      *param_5 = -3.4028235e+38;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = 3.4028235e+38;
    }
    bVar1 = fVar17 <= param_1;
  }
  return bVar1;
}

