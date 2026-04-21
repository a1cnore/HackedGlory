// functions/01993 — 7 functions
#include "libGameKindred.h"




void FUN_0199324c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,uint param_4,
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
  FUN_01992f94(param_3,param_4 & 1,&local_78);
  FUN_01992f94(param_2,param_3,param_4 & 1,&local_a8);
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




undefined4 FUN_019935dc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_019935e4(float param_1,float *param_2,byte param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  short *local_68;
  short *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  pfVar10 = param_2 + 5;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  uVar9 = (ulong)(uint)fVar3;
  fVar4 = param_2[3];
  fVar14 = (float)(int)(*param_2 * param_1);
  lVar1 = 0;
  if (fVar4 != 0.0) {
    lVar1 = (long)pfVar10 + uVar9 * 0x34 + 2;
  }
  if ((param_3 & 1) == 0) {
    fVar18 = (float)((int)fVar2 - 1U);
    fVar15 = fVar14;
    if (fVar18 <= fVar14) {
      fVar15 = fVar18;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    uVar11 = (uint)fVar15;
  }
  else {
    uVar11 = 0;
    if (fVar2 != 0.0) {
      uVar11 = (uint)(int)fVar14 / (uint)fVar2;
    }
    uVar11 = (int)fVar14 - uVar11 * (int)fVar2;
  }
  fVar15 = 0.0;
  if ((uVar11 == (int)fVar2 - 1U & (param_3 ^ 1)) == 0) {
    fVar15 = *param_2 * param_1 - fVar14;
  }
  if (lVar1 == 0) {
    if (fVar3 != 0.0) {
      puVar8 = (undefined8 *)((long)param_2 + uVar9 * 4 + 0x16);
      do {
        uVar19 = puVar8[2];
        uVar13 = puVar8[5];
        uVar12 = puVar8[4];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        uVar9 = uVar9 - 1;
        param_4[3] = puVar8[3];
        param_4[2] = uVar19;
        param_4[5] = uVar13;
        param_4[4] = uVar12;
        param_4[1] = uVar17;
        *param_4 = uVar16;
        puVar8 = puVar8 + 6;
        param_4 = param_4 + 6;
      } while (uVar9 != 0);
    }
  }
  else {
    local_60 = (short *)(lVar1 + (ulong)((uVar11 - 1) * (int)fVar4) * 2);
    if (fVar15 <= 0.0) {
      if (fVar3 != 0.0) {
        puVar8 = (undefined8 *)((long)param_2 + uVar9 * 4 + 0x16);
        do {
          uVar19 = puVar8[2];
          uVar13 = puVar8[5];
          uVar12 = puVar8[4];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          param_4[3] = puVar8[3];
          param_4[2] = uVar19;
          param_4[5] = uVar13;
          param_4[4] = uVar12;
          param_4[1] = uVar17;
          *param_4 = uVar16;
          if ((uVar11 != 0) && (*(short *)pfVar10 != 0)) {
            FUN_01993938(param_4,&local_60);
          }
          param_4 = param_4 + 6;
          puVar8 = puVar8 + 6;
          uVar9 = uVar9 - 1;
          pfVar10 = (float *)((long)pfVar10 + 2);
        } while (uVar9 != 0);
      }
    }
    else {
      uVar6 = 0;
      if (fVar2 != 0.0) {
        uVar6 = (uVar11 + 1) / (uint)fVar2;
      }
      iVar5 = (uVar11 + 1) - uVar6 * (int)fVar2;
      local_68 = (short *)(lVar1 + (ulong)(uint)((iVar5 + -1) * (int)fVar4) * 2);
      if (fVar3 != 0.0) {
        puVar8 = (undefined8 *)((long)param_2 + uVar9 * 4 + 0x16);
        do {
          uStack_78 = puVar8[5];
          local_80 = puVar8[4];
          uStack_88 = puVar8[3];
          local_90 = puVar8[2];
          uStack_98 = puVar8[1];
          local_a0 = *puVar8;
          uStack_c8 = puVar8[1];
          local_d0 = *puVar8;
          uStack_b8 = puVar8[3];
          local_c0 = puVar8[2];
          uStack_a8 = puVar8[5];
          local_b0 = puVar8[4];
          if ((uVar11 != 0) && (*(short *)pfVar10 != 0)) {
            FUN_01993938(&local_a0,&local_60);
          }
          if ((iVar5 != 0) && (*(short *)pfVar10 != 0)) {
            FUN_01993938(&local_d0,&local_68);
          }
          FUN_01991d18(fVar15,param_4,&local_a0,&local_d0);
          puVar8 = puVar8 + 6;
          pfVar10 = (float *)((long)pfVar10 + 2);
          uVar9 = uVar9 - 1;
          param_4 = param_4 + 6;
        } while (uVar9 != 0);
      }
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01993808(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4,long *param_5,
                 long *param_6,int *param_7,int *param_8,long *param_9,long *param_10,long *param_11
                 ,long *param_12,long *param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  iVar6 = param_1[1];
  uVar8 = param_1[2];
  uVar10 = (ulong)uVar8;
  iVar7 = param_1[3];
  iVar9 = param_1[4];
  lVar2 = (long)(param_1 + 5) + uVar10 * 2;
  lVar1 = lVar2 + 2;
  lVar3 = lVar1 + uVar10 * 2;
  lVar11 = lVar3 + uVar10 * 0x30;
  lVar4 = 0;
  if (iVar7 != 0) {
    lVar4 = lVar11;
  }
  if (lVar4 != 0) {
    lVar11 = lVar4 + (ulong)(uint)(iVar7 * (iVar6 + -1)) * 2;
  }
  lVar5 = 0;
  if (iVar9 != 0) {
    lVar5 = lVar11 + 0x30;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar6;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar8;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = (long)(param_1 + 5);
  }
  if (param_6 != (long *)0x0) {
    *param_6 = lVar2;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar7;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = iVar9;
  }
  if (param_9 != (long *)0x0) {
    *param_9 = lVar1;
  }
  if (param_10 != (long *)0x0) {
    *param_10 = lVar3;
  }
  if (param_11 != (long *)0x0) {
    *param_11 = lVar4;
  }
  if (param_12 != (long *)0x0) {
    *param_12 = lVar11;
  }
  if (param_13 != (long *)0x0) {
    *param_13 = lVar5;
  }
  return;
}




void FUN_019938cc(float param_1,float param_2,byte param_3,uint param_4,int *param_5,float *param_6)

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




/* WARNING: Type propagation algorithm not settling */

void FUN_01993938(float *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  float fVar6;
  
  puVar5 = (ushort *)*param_2;
  uVar1 = param_3 & 0xffff;
  if ((param_3 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    *param_1 = fVar6;
    puVar5 = puVar5 + 1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[1] = fVar6;
    puVar5 = (ushort *)((long)puVar5 + 2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[2] = fVar6;
    puVar5 = (ushort *)((long)puVar5 + 2);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[3] = fVar6;
    puVar5 = (ushort *)((long)puVar5 + 2);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[4] = fVar6;
    puVar5 = (ushort *)((long)puVar5 + 2);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[5] = fVar6;
    puVar5 = (ushort *)((long)puVar5 + 2);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[6] = fVar6;
    puVar5 = (ushort *)((long)puVar5 + 2);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[8] = fVar6;
    puVar5 = puVar5 + 1;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar2 = *puVar5;
    uVar4 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar3 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar4 == 0x1f) {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar3 | (uVar2 & 0x3ff) << 0xd | uVar4 * 0x800000 + 0x38000000);
      }
    }
    param_1[9] = fVar6;
    puVar5 = puVar5 + 1;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar2 = *puVar5;
    uVar1 = uVar2 >> 10 & 0x1f;
    if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar6 = 1.0;
      if (uVar2 >> 0xf != 0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * (float)(uVar2 & 0x3ff) * 5.9604645e-08;
    }
    else {
      uVar4 = (uint)(uVar2 >> 0xf) << 0x1f;
      if (uVar1 == 0x1f) {
        fVar6 = (float)(uVar4 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
      }
      else {
        fVar6 = (float)(uVar4 | (uVar2 & 0x3ff) << 0xd | uVar1 * 0x800000 + 0x38000000);
      }
    }
    param_1[10] = fVar6;
    puVar5 = puVar5 + 1;
  }
  *param_2 = puVar5;
  return;
}




void FUN_01993e70(float param_1,float *param_2,byte param_3,ushort *param_4,uint param_5,
                 undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  fVar3 = param_2[1];
  uVar13 = (ulong)(uint)param_2[2];
  fVar4 = param_2[3];
  lVar8 = uVar13 * 2 + 0x16;
  lVar9 = uVar13 * 2 + lVar8;
  fVar16 = (float)(int)(*param_2 * param_1);
  lVar2 = 0;
  if (fVar4 != 0.0) {
    lVar2 = (long)param_2 + uVar13 * 0x30 + lVar9;
  }
  if ((param_3 & 1) == 0) {
    fVar20 = (float)((int)fVar3 - 1U);
    fVar17 = fVar16;
    if (fVar20 <= fVar16) {
      fVar17 = fVar20;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    uVar12 = (uint)fVar17;
  }
  else {
    uVar12 = 0;
    if (fVar3 != 0.0) {
      uVar12 = (uint)(int)fVar16 / (uint)fVar3;
    }
    uVar12 = (int)fVar16 - uVar12 * (int)fVar3;
  }
  fVar17 = 0.0;
  if ((uVar12 == (int)fVar3 - 1U & (param_3 ^ 1)) == 0) {
    fVar17 = *param_2 * param_1 - fVar16;
  }
  if (lVar2 == 0) {
    if (param_5 != 0) {
      uVar13 = (ulong)param_5;
      do {
        uVar13 = uVar13 - 1;
        puVar10 = (undefined8 *)((long)param_2 + (ulong)*param_4 * 0x30 + lVar9);
        uVar21 = puVar10[2];
        uVar15 = puVar10[5];
        uVar14 = puVar10[4];
        uVar19 = puVar10[1];
        uVar18 = *puVar10;
        param_6[3] = puVar10[3];
        param_6[2] = uVar21;
        param_6[5] = uVar15;
        param_6[4] = uVar14;
        param_6[1] = uVar19;
        *param_6 = uVar18;
        param_6 = param_6 + 6;
        param_4 = param_4 + 1;
      } while (uVar13 != 0);
    }
  }
  else {
    lVar1 = lVar2 + (ulong)((uVar12 - 1) * (int)fVar4) * 2;
    if (fVar17 <= 0.0) {
      if (param_5 != 0) {
        uVar13 = (ulong)param_5;
        do {
          uVar11 = (ulong)*param_4;
          puVar10 = (undefined8 *)((long)param_2 + uVar11 * 0x30 + lVar9);
          uVar21 = puVar10[2];
          uVar15 = puVar10[5];
          uVar14 = puVar10[4];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          param_6[3] = puVar10[3];
          param_6[2] = uVar21;
          param_6[5] = uVar15;
          param_6[4] = uVar14;
          param_6[1] = uVar19;
          *param_6 = uVar18;
          if ((uVar12 != 0) && (*(short *)((long)param_2 + uVar11 * 2 + 0x14) != 0)) {
            local_80 = lVar1 + (ulong)*(ushort *)((long)param_2 + uVar11 * 2 + lVar8) * 2;
            FUN_01993938(param_6,&local_80);
          }
          param_4 = param_4 + 1;
          uVar13 = uVar13 - 1;
          param_6 = param_6 + 6;
        } while (uVar13 != 0);
      }
    }
    else if (param_5 != 0) {
      uVar6 = 0;
      if (fVar3 != 0.0) {
        uVar6 = (uVar12 + 1) / (uint)fVar3;
      }
      iVar5 = (uVar12 + 1) - uVar6 * (int)fVar3;
      uVar13 = (ulong)param_5;
      do {
        uVar11 = (ulong)*param_4;
        puVar10 = (undefined8 *)((long)param_2 + uVar11 * 0x30 + lVar9);
        uStack_88 = puVar10[5];
        local_90 = puVar10[4];
        uStack_98 = puVar10[3];
        local_a0 = puVar10[2];
        uStack_a8 = puVar10[1];
        local_b0 = *puVar10;
        uStack_d8 = puVar10[1];
        local_e0 = *puVar10;
        uStack_c8 = puVar10[3];
        local_d0 = puVar10[2];
        uStack_b8 = puVar10[5];
        local_c0 = puVar10[4];
        if ((uVar12 != 0) && (*(short *)((long)param_2 + uVar11 * 2 + 0x14) != 0)) {
          local_80 = lVar1 + (ulong)*(ushort *)((long)param_2 + uVar11 * 2 + lVar8) * 2;
          FUN_01993938(&local_b0,&local_80);
        }
        if ((iVar5 != 0) && (*(short *)((long)param_2 + uVar11 * 2 + 0x14) != 0)) {
          local_80 = lVar2 + (ulong)(uint)((iVar5 + -1) * (int)fVar4) * 2 +
                     (ulong)*(ushort *)((long)param_2 + uVar11 * 2 + lVar8) * 2;
          FUN_01993938(&local_e0,&local_80);
        }
        FUN_01991d18(fVar17,param_6,&local_b0,&local_e0);
        param_4 = param_4 + 1;
        uVar13 = uVar13 - 1;
        param_6 = param_6 + 6;
      } while (uVar13 != 0);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

