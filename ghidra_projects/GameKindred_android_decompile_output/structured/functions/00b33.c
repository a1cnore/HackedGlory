// functions/00b33 — 8 functions
#include "libGameKindred.h"




void FUN_00b33138(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0x1b84) = *(uint *)(param_1 + 0x1b84) & 0xfffffffb;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_HEADER",0);
  FUN_00f0d75c(param_1 + 0x19d0,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  FUN_00e705c8(&local_68,"[PREVIOUS_NAME]");
  lVar3 = FUN_009580b8();
  FUN_00e70570(&local_78,lVar3 + 0x5308);
  FUN_00e71248(&local_58,0,&local_68,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x2180,&local_58);
  *(uint *)(param_1 + 0x2204) = *(uint *)(param_1 + 0x2204) | 4;
  lVar3 = FUN_009580b8();
  FUN_00e70570(&local_68,lVar3 + 0x5308);
  FUN_00910394(param_1 + 0x7c28,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_DESC",0);
  FUN_00f0d75c(param_1 + 0x22b0,uVar2);
  lVar3 = param_1 + 0x23e0;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_CAPTION",0);
  FUN_00ce1e34(lVar3,uVar2,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar3,1);
  FUN_00abced0(lVar3,1,3);
  FUN_00abcee4(lVar3,1,0x10);
  FUN_00abcf28(lVar3,0);
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) | 4;
  lVar3 = param_1 + 0x40d8;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_CONFIRM_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_CAPTION",0);
  FUN_00ce1e34(lVar3,uVar2,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar3,1);
  FUN_00abced0(lVar3,1,3);
  FUN_00abcee4(lVar3,1,0x10);
  FUN_00abcf28(lVar3,0);
  *(uint *)(param_1 + 0x415c) = *(uint *)(param_1 + 0x415c) | 4;
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_00ab7498(param_1 + 0x5dd0,uVar2);
  *(uint *)(param_1 + 0x76ec) = *(uint *)(param_1 + 0x76ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x79c4) = *(uint *)(param_1 + 0x79c4) & 0xfffffffb;
  FUN_00b315d0(param_1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b33464(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0x1b84) = *(uint *)(param_1 + 0x1b84) & 0xfffffffb;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_HEADER",0);
  FUN_00f0d75c(param_1 + 0x19d0,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_EDIT_PREVIOUS_TAG",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  FUN_00e705c8(&local_68,"[PREVIOUS_TAG]");
  lVar3 = FUN_009580b8();
  FUN_00e70570(&local_78,lVar3 + 0x5320);
  FUN_00e71248(&local_58,0,&local_68,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x2180,&local_58);
  *(uint *)(param_1 + 0x2204) = *(uint *)(param_1 + 0x2204) | 4;
  lVar3 = FUN_009580b8();
  FUN_00e70570(&local_68,lVar3 + 0x5320);
  FUN_00910394(param_1 + 0x7c28,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_DESC",0);
  FUN_00f0d75c(param_1 + 0x22b0,uVar2);
  lVar3 = param_1 + 0x23e0;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_CAPTION",0);
  FUN_00ce1e34(lVar3,uVar2,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar3,1);
  FUN_00abced0(lVar3,1,2);
  FUN_00abcee4(lVar3,1,4);
  FUN_00abcf28(lVar3,0);
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) | 4;
  lVar3 = param_1 + 0x40d8;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_CONFIRM_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_CAPTION",0);
  FUN_00ce1e34(lVar3,uVar2,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar3,1);
  FUN_00abced0(lVar3,1,2);
  FUN_00abcee4(lVar3,1,4);
  FUN_00abcf28(lVar3,0);
  *(uint *)(param_1 + 0x415c) = *(uint *)(param_1 + 0x415c) | 4;
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_00ab7498(param_1 + 0x5dd0,uVar2);
  *(uint *)(param_1 + 0x76ec) = *(uint *)(param_1 + 0x76ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x79c4) = *(uint *)(param_1 + 0x79c4) & 0xfffffffb;
  FUN_00b315d0(param_1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b33790(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00abce6c(param_1 + 0x23e0);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00abce6c(param_1 + 0x40d8);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00ce1f88(param_1 + 0x23e0);
      uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
      if ((uVar1 & 1) != 0) {
        if ((*(byte *)(param_1 + 0x415c) >> 2 & 1) != 0) {
          uVar2 = FUN_00ce1f88(param_1 + 0x40d8);
          uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
          if ((uVar1 & 1) == 0) goto LAB_00b33818;
        }
        uVar2 = 1;
        goto LAB_00b33824;
      }
    }
  }
LAB_00b33818:
  uVar2 = 0;
LAB_00b33824:
  FUN_00b09454(param_1 + 0x5dd0,uVar2);
  return;
}




void FUN_00b33834(long param_1)

{
  char *pcVar1;
  int in_w4;
  
  pcVar1 = "checkbox_filled";
  if (in_w4 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x7720,pcVar1);
  pcVar1 = "checkbox_filled";
  if (in_w4 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x79f8,pcVar1);
  *(int *)(param_1 + 0x7c50) = in_w4;
  return;
}




void FUN_00b3389c(long param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "checkbox_filled";
  if (param_2 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x7720,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_2 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x79f8,pcVar1);
  *(int *)(param_1 + 0x7c50) = param_2;
  return;
}




void FUN_00b33904(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x7c54);
    lVar7 = FUN_009580b8();
    if (*(uint *)(lVar7 + 0x5450) < uVar1) {
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
      uVar5 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar8 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
      FUN_00a9b94c(uVar4,uVar5,uVar6,uVar8,param_1,0,thunk_FUN_00a9bda0);
      goto LAB_00b33bd4;
    }
    FUN_00e70510(&local_58);
    FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x7c54));
    uVar4 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_ICE_DIALOG_TEXT",0);
    thunk_FUN_00e7051c(&local_68,uVar4);
    FUN_00e705c8(&local_78,"[PLAYER_HANDLE]");
    uVar4 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
    FUN_00e71248(&local_68,0,&local_78,uVar4);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00e705c8(&local_78,"[COST]");
    FUN_00e71248(&local_68,0,&local_78,&local_58);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    uVar4 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_TITLE",0);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    FUN_00a9b94c(uVar4,&local_68,uVar5,uVar6,param_1,thunk_FUN_00b34cb0,0);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  else {
    uVar4 = FUN_00e6ce7c("MAIN_PROFILE_CONFIRM_NICKNAME_DESCRIPTION",0);
    thunk_FUN_00e7051c(&local_58,uVar4);
    FUN_00e705c8(&local_68,"[PLAYER_NAME]");
    uVar4 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
    FUN_00e71248(&local_58,0,&local_68,uVar4);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    uVar4 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_TITLE",0);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    FUN_00a9b94c(uVar4,&local_58,uVar5,uVar6,param_1,thunk_FUN_00b34cb0,0);
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
LAB_00b33bd4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b33c08(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x7c54);
    lVar4 = FUN_009580b8();
    if (*(uint *)(lVar4 + 0x5450) < uVar1) {
      uVar5 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
      uVar6 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar8 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
      FUN_00a9b94c(uVar5,uVar6,uVar7,uVar8,param_1,0,thunk_FUN_00a9bda0);
    }
    else {
      FUN_00e70510(&local_58);
      FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x7c54));
      uVar5 = FUN_00e6ce7c("MENU_EDIT_GUILD_NAME_SUBMIT_ICE_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_68,uVar5);
      FUN_00e705c8(&local_78,"[GUILD_NAME]");
      uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
      FUN_00e71248(&local_68,0,&local_78,uVar5);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      FUN_00e705c8(&local_78,"[COST]");
      FUN_00e71248(&local_68,0,&local_78,&local_58);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      uVar5 = FUN_00e6ce7c("MENU_EDIT_GUILD_NAME_SUBMIT_TITLE",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      FUN_00a9b94c(uVar5,&local_68,uVar6,uVar7,param_1,thunk_FUN_00b34ddc,0);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b33e38(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x7c54);
    lVar4 = FUN_009580b8();
    if (*(uint *)(lVar4 + 0x5450) < uVar1) {
      uVar5 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
      uVar6 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar8 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
      FUN_00a9b94c(uVar5,uVar6,uVar7,uVar8,param_1,0,thunk_FUN_00a9bda0);
    }
    else {
      FUN_00e70510(&local_58);
      FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x7c54));
      uVar5 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_SUBMIT_ICE_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_68,uVar5);
      FUN_00e705c8(&local_78,"[GUILD_TAG]");
      uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
      FUN_00e71248(&local_68,0,&local_78,uVar5);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      FUN_00e705c8(&local_78,"[COST]");
      FUN_00e71248(&local_68,0,&local_78,&local_58);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      uVar5 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_SUBMIT_TITLE",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      FUN_00a9b94c(uVar5,&local_68,uVar6,uVar7,param_1,thunk_FUN_00b34f04,0);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

