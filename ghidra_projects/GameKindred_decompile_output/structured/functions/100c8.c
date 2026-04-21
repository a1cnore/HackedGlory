// functions/100c8 — 1578 functions
#include "GameKindred.h"




undefined8 FUN_100c80178(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c80188(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.0954758e-08 + 25.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c801ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c801f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c80208(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849193e-09 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8026c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c8027c(ulong param_1,float *param_2)

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




ulong FUN_100c802d4(ulong param_1,float *param_2)

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




ulong FUN_100c80338(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.0023435e-08 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c8039c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c803e0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c80490(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c804a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c804b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c804bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c804cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c804dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c804ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c804f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c80508(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c80518(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4120000041000000;
  return 1;
}




undefined8 FUN_100c8052c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80538(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c8054c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80588(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c805c4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c80658:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c80658;
          fVar5 = *(float *)(&DAT_1012cb880 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cb880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb880 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c80678(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c80688(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80694(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c806a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c806b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c806bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c806cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c806dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c806ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c806f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3cf5c28f;
  return 1;
}




undefined8 FUN_100c8070c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42b40000;
  return 1;
}




undefined8 FUN_100c8071c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c8072c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80770(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c807ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c807e8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c80824(int param_1,undefined8 *param_2)

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




void FUN_100c80850(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c808e4:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c808e4;
          fVar5 = *(float *)(&DAT_1012cb980 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cb980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cb980 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c80904(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c80914(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80920(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8092c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8093c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80948(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c80958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c80968(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c80978(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c8098c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4ccccd3f000000;
  return 1;
}




undefined8 FUN_100c809a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c809ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c809c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80a04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80a40(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80a7c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c80ab8(int param_1,undefined8 *param_2)

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




void FUN_100c80ae4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c80b94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c80ba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c80bb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80bc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c80bd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80bdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c80bec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80bf8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c80c08(ulong param_1,float *param_2)

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




undefined8 FUN_100c80c6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003dcccccd;
  return 1;
}




undefined8 FUN_100c80c80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c80c8c(ulong param_1,float *param_2)

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




ulong FUN_100c80cf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011c1820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80d38(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c80d7c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c80d8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c80d9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe99999a;
  return 1;
}




undefined8 FUN_100c80db0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80dbc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c80dcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80dd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




undefined8 FUN_100c80de8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c80df4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c80e04(ulong param_1,float *param_2)

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




undefined8 FUN_100c80e68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003dcccccd;
  return 1;
}




undefined8 FUN_100c80e7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c80e88(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c80ef0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80f34(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80f78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c80fbc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c81000(int param_1,undefined8 *param_2)

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




void FUN_100c8102c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8107c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8108c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81098(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c810a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c810b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c810c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c810d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c810dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c810ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c81100(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003f333333;
  return 1;
}




undefined8 FUN_100c81114(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c81120(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c81188(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c811cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81210(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8124c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c81290(int param_1,undefined8 *param_2)

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




void FUN_100c812bc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012d5a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d5a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c81364(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c81374(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + -2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c813d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c813e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c813f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81400(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c81410(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8141c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8142c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81438(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41700000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c81448(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81454(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c81468(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c814ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c814e8(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (0 < param_2) {
    uVar1 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar1;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      *(undefined4 *)((long)param_3 + 0xc) = param_1;
      param_3 = param_3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c81518(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c81528(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81534(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81540(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c81550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8155c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8156c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81578(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c81588(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81594(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40f6666640f66666;
  return 1;
}




undefined8 FUN_100c815ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c815b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c815c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8160c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c81648(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cba80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cba80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cba80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c816f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c81700(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8170c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81718(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c81728(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81734(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c81744(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81750(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c81760(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8176c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8177c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81788(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3eb33333;
  return 1;
}




ulong FUN_100c8179c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c817e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8181c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 2.2, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012cbb80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cbb80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cbb80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c818d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c818e4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
LAB_100c8196c:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8196c;
          fVar4 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar4 * 10.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c8198c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c8199c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c819ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c819b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c819c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c819d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c819e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c819f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c81a00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81a0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c81a1c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81a58(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c81a94(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d5880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c81b40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c81b50(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cbc80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cbc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cbc80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c81bf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81c00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c81c10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c81c20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c81c30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c81c40(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c81c50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c81c60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c81c70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81c7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




ulong FUN_100c81c8c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81cc8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81d04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81d40(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c81d7c(int param_1,undefined8 *param_2)

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




undefined8 FUN_100c81da8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c81db8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c81dc8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c81dd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c81de8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c81df8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81e04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




ulong FUN_100c81e14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81e50(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81e8c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81ec8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c81f04(int param_1,undefined8 *param_2)

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




undefined8 FUN_100c81f30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c81f40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81f4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c81f5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c81f68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_100c81f78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42700000;
  return 1;
}




undefined8 FUN_100c81f88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3eb33333;
  return 1;
}




ulong FUN_100c81f9c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c81fd8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c82014(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c82050(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8208c(int param_1,undefined8 *param_2)

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




void FUN_100c820b8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cbd80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cbd80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cbd80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c82160(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c82170(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + -2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c821d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c821e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c821f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c821fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8220c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c8221c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8222c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82238(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c82248(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82254(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c82268(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c822ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c822e8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.8;
      if ((fVar5 < 1.0) && (fVar4 = 0.6, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.8;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cbe80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cbe80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cbe80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      fVar6 = 1.0;
      if ((fVar5 < 0.8) && (fVar6 = 0.066667, 0.0 < fVar5)) {
        fVar5 = fVar5 * 80.0;
        uVar1 = (int)fVar5 + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012cbf80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012cbf80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cbf80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar6;
      param_4 = param_4 + 1;
      param_3[2] = 0.0;
      param_3[3] = 1.0;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c82404(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c82414(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c82424(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82430(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c82440(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c82450(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c82460(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c82470(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c82480(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c82490(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c0000040400000;
  return 1;
}




undefined8 FUN_100c824a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c824b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fa00000;
  return 1;
}




ulong FUN_100c824c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c824fc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ae0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c82540(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8257c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c825b8(int param_1,undefined8 *param_2)

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




void FUN_100c825e4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.9;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012d4680 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d4680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4680 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c826a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c826b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_100c826c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c826d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc100000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c826ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c826fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_100c8270c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82718(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c82728(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.7252903e-09 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c8278c(ulong param_1,undefined8 *param_2)

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




ulong FUN_100c82804(ulong param_1,float *param_2)

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




ulong FUN_100c8285c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.35;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c828c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011a3fe0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c82908(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a50,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8294c(float param_1,ulong param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (0 < (int)param_2) {
    uVar4 = param_2 & 0xffffffff;
    uVar6 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar6;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar7 = 0.5;
      if ((fVar5 < 1.0) && (fVar7 = 1.9, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar7 = 0.5;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_1012cff80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cff80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cff80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      iVar3 = _rand();
      *(float *)((long)param_3 + 0xc) = ((float)iVar3 * 1.8626451e-09 + -2.0) * fVar7;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_100c82a84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c82a94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe19999a;
  return 1;
}




undefined8 FUN_100c82aa8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82ab4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c82acc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c82adc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_100c82aec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82af8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c82b08(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849193e-10 + 3.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c82b6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




undefined8 FUN_100c82b84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c82b90(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.4924597e-10 + 0.25;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c82bf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181850,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c82c38(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c82c7c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012d3480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d3480 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3480 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c82d2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c82d3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c82d4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82d58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c82d68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82d74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c82d84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82d90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c82da0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82dac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41700000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c82dbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c82dc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c82ddc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c82e20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c82e5c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 1.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.0, 0.5 < fVar4)) {
        fVar4 = fVar4 * 128.0 + -64.0;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 1.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d1f80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012d1f80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d1f80 + (ulong)(uint)(int)fVar4 * 4));
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




undefined8 FUN_100c82ff4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83004(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_100c83014(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
LAB_100c830a0:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c830a0;
          fVar4 = *(float *)(&DAT_1012d2080 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2080 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar4 * 1500.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c830c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c830d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c830dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c830ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c830f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c83108(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c8311c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40c00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8312c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_100c8313c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c83150(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8318c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c831c8(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = (float)iVar3 * 4.656613e-10;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
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
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_100c832d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c832e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c832f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c832fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd00000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83314(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c83324(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c83334(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83340(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c83350(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + -0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c833b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000040000000;
  return 1;
}




ulong FUN_100c833c8(ulong param_1,float *param_2)

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




ulong FUN_100c83420(ulong param_1,float *param_2)

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




ulong FUN_100c83488(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c834cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c83510(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = (float)iVar3 * 4.656613e-10;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
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
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_100c83618(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83628(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbfb33333;
  return 1;
}




undefined8 FUN_100c8363c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83648(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc080000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83660(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c83670(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-09 + 15.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c836d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c836e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c836f0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 8.381903e-09 + -6.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c83754(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f333333;
  return 1;
}




undefined8 FUN_100c83768(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c83774(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939678e-10 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c837dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181900,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c83820(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ab0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c83864(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c83914(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83924(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83930(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8393c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8394c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c83968(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83974(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c83984(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c83998(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 2.3283064e-09 + 8.0,
                          (float)uVar5 * 9.313226e-10 + 1.0);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c83a14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c83a20(ulong param_1,float *param_2)

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




ulong FUN_100c83a88(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c83ac4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c83b08(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

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
      if (1.0 <= fVar4) {
LAB_100c83ba4:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c83ba4;
          fVar3 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar3;
      param_3[2] = 0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 1.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.2, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d3180 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d3180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d3180 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c83c38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83c48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_100c83c58(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
LAB_100c83ce4:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c83ce4;
          fVar4 = *(float *)(&DAT_1012d2080 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012d2080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2080 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar4 * 1500.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c83d04(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83d14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83d20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c83d30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83d3c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c83d4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c83d60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40c00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c83d70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_100c83d80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c83d94(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c83dd0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c83e0c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = 0.9, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cc080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012cc080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc080 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.7, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cc180 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012cc180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc180 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c83f3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83f4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_100c83f5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83f68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c83f78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83f84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c83f94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c83fa0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c83fb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




ulong FUN_100c83fc4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a40,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




undefined8 FUN_100c84008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84014(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c84028(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c84064(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c840a0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
  float fVar10;
  
  if (0 < (int)param_2) {
    fVar6 = param_1 + param_1;
    uVar1 = (int)(param_1 * 128.0) + 1;
    bVar4 = fVar6 < 1.0;
    uVar5 = (ulong)param_2;
    fVar7 = 0.0;
    if (bVar4) {
      fVar7 = 1.0;
    }
    if (bVar4 && 0.0 < fVar6) {
      fVar7 = 0.0;
    }
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar8 = fVar7;
      if ((bVar4 && 0.0 < fVar6) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(param_1 * 128.0) * 4) +
                (param_1 * 128.0 - (float)(int)(param_1 * 128.0)) *
                (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(param_1 * 128.0) * 4));
      }
      lVar3 = param_5 + (ulong)*param_4 * 4;
      fVar10 = (param_1 - *(float *)(lVar3 + 0x48000)) / *(float *)(lVar3 + 0x50000);
      fVar9 = 0.3;
      if ((fVar10 < 1.0) && (fVar9 = 0.6, 0.2 < fVar10)) {
        fVar10 = fVar10 * 80.0 + -16.0;
        uVar2 = (int)fVar10 + 1;
        fVar9 = 0.3;
        if (uVar2 < 0x40) {
          fVar9 = *(float *)(&DAT_1012cc280 + (ulong)(uint)(int)fVar10 * 4) +
                  (fVar10 - (float)(int)fVar10) *
                  (*(float *)(&DAT_1012cc280 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_1012cc280 + (ulong)(uint)(int)fVar10 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar9 * fVar8;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_100c841e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c841f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c84200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8420c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8421c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8422c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8423c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c8424c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8425c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40600000;
  return 1;
}




undefined8 FUN_100c8426c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8427c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84288(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c84298(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c842d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c84310(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 1.0) && (fVar5 = 0.6, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cfe80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cfe80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cfe80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c843c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c843d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c843e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c843f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c84400(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8440c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8441c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84428(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c84438(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_100c8444c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x40e0000040400000;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_100c84470(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8447c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c8448c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c844c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c84504(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c84598:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c84598;
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




undefined8 FUN_100c845b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c845c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c845d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c845e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c845f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c84604(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c84614(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84620(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c84630(ulong param_1,float *param_2)

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




undefined8 FUN_100c84694(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f800000;
  return 1;
}




undefined8 FUN_100c846a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c846b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c846c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181850,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c84708(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011a41b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8474c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c84788(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c847c4(int param_1,undefined8 *param_2)

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




void FUN_100c847ec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c84880:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c84880;
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




undefined8 FUN_100c848a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c848b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c848c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c848cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c848dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c848ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c848fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84908(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c84918(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c84928(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000040c00000;
  return 1;
}




undefined8 FUN_100c8493c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84948(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c84958(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8499c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c849d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c84a14(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c84a50(int param_1,undefined8 *param_2)

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




void FUN_100c84a78(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
LAB_100c84b84:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c84b84;
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




undefined8 FUN_100c84ba4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c84bb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c84bc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84bd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c84be8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c84bf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41400000;
  return 1;
}




undefined8 FUN_100c84c08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84c14(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c84c24(ulong param_1,float *param_2)

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




undefined8 FUN_100c84c88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3dcccccd3dcccccd;
  return 1;
}




ulong FUN_100c84ca0(ulong param_1,float *param_2)

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




ulong FUN_100c84cf8(ulong param_1,float *param_2)

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




ulong FUN_100c84d60(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c84da4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c84de0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c84e1c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c84e58(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar6 < 0.5) && (fVar5 = 0.5, 0.4 < fVar6)) {
        fVar6 = fVar6 * 640.00006 + -256.00003;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1012cc580 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012cc580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc580 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_100c84f18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c84f28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_100c84f34(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = fVar5 * -5100.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c84fdc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c84fec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c84ff8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c85008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85014(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85024(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85030(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c85040(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8504c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c8505c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c850a0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c850dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c85118(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c85154(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c851f0:
        fVar6 = -0.0;
      }
      else {
        fVar6 = 0.3;
        if (0.0 < fVar5) {
          uVar1 = (int)(fVar5 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c851f0;
          fVar6 = *(float *)(&DAT_1012cc680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cc680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c85210(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85220(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_100c85230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc53b8000;
  return 1;
}




undefined8 FUN_100c85244(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85254(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c85270(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c85280(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85290(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c852a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c852b4(ulong param_1,float *param_2)

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




undefined8 FUN_100c8530c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c85320(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8535c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c85398(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c853d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c85410(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c854b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c854c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_100c854d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c854e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c854f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85500(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c85510(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c85520(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85530(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_100c85544(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40c000003f800000;
  return 1;
}




undefined8 FUN_100c85558(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85564(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c85574(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c855b8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c855f4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000);
      fVar4 = *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      *param_3 = 0;
      *(float *)(param_3 + 1) = (param_1 - fVar3) / fVar4;
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
      *(float *)((long)param_3 + 0xc) = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c856b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c856c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c856d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c856dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c856ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c856f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c85708(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c85718(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85728(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85734(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c85744(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85750(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c85760(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c857a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c857e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c857f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85800(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8580c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85818(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85828(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85834(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c85844(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c85854(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85864(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85870(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c85880(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8588c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c8589c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c858e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c8591c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8592c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8593c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85948(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85954(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c85980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c85990(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c859a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c859ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c859bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c859c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c859d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c85a1c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c85a58(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      lVar1 = param_5 + (ulong)*param_4 * 4;
      fVar3 = *(float *)(lVar1 + 0x48000);
      fVar4 = *(float *)(lVar1 + 0x50000);
      *param_3 = 0;
      *(float *)(param_3 + 1) = (param_1 - fVar3) / fVar4;
      *(undefined4 *)((long)param_3 + 0xc) = 0x3f800000;
      param_3 = param_3 + 2;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c85aa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85ab4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85ac0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85acc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85adc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85ae8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c85af8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c85b08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85b18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85b24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c85b34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85b40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c85b50(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c85b94(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c85bd0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85be0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85bf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85bfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85c08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85c18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85c24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c85c34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c85c44(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85c54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85c60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c85c70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85c7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c85c8c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c85cd0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c85d0c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85d1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85d2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85d38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85d44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85d54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85d60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c85d70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




undefined8 FUN_100c85d80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85d90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85d9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c85dac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85db8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c85dc8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c85e0c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c85e48(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85e58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85e68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85e74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85e80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c85e90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85e9c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c85eac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_100c85ebc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c85ecc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85ed8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c85ee8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c85ef4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




ulong FUN_100c85f04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c85f48(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c85f84(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012cc780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cc780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c86034(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86044(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c86054(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86060(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86070(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8607c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8608c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86098(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c860a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c860b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c860c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c860d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c860e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c86124(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c86160(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012cc880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cc880 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc880 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c86208(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c86218(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 3.0;
      if ((fVar5 < 0.4) && (fVar4 = 0.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 160.0;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 3.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cc980 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012cc980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cc980 + (ulong)(uint)(int)fVar5 * 4));
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




undefined8 FUN_100c862b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c862c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c862d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c862e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c862ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c862fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8630c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + -0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c86370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4000003fa00000;
  return 1;
}




undefined8 FUN_100c86384(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c86394(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 5.820766e-10 + 0.75;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c863f8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x41f0000041100000;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c8641c(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f800000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c86448(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar4 = *(float *)(&DAT_1012cca80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cca80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cca80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c864f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c86500(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 1.5;
      if ((fVar5 < 0.4) && (fVar4 = 0.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 160.0;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.5;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012ccb80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012ccb80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ccb80 + (ulong)(uint)(int)fVar5 * 4));
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




undefined8 FUN_100c865a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c865ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c865bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c865c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c865d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c865e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c865f4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10 + -0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c86658(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4000003fa00000;
  return 1;
}




undefined8 FUN_100c8666c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_100c8667c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 5.820766e-10 + 0.75;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c866e0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x4140000040e00000;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c86704(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f800000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_100c86730(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar3 = *(float *)(&DAT_1012d5980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5980 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c86848(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_100c86858(ulong param_1,float *param_2)

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




undefined8 FUN_100c868bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c868cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c868dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c868e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c868f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86904(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c86914(ulong param_1,float *param_2)

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




undefined8 FUN_100c86978(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c86988(ulong param_1,float *param_2)

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




undefined8 FUN_100c869e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_100c869f4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c86a38(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c86a74(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c86ab0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c86aec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012d5a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d5a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c86b94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86ba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c86bb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86bc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86bd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c86be0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c86bf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86bfc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c86c0c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c86c70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




undefined8 FUN_100c86c84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c86c90(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 7.916242e-11 + 0.23;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c86cf8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181660,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c86d3c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181320,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c86d80(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012d5b80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d5b80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5b80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c86e28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86e38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_100c86e48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86e54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86e64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c86e74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c86e84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86e90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c86ea0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c86eb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000040400000;
  return 1;
}




undefined8 FUN_100c86ec8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c86ed8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c86eec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c86f28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c86f64(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3ecccccd3f800000;
      *(undefined4 *)(param_3 + 1) = 0x3f19999a;
      lVar1 = param_5 + (ulong)*param_4 * 4;
      *(float *)((long)param_3 + 0xc) =
           (*(float *)(lVar1 + 0x48000) - param_1) / *(float *)(lVar1 + 0x50000) + 1.0;
      param_3 = param_3 + 2;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c86fc4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86fd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86fe0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c86fec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c86ffc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87014(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42a00000;
  return 1;
}




undefined8 FUN_100c87024(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0x3f8000003f19999a;
  *param_2 = 0x3ecccccd3f800000;
  return 1;
}




undefined8 FUN_100c87038(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e6147ae;
  return 1;
}




undefined8 FUN_100c8704c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3df5c28f3df5c28f;
  return 1;
}




ulong FUN_100c87064(ulong param_1,float *param_2)

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




undefined8 FUN_100c870bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f99999a;
  return 1;
}




ulong FUN_100c870d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c87114(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ae0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c87158(uint param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  if (0 < (int)param_1) {
    uVar1 = (ulong)param_1;
    do {
      param_2[1] = 0x3e4ccccd3f800000;
      *param_2 = 0x3f8000003f800000;
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 2;
    } while (uVar1 != 0);
  }
  return;
}




undefined8 FUN_100c8717c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8718c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c871a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c871b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c871c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c871d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c871e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c871f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c871fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41500000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8720c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87218(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c87228(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181930,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8726c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c872a8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
LAB_100c873bc:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.5;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c873bc;
          fVar3 = *(float *)(&DAT_1012d2180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d2180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d2180 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c873dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c873ec(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = fVar4 * 15.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c8749c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c874a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c874c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c874d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c874e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c874f0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c87500(ulong param_1,float *param_2)

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




undefined8 FUN_100c87564(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




ulong FUN_100c8757c(ulong param_1,float *param_2)

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




ulong FUN_100c875d4(ulong param_1,float *param_2)

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




ulong FUN_100c87638(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8767c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c876c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c87704(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c87748(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c877dc:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c877dc;
          fVar5 = *(float *)(&DAT_1012ccc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ccc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ccc80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c877fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8780c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_100c8781c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87828(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87838(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87844(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c87854(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87860(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c87870(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c87880(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x41a0000040a00000;
  return 1;
}




undefined8 FUN_100c87894(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c878a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c878b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c878ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a50,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c87930(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0x3f80000000000000;
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c87944(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87954(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c87964(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87970(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87980(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8798c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87998(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c879a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c879b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c879c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f333333;
  return 1;
}




undefined8 FUN_100c879dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c879e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c879f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c87a3c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c87a78(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012ccd80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ccd80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ccd80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c87b20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87b30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87b3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87b48(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87b58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87b64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87b70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_100c87b80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c87b90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87b9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c87bac(ulong param_1,float *param_2)

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




ulong FUN_100c87c04(ulong param_1,float *param_2)

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




ulong FUN_100c87c6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c87ca8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c87ce4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c87cf4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87d04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbfc00000;
  return 1;
}




undefined8 FUN_100c87d14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87d20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87d30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c87d40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87d4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c87d5c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c87d6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c87d7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_100c87d8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87d98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c87dac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c87df0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c87e2c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c87e3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87e4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87e58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87e64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c87e74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87e80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87e8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c87e9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c87eac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87eb8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_100c87ec8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c87ed4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c87ee8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c87f2c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c87f68(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c88018(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88028(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88034(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88040(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88050(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8805c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8806c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8807c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8808c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88098(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c880a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c880b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c880c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88100(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8813c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c881d0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c881d0;
          fVar5 = *(float *)(&DAT_1012ccf80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ccf80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ccf80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c881f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88200(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c88210(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43fa0000;
  return 1;
}




undefined8 FUN_100c88220(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88230(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8823c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8824c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88258(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c88268(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88274(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c88284(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88290(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c882a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c882e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c8831c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8832c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88338(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c88348(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88354(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003e800000;
  return 1;
}




ulong FUN_100c88368(ulong param_1,float *param_2)

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




undefined8 FUN_100c883c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c883d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88410(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8844c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)fVar6 * 4));
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




undefined8 FUN_100c88508(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88518(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c88528(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88534(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88544(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88550(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c88560(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42340000;
  return 1;
}




undefined8 FUN_100c88570(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c88580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_100c88590(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




undefined8 FUN_100c885a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c885b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c885c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88600(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8863c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c886d0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c886d0;
          fVar5 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c886f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88700(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c88710(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8871c(ulong param_1,float *param_2)

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




undefined8 FUN_100c887a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c887b0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-09 + 15.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c88814(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88820(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c88830(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-09 + 10.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c88894(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




undefined8 FUN_100c888a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c888b4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849196e-11 + 0.15;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c8891c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88960(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c889a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c889b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43160000;
  return 1;
}




undefined8 FUN_100c889c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c889d0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 2.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c88a34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003f000000;
  return 1;
}




undefined8 FUN_100c88a48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c88a54(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.1641532e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c88ab8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88afc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c88b40(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar8 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.0;
      if (1.0 <= fVar8) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = 0.0;
        if (0.0 < fVar8) {
          fVar7 = fVar8 * 64.0;
          uVar4 = (uint)(fVar8 * 64.0);
          uVar1 = uVar4 + 1;
          fVar6 = 0.0;
          fVar5 = 0.0;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_1012cfc80 + (ulong)uVar4 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1012cfc80 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012cfc80 + (ulong)uVar4 * 4));
            fVar6 = *(float *)(&DAT_1012cfc80 + (ulong)uVar4 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1012cfc80 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012cfc80 + (ulong)uVar4 * 4));
          }
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_4 = param_4 + 1;
      param_3[2] = 0.0;
      param_3[3] = param_1;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c88c14(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88c24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c88c34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88c40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88c50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88c5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c88c6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42960000;
  return 1;
}




undefined8 FUN_100c88c7c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c88c8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c88ca0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c88cb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88cbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c88ccc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88d08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88d44(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c88d80(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c88dbc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_2) {
    uVar1 = (int)(param_1 * 64.0) + 1;
    bVar4 = param_1 < 1.0;
    uVar5 = (ulong)param_2;
    fVar7 = 0.1;
    if (bVar4) {
      fVar7 = 1.0;
    }
    if (bVar4 && 0.0 < param_1) {
      fVar7 = 0.1;
    }
    do {
      lVar3 = param_5 + (ulong)*param_4 * 4;
      fVar10 = (param_1 - *(float *)(lVar3 + 0x48000)) / *(float *)(lVar3 + 0x50000);
      fVar8 = -1.0;
      fVar9 = 0.0;
      if (1.0 <= fVar10) {
        fVar10 = 0.0;
      }
      else if (fVar10 <= 0.0) {
        fVar8 = -2.0;
        fVar9 = 1.0;
        fVar10 = 1.0;
      }
      else {
        fVar11 = fVar10 * 64.0;
        uVar6 = (uint)(fVar10 * 64.0);
        uVar2 = uVar6 + 1;
        fVar9 = 0.0;
        fVar10 = 0.0;
        if (uVar2 < 0x40) {
          fVar10 = *(float *)(&DAT_1012d5780 + (ulong)uVar6 * 4) +
                   (fVar11 - (float)(int)fVar11) *
                   (*(float *)(&DAT_1012d5780 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_1012d5780 + (ulong)uVar6 * 4));
          fVar9 = *(float *)(&DAT_1012d5780 + (ulong)uVar6 * 4) +
                  (fVar11 - (float)(int)fVar11) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)uVar6 * 4));
          fVar8 = *(float *)(&DAT_1012cce80 + (ulong)uVar6 * 4) +
                  (fVar11 - (float)(int)fVar11) *
                  (*(float *)(&DAT_1012cce80 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_1012cce80 + (ulong)uVar6 * 4));
        }
      }
      *param_3 = fVar10;
      param_3[1] = fVar9;
      param_3[2] = fVar8;
      fVar8 = fVar7;
      if ((bVar4 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                (*(float *)(&DAT_1012d4380 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_1012d4380 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      param_3[3] = fVar8;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_100c88f38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88f48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88f54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88f60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c88f70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88f7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c88f8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c88f9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c88fac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_100c88fc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f800000;
  return 1;
}




undefined8 FUN_100c88fd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c88fe0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c88ff4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c89030(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c89074(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c89108:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c89108;
          fVar5 = *(float *)(&DAT_1012ccf80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012ccf80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ccf80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c89128(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89138(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c89148(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43fa0000;
  return 1;
}




undefined8 FUN_100c89158(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89168(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c89178(ulong param_1,float *param_2)

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




undefined8 FUN_100c891dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c891e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c891f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c8920c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e4ccccd3e4ccccd;
  return 1;
}




undefined8 FUN_100c89224(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c89234(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c89244(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c89288(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c892c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c89300(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8933c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cd080 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cd080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd080 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c893e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c893f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89400(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_100c89410(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89420(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8942c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89438(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c89448(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c89458(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89464(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c89474(ulong param_1,float *param_2)

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




undefined8 FUN_100c894cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c894dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c89520(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8955c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cd080 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cd080 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd080 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c89604(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89614(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbecccccd;
  return 1;
}




undefined8 FUN_100c89628(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2c80000;
  return 1;
}




undefined8 FUN_100c89638(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89648(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89654(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89660(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c89670(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c89680(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8968c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f19999a3f19999a;
  return 1;
}




ulong FUN_100c896a4(ulong param_1,float *param_2)

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




undefined8 FUN_100c896fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8970c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c89750(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8978c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c897c8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c89804(int param_1,undefined8 *param_2)

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




void FUN_100c89830(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c898d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c898e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c898f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89900(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89910(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8991c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89928(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_100c89938(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c89948(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_100c8995c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3e800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8996c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89978(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c89988(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c899cc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c89a10(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c89ab8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89ac8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89ad4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89ae0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89af0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89afc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c89b0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c89b1c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c89b2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89b38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c89b48(ulong param_1,float *param_2)

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




undefined8 FUN_100c89ba0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c89bb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c89bf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c89c30(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c89cd8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89ce8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89cf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89d00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89d10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89d1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_100c89d38(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c89d48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbdcccccd;
  return 1;
}




undefined8 FUN_100c89d5c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3e800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c89d6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c89d78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c89d8c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c89dd0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c89e14(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cd280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cd280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd280 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c89ebc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89ecc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c89edc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43480000;
  return 1;
}




undefined8 FUN_100c89eec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c89efc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c89f0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c89f1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c89f2c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c89f3c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c89f50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3e800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c89f60(ulong param_1,float *param_2)

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




undefined8 FUN_100c89fb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c89fc8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8a004(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8a048(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8a0f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8a100(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0400000;
  return 1;
}




undefined8 FUN_100c8a110(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c8a120(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8a130(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8a13c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c8a14c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c8a15c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8a16c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_100c8a180(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c8a190(ulong param_1,float *param_2)

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




ulong FUN_100c8a1e8(ulong param_1,float *param_2)

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




ulong FUN_100c8a250(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8a294(ulong param_1,float *param_2)

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




void FUN_100c8a2fc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      fVar8 = 0.1;
      if (fVar5 < 1.0) {
        fVar6 = 0.0;
        fVar8 = 0.0;
        if (0.0 < fVar5) {
          fVar7 = fVar5 * 64.0;
          uVar4 = (uint)(fVar5 * 64.0);
          uVar1 = uVar4 + 1;
          fVar6 = 0.0;
          fVar8 = 0.1;
          if (uVar1 < 0x40) {
            fVar6 = *(float *)(&DAT_1012cd380 + (ulong)uVar4 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1012cd380 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012cd380 + (ulong)uVar4 * 4));
            fVar8 = *(float *)(&DAT_1012cd480 + (ulong)uVar4 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1012cd480 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1012cd480 + (ulong)uVar4 * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar5;
      param_4 = param_4 + 1;
      param_3[2] = fVar8;
      param_3[3] = 1.0;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c8a3e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8a3f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8a408(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8a414(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8a42c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c8a43c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-09 + 40.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8a4a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8a4b0(ulong param_1,undefined8 *param_2)

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




ulong FUN_100c8a52c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.259629e-09;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8a584(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003c23d70a;
  return 1;
}




undefined8 FUN_100c8a598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8a5a4(ulong param_1,float *param_2)

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




ulong FUN_100c8a60c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011816a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8a650(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8a68c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-09 + 40.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8a6f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8a700(ulong param_1,undefined8 *param_2)

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




ulong FUN_100c8a77c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.9849193e-09 + 5.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8a7e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003c23d70a;
  return 1;
}




undefined8 FUN_100c8a7f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8a800(ulong param_1,float *param_2)

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




ulong FUN_100c8a868(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8a8ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8a8e8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8a998(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8a9a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8a9b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8a9c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8a9d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8a9e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8a9f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8a9fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8aa0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_100c8aa20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4080000040000000;
  return 1;
}




undefined8 FUN_100c8aa34(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8aa40(ulong param_1,undefined4 *param_2)

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




ulong FUN_100c8aa8c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8aac8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8ab04(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012cd580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cd580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8abb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8abc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8abd4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8abe0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8abf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8abfc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c8ac0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8ac18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8ac28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c8ac38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x404000003f800000;
  return 1;
}




undefined8 FUN_100c8ac4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8ac58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_100c8ac6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8aca8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8ace4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (0.5 <= fVar3) {
LAB_100c8ad80:
        fVar4 = -0.0;
      }
      else {
        fVar4 = 1.0;
        if (0.0 < fVar3) {
          uVar1 = (int)(fVar3 * 128.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8ad80;
          fVar4 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar3 * 128.0) * 4) +
                  (fVar3 * 128.0 - (float)(int)(fVar3 * 128.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar3 * 128.0) * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = fVar4;
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




undefined8 FUN_100c8ae10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8ae20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c8ae30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c8ae40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8ae50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8ae5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c8ae6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c8ae7c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8ae8c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.958121e-09 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8aef0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3ecccccd3ecccccd;
  return 1;
}




ulong FUN_100c8af08(ulong param_1,float *param_2)

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




ulong FUN_100c8af60(ulong param_1,float *param_2)

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




ulong FUN_100c8afc8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181860,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b00c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b050(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b094(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8b0d8(int param_1,undefined8 *param_2)

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




void FUN_100c8b104(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012cd680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cd680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cd680 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8b1b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8b1c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8b1d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b1e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8b1f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b1fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8b20c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b218(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8b228(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




undefined8 FUN_100c8b23c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8b24c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b258(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8b268(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b2a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8b2e0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8b390(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8b3a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8b3b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b3bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8b3cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b3d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8b3e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b3f4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8b404(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c8b414(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000040000000;
  return 1;
}




undefined8 FUN_100c8b428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b434(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c8b448(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b484(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8b4c0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (1.0 <= fVar4) {
LAB_100c8b554:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8b554;
          fVar3 = *(float *)(&DAT_1012cdd80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cdd80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cdd80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c8b5c8:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8b5c8;
          fVar3 = *(float *)(&DAT_1012cde80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cde80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cde80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c8b5e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8b5f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_100c8b608(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8b6b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8b6c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b6cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8b6dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b6e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8b6f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b704(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40f00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8b714(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8b720(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c8b730(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b774(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b7b0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8b7ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8b828(int param_1,undefined8 *param_2)

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




void FUN_100c8b850(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (1.0 <= fVar4) {
LAB_100c8b8e4:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8b8e4;
          fVar3 = *(float *)(&DAT_1012cdd80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cdd80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cdd80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c8b958:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8b958;
          fVar3 = *(float *)(&DAT_1012cde80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cde80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cde80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c8b978(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8b988(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




void FUN_100c8b998(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      *param_3 = fVar5 * -2000.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c8ba40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8ba50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8ba5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8ba6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8ba78(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8ba88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8ba94(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8baa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43430000;
  return 1;
}




undefined8 FUN_100c8bab4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c8bac4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8bb08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8bb44(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8bb80(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8bbbc(int param_1,undefined8 *param_2)

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




void FUN_100c8bbe4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_2) {
    fVar7 = param_1 * 213.33333;
    uVar5 = (uint)fVar7;
    uVar1 = uVar5 + 1;
    fVar8 = 0.1;
    if (0.0 < param_1) {
      fVar8 = 1.0;
    }
    fVar10 = 1.0;
    if (0.0 < param_1) {
      fVar10 = 0.0;
    }
    bVar4 = param_1 < 0.3;
    uVar6 = (ulong)param_2;
    fVar9 = 1.0;
    if (bVar4) {
      fVar9 = fVar8;
    }
    fVar8 = 0.0;
    if (bVar4) {
      fVar8 = fVar10;
    }
    do {
      fVar10 = fVar9;
      fVar11 = fVar8;
      if ((bVar4 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar10 = *(float *)(&DAT_1012cd780 + (ulong)uVar5 * 4) +
                 (fVar7 - (float)(int)fVar7) *
                 (*(float *)(&DAT_1012cd780 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_1012cd780 + (ulong)uVar5 * 4));
        fVar11 = *(float *)(&DAT_1012cd880 + (ulong)uVar5 * 4) +
                 (fVar7 - (float)(int)fVar7) *
                 (*(float *)(&DAT_1012cd880 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_1012cd880 + (ulong)uVar5 * 4));
      }
      *param_3 = fVar10;
      param_3[1] = fVar11;
      param_3[2] = 0.0;
      lVar3 = param_5 + (ulong)*param_4 * 4;
      fVar11 = (param_1 - *(float *)(lVar3 + 0x48000)) / *(float *)(lVar3 + 0x50000);
      fVar10 = 0.0;
      if ((fVar11 < 1.0) && (fVar10 = 0.0, 0.0 < fVar11)) {
        uVar2 = (int)(fVar11 * 64.0) + 1;
        if (uVar2 < 0x40) {
          fVar10 = *(float *)(&DAT_1012cd980 + (ulong)(uint)(int)(fVar11 * 64.0) * 4) +
                   (fVar11 * 64.0 - (float)(int)(fVar11 * 64.0)) *
                   (*(float *)(&DAT_1012cd980 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_1012cd980 + (ulong)(uint)(int)(fVar11 * 64.0) * 4));
        }
      }
      param_3[3] = fVar10;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}




undefined8 FUN_100c8bd20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8bd30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c8bd40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_100c8bd50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8bd68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c8bd78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_100c8bd88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8bd94(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8bda4(ulong param_1,float *param_2)

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




undefined8 FUN_100c8be08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_100c8be18(ulong param_1,float *param_2)

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




undefined8 FUN_100c8be70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c8be80(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8bec4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8bf08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8bf4c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8bf88(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c8c01c:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8c01c;
          fVar5 = *(float *)(&DAT_1012cda80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cda80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cda80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c8c03c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8c04c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8c058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8c064(float param_1,ulong param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0 < (int)param_2) {
    fVar10 = param_1 * 320.0;
    uVar8 = (uint)fVar10;
    uVar2 = uVar8 + 1;
    bVar4 = 0.2 <= param_1;
    bVar1 = 0.0 < param_1;
    fVar11 = 0.0;
    uVar9 = param_2;
    if (!bVar4 && bVar1 || bVar4) {
      fVar11 = 1.0;
    }
    do {
      fVar12 = fVar11;
      if ((!bVar4 && bVar1) && uVar2 < 0x40) {
        fVar12 = *(float *)(&DAT_1012d4780 + (ulong)uVar8 * 4) +
                 (fVar10 - (float)(int)fVar10) *
                 (*(float *)(&DAT_1012d4780 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_1012d4780 + (ulong)uVar8 * 4));
      }
      iVar5 = _rand();
      iVar6 = _rand();
      fVar13 = fVar11;
      if ((!bVar4 && bVar1) && uVar2 < 0x40) {
        fVar13 = *(float *)(&DAT_1012d4780 + (ulong)uVar8 * 4) +
                 (fVar10 - (float)(int)fVar10) *
                 (*(float *)(&DAT_1012d4780 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_1012d4780 + (ulong)uVar8 * 4));
      }
      iVar7 = _rand();
      *param_3 = ((float)iVar5 * 2.7939677e-08 + -30.0) * fVar12;
      param_3[1] = (float)iVar6 * 1.3969839e-08 + -10.0;
      param_3[2] = ((float)iVar7 * 2.7939677e-08 + -30.0) * fVar13;
      param_3 = param_3 + 3;
      uVar3 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar3;
    } while (uVar3 != 0);
  }
  return param_2;
}




undefined8 FUN_100c8c1c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c8c1d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_100c8c1e0(float param_1,int param_2,float *param_3)

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
      *param_3 = fVar5 * 250.0;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_100c8c280(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8c290(ulong param_1,float *param_2)

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




undefined8 FUN_100c8c2f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4000003e800000;
  return 1;
}




undefined8 FUN_100c8c308(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8c314(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.4924597e-10 + 0.25;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




void FUN_100c8c378(float param_1,int param_2,float *param_3)

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




ulong FUN_100c8c418(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181940,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8c45c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8c498(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8c4d4(int param_1,undefined8 *param_2)

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




undefined8 FUN_100c8c500(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8c50c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c8c51c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8c52c(ulong param_1,float *param_2)

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




undefined8 FUN_100c8c590(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f4000003e800000;
  return 1;
}




undefined8 FUN_100c8c5a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8c5b0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.4924597e-10 + 0.25;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c8c614(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8c658(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181940,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8c69c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8c6e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8c71c(int param_1,undefined8 *param_2)

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




void FUN_100c8c748(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c8c7dc:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8c7dc;
          fVar5 = *(float *)(&DAT_1012cdb80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012cdb80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cdb80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c8c7fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_100c8c80c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cdc80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cdc80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cdc80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 30.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_100c8c8b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8c8bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8c8cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c8c8dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8c8ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8c8f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8c908(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8c914(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40e00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8c924(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8c930(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8c940(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8c984(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8c9c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ca04(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8ca40(int param_1,undefined8 *param_2)

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




void FUN_100c8ca6c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if (1.0 <= fVar4) {
LAB_100c8cb08:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8cb08;
          fVar3 = *(float *)(&DAT_1012cdd80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cdd80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cdd80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar3;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_100c8cb7c:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8cb7c;
          fVar3 = *(float *)(&DAT_1012cde80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cde80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cde80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3 * 0.2;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_100c8cba0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8cbb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




void FUN_100c8cbc0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
          fVar5 = *(float *)(&DAT_1012cdf80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012cdf80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cdf80 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c8cc68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8cc78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8cc84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8cc90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c8cca0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8ccb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_100c8ccc4(ulong param_1,undefined8 *param_2)

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
                          (float)((ulong)uVar5 >> 0x20) * 9.313226e-10,
                          (float)uVar6 + (float)uVar5 * 9.313226e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c8cd3c(ulong param_1,float *param_2)

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




ulong FUN_100c8cd94(ulong param_1,float *param_2)

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




ulong FUN_100c8cdfc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ce40(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ce84(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8cec8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8cf04(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c8cf98:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8cf98;
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




undefined8 FUN_100c8cfb8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8cfc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8cfd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8cfe4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8cff4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d000(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8d010(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8d020(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8d030(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d03c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c8d04c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




ulong FUN_100c8d068(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d0a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8d0e0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8d194(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8d1a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d1b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d1bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8d1cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d1d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_100c8d1e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




ulong FUN_100c8d1f8(ulong param_1,undefined4 *param_2)

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




undefined8 FUN_100c8d29c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_100c8d2ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003f000000;
  return 1;
}




ulong FUN_100c8d2c0(ulong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (0 < (int)param_1) {
    uVar3 = param_1;
    do {
      iVar2 = _rand();
      uVar4 = 0;
      if (1.0 <= (float)iVar2 * 1.6763806e-07) {
        uVar4 = 0x3f800000;
      }
      *param_2 = uVar4;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c8d330(ulong param_1,float *param_2)

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




ulong FUN_100c8d394(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d3d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d41c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181820,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d460(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8d4a4(int param_1,undefined8 *param_2)

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




void FUN_100c8d4d0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.6;
      if ((fVar5 < 1.0) && (fVar6 = 0.1, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.6;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012ce180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ce180 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce180 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8d590(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8d5a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8d5b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d5bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8d5d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d5e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d5ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c8d5fc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8d60c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d618(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c8d628(ulong param_1,float *param_2)

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




undefined8 FUN_100c8d680(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8d690(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d6d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d710(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d74c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8d788(int param_1,undefined8 *param_2)

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




void FUN_100c8d7b4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar3 < 1.0) && (fVar4 = -0.4, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012ce280 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012ce280 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce280 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (fVar3 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar3 = 0.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012d5780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d5780 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
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




undefined8 FUN_100c8d8dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8d8ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8d8fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d908(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8d920(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d92c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8d938(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c8d948(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8d958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8d968(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8d978(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43570000;
  return 1;
}




undefined8 FUN_100c8d988(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c8d998(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8d9dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8da18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8da54(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8da90(int param_1,undefined8 *param_2)

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




void FUN_100c8dabc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = -1.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012ce380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1012ce380 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce380 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar3;
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




undefined8 FUN_100c8dbd4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8dbe4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8dbf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8dc00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f00000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8dc18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8dc24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8dc30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_100c8dc40(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8dc50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8dc60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x408000003f000000;
  return 1;
}




undefined8 FUN_100c8dc74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




undefined8 FUN_100c8dc84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8dc94(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8dcd8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181730,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8dd1c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8dd58(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8dd94(int param_1,undefined8 *param_2)

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




void FUN_100c8ddc0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8de70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8de80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0800000;
  return 1;
}




undefined8 FUN_100c8de90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8de9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x8000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8deb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8dec0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.7252903e-09 + 7.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8df24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8df30(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8df40(ulong param_1,float *param_2)

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




undefined8 FUN_100c8dfa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f6666663ecccccd;
  return 1;
}




undefined8 FUN_100c8dfb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8dfc4(ulong param_1,float *param_2)

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




ulong FUN_100c8e02c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8e070(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8e0ac(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012ce580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ce580 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce580 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8e15c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e16c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1200000;
  return 1;
}




undefined8 FUN_100c8e17c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e188(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e198(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e1a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8e1b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e1c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8e1d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8e1e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_100c8e1f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8e1fc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.6566128e-12 + 0.03;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_100c8e264(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8e2a8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8e2e4(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c8e378:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8e378;
          fVar5 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c8e398(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e3a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e3b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e3c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e3d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e3dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8e3ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e3f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8e408(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8e418(ulong param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 4.656613e-10 + 2.0,
                          (float)uVar5 * 4.656613e-10 + 2.0);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8e488(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e494(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




ulong FUN_100c8e4a8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8e4ec(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8e530(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar4 = 0.9;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.9;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012d4680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012d4680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.7, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012ce680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1012ce680 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce680 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_100c8e660(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e670(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c8e680(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e68c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e69c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e6a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_100c8e6b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e6c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8e6d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




ulong FUN_100c8e6e4(ulong param_1,float *param_2)

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
      *param_2 = (float)iVar2 * 3.4924597e-10;
      param_2[1] = (float)iVar3 * 1.8626451e-09 + 1.0;
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 2;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8e764(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e770(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e800000;
  return 1;
}




ulong FUN_100c8e780(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8e7c4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011812f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8e808(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
LAB_100c8e89c:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8e89c;
          fVar5 = *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1012d4a80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012d4a80 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
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




undefined8 FUN_100c8e8bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e8cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e8d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e8e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8e8f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8e910(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e91c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8e92c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8e93c(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < (int)param_1) {
    uVar6 = NEON_fmov(0x40200000,4);
    uVar4 = param_1;
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          (float)((ulong)uVar5 >> 0x20) * 6.9849193e-10,
                          (float)uVar6 + (float)uVar5 * 6.9849193e-10);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_100c8e9b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8e9c0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ca3d70a;
  return 1;
}




ulong FUN_100c8e9d4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ea18(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a90,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8ea5c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    fVar4 = 0.4;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = fVar4;
      if ((fVar5 < 1.0) && (0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012ce780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ce780 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce780 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8eb14(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8eb24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8eb30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_100c8eb40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8eb50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8eb5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8eb6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8eb78(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8eb88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8eb94(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_100c8eba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8ebb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,"fff?fff?fff?fff?",(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ebf4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ec38(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8ec74(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
LAB_100c8ed80:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 1.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_100c8ed80;
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




undefined8 FUN_100c8eda0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8edb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8edc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8edcc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8ede4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c8edf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_100c8ee04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8ee10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8ee20(ulong param_1,float *param_2)

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




undefined8 FUN_100c8ee84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c8ee94(ulong param_1,float *param_2)

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




ulong FUN_100c8eeec(ulong param_1,float *param_2)

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




ulong FUN_100c8ef54(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ef98(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8efdc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8f020(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8f05c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar6 = 0.2, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1012ce980 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ce980 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ce980 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8f114(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f124(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f130(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c8f140(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f150(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f15c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_100c8f16c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f178(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8f188(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f194(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c8f1a4(ulong param_1,float *param_2)

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




undefined8 FUN_100c8f1fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




ulong FUN_100c8f20c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8f250(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8f28c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 1.0;
      fVar4 = 1.0;
      if ((fVar5 < 0.9) && (fVar4 = 0.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 71.111115;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cea80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012cea80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cea80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar4 < 0.95) && (0.0 < fVar4)) {
        fVar4 = fVar4 * 67.36842;
        uVar1 = (int)fVar4 + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012ceb80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012ceb80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ceb80 + (ulong)(uint)(int)fVar4 * 4));
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




undefined8 FUN_100c8f3b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f3c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f3d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_100c8f3e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f3f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f3fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8f40c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f418(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8f428(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f434(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c8f444(ulong param_1,float *param_2)

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




ulong FUN_100c8f49c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,"fff?fff?fff?fff?",(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8f4e0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8f524(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8f560(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar3 = 1.0;
      fVar4 = 1.0;
      if ((fVar5 < 0.9) && (fVar4 = 0.0, 0.0 < fVar5)) {
        fVar5 = fVar5 * 71.111115;
        uVar1 = (int)fVar5 + 1;
        fVar4 = 1.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1012cea80 + (ulong)(uint)(int)fVar5 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_1012cea80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cea80 + (ulong)(uint)(int)fVar5 * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar4 < 0.95) && (0.0 < fVar4)) {
        fVar4 = fVar4 * 67.36842;
        uVar1 = (int)fVar4 + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1012ceb80 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1012ceb80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ceb80 + (ulong)(uint)(int)fVar4 * 4));
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




undefined8 FUN_100c8f688(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f698(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f6a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_100c8f6b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f6c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f6d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8f6e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f6ec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8f6fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f708(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40900000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_100c8f718(ulong param_1,float *param_2)

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




ulong FUN_100c8f770(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,"fff?fff?fff?fff?",(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8f7b4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8f7f8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8f834(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012cec80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012cec80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012cec80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8f8e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f8f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x44160000;
  return 1;
}




undefined8 FUN_100c8f910(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8f920(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f92c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_100c8f93c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f948(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8f958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8f964(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000041000000;
  return 1;
}




ulong FUN_100c8f974(ulong param_1,float *param_2)

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




undefined8 FUN_100c8f9cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_100c8f9dc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8fa20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8fa5c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
          fVar6 = *(float *)(&DAT_1012ced80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1012ced80 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1012ced80 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_100c8fb08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8fb18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8fb24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8fb30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8fb40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c8fb50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_100c8fb60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42200000;
  return 1;
}




undefined8 FUN_100c8fb70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_100c8fb80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1000000;
  return 1;
}




undefined8 FUN_100c8fb90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003e4ccccd;
  return 1;
}




undefined8 FUN_100c8fba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8fbb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e147ae1;
  return 1;
}




ulong FUN_100c8fbc4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1012b2860,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8fc08(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_100c8fc4c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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




undefined8 FUN_100c8fcfc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8fd0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_100c8fd1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_100c8fd28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_100c8fd38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_100c8fd48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8fd54(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181610,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c8fd98(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8fda8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8fde4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_100c8fe28(ulong param_1,float *param_2)

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




undefined8 FUN_100c8fe80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




ulong FUN_100c8fe94(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8fed0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181650,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c8ff14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_100c8ff20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181610,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100c8ff64(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_100c8ff74(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100c8ffb0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_100c8fff4(ulong param_1,float *param_2)

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

