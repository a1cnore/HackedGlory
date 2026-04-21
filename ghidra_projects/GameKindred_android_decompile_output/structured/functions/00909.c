// functions/00909 — 8 functions
#include "libGameKindred.h"




void FUN_00909088(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "reason";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  uVar3 = FUN_00ceadc8(param_2);
  local_78 = "mode";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,uVar3);
  uVar3 = FUN_00ceadbc();
  local_78 = "botDifficulty";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ef0(uVar3,lVar2 + 0x28);
  FUN_00ec506c("Quality_Post_Match_Survey",&puStack_70);
  FUN_00ec5024("Quality_Post_Match_Survey",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009091dc(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Market_Viewed");
  FUN_00ec5020("Market_Viewed");
  return;
}




void FUN_00909220(undefined4 param_1)

{
  long lVar1;
  long lVar2;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_30 = &local_58;
    puStack_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = "tab_index";
    lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
    FUN_00ec3ee0(lVar2 + 0x28,param_1);
    FUN_00ec506c("Market_Tab_Viewed",&puStack_50);
    FUN_00ec5024("Market_Tab_Viewed",&puStack_50);
    FUN_0090d2e0(&puStack_50,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009092e4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "key";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,param_1);
  local_88 = "tags";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,param_2);
  pcVar1 = "true";
  if ((param_3 & 1) == 0) {
    pcVar1 = "false";
  }
  local_88 = "interest";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,pcVar1);
  pcVar1 = "true";
  if ((param_4 & 1) == 0) {
    pcVar1 = "false";
  }
  local_88 = "leavingApp";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,pcVar1);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    FUN_00ec506c("NewsFeed_Item_Clicked",&local_80);
    FUN_00ec5024("NewsFeed_Item_Clicked",&local_80);
  }
  FUN_0090d2e0(&local_80,local_78);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00909490(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "key";
  local_60 = &local_88;
  lVar5 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar5 + 0x28,param_1);
  local_88 = "tags";
  local_60 = &local_88;
  lVar5 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar5 + 0x28,param_2);
  pcVar1 = "false";
  pcVar2 = "true";
  pcVar3 = pcVar2;
  if ((param_3 & 1) == 0) {
    pcVar3 = pcVar1;
  }
  local_88 = "interest";
  local_60 = &local_88;
  lVar5 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar5 + 0x28,pcVar3);
  pcVar3 = pcVar2;
  if ((param_4 & 1) == 0) {
    pcVar3 = pcVar1;
  }
  local_88 = "leavingApp";
  local_60 = &local_88;
  lVar5 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar5 + 0x28,pcVar3);
  if ((param_5 & 1) == 0) {
    pcVar2 = pcVar1;
  }
  local_88 = "inAppPurchase";
  local_60 = &local_88;
  lVar5 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar5 + 0x28,pcVar2);
  FUN_00ec506c("NewsFeed_Item_Clicked",&local_80);
  FUN_00ec5024("NewsFeed_Item_Clicked",&local_80);
  FUN_0090d2e0(&local_80,local_78);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00909670(undefined8 param_1,char *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "skuId";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,param_1);
  local_98 = "currency";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,param_2);
  local_98 = "price";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,param_3);
  local_98 = "gift";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,param_5 & 1);
  local_98 = "fromInventory";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,param_4 & 1);
  FUN_00ec506c("Progression_BoostPurchase",&puStack_90);
  FUN_00ec5024("Progression_BoostPurchase",&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "type1";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,"boost");
  local_98 = "type2_skuId";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,param_1);
  pcVar1 = "gifted";
  if ((param_5 & 1) == 0) {
    pcVar1 = "self";
  }
  local_98 = "type3_gifted";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar4 + 0x28,pcVar1);
  local_98 = "amount";
  local_70 = &local_98;
  lVar4 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar4 + 0x28,param_3);
  iVar3 = strcmp(param_2,"silver");
  if (iVar3 == 0) {
    FUN_00ec506c(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_90);
    puVar5 = PTR_s_Economy_Sink_Glory_02be30a0;
  }
  else {
    iVar3 = strcmp(param_2,"gold");
    if (iVar3 != 0) goto LAB_0090994c;
    FUN_00ec506c(PTR_s_Economy_Sink_ICE_02be3098,&puStack_90);
    puVar5 = PTR_s_Economy_Sink_ICE_02be3098;
  }
  FUN_00ec5024(puVar5,&puStack_90);
LAB_0090994c:
  FUN_0090d2e0(&puStack_90,local_88);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090998c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "currency";
  puStack_80 = &local_78;
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,param_1);
  local_88 = "price";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar3 + 0x28,param_2);
  local_88 = "rerollNumber";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar3 + 0x28,param_3);
  FUN_00ec506c("Progression_Casual_Aral_Reroll",&puStack_80);
  FUN_00ec5024("Progression_Casual_Aral_Reroll",&puStack_80);
  FUN_0090d2e0(&puStack_80,local_78);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "type1";
  puStack_80 = &local_78;
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,"casual_aral_reroll");
  local_88 = "amount";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar3 + 0x28,param_2);
  iVar2 = strcmp(param_1,"silver");
  if (iVar2 == 0) {
    FUN_00ec506c(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_80);
    puVar4 = PTR_s_Economy_Sink_Glory_02be30a0;
  }
  else {
    iVar2 = strcmp(param_1,"gold");
    if (iVar2 != 0) goto LAB_00909b6c;
    FUN_00ec506c(PTR_s_Economy_Sink_ICE_02be3098,&puStack_80);
    puVar4 = PTR_s_Economy_Sink_ICE_02be3098;
  }
  FUN_00ec5024(puVar4,&puStack_80);
LAB_00909b6c:
  FUN_0090d2e0(&puStack_80,local_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00909ba8(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *local_100;
  char ***local_f8 [2];
  void *local_e8;
  byte local_e0 [16];
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  char ***local_b0;
  char **local_a8;
  void *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  char **local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (param_1 != (uint *)0x0) {
    lVar5 = FUN_00940c28();
    if (*(char *)(lVar5 + 8) == '\0') {
      local_98 = &local_90;
      local_90 = 0;
      uStack_88 = 0;
      if ((param_1[0x12] & 1) == 0) {
        lVar5 = (long)param_1 + 0x49;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x16);
      }
      local_b0 = (char ***)local_f8;
      local_f8[0] = (char ***)0x1e59622;
      lVar6 = FUN_0090d33c(&local_98,local_f8,&DAT_01b9349b,&local_b0,&local_78);
      FUN_00ec3e60(lVar6 + 0x28,lVar5);
      FUN_00a01f40(&local_b0,param_1[0x10]);
      local_78 = (char **)0x1e4cd21;
      pvVar1 = (void *)((ulong)&local_b0 | 1);
      if (((ulong)local_b0 & 1) != 0) {
        pvVar1 = local_a0;
      }
      local_f8[0] = &local_78;
      lVar5 = FUN_0090d33c(&local_98,&local_78,&DAT_01b9349b,local_f8,&local_100);
      FUN_00ec3e60(lVar5 + 0x28,pvVar1);
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar7 = FUN_00a02044(param_1[0x11]);
      local_f8[0] = (char ***)0x1b9306b;
      local_b0 = (char ***)local_f8;
      lVar5 = FUN_0090d33c(&local_98,local_f8,&DAT_01b9349b,&local_b0,&local_78);
      FUN_00ec3e60(lVar5 + 0x28,uVar7);
      uVar4 = FUN_009f652c(param_1);
      local_f8[0] = (char ***)0x1b93073;
      local_b0 = (char ***)local_f8;
      lVar5 = FUN_0090d33c(&local_98,local_f8,&DAT_01b9349b,&local_b0,&local_78);
      FUN_00ec3ee0(lVar5 + 0x28,uVar4);
      uVar2 = param_1[0x33];
      local_f8[0] = (char ***)0x1b9307c;
      local_b0 = (char ***)local_f8;
      lVar5 = FUN_0090d33c(&local_98,local_f8,&DAT_01b9349b,&local_b0,&local_78);
      FUN_00ec3ee0(lVar5 + 0x28,uVar2);
      FUN_00ec506c("Progression_Quest_Reward_Redeemed",&local_98);
      FUN_00ec5024("Progression_Quest_Reward_Redeemed",&local_98);
      FUN_0090d2e0(&local_98,local_90);
    }
    if (*param_1 != 0) {
      lVar5 = *(long *)(param_1 + 2);
      lVar6 = lVar5 + (ulong)*param_1 * 0x58;
      do {
        if (*(uint *)(lVar5 + 0x48) != 0) {
          lVar9 = *(long *)(lVar5 + 0x50) + 0x18;
          lVar10 = (ulong)*(uint *)(lVar5 + 0x48) * 0x70;
          do {
            local_90 = 0;
            uStack_88 = 0;
            local_f8[0] = (char ***)0x1b921fd;
            local_b0 = (char ***)local_f8;
            local_98 = &local_90;
            lVar8 = FUN_0090d33c(&local_98,local_f8,&DAT_01b9349b,&local_b0,&local_78);
            FUN_00ec3e60(lVar8 + 0x28,"quest_reward");
            FUN_00a01f40(&local_b0,param_1[0x10]);
            local_78 = (char **)0x1b930b5;
            pvVar1 = (void *)((ulong)&local_b0 | 1);
            if (((ulong)local_b0 & 1) != 0) {
              pvVar1 = local_a0;
            }
            local_f8[0] = &local_78;
            lVar8 = FUN_0090d33c(&local_98,&local_78,&DAT_01b9349b,local_f8,&local_100);
            FUN_00ec3e60(lVar8 + 0x28,pvVar1);
            if (((ulong)local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            uVar7 = FUN_00a02044(param_1[0x11]);
            local_f8[0] = (char ***)0x1b930c5;
            local_b0 = (char ***)local_f8;
            lVar8 = FUN_0090d33c(&local_98,local_f8,&DAT_01b9349b,&local_b0,&local_78);
            FUN_00ec3e60(lVar8 + 0x28,uVar7);
            uVar4 = *(undefined4 *)(lVar9 + 0x18);
            local_f8[0] = (char ***)0x1e212c7;
            local_b0 = (char ***)local_f8;
            lVar8 = FUN_0090d33c(&local_98,local_f8,&DAT_01b9349b,&local_b0,&local_78);
            FUN_00ec3ee0(lVar8 + 0x28,uVar4);
            FUN_008fcdb8(local_c8,lVar9 + -0x18);
            FUN_008fcdb8(local_e0,lVar9);
            FUN_0090a12c(local_c8,local_e0,&local_98);
            if ((local_e0[0] & 1) != 0) {
              operator_delete(local_d0);
            }
            if ((local_c8[0] & 1) != 0) {
              operator_delete(local_b8);
            }
            if (0 < (int)param_1[0x33]) {
              local_a8 = (char **)0x0;
              local_a0 = (void *)0x0;
              local_78 = (char **)0x1b921fd;
              local_f8[0] = &local_78;
              local_b0 = &local_a8;
              lVar8 = FUN_0090d33c(&local_b0,&local_78,&DAT_01b9349b,local_f8,&local_100);
              FUN_00ec3e60(lVar8 + 0x28,"quest_reward");
              FUN_00a01f40(local_f8,param_1[0x10]);
              pvVar1 = (void *)((ulong)local_f8 | 1);
              if (((ulong)local_f8[0] & 1) != 0) {
                pvVar1 = local_e8;
              }
              local_78 = &local_100;
              local_100 = "type2_questType";
              lVar8 = FUN_0090d33c(&local_b0,&local_100,&DAT_01b9349b,&local_78,auStack_80);
              FUN_00ec3e60(lVar8 + 0x28,pvVar1);
              if (((ulong)local_f8[0] & 1) != 0) {
                operator_delete(local_e8);
              }
              uVar7 = FUN_00a02044(param_1[0x11]);
              local_78 = (char **)0x1b930c5;
              local_f8[0] = &local_78;
              lVar8 = FUN_0090d33c(&local_b0,&local_78,&DAT_01b9349b,local_f8,&local_100);
              FUN_00ec3e60(lVar8 + 0x28,uVar7);
              uVar2 = param_1[0x33];
              local_78 = (char **)0x1e212c7;
              local_f8[0] = &local_78;
              lVar8 = FUN_0090d33c(&local_b0,&local_78,&DAT_01b9349b,local_f8,&local_100);
              FUN_00ec3ee0(lVar8 + 0x28,uVar2);
              FUN_00ec506c(PTR_s_Economy_Tap_XP_02be3078,&local_b0);
              FUN_00ec5024(PTR_s_Economy_Tap_XP_02be3078,&local_b0);
              FUN_0090d2e0(&local_b0,local_a8);
            }
            FUN_0090d2e0(&local_98,local_90);
            lVar10 = lVar10 + -0x70;
            lVar9 = lVar9 + 0x70;
          } while (lVar10 != 0);
        }
        lVar5 = lVar5 + 0x58;
      } while (lVar5 != lVar6);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

