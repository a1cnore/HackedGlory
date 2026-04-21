// functions/00bfa — 12 functions
#include "libGameKindred.h"




void FUN_00bfa030(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined **local_140;
  undefined1 auStack_138 [16];
  long local_128;
  code *pcStack_120;
  long local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  undefined4 local_b0;
  undefined4 local_ac;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00916034(param_1 + 0x40);
  if (lVar2 != 0) {
    local_128 = param_1;
    if (*(int *)(lVar2 + 0xac) == 3) {
      FUN_00b26098(&local_140);
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_TITLE",0);
      thunk_FUN_00e7051c(&local_90,uVar3);
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
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_DESCRIPTION",0);
      thunk_FUN_00e7051c(&local_150,uVar3);
      FUN_00e705c8(&local_90,"[PLAYER_NAME]");
      FUN_00e70570(&local_160,param_1 + 0x58);
      FUN_00e71248(&local_150,0,&local_90,&local_160);
      if (local_158 != (void *)0x0) {
        operator_delete__(local_158);
        local_160 = 0;
        local_158 = (void *)0x0;
      }
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
      pcStack_120 = FUN_00bfa448;
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_CONFIRM",0);
      FUN_00910394(&local_f0,uVar3);
      local_b0 = 0x3f400000;
      local_110 = *(long *)(param_1 + 8) + 0x1fa8;
      uVar4 = FUN_0092ea9c();
      local_ac = 0x44160000;
      if ((uVar4 & 1) == 0) {
        local_ac = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_008fa54c(&local_90,"deleteFriend");
      FUN_00b28094(lVar2 + 0x3dd8,&local_90,&local_140);
      if ((local_90 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_7f,local_80));
      }
      if (local_148 != (void *)0x0) {
        operator_delete__(local_148);
        local_150 = 0;
        local_148 = (void *)0x0;
      }
    }
    else {
      FUN_00b26098(&local_140);
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND",0);
      thunk_FUN_00e7051c(&local_90,uVar3);
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
      thunk_FUN_00e7051c(&local_90,&DAT_03210450);
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
      pcStack_120 = thunk_FUN_00bfb584;
      uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&local_f0,uVar3);
      local_b0 = 0x3f400000;
      local_110 = *(long *)(param_1 + 8) + 0x1fa8;
      uVar4 = FUN_0092ea9c();
      local_ac = 0x44160000;
      if ((uVar4 & 1) == 0) {
        local_ac = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_008fa54c(&local_90,"addFriend");
      FUN_00b28094(lVar2 + 0x3dd8,&local_90,&local_140);
      if ((local_90 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_7f,local_80));
      }
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
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfa448(long param_1)

{
  FUN_0091605c(param_1 + 0x40);
  FUN_00bfae0c(param_1);
  return;
}




void FUN_00bfa474(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  size_t sVar14;
  byte bVar15;
  size_t sVar16;
  size_t sVar17;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined **local_150;
  undefined1 auStack_148 [16];
  long local_138;
  code *pcStack_130;
  long local_120;
  undefined8 local_100;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  undefined4 local_c0;
  undefined4 local_bc;
  ulong local_a0;
  void *local_98;
  byte local_90;
  undefined7 uStack_8f;
  void *local_80;
  undefined4 local_78;
  undefined8 local_74;
  
  sVar5 = DAT_0320ffb0;
  bVar4 = DAT_0320ffa8;
  lVar3 = tpidr_el0;
  lVar10 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0xa1) == '\0') {
    bVar15 = *(byte *)(param_1 + 0x70);
    sVar16 = *(size_t *)(param_1 + 0x78);
    sVar14 = (size_t)(bVar15 >> 1);
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x70);
    sVar16 = *(size_t *)(param_1 + 0x78);
    sVar14 = (size_t)(bVar15 >> 1);
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
    sVar2 = sVar14;
    if ((bVar15 & 1) != 0) {
      sVar2 = sVar16;
    }
    sVar1 = sVar17;
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (sVar2 == sVar1) {
      pvVar13 = *(void **)(param_1 + 0x80);
      if ((bVar15 & 1) == 0) {
        pvVar13 = (void *)(param_1 + 0x71);
      }
      pcVar9 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar9 = &DAT_0320ffa9;
      }
      if ((bVar15 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar11 = (char *)(param_1 + 0x71);
          lVar12 = -sVar14;
          do {
            if (*pcVar11 != *pcVar9) goto LAB_00bfa560;
            pcVar11 = pcVar11 + 1;
            lVar12 = lVar12 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar12 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar13,pcVar9,sVar2), iVar6 != 0))
      goto LAB_00bfa560;
      FUN_00b26098(&local_150);
      uVar7 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
      thunk_FUN_00e7051c(&local_a0,uVar7);
      FUN_008fcdb8(&local_90,&DAT_0320ffa8);
      local_78 = 0;
      local_74 = 0x41a00000;
      FUN_009c82b4(auStack_148,&local_a0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      uVar7 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_160,uVar7);
      FUN_00e705c8(&local_a0,"[PLAYER_NAME]");
      FUN_00e70570(&local_170,param_1 + 0x58);
      FUN_00e71248(&local_160,0,&local_a0,&local_170);
      if (local_168 != (void *)0x0) {
        operator_delete__(local_168);
        local_170 = 0;
        local_168 = (void *)0x0;
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      thunk_FUN_00e7051c(&local_a0,&local_160);
      FUN_008fcdb8(&local_90,&DAT_0320ffa8);
      local_78 = 1;
      local_74 = 0x41a00000;
      FUN_009c82b4(auStack_148,&local_a0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      pcStack_130 = thunk_FUN_00bfb3c4;
      local_138 = param_1;
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&local_100,uVar7);
      local_c0 = 0x3f400000;
      local_120 = *(long *)(param_1 + 8) + 0x808;
      uVar8 = FUN_0092ea9c();
      local_bc = 0x44160000;
      if ((uVar8 & 1) == 0) {
        local_bc = 0x43e10000;
      }
      lVar12 = *(long *)(param_1 + 8);
      FUN_008fa54c(&local_a0,"guildInvite");
      FUN_00b28094(lVar12 + 0x3dd8,&local_a0,&local_150);
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_8f,local_90));
      }
      if (local_158 != (void *)0x0) {
        operator_delete__(local_158);
        local_160 = 0;
        local_158 = (void *)0x0;
      }
      local_150 = &PTR_FUN_027de7f0;
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = 0;
        local_f8 = (void *)0x0;
      }
      FUN_009c8464(auStack_148,1);
      goto LAB_00bfa830;
    }
  }
LAB_00bfa560:
  sVar2 = sVar14;
  if ((bVar15 & 1) != 0) {
    sVar2 = sVar16;
  }
  if ((bVar4 & 1) != 0) {
    sVar17 = sVar5;
  }
  if (sVar2 == sVar17) {
    pvVar13 = *(void **)(param_1 + 0x80);
    if ((bVar15 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x71);
    }
    pcVar9 = DAT_0320ffb8;
    if ((bVar4 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar15 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar11 = (char *)(param_1 + 0x71);
        do {
          if (*pcVar11 != *pcVar9) goto LAB_00bfa5d8;
          sVar14 = sVar14 - 1;
          pcVar11 = pcVar11 + 1;
          pcVar9 = pcVar9 + 1;
        } while (sVar14 != 0);
      }
      goto LAB_00bfa830;
    }
    if ((sVar2 == 0) || (iVar6 = memcmp(pvVar13,pcVar9,sVar2), iVar6 == 0)) goto LAB_00bfa830;
  }
LAB_00bfa5d8:
  uVar7 = FUN_009580b8();
  FUN_0095e21c(uVar7,param_1 + 0x70,1);
  FUN_00cbb218(param_1 + 0x70,0);
LAB_00bfa830:
  if (*(long *)(lVar3 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bfa86c(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  size_t sVar14;
  byte bVar15;
  size_t sVar16;
  size_t sVar17;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined **local_150;
  undefined1 auStack_148 [16];
  long local_138;
  code *pcStack_130;
  long local_120;
  undefined8 local_100;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  undefined4 local_c0;
  undefined4 local_bc;
  ulong local_a0;
  void *local_98;
  byte local_90;
  undefined7 uStack_8f;
  void *local_80;
  undefined4 local_78;
  undefined8 local_74;
  
  sVar5 = DAT_0320ffb0;
  bVar4 = DAT_0320ffa8;
  lVar3 = tpidr_el0;
  lVar10 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0xa2) == '\0') {
    bVar15 = *(byte *)(param_1 + 0x88);
    sVar16 = *(size_t *)(param_1 + 0x90);
    sVar14 = (size_t)(bVar15 >> 1);
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x88);
    sVar16 = *(size_t *)(param_1 + 0x90);
    sVar14 = (size_t)(bVar15 >> 1);
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
    sVar2 = sVar14;
    if ((bVar15 & 1) != 0) {
      sVar2 = sVar16;
    }
    sVar1 = sVar17;
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (sVar2 == sVar1) {
      pvVar13 = *(void **)(param_1 + 0x98);
      if ((bVar15 & 1) == 0) {
        pvVar13 = (void *)(param_1 + 0x89);
      }
      pcVar9 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar9 = &DAT_0320ffa9;
      }
      if ((bVar15 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar11 = (char *)(param_1 + 0x89);
          lVar12 = -sVar14;
          do {
            if (*pcVar11 != *pcVar9) goto LAB_00bfa958;
            pcVar11 = pcVar11 + 1;
            lVar12 = lVar12 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar12 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar13,pcVar9,sVar2), iVar6 != 0))
      goto LAB_00bfa958;
      FUN_00b26098(&local_150);
      uVar7 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
      thunk_FUN_00e7051c(&local_a0,uVar7);
      FUN_008fcdb8(&local_90,&DAT_0320ffa8);
      local_78 = 0;
      local_74 = 0x41a00000;
      FUN_009c82b4(auStack_148,&local_a0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      uVar7 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_160,uVar7);
      FUN_00e705c8(&local_a0,"[PLAYER_NAME]");
      FUN_00e70570(&local_170,param_1 + 0x58);
      FUN_00e71248(&local_160,0,&local_a0,&local_170);
      if (local_168 != (void *)0x0) {
        operator_delete__(local_168);
        local_170 = 0;
        local_168 = (void *)0x0;
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      thunk_FUN_00e7051c(&local_a0,&local_160);
      FUN_008fcdb8(&local_90,&DAT_0320ffa8);
      local_78 = 1;
      local_74 = 0x41a00000;
      FUN_009c82b4(auStack_148,&local_a0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      pcStack_130 = thunk_FUN_00bfb490;
      local_138 = param_1;
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&local_100,uVar7);
      local_c0 = 0x3f400000;
      local_120 = *(long *)(param_1 + 8) + 0x13d8;
      uVar8 = FUN_0092ea9c();
      local_bc = 0x44160000;
      if ((uVar8 & 1) == 0) {
        local_bc = 0x43e10000;
      }
      lVar12 = *(long *)(param_1 + 8);
      FUN_008fa54c(&local_a0,"teamInvite");
      FUN_00b28094(lVar12 + 0x3dd8,&local_a0,&local_150);
      if ((local_a0 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_8f,local_90));
      }
      if (local_158 != (void *)0x0) {
        operator_delete__(local_158);
        local_160 = 0;
        local_158 = (void *)0x0;
      }
      local_150 = &PTR_FUN_027de7f0;
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = 0;
        local_f8 = (void *)0x0;
      }
      FUN_009c8464(auStack_148,1);
      goto LAB_00bfac28;
    }
  }
LAB_00bfa958:
  sVar2 = sVar14;
  if ((bVar15 & 1) != 0) {
    sVar2 = sVar16;
  }
  if ((bVar4 & 1) != 0) {
    sVar17 = sVar5;
  }
  if (sVar2 == sVar17) {
    pvVar13 = *(void **)(param_1 + 0x98);
    if ((bVar15 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x89);
    }
    pcVar9 = DAT_0320ffb8;
    if ((bVar4 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar15 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar11 = (char *)(param_1 + 0x89);
        do {
          if (*pcVar11 != *pcVar9) goto LAB_00bfa9d0;
          sVar14 = sVar14 - 1;
          pcVar11 = pcVar11 + 1;
          pcVar9 = pcVar9 + 1;
        } while (sVar14 != 0);
      }
      goto LAB_00bfac28;
    }
    if ((sVar2 == 0) || (iVar6 = memcmp(pvVar13,pcVar9,sVar2), iVar6 == 0)) goto LAB_00bfac28;
  }
LAB_00bfa9d0:
  uVar7 = FUN_009580b8();
  FUN_0095e34c(uVar7,param_1 + 0x88,1);
  FUN_00cbb8a4(param_1 + 0x88);
LAB_00bfac28:
  if (*(long *)(lVar3 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bfac64(undefined8 param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  size_t sVar11;
  byte bVar12;
  size_t sVar13;
  
  uVar5 = FUN_00e84e5c(param_2);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = FUN_009580b8();
  sVar11 = DAT_0320ffb0;
  if (*(char *)(lVar6 + 0x568c) != '\0') {
    return;
  }
  bVar3 = *(byte *)(param_2 + 0xb0);
  sVar13 = (size_t)(DAT_0320ffa8 >> 1);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0xb8);
  }
  sVar1 = sVar13;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar10 = *(void **)(param_2 + 0xc0);
    bVar12 = DAT_0320ffa8 & 1;
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0xb1);
    }
    pcVar8 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar9 = (char *)(param_2 + 0xb1);
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00bfad44;
          pcVar9 = pcVar9 + 1;
          lVar6 = lVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar4 = memcmp(pvVar10,pcVar8,sVar2), iVar4 != 0)) goto LAB_00bfad44;
  }
  else {
LAB_00bfad44:
    uVar7 = FUN_009580b8();
    FUN_0095e21c(uVar7,(byte *)(param_2 + 0xb0),0);
    bVar12 = DAT_0320ffa8 & 1;
    sVar13 = (size_t)(DAT_0320ffa8 >> 1);
    sVar11 = DAT_0320ffb0;
  }
  bVar3 = *(byte *)(param_2 + 200);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0xd0);
  }
  if (bVar12 != 0) {
    sVar13 = sVar11;
  }
  if (sVar2 == sVar13) {
    pvVar10 = *(void **)(param_2 + 0xd8);
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0xc9);
    }
    pcVar8 = DAT_0320ffb8;
    if (bVar12 == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar9 = (char *)(param_2 + 0xc9);
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00bfade4;
          pcVar9 = pcVar9 + 1;
          lVar6 = lVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar4 = memcmp(pvVar10,pcVar8,sVar2), iVar4 != 0)) goto LAB_00bfade4;
    return;
  }
LAB_00bfade4:
  uVar7 = FUN_009580b8();
  FUN_0095e34c(uVar7,(byte *)(param_2 + 200),0);
  return;
}




void thunk_FUN_00bfac64(undefined8 param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  size_t sVar11;
  byte bVar12;
  size_t sVar13;
  
  uVar5 = FUN_00e84e5c(param_2);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = FUN_009580b8();
  sVar11 = DAT_0320ffb0;
  if (*(char *)(lVar6 + 0x568c) != '\0') {
    return;
  }
  bVar3 = *(byte *)(param_2 + 0xb0);
  sVar13 = (size_t)(DAT_0320ffa8 >> 1);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0xb8);
  }
  sVar1 = sVar13;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar10 = *(void **)(param_2 + 0xc0);
    bVar12 = DAT_0320ffa8 & 1;
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0xb1);
    }
    pcVar8 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar9 = (char *)(param_2 + 0xb1);
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00bfad44;
          pcVar9 = pcVar9 + 1;
          lVar6 = lVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar4 = memcmp(pvVar10,pcVar8,sVar2), iVar4 != 0)) goto LAB_00bfad44;
  }
  else {
LAB_00bfad44:
    uVar7 = FUN_009580b8();
    FUN_0095e21c(uVar7,(byte *)(param_2 + 0xb0),0);
    bVar12 = DAT_0320ffa8 & 1;
    sVar13 = (size_t)(DAT_0320ffa8 >> 1);
    sVar11 = DAT_0320ffb0;
  }
  bVar3 = *(byte *)(param_2 + 200);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0xd0);
  }
  if (bVar12 != 0) {
    sVar13 = sVar11;
  }
  if (sVar2 == sVar13) {
    pvVar10 = *(void **)(param_2 + 0xd8);
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0xc9);
    }
    pcVar8 = DAT_0320ffb8;
    if (bVar12 == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar9 = (char *)(param_2 + 0xc9);
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00bfade4;
          pcVar9 = pcVar9 + 1;
          lVar6 = lVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar4 = memcmp(pvVar10,pcVar8,sVar2), iVar4 != 0)) goto LAB_00bfade4;
    return;
  }
LAB_00bfade4:
  uVar7 = FUN_009580b8();
  FUN_0095e34c(uVar7,(byte *)(param_2 + 200),0);
  return;
}




void thunk_FUN_00bfae0c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar3 = param_1 + 0x41;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    FUN_0090de08(lVar3,param_1);
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar3 = param_1 + 0x41;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    FUN_0090de28(lVar3,param_1);
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar3 = param_1 + 0x41;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    FUN_0090de48(lVar3,param_1);
  }
  FUN_008fce60((byte *)(param_1 + 0x40),&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x58,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x70,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x88,&DAT_0320ffa8);
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  FUN_00c7c87c(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_00f048a4("UI::MENU_SOCIAL_CLEAR_TARGET");
  FUN_00f048e0(auStack_58,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfae0c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar3 = param_1 + 0x41;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    FUN_0090de08(lVar3,param_1);
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar3 = param_1 + 0x41;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    FUN_0090de28(lVar3,param_1);
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar3 = param_1 + 0x41;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
    }
    FUN_0090de48(lVar3,param_1);
  }
  FUN_008fce60((byte *)(param_1 + 0x40),&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x58,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x70,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x88,&DAT_0320ffa8);
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  FUN_00c7c87c(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_00f048a4("UI::MENU_SOCIAL_CLEAR_TARGET");
  FUN_00f048e0(auStack_58,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfaf2c(long param_1)

{
  FUN_00bfae0c(param_1 + -0x10);
  return;
}




void FUN_00bfaf34(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f298(uVar2,param_2 + 0x180);
  *(byte *)(param_1 + 0xa1) = bVar1 & 1;
  return;
}




void FUN_00bfaf68(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f298(uVar2,param_2 + 0x180);
  *(byte *)(param_1 + 0x79) = bVar1 & 1;
  return;
}




void FUN_00bfaf9c(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  char *__s2;
  char *pcVar7;
  long lVar8;
  void *__s1;
  byte local_60 [8];
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00e84e5c(param_2);
  if (((uVar6 & 1) == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_00bfb0d4;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_00bfb100(local_60,param_1);
  bVar2 = *(byte *)(param_1 + 0x40);
  bVar4 = false;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x48);
  }
  sVar1 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    sVar1 = local_58;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x50);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x41);
    }
    __s2 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      __s2 = local_50;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(param_1 + 0x41);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) {
            bVar4 = false;
            goto joined_r0x00bfb0b4;
          }
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
    }
    else if (__n != 0) {
      iVar5 = memcmp(__s1,__s2,__n);
      bVar4 = iVar5 == 0;
      goto joined_r0x00bfb0b4;
    }
    bVar4 = true;
  }
joined_r0x00bfb0b4:
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (bVar4) {
    FUN_00bfae0c(param_1);
  }
  else {
    FUN_008fce60(param_1 + 0x70,&DAT_0320ffa8);
  }
LAB_00bfb0d4:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

