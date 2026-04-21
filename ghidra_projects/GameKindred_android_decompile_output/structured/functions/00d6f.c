// functions/00d6f — 32 functions
#include "libGameKindred.h"




void FUN_00d6f04c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6f054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6f058(undefined8 *param_1,long param_2,byte param_3)

{
  *(byte *)(param_1 + 1) = param_3 & 1;
  *param_1 = &PTR_FUN_0281e030;
  param_1[2] = param_2 + 0x28;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00d6f084(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float __x;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x10);
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      uVar4 = 0;
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x10);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
          }
        }
        FUN_00d55794(uVar4,local_48,0);
        local_48[0] = local_48[0] - *param_2;
        local_40 = local_40 - param_2[2];
        *param_3 = local_48[0];
        __x = local_48[0] * local_48[0] + 0.0 + local_40 * local_40;
        param_3[2] = local_40;
        param_3[1] = 0.0;
        if (1e-08 <= __x) {
          fVar5 = SQRT(__x);
          if (NAN(fVar5)) {
            fVar5 = sqrtf(__x);
          }
          *(ulong *)param_3 =
               CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) / fVar5,
                        (float)*(undefined8 *)param_3 / fVar5);
          param_3[2] = param_3[2] / fVar5;
        }
        else {
          param_3[2] = DAT_03218f70;
          *(undefined8 *)param_3 = DAT_03218f68;
        }
        uVar4 = 1;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00d6f204(undefined8 *param_1,long param_2,byte param_3)

{
  *(byte *)(param_1 + 1) = param_3 & 1;
  *param_1 = &PTR_FUN_0281e058;
  param_1[2] = param_2 + 0x28;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00d6f230(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float __x;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x10);
  uVar6 = 0;
  if (plVar3 == (long *)0x0) goto LAB_00d6f2cc;
  if (*(int *)(param_1 + 0x18) != (int)plVar3[1]) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
    goto LAB_00d6f2cc;
  }
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  uVar6 = 0;
  if (lVar4 == 0) goto LAB_00d6f2cc;
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
    lVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x18) == (int)plVar3[1]) {
    lVar4 = (**(code **)(*plVar3 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
  }
  plVar3 = *(long **)(lVar4 + 0x2b0);
  uVar6 = 0;
  if (plVar3 == (long *)0x0) goto LAB_00d6f2cc;
  if (*(int *)(lVar4 + 0x2b8) == (int)plVar3[1]) {
    lVar5 = (**(code **)(*plVar3 + 0x10))();
    uVar6 = 0;
    if (lVar5 == 0) goto LAB_00d6f2cc;
    plVar3 = *(long **)(lVar4 + 0x2b0);
    lVar5 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(lVar4 + 0x2b8) == (int)plVar3[1]) {
        lVar5 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(lVar4 + 0x2b0) = 0;
        lVar5 = 0;
        *(undefined4 *)(lVar4 + 0x2b8) = DAT_03214ce8;
      }
    }
    uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
    if ((uVar1 != 0x1f) && (uVar6 = 0, *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2))
    goto LAB_00d6f2cc;
    plVar3 = *(long **)(lVar4 + 0x2b0);
    uVar6 = 0;
    if (plVar3 == (long *)0x0) goto LAB_00d6f2cc;
    if (*(int *)(lVar4 + 0x2b8) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      uVar6 = 0;
      if (lVar4 == 0) goto LAB_00d6f2cc;
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) {
        lVar4 = 0;
      }
      else if (*(int *)(param_1 + 0x18) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0;
        lVar4 = 0;
        *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
      }
      plVar3 = *(long **)(lVar4 + 0x2b0);
      uVar6 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(lVar4 + 0x2b8) == (int)plVar3[1]) {
          lVar5 = (**(code **)(*plVar3 + 0x10))();
          uVar6 = 0;
          if (lVar5 != 0) {
            plVar3 = *(long **)(lVar4 + 0x2b0);
            lVar5 = 0;
            if (plVar3 != (long *)0x0) {
              if (*(int *)(lVar4 + 0x2b8) == (int)plVar3[1]) {
                lVar5 = (**(code **)(*plVar3 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar4 + 0x2b0) = 0;
                lVar5 = 0;
                *(undefined4 *)(lVar4 + 0x2b8) = DAT_03214ce8;
              }
            }
            uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
            if ((uVar1 == 0x1f) ||
               (uVar6 = 0, 1 < *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
              plVar3 = *(long **)(lVar4 + 0x2b0);
              uVar6 = 0;
              if (plVar3 != (long *)0x0) {
                if (*(int *)(lVar4 + 0x2b8) != (int)plVar3[1]) goto LAB_00d6f4fc;
                uVar6 = (**(code **)(*plVar3 + 0x10))();
              }
            }
          }
        }
        else {
LAB_00d6f4fc:
          *(undefined8 *)(lVar4 + 0x2b0) = 0;
          uVar6 = 0;
          *(undefined4 *)(lVar4 + 0x2b8) = DAT_03214ce8;
        }
      }
      FUN_00d55794(uVar6,local_58,0);
      local_58[0] = local_58[0] - *param_2;
      local_50 = local_50 - param_2[2];
      *param_3 = local_58[0];
      __x = local_58[0] * local_58[0] + 0.0 + local_50 * local_50;
      param_3[2] = local_50;
      param_3[1] = 0.0;
      if (1e-08 <= __x) {
        fVar7 = SQRT(__x);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(__x);
        }
        *(ulong *)param_3 =
             CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) / fVar7,
                      (float)*(undefined8 *)param_3 / fVar7);
        param_3[2] = param_3[2] / fVar7;
      }
      else {
        param_3[2] = DAT_03218f70;
        *(undefined8 *)param_3 = DAT_03218f68;
      }
      uVar6 = 1;
      goto LAB_00d6f2cc;
    }
  }
  *(undefined8 *)(lVar4 + 0x2b0) = 0;
  uVar6 = 0;
  *(undefined4 *)(lVar4 + 0x2b8) = DAT_03214ce8;
LAB_00d6f2cc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




void FUN_00d6f5c4(undefined8 *param_1,long param_2,byte param_3)

{
  *(byte *)(param_1 + 1) = param_3 & 1;
  *param_1 = &PTR_FUN_0281e080;
  param_1[2] = param_2 + 0x28;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00d6f5f0(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float __x;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x10);
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      uVar4 = 0;
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x10);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
          }
        }
        uVar5 = FUN_00d508f8(uVar4);
        uVar4 = 0;
        if ((uVar5 & 1) != 0) {
          plVar2 = *(long **)(param_1 + 0x10);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x10) = 0;
              uVar4 = 0;
              *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
            }
          }
          uVar4 = FUN_00d51a94(uVar4);
          if ((int)uVar4 != 0) {
            plVar2 = *(long **)(param_1 + 0x10);
            uVar4 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
                uVar4 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x10) = 0;
                uVar4 = 0;
                *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
              }
            }
            uVar5 = FUN_00d522dc(uVar4,local_48);
            uVar4 = 0;
            if ((uVar5 & 1) != 0) {
              local_48[0] = local_48[0] - *param_2;
              local_40 = local_40 - param_2[2];
              *param_3 = local_48[0];
              __x = local_48[0] * local_48[0] + 0.0 + local_40 * local_40;
              param_3[2] = local_40;
              param_3[1] = 0.0;
              if (1e-08 <= __x) {
                fVar6 = SQRT(__x);
                if (NAN(fVar6)) {
                  fVar6 = sqrtf(__x);
                }
                *(ulong *)param_3 =
                     CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) / fVar6,
                              (float)*(undefined8 *)param_3 / fVar6);
                param_3[2] = param_3[2] / fVar6;
              }
              else {
                param_3[2] = DAT_03218f70;
                *(undefined8 *)param_3 = DAT_03218f68;
              }
              uVar4 = 1;
            }
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00d6f810(long param_1)

{
  long lVar1;
  
  DAT_031a9328 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9328 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9328 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6fbf4;
  *(code **)(lVar1 + 0xb8) = FUN_00d6fc48;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9328;
  *(undefined4 *)(lVar1 + 0xa8) = 0x78;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 400;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void thunk_FUN_00d6f874(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4
                       )

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_d00;
  undefined4 uStack_cf8;
  long alStack_cf0 [400];
  long lStack_70;
  
  lVar1 = tpidr_el0;
  lStack_70 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_01985d00(param_1,alStack_cf0,400,DAT_031a9328);
  if ((int)uVar3 != 0) {
    bVar2 = false;
    lVar7 = 0;
    uVar3 = uVar3 & 0xffffffff;
    plVar6 = alStack_cf0;
    do {
      lVar8 = *plVar6;
      if ((((lVar7 == 0) || (*(uint *)(lVar7 + 0x70) < *(uint *)(lVar8 + 0x70))) &&
          (plVar4 = *(long **)(lVar8 + 0x68), plVar4 != (long *)0x0)) &&
         (uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2,&uStack_d00), (uVar5 & 1) != 0)) {
        bVar2 = *(char *)(*(long *)(lVar8 + 0x68) + 8) != '\0';
        lVar7 = lVar8;
      }
      uVar3 = uVar3 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar3 != 0);
    if (lVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      *(undefined4 *)(param_3 + 1) = uStack_cf8;
      *param_3 = uStack_d00;
      *(bool *)param_4 = bVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d6f874(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_d00;
  undefined4 local_cf8;
  long local_cf0 [400];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_01985d00(param_1,local_cf0,400,DAT_031a9328);
  if ((int)uVar3 != 0) {
    bVar2 = false;
    lVar7 = 0;
    uVar3 = uVar3 & 0xffffffff;
    plVar6 = local_cf0;
    do {
      lVar8 = *plVar6;
      if ((((lVar7 == 0) || (*(uint *)(lVar7 + 0x70) < *(uint *)(lVar8 + 0x70))) &&
          (plVar4 = *(long **)(lVar8 + 0x68), plVar4 != (long *)0x0)) &&
         (uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2,&local_d00), (uVar5 & 1) != 0)) {
        bVar2 = *(char *)(*(long *)(lVar8 + 0x68) + 8) != '\0';
        lVar7 = lVar8;
      }
      uVar3 = uVar3 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar3 != 0);
    if (lVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      *(undefined4 *)(param_3 + 1) = local_cf8;
      *param_3 = local_d00;
      *(bool *)param_4 = bVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d6f988(long param_1,long param_2,byte param_3)

{
  undefined8 *puVar1;
  
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x3fU & 0xfffffffffffffff8);
  *(byte *)(puVar1 + 1) = param_3 & 1;
  *puVar1 = &PTR_FUN_0281e030;
  puVar1[2] = param_2 + 0x28;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 **)(param_1 + 0x68) = puVar1;
  return;
}




void FUN_00d6fa04(long param_1,long param_2,byte param_3)

{
  undefined8 *puVar1;
  
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x3fU & 0xfffffffffffffff8);
  *(byte *)(puVar1 + 1) = param_3 & 1;
  *puVar1 = &PTR_FUN_0281e058;
  puVar1[2] = param_2 + 0x28;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 **)(param_1 + 0x68) = puVar1;
  return;
}




void FUN_00d6fa80(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00d6fa8c(param_1 + 0x38,param_2,param_3 & 1);
  return;
}




ulong FUN_00d6fa8c(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x30))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar1 = param_1 + 7U & 0xfffffffffffffff8;
  FUN_00e5de20(uVar1,param_2,param_3 & 1);
  *(ulong *)(param_1 + 0x30) = uVar1;
  return uVar1;
}




void FUN_00d6faf0(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00d6fafc(param_1 + 0x38,param_2,param_3 & 1);
  return;
}




ulong FUN_00d6fafc(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x30))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar1 = param_1 + 7U & 0xfffffffffffffff8;
  FUN_00e5de8c(uVar1,param_2,param_3 & 1);
  *(ulong *)(param_1 + 0x30) = uVar1;
  return uVar1;
}




void FUN_00d6fb60(long param_1,long param_2,byte param_3)

{
  undefined8 *puVar1;
  
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x3fU & 0xfffffffffffffff8);
  *(byte *)(puVar1 + 1) = param_3 & 1;
  *puVar1 = &PTR_FUN_0281e080;
  puVar1[2] = param_2 + 0x28;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 **)(param_1 + 0x68) = puVar1;
  return;
}




void FUN_00d6fbdc(void)

{
  return;
}




void FUN_00d6fbe4(void)

{
  return;
}




void FUN_00d6fbec(void)

{
  return;
}




undefined8 * FUN_00d6fbf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_0281e0a8;
  param_1[5] = &PTR_FUN_0281e0d8;
  return param_1;
}




void FUN_00d6fc48(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6fc54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e108;
  param_1[5] = &PTR_FUN_0281e138;
  if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xd])();
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d6fcb4(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_0281e108;
  *param_1 = &PTR_FUN_0281e138;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_00d6fd0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_0281e108;
  *param_1 = &PTR_FUN_0281e138;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




long FUN_00d6fd6c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d6fd74(long param_1)

{
  return param_1 + -0x28;
}




void FUN_00d6fd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e108;
  param_1[5] = &PTR_FUN_0281e138;
  if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xd])();
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d6fdd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e108;
  param_1[5] = &PTR_FUN_0281e138;
  if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xd])();
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d6fe34(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_0281e108;
  *param_1 = &PTR_FUN_0281e138;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_00d6fe8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_0281e108;
  *param_1 = &PTR_FUN_0281e138;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00d6feec(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  DAT_0312edf0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312edf0 + 1;
  lVar2 = param_1 + (ulong)DAT_0312edf0 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d70914;
  *(code **)(lVar2 + 0xb8) = FUN_00d70938;
  *(uint *)(lVar2 + 0xa4) = DAT_0312edf0;
  *(undefined4 *)(lVar2 + 0xa8) = 0x220;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_01986780(param_1,4,thunk_FUN_00d7050c,0);
  }
  FUN_019867cc(param_1,0x9f730acb,FUN_00d6ffbc,0);
  FUN_019867cc(param_1,0xb7940b9d,FUN_00d700b0,0);
  return;
}

