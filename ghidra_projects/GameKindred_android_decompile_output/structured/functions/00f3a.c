// functions/00f3a — 14 functions
#include "libGameKindred.h"




void FUN_00f3a000(long param_1,code *param_2,uint param_3,ushort *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float afStack_50 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar7 = (ulong)param_3;
  pfVar6 = (float *)((long)afStack_50 - (uVar7 * 4 + 0xf & 0x7fffffff0));
  iVar4 = (*param_2)(param_3,pfVar6,param_4,param_1);
  if (iVar4 == 1) {
    if (param_3 != 0) {
      fVar8 = *pfVar6;
      do {
        lVar2 = param_1 + 0x18000;
        param_3 = param_3 - 1;
        lVar5 = (ulong)*param_4 * 0xc;
        uVar9 = *(undefined8 *)(lVar2 + lVar5);
        uVar1 = (uint)*param_4 * 3 + 2;
        *(ulong *)(lVar2 + lVar5) =
             CONCAT44(fVar8 * (float)((ulong)uVar9 >> 0x20),fVar8 * (float)uVar9);
        *(float *)(lVar2 + (ulong)uVar1 * 4) = fVar8 * *(float *)(lVar2 + (ulong)uVar1 * 4);
        param_4 = param_4 + 1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      lVar2 = param_1 + 0x18000;
      fVar8 = *pfVar6;
      uVar7 = uVar7 - 1;
      lVar5 = (ulong)*param_4 * 0xc;
      uVar9 = *(undefined8 *)(lVar2 + lVar5);
      uVar1 = (uint)*param_4 * 3 + 2;
      *(ulong *)(lVar2 + lVar5) =
           CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar8,(float)uVar9 * fVar8);
      *(float *)(lVar2 + (ulong)uVar1 * 4) = fVar8 * *(float *)(lVar2 + (ulong)uVar1 * 4);
      param_4 = param_4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f3a118(undefined8 param_1,code *param_2,uint param_3,ushort *param_4,long param_5,
                 undefined8 param_6)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long alStack_50 [2];
  
  lVar2 = tpidr_el0;
  alStack_50[1] = *(long *)(lVar2 + 0x28);
  puVar7 = (undefined8 *)((long)alStack_50 - ((ulong)(param_3 << 1) * 4 + 0xf & 0x7fffffff0));
  iVar3 = (*param_2)(param_3,puVar7,param_4,param_1,param_6);
  if (iVar3 == 1) {
    if (param_3 != 0) {
      uVar4 = *puVar7;
      do {
        param_3 = param_3 - 1;
        *(undefined8 *)(param_5 + (ulong)*param_4 * 8) = uVar4;
        param_4 = param_4 + 1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    uVar5 = 0;
    uVar6 = (ulong)param_3;
    do {
      uVar1 = *(ushort *)((long)param_4 + uVar5);
      iVar3 = (int)uVar5;
      uVar6 = uVar6 - 1;
      *(undefined4 *)(param_5 + (ulong)uVar1 * 8) =
           *(undefined4 *)((long)puVar7 + (uVar5 & 0xffffffff) * 4);
      uVar5 = uVar5 + 2;
      *(undefined4 *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4) =
           *(undefined4 *)((long)puVar7 + (ulong)(iVar3 + 1) * 4);
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != alStack_50[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f3a20c(undefined8 param_1,code *param_2,uint param_3,ushort *param_4,long param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 auStack_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = (ulong)param_3;
  puVar4 = (undefined4 *)((long)auStack_50 - (uVar5 * 4 + 0xf & 0x7fffffff0));
  iVar3 = (*param_2)(param_3,puVar4,param_4,param_1,param_6);
  if (iVar3 == 1) {
    if (param_3 != 0) {
      uVar1 = *puVar4;
      do {
        param_3 = param_3 - 1;
        *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = uVar1;
        param_4 = param_4 + 1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      uVar5 = uVar5 - 1;
      *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = *puVar4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f3a2dc(undefined8 param_1,code *param_2,uint param_3,ushort *param_4,long param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 auStack_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = (ulong)param_3;
  puVar4 = (undefined4 *)((long)auStack_50 - (uVar5 * 4 + 0xf & 0x7fffffff0));
  iVar3 = (*param_2)(param_3,puVar4,param_4,param_1,param_6);
  if (iVar3 == 1) {
    if (param_3 != 0) {
      uVar1 = *puVar4;
      do {
        param_3 = param_3 - 1;
        *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = uVar1;
        param_4 = param_4 + 1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      uVar5 = uVar5 - 1;
      *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = *puVar4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f3a3ac(void)

{
  return;
}




void FUN_00f3a3b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf3a3b4);
  (*pcVar1)();
}




void FUN_00f3a3b4(undefined8 *param_1)

{
  FUN_00f39a48();
  *param_1 = &PTR_FUN_02829328;
  param_1[0x12] = FUN_00f3b190;
  param_1[0x11] = FUN_00f3b170;
  return;
}




void FUN_00f3a400(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,ushort *param_5,
                 long param_6,long param_7,long param_8,undefined8 param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long local_f0;
  undefined1 local_e8 [8];
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  long local_a8;
  
  local_f0 = tpidr_el0;
  local_a8 = *(long *)(local_f0 + 0x28);
  uVar8 = (ulong)param_4;
  FUN_00f39ad4(param_2,local_e8);
  if (param_8 != 0) {
    FUN_009b3960(local_e8,local_e8,param_8);
  }
  uVar4 = uVar8 * 4 + 0xf & 0x7fffffff0;
  pfVar6 = (float *)(local_e8 + (-8 - uVar4));
  pfVar7 = (float *)((long)pfVar6 - uVar4);
  (**(code **)(param_2 + 0x88))(param_1,uVar8,pfVar6,param_5,param_3,param_9);
  (**(code **)(param_2 + 0x90))(param_1,uVar8,pfVar7,param_5,param_3,param_9);
  if (param_4 != 0) {
    do {
      fVar9 = *pfVar6;
      fVar15 = *pfVar7;
      iVar2 = rand();
      iVar3 = rand();
      fVar9 = (fVar9 / 360.0) * (float)iVar3 * 4.656613e-10 + 0.0;
      fVar14 = ((float)iVar2 * 4.656613e-10 + 0.0) * 6.2831855;
      fVar9 = acosf(fVar9 + fVar9 + -1.0);
      fVar10 = sinf(fVar14);
      fVar14 = cosf(fVar14);
      fVar11 = sinf(fVar9);
      fVar9 = cosf(fVar9);
      fVar14 = fVar14 * fVar11;
      fVar12 = -fVar9;
      fVar10 = fVar10 * fVar11;
      fVar16 = fVar15 * fVar14;
      fVar17 = fVar15 * fVar12;
      fVar15 = fVar15 * fVar10;
      fVar11 = (float)((ulong)local_d8 >> 0x20);
      fVar13 = (float)((ulong)local_c8 >> 0x20);
      uVar8 = uVar8 - 1;
      lVar5 = (ulong)*param_5 * 0xc;
      uVar1 = (uint)*param_5 * 3 + 2;
      *(ulong *)(param_6 + lVar5) =
           CONCAT44(local_e8._4_4_ * fVar16 + fVar11 * fVar17 + fVar13 * fVar15 +
                    (float)((ulong)local_b8 >> 0x20),
                    local_e8._0_4_ * fVar16 + (float)local_d8 * fVar17 + (float)local_c8 * fVar15 +
                    (float)local_b8);
      *(float *)(param_6 + (ulong)uVar1 * 4) =
           fVar16 * local_e0 + fVar17 * local_d0 + fVar15 * local_c0 + local_b0;
      *(ulong *)(param_7 + lVar5) =
           CONCAT44(local_e8._4_4_ * fVar14 + fVar11 * fVar12 + fVar13 * fVar10,
                    local_e8._0_4_ * fVar14 + (float)local_d8 * fVar12 + (float)local_c8 * fVar10);
      *(float *)(param_7 + (ulong)uVar1 * 4) =
           (fVar14 * local_e0 - local_d0 * fVar9) + fVar10 * local_c0;
      param_5 = param_5 + 1;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    } while (uVar8 != 0);
  }
  if (*(long *)(local_f0 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f3a688(undefined8 *param_1)

{
  FUN_00f39a48();
  *param_1 = &PTR_FUN_02829350;
  param_1[0x12] = FUN_00f3b144;
  param_1[0x11] = FUN_00f3b118;
  return;
}




void FUN_00f3a6d4(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,ushort *param_5,
                 long param_6,long param_7,long param_8,undefined8 param_9)

{
  float *pfVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_110;
  float afStack_108 [2];
  ulong local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [8];
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  FUN_00f39ad4(param_2,local_f0);
  if (param_8 != 0) {
    FUN_009b3960(local_f0,local_f0,param_8);
  }
  uVar6 = (ulong)(param_4 * 3) * 4 + 0xf & 0x7fffffff0;
  lVar8 = (long)&local_110 - uVar6;
  lVar9 = lVar8 - uVar6;
  (**(code **)(param_2 + 0x88))(param_1,param_4,lVar8,param_5,param_3,param_9);
  (**(code **)(param_2 + 0x90))(param_1,param_4,lVar9,param_5,param_3,param_9);
  if (param_4 != 0) {
    uVar6 = (ulong)param_4;
    uVar10 = 2;
    do {
      uVar3 = *param_5;
      fVar11 = *(float *)(lVar8 + (ulong)(uVar10 - 2) * 4);
      fVar12 = *(float *)(lVar8 + (ulong)uVar10 * 4);
      fVar13 = *(float *)(lVar8 + (ulong)(uVar10 - 1) * 4);
      fVar14 = fVar11 * -0.5;
      iVar5 = rand();
      local_100 = (ulong)(uint)(fVar14 + (fVar11 * 0.5 - fVar14) * (float)iVar5 * 4.656613e-10);
      fVar11 = fVar13 * -0.5;
      uStack_f8 = 0;
      iVar5 = rand();
      local_110 = (ulong)(uint)(fVar11 + (fVar13 * 0.5 - fVar11) * (float)iVar5 * 4.656613e-10);
      fVar11 = fVar12 * -0.5;
      afStack_108[0] = 0.0;
      afStack_108[1] = 0.0;
      iVar5 = rand();
      pfVar1 = (float *)(lVar9 + (ulong)(uVar10 - 2) * 4);
      fVar15 = *pfVar1;
      fVar16 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar11 = fVar11 + (fVar12 * 0.5 - fVar11) * (float)iVar5 * 4.656613e-10;
      fVar17 = (float)local_100;
      fVar18 = (float)local_110;
      fVar12 = (float)((ulong)local_e0 >> 0x20);
      fVar14 = (float)((ulong)local_d0 >> 0x20);
      lVar7 = (ulong)uVar3 * 0xc;
      uVar2 = (uint)uVar3 * 3 + 2;
      uVar6 = uVar6 - 1;
      uVar10 = uVar10 + 3;
      *(ulong *)(param_6 + lVar7) =
           CONCAT44(local_f0._4_4_ * fVar17 + fVar12 * fVar18 + fVar14 * fVar11 +
                    (float)((ulong)local_c0 >> 0x20),
                    local_f0._0_4_ * fVar17 + (float)local_e0 * fVar18 + (float)local_d0 * fVar11 +
                    (float)local_c0);
      *(float *)(param_6 + (ulong)uVar2 * 4) =
           fVar17 * local_e8 + fVar18 * local_d8 + fVar11 * local_c8 + local_b8;
      *(ulong *)(param_7 + lVar7) =
           CONCAT44(local_f0._4_4_ * fVar15 + fVar12 * fVar16 + fVar14 * fVar13,
                    local_f0._0_4_ * fVar15 + (float)local_e0 * fVar16 + (float)local_d0 * fVar13);
      *(float *)(param_7 + (ulong)uVar2 * 4) =
           fVar15 * local_e8 + fVar16 * local_d8 + fVar13 * local_c8;
      param_5 = param_5 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f3a94c(undefined8 *param_1)

{
  FUN_00f39a48();
  param_1[0x15] = FUN_00f3b190;
  *param_1 = &PTR_FUN_02829378;
  param_1[0x14] = FUN_00f3b190;
  param_1[0x13] = FUN_00f3b190;
  param_1[0x12] = FUN_00f3b190;
  param_1[0x11] = FUN_00f3b170;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}




void FUN_00f3a9a8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,ushort *param_5,
                 long param_6,long param_7,long param_8,ulong param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulong uVar13;
  float fVar14;
  undefined4 extraout_var;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_130;
  uint local_12c;
  long local_128;
  undefined8 local_120;
  ulong local_108;
  long local_100;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  long local_a0;
  undefined4 extraout_var_00;
  
  local_128 = tpidr_el0;
  local_a0 = *(long *)(local_128 + 0x28);
  uVar13 = (ulong)param_4;
  local_120 = param_3;
  local_108 = param_9;
  FUN_00f39ad4(param_2,&local_e0);
  if (param_8 != 0) {
    FUN_009b3960(&local_e0,&local_e0,param_8);
  }
  uVar15 = local_120;
  uVar5 = uVar13 * 4 + 0xf & 0x7fffffff0;
  pfVar7 = (float *)((long)&fStack_130 - uVar5);
  pfVar8 = (float *)((long)pfVar7 - uVar5);
  pfVar9 = (float *)((long)pfVar8 - uVar5);
  pfVar10 = (float *)((long)pfVar9 - uVar5);
  local_100 = param_2;
  (**(code **)(param_2 + 0x88))(param_1,uVar13,pfVar7,param_5,local_120,local_108);
  (**(code **)(local_100 + 0x90))(param_1,uVar13,pfVar8,param_5,uVar15,local_108);
  uVar5 = local_108;
  (**(code **)(local_100 + 0x98))(param_1,uVar13,pfVar9,param_5,uVar15,local_108);
  lVar6 = local_100;
  local_12c = param_4;
  (**(code **)(local_100 + 0xa0))(param_1,param_4,pfVar10,param_5,local_120,uVar5);
  uVar12 = local_12c;
  if ((*(char *)(lVar6 + 0xb0) == '\0') ||
     (pcVar4 = *(code **)(lVar6 + 0xa8), pcVar4 == (code *)0x0)) {
    local_108 = local_108 & 0xffffffff00000000;
    puVar11 = auStack_f0;
  }
  else {
    puVar11 = (undefined1 *)((long)pfVar10 - ((ulong)(local_12c * 3) * 4 + 0xf & 0x7fffffff0));
    (*pcVar4)(param_1,local_12c,puVar11,0,0,local_108);
    local_108 = CONCAT44(local_108._4_4_,1);
  }
  if (uVar12 != 0) {
    uVar12 = 2;
    do {
      fVar14 = *pfVar8;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      fVar16 = fVar14 - *pfVar9;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      iVar2 = rand();
      fVar22 = *pfVar10;
      fVar16 = fVar16 * fVar16 + (float)iVar2 * 4.656613e-10 * (fVar14 * fVar14 - fVar16 * fVar16);
      iVar2 = rand();
      fVar14 = *pfVar7;
      iVar3 = rand();
      fVar21 = fVar14 * 0.017453292 * (float)iVar3 * 4.656613e-10 + 0.0;
      fVar14 = cosf(fVar21);
      local_100 = CONCAT44(extraout_var,fVar14);
      fVar14 = sinf(fVar21);
      uVar15 = CONCAT44(extraout_var_00,fVar14);
      fVar14 = SQRT(fVar16);
      if (NAN(fVar14)) {
        local_120 = uVar15;
        fVar14 = sqrtf(fVar16);
        uVar15 = local_120;
      }
      fVar21 = fVar22 * (float)iVar2 * 4.656613e-10 + 0.0;
      fVar23 = (float)uVar15;
      fVar16 = fVar23 * fVar14;
      fVar22 = (float)local_100;
      fVar14 = fVar22 * fVar14;
      if ((int)local_108 == 0) {
        fVar17 = 0.0;
      }
      else {
        fVar22 = *(float *)(puVar11 + (ulong)(uVar12 - 2) * 4);
        fVar17 = *(float *)(puVar11 + (ulong)(uVar12 - 1) * 4);
        fVar23 = *(float *)(puVar11 + (ulong)uVar12 * 4);
      }
      fVar18 = (float)((ulong)local_e0 >> 0x20);
      fVar19 = (float)((ulong)local_d0 >> 0x20);
      fVar20 = (float)((ulong)local_c0 >> 0x20);
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
      pfVar7 = pfVar7 + 1;
      uVar13 = uVar13 - 1;
      lVar6 = (ulong)*param_5 * 0xc;
      uVar1 = (uint)*param_5 * 3 + 2;
      uVar12 = uVar12 + 3;
      *(ulong *)(param_6 + lVar6) =
           CONCAT44(fVar18 * fVar14 + fVar19 * fVar21 + fVar20 * fVar16 +
                    (float)((ulong)local_b0 >> 0x20),
                    (float)local_e0 * fVar14 + (float)local_d0 * fVar21 + (float)local_c0 * fVar16 +
                    (float)local_b0);
      *(float *)(param_6 + (ulong)uVar1 * 4) =
           fVar14 * local_d8 + fVar21 * local_c8 + fVar16 * local_b8 + local_a8;
      *(ulong *)(param_7 + lVar6) =
           CONCAT44(fVar18 * fVar22 + fVar19 * fVar17 + fVar20 * fVar23,
                    (float)local_e0 * fVar22 + (float)local_d0 * fVar17 + (float)local_c0 * fVar23);
      *(float *)(param_7 + (ulong)uVar1 * 4) =
           fVar22 * local_d8 + fVar17 * local_c8 + fVar23 * local_b8;
      param_5 = param_5 + 1;
    } while (uVar13 != 0);
  }
  if (*(long *)(local_128 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f3ad8c(undefined8 *param_1)

{
  FUN_00f39a48();
  *param_1 = &PTR_FUN_028293a0;
  param_1[0x12] = FUN_00f3b144;
  param_1[0x11] = FUN_00f3b0f8;
  return;
}




void FUN_00f3add8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5,
                 long param_6,long param_7,long param_8,undefined8 param_9)

{
  float *pfVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_100;
  float afStack_f8 [2];
  undefined1 local_f0 [8];
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  uVar9 = (ulong)param_4;
  FUN_00f39ad4(param_2,local_f0);
  if (param_8 != 0) {
    FUN_009b3960(local_f0,local_f0,param_8);
  }
  lVar7 = (long)&local_100 - ((ulong)(param_4 << 1) * 4 + 0xf & 0x7fffffff0);
  lVar8 = lVar7 - ((ulong)(param_4 * 3) * 4 + 0xf & 0x7fffffff0);
  (**(code **)(param_2 + 0x88))(param_1,param_4,lVar7,param_5,param_3,param_9);
  (**(code **)(param_2 + 0x90))(param_1,param_4,lVar8,param_5,param_3,param_9);
  if (param_4 != 0) {
    uVar10 = 0;
    uVar11 = 0;
    do {
      uVar3 = *(ushort *)(param_5 + uVar10);
      fVar12 = *(float *)(lVar7 + (uVar10 & 0xffffffff) * 4);
      fVar14 = *(float *)(lVar7 + (ulong)((int)uVar10 + 1) * 4);
      fVar15 = fVar12 * -0.5;
      iVar5 = rand();
      local_100 = (ulong)(uint)(fVar15 + (fVar12 * 0.5 - fVar15) * (float)iVar5 * 4.656613e-10);
      fVar12 = fVar14 * -0.5;
      afStack_f8[0] = 0.0;
      afStack_f8[1] = 0.0;
      iVar5 = rand();
      pfVar1 = (float *)(lVar8 + (uVar11 & 0xffffffff) * 4);
      fVar16 = *pfVar1;
      fVar17 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar12 = fVar12 + (fVar14 * 0.5 - fVar12) * (float)iVar5 * 4.656613e-10;
      lVar6 = (ulong)uVar3 * 0xc;
      fVar18 = (float)local_100;
      fVar13 = (float)((ulong)local_d0 >> 0x20);
      fVar14 = (float)((ulong)local_e0 >> 0x20);
      uVar2 = (uint)uVar3 * 3 + 2;
      uVar11 = uVar11 + 3;
      uVar9 = uVar9 - 1;
      uVar10 = uVar10 + 2;
      *(ulong *)(param_6 + lVar6) =
           CONCAT44(local_f0._4_4_ * fVar18 + fVar14 * 0.0 + fVar13 * fVar12 +
                    (float)((ulong)local_c0 >> 0x20),
                    local_f0._0_4_ * fVar18 + (float)local_e0 * 0.0 + (float)local_d0 * fVar12 +
                    (float)local_c0);
      *(float *)(param_6 + (ulong)uVar2 * 4) =
           fVar18 * local_e8 + local_d8 * 0.0 + fVar12 * local_c8 + local_b8;
      *(ulong *)(param_7 + lVar6) =
           CONCAT44(local_f0._4_4_ * fVar16 + fVar14 * fVar17 + fVar13 * fVar15,
                    local_f0._0_4_ * fVar16 + (float)local_e0 * fVar17 + (float)local_d0 * fVar15);
      *(float *)(param_7 + (ulong)uVar2 * 4) =
           fVar16 * local_e8 + fVar17 * local_d8 + fVar15 * local_c8;
    } while (uVar9 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

