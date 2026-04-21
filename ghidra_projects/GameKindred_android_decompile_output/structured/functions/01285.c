// functions/01285 — 79 functions
#include "libGameKindred.h"




int FUN_01285004(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01285070(int param_1,undefined4 *param_2)

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




void FUN_01285090(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_012850b0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012850ec(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_01285128(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01285138(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3faa9fbe;
  return 1;
}




undefined8 FUN_0128514c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0128515c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01285168(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01285178(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01285184(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_012851f0(int param_1,undefined4 *param_2)

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




void FUN_01285210(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41bc0000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01285230(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_0128526c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_012852a8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    fVar4 = param_1 * 0.6 - (float)(int)(param_1 * 0.6);
    uVar1 = (int)(fVar4 * 64.0) + 1;
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (0.0 < fVar6)) {
        uVar2 = (int)(fVar6 * 64.0) + 1;
        if (uVar2 < 0x40) {
          fVar5 = *(float *)(&DAT_01ca57c0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_01ca57c0 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01ca57c0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      fVar6 = 0.2;
      if ((0.0 < fVar4 && fVar4 < 1.0) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01ca58c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                (*(float *)(&DAT_01ca58c0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ca58c0 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
      }
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      *(float *)((long)param_3 + 0xc) = fVar5 * fVar6;
      param_3 = param_3 + 2;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_012853c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012853d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_012853e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012853f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01285404(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01285410(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0128541c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_0128542c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_0128543c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




int FUN_01285450(int param_1,undefined8 *param_2)

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
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 40.0 + 20.0,
                          (float)uVar4 * 4.656613e-10 * 3.0 + 2.0);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_012854dc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_012854e8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01285550(int param_1,undefined4 *param_2)

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




void FUN_01285570(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41f80000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01285590(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012855cc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01285608(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
      fVar6 = 0.006669;
      if ((fVar5 < 1.01333) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 1.01333) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.006669;
        if (uVar1 < 0x40) {
          fVar6 = (fVar5 / 1.01333) * 64.0;
          fVar6 = *(float *)(&DAT_01ca59c0 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01ca59c0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ca59c0 + (ulong)uVar3 * 4));
        }
      }
      fVar7 = 0.0;
      fVar8 = fVar4;
      if (fVar5 < 1.0) {
        fVar7 = 0.0;
        fVar8 = 0.0;
        if (0.0 < fVar5) {
          uVar3 = (uint)(fVar5 * 64.0);
          uVar1 = uVar3 + 1;
          fVar5 = fVar5 * 64.0;
          fVar7 = 0.0;
          fVar8 = fVar4;
          if (uVar1 < 0x40) {
            fVar7 = *(float *)(&DAT_01cb98c0 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_01cb98c0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cb98c0 + (ulong)uVar3 * 4));
            fVar8 = *(float *)(&DAT_01cba1c0 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_01cba1c0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01cba1c0 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar6;
      param_3[1] = fVar7;
      param_3[2] = fVar8;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar6 = fVar4;
      if ((fVar5 < 1.0) && (fVar6 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = fVar4;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_01ca5ac0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01ca5ac0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ca5ac0 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
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




undefined8 FUN_012857c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012857d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012857e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_012857ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_012857fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01285808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01285818(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




undefined8 FUN_01285828(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01285838(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_01285844(int param_1,undefined8 *param_2)

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




undefined8 FUN_01285868(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01285874(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




uint FUN_01285884(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012858c0(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_012858fc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01285938(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01285974(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

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
    do {
      fVar4 = 0.0;
      fVar7 = 0.0;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      fVar8 = -0.0;
      if (fVar6 < 1.0) {
        fVar5 = 0.6;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          fVar5 = 0.0;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_01ca5bc0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                    (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                    (*(float *)(&DAT_01ca5bc0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ca5bc0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
          }
        }
        fVar7 = 0.433333;
        if (0.026667 < fVar6) {
          fVar8 = (fVar6 + -0.026667) / 0.973333;
          uVar3 = (uint)(fVar8 * 64.0);
          uVar1 = uVar3 + 1;
          fVar7 = 0.0;
          if (uVar1 < 0x40) {
            fVar8 = fVar8 * 64.0;
            fVar7 = *(float *)(&DAT_01ca5cc0 + (ulong)uVar3 * 4) +
                    (fVar8 - (float)(int)fVar8) *
                    (*(float *)(&DAT_01ca5cc0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ca5cc0 + (ulong)uVar3 * 4));
          }
        }
        fVar8 = 1.4;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          fVar8 = -0.0;
          if (uVar1 < 0x40) {
            fVar8 = *(float *)(&DAT_01ca5dc0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                    (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                    (*(float *)(&DAT_01ca5dc0 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01ca5dc0 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
          }
        }
      }
      *param_3 = fVar5;
      param_3[1] = fVar7;
      param_3[2] = fVar8;
      fVar7 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar7 < 1.0) && (0.0 < fVar7)) {
        uVar1 = (int)(fVar7 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01ca5ec0 + (ulong)(uint)(int)(fVar7 * 64.0) * 4) +
                  (fVar7 * 64.0 - (float)(int)(fVar7 * 64.0)) *
                  (*(float *)(&DAT_01ca5ec0 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01ca5ec0 + (ulong)(uint)(int)(fVar7 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01285b5c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01285b6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbfc00000;
  return 1;
}




undefined8 FUN_01285b7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01285b88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01285b98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f400000;
  return 1;
}




undefined8 FUN_01285ba8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_01285bb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01285bc8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01285bd8(float param_1,int param_2,float *param_3)

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
    bVar3 = 1.0 <= param_1;
    fVar6 = (param_1 + -0.4) / 0.6;
    fVar8 = fVar6 * 64.0;
    uVar5 = (uint)(fVar6 * 64.0);
    uVar1 = uVar5 + 1;
    iVar2 = param_2;
    fVar6 = *(float *)(&DAT_01c38ac0 + (ulong)bVar3 * 4);
    if (!bVar3 && 0.4 < param_1) {
      fVar6 = 2.2;
    }
    do {
      iVar4 = rand();
      fVar7 = fVar6;
      if ((!bVar3 && 0.4 < param_1) && uVar1 < 0x40) {
        fVar7 = *(float *)(&DAT_01ca5fc0 + (ulong)uVar5 * 4) +
                (fVar8 - (float)(int)fVar8) *
                (*(float *)(&DAT_01ca5fc0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ca5fc0 + (ulong)uVar5 * 4));
      }
      iVar2 = iVar2 + -1;
      *param_3 = ((float)iVar4 * 4.656613e-10 * 10.0 + 0.0) * fVar7;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




int FUN_01285d0c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      *param_2 = 0x40400000;
      iVar1 = iVar1 + -1;
      param_2[1] = (float)iVar2 * 4.656613e-10 * 0.5 + 3.0;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01285d90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01285d9c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01285e04(int param_1,undefined4 *param_2)

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




void FUN_01285e24(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01285e44(int param_1,undefined4 *param_2)

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




void FUN_01285e64(int param_1,undefined4 *param_2)

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




undefined8 FUN_01285e84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_01285e94(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_01285ea4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01285eb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01285ec4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




undefined8 FUN_01285ed4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_01285ee0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 3.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01285f4c(int param_1,undefined4 *param_2)

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




void FUN_01285f6c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42000000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01285f8c(int param_1,undefined4 *param_2)

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




void FUN_01285fac(int param_1,undefined4 *param_2)

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




void FUN_01285fcc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
  
  if (0 < (int)param_2) {
    uVar5 = (uint)((param_1 + param_1) * 64.0);
    uVar1 = uVar5 + 1;
    fVar7 = (param_1 + param_1) * 64.0;
    bVar3 = param_1 < 0.5;
    fVar8 = 1.0;
    if (bVar3) {
      fVar8 = 4.0;
    }
    uVar4 = (ulong)param_2;
    if (bVar3 && 0.0 < param_1) {
      fVar8 = 1.0;
    }
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar9 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar10 = -0.0;
      if ((fVar9 < 1.0) && (fVar10 = 1.4, -0.0 < fVar9)) {
        uVar6 = (uint)((fVar9 + 0.0) * 64.0);
        uVar2 = uVar6 + 1;
        fVar10 = -0.0;
        if (uVar2 < 0x40) {
          fVar10 = (fVar9 + 0.0) * 64.0;
          fVar10 = *(float *)(&DAT_01ca60c0 + (ulong)uVar6 * 4) +
                   (fVar10 - (float)(int)fVar10) *
                   (*(float *)(&DAT_01ca60c0 + (ulong)uVar2 * 4) -
                   *(float *)(&DAT_01ca60c0 + (ulong)uVar6 * 4));
        }
      }
      fVar9 = fVar8;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar9 = *(float *)(&DAT_01ca61c0 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01ca61c0 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01ca61c0 + (ulong)uVar5 * 4));
      }
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      *(float *)((long)param_3 + 0xc) = fVar10 * fVar9;
      param_3 = param_3 + 2;
    } while (uVar4 != 0);
  }
  return;
}

