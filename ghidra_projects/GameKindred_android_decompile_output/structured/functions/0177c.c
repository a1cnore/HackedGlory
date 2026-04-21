// functions/0177c — 51 functions
#include "libGameKindred.h"




int FUN_0177c008(int param_1,float *param_2)

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




undefined8 FUN_0177c084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_0177c098(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0177c0d4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40066666;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_0177c0f8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
        fVar5 = *(float *)(&DAT_01db7af0 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01db7af0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01db7af0 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_01dcd6f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01dcd6f0 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01dcd6f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_0177c204(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_0177c214(int param_1,float *param_2)

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




undefined8 FUN_0177c28c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_0177c298(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_2) {
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar5 = (ulong)param_2;
    fVar10 = 1.0;
    do {
      fVar6 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar11 = fVar10;
      if ((fVar6 < 1.0) && (fVar11 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar11 = 1.0;
        if (uVar1 < 0x40) {
          fVar11 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                   (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                   (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      iVar3 = rand();
      fVar9 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar6 = fVar10;
      if ((fVar9 < 1.0) && (fVar6 = 0.0, 0.0 < fVar9)) {
        uVar1 = (int)(fVar9 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      iVar4 = rand();
      fVar7 = (float)iVar4 * 4.656613e-10 * 3.0 + 1.0;
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar9 = fVar10;
      if ((fVar8 < 1.0) && (fVar9 = 0.0, 0.0 < fVar8)) {
        uVar1 = (int)(fVar8 * 64.0) + 1;
        fVar9 = 1.0;
        if (uVar1 < 0x40) {
          fVar9 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                  (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                  (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      iVar4 = rand();
      *param_3 = fVar11 * ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 30.0;
      param_3[1] = fVar6 * (fVar7 + fVar7);
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3[2] = fVar9 * ((float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0) * 30.0
      ;
      param_3 = param_3 + 3;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_0177c4d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0177c4e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0177c4f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_0177c504(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0177c514(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_0177c524(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




undefined8 FUN_0177c534(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0177c540(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.7;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0177c5c0(int param_1,undefined4 *param_2)

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




void FUN_0177c5e0(int param_1,undefined4 *param_2)

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




void FUN_0177c600(int param_1,undefined4 *param_2)

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




void FUN_0177c620(int param_1,undefined4 *param_2)

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




void FUN_0177c640(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
        fVar5 = *(float *)(&DAT_01db7af0 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01db7af0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01db7af0 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_01dcd6f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01dcd6f0 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01dcd6f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_0177c74c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_0177c75c(int param_1,float *param_2)

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




undefined8 FUN_0177c7d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_0177c7e0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_2) {
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar5 = (ulong)param_2;
    fVar10 = 1.0;
    do {
      fVar6 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar11 = fVar10;
      if ((fVar6 < 1.0) && (fVar11 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar11 = 1.0;
        if (uVar1 < 0x40) {
          fVar11 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                   (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                   (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      iVar3 = rand();
      fVar9 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar6 = fVar10;
      if ((fVar9 < 1.0) && (fVar6 = 0.0, 0.0 < fVar9)) {
        uVar1 = (int)(fVar9 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      iVar4 = rand();
      fVar7 = (float)iVar4 * 4.656613e-10 * 3.0 + 1.0;
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar9 = fVar10;
      if ((fVar8 < 1.0) && (fVar9 = 0.0, 0.0 < fVar8)) {
        uVar1 = (int)(fVar8 * 64.0) + 1;
        fVar9 = 1.0;
        if (uVar1 < 0x40) {
          fVar9 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                  (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                  (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      iVar4 = rand();
      *param_3 = fVar11 * ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 30.0;
      param_3[1] = fVar6 * (fVar7 + fVar7);
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3[2] = fVar9 * ((float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0) * 30.0
      ;
      param_3 = param_3 + 3;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_0177ca1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0177ca2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0177ca3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_0177ca4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0177ca5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_0177ca6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




undefined8 FUN_0177ca7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0177ca88(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.7;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0177cb08(int param_1,undefined4 *param_2)

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




void FUN_0177cb28(int param_1,undefined4 *param_2)

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




void FUN_0177cb48(int param_1,undefined4 *param_2)

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




void FUN_0177cb68(int param_1,undefined4 *param_2)

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




void FUN_0177cb88(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
        fVar5 = *(float *)(&DAT_01db7af0 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01db7af0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01db7af0 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_01dcd6f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01dcd6f0 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01dcd6f0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_0177cc94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_0177cca4(int param_1,float *param_2)

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




undefined8 FUN_0177cd1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_0177cd28(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_2) {
    lVar2 = param_5 + 0x48000;
    param_5 = param_5 + 0x50000;
    uVar5 = (ulong)param_2;
    fVar10 = 1.0;
    do {
      fVar6 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar11 = fVar10;
      if ((fVar6 < 1.0) && (fVar11 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar11 = 1.0;
        if (uVar1 < 0x40) {
          fVar11 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                   (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                   (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      iVar3 = rand();
      fVar9 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar6 = fVar10;
      if ((fVar9 < 1.0) && (fVar6 = 0.0, 0.0 < fVar9)) {
        uVar1 = (int)(fVar9 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      iVar4 = rand();
      fVar7 = (float)iVar4 * 4.656613e-10 * 3.0 + 1.0;
      fVar8 = (param_1 - *(float *)(lVar2 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + (ulong)*param_4 * 4);
      fVar9 = fVar10;
      if ((fVar8 < 1.0) && (fVar9 = 0.0, 0.0 < fVar8)) {
        uVar1 = (int)(fVar8 * 64.0) + 1;
        fVar9 = 1.0;
        if (uVar1 < 0x40) {
          fVar9 = *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                  (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                  (*(float *)(&DAT_01dc37f0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01dc37f0 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      iVar4 = rand();
      *param_3 = fVar11 * ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 30.0;
      param_3[1] = fVar6 * (fVar7 + fVar7);
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3[2] = fVar9 * ((float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0) * 30.0
      ;
      param_3 = param_3 + 3;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_0177cf64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0177cf74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_0177cf84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_0177cf94(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0177cfa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_0177cfb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




undefined8 FUN_0177cfc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0177cfd0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.7;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

