// functions/00d77 — 39 functions
#include "libGameKindred.h"




void FUN_00d77060(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00d770f0(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d770f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00d77178(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00d77178(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00d771f8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_0281e3a0;
  param_1[5] = &PTR_FUN_0281e3d0;
  uVar1 = DAT_03214ce8;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf0 | 3;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_00d77268(long param_1)

{
  long lVar1;
  
  DAT_031a9318 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9318 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9318 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d77748;
  *(code **)(lVar1 + 0xb8) = FUN_00d777bc;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9318;
  *(undefined4 *)(lVar1 + 0xa8) = 0x58;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 800;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d772c8(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_19b0;
  float fStack_19ac;
  undefined8 local_19a8;
  float local_19a0;
  long local_1998 [800];
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  puVar5 = (undefined8 *)FUN_00da2cf8();
  uVar8 = *puVar5;
  local_19a0 = *(float *)(puVar5 + 1);
  local_19a8._0_4_ = (float)uVar8;
  fVar14 = (float)local_19a8;
  if (((ABS((float)local_19a8) < 1.1920929e-07) &&
      (local_19a8._4_4_ = (float)((ulong)uVar8 >> 0x20), ABS(local_19a8._4_4_) < 1.1920929e-07)) &&
     (ABS(local_19a0) < 1.1920929e-07)) {
    local_19a8 = uVar8;
    FUN_00d557c4(param_1,&local_19a8,&DAT_03218f68);
    fVar14 = (float)local_19a8;
    uVar8 = local_19a8;
  }
  local_19a8 = uVar8;
  fVar15 = local_19a0;
  uVar4 = FUN_01985d00(param_1,local_1998,800,DAT_031a9318);
  if (uVar4 != 0) {
    uVar10 = (ulong)uVar4;
    plVar11 = local_1998;
    do {
      lVar12 = *plVar11;
      bVar1 = *(byte *)(lVar12 + 0x50);
      fVar16 = *(float *)(lVar12 + 0x34);
      bVar3 = bVar1 >> 2 & 3;
      if (bVar3 == 0) goto LAB_00d774fc;
      if (bVar3 == 3) {
        fVar13 = (float)NEON_fminnm(fVar14 * *(float *)(lVar12 + 0x48) +
                                    fVar15 * *(float *)(lVar12 + 0x4c),0x3f800000);
        if (fVar13 <= -1.0) {
          fVar13 = -1.0;
        }
        if (0.5 <= fVar13) goto LAB_00d774fc;
      }
      else {
        plVar6 = *(long **)(lVar12 + 0x38);
        if (plVar6 != (long *)0x0) {
          if (*(int *)(lVar12 + 0x40) == (int)plVar6[1]) {
            lVar7 = (**(code **)(*plVar6 + 0x10))();
            if (lVar7 != 0) {
              plVar6 = *(long **)(lVar12 + 0x38);
              if (plVar6 == (long *)0x0) {
LAB_00d773c8:
                uVar8 = 0;
              }
              else {
                if (*(int *)(lVar12 + 0x40) != (int)plVar6[1]) {
                  *(undefined8 *)(lVar12 + 0x38) = 0;
                  *(undefined4 *)(lVar12 + 0x40) = DAT_03214ce8;
                  goto LAB_00d773c8;
                }
                lVar7 = (**(code **)(*plVar6 + 0x10))();
                if (lVar7 == param_1) goto LAB_00d774fc;
                plVar6 = *(long **)(lVar12 + 0x38);
                if (plVar6 == (long *)0x0) goto LAB_00d773c8;
                if (*(int *)(lVar12 + 0x40) == (int)plVar6[1]) {
                  uVar8 = (**(code **)(*plVar6 + 0x10))();
                }
                else {
                  *(undefined8 *)(lVar12 + 0x38) = 0;
                  uVar8 = 0;
                  *(undefined4 *)(lVar12 + 0x40) = DAT_03214ce8;
                }
              }
              FUN_00d9e1e0(param_1,uVar8,&local_19b0);
              bVar3 = *(byte *)(lVar12 + 0x50) >> 2 & 3;
              fVar13 = (float)NEON_fminnm(fVar14 * local_19b0 + fVar15 * fStack_19ac,0x3f800000);
              if (fVar13 <= -1.0) {
                fVar13 = -1.0;
              }
              if (((bVar3 == 1) && (fVar13 < 0.5)) || ((bVar3 == 2 && (0.5 < fVar13))))
              goto LAB_00d77514;
            }
          }
          else {
            *(undefined8 *)(lVar12 + 0x38) = 0;
            *(undefined4 *)(lVar12 + 0x40) = DAT_03214ce8;
          }
        }
LAB_00d774fc:
        uVar9 = (ulong)(bVar1 & 3);
        if (*(float *)((long)param_2 + uVar9 * 4) < fVar16) {
          *(float *)((long)param_2 + uVar9 * 4) = fVar16;
        }
      }
LAB_00d77514:
      uVar10 = uVar10 - 1;
      plVar11 = plVar11 + 1;
    } while (uVar10 != 0);
  }
  lVar12 = *(long *)(param_1 + 0x40);
  fVar14 = (*(float *)(lVar12 + 0x1ec) + 1.0) *
           (*(float *)(lVar12 + 0x84) +
           *(float *)(lVar12 + 0x138) * (*(float *)(lVar12 + 0x2a0) + 1.0));
  if (DAT_031a9eac <= fVar14) {
    fVar14 = DAT_031a9eac;
  }
  fVar15 = DAT_031a9de8._4_4_;
  if (DAT_031a9de8._4_4_ <= fVar14) {
    fVar15 = fVar14;
  }
  fVar14 = (float)NEON_fminnm(fVar15,0x3f800000);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar14 < *(float *)(param_2 + 1)) {
    *(float *)(param_2 + 1) = fVar14;
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d775d4(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 auStack_44 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d772c8(param_1,auStack_44);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_44[param_2]);
}




void FUN_00d77630(undefined4 param_1,long param_2,byte param_3)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) & 0xf0 | param_3 & 3;
  return;
}




void FUN_00d77648(long param_1,long param_2,byte param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x38) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xf3 | (param_3 & 3) << 2;
  return;
}




void FUN_00d77670(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 0xc;
  return;
}




void FUN_00d77688(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}




void FUN_00d77690(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d776b8(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d776e8(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d7770c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d77738(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d77740(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d77748(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_0281e3a0;
  param_1[5] = &PTR_FUN_0281e3d0;
  uVar1 = DAT_03214ce8;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf0 | 3;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return param_1;
}




void FUN_00d777bc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d777c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d777c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e400;
  param_1[5] = &PTR_FUN_0281e430;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}




void FUN_00d77814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e400;
  param_1[5] = &PTR_FUN_0281e430;
  FUN_00dab3c0(DAT_031a96c0,(long)param_1 + 0x34);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d77868(long param_1)

{
  FUN_00d77814(param_1 + -0x28);
  return;
}




void FUN_00d77870(void *param_1)

{
  FUN_00d77814();
  operator_delete(param_1);
  return;
}




void FUN_00d77894(long param_1)

{
  FUN_00d77814((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d778bc(long param_1)

{
  long lVar1;
  
  DAT_031a96c0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a96c0 + 1;
  lVar1 = param_1 + (ulong)DAT_031a96c0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d77cf4;
  *(code **)(lVar1 + 0xb8) = FUN_00d77d44;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_031a96c0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_00d7797c,0);
  FUN_019867cc(param_1,0x1ef90473,FUN_00d77a28,0);
  FUN_019867cc(param_1,0x1ab4042d,FUN_00d77aec,0);
  return;
}




void FUN_00d7797c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  FUN_00d55794(lVar2,auStack_48,0);
  fVar3 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  FUN_00dab3d8((*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar3 + *(float *)(lVar2 + 0x2e8))) /
               fVar3,param_1 + 0x34,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d77c04(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1 + 0x28;
  local_30 = *(undefined4 *)(param_1 + 0x30);
  FUN_00dab3a0(DAT_031a96c0,param_1 + 0x34,&local_38,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00d77c70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




void FUN_00d77c9c(void)

{
  return;
}




void FUN_00d77ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
    lVar1 = 0;
  }
  fVar2 = *(float *)(*(long *)(lVar1 + 0x38) + 100);
  FUN_00dab3d8((*(float *)(*(long *)(lVar1 + 0x38) + 0x68) * (fVar2 + *(float *)(lVar1 + 0x2e8))) /
               fVar2,param_1 + 0x34,param_3,1);
  return;
}




long FUN_00d77ce4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d77cec(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d77cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e400;
  param_1[5] = &PTR_FUN_0281e430;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return param_1;
}




void FUN_00d77d44(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d77d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d77d50(long param_1)

{
  long lVar1;
  
  DAT_03133530 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03133530 + 1;
  lVar1 = param_1 + (ulong)DAT_03133530 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d79034;
  *(code **)(lVar1 + 0xb8) = FUN_00d790a8;
  *(uint *)(lVar1 + 0xa4) = DAT_03133530;
  *(undefined4 *)(lVar1 + 0xa8) = 0xf0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d77db0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 5) = 0xfe;
  lVar2 = 0;
  *param_1 = &PTR_FUN_0281e460;
  *(undefined2 *)((long)param_1 + 0xec) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x68);
    puVar1[1] = 0xffff0000ffff;
    *puVar1 = 0xffff0000ffff;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x50);
  *(undefined8 *)((long)param_1 + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xc4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xffffffffffffffff;
  return;
}




void FUN_00d77e28(long param_1,long *param_2,uint param_3)

{
  if (((param_3 & 1) != 0) && (*param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_00d77e48();
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0xfe;
  return;
}




void FUN_00d77e48(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  char *__s1;
  long lVar8;
  
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0x48) = param_2[3];
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar4 = param_2[4];
  *(undefined8 *)(param_1 + 0x58) = param_2[5];
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = param_2[6];
  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_2 + 10);
  plVar7 = (long *)param_2[7];
  if (*plVar7 == 0) {
    uVar6 = 0;
LAB_00d77ed8:
    uVar6 = uVar6 & 0xffffffff;
    do {
      lVar5 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_1 + lVar5 + 0x68) = 0xffff;
    } while (uVar6 != 0x14);
  }
  else {
    uVar6 = 0;
    do {
      plVar1 = plVar7 + uVar6;
      uVar4 = FUN_00d6eb50();
      uVar2 = FUN_00d6e9d4(uVar4,*(undefined8 *)*plVar1);
      *(undefined4 *)(param_1 + (uVar6 & 0xffffffff) * 4 + 0x68) = uVar2;
      uVar6 = uVar6 + 1;
    } while (plVar1[1] != 0);
    if ((uint)uVar6 < 0x14) goto LAB_00d77ed8;
  }
  iVar3 = strcmp((char *)param_2[8],"weapon");
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  else {
    iVar3 = strcmp((char *)param_2[8],"crystal");
    if (iVar3 != 0) goto LAB_00d77f34;
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
LAB_00d77f34:
  plVar7 = (long *)param_2[9];
  lVar5 = *plVar7;
  if (lVar5 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    uVar6 = 0;
    do {
      __s1 = *(char **)(lVar5 + 8);
      if (__s1 != (char *)0x0) {
        iVar3 = strcmp(__s1,"A");
        if (iVar3 == 0) {
          uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x38) + 0xd0);
        }
        else {
          iVar3 = strcmp(__s1,"B");
          if (iVar3 == 0) {
            uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x38) + 0xd4);
          }
          else {
            iVar3 = strcmp(__s1,"C");
            if (iVar3 != 0) goto LAB_00d77fc4;
            uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x38) + 0xd8);
          }
        }
        *(undefined4 *)(param_1 + (uVar6 & 0xffffffff) * 4 + 0xbc) = uVar2;
      }
LAB_00d77fc4:
      lVar5 = plVar7[uVar6 + 1];
      uVar6 = uVar6 + 1;
    } while (lVar5 != 0);
  }
  return;
}




void FUN_00d77fe8(long param_1)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  long lVar16;
  uint local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 ***local_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0xff;
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_60 = &local_58;
  uVar10 = FUN_00d6eb50();
  local_78._0_4_ = FUN_00d6e9d4(uVar10,"*Item_TeleportBoots*");
  FUN_00d790b4(&local_60,&local_78,&local_78);
  uVar10 = FUN_00d6eb50();
  local_78._0_4_ = FUN_00d6e9d4(uVar10,"*Item_JourneyBoots*");
  FUN_00d790b4(&local_60,&local_78,&local_78);
  uVar10 = FUN_00d6eb50();
  local_78._0_4_ = FUN_00d6e9d4(uVar10,"*Item_WarTreads*");
  FUN_00d790b4(&local_60,&local_78,&local_78);
  uVar10 = FUN_00d6eb50();
  uVar8 = FUN_00d6e9d4(uVar10,"*Item_HalcyonChargers*");
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,uVar8);
  FUN_00d790b4(&local_60,&local_78,&local_78);
  local_78 = &local_70;
  local_70 = 0;
  uStack_68 = 0;
  uVar10 = FUN_00d6eb50();
  uVar8 = FUN_00d74134();
  plVar11 = (long *)FUN_00d6eb88(uVar10,uVar8);
  plVar11 = (long *)*plVar11;
  lVar12 = *plVar11;
  do {
    if (lVar12 == 0) {
      uVar10 = FUN_00d6eb50();
      uVar10 = FUN_00d6e9d4(uVar10,"*Item_SprintBoots*");
      *(int *)(param_1 + 0x68) = (int)uVar10;
      uVar8 = FUN_00d782f0(uVar10,&local_78);
      *(undefined4 *)(param_1 + 0x6c) = uVar8;
      uVar10 = FUN_00d792a0(&local_78,param_1 + 0x6c);
      uVar8 = FUN_00d782f0(uVar10,&local_78);
      *(undefined4 *)(param_1 + 0x70) = uVar8;
      FUN_00d792a0(&local_78,param_1 + 0x70);
      uVar10 = FUN_00d6eb50();
      uVar10 = FUN_00d6e9d4(uVar10,"*Item_TravelBoots*");
      *(int *)(param_1 + 0x74) = (int)uVar10;
      uVar8 = FUN_00d782f0(uVar10,&local_78);
      *(undefined4 *)(param_1 + 0x78) = uVar8;
      uVar10 = FUN_00d792a0(&local_78,param_1 + 0x78);
      uVar8 = FUN_00d782f0(uVar10,&local_78);
      *(undefined4 *)(param_1 + 0x7c) = uVar8;
      uVar10 = FUN_00d792a0(&local_78,param_1 + 0x7c);
      uVar10 = FUN_00d782f0(uVar10,&local_60);
      *(int *)(param_1 + 0x80) = (int)uVar10;
      uVar8 = FUN_00d782f0(uVar10,&local_78);
      *(undefined4 *)(param_1 + 0x84) = uVar8;
      FUN_00d792a0(&local_78,param_1 + 0x84);
      uVar9 = rand();
      lVar16 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0xb8) = (uVar9 & 1) + 1;
      uVar9 = rand();
      lVar13 = *(long *)(lVar16 + 0x38);
      bVar7 = (uVar9 & 1) != 0;
      lVar12 = 0xd0;
      if (bVar7) {
        lVar12 = 0xd4;
      }
      lVar2 = 0xd4;
      if (bVar7) {
        lVar2 = 0xd0;
      }
      uVar4 = *(undefined4 *)(lVar13 + lVar12);
      uVar5 = *(undefined4 *)(lVar13 + lVar2);
      uVar9 = rand();
      lVar12 = *(long *)(lVar16 + 0x38);
      uVar8 = uVar5;
      if ((uVar9 & 1) != 0) {
        uVar8 = *(undefined4 *)(lVar12 + 0xd8);
      }
      *(undefined4 *)(param_1 + 0xbc) = uVar4;
      *(undefined4 *)(param_1 + 0xc0) = uVar4;
      *(undefined4 *)(param_1 + 0xc4) = uVar5;
      *(undefined4 *)(param_1 + 200) = uVar4;
      *(undefined4 *)(param_1 + 0xcc) = uVar5;
      uVar3 = *(undefined4 *)(lVar12 + 0xd8);
      *(undefined4 *)(param_1 + 0xd4) = uVar4;
      *(undefined4 *)(param_1 + 0xd8) = uVar4;
      *(undefined4 *)(param_1 + 0xd0) = uVar3;
      uVar4 = *(undefined4 *)(lVar12 + 0xd8);
      *(undefined4 *)(param_1 + 0xe4) = uVar5;
      *(undefined4 *)(param_1 + 0xe8) = uVar8;
      *(undefined1 *)(param_1 + 0xed) = 1;
      *(undefined4 *)(param_1 + 0xdc) = uVar4;
      *(undefined4 *)(param_1 + 0xe0) = uVar5;
      FUN_00d78b94(&local_78,local_70);
      FUN_00d78b94(&local_60,local_58);
      if (*(long *)(lVar6 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar10 = FUN_00d6eb50();
    local_7c = FUN_00d6e9d4(uVar10,*(undefined8 *)*plVar11);
    uVar10 = FUN_00d6eb50();
    lVar12 = FUN_00d6eb88(uVar10,local_7c);
    if ((((*(int *)(lVar12 + 0x30) == 3) && (*(char *)(lVar12 + 0x199) == '\0')) &&
        (*(char *)(lVar12 + 0x19a) == '\0')) && (*(char *)(lVar12 + 0x34) == '\0')) {
      ppppuVar14 = (undefined8 ****)local_58;
      ppppuVar15 = &local_58;
      if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
        do {
          bVar7 = *(uint *)((long)ppppuVar14 + 0x1c) < local_7c;
          if (!bVar7) {
            ppppuVar15 = ppppuVar14;
          }
          ppppuVar1 = ppppuVar14 + bVar7;
          ppppuVar14 = (undefined8 ****)*ppppuVar1;
        } while ((undefined8 ****)*ppppuVar1 != (undefined8 ****)0x0);
        if ((ppppuVar15 != &local_58) && (*(uint *)((long)ppppuVar15 + 0x1c) <= local_7c))
        goto LAB_00d7817c;
      }
      FUN_00d791d4(&local_78,&local_7c,&local_7c);
    }
LAB_00d7817c:
    plVar11 = plVar11 + 1;
    lVar12 = *plVar11;
  } while( true );
}

