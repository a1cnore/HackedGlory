// functions/0149a — 112 functions
#include "libGameKindred.h"




undefined8 FUN_0149a00c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a018(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a024(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149a034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149a044(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149a054(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a060(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149a070(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a07c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42aa000042aa0000;
  return 1;
}




undefined8 FUN_0149a090(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a09c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_0149a0ac(int param_1,undefined4 *param_2)

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




uint FUN_0149a0cc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0149a108(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0149a144(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0149a180(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d1ef40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d1ef40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d1ef40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      *(float *)((long)param_3 + 0xc) = fVar5 * 0.3;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0149a23c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149a24c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a258(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a264(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149a274(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149a284(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149a294(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a2a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149a2b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a2bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42aa000042820000;
  return 1;
}




undefined8 FUN_0149a2d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a2dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_0149a2f0(int param_1,undefined4 *param_2)

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




uint FUN_0149a310(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0149a34c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0149a388(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0149a3c4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
    fVar4 = -0.0;
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = fVar4;
      fVar6 = 1.0;
      if (fVar5 < 1.0) {
        fVar7 = 1.0;
        fVar6 = 0.0;
        if (0.0 < fVar5) {
          uVar3 = (uint)(fVar5 * 64.0);
          uVar1 = uVar3 + 1;
          fVar8 = fVar5 * 64.0;
          fVar7 = fVar4;
          fVar6 = 1.0;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01d26640 + (ulong)uVar3 * 4) +
                    (fVar8 - (float)(int)fVar8) *
                    (*(float *)(&DAT_01d26640 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d26640 + (ulong)uVar3 * 4));
            fVar6 = *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4) +
                    (fVar8 - (float)(int)fVar8) *
                    (*(float *)(&DAT_01d2a240 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2a240 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar7;
      param_3[2] = fVar5;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = fVar4;
      if ((fVar6 < 1.0) && (fVar7 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar7 = fVar4;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01d1ee40 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_01d1ee40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d1ee40 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      param_3[3] = fVar7;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0149a518(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149a528(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_0149a538(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_0149a548(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149a558(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149a568(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0149a578(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a584(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149a594(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_0149a5a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42c8000042c80000;
  return 1;
}




int FUN_0149a5b8(int param_1,float *param_2)

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




int FUN_0149a634(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.39999998 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0149a6b4(int param_1,undefined4 *param_2)

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




void FUN_0149a6d4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_0149a6f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0149a730(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0149a76c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d1ef40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d1ef40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d1ef40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0149a81c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0149a82c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01d29740 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d29740 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d29740 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 600.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0149a8d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a8e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149a8f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149a900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149a910(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a91c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149a92c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149a938(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_0149a948(int param_1,float *param_2)

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




undefined8 FUN_0149a9c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_0149a9d4(int param_1,undefined4 *param_2)

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




uint FUN_0149a9f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0149aa30(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0149aa6c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_0149aaa8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149aab8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149aac8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149aad4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149aae0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149aaf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149aafc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149ab0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149ab18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149ab28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149ab34(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fa00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0149ab44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149ab50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




void FUN_0149ab60(int param_1,undefined4 *param_2)

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




uint FUN_0149ab80(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0149abbc(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < param_2) {
    uVar4 = (uint)(param_1 * 64.0);
    bVar3 = 1.0 <= param_1;
    uVar1 = uVar4 + 1;
    bVar2 = 0.0 < param_1;
    fVar5 = param_1 * 64.0 - (float)(int)(param_1 * 64.0);
    fVar6 = 0.0;
    if (bVar2 || bVar3) {
      fVar6 = 1.0;
    }
    do {
      fVar7 = fVar6;
      if ((bVar2 && !bVar3) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01d2a240 + (ulong)uVar4 * 4) +
                fVar5 * (*(float *)(&DAT_01d2a240 + (ulong)uVar1 * 4) -
                        *(float *)(&DAT_01d2a240 + (ulong)uVar4 * 4));
      }
      *param_3 = fVar7;
      fVar7 = 1.0;
      param_3[1] = 0.0;
      param_3[2] = param_1;
      if ((bVar2 && !bVar3) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01d24040 + (ulong)uVar4 * 4) +
                fVar5 * (*(float *)(&DAT_01d24040 + (ulong)uVar1 * 4) -
                        *(float *)(&DAT_01d24040 + (ulong)uVar4 * 4));
      }
      param_3[3] = fVar7;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0149ac80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149ac90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149ac9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149aca8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149acb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149acc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149acd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149ace0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149acf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149acfc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fa00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0149ad0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149ad18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




void FUN_0149ad28(int param_1,undefined4 *param_2)

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




uint FUN_0149ad48(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0149ad84(float param_1,int param_2,float *param_3,undefined8 param_4,undefined8 param_5,
                 float *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    bVar3 = param_1 < 1.0;
    fVar5 = 0.0;
    if (bVar3) {
      fVar5 = 1.0;
    }
    if (bVar3 && 0.0 < param_1) {
      fVar5 = 0.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d29740 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01d29740 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d29740 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      fVar7 = (float)NEON_fminnm((*param_6 + -1.0) / 7.0 + 0.0,0x3f800000);
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar8 = 0.1;
      if ((fVar7 < 1.0) && (fVar8 = 0.8, 0.1 < fVar7)) {
        fVar7 = (fVar7 + -0.1) / 0.9;
        uVar4 = (uint)(fVar7 * 64.0);
        uVar2 = uVar4 + 1;
        fVar8 = 0.1;
        if (uVar2 < 0x40) {
          fVar7 = fVar7 * 64.0;
          fVar8 = *(float *)(&DAT_01d1a940 + (ulong)uVar4 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01d1a940 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01d1a940 + (ulong)uVar4 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar8;
      param_3[2] = 0.0;
      param_3[3] = 1.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0149aec0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149aed0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149aedc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149aee8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0149aef8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149af04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0149af14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_0149af24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0149af34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149af40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_0149af50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0149af5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_0149af6c(int param_1,undefined4 *param_2)

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




uint FUN_0149af8c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0149afc8(float param_1,int param_2,float *param_3,undefined8 param_4,undefined8 param_5,
                 float *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < param_2) {
    uVar4 = (uint)((param_1 + 0.0) * 64.0);
    uVar1 = uVar4 + 1;
    bVar3 = param_1 < 1.0;
    fVar6 = (param_1 + 0.0) * 64.0;
    fVar7 = 1.0;
    if (bVar3) {
      fVar7 = 0.0;
    }
    if (bVar3 && -0.0 < param_1) {
      fVar7 = 1.0;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && -0.0 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d2a240 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01d2a240 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d2a240 + (ulong)uVar4 * 4));
      }
      fVar9 = (float)NEON_fminnm((*param_6 + -1.0) / 7.0 + 0.0,0x3f800000);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar10 = 0.1;
      if ((fVar9 < 1.0) && (fVar10 = 0.8, 0.1 < fVar9)) {
        fVar9 = (fVar9 + -0.1) / 0.9;
        uVar5 = (uint)(fVar9 * 64.0);
        uVar2 = uVar5 + 1;
        fVar10 = 0.1;
        if (uVar2 < 0x40) {
          fVar9 = fVar9 * 64.0;
          fVar10 = *(float *)(&DAT_01d1a940 + (ulong)uVar5 * 4) +
                   (fVar9 - (float)(int)fVar9) *
                   (*(float *)(&DAT_01d1a940 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01d1a940 + (ulong)uVar5 * 4));
        }
      }
      *param_3 = fVar8;
      param_3[1] = fVar10;
      param_3[2] = param_1;
      param_3[3] = 1.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}

