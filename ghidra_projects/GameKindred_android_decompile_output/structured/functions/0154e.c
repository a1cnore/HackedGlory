// functions/0154e — 53 functions
#include "libGameKindred.h"




undefined8 FUN_0154e010(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




uint FUN_0154e024(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_0154e060(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0xbf800000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_0154e080(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = -0.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = -0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d41a50 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d41a50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d41a50 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0154e138(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




uint FUN_0154e148(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar4 = (ulong)param_2;
    do {
      fVar6 = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      if ((fVar5 < 0.8) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar3 = (uint)((fVar5 / 0.8) * 64.0);
        uVar1 = uVar3 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar5 / 0.8) * 64.0;
          fVar6 = *(float *)(&DAT_01d4c150 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01d4c150 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d4c150 + (ulong)uVar3 * 4));
        }
      }
      iVar2 = rand();
      uVar4 = uVar4 - 1;
      *param_3 = fVar6 * ((float)iVar2 * -4.656613e-10 * 0.20000002 + -0.1);
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return param_2;
}




undefined8 FUN_0154e280(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_0154e28c(float param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = param_1 + -0.3 + param_1 + -0.3;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.8;
    fVar4 = fVar4 * 64.0;
    fVar5 = -0.3;
    if (bVar2) {
      fVar5 = 1.0;
    }
    if (bVar2 && 0.3 < param_1) {
      fVar5 = -0.3;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.3 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d41b50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d41b50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d41b50 + (ulong)uVar3 * 4));
      }
      *param_3 = 0;
      param_3[2] = 0;
      param_2 = param_2 + -1;
      param_3[1] = fVar6 * -20.0;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0154e34c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_0154e35c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_0154e36c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = (param_1 + -0.25) / 0.17500001;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.425;
    fVar4 = fVar4 * 64.0;
    fVar5 = 6.0;
    if (bVar2) {
      fVar5 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar5 = 6.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d41c50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0154e41c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0154e42c(float param_1,int param_2,float *param_3)

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
    fVar7 = (param_1 + -0.2) / 0.3;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = fVar7 * 64.0;
    fVar6 = 0.1;
    if (bVar3) {
      fVar6 = 1.0;
    }
    iVar2 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar6 = 0.1;
    }
    do {
      fVar8 = fVar6;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d4c650 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4));
      }
      iVar4 = rand();
      iVar2 = iVar2 + -1;
      *param_3 = fVar8 * ((float)iVar4 * 4.656613e-10 * 20.0 + 10.0);
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_0154e55c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_0154e570(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_0154e580(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.4 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0154e600(int param_1,undefined4 *param_2)

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




void FUN_0154e620(int param_1,undefined4 *param_2)

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




undefined8 FUN_0154e640(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_0154e650(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = (param_1 + -0.25) / 0.17500001;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.425;
    fVar4 = fVar4 * 64.0;
    fVar5 = 6.0;
    if (bVar2) {
      fVar5 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar5 = 6.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d41c50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0154e700(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0154e710(float param_1,int param_2,float *param_3)

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
    fVar7 = (param_1 + -0.2) / 0.3;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = fVar7 * 64.0;
    fVar6 = 0.1;
    if (bVar3) {
      fVar6 = 1.0;
    }
    iVar2 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar6 = 0.1;
    }
    do {
      fVar8 = fVar6;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d4c650 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4));
      }
      iVar4 = rand();
      iVar2 = iVar2 + -1;
      *param_3 = fVar8 * ((float)iVar4 * 4.656613e-10 * 20.0 + 10.0);
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_0154e840(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_0154e854(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_0154e864(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.4 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0154e8e4(int param_1,undefined4 *param_2)

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




void FUN_0154e904(int param_1,undefined4 *param_2)

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




undefined8 FUN_0154e924(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_0154e934(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = (param_1 + -0.25) / 0.17500001;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.425;
    fVar4 = fVar4 * 64.0;
    fVar5 = 6.0;
    if (bVar2) {
      fVar5 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar5 = 6.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d41c50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0154e9e4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0154e9f4(float param_1,int param_2,float *param_3)

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
    fVar7 = (param_1 + -0.2) / 0.3;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = fVar7 * 64.0;
    fVar6 = 0.1;
    if (bVar3) {
      fVar6 = 1.0;
    }
    iVar2 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar6 = 0.1;
    }
    do {
      fVar8 = fVar6;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d4c650 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4));
      }
      iVar4 = rand();
      iVar2 = iVar2 + -1;
      *param_3 = fVar8 * ((float)iVar4 * 4.656613e-10 * 20.0 + 10.0);
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_0154eb24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_0154eb38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_0154eb48(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.4 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0154ebc8(int param_1,undefined4 *param_2)

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




void FUN_0154ebe8(int param_1,undefined4 *param_2)

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




undefined8 FUN_0154ec08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41700000;
  return 1;
}




void FUN_0154ec18(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    fVar4 = (param_1 + -0.25) / 0.17500001;
    uVar3 = (uint)(fVar4 * 64.0);
    uVar1 = uVar3 + 1;
    bVar2 = param_1 < 0.425;
    fVar4 = fVar4 * 64.0;
    fVar5 = 6.0;
    if (bVar2) {
      fVar5 = 0.0;
    }
    if (bVar2 && 0.25 < param_1) {
      fVar5 = 6.0;
    }
    do {
      fVar6 = fVar5;
      if ((bVar2 && 0.25 < param_1) && uVar1 < 0x40) {
        fVar6 = *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4) +
                (fVar4 - (float)(int)fVar4) *
                (*(float *)(&DAT_01d41c50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d41c50 + (ulong)uVar3 * 4));
      }
      param_2 = param_2 + -1;
      *param_3 = fVar6;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_0154ecc8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_0154ecd8(float param_1,int param_2,float *param_3)

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
    fVar7 = (param_1 + -0.2) / 0.3;
    uVar5 = (uint)(fVar7 * 64.0);
    uVar1 = uVar5 + 1;
    bVar3 = param_1 < 0.5;
    fVar7 = fVar7 * 64.0;
    fVar6 = 0.1;
    if (bVar3) {
      fVar6 = 1.0;
    }
    iVar2 = param_2;
    if (bVar3 && 0.2 < param_1) {
      fVar6 = 0.1;
    }
    do {
      fVar8 = fVar6;
      if ((bVar3 && 0.2 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4) +
                (fVar7 - (float)(int)fVar7) *
                (*(float *)(&DAT_01d4c650 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d4c650 + (ulong)uVar5 * 4));
      }
      iVar4 = rand();
      iVar2 = iVar2 + -1;
      *param_3 = fVar8 * ((float)iVar4 * 4.656613e-10 * 20.0 + 10.0);
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_2;
}




undefined8 FUN_0154ee08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f8000003ecccccd;
  return 1;
}




undefined8 FUN_0154ee1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




int FUN_0154ee2c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.4 + 0.1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_0154eeac(int param_1,undefined4 *param_2)

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




void FUN_0154eecc(int param_1,undefined4 *param_2)

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




void FUN_0154eeec(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

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
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 0.8, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01d41d50 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01d41d50 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d41d50 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
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




undefined8 FUN_0154efa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0154efb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_0154efc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0154efd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_0154efe0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0154efec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_0154effc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}

