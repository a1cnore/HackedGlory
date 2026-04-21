// functions/00a1d — 27 functions
#include "libGameKindred.h"




void FUN_00a1d000(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_00a19b3c(param_1 + 5);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_027c86f8;
  param_1[5] = &PTR_FUN_027c8740;
  *(undefined4 *)(param_1 + 0xd) = DAT_03214ce8;
  FUN_00e70314(param_1 + 0xe);
  FUN_00e70314(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,"*JoystickBasicAttackRingIndicator*");
  param_1[10] = uVar1;
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,"*JoystickBasicAttackReticle*");
  param_1[0xb] = uVar1;
  return;
}




void FUN_00a1d0a4(long param_1)

{
  FUN_00a19b50(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a1d0cc(long param_1)

{
  FUN_00a19b50();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00a1d0f0(void *param_1)

{
  FUN_00a19b50((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a1d120(long param_1)

{
  FUN_00a19b50();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00a1d14c(long param_1)

{
  long lVar1;
  
  DAT_03130dd0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03130dd0 + 1;
  lVar1 = param_1 + (ulong)DAT_03130dd0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a1e31c;
  *(code **)(lVar1 + 0xb8) = FUN_00a1e340;
  *(uint *)(lVar1 + 0xa4) = DAT_03130dd0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x98;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,thunk_FUN_00a1de00,0);
  FUN_019867cc(param_1,0xdc302c4,FUN_00a1d210,0);
  FUN_019867cc(param_1,0xedbb0d48,FUN_00a1d23c,0);
  return;
}




void thunk_FUN_00a1de00(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  timespec tStack_48;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        uVar5 = FUN_00a15720(*(undefined8 *)(param_1 + 0x38));
        lVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(*(long **)(param_1 + 0x60));
        if ((*(byte *)(lVar4 + 0x2f9) & 1) == 0) {
          plVar3 = *(long **)(param_1 + 0x60);
          lVar4 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
              lVar4 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x60) = 0;
              lVar4 = 0;
              *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
            }
          }
          uVar2 = *(ushort *)(lVar4 + 0x88) & 0x1f;
          if ((uVar2 == 0x1f) || (1 < *(ushort *)(lVar4 + (ulong)uVar2 * 0x38 + 0x90) - 3)) {
            plVar3 = *(long **)(param_1 + 0x60);
            if (plVar3 == (long *)0x0) {
              uVar6 = 0;
            }
            else if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
              uVar6 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x60) = 0;
              uVar6 = 0;
              *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
            }
            uVar7 = FUN_00da1690(uVar5,uVar6,1);
            if ((uVar7 & 1) != 0) {
              plVar3 = *(long **)(param_1 + 0x60);
              if (plVar3 == (long *)0x0) {
                uVar6 = 0;
              }
              else if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
                uVar6 = (**(code **)(*plVar3 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x60) = 0;
                uVar6 = 0;
                *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
              }
              fVar9 = (float)FUN_00d9e0c4(uVar5,uVar6);
              if (fVar9 <= 144.0) {
                uVar2 = clock_gettime(1,&tStack_48);
                uVar7 = (ulong)uVar2;
                lVar8 = tStack_48.tv_nsec - *(long *)(param_1 + 0x78);
                lVar4 = tStack_48.tv_sec - *(long *)(param_1 + 0x70);
                if (lVar8 < 0) {
                  lVar4 = lVar4 + -1;
                  lVar8 = (tStack_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x78);
                }
                if ((double)(lVar8 + lVar4 * 1000000000) * 1e-09 <= 7.0) goto LAB_00a1deb8;
              }
            }
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
    }
  }
  uVar7 = FUN_00a1e110(param_1);
LAB_00a1deb8:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}




void FUN_00a1d210(void)

{
  FUN_00a1db5c();
  return;
}




void FUN_00a1d318(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00a1d320(long param_1)

{
  ulong uVar1;
  
  FUN_00a1d364();
  if ((*(int *)(param_1 + 0x94) == 0) && (uVar1 = FUN_00a1d478(param_1), (uVar1 & 1) != 0)) {
    FUN_00e70314(param_1 + 0x80);
  }
  *(undefined2 *)(param_1 + 0x90) = 1;
  return;
}




void FUN_00a1d364(long param_1)

{
  long lVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar3 = FUN_00a15720();
    lVar4 = FUN_00a15720(*(undefined8 *)(param_1 + 0x38));
    lVar4 = *(long *)(lVar4 + 0x40);
    fVar6 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
            (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0))
    ;
    if (DAT_031310a0 <= fVar6) {
      fVar6 = DAT_031310a0;
    }
    fVar2 = DAT_03130fe0;
    if (DAT_03130fe0 <= fVar6) {
      fVar2 = fVar6;
    }
    uVar5 = FUN_01985d44(param_1,DAT_0312eaf0);
    local_48 = lVar3 + 0x28;
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    local_40 = *(undefined4 *)(lVar3 + 0x30);
    FUN_009d8b0c(fVar2,uVar5,&local_48,*(undefined8 *)(*(long *)(param_1 + 0x50) + 8));
    FUN_009d8d64(*(undefined8 *)(param_1 + 0x40));
    FUN_009d8bc4(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00a1d478(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_00a1d544;
  uVar3 = FUN_00a15720();
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
LAB_00a1d514:
    FUN_00d4d37c(auStack_60,uVar3);
    lVar4 = FUN_00a1e23c(param_1,auStack_60);
  }
  else {
    if (*(int *)(param_1 + 0x68) != (int)plVar5[1]) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
      goto LAB_00a1d514;
    }
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (lVar4 == 0) goto LAB_00a1d514;
    plVar5 = *(long **)(param_1 + 0x60);
    uVar2 = 0;
    if (plVar5 == (long *)0x0) goto LAB_00a1d544;
    if (*(int *)(param_1 + 0x68) != (int)plVar5[1]) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
      goto LAB_00a1d544;
    }
    lVar4 = (**(code **)(*plVar5 + 0x10))();
  }
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a1d9c0(param_1,lVar4);
  }
LAB_00a1d544:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1d58c(long param_1)

{
  FUN_00a1d320(param_1 + -0x28);
  return;
}




void FUN_00a1d594(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((param_3 & 1) != 0) {
    if (*(char *)(param_2 + 0x91) == '\0') {
      FUN_00a1d608(param_2);
      lVar1 = FUN_00a1f274();
      if (lVar1 != 0) {
        FUN_00a1f274();
        FUN_00a1e9b4();
      }
    }
    *(undefined1 *)(param_2 + 0x91) = 1;
    FUN_00a1d6dc(param_1,param_2,param_4);
    return;
  }
  return;
}




void FUN_00a1d608(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar4 = FUN_00a15720();
    lVar4 = *(long *)(lVar4 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    iVar2 = FUN_00d5359c(lVar4);
    if (iVar2 != 0) {
      uVar6 = 0;
      do {
        uVar5 = FUN_00d54528(lVar4,uVar6);
        if ((uVar5 & 1) != 0) {
          FUN_00984e34(auStack_58,uVar6,1);
          FUN_00ce20fc(auStack_58);
        }
        uVar6 = uVar6 + 1;
        uVar3 = FUN_00d5359c(lVar4);
      } while (uVar6 < uVar3);
    }
    FUN_00a1560c(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1d6dc(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_b0;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined1 auStack_90 [40];
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x38) != 0) {
    lVar2 = FUN_00a15720();
    if (*(long *)(param_2 + 0x48) == 0) {
      uVar3 = FUN_01985d44(param_2,DAT_0312eaf0);
      local_68 = lVar2 + 0x28;
      *(undefined8 *)(param_2 + 0x48) = uVar3;
      local_60 = *(undefined4 *)(lVar2 + 0x30);
      FUN_009d8b0c(0x3f800000,uVar3,&local_68,*(undefined8 *)(*(long *)(param_2 + 0x58) + 8));
      FUN_009d8bc4(*(undefined8 *)(param_2 + 0x48));
    }
    lVar4 = *(long *)(lVar2 + 0x40);
    fVar5 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
            (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0))
    ;
    if (DAT_031310a0 <= fVar5) {
      fVar5 = DAT_031310a0;
    }
    fVar6 = DAT_03130fe0;
    if (DAT_03130fe0 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar5 = fVar6 + 0.0;
    if (fVar6 + 0.0 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar6 = DAT_031310a0;
    fStack_9c = param_1;
    local_a0 = (float)FUN_00a1c660(fVar5,param_3);
    local_98 = fVar6;
    FUN_009d8ba8(*(undefined8 *)(param_2 + 0x48),&local_a0);
    FUN_00d55794(lVar2,&local_b0,0);
    local_b0 = CONCAT44((float)((ulong)local_b0 >> 0x20) + fStack_9c,(float)local_b0 + local_a0);
    local_a8 = local_a8 + local_98;
    FUN_00d4d37c(auStack_90,lVar2);
    lVar4 = *(long *)(lVar2 + 0x40);
    fVar5 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
            (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0))
    ;
    if (DAT_031310a0 <= fVar5) {
      fVar5 = DAT_031310a0;
    }
    fVar6 = DAT_03130fe0;
    if (DAT_03130fe0 <= fVar5) {
      fVar6 = fVar5;
    }
    lVar2 = FUN_00a1c324(0x40900000,fVar6,auStack_90,&local_b0,lVar2,0);
    if (lVar2 == 0) {
      FUN_00a1e110(param_2);
    }
    else {
      FUN_00a1e1f8(param_2,lVar2);
      uVar3 = FUN_00a1f2bc();
      FUN_00a1aa40(uVar3,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1d8d8(long param_1,uint param_2)

{
  FUN_00a1d594(param_1 + -0x28,param_2 & 1);
  return;
}




void FUN_00a1d8e4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x91) == '\0') {
    if (*(int *)(param_1 + 0x94) == 1) {
      FUN_00a1d478(param_1);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x60);
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x68) == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
        if (lVar2 != 0) {
          plVar1 = *(long **)(param_1 + 0x60);
          if (plVar1 == (long *)0x0) {
            uVar3 = 0;
          }
          else if (*(int *)(param_1 + 0x68) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x60) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
          }
          FUN_00a1d9c0(param_1,uVar3);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
      }
    }
  }
  FUN_00a1db5c(param_1);
  *(undefined2 *)(param_1 + 0x90) = 0;
  return;
}




undefined4 FUN_00a1d9c0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = FUN_00a15720();
    fVar9 = DAT_03130fe0;
    uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
    if (((uVar1 == 0x1f) || (uVar6 = 0, 1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
       (uVar6 = 0, (*(byte *)(lVar2 + 0x2f9) >> 5 & 1) == 0)) {
      lVar5 = *(long *)(lVar2 + 0x40);
      fVar7 = (*(float *)(lVar5 + 0x1e0) + 1.0) *
              (*(float *)(lVar5 + 0x78) +
              *(float *)(lVar5 + 300) * (*(float *)(lVar5 + 0x294) + 1.0));
      if (DAT_031310a0 <= fVar7) {
        fVar7 = DAT_031310a0;
      }
      uVar3 = FUN_00a156c8(*(undefined8 *)(param_1 + 0x38));
      if ((uVar3 & 1) != 0) {
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
        fVar7 = (float)FUN_00d9dc10(lVar2,param_2);
        fVar8 = *(float *)(*(long *)(param_2 + 0x38) + 100);
        fVar7 = fVar7 - (*(float *)(*(long *)(param_2 + 0x38) + 0x68) *
                        (fVar8 + *(float *)(param_2 + 0x2e8))) / fVar8;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if ((fVar9 < fVar7) && (lVar2 = FUN_00a1f274(), lVar2 != 0)) {
          FUN_00a1f274();
          FUN_00a1e9a4(0x3e99999a);
        }
      }
      uVar6 = 1;
      FUN_00a153f0(*(undefined8 *)(param_1 + 0x38),param_2,1,1);
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(param_1 + 0x68) == (int)plVar4[1]) {
          lVar2 = (**(code **)(*plVar4 + 0x10))();
          if (lVar2 != 0) {
            FUN_00e70314(param_1 + 0x70);
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
        }
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}




void FUN_00a1db5c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) goto LAB_00a1dbd4;
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
    }
  }
  FUN_00a1e110(param_1);
LAB_00a1dbd4:
  uVar3 = FUN_00a1f2bc();
  FUN_00a1ab9c(uVar3,0);
  return;
}




void FUN_00a1dbe8(long param_1)

{
  FUN_00a1d8e4(param_1 + -0x28,0);
  return;
}




void FUN_00a1dbf4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  FUN_00a1d364();
  if ((*(int *)(param_1 + 0x94) == 0) && (uVar1 = FUN_00a1dc40(param_1,param_2), (uVar1 & 1) != 0))
  {
    FUN_00e70314(param_1 + 0x80);
    return;
  }
  return;
}




uint FUN_00a1dc40(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar3 = FUN_00a15720();
    FUN_00d4d37c(auStack_60,uVar3);
    if (param_2 == 1) {
      FUN_00d4d3a8(auStack_60,0x1000);
    }
    else if (param_2 == 0) {
      FUN_00d4d3b8(auStack_60,0x1001);
    }
    lVar4 = FUN_00a1e23c(param_1,auStack_60);
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar2 = FUN_00a1d9c0(param_1,lVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1dcf0(ulong param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  timespec local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = param_1;
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar2 = clock_gettime(1,&local_58);
    uVar3 = (ulong)uVar2;
    lVar4 = local_58.tv_sec - *(long *)(param_1 + 0x80);
    lVar5 = local_58.tv_nsec - *(long *)(param_1 + 0x88);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (local_58.tv_nsec + 1000000000) - *(long *)(param_1 + 0x88);
    }
    if ((0.10000000149011612 < (double)(lVar5 + lVar4 * 1000000000) * 1e-09) &&
       (uVar3 = FUN_00a1dc40(param_1,param_2), (uVar3 & 1) != 0)) {
      uVar3 = FUN_00e70314((long *)(param_1 + 0x80));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a1ddcc(long param_1)

{
  if (*(int *)(param_1 + 0x94) == 1) {
    FUN_00a1dc40(param_1);
  }
  FUN_00a1db5c(param_1);
  return;
}




void FUN_00a1de00(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        uVar5 = FUN_00a15720(*(undefined8 *)(param_1 + 0x38));
        lVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(*(long **)(param_1 + 0x60));
        if ((*(byte *)(lVar4 + 0x2f9) & 1) == 0) {
          plVar3 = *(long **)(param_1 + 0x60);
          lVar4 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
              lVar4 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x60) = 0;
              lVar4 = 0;
              *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
            }
          }
          uVar2 = *(ushort *)(lVar4 + 0x88) & 0x1f;
          if ((uVar2 == 0x1f) || (1 < *(ushort *)(lVar4 + (ulong)uVar2 * 0x38 + 0x90) - 3)) {
            plVar3 = *(long **)(param_1 + 0x60);
            if (plVar3 == (long *)0x0) {
              uVar6 = 0;
            }
            else if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
              uVar6 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x60) = 0;
              uVar6 = 0;
              *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
            }
            uVar7 = FUN_00da1690(uVar5,uVar6,1);
            if ((uVar7 & 1) != 0) {
              plVar3 = *(long **)(param_1 + 0x60);
              if (plVar3 == (long *)0x0) {
                uVar6 = 0;
              }
              else if (*(int *)(param_1 + 0x68) == (int)plVar3[1]) {
                uVar6 = (**(code **)(*plVar3 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x60) = 0;
                uVar6 = 0;
                *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
              }
              fVar9 = (float)FUN_00d9e0c4(uVar5,uVar6);
              if (fVar9 <= 144.0) {
                uVar2 = clock_gettime(1,&local_48);
                uVar7 = (ulong)uVar2;
                lVar8 = local_48.tv_nsec - *(long *)(param_1 + 0x78);
                lVar4 = local_48.tv_sec - *(long *)(param_1 + 0x70);
                if (lVar8 < 0) {
                  lVar4 = lVar4 + -1;
                  lVar8 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x78);
                }
                if ((double)(lVar8 + lVar4 * 1000000000) * 1e-09 <= 7.0) goto LAB_00a1deb8;
              }
            }
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
    }
  }
  uVar7 = FUN_00a1e110(param_1);
LAB_00a1deb8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}




void thunk_FUN_00a1db5c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) goto LAB_00a1dbd4;
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
    }
  }
  FUN_00a1e110(param_1);
LAB_00a1dbd4:
  uVar3 = FUN_00a1f2bc();
  FUN_00a1ab9c(uVar3,0);
  return;
}

