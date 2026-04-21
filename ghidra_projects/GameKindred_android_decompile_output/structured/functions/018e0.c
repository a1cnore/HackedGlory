// functions/018e0 — 97 functions
#include "libGameKindred.h"




void FUN_018e0010(int param_1,undefined4 *param_2)

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




void FUN_018e0030(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_018e0054(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_018e0078(int param_1,undefined4 *param_2)

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




void FUN_018e0098(undefined4 param_1,int param_2,undefined8 *param_3)

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




undefined8 FUN_018e00c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e00d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e00e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e00f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e0100(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e010c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_018e011c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0128(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018e0138(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0144(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_018e0154(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0160(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




void FUN_018e0170(int param_1,undefined4 *param_2)

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




uint FUN_018e0190(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_018e01cc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01e18228 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01e18228 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e18228 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_018e0274(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_018e0284(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 4.0 + -2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_018e02fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0308(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e0318(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0324(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_018e0334(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_018e0344(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018e0354(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0360(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_018e0370(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e037c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_018e038c(int param_1,undefined4 *param_2)

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



undefined DAT_01dfdd28;
undefined DAT_01dfde28;
undefined DAT_01dfdf28;
undefined DAT_01dfe028;
undefined DAT_01e0ae28;
undefined DAT_01e00e28;
undefined DAT_01dfe128;
undefined DAT_01e0cb28;
undefined DAT_01dfe228;
undefined DAT_01dfe328;
undefined DAT_01e08628;
undefined DAT_01e08728;
undefined DAT_01e15e28;
undefined DAT_01dfe428;
undefined DAT_01e08828;
undefined DAT_01e16228;
undefined DAT_01e1ab28;
undefined DAT_01e0bc28;
undefined DAT_01e0e928;
undefined DAT_01e17928;
undefined DAT_01dfe628;
undefined DAT_01dfe728;
undefined DAT_01dfe828;
undefined DAT_01e1a428;
undefined DAT_01e18b28;
undefined DAT_01e06328;
undefined DAT_01e06428;
undefined DAT_01e11628;
undefined DAT_01e11728;
undefined DAT_01e13328;
undefined DAT_01e11828;
undefined DAT_01e11928;
undefined DAT_01e10b28;
undefined DAT_01e18828;
undefined DAT_01e10728;
undefined DAT_01dfe928;
undefined DAT_01dfea28;
undefined DAT_01dfeb28;
undefined DAT_01e07c28;
undefined DAT_01e0a328;
undefined DAT_01dfec28;
undefined DAT_01e16b28;
undefined DAT_01e04d28;
undefined DAT_01e17628;
undefined DAT_01dfed28;
undefined DAT_01e10228;
undefined DAT_01e10328;
undefined DAT_01e10428;
undefined DAT_01e10528;
undefined DAT_01dfee28;
undefined DAT_01e12728;
undefined DAT_01e18d28;
undefined DAT_01dfef28;
undefined DAT_01dff028;
undefined DAT_01e0f828;
undefined DAT_01dff128;
undefined DAT_01e15728;
undefined DAT_01dff228;
undefined DAT_01e12828;
undefined DAT_01e08028;
undefined DAT_01e12c28;
undefined DAT_01e11128;
undefined DAT_01e0ad28;
undefined DAT_01dff328;
undefined DAT_01dff428;
undefined DAT_01e04028;
undefined DAT_01dff528;
undefined DAT_01dff628;
undefined DAT_01dff728;
undefined DAT_01dffb28;
undefined DAT_01e15a28;
undefined DAT_01dff828;
undefined DAT_01dff928;
undefined DAT_01e1a828;
undefined DAT_01dffa28;
undefined DAT_01dffc28;
undefined DAT_01e19628;
undefined DAT_01e18c28;
undefined DAT_01e15f28;
undefined DAT_01e16028;
undefined DAT_01e16128;
undefined DAT_01e09528;
undefined DAT_01e18e28;
undefined DAT_01e0eb28;
undefined DAT_01e19728;
undefined DAT_01e09628;
undefined DAT_01e1a928;
undefined DAT_01e09828;
undefined DAT_01e0f128;
undefined DAT_01e07928;
undefined DAT_01e11b28;
undefined DAT_01dffd28;
undefined DAT_01dffe28;
undefined DAT_01dfff28;
undefined DAT_01e00028;
undefined DAT_01e00128;
undefined DAT_01e00228;
undefined DAT_01e0bf28;
undefined DAT_01e00328;
undefined DAT_01e00428;
undefined DAT_01e03c28;
undefined DAT_01e00528;
undefined DAT_01e00628;
undefined DAT_01e00728;
undefined DAT_01e00828;
undefined DAT_01e0ed28;
undefined DAT_01e00928;
undefined DAT_01e00a28;
undefined DAT_01e00b28;
undefined DAT_01e00c28;
undefined DAT_01e00d28;
undefined DAT_01e18a28;
undefined DAT_01e0fa28;
undefined DAT_01e19428;
undefined DAT_01e1ac28;
undefined DAT_01e19828;
undefined DAT_01e06228;
undefined DAT_01e01628;
undefined DAT_01e19a28;
undefined DAT_01e01128;
undefined DAT_01e10828;
undefined DAT_01e18328;
undefined DAT_01e01228;
undefined DAT_01e09028;
undefined DAT_01e09128;
undefined DAT_01e01328;
undefined DAT_01e01428;
undefined DAT_01e01528;
undefined DAT_01e0e628;
undefined DAT_01e01728;
undefined DAT_01e01828;
undefined DAT_01e09c28;
undefined DAT_01e04228;
undefined DAT_01e04728;
undefined DAT_01e04828;
undefined DAT_01e04528;
undefined DAT_01e10928;
undefined DAT_01e01928;
undefined DAT_01e01a28;
undefined DAT_01e01b28;
undefined DAT_01e16c28;
undefined DAT_01e16d28;
undefined DAT_01e16e28;
undefined DAT_01e16f28;
undefined DAT_01e17028;
undefined DAT_01e17128;
undefined DAT_01e17228;
undefined DAT_01e17328;
undefined DAT_01e01c28;
undefined DAT_01e01d28;
undefined DAT_01e01e28;
undefined DAT_01e01f28;
undefined DAT_01e09228;
undefined DAT_01e14928;
undefined DAT_01e19b28;
undefined DAT_01e09328;
undefined DAT_01e09428;
undefined DAT_01e02028;
undefined DAT_01e02128;
undefined DAT_01e02228;
undefined DAT_01e02428;
undefined DAT_01e02328;
undefined DAT_01e02528;
undefined DAT_01e02a28;
undefined DAT_01e02b28;
undefined DAT_01e02628;
undefined DAT_01e02728;
undefined DAT_01e02828;
undefined DAT_01e02928;
undefined DAT_01e02d28;
undefined DAT_01e02c28;
undefined DAT_01e13628;
undefined DAT_01e02e28;
undefined DAT_01e02f28;
undefined DAT_01e03028;
undefined DAT_01e03128;
undefined DAT_01e03228;
undefined DAT_01e03328;
undefined DAT_01e03428;
undefined DAT_01e03528;
undefined DAT_01e03628;
undefined DAT_01e03728;
undefined DAT_01e03828;
undefined DAT_01e03928;
undefined DAT_01e03a28;
undefined DAT_01e03b28;
undefined DAT_01e0fb28;
undefined DAT_01e03d28;
undefined DAT_01e03e28;
undefined DAT_01e03f28;
undefined DAT_01e0bd28;
undefined DAT_01e0be28;
undefined DAT_01e0c028;
undefined DAT_01e09a28;
undefined DAT_01e09b28;
undefined DAT_01e04128;
undefined DAT_01e04328;
undefined DAT_01e04428;
undefined DAT_01e04628;
undefined DAT_01e04928;
undefined DAT_01e04a28;
undefined DAT_01e04b28;
undefined DAT_01e04c28;
undefined DAT_01e04e28;
undefined DAT_01e18428;
undefined DAT_01e04f28;
undefined DAT_01e05028;
undefined DAT_01e05128;
undefined DAT_01e05228;
undefined DAT_01e05328;
undefined DAT_01e05428;
undefined DAT_01e05528;
undefined DAT_01e11028;
undefined DAT_01e05628;
undefined DAT_01e05728;
undefined DAT_01e05828;
undefined DAT_01e05928;
undefined DAT_01e05a28;
undefined DAT_01e05b28;
undefined DAT_01e15b28;
undefined DAT_01e05c28;
undefined DAT_01e05d28;
undefined DAT_01e05e28;
undefined DAT_01e05f28;
undefined DAT_01e0f228;
undefined DAT_01e11428;
undefined DAT_01e06028;
undefined DAT_01e0cc28;
undefined DAT_01e0c128;
undefined DAT_01e06128;
undefined DAT_01e12f28;
undefined DAT_01e0f428;
undefined DAT_01e07f28;
undefined DAT_01e13728;
undefined DAT_01e06528;
undefined DAT_01e06928;
undefined DAT_01e06628;
undefined DAT_01e06728;
undefined DAT_01e06828;
undefined DAT_01e06a28;
undefined DAT_01e06b28;
undefined DAT_01e06c28;
undefined DAT_01e06d28;
undefined DAT_01e06e28;
undefined DAT_01e06f28;
undefined DAT_01e07028;
undefined DAT_01e1ad28;
undefined DAT_01e07128;
undefined DAT_01e07228;
undefined DAT_01e07328;
undefined DAT_01e07428;
undefined DAT_01e07728;
undefined DAT_01e07528;
undefined DAT_01e07628;
undefined DAT_01e07828;
undefined DAT_01e07a28;
undefined DAT_01e07b28;
undefined DAT_01e07d28;
undefined DAT_01e07e28;
undefined DAT_01e08128;
undefined DAT_01e08228;
undefined DAT_01e08328;
undefined DAT_01e08428;
undefined DAT_01e08528;
undefined DAT_01e08928;
undefined DAT_01e08a28;
undefined DAT_01e08b28;
undefined DAT_01e08c28;
undefined DAT_01e08d28;
undefined DAT_01e08e28;
undefined DAT_01e0d728;
undefined DAT_01e09728;
undefined DAT_01e10a28;
undefined DAT_01e09d28;
undefined DAT_01e09e28;
undefined DAT_01e09f28;
undefined DAT_01e0a028;
undefined DAT_01e0a128;
undefined DAT_01e0a228;
undefined DAT_01e0a428;
undefined DAT_01e0ab28;
undefined DAT_01e0a528;
undefined DAT_01e0a628;
undefined DAT_01e0a728;
undefined DAT_01e0a828;
undefined DAT_01e0a928;
undefined DAT_01e0aa28;
undefined DAT_01e0ac28;
undefined DAT_01e0af28;
undefined DAT_01e0b028;
undefined DAT_01e0b128;
undefined DAT_01e0b228;
undefined DAT_01e0b328;
undefined DAT_01e0b428;
undefined DAT_01e0b528;
undefined DAT_01e0b628;
undefined DAT_01e0d828;
undefined DAT_01e0e528;
undefined DAT_01e0d928;
undefined DAT_01e0dd28;
undefined DAT_01e0b728;
undefined DAT_01e0b828;
undefined DAT_01e0b928;
undefined DAT_01e16a28;
undefined DAT_01e0bb28;
undefined DAT_01e0c228;
undefined DAT_01e0c328;
undefined DAT_01e0c428;
undefined DAT_01e0c528;
undefined DAT_01e0c628;
undefined DAT_01e0c728;
undefined DAT_01e0c828;
undefined DAT_01e15c28;
undefined DAT_01e0c928;
undefined DAT_01e0ca28;
undefined DAT_01e0ce28;
undefined DAT_01e0cf28;
undefined DAT_01e0d028;
undefined DAT_01e0d128;
undefined DAT_01e0d228;
undefined DAT_01e0d328;
undefined DAT_01e0d428;
undefined DAT_01e0d528;
undefined DAT_01e0d628;
undefined DAT_01e0da28;
undefined DAT_01e19328;
undefined DAT_01e0db28;
undefined DAT_01e0dc28;
undefined DAT_01e0de28;
undefined DAT_01e0df28;
undefined DAT_01e0e028;
undefined DAT_01e0e128;
undefined DAT_01e0e228;
undefined DAT_01e0e328;
undefined DAT_01e0e428;
undefined DAT_01e0e728;
undefined DAT_01e0e828;
undefined DAT_01e12628;
undefined DAT_01e0ea28;

uint FUN_018e03ac(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_018e03e8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01dfdd28 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01dfdd28 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dfdd28 + (ulong)uVar3 * 4));
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




undefined8 FUN_018e04a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_018e04b0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01e1a628 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01e1a628 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e1a628 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_018e0554(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e0570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_018e0580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e058c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_018e059c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018e05ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e05b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3e800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_018e05c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_018e05d4(int param_1,float *param_2)

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




void FUN_018e0654(int param_1,undefined4 *param_2)

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




uint FUN_018e0674(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_018e06b0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_018e06ec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_018e0728(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.8;
      if ((fVar3 < 1.0) && (fVar4 = 0.1, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.8;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dfde28 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dfde28 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dfde28 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = param_1 * 1.5 - (float)(int)(param_1 * 1.5);
      param_3[1] = fVar4;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.4;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.4;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dfdf28 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dfdf28 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dfdf28 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_018e0860(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e0870(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e087c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0888(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc0a0000000000000;
  return 1;
}




void FUN_018e08a0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar5 < 0.3) && (fVar4 = 3.0, 0.2 < fVar5)) {
        fVar5 = (fVar5 + -0.2) / 0.10000001;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01dfe028 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dfe028 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dfe028 + (ulong)uVar3 * 4));
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




undefined8 FUN_018e0964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_018e0974(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_018e0984(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018e0994(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_018e09a0(int param_1,undefined8 *param_2)

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




int FUN_018e0a24(int param_1,float *param_2)

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




int FUN_018e0aa0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.25 + 1.25;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_018e0b18(int param_1,undefined4 *param_2)

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




uint FUN_018e0b38(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_018e0b74(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e99999a;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_018e0b98(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_018e0bd4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01e0ae28 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01e0ae28 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e0ae28 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_018e0c7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e0c8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0c98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0ca4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e0cb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0cc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_018e0cd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_018e0ce0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018e0cf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0cfc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_018e0d0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0d18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_018e0d28(int param_1,undefined4 *param_2)

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




uint FUN_018e0d48(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_018e0d84(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = param_1 * 0.5 - (float)(int)(param_1 * 0.5);
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01e00e28 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01e00e28 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e00e28 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




void FUN_018e0e34(float param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < param_2) {
    param_1 = param_1 - (float)(int)param_1;
    fVar3 = (param_1 + 0.0) * 64.0;
    uVar2 = (uint)((param_1 + 0.0) * 64.0);
    uVar1 = uVar2 + 1;
    do {
      fVar4 = -1.0;
      if ((-0.0 < param_1 && param_1 < 1.0) && uVar1 < 0x40) {
        fVar4 = *(float *)(&DAT_01dfe128 + (ulong)uVar2 * 4) +
                (fVar3 - (float)(int)fVar3) *
                (*(float *)(&DAT_01dfe128 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01dfe128 + (ulong)uVar2 * 4));
      }
      *param_3 = 0;
      param_3[2] = 0;
      param_2 = param_2 + -1;
      param_3[1] = fVar4 * 0.8;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




int FUN_018e0ee8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_018e0f54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0f60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_018e0f70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0f7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_018e0f8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_018e0f9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018e0fac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0fb8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fa00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_018e0fc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018e0fd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




void FUN_018e0fe8(int param_1,undefined4 *param_2)

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

