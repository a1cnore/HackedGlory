// functions/01115 — 88 functions
#include "libGameKindred.h"




void FUN_01115008(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_01c5a450 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c5a450 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5a450 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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
          fVar6 = *(float *)(&DAT_01c59a50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c59a50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c59a50 + (ulong)uVar3 * 4));
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
          fVar4 = *(float *)(&DAT_01c5c950 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01c5c950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5c950 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_0111519c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




int FUN_011151ac(int param_1,float *param_2)

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




undefined8 FUN_01115224(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115230(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc040000000000000;
  return 1;
}




undefined8 FUN_01115248(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115254(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_01115264(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_01115274(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01115284(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 4.0 + 4.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_011152f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3dcccccd3f333333;
  return 1;
}




undefined8 FUN_01115304(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




int FUN_01115314(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.3 + 0.2;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01115394(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40400000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_011153b4(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    uVar3 = (uint)((param_1 / 0.1) * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.1;
    fVar4 = (param_1 / 0.1) * 64.0;
    fVar5 = 0.0;
    if (bVar2) {
      fVar5 = 1.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar5 = 0.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01c59b50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01c59b50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c59b50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_01115450(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01c59c50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c59c50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c59c50 + (ulong)uVar3 * 4));
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




undefined8 FUN_0111550c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0111551c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_0111552c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115538(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115548(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




int FUN_01115558(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 12.0 + 7.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_011155d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011155dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_011155ec(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 9.0 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01115664(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003e99999a;
  return 1;
}




undefined8 FUN_01115678(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_01115688(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01115704(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x430f47ae;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01115728(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01115764(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01c59d50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c59d50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c59d50 + (ulong)uVar3 * 4));
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




undefined8 FUN_01115820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115830(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0111583c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115848(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115858(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115864(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01115874(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115880(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01115890(int param_1,float *param_2)

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




undefined8 FUN_011158fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




undefined8 FUN_01115910(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_0111591c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.01 + 0.02;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0111599c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40a147ae;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_011159c0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011159fc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01c59e50 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c59e50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c59e50 + (ulong)uVar3 * 4));
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




undefined8 FUN_01115ab8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115ac8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_01115ad8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115ae4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115af4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115b00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01115b10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115b1c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01115b2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01115b3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000040800000;
  return 1;
}




undefined8 FUN_01115b50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115b5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




void FUN_01115b70(int param_1,undefined4 *param_2)

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




uint FUN_01115b90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01115bcc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.5, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c59f50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c59f50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c59f50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01115c80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115c90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_01115ca0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc4098000;
  return 1;
}




undefined8 FUN_01115cb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115cc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115cd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01115ce0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115cec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01115cfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01115d0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01115d1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




void FUN_01115d3c(int param_1,undefined4 *param_2)

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




uint FUN_01115d5c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01115d98(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.4;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.4;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c5a050 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c5a050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5a050 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_01c5a150 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c5a150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c5a150 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_01115ea8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115eb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01115ec8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_01115ed8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01115ee8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_01115ef8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01115f08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01115f18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01115f28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01115f34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




int FUN_01115f44(int param_1,float *param_2)

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




int FUN_01115fc0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.099999994 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

