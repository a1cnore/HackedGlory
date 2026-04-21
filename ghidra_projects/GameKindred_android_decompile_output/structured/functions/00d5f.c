// functions/00d5f — 38 functions
#include "libGameKindred.h"




void FUN_00d5f010(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d5f038(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d5f068(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d5f08c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d5f0b8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d5f0c0(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d5f0c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281db58;
  param_1[5] = &PTR_FUN_0281db88;
  uVar2 = DAT_03214ce8;
  lVar3 = 0x38;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}




void FUN_00d5f150(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d5f158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d5f15c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281dbb8;
  param_1[5] = &PTR_FUN_0281dbe8;
  FUN_00d4d1ec(param_1 + 7);
  return;
}




void FUN_00d5f1b0(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281dbb8;
  param_1[5] = &PTR_FUN_0281dbe8;
  FUN_00d4d1ec(param_1 + 7);
  FUN_00d4d20c(param_1 + 7,param_2 + 0x38);
  return;
}




void FUN_00d5f21c(long param_1)

{
  long lVar1;
  
  DAT_031a9664 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9664 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9664 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d5fa80;
  *(code **)(lVar1 + 0xb8) = FUN_00d5fadc;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9664;
  *(undefined4 *)(lVar1 + 0xa8) = 0x350;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d5f27c(float param_1,long param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  float fVar2;
  
  param_3 = param_3 & 0xffffffff;
  FUN_00d5f358();
  switch(param_4) {
  case 0:
    fVar2 = *(float *)(param_2 + param_3 * 4 + 0x38);
    break;
  case 1:
    fVar2 = *(float *)(param_2 + param_3 * 4 + 0xec);
    break;
  case 2:
    fVar2 = *(float *)(param_2 + param_3 * 4 + 0x1a0);
    break;
  case 3:
    fVar2 = *(float *)(param_2 + param_3 * 4 + 0x254);
    break;
  case 0xffffffff:
    lVar1 = param_2 + param_3 * 4;
    fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
            (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0)
            );
    break;
  default:
    fVar2 = -1.0;
  }
  FUN_00d5f478(fVar2 + param_1,param_2,param_3,param_4);
  return;
}




void FUN_00d5f358(float param_1,long param_2,int param_3,int param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((0.0 < param_1) && ((param_5 & 1) == 0)) {
    if (param_3 == 2) {
      fVar3 = *(float *)(param_2 + 0x1a8) + 1.0;
      fVar2 = fVar3 * (*(float *)(param_2 + 0x40) +
                      *(float *)(param_2 + 0xf4) * (*(float *)(param_2 + 0x25c) + 1.0));
      if (DAT_031a9798 <= fVar2) {
        fVar2 = DAT_031a9798;
      }
      fVar1 = DAT_031a96d8;
      if (DAT_031a96d8 <= fVar2) {
        fVar1 = fVar2;
      }
      fVar2 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0xf4);
      if (param_4 != 2) {
        fVar2 = fVar3;
      }
      fVar1 = (*(float *)(param_2 + 0x310) * ((fVar2 * param_1 + fVar1) - fVar1)) / fVar1;
      if (0.0 < fVar1) {
        *(float *)(param_2 + 0x310) = *(float *)(param_2 + 0x310) + fVar1;
      }
    }
    else if (param_3 == 0) {
      fVar3 = *(float *)(param_2 + 0x1a0) + 1.0;
      fVar2 = fVar3 * (*(float *)(param_2 + 0x38) +
                      *(float *)(param_2 + 0xec) * (*(float *)(param_2 + 0x254) + 1.0));
      if (DAT_031a9790 <= fVar2) {
        fVar2 = DAT_031a9790;
      }
      fVar1 = DAT_031a96d0;
      if (DAT_031a96d0 <= fVar2) {
        fVar1 = fVar2;
      }
      fVar2 = *(float *)(param_2 + 0x38) + *(float *)(param_2 + 0xec);
      if (param_4 != 2) {
        fVar2 = fVar3;
      }
      fVar1 = (*(float *)(param_2 + 0x308) * ((fVar2 * param_1 + fVar1) - fVar1)) / fVar1;
      if (0.0 < fVar1) {
        *(float *)(param_2 + 0x308) = *(float *)(param_2 + 0x308) + fVar1;
        return;
      }
    }
  }
  return;
}




void FUN_00d5f478(undefined4 param_1,long param_2,uint param_3,undefined4 param_4)

{
  switch(param_4) {
  case 0:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x38) = param_1;
    break;
  case 1:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0xec) = param_1;
    break;
  case 2:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x1a0) = param_1;
    break;
  case 3:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x254) = param_1;
  }
  *(ulong *)(param_2 + 0x348) = *(ulong *)(param_2 + 0x348) | 1L << ((ulong)param_3 & 0x3f);
  FUN_00d5f4fc();
  return;
}




void FUN_00d5f4f8(void)

{
  return;
}




void FUN_00d5f4fc(long param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 < 0x20) {
    if (param_2 == 0) {
      fVar6 = *(float *)(param_1 + 0x1a0) + 1.0;
      fVar2 = *(float *)(param_1 + 0x308);
      fVar3 = *(float *)(param_1 + 0x38) +
              *(float *)(param_1 + 0xec) * (*(float *)(param_1 + 0x254) + 1.0);
      pfVar1 = (float *)(param_1 + 0x308);
      fVar7 = DAT_031a9790;
      fVar5 = DAT_031a96d0;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      fVar6 = *(float *)(param_1 + 0x1a8) + 1.0;
      fVar2 = *(float *)(param_1 + 0x310);
      fVar3 = *(float *)(param_1 + 0x40) +
              *(float *)(param_1 + 0xf4) * (*(float *)(param_1 + 0x25c) + 1.0);
      pfVar1 = (float *)(param_1 + 0x310);
      fVar7 = DAT_031a9798;
      fVar5 = DAT_031a96d8;
    }
  }
  else if (param_2 == 0x20) {
    fVar6 = *(float *)(param_1 + 0x220) + 1.0;
    fVar2 = *(float *)(param_1 + 0x318);
    fVar3 = *(float *)(param_1 + 0xb8) +
            *(float *)(param_1 + 0x16c) * (*(float *)(param_1 + 0x2d4) + 1.0);
    pfVar1 = (float *)(param_1 + 0x318);
    fVar7 = DAT_031a9810;
    fVar5 = DAT_031a9750;
  }
  else if (param_2 == 0x2b) {
    fVar6 = *(float *)(param_1 + 0x24c) + 1.0;
    fVar2 = *(float *)(param_1 + 0x314);
    fVar3 = *(float *)(param_1 + 0xe4) +
            *(float *)(param_1 + 0x198) * (*(float *)(param_1 + 0x300) + 1.0);
    pfVar1 = (float *)(param_1 + 0x314);
    fVar7 = DAT_031a983c;
    fVar5 = DAT_031a9778._4_4_;
  }
  else {
    if (param_2 != 0x2c) {
      return;
    }
    fVar6 = *(float *)(param_1 + 0x250) + 1.0;
    fVar2 = *(float *)(param_1 + 0x30c);
    fVar3 = *(float *)(param_1 + 0xe8) +
            *(float *)(param_1 + 0x19c) * (*(float *)(param_1 + 0x304) + 1.0);
    pfVar1 = (float *)(param_1 + 0x30c);
    fVar7 = DAT_031a9840;
    fVar5 = DAT_031a9780;
  }
  fVar4 = fVar6 * fVar3;
  if (fVar7 <= fVar6 * fVar3) {
    fVar4 = fVar7;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  if (fVar5 <= fVar2) {
    fVar2 = fVar5;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *pfVar1 = fVar2;
  return;
}




void FUN_00d5f6b0(float param_1,long param_2,uint param_3)

{
  if ((param_3 == 6) && (0.0 < param_1)) {
    *(float *)(param_2 + 0x324) = *(float *)(param_2 + 0x324) + param_1;
  }
  param_2 = param_2 + (ulong)param_3 * 4;
  param_1 = *(float *)(param_2 + 0x308) + param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x308) = param_1;
  FUN_00d5f734();
  return;
}




void FUN_00d5f6e8(long param_1,int param_2,float *param_3)

{
  if ((param_2 == 6) && (0.0 < *param_3)) {
    *(float *)(param_1 + 0x324) = *param_3 + *(float *)(param_1 + 0x324);
  }
  return;
}




void FUN_00d5f70c(float param_1,long param_2,uint param_3)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_2 + (ulong)param_3 * 4 + 0x308) = param_1;
  FUN_00d5f734();
  return;
}




void FUN_00d5f720(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_3;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_3 = fVar1;
  return;
}




void FUN_00d5f734(float param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  switch(param_3) {
  case 0:
    fVar2 = (*(float *)(param_2 + 0x1a0) + 1.0) *
            (*(float *)(param_2 + 0x38) +
            *(float *)(param_2 + 0xec) * (*(float *)(param_2 + 0x254) + 1.0));
    if (DAT_031a9790 <= fVar2) {
      fVar2 = DAT_031a9790;
    }
    fVar3 = DAT_031a96d0;
    if (DAT_031a96d0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(param_2 + 0x308);
    if (fVar3 <= *(float *)(param_2 + 0x308)) {
      fVar2 = fVar3;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_2 + 0x308) = fVar2;
    return;
  case 1:
    fVar2 = (*(float *)(param_2 + 0x250) + 1.0) *
            (*(float *)(param_2 + 0xe8) +
            *(float *)(param_2 + 0x19c) * (*(float *)(param_2 + 0x304) + 1.0));
    if (DAT_031a9840 <= fVar2) {
      fVar2 = DAT_031a9840;
    }
    fVar3 = DAT_031a9780;
    if (DAT_031a9780 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(param_2 + 0x30c);
    if (fVar3 <= *(float *)(param_2 + 0x30c)) {
      fVar2 = fVar3;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_2 + 0x30c) = fVar2;
    return;
  case 2:
    fVar2 = (*(float *)(param_2 + 0x1a8) + 1.0) *
            (*(float *)(param_2 + 0x40) +
            *(float *)(param_2 + 0xf4) * (*(float *)(param_2 + 0x25c) + 1.0));
    if (DAT_031a9798 <= fVar2) {
      fVar2 = DAT_031a9798;
    }
    fVar3 = DAT_031a96d8;
    if (DAT_031a96d8 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(param_2 + 0x310);
    if (fVar3 <= *(float *)(param_2 + 0x310)) {
      fVar2 = fVar3;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_2 + 0x310) = fVar2;
    return;
  case 3:
    fVar2 = (*(float *)(param_2 + 0x24c) + 1.0) *
            (*(float *)(param_2 + 0xe4) +
            *(float *)(param_2 + 0x198) * (*(float *)(param_2 + 0x300) + 1.0));
    if (DAT_031a983c <= fVar2) {
      fVar2 = DAT_031a983c;
    }
    fVar3 = DAT_031a9778._4_4_;
    if (DAT_031a9778._4_4_ <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(param_2 + 0x314);
    if (fVar3 <= *(float *)(param_2 + 0x314)) {
      fVar2 = fVar3;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_2 + 0x314) = fVar2;
  default:
    return;
  case 4:
    break;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_1 <= 0.0) {
    if (1.1920929e-07 <= ABS(*(float *)(param_2 + 0x318))) {
      return;
    }
    uVar1 = *(ulong *)(param_2 + 0x348);
    *(undefined4 *)(param_2 + 0xb8) = 0;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x348);
    *(float *)(param_2 + 0xb8) = param_1;
  }
  *(ulong *)(param_2 + 0x348) = uVar1 | 0x100000000;
  return;
}




void FUN_00d5f94c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = 0;
  puVar3 = (undefined4 *)(param_2 + 0xb4);
  puVar4 = (undefined4 *)(param_1 + 0xec);
  do {
    uVar5 = 1L << (uVar1 & 0x3f);
    if ((*(ulong *)(param_2 + 0x310) & uVar5) != 0) {
      puVar4[-0x2d] = puVar3[-0x2d];
      uVar6 = *(ulong *)(param_1 + 0x348);
      *puVar4 = *puVar3;
      puVar4[0x2d] = puVar3[0x2d];
      *(ulong *)(param_1 + 0x348) = uVar6 | uVar5;
    }
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar1 != 0x2d);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1 + 0x308 + lVar2) = *(undefined4 *)(param_2 + 0x2d0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x40);
  return;
}




void FUN_00d5f9c8(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d5f9f0(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d5fa20(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d5fa44(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d5fa70(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d5fa78(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d5fa80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281dbb8;
  param_1[5] = &PTR_FUN_0281dbe8;
  FUN_00d4d1ec(param_1 + 7);
  return param_1;
}




void FUN_00d5fadc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d5fae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d5fae8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281dc18;
  thunk_FUN_00ef0978(param_1 + 6);
  *(undefined4 *)(param_1 + 0xf7) = DAT_03218f38;
  param_1[0xf6] = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x7c4) = DAT_03218f70;
  *(undefined8 *)((long)param_1 + 0x7bc) = DAT_03218f68;
  *(undefined4 *)(param_1 + 0xfa) = DAT_03218f38;
  param_1[0xf9] = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x7dc) = DAT_03218f70;
  *(undefined8 *)((long)param_1 + 0x7d4) = DAT_03218f68;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x100) = DAT_03218f70;
  uVar1 = DAT_03218f68;
  *(undefined4 *)((long)param_1 + 0x804) = 0;
  param_1[0xff] = uVar1;
  *(undefined4 *)(param_1 + 0x102) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x814) = 0;
  param_1[0x101] = uVar1;
  *(byte *)(param_1 + 0x103) = *(byte *)(param_1 + 0x103) & 0xd8;
  return;
}




void FUN_00d5fbc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281dc18;
  thunk_FUN_00ef4010(param_1 + 6);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d5fbf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281dc18;
  thunk_FUN_00ef4010(param_1 + 6);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d5fc34(long param_1)

{
  long lVar1;
  
  DAT_0314f724 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0314f724 + 1;
  lVar1 = param_1 + (ulong)DAT_0314f724 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d615dc;
  *(code **)(lVar1 + 0xb8) = FUN_00d61600;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_0314f724;
  *(undefined4 *)(lVar1 + 0xa8) = 0x820;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_00d5fcd8,0);
  FUN_019867cc(param_1,0x1b0a0423,FUN_00d5fd20,0);
  return;
}




void FUN_00d5fcd8(long param_1)

{
  FUN_00d60008();
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x818) & 1) != 0) {
    FUN_00d60208(param_1);
  }
  FUN_00d60430(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d5fe08(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  float fVar2;
  float local_48;
  float local_44;
  float fStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_00d557c4(*(undefined8 *)(param_1 + 0x10),&local_48,&DAT_03218f68);
  fVar2 = acosf(local_48 * (float)DAT_03218f68 + local_44 * DAT_03218f68._4_4_ +
                fStack_40 * DAT_03218f70);
  *(float *)(param_1 + 0x7e0) = fVar2;
  if (local_48 * DAT_03218f88 + local_44 * (float)_DAT_03218f8c +
      fStack_40 * (float)((ulong)_DAT_03218f8c >> 0x20) < 0.0) {
    *(float *)(param_1 + 0x7e0) = 6.2831855 - fVar2;
  }
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xe7 | (param_3 & 3) << 3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5fefc(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x818);
  if ((bVar2 & 1) != 0) {
    FUN_00d5ff84(param_1);
    bVar2 = *(byte *)(param_1 + 0x818);
  }
  *(undefined4 *)(param_1 + 0x7b8) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x7b0) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x7c4) = DAT_03218f70;
  *(undefined8 *)(param_1 + 0x7bc) = DAT_03218f68;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(byte *)(param_1 + 0x818) = bVar2 & 0xfe;
  *(undefined4 *)(param_1 + 0x804) = 0;
  *(undefined8 *)(param_1 + 0x808) = DAT_03218f30;
  uVar1 = DAT_03218f38;
  *(undefined4 *)(param_1 + 0x814) = 0;
  *(undefined4 *)(param_1 + 0x810) = uVar1;
  return;
}




void FUN_00d5ff84(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(*(long *)(param_1 + 0x28) + 0x1c) != '\0') &&
     (uVar2 = FUN_00ceab48(), (uVar2 & 1) != 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    FUN_00d55794(lVar3,auStack_68,1);
    FUN_00d05a8c(auStack_58,*(undefined4 *)(lVar3 + 0x260),auStack_68);
    FUN_00ce20fc(auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

