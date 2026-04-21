// functions/013f6 — 94 functions
#include "libGameKindred.h"




undefined8 FUN_013f6008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6014(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6020(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc120000000000000;
  return 1;
}




undefined8 FUN_013f6038(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013f6044(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 40.0 + 20.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013f60c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f60cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_013f60dc(int param_1,float *param_2)

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




int FUN_013f6154(int param_1,undefined8 *param_2)

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
                          (float)uVar4 * 4.656613e-10 * 0.04 + 0.03);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013f61e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013f61ec(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 1.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013f6264(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42fa8f5c;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_013f6288(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013f62c4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d0b210 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d0b210 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d0b210 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_013f6374(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6384(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6390(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f639c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f63ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f63b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013f63c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_013f63d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013f63e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f63f4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_013f6404(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6410(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




uint FUN_013f6420(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013f645c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013f6498(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.025, 0.075 < fVar5)) {
        fVar5 = (fVar5 + -0.075) / 0.925;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01cf8410 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01cf8410 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cf8410 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      uVar2 = uVar2 - 1;
      param_3[3] = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
                   *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_013f6578(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6588(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013f6598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f65a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f65b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f65c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




int FUN_013f65d0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 40.0 + -20.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013f664c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013f665c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




int FUN_013f6670(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.0 + 3.0,
                          (float)uVar4 * 4.656613e-10 * 0.5 + 0.5);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013f66fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013f6708(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.2 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013f6778(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40e66666;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013f679c(int param_1,undefined4 *param_2)

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




int FUN_013f67bc(int param_1,undefined8 *param_2)

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
      *(float *)((long)param_2 + 0xc) = (float)iVar2 * 4.656613e-10 + 0.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_013f6840(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6850(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f685c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6868(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6878(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6884(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013f6894(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_013f68a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013f68b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_013f68c8(float param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    uVar3 = (uint)((param_1 / 0.2) * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.2;
    fVar4 = (param_1 / 0.2) * 64.0;
    fVar5 = 2.0;
    if (bVar2) {
      fVar5 = 1.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar5 = 2.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01cf8510 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01cf8510 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01cf8510 + (ulong)uVar3 * 4));
      }
      *param_3 = 0x3f19999a;
      param_2 = param_2 + -1;
      param_3[1] = fVar6 * 3.0;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_013f697c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6988(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




uint FUN_013f699c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013f69d8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013f6a14(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013f6a50(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013f6a8c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < (int)param_2) {
    fVar7 = param_1 + 0.0 + param_1 + 0.0;
    uVar4 = (uint)(fVar7 * 64.0);
    uVar1 = uVar4 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = fVar7 * 64.0;
    fVar8 = 0.0;
    if (bVar3) {
      fVar8 = 1.0;
    }
    if (bVar3 && -0.0 < param_1) {
      fVar8 = 0.0;
    }
    uVar5 = (ulong)param_2;
    do {
      fVar9 = fVar8;
      if ((bVar3 && -0.0 < param_1) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01d0b210 + (ulong)uVar4 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d0b210 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d0b210 + (ulong)uVar4 * 4));
      }
      *param_3 = fVar9;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar10 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar9 = 0.0;
      if ((fVar10 < 1.0) && (fVar9 = 1.0, 0.1 < fVar10)) {
        fVar10 = (fVar10 + -0.1) / 0.9;
        uVar6 = (uint)(fVar10 * 64.0);
        uVar2 = uVar6 + 1;
        fVar9 = 0.0;
        if (uVar2 < 0x40) {
          fVar10 = fVar10 * 64.0;
          fVar9 = *(float *)(&DAT_01d0b210 + (ulong)uVar6 * 4) +
                  (fVar10 - (float)(int)fVar10) *
                  (*(float *)(&DAT_01d0b210 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01d0b210 + (ulong)uVar6 * 4));
        }
      }
      param_3[3] = fVar9;
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 4;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_013f6bc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6bd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_013f6be8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6bf4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6c04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6c10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_013f6c20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41400000;
  return 1;
}




undefined8 FUN_013f6c30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013f6c40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_013f6c54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003e99999a;
  return 1;
}




undefined8 FUN_013f6c68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6c74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_013f6c88(int param_1,undefined4 *param_2)

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




uint FUN_013f6ca8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013f6ce4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_013f6d20(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_013f6d5c(int param_1,undefined8 *param_2)

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




void FUN_013f6d88(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (1.0 <= fVar6) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar3 = (uint)(fVar6 * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = fVar6 * 64.0;
          fVar5 = 0.0;
          fVar4 = 0.0;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_01d0a910 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01d0a910 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d0a910 + (ulong)uVar3 * 4));
            fVar5 = *(float *)(&DAT_01d0a910 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01d0a910 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d0a910 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      uVar2 = uVar2 - 1;
      param_3[3] = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
                   *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_013f6e70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6e80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}



undefined DAT_01cf8710;
undefined DAT_01cf8810;
undefined DAT_01d02510;
undefined DAT_01cf8910;
undefined DAT_01cf8a10;
undefined DAT_01cf8b10;
undefined DAT_01d04d10;
undefined DAT_01d01010;
undefined DAT_01cf8c10;
undefined DAT_01cf8d10;
undefined DAT_01d0af10;
undefined DAT_01cf8e10;
undefined DAT_01cf8f10;
undefined DAT_01cf9010;
undefined DAT_01cf9110;
undefined DAT_01cf9410;
undefined DAT_01cf9510;
undefined DAT_01cf9610;
undefined DAT_01cf9810;
undefined DAT_01cf9910;
undefined DAT_01cf9a10;
undefined DAT_01cf9b10;
undefined DAT_01cf9c10;
undefined DAT_01cf9d10;
undefined DAT_01cf9f10;
undefined DAT_01cfa110;
undefined DAT_01cfa410;
undefined DAT_01cfa310;
undefined DAT_01cfa510;
undefined DAT_01d01210;
undefined DAT_01d06210;
undefined DAT_01d09d10;
undefined DAT_01cfa610;
undefined DAT_01cfaa10;
undefined DAT_01cfa710;
undefined DAT_01cfa810;
undefined DAT_01cfa910;
undefined DAT_01cfac10;
undefined DAT_01cfb710;
undefined DAT_01cfad10;
undefined DAT_01cfef10;
undefined DAT_01d02f10;
undefined DAT_01cfb510;
undefined DAT_01cfba10;
undefined DAT_01cfbc10;
undefined DAT_01cfbd10;
undefined DAT_01cfbb10;
undefined DAT_01d07210;
undefined DAT_01cfbe10;
undefined DAT_01cfbf10;
undefined DAT_01cfc010;
undefined DAT_01cfc110;
undefined DAT_01cfc210;
undefined DAT_01cfc310;
undefined DAT_01cfc410;
undefined DAT_01cfc510;
undefined DAT_01cfc610;
undefined DAT_01cfc710;
undefined DAT_01cfc810;
undefined DAT_01cfc910;
undefined DAT_01cfca10;
undefined DAT_01cfcb10;
undefined DAT_01cfcc10;
undefined DAT_01cfcd10;
undefined DAT_01cfce10;
undefined DAT_01cfcf10;
undefined DAT_01cfd610;
undefined DAT_01cfd710;
undefined DAT_01cfd810;
undefined DAT_01cfd010;
undefined DAT_01cfd110;
undefined DAT_01cfd210;
undefined DAT_01cfd310;
undefined DAT_01cfd410;
undefined DAT_01cfd510;
undefined DAT_01cfd910;
undefined DAT_01d02810;
undefined DAT_01d02910;
undefined DAT_01d02a10;
undefined DAT_01cfda10;
undefined DAT_01cfdb10;
undefined DAT_01cfdc10;
undefined DAT_01cfdd10;
undefined DAT_01cfde10;
undefined DAT_01cfe110;
undefined DAT_01cfe210;
undefined DAT_01cfe310;
undefined DAT_01cfe410;
undefined DAT_01cfe510;
undefined DAT_01cfe810;
undefined DAT_01cfea10;
undefined DAT_01cfec10;
undefined DAT_01cfed10;
undefined DAT_01cfee10;
undefined DAT_01d0a710;
undefined DAT_01cff110;
undefined DAT_01cff310;
undefined DAT_01cff410;
undefined DAT_01cff510;
undefined DAT_01cff610;
undefined DAT_01cff710;
undefined DAT_01cffb10;
undefined DAT_01cffc10;
undefined DAT_01d05a10;
undefined DAT_01d00110;
undefined DAT_01d00210;
undefined DAT_01d00310;
undefined DAT_01d00410;
undefined DAT_01d00510;
undefined DAT_01d00610;
undefined DAT_01d00710;
undefined DAT_01d00910;
undefined DAT_01d00a10;
undefined DAT_01d00b10;
undefined DAT_01d00d10;
undefined DAT_01d00e10;
undefined DAT_01d02710;
undefined DAT_01d00f10;
undefined DAT_01d06510;
undefined DAT_01d01110;
undefined DAT_01d01710;
undefined DAT_01d01810;
undefined DAT_01d01910;
undefined DAT_01d01a10;
undefined DAT_01d01b10;
undefined DAT_01d01e10;
undefined DAT_01d02110;
undefined DAT_01d02210;
undefined DAT_01d02310;
undefined DAT_01d02410;
undefined DAT_01d02b10;
undefined DAT_01d02c10;
undefined DAT_01d02d10;
undefined DAT_01d02e10;
undefined DAT_01d03010;
undefined DAT_01d03110;
undefined DAT_01d03210;
undefined DAT_01d03310;
undefined DAT_01d03610;
undefined DAT_01d03410;
undefined DAT_01d03510;
undefined DAT_01d03710;
undefined DAT_01d03910;
undefined DAT_01d03b10;
undefined DAT_01d04310;
undefined DAT_01d03f10;
undefined DAT_01d04010;
undefined DAT_01d04110;
undefined DAT_01d04210;
undefined DAT_01d04410;
undefined DAT_01d04610;
undefined DAT_01d07f10;
undefined DAT_01d04810;
undefined DAT_01d08c10;
undefined DAT_01d04f10;
undefined DAT_01d05010;
undefined DAT_01d05110;
undefined DAT_01d05210;
undefined DAT_01d05310;
undefined DAT_01d05510;
undefined DAT_01d05610;
undefined DAT_01d05710;
undefined DAT_01d05910;
undefined DAT_01d05b10;
undefined DAT_01d05c10;
undefined DAT_01d05e10;
undefined DAT_01d06010;
undefined DAT_01d06110;
undefined DAT_01d06310;
undefined DAT_01d06410;
undefined DAT_01d06610;
undefined DAT_01d06710;
undefined DAT_01d06910;
undefined DAT_01d06c10;
undefined DAT_01d07e10;
undefined DAT_01d06f10;
undefined DAT_01d07010;
undefined DAT_01d07310;
undefined DAT_01d08d10;
undefined DAT_01d08e10;
undefined DAT_01d08f10;
undefined DAT_01d09010;
undefined DAT_01d09110;
undefined DAT_01d09210;
undefined DAT_01d07910;
undefined DAT_01d07810;
undefined DAT_01d07b10;
undefined DAT_01d07c10;
undefined DAT_01d07d10;
undefined DAT_01d08210;
undefined DAT_01d08310;
undefined DAT_01d08610;
undefined DAT_01d08810;
undefined DAT_01d08910;
undefined DAT_01d09310;
undefined DAT_01d09410;
undefined DAT_01d09810;
undefined DAT_01d09b10;
undefined DAT_01d09c10;
undefined DAT_01d09e10;
undefined DAT_01d0a110;
undefined DAT_01d0a410;
undefined DAT_01d0a810;
undefined DAT_01d0aa10;
undefined DAT_01d0ad10;
undefined DAT_01d0ae10;
undefined DAT_01d0b310;
undefined DAT_01d14740;
undefined DAT_01d26640;
undefined DAT_01d0b540;
undefined DAT_01d0b640;
undefined DAT_01d20440;
undefined DAT_01d25840;
undefined DAT_01d2a240;
undefined DAT_01d0b740;
undefined DAT_01d14140;
undefined DAT_01d0b840;
undefined DAT_01d29a40;
undefined DAT_01d1fc40;
undefined DAT_01d25a40;
undefined DAT_01d29740;
undefined DAT_01d0b940;
undefined DAT_01d26040;
undefined DAT_01d0ba40;
undefined DAT_01d0bb40;
undefined DAT_01d26e40;
undefined DAT_01d0bc40;
undefined DAT_01d0bd40;
undefined DAT_01d0be40;
undefined DAT_01d0bf40;
undefined DAT_01d0c040;
undefined DAT_01d0c140;
undefined DAT_01d0c240;
undefined4 DAT_01d0b450;
undefined DAT_01d0c340;
undefined DAT_01d0c440;
undefined DAT_01d0c540;
undefined DAT_01d0c640;
undefined DAT_01d0c740;
undefined DAT_01d0c840;
undefined DAT_01d18540;
undefined DAT_01d0c940;
undefined DAT_01d0ca40;
undefined DAT_01d0cb40;
undefined DAT_01d0cc40;
undefined DAT_01d0cd40;
undefined DAT_01d0ce40;
undefined DAT_01d0cf40;
undefined DAT_01d0d040;
undefined DAT_01d0d140;
undefined DAT_01d0d240;
undefined DAT_01d0d340;
undefined DAT_01d27640;
undefined DAT_01d25440;
undefined DAT_01d0d440;
undefined DAT_01d25240;
undefined DAT_01d29340;
undefined DAT_01d11640;
undefined DAT_01d11740;
undefined DAT_01d22a40;
undefined DAT_01d0d540;
undefined DAT_01d0d640;
undefined DAT_01d0d740;
undefined DAT_01d28c40;
undefined DAT_01d0d840;
undefined DAT_01d0e440;
undefined DAT_01d29b40;
undefined DAT_01d0d940;
undefined DAT_01d25940;
undefined DAT_01d0da40;
undefined DAT_01d0db40;
undefined DAT_01d0dc40;
undefined DAT_01d0dd40;
undefined DAT_01d0de40;
undefined DAT_01d0df40;
undefined DAT_01d1e140;
undefined DAT_01d23740;
undefined DAT_01d15a40;
undefined DAT_01d1dd40;
undefined DAT_01d1dc40;
undefined DAT_01d0e040;
undefined DAT_01d0e140;
undefined DAT_01d0e240;
undefined DAT_01d17c40;
undefined DAT_01d0e340;
undefined DAT_01d27740;
undefined DAT_01d20040;
undefined DAT_01d13840;
undefined DAT_01d0e540;
undefined DAT_01d0e640;
undefined DAT_01d17e40;
undefined DAT_01d25140;
undefined DAT_01d14a40;
undefined DAT_01d14b40;
undefined DAT_01d19840;
undefined DAT_01d14c40;
undefined DAT_01d0e740;
undefined DAT_01d0e840;
undefined DAT_01d0e940;
undefined DAT_01d28540;
undefined DAT_01d29940;
undefined DAT_01d12340;
undefined DAT_01d0ea40;
undefined DAT_01d19c40;
undefined DAT_01d17540;
undefined DAT_01d0eb40;
undefined DAT_01d0ec40;
undefined DAT_01d0ed40;
undefined DAT_01d0ee40;
undefined DAT_01d29840;
undefined DAT_01d0ef40;
undefined DAT_01d0f040;
undefined DAT_01d0f140;
undefined DAT_01d0f240;
undefined DAT_01d22840;
undefined DAT_01d0f340;
undefined DAT_01d0f440;
undefined DAT_01d1d140;
undefined DAT_01d0f540;
undefined DAT_01d0f640;
undefined DAT_01d1a540;
undefined DAT_01d1a440;
undefined DAT_01d0f740;
undefined DAT_01d17340;
undefined DAT_01d0f840;
undefined DAT_01d0f940;
undefined DAT_01d18040;
undefined DAT_01d21640;
undefined DAT_01d0fa40;
undefined DAT_01d21940;
undefined DAT_01d2a040;
undefined DAT_01d0fb40;
undefined DAT_01d26c40;
undefined DAT_01d26440;
undefined DAT_01d28f40;
undefined DAT_01d0fc40;
undefined DAT_01d25f40;
undefined DAT_01d0fd40;
undefined DAT_01d0fe40;
undefined DAT_01d0ff40;
undefined DAT_01d10040;
undefined DAT_01d10140;
undefined DAT_01d10240;
undefined DAT_01d10340;
undefined DAT_01d10440;
undefined DAT_01d1cb40;
undefined DAT_01d10540;
undefined DAT_01d20340;
undefined DAT_01d10740;
undefined DAT_01d1ae40;
undefined DAT_01d10640;
undefined DAT_01d10840;
undefined DAT_01d10940;
undefined DAT_01d10a40;
undefined DAT_01d10b40;
undefined DAT_01d1c940;
undefined DAT_01d1c740;
undefined DAT_01d13940;
undefined DAT_01d20540;
undefined DAT_01d1a140;
undefined DAT_01d10c40;
undefined DAT_01d1da40;
undefined DAT_01d1db40;
undefined DAT_01d10d40;
undefined DAT_01d19140;
undefined DAT_01d10e40;
undefined DAT_01d10f40;
undefined DAT_01d11040;
undefined DAT_01d11540;
undefined DAT_01d1e840;
undefined DAT_01d11140;
undefined DAT_01d11240;
undefined DAT_01d11340;
undefined DAT_01d11440;
undefined DAT_01d23840;
undefined DAT_01d26340;

undefined8 FUN_013f6e90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6e9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_013f6eac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_013f6eb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_013f6ec8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_013f6ed8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_013f6ee8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_013f6efc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x402000003f000000;
  return 1;
}




undefined8 FUN_013f6f10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_013f6f1c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.19999999 + 0.45;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_013f6f9c(int param_1,undefined4 *param_2)

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




void FUN_013f6fbc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_013f6fe0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3dcccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}

