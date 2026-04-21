// functions/00a1e — 47 functions
#include "libGameKindred.h"




void FUN_00a1e044(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = FUN_00cac6e4(param_2);
    if (lVar1 != 0) {
      plVar2 = *(long **)(param_1 + 0x60);
      lVar3 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x60) = 0;
          lVar3 = 0;
          *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
        }
      }
      if (lVar3 == lVar1) {
        FUN_00a1e110(param_1);
      }
      else {
        uVar4 = FUN_00a15720(*(undefined8 *)(param_1 + 0x38));
        uVar5 = FUN_00da1690(uVar4,lVar1,1);
        if ((uVar5 & 1) != 0) {
          FUN_00a1e1f8(param_1,lVar1);
          FUN_00a1d9c0(param_1,lVar1);
        }
      }
    }
    uVar4 = FUN_00a1f2bc();
    FUN_00a1ab9c(uVar4,0);
    return;
  }
  return;
}




void FUN_00a1e110(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar4 = FUN_00a1f2bc();
        FUN_00a1a8ec(uVar4,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar3 = FUN_00a13ecc();
          plVar2 = *(long **)(param_1 + 0x60);
          if (plVar2 == (long *)0x0) {
            lVar5 = 0;
          }
          else if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
            lVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
          }
          else {
            *(undefined8 *)(param_1 + 0x60) = 0;
            lVar5 = 0;
            *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
          }
          if (lVar3 == lVar5) {
            FUN_00a1560c(*(undefined8 *)(param_1 + 0x38));
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
    }
  }
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}




void FUN_00a1e1f8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_00a1e110();
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x60) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar2 = FUN_00a1f2bc();
  FUN_00a1a9a0(uVar2,param_2);
  FUN_00e70314(param_1 + 0x70);
  return;
}




void FUN_00a1e23c(long param_1,undefined8 param_2)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  lVar2 = FUN_00a15720();
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x1e0) + 1.0) *
          (*(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0));
  if (DAT_031310a0 <= fVar4) {
    fVar4 = DAT_031310a0;
  }
  fVar1 = DAT_03130fe0;
  if (DAT_03130fe0 <= fVar4) {
    fVar1 = fVar4;
  }
  FUN_00a156c8(*(undefined8 *)(param_1 + 0x38));
  FUN_00a1c68c(fVar1 + 0.5,fVar1 + 0.5 + 0.0,param_2,lVar2,1,4);
  return;
}




undefined8 FUN_00a1e31c(undefined8 param_1)

{
  FUN_00a1d000();
  return param_1;
}




void FUN_00a1e340(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a1e348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1e34c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_00a19b3c(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_027c8780;
  param_1[5] = &PTR_FUN_027c87c8;
  uVar1 = _DAT_03218ef8;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[9] = uVar1;
  return;
}




void FUN_00a1e3ac(long param_1)

{
  FUN_00a19b50(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a1e3d4(long param_1)

{
  FUN_00a19b50();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00a1e3f8(void *param_1)

{
  FUN_00a19b50((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a1e428(long param_1)

{
  FUN_00a19b50();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00a1e454(long param_1)

{
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}




void FUN_00a1e45c(long param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}




void FUN_00a1e464(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_00a1e474(param_1,param_3);
    return;
  }
  return;
}




void FUN_00a1e474(float param_1,long param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_2 + 0x40) != 0) && (lVar2 = FUN_009b86e8(), lVar2 != 0)) {
    if (*(char *)(param_2 + 0x5c) == '\0') {
      *(undefined1 *)(param_2 + 0x5c) = 1;
      *(ulong *)(param_2 + 0x48) =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) * param_1,
                    (float)*(undefined8 *)param_3 * param_1);
      lVar3 = FUN_009b86e8(*(undefined8 *)(param_2 + 0x40));
      if (lVar3 != 0) {
        uVar4 = FUN_009b86e8(*(undefined8 *)(param_2 + 0x40));
        FUN_00d55794(uVar4,param_2 + 0x50,0);
        FUN_009b81dc(*(undefined8 *)(param_2 + 0x40),1);
        uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x70);
        *(ulong *)(param_2 + 0x50) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                      (float)((ulong)uVar4 >> 0x20),
                      (float)*(undefined8 *)(param_2 + 0x50) + (float)uVar4);
        *(float *)(param_2 + 0x58) =
             *(float *)(param_2 + 0x58) + *(float *)(*(long *)(param_2 + 0x40) + 0x78);
      }
    }
    fVar8 = *(float *)(param_2 + 0x48);
    local_50 = *param_3 * param_1 - fVar8;
    fStack_4c = param_3[1] * param_1 - *(float *)(param_2 + 0x4c);
    fVar6 = fStack_4c;
    fVar5 = (float)FUN_00cac608(&local_50);
    fVar7 = param_1 * 175.0 + (1.0 - param_1) * 80.0;
    FUN_00d55794(lVar2,&local_70,0);
    local_80 = CONCAT44(fStack_6c +
                        (fVar6 * fVar7 -
                        (fStack_6c - (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20))),
                        local_70 +
                        (fVar5 * fVar7 - (local_70 - (float)*(undefined8 *)(param_2 + 0x50))));
    local_78 = local_68 + (fVar7 * fVar8 - (local_68 - *(float *)(param_2 + 0x58)));
    FUN_00cac9c4(&local_80);
    local_60 = (float)local_80 - local_70;
    local_58 = local_78 - local_68;
    local_5c = *(undefined4 *)(*(long *)(param_2 + 0x40) + 0x74);
    FUN_009b8248(*(long *)(param_2 + 0x40),&local_60);
    if (*(long *)(param_2 + 0x38) != 0) {
      FUN_00a14b8c(*(long *)(param_2 + 0x38),1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1e63c(long param_1,ulong param_2,undefined8 param_3)

{
  if ((param_2 & 1) != 0) {
    FUN_00a1e474(param_1 + -0x28,param_3);
    return;
  }
  return;
}




void FUN_00a1e650(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (lVar1 != 0) {
    FUN_009b8248(lVar1,lVar1 + 0x70);
    FUN_009b81dc(*(undefined8 *)(param_1 + 0x40),1);
    FUN_009b81e4(*(undefined8 *)(param_1 + 0x40),2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00a14b8c(*(long *)(param_1 + 0x38),0);
    return;
  }
  return;
}




void FUN_00a1e6b0(long param_1)

{
  FUN_00a1e650(param_1 + -0x28,0);
  return;
}




void FUN_00a1e6bc(long param_1)

{
  long lVar1;
  
  DAT_03130de0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03130de0 + 1;
  lVar1 = param_1 + (ulong)DAT_03130de0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a1e724;
  *(code **)(lVar1 + 0xb8) = FUN_00a1e788;
  *(uint *)(lVar1 + 0xa4) = DAT_03130de0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x60;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00a1e71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00a1e724(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_00a19b3c(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_027c8780;
  param_1[5] = &PTR_FUN_027c87c8;
  uVar1 = _DAT_03218ef8;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[9] = uVar1;
  return param_1;
}




void FUN_00a1e788(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a1e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1e794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_00a19b3c(param_1 + 5);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c8808;
  param_1[5] = &PTR_FUN_027c8858;
  param_1[8] = _DAT_03218ef8;
  FUN_00e70314(param_1 + 9);
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_00e70314(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_00e70314(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}




void FUN_00a1e814(long param_1)

{
  FUN_00a19b50(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a1e83c(long param_1)

{
  FUN_00a19b50();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00a1e860(void *param_1)

{
  FUN_00a19b50((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a1e890(long param_1)

{
  FUN_00a19b50();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00a1e8bc(long param_1)

{
  long lVar1;
  
  DAT_03130dc4 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03130dc4 + 1;
  lVar1 = param_1 + (ulong)DAT_03130dc4 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a1f244;
  *(code **)(lVar1 + 0xb8) = FUN_00a1f268;
  *(uint *)(lVar1 + 0xa4) = DAT_03130dc4;
  *(undefined4 *)(lVar1 + 0xa8) = 0xa0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,thunk_FUN_00a1eb88,0);
  FUN_019867cc(param_1,0x6d6a08d2,FUN_00a1e964,0);
  return;
}




void thunk_FUN_00a1eb88(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  timespec tStack_48;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_00a1ec68;
  uVar3 = FUN_00a15720();
  if (*(char *)(param_1 + 0x5a) != '\0') {
    uVar4 = FUN_00d58810(uVar3);
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x88) == '\0')) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      FUN_00e70314(param_1 + 0x78);
    }
    uVar3 = FUN_00d58614(uVar3);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x88) == '\0') goto LAB_00a1ec68;
      uVar2 = clock_gettime(1,&tStack_48);
      uVar3 = (ulong)uVar2;
      lVar6 = tStack_48.tv_nsec - *(long *)(param_1 + 0x80);
      lVar5 = tStack_48.tv_sec - *(long *)(param_1 + 0x78);
      if (lVar6 < 0) {
        lVar5 = lVar5 + -1;
        lVar6 = (tStack_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x80);
      }
      if ((double)(lVar6 + lVar5 * 1000000000) * 1e-09 <= 0.07999999821186066) goto LAB_00a1ec68;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x5a) = 0x100;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
LAB_00a1ec68:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a1e964(long param_1)

{
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}




void FUN_00a1e99c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00a1e9a4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x70) = param_1;
  FUN_00e70314(param_2 + 0x60);
  return;
}




void FUN_00a1e9b4(long param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}




undefined1 FUN_00a1e9bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}




void FUN_00a1e9c4(long param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x1000000;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  return;
}




void FUN_00a1e9e0(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x1000000;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x72) = 1;
  return;
}




void FUN_00a1e9fc(undefined4 param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    FUN_00a1eca0(param_2,param_4);
    *(undefined1 *)(param_2 + 0x59) = 1;
    *(undefined1 *)(param_2 + 0x99) = 1;
  }
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 0x94) = param_1;
  *(undefined8 *)(param_2 + 0x8c) = uVar1;
  return;
}




void FUN_00a1ea50(long param_1)

{
  FUN_00a1eca0();
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined1 *)(param_1 + 0x99) = 1;
  return;
}




void FUN_00a1ea7c(undefined4 param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    FUN_00a1eca0(param_2 + -0x28,param_4);
    *(undefined1 *)(param_2 + 0x31) = 1;
    *(undefined1 *)(param_2 + 0x71) = 1;
  }
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 0x6c) = param_1;
  *(undefined8 *)(param_2 + 100) = uVar1;
  return;
}




void FUN_00a1ead0(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00a1eb10();
  if (((uVar1 & 1) != 0) && ((param_2 & 1) != 0)) {
    FUN_00a146bc(*(undefined8 *)(param_1 + 0x38),1);
  }
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  return;
}




bool FUN_00a1eb10(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_00a15720(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (bVar2 = false, 1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    bVar2 = (*(byte *)(lVar3 + 0x2f8) & 2) == 0;
  }
  return bVar2;
}




void FUN_00a1eb68(long param_1,uint param_2)

{
  FUN_00a1ead0(param_1 + -0x28,param_2 & 1);
  return;
}




void FUN_00a1eb74(long param_1)

{
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  return;
}




void FUN_00a1eb88(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_00a1ec68;
  uVar3 = FUN_00a15720();
  if (*(char *)(param_1 + 0x5a) != '\0') {
    uVar4 = FUN_00d58810(uVar3);
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x88) == '\0')) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      FUN_00e70314(param_1 + 0x78);
    }
    uVar3 = FUN_00d58614(uVar3);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x88) == '\0') goto LAB_00a1ec68;
      uVar2 = clock_gettime(1,&local_48);
      uVar3 = (ulong)uVar2;
      lVar6 = local_48.tv_nsec - *(long *)(param_1 + 0x80);
      lVar5 = local_48.tv_sec - *(long *)(param_1 + 0x78);
      if (lVar6 < 0) {
        lVar5 = lVar5 + -1;
        lVar6 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x80);
      }
      if ((double)(lVar6 + lVar5 * 1000000000) * 1e-09 <= 0.07999999821186066) goto LAB_00a1ec68;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x5a) = 0x100;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
LAB_00a1ec68:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a1ec90(long param_1)

{
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}




void FUN_00a1eca0(long param_1,float *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_d0;
  float local_c8;
  undefined1 local_c0 [8];
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  timespec local_a0 [2];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,local_a0);
  lVar7 = local_a0[0].tv_sec - *(long *)(param_1 + 0x48);
  lVar8 = local_a0[0].tv_nsec - *(long *)(param_1 + 0x50);
  if (lVar8 < 0) {
    lVar7 = lVar7 + -1;
    lVar8 = (local_a0[0].tv_nsec + 1000000000) - *(long *)(param_1 + 0x50);
  }
  if ((0.1 <= ABS(*(float *)(param_1 + 0x40))) ||
     (bVar2 = false, 0.1 <= ABS(*(float *)(param_1 + 0x44)))) {
    bVar2 = *(float *)(param_1 + 0x40) * *param_2 + *(float *)(param_1 + 0x44) * param_2[1] < 0.866;
  }
  uVar3 = FUN_00a15694(*(undefined8 *)(param_1 + 0x38));
  clock_gettime(1,local_a0);
  lVar6 = local_a0[0].tv_nsec - *(long *)(param_1 + 0x68);
  lVar9 = local_a0[0].tv_sec - *(long *)(param_1 + 0x60);
  if (lVar6 < 0) {
    lVar9 = lVar9 + -1;
    lVar6 = (local_a0[0].tv_nsec + 1000000000) - *(long *)(param_1 + 0x68);
  }
  fVar14 = *(float *)(param_1 + 0x70);
  uVar4 = FUN_00a1eb10(param_1);
  if ((uVar4 & 1) != 0) {
    uVar13 = 0x3fd0000000000000;
    dVar12 = (double)fVar14;
    if ((((0.25 <= (double)(lVar8 + lVar7 * 1000000000) * 1e-09 || bVar2) ||
         (((uVar3 ^ 1) & 1) != 0)) || (*(char *)(param_1 + 0x5b) != '\0')) &&
       ((dVar12 < (double)(lVar6 + lVar9 * 1000000000) * 1e-09 && (*(long *)(param_1 + 0x38) != 0)))
       ) {
      uVar5 = FUN_00a15720();
      uVar10 = FUN_00cac608(param_2);
      local_b0 = (float)uVar10;
      fStack_ac = SUB84(dVar12,0);
      local_a8 = (float)uVar13;
      fVar14 = (float)FUN_00d9ee8c(uVar5);
      fVar14 = fVar14 * 0.25 * 1.5;
      if (fVar14 <= 2.0) {
        fVar14 = 2.0;
      }
      uVar11 = FUN_00a1ef58(uVar10,dVar12,uVar13,fVar14,uVar5,3);
      if ((float)uVar11 < fVar14) {
        uVar11 = FUN_00a1f068(uVar11,fVar14,local_a0,uVar5,&local_b0);
      }
      fVar14 = (float)uVar11;
      if (0.0 < fVar14) {
        FUN_00d55794(uVar5,local_c0,0);
        local_c8 = (float)uVar13 * fVar14 + local_b8;
        local_d0 = CONCAT44(SUB84(dVar12,0) * fVar14 + local_c0._4_4_,
                            (float)uVar10 * fVar14 + local_c0._0_4_);
        if ((*(char *)(param_1 + 0x58) == '\0') || (*(char *)(param_1 + 0x5a) == '\0')) {
          lVar7 = *(long *)(param_1 + 0x38);
          FUN_00a19bec(0x3f000000,local_a0,&local_d0,*(char *)(param_1 + 0x58) != '\0');
          FUN_00a1a334(lVar7 + 0x260,local_a0);
          *(undefined1 *)(param_1 + 0x5b) = 0;
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)param_2;
          FUN_00e70314((long *)(param_1 + 0x48));
          *(undefined1 *)(param_1 + 0x58) = 1;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16]
FUN_00a1ef58(float param_1,float param_2,float param_3,undefined1 param_4 [16],undefined8 param_5,
            int param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar6;
  undefined1 auVar5 [16];
  float fVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  uVar9 = param_4._8_8_;
  uVar8 = param_4._0_8_;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d55794(param_5,local_58,0);
  iVar1 = param_6;
  if (param_6 != 0) {
    do {
      iVar1 = iVar1 + -1;
      uVar8 = (ulong)(uint)((float)uVar8 * 0.5);
      uVar9 = 0;
    } while (iVar1 != 0);
    if (param_6 < 0) {
      uVar4 = 0;
      uVar6 = 0;
      goto LAB_00a1f034;
    }
  }
  param_6 = param_6 + 1;
  uVar4 = 0;
  uVar6 = 0;
  do {
    fVar7 = (float)uVar8;
    local_68 = CONCAT44(param_2 * fVar7 + local_58._4_4_,param_1 * fVar7 + local_58._0_4_);
    local_60 = param_3 * fVar7 + local_50;
    uVar3 = FUN_00a1f1c4(param_5,&local_68);
    if ((uVar3 & 1) == 0) break;
    param_6 = param_6 + -1;
    uVar4 = uVar8;
    uVar6 = uVar9;
    uVar8 = (ulong)(uint)(fVar7 + fVar7);
    uVar9 = 0;
  } while (0 < param_6);
LAB_00a1f034:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar4;
  return auVar5;
}

