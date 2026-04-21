// functions/009bf — 35 functions
#include "libGameKindred.h"




void FUN_009bf088(long param_1)

{
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) >> 2 & 1) == 0) {
    return;
  }
  FUN_009bf440();
  return;
}




void FUN_009bf2b4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 2;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_009bf31c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfd;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_009bf440(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined1 auStack_90 [96];
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_90);
  FUN_00d4dabc(auStack_90,4);
  iVar3 = FUN_00d9e840(auStack_90,&local_30,1,0);
  if (((iVar3 == 0) || (local_30 == 0)) || (cVar2 = FUN_00d55870(), cVar2 == '\0')) {
    bVar4 = *(byte *)(param_1 + 0x34) & 0xfe;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x34) | 1;
  }
  *(byte *)(param_1 + 0x34) = bVar4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bf4dc(long param_1,long param_2)

{
  float fVar1;
  
  if ((*(byte *)(param_2 + 0x2f4) & 5) != 0) {
    fVar1 = (float)FUN_009bf51c(param_1);
    *(float *)(param_1 + 0x2c) = fVar1 + *(float *)(param_1 + 0x2c);
  }
  return;
}




float FUN_009bf51c(float param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00ced270(*(undefined4 *)(param_3 + 0x260));
  if ((uVar1 & 1) == 0) {
    param_3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  lVar2 = *(long *)(param_3 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_0312ef00 <= fVar3) {
    fVar3 = DAT_0312ef00;
  }
  fVar4 = DAT_0312ee40;
  if (DAT_0312ee40 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)NEON_fminnm(ABS(param_1) / fVar4,0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}




void FUN_009bf5c0(long param_1,long param_2)

{
  float fVar1;
  
  if (((*(byte *)(param_1 + 0x34) >> 1 & 1) == 0) && ((*(byte *)(param_2 + 0x2f4) & 5) != 0)) {
    fVar1 = (float)FUN_009bf51c(param_1);
    *(float *)(param_1 + 0x30) = fVar1 + *(float *)(param_1 + 0x30);
  }
  return;
}




void FUN_009bf608(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 2;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_009bf648(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfd;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_009bf688(long param_1,undefined8 param_2)

{
  int iVar1;
  char *__s1;
  undefined4 uVar2;
  
  __s1 = (char *)FUN_009da418(param_2);
  iVar1 = strcmp(__s1,"Forest");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(__s1,"Lane");
    if (iVar1 != 0) {
      return;
    }
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  return;
}




undefined4 FUN_009bf6e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined4 FUN_009bf6ec(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return uVar1;
}




undefined4 FUN_009bf6f8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return uVar1;
}




byte FUN_009bf704(long param_1)

{
  return *(byte *)(param_1 + 0x34) & 1;
}




byte FUN_009bf710(long param_1)

{
  return *(byte *)(param_1 + 0x34) >> 1 & 1;
}




void FUN_009bf71c(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009bf740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2930;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  *(byte *)((long)param_1 + 0x34) = *(byte *)((long)param_1 + 0x34) & 0xfc;
  return;
}




void FUN_009bf768(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bf770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009bf774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2960;
  *(undefined4 *)(param_1 + 6) = 0x3fff;
  return;
}




void FUN_009bf790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2960;
  FUN_009bf7c4();
  FUN_01985bd0(param_1);
  return;
}




void FUN_009bf7c4(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 0xd & 1) == 0) {
    FUN_00f2a0ac((int)(uVar1 << 0x1c) >> 0x1c,uVar1 >> 4 & 0x3ff);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x3ff0;
  }
  return;
}




void FUN_009bf800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2960;
  FUN_009bf7c4();
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009bf83c(long param_1)

{
  long lVar1;
  
  DAT_0312ebf0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ebf0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ebf0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009bfad0;
  *(code **)(lVar1 + 0xb8) = FUN_009bfaec;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ebf0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867b4(param_1,3,FUN_009bf8a8);
  return;
}




void FUN_009bf8a8(long param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  float *pfVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  byte local_aa8 [200];
  float local_9e0 [200];
  undefined1 auStack_6c0 [1600];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    uVar10 = 0;
    uVar9 = (ulong)param_3;
    do {
      lVar6 = *(long *)(param_1 + (ulong)param_2[uVar10] * 0x38 + 0x28);
      FUN_00d580a0(lVar6,auStack_6c0 + uVar10 * 8);
      lVar4 = *(long *)(lVar6 + 0x40);
      fVar11 = (*(float *)(lVar4 + 0x1e4) + 1.0) *
               (*(float *)(lVar4 + 0x7c) +
               *(float *)(lVar4 + 0x130) * (*(float *)(lVar4 + 0x298) + 1.0));
      if (DAT_0312f0c4 <= fVar11) {
        fVar11 = DAT_0312f0c4;
      }
      fVar12 = DAT_0312f000._4_4_;
      if (DAT_0312f000._4_4_ <= fVar11) {
        fVar12 = fVar11;
      }
      local_9e0[uVar10] = fVar12;
      lVar4 = *(long *)(lVar6 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_0312ec00))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      bVar3 = FUN_00d7d634();
      local_aa8[uVar10] = ~bVar3 & 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    if (param_3 != 0) {
      puVar5 = auStack_6c0;
      pfVar7 = local_9e0;
      pbVar8 = local_aa8;
      do {
        iVar1 = *(int *)(param_1 + (ulong)*param_2 * 0x38 + 0x30);
        FUN_00f2a0c4(*pfVar7,(iVar1 << 0x1c) >> 0x1c,(iVar1 << 0x12) >> 0x16,puVar5,iVar1 >> 0xe,
                     *pbVar8);
        uVar9 = uVar9 - 1;
        puVar5 = puVar5 + 8;
        param_2 = param_2 + 1;
        pfVar7 = pfVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 != 0);
    }
  }
  FUN_00934f3c();
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bfa44(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff0 | param_2 & 0xf;
  iVar1 = FUN_00934f98(param_3);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x3fff | iVar1 << 0xe;
  FUN_009bfa8c(param_1);
  return;
}




void FUN_009bfa8c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x30) * 0x10000000;
  if (-0x10000000 < iVar1) {
    uVar2 = FUN_00f2a098(iVar1 >> 0x1c);
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) & 0xffffc000 |
         *(uint *)(param_1 + 0x30) & 0xf | (uVar2 & 0x3ff) << 4;
  }
  return;
}




void FUN_009bfad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2960;
  *(undefined4 *)(param_1 + 6) = 0x3fff;
  return;
}




void FUN_009bfaec(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bfaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009bfaf8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 5;
  *param_1 = &PTR_FUN_027c2990;
  *(undefined4 *)((long)param_1 + 0x44) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0x3c) = DAT_03218f30;
  *(undefined4 *)(param_1 + 10) = DAT_03218f38;
  param_1[9] = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x54) = _DAT_03218ef8;
  *(undefined8 *)((long)param_1 + 0x5c) = DAT_03218f08;
  *(undefined4 *)((long)param_1 + 0x6c) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 100) = uVar1;
  FUN_00e70314(param_1 + 0x10);
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x12] = 0x4120000042700000;
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b8570();
  return;
}




void FUN_009bfbb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2990;
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b850c();
  FUN_01985bd0(param_1);
  return;
}




void FUN_009bfbf4(void *param_1)

{
  FUN_009bfbb8();
  operator_delete(param_1);
  return;
}




void FUN_009bfc18(long param_1)

{
  long lVar1;
  
  DAT_0312f134 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f134 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f134 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009c0e0c;
  *(code **)(lVar1 + 0xb8) = FUN_009c0e30;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f134;
  *(undefined4 *)(lVar1 + 0xa8) = 0xa8;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009bfc88,0);
  return;
}




void FUN_009bfc88(undefined8 param_1)

{
  FUN_009bfcb4();
  FUN_009bff80(param_1);
  FUN_009c01ec(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009bfcb4(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float __x;
  float fVar10;
  float fVar11;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00a1bd84();
  if (((uVar6 & 1) == 0) || (*(char *)(param_1 + 0x9e) != '\0')) goto LAB_009bff54;
  FUN_01980738(&fStack_4c,&local_50,0,0);
  FUN_00f00238(&fStack_54,&local_58);
  FUN_00f0036c(&fStack_5c,&local_60);
  fVar7 = DAT_03218ef8;
  fStack_4c = fStack_4c / fStack_5c;
  local_50 = local_50 / local_60;
  local_68 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
  fStack_54 = fStack_54 / fStack_5c;
  local_58 = local_58 / local_60;
  fVar11 = DAT_03218ef8;
  fVar10 = _DAT_03218efc;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (fStack_4c <= 20.0) {
      fVar11 = -1.0;
LAB_009bfd94:
      local_68 = CONCAT44(_DAT_03218efc,fVar11);
    }
    else if (fStack_54 + -20.0 <= fStack_4c) {
      fVar11 = 1.0;
      goto LAB_009bfd94;
    }
    if (local_50 <= 20.0) {
      local_68 = CONCAT44(0xbf800000,(undefined4)local_68);
      fVar10 = -1.0;
    }
    else if (local_58 + -20.0 <= local_50) {
      local_68 = CONCAT44(0x3f800000,(undefined4)local_68);
      fVar10 = 1.0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x9d);
  cVar2 = *(char *)(param_1 + 0x9c);
  *(bool *)(param_1 + 0x9d) = fVar10 != 0.0;
  *(bool *)(param_1 + 0x9c) = fVar11 != 0.0;
  fVar9 = fStack_54;
  if (fVar11 == 0.0) {
    if (fVar10 != 0.0) {
      bVar4 = cVar1 == '\0' && cVar2 == '\0';
      goto LAB_009bfe34;
    }
    bVar5 = cVar1 != '\0' || cVar2 != '\0';
    bVar4 = false;
  }
  else {
    bVar4 = cVar1 == '\0' && cVar2 == '\0';
    if (((fVar10 == 0.0) && (cVar2 == '\0')) && (fVar11 != 0.0)) {
      *(float *)(param_1 + 0x60) = local_50 / local_58;
    }
LAB_009bfe34:
    if (cVar1 == '\0' && fVar10 != 0.0) {
      if (fVar11 != 0.0) {
LAB_009bfe54:
        bVar5 = false;
        if (fVar10 == 0.0) {
          fVar9 = local_50 / local_58 - *(float *)(param_1 + 0x60);
          fVar9 = fVar9 + fVar9;
          if (1.0 < fVar9) {
            fVar9 = 1.0;
          }
          fVar10 = fVar10 + fVar9;
          local_68 = CONCAT44(fVar10,(undefined4)local_68);
          fVar9 = 1.0;
        }
        else {
          *(undefined8 *)(param_1 + 0x5c) = DAT_03218f08;
        }
        goto LAB_009bfed4;
      }
      *(float *)(param_1 + 0x5c) = fStack_4c / fStack_54;
    }
    else if (fVar11 != 0.0) goto LAB_009bfe54;
    bVar5 = false;
    if (fVar10 != 0.0) {
      fVar9 = fStack_4c / fStack_54 - *(float *)(param_1 + 0x5c);
      fVar9 = fVar9 + fVar9;
      if (1.0 < fVar9) {
        fVar9 = 1.0;
      }
      fVar11 = fVar11 + fVar9;
      local_68 = CONCAT44(local_68._4_4_,fVar11);
      fVar9 = 1.0;
    }
  }
LAB_009bfed4:
  if ((fVar11 != fVar7) || (fVar10 != _DAT_03218efc)) {
    __x = fVar11 * fVar11 + fVar10 * fVar10;
    fVar7 = SQRT(__x);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(__x);
    }
    fVar11 = fVar11 / fVar7;
    local_68 = CONCAT44(fVar10 / fVar7,fVar11);
    uVar8 = FUN_00cac608(&local_68);
    *(undefined4 *)(param_1 + 100) = uVar8;
    *(float *)(param_1 + 0x68) = fVar11;
    *(float *)(param_1 + 0x6c) = fVar9;
  }
  if ((bool)(bVar4 | bVar5)) {
    FUN_00e70314(param_1 + 0x80);
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
    if (bVar4) {
      uVar8 = FUN_009c05fc();
    }
    *(undefined4 *)(param_1 + 0x78) = uVar8;
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
LAB_009bff54:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009bff80(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 local_68 [12];
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009f1f70(0xe);
  fVar6 = 0.0;
  if ((uVar3 & 1) != 0) {
    fVar6 = 0.05;
    if ((*(char *)(param_1 + 0x9c) == '\0') && (*(char *)(param_1 + 0x9d) == '\0')) {
      fVar6 = *(float *)((long)&DAT_01b98628 + (ulong)(*(char *)(param_1 + 0x9e) == '\0') * 4);
    }
    if (*(char *)(param_1 + 0x9e) == '\0') {
      fVar7 = 1.0;
      if (*(char *)(param_1 + 0x9f) != '\0') {
        fVar7 = 2.0;
      }
    }
    else {
      fVar7 = 2.0;
    }
    fVar6 = fVar6 * fVar7;
  }
  if (1e-05 <= ABS(fVar6)) {
    uVar2 = clock_gettime(1,(timespec *)local_68);
    uVar3 = (ulong)uVar2;
    lVar5 = CONCAT44(uStack_5c,local_68._8_4_) - *(long *)(param_1 + 0x88);
    lVar4 = local_68._0_8_ - *(long *)(param_1 + 0x80);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (CONCAT44(uStack_5c,local_68._8_4_) + 1000000000) - *(long *)(param_1 + 0x88);
    }
    fVar7 = (float)((double)(lVar5 + lVar4 * 1000000000) * 1e-09);
    if (fVar6 <= fVar7) {
      fVar7 = fVar6;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar6 = fVar7 / fVar6 + -1.0;
    fVar6 = *(float *)(param_1 + 0x74) +
            (*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x74)) *
            (fVar6 * fVar6 * fVar6 + 1.0);
    *(float *)(param_1 + 0x70) = fVar6;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x70) = fVar6;
  }
  if (0.0 < fVar6) {
    FUN_009bbfb0(uVar3);
    lVar4 = FUN_009bd5c8();
    local_68._8_4_ = *(float *)(lVar4 + 0x41c);
    local_68._0_8_ = *(__time_t *)(lVar4 + 0x414);
    fVar9 = *(float *)(param_1 + 0x6c);
    fVar6 = *(float *)(param_1 + 0x70);
    uVar8 = *(undefined8 *)(param_1 + 100);
    fVar7 = (float)FUN_01988c78();
    local_68._0_8_ =
         CONCAT44(SUB84(local_68._0_8_,4) + (float)((ulong)uVar8 >> 0x20) * fVar6 * fVar7,
                  (float)local_68._0_8_ + (float)uVar8 * fVar6 * fVar7);
    local_68._8_4_ = fVar6 * fVar9 * fVar7 + (float)local_68._8_4_;
    FUN_00cac9c4(local_68);
    FUN_009b81fc(lVar4,local_68,0);
  }
  if (*(char *)(param_1 + 0x9e) != '\0') {
    clock_gettime(1,(timespec *)local_68);
    lVar4 = local_68._0_8_ - *(long *)(param_1 + 0x80);
    lVar5 = CONCAT44(uStack_5c,local_68._8_4_) - *(long *)(param_1 + 0x88);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (CONCAT44(uStack_5c,local_68._8_4_) + 1000000000) - *(long *)(param_1 + 0x88);
    }
    if (0.07999999821186066 <= (double)(lVar5 + lVar4 * 1000000000) * 1e-09) {
      FUN_00e70314();
      *(undefined2 *)(param_1 + 0x9e) = 0x100;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

