// functions/00d39 — 31 functions
#include "libGameKindred.h"




void FUN_00d3900c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d646fc();
  FUN_00d4ad80(uVar2,"SeraphicShell");
  lVar3 = FUN_00d4adc4();
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f99999a);
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,&local_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_SeraphicShell_Barrier");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar2 = FUN_00d29a18(lVar3 + 0x10);
  FUN_00d46cdc(uVar2,0x11);
  uVar2 = FUN_00d64464(param_1);
  uVar2 = FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bce8(uVar2,1);
  FUN_00d4bc50(uVar2,10);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bd2c(uVar2,FUN_00d38ff8);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d396a4(lVar3 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 0x1d654a0e;
  plVar4 = (long *)FUN_00d2b6d8(lVar3 + 0xa0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"SeraphicShell");
  local_58 = FUN_00d3926c;
  local_50 = 2;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0xa0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Item_SeraphicShell_IsActive_02beb9b0);
  local_58 = FUN_00d39284;
  local_50 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar2 = FUN_00d64464(param_1);
  uVar2 = FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bce8(uVar2,1);
  FUN_00d4bc50(uVar2,0x1a);
  lVar3 = FUN_00d4bc24();
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d396a4(lVar3 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 0x1d654a0e;
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0xa0);
  local_58 = FUN_00d3929c;
  local_50 = 2;
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3926c(void)

{
  FUN_00d085c4(PTR_s__Item_SeraphicShell__02beb1d0,1,1);
  return;
}




void FUN_00d39284(void)

{
  FUN_00d085c4(PTR_s__Item_SeraphicShell__02beb1d0,2,1);
  return;
}




void FUN_00d3929c(void)

{
  FUN_00d085c4(PTR_s__Item_SeraphicShell__02beb1d0,0,1);
  return;
}




void FUN_00d392b4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3dcccccd,0x3f800000,0x3ecccccd);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f99999a);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_SeraphicShell_BarrierFinishing");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00d29a18(lVar2 + 0x10);
  FUN_00d46cdc(uVar4,0x11);
  uVar4 = FUN_00d64464(param_1);
  uVar4 = FUN_00d4bbf8(uVar4,3);
  uVar4 = FUN_00d4bce8(uVar4,1);
  FUN_00d4bc50(uVar4,0x1a);
  lVar2 = FUN_00d4bc24();
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00d3929c;
  local_40 = 2;
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00d3940c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    memset(__s,0,0x98);
    FUN_00d3fa78(__s);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return __s;
}




void FUN_00d394e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2004();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d39534(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a083c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d39584(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099eadc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_00d395d4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d40de4(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




undefined8 * FUN_00d396a4(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((long)puVar1 + 0xc) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_0281a980;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00d39704(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_00d99120(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    bVar2 = FUN_00d99d0c(lVar3,param_1 + 8);
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0xc);
  }
  return bVar1;
}




undefined8 * FUN_00d39744(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -0x10) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -8);
      *puVar1 = &PTR_FUN_0281a9a8;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined8 **)(puVar2 + -0x10) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x38;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00d397b4(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00d9986c(param_2,*(undefined8 *)(param_1 + 0x20));
  uVar2 = FUN_00d39814(param_1 + 8,param_2,0);
  FUN_00d999d0(param_1 + 8,uVar1 & 1,*(undefined4 *)(param_1 + 0x18),uVar2 & 1);
  return;
}




ulong FUN_00d39814(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    goto switchD_00d39848_caseD_0;
  case 1:
    cVar1 = *param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00d39874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)param_1)();
    return uVar3;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00d42698(param_2);
                    /* WARNING: Could not recover jumptable at 0x00d39898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00d398b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)param_1)(param_2);
    return uVar3;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00d398cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)param_1)(param_2,param_3);
    return uVar3;
  case 6:
    plVar4 = (long *)FUN_00d427bc(param_2);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    uVar6 = *(undefined8 *)param_1;
    uVar2 = FUN_00e6a474(uVar6);
    uVar2 = FUN_0091ed5c(uVar6,uVar2,0x12345678);
    pcVar5 = (char *)(**(code **)(*plVar4 + 0x18))(plVar4,uVar2);
    cVar1 = *pcVar5;
    break;
  default:
    FUN_00e6a2fc(0);
    uVar3 = 0;
    goto switchD_00d39848_caseD_0;
  }
  uVar3 = (ulong)(cVar1 != '\0');
switchD_00d39848_caseD_0:
  return uVar3;
}




void FUN_00d39930(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f560();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_00d39980(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d40c88(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d39a54(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099dcd4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d39aa4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a29f4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d39af4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d085c4(PTR_s__Item_VisionTotem__02beb188,1,1);
  *param_2 = uVar1;
  return;
}




void FUN_00d39b2c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099ef2c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d39b7c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0d7c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d39bcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40866666;
  return;
}




undefined8 * FUN_00d39bdc(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_0281a9d0;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00d39c38(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_00d99120(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    bVar2 = FUN_00d99d30();
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 8);
  }
  return bVar1;
}




void FUN_00d39c74(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0e70();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d39cc4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68 [2];
  float local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  uVar2 = FUN_00d66d28(local_50);
  fVar5 = (float)thunk_FUN_00d086f0(uVar2,1,1);
  uVar3 = FUN_00daa58c(local_58,uVar2);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_00daa524(local_58), (uVar3 & 1) != 0)) {
    FUN_00d557c4(uVar2,local_68,&DAT_03218f68);
    pfVar4 = (float *)FUN_00daa52c(local_58,0);
    fVar6 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar7 = (float)thunk_FUN_00d086f0(uVar2,0,1);
    if (local_68[0] * fVar6 + local_60 * fVar8 < fVar7 / 180.0 + -1.0) {
      *(float *)(local_58 + 0x50) = *(float *)(local_58 + 0x50) - fVar5;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d39dcc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
    uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d39cc4;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00d39e4c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_38[0] = FUN_00d59f54(uVar2,0,3,0x19,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d39ec4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67d04(0x3fb33333);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d3a2b8();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3f5c4(uVar3,PTR_s_Ability__Joule__A_PreTarget_Remo_02beee80);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d39f7c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_70);
  lVar5 = FUN_00d66d28(local_70);
  iVar3 = FUN_00d66cf4(local_70);
  uVar6 = FUN_00ceab48();
  if (iVar3 + -1 == 0 || iVar3 < 1) {
    if ((uVar6 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar4 = FUN_00d66d34(local_70);
      FUN_00d009d0(auStack_68,uVar1,uVar4);
      FUN_00ce20fc(auStack_68);
    }
  }
  else {
    if ((uVar6 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar4 = FUN_00d66d34(local_70);
      FUN_00d048bc(auStack_68,uVar1,uVar4,iVar3 + -1,1);
      FUN_00ce20fc(auStack_68);
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar4 = FUN_00d66d34(local_70);
      FUN_00d67b3c(local_70);
      FUN_00d04628(auStack_98,uVar1,uVar4);
      FUN_00ce20fc(auStack_98);
    }
    FUN_00d67b3c(local_70);
    FUN_00d67d04(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

