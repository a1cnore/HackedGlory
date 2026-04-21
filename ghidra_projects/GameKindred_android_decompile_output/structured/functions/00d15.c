// functions/00d15 — 28 functions
#include "libGameKindred.h"




void FUN_00d15484(void)

{
  return;
}




void FUN_00d15488(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x680) == 0) {
LAB_00d15548:
    if (*(long *)(param_2 + 0x14b8) != 0) {
      if (*(int *)(param_2 + 0x14c0) == *(int *)(*(long *)(param_2 + 0x14b8) + 8)) {
        uVar5 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                          (*(undefined8 **)(param_2 + 0x1450),param_2,
                           (undefined8 *)(param_2 + 0x14c8));
        if ((uVar5 & 1) != 0) {
          *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x14d0);
          local_68 = *(undefined8 *)(param_2 + 0x14c8);
          goto LAB_00d155cc;
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x14b8) = 0;
        *(undefined4 *)(param_2 + 0x14c0) = DAT_03214ce8;
      }
    }
    lVar4 = FUN_00d23720(param_2);
    if (lVar4 == 0) goto LAB_00d155d0;
    FUN_00d55794(lVar4,&local_68,0);
    *(undefined4 *)(param_3 + 1) = local_60;
  }
  else {
    fVar8 = 999999.0;
    uVar5 = 0;
    lVar4 = param_2 + 0x380;
    lVar6 = 0;
    do {
      lVar7 = lVar6;
      fVar2 = fVar8;
      if (((((*(byte *)(lVar4 + 0x3c) >> 3 & 1) != 0) && (*(float *)(lVar4 + 0x28) < fVar8)) &&
          (lVar7 = lVar4, fVar2 = *(float *)(lVar4 + 0x28), lVar6 != 0)) &&
         (uVar3 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                            (*(undefined8 **)(param_2 + 0x1450),param_2,lVar6 + 0x10), lVar7 = lVar6
         , fVar2 = fVar8, (uVar3 & 1) != 0)) {
        lVar7 = lVar4;
        fVar2 = *(float *)(lVar4 + 0x28);
      }
      fVar8 = fVar2;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
      lVar6 = lVar7;
    } while (uVar5 < *(uint *)(param_2 + 0x680));
    if (lVar7 == 0) goto LAB_00d15548;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar7 + 0x18);
    local_68 = *(undefined8 *)(lVar7 + 0x10);
  }
LAB_00d155cc:
  *param_3 = local_68;
LAB_00d155d0:
  *param_4 = 0x3fc00000;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d1560c(void)

{
  return;
}




void FUN_00d15610(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02814418;
  param_1[5] = 0x40400000;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}




undefined4 FUN_00d15654(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined1 FUN_00d15660(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}




void FUN_00d15668(void)

{
  return;
}




void FUN_00d1566c(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00d15a80(param_2,param_2,param_1 + 0x30);
  *(byte *)(param_1 + 0x3c) = bVar1 & 1;
  return;
}




void FUN_00d1569c(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00d15a80(param_2,param_2,param_1 + 0x30);
  *(byte *)(param_1 + 0x3c) = bVar1 & 1;
  return;
}




void FUN_00d156cc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d25570(param_5);
  if ((*(uint *)(lVar4 + 0x2f4) & 0x20000008) == 0) {
    lVar4 = FUN_00d25570(param_5);
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    local_48 = (**(code **)(*param_4 + 0x78))(param_4);
    uStack_44 = param_2;
    local_40 = param_3;
    uVar5 = FUN_00d4d10c(&DAT_02bebbe8,&local_48,uVar1);
    if (((uVar5 & 1) == 0) &&
       (auVar6 = FUN_00d4cdd4(&DAT_02bebbe8,&local_48,&local_48,uVar1), (auVar6._0_8_ & 1) == 0)) {
      bVar3 = FUN_00d15a80(param_5,auVar6._8_8_,param_4 + 6);
      *(byte *)((long)param_4 + 0x3c) = bVar3 & 1;
      if ((bVar3 & 1) != 0) {
        (**(code **)(*param_4 + 0x98))(param_4,param_5);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d157bc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d158c8();
  lVar5 = FUN_00d25570(param_5);
  if ((*(uint *)(lVar5 + 0x2f4) & 0x20000008) != 0) goto LAB_00d1580c;
  lVar5 = FUN_00d25570(param_5);
  uVar1 = *(undefined4 *)(lVar5 + 0x260);
  local_58 = (**(code **)(*param_4 + 0x78))(param_4);
  uVar6 = extraout_x1;
  uStack_54 = param_2;
  local_50 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_00d4d10c(&DAT_02bebbe8,&local_58,uVar1);
    if ((uVar4 & 1) != 0) goto LAB_00d1580c;
    auVar7 = FUN_00d4cdd4(&DAT_02bebbe8,&local_58,&local_58,uVar1);
    uVar6 = auVar7._8_8_;
    if ((auVar7._0_8_ & 1) != 0) goto LAB_00d1580c;
  }
  bVar3 = FUN_00d15a80(param_5,uVar6,param_4 + 6);
  *(byte *)((long)param_4 + 0x3c) = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    (**(code **)(*param_4 + 0x98))(param_4,param_5);
  }
LAB_00d1580c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d158c8(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4,
                 long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  float local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_5);
  plVar5 = *(long **)(param_5 + 0x1420);
  plVar4 = (long *)*plVar5;
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else if ((int)plVar5[1] == (int)plVar4[1]) {
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  else {
    *plVar5 = 0;
    uVar3 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar2,auStack_58,0);
  FUN_00d55794(uVar3,&local_68,0);
  fVar6 = (float)(**(code **)(*param_4 + 0x90))(param_4);
  fVar8 = 1.0;
  fVar7 = (float)(**(code **)(*param_4 + 0x78))(param_4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((fVar6 + 1.0) * (fVar6 + 1.0) <
                   (local_68 - fVar7) * (local_68 - fVar7) +
                   (fStack_64 - fVar8) * (fStack_64 - fVar8) +
                   (local_60 - param_3) * (local_60 - param_3));
}




void FUN_00d159fc(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00d15a80(param_2,param_2,param_1 + 0x30);
  *(byte *)(param_1 + 0x3c) = bVar1 & 1;
  return;
}




float FUN_00d15a2c(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d4d1e4(&DAT_02bebbe8);
  return fVar1 * 0.5;
}




void FUN_00d15a50(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00d15a80(param_2,param_2,param_1 + 0x30);
  *(byte *)(param_1 + 0x3c) = bVar1 & 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d15a80(long param_1,undefined8 param_2,float *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float local_64;
  float fStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d25570();
  plVar9 = *(long **)(param_1 + 0x1420);
  plVar8 = (long *)*plVar9;
  if (plVar8 == (long *)0x0) {
    lVar5 = 0;
  }
  else if ((int)plVar9[1] == (int)plVar8[1]) {
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    *plVar9 = 0;
    lVar5 = 0;
    *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(lVar4,&local_68,0);
  FUN_00d55794(lVar5,&local_78,0);
  if (((1.1920929e-07 <= ABS(local_78 - local_68)) || (1.1920929e-07 <= ABS(fStack_74 - local_64)))
     || (uVar6 = 0, 1.1920929e-07 <= ABS(local_70 - fStack_60))) {
    fVar11 = *(float *)(*(long *)(lVar5 + 0x38) + 100);
    fVar11 = (*(float *)(*(long *)(lVar5 + 0x38) + 0x68) * (fVar11 + *(float *)(lVar5 + 0x2e8))) /
             fVar11;
    fVar10 = *(float *)(param_1 + 0x4c) + fVar11;
    if ((*(uint *)(lVar4 + 0x2f4) >> 4 & 1) != 0) {
      fVar12 = *(float *)(*(long *)(lVar4 + 0x38) + 100);
      fVar10 = fVar10 + (*(float *)(*(long *)(lVar4 + 0x38) + 0x68) *
                        (fVar12 + *(float *)(lVar4 + 0x2e8))) / fVar12;
    }
    if ((*(uint *)(lVar4 + 0x2f4) >> 0x1d & 1) == 0) {
      fVar10 = fVar10 + -0.5;
      fVar12 = fVar10 + -0.5;
      fVar11 = fVar10;
      if (*(float *)(param_1 + 0x4c) <= 3.0) {
        fVar11 = fVar12;
      }
      lVar5 = FUN_00d25570(param_1);
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar3 = FUN_00da2eb4(lVar4);
      fVar11 = (float)FUN_00d4c928(fVar11,&DAT_02bebbe8,&local_68,&local_78,uVar1,uVar3);
      *param_3 = fVar11;
      param_3[1] = fVar12;
      param_3[2] = fVar10;
      uVar7 = (**(code **)**(undefined8 **)(param_1 + 0x1450))
                        (*(undefined8 **)(param_1 + 0x1450),param_1,param_3);
      if ((((uVar7 & 1) != 0) &&
          (uVar7 = FUN_00d4d10c(&DAT_02bebbe8,param_3,*(undefined4 *)(lVar4 + 0x260)),
          (uVar7 & 1) == 0)) &&
         (uVar7 = FUN_00d4cdd4(&DAT_02bebbe8,param_3,param_3,*(undefined4 *)(lVar4 + 0x260)),
         (uVar7 & 1) == 0)) {
        uVar6 = 0;
        param_3[2] = local_70;
        *(ulong *)param_3 = CONCAT44(fStack_74,local_78);
        goto LAB_00d15d44;
      }
    }
    else if ((*(byte *)(lVar5 + 0x2f5) >> 4 & 1) == 0) {
      param_3[2] = local_70;
      *(ulong *)param_3 = CONCAT44(fStack_74,local_78);
    }
    else {
      fVar13 = local_68 - local_78;
      fVar14 = local_64 - fStack_74;
      fVar15 = fStack_60 - local_70;
      fVar12 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
      uVar6 = ram0x03218f6c;
      fVar10 = (float)DAT_03218f68;
      if (1e-08 <= fVar12) {
        fVar10 = SQRT(fVar12);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar12);
        }
        uVar6 = CONCAT44(fVar15 / fVar10,fVar14 / fVar10);
        fVar10 = fVar13 / fVar10;
      }
      *param_3 = fVar11 * fVar10 + local_78;
      *(ulong *)(param_3 + 1) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar11 + local_70,
                    (float)uVar6 * fVar11 + fStack_74);
    }
    uVar6 = 1;
  }
LAB_00d15d44:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




void FUN_00d15d78(void)

{
  return;
}




void FUN_00d15d7c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02814518;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  param_1[6] = DAT_03218f30;
  return;
}




undefined4 FUN_00d15dd4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d15de0(void)

{
  return;
}




void thunk_FUN_00d15de8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  plVar5 = *(long **)(param_2 + 0x1428);
  plVar4 = (long *)*plVar5;
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else if ((int)plVar5[1] == (int)plVar4[1]) {
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  else {
    *plVar5 = 0;
    uVar3 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d55794(uVar3,auStack_58,0);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d15de8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  plVar5 = *(long **)(param_2 + 0x1428);
  plVar4 = (long *)*plVar5;
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else if ((int)plVar5[1] == (int)plVar4[1]) {
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  else {
    *plVar5 = 0;
    uVar3 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d55794(uVar3,auStack_58,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d15eb4(void)

{
  return;
}




void FUN_00d15eb8(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 0x1428);
  plVar3 = (long *)*plVar4;
  if (plVar3 == (long *)0x0) {
    lVar2 = 0;
  }
  else if ((int)plVar4[1] == (int)plVar3[1]) {
    lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    *plVar4 = 0;
    lVar2 = 0;
    *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
  }
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) == 2)) {
    FUN_00d15de8(lVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d15f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    return;
  }
  return;
}




void FUN_00d15f74(void)

{
  return;
}




void FUN_00d15f78(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814618;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d15fac(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




undefined8 FUN_00d15fb4(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar2 = FUN_00d25570(param_2);
  plVar6 = *(long **)(param_2 + 0x1420);
  if ((plVar6 != (long *)0x0) && (plVar3 = (long *)*plVar6, plVar3 != (long *)0x0)) {
    if ((int)plVar6[1] == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        if ((*(byte *)(lVar2 + 0x2f4) & 1) != 0) {
          uVar1 = FUN_00d55870(lVar2);
          uVar5 = FUN_00d7d0a0(*(undefined8 *)(lVar4 + 0x80),uVar1);
          if ((uVar5 & 1) == 0) {
            return 2;
          }
        }
        if (*(int *)(param_1 + 0x24) == 1) {
          FUN_00d161e8(param_1,param_2);
        }
        else {
          if (*(int *)(param_1 + 0x24) != 0) {
            return 2;
          }
          FUN_00d1608c(param_1,param_2);
        }
        return 3;
      }
    }
    else {
      *plVar6 = 0;
      *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
    }
  }
  return 2;
}

