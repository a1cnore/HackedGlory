// functions/00b41 — 20 functions
#include "libGameKindred.h"




void thunk_FUN_00b41400(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_NAME");
    FUN_00f048e0(auStack_48,uVar2,param_1);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b41478(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_TAG");
    FUN_00f048e0(auStack_48,uVar2,param_1);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b4181c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_160;
  void *pvStack_158;
  undefined8 uStack_150;
  void *pvStack_148;
  undefined **ppuStack_140;
  undefined1 auStack_138 [40];
  long lStack_110;
  undefined8 uStack_f0;
  void *pvStack_e8;
  byte bStack_e0;
  void *pvStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_98;
  ulong uStack_90;
  void *pvStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  void *pvStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&ppuStack_140);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_INFO_TITLE",0);
  thunk_FUN_00e7051c(&uStack_90,uVar2);
  FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
  uStack_68 = 0;
  uStack_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&uStack_90);
  if ((bStack_80 & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_INFO_SEASON",0);
  thunk_FUN_00e7051c(&uStack_90,uVar2);
  FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
  uStack_68 = 1;
  uStack_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&uStack_90);
  if ((bStack_80 & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_INFO_LEVELING",0);
  thunk_FUN_00e7051c(&uStack_150,uVar2);
  FUN_00e70510(&uStack_160);
  FUN_00e70e18(&uStack_160,&DAT_01bb6d43,0x32);
  FUN_00e705c8(&uStack_90,"[MAX_GUILD_MEMBERS]");
  FUN_00e71248(&uStack_150,0,&uStack_90,&uStack_160);
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&uStack_90,&uStack_150);
  FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
  uStack_68 = 1;
  uStack_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&uStack_90);
  if ((bStack_80 & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  lStack_110 = param_1 + 0x2be8;
  uStack_98 = 3;
  uStack_b0 = 0x3f19999a;
  uVar3 = FUN_0092ea9c();
  uStack_ac = 0x44548000;
  if ((uVar3 & 1) == 0) {
    uStack_ac = 0x442f0000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&uStack_90,"guildInfo");
  FUN_009badc0(uVar2,&uStack_90,&ppuStack_140);
  if ((uStack_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,bStack_80));
  }
  if (pvStack_158 != (void *)0x0) {
    operator_delete__(pvStack_158);
    uStack_160 = 0;
    pvStack_158 = (void *)0x0;
  }
  if (pvStack_148 != (void *)0x0) {
    operator_delete__(pvStack_148);
    uStack_150 = 0;
    pvStack_148 = (void *)0x0;
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
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b41fe4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00b433e0();
  if ((uVar4 & 1) != 0) {
    FUN_009367b8(FUN_00b43620,FUN_00b436cc);
    uVar5 = FUN_009b8d90();
    FUN_008fa54c(abStack_50,"guildChest");
    bVar2 = *(byte *)(param_1 + 0x5430);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x5438);
    }
    pbVar1 = (byte *)(param_1 + 0x54e0);
    if (uVar4 != 0) {
      pbVar1 = (byte *)(param_1 + 0x5430);
    }
    FUN_009bb728(uVar5,abStack_50,pbVar1);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b41fe4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00b433e0();
  if ((uVar4 & 1) != 0) {
    FUN_009367b8(FUN_00b43620,FUN_00b436cc);
    uVar5 = FUN_009b8d90();
    FUN_008fa54c(abStack_50,"guildChest");
    bVar2 = *(byte *)(param_1 + 0x5430);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x5438);
    }
    pbVar1 = (byte *)(param_1 + 0x54e0);
    if (uVar4 != 0) {
      pbVar1 = (byte *)(param_1 + 0x5430);
    }
    FUN_009bb728(uVar5,abStack_50,pbVar1);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b414f0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x35408) == 1) {
    uVar1 = FUN_009580b8();
    FUN_00962dfc(uVar1,param_1 + 0x353f0);
    FUN_00904b90();
  }
  else if (*(int *)(param_1 + 0x35408) == 0) {
    uVar1 = FUN_009580b8();
    FUN_009630c8(uVar1,param_1 + 0x353f0);
    if (*(char *)(param_1 + 0x3543b) == '\0') {
      FUN_00904d2c();
    }
    else {
      FUN_00904b64();
    }
  }
  FUN_00ad3a50(param_1 + 0x9ad0,0,0);
  return;
}




void FUN_00b41338(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0x35054);
  FUN_00f01fcc(param_3 + 0x35010,1,0,1,1);
  auVar1 = FUN_00ed0470(param_3 + 0x298,1,0,1,1);
  FUN_00ed02d8(auVar1,fVar2 + param_2,param_3 + 0x298);
  return;
}




undefined1  [16] FUN_00b413b0(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  FUN_00b41338();
  auVar1 = FUN_00ed0464(param_1 + 0x298);
  uVar2 = auVar1._8_8_;
  FUN_00ed0464(param_1 + 0x298);
  auVar1._8_8_ = uVar2;
  return auVar1;
}




void FUN_00b41400(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_NAME");
    FUN_00f048e0(auStack_48,uVar2,param_1);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b41478(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093d880();
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_TAG");
    FUN_00f048e0(auStack_48,uVar2,param_1);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b414f0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x35408) == 1) {
    uVar1 = FUN_009580b8();
    FUN_00962dfc(uVar1,param_1 + 0x353f0);
    FUN_00904b90();
  }
  else if (*(int *)(param_1 + 0x35408) == 0) {
    uVar1 = FUN_009580b8();
    FUN_009630c8(uVar1,param_1 + 0x353f0);
    if (*(char *)(param_1 + 0x3543b) == '\0') {
      FUN_00904d2c();
    }
    else {
      FUN_00904b64();
    }
  }
  FUN_00ad3a50(param_1 + 0x9ad0,0,0);
  return;
}




void FUN_00b41580(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00962f40(uVar1,param_1 + 0x353f0);
  FUN_00ad3a50(param_1 + 0x9ad0,0,0);
  return;
}




void FUN_00b415c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f04924(param_2);
  FUN_00b415fc((float)iVar1,param_1,1);
  FUN_00f0490c(param_2);
  return;
}




void FUN_00b415fc(float param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  pcVar1 = FUN_009a71a4;
  if ((param_3 & 1) == 0) {
    pcVar1 = FUN_0091aa80;
  }
  uVar3 = FUN_00efef08(0,*(float *)(param_2 + 0x9b14) + param_1,0x3e800000,pcVar1);
  FUN_00f01980(param_2 + 0x35010);
  FUN_00f022a0(param_2 + 0x35010,uVar3);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e800000,puVar5);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar6 + 8) = FUN_00b43610;
  *(long *)(puVar6 + 0x10) = param_2;
  FUN_00f02308(param_2 + 0x34f88,puVar5,puVar6,0);
  return;
}




void FUN_00b417e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f04924(param_2);
  FUN_00b415fc((float)iVar1,param_1,0);
  FUN_00f0490c(param_2);
  return;
}




void FUN_00b4181c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined **local_140;
  undefined1 auStack_138 [40];
  long local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_98;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_140);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_INFO_TITLE",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 0;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_INFO_SEASON",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 1;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_INFO_LEVELING",0);
  thunk_FUN_00e7051c(&local_150,uVar2);
  FUN_00e70510(&local_160);
  FUN_00e70e18(&local_160,&DAT_01bb6d43,0x32);
  FUN_00e705c8(&local_90,"[MAX_GUILD_MEMBERS]");
  FUN_00e71248(&local_150,0,&local_90,&local_160);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_90,&local_150);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 1;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  local_110 = param_1 + 0x2be8;
  local_98 = 3;
  local_b0 = 0x3f19999a;
  uVar3 = FUN_0092ea9c();
  local_ac = 0x44548000;
  if ((uVar3 & 1) == 0) {
    local_ac = 0x442f0000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_90,"guildInfo");
  FUN_009badc0(uVar2,&local_90,&local_140);
  if ((local_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,local_80));
  }
  if (local_158 != (void *)0x0) {
    operator_delete__(local_158);
    local_160 = 0;
    local_158 = (void *)0x0;
  }
  if (local_148 != (void *)0x0) {
    operator_delete__(local_148);
    local_150 = 0;
    local_148 = (void *)0x0;
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
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b41af4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined **local_140;
  undefined1 auStack_138 [40];
  long local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  undefined4 local_b0;
  undefined4 local_98;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_140);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_ACTIVITYBUFF_TITLE",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 0;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_ACTIVITYBUFF_HEAT_DETAILS",0);
  thunk_FUN_00e7051c(&local_150,uVar2);
  FUN_00e70510(&local_160);
  FUN_00e70e18(&local_160,&DAT_01bb6d43,0x3c);
  FUN_00e705c8(&local_90,"[HEAT_ACTIVATE_PERCENT]");
  FUN_00e71248(&local_150,0,&local_90,&local_160);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_00e70510(&local_170);
  FUN_00e70e18(&local_170,&DAT_01bb6d43,10);
  FUN_00e705c8(&local_90,"[HEAT_BONUS_PERCENT]");
  FUN_00e71248(&local_150,0,&local_90,&local_170);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_90,&local_150);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 1;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_ACTIVITYBUFF_FIRE_DETAILS",0);
  thunk_FUN_00e7051c(&local_180,uVar2);
  FUN_00e70510(&local_190);
  FUN_00e70e18(&local_190,&DAT_01bb6d43,0x55);
  FUN_00e705c8(&local_90,"[FIRE_ACTIVATE_PERCENT]");
  FUN_00e71248(&local_180,0,&local_90,&local_190);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_00e70510(&local_1a0);
  FUN_00e70e18(&local_1a0,&DAT_01bb6d43,0x19);
  FUN_00e705c8(&local_90,"[FIRE_BONUS_PERCENT]");
  FUN_00e71248(&local_180,0,&local_90,&local_1a0);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_90,&local_180);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 1;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_ACTIVITYBUFF_PREREQ_INFO",0);
  thunk_FUN_00e7051c(&local_1b0,uVar2);
  FUN_00e70510(&local_1c0);
  FUN_00e70e18(&local_1c0,&DAT_01bb6d43,0x14);
  FUN_00e705c8(&local_90,"[NUM_MEMBERS]");
  FUN_00e71248(&local_1b0,0,&local_90,&local_1c0);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_90,&local_1b0);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 1;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_138,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  local_110 = param_1 + 0x2780;
  local_98 = 2;
  local_b0 = 0x3e99999a;
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_90,"guildActivityBuff");
  FUN_009badc0(uVar2,&local_90,&local_140);
  if ((local_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,local_80));
  }
  FUN_00f0490c(param_2);
  if (local_1b8 != (void *)0x0) {
    operator_delete__(local_1b8);
    local_1c0 = 0;
    local_1b8 = (void *)0x0;
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
    local_1b0 = 0;
    local_1a8 = (void *)0x0;
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
    local_1a0 = 0;
    local_198 = (void *)0x0;
  }
  if (local_188 != (void *)0x0) {
    operator_delete__(local_188);
    local_190 = 0;
    local_188 = (void *)0x0;
  }
  if (local_178 != (void *)0x0) {
    operator_delete__(local_178);
    local_180 = 0;
    local_178 = (void *)0x0;
  }
  if (local_168 != (void *)0x0) {
    operator_delete__(local_168);
    local_170 = 0;
    local_168 = (void *)0x0;
  }
  if (local_158 != (void *)0x0) {
    operator_delete__(local_158);
    local_160 = 0;
    local_158 = (void *)0x0;
  }
  if (local_148 != (void *)0x0) {
    operator_delete__(local_148);
    local_150 = 0;
    local_148 = (void *)0x0;
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
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b41fe4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00b433e0();
  if ((uVar4 & 1) != 0) {
    FUN_009367b8(FUN_00b43620,FUN_00b436cc);
    uVar5 = FUN_009b8d90();
    FUN_008fa54c(abStack_50,"guildChest");
    bVar2 = *(byte *)(param_1 + 0x5430);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x5438);
    }
    pbVar1 = (byte *)(param_1 + 0x54e0);
    if (uVar4 != 0) {
      pbVar1 = (byte *)(param_1 + 0x5430);
    }
    FUN_009bb728(uVar5,abStack_50,pbVar1);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b41fe4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00b433e0();
  if ((uVar4 & 1) != 0) {
    FUN_009367b8(FUN_00b43620,FUN_00b436cc);
    uVar5 = FUN_009b8d90();
    FUN_008fa54c(local_50,"guildChest");
    bVar2 = *(byte *)(param_1 + 0x5430);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x5438);
    }
    pbVar1 = (byte *)(param_1 + 0x54e0);
    if (uVar4 != 0) {
      pbVar1 = (byte *)(param_1 + 0x5430);
    }
    FUN_009bb728(uVar5,local_50,pbVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b41fe4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00b433e0();
  if ((uVar4 & 1) != 0) {
    FUN_009367b8(FUN_00b43620,FUN_00b436cc);
    uVar5 = FUN_009b8d90();
    FUN_008fa54c(abStack_50,"guildChest");
    bVar2 = *(byte *)(param_1 + 0x5430);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x5438);
    }
    pbVar1 = (byte *)(param_1 + 0x54e0);
    if (uVar4 != 0) {
      pbVar1 = (byte *)(param_1 + 0x5430);
    }
    FUN_009bb728(uVar5,abStack_50,pbVar1);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

