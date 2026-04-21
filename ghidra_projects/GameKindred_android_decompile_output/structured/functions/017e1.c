// functions/017e1 — 91 functions
#include "libGameKindred.h"




undefined8 FUN_017e10f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1108(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1114(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1120(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1130(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e113c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017e114c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1158(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017e1168(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1174(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_017e1184(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1190(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_017e11a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_017e11dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017e1218(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar5 = param_1 - (float)(int)param_1;
    uVar1 = (int)(fVar5 * 64.0) + 1;
    uVar4 = (uint)((param_1 + param_1) * 64.0);
    uVar2 = uVar4 + 1;
    fVar6 = (param_1 + param_1) * 64.0;
    bVar3 = param_1 < 0.5;
    fVar7 = 1.15;
    if (bVar3) {
      fVar7 = 4.0;
    }
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 1.15;
    }
    do {
      fVar8 = 1.0;
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      if ((0.0 < fVar5 && fVar5 < 1.0) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01dc7af0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                (*(float *)(&DAT_01dc7af0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01dc7af0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
      }
      fVar9 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01dc7bf0 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01dc7bf0 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01dc7bf0 + (ulong)uVar4 * 4));
      }
      param_2 = param_2 + -1;
      param_3[3] = fVar8 * fVar9;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_017e1328(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1338(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1344(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1360(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e136c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017e137c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1388(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017e1398(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e13a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_017e13b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e13c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_017e13d0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_017e140c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017e1448(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar5 = param_1 - (float)(int)param_1;
    uVar1 = (int)(fVar5 * 64.0) + 1;
    uVar4 = (uint)((param_1 + param_1) * 64.0);
    uVar2 = uVar4 + 1;
    fVar6 = (param_1 + param_1) * 64.0;
    bVar3 = param_1 < 0.5;
    fVar7 = 1.15;
    if (bVar3) {
      fVar7 = 4.0;
    }
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 1.15;
    }
    do {
      fVar8 = 1.0;
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      if ((0.0 < fVar5 && fVar5 < 1.0) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01dc7af0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                (*(float *)(&DAT_01dc7af0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01dc7af0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
      }
      fVar9 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01dc7bf0 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01dc7bf0 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01dc7bf0 + (ulong)uVar4 * 4));
      }
      param_2 = param_2 + -1;
      param_3[3] = fVar8 * fVar9;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_017e1558(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1568(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1574(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1580(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1590(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e159c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017e15ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e15b8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017e15c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e15d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_017e15e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e15f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_017e1600(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_017e163c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017e1678(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 4.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.9;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01dc7cf0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dc7cf0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc7cf0 + (ulong)uVar3 * 4));
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




undefined8 FUN_017e174c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_017e175c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01dc7df0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dc7df0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc7df0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_017e1800(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e180c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e181c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1828(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_017e1838(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1844(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017e1854(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




int FUN_017e1868(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 1.8 + 0.2,
                          (float)uVar4 * 4.656613e-10 * 1.8 + 0.2);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_017e18fc(int param_1,float *param_2)

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




int FUN_017e1978(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.10000001 + 0.05;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_017e19f8(int param_1,undefined4 *param_2)

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




uint FUN_017e1a18(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017e1a54(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 2.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.9;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01dc7ef0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dc7ef0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc7ef0 + (ulong)uVar3 * 4));
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




undefined8 FUN_017e1b28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1b38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe4ccccd;
  return 1;
}




undefined8 FUN_017e1b4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1b58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_017e1b68(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01dc7ff0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01dc7ff0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc7ff0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_017e1c0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_017e1c1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1c28(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017e1c38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




int FUN_017e1c48(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.19999999 + 0.5,
                          (float)uVar4 * 4.656613e-10 * 0.19999999 + 0.3);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_017e1cd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_017e1ce4(int param_1,float *param_2)

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




void FUN_017e1d64(int param_1,undefined4 *param_2)

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




uint FUN_017e1d84(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017e1dc0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 1.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01dc80f0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01dc80f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc80f0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
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




undefined8 FUN_017e1e7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1e8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1e98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_017e1ea4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_017e1eb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017e1ec4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_017e1ed4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_017e1ee4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_017e1ef4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_017e1f04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_017e1f14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42340000;
  return 1;
}




undefined8 FUN_017e1f24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




uint FUN_017e1f34(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_017e1f70(int param_1,undefined4 *param_2)

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




uint FUN_017e1f90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_017e1fcc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

