// functions/016a9 — 72 functions
#include "libGameKindred.h"




undefined8 FUN_016a900c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a901c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a9028(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a9034(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a9044(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a9050(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a9060(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a906c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a907c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016a9088(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x40400000,4);
    uVar6 = NEON_fmov(0x40800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a910c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a9188(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.59999996 + 0.8;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_016a9208(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a9244(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x408ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016a9268(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a92a4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a92e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a92f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a92fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a930c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016a9318(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x40400000,4);
    uVar6 = NEON_fmov(0x40800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a939c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a9418(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.59999996 + 0.8;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_016a9498(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a94d4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x408ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016a94f8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a9534(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a9570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a9580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a958c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a959c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016a95a8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x40400000,4);
    uVar6 = NEON_fmov(0x40800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a962c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a96a8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.59999996 + 0.8;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_016a9728(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a9764(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x408ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016a9788(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a97c4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a9800(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a9810(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a981c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a982c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016a9838(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x40400000,4);
    uVar6 = NEON_fmov(0x40800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a98bc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a9938(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.59999996 + 0.8;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_016a99b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a99f4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x408ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016a9a18(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a9a54(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a9a90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a9aa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a9aac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a9abc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016a9ac8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x40400000,4);
    uVar6 = NEON_fmov(0x40800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a9b4c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016a9bc8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.59999996 + 0.8;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_016a9c48(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a9c84(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x408ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016a9ca8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a9ce4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a9d20(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
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
  
  if (0 < param_2) {
    fVar15 = (param_1 + -0.125) / 0.575;
    uVar10 = (uint)((param_1 / 0.3) * 64.0);
    uVar1 = uVar10 + 1;
    bVar5 = 0.0 < param_1;
    uVar11 = (uint)(fVar15 * 64.0);
    uVar12 = (uint)((param_1 / 0.36) * 64.0);
    uVar2 = uVar11 + 1;
    uVar3 = uVar12 + 1;
    uVar4 = (int)(param_1 * 64.0) + 1;
    bVar6 = param_1 < 0.3;
    fVar14 = 0.5;
    if (bVar6) {
      fVar14 = 0.1;
    }
    if (bVar6 && bVar5) {
      fVar14 = 0.5;
    }
    bVar7 = param_1 < 0.7;
    fVar15 = fVar15 * 64.0;
    fVar21 = 1.0;
    fVar20 = fVar21;
    if (bVar7) {
      fVar20 = 3.0;
    }
    if (bVar7 && 0.125 < param_1) {
      fVar20 = 1.0;
    }
    bVar8 = param_1 < 0.36;
    fVar13 = 0.0;
    if (bVar8) {
      fVar21 = 0.0;
    }
    if (bVar8 && bVar5) {
      fVar21 = 1.0;
    }
    bVar9 = param_1 < 1.0;
    fVar19 = (param_1 / 0.3) * 64.0;
    fVar22 = (param_1 / 0.36) * 64.0;
    if (bVar9) {
      fVar13 = 3.0;
    }
    if (bVar9 && bVar5) {
      fVar13 = 0.0;
    }
    do {
      fVar16 = fVar14;
      if ((bVar6 && bVar5) && uVar1 < 0x40) {
        fVar16 = *(float *)(&DAT_01d8af50 + (ulong)uVar10 * 4) +
                 (fVar19 - (float)(int)fVar19) *
                 (*(float *)(&DAT_01d8af50 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01d8af50 + (ulong)uVar10 * 4));
      }
      fVar17 = fVar20;
      if ((bVar7 && 0.125 < param_1) && uVar2 < 0x40) {
        fVar17 = *(float *)(&DAT_01d8b050 + (ulong)uVar11 * 4) +
                 (fVar15 - (float)(int)fVar15) *
                 (*(float *)(&DAT_01d8b050 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01d8b050 + (ulong)uVar11 * 4));
      }
      fVar18 = fVar21;
      if ((bVar8 && bVar5) && uVar3 < 0x40) {
        fVar18 = *(float *)(&DAT_01d8b250 + (ulong)uVar12 * 4) +
                 (fVar22 - (float)(int)fVar22) *
                 (*(float *)(&DAT_01d8b250 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01d8b250 + (ulong)uVar12 * 4));
      }
      *param_3 = fVar16;
      param_3[1] = fVar17;
      param_3[2] = fVar18;
      fVar16 = fVar13;
      if ((bVar9 && bVar5) && uVar4 < 0x40) {
        fVar16 = *(float *)(&DAT_01d8b150 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                 (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                 (*(float *)(&DAT_01d8b150 + (ulong)uVar4 * 4) -
                 *(float *)(&DAT_01d8b150 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      param_3[3] = fVar16;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_016a9f28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a9f38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a9f44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a9f50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a9f60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a9f6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a9f7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_016a9f8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a9f9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a9fa8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4115c28f40bf22d1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016a9fcc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

