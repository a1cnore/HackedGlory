// functions/0108d — 77 functions
#include "libGameKindred.h"




void FUN_0108d000(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.2, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01c3c250 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c3c250 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c3c250 + (ulong)uVar3 * 4));
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




undefined8 FUN_0108d0c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108d0d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_0108d0e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d0f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108d100(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d10c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0108d11c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d128(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0108d138(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_0108d14c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4416000044160000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_0108d170(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_0108d17c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e99999a;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_0108d1a0(int param_1,undefined4 *param_2)

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




uint FUN_0108d1c0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d1fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d238(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0108d274(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    fVar4 = -0.0;
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01c3c350 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c3c350 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c3c350 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      fVar7 = fVar4;
      if ((fVar5 < 0.8) && (fVar7 = 1.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = fVar4;
        if (uVar1 < 0x40) {
          fVar7 = (fVar5 / 0.8) * 64.0;
          fVar7 = *(float *)(&DAT_01c3c450 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01c3c450 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c3c450 + (ulong)uVar3 * 4));
        }
      }
      fVar8 = fVar4;
      if ((fVar5 < 1.0) && (fVar8 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar8 = fVar4;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_01c5a250 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c5a250 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5a250 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar7;
      param_3[2] = fVar8;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = fVar4;
      if ((fVar6 < 1.0) && (fVar5 = 3.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar5 = fVar4;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c3c550 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_01c3c550 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c3c550 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_0108d444(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108d454(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d460(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d46c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108d47c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d488(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0108d498(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d4a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0108d4b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_0108d4c0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x428a0000428a0000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_0108d4e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d4f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




uint FUN_0108d500(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d53c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d578(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d5b4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0108d5f0(float param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar5 = param_1 * 0.6 - (float)(int)(param_1 * 0.6);
    uVar1 = (int)(param_1 * 64.0) + 1;
    bVar3 = 1.0 <= fVar5;
    uVar2 = (int)(fVar5 * 64.0) + 1;
    bVar4 = param_1 < 1.0;
    fVar6 = 0.5;
    if (bVar4) {
      fVar6 = 0.0;
    }
    if (bVar4 && 0.0 < param_1) {
      fVar6 = 0.5;
    }
    fVar7 = *(float *)((long)&DAT_01c1b110 + (ulong)bVar3 * 4);
    if (!bVar3 && 0.0 < fVar5) {
      fVar7 = 0.4;
    }
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar8 = fVar6;
      if ((bVar4 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01c46c50 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01c46c50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c46c50 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      fVar9 = fVar7;
      if ((!bVar3 && 0.0 < fVar5) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01c3c650 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                (*(float *)(&DAT_01c3c650 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01c3c650 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *(float *)((long)param_3 + 0xc) = fVar8 * fVar9;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0108d724(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108d734(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d740(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d74c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108d75c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0108d778(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d784(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0108d794(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_0108d7a0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42f0000042f00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_0108d7c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108d7d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_0108d7e0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d81c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d858(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0108d894(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0108d8d0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar7 = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      fVar6 = -0.0;
      if (fVar5 < 1.0) {
        fVar4 = 0.6;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          fVar4 = 0.0;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_01c3c750 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                    (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                    (*(float *)(&DAT_01c3c750 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c3c750 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
          }
        }
        fVar7 = 0.433333;
        if (0.026667 < fVar5) {
          fVar8 = (fVar5 + -0.026667) / 0.973333;
          uVar3 = (uint)(fVar8 * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = 0.0;
          if (uVar1 < 0x40) {
            fVar8 = fVar8 * 64.0;
            fVar7 = *(float *)(&DAT_01c3c850 + (ulong)uVar3 * 4) +
                    (fVar8 - (float)(int)fVar8) *
                    (*(float *)(&DAT_01c3c850 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c3c850 + (ulong)uVar3 * 4));
          }
        }
        if (fVar5 <= -0.0) {
          fVar6 = 1.0;
        }
        else {
          uVar3 = (uint)((fVar5 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          if (uVar1 < 0x40) {
            fVar6 = (fVar5 + 0.0) * 64.0;
            fVar6 = *(float *)(&DAT_01c5a250 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01c5a250 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c5a250 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar7;
      param_3[2] = fVar6;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 0.0;
      if ((fVar6 < 1.0) && (fVar7 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01c3c950 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_01c3c950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c3c950 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      param_3[3] = fVar7;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0108dab8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108dac8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbfc00000;
  return 1;
}




undefined8 FUN_0108dad8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0108dae4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0108daf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




undefined8 FUN_0108db04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_0108db14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_0108db24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0108db34(float param_1,int param_2,float *param_3)

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
    bVar3 = 1.0 <= param_1;
    fVar6 = (param_1 + -0.4) / 0.6;
    fVar8 = fVar6 * 64.0;
    uVar5 = (uint)(fVar6 * 64.0);
    uVar1 = uVar5 + 1;
    iVar2 = param_2;
    fVar6 = *(float *)(&DAT_01c38ac0 + (ulong)bVar3 * 4);
    if (!bVar3 && 0.4 < param_1) {
      fVar6 = 2.2;
    }
    do {
      iVar4 = rand();
      fVar7 = fVar6;
      if ((!bVar3 && 0.4 < param_1) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01c3ca50 + (ulong)uVar5 * 4) +
                (fVar8 - (float)(int)fVar8) *
                (*(float *)(&DAT_01c3ca50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c3ca50 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar4 * 4.656613e-10 * 10.0 + 0.0) * fVar7;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_0108dc68(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0x40400000;
      iVar1 = iVar1 + -1;
      param_2[1] = (float)iVar2 * 4.656613e-10 * 0.5 + 3.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_0108dcec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0108dcf8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0108dd60(int param_1,undefined4 *param_2)

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




void FUN_0108dd80(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_0108dda0(int param_1,undefined4 *param_2)

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




void FUN_0108ddc0(int param_1,undefined4 *param_2)

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




undefined8 FUN_0108dde0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_0108ddf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_0108de00(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0108de10(float param_1,int param_2,float *param_3)

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
    bVar3 = 1.0 <= param_1;
    fVar6 = (param_1 + -0.4) / 0.6;
    fVar8 = fVar6 * 64.0;
    uVar5 = (uint)(fVar6 * 64.0);
    uVar1 = uVar5 + 1;
    iVar2 = param_2;
    fVar6 = *(float *)(&DAT_01c38ac0 + (ulong)bVar3 * 4);
    if (!bVar3 && 0.4 < param_1) {
      fVar6 = 2.2;
    }
    do {
      iVar4 = rand();
      fVar7 = fVar6;
      if ((!bVar3 && 0.4 < param_1) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01c3ca50 + (ulong)uVar5 * 4) +
                (fVar8 - (float)(int)fVar8) *
                (*(float *)(&DAT_01c3ca50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c3ca50 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar4 * 4.656613e-10 * 10.0 + 0.0) * fVar7 * 0.75;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_0108df4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_0108df5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0108df68(int param_1,float *param_2)

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




void FUN_0108dfd4(int param_1,undefined4 *param_2)

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




void FUN_0108dff4(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}

