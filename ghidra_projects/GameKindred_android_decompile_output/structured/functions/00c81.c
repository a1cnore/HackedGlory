// functions/00c81 — 35 functions
#include "libGameKindred.h"




void FUN_00c810e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c8127c(param_1,param_4);
  return;
}




void FUN_00c810e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803998;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c81144(void *param_1)

{
  FUN_00c810e8();
  operator_delete(param_1);
  return;
}




void FUN_00c81168(long param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar1 = "joystick_add_hit";
  if ((param_2 & 1) == 0) {
    pcVar1 = "joystick_add";
  }
  FUN_00f0e578(param_1 + 0xb8,pcVar1);
  if ((param_2 & 1) == 0) {
    local_3c = 0xffffffff;
  }
  else {
    local_3c = 0xff40e0ff;
  }
  FUN_00f0e670(param_1 + 0xb8,&local_3c,2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c81208(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00eff63c(0x3fe00000,0x3fe00000,0x3c23d70a,0);
  uVar2 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e800000,FUN_00a269a4);
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,uVar1,uVar2,0);
  return;
}




void FUN_00c8127c(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    uVar2 = FUN_00c81354((float)(int)*(float *)(param_2 + 5),
                         (float)(int)*(float *)((long)param_2 + 0x2c),param_1);
    if ((uVar2 & 1) == 0) {
      FUN_00f0490c(param_2);
    }
    else {
      FUN_00f048e0(auStack_58,DAT_0313c22c,0);
      FUN_00f04760(param_1,auStack_58,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c81354(float param_1,float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1;
  fStack_3c = param_2;
  local_40 = (float)FUN_00f08664(&local_40,param_3 + 0x17);
  fVar4 = DAT_03218f08._4_4_;
  fVar2 = (float)FUN_00f08758((undefined4)DAT_03218f08,param_3 + 0x17);
  fVar2 = local_40 - fVar2;
  fVar4 = fStack_3c - fVar4;
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ABS(fVar2) + ABS(fVar4) <= fVar3 * 0.5);
}




void thunk_FUN_00c81418(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  plVar1 = param_3 + 0x17;
  uStack_40 = (**(code **)(*param_3 + 0x48))();
  uStack_3c = param_2;
  FUN_00f13f18(plVar1,&uStack_40);
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_03218f08);
  if ((*(float *)(param_3 + 0x21) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x10c) != DAT_03218f08._4_4_)) {
    param_3[0x21] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c81418(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = param_3 + 0x17;
  local_40 = (**(code **)(*param_3 + 0x48))();
  uStack_3c = param_2;
  FUN_00f13f18(plVar1,&local_40);
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_03218f08);
  if ((*(float *)(param_3 + 0x21) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x10c) != DAT_03218f08._4_4_)) {
    param_3[0x21] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c814ec(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  plVar4 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02803ae0;
  FUN_00f0e4a8(plVar4);
  plVar1 = param_1 + 0x35;
  FUN_00f0e4a8(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar3 = param_1 + 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e540(plVar4,PTR_s_build___HUDPartsJoystick_tga_02be3480);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsJoystick_tga_02be3480,"joystick_attack");
  FUN_00f0e578(plVar4,"joystick_large_circle");
  local_50 = DAT_0313abec;
  local_78 = FUN_00c81670;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar3,&local_78);
  local_50 = DAT_0313abf8;
  local_78 = FUN_00c81680;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar3,&local_78);
  local_78 = FUN_00c81680;
  local_50 = DAT_0313abfc;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar3,&local_78);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c81660(long param_1)

{
  FUN_00f0e578(param_1 + 0xb8,"joystick_large_circle");
  return;
}




void FUN_00c81670(long param_1)

{
  FUN_00f0e578(param_1 + 0xb8,"joystick_large_circle_hit");
  return;
}




void FUN_00c81680(long param_1)

{
  FUN_00f0e578(param_1 + 0xb8,"joystick_large_circle");
  return;
}




void FUN_00c81690(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2;
  FUN_00f13f08(param_3 + 0xb8);
  lVar1 = param_3 + 0x1a8;
  fVar2 = (float)FUN_00f0eaf4(lVar1);
  FUN_00f13f08((param_2 * 0.8 * fVar2) / fVar3,param_2 * 0.8,lVar1);
  FUN_00f07940(0,0,param_3 + 0xb8,8,param_3,8);
  FUN_00f07940(0,0,lVar1,8,param_3,8);
  return;
}




void FUN_00c8172c(long param_1)

{
  FUN_00f0e578(param_1 + 0xb8,"joystick_large_circle_hit");
  return;
}




void FUN_00c8173c(long param_1)

{
  FUN_00f0e578(param_1 + 0xb8,"joystick_large_circle_hit");
  return;
}




void FUN_00c8174c(long param_1)

{
  FUN_00f0e578(param_1 + 0xb8,"joystick_large_circle");
  return;
}




void FUN_00c8175c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x19;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_02803c28;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00f0e4a8(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsJoystick_tga_02be3480,"joystick_medium_circle");
  FUN_00f0e540(plVar2,PTR_s_build___HUDPartsJoystick_tga_02be3480);
  plVar1 = param_1 + 1;
  local_50 = DAT_03210f58;
  local_78 = FUN_00c81984;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_78 = FUN_00c81984;
  local_50 = DAT_03210f84;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_50 = DAT_03210f5c;
  local_78 = thunk_FUN_00c81c24;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_78 = thunk_FUN_00c81c24;
  local_50 = DAT_03210f88;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_50 = DAT_03210f60;
  local_78 = thunk_FUN_00c81c50;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_78 = thunk_FUN_00c81c50;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_50 = DAT_03210fa4;
  local_78 = thunk_FUN_00c81ca4;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c81984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c81b74(param_1,param_4);
  return;
}




void thunk_FUN_00c81c24(long param_1)

{
  if (*(int *)(param_1 + 0xb8) == 1) {
    FUN_00a1dcf0(*(undefined8 *)(param_1 + 0xc0),1);
    return;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_00a1dcf0(*(undefined8 *)(param_1 + 0xc0),0);
    return;
  }
  return;
}




void thunk_FUN_00c81c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00f00478();
  if (*(int *)(param_1 + 0xb8) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xb8) != 0) goto LAB_00c81c8c;
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = 0;
  }
  FUN_00a1ddcc(uVar1,uVar2);
LAB_00c81c8c:
  FUN_00f0e578(param_1 + 200,"joystick_medium_circle");
  return;
}




void thunk_FUN_00c81ca4(long param_1)

{
  if (*(int *)(param_1 + 0xb8) == 1) {
    FUN_00a1ddcc(*(undefined8 *)(param_1 + 0xc0),1);
    return;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_00a1ddcc(*(undefined8 *)(param_1 + 0xc0),0);
    return;
  }
  return;
}




void FUN_00c81998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803c28;
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c81a18(void *param_1)

{
  FUN_00c81998();
  operator_delete(param_1);
  return;
}




void FUN_00c81a3c(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  *(int *)(param_1 + 0xb8) = param_3;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  pcVar1 = "joystick_minion";
  if (param_3 != 0) {
    pcVar1 = "joystick_turret";
  }
  FUN_00f0e578(param_1 + 0x1b8,pcVar1);
  FUN_00c81a84(param_1);
  return;
}




void FUN_00c81a84(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = (**(code **)(*param_3 + 0x48))();
  fStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x19,&local_50);
  plVar1 = param_3 + 0x37;
  fVar3 = (float)FUN_00f0eaf4(plVar1);
  fVar4 = param_2;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08((fVar3 * fVar4 * 0.8) / param_2,plVar1);
  FUN_00f07940(0,0,param_3 + 0x19,8,param_3,8);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c81a84(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_50;
  float fStack_4c;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uStack_50 = (**(code **)(*param_3 + 0x48))();
  fStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x19,&uStack_50);
  plVar1 = param_3 + 0x37;
  fVar3 = (float)FUN_00f0eaf4(plVar1);
  fVar4 = param_2;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08((fVar3 * fVar4 * 0.8) / param_2,plVar1);
  FUN_00f07940(0,0,param_3 + 0x19,8,param_3,8);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c81b74(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  FUN_00f0044c(param_2[4],param_1);
  if (*(int *)(param_1 + 0xb8) == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xb8) != 0) goto LAB_00c81c08;
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = 0;
  }
  FUN_00a1dbf4(uVar2,uVar3);
LAB_00c81c08:
  FUN_00f0e578(param_1 + 200,"joystick_medium_circle_hit");
  return;
}




void FUN_00c81c24(long param_1)

{
  if (*(int *)(param_1 + 0xb8) == 1) {
    FUN_00a1dcf0(*(undefined8 *)(param_1 + 0xc0),1);
    return;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_00a1dcf0(*(undefined8 *)(param_1 + 0xc0),0);
    return;
  }
  return;
}




void FUN_00c81c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00f00478();
  if (*(int *)(param_1 + 0xb8) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xb8) != 0) goto LAB_00c81c8c;
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = 0;
  }
  FUN_00a1ddcc(uVar1,uVar2);
LAB_00c81c8c:
  FUN_00f0e578(param_1 + 200,"joystick_medium_circle");
  return;
}




void FUN_00c81ca4(long param_1)

{
  if (*(int *)(param_1 + 0xb8) == 1) {
    FUN_00a1ddcc(*(undefined8 *)(param_1 + 0xc0),1);
    return;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_00a1ddcc(*(undefined8 *)(param_1 + 0xc0),0);
    return;
  }
  return;
}




void FUN_00c81cd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803ae0;
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c81d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803ae0;
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c81dd8(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  long *plStack_50;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f017e8();
  lVar3 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  plVar1 = param_1 + 0x15;
  *(undefined4 *)(param_1 + 0x12) = 0x7000000;
  *param_1 = (long)&PTR_FUN_02803d70;
  param_1[0x11] = (long)&PTR_FUN_02803e88;
  param_1[0x13] = lVar3;
  FUN_00f0d160(plVar1);
  FUN_00f0a784(param_1 + 0x3b);
  param_1[0x3e] = 0x3f400000ffaaaaaa;
  param_1[0x3d] = 0x4210000042100000;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  uVar4 = FUN_009f2588();
  local_58 = 0;
  pcStack_40 = FUN_00c82a50;
  plStack_50 = param_1;
  local_48 = param_1;
  FUN_00c7f1a0(uVar4,&local_58);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0a814(param_1 + 0x3b,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  local_58 = CONCAT44(local_58._4_4_,0xff202020);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&local_58);
  FUN_00c81f10(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c81f10(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0xa0) == 0x1b) {
    uVar5 = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  }
  else {
    uVar3 = FUN_009f2588();
    lVar4 = FUN_009f25a4(uVar3,*(undefined4 *)(param_1 + 0xa0));
    iVar1 = *(int *)(lVar4 + 0x20);
    if (iVar1 == 0x69) {
      iVar1 = *(int *)(lVar4 + 0x2c);
    }
    iVar6 = *(int *)(lVar4 + 0x24);
    if (iVar6 == 3) {
      iVar6 = *(int *)(lVar4 + 0x30);
    }
    if (iVar1 == 0x69) {
      if (iVar6 != 3) {
        uVar3 = FUN_01980e18(iVar6);
        FUN_00e705c8(&local_48,uVar3);
        FUN_00c820e4(param_1,&local_48);
        if (local_40 != (void *)0x0) {
          operator_delete__(local_40);
          local_48 = 0;
          local_40 = (void *)0x0;
        }
      }
    }
    else {
      uVar3 = FUN_01980d54();
      FUN_00e705c8(&local_38,uVar3);
      FUN_00c820e4(param_1,&local_38);
      if (local_30 != (void *)0x0) {
        operator_delete__(local_30);
        local_38 = 0;
        local_30 = (void *)0x0;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x84) | 4;
  }
  *(uint *)(param_1 + 0x84) = uVar5;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

