// functions/01357 — 83 functions
#include "libGameKindred.h"




undefined8 FUN_01357080(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01357090(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_013570a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013570ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013570bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013570c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_013570d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_013570e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013570f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_0135710c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_0135711c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357128(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_0135713c(int param_1,undefined4 *param_2)

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




void FUN_0135715c(int param_1,undefined4 *param_2)

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




void FUN_0135717c(int param_1,undefined4 *param_2)

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




uint FUN_0135719c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013571d8(int param_1,undefined8 *param_2)

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




void FUN_01357204(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (0 < (int)param_2) {
    uVar1 = (ulong)param_2;
    uVar2 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar2;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      uVar1 = uVar1 - 1;
      *(float *)((long)param_3 + 0xc) =
           (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
           *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      param_3 = param_3 + 2;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
  }
  return;
}




undefined8 FUN_01357250(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01357260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0135726c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357278(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01357288(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357294(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_013572a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_013572b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013572c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




int FUN_013572d8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0x3f800000;
      iVar1 = iVar1 + -1;
      param_2[1] = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 2.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01357350(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0135735c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < param_2) {
    fVar7 = (param_1 + -0.6) / 0.29999995;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.9;
    fVar7 = fVar7 * 64.0;
    fVar6 = 0.0;
    if (bVar3) {
      fVar6 = 1.0;
    }
    iVar2 = param_2;
    if (bVar3 && 0.6 < param_1) {
      fVar6 = 0.0;
    }
    do {
      fVar8 = fVar6;
      if ((bVar3 && 0.6 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01cd50b0 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01cd50b0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01cd50b0 + (ulong)uVar5 * 4));
      }
      iVar4 = rand();
      iVar2 = iVar2 + -1;
      *param_3 = fVar8 * ((float)iVar4 * 4.656613e-10 * 0.10000001 + 0.2);
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




void FUN_01357494(int param_1,undefined4 *param_2)

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




void FUN_013574b4(int param_1,undefined4 *param_2)

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




void FUN_013574d4(int param_1,undefined4 *param_2)

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




uint FUN_013574f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01357530(int param_1,undefined8 *param_2)

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




void FUN_0135755c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    uVar3 = (ulong)param_2;
    do {
      fVar4 = 0.0;
      fVar5 = 0.0;
      if ((0.0 < param_1 && param_1 < 1.0) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_01ce99b0 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01ce99b0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ce99b0 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      *param_3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
                 *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 1.0) && (0.0 < fVar5)) {
        uVar2 = (int)(fVar5 * 64.0) + 1;
        if (uVar2 < 0x40) {
          fVar4 = *(float *)(&DAT_01cd51b0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01cd51b0 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01cd51b0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 4;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_01357668(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_01357678(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 3.0 + -1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013576f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_013576fc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar6 = (ulong)param_2;
    do {
      iVar2 = rand();
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar8 = 1.0;
      if (NAN(fVar7)) {
        fVar7 = (fVar7 + -1.0) / 0.0;
        uVar5 = (uint)(fVar7 * 64.0);
        uVar1 = uVar5 + 1;
        fVar8 = 1.0;
        if (uVar1 < 0x40) {
          fVar7 = fVar7 * 64.0;
          fVar8 = *(float *)(&DAT_01ce89b0 + (ulong)uVar5 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01ce89b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ce89b0 + (ulong)uVar5 * 4));
        }
      }
      iVar3 = rand();
      iVar4 = rand();
      *param_3 = ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) * 20.0;
      param_3[1] = fVar8 * ((float)iVar3 * 4.656613e-10 * 3.0 + -1.0) * 7.0;
      param_4 = param_4 + 1;
      uVar6 = uVar6 - 1;
      param_3[2] = ((float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0) * 20.0;
      param_3 = param_3 + 3;
    } while (uVar6 != 0);
  }
  return param_2;
}




undefined8 FUN_0135786c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357878(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01357888(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01357898(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013578a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013578b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




undefined8 FUN_013578c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_013578d4(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    bVar2 = param_1 < 1.0;
    fVar3 = 0.1;
    if (bVar2) {
      fVar3 = 1.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 0.1;
    }
    do {
      fVar4 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar4 = *(float *)(&DAT_01ce5eb0 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01ce5eb0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ce5eb0 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar4;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_01357968(int param_1,undefined4 *param_2)

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




uint FUN_01357988(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013579c4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01357a00(int param_1,undefined4 *param_2)

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




void FUN_01357a20(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3dcccccd3e4ccccd;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar5 = param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01cd52b0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01cd52b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cd52b0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01357ad0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01357ae0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357aec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357af8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01357b08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357b14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01357b20(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01357b98(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01357ba8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01357bb4(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x420c0000420c0000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01357bd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01357be4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01357c5c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x41f0000042960000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01357c88(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 * 0xc);
  }
  return param_1;
}




void FUN_01357cc4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      *(undefined4 *)(param_3 + 1) = 0x3dcccccd;
      fVar5 = param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01cd52b0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01cd52b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cd52b0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01357d78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01357d88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357d94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357da0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01357db0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01357dbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01357dc8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01357e40(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01357e50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01357e5c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x420c0000420c0000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01357e80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01357e8c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01357f04(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x41f0000042960000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01357f30(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 * 0xc);
  }
  return param_1;
}




void FUN_01357f6c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f8000003dcccccd;
      *(undefined4 *)(param_3 + 1) = 0x3e4ccccd;
      fVar5 = param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01cd52b0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01cd52b0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cd52b0 + (ulong)uVar3 * 4));
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

