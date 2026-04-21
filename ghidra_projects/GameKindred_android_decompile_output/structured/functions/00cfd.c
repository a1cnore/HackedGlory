// functions/00cfd — 22 functions
#include "libGameKindred.h"




void FUN_00cfd71c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_3,&local_48,0);
  if (0.01 <= ABS(param_1._0_4_)) {
    FUN_00d55794(param_4,&local_58,0);
    local_48 = FUN_00cfd87c(local_48,uStack_44,local_40,local_58,uStack_54,local_50,param_1._0_8_);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48);
}




undefined1  [16]
FUN_00cfd7c4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (0.01 <= ABS(param_4._0_4_)) {
    FUN_00d55794(param_6,&local_58,0);
    param_1 = FUN_00cfd87c(param_1._0_8_,param_2,param_3,local_58,uStack_54,local_50,param_4._0_8_);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00cfd87c(ulong param_1,undefined1 param_2 [16],float param_3,float param_4,
                  undefined1 param_5 [16],float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float __x;
  
  if (0.01 <= ABS(param_7)) {
    fVar1 = atan2f(param_3 - param_6,(float)param_1 - param_4);
    fVar1 = fVar1 + (param_7 * 3.1415927) / -180.0;
    fVar2 = cosf(fVar1);
    fVar1 = sinf(fVar1);
    __x = fVar2 * fVar2 + 0.0 + fVar1 * fVar1;
    fVar1 = (float)DAT_03218f68;
    if (1e-08 <= __x) {
      fVar1 = SQRT(__x);
      if (NAN(fVar1)) {
        fVar1 = sqrtf(__x);
      }
      fVar1 = fVar2 / fVar1;
    }
    param_1 = (ulong)(uint)(param_4 + fVar1 * 12.5);
  }
  return param_1;
}




void FUN_00cfd97c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cfd9a0(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_02810e08;
  param_1[2] = 0;
  return;
}




void FUN_00cfd9d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cfd9dc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [22];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = FUN_00ceab48();
  if (((uVar7 & 1) != 0) && (iVar4 = FUN_00d51964(param_2), iVar4 != 0)) {
    uVar11 = 0;
    do {
      lVar8 = FUN_00d51954(param_2,uVar11);
      uVar9 = FUN_00d9ea34();
      local_c4 = 0xffffffff;
      thunk_FUN_00d9ff34(local_c0,*(undefined8 *)(param_1 + 0x10));
      FUN_00d9ff84(&local_c8,local_c0[0]);
      uVar7 = FUN_00d6bbac(uVar9,local_c8,&local_c4);
      if ((uVar7 & 1) == 0) {
        lVar10 = FUN_00d5048c(param_2);
        uVar1 = *(undefined4 *)(lVar10 + 0x260);
        uVar2 = *(undefined4 *)(lVar8 + 0x260);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = FUN_00ceb350();
        FUN_00cfe864(0xbf800000,0,0,local_c0,uVar1,uVar2,uVar9,uVar5,1,0,0);
      }
      else {
        FUN_00d009d0(local_c0,*(undefined4 *)(lVar8 + 0x260),local_c4);
      }
      FUN_00ce20fc(local_c0);
      uVar11 = uVar11 + 1;
      uVar6 = FUN_00d51964(param_2);
    } while (uVar11 < uVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cfdb2c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




float FUN_00cfdb50(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_00d5048c(param_2);
  fVar1 = (float)FUN_00da2e54();
  fVar3 = 0.0;
  if ((0.0 < fVar1) && (fVar2 = (float)FUN_01988c78(0), fVar3 = fVar1, fVar1 <= fVar2)) {
    fVar3 = fVar2;
  }
  return fVar3;
}




bool FUN_00cfdb90(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return fVar1 <= 0.0;
}




void FUN_00cfdbb4(void)

{
  return;
}




void FUN_00cfdbb8(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cfdbdc(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = param_3;
  *param_1 = &PTR_FUN_02810ec8;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 3;
  return;
}




void FUN_00cfdc1c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = param_4;
  *param_1 = &PTR_FUN_02810ec8;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}




void FUN_00cfdc4c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02810ec8;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00cfdc94(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02810ec8;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_4 + 1);
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 6) = param_5;
  *(undefined4 *)((long)param_1 + 0x34) = 2;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00cfdcd0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined1 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02810ec8;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_4 + 1);
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 6) = param_5;
  *(undefined4 *)((long)param_1 + 0x34) = param_6;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00cfdd08(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    switch(*(undefined4 *)(param_1 + 0x34)) {
    case 0:
    case 3:
      FUN_00ce6abc(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                   *(undefined1 *)(param_1 + 0x30));
      return;
    case 1:
      FUN_00ce6c04(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x24,*(undefined1 *)(param_1 + 0x30));
      return;
    case 2:
      FUN_00ce6d68(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_1 + 0x24,
                   *(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}




void FUN_00cfdd94(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  uVar3 = FUN_00ceab48();
  if ((lVar2 != 0) && ((uVar3 & 1) == 0)) {
    uVar5 = *(ushort *)(lVar2 + 0x88) & 0x1f;
    if (uVar5 != 0x1f) {
      uVar5 = (uint)*(ushort *)(lVar2 + (ulong)uVar5 * 0x38 + 0x90);
      if (uVar5 - 3 < 2) goto switchD_00cfde20_default;
      if ((uVar5 == 2) &&
         (uVar3 = FUN_00d59f78(lVar2,*(undefined1 *)(param_1 + 0x30)), (uVar3 & 1) != 0)) {
        FUN_00d57880(lVar2,0);
      }
    }
    lVar4 = 0;
    if (*(int *)(param_1 + 0x20) != -1) {
      lVar4 = FUN_00d9e390(*(int *)(param_1 + 0x20));
    }
    switch(*(undefined4 *)(param_1 + 0x34)) {
    case 0:
      local_48 = 0;
      local_40 = DAT_03214ce8;
      if (lVar4 != 0) {
        local_48 = lVar4 + 0x28;
        local_40 = *(undefined4 *)(lVar4 + 0x30);
      }
      FUN_00d590b0(lVar2,*(undefined1 *)(param_1 + 0x30),&local_48);
      break;
    case 1:
      FUN_00d594b8(lVar2,*(undefined1 *)(param_1 + 0x30),param_1 + 0x24);
      break;
    case 2:
      local_48 = 0;
      local_40 = DAT_03214ce8;
      if (lVar4 != 0) {
        local_48 = lVar4 + 0x28;
        local_40 = *(undefined4 *)(lVar4 + 0x30);
      }
      FUN_00d59630(lVar2,*(undefined1 *)(param_1 + 0x30),&local_48,param_1 + 0x24);
      break;
    case 3:
      FUN_00d58e78(lVar2,*(undefined1 *)(param_1 + 0x30));
    }
  }
switchD_00cfde20_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cfdf30(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02810ec8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfdfa8(undefined8 *param_1,undefined1 param_2)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = param_2;
  *param_1 = &PTR_FUN_02810f00;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 3;
  return;
}




void FUN_00cfdfe8(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02810f00;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}

