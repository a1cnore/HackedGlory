// functions/016a3 — 66 functions
#include "libGameKindred.h"




undefined8 FUN_016a3004(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a3014(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a3020(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a3030(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




void FUN_016a3044(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4416000044160000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a3068(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a3074(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e99999a;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_016a3098(int param_1,undefined4 *param_2)

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




uint FUN_016a30b8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a30f4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a3130(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a316c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
    fVar4 = -0.0;
    uVar2 = (ulong)param_2;
    do {
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = 1.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 1.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01d8f950 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d8f950 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8f950 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      fVar7 = fVar4;
      if ((fVar5 < 0.8) && (fVar7 = 1.0, -0.0 < fVar5)) {
        fVar8 = (fVar5 + 0.0) / 0.8;
        uVar3 = (uint)(fVar8 * 64.0);
        uVar1 = uVar3 + 1;
        fVar7 = fVar4;
        if (uVar1 < 0x40) {
          fVar8 = fVar8 * 64.0;
          fVar7 = *(float *)(&DAT_01d94e50 + (ulong)uVar3 * 4) +
                  (fVar8 - (float)(int)fVar8) *
                  (*(float *)(&DAT_01d94e50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d94e50 + (ulong)uVar3 * 4));
        }
      }
      fVar8 = fVar4;
      if ((fVar5 < 1.0) && (fVar8 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar8 = fVar4;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_01d88d50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d88d50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88d50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar7;
      param_3[2] = fVar8;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = fVar4;
      if ((fVar5 < 1.0) && (fVar6 = 3.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = fVar4;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01d88e50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01d88e50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88e50 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_016a3340(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a3350(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a335c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a3368(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a3378(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a3384(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a3394(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a33a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a33b0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016a33bc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x428a0000428a0000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a33e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a33ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40c00000;
  return 1;
}




uint FUN_016a33fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a3438(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a3474(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016a34b0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016a34ec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      if ((fVar5 < 1.0) && (fVar4 = 2.5, 0.025 < fVar5)) {
        fVar5 = (fVar5 + -0.025) / 0.975;
        uVar3 = (uint)(fVar5 * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = fVar5 * 64.0;
          fVar4 = *(float *)(&DAT_01d88f50 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d88f50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d88f50 + (ulong)uVar3 * 4));
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




undefined8 FUN_016a35c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a35d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbfc00000;
  return 1;
}




undefined8 FUN_016a35e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




uint FUN_016a35ec(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < (int)param_2) {
    fVar9 = 0.7;
    uVar5 = (ulong)param_2;
    do {
      iVar2 = rand();
      fVar6 = ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) * 100.0;
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar10 = fVar9;
      if (0.7 <= fVar7) {
        fVar6 = fVar6 + 0.7;
      }
      else if (fVar7 <= 0.0) {
        fVar6 = fVar6 + 0.0;
        fVar10 = 0.0;
      }
      else {
        uVar4 = (uint)((fVar7 / 0.7) * 64.0);
        uVar1 = uVar4 + 1;
        fVar8 = (fVar7 / 0.7) * 64.0;
        fVar7 = fVar9;
        if (uVar1 < 0x40) {
          fVar7 = *(float *)(&DAT_01d89050 + (ulong)uVar4 * 4) +
                  (fVar8 - (float)(int)fVar8) *
                  (*(float *)(&DAT_01d89050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d89050 + (ulong)uVar4 * 4));
        }
        fVar6 = fVar6 + fVar7;
        if (uVar1 < 0x40) {
          fVar10 = *(float *)(&DAT_01d89050 + (ulong)uVar4 * 4) +
                   (fVar8 - (float)(int)fVar8) *
                   (*(float *)(&DAT_01d89050 + (ulong)uVar1 * 4) -
                   *(float *)(&DAT_01d89050 + (ulong)uVar4 * 4));
        }
      }
      iVar2 = rand();
      iVar3 = rand();
      fVar8 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar7 = fVar9;
      if ((fVar8 < 0.7) && (fVar7 = 0.0, 0.0 < fVar8)) {
        uVar4 = (uint)((fVar8 / 0.7) * 64.0);
        uVar1 = uVar4 + 1;
        fVar7 = fVar9;
        if (uVar1 < 0x40) {
          fVar7 = (fVar8 / 0.7) * 64.0;
          fVar7 = *(float *)(&DAT_01d89050 + (ulong)uVar4 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_01d89050 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d89050 + (ulong)uVar4 * 4));
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar10 * ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) *
                            400.0 + 50.0;
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      param_3[2] = ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * 100.0 +
                   fVar7;
      param_3 = param_3 + 3;
    } while (uVar5 != 0);
  }
  return param_2;
}




void FUN_016a3820(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    bVar2 = 0.3 <= param_1;
    fVar5 = (param_1 / 0.3) * 64.0;
    uVar3 = (uint)((param_1 / 0.3) * 64.0);
    uVar1 = uVar3 + 1;
    fVar4 = (float)(&DAT_01bf88f0)[bVar2];
    if (!bVar2 && 0.0 < param_1) {
      fVar4 = 0.3;
    }
    do {
      fVar6 = fVar4;
      if ((!bVar2 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d89150 + (ulong)uVar3 * 4) +
                (fVar5 - (float)(int)fVar5) *
                (*(float *)(&DAT_01d89150 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d89150 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_016a38bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43160000;
  return 1;
}




undefined8 FUN_016a38cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41f00000;
  return 1;
}




undefined8 FUN_016a38dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_016a38ec(float param_1,int param_2,float *param_3)

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
    bVar3 = 0.1 <= param_1;
    fVar6 = (param_1 + 0.028086) / 0.128086;
    fVar7 = fVar6 * 64.0;
    uVar5 = (uint)(fVar6 * 64.0);
    uVar1 = uVar5 + 1;
    iVar2 = param_2;
    fVar6 = (float)(&DAT_01d6b610)[bVar3];
    if (!bVar3 && -0.028086 < param_1) {
      fVar6 = 1.3;
    }
    do {
      iVar4 = rand();
      fVar8 = fVar6;
      if ((!bVar3 && -0.028086 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d89250 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d89250 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d89250 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar4 * 4.656613e-10 * 10.0 + 0.0) * fVar8;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_016a3a24(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0x40200000;
      iVar1 = iVar1 + -1;
      param_2[1] = (float)iVar2 * 4.656613e-10 + 3.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_016a3a98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016a3aa4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 1.2 + 0.3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_016a3b24(int param_1,undefined4 *param_2)

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




void FUN_016a3b44(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41f00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_016a3b64(int param_1,undefined4 *param_2)

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




void FUN_016a3b84(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41a00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_016a3ba4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_016a3bb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




undefined8 FUN_016a3bc4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_016a3bd4(float param_1,int param_2,float *param_3)

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
    bVar3 = 0.1 <= param_1;
    fVar6 = (param_1 + 0.028086) / 0.128086;
    fVar7 = fVar6 * 64.0;
    uVar5 = (uint)(fVar6 * 64.0);
    uVar1 = uVar5 + 1;
    iVar2 = param_2;
    fVar6 = (float)(&DAT_01d6b610)[bVar3];
    if (!bVar3 && -0.028086 < param_1) {
      fVar6 = 1.3;
    }
    do {
      iVar4 = rand();
      fVar8 = fVar6;
      if ((!bVar3 && -0.028086 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d89250 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d89250 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d89250 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar4 * 4.656613e-10 * 10.0 + 0.0) * fVar8;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_016a3d0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_016a3d1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016a3d28(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      fVar3 = (float)iVar2 * 4.656613e-10 * 1.2 + 0.3;
      iVar1 = iVar1 + -1;
      *param_2 = fVar3 + fVar3;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_016a3dac(int param_1,undefined4 *param_2)

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




void FUN_016a3dcc(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41f00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_016a3dec(int param_1,undefined4 *param_2)

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




void FUN_016a3e0c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41a00000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_016a3e2c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar3 = 0.0;
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_01d89350 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_01d89350 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d89350 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar3;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016a3ed4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_016a3ee4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      if ((fVar4 < 0.4) && (fVar5 = 2.0, 0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 / 0.4) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 / 0.4) * 64.0;
          fVar5 = *(float *)(&DAT_01d89450 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d89450 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d89450 + (ulong)uVar3 * 4));
        }
      }
      uVar2 = uVar2 - 1;
      *param_3 = fVar5 * 30.0;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016a3f98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a3fa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016a3fb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016a3fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016a3fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fdd70a4;
  return 1;
}




undefined8 FUN_016a3fe4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016a3ff4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}

