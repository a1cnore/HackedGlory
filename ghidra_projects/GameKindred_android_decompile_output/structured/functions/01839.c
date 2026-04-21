// functions/01839 — 78 functions
#include "libGameKindred.h"




int FUN_01839000(int param_1,float *param_2)

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




void FUN_01839080(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4177ae14;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_018390a4(int param_1,undefined4 *param_2)

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




void FUN_018390c4(int param_1,undefined4 *param_2)

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




uint FUN_018390e4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01839120(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      *param_3 = fVar3 * 5.0 + param_1;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01df73a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01df73a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01df73a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_018391d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_018391e4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = -1.0;
      if ((fVar4 < 0.8) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.8) * 64.0;
          fVar5 = *(float *)(&DAT_01df74a0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01df74a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01df74a0 + (ulong)uVar3 * 4));
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




undefined8 FUN_0183928c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839298(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0xc080000000000000;
  return 1;
}




uint FUN_018392b0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01df75a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01df75a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01df75a0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      iVar2 = rand();
      uVar3 = uVar3 - 1;
      *param_3 = fVar5 * ((float)iVar2 * 4.656613e-10 * 4.0 + 8.0);
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return param_2;
}




undefined8 FUN_018393cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_018393dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018393e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018393f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41400000;
  return 1;
}




int FUN_01839408(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.40000004 + 0.2,
                          (float)uVar4 * 4.656613e-10 * 0.40000004 + 0.2);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0183949c(int param_1,float *param_2)

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




int FUN_01839518(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.8000001 + 0.4;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01839598(int param_1,undefined4 *param_2)

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




uint FUN_018395b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_018395f4(float param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar6 = (param_1 + 0.2) - (float)(int)(param_1 + 0.2);
    uVar1 = (int)(fVar6 * 64.0) + 1;
    uVar4 = (uint)((param_1 + param_1) * 64.0);
    uVar2 = uVar4 + 1;
    bVar3 = param_1 < 0.5;
    fVar5 = (param_1 + param_1) * 64.0;
    fVar7 = 1.15;
    if (bVar3) {
      fVar7 = 4.0;
    }
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 1.15;
    }
    do {
      fVar8 = 1.0;
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      if ((0.0 < fVar6 && fVar6 < 1.0) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01df76a0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                (*(float *)(&DAT_01df76a0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01df76a0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
      }
      fVar9 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01df77a0 + (ulong)uVar4 * 4) +
                (fVar5 - (float)(int)fVar5) *
                (*(float *)(&DAT_01df77a0 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01df77a0 + (ulong)uVar4 * 4));
      }
      param_2 = param_2 + -1;
      *(float *)((long)param_3 + 0xc) = fVar8 * fVar9;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01839718(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01839728(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839734(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839740(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01839750(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0183975c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0183976c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839778(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01839788(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839794(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_018397a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018397b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_018397c0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_018397fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01839838(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar5 = param_1 - (float)(int)param_1;
    uVar1 = (int)(fVar5 * 64.0) + 1;
    uVar4 = (uint)((param_1 + param_1) * 64.0);
    uVar2 = uVar4 + 1;
    fVar6 = (param_1 + param_1) * 64.0;
    bVar3 = param_1 < 0.5;
    fVar7 = 1.15;
    if (bVar3) {
      fVar7 = 4.0;
    }
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 1.15;
    }
    do {
      fVar8 = 1.0;
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      if ((0.0 < fVar5 && fVar5 < 1.0) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01df76a0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                (*(float *)(&DAT_01df76a0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01df76a0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
      }
      fVar9 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01df77a0 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01df77a0 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01df77a0 + (ulong)uVar4 * 4));
      }
      param_2 = param_2 + -1;
      param_3[3] = fVar8 * fVar9;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01839948(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01839958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839970(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01839980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0183998c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_0183999c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018399a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_018399b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018399c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_018399d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_018399e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_018399f0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01839a2c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01839a68(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_2) {
    fVar5 = param_1 - (float)(int)param_1;
    uVar1 = (int)(fVar5 * 64.0) + 1;
    uVar4 = (uint)((param_1 + param_1) * 64.0);
    uVar2 = uVar4 + 1;
    fVar6 = (param_1 + param_1) * 64.0;
    bVar3 = param_1 < 0.5;
    fVar7 = 1.15;
    if (bVar3) {
      fVar7 = 4.0;
    }
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 1.15;
    }
    do {
      fVar8 = 1.0;
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      if ((0.0 < fVar5 && fVar5 < 1.0) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01df76a0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                (*(float *)(&DAT_01df76a0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01df76a0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
      }
      fVar9 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar9 = *(float *)(&DAT_01df77a0 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01df77a0 + (ulong)uVar2 * 4) -
                *(float *)(&DAT_01df77a0 + (ulong)uVar4 * 4));
      }
      param_2 = param_2 + -1;
      param_3[3] = fVar8 * fVar9;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01839b78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01839b88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839b94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839ba0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01839bb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839bbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01839bcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839bd8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01839be8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839bf4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_01839c04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839c10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_01839c20(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01839c5c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01839c98(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 4.0, 0.1 < fVar5)) {
        fVar5 = (fVar5 + -0.1) / 0.9;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01df78a0 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01df78a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01df78a0 + (ulong)uVar3 * 4));
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




undefined8 FUN_01839d6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01839d7c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01df79a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01df79a0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01df79a0 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar4 * 25.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01839e20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839e2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01839e3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839e48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01839e58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01839e64(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01839e74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




int FUN_01839e88(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 1.8 + 0.2,
                          (float)uVar4 * 4.656613e-10 * 1.8 + 0.2);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01839f1c(int param_1,float *param_2)

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




int FUN_01839f98(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.10000001 + 0.05;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

