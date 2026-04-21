// functions/01164 — 106 functions
#include "libGameKindred.h"




int FUN_01164028(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 1.5 + 1.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01164094(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42c8000043480000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_011640b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 * 0xc);
  }
  return param_1;
}




void FUN_011640f4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c79204 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c79204 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c79204 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_011641a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011641b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011641c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011641cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_011641dc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x401ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01164200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01164210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0116421c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




void FUN_0116422c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0xc0d00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_0116424c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fe000003fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01164270(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_0116427c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_0116429c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011642d8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_011642f8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01164334(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01164370(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01164380(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0116438c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




void FUN_0116439c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0xc0d00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_011643bc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fe000003fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_011643e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43700000;
  return 1;
}




void FUN_011643f0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01164410(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0116444c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_0116446c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011644a8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_011644e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011644f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164500(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




void FUN_01164510(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0xc0d00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01164530(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fe000003fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01164554(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42f00000;
  return 1;
}




void FUN_01164564(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01164584(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_011645c0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_011645e0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0116461c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01164658(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c79204 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c79204 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c79204 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01164708(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01164718(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    bVar2 = param_1 < 1.0;
    fVar3 = -0.2;
    if (bVar2) {
      fVar3 = -2.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = -0.2;
    }
    do {
      fVar4 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar4 = *(float *)(&DAT_01c68404 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01c68404 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c68404 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar4;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_011647b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011647bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_011647cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011647d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_011647e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_011647f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01164804(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_01164818(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40880000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01164828(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164834(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




void FUN_01164844(int param_1,undefined4 *param_2)

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




uint FUN_01164864(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011648a0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_011648dc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01164918(int param_1,undefined8 *param_2)

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




void FUN_01164944(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 0.7, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c68504 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c68504 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c68504 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_011649fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01164a0c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    bVar2 = param_1 < 1.0;
    fVar3 = 0.0;
    if (bVar2) {
      fVar3 = 1.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 0.0;
    }
    do {
      fVar4 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar4 = *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_01c7fd04 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01c7fd04 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar4;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_01164a9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164aa8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01164ab8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164ac4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01164ad4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164ae0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01164af0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_01164b04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01164b14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164b20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




void FUN_01164b30(int param_1,undefined4 *param_2)

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




uint FUN_01164b50(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01164b8c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01164bc8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01164c04(int param_1,undefined8 *param_2)

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




void FUN_01164c30(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01c79204 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01c79204 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01c79204 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_01164ce0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01164cf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164cfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164d08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_01164d18(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x401ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01164d3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01164d4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164d58(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




void FUN_01164d68(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0xc0d00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01164d88(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fe000003fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01164dac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01164db8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40100000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01164dd8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01164e14(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01164e34(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01164e70(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01164eac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01164ebc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01164ec8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




void FUN_01164ed8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0xc0d00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01164ef8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3fe000003fc00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_01164f1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43700000;
  return 1;
}




void FUN_01164f2c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40100000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01164f4c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01164f88(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x40600000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01164fa8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01164fe4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}

