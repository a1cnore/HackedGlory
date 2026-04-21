// functions/01287 — 55 functions
#include "libGameKindred.h"




undefined8 FUN_01287024(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01287034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01287044(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01287054(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 3.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_012870cc(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 10.0 + 20.0,
                          (float)uVar4 * 4.656613e-10 * 4.0 + 5.0);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01287158(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * -4.656613e-10 * 20.0 + -80.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_012871d4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.25 + 0.25;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01287240(int param_1,undefined4 *param_2)

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




void FUN_01287260(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41f00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01287280(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40c00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_012872a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012872dc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar4 = 2.5, 0.025 < fVar5)) {
        fVar5 = (fVar5 + -0.025) / 0.975;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01ca69c0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01ca69c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ca69c0 + (ulong)uVar3 * 4));
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




undefined8 FUN_012873b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012873c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0200000;
  return 1;
}




undefined8 FUN_012873d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_012873dc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < (int)param_2) {
    fVar9 = 0.7;
    uVar5 = (ulong)param_2;
    do {
      iVar2 = rand();
      fVar6 = ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) * 100.0;
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar10 = fVar9;
      if (0.7 <= fVar7) {
        fVar6 = fVar6 + 0.7;
      }
      else if (fVar7 <= 0.0) {
        fVar6 = fVar6 + 0.0;
        fVar10 = 0.0;
      }
      else {
        uVar4 = (uint)((fVar7 / 0.7) * 64.0);
        uVar1 = uVar4 + 1;
        fVar8 = (fVar7 / 0.7) * 64.0;
        fVar7 = fVar9;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01ca6ac0 + (ulong)uVar4 * 4) +
                  (fVar8 - (float)(int)fVar8) *
                  (*(float *)(&DAT_01ca6ac0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ca6ac0 + (ulong)uVar4 * 4));
        }
        fVar6 = fVar6 + fVar7;
        if (uVar1 < 0x40) {
          fVar10 = *(float *)(&DAT_01ca6ac0 + (ulong)uVar4 * 4) +
                   (fVar8 - (float)(int)fVar8) *
                   (*(float *)(&DAT_01ca6ac0 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01ca6ac0 + (ulong)uVar4 * 4));
        }
      }
      iVar2 = rand();
      iVar3 = rand();
      fVar8 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = fVar9;
      if ((fVar8 < 0.7) && (fVar7 = 0.0, 0.0 < fVar8)) {
        uVar4 = (uint)((fVar8 / 0.7) * 64.0);
        uVar1 = uVar4 + 1;
        fVar7 = fVar9;
        if (uVar1 < 0x40) {
          fVar7 = (fVar8 / 0.7) * 64.0;
          fVar7 = *(float *)(&DAT_01ca6ac0 + (ulong)uVar4 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01ca6ac0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ca6ac0 + (ulong)uVar4 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar10 * ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) *
                            100.0 + -50.0;
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3[2] = ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 100.0 +
                   fVar7;
      param_3 = param_3 + 3;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_01287600(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_01287610(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_01287620(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0128762c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0128763c(float param_1,int param_2,float *param_3)

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
    uVar5 = (uint)((param_1 / 0.1) * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.1;
    fVar8 = (param_1 / 0.1) * 64.0;
    fVar6 = 0.0;
    if (bVar3) {
      fVar6 = 2.2;
    }
    iVar2 = param_2;
    if (bVar3 && 0.0 < param_1) {
      fVar6 = 0.0;
    }
    do {
      iVar4 = rand();
      fVar7 = fVar6;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01ca6bc0 + (ulong)uVar5 * 4) +
                (fVar8 - (float)(int)fVar8) *
                (*(float *)(&DAT_01ca6bc0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ca6bc0 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar4 * 4.656613e-10 * 75.0 + 25.0) * fVar7;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_01287758(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0x40200000;
      iVar1 = iVar1 + -1;
      param_2[1] = (float)iVar2 * 4.656613e-10 * 3.0 + 5.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_012877dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_012877e8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.85 + 0.15;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01287868(int param_1,undefined4 *param_2)

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




void FUN_01287888(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_012878a8(int param_1,undefined4 *param_2)

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




uint FUN_012878c8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01287904(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_01287914(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01287920(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01287930(float param_1,int param_2,float *param_3)

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
    uVar5 = (uint)((param_1 / 0.1) * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.1;
    fVar8 = (param_1 / 0.1) * 64.0;
    fVar6 = 0.0;
    if (bVar3) {
      fVar6 = 2.2;
    }
    iVar2 = param_2;
    if (bVar3 && 0.0 < param_1) {
      fVar6 = 0.0;
    }
    do {
      iVar4 = rand();
      fVar7 = fVar6;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01ca6bc0 + (ulong)uVar5 * 4) +
                (fVar8 - (float)(int)fVar8) *
                (*(float *)(&DAT_01ca6bc0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ca6bc0 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar4 * 4.656613e-10 * 75.0 + 25.0) * fVar7;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_01287a4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_01287a5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01287a68(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      fVar3 = (float)iVar2 * 4.656613e-10 * 0.85 + 0.15;
      iVar1 = iVar1 + -1;
      *param_2 = fVar3 + fVar3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01287aec(int param_1,undefined4 *param_2)

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




void FUN_01287b0c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41f00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01287b2c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01287b68(int param_1,undefined4 *param_2)

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




void FUN_01287b88(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01cc32c0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01cc32c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc32c0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 1.0) && (-0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01cc32c0 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01cc32c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc32c0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01287c98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01287ca8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01287cb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_01287cc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01287cd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01287ce4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01287cf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42700000;
  return 1;
}




undefined8 FUN_01287d00(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01287d10(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01287d78(int param_1,float *param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      fVar1 = *param_5 + *param_5;
      *param_2 = fVar1;
      param_2[1] = fVar1;
      param_2 = param_2 + 2;
    } while (param_1 != 0);
  }
  return;
}




int FUN_01287d9c(int param_1,float *param_2)

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




int FUN_01287e18(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.099999994 + 0.15;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




uint FUN_01287e98(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01287ed4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01287f10(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.0;
      if ((fVar5 < 0.6) && (fVar4 = 0.0, 0.1 < fVar5)) {
        fVar6 = fVar5 + -0.1 + fVar5 + -0.1;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar4 = *(float *)(&DAT_01cc63c0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01cc63c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc63c0 + (ulong)uVar3 * 4));
        }
      }
      fVar6 = 1.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01cc63c0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01cc63c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc63c0 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01cc66c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01cc66c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01cc66c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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

