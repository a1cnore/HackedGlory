// functions/00a83 — 45 functions
#include "libGameKindred.h"




void FUN_00a83388(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00d9e99c(param_4);
    uVar2 = ~uVar2 & 1;
  }
  uVar4 = FUN_00a83478(param_1 + 0x90,param_2,param_5);
  *(undefined4 *)(param_3 + 0x24) = uVar4;
  *(byte *)(param_3 + 100) = *(byte *)(param_1 + 0xb0) >> 3 & 1;
  *(byte *)(param_3 + 0x65) = *(byte *)(param_1 + 0xb0) >> 4 & 1;
  *(uint *)(param_3 + 0x5c) = *(ushort *)(param_1 + 0xb0) >> 5 & 3;
  bVar1 = *(byte *)(param_1 + 0xb0);
  *(uint *)(param_3 + 0x60) = uVar2;
  *(byte *)(param_3 + 0x66) = bVar1 >> 7;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0xa8);
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00d5babc(param_4);
  }
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  *(byte *)(param_3 + 0x68) = *(byte *)(param_1 + 0xb1) & 1;
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 0xac);
  *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = FUN_00a83478(param_1 + 0x80,param_2,param_5);
  *(undefined4 *)(param_3 + 0x38) = uVar4;
  return;
}




undefined1  [16] FUN_00a83478(uint *param_1,undefined8 param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00a834d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)();
    return auVar4;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00d42698(param_2);
                    /* WARNING: Could not recover jumptable at 0x00a834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*UNRECOVERED_JUMPTABLE)();
    return auVar4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00a83510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2);
    return auVar4;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00a8352c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2,param_3);
    return auVar4;
  case 6:
    plVar2 = (long *)FUN_00d427bc(param_2);
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




void FUN_00a8358c(void)

{
  return;
}




void FUN_00a83590(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  float __x_00;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,&local_48,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_48;
  param_3 = param_3 - local_40;
  __x = fVar3 * fVar3 + (param_2 - fStack_44) * (param_2 - fStack_44) + param_3 * param_3;
  __x_00 = DAT_03218f88;
  fVar4 = DAT_03218f90;
  if (0.001 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    __x_00 = fVar3 / fVar4;
    fVar4 = param_3 / fVar4;
  }
  atan2f(fVar4,__x_00);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00a83660(long param_1)

{
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x21;
  return param_1 + 0x18;
}




long FUN_00a83684(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x22;
  return param_1 + 0x18;
}




long FUN_00a836ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x44;
  return param_1 + 0x18;
}




void FUN_00a836d4(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStandard";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_00a83704(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStrong";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_00a83734(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00a815f4(param_1 + 0x18,uVar1,uVar1,param_2);
  return;
}




void FUN_00a83770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00a81c88(param_1 + 0x18,uVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a837a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027cf020;
  param_1[1] = 0;
  param_1[3] = &PTR_FUN_027ceef0;
  param_1[2] = &PTR_FUN_027cf170;
  *(undefined4 *)(param_1 + 5) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  memset(param_1 + 6,0,0x5c);
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x16) = 1;
  uVar1 = _DAT_03218ef8;
  *(int *)(param_1 + 0x18) = (int)param_1 + 0x18;
  param_1[0x17] = uVar1;
  *(ushort *)(param_1 + 0x19) = *(ushort *)(param_1 + 0x19) & 0xfe00 | 0x30;
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0xff000000;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xe0;
  return;
}




void FUN_00a83874(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_00a83894;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




void FUN_00a83894(undefined8 *param_1)

{
  FUN_00d6a1f8(*param_1);
  return;
}




void FUN_00a8389c(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_00a838bc;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




void FUN_00a838bc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  uVar3 = FUN_00d426b0(*param_1);
  FUN_00d9e1e0(uVar2,uVar3,&local_30);
  atan2f(fStack_2c,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a83930(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_00a83950;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




void FUN_00a83950(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00d6a1f8(*param_1);
  fVar4 = (float)FUN_00d6a25c(*param_1);
  uVar2 = FUN_00d426b0(*param_1);
  FUN_00d580a0(uVar2,&local_40);
  atan2f(fVar4 - fStack_3c,fVar3 - local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a839d4(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_00a839f4;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




undefined1  [16] FUN_00a839f4(undefined8 *param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  FUN_00d66d28(*param_1);
  pfVar1 = (float *)FUN_00da2cf8();
  if (((ABS(pfVar1[2]) < 1.1920929e-07) && (ABS(*pfVar1) < 1.1920929e-07)) &&
     (ABS(pfVar1[1]) < 1.1920929e-07)) {
    return ZEXT816(0);
  }
  auVar2._0_4_ = atan2f(pfVar1[2],*pfVar1);
  auVar2._4_4_ = extraout_var;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}




void FUN_00a83a58(long param_1)

{
  *(code **)(param_1 + 0x78) = FUN_00a83a68;
  return;
}




void FUN_00a83a68(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d67b34(*param_1);
  fVar2 = (float)FUN_00d67b3c(*param_1);
  *param_2 = 1.0 - fVar1 / fVar2;
  return;
}




void FUN_00a83ab4(long param_1)

{
  *(code **)(param_1 + 0x78) = FUN_00a83ac4;
  return;
}




void FUN_00a83ac4(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d67b34(*param_1);
  fVar2 = (float)FUN_00d67b3c(*param_1);
  *param_2 = fVar1 / fVar2;
  return;
}




long FUN_00a83b08(long param_1)

{
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x21;
  return param_1 + 0x18;
}




long FUN_00a83b2c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x22;
  return param_1 + 0x18;
}




long FUN_00a83b54(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x23;
  return param_1 + 0x18;
}




long FUN_00a83b7c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x44;
  return param_1 + 0x18;
}




void FUN_00a83ba4(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStandard";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_00a83bd4(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStrong";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_00a83c04(long param_1)

{
  FUN_00a82514(param_1 + 0x18);
  return;
}




void FUN_00a83c0c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xf8 | param_2 & 7;
  return;
}




void FUN_00a83c1c(long param_1)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 8;
  return;
}




void FUN_00a83c2c(long param_1)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x10;
  return;
}




void thunk_FUN_00a83c40(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  float fStack_4c;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  switch(*(byte *)(param_1 + 0xd0) & 7) {
  case 1:
    iVar6 = FUN_00d67b84(*param_2);
    goto LAB_00a83cac;
  case 2:
    FUN_00d67b84(*param_2);
    lVar10 = FUN_00d9e390();
    if (lVar10 != 0) {
      FUN_00cedce4();
      FUN_00d9e390();
      cVar2 = FUN_00d55870();
      cVar3 = FUN_00d55870(lVar10);
      if (cVar2 != cVar3) goto LAB_00a83db0;
    }
    break;
  case 3:
    FUN_00d66d28(*param_2);
    iVar6 = FUN_00d5cf60();
LAB_00a83cac:
    iVar4 = FUN_00cedce4();
    if (iVar6 != iVar4) goto LAB_00a83db0;
    break;
  case 4:
    lVar10 = FUN_00d66d28(*param_2);
    FUN_00cedce4();
    uVar5 = FUN_00cecb68();
    uVar8 = FUN_00d7d0a0(*(undefined8 *)(lVar10 + 0x80),uVar5);
    if ((uVar8 & 1) == 0) goto LAB_00a83db0;
  }
  uVar9 = FUN_00d66d28(*param_2);
  FUN_00d67b84(*param_2);
  lVar10 = FUN_00d9e390();
  if ((lVar10 != 0) && (iVar6 = FUN_00d5cf60(lVar10), iVar6 != -1)) {
    FUN_00d5cf60(lVar10);
    lVar10 = FUN_00d9e390();
  }
  FUN_00a827dc(param_1 + 0x18,uVar9,lVar10,param_2);
  uVar7 = FUN_00d66cf4(*param_2);
  fStack_4c = (float)uVar7;
  FUN_00d5a7c4(uVar9,*(undefined4 *)(param_1 + 0xc0),"Stacks",1,&fStack_4c);
LAB_00a83db0:
  if (*(long *)(lVar1 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a83c40(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  switch(*(byte *)(param_1 + 0xd0) & 7) {
  case 1:
    iVar6 = FUN_00d67b84(*param_2);
    goto LAB_00a83cac;
  case 2:
    FUN_00d67b84(*param_2);
    lVar10 = FUN_00d9e390();
    if (lVar10 != 0) {
      FUN_00cedce4();
      FUN_00d9e390();
      cVar2 = FUN_00d55870();
      cVar3 = FUN_00d55870(lVar10);
      if (cVar2 != cVar3) goto LAB_00a83db0;
    }
    break;
  case 3:
    FUN_00d66d28(*param_2);
    iVar6 = FUN_00d5cf60();
LAB_00a83cac:
    iVar4 = FUN_00cedce4();
    if (iVar6 != iVar4) goto LAB_00a83db0;
    break;
  case 4:
    lVar10 = FUN_00d66d28(*param_2);
    FUN_00cedce4();
    uVar5 = FUN_00cecb68();
    uVar8 = FUN_00d7d0a0(*(undefined8 *)(lVar10 + 0x80),uVar5);
    if ((uVar8 & 1) == 0) goto LAB_00a83db0;
  }
  uVar9 = FUN_00d66d28(*param_2);
  FUN_00d67b84(*param_2);
  lVar10 = FUN_00d9e390();
  if ((lVar10 != 0) && (iVar6 = FUN_00d5cf60(lVar10), iVar6 != -1)) {
    FUN_00d5cf60(lVar10);
    lVar10 = FUN_00d9e390();
  }
  FUN_00a827dc(param_1 + 0x18,uVar9,lVar10,param_2);
  uVar7 = FUN_00d66cf4(*param_2);
  local_4c = (float)uVar7;
  FUN_00d5a7c4(uVar9,*(undefined4 *)(param_1 + 0xc0),"Stacks",1,&local_4c);
LAB_00a83db0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a83ddc(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xa8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  if ((*(byte *)(param_1 + 0xd0) >> 3 & 1) == 0) {
    uVar1 = uVar1 | 8;
    *(ushort *)(param_1 + 200) = uVar1;
  }
  *(ushort *)(param_1 + 200) = uVar1 | 0x10;
  FUN_00a83c40();
  return;
}




void FUN_00a83e0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00a82e70(param_1 + 0x18,uVar1);
  return;
}




void FUN_00a83e3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0xd0) >> 4 & 1) == 0) {
    uVar4 = FUN_00d66d28(*param_2);
    FUN_00d67b84(*param_2);
    lVar5 = FUN_00d9e390();
    if (lVar5 != 0) {
      iVar2 = FUN_00d5cf60(lVar5);
      if (iVar2 != -1) {
        FUN_00d5cf60(lVar5);
        lVar5 = FUN_00d9e390();
      }
    }
    FUN_00a82f28(param_1 + 0x18,uVar4,lVar5,param_2);
    uVar3 = FUN_00d66cf4(*param_2);
    local_4c = (float)uVar3;
    FUN_00d5a7c4(uVar4,*(undefined4 *)(param_1 + 0xc0),"Stacks",1,&local_4c);
  }
  else {
    uVar4 = FUN_00d66d28(*param_2);
    FUN_00a82e70(param_1 + 0x18,uVar4);
    FUN_00a83c40(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a83f54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cedc0;
  return;
}




void FUN_00a83f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ceef0;
  return;
}




void FUN_00a83f84(void)

{
  return;
}




void FUN_00a83f88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cf0e0;
  param_1[3] = &PTR_FUN_027cedc0;
  FUN_00cfc44c();
  return;
}




void FUN_00a83fac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cf0e0;
  param_1[3] = &PTR_FUN_027cedc0;
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00a83ff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cf020;
  param_1[3] = &PTR_FUN_027ceef0;
  return;
}

