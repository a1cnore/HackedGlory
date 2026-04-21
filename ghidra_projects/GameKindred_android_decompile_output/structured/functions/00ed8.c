// functions/00ed8 — 93 functions
#include "libGameKindred.h"




void FUN_00ed803c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = param_1 + 0x37;
  FUN_00910394(plVar1);
  uVar3 = (**(code **)(*param_1 + 0x1d0))(param_1);
  uVar4 = FUN_00e70b34(uVar3,&DAT_03210450);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_00e70b88(plVar1,&DAT_03210450);
    if ((uVar4 & 1) == 0) {
      FUN_00e705c8(&local_48,&DAT_01e277f2);
    }
    else {
      thunk_FUN_00e7051c(&local_48,plVar1);
    }
    FUN_00f0d75c(param_1 + 0x39,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8108(float param_1,long param_2)

{
  FUN_00f13f08(param_1 + 5.0,param_2 + 0x2f8);
                    /* WARNING: Could not recover jumptable at 0x00ed813c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0xb8) + 0xb8))((long *)(param_2 + 0xb8));
  return;
}




void FUN_00ed8140(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0xb8) + 0xb8))((long *)(param_1 + 0xb8));
  if ((*(byte *)(param_1 + 0x14c) >> 3 & 1) == 0) {
    return;
  }
  FUN_00ed818c(param_1,1);
  return;
}




void FUN_00ed818c(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  FUN_00f0036c((long)&local_60 + 4,&local_60);
  fVar5 = (float)FUN_00f0d548(param_1 + 0x39);
  fVar6 = (float)FUN_00f13e54(param_1 + 0x5f);
  iVar3 = *(int *)((long)param_1 + 0x4a4);
  (**(code **)(*param_1 + 0x1d0))(param_1);
  iVar2 = FUN_00e70b14();
  if (iVar3 == iVar2) {
    fVar7 = fVar5;
    if (fVar5 < fVar6) {
LAB_00ed8278:
      fVar5 = *(float *)(param_1 + 0x41);
      goto joined_r0x00ed82a8;
    }
    fVar8 = *(float *)(param_1 + 0x41);
    fVar5 = -(fVar5 - fVar6);
LAB_00ed8268:
    if (fVar8 == fVar5) goto LAB_00ed82b8;
    *(float *)(param_1 + 0x41) = fVar5;
  }
  else {
    if (*(int *)((long)param_1 + 0x4a4) == 0) {
      uVar4 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x1d0))(param_1);
      iVar3 = FUN_00e70b14();
      if (iVar3 != 0) {
        fVar7 = (float)FUN_00f09ba0(param_1 + 0x53,*(undefined4 *)((long)param_1 + 0x4a4));
        if ((fVar5 < fVar6) || (fVar7 <= fVar6)) goto LAB_00ed8278;
        fVar8 = *(float *)(param_1 + 0x41);
        fVar5 = fVar6 - fVar7;
        goto LAB_00ed8268;
      }
      uVar4 = *(undefined4 *)((long)param_1 + 0x4a4);
    }
    fVar7 = (float)FUN_00f09ba0(param_1 + 0x53,uVar4);
    fVar5 = *(float *)(param_1 + 0x41);
joined_r0x00ed82a8:
    if (fVar5 == 0.0) goto LAB_00ed82b8;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  FUN_0091ada4(param_1 + 0x39);
LAB_00ed82b8:
  fVar6 = (fVar6 + -5.0) * local_60._4_4_;
  fVar5 = fVar7 * local_60._4_4_;
  if (fVar6 <= fVar7 * local_60._4_4_) {
    fVar5 = fVar6;
  }
  FUN_00ed96a8(fVar5,0,param_1 + 0x19,param_2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00ed8314(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00f02710(param_1,param_2 & 1);
  if (((lVar1 != param_1) && ((*(byte *)(param_1 + 0x4a0) >> 4 & 1) != 0)) &&
     ((uVar2 = FUN_019806d8(0), (uVar2 & 1) != 0 ||
      ((uVar2 = FUN_019806d8(2), (uVar2 & 1) != 0 || (uVar2 = FUN_019806d8(1), (uVar2 & 1) != 0)))))
     ) {
    FUN_00ed7eb0(param_1);
    *(byte *)(param_1 + 0x4a8) = *(byte *)(param_1 + 0x4a8) & 0xfd;
  }
  return lVar1;
}




void FUN_00ed8388(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x4a8);
  if ((param_3 & 1) == 0) {
    if ((bVar1 >> 1 & 1) == 0) {
      FUN_00ed7eb0(param_1);
      bVar1 = *(byte *)(param_1 + 0x4a8);
    }
    *(byte *)(param_1 + 0x4a8) = bVar1 & 0xfd;
    return;
  }
  *(byte *)(param_1 + 0x4a8) = bVar1 | 2;
  FUN_00ed7d60(param_1);
  return;
}




void FUN_00ed83dc(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x4a0) >> 4 & 1) == 0) {
    return;
  }
  iVar2 = FUN_00f04924(param_2);
  iVar1 = iVar2 + -1;
  if (iVar2 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x4a4) = iVar1;
  (**(code **)(*(long *)(param_1 + 0xb8) + 200))((long *)(param_1 + 0xb8),iVar1,0);
  FUN_00ed818c(param_1,1);
  return;
}




void FUN_00ed8440(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x94) >> 4 & 1) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x1d0))(param_1);
  iVar1 = FUN_00e70b14();
  iVar2 = FUN_00f04924(param_2);
  if (iVar2 < iVar1) {
    iVar1 = iVar2 + 1;
  }
  *(int *)((long)param_1 + 0x4a4) = iVar1;
  (**(code **)(param_1[0x17] + 200))(param_1 + 0x17,iVar1,0);
  FUN_00ed818c(param_1,1);
  return;
}




void FUN_00ed84c8(long param_1)

{
  FUN_00ed89e0(param_1 + 0xb8);
  FUN_00f0d808(param_1 + 0x1c8);
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
    return;
  }
  return;
}




void FUN_00ed8518(long param_1)

{
  FUN_00ed84c8(param_1 + -0xb8);
  return;
}




void FUN_00ed8520(long param_1)

{
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4();
    return;
  }
  return;
}




void FUN_00ed853c(long param_1)

{
  if ((*(uint *)(param_1 + -0x34) & 0x7f80) != 0) {
    *(uint *)(param_1 + -0x34) = *(uint *)(param_1 + -0x34) & 0xffff807f;
    FUN_0091ada4(param_1 + -0xb8);
    return;
  }
  return;
}




void FUN_00ed8560(undefined8 param_1)

{
  FUN_00f00478();
  FUN_00ed7f14(param_1);
  FUN_00ed818c(param_1,0);
  return;
}




void FUN_00ed8590(long param_1)

{
  param_1 = param_1 + -0xb8;
  FUN_00f00478(param_1);
  FUN_00ed7f14(param_1);
  FUN_00ed818c(param_1,0);
  return;
}




void FUN_00ed85c4(undefined8 param_1)

{
  FUN_00f00478();
  FUN_00ed7f14(param_1);
  FUN_00ed818c(param_1,0);
  return;
}




void FUN_00ed85f4(long param_1)

{
  param_1 = param_1 + -0xb8;
  FUN_00f00478(param_1);
  FUN_00ed7f14(param_1);
  FUN_00ed818c(param_1,0);
  return;
}




void FUN_00ed8628(void)

{
  return;
}




void FUN_00ed862c(void)

{
  return;
}




void FUN_00ed8630(long param_1)

{
  FUN_00f0de68(param_1 + 0x1c8);
  return;
}




undefined8 FUN_00ed8638(void)

{
  return 0;
}




byte FUN_00ed8640(long param_1)

{
  return *(byte *)(param_1 + 0x4a8) & 1;
}




byte FUN_00ed864c(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) >> 6 & 1;
}




bool FUN_00ed8658(long param_1)

{
  return *(char *)(param_1 + 0x4a0) < '\0';
}




undefined8 FUN_00ed8668(void)

{
  return 1;
}




undefined8 FUN_00ed8670(void)

{
  return 0;
}




undefined8 FUN_00ed8678(void)

{
  return 1;
}




undefined8 FUN_00ed8680(void)

{
  return 0;
}




undefined8 FUN_00ed8688(void)

{
  return 0;
}




undefined8 FUN_00ed8690(void)

{
  return 1;
}




undefined8 FUN_00ed8698(void)

{
  return 0;
}




byte FUN_00ed86a0(long param_1)

{
  return *(byte *)(param_1 + 0x4a0) & 7;
}




long FUN_00ed86ac(long param_1)

{
  return param_1 + 0x298;
}




long FUN_00ed86b4(long param_1)

{
  return param_1 + 0x298;
}




void FUN_00ed86bc(void)

{
  return;
}




void FUN_00ed86c0(void)

{
  return;
}




undefined4 FUN_00ed86c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x498);
}




void FUN_00ed86cc(long param_1)

{
  FUN_00f08be8(param_1 + 0x298);
  return;
}




long FUN_00ed86d4(long param_1)

{
  return param_1 + 0x1b8;
}




void FUN_00ed86dc(long param_1)

{
  FUN_00f0de68(param_1 + 0x110);
  return;
}




undefined8 FUN_00ed86e4(void)

{
  return 0;
}




byte FUN_00ed86ec(long param_1)

{
  return *(byte *)(param_1 + 0x3f0) & 1;
}




byte FUN_00ed86f8(long param_1)

{
  return *(byte *)(param_1 + 1000) >> 6 & 1;
}




bool FUN_00ed8704(long param_1)

{
  return *(char *)(param_1 + 1000) < '\0';
}




undefined8 FUN_00ed8714(void)

{
  return 1;
}




undefined8 FUN_00ed871c(void)

{
  return 0;
}




undefined8 FUN_00ed8724(void)

{
  return 1;
}




undefined8 FUN_00ed872c(void)

{
  return 0;
}




undefined8 FUN_00ed8734(void)

{
  return 0;
}




undefined8 FUN_00ed873c(void)

{
  return 1;
}




undefined8 FUN_00ed8744(void)

{
  return 0;
}




byte FUN_00ed874c(long param_1)

{
  return *(byte *)(param_1 + 1000) & 7;
}




long FUN_00ed8758(long param_1)

{
  return param_1 + 0x1e0;
}




long FUN_00ed8760(long param_1)

{
  return param_1 + 0x1e0;
}




long FUN_00ed8768(long param_1)

{
  return param_1 + -0xb8;
}




long FUN_00ed8770(long param_1)

{
  return param_1 + -0xb8;
}




undefined4 FUN_00ed8778(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3e0);
}




void FUN_00ed8780(long param_1)

{
  FUN_00f08be8(param_1 + 0x1e0);
  return;
}




long FUN_00ed8788(long param_1)

{
  return param_1 + 0x100;
}




void FUN_00ed8790(void)

{
  return;
}




void FUN_00ed8794(void)

{
  return;
}




void FUN_00ed8798(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_02823b10;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return;
}




void FUN_00ed87d4(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00ed87f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = &PTR_thunk_FUN_00f13d08_02823c58;
  param_1[0x17] = &PTR_FUN_02823da0;
  param_1[0x19] = uVar1;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return;
}




void FUN_00ed8854(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed8858);
  (*pcVar1)();
}




void FUN_00ed8858(void)

{
  return;
}




void FUN_00ed885c(long param_1)

{
  FUN_00f13d08(param_1 + -0xb8);
  return;
}




void FUN_00ed8864(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed8868);
  (*pcVar1)();
}




void FUN_00ed8868(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00f048e0(param_1,param_2,0);
  *param_1 = &PTR_FUN_02823de8;
  param_1[4] = param_4;
  param_1[5] = param_3;
  return;
}




void FUN_00ed88b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f048e0(param_1,param_2,0);
  *param_1 = &PTR_FUN_02823e10;
  param_1[4] = param_3;
  return;
}




bool FUN_00ed88f0(undefined8 param_1,int param_2)

{
  return DAT_03210c94 == param_2;
}




bool FUN_00ed8908(undefined8 param_1,int param_2)

{
  return DAT_03210c98 == param_2;
}




void FUN_00ed891c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_02823e38;
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_02823f50;
  puVar1[1] = param_1;
  param_1[1] = puVar1;
  return;
}




void FUN_00ed8964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02823e38;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00ed89a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xed89ac);
  (*pcVar1)();
}




void FUN_00ed89ac(long param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed89c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2 & 1);
    return;
  }
  return;
}




void FUN_00ed89c8(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed89d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x50))();
    return;
  }
  return;
}




void FUN_00ed89e0(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed89f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x58))();
    return;
  }
  return;
}




void FUN_00ed89f8(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed8a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x60))();
    return;
  }
  return;
}




undefined8 * FUN_00ed8a10(void)

{
  return &DAT_03210450;
}




void FUN_00ed8a1c(void)

{
  return;
}




void FUN_00ed8a20(void)

{
  return;
}




void FUN_00ed8a24(void)

{
  return;
}




void FUN_00ed8a28(void)

{
  return;
}




void FUN_00ed8a2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02823f50;
  FUN_01980938(0);
  FUN_019815b4(param_1);
  return;
}




void FUN_00ed8a64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02823f50;
  FUN_01980938(0);
  FUN_019815b4(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ed8aa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))();
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_00f04c40(auStack_50,DAT_03210fb4,uVar2);
  FUN_00f04760(uVar2,auStack_50,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8b34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0xd8))();
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_00f04c40(auStack_60,DAT_03210fbc,uVar2);
  FUN_00f0491c(auStack_60,param_2);
  FUN_00f04760(uVar2,auStack_60,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8bdc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0xe0))();
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_00f04c40(auStack_60,DAT_03210fb8,uVar2);
  FUN_00f0491c(auStack_60,param_2);
  FUN_00f04760(uVar2,auStack_60,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8c84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0xe8))();
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_00f04c40(auStack_60,DAT_03210fac,uVar2);
  FUN_00f0491c(auStack_60,param_2);
  FUN_00f04760(uVar2,auStack_60,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8d2c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0xf0))();
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_00f04c40(auStack_60,DAT_03210fc4,uVar2);
  FUN_00f0491c(auStack_60,param_3);
  FUN_00f04760(uVar2,auStack_60,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8dd4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))();
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  FUN_00f04c40(auStack_60,DAT_03210fc8,uVar2);
  FUN_00f0491c(auStack_60,param_3);
  FUN_00f04760(uVar2,auStack_60,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8e7c(undefined4 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_2[1] + 0x90))();
  FUN_00f04c40(auStack_60,DAT_03210fc0,uVar2);
  FUN_00f0491c(auStack_60,param_1);
  FUN_00f04760(uVar2,auStack_60,1);
  (**(code **)(*param_2 + 0x50))(param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed8f2c(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_01980938(0);
  }
  else {
    plVar6 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x90))();
    (**(code **)(*plVar6 + 0x68))(plVar6,auStack_60,local_68);
    local_70 = CONCAT44(local_68._4_4_ - auStack_60._4_4_,local_68._0_4_ - auStack_60._0_4_);
    uVar7 = (**(code **)(**(long **)(param_1 + 8) + 0xb0))();
    uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8));
    uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))(*(long **)(param_1 + 8));
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    uVar8 = (**(code **)(**(long **)(param_1 + 8) + 0xa8))(*(long **)(param_1 + 8));
    bVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8));
    bVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8));
    FUN_019808c0(uVar9,param_1,uVar7,auStack_60,&local_70,uVar4,uVar5 & 1,0,uVar8,bVar2 & 1,
                 bVar3 & 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

