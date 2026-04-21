// functions/00ec9 — 41 functions
#include "libGameKindred.h"




void thunk_FUN_00ec92ec(void)

{
  return;
}




void thunk_FUN_00ec92f0(void)

{
  return;
}




void thunk_FUN_00ec92f4(undefined8 param_1)

{
  DAT_03210918 = param_1;
  return;
}




void thunk_FUN_00ec93b0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210958 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210958), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210940,"Auth/NuoAuthApi","login",&DAT_01beef0d);
    DAT_03210940 = &PTR_FUN_02821fa0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210940,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210958);
  }
  uVar2 = FUN_00e7368c(&DAT_03210940);
  FUN_00e73934(&DAT_03210940,uVar2);
  return;
}




void thunk_FUN_00ec9460(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210978 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210978), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210960,"Auth/NuoAuthApi","logout",&DAT_01beef0d);
    DAT_03210960 = &PTR_FUN_02821fc0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210960,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210978);
  }
  uVar2 = FUN_00e7368c(&DAT_03210960);
  FUN_00e73934(&DAT_03210960,uVar2);
  return;
}




void thunk_FUN_00ec9300(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210938), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210920,"Auth/NuoAuthApi","isThirdPartyAuthAvailable",&DAT_01bef1a3);
    DAT_03210920 = &PTR_FUN_02821f80;
    __cxa_atexit(FUN_00e748b8,&DAT_03210920,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210938);
  }
  uVar2 = FUN_00e7368c(&DAT_03210920);
  FUN_00e739d8(&DAT_03210920,uVar2);
  return;
}




void thunk_FUN_00ec9538(undefined8 param_1)

{
  FUN_008fcdb8(param_1,&DAT_032108f8);
  return;
}




byte thunk_FUN_00ec99e0(void)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  byte abStack_58 [16];
  void *pvStack_48;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(abStack_40,"netease");
  uVar3 = FUN_00ec9754(abStack_40);
  bVar2 = 0;
  if ((uVar3 & 1) == 0) {
    FUN_008fa54c(abStack_58,"neunion-test");
    bVar2 = FUN_00ec9754(abStack_58);
    if ((abStack_58[0] & 1) != 0) {
      operator_delete(pvStack_48);
    }
    bVar2 = bVar2 ^ 1;
  }
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return bVar2 & 1 | DAT_03210910 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool thunk_FUN_00ec9510(void)

{
  ulong uVar1;
  
  uVar1 = (ulong)(DAT_032108f8 >> 1);
  if ((DAT_032108f8 & 1) != 0) {
    uVar1 = DAT_03210900;
  }
  return uVar1 != 0;
}




uint thunk_FUN_00ec9754(byte *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_032109b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_032109b8), iVar3 != 0)) {
    FUN_00e734e4(&DAT_032109a0,"Auth/NuoAuthApi","isKnownChannelID","(Ljava/lang/String;)Z");
    DAT_032109a0 = &PTR_FUN_02822000;
    __cxa_atexit(FUN_00e748b8,&DAT_032109a0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032109b8);
  }
  uVar4 = FUN_00e7368c(&DAT_032109a0);
  uVar5 = FUN_00e7368c(&DAT_032109a0);
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  FUN_00e73e94(auStack_48,uVar5,pbVar6);
  uVar5 = FUN_00e7410c(auStack_48);
  uVar2 = FUN_00e739d8(&DAT_032109a0,uVar4,uVar5);
  FUN_00e740f0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ec9880(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_032109d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_032109d8), iVar1 != 0)) {
    FUN_00e734e4(&DAT_032109c0,"Auth/NuoAuthApi","requestNewAuthentication",&DAT_01beef0d);
    DAT_032109c0 = &PTR_FUN_02822020;
    __cxa_atexit(FUN_00e748b8,&DAT_032109c0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032109d8);
  }
  uVar2 = FUN_00e7368c(&DAT_032109c0);
  FUN_00e73934(&DAT_032109c0,uVar2);
  return;
}




void thunk_FUN_00ec9930(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_032109f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_032109f8), iVar1 != 0)) {
    FUN_00e734e4(&DAT_032109e0,"Auth/NuoAuthApi","requestShutdown",&DAT_01beef0d);
    DAT_032109e0 = &PTR_FUN_02822040;
    __cxa_atexit(FUN_00e748b8,&DAT_032109e0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032109f8);
  }
  uVar2 = FUN_00e7368c(&DAT_032109e0);
  FUN_00e73934(&DAT_032109e0,uVar2);
  return;
}




void FUN_00ec9044(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec90fc(byte *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)(DAT_032108f8 >> 1);
  if ((DAT_032108f8 & 1) != 0) {
    uVar1 = DAT_03210900;
  }
  FUN_008fce60(&DAT_032108f8,param_1);
  if ((*param_1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  operator_delete(param_1);
  plVar3 = DAT_03210918;
  if (DAT_03210918 != (long *)0x0) {
    if (uVar1 == 0) {
      FUN_008fcdb8(local_50,&DAT_032108f8);
      (**(code **)*plVar3)(plVar3,local_50);
    }
    else {
      FUN_008fcdb8(local_68,&DAT_032108f8);
      (**(code **)(*plVar3 + 8))(plVar3,local_68);
      local_40 = local_58;
      local_50[0] = local_68[0];
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec921c(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  uVar1 = DAT_0320ffb0;
  puVar2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    uVar1 = (ulong)(DAT_0320ffa8 >> 1);
    puVar2 = &DAT_0320ffa9;
  }
  FUN_008fcea8(&DAT_032108f8,puVar2,uVar1);
  if (DAT_03210918 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ec9268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_03210918 + 0x10))();
    return;
  }
  return;
}




void FUN_00ec9294(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  uVar1 = DAT_0320ffb0;
  puVar2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    uVar1 = (ulong)(DAT_0320ffa8 >> 1);
    puVar2 = &DAT_0320ffa9;
  }
  FUN_008fcea8(&DAT_032108f8,puVar2,uVar1);
  if (DAT_03210918 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ec92e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_03210918 + 0x10))();
    return;
  }
  return;
}




void FUN_00ec92ec(void)

{
  return;
}




void FUN_00ec92f0(void)

{
  return;
}




void FUN_00ec92f4(undefined8 param_1)

{
  DAT_03210918 = param_1;
  return;
}




void FUN_00ec9300(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210938), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210920,"Auth/NuoAuthApi","isThirdPartyAuthAvailable",&DAT_01bef1a3);
    DAT_03210920 = &PTR_FUN_02821f80;
    __cxa_atexit(FUN_00e748b8,&DAT_03210920,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210938);
  }
  uVar2 = FUN_00e7368c(&DAT_03210920);
  FUN_00e739d8(&DAT_03210920,uVar2);
  return;
}




void FUN_00ec93b0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210958 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210958), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210940,"Auth/NuoAuthApi","login",&DAT_01beef0d);
    DAT_03210940 = &PTR_FUN_02821fa0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210940,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210958);
  }
  uVar2 = FUN_00e7368c(&DAT_03210940);
  FUN_00e73934(&DAT_03210940,uVar2);
  return;
}




void FUN_00ec9460(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210978 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210978), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210960,"Auth/NuoAuthApi","logout",&DAT_01beef0d);
    DAT_03210960 = &PTR_FUN_02821fc0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210960,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210978);
  }
  uVar2 = FUN_00e7368c(&DAT_03210960);
  FUN_00e73934(&DAT_03210960,uVar2);
  return;
}




bool FUN_00ec9510(void)

{
  ulong uVar1;
  
  uVar1 = (ulong)(DAT_032108f8 >> 1);
  if ((DAT_032108f8 & 1) != 0) {
    uVar1 = DAT_03210900;
  }
  return uVar1 != 0;
}




void FUN_00ec9538(undefined8 param_1)

{
  FUN_008fcdb8(param_1,&DAT_032108f8);
  return;
}




void FUN_00ec9548(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_03210998 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03210998), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03210980,"Auth/NuoAuthApi","setRoleData",
                 "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"
                );
    DAT_03210980 = &PTR_FUN_02821fe0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210980,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210998);
  }
  uVar3 = FUN_00e7368c(&DAT_03210980);
  pbVar9 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar9 = param_1 + 1;
  }
  FUN_00e73e94(auStack_68,uVar3,pbVar9);
  uVar4 = FUN_00e7410c(auStack_68);
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  FUN_00e73e94(auStack_78,uVar3,pbVar9);
  uVar5 = FUN_00e7410c(auStack_78);
  pbVar9 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
  }
  FUN_00e73e94(auStack_88,uVar3,pbVar9);
  uVar6 = FUN_00e7410c(auStack_88);
  pbVar9 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar9 = param_4 + 1;
  }
  FUN_00e73e94(auStack_98,uVar3,pbVar9);
  uVar7 = FUN_00e7410c(auStack_98);
  pbVar9 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar9 = param_5 + 1;
  }
  FUN_00e73e94(auStack_a8,uVar3,pbVar9);
  uVar8 = FUN_00e7410c(auStack_a8);
  FUN_00e73934(&DAT_03210980,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  FUN_00e740f0(auStack_a8);
  FUN_00e740f0(auStack_98);
  FUN_00e740f0(auStack_88);
  FUN_00e740f0(auStack_78);
  FUN_00e740f0(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ec9754(byte *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_032109b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_032109b8), iVar3 != 0)) {
    FUN_00e734e4(&DAT_032109a0,"Auth/NuoAuthApi","isKnownChannelID","(Ljava/lang/String;)Z");
    DAT_032109a0 = &PTR_FUN_02822000;
    __cxa_atexit(FUN_00e748b8,&DAT_032109a0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032109b8);
  }
  uVar4 = FUN_00e7368c(&DAT_032109a0);
  uVar5 = FUN_00e7368c(&DAT_032109a0);
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  FUN_00e73e94(auStack_48,uVar5,pbVar6);
  uVar5 = FUN_00e7410c(auStack_48);
  uVar2 = FUN_00e739d8(&DAT_032109a0,uVar4,uVar5);
  FUN_00e740f0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec9880(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_032109d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_032109d8), iVar1 != 0)) {
    FUN_00e734e4(&DAT_032109c0,"Auth/NuoAuthApi","requestNewAuthentication",&DAT_01beef0d);
    DAT_032109c0 = &PTR_FUN_02822020;
    __cxa_atexit(FUN_00e748b8,&DAT_032109c0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032109d8);
  }
  uVar2 = FUN_00e7368c(&DAT_032109c0);
  FUN_00e73934(&DAT_032109c0,uVar2);
  return;
}




void FUN_00ec9930(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_032109f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_032109f8), iVar1 != 0)) {
    FUN_00e734e4(&DAT_032109e0,"Auth/NuoAuthApi","requestShutdown",&DAT_01beef0d);
    DAT_032109e0 = &PTR_FUN_02822040;
    __cxa_atexit(FUN_00e748b8,&DAT_032109e0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032109f8);
  }
  uVar2 = FUN_00e7368c(&DAT_032109e0);
  FUN_00e73934(&DAT_032109e0,uVar2);
  return;
}




byte FUN_00ec99e0(void)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"netease");
  uVar3 = FUN_00ec9754(local_40);
  bVar2 = 0;
  if ((uVar3 & 1) == 0) {
    FUN_008fa54c(local_58,"neunion-test");
    bVar2 = FUN_00ec9754(local_58);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    bVar2 = bVar2 ^ 1;
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2 & 1 | DAT_03210910 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec9a98(byte param_1)

{
  DAT_03210910 = param_1 & 1;
  return;
}




void FUN_00ec9aa8(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec9acc(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec9af0(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec9b14(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec9b38(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec9b5c(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec9b80(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




uint FUN_00ec9ba4(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_03210a18 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03210a18), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03210a00,"NuoUserDefaults","getBoolean","(Ljava/lang/String;Z)Z");
    DAT_03210a00 = &PTR_FUN_02822060;
    __cxa_atexit(FUN_00e748b8,&DAT_03210a00,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210a18);
  }
  uVar4 = FUN_00e7368c(&DAT_03210a00);
  FUN_00e73e94(auStack_58,uVar4,param_1);
  uVar5 = FUN_00e7410c(auStack_58);
  uVar2 = FUN_00e739d8(&DAT_03210a00,uVar4,uVar5,param_2 & 1);
  FUN_00e740f0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00ec9ccc(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_03210a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03210a38), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03210a20,"NuoUserDefaults","getInt","(Ljava/lang/String;I)I");
    DAT_03210a20 = &PTR_FUN_02822080;
    __cxa_atexit(FUN_00e748b8,&DAT_03210a20,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210a38);
  }
  uVar4 = FUN_00e7368c(&DAT_03210a20);
  FUN_00e73e94(auStack_58,uVar4,param_1);
  uVar5 = FUN_00e7410c(auStack_58);
  uVar2 = FUN_00e73b34(&DAT_03210a20,uVar4,uVar5,param_2);
  FUN_00e740f0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00ec9df4(float param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_03210a58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03210a58), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03210a40,"NuoUserDefaults","getFloat","(Ljava/lang/String;F)F");
    DAT_03210a40 = &PTR_FUN_028220a0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210a40,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210a58);
  }
  uVar3 = FUN_00e7368c(&DAT_03210a40);
  FUN_00e73e94(auStack_58,uVar3,param_2);
  uVar4 = FUN_00e7410c(auStack_58);
  auVar5 = FUN_00e73da8((double)param_1,&DAT_03210a40,uVar3,uVar4);
  uVar3 = auVar5._8_8_;
  FUN_00e740f0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    auVar5._8_8_ = uVar3;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec9f1c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((DAT_03210a78 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03210a78), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03210a60,"NuoUserDefaults","getString",
                 "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    DAT_03210a60 = &PTR_FUN_028220c0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210a60,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210a78);
  }
  uVar4 = FUN_00e7368c(&DAT_03210a60);
  FUN_00e73e94(auStack_68,uVar4,param_2);
  uVar5 = FUN_00e7410c(auStack_68);
  FUN_00e70570(&local_88,param_3);
  FUN_00e73f80(auStack_78,uVar4,&local_88);
  uVar6 = FUN_00e7410c(auStack_78);
  FUN_00e73bd8(local_a0,&DAT_03210a60,uVar4,uVar5,uVar6);
  FUN_00e740f0(auStack_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00e740f0(auStack_68);
  uVar1 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar1 = local_98;
  }
  if (uVar1 != 0) {
    param_3 = local_a0;
  }
  FUN_008fcdb8(param_1,param_3);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

