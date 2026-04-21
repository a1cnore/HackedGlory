// functions/00b61 — 10 functions
#include "libGameKindred.h"




void thunk_FUN_00b61444(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2cfa8) = 1;
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    FUN_009580b8();
    FUN_00960d6c();
  }
  else {
    FUN_009fece0();
    FUN_00a00008();
  }
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_LEAVE_PARTY");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    FUN_00ac0980(param_1 + 0x28dc0,1);
    FUN_008fce60(param_1 + 0x2cf38,&DAT_0320ffa8);
    uVar3 = FUN_0092e8e0();
    if ((uVar3 & 1) != 0) {
      FUN_00b5eea4(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b61444(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2cfa8) = 1;
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    FUN_009580b8();
    FUN_00960d6c();
  }
  else {
    FUN_009fece0();
    FUN_00a00008();
  }
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_LEAVE_PARTY");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    FUN_00ac0980(param_1 + 0x28dc0,1);
    FUN_008fce60(param_1 + 0x2cf38,&DAT_0320ffa8);
    uVar3 = FUN_0092e8e0();
    if ((uVar3 & 1) != 0) {
      FUN_00b5eea4(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b61524(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0xda48;
  pbVar4 = (byte *)FUN_00ac9cd0(lVar1);
  uVar2 = (ulong)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar4 + 8);
  }
  if ((uVar2 == 9) && (iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"very_easy",9), iVar3 == 0))
  {
    pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION";
  }
  else {
    pbVar4 = (byte *)FUN_00ac9cd0(lVar1);
    uVar2 = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar4 + 8);
    }
    if ((uVar2 == 4) && (iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"easy",4), iVar3 == 0)) {
      pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_EASY_OPTION";
    }
    else {
      pbVar4 = (byte *)FUN_00ac9cd0(lVar1);
      uVar2 = (ulong)(*pbVar4 >> 1);
      if ((*pbVar4 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar4 + 8);
      }
      if ((uVar2 == 6) && (iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"medium",6), iVar3 == 0)
         ) {
        pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_MEDIUM_OPTION";
      }
      else {
        pbVar4 = (byte *)FUN_00ac9cd0(lVar1);
        uVar2 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar4 + 8);
        }
        if ((uVar2 == 4) && (iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"hard",4), iVar3 == 0)
           ) {
          pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_HARD_OPTION";
        }
        else {
          pbVar4 = (byte *)FUN_00ac9cd0(lVar1);
          uVar2 = (ulong)(*pbVar4 >> 1);
          if ((*pbVar4 & 1) != 0) {
            uVar2 = *(ulong *)(pbVar4 + 8);
          }
          if ((uVar2 != 9) ||
             (iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"very_hard",9), iVar3 != 0))
          goto LAB_00b616f0;
          pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_VERY_HARD_OPTION";
        }
      }
    }
  }
  uVar6 = FUN_00e6ce7c(pcVar5,0);
  FUN_00f0d75c(param_1 + 0x85f0,uVar6);
LAB_00b616f0:
  FUN_00f0db64(*(undefined4 *)(param_1 + 0x2d028),0,0x3f800000,param_1 + 0x85f0);
  return;
}




void FUN_00b61718(long param_1)

{
  FUN_00b60e38(param_1 + -0x2c38);
  return;
}




void FUN_00b61724(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_009580b8();
  FUN_0095ea84(uVar3,1);
  FUN_009fece0();
  uVar3 = FUN_00a000e8();
  FUN_009653b0(param_1 + 0x2ced0,uVar3);
  lVar4 = FUN_009fece0();
  *(byte *)(param_1 + 0x2cf98) = *(byte *)(lVar4 + 0xa0);
  FUN_008fa54c(local_50,"*GameMode_Blitz_Private*");
  FUN_00ac9b64(param_1 + 0xb110,local_50,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  bVar1 = *(byte *)(param_1 + 0x2cf98);
  *(uint *)(param_1 + 0xb194) = *(uint *)(param_1 + 0xb194) & 0xfffffffb | (uint)bVar1 << 2;
  *(uint *)(param_1 + 0x8544) =
       *(uint *)(param_1 + 0x8544) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  FUN_00b60784(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b61828(undefined8 param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 == -0x11) {
    pcVar2 = "MENU_PARTY_COULD_NOT_INVITE_NOT_IN_GAME";
  }
  else if (iVar1 == -0x10) {
    pcVar2 = "MENU_PARTY_COULD_NOT_INVITE_ALREADY_IN_PARTY";
  }
  else {
    if (iVar1 != -0xf) goto LAB_00b6188c;
    pcVar2 = "MENU_PARTY_COULD_NOT_INVITE_NOT_IN_PARTY";
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00a9da50(0x40200000,uVar3,1,1);
LAB_00b6188c:
  FUN_00b605cc(param_1,1);
  return;
}




void FUN_00b618a0(long param_1)

{
  FUN_00b61828(param_1 + -0x2c38);
  return;
}




void FUN_00b618ac(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(int *)(param_2 + 0x28) != 0) || (*(char *)(param_2 + 0x494) != '\0')) goto LAB_00b61e34;
  bVar2 = *(byte *)(param_2 + 0x460);
  uVar11 = *(ulong *)(param_2 + 0x468);
  lVar1 = param_2 + 0x460;
  uVar12 = (ulong)(bVar2 >> 1);
  uVar6 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar6 = uVar11;
  }
  if (uVar6 == 3) {
    iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"ban",3);
    if (iVar4 != 0) {
      bVar2 = *(byte *)(param_2 + 0x460);
      uVar11 = *(ulong *)(param_2 + 0x468);
      uVar12 = (ulong)(bVar2 >> 1);
      goto LAB_00b6193c;
    }
    bVar2 = *(byte *)(param_2 + 0x478);
    uVar11 = *(ulong *)(param_2 + 0x480);
    lVar1 = param_2 + 0x478;
    uVar12 = (ulong)(bVar2 >> 1);
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 != 0xf) {
LAB_00b61b90:
      uVar6 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar6 = uVar11;
      }
      if (uVar6 == 3) {
        iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,&DAT_01b943fe,3);
        if (iVar4 == 0) {
          uVar5 = FUN_00e6ce7c("PARTY_BANNED_TITLE",0);
          pcVar8 = "PARTY_BANNED_MSG_AFK";
          goto LAB_00b61e00;
        }
        bVar2 = *(byte *)(param_2 + 0x478);
        uVar11 = *(ulong *)(param_2 + 0x480);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar12 = uVar11;
      }
      if ((uVar12 == 6) && (iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"gm_ban",6), iVar4 == 0)
         ) {
        uVar5 = FUN_00e6ce7c("PARTY_BANNED_MSG_GM_BAN",0);
        thunk_FUN_00e7051c(&local_48,uVar5);
        FUN_00e70510(&local_58);
        FUN_00e70e18(&local_58,&DAT_01bb6d43,
                     (int)(((float)*(int *)(param_2 + 0x490) / 60.0) / 60.0 + 0.999));
        FUN_00e705c8(&local_68,"[HOURS]");
        FUN_00e71248(&local_48,0,&local_68,&local_58);
        if (local_60 != (void *)0x0) {
          operator_delete__(local_60);
          local_68 = 0;
          local_60 = (void *)0x0;
        }
        uVar5 = FUN_00e6ce7c("PARTY_BANNED_TITLE",0);
        uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar5,&local_48,uVar9,param_1,0);
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
      goto LAB_00b61e34;
    }
    iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"match_rejection",0xf);
    if (iVar4 != 0) {
      bVar2 = *(byte *)(param_2 + 0x478);
      uVar11 = *(ulong *)(param_2 + 0x480);
      uVar12 = (ulong)(bVar2 >> 1);
      goto LAB_00b61b90;
    }
    uVar5 = FUN_00e6ce7c("PARTY_BANNED_TITLE",0);
    pcVar8 = "PARTY_BANNED_MSG";
  }
  else {
LAB_00b6193c:
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 10) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"num_heroes",10);
      if (iVar4 == 0) {
        uVar6 = FUN_00b5ebb4(param_1);
        if ((uVar6 & 1) == 0) {
          uVar5 = FUN_00e6ce7c("PARTY_RANKED_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar8 = "PARTY_RANKED_NOT_ENOUGH_HEROES_MSG";
        }
        else {
          uVar5 = FUN_00e6ce7c("PARTY_DRAFT_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar8 = "PARTY_DRAFT_NOT_ENOUGH_HEROES_MSG";
        }
        goto LAB_00b61e00;
      }
      bVar2 = *(byte *)(param_2 + 0x460);
      uVar11 = *(ulong *)(param_2 + 0x468);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0xf) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"wide_elo_spread",0xf);
      if (iVar4 == 0) {
        uVar5 = FUN_00e6ce7c("PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_TITLE",0);
        pcVar8 = "PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_MSG";
        goto LAB_00b61e00;
      }
      bVar2 = *(byte *)(param_2 + 0x460);
      uVar11 = *(ulong *)(param_2 + 0x468);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0xf) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"5v5_access_pass",0xf);
      if (iVar4 == 0) {
        uVar5 = FUN_00e6ce7c("PARTY_5V5_PARTY_MISSING_ACCESS_TITLE",0);
        pcVar8 = "PARTY_5V5_PARTY_MISSING_ACCESS_MSG";
        goto LAB_00b61e00;
      }
      bVar2 = *(byte *)(param_2 + 0x460);
      uVar11 = *(ulong *)(param_2 + 0x468);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 5) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"level",5);
      if (iVar4 == 0) {
        FUN_00ac9cd0(param_1 + 0xb110);
        piVar7 = (int *)FUN_00cead68();
        if (*piVar7 == 0) {
          uVar5 = FUN_00e6ce7c("PARTY_RANKED_LEVEL_REQ_NOT_MET_TITLE",0);
          pcVar8 = "PARTY_RANKED_LEVEL_REQ_NOT_MET_MSG";
        }
        else {
          FUN_00ac9cd0(param_1 + 0xb110);
          piVar7 = (int *)FUN_00cead68();
          if (*piVar7 == 9) {
            uVar5 = FUN_00e6ce7c("PARTY_CASUAL_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar8 = "PARTY_CASUAL_LEVEL_REQ_NOT_MET_MSG";
          }
          else {
            uVar5 = FUN_00e6ce7c("PARTY_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar8 = "PARTY_LEVEL_REQ_NOT_MET_MSG";
          }
        }
        goto LAB_00b61e00;
      }
      bVar2 = *(byte *)(param_2 + 0x460);
      uVar11 = *(ulong *)(param_2 + 0x468);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 5) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"karma",5);
      if (iVar4 == 0) {
        uVar5 = FUN_00e6ce7c("PARTY_RANKED_KARMA_REQ_NOT_MET_TITLE",0);
        pcVar8 = "PARTY_RANKED_KARMA_REQ_NOT_MET_MSG";
        goto LAB_00b61e00;
      }
      bVar2 = *(byte *)(param_2 + 0x460);
      uVar11 = *(ulong *)(param_2 + 0x468);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar12 = uVar11;
    }
    if ((uVar12 != 0x11) ||
       (iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"banned_party_size",0x11), iVar4 != 0))
    goto LAB_00b61e34;
    uVar5 = FUN_00e6ce7c("MENU_PARTY_5V5_NO_QUAD_QUEUE_TITLE",0);
    pcVar8 = "MENU_PARTY_5V5_NO_QUAD_QUEUE";
  }
LAB_00b61e00:
  uVar9 = FUN_00e6ce7c(pcVar8,0);
  uVar10 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar9,uVar10,param_1,0);
LAB_00b61e34:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b61e5c(long param_1)

{
  FUN_00b618ac(param_1 + -0x2c38);
  return;
}




void FUN_00b61e68(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(int *)(param_2 + 0x50) != 0) || (*(char *)(param_2 + 0x4bc) != '\0')) goto LAB_00b623f0;
  bVar2 = *(byte *)(param_2 + 0x488);
  uVar11 = *(ulong *)(param_2 + 0x490);
  lVar1 = param_2 + 0x488;
  uVar12 = (ulong)(bVar2 >> 1);
  uVar6 = uVar12;
  if ((bVar2 & 1) != 0) {
    uVar6 = uVar11;
  }
  if (uVar6 == 3) {
    iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"ban",3);
    if (iVar4 != 0) {
      bVar2 = *(byte *)(param_2 + 0x488);
      uVar11 = *(ulong *)(param_2 + 0x490);
      uVar12 = (ulong)(bVar2 >> 1);
      goto LAB_00b61ef8;
    }
    bVar2 = *(byte *)(param_2 + 0x4a0);
    uVar11 = *(ulong *)(param_2 + 0x4a8);
    lVar1 = param_2 + 0x4a0;
    uVar12 = (ulong)(bVar2 >> 1);
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 != 0xf) {
LAB_00b6214c:
      uVar6 = uVar12;
      if ((bVar2 & 1) != 0) {
        uVar6 = uVar11;
      }
      if (uVar6 == 3) {
        iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,&DAT_01b943fe,3);
        if (iVar4 == 0) {
          uVar5 = FUN_00e6ce7c("PARTY_BANNED_TITLE",0);
          pcVar8 = "PARTY_BANNED_MSG_AFK";
          goto LAB_00b623bc;
        }
        bVar2 = *(byte *)(param_2 + 0x4a0);
        uVar11 = *(ulong *)(param_2 + 0x4a8);
        uVar12 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar12 = uVar11;
      }
      if ((uVar12 == 6) && (iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"gm_ban",6), iVar4 == 0)
         ) {
        uVar5 = FUN_00e6ce7c("PARTY_BANNED_MSG_GM_BAN",0);
        thunk_FUN_00e7051c(&local_48,uVar5);
        FUN_00e70510(&local_58);
        FUN_00e70e18(&local_58,&DAT_01bb6d43,
                     (int)(((float)*(int *)(param_2 + 0x4b8) / 60.0) / 60.0 + 0.999));
        FUN_00e705c8(&local_68,"[HOURS]");
        FUN_00e71248(&local_48,0,&local_68,&local_58);
        if (local_60 != (void *)0x0) {
          operator_delete__(local_60);
          local_68 = 0;
          local_60 = (void *)0x0;
        }
        uVar5 = FUN_00e6ce7c("PARTY_BANNED_TITLE",0);
        uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar5,&local_48,uVar9,param_1,0);
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
      goto LAB_00b623f0;
    }
    iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"match_rejection",0xf);
    if (iVar4 != 0) {
      bVar2 = *(byte *)(param_2 + 0x4a0);
      uVar11 = *(ulong *)(param_2 + 0x4a8);
      uVar12 = (ulong)(bVar2 >> 1);
      goto LAB_00b6214c;
    }
    uVar5 = FUN_00e6ce7c("PARTY_BANNED_TITLE",0);
    pcVar8 = "PARTY_BANNED_MSG";
  }
  else {
LAB_00b61ef8:
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 10) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"num_heroes",10);
      if (iVar4 == 0) {
        uVar6 = FUN_00b5ebb4(param_1);
        if ((uVar6 & 1) == 0) {
          uVar5 = FUN_00e6ce7c("PARTY_RANKED_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar8 = "PARTY_RANKED_NOT_ENOUGH_HEROES_MSG";
        }
        else {
          uVar5 = FUN_00e6ce7c("PARTY_DRAFT_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar8 = "PARTY_DRAFT_NOT_ENOUGH_HEROES_MSG";
        }
        goto LAB_00b623bc;
      }
      bVar2 = *(byte *)(param_2 + 0x488);
      uVar11 = *(ulong *)(param_2 + 0x490);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0xf) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"wide_elo_spread",0xf);
      if (iVar4 == 0) {
        uVar5 = FUN_00e6ce7c("PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_TITLE",0);
        pcVar8 = "PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_MSG";
        goto LAB_00b623bc;
      }
      bVar2 = *(byte *)(param_2 + 0x488);
      uVar11 = *(ulong *)(param_2 + 0x490);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0xf) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"5v5_access_pass",0xf);
      if (iVar4 == 0) {
        uVar5 = FUN_00e6ce7c("PARTY_5V5_PARTY_MISSING_ACCESS_TITLE",0);
        pcVar8 = "PARTY_5V5_PARTY_MISSING_ACCESS_MSG";
        goto LAB_00b623bc;
      }
      bVar2 = *(byte *)(param_2 + 0x488);
      uVar11 = *(ulong *)(param_2 + 0x490);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 5) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"level",5);
      if (iVar4 == 0) {
        FUN_00ac9cd0(param_1 + 0xb110);
        piVar7 = (int *)FUN_00cead68();
        if (*piVar7 == 0) {
          uVar5 = FUN_00e6ce7c("PARTY_RANKED_LEVEL_REQ_NOT_MET_TITLE",0);
          pcVar8 = "PARTY_RANKED_LEVEL_REQ_NOT_MET_MSG";
        }
        else {
          FUN_00ac9cd0(param_1 + 0xb110);
          piVar7 = (int *)FUN_00cead68();
          if (*piVar7 == 9) {
            uVar5 = FUN_00e6ce7c("PARTY_CASUAL_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar8 = "PARTY_CASUAL_LEVEL_REQ_NOT_MET_MSG";
          }
          else {
            uVar5 = FUN_00e6ce7c("PARTY_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar8 = "PARTY_LEVEL_REQ_NOT_MET_MSG";
          }
        }
        goto LAB_00b623bc;
      }
      bVar2 = *(byte *)(param_2 + 0x488);
      uVar11 = *(ulong *)(param_2 + 0x490);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    uVar6 = uVar12;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar11;
    }
    if (uVar6 == 5) {
      iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"karma",5);
      if (iVar4 == 0) {
        uVar5 = FUN_00e6ce7c("PARTY_RANKED_KARMA_REQ_NOT_MET_TITLE",0);
        pcVar8 = "PARTY_RANKED_KARMA_REQ_NOT_MET_MSG";
        goto LAB_00b623bc;
      }
      bVar2 = *(byte *)(param_2 + 0x488);
      uVar11 = *(ulong *)(param_2 + 0x490);
      uVar12 = (ulong)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar12 = uVar11;
    }
    if ((uVar12 != 0x11) ||
       (iVar4 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"banned_party_size",0x11), iVar4 != 0))
    goto LAB_00b623f0;
    uVar5 = FUN_00e6ce7c("MENU_PARTY_5V5_NO_QUAD_QUEUE_TITLE",0);
    pcVar8 = "MENU_PARTY_5V5_NO_QUAD_QUEUE";
  }
LAB_00b623bc:
  uVar9 = FUN_00e6ce7c(pcVar8,0);
  uVar10 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar9,uVar10,param_1,0);
LAB_00b623f0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

