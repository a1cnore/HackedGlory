// functions/00f11 — 40 functions
#include "libGameKindred.h"




undefined8 FUN_00f11088(long param_1)

{
  FUN_00f10ea4(param_1 + -0xb8);
  return 4;
}




void FUN_00f110a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827290;
  param_1[0x17] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x1e);
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f11104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827290;
  param_1[0x17] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x1e);
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f1116c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_02827290;
  *param_1 = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 7);
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  return;
}




void FUN_00f111cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_02827290;
  *param_1 = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 7);
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f11234(long *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02827440;
  FUN_0199cb3c(param_1 + 0x17);
  FUN_0199b368(param_1 + 0x1c);
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_00f13f08(0x42c80000,0x42c80000,param_1);
  FUN_00f14070(param_1,&DAT_02bf25a8);
  local_30 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&local_30);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0xc;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f112f0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x198) = param_2 & 1;
  return;
}




long FUN_00f112fc(float param_1,float param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00f02710(param_3,param_4 & 1);
  if (((lVar2 != 0) && ((char)param_3[0x33] != '\0')) &&
     (((**(code **)(*param_3 + 0x68))(param_3,&local_50,&local_58), param_1 < local_50 ||
      (((local_58 < param_1 || (param_2 < local_4c)) || (local_54 < param_2)))))) {
    lVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f113c0(long *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  int iVar3;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f02914();
  if ((char)param_1[0x33] != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,&local_40,&local_48);
    sVar1 = *(short *)(param_2 + 0x1c);
    iVar3 = (int)local_40;
    if ((int)local_40 <= (int)sVar1 && (~(int)sVar1 & 0xffffU) != 0) {
      iVar3 = (int)sVar1;
    }
    *(short *)((long)param_1 + 0x7c) = (short)iVar3;
    sVar1 = *(short *)(param_2 + 0x1e);
    iVar3 = (int)local_3c;
    if ((int)local_3c <= (int)sVar1 && (~(int)sVar1 & 0xffffU) != 0) {
      iVar3 = (int)sVar1;
    }
    *(short *)((long)param_1 + 0x7e) = (short)iVar3;
    sVar1 = *(short *)(param_2 + 0x20);
    iVar3 = (int)local_48;
    if ((sVar1 == iVar3 || sVar1 < iVar3) && (~(int)sVar1 & 0xffffU) != 0) {
      iVar3 = (int)sVar1;
    }
    *(short *)(param_1 + 0x10) = (short)iVar3;
    sVar1 = *(short *)(param_2 + 0x22);
    iVar3 = (int)local_44;
    if ((sVar1 == iVar3 || sVar1 < iVar3) && (~(int)sVar1 & 0xffffU) != 0) {
      iVar3 = (int)sVar1;
    }
    *(short *)((long)param_1 + 0x82) = (short)iVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f114c4(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8100 [32776];
  long local_f8;
  int local_ec;
  undefined1 auStack_e8 [152];
  
  lVar2 = tpidr_el0;
  local_f8 = *(long *)(lVar2 + 0x28);
  if (((char)param_1[0x33] == '\0') && (param_1[0x31] == 0)) {
    FUN_00f029e4(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    iVar1 = *param_4;
    if (iVar1 != 0) {
      uVar3 = FUN_01997b18(0);
      FUN_0199b72c(auStack_e8,"Composite task (ViewNode)",param_3,iVar1,uVar3,param_5,param_5 + 0x28
                   ,0);
      FUN_0199c960(param_2,auStack_e8,0);
      *param_4 = 0;
      FUN_0199b7a8(auStack_e8);
    }
    (**(code **)(*param_1 + 0x148))(param_1,param_5);
    if ((code *)param_1[0x31] != (code *)0x0) {
      (*(code *)param_1[0x31])(param_2,param_1,param_1[0x32]);
    }
    local_ec = 0;
    FUN_00f029e4(param_1,param_2,auStack_8100,&local_ec,param_1 + 0x17);
    iVar1 = local_ec;
    if (local_ec != 0) {
      uVar3 = FUN_01997b18(0);
      FUN_0199b72c(auStack_e8,"Composite task (ViewNode)",auStack_8100,iVar1,uVar3,param_1 + 0x17,
                   param_1 + 0x1c,0);
      FUN_0199c960(param_2,auStack_e8,0);
      FUN_0199b7a8(auStack_e8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_f8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f11658(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00238(auStack_3c,&local_40);
  if (*(char *)(param_1 + 0x198) == '\0') {
    FUN_00f1c2dc(param_1 + 0xb8,param_2);
  }
  else {
    lVar2 = FUN_00965ecc(param_1);
    uVar3 = (uint)(float)((int)*(short *)(lVar2 + 0x20) - (int)*(short *)(lVar2 + 0x1c));
    uVar4 = (uint)(float)((int)*(short *)(lVar2 + 0x22) - (int)*(short *)(lVar2 + 0x1e));
    FUN_00f1c300(param_1 + 0xb8,param_2,(int)(float)(int)*(short *)(lVar2 + 0x1c),
                 (int)(local_40 - (float)(int)*(short *)(lVar2 + 0x22)),
                 uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),
                 uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f11728(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00f1174c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f11234();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x35) = 0x7000000;
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  param_1[0x36] = uVar1;
  FUN_0199fb64(param_1 + 0x37);
  FUN_0199fb64(param_1 + 0x3a);
  FUN_0199d248(param_1 + 0x3d);
  param_1[0x41] = 0x20000000200;
  *(undefined2 *)(param_1 + 0x42) = 1;
  *(undefined1 *)((long)param_1 + 0x212) = 1;
  FUN_00f13f08(0x43fa0000,0x43fa0000,param_1);
  if (*(char *)(param_1 + 0x42) != '\0') {
    *(undefined1 *)(param_1 + 0x42) = 1;
    FUN_00f11818(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_00f11948(param_1);
  return;
}




void FUN_00f11800(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x210) = 1;
    FUN_00f11818();
    return;
  }
  *(undefined1 *)(param_1 + 0x210) = 0;
  FUN_00f11948();
  return;
}




void FUN_00f11818(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (((*(uint *)(param_1 + 0x1c0) & 0x3fff) != *(uint *)(param_1 + 0x208)) ||
     ((*(uint *)(param_1 + 0x1c0) >> 0xe & 0x3fff) != *(uint *)(param_1 + 0x20c))) {
    lVar1 = param_1 + 0x1b8;
    if (*(char *)(param_1 + 0x211) != '\0') {
      FUN_00f11948(param_1);
    }
    FUN_0199fc70(lVar1,4);
    FUN_0199fccc(lVar1,0,*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c),1,1,0);
    lVar2 = param_1 + 0x1d0;
    FUN_0199fc70(lVar2,4);
    FUN_0199fccc(lVar2,0,*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c),1,5,0);
    FUN_019a02cc(lVar1,0,0,0);
    FUN_019a02fc(lVar1,1,1,0);
    lVar3 = param_1 + 0x1e8;
    FUN_0199d318(lVar3,*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c));
    FUN_0199d4b4(lVar3,0,lVar1,1,0);
    FUN_0199d50c(lVar3,lVar2,1,0);
    *(undefined1 *)(param_1 + 0x211) = 1;
  }
  return;
}




void FUN_00f11948(long param_1)

{
  FUN_0199fc04(param_1 + 0x1b8);
  FUN_0199fc04(param_1 + 0x1d0);
  FUN_0199d2b8(param_1 + 0x1e8);
  *(undefined1 *)(param_1 + 0x211) = 0;
  return;
}




undefined1 FUN_00f11980(long param_1)

{
  return *(undefined1 *)(param_1 + 0x210);
}




void FUN_00f11988(undefined8 param_1)

{
  thunk_FUN_0091ada4();
  FUN_00f119ac(param_1);
  return;
}




void FUN_00f119ac(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_00f02110();
  iVar1 = (int)fVar3;
  iVar2 = (int)param_2;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if ((iVar1 == *(int *)(param_3 + 0x208)) && (iVar2 == *(int *)(param_3 + 0x20c))) {
    return;
  }
  *(int *)(param_3 + 0x208) = iVar1;
  *(int *)(param_3 + 0x20c) = iVar2;
  FUN_0091ada4(param_3);
  return;
}




void thunk_FUN_00f119ac(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_00f02110();
  iVar1 = (int)fVar3;
  iVar2 = (int)param_2;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if ((iVar1 == *(int *)(param_3 + 0x208)) && (iVar2 == *(int *)(param_3 + 0x20c))) {
    return;
  }
  *(int *)(param_3 + 0x208) = iVar1;
  *(int *)(param_3 + 0x20c) = iVar2;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00f11a18(long *param_1,undefined8 param_2,long param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_4100 [16392];
  long local_f8;
  int local_ec;
  undefined1 auStack_e8 [152];
  
  lVar2 = tpidr_el0;
  local_f8 = *(long *)(lVar2 + 0x28);
  if ((char)param_1[0x42] == '\0') {
    FUN_00f114c4(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar4 = FUN_0199c9f8(param_2,1);
    uVar1 = *param_4;
    *(long **)(param_3 + (ulong)uVar1 * 8) = param_1 + 0x35;
    *param_4 = uVar1 + 1;
    (**(code **)(*param_1 + 0x148))(param_1,param_5);
    if (*(char *)((long)param_1 + 0x212) != '\0') {
      FUN_0199cd4c(auStack_e8,param_1 + 0x17,param_1 + 0x1c);
      FUN_0199cee8(0,0,0,0,auStack_e8);
      FUN_0199c960(uVar4,auStack_e8,0);
    }
    if ((code *)param_1[0x31] != (code *)0x0) {
      (*(code *)param_1[0x31])(uVar4,param_1,param_1[0x32]);
    }
    local_ec = 0;
    FUN_00f029e4(param_1,uVar4,auStack_4100,&local_ec,param_1 + 0x17);
    iVar3 = local_ec;
    if (local_ec != 0) {
      uVar5 = FUN_01997b18(0);
      FUN_0199b72c(auStack_e8,"Composite task (ViewRTNode)",auStack_4100,iVar3,uVar5,param_1 + 0x17,
                   param_1 + 0x1c,0);
      FUN_0199c960(uVar4,auStack_e8,0);
      FUN_0199b7a8(auStack_e8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_f8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f11bb4(long param_1)

{
  if (*(char *)(param_1 + 0x210) != '\0') {
    FUN_00f11818();
    return;
  }
  return;
}




void FUN_00f11bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  float *pfVar2;
  undefined3 local_3c;
  undefined1 uStack_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pfVar2 = (float *)FUN_00965ecc();
  _local_3c = CONCAT13((char)(int)(pfVar2[6] * 255.0),0xffffff);
  FUN_00965b68(*pfVar2,pfVar2[1],*pfVar2 + *(float *)(param_1 + 0x90) * pfVar2[4],
               pfVar2[1] + *(float *)(param_1 + 0x94) * pfVar2[5],0,0,0x3f800000,0x3f800000,param_2,
               &local_3c,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f11c80(long param_1)

{
  FUN_00f11bc4(param_1 + -0x1a0);
  return;
}




undefined8 FUN_00f11c88(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x1b8;
  return 1;
}




undefined8 FUN_00f11c98(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x18;
  return 1;
}




void FUN_00f11ca8(void)

{
  FUN_0199d9a4(2);
  return;
}




void FUN_00f11cc0(void)

{
  FUN_0199d9a4(2);
  return;
}




void FUN_00f11cd8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x210) != '\0') {
    lVar1 = FUN_00965ecc(param_1);
    FUN_00f1c1dc(param_1 + 0xb8,(int)(*(float *)(param_1 + 0x90) * *(float *)(lVar1 + 0x10)),
                 (int)(*(float *)(param_1 + 0x94) * *(float *)(lVar1 + 0x14)),param_1 + 0x1e8);
    return;
  }
  FUN_00f11658(param_1);
  return;
}




void FUN_00f11d34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028275a0;
  param_1[0x34] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x3d);
  FUN_0199fb94(param_1 + 0x3a);
  FUN_0199fb94(param_1 + 0x37);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f11d84(undefined8 *param_1)

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




void FUN_00f11ddc(undefined8 *param_1)

{
  param_1[-0x34] = &PTR_FUN_028275a0;
  *param_1 = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 9);
  FUN_0199fb94(param_1 + 6);
  FUN_0199fb94(param_1 + 3);
  FUN_00f13d08(param_1 + -0x34);
  return;
}




void FUN_00f11e2c(undefined8 *param_1)

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




void FUN_00f11e84(undefined8 *param_1)

{
  FUN_00f1174c();
  *param_1 = &PTR_FUN_02827760;
  param_1[0x34] = &PTR_FUN_028278e0;
  *(undefined1 *)((long)param_1 + 0x213) = 1;
  return;
}




void FUN_00f11ec4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x213) = param_2 & 1;
  return;
}




undefined8 FUN_00f11ed0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x213) != '\0') {
    uVar1 = FUN_00f11980();
    return uVar1;
  }
  return 0;
}




void FUN_00f11ee4(long *param_1)

{
  FUN_00f11988();
                    /* WARNING: Could not recover jumptable at 0x00f11f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}




void FUN_00f11f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x213) != '\0') && (uVar1 = FUN_00f11980(param_1), (uVar1 & 1) != 0)) {
    FUN_00f11a18(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  FUN_00f114c4(param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_00f11f9c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x213) != '\0') && (uVar1 = FUN_00f11980(param_1), (uVar1 & 1) != 0)) {
    FUN_00f11cd8(param_1,param_2);
    return;
  }
  FUN_00f11658(param_1,param_2);
  return;
}




void FUN_00f11fec(long *param_1)

{
  FUN_00f1174c();
  *(undefined1 *)((long)param_1 + 0x213) = 1;
  *param_1 = (long)&PTR_FUN_02827928;
  param_1[0x34] = (long)&PTR_FUN_02827aa8;
  FUN_00f2d968((long)param_1 + 0x214);
  FUN_00f2d974(param_1 + 0x43);
  FUN_00f2d050(param_1 + 0x52);
  FUN_00f2e010(param_1 + 0x53);
  FUN_00f2e010(param_1 + 0x56);
  FUN_00f11800(param_1,1);
  *(undefined4 *)((long)param_1 + 0x214) = 1;
  *(undefined4 *)(param_1 + 0x52) = 1;
                    /* WARNING: Could not recover jumptable at 0x00f12070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}

