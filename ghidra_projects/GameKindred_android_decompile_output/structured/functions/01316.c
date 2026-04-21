// functions/01316 — 95 functions
#include "libGameKindred.h"




undefined8 FUN_01316008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




int FUN_0131601c(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 3.0 + 3.0,
                          (float)uVar4 * 4.656613e-10 * 0.9 + 0.1);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013160a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013160b4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01316130(int param_1,undefined4 *param_2)

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




void FUN_01316150(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40a00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01316170(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.7 < fVar6)) {
        fVar6 = (fVar6 + -0.7) / 0.3;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01cdfcb0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01cdfcb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cdfcb0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01316248(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01316258(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316264(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43960000;
  return 1;
}



undefined DAT_01cc9cb0;
undefined DAT_01cc9db0;
undefined DAT_01ce55b0;
undefined DAT_01cc9eb0;
undefined DAT_01cc9fb0;
undefined DAT_01cca0b0;
undefined DAT_01cdb8b0;
undefined DAT_01cca1b0;
undefined DAT_01cca2b0;
undefined DAT_01cca3b0;
undefined DAT_01cca4b0;
undefined DAT_01cca5b0;
undefined DAT_01ce8ab0;
undefined DAT_01cca7b0;
undefined DAT_01cca6b0;
undefined DAT_01cca8b0;
undefined DAT_01ceacb0;
undefined DAT_01cca9b0;
undefined DAT_01ce88b0;
undefined DAT_01ccaab0;
undefined DAT_01cd37b0;
undefined DAT_01ce51b0;
undefined DAT_01ce3cb0;
undefined DAT_01ccabb0;
undefined DAT_01cdb0b0;
undefined DAT_01ce72b0;
undefined DAT_01ccacb0;
undefined DAT_01ccadb0;
undefined DAT_01cdcfb0;
undefined DAT_01cd5cb0;
undefined DAT_01ce70b0;
undefined DAT_01cea7b0;
undefined DAT_01ce71b0;
undefined DAT_01ce5cb0;
undefined DAT_01ccaeb0;
undefined DAT_01ccafb0;
undefined DAT_01ceaab0;
undefined DAT_01ccb0b0;
undefined DAT_01ccb1b0;
undefined DAT_01ccb2b0;
undefined DAT_01ccb3b0;
undefined DAT_01ce9eb0;
undefined DAT_01ccd8b0;
undefined DAT_01ccd9b0;
undefined DAT_01ccb4b0;
undefined DAT_01ce06b0;
undefined DAT_01ccb5b0;
undefined DAT_01ce76b0;
undefined DAT_01ccb6b0;
undefined DAT_01ccb7b0;
undefined DAT_01ccb8b0;
undefined DAT_01ccb9b0;
undefined DAT_01cd83b0;
undefined DAT_01ccbab0;
undefined DAT_01ccbbb0;
undefined DAT_01ccbcb0;
undefined DAT_01ceb3b0;
undefined DAT_01ccbdb0;
undefined DAT_01cd8bb0;
undefined DAT_01ccbeb0;
undefined DAT_01cd7fb0;
undefined DAT_01cd87b0;
undefined DAT_01cd88b0;
undefined DAT_01cd89b0;
undefined DAT_01cd8ab0;
undefined DAT_01cccdb0;
undefined DAT_01cc6f78;
undefined4 DAT_01cc6f80;
undefined DAT_01ccbfb0;
undefined DAT_01ccc0b0;
undefined DAT_01ccc1b0;
undefined DAT_01ccc2b0;
undefined DAT_01ccc3b0;
undefined DAT_01ccc4b0;
undefined DAT_01ccc6b0;
undefined DAT_01ccc7b0;
undefined DAT_01cc6f88;
undefined DAT_01cc6f90;
undefined DAT_01ccc5b0;
undefined DAT_01cc6f98;
undefined DAT_01ccc8b0;
undefined DAT_01ccc9b0;
undefined DAT_01cccab0;
undefined DAT_01cc6fa0;
undefined DAT_01cccbb0;
undefined DAT_01ccccb0;
undefined DAT_01cce6b0;
undefined DAT_01ccceb0;
undefined DAT_01cccfb0;
undefined DAT_01ccd0b0;
undefined DAT_01cd1fb0;
undefined DAT_01cd8cb0;
undefined DAT_01ccd1b0;
undefined DAT_01ccd2b0;
undefined DAT_01ccd3b0;
undefined DAT_01ccd4b0;
undefined DAT_01ccd5b0;
undefined DAT_01ccd6b0;
undefined DAT_01ce5fb0;
undefined DAT_01ccd7b0;
undefined DAT_01ce75b0;
undefined DAT_01ccdab0;
undefined DAT_01ccdbb0;
undefined DAT_01ce3bb0;
undefined DAT_01ce7db0;
undefined DAT_01ccdcb0;
undefined DAT_01ccddb0;
undefined DAT_01cce3b0;
undefined DAT_01ce89b0;
undefined DAT_01cce0b0;
undefined DAT_01cce1b0;
undefined DAT_01cd57b0;
undefined DAT_01cce2b0;
undefined DAT_01cce4b0;
undefined DAT_01cce5b0;
undefined DAT_01cd1ab0;
undefined DAT_01cd93b0;
undefined DAT_01cce7b0;
undefined DAT_01cce8b0;
undefined DAT_01cce9b0;
undefined DAT_01ce6cb0;
undefined DAT_01cceab0;
undefined DAT_01ccecb0;
undefined DAT_01ccedb0;
undefined DAT_01cceeb0;
undefined DAT_01ccefb0;
undefined DAT_01cd22b0;
undefined DAT_01ce50b0;
undefined DAT_01ce99b0;
undefined DAT_01ccf0b0;
undefined DAT_01ccf1b0;
undefined DAT_01ccf2b0;
undefined DAT_01ccf3b0;
undefined DAT_01ccf4b0;
undefined DAT_01cdf0b0;
undefined DAT_01ccf5b0;
undefined DAT_01cddab0;
undefined DAT_01ce8cb0;
undefined DAT_01cd3eb0;
undefined DAT_01cd1bb0;
undefined DAT_01cd51b0;
undefined DAT_01cd95b0;
undefined DAT_01ccf6b0;
undefined DAT_01ccf7b0;
undefined DAT_01ce22b0;
undefined DAT_01ce31b0;
undefined DAT_01ce32b0;
undefined DAT_01ccf8b0;
undefined DAT_01ccf9b0;
undefined DAT_01ccfab0;
undefined DAT_01cdb4b0;
undefined DAT_01ce77b0;
undefined DAT_01cde5b0;
undefined DAT_01ccfcb0;
undefined DAT_01ccfdb0;
undefined DAT_01ccfeb0;
undefined DAT_01ccffb0;
undefined DAT_01cd00b0;
undefined DAT_01ce91b0;
undefined DAT_01ce92b0;
undefined DAT_01cd01b0;
undefined DAT_01cd02b0;
undefined DAT_01cd03b0;
undefined DAT_01ce90b0;
undefined DAT_01cd04b0;
undefined DAT_01cd26b0;
undefined DAT_01cd05b0;
undefined DAT_01cdccb0;
undefined DAT_01cd06b0;
undefined DAT_01cd09b0;
undefined DAT_01cd0ab0;
undefined DAT_01cddfb0;
undefined DAT_01cd0bb0;
undefined DAT_01cd0cb0;
undefined DAT_01ce12b0;
undefined DAT_01ce13b0;
undefined DAT_01cd0db0;
undefined DAT_01cd0eb0;
undefined DAT_01cd0fb0;
undefined DAT_01cd10b0;
undefined DAT_01cd11b0;
undefined DAT_01cd12b0;
undefined DAT_01cd14b0;
undefined DAT_01cd13b0;
undefined DAT_01cd15b0;
undefined DAT_01ce94b0;
undefined DAT_01cd16b0;
undefined DAT_01cd17b0;
undefined DAT_01cd18b0;
undefined DAT_01cd8eb0;
undefined DAT_01cd40b0;
undefined DAT_01cd19b0;
undefined DAT_01cd1cb0;
undefined DAT_01cddbb0;
undefined DAT_01cdc7b0;
undefined DAT_01ce95b0;
undefined DAT_01cd1db0;
undefined DAT_01cd1eb0;
undefined DAT_01cdadb0;
undefined DAT_01ce9bb0;
undefined DAT_01cd20b0;
undefined DAT_01cd36b0;
undefined DAT_01cd21b0;
undefined DAT_01cd23b0;
undefined DAT_01cd24b0;
undefined DAT_01cd25b0;
undefined DAT_01cd28b0;
undefined DAT_01cd29b0;
undefined DAT_01cd2ab0;
undefined DAT_01cd2bb0;
undefined DAT_01cd60b0;
undefined DAT_01cda5b0;
undefined DAT_01cd2cb0;
undefined DAT_01ce60b0;
undefined DAT_01ce61b0;
undefined DAT_01cd33b0;
undefined DAT_01cd2db0;
undefined DAT_01cd31b0;
undefined DAT_01cd2eb0;
undefined DAT_01ce0bb0;
undefined DAT_01cd2fb0;
undefined DAT_01cd30b0;
undefined DAT_01cdc8b0;
undefined DAT_01cd32b0;
undefined DAT_01cd34b0;
undefined DAT_01ce04b0;
undefined DAT_01cd35b0;
undefined DAT_01cda2b0;
undefined DAT_01cdbeb0;
undefined DAT_01cd38b0;
undefined DAT_01ce7cb0;
undefined DAT_01cd39b0;
undefined DAT_01cd3ab0;
undefined DAT_01cd3bb0;
undefined DAT_01cd3cb0;
undefined DAT_01cd3db0;
undefined DAT_01cd3fb0;
undefined DAT_01cd41b0;
undefined DAT_01cd42b0;
undefined DAT_01cd43b0;
undefined DAT_01cdedb0;
undefined DAT_01cd44b0;
undefined DAT_01ce84b0;
undefined DAT_01cd45b0;
undefined DAT_01cd46b0;
undefined DAT_01ce24b0;
undefined DAT_01cd47b0;
undefined DAT_01cd48b0;
undefined DAT_01ce27b0;
undefined DAT_01cdb6b0;
undefined DAT_01cd49b0;
undefined DAT_01ce74b0;
undefined DAT_01cd4db0;
undefined DAT_01cd4bb0;
undefined DAT_01cd4cb0;
undefined DAT_01cd4eb0;
undefined DAT_01cd4fb0;
undefined DAT_01ce1cb0;
undefined DAT_01cd50b0;
undefined DAT_01cd52b0;
undefined DAT_01cd53b0;
undefined DAT_01cd54b0;
undefined DAT_01cd55b0;
undefined DAT_01cd56b0;
undefined DAT_01cd59b0;
undefined DAT_01cd5bb0;
undefined DAT_01cd5db0;
undefined DAT_01cd5eb0;
undefined DAT_01cda3b0;
undefined DAT_01cd5fb0;
undefined DAT_01cd61b0;
undefined DAT_01cd62b0;
undefined DAT_01ce7fb0;
undefined DAT_01ce81b0;
undefined DAT_01ce82b0;
undefined DAT_01ce86b0;
undefined DAT_01ce85b0;
undefined DAT_01cd63b0;
undefined DAT_01cd64b0;
undefined DAT_01cd65b0;
undefined DAT_01cd66b0;
undefined DAT_01cd67b0;
undefined DAT_01cd68b0;
undefined DAT_01ce15b0;
undefined DAT_01cd69b0;
undefined DAT_01cd6ab0;
undefined DAT_01cdddb0;
undefined DAT_01cddeb0;
undefined DAT_01cde0b0;
undefined DAT_01cde2b0;
undefined DAT_01cd6bb0;
undefined DAT_01cd6cb0;
undefined DAT_01cd6eb0;
undefined DAT_01cd6fb0;
undefined DAT_01cddcb0;
undefined DAT_01cd6db0;
undefined DAT_01cde6b0;
undefined DAT_01cdebb0;
undefined DAT_01cd70b0;
undefined DAT_01cd71b0;
undefined DAT_01cd72b0;
undefined DAT_01cd73b0;
undefined DAT_01cd74b0;
undefined DAT_01cdabb0;
undefined DAT_01cd75b0;
undefined DAT_01cd76b0;
undefined DAT_01cd77b0;
undefined DAT_01cd78b0;
undefined DAT_01ceaeb0;
undefined DAT_01cdb1b0;
undefined DAT_01cd79b0;
undefined DAT_01cd7ab0;
undefined DAT_01cd7bb0;
undefined DAT_01cd7db0;
undefined DAT_01ce78b0;
undefined DAT_01cd7eb0;
undefined DAT_01cd80b0;
undefined DAT_01cd81b0;
undefined DAT_01cd82b0;
undefined DAT_01cd84b0;
undefined DAT_01cd85b0;
undefined DAT_01cd86b0;
undefined DAT_01cd8db0;
undefined DAT_01cd8fb0;
undefined DAT_01cd90b0;
undefined DAT_01cd91b0;
undefined DAT_01ce3eb0;
undefined DAT_01cd92b0;
undefined DAT_01cd94b0;
undefined DAT_01cd96b0;
undefined DAT_01cd97b0;
undefined DAT_01cd98b0;
undefined DAT_01cd99b0;
undefined DAT_01cd9ab0;
undefined DAT_01ce6db0;
undefined DAT_01cd9bb0;
undefined DAT_01ce6fb0;
undefined DAT_01cd9cb0;
undefined DAT_01cd9db0;
undefined DAT_01cd9fb0;
undefined DAT_01cda0b0;
undefined DAT_01cd9eb0;
undefined DAT_01cda1b0;
undefined DAT_01cda4b0;
undefined DAT_01cda6b0;
undefined DAT_01cda7b0;
undefined DAT_01cda8b0;
undefined DAT_01cda9b0;
undefined DAT_01cdaab0;
undefined DAT_01cdbab0;
undefined DAT_01ce69b0;
undefined DAT_01cdacb0;
undefined DAT_01cdafb0;
undefined DAT_01cdb2b0;
undefined DAT_01cdb3b0;
undefined DAT_01cdb5b0;
undefined DAT_01cdb7b0;
undefined DAT_01cdb9b0;
undefined DAT_01cdbbb0;
undefined DAT_01cdbcb0;
undefined DAT_01cdbdb0;
undefined DAT_01cdbfb0;
undefined DAT_01cdc0b0;
undefined DAT_01cdc1b0;
undefined DAT_01cdc2b0;
undefined DAT_01cdc3b0;
undefined DAT_01cdc4b0;
undefined DAT_01cdc5b0;
undefined DAT_01cdc6b0;
undefined DAT_01cdcab0;
undefined DAT_01cdcbb0;
undefined DAT_01cdcdb0;
undefined DAT_01cdd9b0;
undefined DAT_01cdceb0;
undefined DAT_01cdd0b0;
undefined DAT_01cdd1b0;
undefined DAT_01cdd2b0;
undefined DAT_01cdd3b0;
undefined DAT_01cdd4b0;
undefined DAT_01cdd5b0;
undefined DAT_01cdd6b0;
undefined DAT_01cdd7b0;
undefined DAT_01cdd8b0;
undefined DAT_01cde3b0;
undefined DAT_01cde4b0;
undefined DAT_01cdecb0;
undefined DAT_01cde7b0;
undefined DAT_01cde8b0;
undefined DAT_01cde9b0;

undefined8 FUN_01316274(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01316284(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316290(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013162a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013162ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013162bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013162c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_013162d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013162e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_013162f4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41c6b852;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01316318(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01316354(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    fVar4 = -0.0;
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.7;
      if ((fVar5 < 1.0) && (fVar6 = -0.2, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.7;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01ce55b0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01ce55b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ce55b0 + (ulong)uVar3 * 4));
        }
      }
      fVar7 = fVar4;
      if ((fVar5 < 0.4) && (fVar7 = 1.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.3;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = fVar4;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar7 = *(float *)(&DAT_01cc9cb0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01cc9cb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc9cb0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = param_1;
      param_3[2] = fVar7;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = fVar4;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = fVar4;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01cc9db0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01cc9db0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc9db0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_01316500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01316510(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 0.1;
      if ((fVar4 < 0.2) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.2) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.1;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.2) * 64.0;
          fVar5 = *(float *)(&DAT_01ce5eb0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01ce5eb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ce5eb0 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * 15.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_013165c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013165d4(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x3f80000000000000;
  return 1;
}




undefined8 FUN_013165ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_013165fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_0131660c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_0131661c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0131662c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 4.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01316698(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




int FUN_013166b0(int param_1,float *param_2)

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




int FUN_0131672c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.39999998 + 0.6;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013167ac(int param_1,undefined4 *param_2)

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




void FUN_013167cc(int param_1,undefined4 *param_2)

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




uint FUN_013167f0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0131682c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01316868(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = -0.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01ce9cb0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01ce9cb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ce9cb0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01316928(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01316938(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316944(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01316960(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0131696c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0131697c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316988(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01316998(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013169a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40c00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_013169b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013169c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_013169d0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41c6b852;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_013169f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01316a30(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01cc9eb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cc9eb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc9eb0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01316ae0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01316af0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316afc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316b08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01316b18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316b24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01316b34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316b40(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01316b50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316b5c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01316b6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316b78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




void FUN_01316b8c(int param_1,undefined4 *param_2)

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




void FUN_01316bac(int param_1,undefined4 *param_2)

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




void FUN_01316bcc(int param_1,undefined4 *param_2)

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




void FUN_01316bec(int param_1,undefined4 *param_2)

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




void FUN_01316c0c(int param_1,undefined8 *param_2)

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




void FUN_01316c38(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar6 < 1.0) && (fVar5 = 0.3, 0.9 < fVar6)) {
        fVar6 = (fVar6 + -0.9) / 0.100000024;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01cc9fb0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01cc9fb0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc9fb0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01316d10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01316d20(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.9 < fVar5)) {
        fVar5 = (fVar5 + -0.9) / 0.100000024;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01cca0b0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01cca0b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cca0b0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01316ddc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316de8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01316df8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01316e08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_01316e18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316e24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01316e34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_01316e44(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f8000003dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01316e68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01316e74(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01316ef0(int param_1,undefined4 *param_2)

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




void FUN_01316f10(int param_1,undefined4 *param_2)

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




void FUN_01316f30(int param_1,undefined4 *param_2)

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




void FUN_01316f50(int param_1,undefined4 *param_2)

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




void FUN_01316f70(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f800000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01316f9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_01316fac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01316fb8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01316fc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_01316fd8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f8000003dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01316ffc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}

