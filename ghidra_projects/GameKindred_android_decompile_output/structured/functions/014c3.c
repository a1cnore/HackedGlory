// functions/014c3 — 77 functions
#include "libGameKindred.h"




void FUN_014c3060(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41047ae1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_014c3084(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014c30c0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d25740 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d25740 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d25740 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_014c3178(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014c3188(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_014c3198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c31a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014c31b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c31c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_014c31d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c31dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014c31ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_014c31fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4170000040a00000;
  return 1;
}




undefined8 FUN_014c3210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c321c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




void FUN_014c3230(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40a00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_014c3250(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014c328c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.5;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.5;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d25940 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.2 < fVar4)) {
        fVar4 = (fVar4 + -0.2) / 0.8;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01d2a240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4));
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




undefined8 FUN_014c33c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_014c33d0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 5.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3438(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c3444(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0xc0800000;
  *param_2 = 0xc000000000000000;
  return 1;
}




undefined8 FUN_014c3460(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c346c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014c347c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_014c348c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_014c349c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 3.0 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3514(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3c23d70a3f800000;
  return 1;
}




undefined8 FUN_014c3528(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




int FUN_014c3538(int param_1,float *param_2)

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




void FUN_014c35a8(int param_1,undefined4 *param_2)

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




void FUN_014c35c8(int param_1,undefined4 *param_2)

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




void FUN_014c35ec(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.5;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.5;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d25940 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.2 < fVar4)) {
        fVar4 = (fVar4 + -0.2) / 0.8;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01d2a240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4));
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




undefined8 FUN_014c3720(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_014c3730(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 5.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3798(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c37a4(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0xc0800000;
  *param_2 = 0xc000000000000000;
  return 1;
}




undefined8 FUN_014c37c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c37cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014c37dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_014c37ec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_014c37fc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 3.0 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3874(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3c23d70a3f800000;
  return 1;
}




undefined8 FUN_014c3888(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




int FUN_014c3898(int param_1,float *param_2)

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




void FUN_014c3908(int param_1,undefined4 *param_2)

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




void FUN_014c3928(int param_1,undefined4 *param_2)

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




void FUN_014c394c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.5;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.5;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d25940 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.3 < fVar4)) {
        fVar4 = (fVar4 + -0.3) / 0.7;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01d25840 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01d25840 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d25840 + (ulong)uVar3 * 4));
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




undefined8 FUN_014c3a80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_014c3a90(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 4.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3af8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c3b04(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xbe80000000000000;
  return 1;
}




undefined8 FUN_014c3b1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c3b28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014c3b38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c3b44(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_014c3b54(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.0 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3bcc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3c23d70a40400000;
  return 1;
}




undefined8 FUN_014c3be0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




int FUN_014c3bf0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.19999999 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014c3c6c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4246b852;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_014c3c90(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fb33333;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_014c3cb4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.5;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.5;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d25940 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d25940 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.3 < fVar4)) {
        fVar4 = (fVar4 + -0.3) / 0.7;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01d25840 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01d25840 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d25840 + (ulong)uVar3 * 4));
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




undefined8 FUN_014c3de8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_014c3df8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 4.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3e60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c3e6c(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xbe80000000000000;
  return 1;
}




undefined8 FUN_014c3e84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c3e90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014c3ea0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014c3eac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_014c3ebc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.0 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014c3f34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3c23d70a40400000;
  return 1;
}




undefined8 FUN_014c3f48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




int FUN_014c3f58(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.19999999 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014c3fd4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4246b852;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_014c3ff8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fb33333;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}

