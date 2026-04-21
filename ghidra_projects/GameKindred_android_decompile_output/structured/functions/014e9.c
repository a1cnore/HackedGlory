// functions/014e9 — 71 functions
#include "libGameKindred.h"




undefined8 FUN_014e900c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_014e901c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e9028(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014e9038(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_014e9048(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4180000040000000;
  return 1;
}




undefined8 FUN_014e905c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




undefined8 FUN_014e906c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




uint FUN_014e907c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014e90b8(int param_1,undefined4 *param_2)

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




uint FUN_014e90d8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_014e9114(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014e9150(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = 1.0;
      fVar7 = 0.4;
      fVar5 = 0.2;
      if (fVar4 < 1.0) {
        fVar6 = -0.2;
        if (-0.0 < fVar4) {
          uVar3 = (uint)((fVar4 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = 1.0;
          if (uVar1 < 0x40) {
            fVar6 = (fVar4 + 0.0) * 64.0;
            fVar6 = *(float *)(&DAT_01d2db50 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01d2db50 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2db50 + (ulong)uVar3 * 4));
          }
        }
        fVar7 = 1.5;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          fVar7 = 0.4;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01d2dd50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                    (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                    (*(float *)(&DAT_01d2dd50 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2dd50 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
          }
        }
        fVar5 = -0.2;
        if (-0.0 < fVar4) {
          uVar3 = (uint)((fVar4 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar5 = 0.2;
          if (uVar1 < 0x40) {
            fVar5 = (fVar4 + 0.0) * 64.0;
            fVar5 = *(float *)(&DAT_01d2de50 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_01d2de50 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2de50 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar7;
      param_3[2] = fVar5;
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar7 < 1.0) && (fVar6 = 0.0, -0.0 < fVar7)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar7 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar7 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d4d650 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d4d650 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d4d650 + (ulong)uVar3 * 4));
        }
      }
      param_3[3] = fVar6;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_014e9330(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014e9340(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_014e9350(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e935c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014e936c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e9378(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014e9388(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e9394(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014e93a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e93b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4190000041400000;
  return 1;
}




undefined8 FUN_014e93c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_014e93d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_014e93e8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_014e9424(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014e9460(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = 1.0;
      fVar5 = 0.4;
      fVar7 = 0.2;
      if (fVar4 < 1.0) {
        fVar5 = 1.5;
        fVar6 = -0.3;
        if (0.0 < fVar4) {
          uVar3 = (uint)(fVar4 * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = fVar4 * 64.0;
          fVar5 = 0.4;
          fVar6 = 1.0;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_01d2dd50 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01d2dd50 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2dd50 + (ulong)uVar3 * 4));
            fVar6 = *(float *)(&DAT_01d2dc50 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01d2dc50 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2dc50 + (ulong)uVar3 * 4));
          }
        }
        fVar7 = -0.2;
        if (-0.0 < fVar4) {
          uVar3 = (uint)((fVar4 + 0.0) * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = 0.2;
          if (uVar1 < 0x40) {
            fVar7 = (fVar4 + 0.0) * 64.0;
            fVar7 = *(float *)(&DAT_01d2de50 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_01d2de50 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01d2de50 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_3[2] = fVar7;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, -0.0 < fVar5)) {
        fVar6 = 0.0;
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d4d650 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d4d650 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d4d650 + (ulong)uVar3 * 4));
        }
      }
      param_3[3] = fVar6;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_014e9634(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014e9644(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_014e9654(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e9660(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014e9670(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e967c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_014e968c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e9698(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014e96a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e96b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4180000041100000;
  return 1;
}




undefined8 FUN_014e96c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_014e96d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




uint FUN_014e96ec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_014e9728(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014e9764(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01d3f850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d3f850 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d3f850 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_014e981c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_014e982c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 0.8) && (fVar4 = 0.0, -0.0 < fVar5)) {
        fVar5 = (fVar5 + 0.0) / 0.8;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d2df50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d2df50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d2df50 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 5.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_014e98ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e98f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014e9908(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_014e9918(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_014e9928(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42340000;
  return 1;
}




undefined8 FUN_014e9938(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_014e9948(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




int FUN_014e9958(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < param_2) {
    bVar4 = 0.2 <= param_1;
    uVar7 = (uint)((param_1 / 0.2) * 64.0);
    uVar1 = uVar7 + 1;
    fVar11 = 0.3;
    bVar3 = 0.0 < param_1;
    fVar8 = (param_1 / 0.2) * 64.0;
    fVar8 = fVar8 - (float)(int)fVar8;
    iVar2 = param_2;
    if (bVar3 || bVar4) {
      fVar11 = 1.0;
    }
    do {
      fVar9 = fVar11;
      if ((bVar3 && !bVar4) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01d2e050 + (ulong)uVar7 * 4) +
                fVar8 * (*(float *)(&DAT_01d2e050 + (ulong)uVar1 * 4) -
                        *(float *)(&DAT_01d2e050 + (ulong)uVar7 * 4));
      }
      iVar5 = rand();
      fVar10 = fVar11;
      if ((bVar3 && !bVar4) && uVar1 < 0x40) {
        fVar10 = *(float *)(&DAT_01d2e050 + (ulong)uVar7 * 4) +
                 fVar8 * (*(float *)(&DAT_01d2e050 + (ulong)uVar1 * 4) -
                         *(float *)(&DAT_01d2e050 + (ulong)uVar7 * 4));
      }
      iVar6 = rand();
      iVar2 = iVar2 + -1;
      *param_3 = (1.5 - fVar9) * ((float)iVar5 * 4.656613e-10 + 2.0);
      param_3[1] = (1.5 - fVar10) * ((float)iVar6 * 4.656613e-10 + 3.0);
      param_3 = param_3 + 2;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_014e9ab0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 20.0 + 170.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_014e9b2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_014e9b40(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_014e9b7c(float param_1,int param_2,float *param_3)

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
    fVar5 = 1.0;
    if (bVar2) {
      fVar5 = 0.3;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar5 = 1.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d2e050 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d2e050 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d2e050 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6 * 8.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




uint FUN_014e9c24(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_014e9c60(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




int FUN_014e9c9c(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0xbf0000003f000000;
      iVar1 = iVar1 + -1;
      *(float *)(param_2 + 1) = (float)iVar2 * -4.656613e-10 * 0.2 + 0.1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_014e9d2c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = -0.0;
      if ((fVar5 < 1.0) && (fVar6 = 2.0, -0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = -0.0;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 + 0.0) * 64.0;
          fVar6 = *(float *)(&DAT_01d37050 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d37050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d37050 + (ulong)uVar3 * 4));
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




undefined8 FUN_014e9df0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_014e9e00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_014e9e14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_014e9e20(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc080000000000000;
  return 1;
}




undefined8 FUN_014e9e38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_014e9e48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_014e9e58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_014e9e68(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_014e9e78(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 10.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_014e9ef0(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.6 + 0.4,
                          (float)uVar4 * 4.656613e-10 * 0.6 + 0.4);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_014e9f84(int param_1,float *param_2)

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

