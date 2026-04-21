// functions/011b2 — 108 functions
#include "libGameKindred.h"




undefined8 FUN_011b2004(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2010(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b2020(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b202c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_011b203c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2048(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_011b2058(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 3);
  }
  return param_1;
}




void FUN_011b2094(int param_1,undefined8 *param_2)

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




void FUN_011b20c0(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
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
  
  if (0 < param_2) {
    fVar8 = (param_1 + param_1) - (float)(int)(param_1 + param_1);
    uVar6 = (uint)((param_1 / 0.35) * 64.0);
    fVar11 = (param_1 + -0.2) / 1.8;
    fVar10 = (param_1 / 0.35) * 64.0;
    uVar7 = (uint)(fVar11 * 64.0);
    fVar11 = fVar11 * 64.0;
    uVar1 = uVar6 + 1;
    uVar2 = (int)(fVar8 * 64.0) + 1;
    uVar3 = uVar7 + 1;
    bVar4 = param_1 < 0.35;
    fVar12 = 1.35;
    if (bVar4) {
      fVar12 = 1.8;
    }
    if (bVar4 && 0.0 < param_1) {
      fVar12 = 1.35;
    }
    bVar5 = param_1 < 2.0;
    fVar9 = 0.0;
    if (bVar5) {
      fVar9 = 1.0;
    }
    if (bVar5 && 0.2 < param_1) {
      fVar9 = 0.0;
    }
    do {
      fVar13 = fVar12;
      if ((bVar4 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar13 = *(float *)(&DAT_01c78704 + (ulong)uVar6 * 4) +
                 (fVar10 - (float)(int)fVar10) *
                 (*(float *)(&DAT_01c78704 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01c78704 + (ulong)uVar6 * 4));
      }
      fVar14 = 1.5;
      if ((0.0 < fVar8 && fVar8 < 1.0) && uVar2 < 0x40) {
        fVar14 = *(float *)(&DAT_01c78804 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                 (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                 (*(float *)(&DAT_01c78804 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01c78804 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
      }
      fVar15 = fVar9;
      if ((bVar5 && 0.2 < param_1) && uVar3 < 0x40) {
        fVar15 = *(float *)(&DAT_01c78904 + (ulong)uVar7 * 4) +
                 (fVar11 - (float)(int)fVar11) *
                 (*(float *)(&DAT_01c78904 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01c78904 + (ulong)uVar7 * 4));
      }
      *param_3 = fVar13 * fVar14;
      param_3[1] = param_1;
      param_3[2] = fVar15;
      param_3[3] = 1.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_011b2268(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2278(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2284(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2290(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b22a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b22ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011b22bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b22c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b22d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b22e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_011b22f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2300(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_011b2310(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 3);
  }
  return param_1;
}




void FUN_011b234c(int param_1,undefined8 *param_2)

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




void FUN_011b2378(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar4 = (uint)((param_1 / 0.2) * 64.0);
    uVar1 = uVar4 + 1;
    bVar3 = param_1 < 0.2;
    fVar6 = (param_1 / 0.2) * 64.0;
    fVar7 = 0.0;
    if (bVar3) {
      fVar7 = 1.0;
    }
    uVar5 = (ulong)param_2;
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 0.0;
    }
    do {
      uVar2 = *(undefined4 *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar8 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01c7fe04 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01c7fe04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c7fe04 + (ulong)uVar4 * 4));
      }
      *param_3 = 0;
      param_3[1] = uVar2;
      param_3[2] = fVar8;
      param_3[3] = 0x3f800000;
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 4;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_011b2434(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_011b2444(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) / fVar4;
      fVar5 = -1.0;
      if ((fVar6 < 1.0) && (fVar5 = 0.0, 0.025 < fVar6)) {
        fVar6 = (fVar6 + -0.025) / 0.975;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01c78a04 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c78a04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c78a04 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 / fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_011b2508(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2514(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2524(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_011b2534(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_011b2544(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2550(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_011b2560(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 2.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_011b25d8(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.75 + 0.25,
                          (float)uVar4 * 4.656613e-10 * 0.075 + 0.175);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_011b2664(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_011b2670(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.25 + 0.15;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_011b26ec(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43870000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_011b270c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e4ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_011b2730(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    fVar6 = (param_1 + -0.05) / 0.75;
    uVar5 = (uint)(fVar6 * 64.0);
    fVar6 = fVar6 * 64.0;
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.8;
    fVar7 = 0.0;
    if (bVar3) {
      fVar7 = 1.0;
    }
    uVar4 = (ulong)param_2;
    if (bVar3 && 0.05 < param_1) {
      fVar7 = 0.0;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.05 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01c78b04 + (ulong)uVar5 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01c78b04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c78b04 + (ulong)uVar5 * 4));
      }
      *param_3 = 0;
      *(float *)(param_3 + 1) = fVar8;
      fVar8 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar9 = 0.0;
      if ((fVar8 < 1.0) && (fVar9 = 2.0, 0.0 < fVar8)) {
        uVar2 = (int)(fVar8 * 64.0) + 1;
        fVar9 = 0.0;
        if (uVar2 < 0x40) {
          fVar9 = *(float *)(&DAT_01c78c04 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                  (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                  (*(float *)(&DAT_01c78c04 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01c78c04 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar9;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 2;
    } while (uVar4 != 0);
  }
  return;
}




undefined8 FUN_011b2868(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2878(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_011b2888(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_011b2898(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b28a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b28b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011b28c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b28d0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b28e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b28ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_011b28fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2908(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




uint FUN_011b291c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 3);
  }
  return param_1;
}




void FUN_011b2958(int param_1,undefined8 *param_2)

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




void FUN_011b2984(undefined4 param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      *(undefined4 *)((long)param_3 + 0xc) = param_1;
      param_2 = param_2 + -1;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_011b29b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b29c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b29d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b29dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b29ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b29f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011b2a08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2a14(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b2a24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2a30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




undefined8 FUN_011b2a40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2a4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_011b2a5c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011b2a98(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011b2ad4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.1, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c78d04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c78d04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c78d04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_011b2b94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2ba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_011b2bb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2bc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2bd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2bdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011b2bec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2bf8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b2c08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_011b2c1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040900000;
  return 1;
}




undefined8 FUN_011b2c30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2c3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_011b2c50(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011b2c8c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011b2cc8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.1, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c78d04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c78d04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c78d04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_011b2d88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2d98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_011b2da8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2db4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2dc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2dd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011b2de0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2dec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b2dfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_011b2e10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040900000;
  return 1;
}




undefined8 FUN_011b2e24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




undefined8 FUN_011b2e34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_011b2e48(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011b2e84(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011b2ec0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01c7ec04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01c7ec04 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c7ec04 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_011b2f78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2f88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_011b2f98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2fa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b2fb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011b2fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b2fdc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b2fec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}

