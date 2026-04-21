// functions/00c12 — 26 functions
#include "libGameKindred.h"




void FUN_00c12014(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = param_1 + (long)param_2 * 0xf0;
  if ((param_3 & 1) == 0) {
    uVar2 = *(uint *)(lVar1 + 0x54fc);
  }
  else {
    *(uint *)(lVar1 + 0x2c5c) = *(uint *)(lVar1 + 0x2c5c) | 4;
    uVar2 = *(uint *)(lVar1 + 0x54fc) | 4;
    *(uint *)(lVar1 + 0x54fc) = uVar2;
  }
  uVar3 = 0xff;
  if ((param_3 & 1) == 0) {
    uVar3 = 0x66;
  }
  if ((uVar2 >> 7 & 0xff) == uVar3) {
    return;
  }
  *(uint *)(lVar1 + 0x54fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
  FUN_0091ada4(param_1 + (long)param_2 * 0xf0 + 0x5478);
  return;
}




void FUN_00c12090(long param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  char *pcVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch(param_2) {
  case 0:
    pcVar2 = "role_captain";
    break;
  case 1:
    pcVar2 = "role_jungler";
    break;
  case 2:
    pcVar2 = "role_top";
    break;
  case 3:
    pcVar2 = "role_middle";
    break;
  case 4:
    pcVar2 = "role_bottom";
    break;
  case 5:
    pcVar2 = "role_carry";
    break;
  default:
    goto switchD_00c120d4_default;
  }
  FUN_00f0e578(param_1 + 0x6420,pcVar2);
switchD_00c120d4_default:
  local_3c = 0xffc8c8c8;
  if (param_3 == 2) {
    local_3c = 0xff3ac8f6;
  }
  else if (param_3 == 1) {
    local_3c = 0xfffae076;
  }
  else if (param_3 == 0) {
    local_3c = 0xff5271eb;
  }
  FUN_00f0e670(param_1 + 0x6420,&local_3c,2);
  FUN_00c0f7f8(param_1);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c121d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00e6a8a8(auStack_c8,PTR_s_build___HUDPartsHero__s_png_02be3470,param_2);
  lVar1 = param_1 + 0x6658;
  FUN_00c9ef0c(lVar1,auStack_c8,param_4,param_5);
  FUN_00c9edc4(lVar1,1);
  FUN_00c9eedc(lVar1,0);
  FUN_00c1047c(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c12288(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6594) =
       *(uint *)(param_1 + 0x6594) & 0xfffffff8 |
       *(uint *)(param_1 + 0x6594) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x6ddc) =
       *(uint *)(param_1 + 0x6ddc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x6ddc) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x6cec) =
       *(uint *)(param_1 + 0x6cec) & 0xfffffff8 |
       *(uint *)(param_1 + 0x6cec) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x64a4) =
       *(uint *)(param_1 + 0x64a4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x64a4) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00c122d4(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x9220,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x6d58,param_1 + 0x9220);
  FUN_00f0d7fc(param_1 + 0x6d58,&DAT_01bee7fa);
  FUN_00c1047c(param_1);
  return;
}




void FUN_00c1233c(long param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 3) {
    puVar1 = &DAT_01bbbb8c;
  }
  else if (param_2 == 2) {
    puVar1 = &DAT_01bbbb88;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    puVar1 = &DAT_01bbbb84;
  }
  FUN_00f0e670(param_1 + 0x6c68,puVar1,2);
  return;
}




void FUN_00c12390(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x7cdc) =
       *(uint *)(param_1 + 0x7cdc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7cdc) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c123a8(float param_1,long param_2)

{
  FUN_00e70e18((double)(param_1 / 1000.0),param_2 + 0x9220,"%.1fk");
  FUN_00c88770(param_2 + 0x1848,param_2 + 0x9220);
  *(float *)(param_2 + 0x9240) = param_1;
  FUN_00c0f7f8(param_2);
  return;
}




void FUN_00c12414(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x924c) == '\0') || (*(char *)(param_1 + 0x924d) != '\0')) {
    uVar2 = *(uint *)(param_1 + 0xa34);
    uVar3 = 0x3f;
    if ((param_2 & 1) == 0) {
      uVar3 = 0xff;
    }
    uVar1 = 0x26;
    if ((param_3 & 1) == 0) {
      uVar1 = uVar3;
    }
    if ((uVar2 >> 7 & 0xff) != uVar1) {
      *(uint *)(param_1 + 0xa34) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar1 << 7;
      FUN_0091ada4(param_1 + 0x9b0);
    }
    uVar3 = *(uint *)(param_1 + 0x334);
    if ((uVar3 >> 7 & 0xff) != uVar1) {
      *(uint *)(param_1 + 0x334) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar1 << 7;
      FUN_0091ada4(param_1 + 0x2b0);
    }
  }
  uVar3 = 0;
  if ((param_2 & 1) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x924d) << 2;
  }
  *(uint *)(param_1 + 0xaec) = *(uint *)(param_1 + 0xaec) & 0xfffffffb | uVar3;
  return;
}




void FUN_00c124d4(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00e70e18(param_1 + 0x9220,&DAT_01ba0a26,param_2,param_3,param_4);
  FUN_00f0d75c(param_1 + 0xdb8,param_1 + 0x9220);
  FUN_00c0f7f8(param_1);
  return;
}




void FUN_00c12524(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9248) = param_2;
  FUN_00c0f7f8();
  return;
}




void FUN_00c12530(long param_1,ulong param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  bool bVar4;
  
  FUN_00e70e18(param_1 + 0x9220,&DAT_01bb6d43);
  lVar1 = param_1 + 0xee8;
  FUN_00c88770(lVar1,param_1 + 0x9220);
  bVar4 = (param_2 & 1) == 0;
  pcVar2 = "hud_blitz_coin_friendly";
  if (bVar4) {
    pcVar2 = "hud_blitz_coin_enemy";
  }
  puVar3 = &UNK_01bbbb7c;
  if (bVar4) {
    puVar3 = &DAT_01bbbb80;
  }
  FUN_00c886f8(lVar1,pcVar2);
  FUN_00c88730(lVar1,&DAT_01bee7fa,puVar3);
  FUN_00c0f7f8(param_1);
  return;
}




void FUN_00c125cc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9238) = param_2;
  return;
}




void FUN_00c125d8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e70b88(param_3,&DAT_03210450);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00e70b88(param_4,&DAT_03210450);
    if ((uVar2 & 1) == 0) goto LAB_00c126b4;
    FUN_00910394(param_1 + 0x9220,param_4);
    puVar3 = &DAT_01bb5073;
  }
  else {
    FUN_00910394(param_1 + 0x9220,param_3);
    puVar3 = (undefined *)0x1e21c1a;
  }
  lVar4 = param_1 + 0x9220;
  FUN_00e705c8(&local_58,puVar3);
  FUN_00e70c34(lVar4,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70c34(lVar4,param_2);
  param_2 = lVar4;
LAB_00c126b4:
  FUN_00f0d75c(param_1 + 0xb58,param_2);
  FUN_00c0f7f8(param_1);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c126ec(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x70ec) =
       *(uint *)(param_1 + 0x70ec) & 0xfffffff8 |
       *(uint *)(param_1 + 0x70ec) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x76e4) =
       *(uint *)(param_1 + 0x76e4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x76e4) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x7cdc) =
       *(uint *)(param_1 + 0x7cdc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7cdc) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c12720(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x82d4) =
       *(uint *)(param_1 + 0x82d4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x82d4) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c12738(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x8938) = param_2;
  FUN_00f133a4(param_1 + 0x6f10,param_2,1);
  FUN_00c10ab4(param_1);
  return;
}




void FUN_00c12770(long param_1)

{
  *(undefined8 *)(param_1 + 0x8938) = 0;
  FUN_00c10ab4();
  return;
}




void FUN_00c1277c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar4 = operator_new(0x18d8);
  FUN_00c0d390(plVar4,param_4,param_5);
  iVar1 = *(int *)(param_3 + 0x9210);
  if (iVar1 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*(long *)(param_3 + 0x9218) + (ulong)(iVar1 - 1) * 8);
  }
  local_70 = plVar4;
  FUN_00f023ec(param_3 + 0x8a70,plVar4,1);
  fVar6 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
  fVar6 = fVar6 * 0.5;
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar4 + 0x50))(plVar4);
    if ((*(float *)(plVar4 + 8) != fVar6) || (*(float *)((long)plVar4 + 0x44) != param_2 * 0.7)) {
      *(float *)(plVar4 + 8) = fVar6;
      *(float *)((long)plVar4 + 0x44) = param_2 * 0.7;
      FUN_0091ada4(plVar4);
    }
    uVar2 = *(uint *)((long)plVar4 + 0x1734) & 0xfffffffb;
  }
  else {
    fVar7 = *(float *)((long)plVar5 + 0x44);
    (**(code **)(*plVar5 + 0x50))(plVar5);
    fVar7 = fVar7 + param_2 * 0.5 + 40.0;
    if ((*(float *)(plVar4 + 8) != fVar6) || (*(float *)((long)plVar4 + 0x44) != fVar7)) {
      *(float *)(plVar4 + 8) = fVar6;
      *(float *)((long)plVar4 + 0x44) = fVar7;
      FUN_0091ada4(plVar4);
    }
    uVar2 = *(uint *)((long)plVar4 + 0x1734) | 4;
  }
  *(uint *)((long)plVar4 + 0x1734) = uVar2;
  FUN_00c12914((int *)(param_3 + 0x9210),&local_70);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c12914(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c1361c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c1299c(long param_1,int *param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  if (*param_2 == 0x1d) {
    uVar1 = FUN_009f1f70(0x1d);
    if ((uVar1 & 1) == 0) {
      pcVar2 = "hud_pingicon_action_minion";
    }
    else {
      pcVar2 = "hud_stats_bounty";
    }
    FUN_00c886f8(param_1 + 0x1398,pcVar2);
    FUN_00c0f7f8(param_1);
    return;
  }
  return;
}




void FUN_00c12a04(long param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  
  lVar1 = param_1 + 0x8130;
  *(byte *)(param_1 + 0x9252) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    FUN_00f0e670(lVar1,&DAT_01bee7fa,2);
    FUN_00f0e6bc(0,lVar1);
    uVar2 = *(uint *)(param_1 + 0x81b4);
    if ((uVar2 & 0x7f80) != 0x5900) {
      *(uint *)(param_1 + 0x81b4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
      FUN_0091ada4(lVar1);
    }
    FUN_00abb1c8(0,param_1 + 0x7c58,&DAT_01bee7f6);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x81b4);
    if ((uVar2 & 0x7f80) != 0x7280) {
      *(uint *)(param_1 + 0x81b4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7280;
      FUN_0091ada4(lVar1);
    }
    FUN_00f0e670(lVar1,&DAT_01bee7f6,2);
    FUN_00abb1c8(0x3f800000,param_1 + 0x7c58,&DAT_01bee7fa);
    FUN_00c12b3c(param_1,1);
  }
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c12b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x30))(plVar3,*(byte *)(param_1 + 0x9252));
    return;
  }
  return;
}




void FUN_00c12b3c(long param_1,byte param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(byte *)(param_1 + 0x9250) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    lVar5 = param_1 + 0x7540;
    lVar4 = param_1 + 0x7068;
    FUN_00f0e670(lVar5,&DAT_01bee7fa,2);
    FUN_00f0e6bc(0,lVar5);
    lVar3 = 0x75c4;
  }
  else {
    FUN_00c12cb0(param_1,0);
    lVar5 = param_1 + 0x7540;
    FUN_00f0e6bc(0x3f800000,lVar5);
    uVar1 = *(uint *)(param_1 + 0x75c4);
    if ((uVar1 & 0x7f80) != 0x7280) {
      *(uint *)(param_1 + 0x75c4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x7280;
      FUN_0091ada4(lVar5);
    }
    FUN_00f0e670(lVar5,&DAT_01bee7f6,2);
    FUN_00abb1c8(0x3f800000,param_1 + 0x7068,&DAT_01bee7fa);
    lVar5 = param_1 + 0x7b38;
    lVar4 = param_1 + 0x7660;
    FUN_00f0e6bc(0,lVar5);
    lVar3 = 0x7bbc;
  }
  uVar1 = *(uint *)(param_1 + lVar3);
  if ((uVar1 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + lVar3) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5900;
    FUN_0091ada4(lVar5);
  }
  FUN_00abb1c8(0,lVar4,&DAT_01bee7f6);
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c12c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x38))(plVar2,*(byte *)(param_1 + 0x9250));
    return;
  }
  return;
}




void FUN_00c12cb0(long param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  *(byte *)(param_1 + 0x9251) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    lVar1 = param_1 + 0x7b38;
    FUN_00f0e670(lVar1,&DAT_01bee7fa,2);
    FUN_00f0e6bc(0,lVar1);
    uVar2 = *(uint *)(param_1 + 0x7bbc);
    if ((uVar2 & 0x7f80) != 0x5900) {
      *(uint *)(param_1 + 0x7bbc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
      FUN_0091ada4(lVar1);
    }
    FUN_00abb1c8(0,param_1 + 0x7660,&DAT_01bee7f6);
    *(uint *)(param_1 + 0x8af4) = *(uint *)(param_1 + 0x8af4) & 0xfffffffb;
    *(uint *)(param_1 + 0x8b7c) = *(uint *)(param_1 + 0x8b7c) & 0xfffffffb;
    goto LAB_00c12f94;
  }
  FUN_00c12b3c(param_1,0);
  FUN_00c12a04(param_1,0);
  lVar1 = param_1 + 0x7b38;
  FUN_00f0e6bc(0x3f800000,lVar1);
  uVar2 = *(uint *)(param_1 + 0x7bbc);
  if ((uVar2 & 0x7f80) != 0x7280) {
    *(uint *)(param_1 + 0x7bbc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7280;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0e670(lVar1,&DAT_01bee7f6,2);
  FUN_00abb1c8(0x3f800000,param_1 + 0x7660,&DAT_01bee7fa);
  if (*(char *)(param_1 + 0x924c) == '\0') {
    uVar3 = FUN_00e6ce7c("GAME_OVER_THUMBS_DOWN_AFK",0);
    FUN_00c1277c(param_1,uVar3,1);
    uVar3 = FUN_00e6ce7c("GAME_OVER_THUMBS_DOWN_TROLL_INTENTIONAL_LOSING",0);
    FUN_00c1277c(param_1,uVar3,2);
    uVar3 = FUN_00e6ce7c("GAME_OVER_THUMBS_DOWN_RUDE_CHAT_PINGS",0);
    uVar4 = 3;
LAB_00c12eac:
    FUN_00c1277c(param_1,uVar3,uVar4);
  }
  else if (*(char *)(param_1 + 0x924d) != '\0') {
    uVar3 = FUN_00e6ce7c("GAME_OVER_THUMBS_DOWN_AFK",0);
    FUN_00c1277c(param_1,uVar3,1);
    uVar3 = FUN_00e6ce7c("GAME_OVER_THUMBS_DOWN_TROLL_INTENTIONAL_LOSING",0);
    uVar4 = 2;
    goto LAB_00c12eac;
  }
  uVar3 = FUN_00e6ce7c("GAME_OVER_THUMBS_DOWN_NOOB",0);
  FUN_00c1277c(param_1,uVar3,4);
  uVar3 = FUN_00e6ce7c("GAME_OVER_THUMBS_DOWN_OFFENSIVE_NAME",0);
  FUN_00c1277c(param_1,uVar3,5);
  FUN_00c10ef8(param_1);
  *(uint *)(param_1 + 0x8af4) = *(uint *)(param_1 + 0x8af4) | 4;
  *(uint *)(param_1 + 0x8b7c) = *(uint *)(param_1 + 0x8b7c) | 4;
  FUN_00f01a4c(param_1 + 0x8af8,1);
  FUN_00f133a4(param_1 + 0x6f10,param_1 + 0x8af8,1);
  plVar5 = *(long **)(param_1 + 0x20);
  FUN_00f01a4c(param_1,1);
  (**(code **)(*plVar5 + 0x78))(plVar5,param_1,1);
  FUN_00f01a4c(param_1 + 0x8a70,1);
  FUN_00f133a4(param_1 + 0x6f10,param_1 + 0x8a70,1);
LAB_00c12f94:
  plVar5 = *(long **)(param_1 + 0xb8);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c12fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x40))(plVar5,*(byte *)(param_1 + 0x9251));
    return;
  }
  return;
}




void FUN_00c12fd0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if ((puVar1 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar1)(puVar1,param_3), (uVar2 & 1) == 0)) {
    FUN_00f0490c(param_2);
    return;
  }
  return;
}




void thunk_FUN_00c1299c(long param_1,int *param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  if (*param_2 == 0x1d) {
    uVar1 = FUN_009f1f70(0x1d);
    if ((uVar1 & 1) == 0) {
      pcVar2 = "hud_pingicon_action_minion";
    }
    else {
      pcVar2 = "hud_stats_bounty";
    }
    FUN_00c886f8(param_1 + 0x1398,pcVar2);
    FUN_00c0f7f8(param_1);
    return;
  }
  return;
}

