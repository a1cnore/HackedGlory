// functions/015b8 — 86 functions
#include "libGameKindred.h"




int FUN_015b8068(int param_1,float *param_2)

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




void FUN_015b80e8(int param_1,undefined4 *param_2)

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




uint FUN_015b8108(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015b8144(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d67640 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d67640 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d67640 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_015b81fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015b820c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_015b821c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8228(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc040000000000000;
  return 1;
}




undefined8 FUN_015b8240(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b824c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015b825c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8268(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_015b8278(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_015b828c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_015b829c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_015b82a8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.050000004 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_015b8328(int param_1,undefined4 *param_2)

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




uint FUN_015b8348(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015b8384(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d56540 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d56540 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d56540 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_015b843c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015b844c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015b845c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43c80000;
  return 1;
}




undefined8 FUN_015b846c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015b847c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8488(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_015b8498(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b84a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_015b84b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b84c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000040800000;
  return 1;
}




undefined8 FUN_015b84d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2b40000;
  return 1;
}




undefined8 FUN_015b84e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_015b84f8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_015b8534(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015b8570(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01d6a240 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d6a240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d6a240 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_015b8620(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_015b8630(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 4.0 + 3.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_015b86a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b86b4(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0xc0a00000;
  *param_2 = 0xc080000000000000;
  return 1;
}




void FUN_015b86d0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d6ad40 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d6ad40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d6ad40 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_015b876c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015b877c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_015b878c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_015b879c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 4.0 + 3.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_015b8814(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      param_2[1] = 0.35;
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 3.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_015b888c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




int FUN_015b889c(int param_1,float *param_2)

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




void FUN_015b891c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41a00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_015b893c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_015b895c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 2.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d56640 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d56640 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d56640 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_015b8a10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015b8a20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8a2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8a38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015b8a48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8a54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015b8a64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_015b8a70(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 1.0;
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 12.0 + -6.0;
      param_2 = param_2 + 4;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_015b8af4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8b00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_015b8b10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8b1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_015b8b2c(int param_1,undefined4 *param_2)

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




uint FUN_015b8b4c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015b8b88(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d6a240 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d6a240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d6a240 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 2.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01d62840 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d62840 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d62840 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_015b8c9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015b8cac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8cb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8cc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}



undefined DAT_01d56740;
undefined DAT_01d56940;
undefined DAT_01d56a40;
undefined DAT_01d56c40;
undefined DAT_01d56d40;
undefined DAT_01d56f40;
undefined DAT_01d57140;
undefined DAT_01d57240;
undefined DAT_01d57340;
undefined DAT_01d57540;
undefined DAT_01d57640;
undefined DAT_01d57740;
undefined DAT_01d57840;
undefined DAT_01d57940;
undefined DAT_01d57a40;
undefined DAT_01d57b40;
undefined DAT_01d5ae40;
undefined DAT_01d68040;
undefined DAT_01d5b540;
undefined DAT_01d57c40;
undefined DAT_01d57d40;
undefined DAT_01d5b440;
undefined DAT_01d57e40;
undefined DAT_01d57f40;
undefined DAT_01d58040;
undefined DAT_01d68240;
undefined DAT_01d58240;
undefined DAT_01d68f40;
undefined DAT_01d58a40;
undefined DAT_01d58b40;
undefined DAT_01d58c40;
undefined DAT_01d58d40;
undefined DAT_01d58e40;
undefined DAT_01d6b340;
undefined DAT_01d58f40;
undefined DAT_01d59040;
undefined DAT_01d59140;
undefined DAT_01d59240;
undefined DAT_01d59340;
undefined DAT_01d59440;
undefined DAT_01d59540;
undefined DAT_01d59740;
undefined DAT_01d59840;
undefined DAT_01d59940;
undefined DAT_01d59a40;
undefined DAT_01d59b40;
undefined DAT_01d59c40;
undefined DAT_01d59d40;
undefined DAT_01d5a240;
undefined DAT_01d5a340;
undefined DAT_01d5a040;
undefined DAT_01d5a140;
undefined DAT_01d5ea40;
undefined DAT_01d5a440;
undefined DAT_01d66640;
undefined DAT_01d5a540;
undefined DAT_01d5a640;
undefined DAT_01d5a740;
undefined DAT_01d5a840;
undefined DAT_01d61240;
undefined DAT_01d5a940;
undefined DAT_01d5c340;
undefined DAT_01d5aa40;
undefined DAT_01d5ab40;
undefined DAT_01d5ac40;
undefined DAT_01d5af40;
undefined DAT_01d5b040;
undefined DAT_01d5b140;
undefined DAT_01d5b240;
undefined DAT_01d5b340;
undefined DAT_01d5b740;
undefined DAT_01d5b840;
undefined DAT_01d5b940;
undefined DAT_01d5ba40;
undefined DAT_01d5bb40;
undefined DAT_01d61e40;
undefined DAT_01d5bd40;
undefined DAT_01d5be40;
undefined DAT_01d5bf40;
undefined DAT_01d5c040;
undefined DAT_01d5c140;
undefined DAT_01d5c240;
undefined DAT_01d5e840;
undefined DAT_01d5c440;
undefined DAT_01d5c740;
undefined DAT_01d5c840;
undefined DAT_01d5c940;
undefined DAT_01d5ca40;
undefined DAT_01d5ce40;
undefined DAT_01d5cf40;
undefined DAT_01d5d040;
undefined DAT_01d5d140;
undefined DAT_01d5d740;
undefined DAT_01d5d840;
undefined DAT_01d5d940;
undefined DAT_01d5db40;
undefined DAT_01d5dc40;
undefined DAT_01d5dd40;
undefined DAT_01d5de40;
undefined DAT_01d5df40;
undefined DAT_01d5e040;
undefined DAT_01d5e140;
undefined DAT_01d5e240;
undefined DAT_01d5e540;
undefined DAT_01d5e640;
undefined DAT_01d5e740;
undefined DAT_01d5eb40;
undefined DAT_01d5ec40;
undefined DAT_01d5ee40;
undefined DAT_01d5ef40;
undefined DAT_01d5f040;
undefined DAT_01d5f140;
undefined DAT_01d5f240;
undefined DAT_01d5f340;
undefined DAT_01d5f440;
undefined DAT_01d5f540;
undefined DAT_01d5f640;
undefined DAT_01d5f740;
undefined DAT_01d5f840;
undefined DAT_01d5f940;
undefined DAT_01d5fa40;
undefined DAT_01d5fb40;
undefined DAT_01d60240;
undefined DAT_01d5ff40;
undefined DAT_01d60340;
undefined DAT_01d60640;
undefined DAT_01d60440;
undefined DAT_01d69240;
undefined DAT_01d64040;
undefined DAT_01d60740;
undefined DAT_01d60840;
undefined DAT_01d60940;
undefined DAT_01d60a40;
undefined DAT_01d68840;
undefined DAT_01d60b40;
undefined DAT_01d60c40;
undefined DAT_01d60d40;
undefined DAT_01d60e40;
undefined DAT_01d60f40;
undefined DAT_01d61140;
undefined DAT_01d61340;
undefined DAT_01d61440;
undefined DAT_01d61540;
undefined DAT_01d64440;
undefined DAT_01d61640;
undefined DAT_01d61740;
undefined DAT_01d61840;
undefined DAT_01d67740;
undefined DAT_01d61b40;
undefined DAT_01d61d40;
undefined DAT_01d62040;
undefined DAT_01d62240;
undefined DAT_01d62340;
undefined DAT_01d62440;
undefined DAT_01d62540;
undefined DAT_01d62740;
undefined DAT_01d64340;
undefined DAT_01d62940;
undefined DAT_01d62a40;
undefined DAT_01d62c40;
undefined DAT_01d62d40;
undefined DAT_01d63040;
undefined DAT_01d63140;
undefined DAT_01d6b140;
undefined DAT_01d4e1e0;
undefined DAT_01d6b240;
undefined DAT_01d63340;
undefined DAT_01d63440;
undefined DAT_01d63540;
undefined DAT_01d63640;
undefined DAT_01d63740;
undefined DAT_01d63840;
undefined DAT_01d63a40;
undefined DAT_01d63c40;
undefined DAT_01d64140;
undefined DAT_01d64240;
undefined DAT_01d64540;
undefined DAT_01d64640;
undefined DAT_01d64740;
undefined DAT_01d64840;
undefined DAT_01d64940;
undefined DAT_01d64a40;
undefined DAT_01d64b40;
undefined DAT_01d64c40;
undefined DAT_01d64d40;
undefined DAT_01d64f40;
undefined DAT_01d65040;
undefined DAT_01d65140;
undefined DAT_01d65740;
undefined DAT_01d65840;
undefined DAT_01d65940;
undefined DAT_01d65b40;
undefined DAT_01d65c40;
undefined DAT_01d65e40;
undefined DAT_01d65f40;
undefined DAT_01d66940;
undefined DAT_01d69040;
undefined DAT_01d66040;
undefined DAT_01d66740;
undefined DAT_01d66b40;
undefined DAT_01d66d40;
undefined DAT_01d67040;
undefined DAT_01d66e40;
undefined DAT_01d66f40;
undefined DAT_01d67140;
undefined DAT_01d67240;
undefined DAT_01d67340;
undefined DAT_01d67440;
undefined DAT_01d67940;
undefined DAT_01d67b40;
undefined DAT_01d68340;
undefined DAT_01d67c40;
undefined DAT_01d68440;
undefined DAT_01d68c40;
undefined DAT_01d68d40;
undefined DAT_01d68e40;
undefined DAT_01d69140;
undefined DAT_01d69340;
undefined DAT_01d69440;
undefined DAT_01d69540;
undefined DAT_01d69640;
undefined DAT_01d69740;
undefined DAT_01d69840;
undefined DAT_01d69940;
undefined DAT_01d69a40;
undefined DAT_01d69b40;
undefined DAT_01d69c40;
undefined DAT_01d69d40;
undefined DAT_01d69e40;
undefined DAT_01d6a940;
undefined DAT_01d6a740;
undefined DAT_01d6a840;
undefined DAT_01d6aa40;
undefined DAT_01d6b040;
undefined DAT_01d6b650;
undefined DAT_01d77750;
undefined DAT_01d93c50;
undefined DAT_01d6b750;
undefined DAT_01d6b850;
undefined DAT_01d85e50;
undefined DAT_01d94250;
undefined DAT_01d6b950;
undefined DAT_01d94550;
undefined DAT_01d8fd50;
undefined DAT_01d6ba50;
undefined DAT_01d79050;
undefined DAT_01d6bb50;
undefined DAT_01d6fc50;
undefined DAT_01d93f50;
undefined DAT_01d93250;
undefined DAT_01d85250;
undefined DAT_01d90b50;
undefined DAT_01d94c50;
undefined DAT_01d93b50;
undefined DAT_01d6bc50;
undefined DAT_01d84350;
undefined DAT_01d81050;
undefined DAT_01d8f550;
undefined DAT_01d7da50;
undefined DAT_01d70d50;
undefined DAT_01d7fa50;
undefined DAT_01d84650;
undefined DAT_01d93e50;
undefined DAT_01d90d50;
undefined DAT_01d78350;
undefined DAT_01d80050;
undefined DAT_01d6bd50;
undefined DAT_01d6be50;
undefined DAT_01d6bf50;
undefined DAT_01d78450;
undefined DAT_01d94350;
undefined DAT_01d74350;
undefined DAT_01d85450;
undefined DAT_01d95250;
undefined DAT_01d7d250;
undefined DAT_01d6c150;
undefined DAT_01d6c050;
undefined DAT_01d94e50;
undefined DAT_01d6c250;
undefined DAT_01d6c350;
undefined DAT_01d94a50;
undefined DAT_01d94b50;
undefined DAT_01d83250;
undefined DAT_01d88750;
undefined DAT_01d93850;
undefined DAT_01d8a150;
undefined DAT_01d6c450;
undefined DAT_01d71850;
undefined DAT_01d8ec50;
undefined DAT_01d6c550;
undefined DAT_01d6c650;
undefined DAT_01d6c750;
undefined DAT_01d6d950;
undefined DAT_01d80c50;
undefined DAT_01d6e450;
undefined DAT_01d6c850;
undefined DAT_01d6c950;
undefined DAT_01d6ca50;
undefined DAT_01d6cb50;
undefined DAT_01d6de50;
undefined DAT_01d6df50;
undefined DAT_01d6e050;
undefined DAT_01d6e150;
undefined DAT_01d6e250;
undefined DAT_01d6e350;
undefined DAT_01d6cc50;
undefined DAT_01d8e550;
undefined DAT_01d6cd50;
undefined DAT_01d84450;
undefined DAT_01d6ce50;
undefined DAT_01d6cf50;
undefined DAT_01d76e50;
undefined DAT_01d8f950;
undefined DAT_01d7c450;
undefined DAT_01d6d050;
undefined DAT_01d8f350;
undefined DAT_01d6d150;
undefined DAT_01d6d250;
undefined DAT_01d6d350;
undefined DAT_01d86850;
undefined DAT_01d6d450;
undefined DAT_01d6d550;
undefined DAT_01d6d650;
undefined DAT_01d6d750;
undefined DAT_01d6d850;
undefined DAT_01d6da50;
undefined DAT_01d6db50;
undefined DAT_01d6dc50;
undefined DAT_01d6dd50;
undefined DAT_01d7f350;
undefined DAT_01d86b50;
undefined DAT_01d94150;
undefined DAT_01d7f250;
undefined DAT_01d6e550;
undefined DAT_01d8a950;
undefined DAT_01d81450;
undefined DAT_01d6e650;
undefined DAT_01d6e750;
undefined DAT_01d6e850;
undefined DAT_01d93650;
undefined DAT_01d8f650;
undefined DAT_01d6e950;
undefined DAT_01d6ea50;
undefined DAT_01d6eb50;
undefined DAT_01d6ec50;
undefined DAT_01d6f350;
undefined DAT_01d6f450;
undefined DAT_01d92750;
undefined DAT_01d6f950;
undefined DAT_01d6ed50;
undefined DAT_01d6ee50;
undefined DAT_01d6ef50;
undefined DAT_01d6f050;
undefined DAT_01d6f150;
undefined DAT_01d6f250;
undefined DAT_01d93d50;
undefined DAT_01d6f550;
undefined DAT_01d6f650;
undefined DAT_01d6f750;
undefined DAT_01d6f850;
undefined DAT_01d6fa50;
undefined DAT_01d93050;
undefined DAT_01d7c550;
undefined DAT_01d6fb50;
undefined DAT_01d94850;
undefined DAT_01d93350;
undefined DAT_01d94d50;
undefined DAT_01d6fd50;
undefined DAT_01d6fe50;
undefined DAT_01d6ff50;
undefined DAT_01d70050;
undefined DAT_01d71450;
undefined DAT_01d70150;
undefined DAT_01d82550;
undefined DAT_01d70250;
undefined DAT_01d70350;
undefined DAT_01d70450;
undefined DAT_01d70550;
undefined DAT_01d70650;
undefined DAT_01d73950;
undefined DAT_01d90050;
undefined DAT_01d70850;
undefined DAT_01d70750;
undefined8 DAT_01ca0350;
undefined DAT_01d70950;
undefined DAT_01d70a50;
undefined DAT_01d70b50;
undefined DAT_01d94f50;
undefined DAT_01d95050;
undefined DAT_01d91f50;
undefined DAT_01d90c50;
undefined DAT_01d79b50;
undefined DAT_01d79c50;
undefined DAT_01d79d50;
undefined DAT_01d70c50;
undefined DAT_01d94450;
undefined DAT_01d81d50;
undefined DAT_01d70e50;
undefined DAT_01d86050;
undefined DAT_01d86150;
undefined DAT_01d86250;
undefined DAT_01d94750;
undefined DAT_01d86350;
undefined DAT_01d86450;
undefined DAT_01d86550;
undefined DAT_01d86650;

undefined8 FUN_015b8cd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8ce0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_015b8cf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8cfc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_015b8d0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8d18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_015b8d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_015b8d34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_015b8d48(int param_1,undefined4 *param_2)

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




uint FUN_015b8d68(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_015b8da4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    fVar4 = 0.8;
    uVar2 = (ulong)param_2;
    do {
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = fVar4;
      fVar5 = 1.0;
      if ((fVar7 < 1.0) && (fVar5 = 0.1, -0.0 < fVar7)) {
        uVar3 = (uint)((fVar7 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = (fVar7 + 0.0) * 64.0;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01d56740 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01d56740 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d56740 + (ulong)uVar3 * 4));
          fVar5 = *(float *)(&DAT_01d67840 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01d67840 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d67840 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d56840 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d56840 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d56840 + (ulong)uVar3 * 4));
        }
      }
      param_3[3] = fVar6;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_015b8f10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_015b8f20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe000000;
  return 1;
}




undefined8 FUN_015b8f30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_015b8f3c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      *param_2 = (float)iVar2 * 4.656613e-10 * 50.0 + -25.0;
      param_2[1] = -5.0;
      iVar1 = iVar1 + -1;
      param_2[2] = (float)iVar3 * 4.656613e-10 * 50.0 + -25.0;
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_015b8fdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_015b8fec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_015b8ffc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}

