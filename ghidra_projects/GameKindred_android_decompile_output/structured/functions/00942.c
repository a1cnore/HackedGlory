// functions/00942 — 63 functions
#include "libGameKindred.h"




void thunk_FUN_0094271c(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00942738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x68))(DAT_02c7c540,param_1,param_2);
  return;
}




void FUN_00942008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bacb0;
  FUN_00e7d840(param_1 + 1);
  param_1[0xda] = 0;
  FUN_00924b34();
  return;
}




void FUN_0094203c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bacb0;
  FUN_00923d80();
  FUN_00e7d880(param_1 + 1);
  return;
}




void FUN_00942070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bacb0;
  FUN_00923d80();
  FUN_00e7d880(param_1 + 1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009420b0(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pvVar1 = operator_new(0x2810);
  FUN_00910c28();
  *(void **)(param_1 + 0x6d0) = pvVar1;
  uVar2 = FUN_00e7d8f8(param_1 + 8,pvVar1);
  if ((uVar2 & 1) == 0) {
    if (*(long **)(param_1 + 0x6d0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x6d0) + 8))();
    }
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
  }
  else {
    FUN_00924b5c();
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00942118(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_00e7daf0(lVar1);
  if ((uVar2 & 1) == 0) {
    FUN_00e7da18(lVar1);
  }
  FUN_00e7d910(lVar1);
  if (*(long **)(param_1 + 0x6d0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6d0) + 8))();
  }
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  FUN_00923d80();
  return;
}




uint FUN_0094216c(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  undefined1 local_58 [4];
  int local_54;
  ulong local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_50 = 0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_54 = 0;
  local_58[0] = 1;
  FUN_009481e8(&local_50,&local_54,local_58);
  uVar4 = 0;
  bVar5 = (byte)local_50 & 1;
  uVar1 = (ulong)((byte)local_50 >> 1);
  if ((local_50 & 1) != 0) {
    uVar1 = local_48;
  }
  if ((local_54 != 0) && (uVar1 != 0)) {
    pvVar2 = (void *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pvVar2 = local_40;
    }
    uVar4 = FUN_00e7d954(param_1 + 8,pvVar2,local_54,0,0);
    bVar5 = (byte)local_50 & 1;
  }
  if (bVar5 != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00942244(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e7daf0(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e7da18(param_1 + 8);
  return;
}




void FUN_0094227c(long param_1)

{
  ulong uVar1;
  
  param_1 = param_1 + 8;
  uVar1 = FUN_00e7dab4(param_1);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00e7da78(param_1), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_00e7db2c(0,0xbf800000,param_1);
  thunk_FUN_00e7e054(param_1);
  return;
}




undefined8 FUN_009422d0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e7dab4(param_1 + 1);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e7df94(param_1 + 1,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_009052d4();
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}




void FUN_0094234c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027bad48;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_009240e4();
  return;
}




void FUN_00942370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bad48;
  FUN_00924afc();
  return;
}




void FUN_00942384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bad48;
  FUN_00924afc();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009423b8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  return 1;
}




void FUN_009423d4(void)

{
  return;
}




bool FUN_009423d8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_009236c8();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return bVar1;
}




void FUN_00942410(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 8) == 1) {
    fVar3 = (float)FUN_01988c78();
    *(float *)(param_1 + 0x10) = fVar3 + *(float *)(param_1 + 0x10);
  }
  else if (*(int *)(param_1 + 8) == 2) goto LAB_009424cc;
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_00942478;
  fVar3 = *(float *)(param_1 + 0x14);
  while (fVar3 <= *(float *)(param_1 + 0x10)) {
    FUN_0092b85c(param_1 + 0x19,*(undefined4 *)(param_1 + 0x81c));
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (*(int *)(param_1 + 8) == 2) break;
LAB_00942478:
    uVar2 = FUN_009235b8(param_1 + 0x19,param_1 + 0x81c,&local_3c,1);
    if ((uVar2 & 1) == 0) break;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(float *)(param_1 + 0x14) = local_3c;
    fVar3 = local_3c;
  }
LAB_009424cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009424f4(void)

{
  return 1;
}




undefined8 FUN_009424fc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}




undefined8 FUN_00942514(long param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return 1;
}




undefined8 FUN_00942528(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00924b6c();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return 1;
}




undefined8 FUN_00942550(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  thunk_FUN_00e6efd8();
  FUN_00e70314(&DAT_02c7c530);
  if (param_1 == 1) {
    plVar1 = operator_new(0x820);
    *(undefined4 *)(plVar1 + 1) = 0;
    plVar1[2] = 0;
    *plVar1 = (long)&PTR_FUN_027bad48;
    *(undefined1 *)(plVar1 + 3) = 1;
    FUN_009240e4();
    DAT_02c7c540 = plVar1;
  }
  else if (param_1 == 0) {
    plVar1 = operator_new(0x6d8);
    *plVar1 = (long)&PTR_FUN_027bacb0;
    FUN_00e7d840(plVar1 + 1);
    plVar1[0xda] = 0;
    FUN_00924b34();
    DAT_02c7c540 = plVar1;
  }
  else if (DAT_02c7c540 == (long *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00942604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*DAT_02c7c540 + 0x10))(DAT_02c7c540);
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00942618(void)

{
  FUN_009437b0();
  (**(code **)(*DAT_02c7c540 + 0x18))();
  DAT_02c7c4f0 = 0;
  _DAT_02c7c4f8 = 0;
  DAT_02c7c508 = 0;
  DAT_02c7c500 = 0;
  DAT_02c7c524 = 0;
  DAT_02c7c51c = 0;
  DAT_02c7c514 = 0;
  if (DAT_02c7c540 != (long *)0x0) {
    (**(code **)(*DAT_02c7c540 + 8))();
  }
  DAT_02c7c540 = (long *)0x0;
  thunk_FUN_00e6efe4();
  return;
}




void FUN_00942680(void)

{
                    /* WARNING: Could not recover jumptable at 0x00942690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x20))();
  return;
}




void FUN_00942694(void)

{
                    /* WARNING: Could not recover jumptable at 0x009426a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x28))();
  return;
}




void FUN_009426a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x009426b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x30))();
  return;
}




void FUN_009426bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x009426cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x38))();
  return;
}




void FUN_009426d0(void)

{
  (**(code **)(*DAT_02c7c540 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00942704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x10))();
  return;
}




void FUN_00942708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00942718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x40))();
  return;
}




void FUN_0094271c(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00942738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x68))(DAT_02c7c540,param_1,param_2);
  return;
}




void FUN_0094273c(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00942754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x78))(DAT_02c7c540,param_1 & 1);
  return;
}




void FUN_00942758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00942768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x80))();
  return;
}




void FUN_0094276c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0094277c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x58))();
  return;
}




void FUN_00942780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00942790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x48))();
  return;
}




void FUN_00942794(void)

{
                    /* WARNING: Could not recover jumptable at 0x009427a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x50))();
  return;
}




void FUN_009427a8(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = clock_gettime(1,&local_38);
  lVar4 = local_38.tv_nsec - DAT_02c7c538;
  lVar3 = local_38.tv_sec - DAT_02c7c530;
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_38.tv_nsec + 1000000000) - DAT_02c7c538;
  }
  FUN_00ce9120((double)(lVar4 + lVar3 * 1000000000) * 1e-09,iVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00942840(float param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,&local_48);
  lVar3 = local_48.tv_nsec - DAT_02c7c538;
  lVar2 = local_48.tv_sec - DAT_02c7c530;
  if (lVar3 < 0) {
    lVar2 = lVar2 + -1;
    lVar3 = (local_48.tv_nsec + 1000000000) - DAT_02c7c538;
  }
  dVar4 = (double)(lVar3 + lVar2 * 1000000000) * 1e-09 - (double)param_1;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  FUN_00942900((float)dVar4,&DAT_02c7c4f0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00942900(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  *(float *)(param_2 + (ulong)uVar2 * 4) = param_1;
  iVar1 = 0;
  if (uVar2 + 1 < 3) {
    iVar1 = uVar2 + 1;
  }
  *(int *)(param_2 + 0x10) = iVar1;
  if (*(int *)(param_2 + 0xc) != 3) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  }
  fVar5 = *(float *)(param_2 + 0x1c);
  fVar3 = *(float *)(param_2 + 0x20);
  fVar4 = param_1;
  if (*(float *)(param_2 + 0x14) <= param_1) {
    fVar4 = *(float *)(param_2 + 0x14);
  }
  *(float *)(param_2 + 0x14) = fVar4;
  fVar4 = param_1;
  if (param_1 <= *(float *)(param_2 + 0x18)) {
    fVar4 = *(float *)(param_2 + 0x18);
  }
  *(float *)(param_2 + 0x18) = fVar4;
  if ((param_1 < fVar5) && (fVar5 <= fVar3)) {
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  }
  if ((fVar5 <= fVar3) && (fVar3 < param_1)) {
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
  }
  fVar4 = *(float *)(param_2 + 0x30);
  uVar2 = *(int *)(param_2 + 0x2c) + 1;
  fVar3 = fVar4 + (param_1 - fVar4) / (float)uVar2;
  *(uint *)(param_2 + 0x2c) = uVar2;
  *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + (param_1 - fVar4) * (param_1 - fVar3);
  *(float *)(param_2 + 0x38) = fVar4;
  *(float *)(param_2 + 0x30) = fVar3;
  return;
}




void FUN_009429bc(void)

{
  FUN_009429cc(&DAT_02c7c4f0,3);
  return;
}




float FUN_009429cc(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar5 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  iVar3 = uVar2 - uVar5;
  if (0 < iVar3) {
    fVar6 = 0.0;
    if ((int)uVar5 < (int)uVar2) {
      fVar6 = 0.0;
      do {
        uVar1 = *(int *)(param_1 + 0x10) + uVar5;
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar1 / uVar2;
        }
        uVar5 = uVar5 + 1;
        fVar6 = fVar6 + *(float *)(param_1 + (ulong)(uVar1 - uVar4 * uVar2) * 4);
      } while ((int)uVar5 < (int)uVar2);
    }
    return fVar6 / (float)iVar3;
  }
  return -1.0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00942a2c(void)

{
  DAT_02c7c4f0 = 0;
  _DAT_02c7c4f8 = 0;
  DAT_02c7c508 = 0;
  DAT_02c7c500 = 0;
  DAT_02c7c524 = 0;
  DAT_02c7c51c = 0;
  DAT_02c7c514 = 0;
  return;
}




void FUN_00942a50(float param_1,float param_2)

{
  DAT_02c7c50c._0_4_ = 0.0;
  if (param_1 <= param_2) {
    DAT_02c7c50c._0_4_ = param_1;
  }
  DAT_02c7c50c._4_4_ = -1.0;
  if (param_1 <= param_2) {
    DAT_02c7c50c._4_4_ = param_2;
  }
  return;
}




void FUN_00942a74(undefined4 *param_1,int *param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = 0.0;
  *param_1 = DAT_02c7c508;
  *param_2 = DAT_02c7c514._4_4_ + (int)DAT_02c7c514;
  *param_3 = DAT_02c7c51c._4_4_;
  if (1 < (uint)DAT_02c7c51c) {
    fVar1 = SQRT((float)DAT_02c7c524 / (float)(uint)DAT_02c7c51c);
    if (NAN(fVar1)) {
      fVar1 = sqrtf((float)DAT_02c7c524 / (float)(uint)DAT_02c7c51c);
    }
  }
  *param_4 = fVar1;
  return;
}




void FUN_00942ae8(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00942b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x60))(DAT_02c7c540,param_1);
  return;
}




void FUN_00942b04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00942b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c7c540 + 0x70))();
  return;
}




void FUN_00942b28(long param_1)

{
  FUN_00e7da78(param_1 + 8);
  return;
}




void FUN_00942b30(long param_1)

{
  FUN_00e7dab4(param_1 + 8);
  return;
}




undefined8 FUN_00942b38(void)

{
  return 0;
}




undefined8 FUN_00942b40(void)

{
  return 0;
}




undefined8 FUN_00942b48(void)

{
  return 0;
}




bool FUN_00942b50(undefined8 param_1,int param_2)

{
  return param_2 == 0;
}




undefined8 FUN_00942b5c(void)

{
  return 0;
}




void FUN_00942b64(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00942b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6d0) + 0x48))(*(long **)(param_1 + 0x6d0),param_2 & 1);
  return;
}




void FUN_00942b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00942b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6d0) + 0x50))();
  return;
}




undefined8 FUN_00942b88(void)

{
  return 0;
}




bool FUN_00942b90(long param_1)

{
  return *(int *)(param_1 + 8) == 1;
}




undefined8 FUN_00942ba0(void)

{
  return 1;
}




bool FUN_00942ba8(undefined8 param_1,int param_2)

{
  return param_2 == 1;
}




void FUN_00942bb4(void)

{
  return;
}




undefined8 FUN_00942bb8(void)

{
  return 1;
}




int FUN_00942bc0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0x2000;
  do {
    lVar1 = param_1 + lVar3;
    if ((*(byte *)(lVar1 + -0x188) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -0x178));
    }
    if ((*(byte *)(lVar1 + -0x1a0) & 1) != 0) {
      operator_delete(*(void **)(param_1 + lVar3 + -400));
    }
    lVar3 = lVar3 + -0x200;
  } while (lVar3 != 0);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x30));
  iVar2 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 8));
  return iVar2;
}




void FUN_00942c34(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  byte *pbVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  
  FUN_00942fd0();
  uVar1 = *(int *)(param_1 + 0x1c0) + 1;
  *(uint *)(param_1 + 0x1c0) = uVar1;
  if (99 < uVar1) {
    if ((param_3 & 1) != 0) {
      uVar27 = FUN_0094309c(param_1,100);
      uVar28 = FUN_009430fc(param_1,100);
      uVar1 = *(uint *)(param_1 + 400);
      if (uVar1 == 0) {
        iVar5 = 0;
        iVar6 = 0;
        iVar7 = 0;
        iVar8 = 0;
        iVar9 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iVar12 = 0;
        iVar13 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar16 = 0;
        iVar17 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar20 = 0;
        iVar21 = 0;
        iVar22 = 0;
        iVar23 = 0;
        iVar24 = 0;
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        uVar25 = 0;
        iVar24 = 0;
        iVar23 = 0;
        iVar22 = 0;
        iVar21 = 0;
        iVar20 = 0;
        iVar19 = 0;
        iVar18 = 0;
        iVar17 = 0;
        iVar16 = 0;
        iVar15 = 0;
        iVar14 = 0;
        iVar13 = 0;
        iVar12 = 0;
        iVar11 = 0;
        iVar10 = 0;
        iVar9 = 0;
        iVar8 = 0;
        iVar7 = 0;
        iVar6 = 0;
        iVar5 = 0;
        do {
          uVar2 = *(int *)(param_1 + 0x194) + uVar25;
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = uVar2 / uVar1;
          }
          fVar29 = *(float *)(param_1 + (ulong)(uVar2 - uVar3 * uVar1) * 4);
          if (fVar29 <= 25.0) {
            iVar4 = iVar4 + 1;
          }
          else if (fVar29 <= 50.0) {
            iVar5 = iVar5 + 1;
          }
          else if (fVar29 <= 75.0) {
            iVar6 = iVar6 + 1;
          }
          else if (fVar29 <= 100.0) {
            iVar7 = iVar7 + 1;
          }
          else if (fVar29 <= 125.0) {
            iVar8 = iVar8 + 1;
          }
          else if (fVar29 <= 150.0) {
            iVar9 = iVar9 + 1;
          }
          else if (fVar29 <= 175.0) {
            iVar10 = iVar10 + 1;
          }
          else if (fVar29 <= 200.0) {
            iVar11 = iVar11 + 1;
          }
          else if (fVar29 <= 225.0) {
            iVar12 = iVar12 + 1;
          }
          else if (fVar29 <= 250.0) {
            iVar13 = iVar13 + 1;
          }
          else if (fVar29 <= 275.0) {
            iVar14 = iVar14 + 1;
          }
          else if (fVar29 <= 300.0) {
            iVar15 = iVar15 + 1;
          }
          else if (fVar29 <= 325.0) {
            iVar16 = iVar16 + 1;
          }
          else if (fVar29 <= 350.0) {
            iVar17 = iVar17 + 1;
          }
          else if (fVar29 <= 375.0) {
            iVar18 = iVar18 + 1;
          }
          else if (fVar29 <= 400.0) {
            iVar19 = iVar19 + 1;
          }
          else if (fVar29 <= 500.0) {
            iVar20 = iVar20 + 1;
          }
          else if (fVar29 <= 750.0) {
            iVar21 = iVar21 + 1;
          }
          else if (fVar29 <= 1000.0) {
            iVar22 = iVar22 + 1;
          }
          else if (fVar29 <= 2000.0) {
            iVar23 = iVar23 + 1;
          }
          else {
            iVar24 = iVar24 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar1);
      }
      pbVar26 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar26 = param_2 + 1;
      }
      FUN_0090551c(uVar27,uVar28,pbVar26,iVar4,iVar5,iVar6,iVar7,iVar8,iVar9,iVar10,iVar11,iVar12,
                   iVar13,iVar14,iVar15,iVar16,iVar17,iVar18,iVar19,iVar20,iVar21,iVar22,iVar23,
                   iVar24);
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return;
}




void FUN_00942fd0(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(uint *)(param_2 + 0x194);
  *(float *)(param_2 + (ulong)uVar2 * 4) = param_1;
  iVar1 = 0;
  if (uVar2 + 1 < 100) {
    iVar1 = uVar2 + 1;
  }
  *(int *)(param_2 + 0x194) = iVar1;
  if (*(int *)(param_2 + 400) != 100) {
    *(int *)(param_2 + 400) = *(int *)(param_2 + 400) + 1;
  }
  fVar5 = *(float *)(param_2 + 0x1a0);
  fVar3 = *(float *)(param_2 + 0x1a4);
  fVar4 = param_1;
  if (*(float *)(param_2 + 0x198) <= param_1) {
    fVar4 = *(float *)(param_2 + 0x198);
  }
  *(float *)(param_2 + 0x198) = fVar4;
  fVar4 = param_1;
  if (param_1 <= *(float *)(param_2 + 0x19c)) {
    fVar4 = *(float *)(param_2 + 0x19c);
  }
  *(float *)(param_2 + 0x19c) = fVar4;
  if ((param_1 < fVar5) && (fVar5 <= fVar3)) {
    *(int *)(param_2 + 0x1a8) = *(int *)(param_2 + 0x1a8) + 1;
  }
  if ((fVar5 <= fVar3) && (fVar3 < param_1)) {
    *(int *)(param_2 + 0x1ac) = *(int *)(param_2 + 0x1ac) + 1;
  }
  fVar4 = *(float *)(param_2 + 0x1b4);
  uVar2 = *(int *)(param_2 + 0x1b0) + 1;
  *(float *)(param_2 + 0x1bc) = fVar4;
  fVar3 = fVar4 + (param_1 - fVar4) / (float)uVar2;
  *(uint *)(param_2 + 0x1b0) = uVar2;
  *(float *)(param_2 + 0x1b4) = fVar3;
  *(float *)(param_2 + 0x1b8) = *(float *)(param_2 + 0x1b8) + (param_1 - fVar4) * (param_1 - fVar3);
  return;
}

