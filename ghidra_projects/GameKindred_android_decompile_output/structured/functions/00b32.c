// functions/00b32 — 8 functions
#include "libGameKindred.h"




void FUN_00b32020(long param_1)

{
  FUN_00910394(param_1 + 0x7c18,&DAT_03210450);
  FUN_00abc5bc(param_1 + 0x23e0);
  FUN_00abc5bc(param_1 + 0x40d8);
  FUN_00b09454(param_1 + 0x5dd0,0);
  return;
}




void FUN_00b32074(long param_1,undefined4 param_2)

{
  FUN_00b32020();
  *(undefined4 *)(param_1 + 0x7c58) = param_2;
  switch(param_2) {
  case 1:
    FUN_00b32140(param_1);
    return;
  case 2:
    FUN_00b32448(param_1);
    return;
  case 3:
    FUN_00b32774(param_1);
    return;
  case 4:
    FUN_00b32aa0(param_1);
    return;
  case 5:
    FUN_00b32c6c(param_1);
    return;
  case 6:
    FUN_00b32e38(param_1);
    return;
  case 7:
    FUN_00b33138(param_1);
    return;
  case 8:
    FUN_00b33464(param_1);
    return;
  default:
    return;
  }
}




void FUN_00b32140(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(uint *)(param_1 + 0x1b84) = *(uint *)(param_1 + 0x1b84) | 4;
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_HEADER",0);
  FUN_00f0d75c(param_1 + 0x19d0,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_00e7051c(&local_58,uVar3);
  FUN_009580b8();
  uVar3 = FUN_0095fdf0();
  thunk_FUN_00e7051c(&local_68,uVar3);
  FUN_00e705c8(&local_78,"[PREVIOUS_NAME]");
  FUN_00e71248(&local_58,0,&local_78,&local_68);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x2180,&local_58);
  *(uint *)(param_1 + 0x2204) = *(uint *)(param_1 + 0x2204) | 4;
  FUN_00910394(param_1 + 0x7c28,&local_68);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_DESC",0);
  FUN_00f0d75c(param_1 + 0x22b0,uVar3);
  lVar1 = param_1 + 0x23e0;
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_FIELD",0);
  FUN_00abc73c(lVar1,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_CAPTION",0);
  FUN_00ce1e34(lVar1,uVar3,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar1,1);
  FUN_00abced0(lVar1,1,3);
  FUN_00abcee4(lVar1,1,0x10);
  FUN_00abcf28(lVar1,0);
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) | 4;
  lVar1 = param_1 + 0x40d8;
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
  FUN_00abc73c(lVar1,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_CAPTION",0);
  FUN_00ce1e34(lVar1,uVar3,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar1,1);
  FUN_00abced0(lVar1,1,3);
  FUN_00abcee4(lVar1,1,0x10);
  FUN_00abcf28(lVar1,0);
  *(uint *)(param_1 + 0x415c) = *(uint *)(param_1 + 0x415c) | 4;
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_00ab7498(param_1 + 0x5dd0,uVar3);
  *(uint *)(param_1 + 0x76ec) = *(uint *)(param_1 + 0x76ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x79c4) = *(uint *)(param_1 + 0x79c4) & 0xfffffffb;
  FUN_00b315d0(param_1);
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
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b32448(long param_1)

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
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_HEADER",0);
  FUN_00f0d75c(param_1 + 0x19d0,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  FUN_00e705c8(&local_68,"[PREVIOUS_NAME]");
  lVar3 = FUN_009580b8();
  FUN_00e70570(&local_78,lVar3 + 0x50c8);
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
  FUN_00e70570(&local_68,lVar3 + 0x50c8);
  FUN_00910394(param_1 + 0x7c28,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_DESC",0);
  FUN_00f0d75c(param_1 + 0x22b0,uVar2);
  lVar3 = param_1 + 0x23e0;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_CAPTION",0);
  FUN_00ce1e34(lVar3,uVar2,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar3,1);
  FUN_00abced0(lVar3,1,3);
  FUN_00abcee4(lVar3,1,0x10);
  FUN_00abcf28(lVar3,0);
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) | 4;
  lVar3 = param_1 + 0x40d8;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_CONFIRM_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDNAME_CAPTION",0);
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




void FUN_00b32774(long param_1)

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
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_HEADER",0);
  FUN_00f0d75c(param_1 + 0x19d0,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_EDIT_PREVIOUS_TAG",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  FUN_00e705c8(&local_68,"[PREVIOUS_TAG]");
  lVar3 = FUN_009580b8();
  FUN_00e70570(&local_78,lVar3 + 0x50e0);
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
  FUN_00e70570(&local_68,lVar3 + 0x50e0);
  FUN_00910394(param_1 + 0x7c28,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_DESC",0);
  FUN_00f0d75c(param_1 + 0x22b0,uVar2);
  lVar3 = param_1 + 0x23e0;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_CAPTION",0);
  FUN_00ce1e34(lVar3,uVar2,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcec0(lVar3,1);
  FUN_00abced0(lVar3,1,2);
  FUN_00abcee4(lVar3,1,4);
  FUN_00abcf28(lVar3,0);
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) | 4;
  lVar3 = param_1 + 0x40d8;
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_CONFIRM_FIELD",0);
  FUN_00abc73c(lVar3,uVar2);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDTAG_CAPTION",0);
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




void FUN_00b32aa0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(uint *)(param_1 + 0x1b84) = *(uint *)(param_1 + 0x1b84) & 0xfffffffb;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILDMOTTO_HEADER",0);
  FUN_00f0d75c(param_1 + 0x19d0,uVar3);
  *(uint *)(param_1 + 0x2204) = *(uint *)(param_1 + 0x2204) & 0xfffffffb;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILDMOTTO_DESC",0);
  FUN_00f0d75c(param_1 + 0x22b0,uVar3);
  lVar1 = param_1 + 0x23e0;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILDMOTTO_FIELD",0);
  FUN_00abc73c(lVar1,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILDMOTTO_CAPTION",0);
  FUN_00ce1e34(lVar1,uVar3,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcf28(lVar1,0);
  FUN_00b037f8(lVar1,0);
  FUN_00abcee4(lVar1,1,0x8c);
  FUN_00abcec0(lVar1,0);
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) | 4;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_SUBMIT_BUTTON",0);
  FUN_00ab7498(param_1 + 0x5dd0,uVar3);
  *(uint *)(param_1 + 0x415c) = *(uint *)(param_1 + 0x415c) & 0xfffffffb;
  *(uint *)(param_1 + 0x76ec) = *(uint *)(param_1 + 0x76ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x79c4) = *(uint *)(param_1 + 0x79c4) & 0xfffffffb;
  local_3c = 0;
  FUN_00b31dec(param_1,&DAT_0320ffa8,&local_3c);
  FUN_00b315d0(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b32c6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(uint *)(param_1 + 0x1b84) = *(uint *)(param_1 + 0x1b84) & 0xfffffffb;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_MESSAGE_HEADER",0);
  FUN_00f0d75c(param_1 + 0x19d0,uVar3);
  *(uint *)(param_1 + 0x2204) = *(uint *)(param_1 + 0x2204) & 0xfffffffb;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_MESSAGE_DESC",0);
  FUN_00f0d75c(param_1 + 0x22b0,uVar3);
  lVar1 = param_1 + 0x23e0;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_MESSAGE_FIELD",0);
  FUN_00abc73c(lVar1,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_MESSAGE_CAPTION",0);
  FUN_00ce1e34(lVar1,uVar3,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
  FUN_00abcf28(lVar1,0);
  FUN_00b037f8(lVar1,0);
  FUN_00abcee4(lVar1,1,2000);
  FUN_00abcec0(lVar1,0);
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) | 4;
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_SUBMIT_BUTTON",0);
  FUN_00ab7498(param_1 + 0x5dd0,uVar3);
  *(uint *)(param_1 + 0x415c) = *(uint *)(param_1 + 0x415c) & 0xfffffffb;
  *(uint *)(param_1 + 0x76ec) = *(uint *)(param_1 + 0x76ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x79c4) = *(uint *)(param_1 + 0x79c4) & 0xfffffffb;
  local_3c = 0;
  FUN_00b31dec(param_1,&DAT_0320ffa8,&local_3c);
  FUN_00b315d0(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b32e38(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(uint *)(param_3 + 0x1b84) = *(uint *)(param_3 + 0x1b84) & 0xfffffffb;
  uVar6 = FUN_00e6ce7c("MENU_EDIT_GUILDTYPE_HEADER",0);
  FUN_00f0d75c(param_3 + 0x19d0,uVar6);
  *(uint *)(param_3 + 0x2204) = *(uint *)(param_3 + 0x2204) & 0xfffffffb;
  uVar6 = FUN_00e6ce7c("MENU_EDIT_GUILDTYPE_DESC",0);
  FUN_00f0d75c(param_3 + 0x22b0,uVar6);
  uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_00f0d75c(param_3 + 0x7810,uVar6);
  uVar8 = FUN_00f01c54(param_3 + 0x7668,0,0,1,1);
  local_88 = (code *)CONCAT44(param_2,uVar8);
  FUN_00f13f18(param_3 + 0x7668,&local_88);
  uVar8 = DAT_03210f58;
  *(uint *)(param_3 + 0x76ec) = *(uint *)(param_3 + 0x76ec) | 0x10;
  local_88 = FUN_00b33834;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  lStack_80 = param_3;
  local_60 = uVar8;
  FUN_009693a0(param_3 + 0x7670,&local_88);
  local_88 = FUN_00b33834;
  uVar2 = DAT_03210f84;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  lStack_80 = param_3;
  local_60 = uVar2;
  FUN_009693a0(param_3 + 0x7670,&local_88);
  *(uint *)(param_3 + 0x76ec) = *(uint *)(param_3 + 0x76ec) | 4;
  uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_00f0d75c(param_3 + 0x7ae8,uVar6);
  uVar9 = FUN_00f01c54(param_3 + 0x7940,0,0,1,1);
  local_88 = (code *)CONCAT44(param_2,uVar9);
  FUN_00f13f18(param_3 + 0x7940,&local_88);
  *(uint *)(param_3 + 0x79c4) = *(uint *)(param_3 + 0x79c4) | 0x10;
  local_88 = FUN_00b33834;
  local_78 = 0;
  local_70 = 0;
  local_68 = 1;
  lStack_80 = param_3;
  local_60 = uVar8;
  FUN_009693a0(param_3 + 0x7948,&local_88);
  local_88 = FUN_00b33834;
  local_78 = 0;
  local_70 = 0;
  local_68 = 1;
  lStack_80 = param_3;
  local_60 = uVar2;
  FUN_009693a0(param_3 + 0x7948,&local_88);
  *(uint *)(param_3 + 0x79c4) = *(uint *)(param_3 + 0x79c4) | 4;
  uVar6 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_00ab7498(param_3 + 0x5dd0,uVar6);
  *(uint *)(param_3 + 0x2464) = *(uint *)(param_3 + 0x2464) & 0xfffffffb;
  *(uint *)(param_3 + 0x415c) = *(uint *)(param_3 + 0x415c) & 0xfffffffb;
  local_88 = (code *)((ulong)local_88 & 0xffffffff00000000);
  FUN_00b31dec(param_3,&DAT_0320ffa8,&local_88);
  lVar7 = FUN_009580b8();
  bVar5 = *(int *)(lVar7 + 0x525c) != 0;
  pcVar1 = "checkbox_filled";
  pcVar4 = "checkbox_empty";
  if (!bVar5) {
    pcVar1 = "checkbox_empty";
    pcVar4 = "checkbox_filled";
  }
  FUN_00f0e578(param_3 + 0x7720,pcVar4);
  FUN_00f0e578(param_3 + 0x79f8,pcVar1);
  *(uint *)(param_3 + 0x7c50) = (uint)bVar5;
  FUN_00b09454(param_3 + 0x5dd0,1);
  FUN_00b315d0(param_3);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

