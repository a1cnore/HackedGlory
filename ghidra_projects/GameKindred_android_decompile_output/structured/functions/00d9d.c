// functions/00d9d — 36 functions
#include "libGameKindred.h"




void FUN_00d9d004(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_6e8 [96];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6e8);
  (**(code **)(param_1 + 0x10))(param_2,auStack_6e8);
  uVar3 = FUN_00d5048c(param_2);
  uVar2 = FUN_00d9cdb0(param_1 + 0x18,auStack_6e8,uVar3,auStack_688);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    puVar5 = auStack_688;
    do {
      FUN_00d518f4(param_2,*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9d0b4(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0281f740;
  param_1[2] = 0;
  return;
}




void FUN_00d9d0e8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9d0f0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_98 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d51964(param_2);
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    do {
      uVar3 = FUN_00d51954(param_2,uVar6);
      uVar4 = (**(code **)(param_1 + 0x10))(param_2,uVar3,uVar6,uVar2);
      if ((uVar4 & 1) != 0) {
        local_98[(int)uVar7] = uVar3;
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  if ((uVar7 != uVar2) && (FUN_00d51974(param_2), 0 < (int)uVar7)) {
    uVar4 = (ulong)uVar7;
    puVar5 = local_98;
    do {
      FUN_00d518f4(param_2,*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d9d1ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281f7a0;
  return;
}




void FUN_00d9d204(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9d20c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_470 [128];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar1 = param_2 + 8;
  uVar3 = FUN_00d9d984(lVar1);
  if ((int)uVar3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    do {
      uVar4 = FUN_00d9d9a0(lVar1,uVar7);
      uVar5 = (**(code **)(param_1 + 0x10))(param_2,uVar4,uVar7,uVar3);
      if ((uVar5 & 1) != 0) {
        local_470[(int)uVar8] = uVar4;
        uVar8 = uVar8 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  if ((uVar8 != uVar3) && (FUN_00d9da1c(lVar1), 0 < (int)uVar8)) {
    uVar5 = (ulong)uVar8;
    puVar6 = local_470;
    do {
      FUN_00d9d98c(lVar1,*puVar6);
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d9d314(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00d9cae8(param_1 + 1);
  param_1[8] = 0;
  return;
}




void FUN_00d9d33c(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  return;
}




void FUN_00d9d344(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




long FUN_00d9d34c(long param_1)

{
  return param_1 + 4;
}




void FUN_00d9d354(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,uint param_6,uint param_7,uint param_8)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 local_788;
  undefined4 local_780;
  undefined8 local_77c;
  undefined4 local_774;
  undefined1 auStack_770 [120];
  undefined1 auStack_6f8 [96];
  undefined8 local_698 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_780 = *(undefined4 *)(param_3 + 1);
  local_788 = *param_3;
  local_77c = *param_4;
  local_774 = *(undefined4 *)(param_4 + 1);
  FUN_00d4d9e8(auStack_6f8);
  if (param_5 != 0) {
    FUN_00d4daf4(auStack_6f8,param_6 & 1,param_7 & 1,param_8 & 1,param_5);
  }
  FUN_00d4dabc(auStack_6f8,param_1[8]);
  FUN_00d4e61c(auStack_770,auStack_6f8);
  FUN_00d4e838(*param_1,auStack_770,&local_788);
  uVar2 = FUN_00d9e840(auStack_770,local_698,200,0);
  if (uVar2 != 0) {
    uVar6 = (ulong)uVar2;
    puVar7 = local_698;
    do {
      uVar5 = *puVar7;
      uVar3 = FUN_00d9ea08(uVar5);
      uVar4 = FUN_00d9cbd8(param_1 + 1,uVar3);
      if ((uVar4 & 1) != 0) {
        FUN_00d9d98c(param_2,uVar5);
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9d488(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_0281f7e0;
  param_1[1] = 0;
  FUN_00d9cae8((long)param_1 + 0x14);
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0x101;
  *(undefined1 *)((long)param_1 + 0x42) = 1;
  return;
}




void FUN_00d9d4d4(long param_1,byte param_2,byte param_3,byte param_4)

{
  *(byte *)(param_1 + 0x40) = param_2 & 1;
  *(byte *)(param_1 + 0x41) = param_3 & 1;
  *(byte *)(param_1 + 0x42) = param_4 & 1;
  return;
}




long FUN_00d9d4f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return param_1 + 0x10;
}




void FUN_00d9d500(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = DAT_03218f38;
  local_48 = DAT_03218f30;
  local_50 = DAT_03218f38;
  local_58 = DAT_03218f30;
  (**(code **)(param_1 + 0x38))(*param_2,&local_48,&local_58);
  uVar2 = FUN_00d44c78(*param_2);
  FUN_00d9d354(param_1 + 0x10,param_2 + 1,&local_48,&local_58,uVar2,*(undefined1 *)(param_1 + 0x40),
               *(undefined1 *)(param_1 + 0x41),*(undefined1 *)(param_1 + 0x42));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9d5bc(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = 0xbf800000;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(byte *)((long)param_1 + 0x2d) = *(byte *)((long)param_1 + 0x2d) & 0xf8;
  return;
}




void FUN_00d9d5ec(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_720;
  undefined4 local_718;
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [72];
  undefined8 local_6a0;
  undefined4 local_698;
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6e8);
  local_698 = *(undefined4 *)(param_1 + 1);
  local_6a0 = *param_1;
  if (param_2 != 0) {
    FUN_00d4db40(auStack_6e8,param_2);
  }
  if (param_1[2] == 0) {
    if (param_2 != 0) {
      FUN_00d55794(param_2,&local_720,0);
    }
  }
  else {
    lVar3 = FUN_00da2698();
    local_720 = *(undefined8 *)(lVar3 + 0x10);
    local_718 = *(undefined4 *)(lVar3 + 0x18);
  }
  if (0.0 < *(float *)(param_1 + 5)) {
    FUN_00d4db48(auStack_6e8,&local_720);
  }
  FUN_00d4dc24(auStack_6e8,(*(byte *)((long)param_1 + 0x2d) & 2) == 0);
  FUN_00d4d364(auStack_6e8,*(byte *)((long)param_1 + 0x2d) >> 2 & 1);
  if ((param_3 & 0xff) != 0xff) {
    FUN_00d4dad4(auStack_6e8,param_3);
  }
  if (param_1[3] != 0) {
    FUN_00d4dca4(auStack_6e8,param_1[3],0);
  }
  if (param_1[4] != 0) {
    FUN_00d4dcb8(auStack_6e8,param_1[4],0);
  }
  if (*(char *)((long)param_1 + 0x2c) == '\0') {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    FUN_00d4eb08(auStack_710,&local_720,*(char *)((long)param_1 + 0x2c),
                 *(byte *)((long)param_1 + 0x2d) & 1);
    puVar4 = auStack_710;
  }
  uVar2 = FUN_00d9e840(auStack_6e8,auStack_688,200,puVar4);
  if (uVar2 != 0) {
    uVar5 = (ulong)uVar2;
    puVar6 = auStack_688;
    do {
      FUN_00d9d98c(param_4,*puVar6);
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d9d790(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = (long *)*param_1;
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if ((int)param_1[1] == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *param_1 = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
          }
        }
        iVar1 = FUN_00d5ef64(uVar4);
        if (iVar1 != 0) {
          plVar2 = (long *)*param_1;
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if ((int)param_1[1] == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              *param_1 = 0;
              uVar4 = 0;
              *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
            }
          }
          uVar4 = FUN_00d5eebc(uVar4,0);
          return uVar4;
        }
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  return 0;
}




void FUN_00d9d8b0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00d9d8d8(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00d9d908(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00d9d92c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00d9d958(void *param_1)

{
  memset(param_1,0,0x404);
  return;
}




void FUN_00d9d974(void *param_1,void *param_2)

{
  *(undefined4 *)((long)param_1 + 0x400) = *(undefined4 *)((long)param_2 + 0x400);
  memmove(param_1,param_2,0x400);
  return;
}




undefined4 FUN_00d9d984(long param_1)

{
  return *(undefined4 *)(param_1 + 0x400);
}




void FUN_00d9d98c(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x400);
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8) = param_2;
  *(uint *)(param_1 + 0x400) = uVar1 + 1;
  return;
}




undefined8 FUN_00d9d9a0(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 8);
}




void FUN_00d9d9a8(void *param_1,long param_2)

{
  uint uVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0x400);
  if (uVar1 != 0) {
    uVar3 = uVar1 * 8;
    uVar2 = 0;
    __dest = param_1;
    do {
      uVar3 = uVar3 - 8;
      if (*(long *)((long)param_1 + (ulong)uVar2 * 8) == param_2) {
        memmove(__dest,(void *)((long)__dest + 8),(ulong)uVar3);
        *(int *)((long)param_1 + 0x400) = *(int *)((long)param_1 + 0x400) + -1;
        return;
      }
      uVar2 = uVar2 + 1;
      __dest = (void *)((long)__dest + 8);
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_00d9da1c(void *param_1)

{
  memset(param_1,0,0x404);
  return;
}




long FUN_00d9da38(float param_1,long param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_6d0 [200];
  long local_90;
  
  plVar9 = local_6d0;
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_019889cc(local_6d0,200,DAT_02c09220,0);
  if (param_1 <= 0.0) {
    lVar5 = *(long *)(param_2 + 0x40);
    fVar10 = (*(float *)(lVar5 + 0x1e4) + 1.0) *
             (*(float *)(lVar5 + 0x7c) +
             *(float *)(lVar5 + 0x130) * (*(float *)(lVar5 + 0x298) + 1.0));
    if (DAT_031abb74 <= fVar10) {
      fVar10 = DAT_031abb74;
    }
    param_1 = DAT_031abab0._4_4_;
    if (DAT_031abab0._4_4_ <= fVar10) {
      param_1 = fVar10;
    }
  }
  lVar5 = 0;
  if (uVar4 != 0) {
    uVar8 = (ulong)uVar4;
    fVar10 = 3.4028235e+38;
    lVar6 = lVar5;
    do {
      lVar7 = *plVar9;
      cVar2 = FUN_00d55870(lVar7);
      cVar3 = FUN_00d55870(param_2);
      lVar5 = lVar6;
      fVar12 = fVar10;
      if ((cVar2 != cVar3) &&
         (((uVar4 = *(ushort *)(lVar7 + 0x88) & 0x1f, uVar4 == 0x1f ||
           (1 < *(ushort *)(lVar7 + (ulong)uVar4 * 0x38 + 0x90) - 3)) &&
          ((param_3 & (*(uint *)(lVar7 + 0x2f4) ^ 0xffffffff)) == 0)))) {
        fVar11 = (float)FUN_00d9e0c4(param_2,lVar7);
        fVar12 = SQRT(fVar11);
        if (NAN(fVar12)) {
          fVar12 = sqrtf(fVar11);
        }
        fVar11 = *(float *)(*(long *)(lVar7 + 0x38) + 100);
        fVar12 = fVar12 - (*(float *)(*(long *)(lVar7 + 0x38) + 0x68) *
                          (fVar11 + *(float *)(lVar7 + 0x2e8))) / fVar11;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        lVar5 = lVar7;
        if (param_1 <= fVar12 || fVar10 <= fVar12) {
          lVar5 = lVar6;
          fVar12 = fVar10;
        }
      }
      fVar10 = fVar12;
      uVar8 = uVar8 - 1;
      plVar9 = plVar9 + 1;
      lVar6 = lVar5;
    } while (uVar8 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00d9dc10(void)

{
  float __x;
  undefined1 auVar1 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  __x = (float)FUN_00d9e0c4();
  if (NAN(SQRT(__x))) {
    auVar1._0_4_ = sqrtf(__x);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)SQRT(__x));
}




long FUN_00d9dc3c(float param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long local_6c8 [200];
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_6c8,200,DAT_02c09220,0);
  if (param_1 <= 0.0) {
    lVar4 = *(long *)(param_2 + 0x40);
    fVar8 = (*(float *)(lVar4 + 0x1e4) + 1.0) *
            (*(float *)(lVar4 + 0x7c) +
            *(float *)(lVar4 + 0x130) * (*(float *)(lVar4 + 0x298) + 1.0));
    if (DAT_031abb74 <= fVar8) {
      fVar8 = DAT_031abb74;
    }
    param_1 = DAT_031abab0._4_4_;
    if (DAT_031abab0._4_4_ <= fVar8) {
      param_1 = fVar8;
    }
  }
  lVar4 = 0;
  if (uVar2 != 0) {
    uVar6 = (ulong)uVar2;
    plVar7 = local_6c8;
    fVar8 = 3.4028235e+38;
    do {
      lVar5 = *plVar7;
      uVar2 = *(ushort *)(lVar5 + 0x88) & 0x1f;
      if ((uVar2 == 0x1f) || (1 < *(ushort *)(lVar5 + (ulong)uVar2 * 0x38 + 0x90) - 3)) {
        fVar9 = (float)FUN_00d9e0c4(param_2,lVar5);
        fVar10 = SQRT(fVar9);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar9);
        }
        fVar9 = *(float *)(*(long *)(lVar5 + 0x38) + 100);
        fVar10 = fVar10 - (*(float *)(*(long *)(lVar5 + 0x38) + 0x68) *
                          (fVar9 + *(float *)(lVar5 + 0x2e8))) / fVar9;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        if (((fVar10 <= param_1) && (fVar10 < fVar8)) &&
           ((param_3 == 0 || (uVar3 = FUN_00d4d280(param_3,lVar5), (uVar3 & 1) != 0)))) {
          lVar4 = lVar5;
          fVar8 = fVar10;
        }
      }
      uVar6 = uVar6 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}




long FUN_00d9ddfc(long *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float __x;
  float local_68;
  float local_64;
  float fStack_60;
  float local_58;
  float local_54;
  float fStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_3,&local_58,0);
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    fVar7 = 1e+12;
    uVar4 = (ulong)param_2;
    lVar5 = 0;
    do {
      lVar2 = *param_1;
      lVar3 = lVar5;
      fVar6 = fVar7;
      if (lVar2 != 0) {
        lVar3 = lVar2;
        if (lVar5 == 0) {
          FUN_00d55794(lVar2,&local_68,0);
          fVar7 = (local_68 - local_58) * (local_68 - local_58) +
                  (local_64 - local_54) * (local_64 - local_54) +
                  (fStack_60 - fStack_50) * (fStack_60 - fStack_50);
          fVar6 = SQRT(fVar7);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar7);
          }
        }
        else {
          FUN_00d55794(lVar2,&local_68,0);
          __x = (local_58 - local_68) * (local_58 - local_68) +
                (local_54 - local_64) * (local_54 - local_64) +
                (fStack_50 - fStack_60) * (fStack_50 - fStack_60);
          fVar6 = SQRT(__x);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(__x);
          }
          if (fVar7 <= fVar6) {
            lVar3 = lVar5;
            fVar6 = fVar7;
          }
        }
      }
      fVar7 = fVar6;
      uVar4 = uVar4 - 1;
      param_1 = param_1 + 1;
      lVar5 = lVar3;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d9df64(long param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(uint *)(param_1 + 0x2f4);
  fVar2 = (float)FUN_00d9e0c4();
  fVar3 = SQRT(fVar2);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar2);
  }
  fVar2 = *(float *)(*(long *)(param_2 + 0x38) + 100);
  fVar3 = fVar3 - (*(float *)(*(long *)(param_2 + 0x38) + 0x68) *
                  (fVar2 + *(float *)(param_2 + 0x2e8))) / fVar2;
  if ((uVar1 >> 4 & 1) != 0) {
    fVar2 = *(float *)(*(long *)(param_1 + 0x38) + 100);
    fVar3 = fVar3 - (*(float *)(*(long *)(param_1 + 0x38) + 0x68) *
                    (fVar2 + *(float *)(param_1 + 0x2e8))) / fVar2;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}




float FUN_00d9dff0(float param_1,float *param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_3,local_48,0);
  fVar2 = (float)*(undefined8 *)(param_2 + 1) - (float)local_48._4_8_;
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) - SUB84(local_48._4_8_,4);
  fVar3 = (*param_2 - local_48[0]) * (*param_2 - local_48[0]) + fVar2 * fVar2 + fVar3 * fVar3;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  fVar3 = *(float *)(*(long *)(param_3 + 0x38) + 100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    param_1 = (fVar2 - (*(float *)(*(long *)(param_3 + 0x38) + 0x68) *
                       (fVar3 + *(float *)(param_3 + 0x2e8))) / fVar3) - param_1;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

