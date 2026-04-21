// functions/10050 — 68 functions
#include "GameKindred.h"




undefined8 FUN_1005000d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"weaveHeroSkin");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1005001d8(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"setTutorialState");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1005002e0(local_68,lVar1,&local_34);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_1005002e0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 *local_48;
  ulong local_40;
  undefined4 local_38;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_68 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_48 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_48 = param_2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_60 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar1;
  local_c0 = local_c8;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  FUN_100523820(&local_e0,*param_3);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  if (local_c0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




undefined8 FUN_1005003f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"forgeCard");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500500(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"forgeEssence");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"openRewardChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500710(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"getRewardChestDefinitions");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fe98c(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500818(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getForgeManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500914(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getSeasonRewardsManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500a10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getBuffManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500b0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getTrophyCase");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500c08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"openInventoryChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100500d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"equipToSlot");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_100500e38(local_68,lVar1,"player_global_loadout","social_ping_pack",param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_100500e38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_3);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_3;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_4);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_4;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar1 = *(byte *)((long)param_5 + 0x17);
  local_58 = (undefined8 *)*param_5;
  if (-1 < (char)bVar1) {
    local_58 = param_5;
  }
  uVar2 = (uint)param_5[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_100500fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"equipToSlot");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1005010f0(local_68,lVar1,"player_global_loadout","charm",param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_1005010f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_3);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_3;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_4);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_4;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar1 = *(byte *)((long)param_5 + 0x17);
  local_58 = (undefined8 *)*param_5;
  if (-1 < (char)bVar1) {
    local_58 = param_5;
  }
  uVar2 = (uint)param_5[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_100501290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"equipToSlot");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1005013a8(local_68,lVar1,"player_global_loadout","hat",param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_1005013a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_3);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_3;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_4);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_4;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar1 = *(byte *)((long)param_5 + 0x17);
  local_58 = (undefined8 *)*param_5;
  if (-1 < (char)bVar1) {
    local_58 = param_5;
  }
  uVar2 = (uint)param_5[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_100501548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getAscensionDisplayData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501644(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"attemptRedeemAscensionChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501740(long param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_38 = param_3;
  local_31 = param_2;
  local_3c = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_58,"attemptRedeemAscensionRankUpChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_100501850(local_70,lVar1,&local_31,&local_38);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_58,local_70,0,&local_3c,0x5a,0);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_100501850(undefined8 param_1,undefined8 *param_2,char *param_3,undefined4 *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 *local_48;
  ulong local_40;
  undefined4 local_38;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_68 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_48 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_48 = param_2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_60 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar1;
  local_c0 = local_c8;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_38 = 0x101;
  if (*param_3 != '\0') {
    local_38 = 0x102;
  }
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  FUN_100523820(&local_e0,*param_4);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  if (local_c0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




undefined8 FUN_100501998(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"attemptRedeemAscensionSeasonEndChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"attemptRedeemSeasonalAscensionChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"buyAscensionSeasonalBundle");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501ca0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getRewardsManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501d9c(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"getQuestDisplayDataForPlayer");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f59d0(local_68,lVar1,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"getQuestDisplayDataForPlayerAndType");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100501fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"redeemQuestForPlayer");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1005020b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"skipQuestForPlayer");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1005021bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"notifyPlayerAction");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8
FUN_1005022d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  void *local_a0 [2];
  char local_89;
  void *local_88 [2];
  char local_71;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined4 local_54;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_54 = FUN_1004f1744(param_1 + 0x2c98,param_7);
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_1004e357c(param_3,&local_70);
  FUN_1000ee4ec(local_88,"verifyGovernmentId");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_100502430(local_a0,lVar1,param_2,&local_70,param_4,param_5,param_6);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_88,local_a0,0,&local_54,0x5a,0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
    return uVar2;
  }
  return uVar2;
}




void FUN_100502430(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  void *pvStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  void *local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 *local_78;
  ulong local_70;
  undefined4 local_68;
  
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  pvStack_e0 = (void *)0x0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0x400;
  local_b8 = 0;
  local_b0 = 0;
  local_f8 = operator_new(0x28);
  *local_f8 = 0;
  local_f8[1] = 0x10000;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_f8[2] = 0;
  local_98 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_78 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_78 = param_2;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_90 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  local_f0 = local_f8;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_78 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_78 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_4 + 0x17);
  local_78 = (undefined8 *)*param_4;
  if (-1 < (char)bVar2) {
    local_78 = param_4;
  }
  uVar1 = (uint)param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_5 + 0x17);
  local_78 = (undefined8 *)*param_5;
  if (-1 < (char)bVar2) {
    local_78 = param_5;
  }
  uVar1 = (uint)param_5[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_6 + 0x17);
  local_78 = (undefined8 *)*param_6;
  if (-1 < (char)bVar2) {
    local_78 = param_6;
  }
  uVar1 = (uint)param_6[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_7 + 0x17);
  local_78 = (undefined8 *)*param_7;
  if (-1 < (char)bVar2) {
    local_78 = param_7;
  }
  uVar1 = (uint)param_7[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  uVar3 = FUN_100523708(&local_110);
  FUN_10003330c(param_1,uVar3);
  if (lStack_80 < 0) {
    operator_delete(local_90);
  }
  if (local_f0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_d8);
  if (pvStack_e0 != (void *)0x0) {
    operator_delete(pvStack_e0);
  }
  return;
}




undefined8 FUN_100502670(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"isGovernmentIdVerified");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




long FUN_10050276c(long param_1)

{
  return param_1 + 0x2a70;
}




bool FUN_100502778(long param_1,string *param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2b08) & 0xfffffffe;
  if (uVar1 == 6) {
    std::string::operator=(param_2,(string *)(param_1 + 0x2a80));
    *param_3 = *(undefined4 *)(param_1 + 0x2a98);
  }
  return uVar1 == 6;
}




bool FUN_1005027d4(long param_1,string *param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2b08) & 0xfffffffe;
  if (uVar1 == 6) {
    std::string::operator=(param_2,(string *)(param_1 + 0x2aa0));
    *param_3 = *(undefined4 *)(param_1 + 0x2ab8);
  }
  return uVar1 == 6;
}




undefined4 FUN_100502830(void)

{
  return DAT_1018675c8;
}




undefined8 FUN_10050283c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (*(int *)(param_1 + 0x2b08) == 0) {
    uVar1 = 0xfffffff9;
    DAT_1018675c8 = 0xfffffff9;
  }
  else {
    FUN_1000ee4ec(local_48,"updateMatchInfo");
    FUN_1004f4c20(local_60,param_2,param_3);
    uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,1,0,0x5a,0);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return uVar1;
}




undefined8 FUN_1005028f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *local_48 [2];
  char local_31;
  
  if (*(int *)(param_1 + 0x2b08) == 0) {
    uVar1 = 0xfffffff9;
    DAT_1018675c8 = 0xfffffff9;
  }
  else {
    FUN_1000ee4ec(local_48,"notifyGameResults");
    uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,param_3,1,0,0x5a,0);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return uVar1;
}




undefined8 FUN_100502990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  FUN_1000ee4ec(local_48,"spectatorExitMatch");
  FUN_1004f4e58(local_60,param_2);
  uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x5a,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return uVar1;
}




undefined8 FUN_100502a54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getProgressiveChestDescriptions");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100502b50(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_50,"collectProgressiveChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f5564(local_68,lVar1,param_2,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100502c60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getLeaderboardData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0xb4,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_100502d5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getLiveEventData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0xb4,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_100502e58(char *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined1 auStack_1f0 [328];
  char *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  cVar1 = param_1[0x17];
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_a8 = *(char **)param_1;
  if (-1 < cVar1) {
    local_a8 = param_1;
  }
  pcStack_a0 = local_a8;
  local_78 = local_80;
  if (*local_a8 != '\0') {
    do {
      FUN_100522630(&local_98,&local_a8);
      FUN_1004edef0(auStack_1f0,&local_98);
      FUN_100502f48(&DAT_101d91788,auStack_1f0);
      FUN_10014ea98(auStack_1f0);
    } while (*local_a8 != '\0');
    if (local_78 == (undefined8 *)0x0) goto LAB_100502f20;
  }
  pvVar2 = (void *)FUN_1000f7b54();
  operator_delete(pvVar2);
LAB_100502f20:
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




void FUN_100502f48(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10052473c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x148;
  FUN_10003330c(lVar5 + -0x148,param_2);
  FUN_10003330c(lVar5 + -0x130,param_2 + 0x18);
  FUN_10052483c(lVar5 + -0x118,param_2 + 0x30);
  uVar3 = *(undefined2 *)(param_2 + 0x140);
  *(undefined1 *)(lVar5 + -6) = *(undefined1 *)(param_2 + 0x142);
  *(undefined2 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_100502ff8(long param_1)

{
  char *pcVar1;
  int iVar2;
  uint64_t uVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  undefined **local_50;
  code **ppcStack_48;
  long local_40;
  code *local_38;
  
  pcVar1 = (char *)(param_1 + 0x2a61);
  if (*(char *)(param_1 + 0x2c50) != '\0') {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c58));
    std::string::operator=((string *)(param_1 + 0x2c20),(string *)(param_1 + 0x2c38));
    *(undefined1 *)(param_1 + 0x2c50) = 0;
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c58));
  }
  uVar3 = _mach_absolute_time();
  if ((((double)*(float *)(param_1 + 0x2a70) <
        (double)((uVar3 - *(long *)(param_1 + 0x2a78)) * DAT_101d91638) * 1e-09) ||
      (*(char *)(param_1 + 0x2d00) != '\0')) && (*(int *)(param_1 + 0x2b08) != 0)) {
    *(undefined1 *)(param_1 + 0x2d00) = 0;
    *(undefined4 *)(param_1 + 0x2a70) = 0x41200000;
    FUN_1004e3004(param_1 + 0x2a78);
    FUN_100503228(param_1);
  }
  if ((DAT_1018675c8 == -2) || (DAT_1018675c8 == -0xc9)) {
    std::string::operator=((string *)(param_1 + 0x2c20),(string *)&DAT_101d91198);
    FUN_1004f1904(param_1 + 0x2a70);
  }
  if (*pcVar1 == '\0') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2a54) + -1;
  if (*(int *)(param_1 + 0x2a54) < 1) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x2a54) = iVar2;
  if ((*(long **)(param_1 + 0x2a48) != (long *)0x0) &&
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x2a48) + 0x40))(), iVar2 != 1))
  goto LAB_100503194;
  if (*(char *)(param_1 + 0x2a62) == '\0') {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x2a63) != '\0') {
      iVar2 = *(int *)(param_1 + 0x2a54) + *(int *)(param_1 + 0x2a58);
      *(int *)(param_1 + 0x2a54) = iVar2;
      if (*(int *)(param_1 + 0x2a5c) < iVar2) {
        pcVar1[0] = '\0';
        pcVar1[1] = '\x01';
        goto LAB_10050313c;
      }
      cVar6 = '\0';
    }
  }
  else {
LAB_10050313c:
    cVar6 = '\x01';
  }
  if (*(long **)(param_1 + 0x2a48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2a48) + 8))();
    *(undefined8 *)(param_1 + 0x2a48) = 0;
    cVar6 = *(char *)(param_1 + 0x2a62);
  }
  if ((cVar6 != '\0') && (*(char *)(param_1 + 0x2a63) != '\0')) {
    return;
  }
  local_50 = (undefined **)0x0;
  ppcStack_48 = (code **)0x0;
  local_40 = 0;
  uVar4 = FUN_1004f2c38(param_1 + 0x80,1,&local_50);
  *(undefined8 *)(param_1 + 0x2a48) = uVar4;
  if (local_40 < 0) {
    operator_delete(local_50);
  }
LAB_100503194:
  plVar5 = *(long **)(param_1 + 0x2a48);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,0);
    local_38 = FUN_100502e58;
    ppcStack_48 = &local_38;
    local_50 = &PTR_FUN_10149f0f0;
    (**(code **)(**(long **)(param_1 + 0x2a48) + 0x48))(*(long **)(param_1 + 0x2a48),&local_50);
  }
  return;
}




undefined8 FUN_100503228(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  FUN_1000ee4ec(local_48,"update");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_60,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x14,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_100503314(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  char *local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  
  DAT_1018675c8 = 1;
  if ((int)param_2[2] == 0) {
    DAT_1018675c8 = 0xffffffff;
    return;
  }
  if ((*(char *)(param_1 + 0x2c18) != '\0') &&
     (lVar4 = FUN_1000e86c0(param_2,"sessionToken"),
     *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4)) {
    local_48 = 0x100005;
    local_58 = "sessionToken";
    local_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(param_2,&local_58);
    plVar6 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar6 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar6);
    uVar1 = local_50;
    if (-1 < (char)local_41) {
      uVar1 = (ulong)local_41;
    }
    if ((uVar1 != 0) ||
       (iVar2 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1013cda1a),
       iVar2 != 0)) {
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c58));
      *(undefined1 *)(param_1 + 0x2c50) = 1;
      std::string::operator=((string *)(param_1 + 0x2c38),(string *)&local_58);
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c58));
    }
    if ((char)local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  if (DAT_1018675cc == (int)param_3) {
LAB_100503448:
    FUN_100506f44(param_1,param_2);
  }
  else {
    plVar6 = (long *)FUN_1004f1830(param_1 + 0x2c98,param_3);
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*plVar6 + 0x10))();
    switch(uVar3) {
    case 1:
      FUN_1005039ac(param_2,plVar6);
      break;
    case 2:
      FUN_100505210(param_2,plVar6);
      break;
    case 3:
      FUN_1005050c0(param_2,plVar6);
      break;
    case 4:
      FUN_10050539c(param_2,plVar6);
      break;
    case 5:
      FUN_100505520(param_2,plVar6,*(undefined1 *)(param_1 + 0x2a64));
      goto LAB_100503448;
    case 7:
      FUN_100507590(param_2,plVar6);
      break;
    case 8:
      FUN_100507640(param_2,plVar6);
      FUN_1000153b4(param_1 + 0x2b40,plVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)((long)plVar6 + 0x124);
      *(undefined8 *)(param_1 + 0x2b50) = *(undefined8 *)((long)plVar6 + 0x11c);
      break;
    case 9:
      FUN_10050a250(param_2,plVar6);
      break;
    case 10:
      FUN_10050b0dc(param_2,plVar6);
      break;
    case 0xb:
      FUN_10050b408(param_2,plVar6);
      break;
    case 0xc:
      local_48 = 0x100005;
      local_58 = "code";
      local_50 = 4;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_58);
      *(undefined4 *)(plVar6 + 5) = *puVar7;
      break;
    case 0xd:
      FUN_10050b6a8(param_2,plVar6);
      break;
    case 0xe:
      FUN_10050bc4c(param_2,plVar6);
      break;
    case 0xf:
      FUN_10050bfac(param_2,plVar6);
      break;
    case 0x10:
      FUN_10050c2bc(param_2,plVar6);
      break;
    case 0x11:
      FUN_10050de50(param_2,plVar6);
      break;
    case 0x12:
      FUN_10050e4fc(param_2,plVar6);
      break;
    case 0x13:
      FUN_10050e80c(param_2,plVar6);
      break;
    case 0x14:
      FUN_10050fa10(param_2,plVar6);
      break;
    case 0x15:
      FUN_100510924(param_2,plVar6);
      break;
    case 0x16:
      FUN_100510c38(param_2,plVar6);
      break;
    case 0x17:
      FUN_10051a89c(param_2,plVar6);
      break;
    case 0x18:
      FUN_100510f84(param_2,plVar6);
      break;
    case 0x19:
      FUN_1005111b4(param_2,plVar6);
      break;
    case 0x1a:
      FUN_10051151c(param_2,plVar6);
      break;
    case 0x1b:
      FUN_10051183c(param_2,plVar6);
      break;
    case 0x1c:
      FUN_100511e3c(param_2,plVar6,param_1 + 0x2ad8,param_1 + 0x2af0);
      break;
    case 0x1d:
      FUN_10051022c(param_2,plVar6);
      break;
    case 0x1e:
      FUN_100510420(param_2,plVar6);
      break;
    case 0x1f:
      FUN_100510514(param_2,plVar6);
      break;
    case 0x20:
      FUN_100510608(param_2,plVar6);
      break;
    case 0x21:
      FUN_1005106fc(param_2,plVar6);
      break;
    case 0x22:
      FUN_100511ec4(param_2,plVar6);
      break;
    case 0x23:
      FUN_100512218(param_2,plVar6);
      break;
    case 0x24:
      FUN_1005123d8(param_2,plVar6);
      break;
    case 0x25:
      FUN_100512674(param_2,plVar6);
      break;
    case 0x26:
      FUN_100512910(param_2,plVar6);
      break;
    case 0x27:
      FUN_100512db4(param_2,plVar6);
      break;
    case 0x28:
      FUN_100513564(param_2,plVar6);
      break;
    case 0x29:
      FUN_1005137fc(param_2,plVar6);
      break;
    case 0x2a:
      FUN_1005138f0(param_2,plVar6);
      break;
    case 0x2b:
      FUN_1005139e4(param_2,plVar6);
      break;
    case 0x2c:
      FUN_100513aa0(param_2,plVar6);
      break;
    case 0x2d:
      FUN_100513bd0(param_2,plVar6);
      break;
    case 0x2e:
      FUN_100513d90(param_2,plVar6);
      break;
    case 0x2f:
      FUN_100513f50(param_2,plVar6);
      break;
    case 0x30:
      FUN_100514110(param_2,plVar6);
      break;
    case 0x31:
      FUN_1005142d0(param_2,plVar6);
      break;
    case 0x32:
      FUN_1005143ec(param_2,plVar6);
      break;
    case 0x33:
      FUN_100514650(param_2,plVar6);
      break;
    case 0x34:
      FUN_100514800(param_2,plVar6);
      break;
    case 0x35:
      FUN_10051505c(param_2,plVar6);
      break;
    case 0x36:
      FUN_100515198(param_2,plVar6);
      break;
    case 0x37:
      FUN_100504dd4(param_2,plVar6);
      break;
    case 0x38:
      FUN_100504ae8(param_2,plVar6);
      break;
    case 0x39:
      FUN_100515314(param_2,plVar6);
      break;
    case 0x3a:
      FUN_100515754(param_2,plVar6);
      break;
    case 0x3b:
      FUN_100515d50(param_2,plVar6);
      break;
    case 0x3c:
      FUN_100515f90(param_2,plVar6);
      break;
    case 0x3d:
      FUN_100516908(param_2,plVar6);
      break;
    case 0x3e:
      FUN_100518760(param_2,plVar6);
      break;
    case 0x3f:
      FUN_100518970(param_2,plVar6);
      break;
    case 0x40:
      FUN_100519118(param_2,plVar6);
      break;
    case 0x41:
      FUN_10051a044(param_2,plVar6);
      break;
    case 0x42:
      FUN_10051a108(param_2,plVar6);
      break;
    case 0x43:
      FUN_10051a488(param_2,plVar6);
      break;
    case 0x44:
      FUN_10051a54c(param_2,plVar6);
      break;
    case 0x45:
      FUN_10051a610(param_2,plVar6);
      break;
    case 0x46:
      FUN_100503c98(param_2,plVar6);
      break;
    case 0x47:
      FUN_100503f84(param_2,plVar6);
      break;
    case 0x48:
      FUN_100504270(param_2,plVar6);
      break;
    case 0x49:
      FUN_10050455c(param_2,plVar6);
      break;
    case 0x4a:
      FUN_100504848(param_2,plVar6);
    }
  }
  return;
}




void FUN_1005039ac(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_100503a1c:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100503a1c;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x40) = uVar6;
  *(undefined1 *)(param_2 + 0x44) = 0;
  std::string::operator=((string *)(param_2 + 0x48),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x40) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100503bc0:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100503bc0;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x44) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_100503c44;
    }
  }
  pcVar5 = "";
LAB_100503c44:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_100503c98(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_100503d08:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100503d08;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x40) = uVar6;
  *(undefined1 *)(param_2 + 0x44) = 0;
  std::string::operator=((string *)(param_2 + 0x448),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x40) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100503eac:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100503eac;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x44) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_100503f30;
    }
  }
  pcVar5 = "";
LAB_100503f30:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x448),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_100503f84(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_100503ff4:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100503ff4;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0xb8) = uVar6;
  *(undefined1 *)(param_2 + 0xbc) = 0;
  std::string::operator=((string *)(param_2 + 0x4c0),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0xb8) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100504198:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100504198;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0xbc) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_10050421c;
    }
  }
  pcVar5 = "";
LAB_10050421c:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x4c0),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_100504270(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_1005042e0:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_1005042e0;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x438) = uVar6;
  *(undefined1 *)(param_2 + 0x43c) = 0;
  std::string::operator=((string *)(param_2 + 0x440),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x438) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100504484:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100504484;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x43c) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_100504508;
    }
  }
  pcVar5 = "";
LAB_100504508:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x440),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_10050455c(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_1005045cc:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_1005045cc;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x40) = uVar6;
  *(undefined1 *)(param_2 + 0x44) = 0;
  std::string::operator=((string *)(param_2 + 0x48),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x40) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100504770:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100504770;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x44) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_1005047f4;
    }
  }
  pcVar5 = "";
LAB_1005047f4:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_100504848(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  local_48 = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
  *(undefined4 *)(param_2 + 0x50) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_48 = 0x100005;
    local_58 = "returnValue";
    uStack_50 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_58);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_48 = 0x100005;
      local_58 = "returnValue";
      uStack_50 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
      local_48 = 0x100005;
      local_58 = "success";
      uStack_50 = 7;
      lVar3 = FUN_1000e87dc(plVar4,&local_58);
      *(bool *)(param_2 + 0x4bc) = *(int *)(lVar3 + 0x10) == 0x102;
      if (*(char *)(param_2 + 0x49f) < '\0') {
        **(undefined1 **)(param_2 + 0x488) = 0;
        *(undefined8 *)(param_2 + 0x490) = 0;
      }
      else {
        *(string *)(param_2 + 0x488) = (string)0x0;
        *(undefined1 *)(param_2 + 0x49f) = 0;
      }
      if (*(char *)(param_2 + 0x4b7) < '\0') {
        **(undefined1 **)(param_2 + 0x4a0) = 0;
        *(undefined8 *)(param_2 + 0x4a8) = 0;
      }
      else {
        *(string *)(param_2 + 0x4a0) = (string)0x0;
        *(undefined1 *)(param_2 + 0x4b7) = 0;
      }
      *(undefined4 *)(param_2 + 0x4b8) = 0;
      if (*(char *)(param_2 + 0x4bc) != '\0') {
        return;
      }
      lVar3 = FUN_1000e86c0(plVar4,"reason");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_48 = 0x100005;
        local_58 = "reason";
        uStack_50 = 6;
        plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
        plVar1 = (long *)*plVar5;
        if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
          plVar1 = plVar5;
        }
        FUN_1000ee4ec(&local_58,plVar1);
        std::string::operator=((string *)(param_2 + 0x488),(string *)&local_58);
        if (local_41 < '\0') {
          operator_delete(local_58);
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"banReason");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_48 = 0x100005;
        local_58 = "banReason";
        uStack_50 = 9;
        plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
        plVar1 = (long *)*plVar5;
        if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
          plVar1 = plVar5;
        }
        FUN_1000ee4ec(&local_58,plVar1);
        std::string::operator=((string *)(param_2 + 0x4a0),(string *)&local_58);
        if (local_41 < '\0') {
          operator_delete(local_58);
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"banRemainingSeconds");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        return;
      }
      local_48 = 0x100005;
      local_58 = "banRemainingSeconds";
      uStack_50 = 0x13;
      puVar2 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
      *(undefined4 *)(param_2 + 0x4b8) = *puVar2;
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x50) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_100504ae8(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_100504b58:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100504b58;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  std::string::operator=((string *)(param_2 + 0x430),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100504cfc:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100504cfc;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x2c) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_100504d80;
    }
  }
  pcVar5 = "";
LAB_100504d80:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x430),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_100504dd4(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_100504e44:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100504e44;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  std::string::operator=((string *)(param_2 + 0x430),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100504fe8:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100504fe8;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x2c) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_10050506c;
    }
  }
  pcVar5 = "";
LAB_10050506c:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x430),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_1005050c0(long *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  *(undefined1 *)(param_2 + 0x25) = 0;
  std::string::operator=((string *)(param_2 + 0x28),(string *)&DAT_101d91198);
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar1 = FUN_1000e87dc(param_1,&local_58);
  if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x25) = 1;
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "returnValue";
    uStack_50 = 0xb;
    lVar1 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "returnValue";
      uStack_50 = 0xb;
      pcVar2 = (char *)FUN_1000e87dc(param_1,&local_58);
      if (((byte)pcVar2[0x12] >> 6 & 1) == 0) {
        pcVar2 = *(char **)pcVar2;
      }
      goto LAB_1005051a8;
    }
  }
  pcVar2 = "";
LAB_1005051a8:
  FUN_1000ee4ec(&local_58,pcVar2);
  std::string::operator=((string *)(param_2 + 0x28),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_100505210(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  double dVar5;
  float fVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar1 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "code";
      uStack_50 = 4;
      puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
      uVar4 = *puVar2;
      goto LAB_1005052a4;
    }
  }
  uVar4 = 0;
LAB_1005052a4:
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "returnValue";
    uStack_50 = 0xb;
    lVar1 = FUN_1000e87dc(param_1,&local_58);
    if (*(int *)(lVar1 + 0x10) == 3) {
      local_48 = 0x100005;
      local_58 = "returnValue";
      uStack_50 = 0xb;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_58);
      lVar1 = FUN_1000e86c0(plVar3,"value");
      fVar6 = 0.0;
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar1) {
        local_48 = 0x100005;
        local_58 = "value";
        uStack_50 = 5;
        lVar1 = FUN_1000e87dc(plVar3,&local_58);
        fVar6 = 0.0;
        if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
          local_48 = 0x100005;
          local_58 = "value";
          uStack_50 = 5;
          FUN_1000e87dc(plVar3,&local_58);
          dVar5 = (double)FUN_1000fceec();
          fVar6 = (float)dVar5;
        }
      }
      *(float *)(param_2 + 0x2c) = fVar6;
    }
  }
  return;
}




void FUN_10050539c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_100505408:
    uVar4 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "code";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_100505408;
    local_38 = 0x100005;
    local_48 = "code";
    uStack_40 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar4 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar1 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar1 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar2 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar1 = FUN_1000e86c0(plVar2,"linkResult");
  if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "linkResult";
    uStack_40 = 10;
    lVar1 = FUN_1000e87dc(plVar2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "linkResult";
      uStack_40 = 10;
      puVar3 = (undefined4 *)FUN_1000e87dc(plVar2,&local_48);
      uVar4 = *puVar3;
      goto LAB_100505508;
    }
  }
  uVar4 = 0;
LAB_100505508:
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  return;
}




void FUN_100505520(long *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  string *this;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
LAB_10050559c:
    uVar12 = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "code";
    local_a8 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050559c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "code";
    local_a8 = 4;
    puVar9 = (undefined4 *)FUN_1000e87dc(param_1,&local_b0);
    uVar12 = *puVar9;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar12;
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_a0._0_4_ = 0x100005;
  local_b0 = "returnValue";
  local_a8 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_b0);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_a0 = CONCAT44(local_a0._4_4_,0x100005);
  local_b0 = "returnValue";
  local_a8 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_b0);
  FUN_100111bb4(param_2 + 0x30,plVar5,*(undefined8 *)(param_2 + 0x48));
  lVar4 = FUN_1000e86c0(plVar5,"supportUrls");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "supportUrls";
    local_a8 = 0xb;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "supportUrls";
      local_a8 = 0xb;
      plVar6 = (long *)FUN_1000e87dc(plVar5,&local_b0);
      if ((int)plVar6[1] != 0) {
        puVar10 = (undefined8 *)(*plVar6 + 0x18);
        do {
          puVar11 = puVar10;
          if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
            puVar11 = (undefined8 *)*puVar10;
          }
          FUN_1000ee4ec(&local_b0,puVar11);
          if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
            puVar11 = (undefined8 *)puVar10[-3];
          }
          else {
            puVar11 = puVar10 + -3;
          }
          FUN_1000ee4ec(&local_78,puVar11);
          this = (string *)FUN_1001339ec(param_2 + 400,&local_78);
          std::string::operator=(this,(string *)&local_b0);
          if (local_61 < '\0') {
            operator_delete(local_78);
          }
          if (local_a0 < 0) {
            operator_delete(local_b0);
          }
          puVar11 = puVar10 + 3;
          puVar10 = puVar10 + 6;
        } while (puVar11 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
      }
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"notifyUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050579c:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyUrl";
    local_a8 = 9;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050579c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyUrl";
    local_a8 = 9;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0xf8),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"notifyFallbackUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505814:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyFallbackUrl";
    local_a8 = 0x11;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505814;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyFallbackUrl";
    local_a8 = 0x11;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x110),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"bucketIncrementer");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050588c:
    uVar12 = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "bucketIncrementer";
    local_a8 = 0x11;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050588c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "bucketIncrementer";
    local_a8 = 0x11;
    puVar9 = (undefined4 *)FUN_1000e87dc(plVar5,&local_b0);
    uVar12 = *puVar9;
  }
  *(undefined4 *)(param_2 + 0x128) = uVar12;
  lVar4 = FUN_1000e86c0(plVar5,"failoverThreshold");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505958:
    uVar12 = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "failoverThreshold";
    local_a8 = 0x11;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_100505958;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "failoverThreshold";
    local_a8 = 0x11;
    puVar9 = (undefined4 *)FUN_1000e87dc(plVar5,&local_b0);
    uVar12 = *puVar9;
  }
  *(undefined4 *)(param_2 + 300) = uVar12;
  lVar4 = FUN_1000e86c0(plVar5,"platformUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_1005059cc:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "platformUrl";
    local_a8 = 0xb;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_1005059cc;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "platformUrl";
    local_a8 = 0xb;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x130),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"chatUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505a44:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatUrl";
    local_a8 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505a44;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatUrl";
    local_a8 = 7;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x148),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"chatPass");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505abc:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatPass";
    local_a8 = 8;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505abc;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatPass";
    local_a8 = 8;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x160),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"playerUUID");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    lVar4 = FUN_1000e86c0(plVar5,"playerUUID");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505b5c:
      pcVar8 = "";
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "playerUUID";
      local_a8 = 10;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505b5c;
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "playerUUID";
      local_a8 = 10;
      pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
        pcVar8 = *(char **)pcVar8;
      }
    }
    FUN_1000ee4ec(&local_b0,pcVar8);
    std::string::operator=((string *)(param_2 + 0x98),(string *)&local_b0);
    if (local_a0 < 0) {
      operator_delete(local_b0);
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"playerInfo");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "playerInfo";
    local_a8 = 10;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "playerInfo";
      local_a8 = 10;
      plVar6 = (long *)FUN_1000e87dc(plVar5,&local_b0);
      lVar4 = FUN_1000e86c0(plVar6,"guildUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505c3c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xe0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"enableStateUpdates");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505da8:
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "enableStateUpdates";
    local_a8 = 0x12;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100505da8;
    lVar4 = FUN_1000e86c0(plVar5,"enableStateUpdates");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505e80:
      bVar2 = false;
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "enableStateUpdates";
      local_a8 = 0x12;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100505e80;
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "enableStateUpdates";
      local_a8 = 0x12;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
    }
    *(bool *)(param_2 + 0x178) = bVar2;
  }
  lVar4 = FUN_1000e86c0(plVar5,"missedStateUpdateMessagesThreshold");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505fb0:
    uVar12 = 0xffffffff;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "missedStateUpdateMessagesThreshold";
    local_a8 = 0x22;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_100505fb0;
    lVar4 = FUN_1000e86c0(plVar5,"missedStateUpdateMessagesThreshold");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506004:
      uVar12 = 0;
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "missedStateUpdateMessagesThreshold";
      local_a8 = 0x22;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_100506004;
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "missedStateUpdateMessagesThreshold";
      local_a8 = 0x22;
      puVar9 = (undefined4 *)FUN_1000e87dc(plVar5,&local_b0);
      uVar12 = *puVar9;
    }
  }
  *(undefined4 *)(param_2 + 0x17c) = uVar12;
  lVar4 = FUN_1000e86c0(plVar5,"pingHostPortInfo");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    FUN_10014e9b0(param_2 + 0x180,0);
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "pingHostPortInfo";
    local_a8 = 0x10;
    plVar6 = (long *)FUN_1000e87dc(plVar5,&local_b0);
    if ((int)plVar6[1] != 0) {
      lVar4 = 0;
      uVar14 = 0;
      do {
        plVar1 = (long *)(*plVar6 + lVar4);
        local_90 = (void *)0x0;
        uStack_88 = 0;
        local_80 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_b0 = (char *)0x0;
        local_98 = 0;
        lVar7 = FUN_1000e86c0(plVar1,"host");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
          pcVar8 = "";
        }
        else {
          local_68 = 0x100005;
          local_78 = "host";
          uStack_70 = 4;
          lVar7 = FUN_1000e87dc(plVar1,&local_78);
          pcVar8 = "";
          if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
            local_68 = 0x100005;
            local_78 = "host";
            uStack_70 = 4;
            pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_78);
            if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
              pcVar8 = *(char **)pcVar8;
            }
          }
        }
        FUN_1000ee4ec(&local_78,pcVar8);
        std::string::operator=((string *)&local_b0,(string *)&local_78);
        if (local_61 < '\0') {
          operator_delete(local_78);
        }
        lVar7 = FUN_1000e86c0(plVar1,"port");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
          local_98 = 0;
        }
        else {
          local_68 = 0x100005;
          local_78 = "port";
          uStack_70 = 4;
          lVar7 = FUN_1000e87dc(plVar1,&local_78);
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) {
            local_98 = 0;
          }
          else {
            local_68 = 0x100005;
            local_78 = "port";
            uStack_70 = 4;
            puVar9 = (undefined4 *)FUN_1000e87dc(plVar1,&local_78);
            local_98 = *puVar9;
          }
        }
        lVar7 = FUN_1000e86c0(plVar1,"site");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
          pcVar8 = "";
        }
        else {
          local_68 = 0x100005;
          local_78 = "site";
          uStack_70 = 4;
          lVar7 = FUN_1000e87dc(plVar1,&local_78);
          pcVar8 = "";
          if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
            local_68 = 0x100005;
            local_78 = "site";
            uStack_70 = 4;
            pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_78);
            if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
              pcVar8 = *(char **)pcVar8;
            }
          }
        }
        FUN_1000ee4ec(&local_78,pcVar8);
        std::string::operator=((string *)&local_90,(string *)&local_78);
        if (local_61 < '\0') {
          operator_delete(local_78);
        }
        FUN_10051b978(param_2 + 0x180,&local_b0);
        if (local_80 < 0) {
          operator_delete(local_90);
        }
        if (local_a0 < 0) {
          operator_delete(local_b0);
        }
        uVar14 = uVar14 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar14 < *(uint *)(plVar6 + 1));
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"region");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "region";
    local_a8 = 6;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) {
      pcVar8 = "";
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "region";
      local_a8 = 6;
      pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
        pcVar8 = *(char **)pcVar8;
      }
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x1a8),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"country");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506420:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "country";
    local_a8 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506420;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "country";
    local_a8 = 7;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x1c0),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"askRegistrationConsent");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506498:
    bVar2 = true;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "askRegistrationConsent";
    local_a8 = 0x16;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100506498;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "askRegistrationConsent";
    local_a8 = 0x16;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x1d8) = bVar2;
  lVar4 = FUN_1000e86c0(plVar5,"platformTime");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506540:
    uVar13 = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "platformTime";
    local_a8 = 0xc;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100506540;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "platformTime";
    local_a8 = 0xc;
    puVar10 = (undefined8 *)FUN_1000e87dc(plVar5,&local_b0);
    uVar13 = *puVar10;
  }
  *(undefined8 *)(param_2 + 0x1e0) = uVar13;
  lVar4 = FUN_1000e86c0(plVar5,"pingPostToAnalytics");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_1005065b4:
    bVar2 = false;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "pingPostToAnalytics";
    local_a8 = 0x13;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_1005065b4;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "pingPostToAnalytics";
    local_a8 = 0x13;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x1e8) = bVar2;
  lVar4 = FUN_1000e86c0(plVar5,"sipPass");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506630:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipPass";
    local_a8 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506630;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipPass";
    local_a8 = 7;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x1f0),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"sipUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_1005066a8:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipUrl";
    local_a8 = 6;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_1005066a8;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipUrl";
    local_a8 = 6;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x208),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"sipRealm");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506720:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipRealm";
    local_a8 = 8;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506720;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipRealm";
    local_a8 = 8;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x220),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"sipPort");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506798:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipPort";
    local_a8 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506798;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipPort";
    local_a8 = 7;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  iVar3 = _atoi(pcVar8);
  *(int *)(param_2 + 0x238) = iVar3;
  lVar4 = FUN_1000e86c0(plVar5,"sipTransport");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_1005067f4:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipTransport";
    local_a8 = 0xc;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_1005067f4;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "sipTransport";
    local_a8 = 0xc;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x240),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"turnPass");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050686c:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnPass";
    local_a8 = 8;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050686c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnPass";
    local_a8 = 8;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 600),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"turnUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_1005068e4:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnUrl";
    local_a8 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_1005068e4;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnUrl";
    local_a8 = 7;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x270),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"turnRealm");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050695c:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnRealm";
    local_a8 = 9;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050695c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnRealm";
    local_a8 = 9;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x288),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"turnPort");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_1005069d4:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnPort";
    local_a8 = 8;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_1005069d4;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnPort";
    local_a8 = 8;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  iVar3 = _atoi(pcVar8);
  *(int *)(param_2 + 0x2a0) = iVar3;
  lVar4 = FUN_1000e86c0(plVar5,"turnTransport");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506a30:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnTransport";
    local_a8 = 0xd;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506a30;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "turnTransport";
    local_a8 = 0xd;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x2a8),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"stunUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506aa8:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "stunUrl";
    local_a8 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506aa8;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "stunUrl";
    local_a8 = 7;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x2c0),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"stunPort");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506b20:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "stunPort";
    local_a8 = 8;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506b20;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "stunPort";
    local_a8 = 8;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  iVar3 = _atoi(pcVar8);
  *(int *)(param_2 + 0x2d8) = iVar3;
  lVar4 = FUN_1000e86c0(plVar5,"stunTransport");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506b7c:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "stunTransport";
    local_a8 = 0xd;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506b7c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "stunTransport";
    local_a8 = 0xd;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x2e0),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"unityAdsGameId");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506bf4:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "unityAdsGameId";
    local_a8 = 0xe;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100506bf4;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "unityAdsGameId";
    local_a8 = 0xe;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x2f8),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"ironsourceAppId");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "ironsourceAppId";
    local_a8 = 0xf;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "ironsourceAppId";
      local_a8 = 0xf;
      pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
        pcVar8 = *(char **)pcVar8;
      }
      goto LAB_100506c74;
    }
  }
  pcVar8 = "";
LAB_100506c74:
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x310),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  *(undefined1 *)(param_2 + 0x328) = param_3;
  return;
}




void FUN_100506f44(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48._0_4_ = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  piVar2 = (int *)FUN_1000e87dc(param_2,&local_58);
  if (*piVar2 != 0) {
    DAT_1018675c8 = *piVar2;
    return;
  }
  lVar3 = FUN_1000e86c0(param_2,"returnValue");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    return;
  }
  local_48._0_4_ = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar3 = FUN_1000e87dc(param_2,&local_58);
  if (*(int *)(lVar3 + 0x10) != 3) {
    return;
  }
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_2,&local_58);
  lVar3 = FUN_1000e86c0(plVar4,"notifyUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) goto LAB_100507290;
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "notifyUrl";
  uStack_50 = 9;
  lVar3 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_100507290;
  *(undefined1 *)(param_1 + 0x2a63) = 0;
  lVar3 = FUN_1000e86c0(plVar4,"notifyFallbackUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "notifyFallbackUrl";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2a63) = 1;
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "notifyFallbackUrl";
      uStack_50 = 0x11;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x98),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"bucketIncrementer");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_100507160:
    uVar7 = 3000;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "bucketIncrementer";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_100507160;
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "bucketIncrementer";
    uStack_50 = 0x11;
    puVar6 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
    uVar7 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0x2a58) = uVar7;
  lVar3 = FUN_1000e86c0(plVar4,"failoverThreshold");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_1005071d4:
    uVar7 = 4000;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "failoverThreshold";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1005071d4;
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "failoverThreshold";
    uStack_50 = 0x11;
    puVar6 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
    uVar7 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0x2a5c) = uVar7;
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "notifyUrl";
  uStack_50 = 9;
  plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
  plVar1 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar1 = plVar5;
  }
  FUN_1000ee4ec(&local_58,plVar1);
  std::string::operator=((string *)(param_1 + 0x80),(string *)&local_58);
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  *(undefined1 *)(param_1 + 0x2a62) = 0;
  *(undefined4 *)(param_1 + 0x2a54) = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  lVar3 = FUN_1004f2c38((string *)(param_1 + 0x80),1,&local_58);
  *(long *)(param_1 + 0x2a48) = lVar3;
  if (local_48 < 0) {
    operator_delete(local_58);
    lVar3 = *(long *)(param_1 + 0x2a48);
  }
  if (lVar3 != 0) {
    *(undefined1 *)(param_1 + 0x2a61) = 1;
  }
LAB_100507290:
  lVar3 = FUN_1000e86c0(plVar4,"platformUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "platformUrl";
    uStack_50 = 0xb;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "platformUrl";
      uStack_50 = 0xb;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x68),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"state");
  if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) ||
     (lVar3 = FUN_1000e86c0(plVar4,"playerInfo"),
     *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3)) {
    FUN_10051abec(param_1 + 0x2a68,plVar4);
  }
  lVar3 = FUN_1000e86c0(plVar4,"playerUUID");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "playerUUID";
    uStack_50 = 10;
    plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
    plVar1 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar1 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar1);
    std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&local_58);
    if (local_48 < 0) {
      operator_delete(local_58);
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"sessionToken");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "sessionToken";
    uStack_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
    plVar1 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar1 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar1);
    std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&local_58);
    if (local_48 < 0) {
      operator_delete(local_58);
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"startSessionUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "startSessionUrl";
    uStack_50 = 0xf;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "startSessionUrl";
      uStack_50 = 0xf;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x50),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"linked");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48._0_4_ = 0x100005;
    local_58 = "linked";
    uStack_50 = 6;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "linked";
      uStack_50 = 6;
      lVar3 = FUN_1000e87dc(plVar4,&local_58);
      *(bool *)(param_1 + 0x2a64) = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  return;
}




void FUN_100507590(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_a8 [2];
  char local_91;
  undefined8 *local_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  void *pvStack_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pvStack_48 = (void *)0x0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = (void *)0x0;
  local_30 = 0;
  uStack_28 = 0x100;
  local_90 = &local_50;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0x200;
  local_58 = 0;
  FUN_100110914(param_1,&local_90);
  uVar1 = FUN_100110e38(&local_50);
  FUN_1000ee4ec(local_a8,uVar1);
  std::string::operator=((string *)(param_2 + 0x28),(string *)local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  _free(local_78);
  if (pvStack_80 != (void *)0x0) {
    operator_delete(pvStack_80);
  }
  _free(local_40);
  if (pvStack_48 != (void *)0x0) {
    operator_delete(pvStack_48);
  }
  return;
}




void FUN_10050b408(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  local_48 = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
  *(undefined4 *)(param_2 + 0x28) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_48 = 0x100005;
    local_58 = "returnValue";
    uStack_50 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_58);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_48 = 0x100005;
      local_58 = "returnValue";
      uStack_50 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
      local_48 = 0x100005;
      local_58 = "success";
      uStack_50 = 7;
      lVar3 = FUN_1000e87dc(plVar4,&local_58);
      *(bool *)(param_2 + 0x494) = *(int *)(lVar3 + 0x10) == 0x102;
      if (*(char *)(param_2 + 0x477) < '\0') {
        **(undefined1 **)(param_2 + 0x460) = 0;
        *(undefined8 *)(param_2 + 0x468) = 0;
      }
      else {
        *(string *)(param_2 + 0x460) = (string)0x0;
        *(undefined1 *)(param_2 + 0x477) = 0;
      }
      if (*(char *)(param_2 + 0x48f) < '\0') {
        **(undefined1 **)(param_2 + 0x478) = 0;
        *(undefined8 *)(param_2 + 0x480) = 0;
      }
      else {
        *(string *)(param_2 + 0x478) = (string)0x0;
        *(undefined1 *)(param_2 + 0x48f) = 0;
      }
      *(undefined4 *)(param_2 + 0x490) = 0;
      if (*(char *)(param_2 + 0x494) != '\0') {
        return;
      }
      lVar3 = FUN_1000e86c0(plVar4,"reason");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_48 = 0x100005;
        local_58 = "reason";
        uStack_50 = 6;
        plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
        plVar1 = (long *)*plVar5;
        if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
          plVar1 = plVar5;
        }
        FUN_1000ee4ec(&local_58,plVar1);
        std::string::operator=((string *)(param_2 + 0x460),(string *)&local_58);
        if (local_41 < '\0') {
          operator_delete(local_58);
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"banReason");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_48 = 0x100005;
        local_58 = "banReason";
        uStack_50 = 9;
        plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
        plVar1 = (long *)*plVar5;
        if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
          plVar1 = plVar5;
        }
        FUN_1000ee4ec(&local_58,plVar1);
        std::string::operator=((string *)(param_2 + 0x478),(string *)&local_58);
        if (local_41 < '\0') {
          operator_delete(local_58);
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"banRemainingSeconds");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        return;
      }
      local_48 = 0x100005;
      local_58 = "banRemainingSeconds";
      uStack_50 = 0x13;
      puVar2 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
      *(undefined4 *)(param_2 + 0x490) = *puVar2;
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_10050bc4c(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  char *local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long lStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68;
  char local_61;
  
  local_c0._0_4_ = 0x100005;
  local_d0 = "code";
  local_c8 = (void *)0x4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_d0);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_c0 = (void *)CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = "returnValue";
    local_c8 = (void *)0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_d0);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_1004e313c(&local_d0);
      local_80 = 0;
      local_78 = "returnValue";
      lStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = (void *)0x0;
      uStack_b8 = 0;
      local_c0 = (void *)0x0;
      local_a8 = (void *)0x0;
      lStack_b0 = 0;
      local_68 = 0x100005;
      local_70 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_78);
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        FUN_100169150(param_2 + 0x28,0);
        local_68 = 0x100005;
        local_78 = "pending";
        local_70 = 7;
        plVar4 = (long *)FUN_1000e87dc(plVar4,&local_78);
        if ((int)plVar4[1] != 0) {
          lVar3 = 0;
          uVar8 = 0;
          do {
            plVar1 = (long *)(*plVar4 + lVar3);
            lVar5 = FUN_1000e86c0(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar5) {
              local_68 = 0x100005;
              local_78 = "handle";
              local_70 = 6;
              lVar5 = FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = "handle";
                local_70 = 6;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1004e3148(&local_d0,plVar7);
                local_68 = 0x100005;
                local_78 = "uuid";
                local_70 = 4;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_c0,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "partyUuid";
                local_70 = 9;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_a8,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "gameMode";
                local_70 = 8;
                plVar7 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar1 = (long *)*plVar7;
                if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
                  plVar1 = plVar7;
                }
                FUN_1000ee4ec(&local_78,plVar1);
                std::string::operator=((string *)&local_90,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                FUN_10051c880(param_2 + 0x28,&local_d0);
              }
            }
            uVar8 = uVar8 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar8 < *(uint *)(plVar4 + 1));
        }
      }
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      if (lStack_98 < 0) {
        operator_delete(local_a8);
      }
      if (lStack_b0 < 0) {
        operator_delete(local_c0);
      }
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
    }
  }
  return;
}




void FUN_10050bfac(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10050c01c:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10050c01c;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x25) = 0;
  std::string::operator=((string *)(param_2 + 0x30),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050c12c:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10050c12c;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050c1a8:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10050c1a8;
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x30),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"guildId");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "guildId";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "guildId";
      uStack_50 = 7;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_10050c228;
    }
  }
  pcVar5 = "";
LAB_10050c228:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_10050e4fc(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10050e56c:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10050e56c;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x25) = 0;
  std::string::operator=((string *)(param_2 + 0x30),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050e67c:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10050e67c;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050e6f8:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10050e6f8;
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x30),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"teamId");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "teamId";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "teamId";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_10050e778;
    }
  }
  pcVar5 = "";
LAB_10050e778:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}

