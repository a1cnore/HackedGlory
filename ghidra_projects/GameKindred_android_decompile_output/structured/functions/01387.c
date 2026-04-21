// functions/01387 — 64 functions
#include "libGameKindred.h"




undefined8 FUN_01387048(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387054(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01387064(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387070(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01387080(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_01387090(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013870a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




int FUN_013870b0(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < param_2) {
    bVar4 = 0.2 <= param_1;
    uVar7 = (uint)((param_1 / 0.2) * 64.0);
    uVar1 = uVar7 + 1;
    fVar11 = 0.4;
    bVar3 = 0.0 < param_1;
    fVar8 = (param_1 / 0.2) * 64.0;
    fVar8 = fVar8 - (float)(int)fVar8;
    iVar2 = param_2;
    if (bVar3 || bVar4) {
      fVar11 = 1.0;
    }
    do {
      fVar9 = fVar11;
      if ((bVar3 && !bVar4) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01cdecb0 + (ulong)uVar7 * 4) +
                fVar8 * (*(float *)(&DAT_01cdecb0 + (ulong)uVar1 * 4) -
                        *(float *)(&DAT_01cdecb0 + (ulong)uVar7 * 4));
      }
      iVar5 = rand();
      fVar10 = fVar11;
      if ((bVar3 && !bVar4) && uVar1 < 0x40) {
        fVar10 = *(float *)(&DAT_01cdecb0 + (ulong)uVar7 * 4) +
                 fVar8 * (*(float *)(&DAT_01cdecb0 + (ulong)uVar1 * 4) -
                         *(float *)(&DAT_01cdecb0 + (ulong)uVar7 * 4));
      }
      iVar6 = rand();
      iVar2 = iVar2 + -1;
      *param_3 = (1.3 - fVar9) * ((float)iVar5 * 4.656613e-10 + 2.0);
      param_3[1] = (1.3 - fVar10) * ((float)iVar6 * 4.656613e-10 + 4.0);
      param_3 = param_3 + 2;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_0138720c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 20.0 + 170.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01387288(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_0138729c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013872d8(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    uVar3 = (uint)((param_1 / 0.2) * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.2;
    fVar4 = (param_1 / 0.2) * 64.0;
    fVar5 = 1.0;
    if (bVar2) {
      fVar5 = 0.4;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar5 = 1.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01cdecb0 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01cdecb0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01cdecb0 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6 * 8.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




uint FUN_01387380(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013873bc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




int FUN_013873f8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0xbdcccccd3d4ccccd;
      iVar1 = iVar1 + -1;
      *(float *)(param_2 + 1) = (float)iVar2 * -4.656613e-10 * 0.2 + 0.1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01387488(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      fVar7 = 1.0;
      if (fVar4 < 1.0) {
        fVar5 = 0.1;
        if (-0.0 < fVar4) {
          uVar3 = (uint)((fVar4 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar5 = 1.0;
          if (uVar1 < 0x40) {
            fVar5 = (fVar4 + 0.0) * 64.0;
            fVar5 = *(float *)(&DAT_01ce8bb0 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_01ce8bb0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ce8bb0 + (ulong)uVar3 * 4));
          }
        }
        fVar7 = 0.2;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01cde7b0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                    (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                    (*(float *)(&DAT_01cde7b0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cde7b0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
          }
          else {
            fVar7 = 1.0;
          }
        }
      }
      fVar6 = 0.0;
      fVar8 = 0.0;
      if ((fVar4 < 0.7) && (fVar8 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.7) * 64.0);
        uVar1 = uVar3 + 1;
        fVar8 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = (fVar4 / 0.7) * 64.0;
          fVar8 = *(float *)(&DAT_01cde8b0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01cde8b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cde8b0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar7;
      param_3[2] = fVar8;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01cde9b0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01cde9b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cde9b0 + (ulong)uVar3 * 4));
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




undefined8 FUN_0138766c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0138767c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_0138768c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387698(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}



undefined DAT_01cdeab0;
undefined DAT_01ce67b0;
undefined DAT_01ce65b0;
undefined DAT_01ce68b0;
undefined DAT_01cdeeb0;
undefined DAT_01cdf6b0;
undefined DAT_01cdefb0;
undefined DAT_01cdf1b0;
undefined DAT_01cdf2b0;
undefined DAT_01cdf4b0;
undefined DAT_01cdf5b0;
undefined DAT_01cdf7b0;
undefined DAT_01cdf8b0;
undefined DAT_01cdffb0;
undefined DAT_01ce00b0;
undefined DAT_01ce96b0;
undefined DAT_01ce01b0;
undefined DAT_01ce03b0;
undefined DAT_01ce02b0;
undefined DAT_01ce05b0;
undefined DAT_01ce07b0;
undefined DAT_01ce08b0;
undefined DAT_01ce09b0;
undefined DAT_01ce0ab0;
undefined DAT_01ce0cb0;
undefined DAT_01ce0eb0;
undefined DAT_01ce0fb0;
undefined DAT_01ce10b0;
undefined DAT_01ce11b0;
undefined DAT_01ce14b0;
undefined DAT_01ce16b0;
undefined DAT_01ce17b0;
undefined DAT_01ce18b0;
undefined DAT_01ce19b0;
undefined DAT_01ce1bb0;
undefined DAT_01ce1db0;
undefined DAT_01ce1eb0;
undefined DAT_01ce1fb0;
undefined DAT_01ce20b0;
undefined DAT_01ce21b0;
undefined DAT_01ce23b0;
undefined DAT_01ce25b0;
undefined DAT_01ce28b0;
undefined DAT_01ce29b0;
undefined DAT_01ce2ab0;
undefined DAT_01ce2cb0;
undefined DAT_01ce2db0;
undefined DAT_01ce2fb0;
undefined DAT_01ce33b0;
undefined DAT_01ce34b0;
undefined DAT_01ce35b0;
undefined DAT_01ce38b0;
undefined DAT_01ce39b0;
undefined DAT_01ce3fb0;
undefined DAT_01ce40b0;
undefined DAT_01ce42b0;
undefined DAT_01ce43b0;
undefined DAT_01ce44b0;
undefined DAT_01ce45b0;
undefined DAT_01ce46b0;
undefined DAT_01ce47b0;
undefined DAT_01ce48b0;
undefined DAT_01ce49b0;
undefined DAT_01ce4ab0;
undefined DAT_01ce4bb0;
undefined DAT_01ce4cb0;
undefined DAT_01ce4db0;
undefined DAT_01ce4eb0;
undefined DAT_01ce4fb0;
undefined DAT_01ce52b0;
undefined DAT_01ce54b0;
undefined DAT_01ce56b0;
undefined DAT_01ce57b0;
undefined DAT_01ce58b0;
undefined DAT_01ce59b0;
undefined DAT_01ce5ab0;
undefined DAT_01ce62b0;
undefined DAT_01ce63b0;
undefined DAT_01ce6ab0;
undefined DAT_01ce6bb0;
undefined DAT_01ce6eb0;
undefined DAT_01ce73b0;
undefined DAT_01ce79b0;
undefined DAT_01ce7ab0;
undefined DAT_01ce7bb0;
undefined DAT_01ce7eb0;
undefined DAT_01ce87b0;
undefined DAT_01ce98b0;
undefined DAT_01ce9ab0;
undefined DAT_01ce9db0;
undefined DAT_01ce9fb0;
undefined DAT_01cea0b0;
undefined DAT_01cea1b0;
undefined DAT_01cea2b0;
undefined DAT_01cea3b0;
undefined DAT_01cea4b0;
undefined DAT_01cea5b0;
undefined DAT_01cea6b0;
undefined DAT_01cea8b0;
undefined DAT_01ceabb0;
undefined DAT_01cea9b0;
undefined DAT_01ceadb0;
undefined DAT_01ceb1b0;
undefined DAT_01cee010;
undefined DAT_01ceb710;
undefined DAT_01d00810;
undefined DAT_01d0b010;
undefined DAT_01d04910;
undefined DAT_01d08b10;
undefined DAT_01ceb810;
undefined DAT_01d08a10;
undefined DAT_01ceb910;
undefined DAT_01cf2f10;
undefined DAT_01d03810;
undefined DAT_01d0b210;
undefined DAT_01cf3010;
undefined DAT_01d03a10;
undefined DAT_01cf3110;
undefined DAT_01cf2a10;
undefined DAT_01d01310;
undefined DAT_01cff210;
undefined DAT_01ceba10;
undefined DAT_01cebb10;
undefined DAT_01d01610;
undefined DAT_01d02010;
undefined DAT_01d04e10;
undefined DAT_01cebc10;
undefined DAT_01cebd10;
undefined DAT_01cebe10;
undefined DAT_01cebf10;
undefined DAT_01d09610;
undefined DAT_01d0ac10;
undefined DAT_01cfb310;
undefined DAT_01d0a610;
undefined DAT_01cff910;
undefined DAT_01d0a910;
undefined DAT_01cec010;
undefined DAT_01d09f10;
undefined DAT_01cec110;
undefined DAT_01d07110;
undefined DAT_01cec210;
undefined DAT_01cec310;
undefined DAT_01d04c10;
undefined DAT_01cec410;
undefined DAT_01cec510;
undefined DAT_01cf4c10;
undefined DAT_01d07a10;
undefined DAT_01cf4e10;
undefined DAT_01cec610;
undefined DAT_01cec710;
undefined DAT_01cec910;
undefined DAT_01cec810;
undefined DAT_01d08110;
undefined DAT_01d04a10;
undefined DAT_01d07710;
undefined DAT_01d06810;
undefined DAT_01ceca10;
undefined DAT_01cecb10;
undefined DAT_01cecd10;
undefined DAT_01cecc10;
undefined DAT_01cece10;
undefined DAT_01cecf10;
undefined DAT_01ced010;
undefined DAT_01ced110;
undefined DAT_01ced410;
undefined DAT_01cfff10;
undefined DAT_01cf7e10;
undefined DAT_01d06d10;
undefined DAT_01ced210;
undefined DAT_01ced310;
undefined DAT_01ced510;
undefined DAT_01ced610;
undefined DAT_01ced710;
undefined DAT_01ced810;
undefined DAT_01ced910;
undefined DAT_01ceda10;
undefined DAT_01cedb10;
undefined DAT_01cedc10;
undefined DAT_01cf6b10;
undefined DAT_01cedd10;
undefined DAT_01cede10;
undefined DAT_01cedf10;
undefined DAT_01cf5f10;
undefined DAT_01cf0310;
undefined DAT_01d07610;
undefined DAT_01d0a510;
undefined DAT_01cee110;
undefined DAT_01cee210;
undefined DAT_01cee310;
undefined DAT_01cee410;
undefined DAT_01cf2810;
undefined DAT_01cee510;
undefined DAT_01d06e10;
undefined DAT_01d0a310;
undefined DAT_01d08710;
undefined DAT_01cee610;
undefined DAT_01cee710;
undefined DAT_01cfb610;
undefined DAT_01cee810;
undefined DAT_01cffe10;
undefined DAT_01cee910;
undefined DAT_01d0ab10;
undefined DAT_01cf2c10;
undefined DAT_01d01410;
undefined DAT_01d01f10;
undefined DAT_01d03e10;
undefined DAT_01d00010;
undefined DAT_01ceea10;
undefined DAT_01cfa210;
undefined DAT_01ceeb10;
undefined DAT_01ceec10;
undefined DAT_01d05f10;
undefined DAT_01ceed10;
undefined DAT_01ceee10;
undefined DAT_01cf9e10;
undefined DAT_01ceef10;
undefined DAT_01cef010;
undefined DAT_01cef110;
undefined DAT_01cef210;
undefined DAT_01cef310;
undefined DAT_01cef410;
undefined DAT_01cf1710;
undefined DAT_01cf1910;
undefined DAT_01cf6a10;
undefined DAT_01cef510;
undefined DAT_01cef610;
undefined DAT_01cef710;
undefined DAT_01cef810;
undefined DAT_01cef910;
undefined DAT_01cefa10;
undefined DAT_01cefb10;
undefined DAT_01cefc10;
undefined DAT_01cefd10;
undefined DAT_01cefe10;
undefined DAT_01ceff10;
undefined DAT_01cf0010;
undefined DAT_01cfab10;
undefined DAT_01cf0110;
undefined DAT_01cf0210;
undefined DAT_01d04b10;
undefined DAT_01d08410;
undefined DAT_01cf0410;
undefined DAT_01d0a210;
undefined DAT_01cf0510;
undefined DAT_01cf0610;
undefined DAT_01cf4b10;
undefined DAT_01cf4f10;
undefined DAT_01cf2d10;
undefined DAT_01cf3d10;
undefined DAT_01cf0710;
undefined DAT_01cf4610;
undefined DAT_01d09a10;
undefined DAT_01d00c10;
undefined DAT_01cf0810;
undefined DAT_01cf3f10;
undefined DAT_01d04710;
undefined DAT_01cf0910;
undefined DAT_01cf0a10;
undefined DAT_01cf0b10;
undefined DAT_01cf0c10;
undefined DAT_01d01c10;
undefined DAT_01d01d10;
undefined DAT_01cf0d10;
undefined DAT_01cf0e10;
undefined DAT_01cf0f10;
undefined DAT_01cf1010;
undefined DAT_01cf1110;
undefined DAT_01cf1210;
undefined DAT_01cf1310;
undefined DAT_01d05810;
undefined DAT_01cf1410;
undefined DAT_01cf1510;
undefined DAT_01cf1610;
undefined DAT_01cf1810;
undefined DAT_01cf1a10;
undefined DAT_01cfae10;
undefined DAT_01cf1b10;
undefined DAT_01cf1c10;
undefined DAT_01d09710;
undefined DAT_01d06a10;
undefined DAT_01d06b10;
undefined DAT_01cfa010;
undefined DAT_01cffd10;
undefined DAT_01d05d10;
undefined DAT_01cfaf10;
undefined DAT_01cfb810;
undefined DAT_01cfb110;
undefined DAT_01cfb210;
undefined DAT_01d09510;
undefined DAT_01d0a010;
undefined DAT_01cfdf10;
undefined DAT_01cfe010;
undefined DAT_01cf1d10;
undefined DAT_01cf1e10;
undefined DAT_01cfeb10;
undefined DAT_01cf1f10;
undefined DAT_01cf2010;
undefined DAT_01cf2110;
undefined DAT_01cf2210;
undefined DAT_01cf2310;
undefined DAT_01cf2410;
undefined DAT_01cf2510;
undefined DAT_01cf2610;
undefined DAT_01cf2710;
undefined DAT_01cff010;
undefined DAT_01d04510;
undefined DAT_01cf2910;
undefined DAT_01cf2b10;
undefined DAT_01cf2e10;
undefined DAT_01cf6810;
undefined DAT_01d09910;
undefined DAT_01cf6910;
undefined DAT_01cf3210;
undefined DAT_01cf3310;
undefined DAT_01cf3410;
undefined DAT_01cf3510;
undefined DAT_01cf3610;
undefined DAT_01cf3710;
undefined DAT_01cf9710;
undefined DAT_01cf3810;
undefined DAT_01cf3910;
undefined DAT_01d05410;
undefined DAT_01cf3a10;
undefined DAT_01cf9310;
undefined DAT_01cf3b10;
undefined DAT_01cf3c10;
undefined DAT_01cf3e10;
undefined DAT_01cfe910;
undefined DAT_01d03c10;
undefined DAT_01d03d10;
undefined DAT_01cf4010;
undefined DAT_01cf4110;
undefined DAT_01cf4210;
undefined DAT_01cf4310;
undefined DAT_01cf4410;
undefined DAT_01cf4510;
undefined DAT_01cf4710;
undefined DAT_01cf4810;
undefined DAT_01d08510;
undefined DAT_01cf4910;
undefined DAT_01cf4a10;
undefined DAT_01cf4d10;
undefined DAT_01d07510;
undefined DAT_01cf9210;
undefined DAT_01cf5010;
undefined DAT_01cf5110;
undefined DAT_01cfb910;
undefined DAT_01cfb010;
undefined DAT_01cf5210;
undefined DAT_01cf5310;
undefined DAT_01cfe610;
undefined DAT_01cfe710;
undefined DAT_01cf5410;
undefined DAT_01cf5510;
undefined DAT_01cf5610;
undefined DAT_01cf5710;
undefined DAT_01cf5810;
undefined DAT_01cf5910;
undefined DAT_01cf5a10;
undefined DAT_01d01510;
undefined DAT_01cf5b10;
undefined4 DAT_01ceb5f8;
undefined DAT_01cf5c10;
undefined DAT_01cf5d10;
undefined DAT_01cf5e10;
undefined DAT_01cf6010;
undefined DAT_01cf6110;
undefined DAT_01cf6210;
undefined DAT_01cf6310;
undefined DAT_01d02610;
undefined DAT_01d0b110;
undefined4 DAT_01c38a48;
undefined DAT_01cf6410;
undefined DAT_01cf6510;
undefined DAT_01cf6610;
undefined DAT_01cf6710;
undefined DAT_01cf6c10;
undefined DAT_01cf6d10;
undefined DAT_01cf6e10;
undefined DAT_01cf6f10;
undefined DAT_01d08010;
undefined DAT_01cfb410;
undefined DAT_01cf7010;
undefined DAT_01cff810;
undefined DAT_01cffa10;
undefined DAT_01cf7110;
undefined DAT_01cf7210;
undefined DAT_01cf7310;
undefined DAT_01cf7410;
undefined DAT_01cf7510;
undefined DAT_01cf7710;
undefined DAT_01cf7810;
undefined DAT_01cf7910;
undefined DAT_01cf7610;
undefined DAT_01cf8610;
undefined DAT_01cf7a10;
undefined DAT_01cf7b10;
undefined DAT_01cf7c10;
undefined DAT_01cf7d10;
undefined DAT_01d07410;
undefined DAT_01cf7f10;
undefined DAT_01cf8010;
undefined DAT_01cf8110;
undefined DAT_01cf8310;
undefined DAT_01cf8210;
undefined DAT_01cf8410;
undefined DAT_01cf8510;

undefined8 FUN_013876a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013876b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013876c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013876d0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013876e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_013876f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000041800000;
  return 1;
}




undefined8 FUN_01387704(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387710(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




uint FUN_01387724(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01387760(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0138779c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 1.0;
      fVar5 = 0.3;
      if (fVar4 < 1.0) {
        fVar6 = 0.1;
        if (-0.0 < fVar4) {
          uVar3 = (uint)((fVar4 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = 1.0;
          if (uVar1 < 0x40) {
            fVar6 = (fVar4 + 0.0) * 64.0;
            fVar6 = *(float *)(&DAT_01ce8bb0 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01ce8bb0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ce8bb0 + (ulong)uVar3 * 4));
          }
        }
        fVar5 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          fVar5 = 0.3;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_01ce2bb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                    (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                    (*(float *)(&DAT_01ce2bb0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ce2bb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01cdeab0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01cdeab0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cdeab0 + (ulong)uVar3 * 4));
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




undefined8 FUN_0138791c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0138792c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0138793c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387948(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01387958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01387974(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387980(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01387990(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0138799c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40e0000041800000;
  return 1;
}




undefined8 FUN_013879b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013879bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




void FUN_013879d0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x412ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_013879f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01387a30(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = -0.0;
      if ((fVar5 < 1.0) && (fVar6 = 2.0, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = -0.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01cdebb0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01cdebb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cdebb0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01387af4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01387b04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_01387b18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01387b24(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc080000000000000;
  return 1;
}




undefined8 FUN_01387b3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01387b4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01387b5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_01387b6c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01387b7c(int param_1,float *param_2)

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




int FUN_01387bf4(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.6 + 0.4,
                          (float)uVar4 * 4.656613e-10 * 0.6 + 0.4);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01387c88(int param_1,float *param_2)

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




int FUN_01387d04(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.6 + 0.4;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_01387d84(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01387dc0(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    uVar3 = (uint)((param_1 / 0.2) * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.2;
    fVar4 = (param_1 / 0.2) * 64.0;
    fVar5 = 1.0;
    if (bVar2) {
      fVar5 = 0.4;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar5 = 1.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01cdecb0 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01cdecb0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01cdecb0 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6 * 8.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




uint FUN_01387e68(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01387ea4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




int FUN_01387ee0(int param_1,undefined8 *param_2)

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
      iVar2 = rand();
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.5 + 0.25,
                          (float)uVar4 * 4.656613e-10 * 0.5 + 0.5);
      iVar1 = iVar1 + -1;
      *(float *)(param_2 + 1) = (float)iVar2 * 4.656613e-10 * 0.4 + -0.2;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01387fac(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar6 < 1.0) && (-0.0 < fVar6)) {
        fVar5 = 0.0;
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = (fVar6 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01ceb0b0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01ceb0b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ceb0b0 + (ulong)uVar3 * 4));
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

