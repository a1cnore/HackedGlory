// functions/00900 — 26 functions
#include "libGameKindred.h"




void FUN_00900088(uint param_1)

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
  local_30 = &local_58;
  puStack_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = "allowed";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3ee0(lVar2 + 0x28,param_1 & 1);
  FUN_00ec506c("App_iOSPushNotificationPrompt_Response",&puStack_50);
  FUN_00ec5024("App_iOSPushNotificationPrompt_Response",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00900140(uint param_1)

{
  long lVar1;
  long lVar2;
  char *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 & 1;
  local_40 = &local_68;
  puStack_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = "played";
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  FUN_00ec506c("App_SizzleVideo_ABtest",&puStack_60);
  FUN_00ec5024("App_SizzleVideo_ABtest",&puStack_60);
  FUN_00ec50c0("App_SizzleVideo",&puStack_60);
  FUN_00ec5084("experiments_sizzlevideo",param_1);
  FUN_00ec503c("experiments_sizzlevideo",param_1);
  FUN_0090d2e0(&puStack_60,local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00900230(void)

{
  FUN_00ec5068("App_Offerwall_Show");
  FUN_00ec5020("App_Offerwall_Show");
  return;
}




void FUN_0090025c(void)

{
  FUN_00ec5068("App_Offerwall_Hide");
  FUN_00ec5020("App_Offerwall_Hide");
  return;
}




void FUN_00900288(ulong param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    puStack_60 = &local_58;
    local_58 = 0;
    uStack_50 = 0;
    pcVar2 = "playmode_5v5_ranked";
    if ((param_1 & 1) == 0) {
      pcVar2 = "playmode_5v5_casual";
    }
    local_68 = "mode";
    local_40 = &local_68;
    lVar3 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    FUN_00ec3e60(lVar3 + 0x28,pcVar2 + 0xd);
    local_68 = "partySize";
    local_40 = &local_68;
    lVar3 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    FUN_00ec3ee0(lVar3 + 0x28,1);
    FUN_00ec506c("Game_EnterPublicQueue",&puStack_60);
    FUN_00ec5024("Game_EnterPublicQueue",&puStack_60);
    FUN_0090d2e0(&puStack_60,local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009003a4(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Game_EnterPractice");
  FUN_00ec5020("Game_EnterPractice");
  return;
}




void FUN_009003e8(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Onboarding_EnterTutorial");
  FUN_00ec5020("Onboarding_EnterTutorial");
  return;
}




void FUN_0090042c(void)

{
  return;
}




void FUN_00900430(void)

{
  return;
}




void FUN_00900434(undefined8 param_1,byte *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = "timeInQueue";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ef0(param_1,lVar2 + 0x28);
    pbVar3 = *(byte **)(param_2 + 0x10);
    local_78 = "queueName";
    if ((*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
    }
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,pbVar3);
    local_78 = "userInitiated";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar2 + 0x28,param_3 & 1);
    FUN_00ec506c("Matchmaker_Queue_Cancel",&puStack_70);
    FUN_00ec5024("Matchmaker_Queue_Cancel",&puStack_70);
    FUN_0090d2e0(&puStack_70,local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00900598(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
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
  local_78 = "timeInQueue";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ef0(param_1,lVar2 + 0x28);
  pbVar3 = *(byte **)(param_2 + 0x10);
  local_78 = "queueName";
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,pbVar3);
  FUN_00ec506c("Matchmaker_Queue_SignPost",&puStack_70);
  FUN_00ec5024("Matchmaker_Queue_SignPost",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009006ac(int param_1)

{
  if (param_1 == 2) {
    FUN_00ec5068("App_Registration");
    FUN_00ec5020("App_Registration");
    FUN_00ec50ac("gfyw92");
    FUN_00ec50bc("App_Registration");
    return;
  }
  return;
}




void FUN_009006f8(int param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  if (param_1 == 0) {
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "try";
  }
  else if (param_1 == 1) {
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "fail";
  }
  else {
    if (param_1 != 2) goto LAB_00900810;
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "succeed";
  }
  FUN_00ec3e60(lVar2,pcVar3);
LAB_00900810:
  FUN_00ec506c("App_SetHandle",&local_60);
  FUN_00ec5024("App_SetHandle",&local_60);
  FUN_0090d2e0(&local_60,local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00900864(int param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  if (param_1 == 0) {
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "try";
  }
  else if (param_1 == 1) {
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "fail";
  }
  else {
    if (param_1 != 2) goto LAB_0090097c;
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "succeed";
  }
  FUN_00ec3e60(lVar2,pcVar3);
LAB_0090097c:
  FUN_00ec506c("App_Guild_SetName",&local_60);
  FUN_00ec5024("App_Guild_SetName",&local_60);
  FUN_0090d2e0(&local_60,local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009009d0(int param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  if (param_1 == 0) {
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "try";
  }
  else if (param_1 == 1) {
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "fail";
  }
  else {
    if (param_1 != 2) goto LAB_00900ae8;
    local_40 = &local_68;
    local_68 = "success";
    lVar2 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    lVar2 = lVar2 + 0x28;
    pcVar3 = "succeed";
  }
  FUN_00ec3e60(lVar2,pcVar3);
LAB_00900ae8:
  FUN_00ec506c("App_Guild_SetTag",&local_60);
  FUN_00ec5024("App_Guild_SetTag",&local_60);
  FUN_0090d2e0(&local_60,local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00900b3c(void)

{
  FUN_00ec5068("App_Login_UserInitiated");
  FUN_00ec5020("App_Login_UserInitiated");
  return;
}




void FUN_00900b68(void)

{
  return;
}




void FUN_00900b6c(int param_1)

{
  if (param_1 == 2) {
    FUN_00ec5068("App_Logout");
    FUN_00ec5020("App_Logout");
    return;
  }
  return;
}




void FUN_00900ba4(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char *local_78 [2];
  void *local_68;
  char **local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_00e81254();
  local_60 = local_78;
  local_78[0] = "anonymous";
  lVar3 = FUN_0090d33c(&local_48,local_78,&DAT_01b9349b,&local_60,auStack_30);
  FUN_00ec3ee0(lVar3 + 0x28,uVar2 & 1);
  FUN_00ec506c("App_Login_PostPlayerInfo",&local_48);
  FUN_00ec5024("App_Login_PostPlayerInfo",&local_48);
  uVar4 = thunk_FUN_00ec9510();
  if ((uVar4 & 1) != 0) {
    local_60 = (char **)0x0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    FUN_00e81200(&local_60);
    FUN_008fa54c(local_78,"1");
    FUN_00ec6468(local_78,&local_60);
    if (((ulong)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (((ulong)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  FUN_0090d2e0(&local_48,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00900cb8(void)

{
  FUN_00ec5068("App_RecordVideo_OpenControl");
  FUN_00ec5020("App_RecordVideo_OpenControl");
  return;
}




void FUN_00900ce4(void)

{
  FUN_00ec5068("App_OpenNewsPanel");
  FUN_00ec5020("App_OpenNewsPanel");
  return;
}




void FUN_00900d10(long param_1)

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
  if (param_1 != 0) {
    local_30 = &local_58;
    puStack_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = "url";
    lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
    FUN_00ec3e60(lVar2 + 0x28,param_1);
    FUN_00ec506c("App_OpenNewsUrl",&puStack_50);
    FUN_00ec5024("App_OpenNewsUrl",&puStack_50);
    FUN_0090d2e0(&puStack_50,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00900dcc(ulong param_1,undefined4 param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar2 = "playmode_5v5_ranked";
  if ((param_1 & 1) == 0) {
    pcVar2 = "playmode_5v5_casual";
  }
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "mode";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,pcVar2 + 0xd);
  local_78 = "partySize";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,param_2);
  FUN_00ec506c("Game_EnterPublicQueue",&puStack_70);
  FUN_00ec5024("Game_EnterPublicQueue",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00900ee4(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  char *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [4];
  undefined4 local_64;
  ulong local_60 [2];
  void *local_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  FUN_009481e8(local_60,&local_64,local_68);
  puStack_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "host";
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  local_40 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar3 + 0x28,pvVar1);
  local_88 = "port";
  local_40 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3ee0(lVar3 + 0x28,local_64);
  local_88 = "isProxy";
  local_40 = &local_88;
  lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3ee0(lVar3 + 0x28,local_68[0]);
  FUN_00ec506c("GameServer_ConnectionAttempt",&puStack_80);
  FUN_00ec5024("GameServer_ConnectionAttempt",&puStack_80);
  FUN_0090d2e0(&puStack_80,local_78);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_0090025c(void)

{
  FUN_00ec5068("App_Offerwall_Hide");
  FUN_00ec5020("App_Offerwall_Hide");
  return;
}




void thunk_FUN_0090025c(void)

{
  FUN_00ec5068("App_Offerwall_Hide");
  FUN_00ec5020("App_Offerwall_Hide");
  return;
}

