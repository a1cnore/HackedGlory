// functions/016af — 82 functions
#include "libGameKindred.h"




undefined8 FUN_016af07c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_016af08c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016af09c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_016af0ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016af0bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_016af0cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f800000;
  return 1;
}




undefined8 FUN_016af0e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016af0ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_016af0fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016af138(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016af174(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d8e150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016af228(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016af238(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_016af24c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016af258(float param_1,int param_2,float *param_3)

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
        fVar11 = (*(float *)(&DAT_01d8db50 + (ulong)uVar6 * 4) +
                 fVar9 * (*(float *)(&DAT_01d8db50 + (ulong)uVar2 * 4) -
                         *(float *)(&DAT_01d8db50 + (ulong)uVar6 * 4))) * 15.0;
        fVar14 = *(float *)(&DAT_01d8dc50 + (ulong)uVar6 * 4) +
                 fVar9 * (*(float *)(&DAT_01d8dc50 + (ulong)uVar2 * 4) -
                         *(float *)(&DAT_01d8dc50 + (ulong)uVar6 * 4));
      }
      fVar15 = fVar8;
      if ((bVar5 && !bVar1) && uVar3 < 0x40) {
        fVar15 = *(float *)(&DAT_01d8dd50 + (ulong)uVar7 * 4) +
                 (fVar13 - (float)(int)fVar13) *
                 (*(float *)(&DAT_01d8dd50 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01d8dd50 + (ulong)uVar7 * 4));
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




undefined8 FUN_016af3c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_016af3d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016af3e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_016af3f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016af404(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_016af414(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f333333;
  return 1;
}




undefined8 FUN_016af428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016af434(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_016af444(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016af480(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016af4bc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d8e150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016af570(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016af580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_016af594(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016af5a0(float param_1,int param_2,float *param_3)

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
        fVar15 = *(float *)(&DAT_01d8de50 + (ulong)uVar6 * 4) +
                 (fVar11 - (float)(int)fVar11) *
                 (*(float *)(&DAT_01d8de50 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01d8de50 + (ulong)uVar6 * 4));
      }
      fVar16 = fVar12;
      if ((bVar5 && 0.1 < fVar10) && uVar2 < 0x40) {
        fVar16 = *(float *)(&DAT_01d8df50 + (ulong)uVar7 * 4) +
                 (fVar13 - (float)(int)fVar13) *
                 (*(float *)(&DAT_01d8df50 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01d8df50 + (ulong)uVar7 * 4));
      }
      fVar17 = 0.4;
      if (NAN(fVar10) && uVar3 < 0x40) {
        fVar17 = *(float *)(&DAT_01d8e050 + (ulong)uVar8 * 4) +
                 (fVar14 - (float)(int)fVar14) *
                 (*(float *)(&DAT_01d8e050 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01d8e050 + (ulong)uVar8 * 4));
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




undefined8 FUN_016af764(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_016af774(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016af784(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_016af794(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016af7a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_016af7b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f333333;
  return 1;
}




undefined8 FUN_016af7c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016af7d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_016af7e4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016af820(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016af85c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d8e150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016af910(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016af920(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_016af934(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016af940(float param_1,int param_2,float *param_3)

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
        fVar6 = *(float *)(&DAT_01d8e250 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                (*(float *)(&DAT_01d8e250 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d8e250 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
      }
      fVar7 = -7.0;
      fVar8 = -0.5;
      if (fVar5 < 0.0 && (0.0 < fVar5 && uVar2 < 0x40)) {
        fVar7 = (*(float *)(&DAT_01d8e350 + (ulong)uVar3 * 4) +
                fVar4 * (*(float *)(&DAT_01d8e350 + (ulong)uVar2 * 4) -
                        *(float *)(&DAT_01d8e350 + (ulong)uVar3 * 4))) * 10.0;
        fVar8 = *(float *)(&DAT_01d8e450 + (ulong)uVar3 * 4) +
                fVar4 * (*(float *)(&DAT_01d8e450 + (ulong)uVar2 * 4) -
                        *(float *)(&DAT_01d8e450 + (ulong)uVar3 * 4));
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




undefined8 FUN_016afa6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_016afa7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016afa8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_016afa9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016afaac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_016afabc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f333333;
  return 1;
}




undefined8 FUN_016afad0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016afadc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_016afaec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016afb28(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016afb64(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d8e550 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d8e550 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e550 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016afc0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016afc1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016afc28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016afc34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016afc44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016afc50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016afc60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_016afc70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016afc80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_016afc94(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_016afca4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016afcb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_016afcc0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016afcfc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016afd38(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if ((fVar5 < 1.0) && (fVar4 = 3.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.9;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d8e650 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d8e650 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e650 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4 * 4.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.946667;
      if ((fVar5 < 0.986667) && (fVar4 = 0.7, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.986667) * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.946667;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 / 0.986667) * 64.0;
          fVar4 = *(float *)(&DAT_01d8e750 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01d8e750 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e750 + (ulong)uVar3 * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016afe98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016afea8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016afeb4(uint param_1,float *param_2,ushort *param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    do {
      uVar2 = uVar2 - 1;
      fVar1 = (float)NEON_ucvtf((uint)*(ushort *)
                                       (&DAT_01d95450 +
                                       (ulong)(*(byte *)(param_4 + 0x78000 + (ulong)*param_3 * 4) ^
                                              0xc3) * 2));
      *param_2 = (fVar1 / -65535.0) * 100.0 + -100.0 + 0.0;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016aff24(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4120000000000000;
  return 1;
}




undefined8 FUN_016aff3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aff48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aff54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_016aff64(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016aff74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016aff84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_016aff94(int param_1,float *param_2)

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

