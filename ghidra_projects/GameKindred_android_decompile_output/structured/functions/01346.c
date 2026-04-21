// functions/01346 — 136 functions
#include "libGameKindred.h"




int FUN_01346038(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.0 + 8.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013460b0(int param_1,undefined4 *param_2)

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




void FUN_013460d0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013460f0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41400000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01346110(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01346130(int param_1,undefined8 *param_2)

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




undefined8 FUN_0134615c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0134616c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0134617c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346188(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346194(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013461a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013461b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013461c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_013461d0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013461e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013461ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_013461fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346208(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01346218(int param_1,undefined4 *param_2)

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




uint FUN_01346238(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01346274(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346284(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346294(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013462a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013462ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013462bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013462c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013462d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_013462e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013462f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346304(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01346314(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346320(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01346330(int param_1,undefined4 *param_2)

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




uint FUN_01346350(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0134638c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if (0 < (int)param_2) {
    uVar1 = (ulong)param_2;
    do {
      uVar1 = uVar1 - 1;
      fVar2 = *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4);
      fVar3 = *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      *param_3 = 0;
      *(undefined4 *)((long)param_3 + 0xc) = 0x3f800000;
      *(float *)(param_3 + 1) = (param_1 - fVar2) / fVar3;
      param_3 = param_3 + 2;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
  }
  return;
}




undefined8 FUN_013463d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013463e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013463f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013463fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0134640c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346418(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01346428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_01346438(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346448(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346454(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01346464(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346470(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01346480(int param_1,undefined4 *param_2)

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




uint FUN_013464a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_013464dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013464ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013464fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346508(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346514(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346524(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346530(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01346540(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_01346550(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346560(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0134656c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0134657c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346588(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01346598(int param_1,undefined4 *param_2)

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




uint FUN_013465b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_013465f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346604(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346614(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346620(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0134662c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0134663c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346648(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01346658(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_01346668(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346678(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346684(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01346694(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013466a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_013466b0(int param_1,undefined4 *param_2)

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




uint FUN_013466d0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_0134670c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0134671c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0134672c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346738(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346744(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346754(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346760(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01346770(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_01346780(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346790(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0134679c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_013467ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013467b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_013467c8(int param_1,undefined4 *param_2)

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




uint FUN_013467e8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01346824(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.9) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.9) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.9) * 64.0;
          fVar5 = *(float *)(&DAT_01ceafb0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01ceafb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ceafb0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.3 < fVar4)) {
        fVar4 = (fVar4 + -0.3) / 0.7;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar5 = *(float *)(&DAT_01cd60b0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01cd60b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cd60b0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01346960(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_01346970(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 10.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013469e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013469f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346a04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346a10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01346a20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346a2c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346a3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_01346a50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e99999a3dcccccd;
  return 1;
}




int FUN_01346a64(int param_1,float *param_2)

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




undefined8 FUN_01346ae0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




void FUN_01346af4(int param_1,undefined4 *param_2)

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




uint FUN_01346b14(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01346b50(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.1 < fVar6)) {
        fVar6 = (fVar6 + -0.1) / 0.9;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01ce9cb0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01ce9cb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ce9cb0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01346c28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346c38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346c44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346c50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346c60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346c6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01346c7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346c88(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01346c98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01346ca8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01346cb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346cc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




void FUN_01346cd8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4177ae14;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01346cfc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01346d38(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.0;
      fVar7 = 1.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if (fVar5 < 1.0) {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          fVar4 = -0.0;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_01cda5b0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                    (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                    (*(float *)(&DAT_01cda5b0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cda5b0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
          }
        }
        fVar6 = 1.0;
        if (0.7 < fVar5) {
          fVar7 = (fVar5 + -0.7) / 0.3;
          uVar3 = (uint)(fVar7 * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = 0.0;
          if (uVar1 < 0x40) {
            fVar7 = fVar7 * 64.0;
            fVar6 = *(float *)(&DAT_01ce72b0 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01ce72b0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ce72b0 + (ulong)uVar3 * 4));
          }
        }
        fVar7 = 0.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01ceafb0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                    (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                    (*(float *)(&DAT_01ceafb0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ceafb0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
          }
          else {
            fVar7 = 1.0;
          }
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_3[2] = fVar7;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 1.0;
      if ((fVar6 < 1.0) && (fVar7 = 0.0, -0.0 < fVar6)) {
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = 1.0;
        if (uVar1 < 0x40) {
          fVar7 = (fVar6 + 0.0) * 64.0;
          fVar7 = *(float *)(&DAT_01ceafb0 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01ceafb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ceafb0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01346f0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01346f1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




undefined8 FUN_01346f2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346f38(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0x41200000;
  *param_2 = 0xc1a0000000000000;
  return 1;
}




undefined8 FUN_01346f54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01346f64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_01346f74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01346f80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01346f90(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

