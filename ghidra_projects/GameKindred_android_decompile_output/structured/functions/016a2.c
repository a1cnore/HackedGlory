// functions/016a2 — 118 functions
#include "libGameKindred.h"




void FUN_016a2050(int param_1,undefined4 *param_2)

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




void FUN_016a2070(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40b00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_016a2090(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016a20b0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a20ec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d88850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d88850 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016a21a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a21b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a21c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a21cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a21dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a21e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a21f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_016a2208(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a2218(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2224(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41880000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_016a2234(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2240(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_016a2250(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a228c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a22c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a22d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_016a22e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a22f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2304(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41500000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_016a2314(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2320(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_016a2330(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a236c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a23a8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 4.2, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d88950 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d88950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88950 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016a2460(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a2470(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc3160000;
  return 1;
}




undefined8 FUN_016a2480(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a248c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a249c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a24a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a24b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a24c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a24d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_016a24e8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4389800043898000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a2510(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a251c(int param_1,undefined4 *param_2)

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




uint FUN_016a253c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2578(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a25b4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a25f0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a262c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01d88a50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d88a50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88a50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_016a26d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a26e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43160000;
  return 1;
}




undefined8 FUN_016a26f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2700(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a2710(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a271c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a272c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2738(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a2748(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_016a275c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x430c000043960000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a2780(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a278c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




void FUN_016a279c(int param_1,undefined4 *param_2)

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




uint FUN_016a27bc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a27f8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2834(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a2870(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 2.9, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d88b50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d88b50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88b50 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016a2934(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a2944(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_016a2954(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2960(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a2970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a297c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a298c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2998(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a29a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_016a29bc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4220000042700000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a29e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a29ec(int param_1,undefined4 *param_2)

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




void FUN_016a2a0c(int param_1,undefined4 *param_2)

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




uint FUN_016a2a2c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2a68(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2aa4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a2ae0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a2af0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2afc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a2b0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_016a2b20(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4220000042700000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a2b44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a2b50(int param_1,undefined4 *param_2)

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




void FUN_016a2b70(int param_1,undefined4 *param_2)

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




uint FUN_016a2b90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2bcc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2c08(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a2c44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a2c54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2c60(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a2c70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_016a2c84(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4220000042700000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a2ca8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a2cb4(int param_1,undefined4 *param_2)

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




void FUN_016a2cd4(int param_1,undefined4 *param_2)

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




uint FUN_016a2cf4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2d30(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2d6c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016a2da8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a2db8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2dc4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a2dd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_016a2de8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4220000042700000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a2e0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a2e18(int param_1,undefined4 *param_2)

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




void FUN_016a2e38(int param_1,undefined4 *param_2)

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




uint FUN_016a2e58(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2e94(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a2ed0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a2f0c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d88c50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d88c50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88c50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016a2fbc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}



undefined DAT_01d88d50;
undefined DAT_01d88e50;
undefined DAT_01d88f50;
undefined DAT_01d89050;
undefined DAT_01d89150;
undefined4 DAT_01d6b610;
undefined DAT_01d89250;
undefined DAT_01d89350;
undefined DAT_01d89450;
undefined DAT_01d89550;
undefined DAT_01d89650;
undefined DAT_01d89750;
undefined DAT_01d89850;
undefined DAT_01d89950;
undefined DAT_01d89a50;
undefined DAT_01d89b50;
undefined DAT_01d89c50;
undefined DAT_01d89d50;
undefined DAT_01d89e50;
undefined DAT_01d89f50;
undefined DAT_01d8a050;
undefined DAT_01d8a250;
undefined DAT_01d8a350;
undefined DAT_01d8a550;
undefined DAT_01d8a650;
undefined DAT_01d8a750;
undefined DAT_01d8a850;
undefined DAT_01d8aa50;
undefined DAT_01d8ab50;
undefined DAT_01d8ac50;
undefined DAT_01d8af50;
undefined DAT_01d8b050;
undefined DAT_01d8b150;
undefined DAT_01d8b250;
undefined DAT_01d8ad50;
undefined DAT_01d8ae50;
undefined DAT_01d8b350;
undefined DAT_01d8b450;
undefined DAT_01d8b550;
undefined DAT_01d8b650;
undefined DAT_01d8b750;
undefined DAT_01d8b850;
undefined DAT_01d8b950;
undefined DAT_01d8ba50;
undefined DAT_01d8bb50;
undefined DAT_01d8bc50;
undefined DAT_01d8bd50;
undefined DAT_01d8be50;
undefined DAT_01d8bf50;
undefined DAT_01d8c150;
undefined DAT_01d92850;
undefined DAT_01d8c250;
undefined DAT_01d8c350;
undefined DAT_01d8c450;
undefined DAT_01d8c550;
undefined DAT_01d8c650;
undefined DAT_01d8c850;
undefined DAT_01d8c950;
undefined DAT_01d8ca50;
undefined DAT_01d8cb50;
undefined DAT_01d8cc50;
undefined DAT_01d8cd50;
undefined DAT_01d8cf50;
undefined DAT_01d8d050;
undefined DAT_01d8d150;
undefined DAT_01d8e150;
undefined DAT_01d8d250;
undefined DAT_01d8d350;
undefined DAT_01d8d450;
undefined DAT_01d8d550;
undefined DAT_01d8d650;
undefined DAT_01d8d750;
undefined DAT_01d8d950;
undefined DAT_01d8da50;
undefined DAT_01d8d850;
undefined DAT_01d8db50;
undefined DAT_01d8dc50;
undefined DAT_01d8dd50;
undefined DAT_01d8de50;
undefined DAT_01d8df50;
undefined DAT_01d8e250;
undefined DAT_01d8e350;
undefined DAT_01d8e450;
undefined DAT_01d8e750;
undefined DAT_01d8e850;
undefined DAT_01d8eb50;
undefined DAT_01d8ed50;
undefined DAT_01d8ee50;
undefined DAT_01d8f050;
undefined DAT_01d8f750;
undefined DAT_01d8f850;
undefined DAT_01d8fa50;
undefined DAT_01d90850;
undefined DAT_01d90150;
undefined DAT_01d90250;
undefined DAT_01d90450;
undefined DAT_01d90550;
undefined DAT_01d90650;
undefined DAT_01d90750;
undefined DAT_01d90950;
undefined DAT_01d90a50;
undefined DAT_01d90e50;
undefined DAT_01d90f50;
undefined DAT_01d91250;
undefined DAT_01d91050;
undefined DAT_01d91150;
undefined DAT_01d91350;
undefined DAT_01d91450;
undefined DAT_01d91550;
undefined DAT_01d91650;
undefined DAT_01d91750;
undefined DAT_01d91850;
undefined DAT_01d91950;
undefined DAT_01d91a50;
undefined DAT_01d91b50;
undefined DAT_01d91c50;
undefined DAT_01d91d50;
undefined DAT_01d92250;
undefined DAT_01d92350;
undefined DAT_01d92450;
undefined DAT_01d92550;
undefined DAT_01d92650;
undefined DAT_01d92a50;
undefined DAT_01d92b50;
undefined DAT_01d92f50;
undefined DAT_01d92c50;
undefined DAT_01d93150;
undefined DAT_01d93550;
undefined DAT_01d93750;
undefined DAT_01d94650;
undefined DAT_01d94950;
undefined DAT_01d95350;
undefined DAT_01db1fe8;
undefined DAT_01db57e8;
undefined DAT_01d95ee8;
undefined DAT_01d95fe8;
undefined DAT_01da78e8;
undefined DAT_01da6be8;
undefined DAT_01db48e8;
undefined DAT_01d957e8;
undefined DAT_01d958e8;
undefined DAT_01d959e8;
undefined DAT_01dad2e8;
undefined DAT_01d9c3e8;
undefined DAT_01dad6e8;
undefined DAT_01d971e8;
undefined DAT_01db0ae8;
undefined DAT_01dad5e8;
undefined DAT_01d95ae8;
undefined DAT_01d95be8;
undefined DAT_01d95ce8;
undefined DAT_01d96be8;
undefined DAT_01d9a9e8;
undefined DAT_01d9e4e8;
undefined DAT_01d95de8;
undefined DAT_01da0ee8;
undefined DAT_01d960e8;
undefined DAT_01da10e8;
undefined DAT_01daafe8;
undefined DAT_01db0de8;
undefined DAT_01d961e8;
undefined DAT_01db58e8;
undefined DAT_01db59e8;
undefined DAT_01db38e8;
undefined DAT_01d962e8;
undefined DAT_01db43e8;
undefined DAT_01db47e8;
undefined DAT_01dabfe8;
undefined DAT_01d963e8;
undefined DAT_01db01e8;
undefined DAT_01d964e8;
undefined DAT_01d965e8;
undefined DAT_01dafee8;
undefined DAT_01daf4e8;
undefined DAT_01db18e8;
undefined DAT_01dab1e8;
undefined DAT_01d976e8;
undefined DAT_01dab3e8;
undefined DAT_01da69e8;
undefined DAT_01db55e8;
undefined DAT_01d966e8;
undefined DAT_01d967e8;
undefined DAT_01d968e8;
undefined DAT_01db02e8;
undefined DAT_01d969e8;
undefined DAT_01db51e8;
undefined DAT_01daffe8;
undefined DAT_01da9ee8;
undefined DAT_01dad0e8;
undefined DAT_01d96ae8;
undefined DAT_01dad1e8;
undefined DAT_01da7be8;
undefined DAT_01d96ce8;
undefined DAT_01d96de8;
undefined DAT_01d96ee8;
undefined DAT_01db3ae8;
undefined DAT_01d96fe8;
undefined DAT_01da7ce8;
undefined DAT_01da7de8;
undefined DAT_01dab5e8;
undefined DAT_01da00e8;
undefined DAT_01d979e8;
undefined DAT_01db46e8;
undefined DAT_01db1ee8;
undefined DAT_01d9cae8;
undefined DAT_01dad8e8;
undefined DAT_01db53e8;
undefined DAT_01d970e8;
undefined DAT_01daf9e8;
undefined DAT_01d972e8;
undefined DAT_01db33e8;
undefined DAT_01d973e8;
undefined DAT_01da33e8;
undefined DAT_01d974e8;
undefined DAT_01da22e8;
undefined DAT_01d975e8;
undefined DAT_01db32e8;
undefined DAT_01db34e8;
undefined DAT_01db35e8;
undefined DAT_01db36e8;
undefined DAT_01d9cde8;
undefined DAT_01db1ae8;
undefined DAT_01d977e8;
undefined DAT_01d978e8;
undefined DAT_01d97ae8;
undefined DAT_01d97be8;
undefined DAT_01db03e8;
undefined DAT_01db0fe8;
undefined DAT_01d97de8;
undefined DAT_01d97ce8;
undefined DAT_01d97ee8;
undefined DAT_01dac0e8;
undefined DAT_01d97fe8;
undefined DAT_01d980e8;
undefined DAT_01d981e8;
undefined DAT_01daa7e8;
undefined DAT_01d982e8;
undefined DAT_01d983e8;
undefined DAT_01d984e8;
undefined DAT_01daf6e8;
undefined DAT_01d985e8;
undefined DAT_01d986e8;
undefined DAT_01d987e8;
undefined DAT_01d988e8;
undefined DAT_01d989e8;
undefined DAT_01d98ae8;
undefined DAT_01db05e8;
undefined DAT_01d99de8;
undefined DAT_01d99ee8;
undefined DAT_01da14e8;
undefined DAT_01d99fe8;
undefined DAT_01d98be8;
undefined DAT_01dab0e8;
undefined DAT_01d98ce8;
undefined DAT_01d98de8;
undefined DAT_01d98ee8;
undefined DAT_01d98fe8;
undefined DAT_01d990e8;
undefined DAT_01d991e8;
undefined DAT_01d992e8;
undefined DAT_01d993e8;
undefined DAT_01d994e8;
undefined DAT_01d995e8;
undefined DAT_01d996e8;
undefined DAT_01d997e8;
undefined DAT_01d998e8;
undefined DAT_01d9f6e8;
undefined DAT_01db31e8;
undefined DAT_01da73e8;
undefined DAT_01da41e8;
undefined DAT_01d999e8;
undefined DAT_01db52e8;
undefined DAT_01d99ae8;
undefined DAT_01d99be8;
undefined DAT_01d99ce8;
undefined DAT_01db37e8;
undefined DAT_01d9a0e8;
undefined DAT_01d9a1e8;
undefined DAT_01d9a2e8;
undefined DAT_01d9a3e8;
undefined DAT_01d9a4e8;
undefined DAT_01d9a7e8;
undefined DAT_01d9a5e8;
undefined DAT_01d9a6e8;
undefined DAT_01d9a8e8;
undefined DAT_01dad9e8;
undefined DAT_01dadae8;
undefined DAT_01da2ce8;
undefined DAT_01da70e8;
undefined DAT_01d9aae8;
undefined DAT_01d9abe8;
undefined DAT_01d9ace8;
undefined DAT_01d9ade8;
undefined DAT_01da65e8;
undefined DAT_01db40e8;
undefined DAT_01daa8e8;
undefined DAT_01d9aee8;
undefined DAT_01d9afe8;
undefined DAT_01da05e8;
undefined DAT_01d9b0e8;
undefined DAT_01dac5e8;
undefined DAT_01da04e8;
undefined DAT_01d9b1e8;
undefined DAT_01da19e8;
undefined DAT_01d9b2e8;
undefined DAT_01d9b3e8;
undefined DAT_01d9b5e8;
undefined DAT_01d9b4e8;
undefined DAT_01d9b7e8;
undefined DAT_01d9b6e8;
undefined DAT_01db04e8;
undefined DAT_01d9b8e8;
undefined DAT_01d9b9e8;
undefined DAT_01db0ee8;
undefined DAT_01d9bae8;
undefined DAT_01da3ee8;
undefined DAT_01da34e8;
undefined DAT_01db3ce8;
undefined DAT_01db3de8;
undefined DAT_01db3fe8;
undefined DAT_01db3be8;
undefined DAT_01dadce8;
undefined DAT_01d9bbe8;
undefined DAT_01d9bce8;
undefined DAT_01d9bde8;
undefined DAT_01d9bee8;
undefined DAT_01d9bfe8;
undefined DAT_01da03e8;
undefined DAT_01d9c1e8;
undefined DAT_01d9c0e8;
undefined DAT_01d9c2e8;
undefined DAT_01daa9e8;
undefined DAT_01daaae8;
undefined DAT_01d9c4e8;
undefined DAT_01d9c5e8;
undefined DAT_01d9c6e8;
undefined DAT_01db42e8;
undefined DAT_01d9c7e8;
undefined DAT_01d9c8e8;
undefined DAT_01d9c9e8;
undefined DAT_01d9cbe8;
undefined DAT_01db1be8;
undefined DAT_01d9cce8;
undefined DAT_01d9cee8;
undefined DAT_01d9cfe8;
undefined DAT_01d9d0e8;
undefined DAT_01d9d1e8;
undefined DAT_01d9fae8;
undefined DAT_01da83e8;
undefined DAT_01d9d2e8;
undefined DAT_01d9d3e8;
undefined DAT_01d9d4e8;
undefined DAT_01d9d5e8;
undefined DAT_01d9d6e8;
undefined DAT_01d9d7e8;
undefined DAT_01d9d8e8;
undefined DAT_01db39e8;
undefined DAT_01d9d9e8;
undefined DAT_01d9f8e8;
undefined DAT_01d9f9e8;
undefined DAT_01d9dae8;
undefined DAT_01d9dbe8;
undefined DAT_01d9dce8;
undefined DAT_01d9dde8;
undefined DAT_01d9dee8;
undefined DAT_01d9dfe8;
undefined DAT_01d9e0e8;
undefined DAT_01d9e1e8;
undefined DAT_01d9e2e8;
undefined DAT_01d9e3e8;
undefined DAT_01d9ebe8;
undefined DAT_01d9e5e8;
undefined DAT_01d9e6e8;
undefined DAT_01d9e7e8;
undefined DAT_01d9e8e8;
undefined DAT_01da75e8;
undefined DAT_01d9e9e8;
undefined DAT_01db15e8;
undefined DAT_01d9eae8;
undefined DAT_01d9ece8;
undefined DAT_01dacbe8;
undefined DAT_01d9ede8;
undefined DAT_01d9eee8;
undefined DAT_01da89e8;
undefined DAT_01d9efe8;
undefined DAT_01d9f0e8;
undefined DAT_01d9f1e8;
undefined DAT_01d9f2e8;
undefined DAT_01d9f3e8;
undefined DAT_01d9f4e8;
undefined DAT_01d9f5e8;
undefined DAT_01d9f7e8;
undefined DAT_01d9fbe8;
undefined DAT_01d9fce8;
undefined DAT_01d9fde8;
undefined DAT_01daa4e8;
undefined DAT_01d9fee8;
undefined DAT_01d9ffe8;
undefined DAT_01da86e8;
undefined DAT_01da87e8;
undefined DAT_01da01e8;
undefined DAT_01da02e8;
undefined DAT_01db24e8;
undefined DAT_01da06e8;
undefined DAT_01da07e8;
undefined DAT_01da48e8;
undefined DAT_01db1de8;
undefined DAT_01db30e8;
undefined DAT_01da9be8;
undefined DAT_01da08e8;
undefined DAT_01da09e8;
undefined DAT_01da0ae8;
undefined DAT_01da0be8;
undefined DAT_01da0ce8;
undefined DAT_01da0de8;
undefined DAT_01da0fe8;
undefined DAT_01da11e8;
undefined DAT_01da12e8;
undefined DAT_01da13e8;
undefined DAT_01da15e8;
undefined DAT_01dacee8;
undefined DAT_01da16e8;
undefined DAT_01da17e8;
undefined DAT_01da18e8;
undefined DAT_01da1ae8;
undefined DAT_01da1be8;
undefined DAT_01da1ce8;

undefined8 FUN_016a2fcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_016a2fdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a2fe8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a2ff8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}

