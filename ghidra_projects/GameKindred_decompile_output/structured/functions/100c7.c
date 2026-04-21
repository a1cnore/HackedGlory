// functions/100c7 — 1391 functions
#include "GameKindred.h"




ulong FUN_100c70014(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70058(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c70094(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.9 < fVar6)) {
        fVar6 = fVar6 * 639.9999 + -575.9999;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d3980 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d3980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3980 + (ulong)(uint)(int)fVar6 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c70154(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c70164(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70170(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc3480000;
  return 1;
}




undefined8 FUN_100c70180(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc110000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c70198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c701a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c701b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_100c701c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c701d4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c70238(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 4.6566133e-11 + 0.2,
                          (float)uVar5 * 4.6566133e-11 + 0.2);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c702bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c702c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_100c702dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011a40b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70320(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c70364(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.7;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.7;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d0680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d0680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d0680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c70478:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c70478;
          fVar3 = *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012ca280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c70498(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c704a8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar4 = 0.1;
      if ((fVar5 < 0.4) && (fVar4 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 160.0;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 0.1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4 * 5.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c70558(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70564(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7057c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c7058c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c7059c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c705ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c705bc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-09 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c70620(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_100c70630(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c70688(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.3132266e-11 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c706f0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70734(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70770(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c707ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c707e8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c70898(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c708a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe4ccccd;
  return 1;
}




undefined8 FUN_100c708bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x44160000;
  return 1;
}




ulong FUN_100c708cc(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1) {
    uVar6 = NEON_fmov(0xc1200000,4);
    uVar4 = param_1;
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar2 = _rand();
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          (float)((ulong)uVar5 >> 0x20) * 9.313226e-09,
                          (float)uVar6 + (float)uVar5 * 9.313226e-09);
      *(float *)(param_2 + 1) = (float)iVar2 * 9.313226e-09 + -10.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c70970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c70980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7098c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42960000;
  return 1;
}




undefined8 FUN_100c7099c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c709ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c709b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_100c709d0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c70a28(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-10 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c70a90(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70ad4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70b10(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70b4c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a70,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c70b90(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cd180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cd180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c70c38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c70c48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70c54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70c60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c70c70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70c7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c70c8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c70c9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c70cac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c70cc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003f333333;
  return 1;
}




undefined8 FUN_100c70cd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70ce0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3df5c28f;
  return 1;
}




ulong FUN_100c70cf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70d30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c70d6c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c70e00:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c70e00;
          fVar5 = *(float *)(&DAT_1012c8180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c8180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c70e20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c70e30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c70e40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70e4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c70e5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70e68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c70e78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70e84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c70e94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




undefined8 FUN_100c70ea8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_100c70eb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c70ec4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c70ed8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c70f14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c70f50(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c71054:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 0.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c71054;
          fVar4 = *(float *)(&DAT_1012c8280 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c8280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8280 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c71074(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c71094(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c710a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c710b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c710bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c710cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c710dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c710ec(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849193e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c71150(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c000003f000000;
  return 1;
}




undefined8 FUN_100c71164(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c71170(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969838e-10 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c711d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7121c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c71260(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cd180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cd180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c71308(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71318(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71324(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71330(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71340(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7134c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7135c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c7136c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7137c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c71390(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003e4ccccd;
  return 1;
}




undefined8 FUN_100c713a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c713b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3df5c28f;
  return 1;
}




ulong FUN_100c713c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c71400(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7143c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c714ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c714fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe800000;
  return 1;
}




undefined8 FUN_100c7150c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71518(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc040000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71530(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c71540(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43480000;
  return 1;
}




undefined8 FUN_100c71550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7155c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7156c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 8.381903e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c715d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e99999a3e99999a;
  return 1;
}




undefined8 FUN_100c715e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c715f4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849193e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c71658(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7169c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181320,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c716e0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d2b80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2b80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c71790(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c717a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c717b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c717bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c717cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c717d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c717e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c717f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c71804(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c71818(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41f00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c71828(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c71880(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c71890(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c718d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c71910(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d2b80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2b80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c719c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c719d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43480000;
  return 1;
}




undefined8 FUN_100c719e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c719ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c719fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71a08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c71a18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71a24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c71a34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c71a48(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c71a58(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c71ab0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c71ac4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c71b08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c71b44(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 1.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c71bf0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71c00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c71c10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71c1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71c2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71c38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c71c48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c71c58(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c71c68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c71c7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003e4ccccd;
  return 1;
}




undefined8 FUN_100c71c90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71c9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c71cb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c71cf4(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar3 = param_1 * 0.43478262;
    param_1 = param_1 * 27.826088;
    uVar1 = (int)param_1 + 1;
    fVar4 = 1.0;
    bVar2 = fVar3 < 1.0;
    if (bVar2) {
      fVar4 = 0.0;
    }
    if (bVar2 && 0.0 < fVar3) {
      fVar4 = 1.0;
    }
    do {
      fVar5 = fVar4;
      if ((bVar2 && 0.0 < fVar3) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)param_1 * 4) +
                (param_1 - (float)(int)param_1) *
                (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)param_1 * 4));
      }
      *param_3 = fVar5;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_100c71d8c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c71e3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71e4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c71e5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71e68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c71e78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71e84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c71e94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c71ea4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c71eb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c71ec8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_100c71ed8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c71ee4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c71ef8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c71f3c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c71f80(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar4 = 0.0;
      if ((fVar5 < 0.9) && (0.0 < fVar5)) {
        fVar5 = fVar5 * 71.111115;
        uVar1 = (int)fVar5 + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c8380 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012c8380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8380 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7202c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7203c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c7204c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72058(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c72068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72074(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c72084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c72094(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c720a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c720b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f99999a3f99999a;
  return 1;
}




ulong FUN_100c720c8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c72120(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3eb33333;
  return 1;
}




ulong FUN_100c72134(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c72178(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c721b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c721f0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7222c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -0.5;
      if ((fVar4 < 1.0) && (fVar5 = 1.7, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.5;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c8480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c8480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c722e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c722f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c72304(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72310(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c72320(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7232c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7233c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72348(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c72358(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72364(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c72374(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c723cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c723e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c72424(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c72460(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7249c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c724d8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 640.0 + -64.0;
    uVar1 = (int)fVar6 + 1;
    bVar4 = param_1 < 0.2;
    uVar5 = (ulong)param_2;
    fVar7 = 1.0;
    if (bVar4) {
      fVar7 = 0.0;
    }
    if (bVar4 && 0.1 < param_1) {
      fVar7 = 1.0;
    }
    do {
      fVar8 = fVar7;
      if ((bVar4 && 0.1 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar6 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar6 * 4));
      }
      *param_3 = fVar8;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      lVar3 = param_5 + (ulong)*param_4 * 4;
      fVar9 = (param_1 - *(float *)(lVar3 + 0x48000)) / *(float *)(lVar3 + 0x50000);
      fVar8 = 0.0;
      if ((fVar9 < 1.0) && (fVar8 = 0.3, 0.0 < fVar9)) {
        uVar2 = (int)(fVar9 * 64.0) + 1;
        fVar8 = 0.0;
        if (uVar2 < 0x40) {
          fVar8 = *(float *)(&DAT_1012d3a80 + (ulong)(uint)(int)(fVar9 * 64.0) * 4) +
                  (fVar9 * 64.0 - (float)(int)(fVar9 * 64.0)) *
                  (*(float *)(&DAT_1012d3a80 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_1012d3a80 + (ulong)(uint)(int)(fVar9 * 64.0) * 4));
        }
      }
      param_3[3] = fVar8;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_100c7260c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7261c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7262c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72638(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c72648(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72654(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c72664(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72670(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c72680(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c72690(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x41a0000040e00000;
  return 1;
}




undefined8 FUN_100c726a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2b40000;
  return 1;
}




undefined8 FUN_100c726b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_100c726c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c72704(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c72740(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.1;
      if ((fVar3 < 1.0) && (fVar4 = -0.1, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d2480 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d2480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2480 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c8580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c8580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c72868(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c72878(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c72888(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72894(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c728ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c728bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_100c728cc(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 320.0;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.2;
    fVar3 = 1.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 1.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c8680 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c8680 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c8680 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5 * 50.0 + 50.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c7296c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7297c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c729e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c729f0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c72a48(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c72aac(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 320.0;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.2;
    fVar3 = 1.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 1.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c8680 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c8680 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c8680 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5 * 220.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_100c72b4c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 320.0;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.2;
    fVar3 = 1.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 1.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c8680 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c8680 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c8680 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5 * 1.2 + 1.2;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




ulong FUN_100c72bec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c72c30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c72c74(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 2.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c8780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c8780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c72d24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c72d34(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.2;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.2;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c8880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c8880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 20.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c72de0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72dec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c72dfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c72e0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c72e1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72e28(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c72e38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c72e4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c72e5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c72e68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_100c72e7c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c72eb8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c72ef4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 640.0 + -64.0;
    uVar1 = (int)fVar6 + 1;
    bVar4 = param_1 < 0.2;
    uVar5 = (ulong)param_2;
    fVar7 = 1.0;
    if (bVar4) {
      fVar7 = 0.0;
    }
    if (bVar4 && 0.1 < param_1) {
      fVar7 = 1.0;
    }
    do {
      fVar8 = fVar7;
      if ((bVar4 && 0.1 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar6 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar6 * 4));
      }
      *param_3 = fVar8;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      lVar3 = param_5 + (ulong)*param_4 * 4;
      fVar8 = (param_1 - *(float *)(lVar3 + 0x48000)) / *(float *)(lVar3 + 0x50000);
      fVar9 = 0.0;
      if ((fVar8 < 1.0) && (fVar9 = 2.0, 0.0 < fVar8)) {
        uVar2 = (int)(fVar8 * 64.0) + 1;
        fVar9 = 0.0;
        if (uVar2 < 0x40) {
          fVar9 = *(float *)(&DAT_1012c9080 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                  (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                  (*(float *)(&DAT_1012c9080 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_1012c9080 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      param_3[3] = fVar9;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_100c73020(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73030(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c73040(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7304c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7305c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73074(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_100c73084(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c73094(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.1909515e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c730fc(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 2.7939677e-09 + 2.0,
                          (float)uVar5 * 1.3969839e-10 + 0.2);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c73178(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c73184(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c731ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ae0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c73230(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 426.66666;
    uVar1 = (int)fVar4 + 1;
    bVar2 = 0.15 <= param_1;
    fVar3 = (float)(&DAT_1012b2690)[bVar2];
    if (!bVar2 && 0.0 < param_1) {
      fVar3 = 0.45;
    }
    do {
      fVar5 = fVar3;
      if ((!bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c8980 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c8980 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c8980 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5 * -10.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_100c732d4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.125;
      if ((fVar4 < 1.0) && (fVar3 = -0.1, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.125;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012c8a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c8a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      fVar5 = 1.0;
      if ((fVar4 < 0.6) && (fVar5 = 0.0, 0.1625 < fVar4)) {
        fVar4 = fVar4 * 146.2857 + -23.771427;
        uVar1 = (int)fVar4 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c8b80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012c8b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8b80 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012c8c80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c8c80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8c80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c73464(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c73474(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.2;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.2;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c8d80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c8d80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8d80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 10.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c73520(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7352c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73544(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c73554(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c73564(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73570(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c73580(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.0535967e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c735e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_100c735fc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c73654(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c736b8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181880,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c736fc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c73738(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 2.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c8e80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c8e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8e80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c737e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c737f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1700000;
  return 1;
}




undefined8 FUN_100c73808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73814(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73824(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c73834(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c73844(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73850(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c73860(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c73874(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000041000000;
  return 1;
}




undefined8 FUN_100c73884(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73890(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c738a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c738e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7391c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 2.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c8e80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c8e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8e80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c739cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c739dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1700000;
  return 1;
}




undefined8 FUN_100c739ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c739f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73a08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c73a18(float param_1,ulong param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar4 = param_2 & 0xffffffff;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 2.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, 0.2 < fVar5)) {
        fVar5 = fVar5 * 80.0 + -16.0;
        uVar1 = (int)fVar5 + 1;
        fVar6 = 2.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c8f80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012c8f80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c8f80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      iVar3 = _rand();
      fVar5 = (float)NEON_fminnm((float)iVar3 * 3.259629e-10 + -0.2,0x3f800000);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      *(float *)((long)param_3 + 0xc) = fVar5 + fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_100c73b64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73b74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_100c73b84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c73b94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc120000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73bac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c73bbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_100c73bcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73bd8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c73be8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 5.122274e-09 + 4.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c73c4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c73c5c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c73cb4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c73d18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011818e0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c73d5c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c73da0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 640.0 + -64.0;
    uVar1 = (int)fVar6 + 1;
    bVar4 = param_1 < 0.2;
    uVar5 = (ulong)param_2;
    fVar7 = 1.0;
    if (bVar4) {
      fVar7 = 0.0;
    }
    if (bVar4 && 0.1 < param_1) {
      fVar7 = 1.0;
    }
    do {
      fVar8 = fVar7;
      if ((bVar4 && 0.1 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar6 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar6 * 4));
      }
      *param_3 = fVar8;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      lVar3 = param_5 + (ulong)*param_4 * 4;
      fVar8 = (param_1 - *(float *)(lVar3 + 0x48000)) / *(float *)(lVar3 + 0x50000);
      fVar9 = 0.0;
      if ((fVar8 < 1.0) && (fVar9 = 2.0, 0.0 < fVar8)) {
        uVar2 = (int)(fVar8 * 64.0) + 1;
        fVar9 = 0.0;
        if (uVar2 < 0x40) {
          fVar9 = *(float *)(&DAT_1012c9080 + (ulong)(uint)(int)(fVar8 * 64.0) * 4) +
                  (fVar8 * 64.0 - (float)(int)(fVar8 * 64.0)) *
                  (*(float *)(&DAT_1012c9080 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_1012c9080 + (ulong)(uint)(int)(fVar8 * 64.0) * 4));
        }
      }
      param_3[3] = fVar9;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_100c73ecc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73edc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c73eec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73ef8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c73f08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73f14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c73f24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73f30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c73f40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42700000;
  return 1;
}




undefined8 FUN_100c73f50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c73f60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c73f6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c73f80(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c73fc4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74000(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a50,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74044(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c74080(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c740ac(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c9180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c9180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c74154(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c74164(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74170(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7417c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7418c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c741a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c741b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c741c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c741d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c741e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c741ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c74200(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181960,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74244(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c74280(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 1.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d1480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d1480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d1480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7432c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7433c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c7434c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c7435c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7436c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




ulong FUN_100c7437c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-09 + 20.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c743e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c743ec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c743fc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.259629e-09 + 8.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c74460(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c74470(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c744c8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7452c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101228b70,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74570(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c745b4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c9280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c9280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7465c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7466c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c7467c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74688(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c74698(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




ulong FUN_100c746a8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 10.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7470c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74718(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c74728(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 4.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7478c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003f800000;
  return 1;
}




undefined8 FUN_100c747a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c747ac(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c74814(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101228b70,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74858(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7489c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d0180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d0180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d0180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c74944(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c74954(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c74964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74970(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c74980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7498c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7499c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c749a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c749b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c749c4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c749d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c749e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c749f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181960,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74a38(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c74a74(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.1;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c9380 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c9380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9380 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c9480 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c9480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9480 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c74b9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c74bac(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 7.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c74c50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c74c60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c74c78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c74c88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c74c98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74ca4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c74cb4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 4.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c74d18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_100c74d30(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c74d88(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c74dec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74e30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74e6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c74ea8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c74ee4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c74f78:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c74f78;
          fVar5 = *(float *)(&DAT_1012cc380 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cc380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc380 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c74f98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c74fa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c74fb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74fc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c74fd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c74fe4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c74ff0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x447a0000;
  return 1;
}




undefined8 FUN_100c75000(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c75010(ulong param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if (0 < (int)param_1) {
    do {
      _rand();
      *param_2 = 0x3f800000;
      uVar1 = (int)uVar2 - 1;
      param_2 = param_2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7505c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000000000000;
  return 1;
}




undefined8 FUN_100c75070(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7507c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




void FUN_100c75090(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 320.0;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.2;
    fVar3 = 1.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 1.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012d4780 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012d4780 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d4780 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5 * 360.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




ulong FUN_100c75130(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181940,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75174(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c751b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c751ec(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + -1.0;
      param_2[1] = 1.0;
      param_2[2] = (float)iVar3 * 9.313226e-10 + -1.0;
      param_2 = param_2 + 3;
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c7527c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c75310:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c75310;
          fVar5 = *(float *)(&DAT_1012cc380 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cc380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc380 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c75330(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c75340(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_100c75350(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * -3000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c753f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c75408(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75414(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c75424(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75430(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c75440(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7544c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40f00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c7545c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c754b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c754c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75508(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75544(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75580(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c755bc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c755e4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c75678:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c75678;
          fVar5 = *(float *)(&DAT_1012cc380 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cc380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc380 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c75698(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c756a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_100c756b8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * -1000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c75760(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c75770(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7577c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7578c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75798(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c757a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c757b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c757c4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7581c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c7582c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75870(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c758ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c758e8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c75924(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c7594c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
    fVar4 = 0.7;
    do {
      fVar8 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar7 = 0.9;
      fVar5 = 0.2;
      if ((fVar8 < 1.0) && (fVar7 = 0.0, fVar5 = fVar4, 0.0 < fVar8)) {
        fVar6 = fVar8 * 64.0;
        uVar3 = (uint)(fVar8 * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = 0.9;
        fVar5 = 0.2;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_1012d4680 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d4680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4680 + (ulong)uVar3 * 4));
          fVar5 = *(float *)(&DAT_1012c9580 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012c9580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9580 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar7;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar7 = fVar4;
      if ((fVar5 < 1.0) && (fVar7 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar7 = fVar4;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_1012c9680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c9680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar7;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c75abc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c75acc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -0.6;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.6;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c9780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c9780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c75b70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c75b7c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-09 + -5.0;
      param_2[1] = -5.0;
      param_2[2] = (float)iVar3 * 4.656613e-09 + -5.0;
      param_2 = param_2 + 3;
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c75c0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




ulong FUN_100c75c1c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-09 + 10.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c75c80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75c8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c75c9c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.7252903e-09 + 6.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c75d00(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1) {
    uVar6 = NEON_fmov(0x3fa00000,4);
    uVar4 = param_1;
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          (float)((ulong)uVar5 >> 0x20) * 2.3283064e-10,
                          (float)uVar6 + (float)uVar5 * 2.3283064e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c75d78(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c75dd0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c75e34(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75e78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a70,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75ebc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a70,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c75f00(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c75f3c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_100c75f68(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0x3f80000000000000;
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c75f7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c75f8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75f98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75fa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c75fb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c75fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75fdc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c75fec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c75ff8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c76008(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c76060(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




ulong FUN_100c76070(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c760b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c760f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c76100(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7610c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7611c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76128(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c76138(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c76190(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




ulong FUN_100c761a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c761e4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c76220(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c76230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7623c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7624c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76258(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c76268(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c762c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




ulong FUN_100c762d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c76314(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c76350(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c76360(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7636c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7637c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76388(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c76398(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c763f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




ulong FUN_100c76400(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c76444(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c76480(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      fVar4 = 0.0;
      if ((fVar5 < 0.3) && (fVar4 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 213.33333;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d3e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar4 < 1.0) && (fVar3 = 1.5, 0.2 < fVar4)) {
        fVar4 = fVar4 * 80.0 + -16.0;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012c9880 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012c9880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9880 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c765b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c765c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c765d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c765e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c765f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76600(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c76610(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7661c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7662c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76638(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c76648(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c766a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c766b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c766f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c76730(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c9980 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c9980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9980 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c767d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c767e8(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar4 = param_2 & 0xffffffff;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 0.9) && (fVar6 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 71.111115;
        uVar1 = (int)fVar5 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      iVar3 = _rand();
      *param_3 = ((float)iVar3 * 9.313226e-10 + 2.0) * fVar6;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




void FUN_100c76900(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar5) {
LAB_100c76988:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c76988;
          fVar4 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar4 * 150.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c769ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c769c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c769d4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849193e-09 + 15.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c76a38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76a44(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c76a54(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 4.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c76ab8(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1) {
    uVar6 = NEON_fmov(0x3f800000,4);
    uVar4 = param_1;
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          (float)((ulong)uVar5 >> 0x20) * 2.3283064e-10,
                          (float)uVar6 + (float)uVar5 * 2.3283064e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c76b30(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c76b88(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c76bec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c76c30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c76c74(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c76cb8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c76cf4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = param_1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.4, 0.6 < fVar5)) {
        fVar5 = fVar5 * 160.00002 + -96.000015;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d5280 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d5280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5280 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c76db4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c76dc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c76dd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76de0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c76df0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c76dfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c76e08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181880,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c76e4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c76e5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c76e68(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_100c76eac(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c76f04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c76f48(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c76f84(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c76fc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c76fd4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181880,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77018(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c77028(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c77034(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_100c77078(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c770d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c77114(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c77150(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77194(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c771a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181880,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c771e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c771f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c77200(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_100c77244(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7729c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c772e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7731c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77360(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7736c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181880,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c773b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c773c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c773cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_100c77410(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c77468(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c774ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c774e8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7752c(float param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      *(float *)((long)param_3 + 0xc) = -param_1;
      param_3 = param_3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c77560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c77570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7757c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c77588(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c77598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c775a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c775b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c775c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c775d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_100c775e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c775f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77634(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c77648(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c77684(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c776c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c776cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c776dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c776ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_100c77700(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c77714(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77750(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c77764(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c777a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c777dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c777e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c777f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c77808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_100c7781c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c77830(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7786c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c77880(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c778bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c778f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c77904(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c77914(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c77924(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




undefined8 FUN_100c77938(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c7794c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77988(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c7799c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c779d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77a14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c77a24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c77a30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c77a40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40f00000;
  return 1;
}




undefined8 FUN_100c77a50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c77a64(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77aa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c77ab4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c77af0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011818c0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77b34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c77b44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c77b50(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c77b60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40f00000;
  return 1;
}




undefined8 FUN_100c77b70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c77b84(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77bc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c77bd4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c77c10(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011818c0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77c54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c77c64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c77c70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c77c80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40f00000;
  return 1;
}




undefined8 FUN_100c77c90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c77ca4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77ce0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c77cf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c77d30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011818c0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77d74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c77d84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c77d90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c77da0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40f00000;
  return 1;
}




undefined8 FUN_100c77db0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c77dc4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c77e00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c77e14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c77e50(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011818c0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c77e94(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar5) {
LAB_100c77f28:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 0.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c77f28;
          fVar4 = *(float *)(&DAT_1012c9a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c9a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c77f48(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c77f58(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar4 = param_2 & 0xffffffff;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 0.8) && (fVar6 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 80.0;
        uVar1 = (int)fVar5 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d3e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      iVar3 = _rand();
      *param_3 = ((float)iVar3 * -9.3132266e-11 + -0.1) * fVar6;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_100c78074(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_100c78080(float param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar3 = param_1 * 128.0 + -38.4;
    uVar1 = (int)fVar3 + 1;
    bVar2 = param_1 < 0.8;
    fVar4 = -0.3;
    if (bVar2) {
      fVar4 = 1.0;
    }
    if (bVar2 && 0.3 < param_1) {
      fVar4 = -0.3;
    }
    do {
      fVar5 = fVar4;
      if ((bVar2 && 0.3 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c9b80 + (ulong)(uint)(int)fVar3 * 4) +
                (fVar3 - (float)(int)fVar3) *
                (*(float *)(&DAT_1012c9b80 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c9b80 + (ulong)(uint)(int)fVar3 * 4));
      }
      *param_3 = 0;
      param_3[1] = fVar5 * -20.0;
      param_3[2] = 0;
      param_3 = param_3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c7813c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c7814c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_100c7815c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 365.71426 + -91.428566;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.425;
    fVar3 = 6.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar3 = 6.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c9c80 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c781fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7820c(float param_1,ulong param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 213.33333 + -42.666668;
    uVar1 = (int)fVar6 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = 0.1;
    if (bVar3) {
      fVar7 = 1.0;
    }
    uVar5 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar7 = 0.1;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4));
      }
      iVar4 = _rand();
      *param_3 = ((float)iVar4 * 9.313226e-09 + 10.0) * fVar8;
      uVar2 = (int)uVar5 - 1;
      param_3 = param_3 + 1;
      uVar5 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_100c78314(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_100c78328(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c78338(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c783a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c783e4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c78428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_100c78438(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 365.71426 + -91.428566;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.425;
    fVar3 = 6.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar3 = 6.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c9c80 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c784d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c784e8(float param_1,ulong param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 213.33333 + -42.666668;
    uVar1 = (int)fVar6 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = 0.1;
    if (bVar3) {
      fVar7 = 1.0;
    }
    uVar5 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar7 = 0.1;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4));
      }
      iVar4 = _rand();
      *param_3 = ((float)iVar4 * 9.313226e-09 + 10.0) * fVar8;
      uVar2 = (int)uVar5 - 1;
      param_3 = param_3 + 1;
      uVar5 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_100c785f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_100c78604(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c78614(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7867c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c786c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c78704(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_100c78714(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 365.71426 + -91.428566;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.425;
    fVar3 = 6.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar3 = 6.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c9c80 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c787b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c787c4(float param_1,ulong param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 213.33333 + -42.666668;
    uVar1 = (int)fVar6 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = 0.1;
    if (bVar3) {
      fVar7 = 1.0;
    }
    uVar5 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar7 = 0.1;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4));
      }
      iVar4 = _rand();
      *param_3 = ((float)iVar4 * 9.313226e-09 + 10.0) * fVar8;
      uVar2 = (int)uVar5 - 1;
      param_3 = param_3 + 1;
      uVar5 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_100c788cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_100c788e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c788f0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c78958(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7899c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c789e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_100c789f0(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 365.71426 + -91.428566;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.425;
    fVar3 = 6.0;
    if (bVar2) {
      fVar3 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar3 = 6.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1012c9c80 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012c9c80 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c78a90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c78aa0(float param_1,ulong param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 * 213.33333 + -42.666668;
    uVar1 = (int)fVar6 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = 0.1;
    if (bVar3) {
      fVar7 = 1.0;
    }
    uVar5 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar7 = 0.1;
    }
    do {
      fVar8 = fVar7;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar6 * 4));
      }
      iVar4 = _rand();
      *param_3 = ((float)iVar4 * 9.313226e-09 + 10.0) * fVar8;
      uVar2 = (int)uVar5 - 1;
      param_3 = param_3 + 1;
      uVar5 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_100c78ba8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_100c78bbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c78bcc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c78c34(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c78c78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c78cbc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.8, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c9d80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c9d80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9d80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c78d74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c78d84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c78d94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78da0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c78db0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78dbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c78dcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78dd8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c78de8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78df4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c78e04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78e10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c78e24(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c78e68(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c78ea4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c78f38:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c78f38;
          fVar5 = *(float *)(&DAT_1012ce080 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ce080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce080 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c78f58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c78f68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c78f78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78f84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c78f94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78fa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c78fb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c78fc0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c78fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78fdc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c78fec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c78ff8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c79008(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79044(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c79080(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 1.0;
      if ((fVar5 < 1.0) && (fVar6 = 0.2, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d3180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d3180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c79134(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c79144(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79150(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7915c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7916c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79178(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c79188(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




ulong FUN_100c79198(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((int)((float)((ulong)uVar5 >> 0x20) * 9.313226e-10),
                          (int)((float)uVar5 * 9.313226e-10));
      param_2[1] = 0x3f80000000000000;
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 2;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c79214(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_100c79224(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c79238(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)(int)((float)iVar2 * 9.313226e-10) * 180.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c792a8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939678e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7930c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79350(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79394(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c793d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7941c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c79448(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.977337;
      if ((fVar6 < 1.00644) && (fVar5 = 0.041412, 0.0 < fVar6)) {
        fVar6 = fVar6 * 63.590473;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 0.977337;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c9e80 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012c9e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9e80 + (ulong)(uint)(int)fVar6 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7950c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7951c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7952c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79538(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c79550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7955c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79568(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c79578(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c79588(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79594(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c795a4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)(int)((float)iVar2 * 4.656613e-09) * 36.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c79614(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c79624(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79668(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c796a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c796e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7971c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c79748(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c9f80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c9f80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c9f80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c797f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c79808(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar4 = -0.3;
      if ((fVar5 < 0.9) && (fVar4 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 71.111115;
        uVar1 = (int)fVar5 + 1;
        fVar4 = -0.3;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012ca080 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012ca080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca080 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4 * 4.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c798b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c798c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c798d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c798e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c798f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c798fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7990c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c79920(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c79930(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7993c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c7994c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79988(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c799c4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.7;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.7;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d0680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d0680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d0680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c79ad8:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c79ad8;
          fVar3 = *(float *)(&DAT_1012cc480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cc480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c79af8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c79b08(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar4 = 0.1;
      if ((fVar5 < 0.2) && (fVar4 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 320.0;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 0.1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4 * 20.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c79bb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79bc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c79bdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c79bec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c79bfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79c08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c79c18(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-09 + 7.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c79c7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c79c8c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c79ce4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969838e-10 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c79d4c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79d90(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79dcc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c79e08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c79e44(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.9 < fVar6)) {
        fVar6 = fVar6 * 639.9999 + -575.9999;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d3980 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d3980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3980 + (ulong)(uint)(int)fVar6 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c79f04(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c79f14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79f20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc3480000;
  return 1;
}




undefined8 FUN_100c79f30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc110000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c79f48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c79f54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c79f64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c79f70(ulong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (0 < (int)param_1) {
    uVar3 = param_1;
    do {
      iVar2 = _rand();
      uVar5 = 0;
      if (1.0 <= (float)iVar2 * 9.313226e-10) {
        uVar5 = 0x3f800000;
      }
      iVar2 = _rand();
      uVar4 = 0;
      if (1.0 <= (float)iVar2 * 9.313226e-10) {
        uVar4 = 0x3f800000;
      }
      *param_2 = uVar5;
      param_2[1] = uVar4;
      *(undefined8 *)(param_2 + 2) = 0x3f80000000000000;
      param_2 = param_2 + 4;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7a014(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7a078(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 4.656613e-11 + 0.1,
                          (float)uVar5 * 4.656613e-11 + 0.1);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7a0fc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7a154(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f333333;
  return 1;
}




ulong FUN_100c7a168(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7a1ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7a1f0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7a234(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7a270(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c7a29c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012ca180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ca180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7a34c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7a35c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c7a36c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7a378(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7a388(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7a394(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7a3a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7a3b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7a3c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c7a3d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7a3e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7a3f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c7a404(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7a440(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7a47c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c7a510:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7a510;
          fVar5 = *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ca280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7a530(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c7a540(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -2.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -2.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012ca380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7a5dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7a5e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c7a5f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7a634(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7a678(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181810,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7a6bc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7a6cc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c7a734(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3d4ccccd;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_100c7a758(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7a764(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.45;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7a7cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7a810(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7a84c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c7a8e0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7a8e0;
          fVar5 = *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ca280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7a900(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c7a910(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -2.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -2.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012ca380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7a9ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7a9b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c7a9c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7aa04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7aa48(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181810,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7aa8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7aa9c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c7ab04(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3d4ccccd;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_100c7ab28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7ab34(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.45;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7ab9c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7abe0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7ac1c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c7acb0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7acb0;
          fVar5 = *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ca280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7acd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c7ace0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -2.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -2.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012ca380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7ad7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ad88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c7ad98(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7add4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7ae18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181810,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7ae5c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7ae6c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c7aed4(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3d4ccccd;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_100c7aef8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7af04(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.45;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7af6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7afb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7afec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_100c7b080:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7b080;
          fVar5 = *(float *)(&DAT_1012ca480 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ca480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca480 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7b0a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7b0b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c7b0c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b0cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7b0dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7b0ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b0f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c7b108(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7b118(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b124(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7b134(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7b140(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7b1a8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7b1e4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7b220(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012ca580 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ca580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca580 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7b2c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7b2d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x442f0000;
  return 1;
}




undefined8 FUN_100c7b2e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b2f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7b304(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b310(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7b320(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b32c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7b33c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c7b350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x437a0000437a0000;
  return 1;
}




undefined8 FUN_100c7b364(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b370(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c7b380(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7b3bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7b3f8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.7;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.7;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d0680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d0680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d0680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c7b50c:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7b50c;
          fVar3 = *(float *)(&DAT_1012d1880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d1880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d1880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7b52c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c7b53c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.1;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012ca680 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012ca680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca680 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 400.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7b5ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b5f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc296000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7b610(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c7b620(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41d80000;
  return 1;
}




undefined8 FUN_100c7b630(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b63c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7b64c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-07 + 200.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7b6b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c7b6c4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7b71c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.862645e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7b780(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7b7c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181440,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7b808(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7b844(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7b880(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7b890(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7b8a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b8ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b8b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7b8c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b8d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7b8e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c7b8f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7b904(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b910(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f3333333f333333;
  return 1;
}




undefined8 FUN_100c7b928(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7b934(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f051eb8;
  return 1;
}




ulong FUN_100c7b948(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7b984(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7b9c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7ba04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7ba40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7ba50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c7ba60(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7ba70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ba7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f3333333f333333;
  return 1;
}




undefined8 FUN_100c7ba94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7baa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f051eb8;
  return 1;
}




ulong FUN_100c7bab4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7baf0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7bb34(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7bb70(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7bbac(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar5) {
LAB_100c7bc40:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7bc40;
          fVar4 = *(float *)(&DAT_1012ca780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ca780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7bc60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7bc70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7bc80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7bc8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7bc9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7bca8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7bcb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7bcc4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7bcd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7bce0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40c00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7bcf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7bcfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




ulong FUN_100c7bd0c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7bd50(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7bd8c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar5) {
LAB_100c7be30:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.4 < fVar5) {
          fVar5 = fVar5 * 106.666664 + -42.666668;
          uVar1 = (int)fVar5 + 1;
          if (0x3f < uVar1) goto LAB_100c7be30;
          fVar4 = *(float *)(&DAT_1012ca880 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012ca880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca880 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7be50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7be60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7be70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7be7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7be8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7be98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7bea8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7beb4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7bec4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7bed0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7bee0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7beec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c7befc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7bf40(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7bf7c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012ca980 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012ca980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca980 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c7c080:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7c080;
          fVar4 = *(float *)(&DAT_1012caa80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012caa80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012caa80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7c0a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7c0b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_100c7c0c0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar5) {
LAB_100c7c148:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7c148;
          fVar4 = *(float *)(&DAT_1012caa80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012caa80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012caa80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar4 * -2000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7c16c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7c17c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c188(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c7c198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c1a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7c1b4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7c20c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c7c21c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7c274(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.259629e-10 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7c2dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7c320(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7c35c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar5) {
LAB_100c7c3f0:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7c3f0;
          fVar4 = *(float *)(&DAT_1012cab80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cab80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cab80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7c410(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7c420(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7c430(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c43c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7c44c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c458(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7c468(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c474(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7c484(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c490(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7c4a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c4ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c7c4bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7c500(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7c53c(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 2.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012cac80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cac80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cac80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar3;
      param_3[2] = 0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c7c644:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 0.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7c644;
          fVar4 = *(float *)(&DAT_1012cad80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012cad80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cad80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7c664(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c7c674(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    do {
      fVar2 = 0.0;
      if ((param_1 < 1.0 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar2 = *(float *)(&DAT_1012cae80 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_1012cae80 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012cae80 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      *param_3 = fVar2 * 4.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c7c6f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c704(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7c714(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c720(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c7c730(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c73c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7c74c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_100c7c760(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x4120000041000000;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_100c7c784(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43700000;
  return 1;
}




undefined8 FUN_100c7c794(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c7c7a8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7c7e4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7c820(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012caf80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012caf80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012caf80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7c8c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7c8d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c7c8e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7c8f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7c908(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c914(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7c924(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7c934(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7c944(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7c950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42c8000042c80000;
  return 1;
}




ulong FUN_100c7c964(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7c9bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c7c9cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7ca08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7ca44(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cb080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012cb080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7cb64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7cb74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cb80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cb8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7cb9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cba8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7cbb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cbc4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7cbd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cbe0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42c6000042c60000;
  return 1;
}




undefined8 FUN_100c7cbf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cc00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c7cc10(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7cc54(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7cc90(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012cb180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cb180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7cda8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7cdb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cdc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cdd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7cde0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cdec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7cdfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7ce0c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7ce1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ce28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42c6000042c60000;
  return 1;
}




undefined8 FUN_100c7ce3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ce48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c7ce58(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7ce9c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7ced8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cb280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cb280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7cf80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7cf90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_100c7cfa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cfb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7cfc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7cfcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7cfdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c7cfec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7cffc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d008(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4220000042200000;
  return 1;
}




undefined8 FUN_100c7d01c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7d028(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313228e-11 + 0.9;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7d090(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7d0d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7d110(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cd180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cd180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd180 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7d1b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7d1c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d1d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc3480000;
  return 1;
}




undefined8 FUN_100c7d1e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7d1f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7d210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7d220(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7d230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d23c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41900000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c7d24c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7d2a4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313228e-11 + 0.9;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7d30c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7d350(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7d38c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012cb380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cb380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7d4a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7d4b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7d4c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d4d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x41f0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7d4e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d4f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c7d504(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c7d514(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7d524(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7d534(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c7d544(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7d59c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7d600(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7d644(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7d688(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7d6c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7d700(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012cb480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cb480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7d7b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7d7c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c7d7d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d7dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7d7ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d7f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7d808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d814(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7d824(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d830(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x42c8000042c80000;
  return 1;
}




undefined8 FUN_100c7d844(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d850(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c7d860(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7d89c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7d8d8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
                 *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.9 < fVar4)) {
        fVar4 = fVar4 * 639.9999 + -575.9999;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d3980 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012d3980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3980 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7d9b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7d9c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7d9d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7d9dc(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar2 = _rand();
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 2.3283064e-08 + -40.0,
                          (float)uVar5 * 9.313226e-08 + -100.0);
      *(float *)(param_2 + 1) = (float)iVar2 * 1.8626451e-08 + -20.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7da88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c7da98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_100c7daa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7dab4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7dac4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 8.8475645e-08 + 10.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7db28(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 6.9849193e-10 + 0.5,
                          (float)uVar5 * 6.9849193e-10 + 0.5);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7db9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7dba8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7dc0c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7dc50(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181970,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7dc94(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181970,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7dcd8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7dd14(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012cb480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cb480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7ddc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7ddd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c7dde4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ddf0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7de00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7de0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7de1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7de28(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7de38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7de44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4348000041a00000;
  return 1;
}




undefined8 FUN_100c7de58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7de64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c7de78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7deb4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7def0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.5;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.5;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d4e80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d4e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4e80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c7dff4:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7dff4;
          fVar4 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7e014(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7e024(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c7e034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7e040(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7e058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7e068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c7e078(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c7e088(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7e098(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7e0fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_100c7e10c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7e164(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7e1cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2830,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7e210(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7e24c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c7e25c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c7e26c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7e27c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7e2e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_100c7e2f0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7e348(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313225e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7e3b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2840,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7e3f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7e430(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012cb580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cb580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7e4e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7e4f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7e4fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7e508(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7e518(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7e528(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7e538(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c7e548(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7e558(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7e564(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41100000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7e574(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7e580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c7e590(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7e5d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7e618(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7e65c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7e698(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7e748(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7e758(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c7e768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7e774(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7e784(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7e790(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7e7a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c7e7b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7e7c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c7e7d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040400000;
  return 1;
}




ulong FUN_100c7e7e8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7e840(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849196e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7e8a8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7e8ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c7e930(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7e940(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c7e950(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7e960(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c7e974(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040400000;
  return 1;
}




ulong FUN_100c7e988(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7e9e0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849196e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7ea48(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7ea8c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7ead0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar7 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      fVar6 = 0.0;
      fVar5 = 1.0;
      if ((fVar7 < 1.0) && (fVar6 = 1.0, fVar5 = -0.3, 0.0 < fVar7)) {
        fVar6 = fVar7 * 64.0;
        uVar3 = (uint)(fVar7 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d0e80 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d0e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d0e80 + (ulong)uVar3 * 4));
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4));
        }
        else {
          fVar6 = 0.0;
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar5 < 1.0) && (0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cb680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cb680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7ec28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7ec38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ec44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ec50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7ec60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ec6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7ec7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c7ec8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7ec9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c7ecac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x41c800003f800000;
  return 1;
}




undefined8 FUN_100c7ecc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c7ecd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3df5c28f;
  return 1;
}




ulong FUN_100c7ece4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2850,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7ed28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819e0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7ed6c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7ee1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7ee2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ee38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ee44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7ee54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7ee64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7ee74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ee80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7ee90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7ee9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7eeac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7eeb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c7eec8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7ef04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7ef40(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.5;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.5;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d4e80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d4e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4e80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c7f044:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c7f044;
          fVar4 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7f064(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f074(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7f084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f090(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f0a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c7f0b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7f0c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f0d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7f0e4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-09 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7f148(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c7f158(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7f1b0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969838e-10 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7f218(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181490,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7f25c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7f298(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
                 *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d4580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d4580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c7f364(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f374(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f380(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f38c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f39c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f3a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7f3b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f3c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7f3d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c7f3e8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 2.0;
      param_2[1] = 30.0;
      param_2 = param_2 + 2;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7f460(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7f46c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-10 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7f4d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181970,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7f518(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181620,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7f55c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7f60c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f61c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c7f62c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f638(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f648(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7f658(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c7f668(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f674(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c7f684(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7f6e8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + 1.0;
      param_2[1] = 8.0;
      param_2 = param_2 + 2;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c7f760(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f76c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c7f780(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011818e0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7f7c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7f808(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (fVar5 = 1.0, 0.2 < fVar6)) {
        fVar6 = fVar6 * 80.0 + -16.0;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cb780 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012cb780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb780 + (ulong)(uint)(int)fVar6 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7f8c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f8d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c7f8e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f8f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7f900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7f910(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7f920(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f92c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7f93c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f948(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40c00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c7f958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7f964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c7f978(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7f9b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7f9f0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7faa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7fab0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c7fac0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7facc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7fadc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7faec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7fafc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7fb08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7fb18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7fb24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c7fb34(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7fb8c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849196e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7fbf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7fc30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7fc6c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7fd1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7fd2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c7fd3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7fd48(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7fd58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7fd68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c7fd78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7fd84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c7fd94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c7fda0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c7fdb0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7fe08(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849196e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c7fe70(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c7feac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c7fee8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c7ff98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c7ffa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c7ffb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c7ffc4(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar4 = param_2 & 0xffffffff;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar6 = 0.0;
      fVar7 = 0.0;
      if ((fVar5 < 0.6) && (fVar7 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 106.666664;
        uVar1 = (int)fVar5 + 1;
        fVar7 = 0.0;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d3e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      iVar2 = _rand();
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar5 < 0.6) && (fVar6 = 1.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 106.666664;
        uVar1 = (int)fVar5 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d3e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3e80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      iVar3 = _rand();
      *param_3 = ((float)iVar2 * 2.7939677e-08 + -30.0) * fVar7;
      param_3[1] = -10.0;
      param_3[2] = ((float)iVar3 * 2.7939677e-08 + -30.0) * fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return param_2;
}

