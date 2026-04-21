// functions/013c1 — 88 functions
#include "libGameKindred.h"




undefined8 FUN_013c107c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c108c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_013c109c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc3fa0000;
  return 1;
}




undefined8 FUN_013c10ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c10bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c10c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_013c10d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41500000;
  return 1;
}




undefined8 FUN_013c10e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013c10f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c1108(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_013c1118(int param_1,float *param_2)

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




int FUN_013c1194(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.2 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013c1204(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013c1224(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013c1248(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013c126c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e99999a;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013c1290(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.2;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d01310 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d01310 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d01310 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01cee910 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01cee910 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cee910 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_013c13a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_013c13b8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.1;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d0ab10 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d0ab10 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d0ab10 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 5.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_013c1464(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_013c1474(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c1484(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_013c1494(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c14a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_013c14b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013c14c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c14d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013c14e0(int param_1,float *param_2)

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




int FUN_013c155c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013c15c8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x429c3d71;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_013c15ec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013c1628(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cf2c10 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cf2c10 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cf2c10 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_013c16d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c16e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_013c16f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1704(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c1714(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1720(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c1730(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c173c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013c174c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1758(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_013c1768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1774(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




void FUN_013c1788(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41551eb8;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_013c17ac(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013c17e8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (0 < (int)param_2) {
    uVar1 = (ulong)param_2;
    uVar2 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar2;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      uVar1 = uVar1 - 1;
      *(float *)((long)param_3 + 0xc) =
           (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
           *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      param_3 = param_3 + 2;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
  }
  return;
}




undefined8 FUN_013c1834(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c1844(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1850(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c185c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c186c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1878(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_013c1888(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_013c1898(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013c18a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_013c18bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3fc000003f333333;
  return 1;
}




undefined8 FUN_013c18d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013c18dc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.099999994 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013c195c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013c197c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e4ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013c19a0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.2 < fVar6)) {
        fVar6 = (fVar6 + -0.2) / 0.8;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01d0b210 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d0b210 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d0b210 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_013c1a70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c1a80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c1a90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1a9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c1aac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1ab8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c1ac8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1ad4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013c1ae4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1af0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_013c1b00(int param_1,float *param_2)

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




undefined8 FUN_013c1b7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_013c1b8c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_013c1bac(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013c1be8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013c1c24(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013c1c60(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d0b010 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d0b010 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d0b010 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_013c1d10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c1d20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_013c1d30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




uint FUN_013c1d40(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < (int)param_2) {
    fVar12 = 0.2;
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar7 = (ulong)param_2;
    do {
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar9 = fVar12;
      if ((fVar8 < 0.4) && (fVar9 = 1.0, 0.0 < fVar8)) {
        uVar6 = (uint)((fVar8 / 0.4) * 64.0);
        uVar1 = uVar6 + 1;
        fVar9 = fVar12;
        if (uVar1 < 0x40) {
          fVar9 = (fVar8 / 0.4) * 64.0;
          fVar9 = *(float *)(&DAT_01d01410 + (ulong)uVar6 * 4) +
                  (fVar9 - (float)(int)fVar9) *
                  (*(float *)(&DAT_01d01410 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d01410 + (ulong)uVar6 * 4));
        }
      }
      iVar3 = rand();
      fVar11 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar8 = fVar12;
      if ((fVar11 < 0.4) && (fVar8 = 1.0, 0.0 < fVar11)) {
        uVar6 = (uint)((fVar11 / 0.4) * 64.0);
        uVar1 = uVar6 + 1;
        fVar8 = fVar12;
        if (uVar1 < 0x40) {
          fVar8 = (fVar11 / 0.4) * 64.0;
          fVar8 = *(float *)(&DAT_01d01410 + (ulong)uVar6 * 4) +
                  (fVar8 - (float)(int)fVar8) *
                  (*(float *)(&DAT_01d01410 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d01410 + (ulong)uVar6 * 4));
        }
      }
      iVar4 = rand();
      fVar10 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar11 = fVar12;
      if ((fVar10 < 0.4) && (fVar11 = 1.0, 0.0 < fVar10)) {
        uVar6 = (uint)((fVar10 / 0.4) * 64.0);
        uVar1 = uVar6 + 1;
        fVar11 = fVar12;
        if (uVar1 < 0x40) {
          fVar11 = (fVar10 / 0.4) * 64.0;
          fVar11 = *(float *)(&DAT_01d01410 + (ulong)uVar6 * 4) +
                   (fVar11 - (float)(int)fVar11) *
                   (*(float *)(&DAT_01d01410 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01d01410 + (ulong)uVar6 * 4));
        }
      }
      iVar5 = rand();
      *param_3 = fVar9 * 50.0 * ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0);
      param_3[1] = fVar8 * 50.0 * ((float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0)
                   + -1.0;
      param_4 = param_4 + 1;
      uVar7 = uVar7 - 1;
      param_3[2] = fVar11 * 50.0 *
                   ((float)iVar5 * 4.656613e-10 + (float)iVar5 * 4.656613e-10 + -1.0);
      param_3 = param_3 + 3;
    } while (uVar7 != 0);
  }
  return param_2;
}




undefined8 FUN_013c1fa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c1fb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_013c1fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c1fcc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_013c1fdc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

