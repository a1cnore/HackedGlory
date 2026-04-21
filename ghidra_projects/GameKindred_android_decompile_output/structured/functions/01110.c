// functions/01110 — 75 functions
#include "libGameKindred.h"




undefined8 FUN_0111005c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0111006c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = param_1 + -0.5 + param_1 + -0.5;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 1.0;
    fVar5 = 0.25;
    fVar4 = fVar4 * 64.0;
    if (bVar2) {
      fVar5 = -0.5;
    }
    if (bVar2 && 0.5 < param_1) {
      fVar5 = 0.25;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.5 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01c57d50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01c57d50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c57d50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6 * 5.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_01110114(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    uVar3 = (uint)((param_1 + 0.0) * 64.0);
    uVar1 = uVar3 + 1;
    fVar4 = (param_1 + 0.0) * 64.0;
    bVar2 = param_1 < 1.0;
    fVar5 = 0.0;
    if (bVar2) {
      fVar5 = 1.0;
    }
    if (bVar2 && -0.0 < param_1) {
      fVar5 = 0.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && -0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01c57e50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01c57e50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c57e50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6 * 200.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_011101bc(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc0a0000000000000;
  return 1;
}




undefined8 FUN_011101d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_011101e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011101f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42340000;
  return 1;
}




undefined8 FUN_01110200(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01110210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_01110220(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40500000,4);
  *param_2 = uVar1;
  return 1;
}




int FUN_01110230(int param_1,float *param_2)

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




int FUN_011102ac(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.35000002 + 0.25;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01110328(int param_1,undefined4 *param_2)

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




void FUN_01110348(int param_1,undefined4 *param_2)

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




uint FUN_01110368(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011103a4(int param_1,undefined4 *param_2)

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




void FUN_011103c4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    uVar4 = (uint)((param_1 / 0.21875) * 64.0);
    uVar1 = uVar4 + 1;
    bVar3 = param_1 < 0.21875;
    fVar6 = (param_1 / 0.21875) * 64.0;
    fVar7 = 1.0;
    if (bVar3) {
      fVar7 = 0.0;
    }
    uVar5 = (ulong)param_2;
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 1.0;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01c59a50 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01c59a50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c59a50 + (ulong)uVar4 * 4));
      }
      *param_3 = fVar8;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar9 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar8 = 0.0;
      if ((fVar9 < 1.0) && (fVar8 = 0.0, 0.0 < fVar9)) {
        uVar2 = (int)(fVar9 * 64.0) + 1;
        if (uVar2 < 0x40) {
          fVar8 = *(float *)(&DAT_01c57f50 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_01c57f50 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01c57f50 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      param_3[3] = fVar8;
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 4;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_011104d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011104e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011104f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011104fc(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc120000000000000;
  return 1;
}




undefined8 FUN_01110514(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01110524(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01110534(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01110540(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01110550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_01110560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




int FUN_01110570(int param_1,float *param_2)

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




int FUN_011105ec(int param_1,float *param_2)

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




void FUN_0111066c(int param_1,undefined4 *param_2)

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




void FUN_0111068c(int param_1,undefined4 *param_2)

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




uint FUN_011106ac(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011106e8(int param_1,undefined4 *param_2)

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




void FUN_01110708(float param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    uVar2 = NEON_fmov(0x3f800000,4);
    do {
      fVar3 = 0.0;
      *param_3 = uVar2;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      if ((0.0 < param_1 && param_1 < 1.0) && uVar1 < 0x40) {
        fVar3 = *(float *)(&DAT_01c58050 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01c58050 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c58050 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      *(float *)((long)param_3 + 0xc) = fVar3;
      param_2 = param_2 + -1;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0111079c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011107ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011107b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011107c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011107d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011107e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011107f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011107fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0111080c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01110818(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41300000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01110828(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01110834(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




uint FUN_01110844(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01110880(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011108bc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (0 < (int)param_2) {
    bVar4 = 0.9 <= param_1;
    uVar7 = (uint)((param_1 / 0.9) * 64.0);
    fVar9 = (param_1 / 0.9) * 64.0;
    fVar10 = param_1 + -0.2 + param_1 + -0.2;
    uVar1 = uVar7 + 1;
    uVar8 = (uint)(fVar10 * 64.0);
    fVar10 = fVar10 * 64.0;
    uVar2 = uVar8 + 1;
    fVar11 = *(float *)(&DAT_01c38ce0 + (ulong)bVar4 * 4);
    if (!bVar4 && 0.0 < param_1) {
      fVar11 = -0.0;
    }
    bVar5 = param_1 < 0.7;
    fVar12 = 1.0;
    if (bVar5) {
      fVar12 = 0.0;
    }
    uVar6 = (ulong)param_2;
    if (bVar5 && 0.2 < param_1) {
      fVar12 = 1.0;
    }
    do {
      fVar14 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar13 = 0.0;
      if ((fVar14 < 1.0) && (fVar13 = 2.0, 0.0 < fVar14)) {
        uVar3 = (int)(fVar14 * 64.0) + 1;
        fVar13 = 0.0;
        if (uVar3 < 0x40) {
          fVar13 = *(float *)(&DAT_01c58150 + (ulong)(uint)(int)(fVar14 * 64.0) * 4) +
                   (fVar14 * 64.0 - (float)(int)(fVar14 * 64.0)) *
                   (*(float *)(&DAT_01c58150 + (ulong)uVar3 * 4) -
                   *(float *)(&DAT_01c58150 + (ulong)(uint)(int)(fVar14 * 64.0) * 4));
        }
      }
      fVar14 = fVar11;
      if ((!bVar4 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar14 = *(float *)(&DAT_01c58250 + (ulong)uVar7 * 4) +
                 (fVar9 - (float)(int)fVar9) *
                 (*(float *)(&DAT_01c58250 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01c58250 + (ulong)uVar7 * 4));
      }
      fVar15 = fVar12;
      if ((bVar5 && 0.2 < param_1) && uVar2 < 0x40) {
        fVar15 = *(float *)(&DAT_01c58350 + (ulong)uVar8 * 4) +
                 (fVar10 - (float)(int)fVar10) *
                 (*(float *)(&DAT_01c58350 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01c58350 + (ulong)uVar8 * 4));
      }
      *param_3 = fVar13 * fVar14;
      param_3[1] = fVar15;
      param_3[2] = 0.0;
      param_3[3] = 1.0;
      param_4 = param_4 + 1;
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 4;
    } while (uVar6 != 0);
  }
  return;
}




undefined8 FUN_01110a78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01110a88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01110a94(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    uVar3 = (uint)((param_1 / 0.6) * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.6;
    fVar4 = (param_1 / 0.6) * 64.0;
    fVar5 = 1.0;
    if (bVar2) {
      fVar5 = 0.05;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar5 = 1.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01c58450 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01c58450 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c58450 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6 * 2000.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01110b40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01110b50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01110b5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01110b6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01110b7c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01110b8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01110b98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4090000040200000;
  return 1;
}




void FUN_01110bac(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    uVar3 = (uint)((param_1 / 0.6) * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.6;
    fVar4 = (param_1 / 0.6) * 64.0;
    fVar5 = 1.0;
    if (bVar2) {
      fVar5 = 0.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar5 = 1.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01c58b50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01c58b50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c58b50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6 * 360.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01110c54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




void FUN_01110c68(int param_1,undefined4 *param_2)

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




void FUN_01110c88(int param_1,undefined4 *param_2)

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




void FUN_01110cac(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3f000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01110ccc(int param_1,undefined4 *param_2)

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




uint FUN_01110cf0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar4 = (ulong)param_2;
    uVar6 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar6;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = 1.0;
      if ((fVar5 < 1.0) && (fVar7 = 0.0, 0.2 < fVar5)) {
        fVar7 = 1.0;
        fVar5 = (fVar5 + -0.2) / 0.8;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar7 = *(float *)(&DAT_01c58850 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01c58850 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c58850 + (ulong)uVar3 * 4));
        }
      }
      iVar2 = rand();
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      *(float *)((long)param_3 + 0xc) = fVar7 + (float)iVar2 * -4.656613e-10 * 0.5 + 0.5;
      param_3 = param_3 + 2;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_01110e5c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01110e6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01110e78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01110e84(float param_1,int param_2,undefined4 *param_3)

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
    fVar7 = (param_1 + -0.05) / 0.45;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.5;
    fVar6 = 0.0;
    fVar7 = fVar7 * 64.0;
    if (bVar3) {
      fVar6 = 20.0;
    }
    iVar2 = param_2;
    if (bVar3 && 0.05 < param_1) {
      fVar6 = 0.0;
    }
    do {
      fVar8 = fVar6;
      if ((bVar3 && 0.05 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01c58550 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01c58550 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c58550 + (ulong)uVar5 * 4));
      }
      iVar4 = rand();
      *param_3 = 0;
      param_3[2] = 0;
      iVar2 = iVar2 + -1;
      param_3[1] = fVar8 * (float)iVar4 * 4.656613e-10 + 0.0;
      param_3 = param_3 + 3;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_01110fb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01110fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_01110fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01110fdc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01110fec(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 1.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

