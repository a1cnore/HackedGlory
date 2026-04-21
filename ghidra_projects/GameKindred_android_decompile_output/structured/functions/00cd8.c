// functions/00cd8 — 11 functions
#include "libGameKindred.h"




void FUN_00cd8990(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_LABEL",0);
  FUN_00f0d75c(param_1 + 0x208,uVar2);
  uVar1 = *(uint *)(param_1 + 0x10c);
  *(uint *)(param_1 + 0x10c) = uVar1 | 4;
  if ((~uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x10c) = uVar1 | 0x7f84;
    FUN_0091ada4(param_1 + 0x88);
  }
  *(uint *)(param_1 + 0x5fc4) = *(uint *)(param_1 + 0x5fc4) & 0xfffffffb;
  FUN_00cd8a0c(param_1);
  return;
}




void FUN_00cd8a0c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar1 = param_3 + 0x208;
  uVar3 = FUN_00f0d4e0(lVar1);
  FUN_00f0d4e0(lVar1);
  param_2 = param_2 + 20.0;
  FUN_00f13f08(uVar3,param_3 + 0x150);
  FUN_00f13e54(param_3 + 0x150);
  fVar5 = param_2 * 0.5;
  FUN_00f0d4e0(lVar1);
  fVar5 = fVar5 - param_2 * 0.5;
  if (*(float *)(param_3 + 0x24c) != fVar5) {
    *(float *)(param_3 + 0x24c) = fVar5;
    FUN_0091ada4(lVar1);
  }
  FUN_00f13e54(param_3 + 0x4478);
  fVar5 = param_2 * 0.5;
  FUN_00f13e54(param_3 + 0x4530);
  fVar5 = fVar5 - param_2 * 0.5;
  if (*(float *)(param_3 + 0x4574) != fVar5) {
    *(float *)(param_3 + 0x4574) = fVar5;
    FUN_0091ada4(param_3 + 0x4530);
  }
  fVar4 = 0.0;
  lVar1 = param_3 + 0x88;
  FUN_00f0bc10(0,0,0x41200000,auStack_68);
  FUN_00f0c168(lVar1,auStack_68);
  (**(code **)(*(long *)(param_3 + 0x88) + 0x90))(lVar1);
  FUN_00f0c030(0x3f000000,lVar1,0);
  lVar1 = param_3 + 0x60c0;
  uVar3 = FUN_00f0d4e0(lVar1);
  FUN_00f0d4e0(lVar1);
  fVar4 = fVar4 + 20.0;
  FUN_00f13f08(uVar3,param_3 + 0x6008);
  FUN_00f13e54(param_3 + 0x6008);
  fVar5 = fVar4 * 0.5;
  FUN_00f0d4e0(lVar1);
  fVar5 = fVar5 - fVar4 * 0.5;
  if (*(float *)(param_3 + 0x6104) != fVar5) {
    *(float *)(param_3 + 0x6104) = fVar5;
    FUN_0091ada4(lVar1);
  }
  FUN_00f13e54(param_3 + 0xa570);
  fVar5 = fVar4 * 0.5;
  FUN_00f13e54(param_3 + 0xa628);
  fVar5 = fVar5 - fVar4 * 0.5;
  if (*(float *)(param_3 + 0xa66c) != fVar5) {
    *(float *)(param_3 + 0xa66c) = fVar5;
    FUN_0091ada4(param_3 + 0xa628);
  }
  lVar1 = param_3 + 0x5f40;
  FUN_00f0bc10(0,0,0x41200000,auStack_68);
  FUN_00f0c168(lVar1,auStack_68);
  (**(code **)(*(long *)(param_3 + 0x5f40) + 0x90))(lVar1);
  FUN_00f0c030(0x3f000000,lVar1,0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cd8f10(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ec51bc();
  if ((uVar1 & 1) != 0) {
    FUN_00ec51c4();
    FUN_00cd8e2c(param_1);
    lVar2 = FUN_009b8d90();
    FUN_00cd7634(*(undefined8 *)(lVar2 + 0xc6e0),0);
    return;
  }
  uVar3 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_FORM_HAPPY_LABEL",0);
  FUN_00f0d75c(param_1 + 0x60c0,uVar3);
  *(uint *)(param_1 + 0x6274) = *(uint *)(param_1 + 0x6274) & 0xfffffffb;
  *(uint *)(param_1 + 0x7954) = *(uint *)(param_1 + 0x7954) & 0xfffffffb;
  *(uint *)(param_1 + 0x9034) = *(uint *)(param_1 + 0x9034) | 4;
  lVar2 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar2 + 0xc6e0),1);
  FUN_00cd8a0c(param_1);
  FUN_00cd8c9c(param_1);
  return;
}




void thunk_FUN_00cd8fd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_FORM_CONFUSED_LABEL",0);
  FUN_00f0d75c(param_1 + 0x60c0,uVar1);
  *(uint *)(param_1 + 0x9034) = *(uint *)(param_1 + 0x9034) & 0xfffffffb;
  *(uint *)(param_1 + 0x6274) = *(uint *)(param_1 + 0x6274) | 4;
  *(uint *)(param_1 + 0x7954) = *(uint *)(param_1 + 0x7954) | 4;
  lVar2 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar2 + 0xc6e0),2);
  FUN_00cd8a0c(param_1);
  FUN_00cd8c9c(param_1);
  return;
}




void FUN_00cd8c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00cd91dc(param_1,param_2,param_5);
  return;
}




void FUN_00cd8c78(void)

{
  long lVar1;
  
  FUN_00cd8e2c();
  lVar1 = FUN_009b8d90();
  FUN_00cd7634(*(undefined8 *)(lVar1 + 0xc6e0),3);
  return;
}




void FUN_00cd8c9c(long param_1)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  uVar3 = FUN_00efee28(0,0x3e4ccccd,FUN_009a71a4);
  lVar1 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  lVar1 = param_1 + 0x88;
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar3);
  FUN_00f022a0(lVar1,puVar7);
  puVar2 = (uint *)(param_1 + 0x5fc4);
  uVar5 = *puVar2;
  lVar1 = param_1 + 0x5f40;
  if ((uVar5 & 0x7f80) != 0) {
    *puVar2 = uVar5 & 0xffff807f;
    FUN_0091ada4(lVar1);
    uVar5 = *puVar2;
  }
  *puVar2 = uVar5 | 4;
  uVar3 = FUN_00efed6c(0x3e4ccccd);
  uVar4 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_0091aa80);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar3);
  FUN_00f022a0(lVar1,uVar4);
  FUN_00cd8a0c(param_1);
  return;
}




void FUN_00cd8e2c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd8e9c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_01980b08();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_01980b3c(1), (uVar1 & 1) != 0)) {
    lVar2 = FUN_009b8d90();
    FUN_00cd762c(*(undefined8 *)(lVar2 + 0xc6e0),4);
    lVar2 = FUN_009b8d90();
    FUN_00cd7634(*(undefined8 *)(lVar2 + 0xc6e0),3);
  }
  uVar1 = FUN_00f02540(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1,1);
    return;
  }
  return;
}




void FUN_00cd8f10(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ec51bc();
  if ((uVar1 & 1) != 0) {
    FUN_00ec51c4();
    FUN_00cd8e2c(param_1);
    lVar2 = FUN_009b8d90();
    FUN_00cd7634(*(undefined8 *)(lVar2 + 0xc6e0),0);
    return;
  }
  uVar3 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_FORM_HAPPY_LABEL",0);
  FUN_00f0d75c(param_1 + 0x60c0,uVar3);
  *(uint *)(param_1 + 0x6274) = *(uint *)(param_1 + 0x6274) & 0xfffffffb;
  *(uint *)(param_1 + 0x7954) = *(uint *)(param_1 + 0x7954) & 0xfffffffb;
  *(uint *)(param_1 + 0x9034) = *(uint *)(param_1 + 0x9034) | 4;
  lVar2 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar2 + 0xc6e0),1);
  FUN_00cd8a0c(param_1);
  FUN_00cd8c9c(param_1);
  return;
}




void FUN_00cd8fd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_FORM_CONFUSED_LABEL",0);
  FUN_00f0d75c(param_1 + 0x60c0,uVar1);
  *(uint *)(param_1 + 0x9034) = *(uint *)(param_1 + 0x9034) & 0xfffffffb;
  *(uint *)(param_1 + 0x6274) = *(uint *)(param_1 + 0x6274) | 4;
  *(uint *)(param_1 + 0x7954) = *(uint *)(param_1 + 0x7954) | 4;
  lVar2 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar2 + 0xc6e0),2);
  FUN_00cd8a0c(param_1);
  FUN_00cd8c9c(param_1);
  return;
}

