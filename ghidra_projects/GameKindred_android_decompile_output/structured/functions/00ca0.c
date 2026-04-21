// functions/00ca0 — 12 functions
#include "libGameKindred.h"




void FUN_00ca00c8(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ushort uVar6;
  char *pcVar7;
  char *pcVar8;
  ushort *puVar9;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  iVar2 = *(int *)(param_1 + 0x5c4);
  if (iVar2 == 3) {
    cVar5 = *(char *)(param_1 + 0x5d0);
    pcVar7 = "Effect_Coin_Legendary_Upgrade_LQ";
    pcVar8 = "Effect_Coin_Legendary_Upgrade";
  }
  else if (iVar2 == 2) {
    cVar5 = *(char *)(param_1 + 0x5d0);
    pcVar7 = "Effect_Coin_Epic_Upgrade_LQ";
    pcVar8 = "Effect_Coin_Epic_Upgrade";
  }
  else {
    if (iVar2 != 1) goto LAB_00ca0184;
    cVar5 = *(char *)(param_1 + 0x5d0);
    pcVar7 = "Effect_Coin_Rare_Upgrade_LQ";
    pcVar8 = "Effect_Coin_Rare_Upgrade";
  }
  if (cVar5 != '\0') {
    pcVar8 = pcVar7;
  }
  FUN_008fa54c(local_78,pcVar8);
  FUN_008fce60(&local_60,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00ca0184:
  uVar1 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 != 0) {
    FUN_00f01980(param_1 + 0x538);
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00a99abc(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00a99b60(puVar9,param_1,&local_60);
    FUN_00f022a0(param_1 + 0x538,puVar9);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca0290(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_00e6a474("saturation");
  uVar1 = FUN_0091ed5c("saturation",uVar1,0x12345678);
  uVar3 = 0x3f800000;
  if (*(int *)(param_1 + 0x5c8) < 1) {
    uVar3 = 0;
  }
  FUN_0199712c(uVar3,uVar2,uVar1);
  return;
}




void FUN_00ca02f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980();
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x18);
  *(code **)(puVar4 + 8) = FUN_00c9f7bc;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00ca03ec(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x1a0) + 8) + 8);
  *(code **)(puVar5 + 8) = FUN_00c9f7bc;
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  FUN_00f022a0(param_3,puVar5);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_60 = param_2;
  uStack_5c = param_2;
  FUN_00efe58c(puVar5,&local_60);
  FUN_00efcac4(param_1,puVar5);
  FUN_00f022a0(param_3,puVar5);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca05cc(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980();
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar4 + 8) = FUN_00c9f7e0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  FUN_00f022a0(param_1,puVar4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + (param_2 & 0xffffffff) * 8);
  *(code **)(puVar4 + 8) = FUN_00c9f7bc;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  FUN_00f022a0(param_1,puVar4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f800000,puVar4);
  FUN_00f022a0(param_1,puVar4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + (ulong)param_3 * 8);
  *(code **)(puVar4 + 8) = FUN_00c9f7bc;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00ca08ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028073f0;
  FUN_00f01868(param_1 + 0xa7);
  FUN_00f01868(param_1 + 0x96);
  FUN_00f0a79c(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_028266f0;
  param_1[0x8d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x90);
  FUN_00f13d08(param_1 + 0x76);
  FUN_00af8c0c(param_1);
  return;
}




void FUN_00ca0960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028073f0;
  FUN_00f01868(param_1 + 0xa7);
  FUN_00f01868(param_1 + 0x96);
  FUN_00f0a79c(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_028266f0;
  param_1[0x8d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x90);
  FUN_00f13d08(param_1 + 0x76);
  FUN_00af8c0c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca09dc(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  FUN_00f13ca4();
  plVar3 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_028075a8;
  FUN_00f1306c(plVar3);
  plVar1 = param_1 + 0x42;
  FUN_00f0d160(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f133a4(plVar3,plVar1,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar2 = FUN_00e6ce7c("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
  FUN_00f0d75c(plVar1,uVar2);
  return;
}




void FUN_00ca0a80(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f02540();
  if ((uVar2 & 1) != 0) {
    local_30 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    uStack_2c = param_2;
    FUN_00f13f18(param_3,&local_30);
  }
  FUN_00f07940(0,0,param_3 + 0x210,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca0b08(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_028076f0;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x79;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x97;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0xbd;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0xdb;
  FUN_00f0d160(plVar7);
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined1 *)((long)param_1 + 0x80a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f133a4(plVar2,plVar4,1);
  FUN_00f133a4(plVar2,plVar5,1);
  FUN_00f133a4(plVar2,plVar6,1);
  FUN_00f133a4(plVar2,plVar7,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar9 = FUN_00e6ce7c("MENU_PLAY_RANKED_REQUIRES",0);
  FUN_00f0d75c(plVar3,uVar9);
  FUN_00f0da30(plVar3,1);
  FUN_00f0da80(plVar3,&DAT_01bc02e0);
  uVar8 = *(uint *)((long)param_1 + 0x53c);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x53c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0da30(plVar5,1);
  FUN_00f0da80(plVar5,&DAT_01bc02e0);
  uVar8 = *(uint *)((long)param_1 + 0x75c);
  *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xfffffffb;
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x75c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0da30(plVar7,1);
  FUN_00f0da80(plVar7,&DAT_01bc02e0);
  *(uint *)((long)param_1 + 0x75c) = *(uint *)((long)param_1 + 0x75c) & 0xfffffffb;
  FUN_00f0e548(plVar4,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"shiny_checkbox_off");
  FUN_00f0e548(plVar6,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"shiny_checkbox_off");
  *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
                    /* WARNING: Could not recover jumptable at 0x00ca0d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00ca0d60(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x101) = (byte)param_2 & 1;
  if ((DAT_0313ca30 & 1) == 0) {
    param_3 = param_3 & 0xffffffff;
    iVar2 = __cxa_guard_acquire(&DAT_0313ca30);
    param_2 = extraout_x1;
    if (iVar2 != 0) {
      FUN_00e70510(&DAT_0313ca20,extraout_x1,param_3);
      __cxa_atexit(FUN_0090e338,&DAT_0313ca20,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_0313ca30);
      param_2 = extraout_x1_00;
    }
  }
  uVar4 = param_3;
  if ((DAT_0313ca48 & 1) == 0) {
    uVar4 = param_3 & 0xffffffff;
    iVar2 = __cxa_guard_acquire(&DAT_0313ca48,param_2,param_3);
    if (iVar2 != 0) {
      FUN_00e70510(&DAT_0313ca38,extraout_x1_01,uVar4);
      __cxa_atexit(FUN_0090e338,&DAT_0313ca38,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_0313ca48);
    }
  }
  FUN_00e70e18(&DAT_0313ca38,&DAT_01bb6d43,uVar4);
  uVar3 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_REQUIRES_LEVEL_LABEL",0);
  FUN_00910394(&DAT_0313ca20,uVar3);
  FUN_00e705c8(&local_48,"[LEVEL_NUMBER]");
  FUN_00e713f0(&DAT_0313ca20,0,&local_48,&DAT_0313ca38);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x97,&DAT_0313ca20);
  *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) | 4;
  *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) | 4;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca0f24(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(byte *)((long)param_1 + 0x809) = (byte)param_2 & 1;
  if ((DAT_0313ca60 & 1) == 0) {
    param_3 = param_3 & 0xffffffff;
    iVar2 = __cxa_guard_acquire(&DAT_0313ca60);
    param_2 = extraout_x1;
    if (iVar2 != 0) {
      FUN_00e70510(&DAT_0313ca50,extraout_x1,param_3);
      __cxa_atexit(FUN_0090e338,&DAT_0313ca50,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_0313ca60);
      param_2 = extraout_x1_00;
    }
  }
  uVar4 = param_3;
  if ((DAT_0313ca78 & 1) == 0) {
    uVar4 = param_3 & 0xffffffff;
    iVar2 = __cxa_guard_acquire(&DAT_0313ca78,param_2,param_3);
    if (iVar2 != 0) {
      FUN_00e70510(&DAT_0313ca68,extraout_x1_01,uVar4);
      __cxa_atexit(FUN_0090e338,&DAT_0313ca68,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_0313ca78);
    }
  }
  FUN_00e70e18(&DAT_0313ca68,&DAT_01bb6d43,uVar4);
  uVar3 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_REQUIRES_NUM_HEROES_LABEL",0);
  FUN_00910394(&DAT_0313ca50,uVar3);
  FUN_00e705c8(&local_48,&DAT_01bc0355);
  FUN_00e713f0(&DAT_0313ca50,0,&local_48,&DAT_0313ca68);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0xdb,&DAT_0313ca50);
  *(uint *)((long)param_1 + 0x75c) = *(uint *)((long)param_1 + 0x75c) | 4;
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) | 4;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

