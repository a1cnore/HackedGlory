// functions/00f49 — 49 functions
#include "libGameKindred.h"




undefined8 FUN_00f49070(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f49080(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f4908c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f49098(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f490a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00f490b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f490c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_00f490d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_00f490e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_00f490f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003fc00000;
  return 1;
}




undefined8 FUN_00f4910c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f49118(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_00f4912c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_00f49168(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_00f491a4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.5) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + fVar4) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + fVar4) * 64.0;
          fVar5 = *(float *)(&DAT_01c1a480 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c1a480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c1a480 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c14a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c14a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c14a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_00f492bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f492cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_00f492dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43160000;
  return 1;
}




undefined8 FUN_00f492ec(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc170000000000000;
  return 1;
}




undefined8 FUN_00f49304(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f49310(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_00f49320(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_00f49330(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_00f49340(int param_1,float *param_2)

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




int FUN_00f493ac(int param_1,undefined8 *param_2)

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




int FUN_00f49424(int param_1,float *param_2)

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




int FUN_00f494a0(int param_1,float *param_2)

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




void FUN_00f4950c(int param_1,undefined4 *param_2)

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




void FUN_00f4952c(int param_1,undefined4 *param_2)

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




uint FUN_00f4954c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_9c;
  float local_94;
  
  if (0 < (int)param_2) {
    fVar12 = 0.293333;
    local_94 = 0.8;
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar7 = (ulong)param_2;
    local_9c = -0.0;
    do {
      iVar3 = rand();
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar11 = fVar12;
      if ((fVar8 < 0.986667) && (fVar11 = local_94, 0.2 < fVar8)) {
        fVar8 = (fVar8 + -0.2) / 0.786667;
        uVar6 = (uint)(fVar8 * 64.0);
        uVar1 = uVar6 + 1;
        fVar11 = fVar12;
        if (uVar1 < 0x40) {
          fVar8 = fVar8 * 64.0;
          fVar11 = *(float *)(&DAT_01bfae80 + (ulong)uVar6 * 4) +
                   (fVar8 - (float)(int)fVar8) *
                   (*(float *)(&DAT_01bfae80 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01bfae80 + (ulong)uVar6 * 4));
        }
      }
      iVar4 = rand();
      fVar9 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar8 = fVar12;
      if ((fVar9 < 0.986667) && (fVar8 = local_94, 0.2 < fVar9)) {
        fVar9 = (fVar9 + -0.2) / 0.786667;
        uVar6 = (uint)(fVar9 * 64.0);
        uVar1 = uVar6 + 1;
        fVar8 = fVar12;
        if (uVar1 < 0x40) {
          fVar9 = fVar9 * 64.0;
          fVar8 = *(float *)(&DAT_01bfae80 + (ulong)uVar6 * 4) +
                  (fVar9 - (float)(int)fVar9) *
                  (*(float *)(&DAT_01bfae80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01bfae80 + (ulong)uVar6 * 4));
        }
      }
      iVar5 = rand();
      fVar10 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar9 = fVar12;
      if ((fVar10 < 0.986667) && (fVar9 = local_94, 0.2 < fVar10)) {
        fVar10 = (fVar10 + -0.2) / 0.786667;
        uVar6 = (uint)(fVar10 * 64.0);
        uVar1 = uVar6 + 1;
        fVar9 = fVar12;
        if (uVar1 < 0x40) {
          fVar10 = fVar10 * 64.0;
          fVar9 = *(float *)(&DAT_01bfae80 + (ulong)uVar6 * 4) +
                  (fVar10 - (float)(int)fVar10) *
                  (*(float *)(&DAT_01bfae80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01bfae80 + (ulong)uVar6 * 4));
        }
      }
      *param_3 = ((float)iVar3 * 4.656613e-10 + 0.0) * fVar11;
      param_3[1] = ((float)iVar4 * 4.656613e-10 + 0.0) * fVar8;
      param_3[2] = ((float)iVar5 * 4.656613e-10 + 0.0) * fVar9;
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar11 = local_9c;
      if ((fVar8 < 1.0) && (fVar11 = 0.5, 0.0 < fVar8)) {
        fVar11 = -0.0;
        uVar1 = (int)(fVar8 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar11 = *(float *)(&DAT_01c11c80 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                   (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                   (*(float *)(&DAT_01c11c80 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01c11c80 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      param_3[3] = fVar11;
      param_4 = param_4 + 1;
      uVar7 = uVar7 - 1;
      param_3 = param_3 + 4;
    } while (uVar7 != 0);
  }
  return param_2;
}




undefined8 FUN_00f49868(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f49878(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbecccccd;
  return 1;
}




undefined8 FUN_00f4988c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_00f49898(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 1.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01bfb280 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01bfb280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01bfb280 + (ulong)uVar3 * 4));
        }
      }
      iVar2 = rand();
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      *param_3 = fVar6 * ((float)iVar2 * 4.656613e-10 * 300.0 + -150.0);
      param_3 = param_3 + 3;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_00f499e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_00f499f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_00f49a00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_00f49a10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_00f49a20(int param_1,float *param_2)

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




undefined8 FUN_00f49a8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f400000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_00f49a9c(int param_1,float *param_2)

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




int FUN_00f49b18(int param_1,float *param_2)

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




void FUN_00f49b90(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41a00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_00f49bb0(int param_1,undefined4 *param_2)

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




uint FUN_00f49bd0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_54;
  
  if (0 < (int)param_2) {
    local_54 = 0.6;
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar7 = (ulong)param_2;
    do {
      iVar3 = rand();
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      if ((fVar8 < 1.0) && (fVar11 = 1.0, 0.0 < fVar8)) {
        uVar1 = (int)(fVar8 * 64.0) + 1;
        fVar11 = 0.0;
        if (uVar1 < 0x40) {
          fVar11 = *(float *)(&DAT_01bfaf80 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                   (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                   (*(float *)(&DAT_01bfaf80 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01bfaf80 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      iVar4 = rand();
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      if ((fVar8 < 1.0) && (fVar10 = 1.0, 0.0 < fVar8)) {
        uVar1 = (int)(fVar8 * 64.0) + 1;
        fVar10 = 0.0;
        if (uVar1 < 0x40) {
          fVar10 = *(float *)(&DAT_01bfaf80 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                   (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                   (*(float *)(&DAT_01bfaf80 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01bfaf80 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      iVar5 = rand();
      fVar9 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar8 = 0.0;
      if ((fVar9 < 1.0) && (fVar8 = local_54, 0.2 < fVar9)) {
        fVar9 = (fVar9 + -0.2) / 0.8;
        uVar6 = (uint)(fVar9 * 64.0);
        uVar1 = uVar6 + 1;
        fVar8 = 0.0;
        if (uVar1 < 0x40) {
          fVar9 = fVar9 * 64.0;
          fVar8 = *(float *)(&DAT_01bfb080 + (ulong)uVar6 * 4) +
                  (fVar9 - (float)(int)fVar9) *
                  (*(float *)(&DAT_01bfb080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01bfb080 + (ulong)uVar6 * 4));
        }
      }
      *param_3 = ((float)iVar3 * 4.656613e-10 * 0.25 + 0.0) * fVar11;
      param_3[1] = ((float)iVar4 * 4.656613e-10 * 0.25 + 0.0) * fVar10;
      param_3[2] = ((float)iVar5 * 4.656613e-10 * 0.75 + 0.0) * fVar8;
      fVar10 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar8 = -0.0;
      if ((fVar10 < 1.0) && (fVar8 = 0.0, 0.0 < fVar10)) {
        uVar1 = (int)(fVar10 * 64.0) + 1;
        fVar8 = -0.0;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_01bfb180 + (ulong)(uint)(int)(fVar10 * 64.0) * 4) +
                  (fVar10 * 64.0 - (float)(int)(fVar10 * 64.0)) *
                  (*(float *)(&DAT_01bfb180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01bfb180 + (ulong)(uint)(int)(fVar10 * 64.0) * 4));
        }
      }
      param_3[3] = fVar8;
      param_4 = param_4 + 1;
      uVar7 = uVar7 - 1;
      param_3 = param_3 + 4;
    } while (uVar7 != 0);
  }
  return param_2;
}




undefined8 FUN_00f49ed0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_00f49ee0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_00f49eec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_00f49ef8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 1.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01bfb280 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01bfb280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01bfb280 + (ulong)uVar3 * 4));
        }
      }
      iVar2 = rand();
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      *param_3 = fVar6 * ((float)iVar2 * 4.656613e-10 * 30.0 + -15.0);
      param_3 = param_3 + 3;
    } while (uVar4 != 0);
  }
  return param_2;
}

