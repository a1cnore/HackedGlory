// functions/00ba9 — 21 functions
#include "libGameKindred.h"




void thunk_FUN_00ba90bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f023dc(param_1 + 0x656a8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x694c0), (uVar1 & 1) == 0)) {
    FUN_00ba6e60(param_1,0);
    return;
  }
  return;
}




void thunk_FUN_00ba94ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_150;
  void *pvStack_148;
  undefined8 uStack_140;
  void *pvStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [16];
  long lStack_118;
  code *pcStack_110;
  long lStack_100;
  undefined8 uStack_e0;
  void *pvStack_d8;
  byte bStack_d0;
  void *pvStack_c0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_88;
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
  FUN_00b26098(&ppuStack_130);
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_GUILD_CREATION_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_140,uVar2);
  FUN_00e705c8(&uStack_80,"[SEASON_NAME]");
  FUN_00cb488c(&uStack_150,0,0,0);
  FUN_00e71248(&uStack_140,0,&uStack_80,&uStack_150);
  if (pvStack_148 != (void *)0x0) {
    operator_delete__(pvStack_148);
    uStack_150 = 0;
    pvStack_148 = (void *)0x0;
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&uStack_80,&uStack_140);
  FUN_008fcdb8(&bStack_70,&DAT_0320ffa8);
  uStack_58 = 1;
  uStack_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&uStack_80);
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  lStack_100 = param_1 + 0x79e48;
  uStack_88 = 2;
  uStack_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  uStack_9c = 0x442f0000;
  if ((uVar3 & 1) == 0) {
    uStack_9c = 0x43fa0000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&uStack_e0,uVar2);
  pcStack_110 = FUN_00ba96e0;
  lStack_118 = param_1;
  FUN_008fa54c(&uStack_80,"guildProfileSeasonLabel");
  FUN_00b28094(param_1 + 0x7a220,&uStack_80,&ppuStack_130);
  if ((uStack_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,bStack_70));
  }
  if (pvStack_138 != (void *)0x0) {
    operator_delete__(pvStack_138);
    uStack_140 = 0;
    pvStack_138 = (void *)0x0;
  }
  ppuStack_130 = &PTR_FUN_027de7f0;
  if ((bStack_d0 & 1) != 0) {
    operator_delete(pvStack_c0);
  }
  if (pvStack_d8 != (void *)0x0) {
    operator_delete__(pvStack_d8);
    uStack_e0 = 0;
    pvStack_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba9040(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  FUN_00f0490c(param_2);
  pcVar1 = "checkbox_filled";
  if (param_3 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x73b90,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_3 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0x73e68,pcVar1);
  *(int *)(param_1 + 0x7a308) = param_3;
  return;
}




void FUN_00ba90bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f023dc(param_1 + 0x656a8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x694c0), (uVar1 & 1) == 0)) {
    FUN_00ba6e60(param_1,0);
    return;
  }
  return;
}




void FUN_00ba9114(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x7a35c) != '\0') goto LAB_00ba91d0;
  lVar3 = FUN_009580b8();
  if (*(char *)(lVar3 + 0x568c) == '\0') {
    if (param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x7a358);
      lVar3 = FUN_009580b8();
      if (*(uint *)(lVar3 + 0x5454) < uVar1) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT",0);
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar4,uVar5,uVar6,0,0);
        goto LAB_00ba91d0;
      }
      FUN_00e70510(&local_58);
      FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x7a358));
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_GLORY_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_68,uVar4);
      FUN_00e705c8(&local_78,"[COST]");
      FUN_00e71248(&local_68,0,&local_78,&local_58);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TITLE",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      pcVar8 = thunk_FUN_00ba9904;
    }
    else {
      if (param_3 != 0) goto LAB_00ba91d0;
      uVar1 = *(uint *)(param_1 + 0x7a354);
      lVar3 = FUN_009580b8();
      if (*(uint *)(lVar3 + 0x5450) < uVar1) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT",0);
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar7 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
        pcVar8 = thunk_FUN_00a9bda0;
        goto LAB_00ba91b8;
      }
      FUN_00e70510(&local_58);
      FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x7a354));
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_ICE_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_68,uVar4);
      FUN_00e705c8(&local_78,"[COST]");
      FUN_00e71248(&local_68,0,&local_78,&local_58);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TITLE",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      pcVar8 = thunk_FUN_00ba9778;
    }
    FUN_00a9b94c(uVar4,&local_68,uVar5,uVar6,param_1,pcVar8,0);
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
  else {
    uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TITLE",0);
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TEXT",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar7 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
    pcVar8 = FUN_00ba8df0;
LAB_00ba91b8:
    FUN_00a9b94c(uVar4,uVar5,uVar6,uVar7,param_1,0,pcVar8);
  }
LAB_00ba91d0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ba9778(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *__s2;
  byte *pbVar9;
  long lVar10;
  void *__s1;
  
  pbVar1 = (byte *)(param_1 + 0x7a310);
  bVar4 = *pbVar1;
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7a318);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x7a320);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7a311);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar10 = -(ulong)(bVar4 >> 1);
      pbVar9 = pbVar1;
      while (pbVar9 = pbVar9 + 1, *pbVar9 == *__s2) {
        lVar10 = lVar10 + 1;
        __s2 = __s2 + 1;
        if (lVar10 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x7a354);
  lVar10 = FUN_009580b8();
  if (*(uint *)(lVar10 + 0x5450) < uVar3) {
    return;
  }
  uVar6 = FUN_009580b8();
  uVar7 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6a650) & 1) * 0x130 + 0x6a4c0);
  uVar8 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6e2a0) & 1) * 0x130 + 0x6e110);
  FUN_00962cb8(uVar6,pbVar1,uVar7,uVar8,param_1 + 0x7a340,*(undefined4 *)(param_1 + 0x7a308));
  return;
}




void thunk_FUN_00ba9904(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *__s2;
  byte *pbVar9;
  long lVar10;
  void *__s1;
  
  pbVar1 = (byte *)(param_1 + 0x7a328);
  bVar4 = *pbVar1;
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7a330);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x7a338);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7a329);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar10 = -(ulong)(bVar4 >> 1);
      pbVar9 = pbVar1;
      while (pbVar9 = pbVar9 + 1, *pbVar9 == *__s2) {
        lVar10 = lVar10 + 1;
        __s2 = __s2 + 1;
        if (lVar10 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x7a358);
  lVar10 = FUN_009580b8();
  if (*(uint *)(lVar10 + 0x5454) < uVar3) {
    return;
  }
  uVar6 = FUN_009580b8();
  uVar7 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6a650) & 1) * 0x130 + 0x6a4c0);
  uVar8 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6e2a0) & 1) * 0x130 + 0x6e110);
  FUN_00962cb8(uVar6,pbVar1,uVar7,uVar8,param_1 + 0x7a340,*(undefined4 *)(param_1 + 0x7a308));
  return;
}




void FUN_00ba94ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined **local_130;
  undefined1 auStack_128 [16];
  long local_118;
  code *pcStack_110;
  long local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88;
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
  FUN_00b26098(&local_130);
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_GUILD_CREATION_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_140,uVar2);
  FUN_00e705c8(&local_80,"[SEASON_NAME]");
  FUN_00cb488c(&local_150,0,0,0);
  FUN_00e71248(&local_140,0,&local_80,&local_150);
  if (local_148 != (void *)0x0) {
    operator_delete__(local_148);
    local_150 = 0;
    local_148 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_80,&local_140);
  FUN_008fcdb8(&local_70,&DAT_0320ffa8);
  local_58 = 1;
  local_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&local_80);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  local_100 = param_1 + 0x79e48;
  local_88 = 2;
  local_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  local_9c = 0x442f0000;
  if ((uVar3 & 1) == 0) {
    local_9c = 0x43fa0000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&local_e0,uVar2);
  pcStack_110 = FUN_00ba96e0;
  local_118 = param_1;
  FUN_008fa54c(&local_80,"guildProfileSeasonLabel");
  FUN_00b28094(param_1 + 0x7a220,&local_80,&local_130);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
  }
  if (local_138 != (void *)0x0) {
    operator_delete__(local_138);
    local_140 = 0;
    local_138 = (void *)0x0;
  }
  local_130 = &PTR_FUN_027de7f0;
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba96e0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00ba9708(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133758,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba9778(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *__s2;
  byte *pbVar9;
  long lVar10;
  void *__s1;
  
  pbVar1 = (byte *)(param_1 + 0x7a310);
  bVar4 = *pbVar1;
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7a318);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x7a320);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7a311);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar10 = -(ulong)(bVar4 >> 1);
      pbVar9 = pbVar1;
      while (pbVar9 = pbVar9 + 1, *pbVar9 == *__s2) {
        lVar10 = lVar10 + 1;
        __s2 = __s2 + 1;
        if (lVar10 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x7a354);
  lVar10 = FUN_009580b8();
  if (*(uint *)(lVar10 + 0x5450) < uVar3) {
    return;
  }
  uVar6 = FUN_009580b8();
  uVar7 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6a650) & 1) * 0x130 + 0x6a4c0);
  uVar8 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6e2a0) & 1) * 0x130 + 0x6e110);
  FUN_00962cb8(uVar6,pbVar1,uVar7,uVar8,param_1 + 0x7a340,*(undefined4 *)(param_1 + 0x7a308));
  return;
}




void FUN_00ba9904(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *__s2;
  byte *pbVar9;
  long lVar10;
  void *__s1;
  
  pbVar1 = (byte *)(param_1 + 0x7a328);
  bVar4 = *pbVar1;
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x7a330);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x7a338);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x7a329);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar10 = -(ulong)(bVar4 >> 1);
      pbVar9 = pbVar1;
      while (pbVar9 = pbVar9 + 1, *pbVar9 == *__s2) {
        lVar10 = lVar10 + 1;
        __s2 = __s2 + 1;
        if (lVar10 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x7a358);
  lVar10 = FUN_009580b8();
  if (*(uint *)(lVar10 + 0x5454) < uVar3) {
    return;
  }
  uVar6 = FUN_009580b8();
  uVar7 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6a650) & 1) * 0x130 + 0x6a4c0);
  uVar8 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6e2a0) & 1) * 0x130 + 0x6e110);
  FUN_00962cb8(uVar6,pbVar1,uVar7,uVar8,param_1 + 0x7a340,*(undefined4 *)(param_1 + 0x7a308));
  return;
}




void FUN_00ba9a90(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00ba9ab8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e95d0;
  FUN_00f0e4a8(plVar1);
  FUN_00f0e4a8(param_1 + 0x2f);
  plVar2 = param_1 + 0x4d;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x73;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x99;
  FUN_00ab6c24(plVar4,0);
  param_1[0x352] = 0;
  param_1[0x351] = 0;
  param_1[0x353] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  uVar8 = FUN_0092ea9c();
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar6 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar6 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x10c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x1980;
    FUN_0091ada4(plVar1);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  }
  FUN_00f0d378(plVar2,*ppuVar5);
  uVar6 = *(uint *)((long)param_1 + 0x2ec);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar3,*ppuVar5);
  uVar6 = *(uint *)((long)param_1 + 0x41c);
  if ((uVar6 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x41c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar3);
  }
  uVar9 = FUN_00e6ce7c("MENU_PROFILE_GUILD_INVITE_VIEW",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar4,0,uVar9,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_60 = DAT_03210c64;
  local_88 = FUN_00ba9d48;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x9a,&local_88);
  FUN_00b0914c(plVar4,1);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba9d48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_0095e21c(uVar1,param_1 + 0x1a88,1);
  return;
}




void FUN_00ba9d74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_0095e21c(uVar1,param_1 + 0x1a88,1);
  return;
}




void FUN_00ba9da0(void *param_1)

{
  FUN_00ba4fb4();
  operator_delete(param_1);
  return;
}




void FUN_00ba9dc4(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027e96d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00ba9e08(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xba9e0c);
  (*pcVar1)();
}




void FUN_00ba9e0c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00ba9e8c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  float *pfVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  float fVar22;
  undefined8 uVar23;
  code *local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long local_a0;
  
  lVar21 = tpidr_el0;
  local_a0 = *(long *)(lVar21 + 0x28);
  FUN_00b8e630();
  FUN_00948cd8(param_1 + 0x6d);
  plVar1 = param_1 + 0x70;
  *param_1 = (long)&PTR_FUN_027e9720;
  param_1[0x6d] = (long)&PTR_FUN_027e98a8;
  FUN_00f11234(plVar1);
  FUN_00f0e4a8();
  plVar2 = param_1 + 0xc2;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0xe0;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0xfe;
  FUN_00f017e8();
  param_1[0xfe] = (long)&PTR_FUN_027c1f80;
  FUN_00ad77f8();
  plVar5 = param_1 + 0xe31;
  FUN_00ab6c24(plVar5,0);
  FUN_00f13ca4();
  plVar6 = param_1 + 0x1100;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x111e;
  FUN_00f017e8(plVar7);
  plVar8 = param_1 + 0x112f;
  *plVar7 = (long)&PTR_FUN_027c1f80;
  FUN_00f0bdbc(plVar8,0);
  plVar9 = param_1 + 0x1148;
  *plVar8 = (long)&PTR_FUN_027c3260;
  FUN_00f0d160();
  plVar10 = param_1 + 0x116e;
  FUN_00ab6c24(plVar10,0);
  plVar11 = param_1 + 0x1426;
  FUN_00aba378(plVar11,0);
  plVar12 = param_1 + 0x18b4;
  FUN_00aba378(plVar12,0);
  plVar13 = param_1 + 0x1d42;
  FUN_00f017e8(plVar13);
  *plVar13 = (long)&PTR_FUN_027c1f80;
  FUN_00ad61b8();
  plVar14 = param_1 + 0x270b;
  FUN_00abaee8(plVar14,0);
  plVar15 = param_1 + 0x27ca;
  FUN_00abaee8(plVar15,0);
  plVar16 = param_1 + 0x2889;
  FUN_00f11234(plVar16);
  plVar17 = param_1 + 0x28bd;
  FUN_00ecfd6c(plVar17,0);
  FUN_00abaee8(param_1 + 0x2964,0);
  FUN_00b4bd84();
  FUN_00b4d92c();
  *(undefined4 *)(param_1 + 0x3ff7) = 0;
  *(undefined1 *)((long)param_1 + 0x1ffbc) = 0;
  param_1[0x3ff8] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3ff9) = 0;
  param_1[0x3ffa] = 0;
  param_1[0x3ffb] = param_2;
  FUN_00f01a4c(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0xa4,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x10e9,1);
  FUN_00f023ec(param_1 + 0x10e9,plVar7,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar8,plVar10,1);
  FUN_00f023ec(plVar8,plVar11,1);
  FUN_00f023ec(plVar8,plVar12,1);
  FUN_00f023ec(plVar7,plVar13,1);
  FUN_00f023ec(plVar13,param_1 + 0x1d53,1);
  FUN_00f023ec(plVar13,plVar15,1);
  FUN_00f023ec(plVar13,plVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar16,1);
  FUN_00f023ec(plVar16,plVar17,1);
  FUN_00ed026c(plVar17,param_1 + 0x397c,1);
  FUN_00ed026c(plVar17,param_1 + 0x2a23,1);
  FUN_00f023ec(plVar16,param_1 + 0x2964,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,param_1 + 0x10f,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f112f0(plVar1,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar19 = *(uint *)((long)param_1 + 0x694);
  if ((uVar19 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x694) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0xfb) = *(byte *)(param_1 + 0xfb) | 1;
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x111b) = *(byte *)(param_1 + 0x111b) | 2;
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar19 = *(uint *)((long)param_1 + 0x8884);
  if ((uVar19 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x8884) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6600;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  uVar23 = FUN_00e6ce7c("MENU_MARKET_FEATURED_GET_HERO",0);
  FUN_00f0d75c(plVar9,uVar23);
  FUN_00ab75d0(0x42700000,0x41200000,0x447a0000,plVar11);
  FUN_00ab7628(0x42f00000,plVar11);
  uVar20 = DAT_03210c64;
  local_d0 = thunk_FUN_00bacbb0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar20;
  FUN_009693a0(param_1 + 0x1427,&local_d0);
  FUN_00b09144(0xbf800000,plVar11);
  FUN_00ab95f4(0,plVar11);
  FUN_00aba748(plVar11,"glory_icon_small");
  FUN_00f0d378(param_1 + 0x150a,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0da30(param_1 + 0x150a,1);
  FUN_00ab7638(0x40200000,plVar11);
  FUN_00ab71fc(plVar11,1);
  FUN_00ab75d0(0x42700000,0x41200000,0x447a0000,plVar12);
  FUN_00ab7628(0x42f00000,plVar12);
  local_a8 = DAT_03210c90;
  local_d0 = thunk_FUN_00bad048;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 0x18b5,&local_d0);
  FUN_00b09144(0xbf800000,plVar12);
  FUN_00aba748(plVar12,"ice_icon_small");
  FUN_00f0d378(param_1 + 0x1998,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0da30(param_1 + 0x1998,1);
  FUN_00ab7638(0x4019999a,plVar12);
  FUN_00ab71fc(plVar12,1);
  uVar23 = FUN_00e6ce7c("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  FUN_00ab703c(0x42700000,0x42c80000,0x447a0000,plVar10,0,uVar23,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_d0 = thunk_FUN_00bad254;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar20;
  FUN_009693a0(param_1 + 0x116f,&local_d0);
  pfVar18 = (float *)(param_1 + 0x1d5c);
  if ((*pfVar18 != 1.33) || (*(float *)((long)param_1 + 0xeae4) != 1.33)) {
    pfVar18[0] = 1.33;
    pfVar18[1] = 1.33;
    FUN_0091ada4(param_1 + 0x1d53);
  }
  local_a8 = FUN_00f048a4("UI::EVENT_HERO_ABILITY_SELECT");
  local_d0 = FUN_00baa9c0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 0x1d54,&local_d0);
  fVar22 = DAT_02be3668;
  FUN_00f0e578(param_1 + 0x2865,"circle_button_lore");
  pfVar18 = (float *)(param_1 + 0x286e);
  if ((*pfVar18 != 1.3) || (*(float *)((long)param_1 + 0x14374) != 1.3)) {
    pfVar18[0] = 1.3;
    pfVar18[1] = 1.3;
    FUN_0091ada4(param_1 + 0x2865);
  }
  local_d0 = thunk_FUN_00bad30c;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar20;
  FUN_009693a0(param_1 + 0x27cb,&local_d0);
  if ((*(float *)(param_1 + 0x27d3) != fVar22) || (*(float *)((long)param_1 + 0x13e9c) != fVar22)) {
    *(float *)(param_1 + 0x27d3) = fVar22;
    *(float *)((long)param_1 + 0x13e9c) = fVar22;
    FUN_0091ada4(plVar15);
  }
  param_1[0x27d5] = -0x3effffff3f000000;
  FUN_00f0e578(param_1 + 0x27a6,"circle_button_vgf");
  local_d0 = thunk_FUN_00bad3bc;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar20;
  FUN_009693a0(param_1 + 0x270c,&local_d0);
  if ((*(float *)(param_1 + 0x2714) != fVar22) || (*(float *)((long)param_1 + 0x138a4) != fVar22)) {
    *(float *)(param_1 + 0x2714) = fVar22;
    *(float *)((long)param_1 + 0x138a4) = fVar22;
    FUN_0091ada4(plVar14);
  }
  param_1[0x2716] = -0x3effffff3f000000;
  *(uint *)((long)param_1 + 0x1519c) = *(uint *)((long)param_1 + 0x1519c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1cc64) = *(uint *)((long)param_1 + 0x1cc64) & 0xfffffffb;
  FUN_00f112f0(plVar16,1);
  FUN_00ed0680(plVar17,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar17,0,1);
  FUN_00f0e578(param_1 + 0x29ff,"circle_button_x");
  *(uint *)((long)param_1 + 0x14ba4) = *(uint *)((long)param_1 + 0x14ba4) & 0xfffffffb;
  local_d0 = FUN_00baa9d0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar20;
  FUN_009693a0(param_1 + 0x2965,&local_d0);
  uVar23 = FUN_00e6ce7c("BUTTON_WATCH_SPOTLIGHT",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x447a0000,plVar5,0,uVar23,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_d0 = thunk_FUN_00bad46c;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar20;
  FUN_009693a0(param_1 + 0xe32,&local_d0);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar21 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

