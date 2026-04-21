// functions/00d83 — 31 functions
#include "libGameKindred.h"




void FUN_00d830f0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_0281ec10;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}




void FUN_00d83110(long param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00d8311c(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}




void FUN_00d83128(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_6c;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      lVar4 = param_2[1];
    }
    else {
      lVar4 = FUN_00d80f68(*param_2);
    }
    if (lVar4 != 0) {
      local_6c = 0;
      (**(code **)(param_1 + 0x18))(*param_2,&local_6c);
      if (*(int *)(param_1 + 0x10) == 1) {
        uVar1 = *(undefined4 *)(lVar4 + 0x260);
        uVar5 = 3;
      }
      else {
        if (*(int *)(param_1 + 0x10) != 0) goto LAB_00d831d4;
        uVar1 = *(undefined4 *)(lVar4 + 0x260);
        uVar5 = 2;
      }
      FUN_00d043c0(local_6c,auStack_68,uVar1,uVar5,0);
      FUN_00ce20fc(auStack_68);
    }
  }
LAB_00d831d4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d83200(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281ec50;
  return;
}




void FUN_00d83218(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}




void FUN_00d83224(long param_1,undefined8 *param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_00d813c0(*param_2);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    fVar2 = fVar2 * *(float *)(param_1 + 0x14);
  }
  else if (iVar1 == 1) {
    fVar2 = fVar2 + *(float *)(param_1 + 0x14);
  }
  else if (iVar1 == 0) {
    fVar2 = *(float *)(param_1 + 0x14);
  }
  FUN_00d813c8(fVar2,*param_2);
  return;
}




void FUN_00d8328c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0xee;
  *(undefined8 *)((long)param_1 + 0x24) = 0x200000000;
  *param_1 = &PTR_FUN_0281ec90;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x3c) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = uVar1;
  return;
}




void FUN_00d832e8(long param_1,undefined4 param_2,byte *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (param_3 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00d8333c(long param_1,undefined4 param_2,byte *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (param_3 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar3 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  return;
}




void FUN_00d83398(long param_1,undefined4 param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (param_3 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00d833ec(long param_1,undefined4 param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (param_3 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_3;
    uVar1 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00d8343c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d83444(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x48) = param_1;
  return;
}




void FUN_00d8344c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d83454(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) == 0) goto LAB_00d835f4;
  lVar9 = FUN_00d80f68(*param_2);
  iVar10 = *(int *)(param_1 + 0x2c);
  if (iVar10 == -1) {
    iVar10 = *(int *)(lVar9 + 0x260);
  }
  local_bc = *(undefined4 *)(param_1 + 0x48);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(&local_bc);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(code **)(param_1 + 0x20) == (code *)0x0) {
      local_c8 = *(ulong *)(param_1 + 0x34);
      local_c0 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      (**(code **)(param_1 + 0x20))(*param_2,&local_c8);
    }
    uVar4 = FUN_00d5ba88(lVar9);
    FUN_00d9e390(iVar10);
    uVar5 = FUN_00d5ba88();
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = FUN_00ceb350();
    FUN_00d02ac0(*(undefined4 *)(param_1 + 0x48),auStack_b8,uVar4,uVar5,param_1 + 0x34,uVar2,
                 param_1 + 0x14,uVar6);
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) goto LAB_00d835f4;
    local_c8 = CONCAT44(local_c8._4_4_,0xffffffff);
    if (*(code **)(param_1 + 0x18) == (code *)0x0) {
      iVar1 = *(int *)(param_1 + 0x30);
      local_c8 = CONCAT44(local_c8._4_4_,iVar1);
    }
    else {
      (**(code **)(param_1 + 0x18))(*param_2,&local_c8);
      iVar1 = (int)local_c8;
    }
    if (iVar1 == -1) goto LAB_00d835f4;
    uVar4 = FUN_00d5ba88(lVar9);
    FUN_00d9e390(iVar10);
    uVar5 = FUN_00d5ba88();
    FUN_00d9e390(local_c8 & 0xffffffff);
    uVar6 = FUN_00d5ba88();
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_00ceb350();
    FUN_00d02a78(local_bc,auStack_b8,uVar4,uVar5,uVar6,uVar2,param_1 + 0x14,uVar7);
  }
  FUN_00ce20fc(auStack_b8);
LAB_00d835f4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d83628(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0xbf800000;
  param_1[5] = 0;
  param_1[6] = FUN_00d83668;
  *(undefined4 *)(param_1 + 7) = 4;
  *param_1 = &PTR_FUN_0281ecd0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  return;
}




void FUN_00d83668(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d80bb8(*param_1,auStack_38);
  local_40 = 0x40000000;
  local_3c = local_34;
  local_48 = 0x461c3c0040000000;
  FUN_00ef0108(0,auStack_38,&local_3c,0,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_3c);
}




void FUN_00d836e8(long param_1,undefined8 param_2,byte param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe | param_3 & 1;
  return;
}




void FUN_00d836fc(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_00d83714;
  *(undefined4 *)(param_1 + 0x38) = 4;
  return;
}




void FUN_00d83714(undefined8 *param_1)

{
  long lVar1;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d80bb8(*param_1,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_34);
}




void FUN_00d83764(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x38) = 1;
  return;
}




void FUN_00d83774(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x18) = param_3;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_00d83780(long param_1)

{
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 2;
  return;
}




void FUN_00d83790(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d83798(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined8 extraout_d0;
  undefined8 uVar11;
  float fVar12;
  undefined4 local_d8 [2];
  ulong local_d0;
  float local_c8;
  undefined1 auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b0 [22];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d80f68(*param_2);
    uVar8 = FUN_00d6eb50();
    uVar2 = FUN_00d6e9d4(uVar8,*(undefined8 *)(param_1 + 0x10));
    FUN_00d80bb8(*param_2,auStack_c0);
    local_bc = FUN_00d839fc(param_1 + 0x30,param_2,0);
    FUN_00d80c00(*param_2,&local_d0);
    fVar12 = (float)local_d0;
    local_d0 = (ulong)(uint)(float)local_d0;
    fVar12 = fVar12 * fVar12 + 0.0 + local_c8 * local_c8;
    if (1e-08 <= fVar12) {
      fVar10 = SQRT(fVar12);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar12);
      }
      local_d0 = CONCAT44((float)(local_d0 >> 0x20) / fVar10,(float)local_d0 / fVar10);
      local_c8 = local_c8 / fVar10;
    }
    else {
      local_c8 = DAT_03218f70;
      local_d0 = DAT_03218f68;
    }
    FUN_00d9ff2c(local_d8);
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      uVar8 = FUN_00d6eb50();
      lVar9 = FUN_00d6eb5c(uVar8,*(undefined8 *)(param_1 + 0x10));
      thunk_FUN_00d9ff34(local_b0,*(undefined8 *)**(undefined8 **)(lVar9 + 0x1d8));
      local_d8[0] = local_b0[0];
    }
    else {
      local_d8[0] = FUN_00d5bab4(lVar7);
    }
    uVar3 = FUN_00ceb350();
    uVar5 = local_d8[0];
    uVar4 = FUN_00d55870(lVar7);
    FUN_008ff600(uVar2,uVar5,uVar3,uVar4,auStack_c0,&local_d0,0xffffffff,1,
                 *(undefined4 *)(lVar7 + 0x260),0,0xffffffff);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar7 = FUN_00d80f68(*param_2);
      uVar2 = *(undefined4 *)(lVar7 + 0x260);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar5 = FUN_00ceb350();
      uVar11 = 0;
      if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
        uVar11 = FUN_00d813c0(extraout_d0,0,*param_2);
      }
      FUN_00cfe864(uVar4,uVar11,0,local_b0,uVar2,uVar3,uVar8,uVar5,1,0,0);
      FUN_00ce20fc(local_b0);
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*param_2,uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined1  [16] FUN_00d839fc(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  switch(param_1[2]) {
  case 0:
    break;
  case 1:
    uVar5 = (ulong)*param_1;
    uVar6 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00d83a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)();
    return auVar4;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00d8473c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00d83a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*UNRECOVERED_JUMPTABLE)();
    return auVar4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00d83a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2);
    return auVar4;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00d83ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2,param_3);
    return auVar4;
  case 6:
    plVar2 = (long *)FUN_00d84768(param_2);
    if (plVar2 != (long *)0x0) {
      uVar6 = *(undefined8 *)param_1;
      uVar1 = FUN_00e6a474(uVar6);
      uVar1 = FUN_0091ed5c(uVar6,uVar1,0x12345678);
      puVar3 = (uint *)(**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
      uVar5 = (ulong)*puVar3;
      uVar6 = 0;
    }
    break;
  default:
    FUN_00e6a2fc(0);
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_00d83b14(undefined8 *param_1)

{
  param_1[1] = 0xbf800000;
  *param_1 = 0xbf800000;
  return;
}




void FUN_00d83b2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  *param_4 = param_1;
  param_4[1] = param_3;
  param_4[3] = param_5;
  param_4[2] = param_2;
  return;
}




void FUN_00d83b3c(float *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float __x;
  float fVar8;
  undefined8 local_7b0;
  float local_7a8;
  float local_7a0;
  float fStack_79c;
  float local_798;
  float local_790;
  float fStack_78c;
  float local_788;
  undefined1 auStack_780 [120];
  undefined1 auStack_708 [64];
  float local_6c8;
  ushort local_6b0;
  long local_6a8;
  float local_6a0;
  undefined8 local_69c;
  float local_694;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (0.0 < *param_1) {
    FUN_00d80bb8(*param_3,&local_790);
    FUN_00d4d9e8(auStack_708);
    FUN_00d4dabc(auStack_708,param_1[3]);
    uVar3 = FUN_00d80f68(*param_3);
    FUN_00d4daf4(auStack_708,0,1,0,uVar3);
    if (0.0 < param_1[2]) {
      local_6b0 = local_6b0 | 0x2000;
      local_6c8 = param_1[2];
    }
    FUN_00d4e61c(auStack_780,auStack_708);
    if (param_1[1] <= 0.0) {
      puVar4 = auStack_708;
      FUN_00d4db48(*param_1,auStack_708,&local_790);
    }
    else {
      FUN_00d80c00(*param_3,&local_7a0);
      local_7b0 = CONCAT44(fStack_78c,local_790);
      local_7a8 = local_788;
      fVar8 = param_1[1];
      local_6a0 = local_788;
      local_69c = CONCAT44(fStack_79c * fVar8 + fStack_78c,local_7a0 * fVar8 + local_790);
      local_694 = fVar8 * local_798 + local_788;
      puVar4 = auStack_780;
      FUN_00d4e838(*param_1,auStack_780,&local_6a8);
    }
    uVar2 = FUN_00d9e840(puVar4,&local_6a8,200,0);
    if (uVar2 != 0) {
      uVar6 = (ulong)uVar2;
      plVar7 = &local_6a8;
      do {
        lVar5 = *plVar7;
        if ((lVar5 != 0) && (lVar5 != param_4)) {
          FUN_00d55794(lVar5,&local_7a0,0);
          local_7b0._0_4_ = local_790 - local_7a0;
          local_7b0._4_4_ = local_788 - local_798;
          if ((1.1920929e-07 <= ABS((float)local_7b0)) || (1.1920929e-07 <= ABS(local_7b0._4_4_))) {
            local_7b0 = DAT_03218f20;
          }
          else {
            __x = (float)local_7b0 * (float)local_7b0 + local_7b0._4_4_ * local_7b0._4_4_;
            fVar8 = SQRT(__x);
            if (NAN(fVar8)) {
              fVar8 = sqrtf(__x);
            }
            local_7b0 = CONCAT44(local_7b0._4_4_ / fVar8,(float)local_7b0 / fVar8);
          }
          (**(code **)*param_2)(param_2,param_3,lVar5,&local_7b0);
        }
        uVar6 = uVar6 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar6 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d83da4(float *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float __x;
  float fVar8;
  undefined8 local_7b0;
  float local_7a8;
  float local_7a0;
  float fStack_79c;
  float local_798;
  float local_790;
  float fStack_78c;
  float local_788;
  undefined1 auStack_780 [120];
  undefined1 auStack_708 [64];
  float local_6c8;
  ushort local_6b0;
  long local_6a8;
  float local_6a0;
  undefined8 local_69c;
  float local_694;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (0.0 < *param_1) {
    FUN_00d80bb8(*param_3,&local_790);
    FUN_00d4d9e8(auStack_708);
    FUN_00d4dabc(auStack_708,param_1[3]);
    uVar3 = FUN_00d80f68(*param_3);
    FUN_00d4daf4(auStack_708,0,1,0,uVar3);
    if (0.0 < param_1[2]) {
      local_6b0 = local_6b0 | 0x2000;
      local_6c8 = param_1[2];
    }
    FUN_00d4e61c(auStack_780,auStack_708);
    if (param_1[1] <= 0.0) {
      puVar4 = auStack_708;
      FUN_00d4db48(*param_1,auStack_708,&local_790);
    }
    else {
      FUN_00d80c00(*param_3,&local_7a0);
      local_7b0 = CONCAT44(fStack_78c,local_790);
      local_7a8 = local_788;
      fVar8 = param_1[1];
      local_6a0 = local_788;
      local_69c = CONCAT44(fStack_79c * fVar8 + fStack_78c,local_7a0 * fVar8 + local_790);
      local_694 = fVar8 * local_798 + local_788;
      puVar4 = auStack_780;
      FUN_00d4e838(*param_1,auStack_780,&local_6a8);
    }
    uVar2 = FUN_00d9e840(puVar4,&local_6a8,200,0);
    if (uVar2 != 0) {
      uVar6 = (ulong)uVar2;
      plVar7 = &local_6a8;
      do {
        lVar5 = *plVar7;
        if ((lVar5 != 0) && (lVar5 != param_4)) {
          FUN_00d55794(lVar5,&local_7a0,0);
          local_7b0._0_4_ = local_790 - local_7a0;
          local_7b0._4_4_ = local_788 - local_798;
          if ((1.1920929e-07 <= ABS((float)local_7b0)) || (1.1920929e-07 <= ABS(local_7b0._4_4_))) {
            local_7b0 = DAT_03218f20;
          }
          else {
            __x = (float)local_7b0 * (float)local_7b0 + local_7b0._4_4_ * local_7b0._4_4_;
            fVar8 = SQRT(__x);
            if (NAN(fVar8)) {
              fVar8 = sqrtf(__x);
            }
            local_7b0 = CONCAT44(local_7b0._4_4_ / fVar8,(float)local_7b0 / fVar8);
          }
          (**(code **)*param_2)(param_2,param_3,lVar5,&local_7b0);
        }
        uVar6 = uVar6 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar6 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

