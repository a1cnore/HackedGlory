// functions/01994 — 9 functions
#include "libGameKindred.h"




void FUN_019940e0(float param_1,float *param_2,byte param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 *local_58;
  undefined2 *local_50;
  long local_48;
  
  pfVar6 = &local_f0;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  fVar16 = param_2[1];
  fVar15 = param_2[4];
  puVar1 = (undefined2 *)((long)param_2 + (ulong)(uint)param_2[2] * 2 + 0x14);
  uVar4 = (int)fVar16 - 1;
  puVar3 = (undefined8 *)0x0;
  if (param_2[3] != 0.0) {
    puVar3 = (undefined8 *)(puVar1 + (ulong)(uint)param_2[2] * 0x19 + 1);
  }
  puVar2 = (undefined8 *)(puVar1 + (ulong)(uint)param_2[2] * 0x19 + 1);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)((long)puVar3 + (ulong)((int)param_2[3] * uVar4) * 2);
  }
  fVar10 = (float)(int)(*param_2 * param_1);
  puVar3 = (undefined8 *)0x0;
  if (fVar15 != 0.0) {
    puVar3 = puVar2 + 6;
  }
  if ((param_3 & 1) == 0) {
    fVar11 = fVar10;
    if ((float)uVar4 <= fVar10) {
      fVar11 = (float)uVar4;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    uVar7 = (uint)fVar11;
  }
  else {
    uVar7 = 0;
    if (fVar16 != 0.0) {
      uVar7 = (uint)(int)fVar10 / (uint)fVar16;
    }
    uVar7 = (int)fVar10 - uVar7 * (int)fVar16;
  }
  fVar11 = 0.0;
  if ((uVar7 == uVar4 & (param_3 ^ 1)) == 0) {
    fVar11 = *param_2 * param_1 - fVar10;
  }
  if (fVar15 == 0.0) {
    uVar14 = puVar2[2];
    uVar9 = puVar2[5];
    uVar8 = puVar2[4];
    uVar13 = puVar2[1];
    uVar12 = *puVar2;
    param_4[3] = puVar2[3];
    param_4[2] = uVar14;
    param_4[5] = uVar9;
    param_4[4] = uVar8;
    param_4[1] = uVar13;
    *param_4 = uVar12;
  }
  else {
    local_50 = (undefined2 *)((long)puVar3 + (ulong)((uVar7 - 1) * (int)fVar15) * 2);
    if (fVar11 <= 0.0) {
      uVar14 = puVar2[2];
      uVar9 = puVar2[5];
      uVar8 = puVar2[4];
      uVar13 = puVar2[1];
      uVar12 = *puVar2;
      param_4[3] = puVar2[3];
      param_4[2] = uVar14;
      param_4[5] = uVar9;
      param_4[4] = uVar8;
      param_4[1] = uVar13;
      *param_4 = uVar12;
      if ((puVar1 != (undefined2 *)0x0) && (uVar7 != 0)) {
        FUN_01993938(param_4,&local_50,*puVar1);
      }
    }
    else {
      uVar4 = 0;
      if (fVar16 != 0.0) {
        uVar4 = (uVar7 + 1) / (uint)fVar16;
      }
      uVar4 = (uVar7 + 1) - uVar4 * (int)fVar16;
      local_58 = (undefined2 *)((long)puVar3 + (ulong)((uVar4 - 1) * (int)fVar15) * 2);
      uStack_78 = puVar2[3];
      local_80 = puVar2[2];
      local_68 = puVar2[5];
      local_70 = puVar2[4];
      uStack_88 = puVar2[1];
      local_90 = *puVar2;
      uStack_a8 = puVar2[3];
      local_b0 = puVar2[2];
      local_98 = puVar2[5];
      local_a0 = puVar2[4];
      uStack_b8 = puVar2[1];
      local_c0 = *puVar2;
      if ((puVar1 != (undefined2 *)0x0) && (uVar7 != 0)) {
        FUN_01993938(&local_90,&local_50,*puVar1);
      }
      if ((puVar1 != (undefined2 *)0x0) && (uVar4 != 0)) {
        FUN_01993938(&local_c0,&local_58,*puVar1);
      }
      if (uVar4 < uVar7) {
        fVar15 = (float)local_b0 * (float)local_70;
        fVar16 = (float)((ulong)local_70 >> 0x20);
        fVar10 = local_b0._4_4_ * fVar16;
        fVar17 = (float)uStack_a8 * (float)local_68;
        local_d0 = CONCAT44(fVar16 * (float)((ulong)local_a0 >> 0x20),
                            (float)local_70 * (float)local_a0);
        local_c8 = (float)local_68 * (float)local_98;
        fVar18 = (fVar15 * uStack_88._4_4_ - fVar10 * (float)uStack_88) + fVar17 * local_90._4_4_;
        fVar19 = (fVar10 * uStack_88._4_4_ + fVar15 * (float)uStack_88) - fVar17 * (float)local_90;
        fVar20 = uStack_88._4_4_ * fVar17 + (fVar10 * (float)local_90 - fVar15 * local_90._4_4_);
        fVar16 = (-(fVar15 * (float)local_90) - fVar10 * local_90._4_4_) - fVar17 * (float)uStack_88
        ;
        local_f0 = (uStack_88._4_4_ * (float)local_c0 + (float)local_90 * uStack_b8._4_4_ +
                   local_90._4_4_ * (float)uStack_b8) - (float)uStack_88 * local_c0._4_4_;
        fStack_ec = ((float)uStack_88 * (float)local_c0 +
                    local_90._4_4_ * uStack_b8._4_4_ + uStack_88._4_4_ * local_c0._4_4_) -
                    (float)local_90 * (float)uStack_b8;
        local_e8 = ((float)uStack_88 * uStack_b8._4_4_ + uStack_88._4_4_ * (float)uStack_b8 +
                   (float)local_90 * local_c0._4_4_) - local_90._4_4_ * (float)local_c0;
        fStack_e4 = ((uStack_88._4_4_ * uStack_b8._4_4_ - (float)local_90 * (float)local_c0) -
                    local_90._4_4_ * local_c0._4_4_) - (float)uStack_88 * (float)uStack_b8;
        local_e0 = (float)local_80 +
                   local_90._4_4_ * fVar20 +
                   ((uStack_88._4_4_ * fVar18 - (float)local_90 * fVar16) -
                   (float)uStack_88 * fVar19);
        fStack_dc = local_80._4_4_ +
                    (float)uStack_88 * fVar18 +
                    ((uStack_88._4_4_ * fVar19 - local_90._4_4_ * fVar16) - (float)local_90 * fVar20
                    );
        local_d8 = (float)uStack_78 +
                   (float)local_90 * fVar19 +
                   ((uStack_88._4_4_ * fVar20 - (float)uStack_88 * fVar16) - local_90._4_4_ * fVar18
                   );
      }
      else {
        pfVar6 = (float *)&local_c0;
      }
      FUN_01991d18(fVar11,param_4,&local_90,pfVar6);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01994444(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,uint param_4,
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
  FUN_019940e0(param_3,param_4 & 1,&local_78);
  FUN_019940e0(param_2,param_3,param_4 & 1,&local_a8);
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




undefined4 FUN_019947d4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_019947dc(float param_1,float *param_2,byte param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  uVar6 = (ulong)(uint)fVar2;
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
      pfVar4 = param_2 + (ulong)(uint)(iVar5 * (int)fVar2) * 0xc + 3;
      do {
        uVar8 = *(undefined8 *)(pfVar4 + 8);
        uVar6 = uVar6 - 1;
        param_4[5] = *(undefined8 *)(pfVar4 + 10);
        param_4[4] = uVar8;
        uVar8 = *(undefined8 *)(pfVar4 + 4);
        param_4[3] = *(undefined8 *)(pfVar4 + 6);
        param_4[2] = uVar8;
        uVar8 = *(undefined8 *)pfVar4;
        param_4[1] = *(undefined8 *)(pfVar4 + 2);
        *param_4 = uVar8;
        pfVar4 = pfVar4 + 0xc;
        param_4 = param_4 + 6;
      } while (uVar6 != 0);
    }
  }
  else if (fVar2 != 0.0) {
    uVar3 = 0;
    if (fVar1 != 0.0) {
      uVar3 = (iVar5 + 1U) / (uint)fVar1;
    }
    lVar7 = 0;
    pfVar4 = param_2 + (ulong)(uint)(iVar5 * (int)fVar2) * 0xc + 3;
    do {
      FUN_01991d18(fVar10,param_4,pfVar4,
                   param_2 + (ulong)(((iVar5 + 1U) - uVar3 * (int)fVar1) * (int)fVar2) * 0xc +
                             lVar7 * 0xc + 3);
      lVar7 = lVar7 + 1;
      pfVar4 = pfVar4 + 0xc;
      uVar6 = uVar6 - 1;
      param_4 = param_4 + 6;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_01994904(undefined4 *param_1,undefined4 *param_2,int *param_3,int *param_4,long *param_5,
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
    *param_6 = param_1 + 3 + (ulong)(uint)(iVar2 * iVar1) * 0xc;
  }
  return;
}




void FUN_01994948(float param_1,float param_2,byte param_3,uint param_4,int *param_5,float *param_6)

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




void FUN_019949b4(float param_1,float *param_2,byte param_3,ushort *param_4,uint param_5,
                 undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
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
  uVar3 = iVar5 * (int)fVar2;
  if (fVar10 <= 0.0) {
    if (param_5 != 0) {
      uVar7 = (ulong)param_5;
      do {
        uVar7 = uVar7 - 1;
        pfVar6 = param_2 + (ulong)uVar3 * 0xc + (ulong)*param_4 * 0xc + 3;
        uVar8 = *(undefined8 *)(pfVar6 + 8);
        param_6[5] = *(undefined8 *)(pfVar6 + 10);
        param_6[4] = uVar8;
        uVar8 = *(undefined8 *)(pfVar6 + 4);
        param_6[3] = *(undefined8 *)(pfVar6 + 6);
        param_6[2] = uVar8;
        uVar8 = *(undefined8 *)pfVar6;
        param_6[1] = *(undefined8 *)(pfVar6 + 2);
        *param_6 = uVar8;
        param_6 = param_6 + 6;
        param_4 = param_4 + 1;
      } while (uVar7 != 0);
    }
  }
  else if (param_5 != 0) {
    uVar4 = 0;
    if (fVar1 != 0.0) {
      uVar4 = (iVar5 + 1U) / (uint)fVar1;
    }
    uVar7 = (ulong)param_5;
    do {
      FUN_01991d18(fVar10,param_6,param_2 + (ulong)uVar3 * 0xc + (ulong)*param_4 * 0xc + 3,
                   param_2 + (ulong)(((iVar5 + 1U) - uVar4 * (int)fVar1) * (int)fVar2) * 0xc +
                             (ulong)*param_4 * 0xc + 3);
      uVar7 = uVar7 - 1;
      param_6 = param_6 + 6;
      param_4 = param_4 + 1;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_01994ae4(float param_1,float *param_2,byte param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  fVar10 = param_2[1];
  fVar9 = (float)(int)(*param_2 * param_1);
  uVar2 = (ulong)(uint)((int)param_2[2] * (int)fVar10);
  if ((param_3 & 1) == 0) {
    fVar11 = fVar9;
    if ((float)((int)fVar10 - 1) <= fVar9) {
      fVar11 = (float)((int)fVar10 - 1);
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    uVar6 = (uint)fVar11;
  }
  else {
    uVar6 = 0;
    if (fVar10 != 0.0) {
      uVar6 = (uint)(int)fVar9 / (uint)fVar10;
    }
    uVar6 = (int)fVar9 - uVar6 * (int)fVar10;
  }
  fVar11 = 0.0;
  if ((uVar6 == (int)fVar10 - 1U & (param_3 ^ 1)) == 0) {
    fVar11 = *param_2 * param_1 - fVar9;
  }
  if (fVar11 <= 0.0) {
    param_2 = param_2 + uVar2 * 0xc + (ulong)uVar6 * 0xc + 3;
    uVar8 = *(undefined8 *)(param_2 + 8);
    param_4[5] = *(undefined8 *)(param_2 + 10);
    param_4[4] = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 4);
    param_4[3] = *(undefined8 *)(param_2 + 6);
    param_4[2] = uVar8;
    uVar8 = *(undefined8 *)param_2;
    param_4[1] = *(undefined8 *)(param_2 + 2);
    *param_4 = uVar8;
  }
  else {
    uVar1 = 0;
    if (fVar10 != 0.0) {
      uVar1 = (uVar6 + 1) / (uint)fVar10;
    }
    uVar1 = (uVar6 + 1) - uVar1 * (int)fVar10;
    uVar5 = (ulong)uVar1;
    pfVar4 = param_2 + uVar2 * 0xc + (ulong)uVar1 * 0xc + 3;
    if (uVar1 < uVar6) {
      uVar7 = (ulong)uVar6;
      fVar12 = param_2[uVar2 * 0xc + uVar7 * 0xc + 4];
      fVar10 = param_2[uVar2 * 0xc + uVar7 * 0xc + 5];
      fVar11 = param_2[uVar2 * 0xc + uVar7 * 0xc + 6];
      fVar9 = param_2[uVar2 * 0xc + (ulong)uVar6 * 0xc + 3];
      fVar13 = (float)*(undefined8 *)(param_2 + uVar2 * 0xc + uVar7 * 0xc + 0xb);
      fVar14 = param_2[uVar2 * 0xc + uVar5 * 0xc + 7] * fVar13;
      fVar16 = (float)((ulong)*(undefined8 *)(param_2 + uVar2 * 0xc + uVar7 * 0xc + 0xb) >> 0x20);
      fVar17 = param_2[uVar2 * 0xc + uVar5 * 0xc + 8] * fVar16;
      fVar19 = param_2[uVar2 * 0xc + uVar5 * 0xc + 9] * param_2[uVar2 * 0xc + uVar7 * 0xc + 0xd];
      fVar18 = (fVar14 * fVar11 - fVar17 * fVar10) + fVar19 * fVar12;
      fVar15 = (-(fVar14 * fVar9) - fVar17 * fVar12) - fVar19 * fVar10;
      fVar20 = (fVar17 * fVar11 + fVar14 * fVar10) - fVar19 * fVar9;
      fVar14 = fVar11 * fVar19 + (fVar17 * fVar9 - fVar14 * fVar12);
      local_48 = param_2[uVar2 * 0xc + uVar7 * 0xc + 7] +
                 fVar12 * fVar14 + ((fVar11 * fVar18 - fVar9 * fVar15) - fVar10 * fVar20);
      local_44 = param_2[uVar2 * 0xc + uVar7 * 0xc + 8] +
                 fVar10 * fVar18 + ((fVar11 * fVar20 - fVar12 * fVar15) - fVar9 * fVar14);
      local_40 = param_2[uVar2 * 0xc + uVar7 * 0xc + 9] +
                 fVar9 * fVar20 + ((fVar11 * fVar14 - fVar10 * fVar15) - fVar12 * fVar18);
      local_38 = CONCAT44(fVar16 * (float)((ulong)*(undefined8 *)
                                                   (param_2 + uVar2 * 0xc + uVar5 * 0xc + 0xb) >>
                                          0x20),
                          fVar13 * (float)*(undefined8 *)(param_2 + uVar2 * 0xc + uVar5 * 0xc + 0xb)
                         );
      local_30 = param_2[uVar2 * 0xc + uVar7 * 0xc + 0xd] * param_2[uVar2 * 0xc + uVar5 * 0xc + 0xd]
      ;
      fVar13 = *pfVar4;
      fVar14 = param_2[uVar2 * 0xc + uVar5 * 0xc + 5];
      fVar16 = param_2[uVar2 * 0xc + uVar5 * 0xc + 6];
      fVar15 = param_2[uVar2 * 0xc + uVar5 * 0xc + 4];
      pfVar4 = &local_58;
      local_58 = (fVar11 * fVar13 + fVar9 * fVar16 + fVar12 * fVar14) - fVar10 * fVar15;
      fStack_54 = (fVar10 * fVar13 + fVar12 * fVar16 + fVar11 * fVar15) - fVar9 * fVar14;
      local_50 = (fVar10 * fVar16 + fVar11 * fVar14 + fVar9 * fVar15) - fVar12 * fVar13;
      fStack_4c = ((fVar11 * fVar16 - fVar9 * fVar13) - fVar12 * fVar15) - fVar10 * fVar14;
    }
    FUN_01991d18(param_4,param_2 + uVar2 * 0xc + (ulong)uVar6 * 0xc + 3,pfVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01994d88(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,uint param_4,
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
  FUN_01994ae4(param_3,param_4 & 1,&local_78);
  FUN_01994ae4(param_2,param_3,param_4 & 1,&local_a8);
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

