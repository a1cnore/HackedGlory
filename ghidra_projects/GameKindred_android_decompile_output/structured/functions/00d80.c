// functions/00d80 — 28 functions
#include "libGameKindred.h"




void FUN_00d80024(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = (uint *)(param_1 + 0x1d0);
  uVar9 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    uVar15 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x1d8);
      uVar16 = (ulong)uVar15;
      plVar5 = (long *)(lVar10 + (ulong)uVar15 * 0x10);
      plVar4 = (long *)*plVar5;
      if (plVar4 == (long *)0x0) {
LAB_00d80144:
        lVar10 = lVar10 + uVar16 * 0x10;
        FUN_00d8032c(puVar1,lVar10,lVar10 + 0x10);
        pcVar11 = *(code **)(param_1 + 0x1b0);
        if (pcVar11 != (code *)0x0) {
          uVar7 = *(undefined8 *)(param_1 + 0x1b8);
          lVar10 = 0;
LAB_00d80168:
          (*pcVar11)(param_1,lVar10,uVar7);
        }
      }
      else {
        piVar14 = (int *)(lVar10 + uVar16 * 0x10 + 8);
        if (*piVar14 != (int)plVar4[1]) {
          *plVar5 = 0;
          *piVar14 = DAT_03214ce8;
          goto LAB_00d80144;
        }
        lVar10 = (**(code **)(*plVar4 + 0x10))();
        if (lVar10 == 0) {
          lVar10 = *(long *)(param_1 + 0x1d8);
          goto LAB_00d80144;
        }
        if (param_3 == 0) {
LAB_00d80114:
          lVar17 = *(long *)(param_1 + 0x1d8) + uVar16 * 0x10;
          FUN_00d8032c(puVar1,lVar17,lVar17 + 0x10);
          pcVar11 = *(code **)(param_1 + 0x1b0);
          if (pcVar11 == (code *)0x0) goto LAB_00d8016c;
          uVar7 = *(undefined8 *)(param_1 + 0x1b8);
          goto LAB_00d80168;
        }
        uVar13 = 0;
        iVar8 = -1;
        do {
          iVar2 = (int)uVar13;
          if (*(long *)(param_2 + uVar13 * 8) != lVar10) {
            iVar2 = iVar8;
          }
          uVar13 = uVar13 + 1;
          iVar8 = iVar2;
        } while (param_3 != uVar13);
        if ((iVar2 == -1) ||
           ((*(code **)(param_1 + 0x1c0) != (code *)0x0 &&
            (uVar13 = (**(code **)(param_1 + 0x1c0))
                                (param_1,lVar10,*(undefined8 *)(param_1 + 0x1c8)), (uVar13 & 1) == 0
            )))) goto LAB_00d80114;
        uVar15 = uVar15 + 1;
      }
LAB_00d8016c:
      uVar9 = *puVar1;
    } while (uVar15 < uVar9);
  }
  if (param_3 != 0) {
    uVar16 = 0;
    do {
      lVar10 = *(long *)(param_2 + uVar16 * 8);
      if (uVar9 == 0) {
LAB_00d8020c:
        if ((*(code **)(param_1 + 0x1c0) == (code *)0x0) ||
           (uVar13 = (**(code **)(param_1 + 0x1c0))(param_1,lVar10,*(undefined8 *)(param_1 + 0x1c8))
           , (uVar13 & 1) != 0)) {
          local_78 = lVar10 + 0x28;
          local_70 = *(undefined4 *)(lVar10 + 0x30);
          FUN_00d8029c(puVar1,&local_78);
          if (*(code **)(param_1 + 0x1a0) != (code *)0x0) {
            (**(code **)(param_1 + 0x1a0))(param_1,lVar10,*(undefined8 *)(param_1 + 0x1a8));
          }
        }
      }
      else {
        lVar17 = 0;
        uVar13 = 0;
        do {
          lVar12 = *(long *)(param_1 + 0x1d8);
          plVar5 = *(long **)(lVar12 + lVar17);
          lVar6 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(lVar12 + lVar17 + 8) == (int)plVar5[1]) {
              lVar6 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              *(undefined8 *)(lVar12 + lVar17) = 0;
              lVar6 = 0;
              *(int *)(lVar12 + lVar17 + 8) = DAT_03214ce8;
            }
          }
          if (lVar10 == lVar6) goto LAB_00d80204;
          uVar13 = uVar13 + 1;
          lVar17 = lVar17 + 0x10;
        } while (uVar13 < *puVar1);
        uVar13 = 0xffffffff;
LAB_00d80204:
        if ((int)uVar13 == -1) goto LAB_00d8020c;
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == param_3) break;
      uVar9 = *puVar1;
    } while( true );
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8029c(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00d7fbc0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -0x10) = *param_2;
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 1);
  return;
}




void FUN_00d8032c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 4);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 0x10) != param_3; param_3 = param_3 + 2) {
      *param_2 = *param_3;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
      param_2 = param_2 + 2;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00d803a8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e970;
  param_1[5] = &PTR_FUN_0281e9a0;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0xee;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  uVar1 = DAT_03214ce8;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x41f0000000000000;
  param_1[0x1b] = 0;
  *(undefined2 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1e) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x7f7fffff;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return;
}




void FUN_00d8048c(long param_1)

{
  long lVar1;
  
  DAT_0312f140 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f140 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f140 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d8201c;
  *(code **)(lVar1 + 0xb8) = FUN_00d82040;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f140;
  *(undefined4 *)(lVar1 + 0xa8) = 0x160;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,thunk_FUN_00d8194c,0);
  FUN_01986780(param_1,6,thunk_FUN_00d81aa8,0);
  FUN_019867cc(param_1,0x1b0a0423,FUN_00d80550,0);
  return;
}




void FUN_00d80638(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  long lVar1;
  float fVar2;
  float __x;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)*param_8 - (float)*param_7;
  fVar4 = (float)((ulong)*param_8 >> 0x20) - (float)((ulong)*param_7 >> 0x20);
  local_88 = CONCAT44(fVar4,fVar3);
  fVar5 = *(float *)(param_8 + 1) - *(float *)(param_7 + 1);
  __x = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  if (1e-08 <= __x) {
    fVar2 = SQRT(__x);
    if (NAN(fVar2)) {
      local_80 = fVar5;
      fVar2 = sqrtf(__x);
    }
    local_80 = fVar5 / fVar2;
    local_88 = CONCAT44(fVar4 / fVar2,fVar3 / fVar2);
  }
  else {
    local_80 = DAT_03218f70;
    local_88 = DAT_03218f68;
  }
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(param_8 + 1);
  *(undefined8 *)(param_2 + 0xec) = *param_8;
  FUN_00d8077c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_88);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d8077c(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5
                 ,long param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_2 + 0x34) = param_4;
  *(undefined4 *)(param_2 + 0x38) = param_3;
  uVar1 = *(undefined4 *)(param_5 + 0x30);
  *(long *)(param_2 + 0x98) = param_5 + 0x28;
  *(undefined4 *)(param_2 + 0xa0) = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 0x30);
  *(long *)(param_2 + 0xa8) = param_6 + 0x28;
  *(undefined4 *)(param_2 + 0xb0) = uVar1;
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_8 + 1);
  *(undefined8 *)(param_2 + 0x7c) = *param_8;
  uVar3 = FUN_00d55870(param_5);
  *(undefined1 *)(param_2 + 0xb8) = uVar3;
  *(undefined4 *)(param_2 + 0xf8) = param_1;
  FUN_00d81cf8(param_7,param_8,param_2 + 0x3c);
  uVar4 = FUN_00d5babc(param_5);
  local_98 = 0;
  local_90 = 0;
  memset(auStack_120,0,0x60);
  local_7c = 0xff000000;
  local_78 = 0xbf8000003f800000;
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  local_84 = 0;
  local_8c = 0;
  FUN_00d84924(param_2,auStack_120,param_3);
  FUN_00a7b61c(param_2,auStack_120,uVar4);
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d808c4(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,float *param_8)

{
  long lVar1;
  float fVar2;
  float __x;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  ulong local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar5 = *param_8;
  fVar6 = param_8[1];
  __x = fVar5 * fVar5 + 0.0 + fVar6 * fVar6;
  local_78 = (ulong)(uint)fVar5;
  uVar3 = DAT_03218f68;
  local_70 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar2 = SQRT(__x);
    if (NAN(fVar2)) {
      local_70 = fVar6;
      fVar2 = sqrtf(__x);
    }
    uVar3 = CONCAT44(0.0 / fVar2,fVar5 / fVar2);
    local_70 = fVar6 / fVar2;
  }
  uVar4 = *param_7;
  *(float *)(param_2 + 0xf4) = local_70 * 10000.0 + *(float *)(param_7 + 1);
  *(ulong *)(param_2 + 0xec) =
       CONCAT44((float)(uVar3 >> 0x20) * 10000.0 + (float)((ulong)uVar4 >> 0x20),
                (float)uVar3 * 10000.0 + (float)uVar4);
  local_78 = uVar3;
  FUN_00d8077c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_78);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d80a2c(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,long param_8)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float __x;
  float fVar4;
  float fVar5;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [8];
  float local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00d55794(param_8,local_88,0);
  fVar4 = local_88._0_4_ - (float)*param_7;
  fVar5 = local_88._4_4_ - (float)((ulong)*param_7 >> 0x20);
  local_98 = CONCAT44(fVar5,fVar4);
  local_80 = local_80 - *(float *)(param_7 + 1);
  __x = fVar4 * fVar4 + fVar5 * fVar5 + local_80 * local_80;
  if (1e-08 <= __x) {
    fVar3 = SQRT(__x);
    if (NAN(fVar3)) {
      local_90 = local_80;
      fVar3 = sqrtf(__x);
    }
    local_90 = local_80 / fVar3;
    local_98 = CONCAT44(fVar5 / fVar3,fVar4 / fVar3);
  }
  else {
    local_90 = DAT_03218f70;
    local_98 = DAT_03218f68;
  }
  uVar1 = *(undefined4 *)(param_8 + 0x30);
  *(long *)(param_2 + 0xd8) = param_8 + 0x28;
  *(undefined4 *)(param_2 + 0xe0) = uVar1;
  *(undefined4 *)(param_2 + 0xe8) = 1;
  FUN_00d811fc(param_2);
  FUN_00d8077c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_98);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d80b90(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0xd8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xe8) = param_3;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  FUN_00d811fc();
  return;
}




undefined4 FUN_00d80ba8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




undefined4 FUN_00d80bb0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




void FUN_00d80bb8(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x6c);
  param_2[1] = *(undefined4 *)(param_1 + 0x70);
  param_2[2] = *(undefined4 *)(param_1 + 0x74);
  return;
}




void FUN_00d80bd4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  *param_2 = *(undefined4 *)(param_1 + 0x6c);
  param_2[1] = uVar1;
  return;
}




void FUN_00d80be4(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = *param_2;
  *(undefined4 *)(param_1 + 0x70) = param_2[1];
  *(undefined4 *)(param_1 + 0x74) = param_2[2];
  return;
}




void FUN_00d80c00(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x84);
  *param_2 = *(undefined8 *)(param_1 + 0x7c);
  return;
}




void FUN_00d80c14(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x7c);
  *param_2 = fVar1;
  fVar2 = *(float *)(param_1 + 0x84);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  param_2[1] = fVar2;
  if (1e-08 <= fVar1) {
    fVar2 = SQRT(fVar1);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar1);
    }
    *(ulong *)param_2 =
         CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) / fVar2,
                  (float)*(undefined8 *)param_2 / fVar2);
  }
  else {
    *(undefined8 *)param_2 = DAT_03218f20;
  }
  return;
}




void FUN_00d80ca0(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = DAT_03218f80;
  fVar6 = DAT_03218f7c;
  fVar2 = DAT_03218f78;
  fVar5 = DAT_03218f80 * param_2[1] - DAT_03218f7c * param_2[2];
  fVar3 = DAT_03218f78 * param_2[2] - DAT_03218f80 * *param_2;
  fVar1 = DAT_03218f7c * *param_2 - DAT_03218f78 * param_2[1];
  fVar3 = fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3;
  fVar1 = SQRT(fVar3);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  if (ABS(fVar1) < 1.1920929e-07) {
    fVar6 = DAT_03218f8c;
    fVar4 = DAT_03218f90;
    fVar2 = DAT_03218f88;
  }
  fVar7 = *param_2 - (float)DAT_03218f30;
  fVar8 = param_2[1] - DAT_03218f30._4_4_;
  fVar5 = param_2[2] - DAT_03218f38;
  fVar3 = fVar7 * fVar7 + fVar8 * fVar8 + fVar5 * fVar5;
  fVar1 = SQRT(fVar3);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  fVar8 = fVar8 / fVar1;
  fVar5 = fVar5 / fVar1;
  fVar7 = fVar7 / fVar1;
  fVar1 = fVar6 * fVar5 - fVar4 * fVar8;
  fVar3 = fVar4 * fVar7 - fVar2 * fVar5;
  fVar6 = fVar2 * fVar8 - fVar6 * fVar7;
  fVar4 = fVar6 * fVar6 + fVar1 * fVar1 + fVar3 * fVar3;
  fVar2 = SQRT(fVar4);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar4);
  }
  fVar1 = fVar1 / fVar2;
  fVar3 = fVar3 / fVar2;
  fVar6 = fVar6 / fVar2;
  *(float *)(param_1 + 0x3c) = fVar1;
  *(float *)(param_1 + 0x40) = fVar3;
  *(float *)(param_1 + 0x44) = fVar6;
  *(float *)(param_1 + 0x5c) = fVar7;
  *(float *)(param_1 + 0x60) = fVar8;
  *(float *)(param_1 + 0x4c) = fVar8 * fVar6 - fVar5 * fVar3;
  *(float *)(param_1 + 0x50) = fVar5 * fVar1 - fVar7 * fVar6;
  *(float *)(param_1 + 0x54) = fVar7 * fVar3 - fVar8 * fVar1;
  *(float *)(param_1 + 100) = fVar5;
  *(float *)(param_1 + 0x84) = param_2[2];
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)param_2;
  return;
}




void FUN_00d80e60(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  local_30 = param_2[1];
  uStack_34 = 0;
  FUN_00d80ca0(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00d80eb4(long param_1)

{
  return param_1 + 0x3c;
}




undefined4 FUN_00d80ebc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}




void FUN_00d80ec4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x88) = param_1;
  return;
}




void FUN_00d80ecc(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x8c) = param_1;
  *(undefined4 *)(param_3 + 0x90) = param_2;
  return;
}




undefined4 FUN_00d80ed4(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}




void FUN_00d80edc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xcc) = param_1;
  return;
}




undefined8 FUN_00d80ee4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0x98);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
      uVar3 = (**(code **)(*plVar1 + 0x10))();
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = DAT_03214ce8;
  return 0;
}




undefined8 FUN_00d80f68(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0x98);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
      uVar3 = (**(code **)(*plVar1 + 0x10))();
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = DAT_03214ce8;
  return 0;
}




undefined8 FUN_00d80fec(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0xa8);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
      uVar3 = (**(code **)(*plVar1 + 0x10))();
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = DAT_03214ce8;
  return 0;
}

