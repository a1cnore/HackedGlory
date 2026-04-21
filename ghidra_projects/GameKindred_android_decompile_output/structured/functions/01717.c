// functions/01717 — 107 functions
#include "libGameKindred.h"




undefined8 FUN_01717000(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x3f80000000000000;
  return 1;
}




undefined8 FUN_01717018(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




undefined8 FUN_0171702c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_0171703c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717048(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01717058(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 7.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_017170c0(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x3e800000,4);
    uVar6 = NEON_fmov(0x3f400000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01717144(int param_1,float *param_2)

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




int FUN_017171c0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01717240(int param_1,undefined4 *param_2)

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




void FUN_01717260(int param_1,undefined4 *param_2)

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




void FUN_01717280(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_017172a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017172dc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 0.5, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01da1ce8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01da1ce8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01da1ce8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
      param_3[1] = fVar4;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01db3ae8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01db3ae8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01db3ae8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_017173fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0171740c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_0171741c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717428(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc110000000000000;
  return 1;
}




undefined8 FUN_01717440(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_01717450(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_01717460(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0171746c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0171747c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_017174e8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x3e800000,4);
    uVar6 = NEON_fmov(0x3f400000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0171756c(int param_1,float *param_2)

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




int FUN_017175e8(int param_1,float *param_2)

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




void FUN_01717654(int param_1,undefined4 *param_2)

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




void FUN_01717674(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40c00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01717694(int param_1,undefined4 *param_2)

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




void FUN_017176b4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_017176d4(int param_1,undefined8 *param_2)

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




undefined8 FUN_01717700(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0x3f80000000000000;
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01717714(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717724(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717730(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0171773c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0171774c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717758(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01717768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01717778(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01717788(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717794(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f99999a3f99999a;
  return 1;
}




undefined8 FUN_017177ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017177b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_017177cc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01717808(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01717844(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar3 = *(float *)(&DAT_01da78e8 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01da78e8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01da78e8 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_017178ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017178fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



undefined DAT_01da1de8;
undefined DAT_01da1ee8;
undefined DAT_01da1fe8;
undefined DAT_01da24e8;
undefined DAT_01da21e8;
undefined DAT_01dadee8;
undefined DAT_01da37e8;
undefined DAT_01da85e8;
undefined DAT_01da23e8;
undefined DAT_01da20e8;
undefined DAT_01da25e8;
undefined DAT_01da26e8;
undefined DAT_01da27e8;
undefined DAT_01da29e8;
undefined DAT_01da28e8;
undefined DAT_01da2ae8;
undefined DAT_01da2be8;
undefined DAT_01da74e8;
undefined DAT_01da2de8;
undefined DAT_01da2ee8;
undefined DAT_01da2fe8;
undefined DAT_01da30e8;
undefined DAT_01da31e8;
undefined DAT_01dab4e8;
undefined DAT_01da32e8;
undefined DAT_01da35e8;
undefined DAT_01da36e8;
undefined DAT_01da38e8;
undefined DAT_01da39e8;
undefined DAT_01da3ae8;
undefined DAT_01da3be8;
undefined DAT_01da3ce8;
undefined DAT_01da3de8;
undefined DAT_01da3fe8;
undefined DAT_01da40e8;
undefined DAT_01da42e8;
undefined DAT_01da43e8;
undefined DAT_01da45e8;
undefined DAT_01da44e8;
undefined DAT_01da46e8;
undefined DAT_01da47e8;
undefined DAT_01dab6e8;
undefined DAT_01da49e8;
undefined DAT_01da4ae8;
undefined DAT_01da4be8;
undefined DAT_01da4ce8;
undefined DAT_01da4de8;
undefined DAT_01da4ee8;
undefined DAT_01da4fe8;
undefined DAT_01da50e8;
undefined DAT_01da51e8;
undefined DAT_01da52e8;
undefined DAT_01da53e8;
undefined DAT_01da54e8;
undefined DAT_01da55e8;
undefined DAT_01da56e8;
undefined DAT_01da57e8;
undefined DAT_01da58e8;
undefined DAT_01da59e8;
undefined DAT_01da5ae8;
undefined DAT_01da5be8;
undefined DAT_01da5ce8;
undefined DAT_01da93e8;
undefined DAT_01da5fe8;
undefined DAT_01da5de8;
undefined DAT_01da5ee8;
undefined DAT_01da60e8;
undefined DAT_01da61e8;
undefined DAT_01da62e8;
undefined DAT_01dae6e8;
undefined DAT_01da63e8;
undefined DAT_01da64e8;
undefined DAT_01da66e8;
undefined DAT_01da67e8;
undefined DAT_01da68e8;
undefined DAT_01da6ae8;
undefined DAT_01dafce8;
undefined DAT_01da76e8;
undefined DAT_01da6ce8;
undefined DAT_01da6de8;
undefined DAT_01da6ee8;
undefined DAT_01da6fe8;
undefined DAT_01da71e8;
undefined DAT_01da72e8;
undefined DAT_01da77e8;
undefined DAT_01da79e8;
undefined DAT_01da7ae8;
undefined DAT_01da7ee8;
undefined DAT_01dad7e8;
undefined DAT_01da90e8;
undefined DAT_01da7fe8;
undefined DAT_01da80e8;
undefined DAT_01da81e8;
undefined DAT_01da82e8;
undefined DAT_01daa1e8;
undefined DAT_01da84e8;
undefined DAT_01da88e8;
undefined4 DAT_01c1b428;
undefined DAT_01da8ae8;
undefined DAT_01da8be8;
undefined DAT_01da8ce8;
undefined DAT_01da8de8;
undefined DAT_01da8ee8;
undefined DAT_01da8fe8;
undefined DAT_01da91e8;
undefined DAT_01da92e8;
undefined DAT_01da94e8;
undefined DAT_01da95e8;
undefined DAT_01da96e8;
undefined DAT_01da97e8;
undefined DAT_01da98e8;
undefined DAT_01da99e8;
undefined DAT_01da9ae8;
undefined DAT_01da9ce8;
undefined DAT_01da9de8;
undefined DAT_01da9fe8;
undefined DAT_01daa0e8;
undefined DAT_01daa2e8;
undefined DAT_01daa3e8;
undefined DAT_01daa5e8;
undefined DAT_01daa6e8;
undefined DAT_01daabe8;
undefined DAT_01daace8;
undefined DAT_01daade8;
undefined DAT_01daaee8;
undefined DAT_01dab2e8;
undefined DAT_01dab7e8;
undefined DAT_01dab8e8;
undefined DAT_01dab9e8;
undefined DAT_01dabae8;
undefined DAT_01dabbe8;
undefined DAT_01dabce8;
undefined DAT_01dabde8;
undefined DAT_01dabee8;
undefined DAT_01dadde8;
undefined DAT_01dac1e8;
undefined DAT_01dac2e8;
undefined DAT_01dac3e8;
undefined DAT_01dac4e8;
undefined DAT_01dac6e8;
undefined DAT_01dac7e8;
undefined DAT_01dac9e8;
undefined DAT_01dac8e8;
undefined DAT_01dacae8;
undefined DAT_01dacce8;
undefined DAT_01dacde8;
undefined DAT_01dacfe8;
undefined DAT_01dad4e8;
undefined DAT_01dad3e8;
undefined DAT_01dadbe8;
undefined DAT_01dae8e8;
undefined DAT_01dadfe8;
undefined DAT_01dae0e8;
undefined DAT_01daebe8;
undefined DAT_01dae7e8;
undefined DAT_01dae1e8;
undefined DAT_01dae2e8;
undefined DAT_01dae3e8;
undefined DAT_01dae4e8;
undefined DAT_01dae5e8;
undefined DAT_01dae9e8;
undefined DAT_01daeae8;
undefined DAT_01daece8;
undefined DAT_01daede8;
undefined DAT_01daeee8;
undefined DAT_01daefe8;
undefined DAT_01daf0e8;
undefined DAT_01daf1e8;
undefined DAT_01daf2e8;
undefined DAT_01daf3e8;
undefined DAT_01daf7e8;
undefined DAT_01daf5e8;
undefined DAT_01daf8e8;
undefined DAT_01dafae8;
undefined DAT_01dafbe8;
undefined DAT_01dafde8;
undefined DAT_01db00e8;
undefined DAT_01db06e8;
undefined DAT_01db07e8;
undefined DAT_01db08e8;
undefined DAT_01db09e8;
undefined DAT_01db0be8;
undefined DAT_01db0ce8;
undefined DAT_01db10e8;
undefined DAT_01db11e8;
undefined DAT_01db12e8;
undefined DAT_01db13e8;
undefined DAT_01db14e8;
undefined DAT_01db25e8;
undefined DAT_01db16e8;
undefined DAT_01db17e8;
undefined DAT_01db19e8;
undefined DAT_01db1ce8;
undefined DAT_01db20e8;
undefined DAT_01db21e8;
undefined DAT_01db22e8;
undefined DAT_01db23e8;
undefined DAT_01db26e8;
undefined DAT_01db27e8;
undefined DAT_01db28e8;
undefined DAT_01db29e8;
undefined DAT_01db2ce8;
undefined DAT_01db2ae8;
undefined DAT_01db2be8;
undefined DAT_01db2de8;
undefined DAT_01db2ee8;
undefined DAT_01db2fe8;
undefined DAT_01db3ee8;
undefined DAT_01db41e8;
undefined DAT_01db44e8;
undefined DAT_01db45e8;
undefined DAT_01db49e8;
undefined DAT_01db4ae8;
undefined DAT_01db50e8;
undefined DAT_01db4be8;
undefined DAT_01db4ce8;
undefined DAT_01db4de8;
undefined DAT_01db4ee8;
undefined DAT_01db4fe8;
undefined DAT_01db54e8;
undefined DAT_01db56e8;
undefined DAT_01db5bf0;
undefined DAT_01db5cf0;
undefined DAT_01dd84f0;
undefined DAT_01dca3f0;
undefined DAT_01dd78f0;
undefined DAT_01dd5ef0;
undefined DAT_01dd96f0;
undefined DAT_01dd10f0;
undefined DAT_01dd55f0;
undefined DAT_01dd56f0;
undefined DAT_01dd6df0;
undefined DAT_01db5df0;
undefined DAT_01dd71f0;
undefined DAT_01db5ef0;
undefined DAT_01dbbef0;
undefined DAT_01dd5cf0;
undefined DAT_01db5ff0;
undefined DAT_01dd17f0;
undefined DAT_01dca8f0;
undefined DAT_01dd7af0;
undefined DAT_01db60f0;
undefined DAT_01dbf0f0;
undefined DAT_01dcfef0;
undefined DAT_01dd35f0;
undefined DAT_01dca9f0;
undefined DAT_01dcc6f0;
undefined DAT_01dcbff0;
undefined DAT_01dd36f0;
undefined DAT_01dd37f0;
undefined DAT_01dd38f0;
undefined DAT_01db61f0;
undefined DAT_01dc26f0;
undefined DAT_01dd77f0;
undefined DAT_01dd79f0;
undefined DAT_01dd7bf0;
undefined DAT_01dc13f0;
undefined DAT_01dd32f0;
undefined DAT_01db62f0;
undefined DAT_01db63f0;
undefined DAT_01db64f0;
undefined DAT_01dd92f0;
undefined DAT_01db65f0;
undefined DAT_01dd6ef0;
undefined DAT_01db66f0;
undefined DAT_01dd69f0;
undefined DAT_01dbcbf0;
undefined DAT_01db67f0;
undefined DAT_01db68f0;
undefined DAT_01dd0bf0;
undefined DAT_01dd93f0;
undefined DAT_01dce1f0;
undefined DAT_01dcbef0;
undefined DAT_01dd94f0;
undefined DAT_01db69f0;
undefined DAT_01db6af0;
undefined DAT_01db6bf0;
undefined DAT_01dd4df0;
undefined DAT_01dd1cf0;
undefined DAT_01dd0af0;
undefined DAT_01dc97f0;
undefined DAT_01db6cf0;
undefined DAT_01dd2ef0;
undefined DAT_01dc4cf0;
undefined DAT_01dbbff0;
undefined DAT_01db6df0;
undefined DAT_01db6ff0;
undefined DAT_01db70f0;
undefined DAT_01db6ef0;
undefined DAT_01db72f0;
undefined DAT_01db71f0;
undefined DAT_01db73f0;
undefined DAT_01db74f0;
undefined DAT_01db75f0;
undefined DAT_01dc84f0;
undefined DAT_01db76f0;
undefined DAT_01db77f0;
undefined DAT_01dbf4f0;
undefined DAT_01db78f0;
undefined DAT_01db79f0;
undefined DAT_01db7af0;
undefined DAT_01dcd6f0;
undefined DAT_01dc37f0;
undefined DAT_01db7bf0;
undefined DAT_01db7cf0;
undefined DAT_01dc85f0;
undefined DAT_01dd30f0;
undefined DAT_01dd91f0;
undefined DAT_01dc44f0;
undefined DAT_01dc58f0;
undefined DAT_01dc59f0;
undefined DAT_01dc60f0;
undefined DAT_01dc56f0;
undefined DAT_01dc57f0;
undefined DAT_01db83f0;
undefined DAT_01dd42f0;
undefined DAT_01db7ef0;
undefined DAT_01db7df0;
undefined DAT_01dcb0f0;
undefined DAT_01db7ff0;
undefined DAT_01db80f0;
undefined DAT_01db81f0;
undefined DAT_01db82f0;
undefined DAT_01db84f0;
undefined DAT_01db85f0;
undefined DAT_01db86f0;
undefined DAT_01db87f0;
undefined DAT_01db88f0;
undefined DAT_01db89f0;
undefined DAT_01dcbdf0;
undefined DAT_01db8af0;
undefined DAT_01dc46f0;
undefined DAT_01db8bf0;
undefined DAT_01db8cf0;
undefined DAT_01db8df0;
undefined DAT_01db8ef0;
undefined DAT_01db8ff0;
undefined DAT_01db90f0;
undefined DAT_01db91f0;
undefined DAT_01db97f0;
undefined DAT_01db92f0;
undefined DAT_01dc64f0;
undefined DAT_01dd20f0;
undefined DAT_01db93f0;
undefined DAT_01db94f0;
undefined DAT_01db95f0;
undefined DAT_01db96f0;
undefined DAT_01db98f0;
undefined DAT_01db99f0;
undefined DAT_01db9af0;
undefined DAT_01dd3cf0;
undefined DAT_01dcebf0;
undefined DAT_01dce2f0;
undefined DAT_01db9bf0;
undefined DAT_01db9cf0;
undefined DAT_01db9df0;
undefined DAT_01db9ef0;
undefined DAT_01db9ff0;
undefined DAT_01dba0f0;
undefined DAT_01dc4af0;
undefined DAT_01dba1f0;
undefined DAT_01dc01f0;
undefined DAT_01dba2f0;
undefined DAT_01dba3f0;
undefined DAT_01dba4f0;
undefined DAT_01dba5f0;
undefined DAT_01dba6f0;
undefined DAT_01dd7cf0;

undefined8 FUN_01717908(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x447a0000;
  return 1;
}




undefined8 FUN_01717918(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717928(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717934(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01717944(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01717954(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01717964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717970(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01717980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0171798c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_017179a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_017179dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01717a18(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01db48e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01db48e8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01db48e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_01717ac8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717ad8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717ae4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x447a0000;
  return 1;
}




undefined8 FUN_01717af4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717b04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717b10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01717b20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01717b30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01717b40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717b4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01717b5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717b68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_01717b7c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01717bb8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01717bf4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01da1de8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01da1de8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01da1de8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_01717ca4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717cb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717cc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717ccc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717cdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717ce8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01717cf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_01717d08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01717d18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717d24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01717d34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717d40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_01717d54(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01717d90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01717dcc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01db48e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01db48e8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01db48e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_01717e7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717e8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01717e9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x447a0000;
  return 1;
}




undefined8 FUN_01717eac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01717ebc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717ec8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01717ed8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717ee4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01717ef4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717f00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01717f10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01717f1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_01717f30(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01717f6c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01717fa8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 0.3, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01da34e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01da34e8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01da34e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01db37e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01db37e8 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01db37e8 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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

