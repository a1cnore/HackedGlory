// functions/01141 — 62 functions
#include "libGameKindred.h"




undefined8 FUN_01141038(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01141048(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01141058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141064(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc0a0000000000000;
  return 1;
}




undefined8 FUN_0114107c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141088(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01141098(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011410a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_011410b4(int param_1,float *param_2)

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




undefined8 FUN_01141120(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e99999a3e99999a;
  return 1;
}




int FUN_01141138(int param_1,float *param_2)

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




int FUN_011411b4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.19999999 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01141234(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4249999a;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01141258(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01141294(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 0.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01c72c04 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c72c04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c72c04 + (ulong)uVar3 * 4));
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
          fVar4 = *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c7fd04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_011413b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011413c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_011413d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011413e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011413f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011413fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0114140c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141418(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01141428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141434(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01141444(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_01141454(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_01141468(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011414a4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011414e0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 64.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 64.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c61c04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c61c04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c61c04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c6f504 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c6f504 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c6f504 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




void FUN_011415e8(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
      fVar4 = -0.4;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.4;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c61a04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c61a04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c61a04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar4;
      param_3[2] = 0;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 3;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01141698(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011416a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_011416b0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    fVar4 = 0.527158;
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = fVar4;
      if ((1.00606 <= fVar5) || (fVar7 = 0.593453, fVar5 <= 0.010605)) {
LAB_011417b4:
        uVar1 = (int)(fVar7 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01c61e04 + (ulong)(uint)(int)(fVar7 * 64.0) * 4) +
                  (fVar7 * 64.0 - (float)(int)(fVar7 * 64.0)) *
                  (*(float *)(&DAT_01c61e04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c61e04 + (ulong)(uint)(int)(fVar7 * 64.0) * 4));
        }
      }
      else {
        fVar6 = (fVar5 + -0.010605) / 0.995455;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = fVar4;
        if (0x3f < uVar1) goto LAB_011417b4;
        fVar6 = fVar6 * 64.0;
        fVar7 = *(float *)(&DAT_01c61b04 + (ulong)uVar3 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01c61b04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c61b04 + (ulong)uVar3 * 4));
        fVar6 = 1.0;
        if ((fVar7 < 1.0) && (fVar6 = 1.0, 0.0 < fVar7)) goto LAB_011417b4;
      }
      fVar7 = 1.0;
      if (fVar5 < 1.0 && -0.0 < fVar5) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = 1.0;
        if (uVar1 < 0x40) {
          fVar7 = (fVar5 + 0.0) * 64.0;
          fVar7 = *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01c7bb04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4));
        }
      }
      fVar9 = fVar4;
      if ((1.00606 <= fVar5) || (fVar9 = 0.593453, fVar5 <= 0.010605)) {
LAB_011418ac:
        uVar1 = (int)(fVar9 * 64.0) + 1;
        fVar8 = 0.0;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_01c62004 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01c62004 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c62004 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      else {
        fVar8 = (fVar5 + -0.010605) / 0.995455;
        uVar3 = (uint)(fVar8 * 64.0);
        uVar1 = uVar3 + 1;
        fVar9 = fVar4;
        if (0x3f < uVar1) goto LAB_011418ac;
        fVar8 = fVar8 * 64.0;
        fVar9 = *(float *)(&DAT_01c61b04 + (ulong)uVar3 * 4) +
                (fVar8 - (float)(int)fVar8) *
                (*(float *)(&DAT_01c61b04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c61b04 + (ulong)uVar3 * 4));
        fVar8 = 0.0;
        if ((fVar9 < 1.0) && (fVar8 = 0.0, 0.0 < fVar9)) goto LAB_011418ac;
      }
      fVar9 = 1.0;
      if (fVar5 < 1.0 && -0.0 < fVar5) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar9 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 + 0.0) * 64.0;
          fVar9 = *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c7bb04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar6 * fVar7 * 35.0;
      param_3[1] = 0.0;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3[2] = fVar8 * fVar9 * 35.0;
      param_3 = param_3 + 3;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0114194c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_0114195c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141968(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_0114197c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0114198c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_0114199c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




undefined8 FUN_011419ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_011419b8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 4.0 + 8.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01141a30(int param_1,undefined4 *param_2)

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




void FUN_01141a50(int param_1,undefined4 *param_2)

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




uint FUN_01141a70(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01141aac(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01141ae8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 64.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 64.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c61c04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c61c04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c61c04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c6f504 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c6f504 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c6f504 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




void FUN_01141bf0(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.186667;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.186667;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c61d04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c61d04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c61d04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar4;
      param_3[2] = 0;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 3;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01141ca0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141cac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01141cb8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.5;
      if ((1.0 <= fVar4) || (fVar6 = 0.313333, fVar4 <= 0.0)) {
LAB_01141d90:
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c61e04 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_01c61e04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c61e04 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
        if (fVar4 < 1.0) goto LAB_01141dcc;
        fVar5 = fVar5 * 35.0;
LAB_01141e6c:
        fVar6 = 0.5;
LAB_01141e78:
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar7 = 0.0;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01c62004 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_01c62004 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c62004 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
        fVar6 = 1.0;
        if (fVar4 < 1.0) goto LAB_01141eb8;
      }
      else {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar6 = 0.5;
        if (0x3f < uVar1) goto LAB_01141d90;
        fVar6 = *(float *)(&DAT_01c61f04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                (*(float *)(&DAT_01c61f04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c61f04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        fVar5 = 1.0;
        if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.0 < fVar6)) goto LAB_01141d90;
LAB_01141dcc:
        fVar6 = 1.0;
        if (-0.0 < fVar4) {
          uVar3 = (uint)((fVar4 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = 1.0;
          if (uVar1 < 0x40) {
            fVar6 = (fVar4 + 0.0) * 64.0;
            fVar6 = *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01c7bb04 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4));
          }
        }
        fVar5 = fVar5 * fVar6 * 35.0;
        fVar6 = 0.313333;
        if (fVar4 <= 0.0) goto LAB_01141e78;
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (0x3f < uVar1) goto LAB_01141e6c;
        fVar6 = *(float *)(&DAT_01c61f04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                (*(float *)(&DAT_01c61f04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c61f04 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        fVar7 = 0.0;
        if ((fVar6 < 1.0) && (fVar7 = 0.0, 0.0 < fVar6)) goto LAB_01141e78;
LAB_01141eb8:
        if (-0.0 < fVar4) {
          uVar3 = (uint)((fVar4 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          if (uVar1 < 0x40) {
            fVar6 = (fVar4 + 0.0) * 64.0;
            fVar6 = *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01c7bb04 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01c7bb04 + (ulong)uVar3 * 4));
            goto LAB_01141efc;
          }
        }
        fVar6 = 1.0;
      }
LAB_01141efc:
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3[2] = fVar7 * fVar6 * 35.0;
      param_3 = param_3 + 3;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01141f24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_01141f34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141f40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_01141f54(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01141f64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01141f74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




undefined8 FUN_01141f84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01141f90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41000000;
  return 1;
}




void FUN_01141fa0(int param_1,undefined4 *param_2)

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




void FUN_01141fc0(int param_1,undefined4 *param_2)

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




uint FUN_01141fe0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

