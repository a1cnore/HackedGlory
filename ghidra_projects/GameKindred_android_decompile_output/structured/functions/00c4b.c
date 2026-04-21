// functions/00c4b — 13 functions
#include "libGameKindred.h"




void FUN_00c4b7bc(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00c4be24();
  FUN_00ecf888(param_1 + 0x50a0,uVar1 & 1);
  return;
}




void FUN_00c4b7e8(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4b7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void thunk_FUN_00c4bcfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong auStack_68 [2];
  void *pvStack_58;
  ulong auStack_50 [2];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0xb8) != 0) {
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    pvStack_40 = (void *)0x0;
    auStack_68[0] = 0;
    auStack_68[1] = 0;
    pvStack_58 = (void *)0x0;
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xb88) & 1) * 0x130 + 0x9f8);
    FUN_00e70a24(uVar2,auStack_50);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2c48) & 1) * 0x130 + 0x2ab8);
    FUN_00e70a24(uVar2,auStack_68);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),auStack_50,auStack_68);
    if ((auStack_68[0] & 1) != 0) {
      operator_delete(pvStack_58);
    }
    if ((auStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4b804(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  plVar1 = param_1 + 0x8a;
  (**(code **)(*param_1 + 0x48))();
  fVar12 = 120.0;
  fVar11 = fVar12;
  FUN_00f13f08(plVar1);
  fVar10 = (float)FUN_00f13e54(plVar1);
  fStack_8c = fVar11;
  fVar11 = (float)FUN_00f0d4e0();
  local_90 = fVar10 - (fVar11 + 50.0);
  FUN_00f13f18(param_1 + 0xe5,&local_90);
  plVar2 = param_1 + 199;
  uVar13 = NEON_fmov(0xc0c00000,4);
  fVar14 = (float)((ulong)uVar13 >> 0x20);
  local_98 = CONCAT44(fStack_8c + fVar14,local_90 + (float)uVar13);
  FUN_00f13f18(plVar2,&local_98);
  plVar3 = param_1 + 0x103;
  FUN_00b03710(local_90,plVar3);
  FUN_00b03750(local_90,0,plVar3);
  *(uint *)((long)param_1 + 0x7ac) = *(uint *)((long)param_1 + 0x7ac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
  plVar6 = param_1 + 0x4a2;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(plVar6);
  fVar11 = (float)FUN_00f13e54(plVar6);
  local_98._4_4_ = fVar12;
  fVar10 = (float)FUN_00f0d4e0(param_1 + 0x4b9);
  local_98._0_4_ = fVar11 - (fVar10 + 50.0);
  FUN_00f13f18(param_1 + 0x4fd,&local_98);
  plVar7 = param_1 + 0x4df;
  local_a0 = CONCAT44(local_98._4_4_ + fVar14,(float)local_98 + (float)uVar13);
  FUN_00f13f18(plVar7,&local_a0);
  plVar8 = param_1 + 0x51b;
  FUN_00b03710((float)local_98,plVar8);
  FUN_00b03750((float)local_98,0,plVar8);
  *(uint *)((long)param_1 + 0x286c) = *(uint *)((long)param_1 + 0x286c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x277c) = *(uint *)((long)param_1 + 0x277c) & 0xfffffffb;
  FUN_00f13f18(param_1 + 0xa14,&DAT_01bbd6bc);
  FUN_00f13f18(param_1 + 0x8cb,&DAT_01bbd6bc);
  plVar4 = param_1 + 0x18;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0dad0(plVar4,1);
  plVar5 = param_1 + 100;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0dad0(plVar5,1);
  FUN_00f07940(0,0,plVar4,4,param_1,4);
  FUN_00f07940(0,0,plVar1,4,plVar4,6);
  FUN_00f07b18(0,plVar1,3,param_1,3);
  FUN_00f07940(0,0,param_1 + 0xa1,7,plVar1,7);
  FUN_00f07940(0,0,plVar2,5,plVar1,5);
  FUN_00f07940(0,0,param_1 + 0xe5,8,plVar2,8);
  FUN_00f07940(0,0,plVar3,8,plVar2,8);
  FUN_00f07940(0,0,param_1 + 0x3e,0,plVar1,3);
  FUN_00f07940(0,0,plVar6,4,param_1 + 0x3e,6);
  FUN_00f07b18(0,plVar6,3,param_1,3);
  FUN_00f07940(0,0,param_1 + 0x4b9,7,plVar6,7);
  FUN_00f07940(0,0,plVar7,5,plVar6,5);
  FUN_00f07940(0,0,param_1 + 0x4fd,8,plVar7,8);
  FUN_00f07940(0,0,plVar8,8,plVar7,8);
  FUN_00f07940(0,0,plVar5,4,plVar6,6);
  FUN_00f07b18(0,plVar5,4,param_1,4);
  plVar1 = param_1 + 0x8ba;
  FUN_00f07940(0,0xc2480000,plVar1,6,param_1,6);
  FUN_00f07940(0xc2480000,0,param_1 + 0x8cb,2,plVar1,8);
  FUN_00f07940(0x42480000,0,param_1 + 0xa14,3,plVar1,8);
  FUN_00f07940(0,0,plVar3,7,plVar2,7);
  FUN_00f07940(0,0,plVar8,7,plVar7,7);
  if (*(long *)(lVar9 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4bcc0(long param_1,uint param_2)

{
  FUN_00ecf888(param_1 + 0x4658,param_2 & 1);
  FUN_00ecf888(param_1 + 0x50a0,param_2 & 1);
  return;
}




void FUN_00c4bcfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0xb8) != 0) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_68[0] = 0;
    local_68[1] = 0;
    local_58 = (void *)0x0;
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xb88) & 1) * 0x130 + 0x9f8);
    FUN_00e70a24(uVar2,local_50);
    uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2c48) & 1) * 0x130 + 0x2ab8);
    FUN_00e70a24(uVar2,local_68);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),local_50,local_68);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4bddc(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4bdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c4bdf4(void)

{
  return;
}




void FUN_00c4bdf8(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00c4be24();
  FUN_00ecf888(param_1 + 0x50a0,uVar1 & 1);
  return;
}




uint FUN_00c4be24(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00c4bec8();
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xb88) & 1) * 0x130 + 0x9f8);
    uVar2 = FUN_00e70b04();
    uVar2 = (uVar2 & 1) << 2;
  }
  *(uint *)(param_1 + 0x274) = *(uint *)(param_1 + 0x274) & 0xfffffffb | uVar2;
  uVar2 = FUN_00c4bf4c(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2c48) & 1) * 0x130 + 0x2ab8);
    FUN_00e70b04();
  }
  return uVar1 & uVar2 & 1;
}




undefined8 FUN_00c4bec8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00f08be8(param_1 + 0x818 + ((ulong)*(byte *)(param_1 + 0xb88) & 1) * 0x130 + 0x1e0);
  uVar1 = FUN_00e70b04();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00f08be8(param_1 + 0x818 + ((ulong)*(byte *)(param_1 + 0xb88) & 1) * 0x130 + 0x1e0);
  uVar3 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_TEXTENTRY_EMAIL_MESSAGE",0);
  uVar2 = FUN_00e70b88(uVar2,uVar3);
  return uVar2;
}




undefined8 FUN_00c4bf4c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00f08be8(param_1 + 0x28d8 + ((ulong)*(byte *)(param_1 + 0x2c48) & 1) * 0x130 + 0x1e0);
  uVar1 = FUN_00e70b04();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00f08be8(param_1 + 0x28d8 + ((ulong)*(byte *)(param_1 + 0x2c48) & 1) * 0x130 + 0x1e0);
  uVar3 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_TEXTENTRY_PASS_MESSAGE",0);
  uVar2 = FUN_00e70b88(uVar2,uVar3);
  return uVar2;
}




void FUN_00c4bfd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fc7e0;
  param_1[0xa14] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0xb35);
  FUN_00c925cc(param_1 + 0xa14);
  param_1[0x8cb] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x9ec);
  FUN_00c925cc(param_1 + 0x8cb);
  FUN_00f01868(param_1 + 0x8ba);
  param_1[0x51b] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x8b4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b4]);
    param_1[0x8b4] = 0;
    param_1[0x8b3] = 0;
  }
  if ((void *)param_1[0x8b2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b2]);
    param_1[0x8b2] = 0;
    param_1[0x8b1] = 0;
  }
  if ((void *)param_1[0x8b0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b0]);
    param_1[0x8b0] = 0;
    param_1[0x8af] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x889);
  FUN_00f13d08(param_1 + 0x86e);
  FUN_00f13d08(param_1 + 0x853);
  FUN_009c7fa8(param_1 + 0x59b);
  FUN_00abd150(param_1 + 0x51b);
  param_1[0x4fd] = &PTR_FUN_028266f0;
  param_1[0x514] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x517);
  FUN_00f13d08(param_1 + 0x4fd);
  param_1[0x4df] = &PTR_FUN_028266f0;
  param_1[0x4f6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f9);
  FUN_00f13d08(param_1 + 0x4df);
  FUN_00f0d3a4(param_1 + 0x4b9);
  FUN_00f13d08(param_1 + 0x4a2);
  param_1[0x103] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x49c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x49c]);
    param_1[0x49c] = 0;
    param_1[0x49b] = 0;
  }
  if ((void *)param_1[0x49a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x49a]);
    param_1[0x49a] = 0;
    param_1[0x499] = 0;
  }
  if ((void *)param_1[0x498] != (void *)0x0) {
    operator_delete__((void *)param_1[0x498]);
    param_1[0x498] = 0;
    param_1[0x497] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x471);
  FUN_00f13d08(param_1 + 0x456);
  FUN_00f13d08(param_1 + 0x43b);
  FUN_009c7fa8(param_1 + 0x183);
  FUN_00abd150(param_1 + 0x103);
  param_1[0xe5] = &PTR_FUN_028266f0;
  param_1[0xfc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xff);
  FUN_00f13d08(param_1 + 0xe5);
  param_1[199] = &PTR_FUN_028266f0;
  param_1[0xde] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe1);
  FUN_00f13d08(param_1 + 199);
  FUN_00f0d3a4(param_1 + 0xa1);
  FUN_00f13d08(param_1 + 0x8a);
  FUN_00f0d3a4(param_1 + 100);
  FUN_00f0d3a4(param_1 + 0x3e);
  FUN_00f0d3a4(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}

