// functions/017fc — 96 functions
#include "libGameKindred.h"




undefined8 FUN_017fc09c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc0ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_017fc0bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc0c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc0d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc0e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fc0f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc100(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017fc110(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc11c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_017fc12c(int param_1,float *param_2)

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




undefined8 FUN_017fc1a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




void FUN_017fc1bc(int param_1,undefined4 *param_2)

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




uint FUN_017fc1dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017fc218(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01dd96f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01dd96f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd96f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_017fc2c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc2d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc2e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc2f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc300(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc30c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x428c0000;
  return 1;
}




undefined8 FUN_017fc31c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc328(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017fc338(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




int FUN_017fc348(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 2.0 + 5.0,
                          (float)uVar4 * 4.656613e-10 * 0.4 + 0.1);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_017fc3d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_017fc3e0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_017fc460(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x433db852;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_017fc484(int param_1,undefined4 *param_2)

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




void FUN_017fc4a4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.4;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.4;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dd0bf0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dd0bf0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd0bf0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dd93f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dd93f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd93f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_017fc5b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc5c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fc5d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc5e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc5f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




int FUN_017fc600(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 10.0 + 10.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_017fc66c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc678(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017fc688(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_017fc698(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_017fc6a8(int param_1,float *param_2)

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




int FUN_017fc724(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_017fc794(int param_1,undefined4 *param_2)

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




void FUN_017fc7b4(int param_1,undefined4 *param_2)

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




uint FUN_017fc7d8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_017fc814(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017fc850(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.4;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.4;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dd0bf0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dd0bf0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd0bf0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dd93f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dd93f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd93f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_017fc960(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fc980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fc98c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fc99c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




void FUN_017fc9ac(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_01dcdaf0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01dcdaf0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dcdaf0 + (ulong)uVar3 * 4));
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




undefined8 FUN_017fca68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fca78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_017fca88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}



undefined DAT_01dcdbf0;
undefined DAT_01dcdcf0;
undefined DAT_01dcddf0;
undefined DAT_01dcdef0;
undefined DAT_01dcdff0;
undefined DAT_01dce3f0;
undefined DAT_01dce4f0;
undefined DAT_01dce5f0;
undefined DAT_01dce6f0;
undefined DAT_01dce7f0;
undefined DAT_01dce9f0;
undefined DAT_01dcecf0;
undefined DAT_01dcedf0;
undefined DAT_01dceff0;
undefined DAT_01dcf0f0;
undefined DAT_01dd80f0;
undefined DAT_01dcf1f0;
undefined DAT_01dcf3f0;
undefined DAT_01dcf5f0;
undefined DAT_01dcf6f0;
undefined DAT_01dcf7f0;
undefined DAT_01dcfaf0;
undefined DAT_01dcf8f0;
undefined DAT_01dcf9f0;
undefined DAT_01dcfcf0;
undefined DAT_01dcfdf0;
undefined DAT_01dcfff0;
undefined DAT_01dd00f0;
undefined DAT_01dd01f0;
undefined DAT_01dd02f0;
undefined DAT_01dd03f0;
undefined DAT_01dd04f0;
undefined DAT_01dd05f0;
undefined DAT_01dd07f0;
undefined DAT_01dd08f0;
undefined DAT_01dd09f0;
undefined DAT_01dd2cf0;
undefined DAT_01dd0df0;
undefined DAT_01dd0ff0;
undefined DAT_01dd19f0;
undefined DAT_01dd1bf0;
undefined DAT_01dd1df0;
undefined DAT_01dd1ff0;
undefined DAT_01dd25f0;
undefined DAT_01dd26f0;
undefined DAT_01dd29f0;
undefined DAT_01dd2bf0;
undefined DAT_01dd2af0;
undefined DAT_01dd2ff0;
undefined DAT_01dd31f0;
undefined DAT_01dd33f0;
undefined DAT_01dd34f0;
undefined DAT_01dd39f0;
undefined DAT_01dd3af0;
undefined DAT_01dd3bf0;
undefined DAT_01dd3df0;
undefined DAT_01dd3ef0;
undefined DAT_01dd3ff0;
undefined DAT_01dd40f0;
undefined DAT_01dd44f0;
undefined DAT_01dd49f0;
undefined DAT_01dd4af0;
undefined DAT_01dd4cf0;
undefined DAT_01dd4ff0;
undefined DAT_01dd51f0;
undefined DAT_01dd52f0;
undefined DAT_01dd53f0;
undefined DAT_01dd58f0;
undefined DAT_01dd59f0;
undefined DAT_01dd5af0;
undefined DAT_01dd5bf0;
undefined DAT_01dd60f0;
undefined DAT_01dd64f0;
undefined DAT_01dd66f0;
undefined DAT_01dd68f0;
undefined DAT_01dd6cf0;
undefined DAT_01dd6af0;
undefined DAT_01dd6ff0;
undefined DAT_01dd72f0;
undefined DAT_01dd73f0;
undefined DAT_01dd74f0;
undefined DAT_01dd75f0;
undefined DAT_01dd7ef0;
undefined DAT_01dd81f0;
undefined DAT_01dd82f0;
undefined DAT_01dd83f0;
undefined DAT_01dd85f0;
undefined DAT_01dd86f0;
undefined DAT_01dd87f0;
undefined DAT_01dd88f0;
undefined DAT_01dd89f0;
undefined DAT_01dd8af0;
undefined DAT_01dd8bf0;
undefined DAT_01dd8cf0;
undefined DAT_01dd8df0;
undefined DAT_01dd8ef0;
undefined DAT_01dd8ff0;
undefined DAT_01dd90f0;
undefined DAT_01dd95f0;
undefined DAT_01dd97f0;
undefined DAT_01dd99f0;
undefined DAT_01dd9af0;
undefined DAT_01dd9bf0;
undefined DAT_01dd9cf0;
undefined DAT_01dd9df0;
undefined DAT_01dd9ef0;
undefined DAT_01dd9ff0;
undefined DAT_01dda0f0;
undefined DAT_01dda1f0;
undefined DAT_01dda2f0;
undefined DAT_01dda3f0;
undefined DAT_01dda4f0;
undefined DAT_01dda5f0;
undefined DAT_01dda6f0;
undefined DAT_01dda7f0;
undefined DAT_01dda8f0;
undefined DAT_01df46a0;
undefined DAT_01dfc7a0;
undefined DAT_01df47a0;
undefined DAT_01de23a0;
undefined DAT_01ddcfa0;
undefined DAT_01df8aa0;
undefined DAT_01df8ba0;
undefined DAT_01df8ca0;
undefined DAT_01dfb3a0;
undefined DAT_01ddaca0;
undefined DAT_01dfb9a0;
undefined DAT_01df09a0;
undefined DAT_01ddada0;
undefined DAT_01dee1a0;
undefined DAT_01df6fa0;
undefined DAT_01dfa1a0;
undefined DAT_01de19a0;
undefined DAT_01df39a0;
undefined DAT_01dee0a0;
undefined DAT_01dee2a0;
undefined DAT_01defaa0;
undefined DAT_01ddaea0;
undefined DAT_01defba0;
undefined DAT_01ddafa0;
undefined DAT_01df73a0;
undefined DAT_01df74a0;
undefined DAT_01df75a0;
undefined DAT_01df76a0;
undefined DAT_01df77a0;
undefined DAT_01df78a0;
undefined DAT_01df79a0;
undefined DAT_01df7aa0;
undefined DAT_01df7ba0;
undefined DAT_01df12a0;
undefined DAT_01ddb0a0;
undefined DAT_01df94a0;
undefined DAT_01dfa2a0;
undefined DAT_01de0fa0;
undefined DAT_01ddb1a0;
undefined DAT_01df36a0;
undefined DAT_01ddb2a0;
undefined DAT_01df4aa0;
undefined DAT_01dedba0;
undefined DAT_01ddb3a0;
undefined DAT_01def7a0;
undefined DAT_01def8a0;
undefined DAT_01ddb4a0;
undefined DAT_01dee3a0;
undefined DAT_01df0aa0;
undefined DAT_01dfada0;
undefined DAT_01dfc0a0;
undefined DAT_01ddb5a0;
undefined DAT_01ddb6a0;
undefined DAT_01ddb7a0;
undefined DAT_01ddb8a0;
undefined DAT_01ddb9a0;
undefined DAT_01ddbaa0;
undefined DAT_01de08a0;
undefined DAT_01dec1a0;
undefined DAT_01defda0;
undefined DAT_01df29a0;
undefined DAT_01df54a0;
undefined DAT_01df95a0;
undefined DAT_01de0ea0;
undefined DAT_01ddbba0;
undefined DAT_01dfa3a0;
undefined DAT_01ddbca0;
undefined DAT_01ddf2a0;
undefined DAT_01ddbda0;
undefined DAT_01df99a0;
undefined DAT_01ddbea0;
undefined DAT_01df5aa0;
undefined DAT_01df92a0;
undefined DAT_01ddbfa0;
undefined DAT_01defea0;
undefined DAT_01dde4a0;
undefined DAT_01df26a0;
undefined DAT_01de8da0;
undefined DAT_01ddc0a0;
undefined DAT_01ddc1a0;
undefined DAT_01ddc2a0;
undefined DAT_01ddc3a0;
undefined DAT_01df63a0;
undefined DAT_01ddc4a0;
undefined DAT_01decba0;
undefined DAT_01decca0;
undefined DAT_01dfc5a0;
undefined DAT_01de8aa0;
undefined DAT_01decda0;
undefined DAT_01ddc5a0;
undefined DAT_01dfbba0;
undefined DAT_01df4da0;
undefined DAT_01ddc7a0;
undefined DAT_01ddc6a0;
undefined DAT_01ddc8a0;
undefined DAT_01ddc9a0;
undefined DAT_01ddcaa0;
undefined DAT_01ddcba0;
undefined DAT_01ddcca0;
undefined DAT_01ddcda0;
undefined DAT_01ddcea0;
undefined DAT_01ddd0a0;
undefined DAT_01ddd1a0;
undefined DAT_01ddd2a0;
undefined DAT_01ddd3a0;
undefined DAT_01df0ca0;
undefined DAT_01ddd4a0;
undefined DAT_01ddd5a0;
undefined DAT_01ddd6a0;
undefined DAT_01ddd7a0;
undefined DAT_01df08a0;
undefined DAT_01df56a0;
undefined DAT_01ddd8a0;
undefined DAT_01ddf3a0;
undefined DAT_01de77a0;
undefined DAT_01ddd9a0;
undefined DAT_01dddaa0;
undefined DAT_01dfaaa0;
undefined DAT_01dddba0;
undefined DAT_01df57a0;
undefined DAT_01dddca0;
undefined DAT_01dddda0;
undefined DAT_01dddea0;
undefined DAT_01dddfa0;
undefined DAT_01dec5a0;
undefined DAT_01dde0a0;
undefined DAT_01df64a0;
undefined DAT_01dde1a0;
undefined DAT_01de4ca0;
undefined DAT_01dfc1a0;
undefined DAT_01df11a0;
undefined DAT_01df91a0;
undefined DAT_01decea0;
undefined DAT_01def9a0;
undefined DAT_01dde2a0;
undefined DAT_01dde3a0;
undefined DAT_01def3a0;
undefined DAT_01dfa4a0;
undefined DAT_01de8ca0;
undefined DAT_01dde5a0;
undefined DAT_01de52a0;
undefined DAT_01df8ea0;
undefined DAT_01dde6a0;
undefined DAT_01dde7a0;
undefined DAT_01df7fa0;
undefined DAT_01dde8a0;
undefined DAT_01dfaea0;
undefined DAT_01dde9a0;
undefined DAT_01ddeaa0;
undefined DAT_01ddeba0;
undefined DAT_01ddeca0;
undefined DAT_01def4a0;
undefined DAT_01deb4a0;
undefined DAT_01df93a0;
undefined DAT_01ddeda0;
undefined DAT_01ddeea0;
undefined DAT_01ddefa0;
undefined DAT_01df19a0;
undefined DAT_01df1aa0;
undefined DAT_01df1ba0;
undefined DAT_01ddf0a0;
undefined DAT_01deaea0;
undefined DAT_01deafa0;
undefined DAT_01ddf1a0;
undefined DAT_01ddf4a0;
undefined DAT_01ddf5a0;
undefined DAT_01ddf6a0;
undefined DAT_01ddf7a0;
undefined DAT_01ddf8a0;
undefined DAT_01ddf9a0;
undefined DAT_01ddfaa0;
undefined DAT_01ddfba0;
undefined DAT_01ddfca0;
undefined DAT_01ddfda0;
undefined DAT_01ddfea0;
undefined DAT_01ddffa0;
undefined DAT_01de00a0;
undefined DAT_01df1ea0;
undefined DAT_01de02a0;
undefined DAT_01dfa0a0;
undefined DAT_01de01a0;
undefined DAT_01dfb5a0;
undefined DAT_01de85a0;
undefined DAT_01de03a0;
undefined DAT_01df4ca0;
undefined DAT_01de86a0;
undefined DAT_01de04a0;
undefined DAT_01deaaa0;
undefined DAT_01de05a0;
undefined DAT_01df7da0;
undefined DAT_01df9ea0;
undefined DAT_01df9fa0;
undefined DAT_01de06a0;
undefined DAT_01de07a0;
undefined DAT_01dec7a0;
undefined DAT_01de09a0;
undefined DAT_01de0aa0;
undefined DAT_01de0ba0;
undefined DAT_01de0ca0;
undefined DAT_01dedca0;
undefined DAT_01dedda0;
undefined DAT_01de0da0;
undefined DAT_01de10a0;
undefined DAT_01de11a0;
undefined DAT_01de12a0;
undefined DAT_01de15a0;
undefined DAT_01de13a0;
undefined DAT_01df53a0;
undefined DAT_01de14a0;
undefined DAT_01de16a0;
undefined DAT_01de17a0;
undefined DAT_01de18a0;
undefined DAT_01df1fa0;
undefined DAT_01df23a0;
undefined DAT_01df20a0;
undefined DAT_01df21a0;
undefined DAT_01df22a0;
undefined DAT_01df24a0;
undefined DAT_01dedfa0;
undefined DAT_01de1aa0;
undefined DAT_01de1ba0;
undefined DAT_01de1ca0;
undefined DAT_01de2da0;
undefined DAT_01de1da0;
undefined DAT_01de1ea0;
undefined DAT_01df71a0;
undefined DAT_01de1fa0;
undefined DAT_01de20a0;
undefined DAT_01de21a0;
undefined DAT_01debea0;
undefined DAT_01dfb0a0;
undefined DAT_01de22a0;
undefined DAT_01df8da0;
undefined DAT_01df0ba0;
undefined DAT_01de24a0;
undefined DAT_01dfb4a0;
undefined DAT_01de45a0;
undefined4 DAT_01ddac40;
undefined DAT_01de25a0;
undefined DAT_01de26a0;
undefined DAT_01de27a0;
undefined DAT_01de28a0;
undefined DAT_01df6ea0;
undefined DAT_01de29a0;
undefined DAT_01de2aa0;
undefined DAT_01de2ba0;
undefined DAT_01de2ca0;
undefined DAT_01de2ea0;
undefined DAT_01de2fa0;
undefined DAT_01de30a0;
undefined DAT_01de31a0;
undefined DAT_01de32a0;
undefined DAT_01de33a0;
undefined DAT_01de34a0;
undefined DAT_01de35a0;
undefined DAT_01dfc6a0;
undefined DAT_01de40a0;
undefined DAT_01de36a0;
undefined DAT_01de37a0;
undefined DAT_01de38a0;
undefined DAT_01de39a0;
undefined DAT_01de3aa0;
undefined DAT_01de3ba0;
undefined DAT_01de3ca0;
undefined DAT_01de3da0;
undefined DAT_01de3ea0;
undefined DAT_01de3fa0;
undefined DAT_01df67a0;
undefined DAT_01de41a0;
undefined DAT_01deeaa0;
undefined DAT_01de42a0;
undefined DAT_01de43a0;
undefined DAT_01de44a0;
undefined DAT_01df3fa0;
undefined DAT_01de47a0;
undefined DAT_01de46a0;
undefined DAT_01de48a0;
undefined DAT_01de49a0;
undefined DAT_01de4aa0;
undefined DAT_01de4ba0;
undefined DAT_01ded1a0;
undefined DAT_01de4da0;
undefined DAT_01de4ea0;
undefined DAT_01de4fa0;
undefined DAT_01de51a0;
undefined DAT_01de50a0;

undefined8 FUN_017fca98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fcaa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fcab4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fcac4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fcad0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017fcae0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fcaf0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_017fcb00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fcb0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_017fcb20(int param_1,undefined4 *param_2)

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




uint FUN_017fcb40(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_017fcb7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fcb8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fcb98(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017fcba8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fcbb8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000040a00000;
  return 1;
}




int FUN_017fcbcc(int param_1,float *param_2)

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




undefined8 FUN_017fcc48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_017fcc5c(int param_1,undefined4 *param_2)

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




uint FUN_017fcc7c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_017fccb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fccc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fccd4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017fcce4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017fccf4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000040a00000;
  return 1;
}




int FUN_017fcd08(int param_1,float *param_2)

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




undefined8 FUN_017fcd84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_017fcd98(int param_1,undefined4 *param_2)

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




uint FUN_017fcdb8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017fcdf4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_01dcdbf0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01dcdbf0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dcdbf0 + (ulong)uVar3 * 4));
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




undefined8 FUN_017fceb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fcec0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fcecc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fced8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017fcee8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_017fcef4(int param_1,float *param_2)

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




undefined8 FUN_017fcf6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017fcf78(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_017fcf88(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 5.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_017fcff4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003e19999a;
  return 1;
}

