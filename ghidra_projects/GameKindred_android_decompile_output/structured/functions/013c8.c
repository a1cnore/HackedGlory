// functions/013c8 — 64 functions
#include "libGameKindred.h"




undefined8 FUN_013c8008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013c8014(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.2 + 0.05;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013c8094(int param_1,undefined4 *param_2)

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




int FUN_013c80b4(int param_1,float *param_2)

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




void FUN_013c8120(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01cef910 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01cef910 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cef910 + (ulong)uVar3 * 4));
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




undefined8 FUN_013c81d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c81e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c81f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c8200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c8210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c821c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_013c822c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c8238(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013c8248(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_013c8254(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (0 < param_1) {
    uVar1 = NEON_fmov(0x41400000,4);
    do {
      param_1 = param_1 + -1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_013c8274(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




undefined8 FUN_013c8284(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




uint FUN_013c8294(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013c82d0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013c830c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      fVar6 = 0.3;
      if (fVar5 < 1.0) {
        fVar4 = 0.0;
        fVar6 = 0.0;
        if (-0.0 < fVar5) {
          uVar3 = (uint)((fVar5 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = 0.3;
          if (uVar1 < 0x40) {
            fVar6 = (fVar5 + 0.0) * 64.0;
            fVar6 = *(float *)(&DAT_01cefa10 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01cefa10 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cefa10 + (ulong)uVar3 * 4));
          }
        }
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_01cefb10 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                    (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                    (*(float *)(&DAT_01cefb10 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cefb10 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = param_1;
      param_3[2] = fVar4;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = -0.0;
      if ((fVar4 < 1.0) && (fVar6 = 2.0, 0.05 < fVar4)) {
        fVar4 = (fVar4 + -0.05) / 0.95;
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = fVar4 * 64.0;
          fVar6 = *(float *)(&DAT_01cefc10 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01cefc10 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cefc10 + (ulong)uVar3 * 4));
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




undefined8 FUN_013c84a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_013c84b0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.1;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01cefd10 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01cefd10 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cefd10 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 20.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_013c855c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c8568(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c8578(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013c8588(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_013c8598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c85a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_013c85b4(int param_1,float *param_2)

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




int FUN_013c8620(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.8 + 0.2,
                          (float)uVar4 * 4.656613e-10 * 0.8 + 0.2);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_013c86b4(int param_1,float *param_2)

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




int FUN_013c8730(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.099999994 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013c87b0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x435c0000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013c87d0(int param_1,undefined4 *param_2)

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




void FUN_013c87f0(int param_1,undefined4 *param_2)

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




void FUN_013c8810(int param_1,undefined4 *param_2)

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




void FUN_013c8830(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 2.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01cefe10 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01cefe10 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cefe10 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar4;
      param_3[2] = 0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = -0.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = -0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01ceff10 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01ceff10 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ceff10 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_013c8950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_013c8960(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    do {
      fVar2 = 0.0;
      if ((0.0 < param_1 && param_1 < 1.0) && uVar1 < 0x40) {
        fVar2 = *(float *)(&DAT_01cf0010 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01cf0010 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01cf0010 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar2 * 4.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_013c89e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c89f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c8a04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c8a10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_013c8a20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c8a2c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013c8a3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_013c8a50(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4100000040c00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_013c8a74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2b40000;
  return 1;
}




undefined8 FUN_013c8a84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




void FUN_013c8a98(int param_1,undefined4 *param_2)

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




uint FUN_013c8ab8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013c8af4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_01cfab10 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01cfab10 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cfab10 + (ulong)uVar3 * 4));
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




undefined8 FUN_013c8bb8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013c8bc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c8bd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013c8be0(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x41200000,4);
    uVar6 = NEON_fmov(0x40a00000,4);
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
      *(float *)(param_2 + 1) = (float)iVar2 * 4.656613e-10 * -10.0 + 5.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_013c8ca0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar4 = (ulong)param_2;
    do {
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -1.0;
      fVar7 = -4.0;
      if (fVar6 < 0.775) {
        fVar7 = -4.0;
        fVar5 = -1.0;
        if (0.0 < fVar6) {
          uVar3 = (uint)((fVar6 / 0.775) * 64.0);
          uVar1 = uVar3 + 1;
          fVar5 = (fVar6 / 0.775) * 64.0;
          fVar7 = -1.0;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01cf0110 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_01cf0110 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cf0110 + (ulong)uVar3 * 4));
          }
          fVar7 = fVar7 * 4.0;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_01cf0110 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_01cf0110 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cf0110 + (ulong)uVar3 * 4));
          }
          else {
            fVar5 = -1.0;
          }
        }
      }
      iVar2 = rand();
      uVar4 = uVar4 - 1;
      *param_3 = fVar7 + ((fVar5 + 1.1) * 12.0 - fVar7) * (float)iVar2 * 4.656613e-10;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_013c8e24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_013c8e34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013c8e40(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_013c8e50(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 6.0 + -1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_013c8ec8(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.5 + 0.5,
                          (float)uVar4 * 4.656613e-10 * 0.5 + 0.5);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_013c8f40(int param_1,float *param_2)

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




int FUN_013c8fbc(int param_1,float *param_2)

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

