// functions/0162e — 93 functions
#include "libGameKindred.h"




undefined8 FUN_0162e008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162e014(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0162e024(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01d86550 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d86550 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d86550 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 25.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0162e0c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0162e0d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162e0e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0162e0f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




void FUN_0162e104(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4040000041000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_0162e128(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc25c0000;
  return 1;
}




void FUN_0162e138(int param_1,undefined4 *param_2)

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




uint FUN_0162e158(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0162e194(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0162e1d0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0162e20c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0162e248(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_01d86650 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d86650 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d86650 + (ulong)uVar3 * 4));
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




undefined8 FUN_0162e30c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162e31c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_0162e330(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162e33c(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xbf80000000000000;
  return 1;
}




undefined8 FUN_0162e354(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_0162e364(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_0162e374(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162e380(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0162e390(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 11.0 + -1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0162e408(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.3 + 0.2,
                          (float)uVar4 * 4.656613e-10 * 0.3 + 0.2);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0162e49c(int param_1,float *param_2)

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




int FUN_0162e518(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.8 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0162e598(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42820000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}



undefined DAT_01d86750;
undefined DAT_01d70f50;
undefined DAT_01d7ee50;
undefined DAT_01d71050;
undefined DAT_01d71150;
undefined DAT_01d75850;
undefined DAT_01d75950;
undefined DAT_01d75a50;
undefined DAT_01d71250;
undefined DAT_01d77850;
undefined DAT_01d75c50;
undefined DAT_01d77a50;
undefined DAT_01d71350;
undefined DAT_01d8e050;
undefined DAT_01d78150;
undefined DAT_01d72b50;
undefined DAT_01d8fb50;
undefined DAT_01d71550;
undefined DAT_01d71650;
undefined DAT_01d71750;
undefined DAT_01d72a50;
undefined DAT_01d8ea50;
undefined DAT_01d71950;
undefined DAT_01d71a50;
undefined DAT_01d71b50;
undefined DAT_01d71c50;
undefined DAT_01d71d50;
undefined DAT_01d76650;
undefined DAT_01d72050;
undefined DAT_01d71e50;
undefined DAT_01d71f50;
undefined DAT_01d8fc50;
undefined DAT_01d72150;
undefined DAT_01d72250;
undefined DAT_01d72350;
undefined DAT_01d72450;
undefined DAT_01d72550;
undefined DAT_01d72650;
undefined DAT_01d72750;
undefined DAT_01d72850;
undefined DAT_01d72950;
undefined DAT_01d72c50;
undefined DAT_01d72d50;
undefined DAT_01d72e50;
undefined DAT_01d72f50;
undefined DAT_01d73050;
undefined DAT_01d7de50;
undefined DAT_01d73150;
undefined DAT_01d7b850;
undefined DAT_01d92e50;
undefined DAT_01d84750;
undefined DAT_01d80f50;
undefined DAT_01d73250;
undefined DAT_01d73350;
undefined DAT_01d73450;
undefined DAT_01d8f450;
undefined DAT_01d74250;
undefined DAT_01d87d50;
undefined DAT_01d86f50;
undefined DAT_01d73550;
undefined DAT_01d81550;
undefined DAT_01d87150;
undefined DAT_01d78b50;
undefined DAT_01d73650;
undefined DAT_01d73750;
undefined DAT_01d73850;
undefined DAT_01d73a50;
undefined DAT_01d80850;
undefined DAT_01d73b50;
undefined DAT_01d73c50;
undefined DAT_01d77d50;
undefined DAT_01d73d50;
undefined DAT_01d73e50;
undefined DAT_01d73f50;
undefined DAT_01d74050;
undefined DAT_01d74150;
undefined DAT_01d74450;
undefined DAT_01d74550;
undefined DAT_01d74650;
undefined DAT_01d74750;
undefined DAT_01d74850;
undefined DAT_01d74950;
undefined DAT_01d74a50;
undefined DAT_01d74b50;
undefined DAT_01d74c50;
undefined DAT_01d74d50;
undefined DAT_01d74e50;
undefined DAT_01d8a450;
undefined DAT_01d7f450;
undefined DAT_01d7f550;
undefined DAT_01d74f50;
undefined DAT_01d8ce50;
undefined DAT_01d75150;
undefined DAT_01d75050;
undefined DAT_01d84f50;
undefined DAT_01d75250;
undefined DAT_01d75350;
undefined DAT_01d75450;
undefined DAT_01d75550;
undefined DAT_01d75650;
undefined DAT_01d75750;
undefined DAT_01d75b50;
undefined DAT_01d75d50;
undefined DAT_01d75e50;
undefined DAT_01d75f50;
undefined DAT_01d76050;
undefined DAT_01d76150;
undefined DAT_01d76250;
undefined DAT_01d76350;
undefined DAT_01d95150;
undefined DAT_01d76450;
undefined DAT_01d76550;
undefined DAT_01d84050;
undefined DAT_01d7dd50;
undefined DAT_01d7a750;
undefined DAT_01d7a850;
undefined DAT_01d84550;
undefined DAT_01d76750;
undefined DAT_01d8f250;
undefined DAT_01d87c50;
undefined DAT_01d8f150;
undefined DAT_01d87550;
undefined DAT_01d76850;
undefined DAT_01d93450;
undefined DAT_01d76950;
undefined DAT_01d76a50;
undefined DAT_01d76b50;
undefined DAT_01d7c850;
undefined DAT_01d7ec50;
undefined DAT_01d93a50;
undefined DAT_01d8c050;
undefined DAT_01d76c50;
undefined DAT_01d76d50;
undefined DAT_01d7d750;
undefined DAT_01d82450;
undefined DAT_01d76f50;
undefined DAT_01d77050;
undefined DAT_01d77150;
undefined DAT_01d77250;
undefined DAT_01d77350;
undefined DAT_01d77450;
undefined DAT_01d8ef50;
undefined DAT_01d77550;
undefined DAT_01d77650;
undefined DAT_01d77950;
undefined DAT_01d77e50;
undefined DAT_01d78650;
undefined DAT_01d77b50;
undefined DAT_01d77c50;
undefined DAT_01d77f50;
undefined DAT_01d81850;
undefined DAT_01d78050;
undefined DAT_01d78250;
undefined DAT_01d7a950;
undefined DAT_01d78550;
undefined DAT_01d81e50;
undefined DAT_01d78750;
undefined DAT_01d85850;
undefined DAT_01d78850;
undefined DAT_01d78950;
undefined DAT_01d78a50;
undefined DAT_01d78c50;
undefined DAT_01d7c150;
undefined DAT_01d78d50;
undefined DAT_01d78e50;
undefined DAT_01d78f50;
undefined DAT_01d79150;
undefined DAT_01d92950;
undefined DAT_01d79250;
undefined DAT_01d79350;
undefined DAT_01d79450;
undefined DAT_01d79550;
undefined DAT_01d79650;
undefined DAT_01d79750;
undefined DAT_01d79850;
undefined DAT_01d79a50;
undefined DAT_01d79950;
undefined DAT_01d79e50;
undefined DAT_01d79f50;
undefined DAT_01d7a050;
undefined DAT_01d7a150;
undefined DAT_01d7a450;
undefined DAT_01d7a250;
undefined DAT_01d7a350;
undefined DAT_01d7a550;
undefined DAT_01d7a650;
undefined DAT_01d7aa50;
undefined DAT_01d7ab50;
undefined DAT_01d7ac50;
undefined DAT_01d7ad50;
undefined DAT_01d7ae50;
undefined DAT_01d7af50;
undefined DAT_01d7b050;
undefined DAT_01d7b150;
undefined DAT_01d7b250;
undefined DAT_01d7b350;
undefined DAT_01d7b450;
undefined DAT_01d7b550;
undefined DAT_01d7b650;
undefined DAT_01d7b750;
undefined DAT_01d7b950;
undefined DAT_01d7ba50;
undefined DAT_01d7bb50;
undefined DAT_01d7bc50;
undefined DAT_01d7bd50;
undefined DAT_01d7be50;
undefined DAT_01d7bf50;
undefined DAT_01d7c050;
undefined DAT_01d7c250;
undefined DAT_01d7c350;
undefined DAT_01d7c650;
undefined DAT_01d7c750;
undefined DAT_01d7ef50;
undefined DAT_01d93950;
undefined DAT_01d7c950;
undefined DAT_01d7ca50;
undefined DAT_01d7cb50;
undefined DAT_01d7cc50;
undefined DAT_01d7cd50;
undefined DAT_01d7ce50;
undefined DAT_01d7cf50;
undefined DAT_01d7d050;
undefined DAT_01d88650;
undefined DAT_01d8e950;
undefined DAT_01d7d150;
undefined DAT_01d92d50;
undefined DAT_01d7d350;
undefined DAT_01d7d450;
undefined DAT_01d7d550;
undefined DAT_01d7d650;
undefined DAT_01d7d850;
undefined DAT_01d7d950;
undefined DAT_01d7db50;
undefined DAT_01d7dc50;
undefined DAT_01d7df50;
undefined DAT_01d7e050;
undefined DAT_01d7e150;
undefined DAT_01d7e250;
undefined DAT_01d7e350;
undefined DAT_01d7e450;
undefined DAT_01d7e550;
undefined DAT_01d94050;
undefined DAT_01d7e650;
undefined DAT_01d7e850;
undefined DAT_01d7ea50;
undefined DAT_01d7e750;
undefined DAT_01d7e950;
undefined DAT_01d7eb50;
undefined DAT_01d7ed50;
undefined DAT_01d7f050;
undefined DAT_01d7f150;
undefined DAT_01d7f650;
undefined DAT_01d7f750;
undefined DAT_01d7f850;
undefined DAT_01d7f950;
undefined DAT_01d88150;
undefined DAT_01d7fb50;
undefined DAT_01d7fc50;
undefined DAT_01d7fd50;
undefined DAT_01d7fe50;
undefined DAT_01d7ff50;
undefined DAT_01d8fe50;
undefined DAT_01d80150;
undefined DAT_01d80250;
undefined DAT_01d80350;
undefined DAT_01d80450;
undefined DAT_01d80550;
undefined DAT_01d80650;
undefined DAT_01d80750;
undefined DAT_01d80950;
undefined DAT_01d80a50;
undefined DAT_01d80b50;
undefined DAT_01d80d50;
undefined DAT_01d80e50;
undefined DAT_01d85150;
undefined DAT_01d81150;
undefined DAT_01d81250;
undefined DAT_01d81350;
undefined DAT_01d81650;
undefined DAT_01d81750;
undefined DAT_01d86a50;
undefined DAT_01d81950;
undefined DAT_01d81a50;
undefined DAT_01d81b50;
undefined DAT_01d81c50;
undefined DAT_01d81f50;
undefined DAT_01d82050;
undefined DAT_01d82150;
undefined DAT_01d82250;
undefined DAT_01d82a50;
undefined DAT_01d82350;
undefined DAT_01d82650;
undefined DAT_01d82750;
undefined DAT_01d82850;
undefined DAT_01d82950;
undefined DAT_01d82b50;
undefined DAT_01d82c50;
undefined DAT_01d90350;
undefined DAT_01d82d50;
undefined DAT_01d82e50;
undefined DAT_01d82f50;
undefined DAT_01d83050;
undefined DAT_01d83150;
undefined DAT_01d83350;
undefined DAT_01d83450;
undefined DAT_01d83550;
undefined DAT_01d95450;
undefined DAT_01d8c750;
undefined DAT_01d83650;
undefined DAT_01d83750;
undefined DAT_01d83850;
undefined DAT_01d83950;
undefined DAT_01d83a50;
undefined DAT_01d8e650;
undefined DAT_01d83b50;
undefined DAT_01d83c50;
undefined DAT_01d83d50;
undefined DAT_01d83e50;
undefined DAT_01d83f50;
undefined DAT_01d84150;
undefined DAT_01d84250;
undefined DAT_01d84850;
undefined DAT_01d84950;
undefined DAT_01d84a50;
undefined DAT_01d84b50;
undefined DAT_01d84c50;
undefined DAT_01d84d50;
undefined DAT_01d84e50;
undefined DAT_01d85050;
undefined DAT_01d85350;
undefined DAT_01d85550;
undefined DAT_01d85650;
undefined DAT_01d85750;
undefined DAT_01d92050;
undefined DAT_01d92150;
undefined DAT_01d85950;
undefined DAT_01d85a50;
undefined DAT_01d8ff50;
undefined DAT_01d85b50;
undefined DAT_01d85c50;
undefined DAT_01d85d50;
undefined DAT_01d85f50;
undefined DAT_01d91e50;
undefined DAT_01d86950;
undefined DAT_01d86c50;
undefined DAT_01d86d50;
undefined DAT_01d86e50;
undefined DAT_01d87050;
undefined DAT_01d87250;
undefined DAT_01d87350;
undefined DAT_01d87450;
undefined DAT_01d87650;
undefined DAT_01d87750;
undefined DAT_01d87850;
undefined DAT_01d87950;
undefined DAT_01d87a50;
undefined DAT_01d87b50;
undefined DAT_01d87e50;
undefined DAT_01d87f50;
undefined DAT_01d88050;
undefined DAT_01d88250;
undefined DAT_01d88350;
undefined DAT_01d88450;
undefined DAT_01d88550;
undefined DAT_01d88850;
undefined DAT_01d88950;
undefined DAT_01d88a50;
undefined DAT_01d88b50;
undefined DAT_01d88c50;

void FUN_0162e5b8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3ff33333;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_0162e5dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0162e618(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




int FUN_0162e654(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar6 = NEON_fmov(0x3f800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar4,iVar3),4);
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
      iVar1 = iVar1 + -1;
      *(ulong *)(param_2 + 1) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) -
                    (float)((ulong)uVar5 >> 0x20) * 4.656613e-10 * 1.6,
                    (float)uVar6 - (float)uVar5 * 4.656613e-10 * 2.0);
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0162e70c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 3.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d86750 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d86750 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d86750 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0162e7c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162e7d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_0162e7e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162e7ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162e7fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162e808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_0162e818(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162e824(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0162e834(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_0162e848(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40e0000040800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




int FUN_0162e86c(int param_1,float *param_2)

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




int FUN_0162e8e8(int param_1,float *param_2)

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




void FUN_0162e958(int param_1,undefined4 *param_2)

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




uint FUN_0162e978(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0162e9b4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d95050 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d95050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d95050 + (ulong)uVar3 * 4));
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




undefined8 FUN_0162ea70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162ea80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0162ea90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ea9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162eaac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162eab8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0162eac8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ead4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0162eae4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_0162eaf8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003f800000;
  return 1;
}




undefined8 FUN_0162eb0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0162eb18(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.0 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_0162eb90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0162ebcc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0162ec08(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d70f50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d70f50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d70f50 + (ulong)uVar3 * 4));
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




undefined8 FUN_0162ecc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162ecd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0162ece4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ecf0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162ed00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ed0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0162ed1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ed28(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0162ed38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_0162ed48(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




undefined8 FUN_0162ed5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ed68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_0162ed7c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0162edb8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0162edf4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d95050 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d95050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d95050 + (ulong)uVar3 * 4));
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




undefined8 FUN_0162eeb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162eec0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0162eed0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162eedc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0162eeec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162eef8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_0162ef08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ef14(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0162ef24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_0162ef34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000040000000;
  return 1;
}




undefined8 FUN_0162ef48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0162ef54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_0162ef68(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0162efa4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0162efe0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01d94250 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d94250 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d94250 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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

