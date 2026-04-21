// functions/00f12 — 42 functions
#include "libGameKindred.h"




void FUN_00f12074(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_00f11800(param_1,0);
    return;
  case 1:
    FUN_00f11800(param_1,1);
    *(undefined4 *)(param_1 + 0x214) = 0;
    break;
  case 2:
    FUN_00f11800(param_1,1);
    *(undefined4 *)(param_1 + 0x214) = 1;
    break;
  case 3:
    FUN_00f11800(param_1,1);
    *(undefined4 *)(param_1 + 0x214) = 2;
    break;
  default:
    goto switchD_00f120a0_default;
  }
  *(undefined4 *)(param_1 + 0x290) = 1;
switchD_00f120a0_default:
  return;
}




void FUN_00f12110(long param_1)

{
  FUN_00f11818();
  FUN_00f11818(param_1);
  FUN_00f2da64(param_1 + 0x218,param_1 + 0x1b8,*(undefined4 *)(param_1 + 0x214));
  FUN_00f2d0b8(param_1 + 0x298,*(undefined8 *)(param_1 + 0x288));
  return;
}




void FUN_00f12160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0x213) != '\0') && (uVar1 = FUN_00f11980(param_1), (uVar1 & 1) != 0)) {
    uVar2 = FUN_0199c9f8(param_2,1);
    FUN_00f11f10(param_1,uVar2,param_3,param_4,param_5);
    FUN_00f11818(param_1);
    FUN_00f2db60(uVar2,param_1 + 0x218,param_1 + 0x214,param_1 + 0x1b8);
    uVar3 = *(undefined8 *)(param_1 + 0x288);
    FUN_00f11818(param_1);
    FUN_00f2d168(uVar2,param_1 + 0x298,param_1 + 0x290,uVar3,param_1 + 0x1e8);
    return;
  }
  FUN_00f11f10(param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_00f1224c(long *param_1)

{
  FUN_00f1174c();
  *(undefined1 *)((long)param_1 + 0x213) = 1;
  *param_1 = (long)&PTR_FUN_02827af0;
  param_1[0x34] = (long)&PTR_FUN_02827c70;
  FUN_00f2d3c0(param_1 + 0x43);
  FUN_00f2e010(param_1 + 0x45);
  FUN_00f11800(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00f122b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}




void FUN_00f122b4(long param_1)

{
  FUN_00f11818();
  FUN_00f11818(param_1);
  FUN_00f2d4ec(param_1 + 0x228,param_1 + 0x1b8);
  return;
}




void FUN_00f122f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x213) == '\0') {
    FUN_00f11f10(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  uVar1 = FUN_00f11980(param_1);
  FUN_00f11f10(param_1,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) != 0) {
    FUN_00f11818(param_1);
    FUN_00f11818(param_1);
    FUN_00f2d57c(param_2,param_1 + 0x228,param_1 + 0x218,param_1 + 0x1b8,param_1 + 0x1e8);
    return;
  }
  return;
}




void FUN_00f123cc(long *param_1)

{
  FUN_00f1174c();
  *(undefined1 *)((long)param_1 + 0x213) = 1;
  *param_1 = (long)&PTR_FUN_02827cb8;
  param_1[0x34] = (long)&PTR_FUN_02827e38;
  FUN_00f2d734((long)param_1 + 0x214);
  FUN_00f2e010(param_1 + 0x43);
  FUN_00f11800(param_1,1);
  *(undefined4 *)((long)param_1 + 0x214) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x213) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f1243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}




void FUN_00f12440(float param_1,long param_2)

{
  *(float *)(param_2 + 0x214) = param_1;
  *(bool *)(param_2 + 0x213) = param_1 != 1.0;
  return;
}




void FUN_00f12458(long param_1)

{
  FUN_00f11818();
  FUN_00f11818(param_1);
  FUN_00f2d768(param_1 + 0x218,param_1 + 0x1b8);
  return;
}




void FUN_00f12498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x213) == '\0') {
    FUN_00f11f10(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  uVar1 = FUN_00f11980(param_1);
  FUN_00f11f10(param_1,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) != 0) {
    FUN_00f11818(param_1);
    FUN_00f11818(param_1);
    FUN_00f2d7f8(param_2,param_1 + 0x218,param_1 + 0x214,param_1 + 0x1b8,param_1 + 0x1e8);
    return;
  }
  return;
}




void FUN_00f12570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f125c8(void)

{
  return;
}




void FUN_00f125cc(undefined8 *param_1)

{
  param_1[-0x34] = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(param_1 + -0x34);
  return;
}




void FUN_00f1261c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f12674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827928;
  param_1[0x34] = &PTR_FUN_02827aa8;
  FUN_00f2d05c(param_1 + 0x53);
  FUN_00f2d9bc(param_1 + 0x43);
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f126ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827928;
  param_1[0x34] = &PTR_FUN_02827aa8;
  FUN_00f2d05c(param_1 + 0x53);
  FUN_00f2d9bc(param_1 + 0x43);
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f1276c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_02827928;
  *param_1 = &PTR_FUN_02827aa8;
  FUN_00f2d05c(param_1 + 0x1f);
  FUN_00f2d9bc(param_1 + 0xf);
  *puVar1 = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(puVar1);
  return;
}




void FUN_00f127e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_02827928;
  *param_1 = &PTR_FUN_02827aa8;
  FUN_00f2d05c(param_1 + 0x1f);
  FUN_00f2d9bc(param_1 + 0xf);
  *puVar1 = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f12864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827af0;
  param_1[0x34] = &PTR_FUN_02827c70;
  FUN_00f2d4c4(param_1 + 0x45);
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f128d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827af0;
  param_1[0x34] = &PTR_FUN_02827c70;
  FUN_00f2d4c4(param_1 + 0x45);
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f1294c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_02827af0;
  *param_1 = &PTR_FUN_02827c70;
  FUN_00f2d4c4(param_1 + 0x11);
  *puVar1 = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(puVar1);
  return;
}




void FUN_00f129bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_02827af0;
  *param_1 = &PTR_FUN_02827c70;
  FUN_00f2d4c4(param_1 + 0x11);
  *puVar1 = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f12a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827cb8;
  param_1[0x34] = &PTR_FUN_02827e38;
  FUN_00f2d740(param_1 + 0x43);
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f12aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827cb8;
  param_1[0x34] = &PTR_FUN_02827e38;
  FUN_00f2d740(param_1 + 0x43);
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f12b1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_02827cb8;
  *param_1 = &PTR_FUN_02827e38;
  FUN_00f2d740(param_1 + 0xf);
  *puVar1 = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(puVar1);
  return;
}




void FUN_00f12b8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x34;
  *puVar1 = &PTR_FUN_02827cb8;
  *param_1 = &PTR_FUN_02827e38;
  FUN_00f2d740(param_1 + 0xf);
  *puVar1 = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f12c04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_02827e80;
  param_1[0x17] = 0;
  lVar2 = FUN_00f17f44();
  param_1[0x17] = lVar2;
  if (lVar2 != 0) {
    pcStack_30 = FUN_00f13054;
    local_38 = param_1;
    FUN_00f02e98(0x3f800000,&local_38,0,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f12c8c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02827e80;
  if (param_1[0x17] != 0) {
    pcStack_30 = FUN_00f13054;
    local_38 = param_1;
    FUN_00f03390(&local_38);
    if ((long *)param_1[0x17] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x17] + 8))();
    }
    param_1[0x17] = 0;
  }
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f12d1c(void *param_1)

{
  FUN_00f12c8c();
  operator_delete(param_1);
  return;
}




void FUN_00f12d40(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00f12d58(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  int local_30;
  int iStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f13db0();
  if (*(long *)(param_3 + 0xb8) != 0) {
    fVar2 = (float)FUN_00f0838c(param_3);
    local_30 = (int)fVar2;
    iStack_2c = (int)param_2;
    (**(code **)(**(long **)(param_3 + 0xb8) + 0x50))(*(long **)(param_3 + 0xb8),&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f12dd0(long *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f13db4();
  if (param_1[0x17] != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,&local_30,auStack_38);
    local_40 = local_30;
    (**(code **)(*(long *)param_1[0x17] + 0x58))((long *)param_1[0x17],&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f12e54(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined1 local_40 [8];
  undefined1 auStack_38 [8];
  int local_30;
  int iStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3[0x17] != 0) {
    (**(code **)(*param_3 + 0x68))(param_3,&local_30,auStack_38);
    (**(code **)(*(long *)param_3[0x17] + 0x58))((long *)param_3[0x17],local_40);
    fVar3 = (float)FUN_00f0838c(param_3);
    local_30 = (int)fVar3;
    iStack_2c = (int)param_2;
    (**(code **)(*(long *)param_3[0x17] + 0x50))((long *)param_3[0x17],&local_30);
    lVar2 = FUN_00965ecc(param_3);
    (**(code **)(*(long *)param_3[0x17] + 0x60))
              (*(undefined4 *)(lVar2 + 0x18),(long *)param_3[0x17]);
    (**(code **)(*(long *)param_3[0x17] + 0x68))
              ((long *)param_3[0x17],*(uint *)((long)param_3 + 0x84) >> 2 & 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f12f34(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00f12f4c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
    return;
  }
  return;
}




void FUN_00f12f64(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x78))();
    return;
  }
  return;
}




void FUN_00f12f7c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x88))();
    return;
  }
  return;
}




void FUN_00f12f94(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x80))();
    return;
  }
  return;
}




void FUN_00f12fac(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
    return;
  }
  return;
}




void FUN_00f12fc4(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))();
    return;
  }
  return;
}




void FUN_00f12fdc(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f12fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))();
    return;
  }
  return;
}




void FUN_00f12ff4(undefined8 param_1,long param_2)

{
  if (*(long **)(param_2 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f13004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0xb8) + 0x20))();
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}

