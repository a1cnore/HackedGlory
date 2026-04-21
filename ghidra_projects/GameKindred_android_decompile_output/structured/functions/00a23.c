// functions/00a23 — 14 functions
#include "libGameKindred.h"




void FUN_00a23324(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x12 & 1) != 0) {
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) & 0xfffffffb;
  }
  FUN_00a24fb8(param_1,1);
  FUN_00a2516c(param_1,0);
  plVar2 = *(long **)(param_1 + 0x1a8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      lVar3 = *(long *)(lVar3 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      iVar1 = FUN_00d53a44(lVar3,*(undefined4 *)(param_1 + 0x1ce8));
      FUN_00a25330(param_1,iVar1 != 0);
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_03214ce8;
    }
  }
  *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) & 0xfb;
  return;
}




void FUN_00a23414(long param_1)

{
  *(uint *)(param_1 + 0xd34) = *(uint *)(param_1 + 0xd34) & 0xfffffffb;
  *(uint *)(param_1 + 0xe24) = *(uint *)(param_1 + 0xe24) & 0xfffffffb;
  return;
}




void FUN_00a23430(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  plVar2 = *(long **)(param_1 + 0x1a8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x18);
        while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
          lVar3 = *(long *)(lVar3 + 0x20);
        }
        uVar1 = FUN_00d53978(lVar3,*(undefined4 *)(param_1 + 0x1ce8));
        if (((uVar1 == 0) || ((uVar1 >> 2 & 1) != 0)) &&
           (((uVar1 >> 5 & 1) != 0 || ((uVar1 & 0x38a) == 0)))) {
          if ((uVar1 >> 2 & 1) == 0) {
            fVar5 = (float)FUN_00d53a58(lVar3,*(undefined4 *)(param_1 + 0x1ce8));
            fVar6 = (float)FUN_00d53a00(lVar3,*(undefined4 *)(param_1 + 0x1ce8));
            fVar5 = fVar5 / fVar6;
            if (fVar6 <= 0.0) {
              fVar5 = 0.0;
            }
            uVar7 = NEON_fminnm(fVar5,0x3f800000);
            *(undefined4 *)(param_1 + 0x1ce4) = uVar7;
            uVar7 = FUN_00d53a30(lVar3,*(undefined4 *)(param_1 + 0x1ce8));
            FUN_00a27764(param_1,uVar7);
            return;
          }
          uVar4 = 3;
        }
        else {
          uVar4 = 0;
        }
        FUN_00a239fc(param_1 + 0xb8,uVar4,0,0);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_03214ce8;
    }
  }
  FUN_00ceab64();
  return;
}




void FUN_00a2356c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x12 & 1) != 0) {
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) & 0xfffffffb;
  }
  FUN_00a24fb8(param_1,0);
  FUN_00a2516c(param_1,*(byte *)(param_1 + 0x1cf2) >> 4 & 1);
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d53a44(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  FUN_00a25330(param_1,iVar1 != 0);
  *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) & 0xfb;
  return;
}




void FUN_00a23634(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_00d53978(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  else if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
  }
  FUN_00a239fc(param_1 + 0xb8,uVar3,0,0);
  return;
}




void FUN_00a236d0(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x12 & 1) != 0) {
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) & 0xfffffffb;
  }
  FUN_00a2516c(param_1,1);
  *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) & 0xfb;
  return;
}




void FUN_00a23730(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  lVar4 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar8 = FUN_00d539e8(lVar4,*(undefined4 *)(param_1 + 0x1ce8));
  fVar6 = (float)FUN_00d53a00(lVar4,*(undefined4 *)(param_1 + 0x1ce8));
  FUN_00a276d0(uVar8,param_1);
  iVar1 = FUN_00d53a44(lVar4,*(undefined4 *)(param_1 + 0x1ce8));
  if (iVar1 != 0) {
    uVar2 = FUN_00d53a30(lVar4,*(undefined4 *)(param_1 + 0x1ce8));
    FUN_00a27764(param_1,uVar2);
  }
  fVar7 = (float)uVar8 / fVar6;
  if (fVar6 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar6 = (float)NEON_fminnm(fVar7,0x3f800000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x1ce0) = fVar6;
  FUN_00a24d5c(param_1);
  uVar3 = FUN_00d53978(lVar4,*(undefined4 *)(param_1 + 0x1ce8));
  if (uVar3 == 0) {
    uVar5 = FUN_00d52fe0(lVar4,*(undefined4 *)(param_1 + 0x1ce8));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar8 = 1;
  }
  else {
    if (((uVar3 >> 2 & 1) != 0) && (((uVar3 >> 5 & 1) != 0 || ((uVar3 & 0x388) == 0)))) {
      return;
    }
    uVar8 = 0;
  }
  FUN_00a239fc(param_1 + 0xb8,uVar8,0,0);
  return;
}




void FUN_00a23868(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x12 & 1) == 0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    FUN_00d539e8(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
    FUN_00a276d0(param_1);
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) | 4;
  }
  FUN_00a24fb8(param_1,1);
  FUN_00a2516c(param_1,0);
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d53a44(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  FUN_00a25330(param_1,iVar1 != 0);
  *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) | 4;
  FUN_00e70314(param_1 + 0x1cc0);
  return;
}




void FUN_00a23970(void)

{
  return;
}




void FUN_00a23974(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00a239a8;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00a239a8:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00a239fc(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_00a23a44;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00a23a44:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00a23ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a23b34(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027c88b0;
  if ((long *)param_1[0x1d4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d4] + 8))();
    param_1[0x1d4] = 0;
  }
  FUN_00afc0a4(param_1 + 0x35c);
  param_1[0x33e] = &PTR_FUN_028266f0;
  param_1[0x355] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x358);
  FUN_00f13d08(param_1 + 0x33e);
  param_1[800] = &PTR_FUN_028266f0;
  param_1[0x337] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33a);
  FUN_00f13d08(param_1 + 800);
  FUN_00f13d08(param_1 + 0x309);
  FUN_00f13d08(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_028266f0;
  param_1[0x2ce] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d1);
  FUN_00f13d08(param_1 + 0x2b7);
  puVar1 = param_1 + 0x299;
  lVar2 = -0x4b0;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x20a);
  param_1[0x1ec] = &PTR_FUN_028266f0;
  param_1[0x203] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x206);
  FUN_00f13d08(param_1 + 0x1ec);
  FUN_00f13d08(param_1 + 0x1d5);
  param_1[0x1b4] = &PTR_FUN_028266f0;
  param_1[0x1cb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ce);
  FUN_00f13d08(param_1 + 0x1b4);
  param_1[0x196] = &PTR_FUN_028266f0;
  param_1[0x1ad] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b0);
  FUN_00f13d08(param_1 + 0x196);
  FUN_00f0d3a4(param_1 + 0x170);
  FUN_00f0d3a4(param_1 + 0x14a);
  param_1[300] = &PTR_FUN_028266f0;
  param_1[0x143] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x146);
  FUN_00f13d08(param_1 + 300);
  FUN_00f0d3a4(param_1 + 0x106);
  param_1[0xe6] = &PTR_FUN_028266f0;
  param_1[0xfd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x100);
  FUN_00f13d08(param_1 + 0xe6);
  param_1[200] = &PTR_FUN_028266f0;
  param_1[0xdf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe2);
  FUN_00f13d08(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_028266f0;
  param_1[0xc1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc4);
  FUN_00f13d08(param_1 + 0xaa);
  param_1[0x8c] = &PTR_FUN_028266f0;
  param_1[0xa3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa6);
  FUN_00f13d08(param_1 + 0x8c);
  param_1[0x6c] = &PTR_FUN_028266f0;
  param_1[0x83] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x86);
  FUN_00f13d08(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x37);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a23db4(void *param_1)

{
  FUN_00a23b34();
  operator_delete(param_1);
  return;
}




void FUN_00a23dd8(long param_1,undefined4 param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,uint param_6,uint param_7)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 local_110;
  void *local_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x1cec) = param_2;
  uVar3 = *(undefined4 *)(param_3 + 0x30);
  *(long *)(param_1 + 0x1a8) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0x1b0) = uVar3;
  *(byte *)(param_1 + 0x1cf2) =
       (byte)(((param_6 & 1) << 0x15) >> 0x10) | (byte)(((param_7 & 1) << 0x16) >> 0x10) |
       *(byte *)(param_1 + 0x1cf2) & 0x9f;
  puVar6 = PTR_s_build___HUDPartsHero__s_png_02be3470;
  uVar8 = FUN_00d5bc38(param_3);
  FUN_00e6a8a8(auStack_100,puVar6,uVar8);
  if ((*(float *)(param_1 + 0x2c0) != *(float *)(param_1 + 0x208)) ||
     (*(float *)(param_1 + 0x2c4) != *(float *)(param_1 + 0x20c))) {
    *(float *)(param_1 + 0x2c0) = *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x2c4) = *(float *)(param_1 + 0x20c);
    FUN_0091ada4(param_1 + 0x270);
  }
  FUN_00f0e540(param_1 + 0x270,auStack_100);
  if ((*(float *)(param_1 + 0xfb0) != *(float *)(param_1 + 0x208)) ||
     (*(float *)(param_1 + 0xfb4) != *(float *)(param_1 + 0x20c))) {
    *(float *)(param_1 + 0xfb0) = *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0xfb4) = *(float *)(param_1 + 0x20c);
    FUN_0091ada4(param_1 + 0xf60);
  }
  FUN_00f0e540(param_1 + 0xf60,auStack_100);
  fVar12 = 0.5;
  if ((*(float *)(param_1 + 0x10a0) != 0.5) || (fVar13 = 1.0, *(float *)(param_1 + 0x10a4) != 1.0))
  {
    *(undefined8 *)(param_1 + 0x10a0) = 0x3f8000003f000000;
    FUN_0091ada4(param_1 + 0x1050);
    fVar12 = *(float *)(param_1 + 0x10a0);
    fVar13 = *(float *)(param_1 + 0x10a4);
  }
  if ((*(float *)(param_1 + 0x1608) != fVar12) || (*(float *)(param_1 + 0x160c) != fVar13)) {
    *(float *)(param_1 + 0x1608) = fVar12;
    *(float *)(param_1 + 0x160c) = fVar13;
    FUN_0091ada4(param_1 + 0x15b8);
  }
  lVar11 = 0;
  do {
    plVar1 = (long *)(param_1 + 0x1108 + lVar11);
    local_110 = 0x3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_110);
    FUN_00f0e540(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
    FUN_00f0e578(plVar1,"hud_ability_level_dot_dim");
    lVar2 = param_1 + lVar11;
    lVar11 = lVar11 + 0xf0;
    *(uint *)(lVar2 + 0x118c) = *(uint *)(lVar2 + 0x118c) & 0xfffffffb;
  } while (lVar11 != 0x4b0);
  FUN_00f0e548(param_1 + 0x360,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               "ability_icon_inactive_overlay");
  FUN_00f0e548(param_1 + 0x460,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               "ability_icon_inactive_overlay");
  FUN_00f0e548(param_1 + 0x550,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               "ability_icon_flash_overlay");
  FUN_00f0e548(param_1 + 0x640,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               "ability_icon_flash_overlay");
  FUN_00f0e548(param_1 + 0x730,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               "ability_icon_inactive_overlay");
  if ((*(uint *)(param_1 + 0x7b4) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x7b4) = *(uint *)(param_1 + 0x7b4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(param_1 + 0x730);
  }
  if (((*(byte *)(param_1 + 0x1cf2) ^ 0xff) & 0x60) == 0) {
    FUN_00e705c8(&local_110,&DAT_01b9f2ee);
    FUN_00f0d75c(param_1 + 0x830,&local_110);
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
      local_110 = 0;
      local_108 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0x830,&DAT_03210450);
  }
  FUN_00a24160(param_1,param_4,param_5);
  uVar9 = FUN_01980628();
  if ((((uVar9 & 1) != 0) || (iVar7 = FUN_0092f28c(), iVar7 == 1)) &&
     (uVar9 = FUN_00ceab64(), (uVar9 & 1) == 0)) {
    uVar4 = *(uint *)(param_1 + 0x1cec);
    if (2 < uVar4) {
      uVar4 = 0x1b;
    }
    pvVar10 = operator_new(0x200);
    FUN_00c81dd8(pvVar10,uVar4);
    *(void **)(param_1 + 0xea0) = pvVar10;
    FUN_00f023ec(param_1 + 0x1b8,pvVar10,1);
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

