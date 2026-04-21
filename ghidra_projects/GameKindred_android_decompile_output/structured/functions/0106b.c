// functions/0106b — 69 functions
#include "libGameKindred.h"




uint FUN_0106b00c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0106b048(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0106b084(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar6 = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      fVar7 = 0.946667;
      if (fVar4 < 1.0) {
        fVar5 = 0.0;
        if (0.5 < fVar4) {
          fVar6 = fVar4 + -0.5 + fVar4 + -0.5;
          uVar3 = (uint)(fVar6 * 64.0);
          uVar1 = uVar3 + 1;
          fVar5 = 1.0;
          if (uVar1 < 0x40) {
            fVar6 = fVar6 * 64.0;
            fVar5 = *(float *)(&DAT_01c34d40 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01c34d40 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c34d40 + (ulong)uVar3 * 4));
          }
        }
        fVar6 = 1.0;
        if (0.8 < fVar4) {
          fVar7 = (fVar4 + -0.8) / 0.19999999;
          uVar3 = (uint)(fVar7 * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = 0.0;
          if (uVar1 < 0x40) {
            fVar7 = fVar7 * 64.0;
            fVar6 = *(float *)(&DAT_01c34e40 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01c34e40 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c34e40 + (ulong)uVar3 * 4));
          }
        }
        fVar7 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          fVar7 = 0.946667;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01c34f40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                    (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                    (*(float *)(&DAT_01c34f40 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c34f40 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
          }
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_3[2] = fVar7;
      param_3[3] = 1.0;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0106b204(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0106b214(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0106b224(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106b230(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4000000000000000;
  return 1;
}




undefined8 FUN_0106b248(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106b254(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0106b264(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_0106b274(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0106b284(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.59999996 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0106b304(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f800000;
  return 1;
}




int FUN_0106b318(int param_1,float *param_2)

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




undefined8 FUN_0106b394(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




void FUN_0106b3a4(int param_1,undefined4 *param_2)

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




void FUN_0106b3c4(int param_1,undefined4 *param_2)

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




void FUN_0106b3e8(int param_1,undefined4 *param_2)

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




void FUN_0106b40c(int param_1,undefined4 *param_2)

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




void FUN_0106b42c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.1, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01c35040 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c35040 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c35040 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c38240 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c38240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c38240 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0106b554(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0106b564(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 0.5) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + fVar4) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + fVar4) * 64.0;
          fVar5 = *(float *)(&DAT_01c38140 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c38140 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c38140 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * 20.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0106b618(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106b624(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0106b634(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106b640(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0106b650(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106b65c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0106b66c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_0106b680(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




int FUN_0106b698(int param_1,float *param_2)

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




int FUN_0106b714(int param_1,float *param_2)

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




void FUN_0106b784(int param_1,undefined4 *param_2)

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




uint FUN_0106b7a4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0106b7e0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.3;
      if ((fVar3 < 1.0) && (fVar4 = -0.1, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.3;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c35140 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c35140 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c35140 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c37f40 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c37f40 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c37f40 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0106b908(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0106b918(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0106b928(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106b934(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4000000000000000;
  return 1;
}




undefined8 FUN_0106b94c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0106b95c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0106b96c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106b978(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0106b988(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 4.0 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0106ba00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




int FUN_0106ba18(int param_1,float *param_2)

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




int FUN_0106ba94(int param_1,float *param_2)

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




void FUN_0106bb14(int param_1,undefined4 *param_2)

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




uint FUN_0106bb34(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0106bb70(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 0.4) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.4) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 / 0.4) * 64.0;
          fVar6 = *(float *)(&DAT_01c35240 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c35240 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c35240 + (ulong)uVar3 * 4));
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




undefined8 FUN_0106bc2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0106bc3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe99999a;
  return 1;
}




undefined8 FUN_0106bc50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0106bc5c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      *param_2 = ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) * 30.0;
      param_2[1] = -10.0;
      iVar1 = iVar1 + -1;
      param_2[2] = ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 30.0;
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0106bd00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




int FUN_0106bd10(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 15.0 + 15.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0106bd7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106bd88(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0106bd98(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 8.0 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0106be10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f19999a3dcccccd;
  return 1;
}




undefined8 FUN_0106be24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0106be30(int param_1,float *param_2)

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



undefined DAT_01c35340;
undefined DAT_01c35440;
undefined DAT_01c35540;
undefined DAT_01c35640;
undefined DAT_01c35740;
undefined DAT_01c35840;
undefined DAT_01c35940;
undefined DAT_01c35a40;
undefined DAT_01c35b40;
undefined DAT_01c35c40;
undefined DAT_01c35d40;
undefined DAT_01c35e40;
undefined DAT_01c35f40;
undefined DAT_01c36340;
undefined DAT_01c36440;
undefined DAT_01c36c40;
undefined DAT_01c37040;
undefined DAT_01c37140;
undefined DAT_01c37a40;
undefined DAT_01c37b40;
undefined DAT_01c37d40;
undefined DAT_01c37e40;
undefined DAT_01c38040;
undefined DAT_01c38440;
undefined DAT_01c38540;
undefined DAT_01c5c250;
undefined DAT_01c5c950;
undefined DAT_01c5cb50;
undefined DAT_01c58b50;
undefined DAT_01c5bc50;
undefined DAT_01c45750;
undefined DAT_01c4bb50;
undefined DAT_01c38d50;
undefined DAT_01c38e50;
undefined DAT_01c4ba50;
undefined DAT_01c55b50;
undefined DAT_01c4e650;
undefined DAT_01c53e50;
undefined DAT_01c38f50;
undefined DAT_01c39050;
undefined DAT_01c44750;
undefined DAT_01c4df50;
undefined DAT_01c4e050;
undefined DAT_01c3f950;
undefined DAT_01c57650;
undefined DAT_01c45b50;
undefined DAT_01c46850;
undefined DAT_01c59350;
undefined DAT_01c39150;
undefined DAT_01c48850;
undefined DAT_01c39250;
undefined DAT_01c42c50;
undefined DAT_01c47c50;
undefined DAT_01c55650;
undefined DAT_01c39350;
undefined DAT_01c54350;
undefined DAT_01c5a250;
undefined DAT_01c4bd50;
undefined DAT_01c39450;
undefined DAT_01c5c350;
undefined DAT_01c57450;
undefined DAT_01c52450;
undefined DAT_01c39e50;
undefined DAT_01c39550;
undefined DAT_01c50e50;
undefined DAT_01c52050;
undefined DAT_01c59b50;
undefined DAT_01c39650;
undefined DAT_01c57750;
undefined DAT_01c39750;
undefined DAT_01c39850;
undefined DAT_01c39950;
undefined DAT_01c39a50;
undefined DAT_01c5cc50;
undefined DAT_01c5c550;
undefined DAT_01c39b50;
undefined DAT_01c3be50;
undefined DAT_01c48050;
undefined DAT_01c39c50;
undefined DAT_01c56550;
undefined DAT_01c59a50;
undefined DAT_01c5a450;
undefined DAT_01c39d50;
undefined DAT_01c4f750;
undefined DAT_01c56d50;
undefined DAT_01c51f50;
undefined DAT_01c39f50;
undefined DAT_01c3a050;
undefined DAT_01c3a150;
undefined DAT_01c4b650;
undefined DAT_01c3a250;
undefined DAT_01c51950;
undefined DAT_01c3a350;
undefined DAT_01c3a450;
undefined DAT_01c3a550;
undefined DAT_01c3a650;
undefined DAT_01c3a750;
undefined DAT_01c49e50;
undefined DAT_01c4a050;
undefined DAT_01c49f50;
undefined DAT_01c50a50;
undefined DAT_01c3a850;
undefined DAT_01c3a950;
undefined DAT_01c3aa50;
undefined DAT_01c3ab50;
undefined DAT_01c3ac50;
undefined DAT_01c3ad50;
undefined DAT_01c3ae50;
undefined DAT_01c51b50;
undefined DAT_01c3af50;
undefined DAT_01c3b050;
undefined DAT_01c3b850;
undefined DAT_01c3ba50;
undefined DAT_01c3b150;
undefined DAT_01c3b650;
undefined DAT_01c3b250;
undefined DAT_01c3b550;
undefined DAT_01c3b350;
undefined DAT_01c51550;
undefined DAT_01c3b450;
undefined DAT_01c3b750;
undefined DAT_01c3b950;
undefined DAT_01c42e50;
undefined DAT_01c4cc50;
undefined DAT_01c44650;
undefined DAT_01c51350;
undefined DAT_01c3bb50;
undefined DAT_01c52250;
undefined DAT_01c3bc50;
undefined DAT_01c3bd50;
undefined DAT_01c4d550;
undefined DAT_01c50f50;
undefined DAT_01c51150;
undefined DAT_01c5a150;
undefined DAT_01c3bf50;
undefined DAT_01c3c050;
undefined DAT_01c3c150;
undefined DAT_01c3c250;
undefined DAT_01c3c350;
undefined DAT_01c3c450;
undefined DAT_01c3c550;
undefined8 DAT_01c1b110;
undefined DAT_01c3c650;
undefined DAT_01c46c50;
undefined DAT_01c3c750;
undefined DAT_01c3c850;
undefined DAT_01c3c950;
undefined DAT_01c38ac0;
undefined DAT_01c3ca50;
undefined DAT_01c3cb50;
undefined DAT_01c3cc50;
undefined4 DAT_01c38ac8;
undefined DAT_01c3cd50;
undefined DAT_01c3ce50;
undefined DAT_01c3d550;
undefined DAT_01c3d650;
undefined DAT_01c3d750;
undefined DAT_01c3cf50;
undefined DAT_01c3d050;
undefined DAT_01c3d150;
undefined DAT_01c3d250;
undefined DAT_01c3d350;
undefined DAT_01c3d450;
undefined DAT_01c4e950;
undefined DAT_01c4ea50;
undefined DAT_01c4eb50;
undefined DAT_01c4ec50;
undefined DAT_01c4ed50;
undefined DAT_01c4ee50;
undefined DAT_01c4ef50;
undefined DAT_01c4f050;
undefined DAT_01c4f150;
undefined DAT_01c4f250;
undefined DAT_01c4f350;
undefined DAT_01c4f450;
undefined DAT_01c3d850;
undefined DAT_01c3d950;
undefined DAT_01c3da50;
undefined DAT_01c3db50;
undefined DAT_01c3dc50;
undefined DAT_01c3dd50;
undefined DAT_01c3de50;
undefined DAT_01c3df50;
undefined DAT_01c49b50;
undefined DAT_01c3e050;
undefined DAT_01c55550;
undefined DAT_01c3e150;
undefined DAT_01c3e250;
undefined DAT_01c4fd50;
undefined DAT_01c4fe50;
undefined DAT_01c3e350;
undefined DAT_01c3e450;
undefined DAT_01c3e550;
undefined DAT_01c3e650;
undefined DAT_01c3e750;
undefined DAT_01c53750;
undefined DAT_01c49d50;
undefined DAT_01c3e850;
undefined DAT_01c3e950;
undefined DAT_01c3ea50;
undefined DAT_01c3eb50;
undefined DAT_01c3ec50;
undefined DAT_01c3ed50;
undefined DAT_01c3ee50;
undefined DAT_01c3ef50;
undefined DAT_01c3f050;
undefined DAT_01c54b50;
undefined DAT_01c3f150;
undefined DAT_01c3f250;
undefined DAT_01c3f350;
undefined DAT_01c3f450;
undefined DAT_01c3f550;
undefined DAT_01c43150;
undefined DAT_01c3f650;
undefined DAT_01c3f750;
undefined DAT_01c3f850;
undefined DAT_01c3fa50;
undefined DAT_01c3fb50;
undefined DAT_01c3fc50;
undefined DAT_01c3fd50;
undefined DAT_01c3fe50;
undefined DAT_01c45250;
undefined DAT_01c3ff50;
undefined DAT_01c40050;
undefined DAT_01c40150;
undefined DAT_01c40250;
undefined DAT_01c56850;
undefined DAT_01c4d250;
undefined DAT_01c4d350;
undefined DAT_01c40350;
undefined DAT_01c41250;
undefined DAT_01c41350;
undefined DAT_01c50150;
undefined DAT_01c40450;
undefined DAT_01c40550;
undefined DAT_01c40750;
undefined DAT_01c40650;
undefined DAT_01c40850;
undefined DAT_01c45d50;
undefined DAT_01c40950;
undefined DAT_01c40a50;
undefined DAT_01c4a850;
undefined DAT_01c40b50;
undefined DAT_01c43450;
undefined DAT_01c43550;
undefined DAT_01c56b50;
undefined DAT_01c40c50;
undefined DAT_01c56e50;
undefined DAT_01c5c150;
undefined DAT_01c40d50;
undefined DAT_01c40e50;
undefined DAT_01c40f50;
undefined DAT_01c41050;
undefined DAT_01c41150;
undefined DAT_01c57150;
undefined DAT_01c41450;
undefined DAT_01c41550;
undefined DAT_01c59050;
undefined DAT_01c41650;
undefined DAT_01c41750;
undefined DAT_01c41850;
undefined DAT_01c41950;
undefined DAT_01c41a50;
undefined DAT_01c41b50;
undefined DAT_01c41c50;
undefined DAT_01c41d50;
undefined DAT_01c4de50;
undefined DAT_01c41e50;
undefined DAT_01c41f50;
undefined DAT_01c42050;
undefined DAT_01c42150;
undefined DAT_01c42250;
undefined DAT_01c42350;
undefined DAT_01c42450;
undefined DAT_01c42550;
undefined DAT_01c42650;
undefined DAT_01c42750;
undefined DAT_01c42850;
undefined DAT_01c42950;
undefined DAT_01c4e250;
undefined DAT_01c42a50;
undefined DAT_01c42b50;
undefined DAT_01c48150;
undefined DAT_01c50c50;
undefined DAT_01c42d50;
undefined DAT_01c42f50;
undefined DAT_01c43050;
undefined DAT_01c54550;
undefined DAT_01c4e550;
undefined DAT_01c48a50;
undefined DAT_01c4f850;
undefined DAT_01c56650;
undefined DAT_01c43250;
undefined DAT_01c43350;
undefined DAT_01c43650;
undefined DAT_01c43750;
undefined DAT_01c47d50;
undefined DAT_01c43850;
undefined DAT_01c43950;
undefined DAT_01c4b850;
undefined DAT_01c43a50;
undefined DAT_01c43b50;
undefined DAT_01c43c50;
undefined DAT_01c43d50;
undefined DAT_01c43e50;
undefined DAT_01c46150;
undefined DAT_01c43f50;
undefined DAT_01c44050;
undefined DAT_01c44150;
undefined DAT_01c44250;
undefined DAT_01c48450;
undefined DAT_01c44350;
undefined DAT_01c44450;
undefined DAT_01c48d50;
undefined DAT_01c44550;
undefined DAT_01c57550;
undefined DAT_01c57c50;
undefined DAT_01c44850;
undefined DAT_01c44950;
undefined DAT_01c56750;
undefined DAT_01c48250;
undefined DAT_01c44a50;
undefined DAT_01c44b50;
undefined DAT_01c44c50;
undefined DAT_01c44d50;
undefined DAT_01c44e50;
undefined DAT_01c45050;
undefined DAT_01c44f50;
undefined DAT_01c45150;
undefined DAT_01c45350;
undefined DAT_01c51d50;
undefined DAT_01c51e50;
undefined DAT_01c45450;
undefined DAT_01c45550;
undefined DAT_01c45650;
undefined DAT_01c45850;
undefined DAT_01c45950;
undefined DAT_01c45a50;
undefined DAT_01c4d650;
undefined DAT_01c4d750;
undefined DAT_01c4d850;
undefined DAT_01c4d950;
undefined DAT_01c4da50;
undefined DAT_01c4db50;
undefined DAT_01c4dc50;
undefined DAT_01c4dd50;
undefined DAT_01c46b50;
undefined DAT_01c45c50;
undefined DAT_01c45e50;
undefined DAT_01c45f50;
undefined DAT_01c5ab50;
undefined DAT_01c46050;
undefined DAT_01c49750;
undefined DAT_01c46250;
undefined DAT_01c46650;
undefined DAT_01c46350;
undefined DAT_01c46450;
undefined DAT_01c46550;
undefined DAT_01c46750;
undefined DAT_01c46950;
undefined DAT_01c47e50;
undefined DAT_01c46a50;
undefined DAT_01c46d50;
undefined DAT_01c46e50;
undefined DAT_01c46f50;
undefined DAT_01c47050;
undefined DAT_01c47150;
undefined DAT_01c47250;
undefined DAT_01c47350;
undefined DAT_01c47450;
undefined DAT_01c47550;
undefined DAT_01c47950;
undefined DAT_01c47a50;
undefined DAT_01c47650;
undefined DAT_01c47750;
undefined DAT_01c47850;
undefined DAT_01c47b50;
undefined DAT_01c47f50;
undefined DAT_01c48350;
undefined DAT_01c55c50;
undefined DAT_01c48550;
undefined DAT_01c48650;
undefined DAT_01c48750;
undefined DAT_01c48950;
undefined DAT_01c48b50;
undefined DAT_01c48c50;
undefined DAT_01c48e50;
undefined DAT_01c48f50;
undefined DAT_01c49050;
undefined DAT_01c49150;
undefined DAT_01c49450;
undefined DAT_01c49550;
undefined DAT_01c49250;
undefined DAT_01c49350;
undefined DAT_01c49650;
undefined DAT_01c4b950;
undefined DAT_01c4bc50;
undefined DAT_01c56f50;
undefined DAT_01c57050;
undefined DAT_01c49850;
undefined DAT_01c49950;
undefined DAT_01c49a50;
undefined DAT_01c49c50;
undefined DAT_01c4f550;
undefined DAT_01c4a150;
undefined DAT_01c4a250;
undefined DAT_01c4a350;
undefined DAT_01c4a450;
undefined DAT_01c59c50;
undefined DAT_01c52150;
undefined DAT_01c4a550;
undefined DAT_01c4a650;
undefined DAT_01c4a750;
undefined DAT_01c4ab50;
undefined DAT_01c4a950;
undefined DAT_01c4aa50;
undefined DAT_01c4ac50;
undefined DAT_01c4ad50;

void FUN_0106beb0(int param_1,undefined4 *param_2)

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




uint FUN_0106bed0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0106bf0c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c38140 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c38140 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c38140 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0106bfc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0106bfd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_0106bfe4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0106bff0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}

