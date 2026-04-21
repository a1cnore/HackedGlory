// functions/014d2 — 75 functions
#include "libGameKindred.h"




undefined8 FUN_014d2008(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_014d2018(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2024(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_014d2038(int param_1,undefined4 *param_2)

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




void FUN_014d2058(int param_1,undefined4 *param_2)

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




void FUN_014d207c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar4 = 0.3, 0.2 < fVar5)) {
        fVar5 = (fVar5 + -0.2) / 0.8;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d2a950 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d2a950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2a950 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, -0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01d2aa50 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01d2aa50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2aa50 + (ulong)uVar3 * 4));
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




undefined8 FUN_014d21bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




uint FUN_014d21cc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar4 = (ulong)param_2;
    do {
      fVar6 = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.2 < fVar5)) {
        fVar5 = (fVar5 + -0.2) / 0.8;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar6 = *(float *)(&DAT_01d4da50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d4da50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d4da50 + (ulong)uVar3 * 4));
        }
      }
      iVar2 = rand();
      uVar4 = uVar4 - 1;
      *param_3 = fVar6 * ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 3.0);
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_014d2314(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014d2330(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d233c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014d234c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_014d235c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014d236c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2378(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}



undefined DAT_01d2ab50;
undefined DAT_01d2ad50;
undefined DAT_01d2ac50;
undefined DAT_01d3e450;
undefined DAT_01d4d150;
undefined DAT_01d3ed50;
undefined DAT_01d4a950;
undefined DAT_01d4de50;
undefined DAT_01d2ae50;
undefined DAT_01d44350;
undefined DAT_01d2af50;
undefined DAT_01d35e50;
undefined DAT_01d3f850;
undefined DAT_01d44e50;
undefined DAT_01d47c50;
undefined DAT_01d32f50;
undefined DAT_01d32d50;
undefined DAT_01d32e50;
undefined DAT_01d33050;
undefined DAT_01d45250;
undefined DAT_01d4d850;
undefined DAT_01d35c50;
undefined DAT_01d4a450;
undefined DAT_01d3d350;
undefined DAT_01d3f750;
undefined DAT_01d4ce50;
undefined DAT_01d38850;
undefined DAT_01d49c50;
undefined DAT_01d2b050;
undefined DAT_01d2b150;
undefined DAT_01d2b250;
undefined DAT_01d2b350;
undefined DAT_01d44250;
undefined DAT_01d2b450;
undefined DAT_01d2b550;
undefined DAT_01d2b650;
undefined DAT_01d4ca50;
undefined DAT_01d3b650;
undefined DAT_01d46650;
undefined DAT_01d3eb50;
undefined DAT_01d35250;
undefined DAT_01d4a550;
undefined DAT_01d37250;
undefined DAT_01d4c950;
undefined DAT_01d49450;
undefined DAT_01d4b650;
undefined DAT_01d4d550;
undefined DAT_01d3ea50;
undefined DAT_01d4cd50;
undefined DAT_01d2b750;
undefined DAT_01d3ce50;
undefined DAT_01d2b850;
undefined DAT_01d4a350;
undefined DAT_01d4c650;
undefined DAT_01d49250;
undefined DAT_01d31650;
undefined DAT_01d31750;
undefined DAT_01d3f350;
undefined DAT_01d3cd50;
undefined DAT_01d4cf50;
undefined DAT_01d4af50;
undefined DAT_01d35f50;
undefined DAT_01d48650;
undefined DAT_01d48750;
undefined DAT_01d4b850;
undefined DAT_01d40150;
undefined DAT_01d40250;
undefined DAT_01d2b950;
undefined DAT_01d46f50;
undefined DAT_01d46950;
undefined DAT_01d4b550;
undefined DAT_01d4b150;
undefined DAT_01d3ab50;
undefined DAT_01d3fc50;
undefined DAT_01d2ba50;
undefined DAT_01d2bb50;
undefined DAT_01d2bc50;
undefined DAT_01d4d050;
undefined DAT_01d2bd50;
undefined DAT_01d4c750;
undefined DAT_01d2be50;
undefined DAT_01d2bf50;
undefined DAT_01d2c050;
undefined DAT_01d2c150;
undefined DAT_01d2c250;
undefined DAT_01d2c350;
undefined DAT_01d4c150;
undefined DAT_01d2c450;
undefined DAT_01d2c650;
undefined DAT_01d2c550;
undefined DAT_01d4a150;
undefined DAT_01d2ca50;
undefined DAT_01d2c750;
undefined DAT_01d2c850;
undefined DAT_01d2c950;
undefined DAT_01d2cb50;
undefined DAT_01d2cc50;
undefined DAT_01d2d350;
undefined DAT_01d2cd50;
undefined DAT_01d2cf50;
undefined DAT_01d2d050;
undefined DAT_01d2d150;
undefined DAT_01d2ce50;
undefined DAT_01d2d250;
undefined DAT_01d2d450;
undefined DAT_01d43b50;
undefined DAT_01d2d550;
undefined DAT_01d4c850;
undefined DAT_01d49d50;
undefined DAT_01d2d650;
undefined DAT_01d2d750;
undefined DAT_01d2d850;
undefined DAT_01d2d950;
undefined DAT_01d34050;
undefined DAT_01d2da50;
undefined DAT_01d2db50;
undefined DAT_01d2dd50;
undefined DAT_01d2de50;
undefined DAT_01d4d650;
undefined DAT_01d2dc50;
undefined DAT_01d2df50;
undefined DAT_01d2e050;
undefined DAT_01d37050;
undefined DAT_01d2e150;
undefined DAT_01d3c750;
undefined DAT_01d2e250;
undefined DAT_01d2e350;
undefined DAT_01d2e450;
undefined DAT_01d2e550;
undefined DAT_01d2e650;
undefined DAT_01d2e750;
undefined DAT_01d2e850;
undefined DAT_01d2e950;
undefined DAT_01d2ea50;
undefined DAT_01d2eb50;
undefined DAT_01d2ec50;
undefined DAT_01d43c50;
undefined DAT_01d4dd50;
undefined DAT_01d43a50;
undefined DAT_01d2ed50;
undefined DAT_01d2ee50;
undefined DAT_01d2ef50;
undefined DAT_01d2f050;
undefined DAT_01d2f150;
undefined DAT_01d43d50;
undefined DAT_01d2f250;
undefined DAT_01d43f50;
undefined DAT_01d4ad50;
undefined DAT_01d47f50;
undefined DAT_01d2f350;
undefined DAT_01d3cb50;
undefined DAT_01d44450;
undefined DAT_01d3cf50;
undefined DAT_01d3cc50;
undefined DAT_01d3d050;
undefined DAT_01d4b450;
undefined DAT_01d49950;
undefined DAT_01d2f450;
undefined DAT_01d2f550;
undefined DAT_01d49750;
undefined DAT_01d3ae50;
undefined DAT_01d38d50;
undefined DAT_01d2f650;
undefined DAT_01d2f750;
undefined DAT_01d3b850;
undefined DAT_01d2f850;
undefined DAT_01d2f950;
undefined DAT_01d2fa50;
undefined DAT_01d47750;
undefined DAT_01d2fb50;
undefined DAT_01d2fc50;
undefined DAT_01d2fd50;
undefined DAT_01d2fe50;
undefined DAT_01d2ff50;
undefined DAT_01d4c450;
undefined DAT_01d30050;
undefined DAT_01d4b750;
undefined DAT_01d43450;
undefined DAT_01d30150;
undefined DAT_01d30250;
undefined DAT_01d30350;
undefined DAT_01d3e550;
undefined DAT_01d43650;
undefined DAT_01d38750;
undefined DAT_01d43150;
undefined DAT_01d37d50;
undefined DAT_01d30450;
undefined DAT_01d30550;
undefined DAT_01d30650;
undefined DAT_01d30750;
undefined DAT_01d4be50;
undefined DAT_01d30850;
undefined DAT_01d30950;
undefined DAT_01d30a50;
undefined DAT_01d30b50;
undefined DAT_01d30c50;
undefined DAT_01d4d450;
undefined DAT_01d30e50;
undefined DAT_01d30d50;
undefined DAT_01d30f50;
undefined DAT_01d31050;
undefined DAT_01d44550;
undefined DAT_01d31150;
undefined DAT_01d3fa50;
undefined DAT_01d31450;
undefined DAT_01d31250;
undefined DAT_01d31350;
undefined DAT_01d31550;
undefined DAT_01d3a350;
undefined DAT_01d47650;
undefined DAT_01d38a50;
undefined DAT_01d3bb50;
undefined DAT_01d31850;
undefined DAT_01d31950;
undefined DAT_01d31a50;
undefined DAT_01d4df50;
undefined DAT_01d31b50;
undefined DAT_01d31c50;
undefined DAT_01d31d50;
undefined DAT_01d31e50;
undefined DAT_01d32150;
undefined DAT_01d31f50;
undefined DAT_01d32050;
undefined DAT_01d32250;
undefined DAT_01d32850;
undefined DAT_01d32350;
undefined DAT_01d32450;
undefined DAT_01d32550;
undefined DAT_01d32650;
undefined DAT_01d32750;
undefined DAT_01d32950;
undefined DAT_01d32a50;
undefined DAT_01d32b50;
undefined4 DAT_01d2a728;
undefined DAT_01d32c50;
undefined DAT_01d45450;
undefined DAT_01d45550;
undefined DAT_01d43250;
undefined DAT_01d33150;
undefined DAT_01d33250;
undefined DAT_01d33350;
undefined DAT_01d33450;
undefined DAT_01d33550;
undefined DAT_01d33650;
undefined DAT_01d33850;
undefined DAT_01d33950;
undefined DAT_01d33750;
undefined DAT_01d33a50;
undefined DAT_01d33b50;
undefined DAT_01d4ae50;
undefined DAT_01d33c50;
undefined DAT_01d33d50;
undefined DAT_01d33e50;
undefined DAT_01d33f50;
undefined DAT_01d3f650;
undefined4 DAT_01d2a730;
undefined DAT_01d34150;
undefined DAT_01d34250;
undefined DAT_01d34350;
undefined DAT_01d34450;
undefined DAT_01d34550;
undefined DAT_01d34650;
undefined DAT_01d34750;
undefined DAT_01d3c950;
undefined DAT_01d34850;
undefined DAT_01d34950;
undefined DAT_01d34a50;
undefined DAT_01d48e50;
undefined DAT_01d34b50;
undefined DAT_01d34c50;
undefined DAT_01d34d50;
undefined DAT_01d34e50;
undefined DAT_01d34f50;
undefined DAT_01d46150;
undefined DAT_01d35050;
undefined DAT_01d35150;
undefined DAT_01d41550;
undefined DAT_01d41650;
undefined DAT_01d41750;
undefined DAT_01d35350;
undefined DAT_01d35450;
undefined DAT_01d35550;
undefined DAT_01d35650;
undefined DAT_01d35750;
undefined DAT_01d4bc50;
undefined DAT_01d35850;
undefined DAT_01d35950;
undefined DAT_01d35a50;
undefined DAT_01d3ee50;
undefined DAT_01d35b50;
undefined DAT_01d3c350;
undefined DAT_01d35d50;
undefined DAT_01d36050;
undefined DAT_01d3e250;
undefined DAT_01d4bd50;
undefined DAT_01d47e50;
undefined DAT_01d36150;
undefined DAT_01d36250;
undefined DAT_01d36350;
undefined DAT_01d36450;
undefined DAT_01d36550;
undefined DAT_01d36650;
undefined DAT_01d2a740;
undefined DAT_01d36750;
undefined DAT_01d3dc50;
undefined DAT_01d36850;
undefined DAT_01d36950;
undefined DAT_01d48150;
undefined DAT_01d36a50;
undefined DAT_01d36b50;
undefined DAT_01d36c50;
undefined DAT_01d36d50;
undefined DAT_01d36e50;
undefined DAT_01d36f50;
undefined DAT_01d37150;
undefined DAT_01d37350;
undefined DAT_01d37450;
undefined DAT_01d37550;
undefined DAT_01d37650;
undefined DAT_01d37750;
undefined DAT_01d37850;
undefined DAT_01d37950;
undefined DAT_01d37a50;
undefined DAT_01d37c50;
undefined DAT_01d37b50;
undefined DAT_01d37e50;
undefined DAT_01d37f50;
undefined DAT_01d38050;
undefined DAT_01d38150;
undefined DAT_01d38250;
undefined DAT_01d38350;
undefined DAT_01d38450;
undefined DAT_01d38550;
undefined DAT_01d38650;
undefined DAT_01d39850;
undefined DAT_01d38950;
undefined DAT_01d38b50;
undefined DAT_01d38c50;
undefined DAT_01d4ab50;
undefined DAT_01d38e50;
undefined DAT_01d39350;
undefined DAT_01d38f50;
undefined DAT_01d39050;
undefined DAT_01d39150;
undefined DAT_01d39250;
undefined DAT_01d39450;
undefined DAT_01d39550;
undefined DAT_01d39650;
undefined DAT_01d39750;
undefined DAT_01d39950;
undefined DAT_01d39a50;
undefined DAT_01d39b50;
undefined DAT_01d39c50;
undefined DAT_01d39d50;
undefined DAT_01d39e50;
undefined DAT_01d3a250;
undefined DAT_01d39f50;
undefined DAT_01d3a050;
undefined DAT_01d3a150;
undefined DAT_01d3a450;
undefined DAT_01d3a550;
undefined DAT_01d3a650;
undefined DAT_01d3a750;
undefined DAT_01d42450;
undefined DAT_01d3a850;
undefined DAT_01d3a950;
undefined DAT_01d3aa50;
undefined DAT_01d3ac50;
undefined DAT_01d3ad50;
undefined DAT_01d42350;
undefined DAT_01d3d150;
undefined DAT_01d3e750;
undefined DAT_01d3e850;
undefined DAT_01d3af50;
undefined DAT_01d3b050;
undefined DAT_01d3b150;
undefined DAT_01d3b250;
undefined DAT_01d3b350;
undefined DAT_01d3b450;
undefined DAT_01d3b550;
undefined DAT_01d4c550;
undefined DAT_01d3b750;
undefined DAT_01d4a850;
undefined DAT_01d3b950;
undefined DAT_01d4d950;
undefined DAT_01d3c150;
undefined DAT_01d3ba50;
undefined DAT_01d3bc50;
undefined DAT_01d3bd50;
undefined DAT_01d3be50;
undefined DAT_01d3bf50;
undefined DAT_01d3c050;
undefined DAT_01d3c250;
undefined DAT_01d3c450;
undefined DAT_01d3c550;
undefined DAT_01d46550;
undefined DAT_01d3c650;
undefined DAT_01d3c850;
undefined DAT_01d3ca50;
undefined DAT_01d46e50;
undefined DAT_01d3d250;
undefined DAT_01d3d450;
undefined DAT_01d3d550;
undefined DAT_01d3d650;
undefined DAT_01d3d750;
undefined DAT_01d3d850;
undefined DAT_01d3d950;
undefined DAT_01d4a050;
undefined DAT_01d3da50;
undefined DAT_01d3db50;
undefined DAT_01d3dd50;
undefined DAT_01d3de50;
undefined DAT_01d3df50;
undefined DAT_01d3e050;
undefined DAT_01d3e150;
undefined DAT_01d3e350;
undefined DAT_01d3e650;
undefined DAT_01d3e950;
undefined DAT_01d3ec50;
undefined DAT_01d3ef50;
undefined DAT_01d3f050;
undefined DAT_01d3f150;
undefined DAT_01d3f250;
undefined DAT_01d3f450;
undefined DAT_01d3f550;
undefined DAT_01d3f950;
undefined DAT_01d3fb50;

int FUN_014d2388(int param_1,float *param_2)

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




int FUN_014d2404(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.25;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014d247c(int param_1,undefined4 *param_2)

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




uint FUN_014d249c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014d24d8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d2ab50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d2ab50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2ab50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_014d2590(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014d25a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_014d25b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_014d25bc(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x41f00000,4);
    uVar6 = NEON_fmov(0x41700000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar2 = rand();
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) -
                          (float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20),
                          (float)uVar6 - (float)uVar4 * 4.656613e-10 * (float)uVar5);
      iVar1 = iVar1 + -1;
      *(float *)(param_2 + 1) = (float)iVar2 * 4.656613e-10 * -30.0 + 15.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014d267c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




int FUN_014d268c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 10.0 + 5.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014d2704(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_014d2714(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_014d2724(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014d2790(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




undefined8 FUN_014d27a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_014d27b4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.15 + 0.15;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014d2824(int param_1,undefined4 *param_2)

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




void FUN_014d2844(int param_1,undefined4 *param_2)

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




undefined8 FUN_014d2868(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_014d2878(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2884(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014d2894(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_014d28a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3fa000003f19999a;
  return 1;
}




undefined8 FUN_014d28b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_014d28c8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.25 + 0.15;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014d2944(int param_1,undefined4 *param_2)

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




void FUN_014d2964(int param_1,undefined4 *param_2)

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




void FUN_014d2988(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d2ad50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d2ad50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2ad50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_014d2a40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014d2a50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2a5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43e10000;
  return 1;
}




undefined8 FUN_014d2a6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014d2a7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2a88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014d2a98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41000000;
  return 1;
}




undefined8 FUN_014d2aa8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014d2ab8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_014d2acc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_014d2adc(int param_1,float *param_2)

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




undefined8 FUN_014d2b58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




void FUN_014d2b6c(int param_1,undefined4 *param_2)

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




uint FUN_014d2b8c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014d2bc8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d2ad50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d2ad50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2ad50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_014d2c80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_014d2c90(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.2;
      if ((fVar5 < 1.0) && (fVar4 = 14.0, 0.2 < fVar5)) {
        fVar5 = (fVar5 + -0.2) / 0.8;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d2ac50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d2ac50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2ac50 + (ulong)uVar3 * 4));
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




undefined8 FUN_014d2d50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43e10000;
  return 1;
}




undefined8 FUN_014d2d60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014d2d70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2d7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_014d2d8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014d2d98(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014d2da8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_014d2dbc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_014d2dcc(int param_1,float *param_2)

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




int FUN_014d2e48(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.1 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014d2eb8(int param_1,undefined4 *param_2)

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




uint FUN_014d2ed8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014d2f14(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    fVar6 = (param_1 + -0.05) / 0.10000001;
    uVar5 = (uint)(fVar6 * 64.0);
    fVar6 = fVar6 * 64.0;
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.15;
    fVar7 = 1.0;
    if (bVar3) {
      fVar7 = 0.0;
    }
    uVar4 = (ulong)param_2;
    if (bVar3 && 0.05 < param_1) {
      fVar7 = 1.0;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.05 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d4db50 + (ulong)uVar5 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01d4db50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d4db50 + (ulong)uVar5 * 4));
      }
      *param_3 = fVar8;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar9 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar8 = -0.0;
      if ((fVar9 < 1.0) && (fVar8 = 0.0, 0.0 < fVar9)) {
        uVar2 = (int)(fVar9 * 64.0) + 1;
        fVar8 = -0.0;
        if (uVar2 < 0x40) {
          fVar8 = *(float *)(&DAT_01d2ad50 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01d2ad50 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01d2ad50 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      param_3[3] = fVar8;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 4;
    } while (uVar4 != 0);
  }
  return;
}

