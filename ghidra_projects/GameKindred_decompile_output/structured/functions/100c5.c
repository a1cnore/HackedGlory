// functions/100c5 — 1415 functions
#include "GameKindred.h"




void FUN_100c50008(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 2000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c500ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c500bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c500cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c500dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c500e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c500f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_100c5010c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c5011c(ulong param_1,float *param_2)

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




undefined8 FUN_100c50174(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c50184(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c501c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c50204(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c50240(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c50284(int param_1,undefined8 *param_2)

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




void FUN_100c502b0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar3 = *(float *)(&DAT_1012c1f80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c1f80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c1f80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c503c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c503d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c503e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c503f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c50400(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c50414(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c50424(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50430(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c50440(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0800000;
  return 1;
}




undefined8 FUN_100c50450(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4120000040400000;
  return 1;
}




undefined8 FUN_100c50464(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c50474(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c50484(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c504c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5050c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 0.5) && (fVar4 = 0.0, 0.2 < fVar3)) {
        fVar5 = fVar3 * 213.33333 + -42.666668;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d4780 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d4780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4780 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      fVar5 = 0.0;
      if ((fVar3 < 1.0) && (fVar5 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c2080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c2080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c50698(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c506a8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012c2180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c2180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5074c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50758(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c50768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50774(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c50784(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50790(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c507a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c507b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c507c4(ulong param_1,float *param_2)

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




ulong FUN_100c5081c(ulong param_1,float *param_2)

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




ulong FUN_100c50884(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c508c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c50904(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 1.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012ceb80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012ceb80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ceb80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c509c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c509d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c509e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c509f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c50a00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50a0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c50a1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50a28(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c50a38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50a44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c50a54(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-09;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c50aac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c50abc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c50af8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c50b34(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = param_2 & 0xffffffff;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 0.6;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.6;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c4380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c4380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      iVar2 = _rand();
      *param_3 = fVar5 + (float)iVar2 * (4.656613e-10 - fVar5 * 4.656613e-10);
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar5 < 0.5) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 128.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar5 * 128.0) * 4) +
                  (fVar5 * 128.0 - (float)(int)(fVar5 * 128.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar5 * 128.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_2;
}




undefined8 FUN_100c50ce0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c50cf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0800000;
  return 1;
}




undefined8 FUN_100c50d00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50d0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c50d1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c50d38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50d44(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c50d54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c50d68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c50d78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50d84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c50d94(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c50dd8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c50e14(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c2280 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c2280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2280 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c50ec0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c50ed0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




void FUN_100c50ee0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 2000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c50f84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c50f94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c50fa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_100c50fb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c50fc0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c50fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c50fe4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c50ff4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51000(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c51010(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51054(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c51090(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.4;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.4;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c2380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c2380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c51148(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51158(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c51168(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51174(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51184(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c51194(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c511a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c511b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c511c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c511cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c511dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c511e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c511f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51234(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51270(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = param_2 & 0xffffffff;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 0.5;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.5;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d4e80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d4e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4e80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      iVar2 = _rand();
      *param_3 = fVar5 + (float)iVar2 * (4.656613e-10 - fVar5 * 4.656613e-10);
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_2;
}




undefined8 FUN_100c51404(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51414(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51420(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5142c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5143c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51448(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c51458(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51464(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c51474(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + -1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c514d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003dcccccd;
  return 1;
}




undefined8 FUN_100c514ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c514f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c51508(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51544(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51580(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c515bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819c0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c51600(int param_1,undefined8 *param_2)

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




void FUN_100c5162c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c5174c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5175c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc4a28000;
  return 1;
}




undefined8 FUN_100c5177c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5178c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5179c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c517ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c517b8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c517c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c517d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41100000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c517e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42700000;
  return 1;
}




ulong FUN_100c517f8(ulong param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if (0 < (int)param_1) {
    do {
      _rand();
      *param_2 = 0x3db851ec;
      uVar1 = (int)uVar2 - 1;
      param_2 = param_2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c51848(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51884(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c518c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c518fc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c51938(int param_1,undefined8 *param_2)

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




void FUN_100c51964(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012c2480 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c2480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2480 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c51a84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51a94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c51aa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51ab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51ac0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51acc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c51adc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51ae8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c51af8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51b04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c51b14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c51b24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c51b38(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51b74(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c51bb0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c51cd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51ce0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c51cf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51cfc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51d0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51d18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c51d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c51d34(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c51d44(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3038516e-08 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c51da8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003e4ccccd;
  return 1;
}




undefined8 FUN_100c51dbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c51dcc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.2596287e-11 + 0.06;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c51e34(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181460,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c51e78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c51ebc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012c2580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c2580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1012c2680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c2680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c51fdc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c51fec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c51ffc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c5200c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c52024(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c52034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c52044(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c52050(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c52060(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.7252903e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c520c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_100c520dc(ulong param_1,float *param_2)

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




ulong FUN_100c52134(ulong param_1,float *param_2)

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




ulong FUN_100c5219c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011e5960,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c521e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c52224(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c52268(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c522a4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c52338:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c52338;
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




undefined8 FUN_100c52358(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c52368(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c52374(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_100c52380(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    uVar5 = (ulong)param_2;
    do {
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar7 = 1.0;
      fVar8 = 1.0;
      if ((fVar6 < 1.0) && (fVar8 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar8 = 1.0;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_1012c2780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c2780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      iVar2 = _rand();
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar6 < 1.0) && (fVar7 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar7 = 1.0;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_1012c2780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c2780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      iVar3 = _rand();
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar9 = 1.0;
      if ((fVar6 < 1.0) && (fVar9 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        fVar9 = 1.0;
        if (uVar1 < 0x40) {
          fVar9 = *(float *)(&DAT_1012c2780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c2780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      iVar4 = _rand();
      *param_3 = ((float)iVar2 * 9.313226e-09 + -10.0) * fVar8;
      param_3[1] = ((float)iVar3 * 1.1641532e-08 + -10.0) * fVar7;
      param_3[2] = ((float)iVar4 * 9.313226e-09 + -10.0) * fVar9;
      param_4 = param_4 + 1;
      param_3 = param_3 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_100c525b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c525c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c525d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c525e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c525f4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.259629e-09 + 15.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c52658(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f800000;
  return 1;
}




undefined8 FUN_100c5266c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c52678(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c52688(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181850,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c526cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011a41b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c52710(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5274c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c52788(int param_1,undefined8 *param_2)

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




void FUN_100c527b0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c52844:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c52844;
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




undefined8 FUN_100c52864(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c52874(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c52884(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c52890(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c528a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c528b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c528c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c528cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c528dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c528ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000040c00000;
  return 1;
}




undefined8 FUN_100c52900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5290c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c5291c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c52960(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5299c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c529d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c52a14(int param_1,undefined8 *param_2)

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




void FUN_100c52a3c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c52ad0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c52ad0;
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




undefined8 FUN_100c52af0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c52b00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c52b10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c52b1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c52b2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_100c52b3c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = -0.3, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012ce880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012ce880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c52c48:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c52c48;
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




undefined8 FUN_100c52c68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c52c78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c52c88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c52c94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c52cac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c52cbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c52ccc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c52cdc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c52cec(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.259629e-09 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c52d50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3dcccccd3dcccccd;
  return 1;
}




ulong FUN_100c52d68(ulong param_1,float *param_2)

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




ulong FUN_100c52dc0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.862645e-10 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c52e28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c52e6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c52ea8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c52ee4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c52f20(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 1.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.0, 0.3 < fVar4)) {
        fVar4 = fVar4 * 91.42857 + -27.428574;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 1.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012c6480 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012c6480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c6480 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c53030:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.3 < fVar3) {
          fVar3 = fVar3 * 91.42857 + -27.428574;
          uVar1 = (int)fVar3 + 1;
          if (0x3f < uVar1) goto LAB_100c53030;
          fVar4 = *(float *)(&DAT_1012d3580 + (ulong)(uint)(int)fVar3 * 4) +
                  (fVar3 - (float)(int)fVar3) *
                  (*(float *)(&DAT_1012d3580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3580 + (ulong)(uint)(int)fVar3 * 4));
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




undefined8 FUN_100c53050(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c53060(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_100c53070(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012d4580 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d4580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4580 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 1000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c53118(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c53128(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53134(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c53144(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c53154(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c53164(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53170(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c53180(ulong param_1,float *param_2)

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




undefined8 FUN_100c531d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c531ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c53230(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5326c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c532a8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c532ec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c53390:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.3 < fVar6) {
          fVar6 = fVar6 * 91.42857 + -27.428574;
          uVar1 = (int)fVar6 + 1;
          if (0x3f < uVar1) goto LAB_100c53390;
          fVar5 = *(float *)(&DAT_1012d3580 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d3580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3580 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_100c533b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c533c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c533cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc47a0000;
  return 1;
}




undefined8 FUN_100c533dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c533ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c533f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c53408(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c53418(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c53428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c5343c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c5344c(ulong param_1,float *param_2)

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




undefined8 FUN_100c534a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c534b8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c534f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c53530(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5356c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181320,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c535b0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c53644:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c53644;
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




undefined8 FUN_100c53664(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c53674(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = fVar5 * 40.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c5371c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53728(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c53738(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53744(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c53754(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53760(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c53770(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5377c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c5378c(ulong param_1,float *param_2)

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




ulong FUN_100c537e4(ulong param_1,float *param_2)

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




ulong FUN_100c53848(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c53884(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c538c0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012c2880 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c2880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2880 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c53968(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c53978(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_100c53988(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c53994(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1) {
    uVar6 = NEON_fmov(0xc1f00000,4);
    uVar4 = param_1;
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar2 = _rand();
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          (float)((ulong)uVar5 >> 0x20) * 2.7939677e-08,
                          (float)uVar6 + (float)uVar5 * 2.7939677e-08);
      *(float *)(param_2 + 1) = (float)iVar2 * 2.0954758e-08 + -50.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c53a40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c53a50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c53a60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53a6c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c53a7c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c53ae0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003f800000;
  return 1;
}




undefined8 FUN_100c53af4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c53b00(ulong param_1,float *param_2)

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




ulong FUN_100c53b68(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c53bac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c53be8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c53c24(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c53c60(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c53cf4:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c53cf4;
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




undefined8 FUN_100c53d14(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c53d24(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = fVar5 * 40.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c53dcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53dd8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c53de8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53df4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c53e04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53e10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c53e20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c53e2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c53e38(ulong param_1,float *param_2)

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




ulong FUN_100c53e90(ulong param_1,float *param_2)

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




ulong FUN_100c53ef4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c53f30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c53f6c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar5 = 0.6;
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar7 = fVar5;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_1012c2980 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c2980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2980 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar7;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c54024(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54040(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5404c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5405c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c54078(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54084(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c54094(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c540a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003f800000;
  return 1;
}




undefined8 FUN_100c540b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c540c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c540d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c54114(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c54150(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c541e4:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c541e4;
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




undefined8 FUN_100c54204(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54214(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1a00000;
  return 1;
}




undefined8 FUN_100c54224(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54230(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54240(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c54250(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c54260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5426c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5427c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c5428c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4120000040800000;
  return 1;
}




undefined8 FUN_100c542a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c542ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c542bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c542f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c54334(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c543c8:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c543c8;
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




undefined8 FUN_100c543e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c543f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c54408(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54414(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54424(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54430(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c54440(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5444c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5445c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54468(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c54478(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54484(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c54494(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c544d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5450c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c545a0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c545a0;
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




undefined8 FUN_100c545c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c545d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c545e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c545ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c545fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54608(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c54618(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54624(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c54634(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54640(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c54650(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5465c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c54670(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c546ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c546e8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cfc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c54790(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c547a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c547b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c547bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c547cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c547dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c547ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c547f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c54808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54814(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c54824(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54830(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c54840(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5487c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c548b8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cfc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c54960(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c54980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5498c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5499c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c549ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c549bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c549c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c549d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c549e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003dcccccd;
  return 1;
}




undefined8 FUN_100c549fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c54a0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c54a20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c54a64(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c54aa0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
    fVar4 = 0.6;
    do {
      fVar8 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 1.0;
      fVar7 = fVar4;
      if ((fVar8 < 1.0) && (fVar5 = 0.1, 0.0 < fVar8)) {
        fVar6 = fVar8 * 64.0;
        uVar3 = (uint)(fVar8 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d2780 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d2780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2780 + (ulong)uVar3 * 4));
          fVar7 = *(float *)(&DAT_1012c2a80 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012c2a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2a80 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar7;
      param_3[2] = 0.0;
      fVar7 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 0.0;
      if ((fVar7 < 1.0) && (fVar5 = 0.0, 0.0 < fVar7)) {
        uVar1 = (int)(fVar7 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar7 * 64.0) * 4) +
                  (fVar7 * 64.0 - (float)(int)(fVar7 * 64.0)) *
                  (*(float *)(&DAT_1012cfc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar7 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c54c00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54c10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c54c20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54c2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54c3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54c48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c54c58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54c64(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c54c74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c54c88(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c54c98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c54ca8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_100c54cbc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c54d00(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c54d3c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012d4580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d4580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c54dec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54dfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c54e0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c54e1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c54e2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c54e3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c54e4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54e58(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c54e68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c54e78(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c54e88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c54e94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c54ea8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c54ee4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c54f20(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.2;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c6580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c6580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c6580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1012c2b80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c2b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2b80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c55048(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c55058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c55068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c55078(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c55088(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c55098(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c550a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c550b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c550c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c550d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_100c550ec(ulong param_1,float *param_2)

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




ulong FUN_100c55144(ulong param_1,float *param_2)

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




ulong FUN_100c551ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c551f0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5522c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c552dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c552ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




undefined8 FUN_100c552fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55308(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x40800000;
  return 1;
}




undefined8 FUN_100c5531c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55328(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c55338(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c55348(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c55358(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c55368(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c55378(ulong param_1,float *param_2)

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




undefined8 FUN_100c553d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c553e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5541c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c55458(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = -0.5;
      fVar4 = 0.0;
      if (1.0 <= fVar6) {
        fVar6 = 0.0;
      }
      else if (fVar6 <= 0.0) {
        fVar5 = 0.5;
        fVar6 = 1.0;
      }
      else {
        fVar7 = fVar6 * 64.0;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4));
          fVar5 = *(float *)(&DAT_1012c2c80 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_1012c2c80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2c80 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c2d80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c2d80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2d80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c555b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c555c0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.5) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 128.0) + 1;
        fVar5 = -2.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 128.0) * 4) +
                  (fVar4 * 128.0 - (float)(int)(fVar4 * 128.0)) *
                  (*(float *)(&DAT_1012ca380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 128.0) * 4));
        }
      }
      *param_3 = fVar5 * 3.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c55664(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55670(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c55680(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c55690(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5569c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c556ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c556bc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c55720(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




undefined8 FUN_100c55734(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55740(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c55750(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c55794(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c557d0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = -0.5;
      fVar4 = 0.0;
      if (1.0 <= fVar6) {
        fVar6 = 0.0;
      }
      else if (fVar6 <= 0.0) {
        fVar5 = 0.5;
        fVar6 = 1.0;
      }
      else {
        fVar7 = fVar6 * 64.0;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4));
          fVar5 = *(float *)(&DAT_1012c2c80 + (ulong)uVar3 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_1012c2c80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2c80 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c2d80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c2d80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2d80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c55928(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c55938(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.5) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 128.0) + 1;
        fVar5 = -2.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 128.0) * 4) +
                  (fVar4 * 128.0 - (float)(int)(fVar4 * 128.0)) *
                  (*(float *)(&DAT_1012ca380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ca380 + (ulong)(uint)(int)(fVar4 * 128.0) * 4));
        }
      }
      *param_3 = fVar5 * 3.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c559dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c559e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c559f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




void FUN_100c55a08(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar5) {
        fVar4 = 0.0;
LAB_100c55afc:
        fVar6 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.2 < fVar5) {
          fVar6 = fVar5 * 80.0 + -16.0;
          uVar1 = (int)fVar6 + 1;
          fVar4 = 0.0;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar6 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar6 * 4));
          }
        }
        fVar6 = 0.5;
        if (0.1 < fVar5) {
          fVar5 = fVar5 * 71.111115 + -7.1111116;
          uVar1 = (int)fVar5 + 1;
          if (0x3f < uVar1) goto LAB_100c55afc;
          fVar6 = *(float *)(&DAT_1012d2180 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d2180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2180 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_4 = param_4 + 1;
      param_3[2] = fVar6;
      param_3[3] = 1.0;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c55b24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c55b34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c55b44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55b50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c55b68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c55b78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_100c55b88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55b94(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c55ba4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-09 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c55c08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000040000000;
  return 1;
}




undefined8 FUN_100c55c1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c55c28(ulong param_1,float *param_2)

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




ulong FUN_100c55c90(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c55cd4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011817b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c55d18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c55d5c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c55da0(int param_1,undefined8 *param_2)

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




void FUN_100c55dcc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012c2e80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c2e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2e80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c55e74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c55e84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55e90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55e9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c55eac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55eb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55ec4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c55ed4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c55ee4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c55ef8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003f800000;
  return 1;
}




undefined8 FUN_100c55f0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c55f18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c55f28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c55f64(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c55fa0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_4 = param_4 + 1;
      param_3[2] = param_1;
      param_3[3] = 1.0;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c56050(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56060(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c56070(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5607c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5608c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56098(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c560a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




ulong FUN_100c560b8(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (0 < (int)param_1) {
    uVar4 = NEON_fmov(0x3f800000,4);
    uVar3 = param_1;
    do {
      *param_2 = uVar4;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      iVar2 = _rand();
      *(float *)((long)param_2 + 0xc) = (float)iVar2 * 4.656613e-10;
      param_2 = param_2 + 2;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c56134(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c56144(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




undefined8 FUN_100c56158(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c56164(ulong param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if (0 < (int)param_1) {
    do {
      _rand();
      *param_2 = 0x3f000000;
      uVar1 = (int)uVar2 - 1;
      param_2 = param_2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c561b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c561ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c56228(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cfc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c562d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c562e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c562ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c562f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56308(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56314(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56320(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x420c0000;
  return 1;
}




ulong FUN_100c56330(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      iVar4 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-10 + 0.2;
      param_2[1] = (float)iVar3 * 9.313226e-11;
      param_2[2] = (float)iVar4 * 9.313225e-11 + 0.6;
      param_2[3] = 1.0;
      param_2 = param_2 + 4;
      uVar1 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c563f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_100c56404(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c56414(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c56420(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-10 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c56488(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c564cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c56510(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c56520(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56530(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5653c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43fa0000;
  return 1;
}




undefined8 FUN_100c5654c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5655c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56568(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c56578(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c56588(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c56598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c565a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_100c565b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc3110000;
  return 1;
}




undefined8 FUN_100c565c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c565d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c56610(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5664c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 0.3, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012d3a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d3a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c56704(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56714(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c56724(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56730(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56740(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5674c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5675c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56768(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c56778(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c5678c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c5679c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c567a8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.3132266e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c56810(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5684c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c56888(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c5180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c5180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c5180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c56938(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56948(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c56958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56964(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56974(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c56990(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5699c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c569ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c569c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c569d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c569dc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.3132266e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c56a44(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c56a80(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c56abc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar1 = param_5 + (ulong)*param_4 * 4;
      *(float *)((long)param_3 + 0xc) =
           (param_1 - *(float *)(lVar1 + 0x48000)) / *(float *)(lVar1 + 0x50000);
      param_3 = param_3 + 2;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c56b0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56b1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c56b2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56b38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56b48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56b54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c56b64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56b70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c56b80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56b8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c56b9c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.671724e-07 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c56c00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c56c14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c56c58(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c56c94(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = 1.0;
      if ((fVar6 < 0.9) && (fVar5 = 0.2, 0.0 < fVar6)) {
        fVar6 = fVar6 * 71.111115;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c6780 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012c6780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c6780 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_100c56d50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56d60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c56d70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56d7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56d8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56d98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c56da8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56db4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c56dc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56dd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c56de0(ulong param_1,float *param_2)

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




undefined8 FUN_100c56e38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_100c56e4c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c56e90(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c56ecc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 0.7, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c6880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c6880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c6880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c56f84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56f94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbfc00000;
  return 1;
}




undefined8 FUN_100c56fa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56fb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c56fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56fcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x420c0000;
  return 1;
}




undefined8 FUN_100c56fdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c56fe8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c56ff8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + 4.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5705c(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 4.656613e-10 + 1.0,
                          (float)uVar5 * 1.1641532e-10 + 0.25);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c570d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c570e8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c57150(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c57194(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c571d8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012c2f80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c2f80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c2f80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1012c3080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c3080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c572f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c57308(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




undefined8 FUN_100c5731c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c5732c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5733c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c5734c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c5735c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c5736c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5737c(ulong param_1,float *param_2)

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




ulong FUN_100c573e4(ulong param_1,undefined8 *param_2)

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




ulong FUN_100c57468(ulong param_1,float *param_2)

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




ulong FUN_100c574c0(ulong param_1,float *param_2)

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




ulong FUN_100c57524(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181660,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c57568(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c575a4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c3180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c3180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c57654(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c57664(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_100c57678(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c57688(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c57698(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c576a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c576b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c576c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c576d8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.3132266e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c57740(ulong param_1,undefined8 *param_2)

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




ulong FUN_100c577c4(ulong param_1,float *param_2)

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




ulong FUN_100c5781c(ulong param_1,float *param_2)

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




ulong FUN_100c57884(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181660,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c578c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c57904(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c3280 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c3280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3280 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c579b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c579c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_100c579d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c579e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c579f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c57a00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c57a10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c57a1c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c57a2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c57a38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c57a48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c57a54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f333333;
  return 1;
}




ulong FUN_100c57a68(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181660,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c57aac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c57ae8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c3380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c3380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c57b98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c57ba8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c57bb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c57bc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc110000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c57be0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c57bec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c57bfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c57c08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c57c18(ulong param_1,float *param_2)

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




undefined8 FUN_100c57c7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c57c8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c57c98(ulong param_1,float *param_2)

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




ulong FUN_100c57d00(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b27d0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c57d44(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c57d80(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 0.95;
      if ((fVar4 < 1.0) && (fVar3 = 0.0, 0.2 < fVar4)) {
        fVar5 = fVar4 * 80.0 + -16.0;
        uVar1 = (int)fVar5 + 1;
        fVar3 = 0.95;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d4280 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d4280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4280 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      fVar5 = 0.0;
      if ((fVar4 < 0.4) && (fVar5 = 1.0, 0.1 < fVar4)) {
        fVar4 = fVar4 * 213.33333 + -21.333334;
        uVar1 = (int)fVar4 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c3480 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012c3480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3480 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = fVar5;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c57f1c:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.5 < fVar3) {
          fVar3 = fVar3 * 128.0 + -64.0;
          uVar1 = (int)fVar3 + 1;
          if (0x3f < uVar1) goto LAB_100c57f1c;
          fVar4 = *(float *)(&DAT_1012c3580 + (ulong)(uint)(int)fVar3 * 4) +
                  (fVar3 - (float)(int)fVar3) *
                  (*(float *)(&DAT_1012c3580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3580 + (ulong)(uint)(int)fVar3 * 4));
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




undefined8 FUN_100c57f3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c57f4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c57f58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c57f68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xbf80000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c57f80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c57f90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c57fa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c57fb0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c57fc0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c58024(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f19999a3f19999a;
  return 1;
}




ulong FUN_100c5803c(ulong param_1,float *param_2)

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




ulong FUN_100c58094(ulong param_1,float *param_2)

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




ulong FUN_100c580fc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c58140(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5817c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012d4480 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d4480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4480 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c58224(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58234(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58240(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c58250(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c58270(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c58280(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c58290(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c582a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c582b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4ccccd3f4ccccd;
  return 1;
}




undefined8 FUN_100c582cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c582d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c582e8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5832c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c58368(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c3680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c3680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c58418(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c58438(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58444(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58454(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c58464(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c58474(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c58484(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c58494(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c584a8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + 0.5;
      param_2[1] = 1.0;
      param_2 = param_2 + 2;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c58520(ulong param_1,float *param_2)

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




undefined8 FUN_100c58578(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c5858c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c585d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5860c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c586a0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c586a0;
          fVar5 = *(float *)(&DAT_1012c3780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c3780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3780 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c586c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c586d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c586e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c586ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c586fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c5870c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c5871c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c5872c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5873c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c58750(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c58760(ulong param_1,float *param_2)

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




undefined8 FUN_100c587b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c587c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c58804(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c58840(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c588d4:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c588d4;
          fVar5 = *(float *)(&DAT_1012d2280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d2280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c588f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58904(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c58914(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x44160000;
  return 1;
}




undefined8 FUN_100c58924(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58934(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58940(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c58950(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5895c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5896c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c58980(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c6666640c66666;
  return 1;
}




undefined8 FUN_100c58998(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c589a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




ulong FUN_100c589b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c589f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c58a34(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c58ac8:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 0.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c58ac8;
          fVar4 = *(float *)(&DAT_1012c5380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c5380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c5380 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c58ae8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58af8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c58b08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x44160000;
  return 1;
}




undefined8 FUN_100c58b18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58b28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58b34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c58b44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58b50(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c58b60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58b6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40c00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c58b7c(ulong param_1,float *param_2)

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




undefined8 FUN_100c58bd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




ulong FUN_100c58be4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c58c28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c58c64(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c58ca0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c58ce4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c58d88:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.1 < fVar6) {
          fVar6 = fVar6 * 71.111115 + -7.1111116;
          uVar1 = (int)fVar6 + 1;
          if (0x3f < uVar1) goto LAB_100c58d88;
          fVar5 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_100c58da8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58db8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58dc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43fa0000;
  return 1;
}




undefined8 FUN_100c58dd4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c58de4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58df0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c58e00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58e0c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c58e1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c58e30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41100000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c58e40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c58e4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c58e60(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c58ea4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c58ee0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.2;
      if ((fVar3 < 1.0) && (fVar4 = -0.1, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cf680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012cf680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cf680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1012c3880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c3880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3880 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c59008(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c59018(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_100c59028(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59034(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5904c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c5905c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c5906c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59078(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c59088(ulong param_1,float *param_2)

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




undefined8 FUN_100c590ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c590fc(ulong param_1,float *param_2)

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




ulong FUN_100c59154(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c591bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c59200(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5923c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c592ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c592fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c5930c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59318(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c59328(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59334(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c59344(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59350(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c59360(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.7252903e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c593c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_100c593d4(ulong param_1,float *param_2)

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




ulong FUN_100c5942c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.3132266e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c59494(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c594d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5951c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c595cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c595dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c595ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c595f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c59608(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c59618(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c59628(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59634(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c59644(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c59654(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c59664(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59670(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c59684(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c596c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c596fc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 0.0;
      fVar4 = 0.2;
      if (fVar6 < 1.0) {
        fVar5 = 1.0;
        fVar4 = 1.0;
        if (0.0 < fVar6) {
          fVar4 = fVar6 * 64.0;
          uVar3 = (uint)(fVar6 * 64.0);
          uVar1 = uVar3 + 1;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4) +
                    (fVar4 - (float)(int)fVar4) *
                    (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012d5780 + (ulong)uVar3 * 4));
            fVar4 = *(float *)(&DAT_1012c3980 + (ulong)uVar3 * 4) +
                    (fVar4 - (float)(int)fVar4) *
                    (*(float *)(&DAT_1012c3980 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012c3980 + (ulong)uVar3 * 4));
          }
          else {
            fVar5 = 0.0;
            fVar4 = 0.2;
          }
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = fVar5;
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.3, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d5680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5986c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5987c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_100c5988c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59898(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0e0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c598b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c598bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c598cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c598d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c598e8(ulong param_1,float *param_2)

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




undefined8 FUN_100c5994c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000040000000;
  return 1;
}




undefined8 FUN_100c59960(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




ulong FUN_100c59970(ulong param_1,float *param_2)

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




ulong FUN_100c599d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c59a1c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c59a60(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.2, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012c4180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c4180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c59b88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c59b98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59ba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59bb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c59bc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59bcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c59bdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59be8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c59bf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c59c08(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 1.3969839e-09 + 2.0,
                          (float)uVar5 * 9.3132266e-11 + 0.4);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c59c84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c59c90(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.4924597e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c59cf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c59d38(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c59d7c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 1.0;
      if ((fVar4 < 0.9) && (fVar3 = 0.0, 0.0 < fVar4)) {
        fVar4 = fVar4 * 71.111115;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 1.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.3, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d3a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d3a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c59eb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c59ec0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59ecc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59ed8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c59ee8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59ef4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c59f04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c59f10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c59f20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c59f34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000040000000;
  return 1;
}




undefined8 FUN_100c59f48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c59f58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c59f68(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_10124f6d0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c59fac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ae0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c59ff0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a02c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5a068(int param_1,undefined8 *param_2)

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




void FUN_100c5a094(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c5a128:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 2.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5a128;
          fVar4 = *(float *)(&DAT_1012c3a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c3a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5a148(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5a158(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c5a168(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a174(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5a184(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a190(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5a1a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a1ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5a1bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a1c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_100c5a1d8(ulong param_1,float *param_2)

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




undefined8 FUN_100c5a230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_100c5a244(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a288(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a2c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a300(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5a33c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 0.5;
      if (1.0 <= fVar6) {
        fVar4 = 1.0;
      }
      else {
        fVar5 = 0.1;
        fVar4 = 0.1;
        if (0.0 < fVar6) {
          fVar5 = fVar6 * 64.0;
          uVar3 = (uint)(fVar6 * 64.0);
          uVar1 = uVar3 + 1;
          fVar4 = 1.0;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_1012d2780 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_1012d2780 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012d2780 + (ulong)uVar3 * 4));
            fVar5 = *(float *)(&DAT_1012c6d80 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_1012c6d80 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012c6d80 + (ulong)uVar3 * 4));
          }
          else {
            fVar5 = 0.5;
          }
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (fVar5 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d2980 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d2980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2980 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c5a49c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5a4ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5a4bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x447a0000;
  return 1;
}




undefined8 FUN_100c5a4cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5a4dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a4e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5a4f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a504(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5a514(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5a524(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c5a534(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c5a544(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_100c5a558(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a594(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a5d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a60c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5a648(int param_1,undefined8 *param_2)

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




void FUN_100c5a674(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c5a724(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5a734(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5a744(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a750(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5a768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a774(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c5a784(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5a790(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5a7a0(ulong param_1,float *param_2)

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




undefined8 FUN_100c5a804(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e99999a3e99999a;
  return 1;
}




ulong FUN_100c5a81c(ulong param_1,float *param_2)

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




ulong FUN_100c5a874(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.6566133e-11 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5a8dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b27e0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5a920(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5a95c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.2;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c6580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c6580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c6580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012cfc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cfc80 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c5aa84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c5aa94(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 5.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c5ab40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c5ab50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5ab60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c5ab70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41100000;
  return 1;
}




undefined8 FUN_100c5ab80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ab8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5ab9c(ulong param_1,float *param_2)

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




undefined8 FUN_100c5ac00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c5ac0c(ulong param_1,float *param_2)

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




ulong FUN_100c5ac64(ulong param_1,float *param_2)

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




ulong FUN_100c5acc8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101228ad0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ad0c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5ad48(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c3b80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c3b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3b80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5adf8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5ae08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c5ae18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ae24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5ae34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ae40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5ae50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ae5c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5ae6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ae78(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c5ae88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ae94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c5aea8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011813d0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5aeec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5af28(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar1 = param_5 + (ulong)*param_4 * 4;
      *(float *)((long)param_3 + 0xc) =
           (param_1 - *(float *)(lVar1 + 0x48000)) / *(float *)(lVar1 + 0x50000);
      param_3 = param_3 + 2;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c5af78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5af88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5af94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5afa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5afb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5afbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c5afcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c5afdc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5afec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5affc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003f800000;
  return 1;
}




ulong FUN_100c5b010(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-09 + -10.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5b074(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.3132266e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5b0dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b27f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b120(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5b164(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c5b1f8:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.5;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5b1f8;
          fVar5 = *(float *)(&DAT_1012c3c80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c3c80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3c80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c5b218(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5b228(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b234(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b240(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5b250(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b25c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5b26c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b278(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5b288(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c5b29c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x413000003f800000;
  return 1;
}




undefined8 FUN_100c5b2b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc30c0000;
  return 1;
}




undefined8 FUN_100c5b2c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c5b2d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181970,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b314(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b350(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b38c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5b3c8(int param_1,undefined8 *param_2)

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




undefined8 FUN_100c5b3f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5b404(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b410(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5b420(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c5b434(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x413000003f800000;
  return 1;
}




undefined8 FUN_100c5b448(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x430c0000;
  return 1;
}




undefined8 FUN_100c5b458(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c5b468(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181970,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b4ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b4e8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b524(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5b560(int param_1,undefined8 *param_2)

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




void FUN_100c5b58c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (0.1 <= fVar4) {
LAB_100c5b62c:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          fVar4 = fVar4 * 640.0;
          uVar1 = (int)fVar4 + 1;
          if (0x3f < uVar1) goto LAB_100c5b62c;
          fVar3 = *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012d1b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c5b6a0:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5b6a0;
          fVar3 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5b6c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5b6d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b6dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b6e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5b6f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b704(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_100c5b710(float param_1,int param_2,float *param_3)

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
      *param_3 = fVar5 * 50.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c5b7b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5b7c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b7cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c5b7dc(ulong param_1,float *param_2)

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




undefined8 FUN_100c5b834(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c5b844(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181410,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5b888(float param_1,int param_2,float *param_3)

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
      *param_3 = fVar5 * 12.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




ulong FUN_100c5b924(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5b960(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5b99c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0xbf80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_100c5b9c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5b9d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5b9e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5b9f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ba00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c5ba10(ulong param_1,float *param_2)

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




undefined8 FUN_100c5ba68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c5ba78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181410,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5babc(float param_1,int param_2,float *param_3)

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
      *param_3 = fVar5 * 12.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




ulong FUN_100c5bb58(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5bb94(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5bbd0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0xbf80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c5bbfc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (0.1 <= fVar4) {
LAB_100c5bc9c:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          fVar4 = fVar4 * 640.0;
          uVar1 = (int)fVar4 + 1;
          if (0x3f < uVar1) goto LAB_100c5bc9c;
          fVar3 = *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012d1b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c5bd10:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5bd10;
          fVar3 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5bd30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5bd40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5bd4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5bd58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5bd68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5bd74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5bd84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5bd90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5bda0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5bdac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c5bdbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2b40000;
  return 1;
}




undefined8 FUN_100c5bdcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c5bddc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5be18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5be54(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5be90(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5becc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0xbf80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c5bef8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 0.0;
      if ((fVar4 < 0.8) && (fVar3 = 1.0, 0.4 < fVar4)) {
        fVar5 = fVar4 * 160.0 + -64.0;
        uVar1 = (int)fVar5 + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      if (1.0 <= fVar4) {
LAB_100c5c014:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5c014;
          fVar5 = *(float *)(&DAT_1012c3d80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c3d80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3d80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_100c5c084:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.6 < fVar3) {
          fVar3 = fVar3 * 160.00002 + -96.000015;
          uVar1 = (int)fVar3 + 1;
          if (0x3f < uVar1) goto LAB_100c5c084;
          fVar4 = *(float *)(&DAT_1012d4c80 + (ulong)(uint)(int)fVar3 * 4) +
                  (fVar3 - (float)(int)fVar3) *
                  (*(float *)(&DAT_1012d4c80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4c80 + (ulong)(uint)(int)fVar3 * 4));
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




undefined8 FUN_100c5c0a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5c0b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c5c0c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5c0d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5c0e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c5c0f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c5c100(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5c10c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5c11c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c5c12c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c5c13c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c5c148(ulong param_1,float *param_2)

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




ulong FUN_100c5c1b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181970,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5c1f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5c230(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5c26c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5c2a8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (0.1 <= fVar4) {
LAB_100c5c348:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          fVar4 = fVar4 * 640.0;
          uVar1 = (int)fVar4 + 1;
          if (0x3f < uVar1) goto LAB_100c5c348;
          fVar3 = *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012d1b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c5c3bc:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5c3bc;
          fVar3 = *(float *)(&DAT_1012c3e80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c3e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3e80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5c3dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c5c3ec(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 2.6;
      if ((fVar4 < 1.0) && (fVar5 = 48.3, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 2.6;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c3f80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c3f80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3f80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5c498(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5c4a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5c4b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5c4c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5c4d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5c4dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5c4ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c5c500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_100c5c518(ulong param_1,float *param_2)

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




undefined8 FUN_100c5c570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c5c580(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5c5bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5c5f8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (0.1 <= fVar4) {
LAB_100c5c698:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          fVar4 = fVar4 * 640.0;
          uVar1 = (int)fVar4 + 1;
          if (0x3f < uVar1) goto LAB_100c5c698;
          fVar3 = *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012d1b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d1b80 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c5c70c:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5c70c;
          fVar3 = *(float *)(&DAT_1012c3e80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c3e80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3e80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5c72c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c5c73c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 2.6;
      if ((fVar4 < 1.0) && (fVar5 = 48.3, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 2.6;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c3f80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c3f80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c3f80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5c7e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5c7f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5c804(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_100c5c810(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
    uVar2 = (ulong)param_2;
    do {
      fVar9 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      fVar5 = 1.0;
      fVar6 = 1.0;
      fVar8 = 0.0;
      if (fVar9 < 1.0) {
        fVar5 = 0.0;
        fVar6 = 0.0;
        fVar8 = 0.2;
        if (0.0 < fVar9) {
          fVar7 = fVar9 * 64.0;
          uVar3 = (uint)(fVar9 * 64.0);
          uVar1 = uVar3 + 1;
          fVar5 = 1.0;
          fVar6 = 1.0;
          if (uVar1 < 0x40) {
            fVar6 = *(float *)(&DAT_1012d5880 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012d5880 + (ulong)uVar3 * 4));
            fVar5 = *(float *)(&DAT_1012c4080 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1012c4080 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012c4080 + (ulong)uVar3 * 4));
          }
          fVar8 = 0.0;
          if (uVar1 < 0x40) {
            fVar8 = *(float *)(&DAT_1012c4180 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1012c4180 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012c4180 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_3[2] = fVar8;
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar6 < 1.0) && (0.013333 < fVar6)) {
        fVar6 = fVar6 * 64.864845 + -0.864843;
        uVar1 = (int)fVar6 + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c4280 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012c4280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4280 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_100c5c9ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5c9bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5c9cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5c9dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5c9ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5c9fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c5ca0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ca18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5ca28(ulong param_1,float *param_2)

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




undefined8 FUN_100c5ca8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c5ca9c(ulong param_1,float *param_2)

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




ulong FUN_100c5caf4(ulong param_1,float *param_2)

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




ulong FUN_100c5cb5c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5cba0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5cbe4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5cc20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5cc5c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.6;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.6;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c4380 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c4380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4380 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      fVar5 = 1.0;
      if ((fVar3 < 0.5) && (fVar5 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 128.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 128.0) * 4) +
                  (fVar3 * 128.0 - (float)(int)(fVar3 * 128.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar3 * 128.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c5cdc4:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5cdc4;
          fVar3 = *(float *)(&DAT_1012c4480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c4480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4480 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5cde4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5cdf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c5ce04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ce10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5ce20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c5ce30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c5ce40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ce4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5ce5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5ce6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a000003f800000;
  return 1;
}




ulong FUN_100c5ce80(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-08 + -30.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5cee4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 7.916242e-10 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5cf4c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5cf90(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5cfd4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d010(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5d054(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0xbf80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c5d080(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c5d114:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5d114;
          fVar5 = *(float *)(&DAT_1012c4580 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012c4580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4580 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c5d134(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5d144(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_100c5d154(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5d160(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5d170(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c5d180(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c5d190(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5d19c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5d1ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5d1bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4248000040c00000;
  return 1;
}




undefined8 FUN_100c5d1d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5d1dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c5d1f0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d234(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d278(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d2b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5d2f8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0xbf80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




ulong FUN_100c5d324(float param_1,ulong param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar5 = param_2 & 0xffffffff;
    do {
      iVar3 = _rand();
      iVar4 = _rand();
      uVar7 = NEON_scvtf(CONCAT44(iVar4,iVar3),4);
      iVar3 = _rand();
      *param_3 = CONCAT44((float)((ulong)uVar7 >> 0x20) * 4.656613e-10,(float)uVar7 * 4.656613e-10);
      *(float *)(param_3 + 1) = (float)iVar3 * 4.656613e-10;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar8 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar8) {
LAB_100c5d434:
        fVar6 = -0.0;
      }
      else {
        fVar6 = 1.0;
        if (0.6 < fVar8) {
          fVar8 = fVar8 * 160.00002 + -96.000015;
          uVar1 = (int)fVar8 + 1;
          if (0x3f < uVar1) goto LAB_100c5d434;
          fVar6 = *(float *)(&DAT_1012d4c80 + (ulong)(uint)(int)fVar8 * 4) +
                  (fVar8 - (float)(int)fVar8) *
                  (*(float *)(&DAT_1012d4c80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4c80 + (ulong)(uint)(int)fVar8 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_100c5d480(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5d490(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




void FUN_100c5d4a4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
LAB_100c5d52c:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5d52c;
          fVar4 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar4 * 1000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c5d550(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5d560(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c5d570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42340000;
  return 1;
}




undefined8 FUN_100c5d580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5d58c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5d59c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.0954758e-08 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5d600(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e0000003e800000;
  return 1;
}




ulong FUN_100c5d614(ulong param_1,float *param_2)

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




ulong FUN_100c5d66c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.25;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5d6d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101228a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d714(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d758(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d79c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5d7d8(float param_1,ulong param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  
  if (0 < (int)param_2) {
    uVar5 = param_2 & 0xffffffff;
    uVar9 = NEON_fmov(0x3f400000,4);
    do {
      iVar3 = _rand();
      iVar4 = _rand();
      uVar7 = NEON_scvtf(CONCAT44(iVar4,iVar3),4);
      iVar3 = _rand();
      *param_3 = CONCAT44((float)((ulong)uVar9 >> 0x20) +
                          (float)((ulong)uVar7 >> 0x20) * 1.1641532e-10,
                          (float)uVar9 + (float)uVar7 * 1.1641532e-10);
      *(float *)(param_3 + 1) = (float)iVar3 * 1.1641532e-10 + 0.75;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar8 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar8) {
LAB_100c5d900:
        fVar6 = -0.0;
      }
      else {
        fVar6 = 1.0;
        if (0.6 < fVar8) {
          fVar8 = fVar8 * 160.00002 + -96.000015;
          uVar1 = (int)fVar8 + 1;
          if (0x3f < uVar1) goto LAB_100c5d900;
          fVar6 = *(float *)(&DAT_1012d4c80 + (ulong)(uint)(int)fVar8 * 4) +
                  (fVar8 - (float)(int)fVar8) *
                  (*(float *)(&DAT_1012d4c80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4c80 + (ulong)(uint)(int)fVar8 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return param_2;
}




undefined8 FUN_100c5d950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5d960(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_100c5d974(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43fa0000;
  return 1;
}




undefined8 FUN_100c5d984(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5d994(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c5d9a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c5d9b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5d9c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5d9d0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.0954758e-08 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5da34(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 2.3283064e-10 + 0.5,
                          (float)uVar5 * 2.3283064e-10 + 0.5);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5daa8(ulong param_1,float *param_2)

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




ulong FUN_100c5db00(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.25;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5db64(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101228a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5dba8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5dbec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5dc30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5dc6c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c5dd1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5dd2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_100c5dd3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c5dd4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5dd5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5dd68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5dd78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5dd84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5dd94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5dda4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c5ddb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ddc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c5ddd4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5de18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c5de54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5de64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5de70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5de80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5de90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000040a00000;
  return 1;
}




ulong FUN_100c5dea4(ulong param_1,float *param_2)

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




undefined8 FUN_100c5defc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c5df10(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5df54(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c5df90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5dfa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5dfac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5dfbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5dfcc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000040a00000;
  return 1;
}




ulong FUN_100c5dfe0(ulong param_1,float *param_2)

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




undefined8 FUN_100c5e038(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c5e04c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5e090(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5e0cc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012ce480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ce480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5e17c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5e18c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_100c5e19c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




ulong FUN_100c5e1ac(ulong param_1,float *param_2)

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
      *param_2 = (float)iVar2 * 2.3283064e-08 + -25.0;
      param_2[1] = 0.0;
      param_2[2] = (float)iVar3 * 2.3283064e-08 + -25.0;
      param_2 = param_2 + 3;
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5e230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c5e240(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5e2a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e2b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5e2c0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5e324(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 1.6298145e-10 + 0.15,
                          (float)uVar5 * 1.6298145e-10 + 0.15);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5e3a8(ulong param_1,float *param_2)

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




ulong FUN_100c5e400(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 5.5879357e-10 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5e468(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181810,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5e4ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5e4f0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c4680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c4680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5e5a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5e5b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e5bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e5c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5e5d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c5e5e4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5e648(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e654(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5e664(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5e6c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003e19999a;
  return 1;
}




undefined8 FUN_100c5e6dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c5e6e8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.3132266e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5e750(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181610,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5e794(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ae0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5e7d8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 0.5, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012c4780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c4780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5e888(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5e898(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c5e8a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e8b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5e8c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e8d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5e8e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e8ec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5e8fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5e908(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4220000040a00000;
  return 1;
}




ulong FUN_100c5e91c(ulong param_1,float *param_2)

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




ulong FUN_100c5e974(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.7252904e-10 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5e9dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ea18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5ea54(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.2;
      if ((fVar3 < 1.0) && (fVar4 = -0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c6580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012c6580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c6580 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1012cf780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012cf780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cf780 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c5eb7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5eb8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c5eb9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c5ebac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5ebc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c5ebd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c5ebe4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5ebf0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5ec00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c5ec10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c5ec20(ulong param_1,float *param_2)

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




ulong FUN_100c5ec78(ulong param_1,float *param_2)

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




ulong FUN_100c5ecdc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ed20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ed5c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ed98(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5edd4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012c4880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c4880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5ee84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5ee94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c5eea4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c5eeb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5eec4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5eed0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5eee0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5eeec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5eefc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5ef0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41700000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c5ef1c(ulong param_1,float *param_2)

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




undefined8 FUN_100c5ef74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c5ef88(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5efcc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5f008(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5f044(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5f080(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c5f130(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f140(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c5f150(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f15c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f16c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f178(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5f188(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f194(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5f1a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5f1b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c5f1c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f1d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c5f1e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5f21c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5f258(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.2;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.2;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d2380 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d2380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2380 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 1.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 1.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5f380(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f390(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c5f3a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f3ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0e0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f3c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f3d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c5f3e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f3ec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5f3fc(ulong param_1,float *param_2)

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




undefined8 FUN_100c5f460(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3f333333;
  return 1;
}




undefined8 FUN_100c5f474(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




ulong FUN_100c5f484(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.6566126e-11 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c5f4ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2800,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5f530(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5f574(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar4 = 1.0, 0.7 < fVar5)) {
        fVar5 = fVar5 * 213.33333 + -149.33333;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012c7380 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012c7380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c7380 + (ulong)(uint)(int)fVar5 * 4));
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




undefined8 FUN_100c5f634(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f644(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_100c5f658(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f664(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc110000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f67c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c5f688(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.1909516e-09 + 6.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5f6ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f6f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5f708(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5f76c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f19999a3e19999a;
  return 1;
}




undefined8 FUN_100c5f780(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c5f78c(ulong param_1,float *param_2)

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




ulong FUN_100c5f7f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2810,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5f838(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5f874(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c5f924(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f934(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1a00000;
  return 1;
}




undefined8 FUN_100c5f944(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5f960(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f96c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5f97c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f988(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5f998(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c5f9ac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c5f9bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5f9c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c5f9dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5fa18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5fa54(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar5 = 0.9;
      if ((fVar4 < 1.0) && (fVar5 = 0.1, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.9;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012c4980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012c4980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c5fb14(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5fb24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c5fb34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5fb40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5fb50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c5fb5c(ulong param_1,float *param_2)

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




undefined8 FUN_100c5fbc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5fbcc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c5fbdc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 8.8475643e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c5fc44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003e4ccccd;
  return 1;
}




ulong FUN_100c5fc58(ulong param_1,float *param_2)

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




undefined8 FUN_100c5fcb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_100c5fcc4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5fd00(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5fd44(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if (1.0 <= fVar5) {
LAB_100c5fde0:
        fVar6 = -0.0;
      }
      else {
        fVar6 = 0.4;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c5fde0;
          fVar6 = *(float *)(&DAT_1012c4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012c4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012c4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c5fe00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5fe10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5fe1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5fe28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c5fe38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5fe44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c5fe54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c5fe60(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c5fe70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c5fe84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x413000003dcccccd;
  return 1;
}




undefined8 FUN_100c5fe98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42e10000;
  return 1;
}




ulong FUN_100c5fea8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5feec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ff28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ff64(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c5ffa0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c5ffdc(int param_1,undefined8 *param_2)

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

