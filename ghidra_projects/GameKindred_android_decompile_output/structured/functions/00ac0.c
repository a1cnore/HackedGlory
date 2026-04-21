// functions/00ac0 — 19 functions
#include "libGameKindred.h"




void FUN_00ac01f4(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133758,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac026c(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133758,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac02d8(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x22c) =
       *(uint *)(param_1 + 0x22c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x22c) & 3 | (~param_2 & 1) << 2;
  *(uint *)(param_1 + 0x8cc) =
       *(uint *)(param_1 + 0x8cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x8cc) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00ac02fc(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00ac032c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x4b0);
  uVar3 = FUN_00e6a474(param_4);
  uVar3 = FUN_0091ed5c(param_4,uVar3,0x12345678);
  FUN_019972a0(uVar5,uVar3,*param_2);
  lVar4 = FUN_00f0a7e0(param_2,param_3);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(*(long *)(*param_2 + 8) + 0x3c);
    fVar6 = (float)(uVar1 & 0x3fff);
    local_60 = (float)*(ushort *)(lVar4 + 4) / fVar6;
    fVar7 = (float)(uVar1 >> 0xe & 0x3fff);
    local_5c = 1.0 - (float)((uint)*(ushort *)(lVar4 + 10) + (uint)*(ushort *)(lVar4 + 6)) / fVar7;
    local_68 = (float)((uint)*(ushort *)(lVar4 + 8) + (uint)*(ushort *)(lVar4 + 4)) / fVar6 -
               local_60;
    fStack_64 = (1.0 - (float)*(ushort *)(lVar4 + 6) / fVar7) - local_5c;
    uVar5 = *(undefined8 *)(param_1 + 0x4b0);
    uVar3 = FUN_00e6a474(param_6);
    uVar3 = FUN_0091ed5c(param_6,uVar3,0x12345678);
    FUN_019971b0(uVar5,uVar3,&local_68);
    uVar5 = *(undefined8 *)(param_1 + 0x4b0);
    uVar3 = FUN_00e6a474(param_5);
    uVar3 = FUN_0091ed5c(param_5,uVar3,0x12345678);
    FUN_019971b0(uVar5,uVar3,&local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac04b0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar5 = FUN_0092ec00();
  if (((iVar5 == 0xf) || (iVar5 == 8)) && (iVar6 = FUN_00e70b14(param_1), iVar6 != 0)) {
    ppuVar1 = &PTR_DAT_02be3768;
    if (iVar5 != 8) {
      ppuVar1 = (undefined **)0x0;
    }
    ppuVar2 = &PTR_DAT_02be3a18;
    if (iVar5 != 0xf) {
      ppuVar2 = ppuVar1;
    }
    FUN_00e70510(&local_48);
    if (*ppuVar2 != (undefined *)0x0) {
      uVar9 = 1;
      do {
        FUN_00e7078c(&local_48);
        uVar7 = FUN_00e70fc0(param_1,0,&local_48);
        if ((uVar7 & 1) != 0) {
          bVar4 = false;
          goto LAB_00ac0560;
        }
        ppuVar1 = ppuVar2 + uVar9;
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (*ppuVar1 != (undefined *)0x0);
    }
    bVar4 = true;
LAB_00ac0560:
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    if (!bVar4) {
      uVar8 = 1;
      goto LAB_00ac0580;
    }
  }
  uVar8 = 0;
LAB_00ac0580:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}




void FUN_00ac05a8(long *param_1,long param_2)

{
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_027c1f80;
  param_1[0x11] = (long)&PTR_FUN_027d6008;
  FUN_00948cd8(param_1 + 0x12);
  *param_1 = (long)&PTR_FUN_027d5858;
  param_1[0x12] = (long)&PTR_FUN_027d5a28;
  param_1[0x11] = (long)&PTR_FUN_027d59c8;
  FUN_00f017e8(param_1 + 0x15);
  param_1[0x15] = (long)&PTR_FUN_027c1f80;
  FUN_00f11234(param_1 + 0x26);
  FUN_00ecfd6c(param_1 + 0x5a,0);
  FUN_00ac368c(param_1 + 0x101);
  FUN_00f017e8(param_1 + 0x439);
  param_1[0x439] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0x44a);
  FUN_00b15e58(param_1 + 0x470,0);
  FUN_00f017e8(param_1 + 0x51f);
  param_1[0x51f] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0x530);
  FUN_00ab6c24(param_1 + 0x556,0);
  param_1[0x810] = 0;
  param_1[0x80f] = 0;
  param_1[0x80e] = 0;
  FUN_008fcdb8(param_1 + 0x811,&DAT_0320ffa8);
  param_1[0x817] = 0;
  param_1[0x816] = 0;
  param_1[0x815] = 0;
  param_1[0x814] = 0;
  param_1[0x818] = param_2;
  FUN_00e70510(param_1 + 0x819);
  param_1[0x81b] = 0;
  param_1[0x81c] = 0xc8000003e8;
  *(undefined4 *)(param_1 + 0x81d) = 0x100;
  FUN_00e70314(param_1 + 0x81e);
  *(undefined1 *)((long)param_1 + 0x40e9) = 1;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
                    /* WARNING: Could not recover jumptable at 0x00ac0724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1);
  return;
}




void FUN_00ac0728(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  *(byte *)(param_1 + 0x40e9) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_009580c4();
    uVar2 = 0;
    if ((uVar1 & 1) != 0) {
      FUN_009580b8();
      dVar3 = (double)FUN_00961684();
      uVar2 = (uint)(0.0 < dVar3) << 2;
    }
  }
  else {
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb | uVar2;
  return;
}




void FUN_00ac078c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *local_68;
  code *pcStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027d5858;
  param_1[0x12] = &PTR_FUN_027d5a28;
  param_1[0x11] = &PTR_FUN_027d59c8;
  FUN_00ac0980(param_1,1);
  pcStack_60 = thunk_FUN_00ac0e40;
  local_68 = param_1;
  FUN_00f03390(&local_68);
  if ((long *)param_1[0x80e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x80e] + 8))();
  }
  if ((void *)param_1[0x81a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x81a]);
    param_1[0x81a] = 0;
    param_1[0x819] = 0;
  }
  if ((*(byte *)(param_1 + 0x814) & 1) != 0) {
    operator_delete((void *)param_1[0x816]);
  }
  if ((*(byte *)(param_1 + 0x811) & 1) != 0) {
    operator_delete((void *)param_1[0x813]);
  }
  if ((void *)param_1[0x810] != (void *)0x0) {
    operator_delete__((void *)param_1[0x810]);
    param_1[0x810] = 0;
    param_1[0x80f] = 0;
  }
  FUN_009c7fa8(param_1 + 0x556);
  FUN_00f0d3a4(param_1 + 0x530);
  FUN_00f01868(param_1 + 0x51f);
  param_1[0x470] = &PTR_FUN_027d47d0;
  lVar3 = -0x4b0;
  puVar2 = param_1 + 0x4ff;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar3 = lVar3 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar3 != 0);
  FUN_00f13d08(param_1 + 0x470);
  FUN_00f0d3a4(param_1 + 0x44a);
  FUN_00f01868(param_1 + 0x439);
  param_1[0x101] = &PTR_FUN_027d5dc0;
  FUN_009c7fa8(param_1 + 0x181);
  FUN_00abd150(param_1 + 0x101);
  FUN_00ed00e0(param_1 + 0x5a);
  FUN_00f13d08(param_1 + 0x26);
  FUN_00f01868(param_1 + 0x15);
  FUN_00948d58(param_1 + 0x12);
  FUN_00f01868(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac0980(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_2 & 1) != 0) {
    FUN_00ac1aac(param_1);
  }
  if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x4070) + 0x28))();
  }
  FUN_008fce60(param_1 + 0x4088,&DAT_0320ffa8);
  return;
}




void FUN_00ac09e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5dc0;
  FUN_009c7fa8(param_1 + 0x80);
  FUN_00abd150(param_1);
  return;
}




void FUN_00ac0a18(long param_1)

{
  FUN_00ac078c(param_1 + -0x90);
  return;
}




void FUN_00ac0a20(void *param_1)

{
  FUN_00ac078c();
  operator_delete(param_1);
  return;
}




void FUN_00ac0a44(long param_1)

{
  FUN_00ac078c((void *)(param_1 + -0x90));
  operator_delete((void *)(param_1 + -0x90));
  return;
}




void FUN_00ac0a6c(code *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  code *local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar1 = param_1 + 0xa8;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  pcVar2 = param_1 + 0x130;
  FUN_00f023ec(pcVar1,pcVar2,1);
  FUN_00f023ec(pcVar2,param_1 + 0x2d0,1);
  pcVar3 = param_1 + 0x808;
  FUN_00f023ec(pcVar1,pcVar3,1);
  pcVar1 = param_1 + 0x21c8;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  FUN_00f023ec(pcVar1,param_1 + 0x2250,1);
  FUN_00f023ec(pcVar1,param_1 + 0x2380,1);
  pcVar1 = param_1 + 0x28f8;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  FUN_00f023ec(pcVar1,param_1 + 0x2980,1);
  pcVar4 = param_1 + 0x2ab0;
  FUN_00f023ec(pcVar1,pcVar4,1);
  uVar7 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00b02c3c(pcVar3,uVar7,0);
  local_70 = DAT_03210fac;
  local_98 = thunk_FUN_00ac2c50;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  pcStack_90 = param_1;
  FUN_009693a0(param_1 + 0x810,&local_98);
  local_70 = DAT_03210fb0;
  local_98 = thunk_FUN_00ac3064;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  pcStack_90 = param_1;
  FUN_009693a0(param_1 + 0x810,&local_98);
  local_80 = 0;
  uStack_78 = 0;
  uVar5 = DAT_03210c64;
  local_98 = thunk_FUN_00ac31c4;
  local_88 = 0;
  pcStack_90 = param_1;
  local_70 = uVar5;
  FUN_009693a0(param_1 + 0xc10,&local_98);
  param_1[0x21c2] = (code)0x0;
  FUN_00f112f0(pcVar2,1);
  FUN_00ed04d8(param_1 + 0x2d0,0,1);
  *(uint *)(param_1 + 0x224c) = *(uint *)(param_1 + 0x224c) & 0xfffffffb;
  uVar7 = FUN_00e6ce7c("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_00f0d75c(param_1 + 0x2250,uVar7);
  *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) & 0xfffffffb;
  uVar7 = FUN_00e6ce7c("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_00f0d75c(param_1 + 0x2980,uVar7);
  uVar7 = FUN_00e6ce7c("MENU_PARTY_RECONNECT_BUTTON",0);
  FUN_00ab703c(0,DAT_02be9bb4,DAT_02be9bb4,pcVar4,0,uVar7,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d92c(param_1 + 0x31d0,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,pcVar4,&local_98);
  local_98 = FUN_00ac0e04;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  pcStack_90 = param_1;
  local_70 = uVar5;
  FUN_009693a0(param_1 + 0x2ab8,&local_98);
  FUN_00b09144(0,pcVar4);
  FUN_00ce1e34(pcVar3,&DAT_03210450,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,1,0);
  pcStack_90 = thunk_FUN_00ac0e40;
  local_98 = param_1;
  FUN_00f02e98(0x3f000000,&local_98,0,1);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac0e04(long param_1)

{
  *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) & 0xfffffffb;
  FUN_00ac0980(param_1,1);
  FUN_00ac0eb0(param_1,&DAT_03210450);
  return;
}




void FUN_00ac0e40(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x40eb) != '\0') {
    FUN_00ac0eb0(param_1,&DAT_03210450);
  }
  if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00ac0ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4070) + 0x68))(0x3a83126f);
    return;
  }
  return;
}




void FUN_00ac0eb0(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  double dVar15;
  ulong local_b0 [2];
  void *local_a0;
  ulong local_98 [2];
  void *local_88;
  int local_7c;
  ulong local_78;
  ulong local_70;
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  *(undefined1 *)((long)param_1 + 0x40eb) = 0;
  if (*(char *)((long)param_1 + 0x40e9) == '\0') {
    *(uint *)((long)param_1 + 0x354) = *(uint *)((long)param_1 + 0x354) & 0xfffffffb;
    goto LAB_00ac120c;
  }
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  FUN_00948284(local_60,&local_78,&local_7c);
  FUN_009580b8();
  dVar15 = (double)FUN_00961684();
  if (dVar15 <= 0.0) {
    uVar12 = local_78 >> 1 & 0x7f;
    if ((local_78 & 1) != 0) {
      uVar12 = local_70;
    }
    bVar7 = 1;
    if ((-1 < local_7c) && (uVar12 != 0)) {
      bVar7 = FUN_0092e644();
      bVar7 = ~bVar7 & 1;
    }
  }
  else {
    bVar7 = 1;
  }
  pbVar1 = (byte *)(param_1 + 0x81d);
  *pbVar1 = bVar7;
  iVar8 = FUN_00e7ecf4(local_60);
  plVar14 = (long *)param_1[0x80e];
  if (plVar14 == (long *)0x0) {
LAB_00ac0fc4:
    lVar11 = FUN_00e7ecec(iVar8);
    param_1[0x80e] = lVar11;
  }
  else {
    iVar9 = (**(code **)(*plVar14 + 0x40))(plVar14);
    plVar14 = (long *)param_1[0x80e];
    if (iVar9 != iVar8) {
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
      param_1[0x80e] = 0;
      goto LAB_00ac0fc4;
    }
    if (plVar14 == (long *)0x0) goto LAB_00ac0fc4;
  }
  FUN_00ac0728(param_1,*pbVar1 == 0);
  *(uint *)((long)param_1 + 0x354) =
       *(uint *)((long)param_1 + 0x354) & 0xfffffffb | ((uint)*pbVar1 << 2 ^ 4) & 0xfc;
  if (*pbVar1 == 0) {
    (**(code **)(*(long *)param_1[0x80e] + 0x10))((long *)param_1[0x80e],param_1 + 0x11);
    local_98[0] = 0;
    local_98[1] = 0;
    local_88 = (void *)0x0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    local_a0 = (void *)0x0;
    uVar12 = FUN_00ac3310(param_1,param_2,local_98,local_b0);
    FUN_00b16600(param_1 + 0x470);
    uVar13 = (**(code **)(*(long *)param_1[0x80e] + 0x30))();
    if (((uVar13 & 1) == 0) && ((uVar12 & 1) != 0)) {
      FUN_00e70314(param_1 + 0x81e);
      pvVar2 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pvVar2 = local_68;
      }
      pvVar3 = (void *)((ulong)local_98 | 1);
      if ((local_98[0] & 1) != 0) {
        pvVar3 = local_88;
      }
      if ((*(byte *)(param_1 + 0x811) & 1) == 0) {
        lVar11 = (long)param_1 + 0x4089;
      }
      else {
        lVar11 = param_1[0x813];
      }
      pvVar4 = (void *)((ulong)local_b0 | 1);
      if ((local_b0[0] & 1) != 0) {
        pvVar4 = local_a0;
      }
      uVar10 = (**(code **)(*(long *)param_1[0x80e] + 0x20))
                         ((long *)param_1[0x80e],pvVar2,local_7c,pvVar3,lVar11,0,0,0,pvVar4);
      *(uint *)((long)param_1 + 0x224c) =
           *(uint *)((long)param_1 + 0x224c) & 0xfffffff8 |
           *(uint *)((long)param_1 + 0x224c) & 3 | (uVar10 & 1) << 2;
      *(uint *)((long)param_1 + 0x297c) =
           *(uint *)((long)param_1 + 0x297c) & 0xfffffff8 |
           *(uint *)((long)param_1 + 0x297c) & 3 | (~uVar10 & 1) << 2;
      if ((~uVar10 & 1) == 0) {
        FUN_00b16058(param_1 + 0x470);
        uVar10 = 1;
        *(uint *)((long)param_1 + 0x354) = *(uint *)((long)param_1 + 0x354) & 0xfffffffb;
      }
      else {
        (**(code **)(*param_1 + 0x118))(param_1,param_1[0x80e]);
        uVar10 = 0;
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x811) & 1) == 0) {
        lVar11 = (long)param_1 + 0x4089;
      }
      else {
        lVar11 = param_1[0x813];
      }
      uVar10 = (**(code **)(*(long *)param_1[0x80e] + 0x48))((long *)param_1[0x80e],lVar11,0);
    }
    uVar5 = *(uint *)((long)param_1 + 0x224c);
    *(uint *)((long)param_1 + 0x224c) = uVar5 & 0xfffffff8 | uVar5 & 3 | (~uVar10 & 1) << 2;
    uVar5 = *(uint *)((long)param_1 + 0x297c);
    *(uint *)((long)param_1 + 0x297c) = uVar5 & 0xfffffff8 | uVar5 & 3 | (uVar10 & 1) << 2;
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00ac120c:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ac0e40(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x40eb) != '\0') {
    FUN_00ac0eb0(param_1,&DAT_03210450);
  }
  if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00ac0ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4070) + 0x68))(0x3a83126f);
    return;
  }
  return;
}

