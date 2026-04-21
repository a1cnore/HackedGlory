// functions/01463 — 143 functions
#include "libGameKindred.h"




undefined8 FUN_0146300c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0146301c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01463028(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.4 + -0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014630a8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x432428f6;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_014630cc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_014630ec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014630fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0146310c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463118(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463124(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01463134(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463140(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01463150(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_01463160(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463170(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0146317c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0146318c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_014631a8(int param_1,undefined4 *param_2)

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




uint FUN_014631c8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01463204(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463214(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01463224(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0146323c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0146324c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463258(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01463268(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_01463278(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463288(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463294(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_014632a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014632b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_014632c0(int param_1,undefined4 *param_2)

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




uint FUN_014632e0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0146331c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_01463364(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01463374(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463380(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0146338c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0146339c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014633a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014633b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_014633c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014633d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014633e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_014633f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463400(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01463410(int param_1,undefined4 *param_2)

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




uint FUN_01463430(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_0146346c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0146347c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0146348c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463498(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014634a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014634b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014634c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014634d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_014634e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014634f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014634fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0146350c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463518(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01463528(int param_1,undefined4 *param_2)

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




uint FUN_01463548(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01463584(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463594(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014635a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014635b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014635bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014635cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014635d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014635e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_014635f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463608(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463614(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01463624(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463630(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01463640(int param_1,undefined4 *param_2)

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




uint FUN_01463660(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_0146369c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014636ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014636bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014636c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014636d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014636e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014636f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01463700(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_01463710(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463720(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0146372c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0146373c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463748(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_01463758(int param_1,undefined4 *param_2)

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




uint FUN_01463778(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014637b4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar3 = *(float *)(&DAT_01d11640 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d11640 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d11640 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0146385c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0146386c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01d11740 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d11740 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d11740 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_01463914(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463920(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01463930(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01463940(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01463950(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0146395c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0146396c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_01463980(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3fc0000040200000;
  return 1;
}




undefined8 FUN_01463994(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014639a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




void FUN_014639b0(int param_1,undefined4 *param_2)

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




uint FUN_014639d0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01463a0c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar3 = *(float *)(&DAT_01d22a40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d22a40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d22a40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01463ab4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01463ac4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01d11740 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d11740 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d11740 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_01463b6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463b78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01463b88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01463b98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01463ba8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463bb4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463bc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_01463bd8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040400000;
  return 1;
}




undefined8 FUN_01463bec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463bf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




void FUN_01463c08(int param_1,undefined4 *param_2)

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




uint FUN_01463c28(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01463c64(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d26340 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d26340 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d26340 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01463d1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01463d2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463d38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463d44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01463d54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01463d60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01463d70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}



undefined DAT_01d11840;
undefined DAT_01d11940;
undefined DAT_01d1c140;
undefined DAT_01d1d740;
undefined DAT_01d11a40;
undefined DAT_01d15540;
undefined DAT_01d11b40;
undefined DAT_01d11c40;
undefined DAT_01d11d40;
undefined DAT_01d11e40;
undefined DAT_01d11f40;
undefined DAT_01d26f40;
undefined DAT_01d27040;
undefined DAT_01d12040;
undefined DAT_01d27240;
undefined DAT_01d12140;
undefined DAT_01d12240;
undefined DAT_01d21340;
undefined DAT_01d22040;
undefined DAT_01d12440;
undefined DAT_01d12540;
undefined DAT_01d12640;
undefined DAT_01d12740;
undefined DAT_01d12840;
undefined DAT_01d12940;
undefined DAT_01d12a40;
undefined DAT_01d12b40;
undefined DAT_01d1ea40;
undefined DAT_01d12c40;
undefined DAT_01d12d40;
undefined DAT_01d12e40;
undefined DAT_01d12f40;
undefined DAT_01d13040;
undefined DAT_01d13140;
undefined DAT_01d25540;
undefined DAT_01d25640;
undefined DAT_01d25740;
undefined DAT_01d13240;
undefined DAT_01d23940;
undefined DAT_01d13340;
undefined DAT_01d13440;
undefined DAT_01d1d240;
undefined DAT_01d23540;
undefined DAT_01d13640;
undefined DAT_01d13540;
undefined DAT_01d19640;
undefined DAT_01d13740;
undefined DAT_01d23b40;
undefined DAT_01d13a40;
undefined DAT_01d18240;
undefined DAT_01d13b40;
undefined DAT_01d13c40;
undefined DAT_01d18140;
undefined DAT_01d1b940;
undefined DAT_01d13d40;
undefined DAT_01d13e40;
undefined DAT_01d28d40;
undefined DAT_01d14040;
undefined DAT_01d13f40;
undefined DAT_01d1e740;
undefined DAT_01d14240;
undefined DAT_01d14340;
undefined DAT_01d14440;
undefined DAT_01d23340;
undefined DAT_01d14540;
undefined DAT_01d24040;
undefined DAT_01d14640;
undefined DAT_01d14840;
undefined DAT_01d14940;
undefined DAT_01d14d40;
undefined DAT_01d14e40;
undefined DAT_01d14f40;
undefined DAT_01d15040;
undefined DAT_01d15140;
undefined DAT_01d15240;
undefined DAT_01d15340;
undefined DAT_01d15440;
undefined DAT_01d15640;
undefined DAT_01d15740;
undefined DAT_01d15840;
undefined DAT_01d15b40;
undefined DAT_01d15c40;
undefined DAT_01d15940;
undefined DAT_01d15d40;
undefined DAT_01d15e40;
undefined DAT_01d15f40;
undefined DAT_01d16040;
undefined DAT_01d16140;
undefined DAT_01d16240;
undefined DAT_01d16340;
undefined DAT_01d16440;
undefined DAT_01d18440;
undefined DAT_01d16540;
undefined DAT_01d16640;
undefined DAT_01d16740;
undefined DAT_01d16840;
undefined DAT_01d16940;
undefined DAT_01d16a40;
undefined DAT_01d1f840;
undefined DAT_01d16b40;
undefined DAT_01d20840;
undefined DAT_01d17b40;
undefined DAT_01d16c40;
undefined DAT_01d16d40;
undefined DAT_01d25d40;
undefined DAT_01d20940;
undefined DAT_01d23640;
undefined DAT_01d16e40;
undefined DAT_01d1de40;
undefined DAT_01d16f40;
undefined DAT_01d1ff40;
undefined DAT_01d17040;
undefined DAT_01d17140;
undefined DAT_01d1a240;
undefined DAT_01d17240;
undefined DAT_01d18340;
undefined DAT_01d17440;
undefined DAT_01d17640;
undefined DAT_01d17740;
undefined DAT_01d17840;
undefined DAT_01d17940;
undefined DAT_01d26740;
undefined DAT_01d17a40;
undefined DAT_01d27840;
undefined DAT_01d1f640;
undefined DAT_01d17d40;
undefined DAT_01d22540;
undefined DAT_01d17f40;
undefined DAT_01d25e40;
undefined DAT_01d29f40;
undefined DAT_01d26d40;
undefined DAT_01d18640;
undefined DAT_01d18740;
undefined DAT_01d18840;
undefined DAT_01d1aa40;
undefined DAT_01d22140;
undefined DAT_01d18940;
undefined DAT_01d18a40;
undefined DAT_01d18b40;
undefined DAT_01d18c40;
undefined DAT_01d18d40;
undefined DAT_01d18e40;
undefined DAT_01d18f40;
undefined DAT_01d19040;
undefined DAT_01d19240;
undefined DAT_01d19340;
undefined DAT_01d19440;
undefined DAT_01d19540;
undefined DAT_01d19740;
undefined DAT_01d1ca40;
undefined DAT_01d19940;
undefined DAT_01d19a40;
undefined DAT_01d1b440;
undefined DAT_01d19b40;
undefined DAT_01d19d40;
undefined DAT_01d19e40;
undefined DAT_01d19f40;
undefined DAT_01d1a040;
undefined DAT_01d1cf40;
undefined DAT_01d1a340;
undefined DAT_01d27440;
undefined DAT_01d1a640;
undefined DAT_01d2a440;
undefined DAT_01d1a740;
undefined DAT_01d1eb40;
undefined DAT_01d1a840;
undefined DAT_01d1ed40;
undefined DAT_01d1ef40;
undefined DAT_01d1ee40;
undefined DAT_01d1a940;
undefined DAT_01d1ab40;
undefined DAT_01d1ac40;
undefined DAT_01d29540;
undefined DAT_01d1ad40;
undefined DAT_01d1af40;
undefined DAT_01d1b040;
undefined DAT_01d1b140;
undefined DAT_01d1b240;
undefined DAT_01d1b340;
undefined DAT_01d1b540;
undefined DAT_01d1b640;
undefined DAT_01d23d40;
undefined DAT_01d1b740;
undefined DAT_01d1b840;
undefined DAT_01d1ba40;
undefined DAT_01d1bb40;
undefined DAT_01d22440;
undefined DAT_01d1bc40;
undefined DAT_01d1bd40;
undefined DAT_01d1be40;
undefined DAT_01d1bf40;
undefined DAT_01d1c040;
undefined DAT_01d1c240;
undefined DAT_01d1c440;
undefined DAT_01d1c340;
undefined DAT_01d24a40;
undefined DAT_01d1c640;
undefined DAT_01d1c540;
undefined DAT_01d1c840;
undefined DAT_01d1cc40;
undefined DAT_01d1cd40;
undefined DAT_01d26840;
undefined DAT_01d1ce40;
undefined DAT_01d1d340;
undefined DAT_01d1d040;
undefined DAT_01d1d440;
undefined DAT_01d1d540;
undefined DAT_01d1d640;
undefined DAT_01d1d840;
undefined DAT_01d1d940;
undefined DAT_01d1df40;
undefined DAT_01d2a340;
undefined DAT_01d1e040;
undefined DAT_01d1e240;
undefined DAT_01d1e340;
undefined DAT_01d29c40;
undefined DAT_01d1e440;
undefined DAT_01d1e540;
undefined DAT_01d1e640;
undefined DAT_01d1e940;
undefined DAT_01d1ec40;
undefined DAT_01d1f040;
undefined DAT_01d1f140;
undefined DAT_01d1f240;
undefined DAT_01d1f340;
undefined DAT_01d1f540;
undefined DAT_01d1f440;
undefined DAT_01d1f740;
undefined DAT_01d1f940;
undefined DAT_01d1fa40;
undefined DAT_01d1fb40;
undefined DAT_01d29240;
undefined DAT_01d1fd40;
undefined DAT_01d1fe40;
undefined DAT_01d20140;
undefined DAT_01d20240;
undefined DAT_01d20640;
undefined DAT_01d20740;
undefined DAT_01d20a40;
undefined DAT_01d20b40;
undefined DAT_01d20c40;
undefined DAT_01d20d40;
undefined DAT_01d20e40;
undefined DAT_01d20f40;
undefined DAT_01d21040;
undefined DAT_01d21140;
undefined DAT_01d21240;
undefined DAT_01d21440;
undefined DAT_01d21540;
undefined DAT_01d21740;
undefined DAT_01d28840;
undefined DAT_01d21840;
undefined DAT_01d21a40;
undefined DAT_01d21b40;
undefined DAT_01d21c40;
undefined DAT_01d21d40;
undefined DAT_01d21e40;
undefined DAT_01d21f40;
undefined DAT_01d22240;
undefined DAT_01d22340;
undefined DAT_01d22640;
undefined DAT_01d22940;
undefined DAT_01d22740;
undefined DAT_01d22b40;
undefined DAT_01d22d40;
undefined DAT_01d22e40;
undefined DAT_01d22c40;
undefined DAT_01d22f40;
undefined DAT_01d23040;
undefined DAT_01d23140;
undefined DAT_01d23240;
undefined DAT_01d23440;
undefined DAT_01d23a40;
undefined DAT_01d23c40;
undefined DAT_01d23e40;
undefined DAT_01d23f40;
undefined DAT_01d24140;
undefined DAT_01d24240;
undefined DAT_01d24340;
undefined DAT_01d24440;
undefined DAT_01d24540;
undefined DAT_01d24640;
undefined DAT_01d24740;
undefined DAT_01d26b40;
undefined DAT_01d24840;
undefined DAT_01d24940;
undefined DAT_01d24b40;
undefined DAT_01d24c40;
undefined DAT_01d24d40;
undefined DAT_01d24e40;
undefined DAT_01d24f40;
undefined DAT_01d25040;
undefined DAT_01d25340;
undefined DAT_01d25b40;
undefined DAT_01d25c40;
undefined DAT_01d26140;
undefined DAT_01d26240;
undefined DAT_01d26540;
undefined DAT_01d26940;
undefined DAT_01d26a40;
undefined DAT_01d27140;
undefined DAT_01d27340;
undefined DAT_01d27540;
undefined DAT_01d27940;
undefined DAT_01d27a40;
undefined DAT_01d27b40;
undefined DAT_01d27c40;
undefined DAT_01d27d40;
undefined DAT_01d27e40;
undefined DAT_01d27f40;
undefined DAT_01d28040;
undefined DAT_01d28140;
undefined DAT_01d28240;
undefined DAT_01d28340;
undefined DAT_01d28440;
undefined DAT_01d28640;
undefined DAT_01d28740;
undefined DAT_01d28940;
undefined DAT_01d28a40;
undefined DAT_01d28b40;
undefined DAT_01d28e40;
undefined DAT_01d29040;
undefined DAT_01d29140;
undefined DAT_01d29440;
undefined DAT_01d29640;
undefined DAT_01d29d40;
undefined DAT_01d29e40;
undefined DAT_01d2a140;
undefined DAT_01d2a850;
undefined DAT_01d4db50;
undefined DAT_01d2a950;
undefined DAT_01d2aa50;
undefined DAT_01d4da50;

undefined8 FUN_01463d80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01463d90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




int FUN_01463da0(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 400.0 + 800.0,
                          (float)uVar4 * 4.656613e-10 * 50.0 + 20.0);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01463e2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_01463e3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_01463e4c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42700000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01463e6c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x44160000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01463e8c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01463ec8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01463ee8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar6 = 1.0;
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      fVar5 = 1.0;
      fVar8 = 0.0;
      if (fVar7 < 1.0) {
        fVar6 = 0.0;
        fVar5 = 0.0;
        fVar8 = 0.2;
        if (0.0 < fVar7) {
          uVar3 = (uint)(fVar7 * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = fVar7 * 64.0;
          fVar6 = 1.0;
          fVar5 = 1.0;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01d2a240 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4));
            fVar6 = *(float *)(&DAT_01d11840 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01d11840 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d11840 + (ulong)uVar3 * 4));
          }
          fVar8 = 0.0;
          if (uVar3 + 1 < 0x40) {
            fVar8 = *(float *)(&DAT_01d1ae40 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01d1ae40 + (ulong)(uVar3 + 1) * 4) -
                    *(float *)(&DAT_01d1ae40 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_3[2] = fVar8;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar6 < 1.0) && (0.013333 < fVar6)) {
        fVar6 = (fVar6 + -0.013333) / 0.986667;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar4 = *(float *)(&DAT_01d11940 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d11940 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d11940 + (ulong)uVar3 * 4));
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

