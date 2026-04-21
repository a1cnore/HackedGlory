// functions/01234 — 117 functions
#include "libGameKindred.h"




void FUN_01234028(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41700000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01234048(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01234084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234090(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_012340a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012340b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




undefined8 FUN_012340c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e8000003dcccccd;
  return 1;
}




undefined8 FUN_012340d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_012340e0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.25 + 0.25;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0123414c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41700000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_0123416c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012341a8(undefined4 param_1,int param_2,undefined8 *param_3)

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




undefined8 FUN_012341d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012341e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012341f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01234210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0123421c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}



undefined DAT_01c930f0;
undefined DAT_01c931f0;
undefined DAT_01c932f0;
undefined DAT_01c933f0;
undefined DAT_01c934f0;
undefined DAT_01c935f0;
undefined DAT_01c936f0;
undefined DAT_01c937f0;
undefined DAT_01c938f0;
undefined DAT_01c93af0;
undefined DAT_01c93df0;
undefined DAT_01c93ef0;
undefined DAT_01c941f0;
undefined DAT_01c942f0;
undefined DAT_01c943f0;
undefined DAT_01c944f0;
undefined DAT_01c9daf0;
undefined DAT_01c947f0;
undefined DAT_01c948f0;
undefined DAT_01c94bf0;
undefined DAT_01c94cf0;
undefined DAT_01c94ef0;
undefined DAT_01c94ff0;
undefined DAT_01c950f0;
undefined DAT_01c951f0;
undefined DAT_01c9a7f0;
undefined DAT_01c953f0;
undefined DAT_01c954f0;
undefined DAT_01c955f0;
undefined DAT_01c956f0;
undefined DAT_01c957f0;
undefined DAT_01c958f0;
undefined DAT_01c95af0;
undefined DAT_01c95bf0;
undefined DAT_01c95cf0;
undefined DAT_01c95df0;
undefined DAT_01c95ef0;
undefined DAT_01c95ff0;
undefined DAT_01c960f0;
undefined DAT_01c961f0;
undefined DAT_01c962f0;
undefined DAT_01c9c4f0;
undefined DAT_01c964f0;
undefined DAT_01c966f0;
undefined DAT_01c9b9f0;
undefined DAT_01c96af0;
undefined DAT_01c96ef0;
undefined DAT_01c970f0;
undefined DAT_01c971f0;
undefined DAT_01c972f0;
undefined DAT_01c973f0;
undefined DAT_01c974f0;
undefined DAT_01c97af0;
undefined DAT_01c975f0;
undefined DAT_01c978f0;
undefined DAT_01c97cf0;
undefined DAT_01c9b8f0;
undefined DAT_01c97ff0;
undefined DAT_01c981f0;
undefined DAT_01c982f0;
undefined DAT_01c98cf0;
undefined DAT_01c990f0;
undefined DAT_01c991f0;
undefined DAT_01c993f0;
undefined DAT_01c994f0;
undefined DAT_01c9f5f0;
undefined DAT_01c9f6f0;
undefined DAT_01c9f7f0;
undefined DAT_01c9f8f0;
undefined DAT_01c9f9f0;
undefined DAT_01c9faf0;
undefined DAT_01c9fbf0;
undefined DAT_01c9f3f0;
undefined DAT_01c9f4f0;
undefined DAT_01c9fdf0;
undefined DAT_01c99bf0;
undefined DAT_01c99cf0;
undefined DAT_01c99ef0;
undefined DAT_01c99ff0;
undefined DAT_01c9a1f0;
undefined DAT_01c9a6f0;
undefined DAT_01c9acf0;
undefined DAT_01c9adf0;
undefined DAT_01c9b4f0;
undefined DAT_01c9b3f0;
undefined DAT_01c9b6f0;
undefined DAT_01c9c1f0;
undefined DAT_01c9ccf0;
undefined DAT_01c9d3f0;
undefined DAT_01c9d4f0;
undefined DAT_01c9d5f0;
undefined DAT_01c9d6f0;
undefined DAT_01c9d7f0;
undefined DAT_01c9d8f0;
undefined DAT_01c9def0;
undefined DAT_01c9e1f0;
undefined DAT_01c9e4f0;
undefined DAT_01c9e5f0;
undefined DAT_01c9ebf0;
undefined DAT_01c9e9f0;
undefined DAT_01c9eaf0;
undefined DAT_01c9eef0;
undefined DAT_01c9f1f0;
undefined DAT_01ca03c0;
undefined DAT_01cb71c0;
undefined DAT_01cc5ec0;
undefined DAT_01ca04c0;
undefined DAT_01ca05c0;
undefined DAT_01cb6dc0;
undefined DAT_01cbeec0;
undefined DAT_01ca06c0;
undefined DAT_01ca07c0;
undefined DAT_01ca08c0;
undefined DAT_01cbcec0;
undefined DAT_01cb87c0;
undefined DAT_01cbfcc0;
undefined DAT_01ca09c0;
undefined DAT_01ca9ec0;
undefined DAT_01ca0ac0;
undefined DAT_01cc57c0;
undefined DAT_01ca9dc0;
undefined DAT_01cc4fc0;
undefined DAT_01cc4ec0;
undefined DAT_01cc2dc0;
undefined DAT_01cc54c0;
undefined DAT_01caabc0;
undefined DAT_01cc63c0;
undefined DAT_01cc35c0;
undefined DAT_01caa0c0;
undefined DAT_01cc66c0;
undefined DAT_01ca0bc0;
undefined DAT_01cacec0;
undefined DAT_01cb98c0;
undefined DAT_01cad2c0;
undefined DAT_01cacfc0;
undefined DAT_01cad0c0;
undefined DAT_01cb42c0;
undefined DAT_01ca0cc0;
undefined DAT_01cb96c0;
undefined DAT_01cc37c0;
undefined DAT_01ca0dc0;
undefined DAT_01cc52c0;
undefined DAT_01ca0ec0;
undefined DAT_01cc6cc0;
undefined DAT_01cc61c0;
undefined DAT_01cb83c0;
undefined DAT_01ca0fc0;
undefined DAT_01cbb0c0;
undefined DAT_01cbb1c0;
undefined DAT_01cbb3c0;
undefined DAT_01ca10c0;
undefined DAT_01ca11c0;
undefined DAT_01ca12c0;
undefined DAT_01cba2c0;
undefined DAT_01cbc1c0;
undefined DAT_01cbc2c0;
undefined DAT_01cbc4c0;
undefined DAT_01ca13c0;
undefined DAT_01ca14c0;
undefined DAT_01ca15c0;
undefined DAT_01ca16c0;
undefined DAT_01ca17c0;
undefined DAT_01cbffc0;
undefined DAT_01ca18c0;
undefined DAT_01ca19c0;
undefined DAT_01ca1ac0;
undefined DAT_01cc6ac0;
undefined DAT_01ca1bc0;
undefined DAT_01ca1cc0;
undefined DAT_01cbaec0;
undefined DAT_01cbd4c0;
undefined DAT_01ca1dc0;
undefined DAT_01cc03c0;
undefined DAT_01cab9c0;
undefined DAT_01ca1ec0;
undefined DAT_01cb18c0;
undefined DAT_01cc32c0;
undefined DAT_01cc62c0;
undefined DAT_01ca1fc0;
undefined DAT_01cb7dc0;
undefined DAT_01ca20c0;
undefined DAT_01cc58c0;
undefined DAT_01ca21c0;
undefined DAT_01ca23c0;
undefined DAT_01ca22c0;
undefined DAT_01cbc0c0;
undefined DAT_01ca24c0;
undefined DAT_01cb29c0;
undefined DAT_01cc1dc0;
undefined DAT_01cc5fc0;
undefined DAT_01ca25c0;
undefined DAT_01ca26c0;
undefined DAT_01ca27c0;
undefined DAT_01cc02c0;
undefined DAT_01ca28c0;
undefined DAT_01ca35c0;
undefined DAT_01cb99c0;
undefined DAT_01ca29c0;
undefined DAT_01ca2ac0;
undefined DAT_01ca2bc0;
undefined DAT_01ca2cc0;
undefined DAT_01ca2dc0;
undefined DAT_01ca2ec0;
undefined DAT_01ca2fc0;
undefined DAT_01ca30c0;
undefined DAT_01ca6fc0;
undefined DAT_01ca31c0;
undefined DAT_01ca32c0;
undefined DAT_01cc17c0;
undefined DAT_01ca33c0;
undefined DAT_01cb16c0;
undefined DAT_01ca34c0;
undefined DAT_01ca36c0;
undefined DAT_01cc1bc0;
undefined DAT_01cc27c0;
undefined DAT_01cc40c0;
undefined DAT_01ca37c0;
undefined DAT_01cbdbc0;
undefined DAT_01ca38c0;
undefined DAT_01ca39c0;
undefined DAT_01ca3ac0;
undefined DAT_01ca3bc0;
undefined DAT_01ca3cc0;
undefined DAT_01cba1c0;
undefined DAT_01cbdcc0;
undefined DAT_01cb94c0;
undefined DAT_01cc2bc0;
undefined DAT_01ca3dc0;
undefined DAT_01ca97c0;
undefined DAT_01ca3ec0;
undefined DAT_01ca3fc0;
undefined DAT_01ca40c0;
undefined DAT_01ca41c0;
undefined DAT_01cac2c0;
undefined DAT_01cbfbc0;
undefined DAT_01ca42c0;
undefined DAT_01cc15c0;
undefined DAT_01cc5cc0;
undefined DAT_01cc29c0;
undefined DAT_01ca8cc0;
undefined DAT_01ca43c0;
undefined DAT_01ca44c0;
undefined DAT_01cc18c0;
undefined DAT_01ca45c0;
undefined DAT_01ca46c0;
undefined DAT_01ca56c0;
undefined DAT_01ca47c0;
undefined DAT_01ca48c0;
undefined DAT_01ca49c0;
undefined DAT_01ca4ac0;
undefined DAT_01cc2ec0;
undefined DAT_01ca4bc0;
undefined DAT_01ca4cc0;
undefined DAT_01ca9fc0;
undefined DAT_01ca4dc0;
undefined DAT_01ca4ec0;
undefined DAT_01ca4fc0;
undefined DAT_01ca50c0;
undefined DAT_01ca51c0;
undefined DAT_01ca52c0;
undefined DAT_01ca53c0;
undefined DAT_01ca54c0;
undefined DAT_01ca55c0;
undefined DAT_01ca57c0;
undefined DAT_01ca58c0;
undefined DAT_01ca59c0;
undefined DAT_01ca5ac0;
undefined DAT_01ca5bc0;
undefined DAT_01ca5cc0;
undefined DAT_01ca5dc0;
undefined DAT_01ca5ec0;
undefined DAT_01ca5fc0;
undefined DAT_01ca60c0;
undefined DAT_01ca61c0;
undefined DAT_01ca62c0;
undefined DAT_01ca63c0;
undefined DAT_01ca64c0;
undefined DAT_01ca65c0;
undefined DAT_01ca66c0;
undefined DAT_01ca67c0;
undefined DAT_01ca68c0;
undefined DAT_01ca69c0;
undefined DAT_01ca6ac0;
undefined DAT_01ca6bc0;
undefined DAT_01ca6cc0;
undefined DAT_01cbc5c0;
undefined DAT_01cbc6c0;
undefined DAT_01cc16c0;
undefined DAT_01ca6dc0;
undefined DAT_01cb88c0;
undefined DAT_01ca6ec0;
undefined DAT_01ca70c0;
undefined DAT_01ca71c0;
undefined DAT_01ca72c0;
undefined DAT_01cb84c0;
undefined DAT_01cb85c0;
undefined DAT_01cc26c0;
undefined DAT_01cb86c0;
undefined DAT_01ca73c0;
undefined DAT_01ca74c0;
undefined DAT_01ca75c0;
undefined DAT_01ca76c0;
undefined DAT_01ca77c0;
undefined DAT_01ca82c0;
undefined DAT_01ca78c0;
undefined DAT_01ca79c0;
undefined DAT_01ca7ac0;
undefined DAT_01ca7bc0;
undefined DAT_01ca7cc0;
undefined DAT_01ca7dc0;
undefined DAT_01ca7ec0;
undefined DAT_01ca7fc0;
undefined DAT_01ca80c0;
undefined DAT_01ca81c0;
undefined DAT_01ca83c0;
undefined DAT_01cc00c0;
undefined DAT_01ca84c0;
undefined DAT_01cb93c0;
undefined DAT_01ca85c0;
undefined DAT_01ca86c0;
undefined DAT_01ca87c0;
undefined DAT_01cc2fc0;
undefined DAT_01ca88c0;
undefined DAT_01cc33c0;
undefined DAT_01ca89c0;
undefined DAT_01ca8ac0;
undefined DAT_01ca8bc0;
undefined DAT_01ca8dc0;
undefined DAT_01ca8ec0;
undefined DAT_01cbebc0;
undefined DAT_01ca91c0;
undefined DAT_01cba0c0;
undefined DAT_01ca8fc0;
undefined DAT_01ca90c0;
undefined DAT_01cb95c0;
undefined DAT_01ca92c0;
undefined DAT_01ca93c0;
undefined DAT_01ca94c0;
undefined DAT_01ca95c0;
undefined DAT_01ca96c0;
undefined DAT_01ca98c0;
undefined DAT_01ca99c0;
undefined DAT_01ca9bc0;
undefined DAT_01ca9cc0;
undefined DAT_01ca9ac0;
undefined DAT_01cb1bc0;
undefined DAT_01caa1c0;
undefined DAT_01cbf9c0;
undefined DAT_01cb97c0;
undefined DAT_01caa2c0;
undefined DAT_01caa3c0;
undefined DAT_01caa4c0;
undefined DAT_01caa5c0;
undefined DAT_01caa6c0;
undefined DAT_01caa7c0;
undefined DAT_01caa8c0;
undefined DAT_01caa9c0;
undefined DAT_01caaac0;
undefined DAT_01caacc0;
undefined DAT_01caaec0;
undefined DAT_01caadc0;
undefined DAT_01caafc0;
undefined DAT_01cbcfc0;
undefined DAT_01cab0c0;
undefined DAT_01cc50c0;
undefined DAT_01cbadc0;
undefined DAT_01cab1c0;
undefined DAT_01cab2c0;
undefined DAT_01cab3c0;
undefined DAT_01cab4c0;
undefined DAT_01cab5c0;
undefined DAT_01cab6c0;
undefined DAT_01cab7c0;
undefined DAT_01cab8c0;
undefined DAT_01cabac0;
undefined DAT_01cb2ec0;
undefined DAT_01cb35c0;
undefined DAT_01cabbc0;
undefined DAT_01cb68c0;
undefined DAT_01cabcc0;
undefined DAT_01cabdc0;
undefined DAT_01cabec0;
undefined DAT_01cc3ec0;
undefined DAT_01cc3fc0;
undefined DAT_01cc41c0;
undefined DAT_01cc42c0;
undefined DAT_01cc43c0;
undefined DAT_01cc44c0;
undefined DAT_01cc47c0;
undefined DAT_01cc55c0;
undefined DAT_01cabfc0;
undefined DAT_01cc4dc0;
undefined DAT_01cac0c0;
undefined DAT_01cac1c0;
undefined DAT_01cac3c0;
undefined DAT_01cac4c0;
undefined DAT_01cac5c0;

undefined8 FUN_0123422c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234238(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01234248(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234254(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01234264(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234270(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




void FUN_01234280(int param_1,undefined4 *param_2)

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




uint FUN_012342a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012342dc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01c92ff0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c92ff0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c92ff0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_01234384(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_01234394(int param_1,float *param_2)

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




undefined8 FUN_0123440c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234418(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01234428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234434(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01234444(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01234454(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01234464(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234470(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01234480(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0123448c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_0123449c(int param_1,undefined4 *param_2)

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




uint FUN_012344bc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012344f8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01c930f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c930f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c930f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_012345a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012345b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012345bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012345c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012345d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012345e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_012345f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01234604(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01234614(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234620(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01234630(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0123463c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_0123464c(int param_1,undefined4 *param_2)

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




uint FUN_0123466c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012346a8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01c931f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c931f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c931f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_01234750(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01234760(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01234770(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0123477c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0123478c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234798(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_012347a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_012347b8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012347c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012347d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e19999a3e19999a;
  return 1;
}




undefined8 FUN_012347ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012347f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_01234808(int param_1,undefined4 *param_2)

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




uint FUN_01234828(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01234864(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4);
      fVar4 = *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      *param_3 = ((param_1 - fVar3) / fVar4) * -360.0 * 0.01745;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01c932f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c932f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c932f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01234930(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01234940(uint param_1,float *param_2,ushort *param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    do {
      uVar2 = uVar2 - 1;
      fVar1 = (float)NEON_ucvtf((uint)*(ushort *)
                                       (&DAT_01c9fff0 +
                                       (ulong)(*(byte *)(param_4 + 0x78000 + (ulong)*param_3 * 4) ^
                                              0x8b) * 2));
      *param_2 = (fVar1 / 65535.0) * 0.5 + 1.0;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_012349a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012349ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012349bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012349c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_012349d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_012349e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_012349f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_01234a0c(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (0 < param_1) {
    uVar1 = NEON_fmov(0x3f800000,4);
    do {
      param_1 = param_1 + -1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




int FUN_01234a2c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 30.0 + -15.0 +
                 (float)(int)(((float)iVar3 * 4.656613e-10 * 360.0 + 0.0) / 180.0) * 180.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01234af0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_01234b00(int param_1,undefined4 *param_2)

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




uint FUN_01234b20(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01234b5c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.1 < fVar6)) {
        fVar6 = (fVar6 + -0.1) / 0.9;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01c933f0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c933f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c933f0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01234c2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01234c3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234c48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234c54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01234c64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234c70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01234c80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_01234c90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01234ca0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01234cac(uint param_1,float *param_2,ushort *param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    do {
      uVar2 = uVar2 - 1;
      fVar1 = (float)NEON_ucvtf((uint)*(ushort *)
                                       (&DAT_01c9fff0 +
                                       (ulong)(*(byte *)(param_4 + 0x78000 + (ulong)*param_3 * 4) ^
                                              0xb3) * 2));
      fVar1 = (fVar1 / 65535.0) * 0.25 + 0.5;
      *param_2 = fVar1;
      param_2[1] = fVar1;
      param_2 = param_2 + 2;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01234d0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234d18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_01234d2c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01234d68(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01234da4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01c934f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c934f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c934f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_01234e4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01234e5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234e68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234e74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01234e84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234e90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01234ea0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_01234eb0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01234ec0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234ecc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f472b023f47ae14;
  return 1;
}




undefined8 FUN_01234ee0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01234eec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




uint FUN_01234f00(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01234f3c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01234f78(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.0;
      if ((fVar5 < 1.0) && (fVar4 = -1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c935f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c935f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c935f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      fVar6 = 1.4;
      if ((fVar5 < 0.9) && (fVar6 = 0.5, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.9) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.4;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 / 0.9) * 64.0;
          fVar6 = *(float *)(&DAT_01c936f0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c936f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c936f0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c937f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c937f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c937f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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

