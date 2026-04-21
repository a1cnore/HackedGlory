// functions/011b1 — 80 functions
#include "libGameKindred.h"




uint FUN_011b1004(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011b1040(float param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar7 = (param_1 + -0.05) / 0.75;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    uVar2 = (int)(param_1 * 64.0) + 1;
    bVar3 = param_1 < 0.8;
    fVar7 = fVar7 * 64.0;
    fVar8 = 0.0;
    if (bVar3) {
      fVar8 = 1.0;
    }
    if (bVar3 && 0.05 < param_1) {
      fVar8 = 0.0;
    }
    bVar4 = param_1 < 1.0;
    fVar6 = 0.45;
    if (bVar4) {
      fVar6 = 1.0;
    }
    if (bVar4 && 0.0 < param_1) {
      fVar6 = 0.45;
    }
    do {
      fVar9 = fVar8;
      if ((bVar3 && 0.05 < param_1) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01c78b04 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01c78b04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c78b04 + (ulong)uVar5 * 4));
      }
      *(float *)(param_3 + 1) = fVar9;
      *param_3 = 0;
      fVar9 = fVar6;
      if ((bVar4 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01c78604 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01c78604 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01c78604 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      *(float *)((long)param_3 + 0xc) = fVar9;
      param_2 = param_2 + -1;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_011b116c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b117c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1188(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1194(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b11a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b11b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011b11c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b11cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b11dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b11e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_011b11f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1204(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_011b1214(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 3);
  }
  return param_1;
}




void FUN_011b1250(int param_1,undefined8 *param_2)

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




void FUN_011b127c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
    uVar5 = (uint)(param_1 * 0.5 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 2.0;
    fVar6 = param_1 * 0.5 * 64.0;
    fVar7 = 0.0;
    if (bVar3) {
      fVar7 = 1.0;
    }
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 0.0;
    }
    uVar4 = (ulong)param_2;
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01c77e04 + (ulong)uVar5 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01c77e04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c77e04 + (ulong)uVar5 * 4));
      }
      *param_3 = 0;
      *(float *)(param_3 + 1) = fVar8;
      fVar9 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar8 = 0.8;
      if ((fVar9 < 1.0) && (fVar8 = 0.85, 0.0 < fVar9)) {
        uVar2 = (int)(fVar9 * 64.0) + 1;
        fVar8 = 0.8;
        if (uVar2 < 0x40) {
          fVar8 = *(float *)(&DAT_01c77f04 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01c77f04 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01c77f04 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar8;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 2;
    } while (uVar4 != 0);
  }
  return;
}




undefined8 FUN_011b13a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_011b13b8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) / fVar4;
      fVar6 = 0.1;
      if ((fVar5 < 0.75) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.75) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.1;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 / 0.75) * 64.0;
          fVar6 = *(float *)(&DAT_01c78004 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01c78004 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c78004 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * fVar4 * 4.0 * fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_011b1470(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b147c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b148c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1498(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b14a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_011b14b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b14c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_011b14d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f0000003f000000;
  return 1;
}




int FUN_011b14e8(int param_1,float *param_2)

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




undefined8 FUN_011b1564(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f19999a;
  return 1;
}




void FUN_011b1578(int param_1,undefined4 *param_2)

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




uint FUN_011b1598(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_011b15d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b15e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_011b15f0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b1600(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_011b1614(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f19999a3f19999a;
  return 1;
}




int FUN_011b162c(int param_1,float *param_2)

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




undefined8 FUN_011b16a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f333333;
  return 1;
}




void FUN_011b16bc(int param_1,undefined4 *param_2)

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




uint FUN_011b16dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_011b1718(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1724(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_011b1734(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b1744(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_011b1758(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f3333333f333333;
  return 1;
}




int FUN_011b1770(int param_1,float *param_2)

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




undefined8 FUN_011b17ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f4ccccd;
  return 1;
}




void FUN_011b1800(int param_1,undefined4 *param_2)

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




uint FUN_011b1820(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011b185c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_2) {
    fVar7 = (param_1 + -0.1) / 0.9;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 1.0;
    fVar7 = fVar7 * 64.0;
    fVar8 = -0.0;
    if (bVar3) {
      fVar8 = 1.0;
    }
    uVar4 = (ulong)param_2;
    if (bVar3 && 0.1 < param_1) {
      fVar8 = -0.0;
    }
    do {
      fVar9 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar11 = 2.0;
      fVar10 = 0.5;
      if (fVar9 < 1.0) {
        fVar11 = 0.0;
        if (-0.0 < fVar9) {
          uVar6 = (uint)((fVar9 + 0.0) * 64.0);
          uVar2 = uVar6 + 1;
          fVar11 = 2.0;
          if (uVar2 < 0x40) {
            fVar11 = (fVar9 + 0.0) * 64.0;
            fVar11 = *(float *)(&DAT_01c78104 + (ulong)uVar6 * 4) +
                     (fVar11 - (float)(int)fVar11) *
                     (*(float *)(&DAT_01c78104 + (ulong)uVar2 * 4) -
                     *(float *)(&DAT_01c78104 + (ulong)uVar6 * 4));
          }
        }
        fVar10 = -0.35;
        if (0.0 < fVar9) {
          uVar2 = (int)(fVar9 * 64.0) + 1;
          if (uVar2 < 0x40) {
            fVar10 = *(float *)(&DAT_01c78204 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                     (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                     (*(float *)(&DAT_01c78204 + (ulong)uVar2 * 4) -
                     *(float *)(&DAT_01c78204 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
          }
          else {
            fVar10 = 0.5;
          }
        }
      }
      fVar9 = fVar8;
      if ((bVar3 && 0.1 < param_1) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01c78304 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01c78304 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c78304 + (ulong)uVar5 * 4));
      }
      *param_3 = fVar11;
      param_3[1] = fVar10;
      param_3[2] = fVar9;
      fVar10 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar11 = 0.0;
      if ((fVar10 < 1.0) && (fVar11 = 0.45, 0.05 < fVar10)) {
        fVar10 = (fVar10 + -0.05) / 0.95;
        uVar6 = (uint)(fVar10 * 64.0);
        uVar2 = uVar6 + 1;
        fVar11 = 0.0;
        if (uVar2 < 0x40) {
          fVar10 = fVar10 * 64.0;
          fVar11 = *(float *)(&DAT_01c78404 + (ulong)uVar6 * 4) +
                   (fVar10 - (float)(int)fVar10) *
                   (*(float *)(&DAT_01c78404 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01c78404 + (ulong)uVar6 * 4));
        }
      }
      param_3[3] = fVar11;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 4;
    } while (uVar4 != 0);
  }
  return;
}




undefined8 FUN_011b1a8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_011b1a9c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01c78504 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c78504 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c78504 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar3;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_011b1b30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1b3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b1b4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1b58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_011b1b68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1b74(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b1b84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




int FUN_011b1b98(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x3e800000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + 0.5,
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + 0.5);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_011b1c1c(int param_1,float *param_2)

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




int FUN_011b1c98(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.7 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_011b1d18(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43340000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_011b1d38(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_011b1d58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1d64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_011b1d74(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_011b1d84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_011b1d98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




int FUN_011b1db0(int param_1,float *param_2)

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




undefined8 FUN_011b1e2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_011b1e3c(int param_1,undefined4 *param_2)

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




void FUN_011b1e5c(int param_1,undefined4 *param_2)

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




void FUN_011b1e80(float param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar7 = (param_1 + -0.05) / 0.75;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    uVar2 = (int)(param_1 * 64.0) + 1;
    bVar3 = param_1 < 0.8;
    fVar7 = fVar7 * 64.0;
    fVar8 = 0.0;
    if (bVar3) {
      fVar8 = 1.0;
    }
    if (bVar3 && 0.05 < param_1) {
      fVar8 = 0.0;
    }
    bVar4 = param_1 < 1.0;
    fVar6 = 0.45;
    if (bVar4) {
      fVar6 = 1.0;
    }
    if (bVar4 && 0.0 < param_1) {
      fVar6 = 0.45;
    }
    do {
      fVar9 = fVar8;
      if ((bVar3 && 0.05 < param_1) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01c78b04 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01c78b04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c78b04 + (ulong)uVar5 * 4));
      }
      *(float *)(param_3 + 1) = fVar9;
      *param_3 = 0;
      fVar9 = fVar6;
      if ((bVar4 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01c78604 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01c78604 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01c78604 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      *(float *)((long)param_3 + 0xc) = fVar9;
      param_2 = param_2 + -1;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_011b1fac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b1fbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1fc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011b1fd4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011b1fe4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41000000;
  return 1;
}




undefined8 FUN_011b1ff4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}

