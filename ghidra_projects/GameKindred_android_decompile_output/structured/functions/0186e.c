// functions/0186e — 114 functions
#include "libGameKindred.h"




undefined8 FUN_0186e08c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186e09c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_0186e0ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e0b8(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x40a0000000000000;
  return 1;
}




undefined8 FUN_0186e0d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0186e0e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_0186e0f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e0fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0186e10c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 8.0 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0186e184(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_0186e194(int param_1,float *param_2)

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




int FUN_0186e210(int param_1,float *param_2)

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




void FUN_0186e28c(int param_1,undefined4 *param_2)

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




void FUN_0186e2ac(int param_1,undefined4 *param_2)

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




void FUN_0186e2cc(int param_1,undefined4 *param_2)

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




uint FUN_0186e2ec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0186e328(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 0.2, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01df0ba0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01df0ba0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01df0ba0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0186e3e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186e3f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0186e408(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e414(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186e424(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e430(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0186e440(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e44c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0186e45c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0186e46c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0186e47c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e488(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_0186e49c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0186e4d8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0186e514(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01de51a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01de51a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de51a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0186e5cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0186e5dc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -1.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01de50a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01de50a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de50a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0186e67c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e688(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186e698(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e6a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0186e6b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0186e6c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0186e6d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e6e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




undefined8 FUN_0186e6f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e704(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_0186e714(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0186e750(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0186e78c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01de51a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01de51a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01de51a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0186e844(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186e854(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e860(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e86c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186e87c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e888(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0186e898(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0186e8a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0186e8b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e8c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3dcccccd3f800000;
  return 1;
}




undefined8 FUN_0186e8d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_0186e8e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_0186e8f8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0186e934(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_0186e970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0186e980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0186e990(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0186e9a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186e9ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3dcccccd3f800000;
  return 1;
}




undefined8 FUN_0186e9c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1f00000;
  return 1;
}




undefined8 FUN_0186e9d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_0186e9e0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0186ea1c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0186ea58(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01dee0a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01dee0a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dee0a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0186eb00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}



undefined DAT_01df0ea0;
undefined DAT_01dec3a0;
undefined DAT_01dec4a0;
undefined DAT_01df55a0;
undefined DAT_01de53a0;
undefined DAT_01de54a0;
undefined DAT_01de5ca0;
undefined DAT_01de55a0;
undefined DAT_01de56a0;
undefined DAT_01de57a0;
undefined DAT_01de58a0;
undefined DAT_01de59a0;
undefined DAT_01de5aa0;
undefined DAT_01de5ba0;
undefined DAT_01dec2a0;
undefined DAT_01de5da0;
undefined DAT_01de5ea0;
undefined DAT_01de5fa0;
undefined DAT_01de60a0;
undefined DAT_01de61a0;
undefined DAT_01de62a0;
undefined DAT_01de63a0;
undefined DAT_01de64a0;
undefined DAT_01de65a0;
undefined DAT_01de66a0;
undefined DAT_01de67a0;
undefined DAT_01de68a0;
undefined DAT_01de69a0;
undefined DAT_01de6aa0;
undefined DAT_01de6ba0;
undefined DAT_01de6ca0;
undefined DAT_01de6da0;
undefined DAT_01de6ea0;
undefined DAT_01de6fa0;
undefined DAT_01de70a0;
undefined DAT_01de71a0;
undefined DAT_01de72a0;
undefined DAT_01de8fa0;
undefined DAT_01de73a0;
undefined DAT_01de90a0;
undefined DAT_01de91a0;
undefined DAT_01de93a0;
undefined DAT_01de74a0;
undefined DAT_01de75a0;
undefined DAT_01de76a0;
undefined DAT_01de96a0;
undefined DAT_01de97a0;
undefined DAT_01de78a0;
undefined DAT_01dfb6a0;
undefined DAT_01de79a0;
undefined DAT_01de7aa0;
undefined DAT_01de7ba0;
undefined DAT_01de7ca0;
undefined DAT_01de7da0;
undefined DAT_01de7ea0;
undefined DAT_01de81a0;
undefined DAT_01de7fa0;
undefined DAT_01de80a0;
undefined DAT_01df2aa0;
undefined DAT_01de82a0;
undefined DAT_01de83a0;
undefined DAT_01de84a0;
undefined DAT_01de87a0;
undefined DAT_01de88a0;
undefined DAT_01deada0;
undefined DAT_01de89a0;
undefined DAT_01de8ba0;
undefined DAT_01de8ea0;
undefined DAT_01de92a0;
undefined DAT_01de94a0;
undefined DAT_01de95a0;
undefined DAT_01de98a0;
undefined DAT_01de99a0;
undefined DAT_01de9aa0;
undefined DAT_01deb0a0;
undefined DAT_01de9ba0;
undefined DAT_01de9ca0;
undefined DAT_01dee8a0;
undefined DAT_01de9da0;
undefined DAT_01de9ea0;
undefined DAT_01de9fa0;
undefined DAT_01dea0a0;
undefined DAT_01dea1a0;
undefined DAT_01dea2a0;
undefined DAT_01dea3a0;
undefined DAT_01dea4a0;
undefined DAT_01dea5a0;
undefined DAT_01dea6a0;
undefined DAT_01dea7a0;
undefined DAT_01dea8a0;
undefined DAT_01dea9a0;
undefined DAT_01df62a0;
undefined DAT_01df87a0;
undefined DAT_01deaba0;
undefined DAT_01deaca0;
undefined DAT_01df28a0;
undefined DAT_01df81a0;
undefined DAT_01deb1a0;
undefined DAT_01deb2a0;
undefined DAT_01deb3a0;
undefined DAT_01ded0a0;
undefined DAT_01deb5a0;
undefined DAT_01deb6a0;
undefined DAT_01deb7a0;
undefined DAT_01deb8a0;
undefined DAT_01deb9a0;
undefined DAT_01dfc8a0;
undefined DAT_01debaa0;
undefined DAT_01debba0;
undefined DAT_01debca0;
undefined DAT_01debda0;
undefined DAT_01dec0a0;
undefined DAT_01debfa0;
undefined DAT_01dfaba0;
undefined DAT_01dec6a0;
undefined DAT_01df1ca0;
undefined DAT_01df42a0;
undefined DAT_01dec8a0;
undefined DAT_01df07a0;
undefined DAT_01dec9a0;
undefined DAT_01decaa0;
undefined DAT_01decfa0;
undefined DAT_01ded2a0;
undefined DAT_01ded3a0;
undefined DAT_01ded4a0;
undefined DAT_01ded5a0;
undefined DAT_01ded6a0;
undefined DAT_01ded7a0;
undefined DAT_01defca0;
undefined DAT_01ded8a0;
undefined DAT_01ded9a0;
undefined DAT_01dedaa0;
undefined DAT_01dedea0;
undefined DAT_01dee4a0;
undefined DAT_01dee5a0;
undefined DAT_01dee6a0;
undefined DAT_01dee7a0;
undefined DAT_01dee9a0;
undefined DAT_01deeba0;
undefined DAT_01deeca0;
undefined DAT_01deeda0;
undefined DAT_01deeea0;
undefined DAT_01deefa0;
undefined DAT_01def0a0;
undefined DAT_01def1a0;
undefined DAT_01def2a0;
undefined DAT_01df90a0;
undefined DAT_01df70a0;
undefined DAT_01def5a0;
undefined DAT_01def6a0;
undefined DAT_01deffa0;
undefined DAT_01df00a0;
undefined DAT_01df01a0;
undefined DAT_01df02a0;
undefined DAT_01df05a0;
undefined DAT_01df03a0;
undefined DAT_01df04a0;
undefined DAT_01df06a0;
undefined DAT_01df0da0;
undefined DAT_01df0fa0;
undefined DAT_01df10a0;
undefined DAT_01dfaca0;
undefined DAT_01df13a0;
undefined DAT_01df14a0;
undefined DAT_01df15a0;
undefined DAT_01df16a0;
undefined DAT_01df18a0;
undefined DAT_01df17a0;
undefined DAT_01df5ca0;
undefined DAT_01df1da0;
undefined DAT_01df25a0;
undefined DAT_01df27a0;
undefined DAT_01df2ba0;
undefined DAT_01df2ca0;
undefined DAT_01df2da0;
undefined DAT_01df2ea0;
undefined DAT_01df2fa0;
undefined DAT_01df30a0;
undefined DAT_01df31a0;
undefined DAT_01df32a0;
undefined DAT_01df33a0;
undefined DAT_01df34a0;
undefined DAT_01df35a0;
undefined DAT_01df37a0;
undefined DAT_01df38a0;
undefined DAT_01df3aa0;
undefined DAT_01df86a0;
undefined DAT_01df3ba0;
undefined DAT_01df3ca0;
undefined DAT_01df3da0;
undefined DAT_01df3ea0;
undefined DAT_01df40a0;
undefined DAT_01df41a0;
undefined DAT_01df43a0;
undefined DAT_01df44a0;
undefined DAT_01df45a0;
undefined DAT_01df48a0;
undefined DAT_01df49a0;
undefined DAT_01df4ba0;
undefined DAT_01df5ea0;
undefined DAT_01df4ea0;
undefined DAT_01df4fa0;
undefined DAT_01df50a0;
undefined DAT_01df51a0;
undefined DAT_01df52a0;
undefined DAT_01df58a0;
undefined DAT_01df59a0;
undefined DAT_01df5ba0;
undefined DAT_01df5da0;
undefined DAT_01df5fa0;
undefined DAT_01df60a0;
undefined DAT_01df61a0;
undefined DAT_01df65a0;
undefined DAT_01df66a0;
undefined DAT_01df68a0;
undefined DAT_01df69a0;
undefined DAT_01df6aa0;
undefined DAT_01df6ba0;
undefined DAT_01df6ca0;
undefined DAT_01df6da0;
undefined DAT_01df72a0;
undefined DAT_01df7ca0;
undefined DAT_01df7ea0;
undefined DAT_01df80a0;
undefined DAT_01df82a0;
undefined DAT_01df83a0;
undefined DAT_01df84a0;
undefined DAT_01df85a0;
undefined DAT_01df88a0;
undefined DAT_01df89a0;
undefined DAT_01df8fa0;
undefined DAT_01df96a0;
undefined DAT_01df97a0;
undefined DAT_01df98a0;
undefined DAT_01df9aa0;
undefined DAT_01df9ba0;
undefined DAT_01df9ca0;
undefined DAT_01df9da0;
undefined DAT_01dfa5a0;
undefined DAT_01dfa6a0;
undefined DAT_01dfa7a0;
undefined DAT_01dfa8a0;
undefined DAT_01dfa9a0;
undefined DAT_01dfafa0;
undefined DAT_01dfb1a0;
undefined DAT_01dfb2a0;
undefined DAT_01dfb7a0;
undefined DAT_01dfb8a0;
undefined DAT_01dfbaa0;
undefined DAT_01dfbca0;
undefined DAT_01dfbda0;
undefined DAT_01dfbea0;
undefined DAT_01dfbfa0;
undefined DAT_01dfc2a0;
undefined DAT_01dfc3a0;
undefined DAT_01dfc4a0;
undefined DAT_01dfcb28;
undefined DAT_01dfe528;
undefined DAT_01e18528;
undefined DAT_01e19928;
undefined DAT_01e18f28;
undefined DAT_01e1a528;
undefined DAT_01e1a728;
undefined DAT_01e18628;
undefined DAT_01e18728;
undefined DAT_01e19e28;
undefined DAT_01e19128;
undefined DAT_01e08f28;
undefined DAT_01e1a628;
undefined DAT_01dfcc28;
undefined DAT_01dfcd28;
undefined DAT_01e0cd28;
undefined DAT_01e16528;
undefined DAT_01e16628;
undefined DAT_01dfce28;
undefined DAT_01dfcf28;
undefined DAT_01dfda28;
undefined DAT_01dfd128;
undefined DAT_01dfd228;
undefined DAT_01dfd028;
undefined DAT_01dfd328;
undefined DAT_01dfd428;
undefined DAT_01dfd528;
undefined DAT_01dfd628;
undefined DAT_01dfd728;
undefined DAT_01dfd828;
undefined DAT_01dfd928;
undefined DAT_01dfdb28;
undefined DAT_01e0ba28;
undefined DAT_01e00f28;
undefined DAT_01e01028;
undefined DAT_01e12428;
undefined DAT_01e09928;
undefined DAT_01e14d28;
undefined DAT_01e17d28;
undefined DAT_01e0f628;
undefined DAT_01e0f728;
undefined DAT_01dfdc28;
undefined DAT_01e1aa28;
undefined DAT_01e18228;

void FUN_0186eb10(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -1.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dee2a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dee2a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dee2a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0186ebb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ebc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186ebd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0186ebe4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0186ebf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ec00(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0186ec10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_0186ec24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3fc0000040200000;
  return 1;
}




undefined8 FUN_0186ec38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ec44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




void FUN_0186ec54(int param_1,undefined4 *param_2)

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




uint FUN_0186ec74(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0186ecb0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01dee1a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01dee1a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dee1a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0186ed58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0186ed68(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -1.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dee2a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dee2a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dee2a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0186ee10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ee1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186ee2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0186ee3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0186ee4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ee58(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0186ee68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_0186ee7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040400000;
  return 1;
}




undefined8 FUN_0186ee90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ee9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




void FUN_0186eeac(int param_1,undefined4 *param_2)

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




uint FUN_0186eecc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0186ef08(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (0 < param_2) {
    uVar1 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar1;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      *(undefined4 *)((long)param_3 + 0xc) = param_1;
      param_2 = param_2 + -1;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0186ef38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186ef48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ef54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ef60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0186ef70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ef7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0186ef8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186ef98(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0186efa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186efb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40f6666640f66666;
  return 1;
}




undefined8 FUN_0186efcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0186efd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




void FUN_0186efe8(int param_1,undefined4 *param_2)

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

