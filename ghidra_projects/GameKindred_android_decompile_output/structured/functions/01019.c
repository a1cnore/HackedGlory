// functions/01019 — 50 functions
#include "libGameKindred.h"




undefined8 FUN_01019030(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4100000000000000;
  return 1;
}




undefined8 FUN_01019048(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01019058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x420c0000;
  return 1;
}




undefined8 FUN_01019068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01019074(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01019084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01019094(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_010190a4(int param_1,float *param_2)

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




int FUN_01019120(int param_1,float *param_2)

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




void FUN_01019188(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43160000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_010191a8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40400000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_010191c8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.0;
      if ((fVar5 < 0.2) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.2) * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 / 0.2) * 64.0;
          fVar4 = *(float *)(&DAT_01c36040 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01c36040 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c36040 + (ulong)uVar3 * 4));
        }
      }
      fVar6 = 0.0;
      if ((fVar5 < 1.4) && (fVar6 = 0.5, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 1.4) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 / 1.4) * 64.0;
          fVar6 = *(float *)(&DAT_01c37240 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c37240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c37240 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.4, 0.7 < fVar5)) {
        fVar5 = (fVar5 + -0.7) / 0.3;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c2c440 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c2c440 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c2c440 + (ulong)uVar3 * 4));
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




undefined8 FUN_01019370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01019380(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 2.0;
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.7 < fVar5)) {
        fVar5 = (fVar5 + -0.7) / 0.3;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 2.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c23d40 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c23d40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c23d40 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 1.5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_01019448(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01c38140 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c38140 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c38140 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * -250.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01019500(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4100000000000000;
  return 1;
}




undefined8 FUN_01019518(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_01019528(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.7;
      if ((fVar4 < 0.7) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.7) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.7;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.7) * 64.0;
          fVar5 = *(float *)(&DAT_01c2c540 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c2c540 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c2c540 + (ulong)uVar3 * 4));
        }
      }
      fVar6 = 0.0;
      if ((fVar4 < 1.4) && (fVar6 = 0.5, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 1.4) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar4 / 1.4) * 64.0;
          fVar6 = *(float *)(&DAT_01c37240 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c37240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c37240 + (ulong)uVar3 * 4));
        }
      }
      fVar7 = 0.9;
      if ((fVar4 < 1.0) && (fVar7 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar7 = 0.9;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01c2fb40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c2fb40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c2fb40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_3[2] = fVar7;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.7 < fVar4)) {
        fVar4 = (fVar4 + -0.7) / 0.3;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01c37740 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01c37740 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c37740 + (ulong)uVar3 * 4));
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




undefined8 FUN_0101971c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0101972c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 2.0;
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.7 < fVar5)) {
        fVar5 = (fVar5 + -0.7) / 0.3;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 2.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01c23d40 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c23d40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c23d40 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = -fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_010197f0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01c38140 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c38140 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c38140 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * 50.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_010198a8(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x40c0000000000000;
  return 1;
}




undefined8 FUN_010198c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_010198d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_010198e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_010198f0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01019900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01019910(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_01019920(int param_1,float *param_2)

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




int FUN_0101999c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.25 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01019a14(int param_1,undefined4 *param_2)

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




void FUN_01019a34(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01019a54(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01019a90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01019acc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar4 < 0.8) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.8) * 64.0;
          fVar5 = *(float *)(&DAT_01c36040 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c36040 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c36040 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.8;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.5 < fVar4)) {
        fVar4 = fVar4 + -0.5 + fVar4 + -0.5;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.8;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01c23e40 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01c23e40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c23e40 + (ulong)uVar3 * 4));
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




undefined8 FUN_01019bf8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01019c08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_01019c18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




void FUN_01019c28(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
      fVar4 = -5.0;
      if ((fVar3 < 1.0) && (fVar4 = -2.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -5.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c23f40 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c23f40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c23f40 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[2] = 0;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3[1] = fVar4 * 10.0;
      param_3 = param_3 + 3;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01019ce0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01019cec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01019cfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01019d08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01019d18(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 10.0 + 10.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01019d84(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x3e800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.39999998 +
                          (float)((ulong)uVar5 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * 0.39999998 + (float)uVar5);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01019e10(int param_1,float *param_2)

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




int FUN_01019e8c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.25;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01019f04(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01019f24(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01019f44(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      fVar6 = 0.0;
      if ((fVar5 < 0.6) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.6) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 / 0.6) * 64.0;
          fVar6 = *(float *)(&DAT_01c35240 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c35240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c35240 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar6 < 1.0) && (fVar4 = 1.0, -0.0 < fVar6)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar6 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01c24040 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01c24040 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c24040 + (ulong)uVar3 * 4));
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

