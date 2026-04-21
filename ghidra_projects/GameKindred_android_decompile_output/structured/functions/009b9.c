// functions/009b9 — 35 functions
#include "libGameKindred.h"




void FUN_009b90f4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_027c22b8;
  param_1[6] = &PTR_FUN_027c2348;
  param_1[5] = &PTR_FUN_027c2320;
  param_1[9] = &PTR_FUN_027c26e0;
  param_1[0xd] = &PTR_FUN_027c2740;
  param_1[0xc] = &PTR_FUN_027c2710;
  FUN_00ed49d0(param_1[0xe],PTR_s_screen_char_select_02be3688);
  FUN_00ed49d0(param_1[0xe],PTR_s_screen_main_hub_02be3690);
  FUN_00ed49d0(param_1[0xe],PTR_s_screen_rewards_02be3698);
  FUN_00ed49d0(param_1[0xe],PTR_s_screen_talent_upgrade_02be36a0);
  FUN_00ed49d0(param_1[0xe],PTR_s_screen_match_confirm_02be36b0);
  FUN_00f01a4c(param_1 + 0xb17,1);
  FUN_00f01a4c(param_1 + 0xbc5,1);
  FUN_00f01a4c(param_1 + 0xcca,1);
  if (*(char *)((long)param_1 + 0xe3cd) != '\0') {
    FUN_00ec5428(param_1 + 0xd);
    *(char *)((long)param_1 + 0xe3cd) = '\0';
  }
  FUN_00aa3280();
  FUN_00aa254c();
  FUN_00aa14d0();
  FUN_00a9b83c();
  FUN_00a9da04();
  FUN_009e59e0();
  FUN_00a094e8();
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
  }
  param_1[0x11] = 0;
  plVar2 = (long *)param_1[0x18dc];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[0x18dc] = 0;
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x28))();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_009fec98();
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  param_1[0x12] = 0;
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  param_1[0x13] = 0;
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x10))();
  }
  param_1[0x14] = 0;
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  param_1[0x16] = 0;
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
  }
  param_1[0x15] = 0;
  lVar3 = FUN_009e80b8();
  lVar6 = (ulong)*(uint *)(lVar3 + 0x28) << 5;
  lVar1 = *(long *)(lVar3 + 0x30);
  do {
    lVar5 = lVar1;
    if (lVar6 == 0) goto LAB_009b933c;
    lVar6 = lVar6 + -0x20;
    lVar1 = lVar5 + 0x20;
  } while (*(undefined8 **)(lVar5 + 8) != param_1);
  FUN_009bbe90((uint *)(lVar3 + 0x28),lVar5);
LAB_009b933c:
  lVar3 = FUN_00a06b24();
  lVar6 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
  lVar1 = *(long *)(lVar3 + 0x38);
  do {
    lVar5 = lVar1;
    if (lVar6 == 0) goto LAB_009b936c;
    lVar6 = lVar6 + -0x20;
    lVar1 = lVar5 + 0x20;
  } while (*(undefined8 **)(lVar5 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar3 + 0x30),lVar5);
LAB_009b936c:
  lVar3 = FUN_00a06b24();
  lVar6 = (ulong)*(uint *)(lVar3 + 0x40) << 5;
  lVar1 = *(long *)(lVar3 + 0x48);
  do {
    lVar5 = lVar1;
    if (lVar6 == 0) goto LAB_009b939c;
    lVar6 = lVar6 + -0x20;
    lVar1 = lVar5 + 0x20;
  } while (*(undefined8 **)(lVar5 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar3 + 0x40),lVar5);
LAB_009b939c:
  FUN_009e8084();
  FUN_00a099c4();
  FUN_00a07abc();
  FUN_009f7368();
  FUN_009fa6f8();
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) == 0) {
    FUN_009fde9c();
  }
  FUN_00aa81f0();
  FUN_00aa5ee4();
  FUN_00aa4de8();
  FUN_00a87e2c();
  FUN_00aff9fc();
  FUN_00aa17a8();
  FUN_0096bb3c();
  DAT_0312ede0 = 0;
  if ((*(byte *)(param_1 + 0x1c76) & 1) != 0) {
    operator_delete((void *)param_1[0x1c78]);
  }
  FUN_00f01868(param_1 + 0x1c5d);
  FUN_00f01868(param_1 + 0x1c4c);
  FUN_00f01868(param_1 + 0x1c3b);
  FUN_00af069c(param_1 + 0x18dd);
  FUN_00cd38fc(param_1 + 0xce7);
  FUN_00b27cec(param_1 + 0xcca);
  FUN_009b94d8(param_1 + 0xbc5);
  FUN_00add618(param_1 + 0xb17);
  FUN_00adbab8(param_1 + 0x121);
  FUN_00b7dab8(param_1 + 0x17);
  FUN_00ec543c(param_1 + 0xd);
  FUN_00921668(param_1 + 0xc);
  FUN_00e835e0(param_1 + 9);
  FUN_00948d58(param_1 + 6);
  FUN_00ec5d8c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009b94a4(long param_1)

{
  if (*(char *)(param_1 + 0xe3cd) != '\0') {
    FUN_00ec5428(param_1 + 0x68);
    *(char *)(param_1 + 0xe3cd) = '\0';
  }
  return;
}




void FUN_009b94d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6e38;
  if ((*(byte *)(param_1 + 0x101) & 1) != 0) {
    operator_delete((void *)param_1[0x103]);
  }
  FUN_00b27cec(param_1 + 0xe4);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_009b95e8(long param_1)

{
  FUN_009b90f4(param_1 + -0x28);
  return;
}




void FUN_009b95f0(long param_1)

{
  FUN_009b90f4(param_1 + -0x30);
  return;
}




void FUN_009b95f8(long param_1)

{
  FUN_009b90f4(param_1 + -0x48);
  return;
}




void FUN_009b9600(long param_1)

{
  FUN_009b90f4(param_1 + -0x60);
  return;
}




void FUN_009b9608(long param_1)

{
  FUN_009b90f4(param_1 + -0x68);
  return;
}




void FUN_009b9610(void *param_1)

{
  FUN_009b90f4();
  operator_delete(param_1);
  return;
}




void FUN_009b9634(long param_1)

{
  FUN_009b90f4((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009b965c(long param_1)

{
  FUN_009b90f4((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




void FUN_009b9684(long param_1)

{
  FUN_009b90f4((void *)(param_1 + -0x48));
  operator_delete((void *)(param_1 + -0x48));
  return;
}




void FUN_009b96ac(long param_1)

{
  FUN_009b90f4((void *)(param_1 + -0x60));
  operator_delete((void *)(param_1 + -0x60));
  return;
}




void FUN_009b96d4(long param_1)

{
  FUN_009b90f4((void *)(param_1 + -0x68));
  operator_delete((void *)(param_1 + -0x68));
  return;
}




void FUN_009b96fc(long param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *local_88;
  long lStack_80;
  long local_78;
  code *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x70) = param_2;
  FUN_00ed4914(param_2,PTR_s_screen_char_select_02be3688,*(undefined8 *)(param_1 + 0x88));
  FUN_00ed4914(param_2,PTR_s_screen_main_hub_02be3690,*(undefined8 *)(param_1 + 0x78));
  FUN_00ed4914(param_2,PTR_s_screen_rewards_02be3698,*(undefined8 *)(param_1 + 0x90));
  FUN_00ed4914(param_2,PTR_s_screen_talent_upgrade_02be36a0,*(undefined8 *)(param_1 + 0x98));
  FUN_00ed4914(param_2,PTR_s_screen_match_confirm_02be36b0,*(undefined8 *)(param_1 + 0xa8));
  uVar2 = FUN_00aa2a7c();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x132) == '\0') {
      FUN_00bd931c();
      FUN_00bd9354(*(undefined8 *)(param_1 + 0x80));
    }
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xb8,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xe1d8,1);
  plVar3 = (long *)FUN_00f00438("root-layer");
  (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x58b8,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x5e28,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x6650,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xe260,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xc6e8,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0x938,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0x6738,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xe2e8,1);
  FUN_00a9d98c(param_2);
  FUN_00a9b7f4(param_2);
  FUN_00aa1430(param_2);
  FUN_00a0949c();
  FUN_009e5994();
  lVar4 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar4 = *(long *)(param_1 + 0x80) + 0x10;
  }
  FUN_00aa24dc(lVar4);
  FUN_00aa3248();
  lVar4 = FUN_00a06b24();
  local_88 = (code *)0x0;
  local_70 = FUN_009bbf08;
  lStack_80 = param_1;
  local_78 = param_1;
  FUN_00933ec0(lVar4 + 0x30,&local_88);
  lVar4 = FUN_00a06b24();
  local_88 = (code *)0x0;
  local_70 = thunk_FUN_009bae64;
  lStack_80 = param_1;
  local_78 = param_1;
  FUN_00933ec0(lVar4 + 0x40,&local_88);
  local_60 = DAT_03133754;
  local_88 = FUN_009b9a6c;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = 0;
  lStack_80 = param_1;
  FUN_009693a0(param_2 + 8,&local_88);
  local_60 = DAT_03133788;
  local_88 = FUN_009b9a7c;
  local_70 = (code *)0x0;
  uStack_68 = 0;
  local_78 = 0;
  lStack_80 = param_1;
  FUN_009693a0(param_2 + 8,&local_88);
  *(uint *)(param_1 + 0x593c) = *(uint *)(param_1 + 0x593c) & 0xfffffffb;
  FUN_00addafc(param_1 + 0x58b8,0);
  *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) & 0xfffffffb;
  *(uint *)(param_1 + 0x5eac) = *(uint *)(param_1 + 0x5eac) & 0xfffffffb;
  FUN_00acae7c(param_1 + 0x5e28,0);
  *(uint *)(param_1 + 0x67bc) = *(uint *)(param_1 + 0x67bc) & 0xfffffffb;
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    FUN_0096bc8c();
  }
  FUN_009b9ab8(param_1,param_3 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b9a6c(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3cb) = 1;
  return;
}




void FUN_009b9a7c(undefined8 param_1)

{
  FUN_009baadc(param_1,&DAT_0320ffa8);
  FUN_009ba2b4(param_1,PTR_s_screen_char_select_02be3688,1);
  return;
}




void FUN_009b9ab8(long param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  
  uVar4 = FUN_00e80f58();
  pbVar1 = (byte *)(param_1 + 0xe3c8);
  bVar2 = 8;
  if ((uVar4 & 1) == 0) {
    bVar2 = 0;
  }
  *pbVar1 = bVar2 | *pbVar1;
  uVar4 = FUN_00937f1c();
  bVar2 = 0;
  if ((uVar4 & 1) != 0) {
    bVar2 = FUN_0093d808();
    bVar2 = param_2 & (bVar2 ^ 0xff) & 1;
  }
  *pbVar1 = *pbVar1 | bVar2;
  uVar4 = FUN_0093a7e8();
  bVar2 = 0;
  if ((uVar4 & 1) == 0) {
    bVar3 = FUN_0093d844();
    bVar2 = 2;
    if ((bVar3 & param_2 & 1) == 0) {
      bVar2 = 0;
    }
  }
  *pbVar1 = *pbVar1 | bVar2;
  FUN_009b9e00(param_1);
  return;
}




void FUN_009b9b58(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    FUN_009b9b8c(param_1);
    return;
  }
  return;
}




void FUN_009b9b8c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x13c) >> 2 & 1) != 0) {
    FUN_009b9e00(param_1);
  }
  FUN_00b7dba0(param_1 + 0xb8,0);
  bVar1 = *(byte *)(param_1 + 0xe3c8);
  if ((bVar1 >> 3 & 1) != 0) {
    *(byte *)(param_1 + 0xe3c8) = bVar1 ^ 8;
  }
  return;
}




void FUN_009b9be0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    FUN_009b9b8c(param_1 + -0x48);
    return;
  }
  return;
}




void FUN_009b9c14(void)

{
  return;
}




void FUN_009b9c18(void)

{
  return;
}




void FUN_009b9c1c(void)

{
  return;
}




void FUN_009b9c20(void)

{
  return;
}




void FUN_009b9c2c(void)

{
  return;
}




void FUN_009b9c30(void)

{
  return;
}




void FUN_009b9c34(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec540c();
  if ((uVar1 & 1) != 0) {
    if (*(char *)(param_1 + 0xe3cd) == '\0') {
      FUN_00ec5424(param_1 + 0x68);
      FUN_00ec5438();
      *(char *)(param_1 + 0xe3cd) = '\x01';
    }
  }
  return;
}




void FUN_009b9c7c(long param_1)

{
  long lVar1;
  
  DAT_02c09230 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c09230 + 1;
  lVar1 = param_1 + (ulong)DAT_02c09230 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009bbf30;
  *(code **)(lVar1 + 0xb8) = FUN_009bbf54;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(uint *)(lVar1 + 0xa4) = DAT_02c09230;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe3d0;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009b9cec,0);
  return;
}




void FUN_009b9cec(undefined8 param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_68 = *(undefined8 *)(DAT_0312ede0 + 0xe378);
  local_70 = *(undefined8 *)(DAT_0312ede0 + 0xe370);
  uStack_58 = *(undefined8 *)(DAT_0312ede0 + 0xe388);
  local_60 = *(undefined8 *)(DAT_0312ede0 + 0xe380);
  uStack_48 = *(undefined8 *)(DAT_0312ede0 + 0xe398);
  local_50 = *(undefined8 *)(DAT_0312ede0 + 0xe390);
  uStack_38 = *(undefined8 *)(DAT_0312ede0 + 0xe3a8);
  local_40 = *(undefined8 *)(DAT_0312ede0 + 0xe3a0);
  FUN_009d4294(&local_70);
  FUN_009d42c0(0);
  FUN_009b9d70(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b9d70(long param_1)

{
  FUN_0096bb70();
  if (*(char *)(param_1 + 0xe3c9) != '\0') {
    *(char *)(param_1 + 0xe3c9) = '\0';
    FUN_008fa130(0,0);
    FUN_008fa19c(0);
    FUN_009b9e00(param_1);
  }
  if (*(char *)(param_1 + 0xe3cc) != '\0') {
    FUN_00ed49d0(*(undefined8 *)(param_1 + 0x70),PTR_s_screen_talent_refund_02be36a8);
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(char *)(param_1 + 0xe3cc) = '\0';
  }
  FUN_00affa78();
  return;
}




void FUN_009b9e00(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  pbVar1 = (byte *)(param_1 + 0xe3c8);
  bVar2 = *pbVar1;
  if ((bVar2 & 1) != 0) {
    *pbVar1 = bVar2 ^ 1;
    FUN_009bb0a0(param_1);
    return;
  }
  if ((bVar2 >> 1 & 1) != 0) {
    *pbVar1 = bVar2 ^ 2;
    FUN_009bb194(param_1);
    *(undefined1 *)(param_1 + 0xe3ca) = 1;
    return;
  }
  if ((bVar2 >> 3 & 1) != 0) {
    *pbVar1 = bVar2 ^ 8;
    FUN_009bb1c4(param_1);
    return;
  }
  if ((*(byte *)(param_1 + 0xe3b0) & 1) == 0) {
    lVar4 = param_1 + 0xe3b1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xe3c0);
  }
  FUN_009ba2b4(param_1,lVar4,0);
  FUN_008fa278();
  uVar3 = FUN_0093a978();
  lVar4 = DAT_03210d00;
  if ((uVar3 & 1) != 0) {
    FUN_00ec5240();
    return;
  }
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x41000000,puVar6);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c27b8;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  *(code **)(puVar7 + 8) = thunk_FUN_00ec5240;
  *(long *)(puVar7 + 0x10) = param_1;
  FUN_00f02308(*(undefined8 *)(param_1 + 0x78),puVar6,puVar7,0);
  return;
}




void thunk_FUN_009b9b8c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x13c) >> 2 & 1) != 0) {
    FUN_009b9e00(param_1);
  }
  FUN_00b7dba0(param_1 + 0xb8,0);
  bVar1 = *(byte *)(param_1 + 0xe3c8);
  if ((bVar1 >> 3 & 1) != 0) {
    *(byte *)(param_1 + 0xe3c8) = bVar1 ^ 8;
  }
  return;
}




void thunk_FUN_009b9e00(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  pbVar1 = (byte *)(param_1 + 0xe3c8);
  bVar2 = *pbVar1;
  if ((bVar2 & 1) != 0) {
    *pbVar1 = bVar2 ^ 1;
    FUN_009bb0a0(param_1);
    return;
  }
  if ((bVar2 >> 1 & 1) != 0) {
    *pbVar1 = bVar2 ^ 2;
    FUN_009bb194(param_1);
    *(undefined1 *)(param_1 + 0xe3ca) = 1;
    return;
  }
  if ((bVar2 >> 3 & 1) != 0) {
    *pbVar1 = bVar2 ^ 8;
    FUN_009bb1c4(param_1);
    return;
  }
  if ((*(byte *)(param_1 + 0xe3b0) & 1) == 0) {
    lVar4 = param_1 + 0xe3b1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xe3c0);
  }
  FUN_009ba2b4(param_1,lVar4,0);
  FUN_008fa278();
  uVar3 = FUN_0093a978();
  lVar4 = DAT_03210d00;
  if ((uVar3 & 1) != 0) {
    FUN_00ec5240();
    return;
  }
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x41000000,puVar6);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c27b8;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  *(code **)(puVar7 + 8) = thunk_FUN_00ec5240;
  *(long *)(puVar7 + 0x10) = param_1;
  FUN_00f02308(*(undefined8 *)(param_1 + 0x78),puVar6,puVar7,0);
  return;
}




void thunk_FUN_009b9e00(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  pbVar1 = (byte *)(param_1 + 0xe3c8);
  bVar2 = *pbVar1;
  if ((bVar2 & 1) != 0) {
    *pbVar1 = bVar2 ^ 1;
    FUN_009bb0a0(param_1);
    return;
  }
  if ((bVar2 >> 1 & 1) != 0) {
    *pbVar1 = bVar2 ^ 2;
    FUN_009bb194(param_1);
    *(undefined1 *)(param_1 + 0xe3ca) = 1;
    return;
  }
  if ((bVar2 >> 3 & 1) != 0) {
    *pbVar1 = bVar2 ^ 8;
    FUN_009bb1c4(param_1);
    return;
  }
  if ((*(byte *)(param_1 + 0xe3b0) & 1) == 0) {
    lVar4 = param_1 + 0xe3b1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xe3c0);
  }
  FUN_009ba2b4(param_1,lVar4,0);
  FUN_008fa278();
  uVar3 = FUN_0093a978();
  lVar4 = DAT_03210d00;
  if ((uVar3 & 1) != 0) {
    FUN_00ec5240();
    return;
  }
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x41000000,puVar6);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c27b8;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  *(code **)(puVar7 + 8) = thunk_FUN_00ec5240;
  *(long *)(puVar7 + 0x10) = param_1;
  FUN_00f02308(*(undefined8 *)(param_1 + 0x78),puVar6,puVar7,0);
  return;
}

