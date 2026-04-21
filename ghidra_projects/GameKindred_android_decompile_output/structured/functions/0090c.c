// functions/0090c — 13 functions
#include "libGameKindred.h"




void FUN_0090c0a4(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  local_78 = "type1";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,"Progression_Guild_Chest_Reward_Redeemed");
  local_78 = "type2_guildLevel";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  FUN_0090265c(param_2,&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090c198(undefined8 param_1)

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
  local_58 = "type1";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,"Hero_Chest");
  FUN_0090265c(param_1,&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090c240(undefined4 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
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
  local_78 = "lpq_level";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  local_78 = "isMe";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_2 & 1);
  FUN_00ec506c("Progression_LPQ_Screen_Seen",&puStack_70);
  FUN_00ec5024("Progression_LPQ_Screen_Seen",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090c348(undefined4 param_1)

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
  local_58 = "lpq_level";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  FUN_00ec506c("Progression_LPQ_Screen_Cancelled",&puStack_50);
  FUN_00ec5024("Progression_LPQ_Screen_Cancelled",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090c400(undefined4 param_1)

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
  local_58 = "lpq_level";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  FUN_00ec506c("Progression_LPQ_Screen_Completed",&puStack_50);
  FUN_00ec5024("Progression_LPQ_Screen_Completed",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090c4b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
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
  local_78 = "received";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  local_78 = "sent";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_2);
  local_78 = "missed";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  FUN_00ec506c("StateUpdate_Message_Dropped",&puStack_70);
  FUN_00ec5024("StateUpdate_Message_Dropped",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090c5f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = FUN_00ceadc8();
  local_30 = &local_58;
  local_58 = "mode";
  lVar3 = FUN_0090d33c(&local_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar3 + 0x28,uVar2);
  FUN_00ec506c("Game_Replay",&local_50);
  FUN_00ec5024("Game_Replay",&local_50);
  FUN_0090d2e0(&local_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090c6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
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
  local_88 = "source";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,param_1);
  local_88 = "response";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,param_2);
  local_88 = "action";
  local_60 = &local_88;
  lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar3 + 0x28,param_3);
  if (param_4 != (undefined1 *)0x0) {
    uVar1 = *param_4;
    local_88 = "hardFought";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[1];
    local_88 = "1stWin";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[2];
    local_88 = "3rdWin";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[3];
    local_88 = "7thDayWin";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[4];
    local_88 = "tier1SkinUnlock";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[5];
    local_88 = "tier2SkinUnlock";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[6];
    local_88 = "tier3SkinUnlock";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[7];
    local_88 = "SESkinUnlock";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar1 = param_4[8];
    local_88 = "heroUnlock";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
  }
  FUN_00ec506c("Rate_App",&local_80);
  FUN_00ec5024("Rate_App",&local_80);
  FUN_0090d2e0(&local_80,local_78);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090ca04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  local_78 = "msg";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "key";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  FUN_00ec506c("Feed_Exception",&puStack_70);
  FUN_00ec5024("Feed_Exception",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090cb08(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  char *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_80 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = "scheme";
    local_60 = &local_88;
    lVar2 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar2 + 0x28,param_1);
    local_88 = "host";
    local_60 = &local_88;
    lVar2 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar2 + 0x28,param_2);
    local_88 = "port";
    local_60 = &local_88;
    lVar2 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar2 + 0x28,param_3);
    local_88 = "connectionTimeMS";
    local_60 = &local_88;
    lVar2 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar2 + 0x28,param_4);
    FUN_00ec506c("Chat_ConnectionTime",&puStack_80);
    FUN_00ec5024("Chat_ConnectionTime",&puStack_80);
    FUN_0090d2e0(&puStack_80,local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090cc90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
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
  local_78 = "scheme";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "host";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_78 = "port";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  FUN_00ec506c("Chat_ConnectionFailure",&puStack_70);
  FUN_00ec5024("Chat_ConnectionFailure",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0090cdcc(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *__s1;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x38);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x40);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x31);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 0x31);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) {
            return true;
          }
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (__n != 0) {
      iVar3 = memcmp(__s1,__s2,__n);
      return iVar3 != 0;
    }
    return false;
  }
  return true;
}




void FUN_0090ce84(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  uVar3 = FUN_00ceadc8();
  local_78 = "mode";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar4 + 0x28,uVar3);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,0);
  uVar1 = *puVar5;
  local_78 = "eloTier5v5";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,1);
  uVar1 = *puVar5;
  local_78 = "eloTier3v3";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  local_78 = "role";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar4 + 0x28,param_2);
  FUN_00ec506c("DraftLobby_Role_Bumped",&local_70);
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

