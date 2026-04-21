// functions/00d12 — 58 functions
#include "libGameKindred.h"




undefined4 FUN_00d12058(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void thunk_FUN_00d12068(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,auStack_58,0);
  if (0 < *(int *)(param_2 + 0x1dc4)) {
    lVar4 = 0;
    puVar5 = (undefined4 *)(param_2 + 0x1bd4);
    do {
      uStack_68 = puVar5[-1];
      uStack_60 = *puVar5;
      uStack_64 = 0;
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1,&uStack_68);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_1 + 7) = uStack_60;
        *(undefined1 *)((long)param_1 + 0x3c) = 1;
        param_1[6] = CONCAT44(uStack_64,uStack_68);
        goto LAB_00d12118;
      }
      lVar4 = lVar4 + 1;
      puVar5 = puVar5 + 5;
    } while (lVar4 < *(int *)(param_2 + 0x1dc4));
  }
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
LAB_00d12118:
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d12068(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,auStack_58,0);
  if (0 < *(int *)(param_2 + 0x1dc4)) {
    lVar4 = 0;
    puVar5 = (undefined4 *)(param_2 + 0x1bd4);
    do {
      local_68 = puVar5[-1];
      local_60 = *puVar5;
      uStack_64 = 0;
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1,&local_68);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_1 + 7) = local_60;
        *(undefined1 *)((long)param_1 + 0x3c) = 1;
        param_1[6] = CONCAT44(uStack_64,local_68);
        goto LAB_00d12118;
      }
      lVar4 = lVar4 + 1;
      puVar5 = puVar5 + 5;
    } while (lVar4 < *(int *)(param_2 + 0x1dc4));
  }
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
LAB_00d12118:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d12144(undefined8 param_1,undefined8 param_2)

{
  FUN_00d25570(param_2);
  FUN_00cb6ef0();
  FUN_00d12068(param_1,param_2);
  return;
}




void FUN_00d12178(void)

{
  return;
}




void thunk_FUN_00d12068(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,auStack_58,0);
  if (0 < *(int *)(param_2 + 0x1dc4)) {
    lVar4 = 0;
    puVar5 = (undefined4 *)(param_2 + 0x1bd4);
    do {
      uStack_68 = puVar5[-1];
      uStack_60 = *puVar5;
      uStack_64 = 0;
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1,&uStack_68);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_1 + 7) = uStack_60;
        *(undefined1 *)((long)param_1 + 0x3c) = 1;
        param_1[6] = CONCAT44(uStack_64,uStack_68);
        goto LAB_00d12118;
      }
      lVar4 = lVar4 + 1;
      puVar5 = puVar5 + 5;
    } while (lVar4 < *(int *)(param_2 + 0x1dc4));
  }
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
LAB_00d12118:
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d12180(void)

{
  return;
}




void FUN_00d12184(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028137d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  param_1[6] = uVar1;
  return;
}




undefined4 FUN_00d121e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void thunk_FUN_00d121f0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_140;
  undefined4 uStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  float afStack_e8 [22];
  long lStack_90;
  
  lVar2 = tpidr_el0;
  lStack_90 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d25570(param_2);
  FUN_00d55794(lVar4,auStack_100,0);
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar8 = *(long **)(param_2 + 0x1420);
  fVar10 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
           (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0));
  plVar5 = (long *)*plVar8;
  if (DAT_031500e0 <= fVar10) {
    fVar10 = DAT_031500e0;
  }
  fVar11 = DAT_03150020;
  if (DAT_03150020 <= fVar10) {
    fVar11 = fVar10;
  }
  if (plVar5 == (long *)0x0) {
    uVar6 = 0;
  }
  else if ((int)plVar8[1] == (int)plVar5[1]) {
    uVar6 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    *plVar8 = 0;
    uVar6 = 0;
    *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar6,&fStack_110,0);
  afStack_e8[0] = 0.0;
  afStack_e8[1] = 0.707;
  uStack_f0 = 0x3f800000;
  afStack_e8[4] = 0.0;
  afStack_e8[5] = 0.0;
  afStack_e8[2] = 0.0;
  afStack_e8[3] = 0.707;
  afStack_e8[8] = 0.0;
  afStack_e8[9] = 0.707;
  afStack_e8[6] = 1.0;
  afStack_e8[7] = -0.707;
  afStack_e8[0xc] = 0.0;
  afStack_e8[0xd] = -0.707;
  afStack_e8[10] = -1.0;
  afStack_e8[0xb] = 0.0;
  afStack_e8[0x10] = 0.0;
  afStack_e8[0x11] = 0.0;
  afStack_e8[0xe] = 0.0;
  afStack_e8[0xf] = -0.707;
  afStack_e8[0x14] = 0.0;
  afStack_e8[0x15] = -0.707;
  afStack_e8[0x12] = -1.0;
  afStack_e8[0x13] = 0.707;
  iVar3 = rand();
  fVar11 = fVar11 * 0.9;
  fVar10 = 0.0;
  iVar9 = 8;
  uVar14 = NEON_fmov(0x40a00000,4);
  iVar3 = iVar3 % 9;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  do {
    uVar13 = *(undefined8 *)((long)&uStack_f0 + (long)iVar3 * 0xc);
    uStack_120 = CONCAT44(fVar11 * (float)((ulong)uVar13 >> 0x20) + fStack_10c,
                          fVar11 * (float)uVar13 + fStack_110);
    fStack_118 = fVar11 * afStack_e8[(long)iVar3 * 3] + fStack_108;
    uStack_138 = 0x40a00000;
    uStack_140 = uVar14;
    uVar13 = FUN_00da2eb4(uVar6);
    uVar7 = FUN_00ef00a0(uVar13,&uStack_120,&fStack_130,&uStack_140);
    if ((uVar7 & 1) != 0) {
      fVar12 = (fStack_110 - fStack_130) * (fStack_110 - fStack_130) +
               (fStack_10c - fStack_12c) * (fStack_10c - fStack_12c) +
               (fStack_108 - fStack_128) * (fStack_108 - fStack_128);
      if (((*(char *)(param_1 + 0x3d) == '\0') ||
          ((*(float *)(param_1 + 0x40) <= fStack_130 && (fStack_130 <= *(float *)(param_1 + 0x44))))
          ) && (fVar10 + 5.0 < fVar12)) {
        *(float *)(param_1 + 0x38) = fStack_128;
        *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_12c,fStack_130);
        *(undefined1 *)(param_1 + 0x3c) = 1;
        fVar10 = fVar12;
      }
    }
    uVar1 = iVar3 + 8;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    iVar9 = iVar9 + -1;
    iVar3 = (iVar3 + 1) - (uVar1 & 0xfffffff8);
  } while (iVar9 != 0);
  if (*(long *)(lVar2 + 0x28) == lStack_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d121f0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_140;
  undefined4 local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined8 local_120;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  float afStack_e8 [22];
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d25570(param_2);
  FUN_00d55794(lVar4,auStack_100,0);
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar8 = *(long **)(param_2 + 0x1420);
  fVar10 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
           (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0));
  plVar5 = (long *)*plVar8;
  if (DAT_031500e0 <= fVar10) {
    fVar10 = DAT_031500e0;
  }
  fVar11 = DAT_03150020;
  if (DAT_03150020 <= fVar10) {
    fVar11 = fVar10;
  }
  if (plVar5 == (long *)0x0) {
    uVar6 = 0;
  }
  else if ((int)plVar8[1] == (int)plVar5[1]) {
    uVar6 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    *plVar8 = 0;
    uVar6 = 0;
    *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar6,&local_110,0);
  afStack_e8[0] = 0.0;
  afStack_e8[1] = 0.707;
  local_f0 = 0x3f800000;
  afStack_e8[4] = 0.0;
  afStack_e8[5] = 0.0;
  afStack_e8[2] = 0.0;
  afStack_e8[3] = 0.707;
  afStack_e8[8] = 0.0;
  afStack_e8[9] = 0.707;
  afStack_e8[6] = 1.0;
  afStack_e8[7] = -0.707;
  afStack_e8[0xc] = 0.0;
  afStack_e8[0xd] = -0.707;
  afStack_e8[10] = -1.0;
  afStack_e8[0xb] = 0.0;
  afStack_e8[0x10] = 0.0;
  afStack_e8[0x11] = 0.0;
  afStack_e8[0xe] = 0.0;
  afStack_e8[0xf] = -0.707;
  afStack_e8[0x14] = 0.0;
  afStack_e8[0x15] = -0.707;
  afStack_e8[0x12] = -1.0;
  afStack_e8[0x13] = 0.707;
  iVar3 = rand();
  fVar11 = fVar11 * 0.9;
  fVar10 = 0.0;
  iVar9 = 8;
  uVar14 = NEON_fmov(0x40a00000,4);
  iVar3 = iVar3 % 9;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  do {
    uVar13 = *(undefined8 *)((long)&local_f0 + (long)iVar3 * 0xc);
    local_120 = CONCAT44(fVar11 * (float)((ulong)uVar13 >> 0x20) + fStack_10c,
                         fVar11 * (float)uVar13 + local_110);
    local_118 = fVar11 * afStack_e8[(long)iVar3 * 3] + local_108;
    local_138 = 0x40a00000;
    local_140 = uVar14;
    uVar13 = FUN_00da2eb4(uVar6);
    uVar7 = FUN_00ef00a0(uVar13,&local_120,&local_130,&local_140);
    if ((uVar7 & 1) != 0) {
      fVar12 = (local_110 - local_130) * (local_110 - local_130) +
               (fStack_10c - fStack_12c) * (fStack_10c - fStack_12c) +
               (local_108 - fStack_128) * (local_108 - fStack_128);
      if (((*(char *)(param_1 + 0x3d) == '\0') ||
          ((*(float *)(param_1 + 0x40) <= local_130 && (local_130 <= *(float *)(param_1 + 0x44)))))
         && (fVar10 + 5.0 < fVar12)) {
        *(float *)(param_1 + 0x38) = fStack_128;
        *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_12c,local_130);
        *(undefined1 *)(param_1 + 0x3c) = 1;
        fVar10 = fVar12;
      }
    }
    uVar1 = iVar3 + 8;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    iVar9 = iVar9 + -1;
    iVar3 = (iVar3 + 1) - (uVar1 & 0xfffffff8);
  } while (iVar9 != 0);
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d124b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d25570(param_2);
  FUN_00cb6ef0();
  FUN_00d121f0(param_1,param_2);
  return;
}




void FUN_00d124ec(void)

{
  return;
}




void thunk_FUN_00d121f0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_140;
  undefined4 uStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  float afStack_e8 [22];
  long lStack_90;
  
  lVar2 = tpidr_el0;
  lStack_90 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d25570(param_2);
  FUN_00d55794(lVar4,auStack_100,0);
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar8 = *(long **)(param_2 + 0x1420);
  fVar10 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
           (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0));
  plVar5 = (long *)*plVar8;
  if (DAT_031500e0 <= fVar10) {
    fVar10 = DAT_031500e0;
  }
  fVar11 = DAT_03150020;
  if (DAT_03150020 <= fVar10) {
    fVar11 = fVar10;
  }
  if (plVar5 == (long *)0x0) {
    uVar6 = 0;
  }
  else if ((int)plVar8[1] == (int)plVar5[1]) {
    uVar6 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    *plVar8 = 0;
    uVar6 = 0;
    *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar6,&fStack_110,0);
  afStack_e8[0] = 0.0;
  afStack_e8[1] = 0.707;
  uStack_f0 = 0x3f800000;
  afStack_e8[4] = 0.0;
  afStack_e8[5] = 0.0;
  afStack_e8[2] = 0.0;
  afStack_e8[3] = 0.707;
  afStack_e8[8] = 0.0;
  afStack_e8[9] = 0.707;
  afStack_e8[6] = 1.0;
  afStack_e8[7] = -0.707;
  afStack_e8[0xc] = 0.0;
  afStack_e8[0xd] = -0.707;
  afStack_e8[10] = -1.0;
  afStack_e8[0xb] = 0.0;
  afStack_e8[0x10] = 0.0;
  afStack_e8[0x11] = 0.0;
  afStack_e8[0xe] = 0.0;
  afStack_e8[0xf] = -0.707;
  afStack_e8[0x14] = 0.0;
  afStack_e8[0x15] = -0.707;
  afStack_e8[0x12] = -1.0;
  afStack_e8[0x13] = 0.707;
  iVar3 = rand();
  fVar11 = fVar11 * 0.9;
  fVar10 = 0.0;
  iVar9 = 8;
  uVar14 = NEON_fmov(0x40a00000,4);
  iVar3 = iVar3 % 9;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  do {
    uVar13 = *(undefined8 *)((long)&uStack_f0 + (long)iVar3 * 0xc);
    uStack_120 = CONCAT44(fVar11 * (float)((ulong)uVar13 >> 0x20) + fStack_10c,
                          fVar11 * (float)uVar13 + fStack_110);
    fStack_118 = fVar11 * afStack_e8[(long)iVar3 * 3] + fStack_108;
    uStack_138 = 0x40a00000;
    uStack_140 = uVar14;
    uVar13 = FUN_00da2eb4(uVar6);
    uVar7 = FUN_00ef00a0(uVar13,&uStack_120,&fStack_130,&uStack_140);
    if ((uVar7 & 1) != 0) {
      fVar12 = (fStack_110 - fStack_130) * (fStack_110 - fStack_130) +
               (fStack_10c - fStack_12c) * (fStack_10c - fStack_12c) +
               (fStack_108 - fStack_128) * (fStack_108 - fStack_128);
      if (((*(char *)(param_1 + 0x3d) == '\0') ||
          ((*(float *)(param_1 + 0x40) <= fStack_130 && (fStack_130 <= *(float *)(param_1 + 0x44))))
          ) && (fVar10 + 5.0 < fVar12)) {
        *(float *)(param_1 + 0x38) = fStack_128;
        *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_12c,fStack_130);
        *(undefined1 *)(param_1 + 0x3c) = 1;
        fVar10 = fVar12;
      }
    }
    uVar1 = iVar3 + 8;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    iVar9 = iVar9 + -1;
    iVar3 = (iVar3 + 1) - (uVar1 & 0xfffffff8);
  } while (iVar9 != 0);
  if (*(long *)(lVar2 + 0x28) == lStack_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d124f4(void)

{
  return;
}




void FUN_00d124f8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x40) = param_1;
  *(undefined4 *)(param_3 + 0x44) = param_2;
  *(undefined1 *)(param_3 + 0x3d) = 1;
  return;
}




undefined8 FUN_00d12508(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x14b8) != 0) {
    if (*(int *)(param_2 + 0x14c0) == *(int *)(*(long *)(param_2 + 0x14b8) + 8)) {
      *(long *)(param_2 + 0x1428) = param_2 + 0x14b8;
      return 1;
    }
    *(undefined8 *)(param_2 + 0x14b8) = 0;
    *(undefined4 *)(param_2 + 0x14c0) = DAT_03214ce8;
  }
  return 2;
}




void FUN_00d12550(void)

{
  return;
}




void FUN_00d12554(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028138d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[6] = uVar1;
  return;
}




void FUN_00d125b8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x3c) = param_1;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  return;
}




void FUN_00d125c0(void)

{
  return;
}




undefined4 FUN_00d125c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d125d0(void)

{
  return;
}




void thunk_FUN_00d125d8(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x44) = 0;
  uVar2 = 0;
  if (*(long *)(param_2 + 0x1428) != 0) {
    uVar3 = FUN_00d25570(param_2);
    FUN_00d55794(uVar3,&uStack_58,0);
    lVar5 = *(long *)(param_2 + 0x1428);
    puVar6 = (undefined8 *)(param_1 + 0x30);
    *puVar6 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar5 + 0x18);
    uStack_78 = 0x4000000040000000;
    uStack_70 = 0x40000000;
    uVar3 = FUN_00da2eb4(uVar3);
    uVar4 = FUN_00ef00a0(uVar3,puVar6,&uStack_68,&uStack_78);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                          (*(undefined8 **)(param_2 + 0x1450),param_2,&uStack_68), (uVar4 & 1) == 0)
       ) {
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x38) = uStack_50;
      *puVar6 = uStack_58;
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = uStack_60;
      *puVar6 = uStack_68;
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x44) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d125d8(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x44) = 0;
  uVar2 = 0;
  if (*(long *)(param_2 + 0x1428) != 0) {
    uVar3 = FUN_00d25570(param_2);
    FUN_00d55794(uVar3,&local_58,0);
    lVar5 = *(long *)(param_2 + 0x1428);
    puVar6 = (undefined8 *)(param_1 + 0x30);
    *puVar6 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar5 + 0x18);
    local_78 = 0x4000000040000000;
    local_70 = 0x40000000;
    uVar3 = FUN_00da2eb4(uVar3);
    uVar4 = FUN_00ef00a0(uVar3,puVar6,&local_68,&local_78);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                          (*(undefined8 **)(param_2 + 0x1450),param_2,&local_68), (uVar4 & 1) == 0))
    {
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x38) = local_50;
      *puVar6 = local_58;
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = local_60;
      *puVar6 = local_68;
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x44) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d126ec(void)

{
  return;
}




void FUN_00d126f0(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x1428);
  if (plVar5 != (long *)0x0) {
    plVar2 = (long *)*plVar5;
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)plVar5[1] == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *plVar5 = 0;
        lVar3 = 0;
        *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
      }
    }
    uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
    if (((uVar1 != 0x1f) && (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 2)) &&
       (uVar4 = FUN_00d125d8(param_1,param_2), (uVar4 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00d1279c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
      return;
    }
  }
  return;
}




undefined4 FUN_00d127ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}




void FUN_00d127b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028139d8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[6] = uVar1;
  return;
}




void FUN_00d12814(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x44) = param_1;
  return;
}




void FUN_00d1281c(void)

{
  return;
}




undefined4 FUN_00d12820(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d1282c(void)

{
  return;
}




void FUN_00d12830(long param_1,long param_2)

{
  param_2 = param_2 + (ulong)*(uint *)(param_1 + 0x3c) * 0xc;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1988);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1990);
  return;
}




void FUN_00d12850(void)

{
  return;
}




void FUN_00d12854(void)

{
  return;
}




undefined4 FUN_00d12858(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}




void FUN_00d12860(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02813ad8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  param_1[6] = uVar1;
  return;
}




void FUN_00d128c0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x3c) = param_1;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  return;
}




void FUN_00d128c8(void)

{
  return;
}




undefined4 FUN_00d128cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d128d8(void)

{
  return;
}




void FUN_00d128dc(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_2 + 0x1428);
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)plVar4[1] == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *plVar4 = 0;
        uVar3 = 0;
        *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
      }
    }
    FUN_00d55794(uVar3,&local_48,0);
    fVar5 = local_48 - *(float *)(param_1 + 0x44);
    fVar6 = fStack_44 - *(float *)(param_1 + 0x48);
    fVar7 = local_40 - *(float *)(param_1 + 0x4c);
    if (*(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x3c) <
        fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7) {
      FUN_00d129e0(param_1,param_2);
      *(float *)(param_1 + 0x4c) = local_40;
      *(ulong *)(param_1 + 0x44) = CONCAT44(fStack_44,local_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d129e0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_5 + 0x1428) != 0) {
    lVar3 = FUN_00d25570(param_5);
    plVar8 = *(long **)(param_5 + 0x1428);
    plVar7 = (long *)*plVar8;
    if (plVar7 == (long *)0x0) {
      lVar4 = 0;
    }
    else if ((int)plVar8[1] == (int)plVar7[1]) {
      lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else {
      *plVar8 = 0;
      lVar4 = 0;
      *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
    }
    FUN_00d55794(lVar3,auStack_78,0);
    FUN_00d55794(lVar4,&local_88,0);
    fVar10 = *(float *)(param_4 + 0x3c);
    fVar13 = *(float *)(lVar4 + 0x2e8);
    fVar11 = *(float *)(*(long *)(lVar4 + 0x38) + 100);
    fVar12 = *(float *)(*(long *)(lVar4 + 0x38) + 0x68);
    for (lVar4 = *(long *)(lVar4 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_0312ec00) {
        uVar6 = FUN_00d7d300();
        if ((uVar6 & 1) != 0) {
          *(undefined8 *)(param_4 + 0x30) = local_88;
          *(undefined4 *)(param_4 + 0x38) = local_80;
          goto LAB_00d12b38;
        }
        break;
      }
    }
    uVar9 = *(undefined4 *)(lVar3 + 0x260);
    uVar2 = FUN_00da2eb4(lVar3);
    uVar9 = FUN_00d4c928(fVar10 + (fVar12 * (fVar11 + fVar13)) / fVar11,&DAT_02bebbe8,auStack_78,
                         &local_88,uVar9,uVar2);
    *(undefined4 *)(param_4 + 0x30) = uVar9;
    *(undefined4 *)(param_4 + 0x34) = param_2;
    *(undefined4 *)(param_4 + 0x38) = param_3;
LAB_00d12b38:
    local_a8 = 0x4000000040000000;
    local_a0 = 0x40000000;
    uVar5 = FUN_00da2eb4(lVar3);
    uVar6 = FUN_00ef00a0(uVar5,(undefined8 *)(param_4 + 0x30),&local_98,&local_a8);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = (**(code **)**(undefined8 **)(param_5 + 0x1450))
                          (*(undefined8 **)(param_5 + 0x1450),param_5,&local_98), (uVar6 & 1) == 0))
    {
      uVar5 = FUN_00d25570(param_5);
      FUN_00d55794(uVar5,auStack_b8,0);
      *(undefined4 *)(param_4 + 0x38) = local_80;
      local_98 = local_88;
    }
    else {
      *(undefined4 *)(param_4 + 0x38) = local_90;
    }
    *(undefined8 *)(param_4 + 0x30) = local_98;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d12be8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN_00d25570(param_2);
  uVar2 = *(undefined4 *)(lVar3 + 0x260);
  plVar1 = param_1 + 6;
  uVar4 = FUN_00d4d10c(&DAT_02bebbe8,plVar1,uVar2);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = FUN_00d4cdd4(&DAT_02bebbe8,plVar1,plVar1,uVar2), (uVar4 & 1) == 0)) {
    FUN_00d129e0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d12c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    return;
  }
  return;
}




void FUN_00d12c80(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = *(long **)(param_2 + 0x1428);
  if (plVar7 != (long *)0x0) {
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) {
      lVar5 = 0;
    }
    else if ((int)plVar7[1] == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *plVar7 = 0;
      lVar5 = 0;
      *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
    }
    bVar3 = false;
    uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
    if (uVar1 != 0x1f) {
      bVar3 = *(short *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) == 2;
    }
    uVar6 = FUN_00d25570(param_2);
    FUN_00d55794(uVar6,auStack_58,0);
    if (bVar3) {
      FUN_00d55794(lVar5,&local_68,0);
      fVar8 = local_68 - *(float *)((long)param_1 + 0x44);
      fVar9 = fStack_64 - (float)param_1[9];
      fVar10 = fStack_60 - (float)((ulong)param_1[9] >> 0x20);
      if (*(float *)((long)param_1 + 0x3c) * *(float *)((long)param_1 + 0x3c) <
          fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10) {
        FUN_00d129e0(param_1,param_2);
        (**(code **)(*param_1 + 0x98))(param_1,param_2);
        *(float *)((long)param_1 + 0x4c) = fStack_60;
        *(ulong *)((long)param_1 + 0x44) = CONCAT44(fStack_64,local_68);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d12df0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN_00d25570(param_2);
  uVar2 = *(undefined4 *)(lVar3 + 0x260);
  plVar1 = param_1 + 6;
  uVar4 = FUN_00d4d10c(&DAT_02bebbe8,plVar1,uVar2);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = FUN_00d4cdd4(&DAT_02bebbe8,plVar1,plVar1,uVar2), (uVar4 & 1) == 0)) {
    FUN_00d129e0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d12e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    return;
  }
  return;
}




void thunk_FUN_00d129e0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                       long param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_5 + 0x1428) != 0) {
    lVar3 = FUN_00d25570(param_5);
    plVar8 = *(long **)(param_5 + 0x1428);
    plVar7 = (long *)*plVar8;
    if (plVar7 == (long *)0x0) {
      lVar4 = 0;
    }
    else if ((int)plVar8[1] == (int)plVar7[1]) {
      lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else {
      *plVar8 = 0;
      lVar4 = 0;
      *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
    }
    FUN_00d55794(lVar3,auStack_78,0);
    FUN_00d55794(lVar4,&uStack_88,0);
    fVar10 = *(float *)(param_4 + 0x3c);
    fVar13 = *(float *)(lVar4 + 0x2e8);
    fVar11 = *(float *)(*(long *)(lVar4 + 0x38) + 100);
    fVar12 = *(float *)(*(long *)(lVar4 + 0x38) + 0x68);
    for (lVar4 = *(long *)(lVar4 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_0312ec00) {
        uVar6 = FUN_00d7d300();
        if ((uVar6 & 1) != 0) {
          *(undefined8 *)(param_4 + 0x30) = uStack_88;
          *(undefined4 *)(param_4 + 0x38) = uStack_80;
          goto LAB_00d12b38;
        }
        break;
      }
    }
    uVar9 = *(undefined4 *)(lVar3 + 0x260);
    uVar2 = FUN_00da2eb4(lVar3);
    uVar9 = FUN_00d4c928(fVar10 + (fVar12 * (fVar11 + fVar13)) / fVar11,&DAT_02bebbe8,auStack_78,
                         &uStack_88,uVar9,uVar2);
    *(undefined4 *)(param_4 + 0x30) = uVar9;
    *(undefined4 *)(param_4 + 0x34) = param_2;
    *(undefined4 *)(param_4 + 0x38) = param_3;
LAB_00d12b38:
    uStack_a8 = 0x4000000040000000;
    uStack_a0 = 0x40000000;
    uVar5 = FUN_00da2eb4(lVar3);
    uVar6 = FUN_00ef00a0(uVar5,(undefined8 *)(param_4 + 0x30),&uStack_98,&uStack_a8);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = (**(code **)**(undefined8 **)(param_5 + 0x1450))
                          (*(undefined8 **)(param_5 + 0x1450),param_5,&uStack_98), (uVar6 & 1) == 0)
       ) {
      uVar5 = FUN_00d25570(param_5);
      FUN_00d55794(uVar5,auStack_b8,0);
      *(undefined4 *)(param_4 + 0x38) = uStack_80;
      uStack_98 = uStack_88;
    }
    else {
      *(undefined4 *)(param_4 + 0x38) = uStack_90;
    }
    *(undefined8 *)(param_4 + 0x30) = uStack_98;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d12e8c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}




void FUN_00d12e94(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x38) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x30) = DAT_03218f30;
  *(undefined8 *)(param_1 + 0x44) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x4c) = DAT_03218f38;
  return;
}




undefined4 FUN_00d12ec4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d12ed0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      puVar4 = (undefined8 *)(param_1 + 0x30);
      *puVar4 = *(undefined8 *)(param_2 + 0x1488);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1490);
      local_58 = 0x4000000040000000;
      local_50 = 0x40000000;
      FUN_00d25570(param_2);
      uVar2 = FUN_00da2eb4();
      uVar3 = FUN_00ef00a0(uVar2,puVar4,&local_48,&local_58);
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x30);
        local_48 = *(undefined8 *)(param_2 + 0x28);
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = local_40;
      }
      *puVar4 = local_48;
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d12fb0(void)

{
  return;
}




undefined4 FUN_00d12fb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d12fc0(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1438);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1430);
  return;
}




void FUN_00d12fd4(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1438);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1430);
  return;
}




void FUN_00d12fe8(void)

{
  return;
}




void FUN_00d12fec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02813bd8;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  param_1[8] = 0;
  param_1[6] = uVar1;
  return;
}

