// functions/016ae — 67 functions
#include "libGameKindred.h"




undefined8 FUN_016ae070(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016ae080(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0e00000;
  return 1;
}




undefined8 FUN_016ae090(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016ae09c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016ae0ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016ae0b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016ae0c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016ae0d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016ae0e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016ae0f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41700000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_016ae100(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016ae10c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




void FUN_016ae11c(int param_1,undefined4 *param_2)

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




uint FUN_016ae13c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016ae178(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar4 = -1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d8ce50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d8ce50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8ce50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      fVar6 = 1.5;
      if ((fVar5 < 0.8) && (fVar6 = 0.4, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 1.5;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 / 0.8) * 64.0;
          fVar6 = *(float *)(&DAT_01d8cf50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d8cf50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8cf50 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, -0.0 < fVar5)) {
        fVar4 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar4 = (fVar5 + 0.0) * 64.0;
          fVar4 = *(float *)(&DAT_01d8d050 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01d8d050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8d050 + (ulong)uVar3 * 4));
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




undefined8 FUN_016ae300(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_016ae310(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.5;
      if ((fVar3 < 1.0) && (fVar4 = -0.4, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.5;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d8d150 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d8d150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8d150 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 + fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_016ae3bc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      uVar3 = (ulong)*param_4;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + uVar3 * 4)) /
              *(float *)(param_5 + 0x50000 + uVar3 * 4);
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)
                                       (&DAT_01d95450 +
                                       (ulong)(*(byte *)(param_5 + 0x78000 + uVar3 * 4) ^ 0x7a) * 2)
                               );
      fVar6 = 0.1;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.1;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01d93f50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d93f50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d93f50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = ((fVar4 / -65535.0) * 100.0 + -200.0) * fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016ae4ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016ae4bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f333333;
  return 1;
}




undefined8 FUN_016ae4d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016ae4e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_016ae4f0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016ae500(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




void FUN_016ae510(uint param_1,float *param_2,ushort *param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    do {
      uVar2 = uVar2 - 1;
      fVar1 = (float)NEON_ucvtf((uint)*(ushort *)
                                       (&DAT_01d95450 +
                                       (ulong)(*(byte *)(param_4 + 0x78000 + (ulong)*param_3 * 4) ^
                                              0x34) * 2));
      fVar1 = (fVar1 / 65535.0) * 0.25 + 0.75;
      *param_2 = fVar1;
      param_2[1] = fVar1 * 1.2;
      param_2 = param_2 + 2;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




int FUN_016ae57c(int param_1,float *param_2)

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




int FUN_016ae5f8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_016ae670(int param_1,undefined4 *param_2)

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




void FUN_016ae690(int param_1,undefined4 *param_2)

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




void FUN_016ae6b0(int param_1,undefined4 *param_2)

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




void FUN_016ae6d0(int param_1,undefined4 *param_2)

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




void FUN_016ae6f0(int param_1,undefined8 *param_2)

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




void FUN_016ae71c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    fVar3 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar2 = (ulong)param_2;
    do {
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d8e150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016ae7d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016ae7e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_016ae7f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016ae800(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (0 < param_2) {
    fVar7 = param_1 * 0.3 - (float)(int)(param_1 * 0.3);
    fVar8 = (fVar7 + -0.026667) / 1.000003;
    bVar4 = 1.02667 <= fVar7;
    uVar6 = (uint)(fVar8 * 64.0);
    uVar5 = (uint)((fVar7 + 0.0) * 64.0);
    fVar9 = (fVar7 + 0.0) * 64.0;
    uVar1 = uVar6 + 1;
    fVar8 = fVar8 * 64.0;
    uVar2 = uVar5 + 1;
    uVar3 = (int)(fVar7 * 64.0) + 1;
    fVar14 = -0.7;
    fVar11 = (float)(&DAT_01cc6f80)[fVar7 <= 0.0];
    fVar10 = *(float *)(&DAT_01cc6f78 + (ulong)bVar4 * 4);
    if (!bVar4 && 0.026667 < fVar7) {
      fVar10 = 0.106667;
    }
    if (-0.0 < fVar7) {
      fVar14 = -0.5;
    }
    do {
      fVar12 = fVar10;
      if ((!bVar4 && 0.026667 < fVar7) && uVar1 < 0x40) {
        fVar12 = *(float *)(&DAT_01d8d250 + (ulong)uVar6 * 4) +
                 (fVar8 - (float)(int)fVar8) *
                 (*(float *)(&DAT_01d8d250 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01d8d250 + (ulong)uVar6 * 4));
      }
      fVar13 = -5.0;
      fVar15 = -0.9;
      if (fVar7 < 1.0) {
        fVar13 = fVar14;
        if (-0.0 < fVar7 && uVar2 < 0x40) {
          fVar13 = *(float *)(&DAT_01d8d350 + (ulong)uVar5 * 4) +
                   (fVar9 - (float)(int)fVar9) *
                   (*(float *)(&DAT_01d8d350 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01d8d350 + (ulong)uVar5 * 4));
        }
        fVar13 = fVar13 * 10.0;
        fVar15 = fVar11;
        if (fVar7 > 0.0 && uVar3 < 0x40) {
          fVar15 = *(float *)(&DAT_01d8d450 + (ulong)(uint)(int)(fVar7 * 64.0) * 4) +
                   (fVar7 * 64.0 - (float)(int)(fVar7 * 64.0)) *
                   (*(float *)(&DAT_01d8d450 + (ulong)uVar3 * 4) -
                   *(float *)(&DAT_01d8d450 + (ulong)(uint)(int)(fVar7 * 64.0) * 4));
        }
      }
      *param_3 = fVar12 * 15.0;
      param_3[1] = fVar13;
      param_2 = param_2 + -1;
      param_3[2] = fVar15 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_016ae9d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_016ae9e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016ae9f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_016aea08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016aea18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_016aea28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f800000;
  return 1;
}




undefined8 FUN_016aea3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aea48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_016aea58(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aea94(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016aead0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    fVar3 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar2 = (ulong)param_2;
    do {
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d8e150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016aeb84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aeb94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_016aeba8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016aebb4(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar4 = param_1 * 0.3 - (float)(int)(param_1 * 0.3);
    uVar2 = (ulong)(uint)(int)(fVar4 * 64.0);
    uVar1 = (int)(fVar4 * 64.0) + 1;
    uVar3 = (ulong)uVar1;
    fVar7 = 2.0;
    if (0.0 < fVar4) {
      fVar7 = 3.0;
    }
    fVar5 = fVar4 * 64.0 - (float)(int)(fVar4 * 64.0);
    fVar6 = 3.0;
    if (fVar4 < 1.0) {
      fVar6 = fVar7;
    }
    do {
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar7 = fVar6;
      if (fVar4 < 1.0 && (0.0 < fVar4 && uVar1 < 0x40)) {
        fVar8 = (*(float *)(&DAT_01d8d550 + uVar2 * 4) +
                fVar5 * (*(float *)(&DAT_01d8d550 + uVar3 * 4) -
                        *(float *)(&DAT_01d8d550 + uVar2 * 4))) * 15.0;
        fVar7 = (*(float *)(&DAT_01d8d650 + uVar2 * 4) +
                fVar5 * (*(float *)(&DAT_01d8d650 + uVar3 * 4) -
                        *(float *)(&DAT_01d8d650 + uVar2 * 4))) * 10.0;
        fVar9 = *(float *)(&DAT_01d8d750 + uVar2 * 4) +
                fVar5 * (*(float *)(&DAT_01d8d750 + uVar3 * 4) -
                        *(float *)(&DAT_01d8d750 + uVar2 * 4));
      }
      *param_3 = fVar8;
      param_3[1] = fVar7;
      param_2 = param_2 + -1;
      param_3[2] = fVar9 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_016aecb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_016aecc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016aecd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_016aece4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016aecf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_016aed04(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f4ccccd;
  return 1;
}




undefined8 FUN_016aed18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aed24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




uint FUN_016aed34(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aed70(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016aedac(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    fVar3 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar2 = (ulong)param_2;
    do {
      *param_3 = fVar3;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d8e150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8e150 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_016aee60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aee70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf19999a;
  return 1;
}




undefined8 FUN_016aee84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016aee90(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (0 < param_2) {
    fVar8 = param_1 * 0.3 - (float)(int)(param_1 * 0.3);
    fVar15 = (fVar8 + -0.013333) / 0.99999696;
    fVar11 = (fVar8 + 0.013334) / 1.026664;
    uVar5 = (uint)(fVar15 * 64.0);
    uVar1 = uVar5 + 1;
    uVar7 = (uint)(fVar11 * 64.0);
    uVar6 = (uint)((fVar8 / 0.9) * 64.0);
    uVar2 = uVar7 + 1;
    uVar3 = uVar6 + 1;
    bVar4 = fVar8 < 0.9;
    fVar10 = (fVar8 / 0.9) * 64.0;
    fVar9 = *(float *)(&DAT_01cc6f88 + (ulong)(fVar8 <= 0.013333) * 4);
    fVar15 = fVar15 * 64.0;
    fVar11 = fVar11 * 64.0;
    fVar13 = *(float *)(&DAT_01cc6f90 + (ulong)(fVar8 <= -0.013334) * 4);
    fVar12 = -0.2;
    if (bVar4) {
      fVar12 = -0.5;
    }
    if (bVar4 && 0.0 < fVar8) {
      fVar12 = -0.2;
    }
    do {
      fVar14 = -4.8000298;
      fVar16 = -0.713335;
      if (fVar8 < 1.01333) {
        fVar14 = fVar9;
        if (fVar8 > 0.013333 && uVar1 < 0x40) {
          fVar14 = *(float *)(&DAT_01d8d850 + (ulong)uVar5 * 4) +
                   (fVar15 - (float)(int)fVar15) *
                   (*(float *)(&DAT_01d8d850 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01d8d850 + (ulong)uVar5 * 4));
        }
        fVar14 = fVar14 * 15.0;
        fVar16 = fVar13;
        if (fVar8 > -0.013334 && uVar2 < 0x40) {
          fVar16 = *(float *)(&DAT_01d8d950 + (ulong)uVar7 * 4) +
                   (fVar11 - (float)(int)fVar11) *
                   (*(float *)(&DAT_01d8d950 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01d8d950 + (ulong)uVar7 * 4));
        }
      }
      fVar17 = fVar12;
      if ((bVar4 && 0.0 < fVar8) && uVar3 < 0x40) {
        fVar17 = *(float *)(&DAT_01d8da50 + (ulong)uVar6 * 4) +
                 (fVar10 - (float)(int)fVar10) *
                 (*(float *)(&DAT_01d8da50 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01d8da50 + (ulong)uVar6 * 4));
      }
      *param_3 = fVar14;
      param_3[1] = fVar16 * 10.0;
      param_2 = param_2 + -1;
      param_3[2] = fVar17 * 10.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}

