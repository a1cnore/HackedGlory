// functions/01323 — 73 functions
#include "libGameKindred.h"




undefined8 FUN_01323074(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01323084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_01323098(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_013230a4(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar4 = param_1 * 0.3 - (float)(int)(param_1 * 0.3);
    uVar2 = (ulong)(uint)(int)(fVar4 * 64.0);
    uVar1 = (int)(fVar4 * 64.0) + 1;
    uVar3 = (ulong)uVar1;
    fVar7 = 2.0;
    if (0.0 < fVar4) {
      fVar7 = 3.0;
    }
    fVar5 = fVar4 * 64.0 - (float)(int)(fVar4 * 64.0);
    fVar6 = 3.0;
    if (fVar4 < 1.0) {
      fVar6 = fVar7;
    }
    do {
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar7 = fVar6;
      if (fVar4 < 1.0 && (0.0 < fVar4 && uVar1 < 0x40)) {
        fVar8 = (*(float *)(&DAT_01ccc2b0 + uVar2 * 4) +
                fVar5 * (*(float *)(&DAT_01ccc2b0 + uVar3 * 4) -
                        *(float *)(&DAT_01ccc2b0 + uVar2 * 4))) * 15.0;
        fVar7 = (*(float *)(&DAT_01ccc3b0 + uVar2 * 4) +
                fVar5 * (*(float *)(&DAT_01ccc3b0 + uVar3 * 4) -
                        *(float *)(&DAT_01ccc3b0 + uVar2 * 4))) * 10.0;
        fVar9 = *(float *)(&DAT_01ccc4b0 + uVar2 * 4) +
                fVar5 * (*(float *)(&DAT_01ccc4b0 + uVar3 * 4) -
                        *(float *)(&DAT_01ccc4b0 + uVar2 * 4));
      }
      *param_3 = fVar8;
      param_3[1] = fVar7;
      param_2 = param_2 + -1;
      param_3[2] = fVar9 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_013231a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_013231b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013231c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_013231d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013231e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_013231f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f4ccccd;
  return 1;
}




undefined8 FUN_01323208(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01323214(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_01323224(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01323260(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0132329c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    fVar3 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar2 = (ulong)param_2;
    do {
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cccdb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01323350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01323360(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_01323374(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01323380(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
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
  
  if (0 < param_2) {
    fVar8 = param_1 * 0.3 - (float)(int)(param_1 * 0.3);
    fVar15 = (fVar8 + -0.013333) / 0.99999696;
    fVar11 = (fVar8 + 0.013334) / 1.026664;
    uVar5 = (uint)(fVar15 * 64.0);
    uVar1 = uVar5 + 1;
    uVar7 = (uint)(fVar11 * 64.0);
    uVar6 = (uint)((fVar8 / 0.9) * 64.0);
    uVar2 = uVar7 + 1;
    uVar3 = uVar6 + 1;
    bVar4 = fVar8 < 0.9;
    fVar10 = (fVar8 / 0.9) * 64.0;
    fVar9 = *(float *)(&DAT_01cc6f88 + (ulong)(fVar8 <= 0.013333) * 4);
    fVar15 = fVar15 * 64.0;
    fVar11 = fVar11 * 64.0;
    fVar13 = *(float *)(&DAT_01cc6f90 + (ulong)(fVar8 <= -0.013334) * 4);
    fVar12 = -0.2;
    if (bVar4) {
      fVar12 = -0.5;
    }
    if (bVar4 && 0.0 < fVar8) {
      fVar12 = -0.2;
    }
    do {
      fVar14 = -4.8000298;
      fVar16 = -0.713335;
      if (fVar8 < 1.01333) {
        fVar14 = fVar9;
        if (fVar8 > 0.013333 && uVar1 < 0x40) {
          fVar14 = *(float *)(&DAT_01ccc5b0 + (ulong)uVar5 * 4) +
                   (fVar15 - (float)(int)fVar15) *
                   (*(float *)(&DAT_01ccc5b0 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01ccc5b0 + (ulong)uVar5 * 4));
        }
        fVar14 = fVar14 * 15.0;
        fVar16 = fVar13;
        if (fVar8 > -0.013334 && uVar2 < 0x40) {
          fVar16 = *(float *)(&DAT_01ccc6b0 + (ulong)uVar7 * 4) +
                   (fVar11 - (float)(int)fVar11) *
                   (*(float *)(&DAT_01ccc6b0 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01ccc6b0 + (ulong)uVar7 * 4));
        }
      }
      fVar17 = fVar12;
      if ((bVar4 && 0.0 < fVar8) && uVar3 < 0x40) {
        fVar17 = *(float *)(&DAT_01ccc7b0 + (ulong)uVar6 * 4) +
                 (fVar10 - (float)(int)fVar10) *
                 (*(float *)(&DAT_01ccc7b0 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01ccc7b0 + (ulong)uVar6 * 4));
      }
      *param_3 = fVar14;
      param_3[1] = fVar16 * 10.0;
      param_2 = param_2 + -1;
      param_3[2] = fVar17 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0132356c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_0132357c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0132358c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_0132359c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013235ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_013235bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f800000;
  return 1;
}




undefined8 FUN_013235d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013235dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_013235ec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01323628(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01323664(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    fVar3 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar2 = (ulong)param_2;
    do {
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cccdb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01323718(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01323728(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_0132373c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01323748(float param_1,int param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (0 < param_2) {
    fVar10 = param_1 * 0.3 - (float)(int)(param_1 * 0.3);
    uVar6 = (uint)(fVar10 * 64.0);
    uVar2 = uVar6 + 1;
    uVar7 = (uint)((fVar10 / 0.9) * 64.0);
    uVar3 = uVar7 + 1;
    bVar5 = fVar10 < 0.9;
    fVar8 = 0.4;
    if (bVar5) {
      fVar8 = 0.5;
    }
    bVar1 = fVar10 <= 0.0;
    fVar11 = 4.5;
    if (0.0 < fVar10) {
      fVar11 = 7.5;
    }
    if (bVar5 && !bVar1) {
      fVar8 = 0.4;
    }
    fVar13 = (fVar10 / 0.9) * 64.0;
    fVar9 = fVar10 * 64.0 - (float)(int)(fVar10 * 64.0);
    fVar4 = 7.5;
    fVar12 = -0.626667;
    if (fVar10 < 1.0) {
      fVar4 = fVar11;
      fVar12 = *(float *)(&DAT_01cc6f98 + (ulong)bVar1 * 4);
    }
    do {
      fVar11 = fVar4;
      fVar14 = fVar12;
      if (fVar10 < 1.0 && (!bVar1 && uVar2 < 0x40)) {
        fVar11 = (*(float *)(&DAT_01ccc8b0 + (ulong)uVar6 * 4) +
                 fVar9 * (*(float *)(&DAT_01ccc8b0 + (ulong)uVar2 * 4) -
                         *(float *)(&DAT_01ccc8b0 + (ulong)uVar6 * 4))) * 15.0;
        fVar14 = *(float *)(&DAT_01ccc9b0 + (ulong)uVar6 * 4) +
                 fVar9 * (*(float *)(&DAT_01ccc9b0 + (ulong)uVar2 * 4) -
                         *(float *)(&DAT_01ccc9b0 + (ulong)uVar6 * 4));
      }
      fVar15 = fVar8;
      if ((bVar5 && !bVar1) && uVar3 < 0x40) {
        fVar15 = *(float *)(&DAT_01cccab0 + (ulong)uVar7 * 4) +
                 (fVar13 - (float)(int)fVar13) *
                 (*(float *)(&DAT_01cccab0 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01cccab0 + (ulong)uVar7 * 4));
      }
      *param_3 = fVar11;
      param_3[1] = fVar14 * 10.0;
      param_2 = param_2 + -1;
      param_3[2] = fVar15 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_013238b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_013238c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013238d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_013238e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013238f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01323904(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f333333;
  return 1;
}




undefined8 FUN_01323918(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01323924(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_01323934(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01323970(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013239ac(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    fVar3 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar2 = (ulong)param_2;
    do {
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cccdb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01323a60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01323a70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_01323a84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01323a90(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (0 < param_2) {
    fVar10 = param_1 * 0.2 - (float)(int)(param_1 * 0.2);
    bVar4 = 1.01333 <= fVar10;
    fVar13 = (fVar10 + -0.1) / 0.9;
    uVar6 = (uint)((fVar10 / 1.01333) * 64.0);
    fVar14 = (fVar10 + 0.0) / 0.0;
    uVar1 = uVar6 + 1;
    uVar7 = (uint)(fVar13 * 64.0);
    uVar8 = (uint)(fVar14 * 64.0);
    uVar2 = uVar7 + 1;
    uVar3 = uVar8 + 1;
    fVar9 = *(float *)(&DAT_01cc6fa0 + (ulong)bVar4 * 4);
    if (!bVar4 && 0.0 < fVar10) {
      fVar9 = -0.226662;
    }
    bVar5 = fVar10 < 1.0;
    fVar11 = (fVar10 / 1.01333) * 64.0;
    fVar13 = fVar13 * 64.0;
    fVar14 = fVar14 * 64.0;
    fVar12 = -0.6;
    if (bVar5) {
      fVar12 = -0.1;
    }
    if (bVar5 && 0.1 < fVar10) {
      fVar12 = -0.6;
    }
    do {
      fVar15 = fVar9;
      if ((!bVar4 && 0.0 < fVar10) && uVar1 < 0x40) {
        fVar15 = *(float *)(&DAT_01cccbb0 + (ulong)uVar6 * 4) +
                 (fVar11 - (float)(int)fVar11) *
                 (*(float *)(&DAT_01cccbb0 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01cccbb0 + (ulong)uVar6 * 4));
      }
      fVar16 = fVar12;
      if ((bVar5 && 0.1 < fVar10) && uVar2 < 0x40) {
        fVar16 = *(float *)(&DAT_01ccccb0 + (ulong)uVar7 * 4) +
                 (fVar13 - (float)(int)fVar13) *
                 (*(float *)(&DAT_01ccccb0 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01ccccb0 + (ulong)uVar7 * 4));
      }
      fVar17 = 0.4;
      if (NAN(fVar10) && uVar3 < 0x40) {
        fVar17 = *(float *)(&DAT_01cce6b0 + (ulong)uVar8 * 4) +
                 (fVar14 - (float)(int)fVar14) *
                 (*(float *)(&DAT_01cce6b0 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01cce6b0 + (ulong)uVar8 * 4));
      }
      *param_3 = fVar15 * 15.0;
      param_3[1] = fVar16 * 10.0;
      param_2 = param_2 + -1;
      param_3[2] = fVar17 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01323c54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_01323c64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01323c74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01323c84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01323c94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_01323ca4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f333333;
  return 1;
}




undefined8 FUN_01323cb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01323cc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_01323cd4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01323d10(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01323d4c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    fVar3 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar2 = (ulong)param_2;
    do {
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cccdb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cccdb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01323e00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01323e10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_01323e24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01323e30(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < param_2) {
    fVar5 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar1 = (int)(fVar5 * 64.0) + 1;
    uVar3 = (uint)((fVar5 / 0.0) * 64.0);
    uVar2 = uVar3 + 1;
    fVar4 = (fVar5 / 0.0) * 64.0;
    fVar4 = fVar4 - (float)(int)fVar4;
    do {
      fVar6 = 0.0;
      if ((0.0 < fVar5 && fVar5 < 1.0) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01ccceb0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                (*(float *)(&DAT_01ccceb0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ccceb0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
      }
      fVar7 = -7.0;
      fVar8 = -0.5;
      if (fVar5 < 0.0 && (0.0 < fVar5 && uVar2 < 0x40)) {
        fVar7 = (*(float *)(&DAT_01cccfb0 + (ulong)uVar3 * 4) +
                fVar4 * (*(float *)(&DAT_01cccfb0 + (ulong)uVar2 * 4) -
                        *(float *)(&DAT_01cccfb0 + (ulong)uVar3 * 4))) * 10.0;
        fVar8 = *(float *)(&DAT_01ccd0b0 + (ulong)uVar3 * 4) +
                fVar4 * (*(float *)(&DAT_01ccd0b0 + (ulong)uVar2 * 4) -
                        *(float *)(&DAT_01ccd0b0 + (ulong)uVar3 * 4));
      }
      *param_3 = fVar6 * 15.0;
      param_3[1] = fVar7;
      param_2 = param_2 + -1;
      param_3[2] = fVar8 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01323f5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_01323f6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01323f7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01323f8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01323f9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01323fac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f333333;
  return 1;
}




undefined8 FUN_01323fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01323fcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_01323fdc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

