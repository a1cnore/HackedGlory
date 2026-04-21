// functions/00bb6 — 27 functions
#include "libGameKindred.h"




void thunk_FUN_00bb6174(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_00f023dc(param_1 + 0x19c08);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x1c070), (uVar1 & 1) == 0)) {
    lVar2 = FUN_009580b8();
    if (*(char *)(lVar2 + 0x568c) != '\0') {
      uVar3 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
      FUN_00a9b94c(uVar3,uVar4,uVar5,uVar6,param_1,0,FUN_00bb6264);
      return;
    }
    FUN_00bb43fc(param_1,1);
    return;
  }
  return;
}




void thunk_FUN_00bb62d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x1eb88;
  uVar2 = FUN_00ce1f88(param_1 + 0x1ce90);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00bb4aa8(param_1);
  return;
}




void thunk_FUN_00bb633c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x227d8;
  uVar2 = FUN_00ce1f88(param_1 + 0x20ae0);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00bb4aa8(param_1);
  return;
}




void thunk_FUN_00bb63a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f023dc(param_1 + 0x19c08);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x1c070), (uVar1 & 1) == 0)) {
    FUN_00bb43fc(param_1,0);
    return;
  }
  return;
}




void thunk_FUN_00bb6798(long param_1)

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
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_TEAM_CREATION_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_140,uVar2);
  do {
    FUN_00e705c8(&uStack_80,"[SEASON_NAME]");
    FUN_00cb488c(&uStack_150,0,0,0);
    uVar3 = FUN_00e71248(&uStack_140,0,&uStack_80,&uStack_150);
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
  } while ((uVar3 & 1) != 0);
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
  lStack_100 = param_1 + 0x2a290;
  uStack_88 = 2;
  uStack_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  uStack_9c = 0x447a0000;
  if ((uVar3 & 1) == 0) {
    uStack_9c = 0x44480000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&uStack_e0,uVar2);
  pcStack_110 = FUN_00bb69dc;
  lStack_118 = param_1;
  FUN_008fa54c(&uStack_80,"teamProfileSeasonLabel");
  FUN_00b28094(param_1 + 0x2a668,&uStack_80,&ppuStack_130);
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




void thunk_FUN_00bb6c44(undefined8 param_1)

{
  long lVar1;
  undefined **appuStack_128 [5];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  FUN_00e84dac(appuStack_128);
  appuStack_128[0] = &PTR_FUN_027bbb08;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  memset(auStack_100,0,0x48);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_008fce60(auStack_100,&DAT_0320ffa8);
  FUN_008fce60(auStack_e8,&DAT_0320ffa8);
  FUN_008fce60(auStack_d0,&DAT_0320ffa8);
  FUN_00bb40cc(param_1,appuStack_128);
  FUN_0094f104(appuStack_128);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb6000(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x404);
  if ((param_2 & 1) == 0) {
    puVar2 = (uint *)(param_1 + 0x404);
  }
  else {
    *(uint *)(param_1 + 0x404) = uVar1 | 4;
    *(uint *)(param_1 + 0x1c0f4) = *(uint *)(param_1 + 0x1c0f4) & 0xfffffffb;
    puVar2 = (uint *)(param_1 + 0x19c8c);
    uVar1 = *puVar2;
  }
  *puVar2 = uVar1 & 0xfffffffb;
  return;
}




void FUN_00bb6048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x19b0);
  FUN_00bb6d18();
  local_50 = pvVar2;
  FUN_00f0d75c((long)pvVar2 + 0x178,param_2);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_INVITE_FROM_LABEL",0);
  thunk_FUN_00e7051c(&local_60,uVar3);
  FUN_00e705c8(&local_70,"[HANDLE]");
  FUN_00e71248(&local_60,0,&local_70,param_3);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
    pvVar2 = local_50;
  }
  FUN_00f0d75c((long)pvVar2 + 0x2a8,&local_60);
  FUN_008fce60((long)pvVar2 + 0x1998,param_4);
  FUN_00ed026c(param_1 + 0x19d18,pvVar2,1);
  FUN_00bb46a0(param_1 + 0x1be30,&local_50);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb6174(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_00f023dc(param_1 + 0x19c08);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x1c070), (uVar1 & 1) == 0)) {
    lVar2 = FUN_009580b8();
    if (*(char *)(lVar2 + 0x568c) != '\0') {
      uVar3 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
      FUN_00a9b94c(uVar3,uVar4,uVar5,uVar6,param_1,0,FUN_00bb6264);
      return;
    }
    FUN_00bb43fc(param_1,1);
    return;
  }
  return;
}




void FUN_00bb6264(undefined8 param_1)

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




void FUN_00bb62d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x1eb88;
  uVar2 = FUN_00ce1f88(param_1 + 0x1ce90);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00bb4aa8(param_1);
  return;
}




void FUN_00bb633c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x227d8;
  uVar2 = FUN_00ce1f88(param_1 + 0x20ae0);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00bb4aa8(param_1);
  return;
}




void FUN_00bb63a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f023dc(param_1 + 0x19c08);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x1c070), (uVar1 & 1) == 0)) {
    FUN_00bb43fc(param_1,0);
    return;
  }
  return;
}




void FUN_00bb6400(long param_1,undefined8 param_2,int param_3)

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
  if (*(char *)(param_1 + 0x2b8ec) != '\0') goto LAB_00bb64bc;
  lVar3 = FUN_009580b8();
  if (*(char *)(lVar3 + 0x568c) == '\0') {
    if (param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x2b8e8);
      lVar3 = FUN_009580b8();
      if (*(uint *)(lVar3 + 0x5454) < uVar1) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT",0);
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar4,uVar5,uVar6,0,0);
        goto LAB_00bb64bc;
      }
      FUN_00e70510(&local_58);
      FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x2b8e8));
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_GLORY_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_68,uVar4);
      FUN_00e705c8(&local_78,"[COST]");
      FUN_00e71248(&local_68,0,&local_78,&local_58);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_TITLE",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      pcVar8 = thunk_FUN_00bb6b70;
    }
    else {
      if (param_3 != 0) goto LAB_00bb64bc;
      uVar1 = *(uint *)(param_1 + 0x2b8e4);
      lVar3 = FUN_009580b8();
      if (*(uint *)(lVar3 + 0x5450) < uVar1) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT",0);
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar7 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
        pcVar8 = thunk_FUN_00a9bda0;
        goto LAB_00bb64a4;
      }
      FUN_00e70510(&local_58);
      FUN_00e70e18(&local_58,&DAT_01bb6d43,*(uint *)(param_1 + 0x2b8e4));
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_ICE_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_68,uVar4);
      FUN_00e705c8(&local_78,"[COST]");
      FUN_00e71248(&local_68,0,&local_78,&local_58);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_CREATE_TITLE",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      pcVar8 = thunk_FUN_00bb6a9c;
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
    uVar4 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar7 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
    pcVar8 = FUN_00bb6264;
LAB_00bb64a4:
    FUN_00a9b94c(uVar4,uVar5,uVar6,uVar7,param_1,0,pcVar8);
  }
LAB_00bb64bc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bb6a9c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2b8e4);
  lVar2 = FUN_009580b8();
  if (*(uint *)(lVar2 + 0x5450) < uVar1) {
    return;
  }
  uVar3 = FUN_009580b8();
  uVar4 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1d200) & 1) * 0x130 + 0x1d070);
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x20e50) & 1) * 0x130 + 0x20cc0);
  FUN_009635c8(uVar3,param_1 + 0x2b8b0,uVar4,uVar5);
  return;
}




void thunk_FUN_00bb6b70(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2b8e8);
  lVar2 = FUN_009580b8();
  if (*(uint *)(lVar2 + 0x5454) < uVar1) {
    return;
  }
  uVar3 = FUN_009580b8();
  uVar4 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1d200) & 1) * 0x130 + 0x1d070);
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x20e50) & 1) * 0x130 + 0x20cc0);
  FUN_009635c8(uVar3,param_1 + 0x2b8c8,uVar4,uVar5);
  return;
}




void FUN_00bb6798(long param_1)

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
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_TEAM_CREATION_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_140,uVar2);
  do {
    FUN_00e705c8(&local_80,"[SEASON_NAME]");
    FUN_00cb488c(&local_150,0,0,0);
    uVar3 = FUN_00e71248(&local_140,0,&local_80,&local_150);
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
  } while ((uVar3 & 1) != 0);
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
  local_100 = param_1 + 0x2a290;
  local_88 = 2;
  local_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  local_9c = 0x447a0000;
  if ((uVar3 & 1) == 0) {
    local_9c = 0x44480000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&local_e0,uVar2);
  pcStack_110 = FUN_00bb69dc;
  local_118 = param_1;
  FUN_008fa54c(&local_80,"teamProfileSeasonLabel");
  FUN_00b28094(param_1 + 0x2a668,&local_80,&local_130);
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




void FUN_00bb69dc(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00bb6a04(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00bb6a2c(undefined8 param_1)

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




void FUN_00bb6a9c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2b8e4);
  lVar2 = FUN_009580b8();
  if (*(uint *)(lVar2 + 0x5450) < uVar1) {
    return;
  }
  uVar3 = FUN_009580b8();
  uVar4 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1d200) & 1) * 0x130 + 0x1d070);
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x20e50) & 1) * 0x130 + 0x20cc0);
  FUN_009635c8(uVar3,param_1 + 0x2b8b0,uVar4,uVar5);
  return;
}




void FUN_00bb6b70(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2b8e8);
  lVar2 = FUN_009580b8();
  if (*(uint *)(lVar2 + 0x5454) < uVar1) {
    return;
  }
  uVar3 = FUN_009580b8();
  uVar4 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1d200) & 1) * 0x130 + 0x1d070);
  uVar5 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x20e50) & 1) * 0x130 + 0x20cc0);
  FUN_009635c8(uVar3,param_1 + 0x2b8c8,uVar4,uVar5);
  return;
}




void FUN_00bb6c44(undefined8 param_1)

{
  long lVar1;
  undefined **local_128 [5];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [64];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e84dac(local_128);
  local_128[0] = &PTR_FUN_027bbb08;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  memset(auStack_100,0,0x48);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_008fce60(auStack_100,&DAT_0320ffa8);
  FUN_008fce60(auStack_e8,&DAT_0320ffa8);
  FUN_008fce60(auStack_d0,&DAT_0320ffa8);
  FUN_00bb40cc(param_1,local_128);
  FUN_0094f104(local_128);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb6d18(long *param_1)

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
  *param_1 = (long)&PTR_FUN_027ea890;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x55;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x7b;
  FUN_00ab6c24(plVar4,0);
  param_1[0x334] = 0;
  param_1[0x333] = 0;
  param_1[0x335] = 0;
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
  uVar6 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1fc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar3,*ppuVar5);
  uVar6 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar6 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x32c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar3);
  }
  uVar9 = FUN_00e6ce7c("MENU_PROFILE_GUILD_INVITE_VIEW",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar4,0,uVar9,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_60 = DAT_03210c64;
  local_88 = FUN_00bb6f94;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x7c,&local_88);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb6f94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_0095e34c(uVar1,param_1 + 0x1998,1);
  return;
}




void FUN_00bb6fc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_0095e34c(uVar1,param_1 + 0x1998,1);
  return;
}




void FUN_00bb6fec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  ulong uVar8;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027ea990;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x55;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x7b;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x99;
  FUN_00f0e4a8(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  uVar8 = FUN_0092ea9c();
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar7 = *(uint *)((long)param_1 + 0x45c);
  if ((uVar7 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x45c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0xc80;
    FUN_0091ada4(plVar4);
  }
  uVar7 = *(uint *)((long)param_1 + 0x54c);
  if ((uVar7 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x54c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0xc80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_crown");
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar8 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  FUN_00f0d92c(plVar2,*ppuVar6,&DAT_01bee7fa);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f;
    FUN_0091ada4(plVar2);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar8 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar3,*ppuVar6,&DAT_01bee7fa);
  uVar7 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar7 & 0x7f80) == 0x4c80) {
    return;
  }
  *(uint *)((long)param_1 + 0x32c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
  FUN_0091ada4(plVar3);
  return;
}

