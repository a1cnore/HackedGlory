// functions/00b34 — 20 functions
#include "libGameKindred.h"




void thunk_FUN_00b34b2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_140;
  undefined1 auStack_138 [40];
  long lStack_110;
  undefined8 uStack_f0;
  void *pvStack_e8;
  byte bStack_e0;
  void *pvStack_d0;
  undefined8 uStack_b0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  void *pvStack_88;
  ulong uStack_80;
  void *pvStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  void *pvStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_NAME_RULES_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_90,uVar2);
  FUN_00b26098(&ppuStack_140);
  thunk_FUN_00e7051c(&uStack_80,&uStack_90);
  FUN_008fcdb8(&bStack_70,&DAT_0320ffa8);
  uStack_58 = 1;
  uStack_54 = 0x41a00000;
  FUN_009c82b4(auStack_138,&uStack_80);
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  lStack_110 = param_1 + 0x1b00;
  uStack_98 = 2;
  uStack_b0 = 0x447a00003f000000;
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&uStack_80,"editNameRulesInfo");
  FUN_009badc0(uVar2,&uStack_80,&ppuStack_140);
  if ((uStack_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,bStack_70));
  }
  ppuStack_140 = &PTR_FUN_027de7f0;
  if ((bStack_e0 & 1) != 0) {
    operator_delete(pvStack_d0);
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
    uStack_f0 = 0;
    pvStack_e8 = (void *)0x0;
  }
  FUN_009c8464(auStack_138,1);
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b34958(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x23e0;
  uVar5 = FUN_00ce1f88(lVar1);
  lVar2 = param_1 + 0x7c18;
  FUN_00910394(lVar2,uVar5);
  if (*(int *)(param_1 + 0x7c58) == 4) {
    uVar4 = FUN_00e70b14(lVar2);
    if (0x10 < uVar4) {
      FUN_00e71810(&uStack_48,lVar2,0,0x10);
      FUN_00e705c8(&uStack_58,"...");
      FUN_00e70c34(&uStack_48,&uStack_58);
      if (pvStack_50 != (void *)0x0) {
        operator_delete__(pvStack_50);
        uStack_58 = 0;
        pvStack_50 = (void *)0x0;
      }
      FUN_00abc73c(lVar1,&uStack_48);
      if (pvStack_40 != (void *)0x0) {
        operator_delete__(pvStack_40);
        uStack_48 = 0;
        pvStack_40 = (void *)0x0;
      }
    }
  }
  else {
    FUN_00abcf58(lVar1,1,param_1 + 0x7c28);
    uVar5 = FUN_00ce1f88(lVar1);
    uVar6 = FUN_00e70b88(uVar5,&DAT_03210450);
    if ((uVar6 & 1) != 0) {
      FUN_00abc788(lVar1);
    }
    lVar2 = param_1 + 0x40d8;
    uVar5 = FUN_00ce1f88(lVar1);
    FUN_00abcf38(lVar2,1,uVar5);
    uVar5 = FUN_00ce1f88(lVar2);
    uVar6 = FUN_00e70b88(uVar5,&DAT_03210450);
    if ((uVar6 & 1) != 0) {
      FUN_00abc788(lVar2);
    }
  }
  FUN_00b33790(param_1);
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b3488c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
switchD_00b348d8_caseD_1:
    FUN_00b33904(param_1);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x7c58)) {
  case 1:
    goto switchD_00b348d8_caseD_1;
  case 2:
    FUN_00b33c08(param_1);
    return;
  case 3:
    FUN_00b33e38(param_1);
    return;
  case 4:
    FUN_00b34068(param_1);
    return;
  case 5:
    FUN_00b34178(param_1);
    return;
  case 6:
    FUN_00b34310(param_1);
    return;
  case 7:
    FUN_00b34444(param_1);
    return;
  case 8:
    FUN_00b34668(param_1);
    return;
  default:
    return;
  }
}




void thunk_FUN_00b34cb0(long param_1)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  void *__s1;
  
  uVar5 = FUN_0093dbe8();
  if ((uVar5 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x7c38);
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x7c40);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x7c48);
      if ((bVar3 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x7c39);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (__n == 0) {
          return;
        }
        pcVar8 = (char *)(param_1 + 0x7c39);
        lVar9 = -(ulong)(bVar3 >> 1);
        while (*pcVar8 == *__s2) {
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
          if (lVar9 == 0) {
            return;
          }
        }
      }
      else {
        if (__n == 0) {
          return;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) {
          return;
        }
      }
    }
    uVar2 = *(uint *)(param_1 + 0x7c54);
    lVar9 = FUN_009580b8();
    if (*(uint *)(lVar9 + 0x5450) < uVar2) {
      return;
    }
  }
  uVar6 = FUN_009580b8();
  uVar7 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
  FUN_0095fef8(uVar6,param_1 + 0x7c38,uVar7);
  return;
}




void thunk_FUN_00b34ddc(long param_1)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  
  bVar3 = *(byte *)(param_1 + 0x7c38);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7c40);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x7c48);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7c39);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)(param_1 + 0x7c39);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *__s2) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        __s2 = __s2 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x7c54);
  lVar7 = FUN_009580b8();
  if (*(uint *)(lVar7 + 0x5450) < uVar2) {
    return;
  }
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
  FUN_00936778((byte *)(param_1 + 0x7c38),uVar5,FUN_00b34efc,FUN_00b34f00);
  return;
}




void thunk_FUN_00b34f04(long param_1)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  
  bVar3 = *(byte *)(param_1 + 0x7c38);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7c40);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x7c48);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7c39);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)(param_1 + 0x7c39);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *__s2) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        __s2 = __s2 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x7c54);
  lVar7 = FUN_009580b8();
  if (*(uint *)(lVar7 + 0x5450) < uVar2) {
    return;
  }
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
  FUN_00936798((byte *)(param_1 + 0x7c38),uVar5,FUN_00b34efc,FUN_00b34f00);
  return;
}




void FUN_00b34068(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDMOTTO_SUBMIT_ICE_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  FUN_00e705c8(&local_58,"[GUILD_MOTTO]");
  FUN_00e71248(&local_48,0,&local_58,param_1 + 0x7c18);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_EDIT_GUILDMOTTO_SUBMIT_TITLE",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(uVar2,&local_48,uVar3,uVar4,param_1,thunk_FUN_00b35024,0);
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




void FUN_00b34178(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_MESSAGE_SUBMIT_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&local_48,uVar3);
  thunk_FUN_00e7051c(&local_58,param_1 + 0x7c18);
  uVar2 = FUN_00e70b14(&local_58);
  if (100 < uVar2) {
    FUN_00e71810(&local_68,&local_58,0,100);
    FUN_00910394(&local_58,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00e705c8(&local_68,"...");
    FUN_00e70c34(&local_58,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  FUN_00e705c8(&local_68,"[GUILD_MESSAGE]");
  FUN_00e71248(&local_48,0,&local_68,&local_58);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILD_MESSAGE_SUBMIT_TITLE",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(uVar3,&local_48,uVar4,uVar5,param_1,thunk_FUN_00b35108,0);
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




void FUN_00b34310(long param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILDTYPE_SUBMIT_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&local_48,uVar3);
  FUN_00e705c8(&local_58,"[GUILD_TYPE]");
  pcVar1 = "MENU_PROFILE_GUILD_CREATE_TYPE_OPEN";
  if (*(int *)(param_1 + 0x7c50) != 0) {
    pcVar1 = "MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY";
  }
  uVar3 = FUN_00e6ce7c(pcVar1,0);
  FUN_00e71248(&local_48,0,&local_58,uVar3);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar3 = FUN_00e6ce7c("MENU_EDIT_GUILDTYPE_SUBMIT_TITLE",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(uVar3,&local_48,uVar4,uVar5,param_1,thunk_FUN_00b35178,0);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b34444(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x7c54);
  lVar3 = FUN_009580b8();
  if (*(uint *)(lVar3 + 0x5450) < uVar1) {
    uVar4 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
    uVar5 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar7 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
    FUN_00a9b94c(uVar4,uVar5,uVar6,uVar7,param_1,0,thunk_FUN_00a9bda0);
  }
  else {
    FUN_00e70510(&local_58);
    FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x7c54));
    uVar4 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_SUBMIT_ICE_DIALOG_TEXT",0);
    thunk_FUN_00e7051c(&local_68,uVar4);
    FUN_00e705c8(&local_78,"[USERTEAM_NAME]");
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
    uVar4 = FUN_00e6ce7c("MENU_EDIT_USERTEAMNAME_SUBMIT_TITLE",0);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    FUN_00a9b94c(uVar4,&local_68,uVar5,uVar6,param_1,thunk_FUN_00b34cb0,0);
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
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b34668(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x7c54);
  lVar3 = FUN_009580b8();
  if (*(uint *)(lVar3 + 0x5450) < uVar1) {
    uVar4 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
    uVar5 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar7 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
    FUN_00a9b94c(uVar4,uVar5,uVar6,uVar7,param_1,0,thunk_FUN_00a9bda0);
  }
  else {
    FUN_00e70510(&local_58);
    FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x7c54));
    uVar4 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_SUBMIT_ICE_DIALOG_TEXT",0);
    thunk_FUN_00e7051c(&local_68,uVar4);
    FUN_00e705c8(&local_78,"[USERTEAM_TAG]");
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
    uVar4 = FUN_00e6ce7c("MENU_EDIT_USERTEAMTAG_SUBMIT_TITLE",0);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    FUN_00a9b94c(uVar4,&local_68,uVar5,uVar6,param_1,thunk_FUN_00b34cb0,0);
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
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3488c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
switchD_00b348d8_caseD_1:
    FUN_00b33904(param_1);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x7c58)) {
  case 1:
    goto switchD_00b348d8_caseD_1;
  case 2:
    FUN_00b33c08(param_1);
    return;
  case 3:
    FUN_00b33e38(param_1);
    return;
  case 4:
    FUN_00b34068(param_1);
    return;
  case 5:
    FUN_00b34178(param_1);
    return;
  case 6:
    FUN_00b34310(param_1);
    return;
  case 7:
    FUN_00b34444(param_1);
    return;
  case 8:
    FUN_00b34668(param_1);
    return;
  default:
    return;
  }
}




void FUN_00b34958(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x23e0;
  uVar5 = FUN_00ce1f88(lVar1);
  lVar2 = param_1 + 0x7c18;
  FUN_00910394(lVar2,uVar5);
  if (*(int *)(param_1 + 0x7c58) == 4) {
    uVar4 = FUN_00e70b14(lVar2);
    if (0x10 < uVar4) {
      FUN_00e71810(&local_48,lVar2,0,0x10);
      FUN_00e705c8(&local_58,"...");
      FUN_00e70c34(&local_48,&local_58);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      FUN_00abc73c(lVar1,&local_48);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
    }
  }
  else {
    FUN_00abcf58(lVar1,1,param_1 + 0x7c28);
    uVar5 = FUN_00ce1f88(lVar1);
    uVar6 = FUN_00e70b88(uVar5,&DAT_03210450);
    if ((uVar6 & 1) != 0) {
      FUN_00abc788(lVar1);
    }
    lVar2 = param_1 + 0x40d8;
    uVar5 = FUN_00ce1f88(lVar1);
    FUN_00abcf38(lVar2,1,uVar5);
    uVar5 = FUN_00ce1f88(lVar2);
    uVar6 = FUN_00e70b88(uVar5,&DAT_03210450);
    if ((uVar6 & 1) != 0) {
      FUN_00abc788(lVar2);
    }
  }
  FUN_00b33790(param_1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b34ac4(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = "checkbox_filled";
  if (param_3 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x7720,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_3 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x79f8,pcVar1);
  *(int *)(param_1 + 0x7c50) = param_3;
  return;
}




void FUN_00b34b2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_140;
  undefined1 auStack_138 [40];
  long local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  undefined8 local_b0;
  undefined4 local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  undefined4 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_EDIT_NAME_RULES_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_00b26098(&local_140);
  thunk_FUN_00e7051c(&local_80,&local_90);
  FUN_008fcdb8(&local_70,&DAT_0320ffa8);
  local_58 = 1;
  local_54 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_80);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  local_110 = param_1 + 0x1b00;
  local_98 = 2;
  local_b0 = 0x447a00003f000000;
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_80,"editNameRulesInfo");
  FUN_009badc0(uVar2,&local_80,&local_140);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
  }
  local_140 = &PTR_FUN_027de7f0;
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  FUN_009c8464(auStack_138,1);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b34cb0(long param_1)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  void *__s1;
  
  uVar5 = FUN_0093dbe8();
  if ((uVar5 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x7c38);
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x7c40);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x7c48);
      if ((bVar3 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x7c39);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (__n == 0) {
          return;
        }
        pcVar8 = (char *)(param_1 + 0x7c39);
        lVar9 = -(ulong)(bVar3 >> 1);
        while (*pcVar8 == *__s2) {
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
          if (lVar9 == 0) {
            return;
          }
        }
      }
      else {
        if (__n == 0) {
          return;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) {
          return;
        }
      }
    }
    uVar2 = *(uint *)(param_1 + 0x7c54);
    lVar9 = FUN_009580b8();
    if (*(uint *)(lVar9 + 0x5450) < uVar2) {
      return;
    }
  }
  uVar6 = FUN_009580b8();
  uVar7 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
  FUN_0095fef8(uVar6,param_1 + 0x7c38,uVar7);
  return;
}




void FUN_00b34ddc(long param_1)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  
  bVar3 = *(byte *)(param_1 + 0x7c38);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7c40);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x7c48);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7c39);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)(param_1 + 0x7c39);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *__s2) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        __s2 = __s2 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x7c54);
  lVar7 = FUN_009580b8();
  if (*(uint *)(lVar7 + 0x5450) < uVar2) {
    return;
  }
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
  FUN_00936778((byte *)(param_1 + 0x7c38),uVar5,FUN_00b34efc,FUN_00b34f00);
  return;
}




void FUN_00b34efc(void)

{
  return;
}




void FUN_00b34f00(void)

{
  return;
}




void FUN_00b34f04(long param_1)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  
  bVar3 = *(byte *)(param_1 + 0x7c38);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7c40);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x7c48);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7c39);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)(param_1 + 0x7c39);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *__s2) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        __s2 = __s2 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x7c54);
  lVar7 = FUN_009580b8();
  if (*(uint *)(lVar7 + 0x5450) < uVar2) {
    return;
  }
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2750) & 1) * 0x130 + 0x25c0);
  FUN_00936798((byte *)(param_1 + 0x7c38),uVar5,FUN_00b34efc,FUN_00b34f00);
  return;
}

