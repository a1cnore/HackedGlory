// functions/01867 — 88 functions
#include "libGameKindred.h"




undefined8 FUN_018670f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01867104(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.7;
      if ((fVar5 < 0.3) && (fVar4 = 2.9, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.20000002;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.7;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01de3aa0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01de3aa0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de3aa0 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 8.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_018671dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018671e8(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xbd4ccccd00000000;
  return 1;
}




undefined8 FUN_01867200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




undefined8 FUN_01867210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_0186721c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar3 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar1 = (int)(fVar3 * 64.0) + 1;
    bVar2 = fVar3 < 1.0;
    fVar4 = 0.0;
    if (bVar2) {
      fVar4 = 1.0;
    }
    if (bVar2 && 0.0 < fVar3) {
      fVar4 = 0.0;
    }
    do {
      fVar5 = fVar4;
      if ((bVar2 && 0.0 < fVar3) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_01de40a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                (*(float *)(&DAT_01de40a0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01de40a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar5 * 29.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_018672c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018672d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018672e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_018672f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867300(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fa00000;
  return 1;
}




uint FUN_01867310(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0186734c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01867388(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar5 = (ulong)param_2;
    do {
      fVar9 = 0.0;
      fVar6 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      if ((fVar6 < 1.0) && (fVar9 = 3.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar9 = 0.0;
        if (uVar1 < 0x40) {
          fVar9 = *(float *)(&DAT_01de3ba0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_01de3ba0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de3ba0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      iVar3 = rand();
      fVar7 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar6 = 0.8;
      if ((fVar7 < 0.2) && (fVar6 = 3.0, 0.0 < fVar7)) {
        uVar4 = (uint)((fVar7 / 0.2) * 64.0);
        uVar1 = uVar4 + 1;
        fVar6 = 0.8;
        if (uVar1 < 0x40) {
          fVar6 = (fVar7 / 0.2) * 64.0;
          fVar6 = *(float *)(&DAT_01de3ca0 + (ulong)uVar4 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01de3ca0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de3ca0 + (ulong)uVar4 * 4));
        }
      }
      fVar8 = 0.6;
      if ((fVar7 < 1.0) && (fVar8 = 3.0, 0.0 < fVar7)) {
        uVar1 = (int)(fVar7 * 64.0) + 1;
        fVar8 = 0.6;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_01de3da0 + (ulong)(uint)(int)(fVar7 * 64.0) * 4) +
                  (fVar7 * 64.0 - (float)(int)(fVar7 * 64.0)) *
                  (*(float *)(&DAT_01de3da0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de3da0 + (ulong)(uint)(int)(fVar7 * 64.0) * 4));
        }
      }
      *param_3 = fVar9;
      param_3[1] = ((float)iVar3 * 4.656613e-10 * 0.85 + 0.25) * fVar6;
      param_3[2] = fVar8;
      fVar9 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar9 < 1.0) && (0.0 < fVar9)) {
        uVar1 = (int)(fVar9 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01de3ea0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01de3ea0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de3ea0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      param_3[3] = fVar6;
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 4;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_01867618(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




uint FUN_01867628(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      iVar2 = rand();
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.1, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01de3fa0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01de3fa0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de3fa0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      uVar3 = uVar3 - 1;
      *param_3 = ((float)iVar2 * 4.656613e-10 * 7.0 + -2.0) * fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return param_2;
}




undefined8 FUN_01867754(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867760(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc040000000000000;
  return 1;
}




undefined8 FUN_01867778(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01867788(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01867794(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar3 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar1 = (int)(fVar3 * 64.0) + 1;
    bVar2 = fVar3 < 1.0;
    fVar4 = 0.0;
    if (bVar2) {
      fVar4 = 1.0;
    }
    if (bVar2 && 0.0 < fVar3) {
      fVar4 = 0.0;
    }
    do {
      fVar5 = fVar4;
      if ((bVar2 && 0.0 < fVar3) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_01de40a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                (*(float *)(&DAT_01de40a0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01de40a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar5 * 3000.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01867844(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01867854(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_01867864(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




undefined8 FUN_0186787c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01867888(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_018678f0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43340000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01867910(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40500000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01867930(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01867940(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867950(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186795c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867968(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867978(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867984(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01867994(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_018679a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018679b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_018679c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4060000040400000;
  return 1;
}




undefined8 FUN_018679dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018679e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d75c28f;
  return 1;
}




uint FUN_018679fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01867a38(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01867a74(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01dfc7a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01dfc7a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dfc7a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01867b24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867b34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01867b44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867b50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867b60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867b6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01867b7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867b88(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01867b98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_01867bac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000040a00000;
  return 1;
}




undefined8 FUN_01867bc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_01867bd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_01867be4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01867c20(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01867c5c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01df54a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01df54a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01df54a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01867d0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867d1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01867d2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867d38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867d48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867d54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01867d64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_01867d74(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01867d84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_01867d98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c0000040000000;
  return 1;
}




undefined8 FUN_01867dac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_01867dbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_01867dd0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01867e0c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01867e48(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.7 < fVar6)) {
        fVar6 = (fVar6 + -0.7) / 0.3;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01dfc5a0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01dfc5a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dfc5a0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01867f18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867f28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867f34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867f40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01867f50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01867f60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01867f70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867f7c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01867f8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01867f98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01867fa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2b40000;
  return 1;
}




undefined8 FUN_01867fb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




uint FUN_01867fc8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

