// functions/01992 — 9 functions
#include "libGameKindred.h"




void FUN_019920c0(undefined8 param_1,float *param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  fVar13 = param_2[1];
  uVar2 = (ulong)(uint)fVar13;
  lVar6 = (ulong)(uint)param_2[3] * 0x18 +
          uVar2 * 4 * (ulong)(uint)param_2[2] + (ulong)(uint)param_2[2] * 4;
  uVar3 = *(uint *)((long)param_2 + lVar6 + 0x10);
  uVar9 = (ulong)uVar3;
  lVar6 = lVar6 + 0x14;
  lVar1 = (long)param_2 + uVar2 * 4 + lVar6;
  fVar12 = (float)(int)(*param_2 * (float)param_1);
  if ((param_3 & 1) == 0) {
    if ((float)((int)fVar13 - 1) <= fVar12) {
      fVar12 = (float)((int)fVar13 - 1);
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    uVar8 = (uint)fVar12;
  }
  else {
    uVar8 = 0;
    if (fVar13 != 0.0) {
      uVar8 = (uint)(int)fVar12 / (uint)fVar13;
    }
    uVar8 = (int)fVar12 - uVar8 * (int)fVar13;
  }
  uVar8 = *(uint *)((long)param_2 + (ulong)uVar8 * 4 + lVar6);
  uVar10 = (ulong)uVar8;
  uVar11 = FUN_019917dc(param_1,(float)uVar2 / *param_2,lVar1,param_3 & 1,uVar9,uVar10);
  if ((float)uVar11 <= 0.0) {
    FUN_0199183c(param_4,lVar1 + (uVar9 + uVar10 * 5) * 4);
  }
  else {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = (uVar8 + 1) / uVar3;
    }
    uVar3 = (uVar8 + 1) - uVar4 * uVar3;
    FUN_0199183c(&local_88,lVar1 + (uVar9 + uVar10 * 5) * 4);
    FUN_0199183c(&local_b8,lVar1 + (uVar9 + (ulong)uVar3 * 5) * 4);
    if (uVar3 < uVar8) {
      local_a8 = local_a8 * (float)local_68;
      fVar13 = (float)((ulong)local_68 >> 0x20);
      fStack_a4 = fStack_a4 * fVar13;
      local_a0 = local_a0 * local_60;
      local_c8 = CONCAT44(fVar13 * (float)((ulong)local_98 >> 0x20),
                          (float)local_68 * (float)local_98);
      local_c0 = local_60 * local_90;
      fVar12 = (local_a8 * fStack_7c - fStack_a4 * local_80) + local_a0 * fStack_84;
      fVar14 = (fStack_a4 * fStack_7c + local_a8 * local_80) - local_a0 * local_88;
      fVar15 = fStack_7c * local_a0 + (fStack_a4 * local_88 - local_a8 * fStack_84);
      fVar13 = (-(local_a8 * local_88) - fStack_a4 * fStack_84) - local_a0 * local_80;
      local_e8 = (fStack_7c * local_b8 + local_88 * fStack_ac + fStack_84 * local_b0) -
                 local_80 * fStack_b4;
      fStack_e4 = (local_80 * local_b8 + fStack_84 * fStack_ac + fStack_7c * fStack_b4) -
                  local_88 * local_b0;
      local_e0 = (local_80 * fStack_ac + fStack_7c * local_b0 + local_88 * fStack_b4) -
                 fStack_84 * local_b8;
      fStack_dc = ((fStack_7c * fStack_ac - local_88 * local_b8) - fStack_84 * fStack_b4) -
                  local_80 * local_b0;
      local_d8 = local_78 +
                 fStack_84 * fVar15 + ((fStack_7c * fVar12 - local_88 * fVar13) - local_80 * fVar14)
      ;
      fStack_d4 = fStack_74 +
                  local_80 * fVar12 +
                  ((fStack_7c * fVar14 - fStack_84 * fVar13) - local_88 * fVar15);
      local_d0 = local_70 +
                 local_88 * fVar14 + ((fStack_7c * fVar15 - local_80 * fVar13) - fStack_84 * fVar12)
      ;
      pfVar7 = &local_e8;
    }
    else {
      pfVar7 = &local_b8;
    }
    FUN_01991d18(uVar11,param_4,&local_88,pfVar7);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01992390(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,uint param_4,
                 float *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_019920c0(param_3,param_4 & 1,&local_78);
  FUN_019920c0(param_2,param_3,param_4 & 1,&local_a8);
  if (local_90 - local_60 < 0.0) {
    local_90 = local_90 + local_60;
    local_98 = CONCAT44(fStack_64 + (float)((ulong)local_98 >> 0x20),local_68 + (float)local_98);
  }
  fVar3 = 0.0;
  fVar10 = local_78 * local_78 + fStack_74 * fStack_74 + local_70 * local_70 + fStack_6c * fStack_6c
  ;
  fVar4 = 0.0;
  fVar7 = 0.0;
  fVar6 = 0.0;
  if (1.1920929e-07 < fVar10) {
    fVar10 = 1.0 / fVar10;
    fVar7 = -fVar10;
    fVar3 = local_78 * fVar7;
    fVar4 = fStack_74 * fVar7;
    fVar7 = local_70 * fVar7;
    fVar6 = fStack_6c * fVar10;
  }
  fVar13 = (fVar4 * local_60 + fVar6 * local_68 + fVar3 * local_5c) - fVar7 * fStack_64;
  fVar8 = fVar7 * local_68 + fVar4 * local_5c + (fVar6 * fStack_64 - fVar3 * local_60);
  fVar10 = ((fVar6 * local_5c - fVar3 * local_68) - fVar4 * fStack_64) - fVar7 * local_60;
  fVar9 = fVar7 * local_5c + ((fVar3 * fStack_64 + fVar6 * local_60) - fVar4 * local_68);
  local_68 = -(((fVar6 * fVar13 - fVar10 * fVar3) - fVar8 * fVar7) + fVar9 * fVar4);
  fStack_64 = -((fVar6 * fVar8 + (fVar13 * fVar7 - fVar10 * fVar4)) - fVar9 * fVar3);
  fVar5 = local_68 * (float)local_88;
  fVar12 = (float)((ulong)local_88 >> 0x20);
  fVar2 = fStack_64 * fVar12;
  local_60 = -(fVar6 * fVar9 + (fVar10 * -fVar7 - fVar13 * fVar4) + fVar8 * fVar3);
  fVar10 = local_80 * local_60;
  fVar8 = (fVar5 * fStack_9c - fVar2 * local_a0) + fVar10 * fStack_a4;
  fVar9 = (fVar2 * fStack_9c + fVar5 * local_a0) - fVar10 * local_a8;
  fVar13 = fStack_9c * fVar10 + (fVar2 * local_a8 - fVar5 * fStack_a4);
  fVar10 = (-(fVar5 * local_a8) - fVar2 * fStack_a4) - fVar10 * local_a0;
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar2 = (float)uVar11 / (float)local_58;
  fVar5 = (float)((ulong)uVar11 >> 0x20) / (float)((ulong)local_58 >> 0x20);
  local_58 = CONCAT44(fVar5,fVar2);
  local_50 = 1.0 / local_50;
  local_5c = 0.0;
  local_4c = 0;
  param_5[3] = ((fVar6 * fStack_9c - fVar3 * local_a8) - fVar4 * fStack_a4) - fVar7 * local_a0;
  param_5[4] = (float)local_98 +
               fStack_a4 * fVar13 + ((fStack_9c * fVar8 - local_a8 * fVar10) - local_a0 * fVar9);
  param_5[5] = local_98._4_4_ +
               local_a0 * fVar8 + ((fStack_9c * fVar9 - fStack_a4 * fVar10) - local_a8 * fVar13);
  *(ulong *)(param_5 + 8) = CONCAT44(fVar5 * fVar12,fVar2 * (float)local_88);
  param_5[10] = local_50 * local_80;
  *param_5 = (fVar7 * fStack_a4 + fVar3 * fStack_9c + fVar6 * local_a8) - fVar4 * local_a0;
  param_5[1] = (fVar3 * local_a0 + fVar4 * fStack_9c + fVar6 * fStack_a4) - fVar7 * local_a8;
  param_5[2] = (fVar7 * fStack_9c + fVar6 * local_a0 + fVar4 * local_a8) - fVar3 * fStack_a4;
  param_5[6] = local_90 +
               local_a8 * fVar9 + ((fStack_9c * fVar13 - local_a0 * fVar10) - fStack_a4 * fVar8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
  local_78 = fVar3;
  fStack_74 = fVar4;
  local_70 = fVar7;
  fStack_6c = fVar6;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_01992720(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_01992728(float param_1,float *param_2,byte param_3,long param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  uVar7 = (ulong)(uint)fVar2;
  fVar9 = (float)(int)(*param_2 * param_1);
  if ((param_3 & 1) == 0) {
    fVar10 = fVar9;
    if ((float)((int)fVar1 - 1) <= fVar9) {
      fVar10 = (float)((int)fVar1 - 1);
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    iVar5 = (int)fVar10;
  }
  else {
    uVar3 = 0;
    if (fVar1 != 0.0) {
      uVar3 = (uint)(int)fVar9 / (uint)fVar1;
    }
    iVar5 = (int)fVar9 - uVar3 * (int)fVar1;
  }
  fVar10 = 0.0;
  if ((iVar5 == (int)fVar1 - 1U & (param_3 ^ 1)) == 0) {
    fVar10 = *param_2 * param_1 - fVar9;
  }
  if (fVar10 <= 0.0) {
    if (fVar2 != 0.0) {
      param_2 = param_2 + (ulong)(uint)(iVar5 * (int)fVar2) * 5 + 3;
      do {
        FUN_01992948(param_4,param_2);
        param_4 = param_4 + 0x30;
        uVar7 = uVar7 - 1;
        param_2 = param_2 + 5;
      } while (uVar7 != 0);
    }
  }
  else if (fVar2 != 0.0) {
    uVar3 = 0;
    if (fVar1 != 0.0) {
      uVar3 = (iVar5 + 1U) / (uint)fVar1;
    }
    lVar8 = 0;
    pfVar6 = param_2 + (ulong)(uint)(iVar5 * (int)fVar2) * 5 + 3;
    do {
      FUN_01992948(auStack_98,pfVar6);
      FUN_01992948(auStack_c8,
                   param_2 + (ulong)(((iVar5 + 1U) - uVar3 * (int)fVar1) * (int)fVar2) * 5 +
                             lVar8 * 5 + 3);
      FUN_01991d18(fVar10,param_4,auStack_98,auStack_c8);
      lVar8 = lVar8 + 1;
      pfVar6 = pfVar6 + 5;
      uVar7 = uVar7 - 1;
      param_4 = param_4 + 0x30;
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01992898(undefined4 *param_1,undefined4 *param_2,int *param_3,int *param_4,long *param_5,
                 undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = (long)(param_1 + 3);
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = param_1 + 3 + (ulong)(uint)(iVar2 * iVar1) * 5;
  }
  return;
}




void FUN_019928dc(float param_1,float param_2,byte param_3,uint param_4,int *param_5,float *param_6)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)(int)(param_1 * param_2);
  if ((param_3 & 1) == 0) {
    fVar4 = fVar3;
    if ((float)(param_4 - 1) <= fVar3) {
      fVar4 = (float)(param_4 - 1);
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    iVar2 = (int)fVar4;
  }
  else {
    uVar1 = 0;
    if (param_4 != 0) {
      uVar1 = (uint)(int)fVar3 / param_4;
    }
    iVar2 = (int)fVar3 - uVar1 * param_4;
  }
  fVar4 = 0.0;
  if ((iVar2 == param_4 - 1 & (param_3 ^ 1)) == 0) {
    fVar4 = param_1 * param_2 - fVar3;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar4;
  }
  return;
}




void FUN_01992948(float *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = *param_2;
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  *param_1 = fVar4;
  uVar1 = param_2[1];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[1] = fVar4;
  uVar1 = param_2[2];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[2] = fVar4;
  uVar1 = param_2[3];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[3] = fVar4;
  uVar1 = param_2[4];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[4] = fVar4;
  uVar1 = param_2[5];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[5] = fVar4;
  uVar1 = param_2[6];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[6] = fVar4;
  param_1[7] = 0.0;
  uVar1 = param_2[7];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[8] = fVar4;
  uVar1 = param_2[8];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[9] = fVar4;
  uVar1 = param_2[9];
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar4 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar4 = -1.0;
    }
    fVar4 = fVar4 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  param_1[10] = fVar4;
  param_1[0xb] = 0.0;
  return;
}




void FUN_01992e24(float param_1,float *param_2,byte param_3,ushort *param_4,uint param_5,
                 long param_6)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar9 = (float)(int)(*param_2 * param_1);
  if ((param_3 & 1) == 0) {
    fVar10 = fVar9;
    if ((float)((int)fVar1 - 1) <= fVar9) {
      fVar10 = (float)((int)fVar1 - 1);
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    iVar7 = (int)fVar10;
  }
  else {
    uVar4 = 0;
    if (fVar1 != 0.0) {
      uVar4 = (uint)(int)fVar9 / (uint)fVar1;
    }
    iVar7 = (int)fVar9 - uVar4 * (int)fVar1;
  }
  fVar10 = 0.0;
  if ((iVar7 == (int)fVar1 - 1U & (param_3 ^ 1)) == 0) {
    fVar10 = *param_2 * param_1 - fVar9;
  }
  uVar4 = iVar7 * (int)fVar2;
  if (fVar10 <= 0.0) {
    if (param_5 != 0) {
      uVar8 = (ulong)param_5;
      do {
        FUN_01992948(param_6,param_2 + (ulong)uVar4 * 5 + (ulong)*param_4 * 5 + 3);
        uVar8 = uVar8 - 1;
        param_6 = param_6 + 0x30;
        param_4 = param_4 + 1;
      } while (uVar8 != 0);
    }
  }
  else if (param_5 != 0) {
    uVar5 = 0;
    if (fVar1 != 0.0) {
      uVar5 = (iVar7 + 1U) / (uint)fVar1;
    }
    uVar8 = (ulong)param_5;
    do {
      uVar3 = *param_4;
      FUN_01992948(auStack_88,param_2 + (ulong)uVar4 * 5 + (ulong)uVar3 * 5 + 3);
      FUN_01992948(auStack_b8,
                   param_2 + (ulong)(((iVar7 + 1U) - uVar5 * (int)fVar1) * (int)fVar2) * 5 +
                             (ulong)uVar3 * 5 + 3);
      FUN_01991d18(fVar10,param_6,auStack_88,auStack_b8);
      uVar8 = uVar8 - 1;
      param_6 = param_6 + 0x30;
      param_4 = param_4 + 1;
    } while (uVar8 != 0);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01992f94(float param_1,float *param_2,byte param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  fVar8 = param_2[1];
  fVar6 = (float)(int)(*param_2 * param_1);
  uVar2 = (ulong)(uint)((int)param_2[2] * (int)fVar8);
  if ((param_3 & 1) == 0) {
    fVar7 = fVar6;
    if ((float)((int)fVar8 - 1) <= fVar6) {
      fVar7 = (float)((int)fVar8 - 1);
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    uVar5 = (uint)fVar7;
  }
  else {
    uVar5 = 0;
    if (fVar8 != 0.0) {
      uVar5 = (uint)(int)fVar6 / (uint)fVar8;
    }
    uVar5 = (int)fVar6 - uVar5 * (int)fVar8;
  }
  fVar7 = 0.0;
  if ((uVar5 == (int)fVar8 - 1U & (param_3 ^ 1)) == 0) {
    fVar7 = *param_2 * param_1 - fVar6;
  }
  if (fVar7 <= 0.0) {
    FUN_01992948(param_4,param_2 + uVar2 * 5 + (ulong)uVar5 * 5 + 3);
  }
  else {
    uVar1 = 0;
    if (fVar8 != 0.0) {
      uVar1 = (uVar5 + 1) / (uint)fVar8;
    }
    uVar1 = (uVar5 + 1) - uVar1 * (int)fVar8;
    FUN_01992948(&local_78,param_2 + uVar2 * 5 + (ulong)uVar5 * 5 + 3);
    FUN_01992948(&local_a8,param_2 + uVar2 * 5 + (ulong)uVar1 * 5 + 3);
    if (uVar1 < uVar5) {
      local_98 = local_98 * (float)local_58;
      fVar8 = (float)((ulong)local_58 >> 0x20);
      fStack_94 = fStack_94 * fVar8;
      local_90 = local_90 * local_50;
      local_b8 = CONCAT44(fVar8 * (float)((ulong)local_88 >> 0x20),(float)local_58 * (float)local_88
                         );
      local_b0 = local_50 * local_80;
      fVar6 = (local_98 * fStack_6c - fStack_94 * local_70) + local_90 * fStack_74;
      fVar9 = (fStack_94 * fStack_6c + local_98 * local_70) - local_90 * local_78;
      fVar10 = fStack_6c * local_90 + (fStack_94 * local_78 - local_98 * fStack_74);
      fVar8 = (-(local_98 * local_78) - fStack_94 * fStack_74) - local_90 * local_70;
      local_d8 = (fStack_6c * local_a8 + local_78 * fStack_9c + fStack_74 * local_a0) -
                 local_70 * fStack_a4;
      fStack_d4 = (local_70 * local_a8 + fStack_74 * fStack_9c + fStack_6c * fStack_a4) -
                  local_78 * local_a0;
      local_d0 = (local_70 * fStack_9c + fStack_6c * local_a0 + local_78 * fStack_a4) -
                 fStack_74 * local_a8;
      fStack_cc = ((fStack_6c * fStack_9c - local_78 * local_a8) - fStack_74 * fStack_a4) -
                  local_70 * local_a0;
      local_c8 = local_68 +
                 fStack_74 * fVar10 + ((fStack_6c * fVar6 - local_78 * fVar8) - local_70 * fVar9);
      fStack_c4 = fStack_64 +
                  local_70 * fVar6 + ((fStack_6c * fVar9 - fStack_74 * fVar8) - local_78 * fVar10);
      local_c0 = local_60 +
                 local_78 * fVar9 + ((fStack_6c * fVar10 - local_70 * fVar8) - fStack_74 * fVar6);
      pfVar4 = &local_d8;
    }
    else {
      pfVar4 = &local_a8;
    }
    FUN_01991d18(fVar7,param_4,&local_78,pfVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

