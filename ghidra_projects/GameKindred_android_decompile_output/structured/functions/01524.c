// functions/01524 — 80 functions
#include "libGameKindred.h"




void FUN_01524010(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.3;
      fVar4 = 1.0;
      if ((fVar6 < 1.0) && (fVar5 = 1.0, fVar4 = 0.1, -0.0 < fVar6)) {
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = (fVar6 + 0.0) * 64.0;
        fVar5 = 0.3;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d38f50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d38f50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d38f50 + (ulong)uVar3 * 4));
          fVar4 = *(float *)(&DAT_01d4a950 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d4a950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d4a950 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, -0.0 < fVar4)) {
        fVar5 = 0.0;
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01d43150 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d43150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d43150 + (ulong)uVar3 * 4));
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




undefined8 FUN_0152417c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0152418c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015241a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015241b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015241c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015241d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015241dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_015241ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_01524200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3fc0000040400000;
  return 1;
}




undefined8 FUN_01524214(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_01524224(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_01524238(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01524274(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015242b0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 1.4, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d39050 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d39050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d39050 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01524370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01524380(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01524390(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0152439c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015243ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_015243bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015243cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015243d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_015243e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_015243f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01524408(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524414(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_01524428(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01524464(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015244a0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.9;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d39150 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d39150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d39150 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.8, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d39250 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d39250 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d39250 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_015245e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015245f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_01524600(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0152460c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0152461c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524628(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01524638(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524644(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01524654(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




int FUN_01524664(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.25 + 0.25;
      param_2[1] = (float)iVar3 * 4.656613e-10 + 1.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_015246ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_015246f8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.049999997 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01524778(int param_1,undefined4 *param_2)

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




uint FUN_01524798(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015247d4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < (int)param_2) {
    uVar5 = (uint)((param_1 / 0.1) * 64.0);
    uVar1 = uVar5 + 1;
    fVar7 = (param_1 / 0.1) * 64.0;
    bVar3 = param_1 < 0.1;
    fVar8 = 1.0;
    if (bVar3) {
      fVar8 = 0.0;
    }
    uVar4 = (ulong)param_2;
    if (bVar3 && 0.0 < param_1) {
      fVar8 = 1.0;
    }
    do {
      fVar9 = fVar8;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01d4ca50 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d4ca50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d4ca50 + (ulong)uVar5 * 4));
      }
      *param_3 = fVar9;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar10 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar9 = -0.0;
      if ((fVar10 < 1.0) && (fVar9 = 0.5, 0.6 < fVar10)) {
        fVar10 = (fVar10 + -0.6) / 0.39999998;
        uVar6 = (uint)(fVar10 * 64.0);
        uVar2 = uVar6 + 1;
        fVar9 = -0.0;
        if (uVar2 < 0x40) {
          fVar10 = fVar10 * 64.0;
          fVar9 = *(float *)(&DAT_01d39350 + (ulong)uVar6 * 4) +
                  (fVar10 - (float)(int)fVar10) *
                  (*(float *)(&DAT_01d39350 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01d39350 + (ulong)uVar6 * 4));
        }
      }
      param_3[3] = fVar9;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 4;
    } while (uVar4 != 0);
  }
  return;
}




undefined8 FUN_0152491c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0152492c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_0152493c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524948(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01524958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01524974(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524980(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01524990(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_015249a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000040800000;
  return 1;
}




undefined8 FUN_015249b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_015249c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




void FUN_015249d4(int param_1,undefined4 *param_2)

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




void FUN_015249f4(int param_1,undefined4 *param_2)

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




void FUN_01524a18(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d39450 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d39450 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d39450 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_01524ad0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01524ae0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524aec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524af8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01524b08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524b14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01524b24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01524b30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01524b40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




int FUN_01524b50(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 + 1.0,
                          (float)uVar4 * 4.656613e-10 + 3.0);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01524bc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




int FUN_01524bd8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.049999997 + 0.15;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01524c58(int param_1,undefined4 *param_2)

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




uint FUN_01524c78(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01524cb4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < (int)param_2) {
    fVar7 = (param_1 + -0.1) / 0.20000002;
    uVar5 = (uint)(fVar7 * 64.0);
    fVar7 = fVar7 * 64.0;
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.3;
    fVar8 = 1.0;
    if (bVar3) {
      fVar8 = 0.0;
    }
    uVar4 = (ulong)param_2;
    if (bVar3 && 0.1 < param_1) {
      fVar8 = 1.0;
    }
    do {
      fVar9 = fVar8;
      if ((bVar3 && 0.1 < param_1) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01d4db50 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d4db50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d4db50 + (ulong)uVar5 * 4));
      }
      *param_3 = fVar9;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar10 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar9 = -0.0;
      if ((fVar10 < 1.0) && (fVar9 = 2.0, 0.2 < fVar10)) {
        fVar10 = (fVar10 + -0.2) / 0.8;
        uVar6 = (uint)(fVar10 * 64.0);
        uVar2 = uVar6 + 1;
        fVar9 = -0.0;
        if (uVar2 < 0x40) {
          fVar10 = fVar10 * 64.0;
          fVar9 = *(float *)(&DAT_01d39550 + (ulong)uVar6 * 4) +
                  (fVar10 - (float)(int)fVar10) *
                  (*(float *)(&DAT_01d39550 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01d39550 + (ulong)uVar6 * 4));
        }
      }
      param_3[3] = fVar9;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 4;
    } while (uVar4 != 0);
  }
  return;
}




undefined8 FUN_01524e18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01524e28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_01524e38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_01524e44(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
  
  if (0 < (int)param_2) {
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar7 = (ulong)param_2;
    do {
      fVar11 = 0.0;
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      if ((fVar8 < 0.7) && (fVar11 = 0.0, 0.4 < fVar8)) {
        fVar11 = 0.0;
        fVar8 = (fVar8 + -0.4) / 0.29999998;
        uVar6 = (uint)(fVar8 * 64.0);
        uVar1 = uVar6 + 1;
        if (uVar1 < 0x40) {
          fVar8 = fVar8 * 64.0;
          fVar11 = *(float *)(&DAT_01d39650 + (ulong)uVar6 * 4) +
                   (fVar8 - (float)(int)fVar8) *
                   (*(float *)(&DAT_01d39650 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01d39650 + (ulong)uVar6 * 4));
        }
      }
      iVar3 = rand();
      fVar10 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar8 = 0.0;
      if ((fVar10 < 0.7) && (fVar8 = 0.0, 0.4 < fVar10)) {
        fVar10 = (fVar10 + -0.4) / 0.29999998;
        uVar6 = (uint)(fVar10 * 64.0);
        uVar1 = uVar6 + 1;
        if (uVar1 < 0x40) {
          fVar10 = fVar10 * 64.0;
          fVar8 = *(float *)(&DAT_01d39650 + (ulong)uVar6 * 4) +
                  (fVar10 - (float)(int)fVar10) *
                  (*(float *)(&DAT_01d39650 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d39650 + (ulong)uVar6 * 4));
        }
      }
      iVar4 = rand();
      fVar9 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar10 = 0.0;
      if ((fVar9 < 0.7) && (fVar10 = 0.0, 0.4 < fVar9)) {
        fVar9 = (fVar9 + -0.4) / 0.29999998;
        uVar6 = (uint)(fVar9 * 64.0);
        uVar1 = uVar6 + 1;
        if (uVar1 < 0x40) {
          fVar9 = fVar9 * 64.0;
          fVar10 = *(float *)(&DAT_01d39650 + (ulong)uVar6 * 4) +
                   (fVar9 - (float)(int)fVar9) *
                   (*(float *)(&DAT_01d39650 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01d39650 + (ulong)uVar6 * 4));
        }
      }
      iVar5 = rand();
      *param_3 = fVar11 * ((float)iVar3 * 4.656613e-10 * 50.0 + -25.0);
      param_3[1] = fVar8 * ((float)iVar4 * 4.656613e-10 * 50.0 + -25.0);
      param_4 = param_4 + 1;
      uVar7 = uVar7 - 1;
      param_3[2] = fVar10 * ((float)iVar5 * 4.656613e-10 * 50.0 + -25.0);
      param_3 = param_3 + 3;
    } while (uVar7 != 0);
  }
  return param_2;
}

