// functions/00ba7 — 13 functions
#include "libGameKindred.h"




void FUN_00ba72d8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00abce6c(param_1 + 0x6a2e0);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00abce6c(param_1 + 0x6bfd8);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00ce1f88(param_1 + 0x6a2e0);
      uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
      if ((uVar1 & 1) != 0) {
        uVar2 = FUN_00ce1f88(param_1 + 0x6bfd8);
        uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
        if ((uVar1 & 1) != 0) {
          uVar1 = FUN_00abce6c(param_1 + 0x6df30);
          if ((uVar1 & 1) == 0) {
            uVar1 = FUN_00abce6c(param_1 + 0x6fc28);
            if ((uVar1 & 1) == 0) {
              uVar2 = FUN_00ce1f88(param_1 + 0x6df30);
              uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
              if ((uVar1 & 1) != 0) {
                uVar2 = FUN_00ce1f88(param_1 + 0x6fc28);
                uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
                if (((uVar1 & 1) != 0) &&
                   (uVar1 = FUN_00abce6c(param_1 + 0x71b80), (uVar1 & 1) == 0)) {
                  FUN_00b09454(param_1 + 0x756d0,1);
                  FUN_00b09454(param_1 + 0x76c90,1);
                  uVar2 = 1;
                  goto LAB_00ba73f8;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00b09454(param_1 + 0x756d0,0);
  FUN_00b09454(param_1 + 0x76c90,0);
  uVar2 = 0;
LAB_00ba73f8:
  FUN_00b09454(param_1 + 0x78528,uVar2);
  return;
}




void FUN_00ba7444(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *__s2;
  char *pcVar7;
  void *__s1;
  
  uVar4 = FUN_00e84e5c(param_2);
  if (((uVar4 & 1) == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_00ba7534;
  FUN_00ba4f20(param_1);
  lVar5 = FUN_009580b8();
  bVar2 = *(byte *)(lVar5 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar5 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(lVar5 + 0x5488);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(lVar5 + 0x5479);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(lVar5 + 0x5479);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00ba7514;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00ba7534;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00ba7534;
  }
LAB_00ba7514:
  uVar6 = FUN_009580b8();
  lVar5 = FUN_009580b8();
  FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
LAB_00ba7534:
  FUN_00b4ab9c(param_1 + 0x380,param_2);
  return;
}




void FUN_00ba754c(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined **local_288 [5];
  undefined1 auStack_260 [112];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [224];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba7658;
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar4 = FUN_009580c4();
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_009580b8();
      FUN_009658c8(lVar5 + 0x18);
    }
    FUN_00e84dac(local_288);
    local_288[0] = &PTR_FUN_027bbaa8;
    memset(auStack_1e8,0,0xd8);
    memset(auStack_260,0,0x60);
    FUN_00954ec0(auStack_1f0);
    FUN_00954d1c(auStack_260);
    uStack_60 = 0;
    local_68 = 0;
    local_58 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    FUN_00e84dec(local_288);
    FUN_00ba6b60(param_1,local_288);
    FUN_0094dae0(local_288);
    goto LAB_00ba7658;
  }
  pbVar12 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x50);
  uVar11 = (ulong)(bVar1 >> 1);
  uVar4 = uVar11;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0x13) {
    iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"player_not_in_guild",0x13);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar10 = *(ulong *)(param_2 + 0x50);
      uVar11 = (ulong)(bVar1 >> 1);
      goto LAB_00ba76d8;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_LEAVE_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_LEAVE_REASON_NOT_IN";
  }
  else {
LAB_00ba76d8:
    if ((bVar1 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 != 0x11) ||
       (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"membership_locked",0x11), iVar3 != 0))
    goto LAB_00ba7658;
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
  }
  uVar8 = FUN_00e6ce7c(pcVar7,0);
  uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
LAB_00ba7658:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ba7780(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar3 = FUN_00e84e5c(param_2);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_00ba4f20(param_1);
      return;
    }
    pbVar10 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar10;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uVar9 = (ulong)(bVar1 >> 1);
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x11) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"nonexistant_guild",0x11);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_REASON_NO_GUILD";
        goto LAB_00ba7948;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x10) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"already_in_guild",0x10);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_ALREADY_IN_GUILD";
        goto LAB_00ba7948;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 7) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"expired",7);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_00ba7948;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 10) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"guild_full",10), iVar2 == 0)) {
      uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_FULL";
LAB_00ba7948:
      uVar6 = FUN_00e6ce7c(pcVar4,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_00ba7984(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined **local_288 [5];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [224];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba7abc;
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_00e84dac(local_288);
    local_288[0] = &PTR_FUN_027bbaa8;
    memset(auStack_1e8,0,0xd8);
    memset(auStack_260,0,0x60);
    FUN_00954ec0(auStack_1f0);
    FUN_00954d1c(auStack_260);
    uStack_60 = 0;
    local_68 = 0;
    local_58 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    lVar5 = FUN_009580b8();
    FUN_008fce60(&local_108,lVar5 + 0x5478);
    lVar5 = FUN_009580b8();
    FUN_008fce60(auStack_248,lVar5 + 0x50c8);
    lVar5 = FUN_009580b8();
    FUN_008fce60(auStack_230,lVar5 + 0x50e0);
    local_b8 = 1;
    FUN_009580b8();
    FUN_00962c7c();
    FUN_0094dae0(local_288);
    goto LAB_00ba7abc;
  }
  pbVar12 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x50);
  uVar11 = (ulong)(bVar1 >> 1);
  uVar4 = uVar11;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0x11) {
    iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"nonexistant_guild",0x11);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar10 = *(ulong *)(param_2 + 0x50);
      uVar11 = (ulong)(bVar1 >> 1);
      goto LAB_00ba7b3c;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_NO_GUILD";
  }
  else {
LAB_00ba7b3c:
    if ((bVar1 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 != 0x10) ||
       (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_guild",0x10), iVar3 != 0))
    goto LAB_00ba7abc;
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_IN_GUILD";
  }
  uVar8 = FUN_00e6ce7c(pcVar7,0);
  uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
LAB_00ba7abc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ba7be4(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba7f38;
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_GUILD_NOTIFICATION",0);
    thunk_FUN_00e7051c(&local_48,uVar5);
    FUN_00a9da50(0x40a00000,&local_48,0,0);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    goto LAB_00ba7f38;
  }
  pbVar11 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar11;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar10 = (ulong)(bVar1 >> 1);
  uVar4 = uVar10;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0x13) {
    iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"player_not_in_guild",0x13);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
      goto LAB_00ba7cb8;
    }
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_NOT_IN_GUILD";
  }
  else {
LAB_00ba7cb8:
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x10) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"already_in_guild",0x10);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_IN_GUILD";
        goto LAB_00ba7f04;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0xe) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"different_game",0xe);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_00ba7f04;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x11) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"permission_denied",0x11);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_PERMISSIONS";
        goto LAB_00ba7f04;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0xf) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"already_invited",0xf);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_00ba7f04;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 10) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"guild_full",10);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_GUILD_FULL";
        goto LAB_00ba7f04;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar10 = uVar9;
    }
    if ((uVar10 != 0xe) ||
       (iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"min_skill_tier",0xe), iVar3 != 0))
    goto LAB_00ba7f38;
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_MIN_SKILL_TIER";
  }
LAB_00ba7f04:
  uVar7 = FUN_00e6ce7c(pcVar6,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar7,uVar8,0,0);
LAB_00ba7f38:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ba7f60(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar3 = FUN_00e84e5c(param_2);
  if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    pbVar10 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar10;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uVar9 = (ulong)(bVar1 >> 1);
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x13) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"player_not_in_guild",0x13);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_KICK_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_NOT_IN_GUILD";
        goto LAB_00ba8054;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x11) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"permission_denied",0x11), iVar2 == 0)) {
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_KICK_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_PERMISSIONS";
LAB_00ba8054:
      uVar6 = FUN_00e6ce7c(pcVar5,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void thunk_FUN_00ba7444(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *__s2;
  char *pcVar7;
  void *__s1;
  
  uVar4 = FUN_00e84e5c(param_2);
  if (((uVar4 & 1) == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_00ba7534;
  FUN_00ba4f20(param_1);
  lVar5 = FUN_009580b8();
  bVar2 = *(byte *)(lVar5 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar5 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(lVar5 + 0x5488);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(lVar5 + 0x5479);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(lVar5 + 0x5479);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00ba7514;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00ba7534;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00ba7534;
  }
LAB_00ba7514:
  uVar6 = FUN_009580b8();
  lVar5 = FUN_009580b8();
  FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
LAB_00ba7534:
  FUN_00b4ab9c(param_1 + 0x380,param_2);
  return;
}




void thunk_FUN_00ba754c(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined **appuStack_288 [5];
  undefined1 auStack_260 [112];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [224];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba7658;
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar4 = FUN_009580c4();
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_009580b8();
      FUN_009658c8(lVar5 + 0x18);
    }
    FUN_00e84dac(appuStack_288);
    appuStack_288[0] = &PTR_FUN_027bbaa8;
    memset(auStack_1e8,0,0xd8);
    memset(auStack_260,0,0x60);
    FUN_00954ec0(auStack_1f0);
    FUN_00954d1c(auStack_260);
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    FUN_00e84dec(appuStack_288);
    FUN_00ba6b60(param_1,appuStack_288);
    FUN_0094dae0(appuStack_288);
    goto LAB_00ba7658;
  }
  pbVar12 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x50);
  uVar11 = (ulong)(bVar1 >> 1);
  uVar4 = uVar11;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0x13) {
    iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"player_not_in_guild",0x13);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar10 = *(ulong *)(param_2 + 0x50);
      uVar11 = (ulong)(bVar1 >> 1);
      goto LAB_00ba76d8;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_LEAVE_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_LEAVE_REASON_NOT_IN";
  }
  else {
LAB_00ba76d8:
    if ((bVar1 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 != 0x11) ||
       (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"membership_locked",0x11), iVar3 != 0))
    goto LAB_00ba7658;
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
  }
  uVar8 = FUN_00e6ce7c(pcVar7,0);
  uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
LAB_00ba7658:
  if (*(long *)(lVar2 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba7780(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar3 = FUN_00e84e5c(param_2);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_00ba4f20(param_1);
      return;
    }
    pbVar10 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar10;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uVar9 = (ulong)(bVar1 >> 1);
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x11) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"nonexistant_guild",0x11);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_REASON_NO_GUILD";
        goto LAB_00ba7948;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x10) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"already_in_guild",0x10);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_ALREADY_IN_GUILD";
        goto LAB_00ba7948;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 7) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"expired",7);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_00ba7948;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 10) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"guild_full",10), iVar2 == 0)) {
      uVar5 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_FULL";
LAB_00ba7948:
      uVar6 = FUN_00e6ce7c(pcVar4,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void thunk_FUN_00ba7984(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined **appuStack_288 [5];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [224];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba7abc;
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_00e84dac(appuStack_288);
    appuStack_288[0] = &PTR_FUN_027bbaa8;
    memset(auStack_1e8,0,0xd8);
    memset(auStack_260,0,0x60);
    FUN_00954ec0(auStack_1f0);
    FUN_00954d1c(auStack_260);
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lVar5 = FUN_009580b8();
    FUN_008fce60(&uStack_108,lVar5 + 0x5478);
    lVar5 = FUN_009580b8();
    FUN_008fce60(auStack_248,lVar5 + 0x50c8);
    lVar5 = FUN_009580b8();
    FUN_008fce60(auStack_230,lVar5 + 0x50e0);
    uStack_b8 = 1;
    FUN_009580b8();
    FUN_00962c7c();
    FUN_0094dae0(appuStack_288);
    goto LAB_00ba7abc;
  }
  pbVar12 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x50);
  uVar11 = (ulong)(bVar1 >> 1);
  uVar4 = uVar11;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0x11) {
    iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"nonexistant_guild",0x11);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar10 = *(ulong *)(param_2 + 0x50);
      uVar11 = (ulong)(bVar1 >> 1);
      goto LAB_00ba7b3c;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_NO_GUILD";
  }
  else {
LAB_00ba7b3c:
    if ((bVar1 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 != 0x10) ||
       (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_guild",0x10), iVar3 != 0))
    goto LAB_00ba7abc;
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_IN_GUILD";
  }
  uVar8 = FUN_00e6ce7c(pcVar7,0);
  uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
LAB_00ba7abc:
  if (*(long *)(lVar2 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba7984(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined **appuStack_288 [5];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [224];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba7abc;
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_00e84dac(appuStack_288);
    appuStack_288[0] = &PTR_FUN_027bbaa8;
    memset(auStack_1e8,0,0xd8);
    memset(auStack_260,0,0x60);
    FUN_00954ec0(auStack_1f0);
    FUN_00954d1c(auStack_260);
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lVar5 = FUN_009580b8();
    FUN_008fce60(&uStack_108,lVar5 + 0x5478);
    lVar5 = FUN_009580b8();
    FUN_008fce60(auStack_248,lVar5 + 0x50c8);
    lVar5 = FUN_009580b8();
    FUN_008fce60(auStack_230,lVar5 + 0x50e0);
    uStack_b8 = 1;
    FUN_009580b8();
    FUN_00962c7c();
    FUN_0094dae0(appuStack_288);
    goto LAB_00ba7abc;
  }
  pbVar12 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x50);
  uVar11 = (ulong)(bVar1 >> 1);
  uVar4 = uVar11;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0x11) {
    iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"nonexistant_guild",0x11);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar10 = *(ulong *)(param_2 + 0x50);
      uVar11 = (ulong)(bVar1 >> 1);
      goto LAB_00ba7b3c;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_NO_GUILD";
  }
  else {
LAB_00ba7b3c:
    if ((bVar1 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 != 0x10) ||
       (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_guild",0x10), iVar3 != 0))
    goto LAB_00ba7abc;
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_IN_GUILD";
  }
  uVar8 = FUN_00e6ce7c(pcVar7,0);
  uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
LAB_00ba7abc:
  if (*(long *)(lVar2 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba7f60(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar3 = FUN_00e84e5c(param_2);
  if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    pbVar10 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar10;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uVar9 = (ulong)(bVar1 >> 1);
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x13) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"player_not_in_guild",0x13);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_KICK_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_NOT_IN_GUILD";
        goto LAB_00ba8054;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x11) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"permission_denied",0x11), iVar2 == 0)) {
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_KICK_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_PERMISSIONS";
LAB_00ba8054:
      uVar6 = FUN_00e6ce7c(pcVar5,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}

