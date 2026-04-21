// functions/0178b — 86 functions
#include "libGameKindred.h"




undefined8 FUN_0178b008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41033333;
  return 1;
}




void FUN_0178b01c(int param_1,undefined4 *param_2)

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




uint FUN_0178b03c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0178b078(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0178b0b4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0178b0f0(int param_1,undefined8 *param_2)

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




void FUN_0178b11c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dba4f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dba4f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dba4f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = fVar4;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dba5f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dba5f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dba5f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0178b228(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0178b238(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b244(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b250(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0178b260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b26c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0178b27c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b288(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0178b298(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b2a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000041000000;
  return 1;
}




undefined8 FUN_0178b2b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




undefined8 FUN_0178b2c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41033333;
  return 1;
}




void FUN_0178b2d8(int param_1,undefined4 *param_2)

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




uint FUN_0178b2f8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0178b334(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0178b370(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0178b3ac(int param_1,undefined8 *param_2)

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




void FUN_0178b3d8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01dba6f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01dba6f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dba6f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0178b490(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0178b4a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b4ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0178b4b8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      *param_2 = ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) * 10.0;
      param_2[1] = 2.0;
      iVar1 = iVar1 + -1;
      param_2[2] = ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 10.0;
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0178b55c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b568(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_0178b578(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_0178b588(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0178b598(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.79999995 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0178b614(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.2 + 0.2,
                          (float)uVar4 * 4.656613e-10 * 0.2 + 0.2);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0178b694(int param_1,float *param_2)

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




int FUN_0178b710(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0178b77c(int param_1,undefined4 *param_2)

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




void FUN_0178b79c(int param_1,undefined4 *param_2)

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




void FUN_0178b7bc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_0178b7dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0178b818(int param_1,undefined8 *param_2)

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




void FUN_0178b844(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01dd7cf0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01dd7cf0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd7cf0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_3[3] = 1.0;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0178b8f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0178b908(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0178b918(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b924(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4000000000000000;
  return 1;
}




undefined8 FUN_0178b93c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0178b94c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178b958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




int FUN_0178b968(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (0 < param_1) {
    uVar3 = NEON_fmov(0x3f800000,4);
    iVar1 = param_1;
    do {
      *param_2 = uVar3;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *(float *)((long)param_2 + 0xc) = (float)iVar2 * 4.656613e-10 * 6.28 + 0.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0178b9f8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 3.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0178ba64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003c23d70a;
  return 1;
}




undefined8 FUN_0178ba78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0178ba84(int param_1,float *param_2)

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




void FUN_0178bb04(int param_1,undefined4 *param_2)

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



undefined DAT_01dd62f0;
undefined DAT_01dd63f0;
undefined DAT_01dd65f0;
undefined DAT_01dd7df0;
undefined DAT_01dba7f0;
undefined DAT_01dba8f0;
undefined DAT_01dba9f0;
undefined DAT_01dbaaf0;
undefined DAT_01dbabf0;
undefined DAT_01dc76f0;
undefined DAT_01dbacf0;
undefined DAT_01dbadf0;
undefined DAT_01dbaef0;
undefined DAT_01dbaff0;
undefined DAT_01dbb0f0;
undefined DAT_01dbb1f0;
undefined DAT_01dbb2f0;
undefined DAT_01dbb3f0;
undefined DAT_01dbb4f0;
undefined DAT_01dbb5f0;
undefined4 DAT_01db5b48;
undefined DAT_01dbb6f0;
undefined DAT_01dd21f0;
undefined DAT_01dbb9f0;
undefined DAT_01dbb7f0;
undefined DAT_01dbb8f0;
undefined DAT_01dcf2f0;
undefined DAT_01dd5ff0;
undefined DAT_01dbc3f0;
undefined DAT_01dbbaf0;
undefined DAT_01dd48f0;
undefined DAT_01dbbbf0;
undefined DAT_01dbbcf0;
undefined DAT_01dd5df0;
undefined DAT_01dd76f0;
undefined DAT_01dd50f0;
undefined DAT_01dbbdf0;
undefined DAT_01dccef0;
undefined DAT_01dc14f0;
undefined DAT_01dc15f0;
undefined DAT_01dc16f0;
undefined DAT_01dc17f0;
undefined DAT_01dc18f0;
undefined DAT_01dc19f0;
undefined DAT_01dc1bf0;
undefined DAT_01dc1af0;
undefined DAT_01dbc0f0;
undefined DAT_01dbdaf0;
undefined DAT_01dbe1f0;
undefined DAT_01dbdbf0;
undefined DAT_01dd67f0;
undefined DAT_01dd7ff0;
undefined DAT_01dbdff0;
undefined DAT_01dbe0f0;
undefined DAT_01dccff0;
undefined DAT_01dc23f0;
undefined DAT_01dbc1f0;
undefined DAT_01dd22f0;
undefined DAT_01dbc2f0;
undefined DAT_01dbc4f0;
undefined DAT_01dd23f0;
undefined DAT_01dbc5f0;
undefined DAT_01dc66f0;
undefined DAT_01dc65f0;
undefined DAT_01dbc6f0;
undefined DAT_01dbc7f0;
undefined DAT_01dbc8f0;
undefined DAT_01dbc9f0;
undefined DAT_01dbcaf0;
undefined DAT_01dd28f0;
undefined DAT_01dbccf0;
undefined DAT_01dbcdf0;
undefined DAT_01dbebf0;
undefined DAT_01dbecf0;
undefined DAT_01dbedf0;
undefined DAT_01dbeef0;
undefined DAT_01dbcef0;
undefined DAT_01dc4bf0;
undefined DAT_01dc81f0;
undefined DAT_01dd45f0;
undefined DAT_01dd46f0;
undefined DAT_01dd47f0;
undefined DAT_01dbcff0;
undefined DAT_01dbd0f0;
undefined DAT_01dbd1f0;
undefined DAT_01dbd2f0;
undefined DAT_01dbd3f0;
undefined DAT_01dc1cf0;
undefined DAT_01dbd4f0;
undefined DAT_01dd6bf0;
undefined DAT_01dbd5f0;
undefined DAT_01dbd6f0;
undefined DAT_01dbd7f0;
undefined DAT_01dbd8f0;
undefined DAT_01dbd9f0;
undefined DAT_01dc21f0;
undefined DAT_01dbdcf0;
undefined DAT_01dd06f0;
undefined DAT_01dbddf0;
undefined DAT_01dbdef0;
undefined DAT_01dcaff0;
undefined DAT_01dbe2f0;
undefined DAT_01dcadf0;
undefined DAT_01dcb7f0;
undefined DAT_01dcb8f0;
undefined DAT_01dd43f0;
undefined DAT_01dbe3f0;
undefined DAT_01dc61f0;
undefined DAT_01dbe4f0;
undefined DAT_01dd27f0;
undefined DAT_01dbe5f0;
undefined DAT_01dbe6f0;
undefined DAT_01dd24f0;
undefined DAT_01dbe8f0;
undefined DAT_01dbe7f0;
undefined DAT_01dbe9f0;
undefined DAT_01dbeaf0;
undefined DAT_01dd11f0;
undefined DAT_01dd12f0;
undefined DAT_01dd13f0;
undefined DAT_01dd14f0;
undefined DAT_01dd15f0;
undefined DAT_01dd16f0;
undefined DAT_01dd18f0;
undefined DAT_01dbeff0;
undefined DAT_01dbf1f0;
undefined DAT_01dd1ef0;
undefined DAT_01dceef0;
undefined DAT_01dbf2f0;
undefined DAT_01dbf3f0;
undefined DAT_01dd1af0;
undefined DAT_01dcd0f0;
undefined DAT_01dbf5f0;
undefined DAT_01dbf6f0;
undefined DAT_01dbf7f0;
undefined DAT_01dbf9f0;
undefined DAT_01dbf8f0;
undefined DAT_01dbfaf0;
undefined DAT_01dbfbf0;
undefined DAT_01dbfcf0;
undefined DAT_01dbfdf0;
undefined DAT_01dbfef0;
undefined DAT_01dbfff0;
undefined DAT_01dc00f0;
undefined DAT_01dc02f0;
undefined DAT_01dc03f0;
undefined DAT_01dc04f0;
undefined DAT_01dc05f0;
undefined DAT_01dcdaf0;
undefined DAT_01dcd4f0;
undefined DAT_01dc11f0;
undefined DAT_01dc06f0;
undefined DAT_01dc07f0;
undefined DAT_01dc08f0;
undefined DAT_01dc09f0;
undefined DAT_01dc0af0;
undefined DAT_01dc0bf0;
undefined DAT_01dc0cf0;
undefined DAT_01dc0df0;
undefined DAT_01dc0ef0;
undefined DAT_01dc0ff0;
undefined DAT_01dc10f0;
undefined DAT_01dc12f0;
undefined DAT_01dd4ef0;
undefined DAT_01dd2df0;
undefined DAT_01dc9ff0;
undefined DAT_01dc1df0;
undefined DAT_01dc1ef0;
undefined DAT_01dc1ff0;
undefined4 DAT_01db5b80;
undefined DAT_01dc20f0;
undefined DAT_01dcbcf0;
undefined DAT_01dc22f0;
undefined DAT_01dd0ef0;
undefined DAT_01dc24f0;
undefined DAT_01dc25f0;
undefined DAT_01dd70f0;
undefined DAT_01dcd9f0;
undefined DAT_01dc27f0;
undefined DAT_01dc28f0;
undefined DAT_01dc29f0;
undefined DAT_01dc2af0;
undefined DAT_01dc2bf0;
undefined DAT_01dc2cf0;
undefined DAT_01dc2df0;
undefined DAT_01dc2ef0;
undefined DAT_01dc2ff0;
undefined DAT_01dc30f0;
undefined DAT_01dc31f0;
undefined DAT_01dc32f0;
undefined DAT_01dcd1f0;
undefined DAT_01dc33f0;
undefined DAT_01dc34f0;
undefined DAT_01dc35f0;
undefined DAT_01dc36f0;
undefined DAT_01dc38f0;
undefined DAT_01dc39f0;
undefined DAT_01dc3af0;
undefined DAT_01dc3bf0;
undefined DAT_01dc3cf0;
undefined DAT_01dc3df0;
undefined DAT_01dc3ef0;
undefined DAT_01dc3ff0;
undefined DAT_01dc9af0;
undefined DAT_01dc40f0;
undefined DAT_01dc41f0;
undefined DAT_01dc43f0;
undefined DAT_01dc42f0;
undefined DAT_01dc45f0;
undefined DAT_01dc47f0;
undefined DAT_01dc48f0;
undefined DAT_01dc49f0;
undefined DAT_01dcfbf0;
undefined DAT_01dc4df0;
undefined DAT_01dd0cf0;
undefined DAT_01dd98f0;
undefined DAT_01dcb6f0;
undefined DAT_01dcf4f0;
undefined DAT_01dc50f0;
undefined DAT_01dc4ef0;
undefined DAT_01dc4ff0;
undefined DAT_01dd54f0;
undefined DAT_01dc51f0;
undefined DAT_01dc52f0;
undefined DAT_01dc94f0;
undefined DAT_01dc95f0;
undefined DAT_01dd61f0;
undefined DAT_01dc53f0;
undefined DAT_01dc54f0;
undefined DAT_01dc55f0;
undefined DAT_01dc5af0;
undefined DAT_01dc5bf0;
undefined DAT_01dc5cf0;
undefined DAT_01dc5df0;
undefined DAT_01dc5ef0;
undefined DAT_01dc5ff0;
undefined DAT_01dcabf0;
undefined DAT_01dcc8f0;
undefined DAT_01dc62f0;
undefined DAT_01dc63f0;
undefined DAT_01dc72f0;
undefined DAT_01dc73f0;
undefined DAT_01dc67f0;
undefined DAT_01dc68f0;
undefined DAT_01dc69f0;
undefined DAT_01dc6af0;
undefined DAT_01dc6bf0;
undefined DAT_01dc6cf0;
undefined DAT_01dc6df0;
undefined DAT_01dc6ef0;
undefined DAT_01dc6ff0;
undefined DAT_01dc70f0;
undefined DAT_01dc71f0;
undefined DAT_01dc74f0;
undefined DAT_01dc75f0;
undefined DAT_01dc77f0;
undefined DAT_01dc78f0;
undefined DAT_01dc79f0;
undefined DAT_01dc7af0;
undefined DAT_01dc7bf0;
undefined DAT_01dc7cf0;
undefined DAT_01dc7df0;
undefined DAT_01dc7ef0;
undefined DAT_01dc7ff0;
undefined DAT_01dc80f0;
undefined DAT_01dc82f0;
undefined DAT_01dc83f0;
undefined DAT_01dc86f0;
undefined DAT_01dc87f0;
undefined DAT_01dcd3f0;
undefined DAT_01dc88f0;
undefined DAT_01dc89f0;
undefined DAT_01dcd5f0;
undefined DAT_01dc8af0;
undefined DAT_01dcd7f0;
undefined DAT_01dc8bf0;
undefined DAT_01dcd8f0;
undefined DAT_01dc8cf0;
undefined DAT_01dc8df0;
undefined DAT_01dc8ef0;
undefined DAT_01dc8ff0;
undefined DAT_01dc90f0;
undefined DAT_01dc91f0;
undefined DAT_01dc92f0;
undefined DAT_01dc93f0;
undefined DAT_01dce0f0;
undefined DAT_01dc96f0;
undefined DAT_01dc98f0;
undefined DAT_01dce8f0;
undefined DAT_01dc99f0;
undefined DAT_01dc9bf0;
undefined DAT_01dc9cf0;
undefined DAT_01dc9df0;
undefined DAT_01dc9ef0;
undefined DAT_01dd41f0;
undefined DAT_01dca0f0;
undefined DAT_01dca1f0;
undefined DAT_01dca2f0;
undefined DAT_01dca4f0;
undefined DAT_01dca5f0;
undefined DAT_01dca6f0;
undefined DAT_01dca7f0;
undefined DAT_01dcaaf0;
undefined DAT_01dcacf0;
undefined DAT_01dcaef0;
undefined DAT_01dcb1f0;
undefined DAT_01dcb2f0;
undefined DAT_01dcb3f0;
undefined DAT_01dcb4f0;
undefined DAT_01dcb5f0;
undefined DAT_01dcb9f0;
undefined DAT_01dcbaf0;
undefined DAT_01dcbbf0;
undefined DAT_01dcc0f0;
undefined DAT_01dcc1f0;
undefined DAT_01dcc2f0;
undefined DAT_01dcc3f0;
undefined DAT_01dcc4f0;
undefined DAT_01dcc5f0;
undefined DAT_01dcc7f0;
undefined DAT_01dcc9f0;
undefined DAT_01dccaf0;
undefined DAT_01dccbf0;
undefined DAT_01dcccf0;
undefined DAT_01dda9f0;
undefined DAT_01dccdf0;
undefined DAT_01dd4bf0;
undefined DAT_01dcd2f0;
undefined DAT_01dd57f0;
undefined DAT_01dceaf0;

void FUN_0178bb24(int param_1,undefined4 *param_2)

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




void FUN_0178bb44(int param_1,undefined4 *param_2)

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




uint FUN_0178bb64(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0178bba0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      fVar5 = 0.0;
      if ((fVar6 < 0.2) && (fVar5 = 1.0, 0.1 < fVar6)) {
        fVar6 = (fVar6 + -0.1) / 0.1;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01dd5ef0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01dd5ef0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd5ef0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 0.9) && (fVar4 = 1.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.79999995;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01dd17f0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dd17f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd17f0 + (ulong)uVar3 * 4));
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




undefined8 FUN_0178bce8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0178bcf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bd04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bd10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0178bd20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bd2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0178bd3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_0178bd4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0178bd5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_0178bd70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3fc000003e19999a;
  return 1;
}




undefined8 FUN_0178bd84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bd90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_0178bda0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0178bddc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0178be18(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01dd62f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01dd62f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd62f0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_0178bed0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0178bee0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -0.4;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.4;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dd63f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dd63f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd63f0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 10.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0178bf8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bf98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0178bfa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bfb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0178bfc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bfd0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0178bfe0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0178bfec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_0178bffc(int param_1,float *param_2)

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

