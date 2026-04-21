// functions/00b3c — 21 functions
#include "libGameKindred.h"




void thunk_FUN_00b3c0d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("GUILD_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_00e7051c(&uStack_48,uVar2);
  uVar2 = FUN_00e6ce7c("GUILD_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&uStack_58,uVar2);
  if (*(int *)(param_1 + 0x1fd8) == 1) {
    pcVar4 = "GUILD_LEAVE_LAST_MEMBER_DIALOG_TEXT";
  }
  else {
    lVar3 = FUN_009580b8();
    if (((int)*(uint *)(lVar3 + 0x5634) < 0) ||
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) != 4))
    goto LAB_00b3c188;
    pcVar4 = "GUILD_LEAVE_LEADER_DIALOG_TEXT";
  }
  uVar2 = FUN_00e6ce7c(pcVar4,0);
  FUN_00910394(&uStack_58,uVar2);
LAB_00b3c188:
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(&uStack_48,&uStack_58,uVar2,uVar5,param_1,thunk_FUN_00b3c764,0);
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3c588(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_TYPE");
  FUN_00f048e0(auStack_58,uVar3,param_1);
  FUN_00f04760(param_1,auStack_58,1);
  plVar1 = (long *)(param_1 + 0x1118);
  if ((*(float *)(param_1 + 0x1158) != 0.0) || (*(float *)(param_1 + 0x115c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1158) = 0;
    FUN_0091ada4(plVar1);
  }
  uStack_60 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_60);
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3c21c(long param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_009580b8();
    if ((-1 < (int)*(uint *)(lVar4 + 0x5634)) &&
       (*(int *)(*(long *)(lVar4 + 0x5268) + (ulong)*(uint *)(lVar4 + 0x5634) * 0x108 + 0x50) == 4))
    {
      puVar1 = (uint *)(param_1 + 0x105cc);
      if ((-1 < (int)*puVar1) &&
         ((*puVar1 < *(uint *)(param_1 + 0x1fd8) && (uVar3 = FUN_009580c4(), (uVar3 & 1) != 0)))) {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x25b0) == 3) {
          uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_TITLE",0);
          thunk_FUN_00e7051c(&uStack_48,uVar5);
          pcVar6 = "MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_BODY";
        }
        else {
          uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_TITLE",0);
          thunk_FUN_00e7051c(&uStack_48,uVar5);
          pcVar6 = "MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_BODY";
        }
        uVar5 = FUN_00e6ce7c(pcVar6,0);
        thunk_FUN_00e7051c(&uStack_58,uVar5);
        FUN_00e705c8(&uStack_68,"[MEMBER_NAME]");
        uVar5 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
        FUN_00e71248(&uStack_58,0,&uStack_68,uVar5);
        if (pvStack_60 != (void *)0x0) {
          operator_delete__(pvStack_60);
          uStack_68 = 0;
          pvStack_60 = (void *)0x0;
        }
        uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
        FUN_00a9b94c(&uStack_48,&uStack_58,uVar5,uVar7,param_1,thunk_FUN_00b3c7b4,0);
        if (pvStack_50 != (void *)0x0) {
          operator_delete__(pvStack_50);
          uStack_58 = 0;
          pvStack_50 = (void *)0x0;
        }
        if (pvStack_40 != (void *)0x0) {
          operator_delete__(pvStack_40);
          uStack_48 = 0;
          pvStack_40 = (void *)0x0;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3c3f4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_009580b8();
    if ((-1 < (int)*(uint *)(lVar4 + 0x5634)) &&
       (*(int *)(*(long *)(lVar4 + 0x5268) + (ulong)*(uint *)(lVar4 + 0x5634) * 0x108 + 0x50) == 4))
    {
      uVar1 = *(uint *)(param_1 + 0x105cc);
      if ((-1 < (int)uVar1) &&
         ((uVar1 < *(uint *)(param_1 + 0x1fd8) && (uVar3 = FUN_009580c4(), (uVar3 & 1) != 0)))) {
        uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_TITLE",0);
        thunk_FUN_00e7051c(&uStack_48,uVar5);
        uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_BODY",0);
        thunk_FUN_00e7051c(&uStack_58,uVar5);
        FUN_00e705c8(&uStack_68,"[MEMBER_NAME]");
        uVar5 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) +
                                      (ulong)*(uint *)(param_1 + 0x105cc) * 8) + 0x248);
        FUN_00e71248(&uStack_58,0,&uStack_68,uVar5);
        if (pvStack_60 != (void *)0x0) {
          operator_delete__(pvStack_60);
          uStack_68 = 0;
          pvStack_60 = (void *)0x0;
        }
        uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
        FUN_00a9b94c(&uStack_48,&uStack_58,uVar5,uVar6,param_1,thunk_FUN_00b3c870,0);
        if (pvStack_50 != (void *)0x0) {
          operator_delete__(pvStack_50);
          uStack_58 = 0;
          pvStack_50 = (void *)0x0;
        }
        if (pvStack_40 != (void *)0x0) {
          operator_delete__(pvStack_40);
          uStack_48 = 0;
          pvStack_40 = (void *)0x0;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3c0d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("GUILD_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  uVar2 = FUN_00e6ce7c("GUILD_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  if (*(int *)(param_1 + 0x1fd8) == 1) {
    pcVar4 = "GUILD_LEAVE_LAST_MEMBER_DIALOG_TEXT";
  }
  else {
    lVar3 = FUN_009580b8();
    if (((int)*(uint *)(lVar3 + 0x5634) < 0) ||
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) != 4))
    goto LAB_00b3c188;
    pcVar4 = "GUILD_LEAVE_LEADER_DIALOG_TEXT";
  }
  uVar2 = FUN_00e6ce7c(pcVar4,0);
  FUN_00910394(&local_58,uVar2);
LAB_00b3c188:
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(&local_48,&local_58,uVar2,uVar5,param_1,thunk_FUN_00b3c764,0);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3c92c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_009580b8();
  if (((int)*(uint *)(lVar2 + 0x5634) < 0) ||
     (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5634) * 0x108 + 0x50) != 4)) {
    lVar2 = FUN_009580b8();
    if (((int)*(uint *)(lVar2 + 0x5634) < 0) ||
       (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5634) * 0x108 + 0x50) != 3))
    goto LAB_00b3c9d0;
  }
  uVar3 = FUN_009580c4();
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x105cc);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
      uVar4 = FUN_009580b8();
      FUN_00963084(uVar4,*(long *)(*(long *)(param_1 + 0x1fe0) +
                                  (ulong)*(uint *)(param_1 + 0x105cc) * 8) + 0x2580);
    }
  }
LAB_00b3c9d0:
  FUN_00b3b694(param_1,0,*(undefined4 *)(param_1 + 0x105cc));
  return;
}




void FUN_00b3c21c(long param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_009580b8();
    if ((-1 < (int)*(uint *)(lVar4 + 0x5634)) &&
       (*(int *)(*(long *)(lVar4 + 0x5268) + (ulong)*(uint *)(lVar4 + 0x5634) * 0x108 + 0x50) == 4))
    {
      puVar1 = (uint *)(param_1 + 0x105cc);
      if ((-1 < (int)*puVar1) &&
         ((*puVar1 < *(uint *)(param_1 + 0x1fd8) && (uVar3 = FUN_009580c4(), (uVar3 & 1) != 0)))) {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x25b0) == 3) {
          uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_TITLE",0);
          thunk_FUN_00e7051c(&local_48,uVar5);
          pcVar6 = "MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_BODY";
        }
        else {
          uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_TITLE",0);
          thunk_FUN_00e7051c(&local_48,uVar5);
          pcVar6 = "MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_BODY";
        }
        uVar5 = FUN_00e6ce7c(pcVar6,0);
        thunk_FUN_00e7051c(&local_58,uVar5);
        FUN_00e705c8(&local_68,"[MEMBER_NAME]");
        uVar5 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
        FUN_00e71248(&local_58,0,&local_68,uVar5);
        if (local_60 != (void *)0x0) {
          operator_delete__(local_60);
          local_68 = 0;
          local_60 = (void *)0x0;
        }
        uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
        FUN_00a9b94c(&local_48,&local_58,uVar5,uVar7,param_1,thunk_FUN_00b3c7b4,0);
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_58 = 0;
          local_50 = (void *)0x0;
        }
        if (local_40 != (void *)0x0) {
          operator_delete__(local_40);
          local_48 = 0;
          local_40 = (void *)0x0;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3c7b4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    if (((-1 < (int)*(uint *)(lVar3 + 0x5634)) &&
        (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) == 4)
        ) && (uVar2 = FUN_009580c4(), (uVar2 & 1) != 0)) {
      uVar1 = *(uint *)(param_1 + 0x105cc);
      if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
        uVar4 = FUN_009580b8();
        FUN_00963320(uVar4,param_1 + 0x105f0,
                     *(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*(uint *)(param_1 + 0x105cc) * 8
                              ) + 0x2580);
      }
    }
    FUN_00b3b694(param_1,0,*(undefined4 *)(param_1 + 0x105cc));
    return;
  }
  return;
}




void FUN_00b3c3f4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_009580b8();
    if ((-1 < (int)*(uint *)(lVar4 + 0x5634)) &&
       (*(int *)(*(long *)(lVar4 + 0x5268) + (ulong)*(uint *)(lVar4 + 0x5634) * 0x108 + 0x50) == 4))
    {
      uVar1 = *(uint *)(param_1 + 0x105cc);
      if ((-1 < (int)uVar1) &&
         ((uVar1 < *(uint *)(param_1 + 0x1fd8) && (uVar3 = FUN_009580c4(), (uVar3 & 1) != 0)))) {
        uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_TITLE",0);
        thunk_FUN_00e7051c(&local_48,uVar5);
        uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_BODY",0);
        thunk_FUN_00e7051c(&local_58,uVar5);
        FUN_00e705c8(&local_68,"[MEMBER_NAME]");
        uVar5 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) +
                                      (ulong)*(uint *)(param_1 + 0x105cc) * 8) + 0x248);
        FUN_00e71248(&local_58,0,&local_68,uVar5);
        if (local_60 != (void *)0x0) {
          operator_delete__(local_60);
          local_68 = 0;
          local_60 = (void *)0x0;
        }
        uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
        FUN_00a9b94c(&local_48,&local_58,uVar5,uVar6,param_1,thunk_FUN_00b3c870,0);
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_58 = 0;
          local_50 = (void *)0x0;
        }
        if (local_40 != (void *)0x0) {
          operator_delete__(local_40);
          local_48 = 0;
          local_40 = (void *)0x0;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3c870(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    if (((-1 < (int)*(uint *)(lVar3 + 0x5634)) &&
        (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) == 4)
        ) && (uVar2 = FUN_009580c4(), (uVar2 & 1) != 0)) {
      uVar1 = *(uint *)(param_1 + 0x105cc);
      if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
        uVar4 = FUN_009580b8();
        FUN_00963378(uVar4,param_1 + 0x105f0,
                     *(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*(uint *)(param_1 + 0x105cc) * 8
                              ) + 0x2580);
      }
    }
    FUN_00b3b694(param_1,0,*(undefined4 *)(param_1 + 0x105cc));
    return;
  }
  return;
}




void thunk_FUN_00b3c0d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("GUILD_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_00e7051c(&uStack_48,uVar2);
  uVar2 = FUN_00e6ce7c("GUILD_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&uStack_58,uVar2);
  if (*(int *)(param_1 + 0x1fd8) == 1) {
    pcVar4 = "GUILD_LEAVE_LAST_MEMBER_DIALOG_TEXT";
  }
  else {
    lVar3 = FUN_009580b8();
    if (((int)*(uint *)(lVar3 + 0x5634) < 0) ||
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) != 4))
    goto LAB_00b3c188;
    pcVar4 = "GUILD_LEAVE_LEADER_DIALOG_TEXT";
  }
  uVar2 = FUN_00e6ce7c(pcVar4,0);
  FUN_00910394(&uStack_58,uVar2);
LAB_00b3c188:
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(&uStack_48,&uStack_58,uVar2,uVar5,param_1,thunk_FUN_00b3c764,0);
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3c588(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_TYPE");
  FUN_00f048e0(auStack_58,uVar3,param_1);
  FUN_00f04760(param_1,auStack_58,1);
  plVar1 = (long *)(param_1 + 0x1118);
  if ((*(float *)(param_1 + 0x1158) != 0.0) || (*(float *)(param_1 + 0x115c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1158) = 0;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3c648(void)

{
  uint uVar1;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    FUN_009580b8();
    return;
  }
  return;
}




void FUN_00b3c668(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00f04924(param_2);
  if (lVar2 != 0) {
    FUN_008fa54c(local_50,"purchaseBoost");
    FUN_00b11d8c(param_1 + 0x9530,local_50,lVar2);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3c6fc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00969248();
  if (((*(int *)(lVar1 + 0x38) < 1) && (-1 < (int)param_3)) &&
     (param_3 < *(uint *)(param_1 + 0x1fd8))) {
    FUN_008fce60(param_1 + 0x105d0,
                 *(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)param_3 * 8) + 0x2580);
  }
  return;
}




void thunk_FUN_00b3c764(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    FUN_009580b8();
    FUN_0096310c();
    if (*(float *)(param_1 + 0x115c) != 0.0) {
      *(undefined4 *)(param_1 + 0x115c) = 0;
      FUN_0091ada4(param_1 + 0x1118);
      return;
    }
  }
  return;
}




void FUN_00b3c764(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    FUN_009580b8();
    FUN_0096310c();
    if (*(float *)(param_1 + 0x115c) != 0.0) {
      *(undefined4 *)(param_1 + 0x115c) = 0;
      FUN_0091ada4(param_1 + 0x1118);
      return;
    }
  }
  return;
}




void FUN_00b3c7b4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    if (((-1 < (int)*(uint *)(lVar3 + 0x5634)) &&
        (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) == 4)
        ) && (uVar2 = FUN_009580c4(), (uVar2 & 1) != 0)) {
      uVar1 = *(uint *)(param_1 + 0x105cc);
      if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
        uVar4 = FUN_009580b8();
        FUN_00963320(uVar4,param_1 + 0x105f0,
                     *(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*(uint *)(param_1 + 0x105cc) * 8
                              ) + 0x2580);
      }
    }
    FUN_00b3b694(param_1,0,*(undefined4 *)(param_1 + 0x105cc));
    return;
  }
  return;
}




void FUN_00b3c870(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    if (((-1 < (int)*(uint *)(lVar3 + 0x5634)) &&
        (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) == 4)
        ) && (uVar2 = FUN_009580c4(), (uVar2 & 1) != 0)) {
      uVar1 = *(uint *)(param_1 + 0x105cc);
      if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
        uVar4 = FUN_009580b8();
        FUN_00963378(uVar4,param_1 + 0x105f0,
                     *(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*(uint *)(param_1 + 0x105cc) * 8
                              ) + 0x2580);
      }
    }
    FUN_00b3b694(param_1,0,*(undefined4 *)(param_1 + 0x105cc));
    return;
  }
  return;
}




void FUN_00b3c92c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_009580b8();
  if (((int)*(uint *)(lVar2 + 0x5634) < 0) ||
     (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5634) * 0x108 + 0x50) != 4)) {
    lVar2 = FUN_009580b8();
    if (((int)*(uint *)(lVar2 + 0x5634) < 0) ||
       (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5634) * 0x108 + 0x50) != 3))
    goto LAB_00b3c9d0;
  }
  uVar3 = FUN_009580c4();
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x105cc);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
      uVar4 = FUN_009580b8();
      FUN_00963084(uVar4,*(long *)(*(long *)(param_1 + 0x1fe0) +
                                  (ulong)*(uint *)(param_1 + 0x105cc) * 8) + 0x2580);
    }
  }
LAB_00b3c9d0:
  FUN_00b3b694(param_1,0,*(undefined4 *)(param_1 + 0x105cc));
  return;
}




void FUN_00b3c9f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar18 = tpidr_el0;
  local_80 = *(long *)(lVar18 + 0x28);
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_027e0bf8;
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x2f;
  FUN_00f0d160();
  plVar2 = param_1 + 0x55;
  FUN_00f0d160();
  lVar19 = 0x3d8;
  do {
    FUN_00f0d160((long)param_1 + lVar19);
    lVar19 = lVar19 + 0x130;
  } while (lVar19 != 0x9c8);
  plVar3 = param_1 + 0x139;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x157;
  FUN_00f0d160();
  plVar5 = param_1 + 0x17d;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x19b;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0x1b9;
  FUN_00f0e4a8();
  plVar8 = param_1 + 0x1d7;
  FUN_00b08d84(plVar8);
  FUN_00b1e884(param_1 + 0x225);
  FUN_00b1d5d8(param_1 + 0x281);
  FUN_00b1d5d8(param_1 + 0x2fb);
  plVar10 = param_1 + 0x375;
  FUN_00abaee8(plVar10,0);
  plVar11 = param_1 + 0x434;
  FUN_00f017e8(plVar11);
  plVar12 = param_1 + 0x445;
  param_1[0x434] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8();
  plVar13 = param_1 + 0x456;
  param_1[0x445] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar14 = param_1 + 0x474;
  FUN_00f0e4a8();
  plVar15 = param_1 + 0x492;
  FUN_00f0e4a8();
  param_1[0x4b5] = 0;
  param_1[0x4b4] = 0;
  param_1[0x4b3] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4b1] = 0;
  param_1[0x4b0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x225,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x281,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2fb,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  lVar19 = 0x3d8;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar19,1);
    lVar19 = lVar19 + 0x130;
  } while (lVar19 != 0x9c8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_00f023ec(plVar11,plVar12,1);
  FUN_00f023ec(plVar12,plVar13,1);
  FUN_00f023ec(plVar12,plVar14,1);
  FUN_00f023ec(plVar12,plVar15,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar16 = *(uint *)((long)param_1 + 0xa4c);
  if ((uVar16 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xa4c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1300;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) | 0x10;
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar16 = *(uint *)((long)param_1 + 0xc6c);
  if ((uVar16 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xc6c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0xc80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(param_1 + 0x11,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_crown");
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar16 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar16 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1fc) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar16 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar16 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x32c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar7,PTR_s_build___BoostBadges_tga_02be3580,"boost_badge_guild_fame");
  FUN_00f13f08(0x43020000,0x43020000,plVar7);
  uVar16 = *(uint *)((long)param_1 + 0xe4c);
  if ((uVar16 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xe4c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x3300;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e6bc(0x3e99999a,plVar7);
  FUN_00f0e548(plVar6,PTR_s_build___BoostBadges_tga_02be3580,"boost_badge_guild_fame");
  FUN_00f13f08(0x43020000,0x43020000,plVar6);
  local_98 = 0;
  uStack_90 = 0;
  uVar17 = DAT_03210c64;
  local_b0 = thunk_FUN_00b3d460;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar17;
  FUN_009693a0(param_1 + 0x1d8,&local_b0);
  FUN_00b09144(0x3f800000,plVar8);
  FUN_00b0914c(plVar8,1);
  plVar1 = param_1 + 0x410;
  FUN_00f0e578(plVar1,"generic_invite_friend");
  uVar16 = *(uint *)((long)param_1 + 0x2104);
  if ((uVar16 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x2104) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x5900;
    FUN_0091ada4(plVar1);
  }
  fVar20 = (float)FUN_00f0e700(plVar1);
  fVar20 = 56.0 / fVar20;
  if ((*(float *)(param_1 + 0x419) != fVar20) || (*(float *)((long)param_1 + 0x20cc) != fVar20)) {
    *(float *)(param_1 + 0x419) = fVar20;
    *(float *)((long)param_1 + 0x20cc) = fVar20;
    FUN_0091ada4(plVar1);
  }
  uVar16 = *(uint *)((long)param_1 + 0x1f24);
  if ((uVar16 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1f24) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0x3d4);
  }
  FUN_00abb1e0(0x3f19999a,plVar10,&DAT_01bee7fa);
  FUN_00b09144(0,plVar10);
  FUN_00abb1e0(0x3f666666,plVar10,&DAT_01bee7fa);
  lVar19 = NEON_fmov(0xc1200000,4);
  param_1[0x380] = lVar19;
  FUN_00abb218(0x3f59999a,0x3fa00000,plVar10);
  local_b0 = thunk_FUN_00b3d2f0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar17;
  FUN_009693a0(param_1 + 0x376,&local_b0);
  *(uint *)((long)param_1 + 0x1c2c) = *(uint *)((long)param_1 + 0x1c2c) & 0xfffffffb;
  FUN_00b0914c(plVar10,1);
  lVar19 = 0;
  do {
    lVar9 = (long)param_1 + lVar19 + 0x3d8;
    FUN_00f0d92c(lVar9,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    uVar16 = *(uint *)((long)param_1 + lVar19 + 0x45c);
    if ((uVar16 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + lVar19 + 0x45c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
      FUN_0091ada4(lVar9);
    }
    lVar19 = lVar19 + 0x130;
  } while (lVar19 != 0x5f0);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar16 = *(uint *)((long)param_1 + 0xb3c);
  if ((uVar16 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xb3c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x44f) != 0.5) || (*(float *)((long)param_1 + 0x227c) != 0.5)) {
    param_1[0x44f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0e548(plVar13,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f0e670(plVar13,&DAT_01bee7fa,2);
  uVar16 = *(uint *)((long)param_1 + 0x2334);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2334) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar13);
  }
  fVar20 = *(float *)(param_1 + 0x1c2);
  if ((*(float *)(param_1 + 0x45f) != fVar20) || (*(float *)((long)param_1 + 0x22fc) != fVar20)) {
    *(float *)(param_1 + 0x45f) = fVar20;
    *(float *)((long)param_1 + 0x22fc) = fVar20;
    FUN_0091ada4(plVar13);
  }
  if ((*(float *)(param_1 + 0x460) != 0.5) || (*(float *)((long)param_1 + 0x2304) != 0.5)) {
    param_1[0x460] = 0x3f0000003f000000;
    FUN_0091ada4(plVar13);
  }
  *(uint *)((long)param_1 + 0x2334) = *(uint *)((long)param_1 + 0x2334) & 0xfffffffb;
  FUN_00f0e548(plVar14,PTR_s_build___MenuPartsCommon_tga_02be3530,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x47e) != 0.5) || (*(float *)((long)param_1 + 0x23f4) != 0.5)) {
    param_1[0x47e] = 0x3f0000003f000000;
    FUN_0091ada4(plVar14);
  }
  *(uint *)((long)param_1 + 0x2424) = *(uint *)((long)param_1 + 0x2424) & 0xfffffffb;
  FUN_00f0e548(plVar15,PTR_s_build___MenuPartsCommon_tga_02be3530,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x49c) != 0.5) || (*(float *)((long)param_1 + 0x24e4) != 0.5)) {
    param_1[0x49c] = 0x3f0000003f000000;
    FUN_0091ada4(plVar15);
  }
  *(uint *)((long)param_1 + 0x2514) = *(uint *)((long)param_1 + 0x2514) & 0xfffffffb;
  if (*(long *)(lVar18 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

