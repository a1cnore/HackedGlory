// functions/01792 — 58 functions
#include "libGameKindred.h"




uint FUN_01792050(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0179208c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_017920c8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01792104(int param_1,undefined4 *param_2)

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




void FUN_01792124(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0xbf80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_01792150(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      *(undefined4 *)(param_3 + 1) = 0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01dbb0f0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dbb0f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dbb0f0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01792210(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01792220(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_01792230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0179223c(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc080000000000000;
  return 1;
}




undefined8 FUN_01792254(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01792260(int param_1,float *param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = (1.0 - *param_5) * 10.0;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01792290(int param_1,float *param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = (1.0 - *param_5) * 100.0;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_017922c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017922d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




int FUN_017922e4(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x3f800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 +
                          (float)((ulong)uVar5 >> 0x20),(float)uVar4 * 4.656613e-10 + (float)uVar5);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01792358(int param_1,float *param_2)

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




int FUN_017923d4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.10000001 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01792454(int param_1,undefined4 *param_2)

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




void FUN_01792474(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01792494(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_017924b4(int param_1,undefined4 *param_2)

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




void FUN_017924d4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.284108;
      if ((fVar4 < 1.00452) && (fVar5 = 0.2, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 1.00452) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.284108;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 1.00452) * 64.0;
          fVar5 = *(float *)(&DAT_01dbb1f0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dbb1f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dbb1f0 + (ulong)uVar3 * 4));
        }
      }
      fVar7 = 1.0;
      fVar6 = 0.8;
      if ((fVar4 < 1.0) && (fVar7 = 0.0, fVar6 = 0.4, 0.0 < fVar4)) {
        uVar3 = (uint)(fVar4 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = fVar4 * 64.0;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01dbb3f0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01dbb3f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dbb3f0 + (ulong)uVar3 * 4));
          fVar6 = *(float *)(&DAT_01dbb2f0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01dbb2f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dbb2f0 + (ulong)uVar3 * 4));
        }
        else {
          fVar7 = 1.0;
          fVar6 = 0.8;
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




void FUN_0179263c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_2) {
    fVar2 = param_1 * 0.25 - (float)(int)(param_1 * 0.25);
    uVar1 = (int)(fVar2 * 64.0) + 1;
    do {
      fVar3 = -0.2;
      if (fVar2 < 1.0 && (0.0 < fVar2 && uVar1 < 0x40)) {
        fVar3 = *(float *)(&DAT_01dbb4f0 + (ulong)(uint)(int)(fVar2 * 64.0) * 4) +
                (fVar2 * 64.0 - (float)(int)(fVar2 * 64.0)) *
                (*(float *)(&DAT_01dbb4f0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01dbb4f0 + (ulong)(uint)(int)(fVar2 * 64.0) * 4));
      }
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = fVar3;
      param_2 = param_2 + -1;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




void FUN_017926dc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.99999;
      if ((fVar4 < 1.01333) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 1.01333) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.99999;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 1.01333) * 64.0;
          fVar5 = *(float *)(&DAT_01dbb5f0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dbb5f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dbb5f0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01792788(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43020000;
  return 1;
}




undefined8 FUN_01792798(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3e800000,4);
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017927ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_017927c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_017927cc(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < param_2) {
    fVar4 = param_1 * 0.05 - (float)(int)(param_1 * 0.05);
    bVar2 = 0.997454 <= fVar4;
    fVar5 = (fVar4 + -0.007416) / 0.990038;
    fVar6 = fVar5 * 64.0;
    uVar3 = (uint)(fVar5 * 64.0);
    uVar1 = uVar3 + 1;
    fVar5 = (float)(&DAT_01db5b48)[bVar2];
    if (!bVar2 && 0.007416 < fVar4) {
      fVar5 = -0.001842;
    }
    do {
      fVar7 = fVar5;
      if ((!bVar2 && 0.007416 < fVar4) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01dbb6f0 + (ulong)uVar3 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01dbb6f0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01dbb6f0 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar7 * 10.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_017928a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_017928b8(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar6 = param_1 * 0.05 - (float)(int)(param_1 * 0.05);
    bVar3 = 0.997454 <= fVar6;
    fVar7 = (fVar6 + -0.007416) / 0.990038;
    fVar8 = fVar7 * 64.0;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    iVar2 = param_2;
    fVar7 = (float)(&DAT_01db5b48)[bVar3];
    if (!bVar3 && 0.007416 < fVar6) {
      fVar7 = -0.001842;
    }
    do {
      iVar4 = rand();
      fVar9 = fVar7;
      if ((!bVar3 && 0.007416 < fVar6) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01dbb6f0 + (ulong)uVar5 * 4) +
                (fVar8 - (float)(int)fVar8) *
                (*(float *)(&DAT_01dbb6f0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01dbb6f0 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = (float)iVar4 * 4.656613e-10 * 1.5 + 1.0 + fVar9 * 10.0 * 0.05;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_01792a18(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.19999999 + 0.55,
                          (float)uVar4 * 4.656613e-10 * 0.19999999 + 0.55);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01792aac(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + -180.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01792b2c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01792b94(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4000000040000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




int FUN_01792bb4(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0x3e8000003f800000;
      iVar1 = iVar1 + -1;
      *(float *)(param_2 + 1) = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01792c38(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01792c48(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01792c58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01792c64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01792c70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01792c80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01792c8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01792c9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01792cac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01792cbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01792cc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x412000003d4ccccd;
  return 1;
}




undefined8 FUN_01792cdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01792ce8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_01792cfc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01792d38(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01792d74(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01792db0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01792dec(int param_1,undefined8 *param_2)

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




void FUN_01792e18(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.2;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dce1f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01dce1f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dce1f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      fVar6 = 1.0;
      if ((fVar5 < 0.7) && (fVar6 = 0.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.59999996;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar6 = *(float *)(&DAT_01dd21f0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dd21f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd21f0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = fVar6;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01dd84f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01dd84f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dd84f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_01792fac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_01792fbc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 3.0 + 4.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

