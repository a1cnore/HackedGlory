// functions/012a4 — 96 functions
#include "libGameKindred.h"




undefined8 FUN_012a4004(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_012a4014(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_012a4024(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012a4034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a4040(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




int FUN_012a4050(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 90.0 + -45.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_012a40d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_012a40e4(int param_1,undefined4 *param_2)

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




uint FUN_012a4104(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012a4140(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012a417c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_012a41b8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012a41c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a41d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a41e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a41f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a4200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a420c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_012a421c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_012a422c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012a423c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a4248(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0ccccd3f0ccccd;
  return 1;
}




undefined8 FUN_012a4260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a426c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




void FUN_012a4280(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42340000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_012a42a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012a42dc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cac2c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cac2c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cac2c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_012a4394(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a43a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a43b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43480000;
  return 1;
}




undefined8 FUN_012a43c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a43d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a43dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_012a43ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_012a43fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012a440c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a4418(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4ccccd3f4ccccd;
  return 1;
}




int FUN_012a4430(int param_1,float *param_2)

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




undefined8 FUN_012a44ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




void FUN_012a44c0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42340000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_012a44e0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012a451c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cba1c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cba1c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cba1c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_012a45d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a45e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a45f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc3fa0000;
  return 1;
}




undefined8 FUN_012a4600(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a4610(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a461c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_012a462c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_012a463c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012a464c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_012a4660(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f19999a3f19999a;
  return 1;
}




undefined8 FUN_012a4678(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a4684(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




void FUN_012a4698(int param_1,undefined4 *param_2)

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




uint FUN_012a46b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012a46f4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) / fVar4;
      fVar7 = -1.0;
      fVar5 = 0.0;
      if (fVar6 < 1.0) {
        fVar7 = 0.5;
        if (-0.0 < fVar6) {
          uVar3 = (uint)((fVar6 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = -1.0;
          if (uVar1 < 0x40) {
            fVar7 = (fVar6 + 0.0) * 64.0;
            fVar7 = *(float *)(&DAT_01cac3c0 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01cac3c0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cac3c0 + (ulong)uVar3 * 4));
          }
        }
        fVar5 = 1.4;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_01cac4c0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                    (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                    (*(float *)(&DAT_01cac4c0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cac4c0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
          }
          else {
            fVar5 = 0.0;
          }
        }
      }
      *param_3 = fVar7;
      param_3[1] = fVar5;
      param_3[2] = (1.0 - fVar4) * 100.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 1.0;
      if ((fVar5 < 1.0) && (fVar7 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar7 = 1.0;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01cac5c0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01cac5c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cac5c0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar7;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_012a4888(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a4898(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_012a48a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a48b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a48c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a48d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_012a48e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_012a48f0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012a4900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_012a4914(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_012a4924(int param_1,float *param_2)

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




int FUN_012a49a0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.19999999 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_012a4a20(int param_1,undefined4 *param_2)

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




void FUN_012a4a40(int param_1,undefined4 *param_2)

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




uint FUN_012a4a64(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012a4aa0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012a4adc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) / fVar4;
      fVar7 = -1.0;
      fVar5 = 0.0;
      if (fVar6 < 1.0) {
        fVar7 = 0.5;
        if (-0.0 < fVar6) {
          uVar3 = (uint)((fVar6 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = -1.0;
          if (uVar1 < 0x40) {
            fVar7 = (fVar6 + 0.0) * 64.0;
            fVar7 = *(float *)(&DAT_01cac3c0 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01cac3c0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cac3c0 + (ulong)uVar3 * 4));
          }
        }
        fVar5 = 1.4;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_01cac4c0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                    (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                    (*(float *)(&DAT_01cac4c0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cac4c0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
          }
          else {
            fVar5 = 0.0;
          }
        }
      }
      *param_3 = fVar7;
      param_3[1] = fVar5;
      param_3[2] = (1.0 - fVar4) * 100.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 1.0;
      if ((fVar5 < 1.0) && (fVar7 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar7 = 1.0;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01cac5c0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01cac5c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cac5c0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar7;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_012a4c70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a4c80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_012a4c90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_012a4ca0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a4cb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_012a4cc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_012a4cd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}



undefined DAT_01cac6c0;
undefined DAT_01cac7c0;
undefined DAT_01cac8c0;
undefined DAT_01cac9c0;
undefined DAT_01cacac0;
undefined DAT_01cacbc0;
undefined DAT_01caccc0;
undefined DAT_01cacdc0;
undefined DAT_01caebc0;
undefined DAT_01cb07c0;
undefined DAT_01cad3c0;
undefined DAT_01cad4c0;
undefined DAT_01cad1c0;
undefined DAT_01cb53c0;
undefined DAT_01cad5c0;
undefined DAT_01cad6c0;
undefined DAT_01cad7c0;
undefined DAT_01cad8c0;
undefined DAT_01cad9c0;
undefined DAT_01cadac0;
undefined DAT_01cadbc0;
undefined DAT_01cadcc0;
undefined DAT_01caddc0;
undefined DAT_01cadec0;
undefined DAT_01cadfc0;
undefined DAT_01cae0c0;
undefined DAT_01cae1c0;
undefined DAT_01cb19c0;
undefined DAT_01cc1cc0;
undefined DAT_01cae2c0;
undefined DAT_01cae3c0;
undefined DAT_01cae4c0;
undefined DAT_01cb74c0;
undefined DAT_01cb75c0;
undefined DAT_01cae5c0;
undefined DAT_01cae6c0;
undefined DAT_01cae7c0;
undefined DAT_01cae8c0;
undefined DAT_01cae9c0;
undefined DAT_01cc05c0;
undefined DAT_01caeac0;
undefined DAT_01cb17c0;
undefined DAT_01cbd6c0;
undefined DAT_01caecc0;
undefined DAT_01caedc0;
undefined DAT_01caeec0;
undefined DAT_01caefc0;
undefined DAT_01caf0c0;
undefined DAT_01caf1c0;
undefined DAT_01caf2c0;
undefined DAT_01caf3c0;
undefined DAT_01caf4c0;
undefined DAT_01caf5c0;
undefined DAT_01caf6c0;
undefined DAT_01cb8ec0;
undefined DAT_01cc34c0;
undefined DAT_01caf7c0;
undefined DAT_01caf8c0;
undefined DAT_01caf9c0;
undefined DAT_01cafac0;
undefined DAT_01cafbc0;
undefined DAT_01cafcc0;
undefined DAT_01cafdc0;
undefined DAT_01cafec0;
undefined DAT_01caffc0;
undefined DAT_01cb00c0;
undefined DAT_01cb01c0;
undefined DAT_01cb02c0;
undefined DAT_01cb03c0;
undefined DAT_01cb04c0;
undefined DAT_01cb05c0;
undefined DAT_01cb06c0;
undefined DAT_01cb08c0;
undefined DAT_01cb12c0;
undefined DAT_01cb2fc0;
undefined DAT_01cb09c0;
undefined DAT_01cb0ac0;
undefined DAT_01cb0bc0;
undefined DAT_01cb0cc0;
undefined DAT_01cb0dc0;
undefined DAT_01cb0ec0;
undefined DAT_01cb0fc0;
undefined DAT_01cb10c0;
undefined DAT_01cb11c0;
undefined DAT_01cb13c0;
undefined DAT_01cb14c0;
undefined DAT_01cb15c0;
undefined DAT_01cb1ac0;
undefined DAT_01cb1cc0;
undefined DAT_01cb1dc0;
undefined DAT_01cb1ec0;
undefined DAT_01cbe7c0;
undefined DAT_01cb1fc0;
undefined DAT_01cbafc0;
undefined DAT_01cb20c0;
undefined DAT_01cbb2c0;
undefined DAT_01cb21c0;
undefined DAT_01cbedc0;
undefined DAT_01cb22c0;
undefined DAT_01cb62c0;
undefined DAT_01cb24c0;
undefined DAT_01cb23c0;
undefined DAT_01cc19c0;
undefined DAT_01cb25c0;
undefined DAT_01cb26c0;
undefined DAT_01cb27c0;
undefined DAT_01cb28c0;
undefined DAT_01cbd3c0;
undefined DAT_01cbcac0;
undefined DAT_01cb2ac0;
undefined DAT_01cb2bc0;
undefined DAT_01cb2cc0;
undefined DAT_01cb2dc0;
undefined DAT_01cb30c0;
undefined DAT_01cb31c0;
undefined DAT_01cb32c0;
undefined DAT_01cb33c0;
undefined DAT_01cb3ac0;
undefined DAT_01cb34c0;
undefined DAT_01cb36c0;
undefined DAT_01cb37c0;
undefined DAT_01cb38c0;
undefined DAT_01cb39c0;
undefined DAT_01cb3bc0;
undefined DAT_01cb3cc0;
undefined DAT_01cb3dc0;
undefined DAT_01cb3ec0;
undefined DAT_01cb3fc0;
undefined DAT_01cb40c0;
undefined DAT_01cb41c0;
undefined DAT_01cb46c0;
undefined DAT_01cb47c0;
undefined DAT_01cb43c0;
undefined DAT_01cb44c0;
undefined DAT_01cbbec0;
undefined4 DAT_01ca0300;
undefined DAT_01cb45c0;
undefined DAT_01cb48c0;
undefined DAT_01cb49c0;
undefined DAT_01cb4ac0;
undefined DAT_01cb51c0;
undefined DAT_01cb4bc0;
undefined DAT_01cb4cc0;
undefined DAT_01cc6bc0;
undefined DAT_01cb4dc0;
undefined DAT_01cb4ec0;
undefined DAT_01cb4fc0;
undefined DAT_01cb50c0;
undefined DAT_01cb52c0;
undefined DAT_01cb54c0;
undefined DAT_01cb55c0;
undefined DAT_01cb56c0;
undefined DAT_01cb57c0;
undefined DAT_01cb58c0;
undefined DAT_01cb59c0;
undefined DAT_01cb5ac0;
undefined DAT_01cb5bc0;
undefined DAT_01cb5cc0;
undefined DAT_01cb5dc0;
undefined DAT_01cb5ec0;
undefined DAT_01cb5fc0;
undefined DAT_01cb60c0;
undefined DAT_01cb61c0;
undefined DAT_01cb63c0;
undefined DAT_01cb64c0;
undefined DAT_01cb65c0;
undefined DAT_01cb66c0;
undefined DAT_01cb67c0;
undefined DAT_01cb69c0;
undefined DAT_01cb6ac0;
undefined DAT_01cb6bc0;
undefined DAT_01cb6cc0;
undefined DAT_01cb6ec0;
undefined DAT_01cb6fc0;
undefined DAT_01cb70c0;
undefined DAT_01cb72c0;
undefined DAT_01cb73c0;
undefined DAT_01cc59c0;
undefined DAT_01cb76c0;
undefined DAT_01cb77c0;
undefined DAT_01cbccc0;
undefined DAT_01cb78c0;
undefined DAT_01cb79c0;
undefined DAT_01cb7ac0;
undefined DAT_01cb7bc0;
undefined DAT_01cbf2c0;
undefined DAT_01cb7cc0;
undefined DAT_01cb8ac0;
undefined DAT_01cb80c0;
undefined DAT_01cb7ec0;
undefined DAT_01cb7fc0;
undefined DAT_01cb82c0;
undefined DAT_01cb81c0;
undefined DAT_01cbf6c0;
undefined DAT_01cb89c0;
undefined DAT_01cb8bc0;
undefined DAT_01cb8cc0;
undefined DAT_01cb8dc0;
undefined DAT_01cb8fc0;
undefined DAT_01cb90c0;
undefined DAT_01cb91c0;
undefined DAT_01cb92c0;
undefined DAT_01cb9ac0;
undefined DAT_01cb9bc0;
undefined DAT_01cb9cc0;
undefined DAT_01cb9dc0;
undefined DAT_01cb9ec0;
undefined DAT_01cb9fc0;
undefined DAT_01cba3c0;
undefined DAT_01cba4c0;
undefined DAT_01cba5c0;
undefined DAT_01cba6c0;
undefined DAT_01cba7c0;
undefined DAT_01cba8c0;
undefined DAT_01cba9c0;
undefined DAT_01cbaac0;
undefined DAT_01cbabc0;
undefined DAT_01cbacc0;
undefined DAT_01cbb4c0;
undefined DAT_01cbb5c0;
undefined DAT_01cbb6c0;
undefined DAT_01cbb7c0;
undefined DAT_01cbb8c0;
undefined DAT_01cbb9c0;
undefined DAT_01cbbac0;
undefined DAT_01cbbbc0;
undefined DAT_01cbbcc0;
undefined DAT_01cbbdc0;
undefined DAT_01cbd0c0;
undefined DAT_01cbbfc0;
undefined DAT_01cc2cc0;
undefined DAT_01cbc3c0;
undefined DAT_01cbc7c0;
undefined DAT_01cbc8c0;
undefined DAT_01cbc9c0;
undefined DAT_01cc49c0;
undefined DAT_01cbcbc0;
undefined DAT_01cbcdc0;
undefined DAT_01cbd1c0;
undefined DAT_01cbd2c0;
undefined DAT_01cbd5c0;
undefined DAT_01cbd7c0;
undefined DAT_01cbd8c0;
undefined DAT_01cbd9c0;
undefined DAT_01cbdac0;
undefined DAT_01cbddc0;
undefined DAT_01cbdec0;
undefined DAT_01cbdfc0;
undefined DAT_01cbe0c0;
undefined DAT_01cbe1c0;
undefined DAT_01cbe2c0;
undefined DAT_01cbe3c0;
undefined DAT_01cbe4c0;
undefined DAT_01cbe5c0;
undefined DAT_01cbe6c0;
undefined DAT_01cbeac0;
undefined DAT_01cbe8c0;
undefined DAT_01cbe9c0;
undefined DAT_01cbecc0;
undefined DAT_01cbefc0;
undefined DAT_01cbf0c0;
undefined DAT_01cbf1c0;
undefined DAT_01cbf3c0;
undefined DAT_01cbf4c0;
undefined DAT_01cbf5c0;
undefined DAT_01cbf7c0;
undefined DAT_01cbf8c0;
undefined DAT_01cbfac0;
undefined DAT_01cbfdc0;
undefined DAT_01cbfec0;
undefined DAT_01cc01c0;
undefined DAT_01cc04c0;
undefined DAT_01cc06c0;
undefined DAT_01cc07c0;
undefined DAT_01cc08c0;
undefined DAT_01cc09c0;
undefined DAT_01cc0ac0;
undefined DAT_01cc0bc0;
undefined DAT_01cc0cc0;
undefined DAT_01cc0dc0;
undefined DAT_01cc0ec0;
undefined DAT_01cc0fc0;
undefined DAT_01cc10c0;
undefined DAT_01cc11c0;
undefined DAT_01cc12c0;
undefined DAT_01cc13c0;
undefined DAT_01cc14c0;
undefined DAT_01cc1ac0;
undefined DAT_01cc1ec0;
undefined DAT_01cc1fc0;
undefined DAT_01cc20c0;
undefined DAT_01cc21c0;
undefined DAT_01cc22c0;
undefined DAT_01cc23c0;
undefined DAT_01cc5ac0;
undefined DAT_01cc24c0;
undefined DAT_01cc25c0;
undefined DAT_01cc28c0;
undefined DAT_01cc2ac0;
undefined DAT_01cc30c0;
undefined DAT_01cc31c0;
undefined DAT_01cc36c0;
undefined DAT_01cc38c0;
undefined DAT_01cc39c0;
undefined DAT_01cc3ac0;
undefined DAT_01cc3cc0;
undefined DAT_01cc3dc0;
undefined DAT_01cc3bc0;
undefined DAT_01cc45c0;
undefined DAT_01cc46c0;
undefined DAT_01cc48c0;
undefined DAT_01cc4ac0;
undefined DAT_01cc4bc0;
undefined DAT_01cc4cc0;
undefined DAT_01cc51c0;
undefined DAT_01cc53c0;
undefined DAT_01cc56c0;
undefined DAT_01cc5bc0;
undefined DAT_01cc5dc0;
undefined DAT_01cc60c0;
undefined DAT_01cc64c0;
undefined DAT_01cc65c0;
undefined DAT_01cc67c0;
undefined DAT_01cc68c0;
undefined DAT_01cc69c0;
undefined DAT_01cc6dc0;
undefined DAT_01ce37b0;
undefined DAT_01cc70b0;
undefined DAT_01cc72b0;
undefined DAT_01cc71b0;
undefined DAT_01cc73b0;
undefined DAT_01cc74b0;
undefined DAT_01cc75b0;
undefined DAT_01cc76b0;
undefined DAT_01cc77b0;
undefined DAT_01ceafb0;
undefined DAT_01cc78b0;
undefined DAT_01ce9cb0;
undefined DAT_01cc79b0;
undefined DAT_01cc7ab0;
undefined DAT_01cc7bb0;
undefined DAT_01ce0db0;
undefined DAT_01cc7cb0;
undefined DAT_01cc7db0;
undefined DAT_01cc7eb0;
undefined DAT_01cd5ab0;
undefined DAT_01cc89b0;
undefined DAT_01cc8ab0;
undefined DAT_01cc7fb0;
undefined DAT_01cc80b0;
undefined DAT_01cc81b0;
undefined DAT_01ce5bb0;
undefined DAT_01ceb2b0;
undefined DAT_01cc82b0;
undefined DAT_01cc83b0;
undefined DAT_01ce2eb0;
undefined DAT_01cc84b0;
undefined DAT_01cc85b0;
undefined DAT_01cc86b0;
undefined DAT_01cc87b0;
undefined DAT_01ccebb0;
undefined DAT_01cc88b0;
undefined DAT_01cc8bb0;
undefined DAT_01cd08b0;
undefined DAT_01cc8cb0;
undefined DAT_01cc8db0;
undefined DAT_01ce2bb0;
undefined DAT_01ce64b0;
undefined DAT_01ce93b0;
undefined DAT_01cdf3b0;
undefined DAT_01ce3db0;
undefined DAT_01cd7cb0;
undefined DAT_01ce80b0;
undefined DAT_01cdf9b0;
undefined DAT_01cdfab0;
undefined DAT_01ce26b0;
undefined DAT_01cdfbb0;
undefined DAT_01cdfcb0;
undefined DAT_01ce8bb0;
undefined DAT_01cdfdb0;
undefined DAT_01cdfeb0;
undefined DAT_01ceb0b0;
undefined DAT_01ce30b0;
undefined DAT_01cc8eb0;
undefined DAT_01cc8fb0;
undefined DAT_01cdaeb0;
undefined DAT_01cc90b0;
undefined DAT_01cc91b0;
undefined DAT_01cc92b0;
undefined DAT_01ccdeb0;
undefined DAT_01cdc9b0;
undefined DAT_01cd27b0;
undefined DAT_01ce8eb0;
undefined DAT_01cd58b0;
undefined DAT_01cc93b0;
undefined DAT_01cc94b0;
undefined DAT_01cc95b0;
undefined DAT_01ccdfb0;
undefined DAT_01cd4ab0;
undefined DAT_01cc96b0;
undefined DAT_01ce66b0;
undefined DAT_01cc97b0;
undefined DAT_01cc98b0;
undefined DAT_01cc99b0;
undefined DAT_01ce41b0;
undefined DAT_01cde1b0;
undefined DAT_01ce36b0;
undefined DAT_01ce8fb0;
undefined DAT_01ce53b0;
undefined DAT_01ce97b0;
undefined DAT_01ce3ab0;
undefined DAT_01ce5db0;
undefined DAT_01ce5eb0;
undefined DAT_01cc9ab0;
undefined DAT_01ce8db0;
undefined DAT_01ccfbb0;
undefined DAT_01cd07b0;
undefined DAT_01ce83b0;
undefined DAT_01ce1ab0;
undefined DAT_01cc9bb0;

undefined8 FUN_012a4ce0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012a4cf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




undefined8 FUN_012a4d00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




int FUN_012a4d10(int param_1,float *param_2)

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




int FUN_012a4d8c(int param_1,float *param_2)

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




void FUN_012a4df8(int param_1,undefined4 *param_2)

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




void FUN_012a4e18(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f19999a;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_012a4e3c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012a4e78(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012a4eb4(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_012a4ee0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01cac6c0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01cac6c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cac6c0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_012a4f90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012a4fa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012a4fac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_012a4fb8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      *param_2 = (float)iVar2 * 4.656613e-10 * 30.0 + -15.0;
      param_2[1] = 0.0;
      iVar1 = iVar1 + -1;
      param_2[2] = (float)iVar3 * 4.656613e-10 * 30.0 + -15.0;
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}

