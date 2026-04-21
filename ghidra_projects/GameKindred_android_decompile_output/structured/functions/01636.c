// functions/01636 — 48 functions
#include "libGameKindred.h"




uint FUN_0163601c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01636058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01636068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01636074(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01636084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_01636098(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000040a00000;
  return 1;
}




undefined8 FUN_016360ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_016360bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_016360d0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0163610c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01636148(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.6, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01d8f350 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d8f350 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8f350 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      fVar5 = fVar4 * 3.0 - (float)(int)(fVar4 * 3.0);
      fVar4 = 0.2;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d72150 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d72150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d72150 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      *(float *)((long)param_3 + 0xc) = fVar3 * fVar4;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01636270(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01636280(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0163628c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01636298(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc2c80000;
  return 1;
}




undefined8 FUN_016362b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016362bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016362c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_016362d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_016362e8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 650.0 + 750.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01636368(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 15.0 + 15.0,
                          (float)uVar4 * 4.656613e-10 * 2.0 + 4.0);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_016363f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01636400(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




void FUN_01636410(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x447a000042c80000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




int FUN_01636434(int param_1,undefined4 *param_2)

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
      *param_2 = 0x3f800000;
      iVar1 = iVar1 + -1;
      *(ulong *)(param_2 + 1) =
           CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.02 + -0.01,
                    (float)uVar4 * 4.656613e-10 * 0.02 + -0.01);
      param_2 = param_2 + 3;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_016364dc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar5 = (uint)((fVar6 + 0.0) * 64.0);
    fVar7 = (fVar6 + 0.0) * 64.0;
    fVar8 = 0.2;
    uVar1 = uVar5 + 1;
    uVar4 = (ulong)param_2;
    do {
      fVar9 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar10 = 1.0;
      if ((fVar9 < 1.0) && (fVar10 = 0.0, 0.0 < fVar9)) {
        uVar2 = (int)(fVar9 * 64.0) + 1;
        fVar10 = 1.0;
        if (uVar2 < 0x40) {
          fVar10 = *(float *)(&DAT_01d72250 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                   (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                   (*(float *)(&DAT_01d72250 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01d72250 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      fVar11 = 1.0;
      if ((-0.0 < fVar6 && fVar6 < 1.0) && uVar1 < 0x40) {
        fVar11 = *(float *)(&DAT_01d72650 + (ulong)uVar5 * 4) +
                 (fVar7 - (float)(int)fVar7) *
                 (*(float *)(&DAT_01d72650 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01d72650 + (ulong)uVar5 * 4));
      }
      fVar13 = 0.0;
      fVar12 = fVar8;
      if ((fVar9 < 1.0) && (fVar13 = 1.0, 0.0 < fVar9)) {
        uVar3 = (uint)(fVar9 * 64.0);
        uVar2 = uVar3 + 1;
        fVar9 = fVar9 * 64.0;
        if (uVar2 < 0x40) {
          fVar13 = *(float *)(&DAT_01d72450 + (ulong)uVar3 * 4) +
                   (fVar9 - (float)(int)fVar9) *
                   (*(float *)(&DAT_01d72450 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01d72450 + (ulong)uVar3 * 4));
          fVar12 = *(float *)(&DAT_01d72350 + (ulong)uVar3 * 4) +
                   (fVar9 - (float)(int)fVar9) *
                   (*(float *)(&DAT_01d72350 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01d72350 + (ulong)uVar3 * 4));
        }
        else {
          fVar13 = 0.0;
        }
      }
      *param_3 = fVar10 + fVar11 * 0.25;
      param_3[1] = fVar12;
      param_3[2] = fVar13;
      fVar9 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar10 = 1.0;
      if ((fVar9 < 1.0) && (fVar10 = 1.0, 0.0 < fVar9)) {
        uVar2 = (int)(fVar9 * 64.0) + 1;
        fVar10 = 1.0;
        if (uVar2 < 0x40) {
          fVar10 = *(float *)(&DAT_01d72550 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                   (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                   (*(float *)(&DAT_01d72550 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01d72550 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      param_3[3] = fVar10;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 4;
    } while (uVar4 != 0);
  }
  return;
}




void FUN_01636714(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar3 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar2 = (uint)((fVar3 + 0.0) * 64.0);
    uVar1 = uVar2 + 1;
    fVar4 = (fVar3 + 0.0) * 64.0;
    do {
      fVar5 = 1.0;
      if ((-0.0 < fVar3 && fVar3 < 1.0) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_01d72650 + (ulong)uVar2 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d72650 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d72650 + (ulong)uVar2 * 4));
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




void FUN_016367c0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_01d72750 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d72750 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d72750 + (ulong)uVar3 * 4));
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




undefined8 FUN_0163686c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43020000;
  return 1;
}




undefined8 FUN_0163687c(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc120000041200000;
  return 1;
}




undefined8 FUN_01636894(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




undefined8 FUN_016368a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_016368b8(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_2) {
    fVar2 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar1 = (int)(fVar2 * 64.0) + 1;
    do {
      fVar3 = 0.037912;
      if ((0.0 < fVar2 && fVar2 < 1.0) && uVar1 < 0x40) {
        fVar3 = *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar2 * 64.0) * 4) +
                (fVar2 * 64.0 - (float)(int)(fVar2 * 64.0)) *
                (*(float *)(&DAT_01d72850 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar2 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar3 * 3.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0163695c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0163696c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar1 = (int)(fVar4 * 64.0) + 1;
    iVar2 = param_2;
    do {
      iVar3 = rand();
      fVar5 = 0.037912;
      if ((0.0 < fVar4 && fVar4 < 1.0) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                (*(float *)(&DAT_01d72850 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
      }
      fVar5 = (float)NEON_fminnm(fVar5,0x3f800000);
      if (fVar5 <= 0.35) {
        fVar5 = 0.35;
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar3 * 4.656613e-10 * 100.0 + 300.0) * fVar5 * 2.75;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_01636aa8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x41a00000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + 50.0,
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + 50.0);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01636b30(int param_1,float *param_2)

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




int FUN_01636bb0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)(int)(((float)iVar2 * 4.656613e-10 * 3.0 + 3.0) / 3.0) * 3.0 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01636c38(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 15.0 + 45.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01636cb4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 100.0 + 200.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01636d34(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42c80000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01636d54(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01636d90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_01636da0(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_2) {
    fVar2 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar1 = (int)(fVar2 * 64.0) + 1;
    do {
      fVar3 = 0.037912;
      if ((0.0 < fVar2 && fVar2 < 1.0) && uVar1 < 0x40) {
        fVar3 = *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar2 * 64.0) * 4) +
                (fVar2 * 64.0 - (float)(int)(fVar2 * 64.0)) *
                (*(float *)(&DAT_01d72850 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar2 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar3 + fVar3;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01636e40(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01636e50(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 0.1 - (float)(int)(param_1 * 0.1);
    uVar1 = (int)(fVar4 * 64.0) + 1;
    iVar2 = param_2;
    do {
      iVar3 = rand();
      fVar5 = 0.037912;
      if ((0.0 < fVar4 && fVar4 < 1.0) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                (*(float *)(&DAT_01d72850 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d72850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
      }
      fVar5 = (float)NEON_fminnm(fVar5,0x3f800000);
      if (fVar5 <= 0.35) {
        fVar5 = 0.35;
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar3 * 4.656613e-10 * 100.0 + 300.0) * fVar5 * 2.75;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_01636f8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42c8000042c80000;
  return 1;
}




int FUN_01636fa0(int param_1,float *param_2)

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

