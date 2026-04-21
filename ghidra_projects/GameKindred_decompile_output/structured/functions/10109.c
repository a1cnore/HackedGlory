// functions/10109 — 1211 functions
#include "GameKindred.h"




void thunk_FUN_10109c6c4(void)

{
  FUN_10109c6c4();
  return;
}




undefined8 FUN_101090008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090014(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101090024(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_101090040(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_101090050(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_101090064(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010900a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181390,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010900e4(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar4;
      param_4 = param_4 + 1;
      *(undefined8 *)(param_3 + 2) = 0x3f80000000000000;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_101090190(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_1010901a0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 1.2, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.2;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139e790 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10139e790 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139e790 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 8.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




void FUN_101090254(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 2.8, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.2;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139e890 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10139e890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139e890 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * -400.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10109030c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109031c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090328(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101090338(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_101090348(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101090358(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101090368(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3c23d70a3c23d70a;
  return 1;
}




ulong FUN_101090380(float param_1,ulong param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (0 < (int)param_2) {
    uVar3 = param_2;
    do {
      iVar2 = _rand();
      *param_3 = (param_1 * 20.0 - (float)(int)(param_1 * 20.0)) * 360.0 +
                 (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
      param_3 = param_3 + 1;
    } while (uVar1 != 0);
  }
  return param_2;
}




undefined8 FUN_1010903fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




ulong FUN_10109040c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090448(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090484(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010904c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010904fc(int param_1,undefined8 *param_2)

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




void FUN_101090528(uint param_1,undefined8 *param_2,ushort *param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    do {
      *param_2 = 0x3f800000;
      *(undefined4 *)(param_2 + 1) = 0;
      fVar3 = *(float *)(param_4 + (ulong)*param_3 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_10139e990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_10139e990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139e990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *(float *)((long)param_2 + 0xc) = fVar4;
      param_3 = param_3 + 1;
      param_2 = param_2 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_1010905c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010905d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_1010905e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010905f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101090604(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090610(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101090620(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101090630(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101090640(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109064c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41100000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_10109065c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090668(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_101090678(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010906b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010906f0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109072c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101090768(int param_1,undefined8 *param_2)

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




undefined8 FUN_101090794(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_1010907a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_1010907b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_1010907c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010907d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41100000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_1010907e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010907ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_1010907fc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090838(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090874(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010908b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010908ec(int param_1,undefined8 *param_2)

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




void FUN_101090918(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 1.2, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_10139ea90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10139ea90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ea90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_101090a40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101090a50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101090a60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090a6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101090a7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090a88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101090a98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090aa4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101090ab4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090ac0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000040e00000;
  return 1;
}




undefined8 FUN_101090ad4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090ae0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_101090af4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090b30(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181640,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090b74(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090bb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101090bec(int param_1,undefined8 *param_2)

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




void FUN_101090c18(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 0.9;
      if ((fVar4 < 1.0) && (fVar5 = 0.4, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.9;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139eb90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10139eb90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139eb90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = param_1 * 1.5 - (float)(int)(param_1 * 1.5);
      param_3[1] = fVar5;
      param_4 = param_4 + 1;
      param_3[2] = 0.0;
      param_3[3] = 0.5;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_101090ce4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101090cf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101090d04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090d10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc120000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101090d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101090d38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090d44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_101090d54(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101090d64(ulong param_1,float *param_2)

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




ulong FUN_101090dc8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,"",(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_101090e0c(ulong param_1,float *param_2)

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




ulong FUN_101090e64(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.6566126e-11 + 0.25;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101090ec8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181880,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101090f0c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_101090f50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101090f5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_101090f6c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101090f7c(ulong param_1,float *param_2)

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




ulong FUN_101090fe0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,"",(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_101091024(ulong param_1,float *param_2)

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




ulong FUN_10109107c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.6566126e-11 + 0.25;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_1010910e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181880,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101091124(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101091168(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 0.3) && (fVar4 = 0.0, 0.0 < fVar3)) {
        fVar5 = fVar3 * 213.33333;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a1a90 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a1a90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1a90 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      fVar5 = 0.7;
      if ((fVar3 < 1.0) && (fVar5 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar5 = 0.7;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139ec90 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_10139ec90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ec90 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_1010912f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091300(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101091310(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109131c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109132c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_10109133c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109134c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101091358(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101091368(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + 4.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_1010913cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003dcccccd;
  return 1;
}




undefined8 FUN_1010913e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_1010913ec(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626453e-10 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101091454(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a20,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101091498(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181320,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010914dc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 0.3) && (fVar4 = 0.0, 0.0 < fVar3)) {
        fVar5 = fVar3 * 213.33333;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a1a90 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a1a90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1a90 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      fVar5 = 0.7;
      if ((fVar3 < 1.0) && (fVar5 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar5 = 0.7;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139ec90 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_10139ec90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ec90 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_101091664(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091674(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101091684(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101091690(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010916a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_1010916b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_1010916c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010916cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_1010916dc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-09;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101091734(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_101091744(ulong param_1,float *param_2)

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




ulong FUN_10109179c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626453e-10 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101091804(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181490,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101091848(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101091884(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101091934(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091944(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101091954(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101091960(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_101091980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_101091990(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109199c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_1010919ac(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101091a10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




ulong FUN_101091a24(ulong param_1,float *param_2)

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




ulong FUN_101091a7c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.259629e-11 + 0.03;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101091ae4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101228c10,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101091b28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_101091b64(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101091b74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091b84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_101091b94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_101091ba4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc110000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091bbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_101091bcc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 5.5879354e-09 + 7.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101091c30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101091c3c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101091c4c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849193e-09;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101091ca4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_101091cbc(ulong param_1,float *param_2)

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




ulong FUN_101091d14(ulong param_1,float *param_2)

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




ulong FUN_101091d7c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101209980,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101091dc0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101091dfc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_10139ed90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10139ed90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ed90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101091eac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091ebc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_101091ecc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc4098000;
  return 1;
}




undefined8 FUN_101091ee0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101091ef0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101091efc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101091f0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101091f18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101091f28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101091f38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_101091f48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101091f54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_101091f68(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101091fac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101091fe8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_10139ee90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10139ee90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ee90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101092098(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010920a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_1010920b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010920c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010920d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010920e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_1010920f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010920fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109210c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109211c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41100000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_10109212c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101092138(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_10109214c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101092190(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010921cc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_10139ee90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10139ee90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ee90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_10109227c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109228c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0800000;
  return 1;
}




undefined8 FUN_10109229c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010922a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010922b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010922c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_1010922d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010922e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_1010922f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010922fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4080000040000000;
  return 1;
}




ulong FUN_101092310(ulong param_1,float *param_2)

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




undefined8 FUN_101092368(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_10109237c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010923c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101092404(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101092440(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109247c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.5, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139ef90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10139ef90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ef90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.2 < fVar4)) {
        fVar4 = fVar4 * 80.0 + -16.0;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)fVar4 * 4));
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




undefined8 FUN_1010925ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_1010925bc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_10139f090 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10139f090 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f090 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




void FUN_101092660(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_10139f090 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10139f090 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f090 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_101092708(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101092718(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101092728(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_101092738(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101092744(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101092754(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_101092768(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_101092778(ulong param_1,float *param_2)

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




ulong FUN_1010927d0(ulong param_1,float *param_2)

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




ulong FUN_101092838(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109287c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010928b8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010928f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101092938(int param_1,undefined8 *param_2)

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




void FUN_101092964(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_101092a20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101092a30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_101092a40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101092a4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101092a5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101092a6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101092a7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101092a88(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101092a98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_101092aac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_101092abc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101092ac8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_101092adc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101092b20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101092b5c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101092b98(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101092bdc(int param_1,undefined8 *param_2)

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




void FUN_101092c08(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139f190 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_10139f190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f190 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_101092cac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_101092cbc(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_10139f290 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10139f290 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f290 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




ulong FUN_101092dd0(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

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
      iVar3 = _rand();
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139f390 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_10139f390 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f390 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * ((float)iVar3 * 2.7939677e-07 + -300.0);
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_101092ed8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101092ee8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101092ef8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101092f08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101092f18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101092f28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_101092f3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3dcccccd3dcccccd;
  return 1;
}




ulong FUN_101092f54(ulong param_1,float *param_2)

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




ulong FUN_101092fac(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101093010(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101093054(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a50,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101093098(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011817b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010930dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101093120(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_10139f490 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_10139f490 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f490 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_1010931c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010931d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010931e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010931f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101093200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109320c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109321c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093228(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101093238(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093244(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_101093254(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_101093274(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181960,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010932b8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010932f4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_10139f590 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10139f590 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f590 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_1010933a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010933b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_1010933c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_1010933d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010933e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




ulong FUN_1010933f0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 15.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101093454(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093460(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101093470(ulong param_1,float *param_2)

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




undefined8 FUN_1010934d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_1010934e4(ulong param_1,float *param_2)

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




ulong FUN_10109353c(ulong param_1,float *param_2)

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




ulong FUN_1010935a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101228b70,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010935e4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101093620(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_10139f690 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_10139f690 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f690 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_1010936c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010936d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




undefined8 FUN_1010936e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010936f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101093704(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093710(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101093720(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109372c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109373c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093748(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_101093758(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093764(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_101093778(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181960,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010937bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010937f8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_10139f790 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_10139f790 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f790 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_101093920:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.1 < fVar4) {
          fVar4 = fVar4 * 71.111115 + -7.1111116;
          uVar1 = (int)fVar4 + 1;
          if (0x3f < uVar1) goto LAB_101093920;
          fVar3 = *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1013a0190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)fVar4 * 4));
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




undefined8 FUN_101093940(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_101093950(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1013a0b90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a0b90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0b90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_1010939fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093a08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101093a20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




ulong FUN_101093a30(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 7.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101093a94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093aa0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101093ab0(ulong param_1,float *param_2)

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




undefined8 FUN_101093b14(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_101093b2c(ulong param_1,float *param_2)

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




ulong FUN_101093b84(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101093be8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101093c2c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101093c68(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1013a1790 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1790 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1790 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_101093d88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101093d98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101093da8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093db4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101093dc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093dd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_101093de0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101093dec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101093dfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_101093e10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_101093e20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_101093e30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d8f5c29;
  return 1;
}




ulong FUN_101093e44(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101093e88(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181320,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101093ecc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.0;
      fVar6 = 0.1;
      if ((fVar7 < 1.0) && (fVar4 = -0.3, fVar6 = 1.0, 0.0 < fVar7)) {
        fVar5 = fVar7 * 64.0;
        uVar3 = (uint)(fVar7 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 1.0;
        fVar6 = 0.1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_10139f890 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_10139f890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f890 + (ulong)uVar3 * 4));
          fVar6 = *(float *)(&DAT_1013a0b90 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a0b90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0b90 + (ulong)uVar3 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_3[2] = 0.0;
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar6 < 1.0) && (fVar4 = 0.0, 0.0 < fVar6)) {
        uVar1 = (int)(fVar6 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_10139f990 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_10139f990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139f990 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_10109402c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109403c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109404c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094058(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094074(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101094084(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094090(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_1010940a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_1010940b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_1010940c4(ulong param_1,float *param_2)

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




undefined8 FUN_10109411c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_101094130(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109416c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010941a8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.15) && (fVar3 = 1.0, 0.0 < fVar4)) {
        fVar5 = fVar4 * 426.66666;
        uVar1 = (int)fVar5 + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_10139fa90 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_10139fa90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139fa90 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      fVar5 = 0.4;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.2 < fVar4)) {
        fVar4 = fVar4 * 80.0 + -16.0;
        uVar1 = (int)fVar4 + 1;
        fVar5 = 0.4;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139fb90 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_10139fb90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139fb90 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = fVar5;
      param_3[2] = param_1;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_101094324:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101094324;
          fVar4 = *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a0190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_101094344(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094354(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_101094364(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094380(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101094390(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_1010943a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010943ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_1010943bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_1010943cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_1010943dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010943e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_1010943f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094434(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101094470(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_101094504:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101094504;
          fVar5 = *(float *)(&DAT_1013a1090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a1090 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_101094524(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094534(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_101094544(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094550(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094560(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109456c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109457c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094588(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101094598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010945a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41300000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_1010945b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010945c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_1010945d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094610(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109464c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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
          fVar4 = *(float *)(&DAT_1013a0390 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a0390 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0390 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_10109476c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109477c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_10109478c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094798(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc110000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010947b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_1010947c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_1010947d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010947dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_1010947ec(ulong param_1,float *param_2)

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




undefined8 FUN_101094850(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_101094860(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_101094870(ulong param_1,float *param_2)

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




ulong FUN_1010948d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109491c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101094960(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar6 < 1.0) && (fVar5 = -0.013333, 0.013333 < fVar6)) {
        fVar6 = fVar6 * 64.864845 + -0.864843;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10139fc90 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_10139fc90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139fc90 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_101094a28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094a38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_101094a48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_101094a58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094a70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_101094a80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_101094a90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094a9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101094aac(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.1909516e-09 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101094b10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_101094b20(ulong param_1,float *param_2)

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




ulong FUN_101094b78(ulong param_1,float *param_2)

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




ulong FUN_101094be0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181970,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094c24(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094c68(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011819f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094cac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101094ce8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 0.4, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_10139fd90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10139fd90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139fd90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101094da0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094db0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101094dc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094dcc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101094de4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_101094df4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101094e04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094e10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101094e20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094e2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000041700000;
  return 1;
}




undefined8 FUN_101094e40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101094e4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_101094e60(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094e9c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094ed8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101094f14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101094f50(int param_1,undefined8 *param_2)

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




void FUN_101094f7c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_101095080:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101095080;
          fVar4 = *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a0190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_1010950a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010950b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_1010950c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010950cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010950dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_1010950ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_1010950fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095108(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101095118(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_101095128(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x411000003f800000;
  return 1;
}




undefined8 FUN_10109513c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_10109514c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_10109515c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101095198(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010951d4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_101095278:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.1 < fVar6) {
          fVar6 = fVar6 * 71.111115 + -7.1111116;
          uVar1 = (int)fVar6 + 1;
          if (0x3f < uVar1) goto LAB_101095278;
          fVar5 = *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1013a0190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_101095298(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010952a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_1010952b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010952c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010952d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_1010952e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_1010952f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095300(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101095310(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101095320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x412000003f800000;
  return 1;
}




undefined8 FUN_101095334(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_101095344(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_101095358(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101095394(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010953d8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_10109546c:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10109546c;
          fVar5 = *(float *)(&DAT_1013a0090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a0090 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_10109548c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109549c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_1010954ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010954b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010954c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_1010954d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_1010954e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010954f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101095504(ulong param_1,float *param_2)

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




undefined8 FUN_101095568(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003e4ccccd;
  return 1;
}




undefined8 FUN_10109557c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_101095588(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-11 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_1010955f0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101095634(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101095678(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010956b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010956f8(int param_1,undefined8 *param_2)

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




void FUN_101095724(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_1010957c8:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.9 < fVar6) {
          fVar6 = fVar6 * 639.9999 + -575.9999;
          uVar1 = (int)fVar6 + 1;
          if (0x3f < uVar1) goto LAB_1010957c8;
          fVar5 = *(float *)(&DAT_10139fe90 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_10139fe90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139fe90 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_1010957e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_1010957f8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.3 < fVar5)) {
        fVar5 = fVar5 * 91.42857 + -27.428574;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_10139ff90 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_10139ff90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10139ff90 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4 * -2.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_1010958a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010958b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010958c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_1010958d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_1010958e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010958f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101095904(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101095914(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x415000003f800000;
  return 1;
}




undefined8 FUN_101095928(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095934(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_101095944(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101095980(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010959c4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_101095a58:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101095a58;
          fVar5 = *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a0190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_101095a78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101095a88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101095a98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095aa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101095ab4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101095ac4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101095ad4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095ae0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101095af0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101095b00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4150000040a00000;
  return 1;
}




undefined8 FUN_101095b14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095b20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_101095b34(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101095b70(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101095bb4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_101095c48:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101095c48;
          fVar5 = *(float *)(&DAT_1013a0090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a0090 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_101095c68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101095c78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_101095c88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095c94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101095ca4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101095cb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101095cc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095cd0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101095ce0(ulong param_1,float *param_2)

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




undefined8 FUN_101095d44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003e99999a;
  return 1;
}




undefined8 FUN_101095d58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_101095d64(ulong param_1,float *param_2)

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




ulong FUN_101095dcc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101095e10(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101095e4c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_101095ee0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101095ee0;
          fVar5 = *(float *)(&DAT_1013a0090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a0090 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_101095f00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101095f10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_101095f20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095f2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101095f3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101095f4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101095f5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101095f68(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101095f78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_101095f8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_101095f9c(ulong param_1,float *param_2)

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




ulong FUN_101095ff4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 8.847565e-11 + 0.11;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10109605c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010960a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010960dc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a1990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_1010961e0:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_1010961e0;
          fVar4 = *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a0190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0190 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_101096200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101096210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101096220(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109622c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109623c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_10109624c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_10109625c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101096268(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101096278(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101096288(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x411000003f800000;
  return 1;
}




undefined8 FUN_10109629c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_1010962ac(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101096314(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101096350(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109638c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = -0.013333, 0.013333 < fVar3)) {
        fVar5 = fVar3 * 64.864845 + -0.864843;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a0290 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a0290 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0290 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1013a0390 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a0390 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0390 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_1010964c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_1010964d8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.8 < fVar5)) {
        fVar5 = fVar5 * 320.00003 + -256.00003;
        uVar1 = (int)fVar5 + 1;
        fVar4 = -1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a0490 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a0490 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0490 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_101096584(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_101096594(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010965ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_1010965bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41000000;
  return 1;
}




undefined8 FUN_1010965cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010965d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_1010965e8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * -8.8475645e-09 + -1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10109664c(ulong param_1,undefined8 *param_2)

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
                          (float)((ulong)uVar5 >> 0x20) * 4.656613e-10,
                          (float)uVar6 + (float)uVar5 * 4.656613e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_1010966c0(ulong param_1,float *param_2)

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




ulong FUN_101096718(ulong param_1,float *param_2)

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




ulong FUN_10109677c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ad0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010967c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101096804(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101096848(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101096884(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = -0.013333, 0.013333 < fVar3)) {
        fVar5 = fVar3 * 64.864845 + -0.864843;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a0290 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a0290 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0290 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1013a0390 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a0390 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0390 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_1010969c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_1010969d0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = -1.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.8 < fVar5)) {
        fVar5 = fVar5 * 320.00003 + -256.00003;
        uVar1 = (int)fVar5 + 1;
        fVar4 = -1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1013a0490 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a0490 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0490 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_101096a7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_101096a8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101096aa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_101096ab4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41000000;
  return 1;
}




undefined8 FUN_101096ac4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101096ad0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101096ae0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * -8.8475645e-09 + -1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101096b44(ulong param_1,undefined8 *param_2)

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
                          (float)((ulong)uVar5 >> 0x20) * 4.656613e-10,
                          (float)uVar6 + (float)uVar5 * 4.656613e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101096bb8(ulong param_1,float *param_2)

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




ulong FUN_101096c10(ulong param_1,float *param_2)

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




ulong FUN_101096c74(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ad0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101096cb8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101096cfc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101096d40(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101096d7c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      fVar5 = 0.0;
      if ((fVar4 < 0.8) && (fVar5 = 2.0, 0.0 < fVar4)) {
        fVar6 = fVar4 * 80.0;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1013a0590 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1013a0590 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0590 + (ulong)(uint)(int)fVar6 * 4));
        }
      }
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1013a0690 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a0690 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0690 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar3;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar3) {
LAB_101096ee0:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 0.4;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101096ee0;
          fVar4 = *(float *)(&DAT_1013a0790 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a0790 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0790 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_101096f00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101096f10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101096f1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101096f28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101096f38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101096f44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101096f54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101096f60(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101096f70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101096f7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_101096f8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2b40000;
  return 1;
}




undefined8 FUN_101096f9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_101096fac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101096fe8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101097024(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1013a0890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1013a0890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0890 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_101097130:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101097130;
          fVar3 = *(float *)(&DAT_1013a0990 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a0990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0990 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_101097150(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101097160(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101097170(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109717c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101097194(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_1010971a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_1010971b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010971c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_1010971d0(ulong param_1,float *param_2)

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




undefined8 FUN_101097234(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_101097244(ulong param_1,float *param_2)

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




ulong FUN_10109729c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_101097304(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101097348(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109738c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010973d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109740c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a1990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_4 = param_4 + 1;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_3[3] = 1.0;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_1010974b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010974c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_1010974d0(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 0.8) && (fVar6 = 1.0, 0.7 < fVar5)) {
        fVar5 = fVar5 * 639.9999 + -447.9999;
        uVar1 = (int)fVar5 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1013a0a90 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1013a0a90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0a90 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      iVar3 = _rand();
      *param_3 = ((float)iVar3 * 4.656613e-08 + 400.0) * fVar6;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_101097604(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101097614(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097620(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101097630(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109763c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109764c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097658(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_101097668(ulong param_1,float *param_2)

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




undefined8 FUN_1010976c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f4ccccd;
  return 1;
}




ulong FUN_1010976d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101097718(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101097754(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101097804(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101097814(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_101097824(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x44160000;
  return 1;
}




undefined8 FUN_101097834(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101097844(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097850(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101097860(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109786c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109787c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097888(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40d9999a40d9999a;
  return 1;
}




ulong FUN_1010978a0(ulong param_1,float *param_2)

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




undefined8 FUN_1010978f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_10109790c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101097950(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109798c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101097a3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101097a4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe800000;
  return 1;
}




undefined8 FUN_101097a5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_101097a68(ulong param_1,float *param_2)

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
      *param_2 = (float)iVar2 * 9.313226e-09 + -10.0;
      param_2[1] = -7.5;
      param_2[2] = (float)iVar3 * 9.313226e-09 + -10.0;
      param_2 = param_2 + 3;
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101097af8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40200000;
  return 1;
}




undefined8 FUN_101097b08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_101097b18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097b24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101097b34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40f00000;
  return 1;
}




undefined8 FUN_101097b44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_101097b54(ulong param_1,float *param_2)

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




undefined8 FUN_101097bac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




ulong FUN_101097bbc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101097c00(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101097c44(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101097cf4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_101097d04(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.1;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.1;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1013a0b90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a0b90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0b90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      iVar3 = _rand();
      *param_3 = ((float)iVar3 * 2.3283064e-09 + 10.0) * fVar6;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_101097e28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097e34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101097e44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097e50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101097e60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101097e6c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101097e7c(ulong param_1,float *param_2)

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




undefined8 FUN_101097ee4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_101097ef4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2b40000;
  return 1;
}




ulong FUN_101097f04(ulong param_1,float *param_2)

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




ulong FUN_101097f6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011812d0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101097fb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101097fec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1013a0c90 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a0c90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0c90 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_101098094(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010980a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010980b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010980bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010980cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010980d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_1010980e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010980f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101098104(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




ulong FUN_101098118(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.1909515e-10 + 0.1;
      param_2[1] = 5.0;
      param_2 = param_2 + 2;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10109818c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_101098198(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_2) {
    fVar4 = param_1 * 160.0;
    uVar1 = (int)fVar4 + 1;
    bVar2 = param_1 < 0.4;
    fVar3 = 0.0;
    if (bVar2) {
      fVar3 = 0.5;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 0.0;
    }
    do {
      fVar5 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar5 = *(float *)(&DAT_1013a0d90 + (ulong)(uint)(int)fVar4 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_1013a0d90 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1013a0d90 + (ulong)(uint)(int)fVar4 * 4));
      }
      *param_3 = fVar5;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




ulong FUN_10109822c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098270(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010982b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010982f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101098334(int param_1,undefined8 *param_2)

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




void FUN_101098360(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101098410(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101098420(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe800000;
  return 1;
}




undefined8 FUN_101098430(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x437a0000;
  return 1;
}




undefined8 FUN_101098440(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0f0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101098458(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101098468(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_101098478(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098484(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101098494(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40f00000;
  return 1;
}




undefined8 FUN_1010984a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_1010984b4(ulong param_1,float *param_2)

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




ulong FUN_10109850c(ulong param_1,float *param_2)

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




ulong FUN_101098570(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010985b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a50,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010985f8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_1010986a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010986b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe800000;
  return 1;
}




undefined8 FUN_1010986c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc37a0000;
  return 1;
}




undefined8 FUN_1010986d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0f0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_1010986f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




void FUN_101098700(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_101098818(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101098828(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101098838(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098844(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101098854(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101098864(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_101098874(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098880(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101098890(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_1010988a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003e4ccccd;
  return 1;
}




undefined8 FUN_1010988b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010988c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_1010988d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098914(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098958(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098994(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_1010989d0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a0e90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a0e90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0e90 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101098a80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_101098a90(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.1;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1013a0f90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a0f90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a0f90 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 50.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_101098b40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098b4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101098b5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098b68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101098b78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098b84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101098b94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098ba0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_101098bb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101098bbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_101098bcc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098c08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101098c44(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_101098cd8:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_101098cd8;
          fVar5 = *(float *)(&DAT_1013a1090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a1090 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1090 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_101098cf8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101098d08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101098d18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_101098d24(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
      fVar5 = -0.2;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -0.2;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1013a1190 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a1190 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1190 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar5 * 9.0;
      param_3[2] = 0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_101098ddc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101098dec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101098dfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_101098e0c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




void FUN_101098e1c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (0 < param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    bVar2 = param_1 < 1.0;
    fVar3 = 0.3;
    if (bVar2) {
      fVar3 = 1.0;
    }
    if (bVar2 && 0.0 < param_1) {
      fVar3 = 0.3;
    }
    do {
      fVar4 = fVar3;
      if ((bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar4 = *(float *)(&DAT_1013a1290 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_1013a1290 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1013a1290 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      *param_3 = fVar4 + fVar4;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_101098eb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003dcccccd;
  return 1;
}




undefined8 FUN_101098ec4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_101098ed0(ulong param_1,undefined4 *param_2)

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




ulong FUN_101098f1c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098f60(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098f9c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101098fd8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101099014(float param_1,ulong param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = param_1 + param_1;
  fVar8 = 1.0;
  fVar7 = (float)_fmodf(fVar12,0x3f800000);
  if (fVar12 <= 0.0) {
    fVar7 = fVar12;
  }
  if (0 < (int)param_2) {
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    fVar12 = fVar7 * 64.0 - (float)(int)(fVar7 * 64.0);
    uVar2 = (int)(param_1 * 64.0) + 1;
    bVar4 = param_1 < 1.0;
    if (bVar4) {
      fVar8 = 0.0;
    }
    uVar6 = param_2;
    if (bVar4 && 0.0 < param_1) {
      fVar8 = 1.0;
    }
    do {
      fVar9 = 0.0;
      if ((fVar7 < 1.0 && 0.0 < fVar7) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_1013a1390 + (ulong)uVar5 * 4) +
                fVar12 * (*(float *)(&DAT_1013a1390 + (ulong)uVar1 * 4) -
                         *(float *)(&DAT_1013a1390 + (ulong)uVar5 * 4));
      }
      fVar10 = fVar8;
      if ((bVar4 && 0.0 < param_1) && uVar2 < 0x40) {
        fVar10 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                 (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                 (*(float *)(&DAT_1013a1990 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      fVar11 = 1.0;
      if ((fVar7 < 1.0 && 0.0 < fVar7) && uVar1 < 0x40) {
        fVar11 = *(float *)(&DAT_1013a1490 + (ulong)uVar5 * 4) +
                 fVar12 * (*(float *)(&DAT_1013a1490 + (ulong)uVar1 * 4) -
                          *(float *)(&DAT_1013a1490 + (ulong)uVar5 * 4));
      }
      *param_3 = fVar9;
      param_3[1] = fVar10;
      param_3[2] = fVar11;
      param_3 = param_3 + 3;
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while (uVar3 != 0);
  }
  return param_2;
}




void FUN_101099168(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_1010991fc:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_1010991fc;
          fVar5 = *(float *)(&DAT_1013a1590 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a1590 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1590 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_10109921c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109922c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_10109923c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099248(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101099258(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099264(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101099274(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099280(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101099290(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_1010992a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x417000003f800000;
  return 1;
}




undefined8 FUN_1010992b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010992c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_1010992d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101099310(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109934c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1690 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1690 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1690 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_1010993fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109940c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109941c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099428(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101099438(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_101099448(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_101099458(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099464(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_101099474(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_1010994d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003dcccccd;
  return 1;
}




undefined8 FUN_1010994ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_1010994f8(ulong param_1,float *param_2)

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




ulong FUN_101099560(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010995a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a50,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_1010995e8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109962c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101099668(int param_1,undefined8 *param_2)

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




void FUN_101099694(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1790 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1790 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1790 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_101099744(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101099754(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101099764(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099770(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101099780(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109978c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109979c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010997a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_1010997b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010997c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000040e00000;
  return 1;
}




undefined8 FUN_1010997d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_1010997e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_1010997f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101099830(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109986c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_10109991c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109992c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_10109993c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099948(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101099958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101099974(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099980(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101099990(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109999c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_1010999ac(ulong param_1,float *param_2)

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




undefined8 FUN_101099a04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_101099a14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101099a50(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101099a8c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_101099b48(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101099b58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_101099b68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099b74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_101099b84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099b90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101099ba0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101099bb0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101099bc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_101099bd0(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 2.3283064e-10 + 1.0,
                          (float)uVar5 * 4.656613e-11 + 0.1);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101099c4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099c58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_101099c6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101099cb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181730,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_101099cf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101099d04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101099d14(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101099d24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_101099d34(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 2.3283064e-10 + 1.0,
                          (float)uVar5 * 4.656613e-11 + 0.1);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101099db0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099dbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_101099dd0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101099e14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181730,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_101099e58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_101099e68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_101099e78(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_101099e88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_101099e98(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 2.3283064e-10 + 1.0,
                          (float)uVar5 * 4.656613e-11 + 0.1);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_101099f14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_101099f20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_101099f34(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_101099f78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181730,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_101099fbc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1013a1890 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1890 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_10109a06c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a07c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_10109a08c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a098(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a0a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a0b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109a0c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109a0d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109a0e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_10109a0f4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      param_2[1] = 1.5;
      param_2 = param_2 + 2;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10109a16c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a178(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_10109a18c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011817e0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109a1d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181730,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_10109a214(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109a224(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a234(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_10109a244(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a250(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a26c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109a27c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109a28c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109a29c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109a2ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003e800000;
  return 1;
}




undefined8 FUN_10109a2c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a2cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_10109a2e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109a324(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109a368(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109a3ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109a3e8(int param_1,undefined8 *param_2)

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




void FUN_10109a414(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 1.0;
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1013a1990 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1990 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar4 < 0.1) && (fVar3 = 0.0, 0.0 < fVar4)) {
        fVar4 = fVar4 * 640.0;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 1.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1013a1a90 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1013a1a90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1a90 + (ulong)(uint)(int)fVar4 * 4));
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




undefined8 FUN_10109a53c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a54c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a558(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43fa0000;
  return 1;
}




undefined8 FUN_10109a568(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc11ccccd00000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a58c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109a59c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109a5ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10109a5bc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-09 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10109a620(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e99999a3e99999a;
  return 1;
}




undefined8 FUN_10109a638(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a644(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




ulong FUN_10109a654(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011817f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109a698(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109a6d4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_10109a778:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.3 < fVar6) {
          fVar6 = fVar6 * 91.42857 + -27.428574;
          uVar1 = (int)fVar6 + 1;
          if (0x3f < uVar1) goto LAB_10109a778;
          fVar5 = *(float *)(&DAT_1013a1b90 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1013a1b90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1b90 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_10109a798(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a7a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10109a7b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a7c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109a7d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a7e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109a7f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109a800(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109a810(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_10109a820(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1) {
    uVar6 = NEON_fmov(0x40400000,4);
    uVar4 = param_1;
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          (float)((ulong)uVar5 >> 0x20) * 4.656613e-10,
                          (float)uVar6 + (float)uVar5 * 4.656613e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10109a894(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109a8a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_10109a8b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109a8f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109a934(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_10109a9d8:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.6 < fVar6) {
          fVar6 = fVar6 * 160.00002 + -96.000015;
          uVar1 = (int)fVar6 + 1;
          if (0x3f < uVar1) goto LAB_10109a9d8;
          fVar5 = *(float *)(&DAT_1013a1c90 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1013a1c90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1c90 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_10109a9f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109aa08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10109aa18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109aa24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109aa34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109aa40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109aa50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109aa60(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109aa70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_10109aa80(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1) {
    uVar6 = NEON_fmov(0x40400000,4);
    uVar4 = param_1;
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          (float)((ulong)uVar5 >> 0x20) * 4.656613e-10,
                          (float)uVar6 + (float)uVar5 * 4.656613e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10109aaf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109ab00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3d4ccccd;
  return 1;
}




ulong FUN_10109ab14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109ab58(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109ab94(uint param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (0 < (int)param_1) {
    uVar1 = (ulong)param_1;
    auVar2 = NEON_fmov(0x3f800000,4);
    do {
      param_2[1] = auVar2._8_8_;
      *param_2 = auVar2._0_8_;
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 2;
    } while (uVar1 != 0);
  }
  return;
}




undefined8 FUN_10109abb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109abc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109abd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109abdc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109abec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109abf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109ac08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109ac18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109ac28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_10109ac3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_10109ac50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109ac5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3df5c28f;
  return 1;
}




ulong FUN_10109ac70(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109acac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_10109ace8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109acf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109ad08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109ad18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_10109ad2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_10109ad40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109ad4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3df5c28f;
  return 1;
}




ulong FUN_10109ad60(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109ad9c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_10109add8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109ade8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10109adf8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10109ae08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_10109ae1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_10109ae30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109ae3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3df5c28f;
  return 1;
}




ulong FUN_10109ae50(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109ae8c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109aec8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_10109af5c:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10109af5c;
          fVar5 = *(float *)(&DAT_1013a1d90 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1013a1d90 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1013a1d90 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_10109af7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109af8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_10109af9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109afa8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10109afb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_10109afc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109afd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109afe4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10109aff4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011a3ff0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109b038(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x400000003f800000;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_10109b05c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_10109b068(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109b0ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109b0e8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_10109b124(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109b134(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109b140(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10109b150(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011a3ff0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109b194(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x400000003f800000;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_10109b1b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_10109b1c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109b208(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109b244(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_10109b280(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10109b290(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10109b29c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10109b2ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011a3ff0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10109b2f0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x400000003f800000;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_10109b314(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_10109b320(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109b364(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10109b3a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined * FUN_10109b3dc(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0x3852e;
  do {
    uVar1 = uVar2 + (uVar3 - uVar2 >> 1);
    if (*(ulong *)(&DAT_1014a8918 + (ulong)uVar1 * 0x10) == param_1) {
      return (&PTR_FUN_1014a8920)[(ulong)uVar1 * 2];
    }
    if (*(ulong *)(&DAT_1014a8918 + (ulong)uVar1 * 0x10) < param_1) {
      uVar2 = uVar1 + 1;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
  } while (uVar2 < uVar3);
  return (undefined *)0x0;
}




void FUN_10109b42c(undefined8 *param_1)

{
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_10109b474(uint param_1,undefined8 *param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((param_1 < 0x20) && (param_3 - 1U < 4)) {
    puVar1 = (undefined8 *)(param_4 + (ulong)param_1 * 0x10);
    switch(param_3) {
    case 1:
      *(undefined4 *)puVar1 = *(undefined4 *)param_2;
      return;
    case 2:
      uVar2 = *param_2;
      break;
    case 3:
      uVar2 = *param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      break;
    case 4:
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      return;
    }
    *puVar1 = uVar2;
    return;
  }
  return;
}




long FUN_10109b4d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar4 = FUN_10109bd38();
  *(undefined4 *)(lVar4 + 0x138) = 0;
  lVar4 = lVar4 + 0x140;
  FUN_1010b67a4(lVar4);
  lVar1 = param_1 + 0x1b8;
  FUN_1010b73bc(lVar1);
  lVar2 = param_1 + 0x1e8;
  FUN_1010b73bc(lVar2);
  FUN_1010b7478(lVar1,4);
  iVar3 = FUN_1010b872c();
  uVar5 = 0x15;
  if (iVar3 != 1) {
    uVar5 = 5;
  }
  FUN_1010b75c4(lVar1,0,param_2,param_2,1,uVar5,0);
  FUN_1010b7478(lVar2,4);
  FUN_1010b75c4(lVar2,0,param_2,param_2,1,1,0);
  FUN_1010b67c0(lVar4,param_2,param_2);
  FUN_1010b685c(lVar4,0,lVar2,1,0);
  FUN_1010b6874(lVar4,lVar1,1,0);
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109b5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  uVar1 = _DAT_101dc1cc0;
  *(undefined8 *)(param_1 + 0x130) = uRam0000000101dc1cc8;
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  FUN_1010b3934(param_1 + 8);
  uVar1 = FUN_1010b79d0(param_3);
  uVar2 = FUN_1010b79f4(param_3);
  FUN_1010b389c(param_1 + 8,uVar1,uVar2);
  return;
}




void FUN_10109b664(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010aed34();
  FUN_1010b1f6c(uVar1,"Shadowing.mMap",0,param_1);
  FUN_1010b1ef4(uVar1,"Shadowing.mParams",0,param_1 + 0x128);
  FUN_1010b1ef4(uVar1,"Shadowing.mViewProjRow0",0,param_1 + 0xe8);
  FUN_1010b1ef4(uVar1,"Shadowing.mViewProjRow1",0,param_1 + 0xf8);
  FUN_1010b1ef4(uVar1,"Shadowing.mViewProjRow2",0,param_1 + 0x108);
  FUN_1010b1ef4(uVar1,"Shadowing.mViewProjRow3",0,param_1 + 0x118);
  return;
}




undefined8
FUN_10109b710(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,undefined4 param_8,long *param_9,undefined8 param_10,undefined8 param_11,
             undefined8 param_12,undefined8 *param_13)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_160 [144];
  float local_d0 [6];
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  
  lVar4 = *param_9;
  if (*(int *)(lVar4 + 0x138) == 0) {
    *(undefined4 *)(lVar4 + 0x138) = 1;
    FUN_10109b5dc(lVar4,lVar4 + 0x140,lVar4 + 0x1b8);
    local_d0[0] = 1.0 / (param_2 - param_1);
    local_d0[5] = 1.0 / (param_3 - param_4);
    local_a8 = 1.0 / (param_6 - param_5);
    local_a0 = local_d0[0] * -(param_2 + param_1);
    fStack_9c = local_d0[5] * -(param_4 + param_3);
    local_98 = local_a8 * -(param_6 + param_5);
    local_d0[0] = local_d0[0] + local_d0[0];
    local_d0[5] = local_d0[5] + local_d0[5];
    local_a8 = local_a8 * -2.0;
    local_d0[3] = 0.0;
    local_d0[4] = 0.0;
    local_d0[1] = 0.0;
    local_d0[2] = 0.0;
    uStack_b0 = 0;
    local_b8 = 0;
    local_a4 = 0;
    local_94 = 0x3f800000;
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 0x24));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 0x26));
    uVar5 = param_13[5];
    uVar3 = param_13[4];
    uVar7 = param_13[7];
    uVar6 = param_13[6];
    uVar10 = *param_13;
    uVar9 = param_13[3];
    uVar8 = param_13[2];
    *(undefined8 *)(lVar4 + 0x40) = param_13[1];
    *(undefined8 *)(lVar4 + 0x38) = uVar10;
    *(undefined8 *)(lVar4 + 0x70) = uVar7;
    *(undefined8 *)(lVar4 + 0x68) = uVar6;
    *(undefined8 *)(lVar4 + 0x60) = uVar5;
    *(undefined8 *)(lVar4 + 0x58) = uVar3;
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x48) = uVar8;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(ulong *)(lVar4 + 0x78) = (ulong)(uint)local_d0[0];
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(ulong *)(lVar4 + 0x88) = (ulong)(uint)local_d0[5] << 0x20;
    *(ulong *)(lVar4 + 0xa0) = (ulong)(uint)local_a8;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    *(ulong *)(lVar4 + 0xb0) = CONCAT44(0x3f800000,local_98);
    *(ulong *)(lVar4 + 0xa8) = CONCAT44(fStack_9c,local_a0);
    FUN_10002a9fc(lVar4 + 0xe8,param_13,local_d0);
    *(float *)(lVar4 + 0x128) = param_7 / fVar1;
    *(float *)(lVar4 + 300) = param_7 / fVar2;
    *(undefined4 *)(lVar4 + 0x130) = param_8;
    *(undefined4 *)(lVar4 + 0x134) = 0;
    if ((int)param_12 == 0) {
      FUN_1010b3974(auStack_160,lVar4 + 8,lVar4 + 0x30);
      FUN_1010b3af8(0,0x3f800000,0,0,auStack_160);
      FUN_1010b3b18(0,auStack_160);
      FUN_1010b36cc(param_10,auStack_160,0);
    }
    else {
      uVar3 = FUN_1010b0058(1);
      FUN_1010b24ac(auStack_160,"Shadow task - ShadowGeneratorDirPCF",param_11,param_12,uVar3,
                    lVar4 + 8,lVar4 + 0x30,1);
      FUN_1010b3af8(0,0x3f800000,0,0,auStack_160);
      FUN_1010b3b18(0,auStack_160);
      FUN_1010b36cc(param_10,auStack_160,0);
      FUN_1010b2508(auStack_160);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}




void FUN_10109b968(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x218);
  DAT_101ea59d0 = FUN_10109b4d8(pvVar1,param_1);
  DAT_101ea59d8 = operator_new(8);
  *DAT_101ea59d8 = pvVar1;
  DAT_101ea59e0 = operator_new(8);
  *DAT_101ea59e0 = pvVar1;
  return;
}




void FUN_10109b9c8(void)

{
  void *pvVar1;
  
  if (DAT_101ea59e0 != (void *)0x0) {
    operator_delete(DAT_101ea59e0);
  }
  DAT_101ea59e0 = (void *)0x0;
  if (DAT_101ea59d8 != (void *)0x0) {
    operator_delete(DAT_101ea59d8);
  }
  pvVar1 = DAT_101ea59d0;
  DAT_101ea59d8 = (void *)0x0;
  if (DAT_101ea59d0 != (void *)0x0) {
    FUN_1010b7434((long)DAT_101ea59d0 + 0x1e8);
    FUN_1010b7434((long)pvVar1 + 0x1b8);
    operator_delete(pvVar1);
  }
  DAT_101ea59d0 = (void *)0x0;
  return;
}




void FUN_10109ba30(void)

{
  FUN_1010b555c(3);
  return;
}




void FUN_10109ba38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10109b710(DAT_101ea59d8,param_1,param_2,param_3,param_4);
  return;
}




void FUN_10109ba54(void)

{
  if (DAT_101ea59d0 != 0) {
    *(undefined4 *)(DAT_101ea59d0 + 0x138) = 0;
  }
  return;
}




void FUN_10109ba68(uint param_1)

{
  if ((-1 < (int)param_1) && (param_1 < *(uint *)(DAT_101ea59d0 + 0x138))) {
    FUN_10109b664(DAT_101ea59d0 + (ulong)param_1 * 0x138);
    return;
  }
  return;
}




void FUN_10109ba90(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  uint param_6,float *param_7,float *param_8)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *param_5 - *param_4;
  fVar3 = param_5[1] - param_4[1];
  fVar4 = param_5[2] - param_4[2];
  *param_7 = *param_1 * fVar2 + fVar3 * param_1[1] + fVar4 * param_1[2];
  param_7[1] = *param_2 * fVar2 + fVar3 * param_2[1] + fVar4 * param_2[2];
  param_7[2] = *param_3 * fVar2 + fVar3 * param_3[1] + fVar4 * param_3[2];
  fVar2 = param_7[2];
  *(undefined8 *)param_8 = *(undefined8 *)param_7;
  param_8[2] = fVar2;
  if (param_6 != 0) {
    uVar1 = (ulong)param_6;
    param_5 = param_5 + 1;
    do {
      fVar2 = param_5[-1] - *param_4;
      fVar5 = *param_5 - param_4[1];
      fVar3 = param_5[1] - param_4[2];
      fVar7 = *param_1 * fVar2 + fVar5 * param_1[1] + fVar3 * param_1[2];
      fVar8 = *param_2 * fVar2 + fVar5 * param_2[1] + fVar3 * param_2[2];
      fVar4 = (float)NEON_fminnm(*param_7,fVar7);
      fVar6 = (float)NEON_fminnm(param_7[1],fVar8);
      fVar2 = (float)NEON_fminnm(param_7[2],
                                 *param_3 * fVar2 + fVar5 * param_3[1] + fVar3 * param_3[2]);
      *param_7 = fVar4;
      param_7[1] = fVar6;
      param_7[2] = fVar2;
      fVar2 = *param_8;
      if (*param_8 <= fVar7) {
        fVar2 = fVar7;
      }
      fVar3 = param_8[1];
      if (param_8[1] <= fVar8) {
        fVar3 = fVar8;
      }
      *param_8 = fVar2;
      param_8[1] = fVar3;
      param_8[2] = param_8[2];
      param_5 = param_5 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_10109bbb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *param_1;
  local_18 = *(undefined4 *)(param_1 + 1);
  local_30 = param_1[2];
  local_28 = *(undefined4 *)(param_1 + 3);
  local_40 = param_1[4];
  local_38 = *(undefined4 *)(param_1 + 5);
  local_50 = param_1[6];
  local_48 = *(undefined4 *)(param_1 + 7);
  FUN_10109ba90(&local_20,&local_30,&local_40,&local_50,param_2,param_3,param_4,param_5);
  return;
}




void FUN_10109bc2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  float *param_5,float *param_6,float *param_7,float *param_8,undefined4 *param_9,
                  float *param_10)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_70;
  float local_6c;
  float fStack_68;
  float local_60;
  float fStack_5c;
  float local_58;
  
  FUN_10109bbb0();
  fVar10 = (local_70 - local_60) * 0.5;
  fVar5 = fVar10 + local_60;
  fVar9 = (local_6c - fStack_5c) * 0.5;
  fVar1 = fVar9 + fStack_5c;
  uVar11 = *param_1;
  uVar14 = param_1[2];
  uVar15 = param_1[4];
  uVar16 = param_1[6];
  fVar12 = *(float *)(param_1 + 1);
  fVar13 = *(float *)(param_1 + 3);
  fVar6 = *(float *)(param_1 + 5);
  fVar2 = *(float *)(param_1 + 7);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  uVar17 = param_1[4];
  uVar19 = param_1[7];
  uVar18 = param_1[6];
  param_4[5] = param_1[5];
  param_4[4] = uVar17;
  param_4[7] = uVar19;
  param_4[6] = uVar18;
  param_4[1] = uVar4;
  *param_4 = uVar3;
  param_4[3] = uVar8;
  param_4[2] = uVar7;
  param_4[6] = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar5 +
                        (float)((ulong)uVar14 >> 0x20) * fVar1 +
                        (float)((ulong)uVar15 >> 0x20) * fStack_68 + (float)((ulong)uVar16 >> 0x20),
                        (float)uVar11 * fVar5 + (float)uVar14 * fVar1 + (float)uVar15 * fStack_68 +
                        (float)uVar16);
  *(float *)(param_4 + 7) = fVar12 * fVar5 + fVar1 * fVar13 + fStack_68 * fVar6 + fVar2;
  *param_5 = (local_70 - local_60) * -0.5;
  *param_6 = fVar10;
  *param_7 = fVar9;
  *param_8 = (local_6c - fStack_5c) * -0.5;
  *param_9 = 0;
  *param_10 = fStack_68 - local_58;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10109bd38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_10182dc08;
  FUN_1010b3878(param_1 + 1);
  FUN_1010b2058(param_1 + 6);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x1f] = 0x3f80000000000000;
  param_1[0x22] = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x24] = 0x3f80000000000000;
  param_1[0x23] = 0;
  uVar1 = DAT_101dc1cb8;
  param_1[0x26] = _DAT_101dc1cc0;
  param_1[0x25] = uVar1;
  return param_1;
}




void FUN_10109bda8(long param_1,undefined8 param_2)

{
  FUN_1010b7d6c(param_2,*(undefined8 *)(param_1 + 0xe0));
  return;
}




void FUN_10109bdb8(void)

{
  return;
}




void FUN_10109bdc0(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x18);
  puVar2 = (undefined8 *)FUN_1004e83c4(pvVar1,5);
  *puVar2 = &PTR_FUN_10182dc30;
  FUN_1004e82c0();
  FUN_1004e8330(pvVar1);
  return;
}




void FUN_10109be00(void)

{
  return;
}




void FUN_10109be08(void)

{
  FUN_10109c080(0x98);
  return;
}




void thunk_FUN_10109c16c(void)

{
  FUN_10109c16c();
  return;
}




void FUN_10109be14(void)

{
  return;
}




void FUN_10109be18(void)

{
  return;
}




undefined8 FUN_10109be1c(void)

{
  return 1;
}




void FUN_10109be24(void)

{
  return;
}




void FUN_10109be28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182dc80;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0x3c23d70a3c888889;
  param_1[1] = 0x3d0888893dcccccd;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3c888889;
  return;
}




void FUN_10109be6c(void)

{
  return;
}




void FUN_10109be70(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10109be74);
  (*pcVar1)();
}




void FUN_10109be74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10109be78);
  (*pcVar1)();
}




void FUN_10109be78(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010109be80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}




void FUN_10109be84(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}




undefined8 FUN_10109bea8(void)

{
  return 0;
}




undefined8 FUN_10109beb0(void)

{
  return 0;
}




undefined8 FUN_10109beb8(void)

{
  return 0;
}




undefined8 FUN_10109bec0(void)

{
  return 0;
}




undefined4 FUN_10109bec8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




undefined4 FUN_10109bed4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




float FUN_10109bee0(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0x18),0x3f800000);
  if (fVar1 <= -1.0) {
    fVar1 = -1.0;
  }
  NEON_fminnm(*(undefined4 *)(param_1 + 0x1c),0x3f800000);
  NEON_fminnm(*(undefined4 *)(param_1 + 0x20),0x3f800000);
  return fVar1;
}




float FUN_10109bf0c(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0x24),0x3f800000);
  if (fVar1 <= -1.0) {
    fVar1 = -1.0;
  }
  NEON_fminnm(*(undefined4 *)(param_1 + 0x28),0x3f800000);
  NEON_fminnm(*(undefined4 *)(param_1 + 0x2c),0x3f800000);
  return fVar1;
}




void FUN_10109bf38(long param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 8);
  return;
}




void FUN_10109bf48(long param_1)

{
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return;
}




void FUN_10109bf58(long *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 0xc);
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  (**(code **)(*param_1 + 0x10))();
  *(bool *)(param_1 + 1) = (cVar1 != '\0') != (*(char *)((long)param_1 + 0xc) == '\0');
  return;
}




ushort FUN_10109bfac(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    return *(ushort *)(param_1 + 0xe) >> (ulong)(param_2 & 0x1f) & 1;
  }
  return 0;
}




ushort FUN_10109bfcc(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    return *(ushort *)(param_1 + 0x10) >> (ulong)(param_2 & 0x1f) & 1;
  }
  return 0;
}




undefined4 FUN_10109bfec(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x14);
  }
  return 0;
}




void FUN_10109c008(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_10109c010(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 1);
  uVar1 = *puVar2;
  puVar2[0] = 0;
  puVar2[1] = 0;
  (**(code **)(*param_1 + 0x10))(param_1,puVar2);
  *(uint *)((long)param_1 + 0xc) = *puVar2 & (uVar1 ^ 0xffffffff);
  return;
}




void FUN_10109c05c(long param_1)

{
  FUN_10109c06c(param_1 + 8);
  return;
}




void FUN_10109c064(long param_1)

{
  FUN_10109c06c(param_1 + 0xc);
  return;
}




uint FUN_10109c06c(long param_1,uint param_2)

{
  return *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) >> (ulong)(param_2 & 0x1f) & 1;
}




void FUN_10109c080(uint param_1)

{
  int iVar1;
  
  if ((param_1 >> 3 & 1) != 0) {
    operator_new(0x850);
    DAT_101dc0740 = FUN_10109e2ac();
    FUN_10109fd74();
  }
  if ((param_1 >> 6 & 1) != 0) {
    operator_new(0x38);
    DAT_101dc0758 = (long *)thunk_FUN_10109df1c();
    iVar1 = (**(code **)(*DAT_101dc0758 + 0x30))();
    if (iVar1 != 0) {
      (**(code **)(*DAT_101dc0758 + 0x20))();
    }
  }
  if ((param_1 >> 4 & 1) != 0) {
    operator_new(0x10);
    DAT_101dc0750 = thunk_FUN_10109ecf8();
  }
  if ((param_1 >> 7 & 1) != 0) {
    DAT_101dc0760 = operator_new(0x10);
    *DAT_101dc0760 = 0;
    DAT_101dc0760[1] = 0;
  }
  return;
}




void FUN_10109c120(void)

{
  int iVar1;
  
  if ((DAT_101dc0758 != (long *)0x0) && (iVar1 = (**(code **)(*DAT_101dc0758 + 0x30))(), iVar1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x00010109c15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0758 + 0x20))();
    return;
  }
  return;
}




void FUN_10109c16c(void)

{
  void *pvVar1;
  
  if (DAT_101dc0760 != 0) {
    pvVar1 = (void *)thunk_FUN_10109d7c0();
    operator_delete(pvVar1);
  }
  DAT_101dc0760 = 0;
  if (DAT_101dc0720 != (long *)0x0) {
    (**(code **)(*DAT_101dc0720 + 8))();
  }
  DAT_101dc0720 = (long *)0x0;
  if (DAT_101dc0750 != (long *)0x0) {
    (**(code **)(*DAT_101dc0750 + 8))();
  }
  DAT_101dc0750 = (long *)0x0;
  if (DAT_101dc0740 != (long *)0x0) {
    FUN_10109ffa0();
    if (DAT_101dc0740 != (long *)0x0) {
      (**(code **)(*DAT_101dc0740 + 8))();
    }
  }
  DAT_101dc0740 = (long *)0x0;
  if (DAT_101dc0738 != (long *)0x0) {
    (**(code **)(*DAT_101dc0738 + 8))();
  }
  DAT_101dc0738 = (long *)0x0;
  if (DAT_101dc0730 != (long *)0x0) {
    (**(code **)(*DAT_101dc0730 + 8))();
  }
  DAT_101dc0730 = (long *)0x0;
  if (DAT_101dc0728 != (long *)0x0) {
    (**(code **)(*DAT_101dc0728 + 8))();
  }
  DAT_101dc0728 = (long *)0x0;
  if (DAT_101dc0758 != (long *)0x0) {
    (**(code **)(*DAT_101dc0758 + 8))();
  }
  DAT_101dc0758 = (long *)0x0;
  return;
}




void FUN_10109c26c(void)

{
  return;
}




void FUN_10109c270(void)

{
  if (DAT_101dc0728 != 0) {
    FUN_10109bf58();
  }
  if (DAT_101dc0720 != 0) {
    FUN_10109c010();
  }
  if (DAT_101dc0750 != (long *)0x0) {
    (**(code **)(*DAT_101dc0750 + 0x10))();
  }
  if (DAT_101dc0748 != (long *)0x0) {
    (**(code **)(*DAT_101dc0748 + 0x10))();
  }
  if (DAT_101dc0740 != 0) {
    FUN_10109dd88();
    FUN_10109fda4();
  }
  if (DAT_101dc0730 != 0) {
    FUN_10109c7cc();
  }
  if (DAT_101dc0738 != 0) {
    FUN_10109db78();
  }
  if (DAT_101dc0758 != (long *)0x0) {
    (**(code **)(*DAT_101dc0758 + 0x10))();
  }
  if (DAT_101dc0760 != 0) {
    FUN_10109d8f8();
    return;
  }
  return;
}




void FUN_10109c330(void)

{
  if (DAT_101dc0728 != 0) {
    FUN_10109bf48();
  }
  if (DAT_101dc0720 != 0) {
    FUN_10109c008();
  }
  if (DAT_101dc0750 != (long *)0x0) {
    (**(code **)(*DAT_101dc0750 + 0x18))();
  }
  if (DAT_101dc0748 != (long *)0x0) {
    (**(code **)(*DAT_101dc0748 + 0x18))();
  }
  if (DAT_101dc0740 != 0) {
    FUN_10109dca4();
    FUN_10109fd8c();
  }
  if (DAT_101dc0730 != 0) {
    FUN_10109c7b8();
  }
  if (DAT_101dc0738 != 0) {
    FUN_10109db68();
  }
  if (DAT_101dc0758 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010109c3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0758 + 0x18))();
    return;
  }
  return;
}




bool FUN_10109c3e0(void)

{
  return DAT_101dc0728 != 0;
}




bool FUN_10109c3f4(void)

{
  if (DAT_101dc0728 != 0) {
    return *(char *)(DAT_101dc0728 + 0xc) != '\0';
  }
  return false;
}




void FUN_10109c418(undefined8 param_1)

{
  if (DAT_101dc0728 != 0) {
    FUN_10109bfac(DAT_101dc0728,param_1);
    return;
  }
  return;
}




void FUN_10109c430(undefined8 param_1)

{
  if (DAT_101dc0728 != 0) {
    FUN_10109bfcc(DAT_101dc0728,param_1);
    return;
  }
  return;
}




undefined1  [16] FUN_10109c448(undefined8 param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (DAT_101dc0728 != 0) {
    FUN_10109bfec(DAT_101dc0728,param_1);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




bool FUN_10109c464(void)

{
  return DAT_101dc0730 != 0;
}




void FUN_10109c478(void)

{
  if (DAT_101dc0730 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010109c48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0730 + 0x10))();
    return;
  }
  return;
}




void FUN_10109c494(undefined8 param_1)

{
  if (DAT_101dc0730 != 0) {
    FUN_10109c830(DAT_101dc0730,param_1);
    return;
  }
  return;
}




void FUN_10109c4ac(undefined8 param_1)

{
  if (DAT_101dc0730 != 0) {
    FUN_10109c838(DAT_101dc0730,param_1);
    return;
  }
  return;
}




void FUN_10109c4c4(undefined8 param_1)

{
  if (DAT_101dc0730 != 0) {
    FUN_10109c840(DAT_101dc0730,param_1);
    return;
  }
  return;
}




bool FUN_10109c4dc(void)

{
  return DAT_101dc0738 != 0;
}




void FUN_10109c4f0(undefined8 param_1)

{
  if (DAT_101dc0738 != 0) {
    FUN_10109dbd0(DAT_101dc0738,param_1);
    return;
  }
  return;
}




void FUN_10109c508(undefined8 param_1)

{
  if (DAT_101dc0738 != 0) {
    FUN_10109dbd8(DAT_101dc0738,param_1);
    return;
  }
  return;
}




void FUN_10109c520(undefined8 param_1)

{
  if (DAT_101dc0738 != 0) {
    FUN_10109dbe0(DAT_101dc0738,param_1);
    return;
  }
  return;
}




void FUN_10109c538(undefined8 param_1)

{
  if (DAT_101dc0738 != 0) {
    FUN_10109dbe8(DAT_101dc0738,param_1);
    return;
  }
  return;
}




void FUN_10109c550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_101dc0738 != 0) {
    FUN_10109dbf0(DAT_101dc0738,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}




bool FUN_10109c574(void)

{
  return DAT_101dc0740 != 0;
}




void FUN_10109c588(void)

{
  if (DAT_101dc0740 != 0) {
    FUN_10109decc();
    return;
  }
  return;
}




void FUN_10109c59c(undefined8 param_1)

{
  FUN_10109ded4(DAT_101dc0740,param_1);
  return;
}




void FUN_10109c5ac(void)

{
  int iVar1;
  
  if ((DAT_101dc0758 != (long *)0x0) && (iVar1 = (**(code **)(*DAT_101dc0758 + 0x30))(), iVar1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x00010109c5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0758 + 0x28))();
    return;
  }
  return;
}




void FUN_10109c5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  if (DAT_101dc0750 != (long *)0x0) {
    (**(code **)(*DAT_101dc0750 + 0x28))
              (DAT_101dc0750,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
              );
  }
  return;
}




void FUN_10109c65c(undefined8 param_1)

{
  if (DAT_101dc0750 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010109c674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0750 + 0x38))(DAT_101dc0750,param_1);
    return;
  }
  return;
}




void FUN_10109c67c(undefined8 param_1)

{
  if (DAT_101dc0750 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010109c694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0750 + 0x40))(DAT_101dc0750,param_1);
    return;
  }
  return;
}




void FUN_10109c69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101dc0750 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010109c6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0750 + 0x30))(DAT_101dc0750,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_10109c6c4(undefined8 param_1)

{
  if (DAT_101dc0750 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010109c6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101dc0750 + 0x50))(DAT_101dc0750,param_1);
    return;
  }
  return;
}




bool FUN_10109c6e4(void)

{
  return DAT_101dc0720 != 0;
}




void FUN_10109c6f8(undefined8 param_1)

{
  if (DAT_101dc0720 != 0) {
    FUN_10109c05c(DAT_101dc0720,param_1);
    return;
  }
  return;
}




void FUN_10109c710(undefined8 param_1)

{
  if (DAT_101dc0720 != 0) {
    FUN_10109c064(DAT_101dc0720,param_1);
    return;
  }
  return;
}




void FUN_10109c728(undefined4 param_1)

{
  FUN_10109d9bc(DAT_101dc0760,param_1);
  return;
}




void FUN_10109c73c(undefined4 param_1)

{
  FUN_10109da98(DAT_101dc0760,param_1);
  return;
}




void FUN_10109c750(undefined4 param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = FUN_10109da98(DAT_101dc0760,param_1);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x38) = param_2;
  }
  return;
}




void FUN_10109c788(undefined4 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10109da98(DAT_101dc0760,*param_1);
  if (lVar1 != 0) {
    FUN_10109ccd0();
    return;
  }
  return;
}




void FUN_10109c7b8(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_10109c7cc(long *param_1)

{
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar1;
  long lVar2;
  byte bVar9;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  long lVar10;
  long lVar11;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  
  lVar10 = param_1[2];
  lVar1 = param_1[1];
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_1 + 1);
  lVar11 = param_1[2];
  lVar2 = param_1[1];
  bVar19 = (byte)((ulong)lVar1 >> 8);
  bVar20 = (byte)((ulong)lVar1 >> 0x10);
  bVar21 = (byte)((ulong)lVar1 >> 0x18);
  bVar22 = (byte)((ulong)lVar1 >> 0x20);
  bVar23 = (byte)((ulong)lVar1 >> 0x28);
  bVar24 = (byte)((ulong)lVar1 >> 0x30);
  bVar25 = (byte)((ulong)lVar1 >> 0x38);
  bVar26 = (byte)((ulong)lVar10 >> 8);
  bVar27 = (byte)((ulong)lVar10 >> 0x10);
  bVar28 = (byte)((ulong)lVar10 >> 0x18);
  bVar29 = (byte)((ulong)lVar10 >> 0x20);
  bVar30 = (byte)((ulong)lVar10 >> 0x28);
  bVar31 = (byte)((ulong)lVar10 >> 0x30);
  bVar32 = (byte)((ulong)lVar10 >> 0x38);
  bVar3 = (byte)((ulong)lVar2 >> 8);
  bVar4 = (byte)((ulong)lVar2 >> 0x10);
  bVar5 = (byte)((ulong)lVar2 >> 0x18);
  bVar6 = (byte)((ulong)lVar2 >> 0x20);
  bVar7 = (byte)((ulong)lVar2 >> 0x28);
  bVar8 = (byte)((ulong)lVar2 >> 0x30);
  bVar9 = (byte)((ulong)lVar2 >> 0x38);
  bVar12 = (byte)((ulong)lVar11 >> 8);
  bVar13 = (byte)((ulong)lVar11 >> 0x10);
  bVar14 = (byte)((ulong)lVar11 >> 0x18);
  bVar15 = (byte)((ulong)lVar11 >> 0x20);
  bVar16 = (byte)((ulong)lVar11 >> 0x28);
  bVar17 = (byte)((ulong)lVar11 >> 0x30);
  bVar18 = (byte)((ulong)lVar11 >> 0x38);
  param_1[4] = CONCAT17(bVar18 & ~bVar32,
                        CONCAT16(bVar17 & ~bVar31,
                                 CONCAT15(bVar16 & ~bVar30,
                                          CONCAT14(bVar15 & ~bVar29,
                                                   CONCAT13(bVar14 & ~bVar28,
                                                            CONCAT12(bVar13 & ~bVar27,
                                                                     CONCAT11(bVar12 & ~bVar26,
                                                                              (byte)lVar11 &
                                                                              ~(byte)lVar10)))))));
  param_1[3] = CONCAT17(bVar9 & ~bVar25,
                        CONCAT16(bVar8 & ~bVar24,
                                 CONCAT15(bVar7 & ~bVar23,
                                          CONCAT14(bVar6 & ~bVar22,
                                                   CONCAT13(bVar5 & ~bVar21,
                                                            CONCAT12(bVar4 & ~bVar20,
                                                                     CONCAT11(bVar3 & ~bVar19,
                                                                              (byte)lVar2 &
                                                                              ~(byte)lVar1)))))));
  param_1[6] = CONCAT17(bVar32 & ~bVar18,
                        CONCAT16(bVar31 & ~bVar17,
                                 CONCAT15(bVar30 & ~bVar16,
                                          CONCAT14(bVar29 & ~bVar15,
                                                   CONCAT13(bVar28 & ~bVar14,
                                                            CONCAT12(bVar27 & ~bVar13,
                                                                     CONCAT11(bVar26 & ~bVar12,
                                                                              (byte)lVar10 &
                                                                              ~(byte)lVar11)))))));
  param_1[5] = CONCAT17(bVar25 & ~bVar9,
                        CONCAT16(bVar24 & ~bVar8,
                                 CONCAT15(bVar23 & ~bVar7,
                                          CONCAT14(bVar22 & ~bVar6,
                                                   CONCAT13(bVar21 & ~bVar5,
                                                            CONCAT12(bVar20 & ~bVar4,
                                                                     CONCAT11(bVar19 & ~bVar3,
                                                                              (byte)lVar1 &
                                                                              ~(byte)lVar2)))))));
  return;
}




void FUN_10109c830(long param_1)

{
  FUN_10109c848(param_1 + 8);
  return;
}




void FUN_10109c838(long param_1)

{
  FUN_10109c848(param_1 + 0x18);
  return;
}




void FUN_10109c840(long param_1)

{
  FUN_10109c848(param_1 + 0x28);
  return;
}




uint FUN_10109c848(long param_1,uint param_2)

{
  return *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) >> (ulong)(param_2 & 0x1f) & 1;
}




undefined * FUN_10109c85c(ulong param_1)

{
  return (&PTR_s_A_10182dd00)[param_1 & 0xffffffff];
}




long FUN_10109c86c(char *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = _strcmp((&PTR_s_A_10182dd00)[lVar2],param_1);
    if (iVar1 == 0) {
      return lVar2;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x69);
  return 0x69;
}




void FUN_10109c8bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = 1;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined1 *)((long)param_1 + 0xd) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = param_6;
  param_1[4] = param_3;
  return;
}




void FUN_10109c8e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = 2;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined1 *)((long)param_1 + 0xd) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = param_6;
  param_1[4] = param_3;
  return;
}




void FUN_10109c904(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = 3;
  param_1[2] = param_4;
  *(undefined2 *)(param_1 + 3) = 0xff;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[4] = param_3;
  return;
}




void FUN_10109c924(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 local_50;
  void *pvStack_48;
  undefined8 local_40;
  void *local_38;
  undefined4 local_28 [2];
  
  param_1 = param_1 + 8;
  local_28[0] = param_2;
  uVar1 = FUN_10109c99c(param_1,local_28);
  if ((uVar1 & 1) == 0) {
    pvStack_48 = (void *)0x0;
    local_50 = 0;
    local_38 = (void *)0x0;
    local_40 = 0;
    FUN_10109ca04(param_1,local_28,&local_50);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
      local_40 = 0;
      local_38 = (void *)0x0;
    }
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
  }
  FUN_10109cad0(param_1,local_28);
  return;
}




bool FUN_10109c99c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar2) goto LAB_10109c9d4;
        iVar4 = (int)uVar5;
        uVar3 = iVar4 - 1;
        uVar5 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
      uVar5 = 0;
    }
LAB_10109c9d4:
    if ((int)uVar5 < (int)uVar1) {
      do {
        uVar3 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
        if (uVar2 <= uVar3) {
          return uVar3 == uVar2;
        }
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar3;
      } while (uVar1 != uVar3);
    }
  }
  return false;
}




void FUN_10109ca04(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint local_34;
  
  local_34 = *param_2;
  lVar3 = *(long *)(param_1 + 2);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar2 * (ulong)local_34 >> 0x20;
    if (0 < (int)((ulong)uVar2 * (ulong)local_34 >> 0x20)) {
      do {
        if (*(uint *)(lVar3 + uVar6 * 4) <= local_34) goto LAB_10109ca5c;
        iVar4 = (int)uVar6;
        uVar5 = iVar4 - 1;
        uVar6 = (ulong)uVar5;
      } while (uVar5 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_10109ca5c:
    uVar5 = (uint)uVar6;
    if ((int)(uint)uVar6 < (int)uVar2) {
      do {
        uVar5 = (uint)uVar6;
        if (local_34 <= *(uint *)(lVar3 + uVar6 * 4)) break;
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        uVar5 = uVar2;
      } while (uVar2 != uVar1);
    }
  }
  FUN_10011a5f4(param_1,lVar3 + (long)(int)uVar5 * 4,&local_34,&stack0xffffffffffffffd0);
  FUN_10109d130(param_1 + 4,*(long *)(param_1 + 6) + (long)(int)uVar5 * 0x20,param_3,param_3 + 0x20)
  ;
  return;
}




long FUN_10109cad0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2;
    uVar6 = uVar5 >> 0x20;
    if (0 < (int)(uVar5 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar6 * 4) <= uVar2) goto LAB_10109cb08;
        iVar4 = (int)uVar6;
        uVar3 = iVar4 - 1;
        uVar6 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_10109cb08:
    uVar5 = uVar6;
    if ((int)uVar6 < (int)uVar1) {
      do {
        uVar5 = uVar6;
        if (uVar2 <= *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4)) break;
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar3;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != uVar3);
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 0x20;
}




void FUN_10109cb44(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10109c924(param_1,*param_2);
  FUN_10109cb6c(uVar1,param_2);
  return;
}




void FUN_10109cb6c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10109d554(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x14;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined4 *)(lVar4 + -4) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(lVar4 + -0xc) = uVar6;
  *(undefined8 *)(lVar4 + -0x14) = uVar5;
  return;
}




void FUN_10109cbf8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_4;
  lVar1 = FUN_10109c924(param_1,param_2);
  FUN_10109cc28(lVar1 + 0x10,&local_20);
  return;
}




void FUN_10109cc28(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10109d644(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_10109cca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
  FUN_10109cc28(param_1 + 0x28,&local_20);
  return;
}




void FUN_10109ccd0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_10109d458(param_1 + 0x18,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




undefined8 FUN_10109cd10(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_10109c3e0();
  if (((int)uVar1 != 0) && (uVar1 = FUN_10109c3f4(), (int)uVar1 != 0)) {
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar1 = FUN_10109c430(*(undefined4 *)(param_2 + 8));
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    else if ((*(int *)(param_2 + 0x10) != 1) ||
            (uVar2 = FUN_10109c418(*(undefined4 *)(param_2 + 8)), (uVar2 & 1) == 0)) {
      return 0;
    }
    *param_4 = 0;
    param_4[1] = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_4 + 2) = 0;
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_10109cd84(undefined8 param_1,long param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = FUN_10109c464();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar3 = FUN_10109c478();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 0) {
    uVar3 = FUN_10109c4ac(*(undefined4 *)(param_2 + 8));
    if ((int)uVar3 == 0) {
      return uVar3;
    }
LAB_10109cdf4:
    uVar3 = 0;
    if (((*(byte *)(param_2 + 0xd) & (*param_3 ^ 0xff)) == 0) &&
       (bVar1 = *param_3 & (*(byte *)(param_2 + 0xd) ^ 0xff),
       (bVar1 & *(byte *)(param_2 + 0xe)) == bVar1)) {
      uVar3 = 1;
      *param_4 = 1;
      param_4[2] = *(undefined4 *)(param_2 + 8);
      *(undefined2 *)(param_4 + 1) = 0;
      *(byte *)(param_4 + 3) = *param_3;
    }
  }
  else {
    if (iVar2 == 2) {
      uVar4 = FUN_10109c4c4(*(undefined4 *)(param_2 + 8));
joined_r0x00010109cdf0:
      if ((uVar4 & 1) != 0) goto LAB_10109cdf4;
    }
    else if (iVar2 == 1) {
      uVar4 = FUN_10109c494(*(undefined4 *)(param_2 + 8));
      goto joined_r0x00010109cdf0;
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_10109ce58(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_10109c6e4();
  if ((int)uVar1 != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar1 = FUN_10109c710(*(undefined4 *)(param_2 + 8));
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    else if ((*(int *)(param_2 + 0x10) != 1) ||
            (uVar2 = FUN_10109c6f8(*(undefined4 *)(param_2 + 8)), (uVar2 & 1) == 0)) {
      return 0;
    }
    *param_4 = 3;
    param_4[1] = *(undefined4 *)(param_2 + 8);
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_10109cec4(undefined8 param_1,long param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  
  uVar3 = FUN_10109c4dc();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 0) {
    uVar3 = FUN_10109c508(*(undefined4 *)(param_2 + 8));
    if ((int)uVar3 == 0) {
      return uVar3;
    }
LAB_10109cf30:
    uVar3 = 0;
    if (((*(byte *)(param_2 + 0xd) & (*param_3 ^ 0xff)) == 0) &&
       (bVar1 = *param_3 & (*(byte *)(param_2 + 0xd) ^ 0xff),
       (bVar1 & *(byte *)(param_2 + 0xe)) == bVar1)) {
      FUN_10109c550(&local_34,&local_38,auStack_3c,auStack_40);
      *param_4 = 2;
      param_4[1] = *(undefined4 *)(param_2 + 8);
      *(byte *)(param_4 + 2) = *param_3;
      param_4[3] = local_34;
      param_4[4] = local_38;
      uVar3 = 1;
    }
  }
  else {
    if (iVar2 == 2) {
      uVar4 = FUN_10109c520(*(undefined4 *)(param_2 + 8));
joined_r0x00010109cf2c:
      if ((uVar4 & 1) != 0) goto LAB_10109cf30;
    }
    else if (iVar2 == 1) {
      uVar4 = FUN_10109c4f0(*(undefined4 *)(param_2 + 8));
      goto joined_r0x00010109cf2c;
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_10109cfbc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    uVar1 = FUN_10109cd10();
    return uVar1;
  case 1:
    uVar1 = FUN_10109cd84();
    return uVar1;
  case 2:
    uVar1 = FUN_10109cec4();
    return uVar1;
  case 3:
    uVar1 = FUN_10109ce58();
    return uVar1;
  default:
    return 0;
  }
}




void FUN_10109cff8(long param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    uVar5 = 0;
    lVar3 = param_1;
    do {
      puVar1 = (uint *)(*(long *)(param_1 + 0x20) + uVar5 * 0x20);
      if (*puVar1 != 0) {
        uVar9 = 0;
        do {
          lVar6 = *(long *)(puVar1 + 2) + uVar9 * 0x14;
          lVar3 = FUN_10109cfbc(lVar3,lVar6,param_2,auStack_78);
          if ((int)lVar3 != 0) {
            if (puVar1[4] != 0) {
              lVar7 = 0;
              uVar8 = 0;
              do {
                lVar3 = (*(code *)((undefined8 *)(*(long *)(puVar1 + 6) + lVar7))[1])
                                  (*(undefined8 *)(*(long *)(puVar1 + 6) + lVar7),lVar6,auStack_78);
                uVar8 = uVar8 + 1;
                lVar7 = lVar7 + 0x10;
              } while (uVar8 < puVar1[4]);
            }
            if (*(int *)(param_1 + 0x28) != 0) {
              lVar7 = 0;
              uVar8 = 0;
              do {
                puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
                lVar3 = (*(code *)puVar2[1])(*puVar2,lVar6,auStack_78);
                uVar8 = uVar8 + 1;
                lVar7 = lVar7 + 0x10;
              } while (uVar8 < *(uint *)(param_1 + 0x28));
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *puVar1);
        iVar4 = *(int *)(param_1 + 8);
      }
      uVar9 = uVar5 + 1;
      uVar5 = uVar9 & 0xffffffff;
    } while (iVar4 != (int)uVar9);
  }
  return;
}




void * FUN_10109d130(uint *param_1,void *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar13 = param_4 - param_3;
    pvVar7 = *(void **)(param_1 + 2);
    uVar11 = (long)param_2 - (long)pvVar7;
    uVar1 = *param_1;
    uVar10 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar9 = (uint)(uVar13 >> 5);
    if (uVar2 - uVar1 < uVar9) {
      uVar1 = uVar1 + uVar9;
      uVar9 = 0;
      if (uVar2 != 0xffffffff) {
        uVar9 = uVar2 + (~uVar2 | 0xfffffff0) + 0x11;
      }
      if (uVar2 < 0x20) {
        uVar9 = uVar2 << 1;
      }
      uVar2 = uVar1;
      if (uVar1 <= uVar9) {
        uVar2 = uVar9;
      }
      pvVar5 = operator_new__((ulong)uVar2 << 5);
      pvVar6 = pvVar5;
      for (; pvVar7 != param_2; pvVar7 = (void *)((long)pvVar7 + 0x20)) {
        FUN_10109d4e0(pvVar6,pvVar7);
        FUN_10109d5e0((long)pvVar6 + 0x10,(long)pvVar7 + 0x10);
        pvVar6 = (void *)((long)pvVar6 + 0x20);
      }
      uVar10 = uVar11 >> 5 & 0xffffffff;
      pvVar6 = (void *)((long)pvVar5 + uVar10 * 0x20);
      pvVar7 = pvVar6;
      do {
        FUN_10109d4e0(pvVar7,param_3);
        FUN_10109d5e0((long)pvVar7 + 0x10,param_3 + 0x10);
        param_3 = param_3 + 0x20;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (param_3 != param_4);
      pvVar7 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
      if (pvVar7 != param_2) {
        pvVar6 = (void *)((long)pvVar6 + (uVar13 >> 5 & 0xffffffff) * 0x20);
        do {
          FUN_10109d4e0(pvVar6,param_2);
          FUN_10109d5e0((long)pvVar6 + 0x10,(long)param_2 + 0x10);
          param_2 = (void *)((long)param_2 + 0x20);
          pvVar6 = (void *)((long)pvVar6 + 0x20);
        } while (param_2 != pvVar7);
      }
      FUN_10109d458(param_1,1);
      *(void **)(param_1 + 2) = pvVar5;
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
    else {
      pvVar5 = (void *)((long)pvVar7 + uVar10 * 0x20);
      if (uVar9 < (uint)((ulong)((long)pvVar5 - (long)param_2) >> 5)) {
        uVar13 = uVar13 >> 5 & 0xffffffff;
        if (uVar13 != 0) {
          lVar12 = 0;
          do {
            pvVar7 = (void *)((long)pvVar5 + uVar13 * -0x20);
            FUN_10109d4e0(pvVar5,pvVar7);
            FUN_10109d5e0((long)pvVar5 + 0x10,(long)pvVar7 + 0x10);
            pvVar5 = (void *)((long)pvVar5 + 0x20);
            lVar12 = lVar12 + -0x20;
          } while (-lVar12 != uVar13 * 0x20);
          uVar10 = (ulong)*param_1;
          pvVar7 = *(void **)(param_1 + 2);
        }
        lVar12 = (long)pvVar7 + ((uVar10 - uVar13) * 0x20 - (long)param_2);
        if (lVar12 != 0) {
          lVar8 = 0;
          do {
            lVar4 = lVar8 + lVar12 + uVar13 * 0x20;
            lVar3 = lVar8 + (uVar10 - uVar13) * 0x20;
            FUN_10109d6c0((long)param_2 + lVar4 + -0x20,(long)pvVar7 + lVar3 + -0x20);
            FUN_10109d748((long)param_2 + lVar4 + -0x10,(long)pvVar7 + lVar3 + -0x10);
            lVar8 = lVar8 + -0x20;
          } while (-lVar8 != lVar12);
        }
        do {
          FUN_10109d6c0(param_2,param_3);
          FUN_10109d748((long)param_2 + 0x10,param_3 + 0x10);
          param_3 = param_3 + 0x20;
          param_2 = (void *)((long)param_2 + 0x20);
        } while (param_3 != param_4);
      }
      else {
        if (pvVar5 != param_2) {
          pvVar7 = param_2;
          do {
            lVar12 = FUN_10109d4e0((void *)((long)pvVar7 + (uVar13 >> 5 & 0xffffffff) * 0x20),pvVar7
                                  );
            FUN_10109d5e0(lVar12 + 0x10,(long)pvVar7 + 0x10);
            pvVar7 = (void *)((long)pvVar7 + 0x20);
          } while (pvVar7 != pvVar5);
          uVar10 = (ulong)*param_1;
          pvVar7 = *(void **)(param_1 + 2);
        }
        uVar13 = (ulong)((long)pvVar5 - (long)param_2) >> 5 & 0xffffffff;
        lVar12 = param_3 + uVar13 * 0x20;
        if (lVar12 != param_4) {
          pvVar7 = (void *)((long)pvVar7 + uVar10 * 0x20);
          lVar8 = lVar12;
          do {
            FUN_10109d4e0(pvVar7,lVar8);
            FUN_10109d5e0((long)pvVar7 + 0x10,lVar8 + 0x10);
            lVar8 = lVar8 + 0x20;
            pvVar7 = (void *)((long)pvVar7 + 0x20);
          } while (lVar8 != param_4);
        }
        if (uVar13 != 0) {
          do {
            FUN_10109d6c0(param_2,param_3);
            FUN_10109d748((long)param_2 + 0x10,param_3 + 0x10);
            param_3 = param_3 + 0x20;
            param_2 = (void *)((long)param_2 + 0x20);
          } while (param_3 != lVar12);
        }
      }
      *param_1 = *param_1 + uVar9;
      pvVar5 = *(void **)(param_1 + 2);
      uVar10 = uVar11 >> 5 & 0xffffffff;
    }
    param_2 = (void *)((long)pvVar5 + uVar10 * 0x20);
  }
  return param_2;
}




void FUN_10109d458(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        puVar2 = puVar2 + 4;
        lVar1 = lVar1 + -0x20;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




uint * FUN_10109d4e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10109d554(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 2);
    lVar4 = (ulong)*param_2 * 0x14;
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
      puVar3[1] = uVar6;
      *puVar3 = uVar5;
      puVar2 = (undefined8 *)((long)puVar2 + 0x14);
      lVar4 = lVar4 + -0x14;
      puVar3 = (undefined8 *)((long)puVar3 + 0x14);
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10109d554(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x14);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x14;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar5 + 2);
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 0x14);
        lVar3 = lVar3 + -0x14;
        puVar4 = (undefined8 *)((long)puVar4 + 0x14);
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




uint * FUN_10109d5e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10109d644(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = (ulong)*param_2 << 4;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      uVar5 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar5;
      lVar4 = lVar4 + -0x10;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10109d644(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10109d6c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_10109d554(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar2 = *(undefined8 **)(param_2 + 2);
      lVar4 = (ulong)*param_2 * 0x14;
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        uVar6 = puVar2[1];
        uVar5 = *puVar2;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
        puVar3[1] = uVar6;
        *puVar3 = uVar5;
        puVar2 = (undefined8 *)((long)puVar2 + 0x14);
        lVar4 = lVar4 + -0x14;
        puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_10109d748(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_10109d644(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      lVar4 = (ulong)*param_2 << 4;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        uVar5 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar5;
        lVar4 = lVar4 + -0x10;
        puVar2 = puVar2 + 2;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




uint * FUN_10109d7c0(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((long)pvVar2 + 0x30) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 0x30));
          *(undefined8 *)((long)pvVar2 + 0x28) = 0;
          *(undefined8 *)((long)pvVar2 + 0x30) = 0;
        }
        FUN_10109d458((long)pvVar2 + 0x18,1);
        if (*(void **)((long)pvVar2 + 0x10) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 0x10));
        }
        operator_delete(pvVar2);
        uVar1 = *param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




uint * thunk_FUN_10109d7c0(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((long)pvVar2 + 0x30) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 0x30));
          *(undefined8 *)((long)pvVar2 + 0x28) = 0;
          *(undefined8 *)((long)pvVar2 + 0x30) = 0;
        }
        FUN_10109d458((long)pvVar2 + 0x18,1);
        if (*(void **)((long)pvVar2 + 0x10) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 0x10));
        }
        operator_delete(pvVar2);
        uVar1 = *param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10109d854(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar2 = FUN_10109c494(0x4c);
  if (((uVar2 & 1) != 0) || (iVar1 = FUN_10109c494(0x4d), iVar1 != 0)) {
    *param_2 = *param_2 | 1;
  }
  uVar2 = FUN_10109c494(0x50);
  if (((uVar2 & 1) != 0) || (iVar1 = FUN_10109c494(0x51), iVar1 != 0)) {
    *param_2 = *param_2 | 2;
  }
  uVar2 = FUN_10109c494(0x4e);
  if (((uVar2 & 1) != 0) || (iVar1 = FUN_10109c494(0x4f), iVar1 != 0)) {
    *param_2 = *param_2 | 4;
  }
  iVar1 = FUN_10109c494(0x68);
  if (iVar1 != 0) {
    *param_2 = *param_2 | 8;
  }
  return;
}




void FUN_10109d8f8(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte local_40 [16];
  
  FUN_10109d854(param_1,local_40 + 8);
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  uVar3 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar4 = 0;
    lVar5 = *(long *)(param_1 + 2);
    do {
      uVar6 = uVar4 >> 3 & 0x1fffffff;
      bVar2 = (byte)(1 << (uVar4 & 7));
      bVar1 = local_40[uVar6] & (bVar2 ^ 0xff);
      if (*(char *)(*(long *)(lVar5 + uVar4 * 8) + 0x38) != '\0') {
        bVar1 = local_40[uVar6] | bVar2;
      }
      local_40[uVar6] = bVar1;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    uVar4 = 0;
    do {
      if ((local_40[uVar4 >> 3 & 0x1fffffff] >> (ulong)((uint)uVar4 & 7) & 1) != 0) {
        FUN_10109cff8(*(undefined8 *)(*(long *)(param_1 + 2) + uVar4 * 8),local_40 + 8);
        uVar3 = (ulong)*param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}




undefined4 * FUN_10109d9bc(undefined8 param_1,undefined4 param_2)

{
  undefined4 *local_28;
  
  local_28 = operator_new(0x40);
  *(undefined8 *)(local_28 + 4) = 0;
  *(undefined8 *)(local_28 + 2) = 0;
  *(undefined8 *)(local_28 + 8) = 0;
  *(undefined8 *)(local_28 + 6) = 0;
  *(undefined8 *)(local_28 + 0xc) = 0;
  *(undefined8 *)(local_28 + 10) = 0;
  *(undefined1 *)(local_28 + 0xe) = 0;
  *local_28 = param_2;
  FUN_10109da18(param_1,&local_28);
  return local_28;
}




void FUN_10109da18(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10109dac8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int * FUN_10109da98(uint *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 2);
    do {
      if (*(int *)*puVar2 == param_2) {
        return (int *)*puVar2;
      }
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return (int *)0x0;
}




void FUN_10109dac8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




uint FUN_10109db44(long param_1,uint param_2)

{
  return *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) >> (ulong)(param_2 & 0x1f) & 1;
}




undefined * FUN_10109db58(ulong param_1)

{
  return (&PTR_s_Left_Mouse_Button_10182e048)[param_1 & 0xffffffff];
}




void FUN_10109db68(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_10109db78(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 1);
  uVar1 = *puVar2;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,puVar2);
  *(uint *)((long)param_1 + 0xc) = *puVar2 & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 2) = uVar1 & (*puVar2 ^ 0xffffffff);
  return;
}




void FUN_10109dbd0(long param_1)

{
  FUN_10109db44(param_1 + 8);
  return;
}




void FUN_10109dbd8(long param_1)

{
  FUN_10109db44(param_1 + 0xc);
  return;
}




void FUN_10109dbe0(long param_1)

{
  FUN_10109db44(param_1 + 0x10);
  return;
}




void FUN_10109dbe8(long param_1)

{
  FUN_10109db44(param_1 + 0x14);
  return;
}




void FUN_10109dbf0(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}




undefined8 * FUN_10109dc24(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10182e070;
  *(undefined4 *)(param_1 + 0x101) = 0;
  FUN_1004e4464(param_1 + 0x102,0);
  lVar1 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar1 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 8) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x10) = 0;
    *(undefined4 *)((long)param_1 + lVar1 + 0x18) = 0;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x800);
  lVar1 = 0;
  *(undefined4 *)(param_1 + 0x101) = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar1 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x30) = 0;
    *(undefined4 *)((long)param_1 + lVar1 + 0x38) = 0;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x800);
  return param_1;
}




void FUN_10109dca4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x800);
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x800);
  return;
}




undefined8 * FUN_10109dcec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e070;
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x102));
  return param_1;
}




undefined8 * FUN_10109dd20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e070;
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x102));
  return param_1;
}




void FUN_10109dd54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e070;
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x102));
  operator_delete(param_1);
  return;
}




int FUN_10109dd88(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x810));
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x38);
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  lVar5 = 0;
  iVar4 = 0;
  do {
    if (*(long *)(param_1 + 0x20 + lVar5) != 0) {
      iVar4 = iVar4 + 1;
    }
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  lVar5 = 0;
  *(int *)(param_1 + 0x808) = iVar4;
  do {
    if ((*(byte *)(param_1 + lVar5 + 0x28) & 1) == 0) {
      *(undefined8 *)(param_1 + lVar5 + 0x40) = 0;
    }
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    if (*(long *)(lVar1 + 0x40) != 0) {
      uVar3 = *(uint *)(lVar1 + 0x28);
      uVar2 = uVar3 & 0xfffffffe;
      if (uVar3 < 0xfffffff8) {
        uVar2 = uVar3 + 8;
      }
      *(uint *)(lVar1 + 0x28) = uVar2;
    }
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  uVar6 = 0;
  uVar7 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x28);
  do {
    if (puVar8[3] != 0) {
      lVar5 = param_1 + uVar7 * 0x40;
      uVar10 = puVar8[1];
      uVar9 = *puVar8;
      uVar11 = puVar8[2];
      *(undefined8 *)(lVar5 + 0x40) = puVar8[3];
      *(undefined8 *)(lVar5 + 0x38) = uVar11;
      *(undefined8 *)(lVar5 + 0x30) = uVar10;
      *(undefined8 *)(lVar5 + 0x28) = uVar9;
      if (uVar6 != uVar7) {
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 2) = 0;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    }
    uVar6 = uVar6 + 1;
    puVar8 = puVar8 + 8;
  } while (uVar6 != 0x20);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x810));
  return iVar4;
}




undefined4 FUN_10109decc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x808);
}




long FUN_10109ded4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  plVar4 = (long *)(param_1 + 0x20);
  do {
    if (*plVar4 != 0) {
      uVar1 = uVar2;
      if (iVar3 == (int)param_2) break;
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
    plVar4 = plVar4 + 8;
    uVar1 = param_2;
  } while (uVar2 != 0x20);
  return param_1 + (uVar1 & 0xffffffff) * 0x40 + 8;
}




long FUN_10109df1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10109be28();
  *puVar1 = &PTR_thunk_FUN_10109df9c_10182e090;
  uVar2 = _objc_alloc(&_OBJC_CLASS___CMMotionManager);
  DAT_101ea59e8 = _objc_msgSend(uVar2,"init");
  _objc_msgSend((double)*(float *)(param_1 + 0x30),DAT_101ea59e8,"setDeviceMotionUpdateInterval:");
  return param_1;
}




long thunk_FUN_10109df1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10109be28();
  *puVar1 = &PTR_thunk_FUN_10109df9c_10182e090;
  uVar2 = _objc_alloc(&_OBJC_CLASS___CMMotionManager);
  DAT_101ea59e8 = _objc_msgSend(uVar2,"init");
  _objc_msgSend((double)*(float *)(param_1 + 0x30),DAT_101ea59e8,"setDeviceMotionUpdateInterval:");
  return param_1;
}




void FUN_10109df9c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10109df9c_10182e090;
  _objc_release(DAT_101ea59e8);
  DAT_101ea59e8 = 0;
  FUN_10109be6c(param_1);
  return;
}




void thunk_FUN_10109df9c(void)

{
  FUN_10109df9c();
  return;
}




void FUN_10109dff4(void *param_1)

{
  FUN_10109df9c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_10109e030(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = _objc_msgSend(DAT_101ea59e8,"isDeviceMotionAvailable");
  if ((iVar1 != 0) &&
     (uVar2 = _objc_msgSend(DAT_101ea59e8,"isDeviceMotionActive"), (uVar2 & 1) == 0)) {
    _objc_msgSend((double)*(float *)(param_1 + 0x30),DAT_101ea59e8,"setDeviceMotionUpdateInterval:")
    ;
    _objc_msgSend(DAT_101ea59e8,"startDeviceMotionUpdates");
    return;
  }
  return;
}




void FUN_10109e030(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = _objc_msgSend(DAT_101ea59e8,"isDeviceMotionAvailable");
  if ((iVar1 != 0) &&
     (uVar2 = _objc_msgSend(DAT_101ea59e8,"isDeviceMotionActive"), (uVar2 & 1) == 0)) {
    _objc_msgSend((double)*(float *)(param_1 + 0x30),DAT_101ea59e8,"setDeviceMotionUpdateInterval:")
    ;
    _objc_msgSend(DAT_101ea59e8,"startDeviceMotionUpdates");
    return;
  }
  return;
}




void thunk_FUN_10109e0ac(long *param_1)

{
  int iVar1;
  
  iVar1 = _objc_msgSend(DAT_101ea59e8,"isDeviceMotionAvailable");
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x48))(param_1), iVar1 != 0)) {
    _objc_msgSend(DAT_101ea59e8,"stopDeviceMotionUpdates");
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_10109e0ac(long *param_1)

{
  int iVar1;
  
  iVar1 = _objc_msgSend(DAT_101ea59e8,"isDeviceMotionAvailable");
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x48))(param_1), iVar1 != 0)) {
    _objc_msgSend(DAT_101ea59e8,"stopDeviceMotionUpdates");
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_10109e124(void)

{
  _objc_msgSend(DAT_101ea59e8,"isDeviceMotionAvailable");
  return;
}




void FUN_10109e138(void)

{
  _objc_msgSend(DAT_101ea59e8,"isDeviceMotionAvailable");
  return;
}




void FUN_10109e14c(void)

{
  _objc_msgSend(DAT_101ea59e8,"isDeviceMotionActive");
  return;
}




void FUN_10109e160(void)

{
  _objc_msgSend(DAT_101ea59e8,"isDeviceMotionActive");
  return;
}




void FUN_10109e174(undefined1 param_1 [16],double param_2,double param_3,long param_4)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = _objc_msgSend(DAT_101ea59e8,"isDeviceMotionActive");
  if (iVar2 != 0) {
    uVar3 = _objc_msgSend(DAT_101ea59e8,"deviceMotion");
    dVar1 = (double)_objc_msgSend(uVar3,"userAcceleration");
    *(float *)(param_4 + 0x18) = (float)dVar1;
    uVar3 = _objc_msgSend(DAT_101ea59e8,"deviceMotion");
    _objc_msgSend(uVar3,"userAcceleration");
    *(float *)(param_4 + 0x1c) = (float)param_2;
    uVar3 = _objc_msgSend(DAT_101ea59e8,"deviceMotion");
    _objc_msgSend(uVar3,"userAcceleration");
    *(float *)(param_4 + 0x20) = (float)param_3;
    uVar3 = _objc_msgSend(DAT_101ea59e8,"deviceMotion");
    uVar3 = _objc_msgSend(uVar3,"attitude");
    dVar1 = (double)_objc_msgSend(uVar3,"pitch");
    *(float *)(param_4 + 0x24) = (float)dVar1;
    uVar3 = _objc_msgSend(DAT_101ea59e8,"deviceMotion");
    uVar3 = _objc_msgSend(uVar3,"attitude");
    dVar1 = (double)_objc_msgSend(uVar3,"roll");
    *(float *)(param_4 + 0x28) = (float)dVar1;
    uVar3 = _objc_msgSend(DAT_101ea59e8,"deviceMotion");
    uVar3 = _objc_msgSend(uVar3,"attitude");
    dVar1 = (double)_objc_msgSend(uVar3,"yaw");
    *(float *)(param_4 + 0x2c) = (float)dVar1;
  }
  return;
}




void FUN_10109e294(undefined8 param_1)

{
  if (DAT_101dc0768 != 0) {
    FUN_10109e364(DAT_101dc0768,param_1);
    return;
  }
  return;
}




void FUN_10109e2ac(void)

{
  DAT_101dc0768 = (undefined8 *)FUN_10109dc24();
  *DAT_101dc0768 = &PTR_FUN_10182e120;
  DAT_101d91780 = FUN_10109e294;
  return;
}




void FUN_10109e2e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e120;
  DAT_101d91780 = 0;
  DAT_101dc0768 = 0;
  FUN_10109dcec();
  return;
}




void FUN_10109e30c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e120;
  DAT_101d91780 = 0;
  DAT_101dc0768 = 0;
  FUN_10109dcec();
  operator_delete(param_1);
  return;
}




void FUN_10109e364(float param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  long local_178;
  undefined8 local_170;
  long lStack_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  _pthread_mutex_lock((pthread_mutex_t *)(param_5 + 0x810));
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = (long *)0x0;
  local_178 = _objc_msgSend(param_6,"countByEnumeratingWithState:objects:count:",&local_170,
                            auStack_130,0x10);
  if (local_178 != 0) {
    lVar8 = *local_160;
    dVar15 = (double)param_1;
    do {
      lVar10 = 0;
      do {
        dVar13 = param_3;
        dVar14 = param_4;
        if (*local_160 != lVar8) {
          _objc_enumerationMutation(param_6);
          dVar13 = param_3;
          dVar14 = param_4;
        }
        lVar9 = *(long *)(lStack_168 + lVar10 * 8);
        dVar12 = (double)_objc_msgSend(lVar9,"locationInView:",0);
        dVar12 = dVar12 * dVar15;
        fVar16 = (float)dVar12;
        dVar18 = param_2 * dVar15;
        fVar19 = (float)dVar18;
        uVar4 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
        lVar5 = _objc_msgSend(uVar4,"statusBarOrientation");
        uVar4 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
        _objc_msgSend(uVar4,"bounds");
        param_3 = dVar13;
        param_4 = dVar14;
        uVar4 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
        uVar6 = _objc_msgSend(uVar4,"respondsToSelector:","coordinateSpace");
        fVar17 = fVar16;
        if ((uVar6 & 1) == 0) {
          if (lVar5 == 4) {
            fVar17 = (float)((double)(float)(dVar14 * dVar15) - dVar18);
            fVar19 = fVar16;
          }
          else {
            fVar16 = (float)(dVar13 * dVar15);
            param_2 = (double)(ulong)(uint)fVar16;
            if (lVar5 == 3) {
              fVar17 = fVar19;
              fVar19 = (float)((double)fVar16 - dVar12);
            }
            else if (lVar5 == 2) {
              param_2 = (double)fVar16 - dVar12;
              fVar17 = (float)param_2;
              fVar19 = (float)((double)(float)(dVar14 * dVar15) - dVar18);
            }
          }
        }
        lVar5 = _objc_msgSend(lVar9,"phase");
        if (lVar5 == 0) {
          lVar5 = 0;
          do {
            if ((*(long *)(param_5 + lVar5 + 0x40) == 0) &&
               ((*(byte *)(param_5 + lVar5 + 0x28) >> 2 & 1) == 0)) {
              lVar5 = param_5 + lVar5;
              *(uint *)(lVar5 + 0x28) = *(uint *)(lVar5 + 0x28) | 1;
              uVar2 = _objc_msgSend(lVar9,"tapCount");
              *(uint *)(lVar5 + 0x28) = (*(uint *)(lVar5 + 0x28) & 1 | (uVar2 & 1) << 1) ^ 10;
              *(float *)(lVar5 + 0x2c) = fVar17;
              *(float *)(lVar5 + 0x30) = fVar19;
              *(undefined4 *)(lVar5 + 0x34) = 0;
              *(undefined4 *)(lVar5 + 0x38) = 0;
              *(long *)(lVar5 + 0x40) = lVar9;
              break;
            }
            lVar5 = lVar5 + 0x40;
          } while (lVar5 != 0x800);
        }
        else {
          lVar5 = 0;
          puVar11 = (uint *)(param_5 + 0x28);
          do {
            if ((*(long *)(puVar11 + 6) == lVar9) && (((byte)*puVar11 >> 2 & 1) == 0)) {
              lVar7 = _objc_msgSend(lVar9,"phase");
              if ((lVar7 == 3) || (lVar9 = _objc_msgSend(lVar9,"phase"), lVar9 == 4)) {
                uVar1 = *puVar11;
                uVar2 = uVar1 | 0xfffffff8;
                if ((uVar1 & 0xfffffff8) != 8) {
                  uVar2 = uVar1 & 0xfffffffa;
                }
                *puVar11 = uVar2 | 4;
              }
              lVar5 = param_5 + lVar5 * 0x40;
              fVar16 = fVar19 - *(float *)(lVar5 + 0x30);
              param_2 = (double)(ulong)(uint)fVar16;
              *(float *)(lVar5 + 0x34) = fVar17 - *(float *)(lVar5 + 0x2c);
              *(float *)(lVar5 + 0x38) = fVar16;
              *(float *)(lVar5 + 0x2c) = fVar17;
              *(float *)(lVar5 + 0x30) = fVar19;
              break;
            }
            lVar5 = lVar5 + 1;
            puVar11 = puVar11 + 0x10;
          } while (lVar5 != 0x20);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != local_178);
      local_178 = _objc_msgSend(param_6,"countByEnumeratingWithState:objects:count:",&local_170,
                                auStack_130,0x10);
    } while (local_178 != 0);
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_5 + 0x810));
  if (*(long *)PTR____stack_chk_guard_101444218 != local_b0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(iVar3);
  }
  return;
}




int FUN_10109e8f4(undefined8 param_1,undefined8 param_2)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  
  ppVar1 = (pthread_mutex_t *)(DAT_101dc0780 + 0x18);
  _pthread_mutex_lock(ppVar1);
  lVar2 = DAT_101dc0780;
  *(byte *)(DAT_101dc0780 + 0x14) = *(byte *)(DAT_101dc0780 + 0x14) | 2;
  FUN_1000153b4(lVar2,param_2);
  iVar3 = _pthread_mutex_unlock(ppVar1);
  return iVar3;
}




int FUN_10109ea04(undefined8 param_1,undefined8 param_2)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  
  ppVar1 = (pthread_mutex_t *)(DAT_101dc0780 + 0x18);
  _pthread_mutex_lock(ppVar1);
  lVar2 = DAT_101dc0780;
  *(byte *)(DAT_101dc0780 + 0x14) = *(byte *)(DAT_101dc0780 + 0x14) | 4;
  FUN_1000153b4(lVar2,param_2);
  iVar3 = _pthread_mutex_unlock(ppVar1);
  return iVar3;
}




undefined8 * FUN_10109ecf8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_10109ed5c_10182e140;
  param_1[1] = 0;
  DAT_101ea59f0 = param_1;
  pvVar1 = operator_new(0x58);
  FUN_10109fcec();
  DAT_101dc0780 = pvVar1;
  return param_1;
}




undefined8 * thunk_FUN_10109ecf8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_10109ed5c_10182e140;
  param_1[1] = 0;
  DAT_101ea59f0 = param_1;
  pvVar1 = operator_new(0x58);
  FUN_10109fcec();
  DAT_101dc0780 = pvVar1;
  return param_1;
}




undefined8 * FUN_10109ed5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_10109ed5c_10182e140;
  puVar1 = DAT_101dc0780;
  if (DAT_101dc0780 != (undefined8 *)0x0) {
    _pthread_mutex_destroy((pthread_mutex_t *)(DAT_101dc0780 + 3));
    if ((void *)puVar1[1] != (void *)0x0) {
      operator_delete__((void *)puVar1[1]);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    operator_delete(puVar1);
  }
  DAT_101dc0780 = (undefined8 *)0x0;
  DAT_101ea59f0 = 0;
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_10109ed5c(void)

{
  FUN_10109ed5c();
  return;
}




void FUN_10109edf4(void *param_1)

{
  FUN_10109ed5c();
  operator_delete(param_1);
  return;
}




void FUN_10109ee2c(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  if (((DAT_101ea5a10 & 1) == 0) && (iVar4 = ___cxa_guard_acquire(&DAT_101ea5a10), iVar4 != 0)) {
    FUN_1004e313c(&DAT_101ea59f8);
    ___cxa_atexit(FUN_10109efe0,&DAT_101ea59f8,0x100000000);
    ___cxa_guard_release(&DAT_101ea5a10);
  }
  _pthread_mutex_lock((pthread_mutex_t *)(DAT_101dc0780 + 0x18));
  lVar2 = DAT_101dc0780;
  bVar1 = *(byte *)(DAT_101dc0780 + 0x14);
  if ((bVar1 & 0xf) != 0) {
    FUN_1000153b4(&DAT_101ea59f8,DAT_101dc0780);
    lVar3 = DAT_101dc0780;
    DAT_101ea5a08 = *(undefined4 *)(lVar2 + 0x10);
    DAT_101ea5a0c = *(byte *)(lVar2 + 0x14);
    FUN_1000153b4(DAT_101dc0780,&DAT_101d91650);
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(byte *)(lVar3 + 0x14) = *(byte *)(lVar3 + 0x14) & 0xf0;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(DAT_101dc0780 + 0x18));
  plVar5 = *(long **)(param_1 + 8);
  if ((bVar1 & 0xf) != 0 && plVar5 != (long *)0x0) {
    if ((DAT_101ea5a0c & 1) != 0) {
      (**(code **)(*plVar5 + 0x10))();
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    if ((DAT_101ea5a0c >> 1 & 1) != 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,&DAT_101ea59f8);
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    if ((DAT_101ea5a0c >> 2 & 1) != 0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,&DAT_101ea59f8);
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    if ((DAT_101ea5a0c >> 3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010109ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x40))(DAT_101ea5a08);
      return;
    }
  }
  return;
}




undefined8 * FUN_10109efe0(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_10109f010(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  long local_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  iVar1 = _objc_msgSend(&_OBJC_CLASS___NSThread,"isMainThread");
  if (iVar1 == 0) {
    local_50 = PTR___NSConcreteStackBlock_101444138;
    local_48 = 0xc0000000;
    local_40 = FUN_10109f4f0;
    puStack_38 = &DAT_10182e198;
    local_30 = param_1;
    uStack_28 = param_2;
    _dispatch_sync(PTR___dispatch_main_q_101444238,&local_50);
  }
  else {
    FUN_10109f0d0();
    FUN_10109f140(0x41a00000,param_1);
  }
  return;
}




void FUN_10109f0d0(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_autoreleasePoolPush();
  if (DAT_101dc0770 != 0) {
    _objc_msgSend(DAT_101dc0770,"resignFirstResponder");
    _objc_msgSend(DAT_101dc0770,"removeFromSuperview");
    _objc_release(DAT_101dc0778);
    DAT_101dc0778 = 0;
    _objc_release(DAT_101dc0770);
    DAT_101dc0770 = 0;
  }
  _objc_autoreleasePoolPop(uVar1);
  return;
}




void FUN_10109f140(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 **local_88;
  undefined8 uStack_80;
  long local_78;
  
  uVar3 = _objc_autoreleasePoolPush();
  uVar4 = _objc_alloc(&_OBJC_CLASS___UITextField);
  DAT_101dc0770 = _objc_msgSend(uVar4,"init");
  FUN_10109f79c(DAT_101dc0770,param_5,param_6,param_9);
  local_88 = (undefined8 ***)0x0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_1004e357c(param_3,&local_88);
  local_a0 = (undefined1 *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  FUN_1004e357c(param_10,&local_a0);
  uVar4 = _objc_alloc(&objc::class_t::VirtualKeyboardDelegateObjC);
  DAT_101dc0778 = _objc_msgSend(uVar4,"init");
  _objc_msgSend(DAT_101dc0770,"setDelegate:",DAT_101dc0778);
  pppuVar1 = (undefined8 ***)local_88;
  if (-1 < local_78) {
    pppuVar1 = &local_88;
  }
  uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pppuVar1);
  _objc_msgSend(DAT_101dc0770,"setPlaceholder:",uVar4);
  _objc_msgSend(DAT_101dc0770,"setTextAlignment:",0);
  _objc_msgSend(DAT_101dc0770,"setBorderStyle:",0);
  _objc_msgSend(DAT_101dc0770,"setAutocorrectionType:",(byte)param_11 ^ 1);
  _objc_msgSend(DAT_101dc0770,"setAutocapitalizationType:",0);
  _objc_msgSend(DAT_101dc0770,"setKeyboardAppearance:",0);
  _objc_msgSend(DAT_101dc0770,"setReturnKeyType:",9);
  ppuVar2 = (undefined1 **)local_a0;
  if (-1 < local_90) {
    ppuVar2 = &local_a0;
  }
  uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",ppuVar2);
  _objc_msgSend(DAT_101dc0770,"setText:",uVar4);
  _objc_msgSend(DAT_101dc0770,"setAdjustsFontSizeToFitWidth:",1);
  _objc_msgSend(DAT_101dc0770,"setSecureTextEntry:",param_8);
  if (param_7 == 0) {
    _objc_msgSend(DAT_101dc0770,"setKeyboardType:",0);
  }
  else if (param_7 == 1) {
    _objc_msgSend(DAT_101dc0770,"setKeyboardType:",7);
  }
  else if (param_7 == 2) {
    _objc_msgSend(DAT_101dc0770,"setKeyboardType:",1);
  }
  _objc_msgSend(DAT_101dc0770,"reloadInputViews");
  _objc_msgSend(DAT_101dc0770,"setEnablesReturnKeyAutomatically:",param_11._1_1_ ^ 1);
  uVar4 = DAT_101dc0770;
  uVar5 = _objc_msgSend((double)param_1,&_OBJC_CLASS___UIFont,"fontWithName:size:",&cf_Avenir_Medium
                       );
  _objc_msgSend(uVar4,"setFont:",uVar5);
  uVar4 = DAT_101dc0770;
  uVar5 = _objc_msgSend(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,
                        &_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:");
  _objc_msgSend(uVar4,"setTextColor:",uVar5);
  _objc_msgSend(DAT_101dc0770,"setTextAlignment:",0);
  uVar4 = _objc_msgSend(DAT_101d91768,"view");
  _objc_msgSend(uVar4,"addSubview:",DAT_101dc0770);
  _objc_msgSend(DAT_101dc0770,"becomeFirstResponder");
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  _objc_autoreleasePoolPop(uVar3);
  return;
}




void FUN_10109f4f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10109f0d0();
  FUN_10109f140(0x41a00000,uVar1);
  return;
}




void FUN_10109f54c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined1 param_11)

{
  int iVar1;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  
  *(undefined8 *)(param_2 + 8) = param_3;
  iVar1 = _objc_msgSend(&_OBJC_CLASS___NSThread,"isMainThread");
  if (iVar1 == 0) {
    local_d0 = PTR___NSConcreteStackBlock_101444138;
    local_c8 = 0xc0000000;
    local_c0 = FUN_10109f67c;
    puStack_b8 = &DAT_10182e1b8;
    local_7c = (undefined4)param_1;
    uStack_88 = param_10;
    local_76 = param_11;
    local_b0 = param_2;
    uStack_a8 = param_4;
    local_a0 = param_3;
    uStack_98 = param_5;
    local_90 = param_6;
    local_80 = param_7;
    local_78 = param_8;
    local_77 = param_9;
    _dispatch_sync(PTR___dispatch_main_q_101444238,&local_d0);
  }
  else {
    FUN_10109f0d0();
    FUN_10109f140(param_1,param_2,param_4);
  }
  return;
}




void FUN_10109f67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (DAT_101dc0770 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_10109f0d0();
    FUN_10109f140(*(undefined4 *)(param_1 + 0x54),uVar1,*(undefined8 *)(param_1 + 0x28),param_3,
                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                  *(undefined4 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x58),
                  *(undefined1 *)(param_1 + 0x59),*(undefined8 *)(param_1 + 0x48),
                  *(undefined2 *)(param_1 + 0x5a));
  }
  return;
}




void FUN_10109f6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)uVar1 != 0) {
    FUN_10109f79c(uVar1,param_2,param_3,param_4);
    return;
  }
  local_70 = PTR___NSConcreteStackBlock_101444138;
  local_68 = 0xc0000000;
  local_60 = FUN_10109f8f0;
  puStack_58 = &DAT_10182e1d8;
  local_38 = (undefined1)param_4;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  _dispatch_sync(PTR___dispatch_main_q_101444238,&local_70);
  return;
}




void FUN_10109f79c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar11;
  undefined8 uVar10;
  
  uVar3 = _objc_autoreleasePoolPush();
  if (DAT_101dc0770 != 0) {
    uVar8 = *param_2;
    uVar9 = *param_3;
    fVar11 = (float)((ulong)uVar9 >> 0x20);
    if ((((float)DAT_101dc1cb8 != (float)uVar9) ||
        (uVar4 = DAT_101dc1cb8, uVar10 = DAT_101873a38,
        (float)((ulong)DAT_101dc1cb8 >> 0x20) != fVar11)) &&
       (uVar4 = uVar8, uVar10 = uVar9, (param_4 & 1) == 0)) {
      uVar4 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
      iVar2 = _objc_msgSend(uVar4,"respondsToSelector:","nativeScale");
      uVar4 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
      pcVar1 = "nativeScale";
      if (iVar2 == 0) {
        pcVar1 = "scale";
      }
      dVar6 = (double)_objc_msgSend(uVar4,pcVar1);
      uVar4 = NEON_fmov(0x3f800000,4);
      fVar5 = (float)uVar4 / (float)(dVar6 * (double)DAT_101867558);
      fVar7 = (float)((ulong)uVar4 >> 0x20) / (float)(dVar6 * (double)DAT_101867558);
      uVar4 = CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar7,(float)uVar8 * fVar5);
      uVar10 = CONCAT44(fVar11 * fVar7,(float)uVar9 * fVar5);
    }
    _objc_msgSend((double)(int)(float)uVar4,(double)(int)(float)((ulong)uVar4 >> 0x20),
                  (double)(int)(float)uVar10,(double)(int)(float)((ulong)uVar10 >> 0x20),
                  DAT_101dc0770,"setFrame:");
  }
  _objc_autoreleasePoolPop(uVar3);
  return;
}




void FUN_10109f8f0(long param_1)

{
  FUN_10109f79c(param_1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined1 *)(param_1 + 0x38));
  return;
}




void FUN_10109f8fc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  long local_48;
  
  if (param_2 != 0) {
    if (DAT_101dc0770 == 0) {
      FUN_1000153b4(param_2,&DAT_101d91650);
    }
    else {
      iVar1 = _objc_msgSend(&_OBJC_CLASS___NSThread,"isMainThread");
      if (iVar1 == 0) {
        local_68 = PTR___NSConcreteStackBlock_101444138;
        local_60 = 0xc0000000;
        local_58 = FUN_10109fa3c;
        puStack_50 = &DAT_10182e1f8;
        local_48 = param_2;
        _dispatch_sync(PTR___dispatch_main_q_101444238,&local_68);
      }
      else {
        uVar2 = _objc_msgSend(DAT_101dc0770,"text");
        lVar3 = _objc_msgSend(uVar2,"UTF8String");
        if (lVar3 != 0) {
          FUN_1004e3148(param_2,lVar3);
        }
      }
    }
  }
  iVar1 = _objc_msgSend(&_OBJC_CLASS___NSThread,"isMainThread");
  if (iVar1 == 0) {
    local_90 = PTR___NSConcreteStackBlock_101444138;
    local_88 = 0xc0000000;
    local_80 = thunk_FUN_10109f0d0;
    puStack_78 = &DAT_10182e1f8;
    local_70 = param_1;
    _dispatch_sync(PTR___dispatch_main_q_101444238,&local_90);
  }
  else {
    FUN_10109f0d0();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_10109fa3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _objc_msgSend(DAT_101dc0770,"text");
  lVar2 = _objc_msgSend(uVar1,"UTF8String");
  if (lVar2 != 0) {
    FUN_1004e3148(*(undefined8 *)(param_1 + 0x20),lVar2);
    return;
  }
  return;
}




void thunk_FUN_10109f0d0(void)

{
  FUN_10109f0d0();
  return;
}




void FUN_10109fa94(long param_1,long param_2)

{
  if ((param_2 != 0) && (*(long *)(param_1 + 8) != param_2)) {
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_10109fab0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_101dc0770 != 0) && (*(long *)(param_1 + 8) == param_2)) {
    iVar3 = _objc_msgSend(&_OBJC_CLASS___NSThread,"isMainThread");
    if (iVar3 == 0) {
      local_70 = PTR___NSConcreteStackBlock_101444138;
      local_68 = 0xc0000000;
      local_60 = FUN_10109fbd0;
      puStack_58 = &DAT_10182e1f8;
      local_50 = param_3;
      _dispatch_sync(PTR___dispatch_main_q_101444238,&local_70);
    }
    else {
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(param_3,&local_48);
      lVar2 = DAT_101dc0770;
      pppuVar1 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar1 = &local_48;
      }
      uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pppuVar1);
      _objc_msgSend(lVar2,"setText:",uVar4);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_10109fbd0(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1004e357c(*(undefined8 *)(param_1 + 0x20),&local_38);
  uVar2 = DAT_101dc0770;
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pppuVar1);
  _objc_msgSend(uVar2,"setText:",uVar3);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_10109fc74(long *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3120(auStack_30,"");
  (**(code **)(*param_1 + 0x48))(param_1,param_2,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_10109fce8(void)

{
  return;
}




long FUN_10109fcec(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1004e313c();
  FUN_1004e4464(lVar1 + 0x18,0);
  FUN_1000153b4(param_1,&DAT_101d91650);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf0;
  return param_1;
}




void FUN_10109fd74(void)

{
  DAT_101dc0788 = 0;
  DAT_101dc078c = 0;
  DAT_101dc0794 = 0;
  return;
}




void FUN_10109fd8c(void)

{
  DAT_101dc0788 = 0;
  DAT_101dc078c = 0;
  DAT_101dc0794 = 0;
  return;
}




void FUN_10109fda4(void)

{
  FUN_10109fdc4(0x3727c5ac);
  FUN_10109feb0(0x40a00000);
  return;
}




void FUN_10109fdc4(float param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  
  iVar1 = FUN_10109c588();
  if (iVar1 == 2) {
    puVar2 = (uint *)FUN_10109c59c(0);
    puVar3 = (uint *)FUN_10109c59c(1);
    fVar4 = SQRT(((float)puVar2[1] - (float)puVar3[1]) * ((float)puVar2[1] - (float)puVar3[1]) +
                 ((float)puVar2[2] - (float)puVar3[2]) * ((float)puVar2[2] - (float)puVar3[2]));
    if ((((0xf < (int)*puVar2) && ((*puVar2 & 1) != 0)) && (0xf < (int)*puVar3)) &&
       ((*puVar3 & 1) != 0)) {
      DAT_101dc078c._4_4_ = fVar4 - (float)DAT_101dc078c;
    }
    DAT_101dc078c._0_4_ = fVar4;
    if (((0xf < (int)*puVar2) && ((*puVar2 & 1) != 0)) &&
       ((0xf < (int)*puVar3 && ((*puVar3 & 1) != 0)))) {
      DAT_101dc0788 = param_1 < ABS(DAT_101dc078c._4_4_);
    }
  }
  else {
    DAT_101dc0788 = 0;
    DAT_101dc078c._0_4_ = 0.0;
    DAT_101dc078c._4_4_ = 0.0;
  }
  return;
}




void FUN_10109feb0(float param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = FUN_10109c588();
  if (iVar2 == 0) {
    DAT_101dc0794 = 0;
    DAT_101dc07a0 = 0;
    DAT_101dc07a8 = 0;
    return;
  }
  puVar3 = (uint *)FUN_10109c59c(0);
  uVar1 = *puVar3;
  uVar5 = *(undefined8 *)(puVar3 + 1);
  if ((int)uVar1 >> 3 != 1) {
    if ((int)uVar1 >> 3 != -1) {
      if ((int)uVar1 < 0x10 || (uVar1 & 1) == 0) {
        return;
      }
      fVar6 = (float)((ulong)uVar5 >> 0x20);
      if (DAT_101dc0794 == '\0') {
        fVar7 = (float)uVar5 - (float)DAT_101dc0798;
        fVar6 = fVar6 - DAT_101dc0798._4_4_;
        if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) <= param_1) {
          return;
        }
        DAT_101dc0794 = 1;
        DAT_101dc07a0 = uVar5;
        DAT_101dc07a8 = 0;
        return;
      }
      puVar4 = &DAT_101dc07a0;
      DAT_101dc07a8 =
           CONCAT44(fVar6 - (float)((ulong)DAT_101dc07a0 >> 0x20),
                    (float)uVar5 - (float)DAT_101dc07a0);
      goto LAB_10109fef8;
    }
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  puVar4 = &DAT_101dc0798;
LAB_10109fef8:
  *puVar4 = uVar5;
  return;
}




void FUN_10109ffa0(void)

{
  DAT_101dc0788 = 0;
  DAT_101dc078c = 0;
  DAT_101dc0794 = 0;
  return;
}




undefined8 * FUN_10109ffb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e228;
  FUN_10109c67c();
  return param_1;
}




undefined8 * FUN_10109ffe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e228;
  FUN_10109c67c();
  return param_1;
}

