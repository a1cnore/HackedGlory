// functions/00ba0 — 14 functions
#include "libGameKindred.h"




void thunk_FUN_00ba01c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 0x120b0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x3d78) == 3) {
      uVar1 = (ulong)(*(byte *)(param_1 + 0x12638) >> 1);
      lVar5 = param_1 + 0x12639;
      if ((*(byte *)(param_1 + 0x12638) & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0x12640);
        lVar5 = *(long *)(param_1 + 0x12648);
      }
      FUN_008fcea8(param_1 + 0x12620,lVar5,uVar1);
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_TITLE",0);
      thunk_FUN_00e7051c(&uStack_48,uVar3);
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_DESCRIPTION",0);
      thunk_FUN_00e7051c(&uStack_58,uVar3);
      FUN_00e705c8(&uStack_68,"[PLAYER_NAME]");
      uVar3 = FUN_00f08be8(*(long *)(param_1 + 0x120b0) + 0x330);
      FUN_00e71248(&uStack_58,0,&uStack_68,uVar3);
      if (pvStack_60 != (void *)0x0) {
        operator_delete__(pvStack_60);
        uStack_68 = 0;
        pvStack_60 = (void *)0x0;
      }
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_CONFIRM",0);
      uVar4 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_CANCEL",0);
      FUN_00a9b9f8(&uStack_48,&uStack_58,uVar3,uVar4,&DAT_03210450,param_1,FUN_00ba0380,0,0);
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
    else {
      FUN_00ba03cc(param_1,param_2,lVar5 + 0x3ce0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba0544(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  size_t sVar16;
  size_t sVar17;
  long lVar18;
  size_t sVar19;
  undefined8 uStack_178;
  void *pvStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [16];
  long lStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_118;
  void *pvStack_110;
  byte bStack_108;
  void *pvStack_f8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulong uStack_b8;
  void *pvStack_b0;
  byte bStack_a8;
  undefined7 uStack_a7;
  void *pvStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  sVar6 = DAT_0320ffb0;
  bVar5 = DAT_0320ffa8;
  lVar13 = tpidr_el0;
  lVar11 = *(long *)(lVar13 + 0x28);
  plVar1 = (long *)(param_1 + 0x120b0);
  lVar18 = *plVar1;
  if (lVar18 != 0) {
    bVar4 = *(byte *)(lVar18 + 0x3d28);
    if (*(char *)(param_1 + 0x12670) == '\0') {
      sVar19 = *(size_t *)(lVar18 + 0x3d30);
      sVar16 = (size_t)(bVar4 >> 1);
      sVar17 = (size_t)(DAT_0320ffa8 >> 1);
    }
    else {
      sVar19 = *(size_t *)(lVar18 + 0x3d30);
      sVar16 = (size_t)(bVar4 >> 1);
      sVar3 = sVar16;
      if ((bVar4 & 1) != 0) {
        sVar3 = sVar19;
      }
      sVar17 = (size_t)(DAT_0320ffa8 >> 1);
      sVar2 = sVar17;
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (sVar3 == sVar2) {
        pvVar14 = *(void **)(lVar18 + 0x3d38);
        if ((bVar4 & 1) == 0) {
          pvVar14 = (void *)(lVar18 + 0x3d29);
        }
        pcVar10 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar10 = &DAT_0320ffa9;
        }
        if ((bVar4 & 1) == 0) {
          if (sVar3 != 0) {
            pcVar12 = (char *)(lVar18 + 0x3d29);
            lVar15 = -sVar16;
            do {
              if (*pcVar12 != *pcVar10) goto LAB_00ba064c;
              pcVar12 = pcVar12 + 1;
              lVar15 = lVar15 + 1;
              pcVar10 = pcVar10 + 1;
            } while (lVar15 != 0);
          }
        }
        else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar14,pcVar10,sVar3), iVar7 != 0))
        goto LAB_00ba064c;
        FUN_00b26098(&ppuStack_168);
        uVar8 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
        thunk_FUN_00e7051c(&uStack_b8,uVar8);
        FUN_008fcdb8(&bStack_a8,&DAT_0320ffa8);
        uStack_90 = 0;
        uStack_8c = 0x41a00000;
        FUN_009c82b4(auStack_160,&uStack_b8);
        if ((bStack_a8 & 1) != 0) {
          operator_delete(pvStack_98);
        }
        if (pvStack_b0 != (void *)0x0) {
          operator_delete__(pvStack_b0);
          uStack_b8 = 0;
          pvStack_b0 = (void *)0x0;
        }
        uVar8 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
        thunk_FUN_00e7051c(&uStack_178,uVar8);
        FUN_00e705c8(&uStack_b8,"[PLAYER_NAME]");
        uVar8 = FUN_00f08be8(*plVar1 + 0x330);
        FUN_00e71248(&uStack_178,0,&uStack_b8,uVar8);
        if (pvStack_b0 != (void *)0x0) {
          operator_delete__(pvStack_b0);
          uStack_b8 = 0;
          pvStack_b0 = (void *)0x0;
        }
        thunk_FUN_00e7051c(&uStack_b8,&uStack_178);
        FUN_008fcdb8(&bStack_a8,&DAT_0320ffa8);
        uStack_90 = 1;
        uStack_8c = 0x41a00000;
        FUN_009c82b4(auStack_160,&uStack_b8);
        if ((bStack_a8 & 1) != 0) {
          operator_delete(pvStack_98);
        }
        if (pvStack_b0 != (void *)0x0) {
          operator_delete__(pvStack_b0);
          uStack_b8 = 0;
          pvStack_b0 = (void *)0x0;
        }
        pcStack_148 = thunk_FUN_00ba0974;
        lStack_150 = param_1;
        uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00910394(&uStack_118,uVar8);
        lStack_138 = param_1 + 0xa8e8;
        uStack_d8 = 0x3f400000;
        uVar9 = FUN_0092ea9c();
        uStack_d4 = 0x44160000;
        if ((uVar9 & 1) == 0) {
          uStack_d4 = 0x43e10000;
        }
        FUN_008fa54c(&uStack_b8,"guildInvite");
        FUN_00b28094(param_1 + 0x12360,&uStack_b8,&ppuStack_168);
        if ((uStack_b8 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_a7,bStack_a8));
        }
        if (pvStack_170 != (void *)0x0) {
          operator_delete__(pvStack_170);
          uStack_178 = 0;
          pvStack_170 = (void *)0x0;
        }
        ppuStack_168 = &PTR_FUN_027de7f0;
        if ((bStack_108 & 1) != 0) {
          operator_delete(pvStack_f8);
        }
        if (pvStack_110 != (void *)0x0) {
          operator_delete__(pvStack_110);
          uStack_118 = 0;
          pvStack_110 = (void *)0x0;
        }
        FUN_009c8464(auStack_160,1);
        goto LAB_00ba0938;
      }
    }
LAB_00ba064c:
    sVar3 = sVar16;
    if ((bVar4 & 1) != 0) {
      sVar3 = sVar19;
    }
    if ((bVar5 & 1) != 0) {
      sVar17 = sVar6;
    }
    if (sVar3 != sVar17) {
LAB_00ba06c8:
      uVar8 = FUN_009580b8();
      FUN_0095e21c(uVar8,*plVar1 + 0x3d28,1);
      FUN_00cbb218(*plVar1 + 0x3d28,0);
      lVar13 = *(long *)(lVar13 + 0x28);
      goto LAB_00ba093c;
    }
    pvVar14 = *(void **)(lVar18 + 0x3d38);
    if ((bVar4 & 1) == 0) {
      pvVar14 = (void *)(lVar18 + 0x3d29);
    }
    pcVar10 = DAT_0320ffb8;
    if ((bVar5 & 1) == 0) {
      pcVar10 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar12 = (char *)(lVar18 + 0x3d29);
        do {
          if (*pcVar12 != *pcVar10) goto LAB_00ba06c8;
          sVar16 = sVar16 - 1;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        } while (sVar16 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar14,pcVar10,sVar3), iVar7 != 0)) goto LAB_00ba06c8;
  }
LAB_00ba0938:
  lVar13 = *(long *)(lVar13 + 0x28);
LAB_00ba093c:
  if (lVar13 != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba0a68(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  size_t sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  void *pvVar14;
  long lVar15;
  size_t sVar16;
  size_t sVar17;
  long lVar18;
  size_t sVar19;
  undefined8 uStack_178;
  void *pvStack_170;
  ulong uStack_168;
  void *pvStack_160;
  byte bStack_158;
  undefined7 uStack_157;
  void *pvStack_148;
  undefined4 uStack_140;
  undefined8 uStack_13c;
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
  long lStack_80;
  
  sVar7 = DAT_0320ffb0;
  bVar6 = DAT_0320ffa8;
  lVar5 = tpidr_el0;
  lStack_80 = *(long *)(lVar5 + 0x28);
  plVar1 = (long *)(param_1 + 0x120b0);
  lVar18 = *plVar1;
  if (lVar18 == 0) goto LAB_00ba0e74;
  bVar4 = *(byte *)(lVar18 + 0x3d60);
  if (*(char *)(param_1 + 0x12671) == '\0') {
    sVar19 = *(size_t *)(lVar18 + 0x3d68);
    sVar16 = (size_t)(bVar4 >> 1);
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
  }
  else {
    sVar19 = *(size_t *)(lVar18 + 0x3d68);
    sVar16 = (size_t)(bVar4 >> 1);
    sVar3 = sVar16;
    if ((bVar4 & 1) != 0) {
      sVar3 = sVar19;
    }
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
    sVar2 = sVar17;
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar3 == sVar2) {
      pvVar14 = *(void **)(lVar18 + 0x3d70);
      if ((bVar4 & 1) == 0) {
        pvVar14 = (void *)(lVar18 + 0x3d61);
      }
      pcVar12 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar12 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (sVar3 != 0) {
          pcVar13 = (char *)(lVar18 + 0x3d61);
          lVar15 = -sVar16;
          do {
            if (*pcVar13 != *pcVar12) goto LAB_00ba0b70;
            pcVar13 = pcVar13 + 1;
            lVar15 = lVar15 + 1;
            pcVar12 = pcVar12 + 1;
          } while (lVar15 != 0);
        }
      }
      else if ((sVar3 != 0) && (iVar8 = memcmp(pvVar14,pcVar12,sVar3), iVar8 != 0))
      goto LAB_00ba0b70;
      FUN_00b26098(&ppuStack_130);
      uVar10 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
      thunk_FUN_00e7051c(&uStack_168,uVar10);
      FUN_008fcdb8(&bStack_158,&DAT_0320ffa8);
      uStack_140 = 0;
      uStack_13c = 0x41a00000;
      FUN_009c82b4(auStack_128,&uStack_168);
      if ((bStack_158 & 1) != 0) {
        operator_delete(pvStack_148);
      }
      if (pvStack_160 != (void *)0x0) {
        operator_delete__(pvStack_160);
        uStack_168 = 0;
        pvStack_160 = (void *)0x0;
      }
      uVar10 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&uStack_178,uVar10);
      FUN_00e705c8(&uStack_168,"[PLAYER_NAME]");
      uVar10 = FUN_00f08be8(*plVar1 + 0x330);
      FUN_00e71248(&uStack_178,0,&uStack_168,uVar10);
      if (pvStack_160 != (void *)0x0) {
        operator_delete__(pvStack_160);
        uStack_168 = 0;
        pvStack_160 = (void *)0x0;
      }
      thunk_FUN_00e7051c(&uStack_168,&uStack_178);
      FUN_008fcdb8(&bStack_158,&DAT_0320ffa8);
      uStack_140 = 1;
      uStack_13c = 0x41a00000;
      FUN_009c82b4(auStack_128,&uStack_168);
      if ((bStack_158 & 1) != 0) {
        operator_delete(pvStack_148);
      }
      if (pvStack_160 != (void *)0x0) {
        operator_delete__(pvStack_160);
        uStack_168 = 0;
        pvStack_160 = (void *)0x0;
      }
      pcStack_110 = thunk_FUN_00ba0eb0;
      lStack_118 = param_1;
      uVar10 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&uStack_e0,uVar10);
      lStack_100 = param_1 + 0xaee0;
      uStack_a0 = 0x3f400000;
      uVar11 = FUN_0092ea9c();
      uStack_9c = 0x44160000;
      if ((uVar11 & 1) == 0) {
        uStack_9c = 0x43e10000;
      }
      FUN_008fa54c(&uStack_168,"userTeamInvite");
      FUN_00b28094(param_1 + 0x12360,&uStack_168,&ppuStack_130);
      if ((uStack_168 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_157,bStack_158));
      }
      if (pvStack_170 != (void *)0x0) {
        operator_delete__(pvStack_170);
        uStack_178 = 0;
        pvStack_170 = (void *)0x0;
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
      goto LAB_00ba0e74;
    }
  }
LAB_00ba0b70:
  sVar3 = sVar16;
  if ((bVar4 & 1) != 0) {
    sVar3 = sVar19;
  }
  if ((bVar6 & 1) != 0) {
    sVar17 = sVar7;
  }
  if (sVar3 == sVar17) {
    pvVar14 = *(void **)(lVar18 + 0x3d70);
    if ((bVar4 & 1) == 0) {
      pvVar14 = (void *)(lVar18 + 0x3d61);
    }
    pcVar12 = DAT_0320ffb8;
    if ((bVar6 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar13 = (char *)(lVar18 + 0x3d61);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00ba0bec;
          sVar16 = sVar16 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar12 = pcVar12 + 1;
        } while (sVar16 != 0);
      }
      goto LAB_00ba0e74;
    }
    if ((sVar3 == 0) || (iVar8 = memcmp(pvVar14,pcVar12,sVar3), iVar8 == 0)) goto LAB_00ba0e74;
  }
LAB_00ba0bec:
  uVar10 = FUN_009580b8();
  FUN_0095e34c(uVar10,*plVar1 + 0x3d60,1);
  uVar9 = FUN_00f048a4("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_00f048e0(&ppuStack_130,uVar9,0);
  FUN_00f04760(param_1,&ppuStack_130,1);
LAB_00ba0e74:
  if (*(long *)(lVar5 + 0x28) != lStack_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba03cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  void *pvStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x12530) != 0) {
    uVar6 = 0;
    lVar7 = 0xac;
    do {
      uVar2 = FUN_00e70b34(param_3,*(long *)(param_1 + 0x12538) + lVar7 + -0x8c);
      if (((uVar2 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x12538) + lVar7) == 3)) {
        uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar4 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar3,uVar4,uVar5,0,0);
        goto LAB_00ba0514;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x188;
    } while (uVar6 < *(uint *)(param_1 + 0x12530));
  }
  FUN_00916048(param_3);
  FUN_00910394(param_1 + 0x12610,param_3);
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  thunk_FUN_00e7051c(&uStack_68,uVar3);
  FUN_00b95f50(0x40200000,param_1,1,&uStack_68,1);
  if (pvStack_60 != (void *)0x0) {
    operator_delete__(pvStack_60);
    uStack_68 = 0;
    pvStack_60 = (void *)0x0;
  }
LAB_00ba0514:
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba01c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 0x120b0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x3d78) == 3) {
      uVar1 = (ulong)(*(byte *)(param_1 + 0x12638) >> 1);
      lVar5 = param_1 + 0x12639;
      if ((*(byte *)(param_1 + 0x12638) & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0x12640);
        lVar5 = *(long *)(param_1 + 0x12648);
      }
      FUN_008fcea8(param_1 + 0x12620,lVar5,uVar1);
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_TITLE",0);
      thunk_FUN_00e7051c(&local_48,uVar3);
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_DESCRIPTION",0);
      thunk_FUN_00e7051c(&local_58,uVar3);
      FUN_00e705c8(&local_68,"[PLAYER_NAME]");
      uVar3 = FUN_00f08be8(*(long *)(param_1 + 0x120b0) + 0x330);
      FUN_00e71248(&local_58,0,&local_68,uVar3);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_CONFIRM",0);
      uVar4 = FUN_00e6ce7c("MENU_FRIENDS_DELETE_CANCEL",0);
      FUN_00a9b9f8(&local_48,&local_58,uVar3,uVar4,&DAT_03210450,param_1,FUN_00ba0380,0,0);
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
    else {
      FUN_00ba03cc(param_1,param_2,lVar5 + 0x3ce0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ba0380(long param_1)

{
  FUN_0091605c(param_1 + 0x12620);
  *(undefined8 *)(param_1 + 0x120b0) = 0;
  FUN_008fce60(param_1 + 0x12638,&DAT_0320ffa8);
  return;
}




void FUN_00ba03cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x12530) != 0) {
    uVar6 = 0;
    lVar7 = 0xac;
    do {
      uVar2 = FUN_00e70b34(param_3,*(long *)(param_1 + 0x12538) + lVar7 + -0x8c);
      if (((uVar2 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x12538) + lVar7) == 3)) {
        uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar4 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar3,uVar4,uVar5,0,0);
        goto LAB_00ba0514;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x188;
    } while (uVar6 < *(uint *)(param_1 + 0x12530));
  }
  FUN_00916048(param_3);
  FUN_00910394(param_1 + 0x12610,param_3);
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  thunk_FUN_00e7051c(&local_68,uVar3);
  FUN_00b95f50(0x40200000,param_1,1,&local_68,1);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
LAB_00ba0514:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba0544(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  size_t sVar16;
  size_t sVar17;
  long lVar18;
  size_t sVar19;
  undefined8 local_178;
  void *local_170;
  undefined **local_168;
  undefined1 auStack_160 [16];
  long local_150;
  code *pcStack_148;
  long local_138;
  undefined8 local_118;
  void *local_110;
  byte local_108;
  void *local_f8;
  undefined4 local_d8;
  undefined4 local_d4;
  ulong local_b8;
  void *local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  void *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  
  sVar6 = DAT_0320ffb0;
  bVar5 = DAT_0320ffa8;
  lVar13 = tpidr_el0;
  lVar11 = *(long *)(lVar13 + 0x28);
  plVar1 = (long *)(param_1 + 0x120b0);
  lVar18 = *plVar1;
  if (lVar18 != 0) {
    bVar4 = *(byte *)(lVar18 + 0x3d28);
    if (*(char *)(param_1 + 0x12670) == '\0') {
      sVar19 = *(size_t *)(lVar18 + 0x3d30);
      sVar16 = (size_t)(bVar4 >> 1);
      sVar17 = (size_t)(DAT_0320ffa8 >> 1);
    }
    else {
      sVar19 = *(size_t *)(lVar18 + 0x3d30);
      sVar16 = (size_t)(bVar4 >> 1);
      sVar3 = sVar16;
      if ((bVar4 & 1) != 0) {
        sVar3 = sVar19;
      }
      sVar17 = (size_t)(DAT_0320ffa8 >> 1);
      sVar2 = sVar17;
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (sVar3 == sVar2) {
        pvVar14 = *(void **)(lVar18 + 0x3d38);
        if ((bVar4 & 1) == 0) {
          pvVar14 = (void *)(lVar18 + 0x3d29);
        }
        pcVar10 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar10 = &DAT_0320ffa9;
        }
        if ((bVar4 & 1) == 0) {
          if (sVar3 != 0) {
            pcVar12 = (char *)(lVar18 + 0x3d29);
            lVar15 = -sVar16;
            do {
              if (*pcVar12 != *pcVar10) goto LAB_00ba064c;
              pcVar12 = pcVar12 + 1;
              lVar15 = lVar15 + 1;
              pcVar10 = pcVar10 + 1;
            } while (lVar15 != 0);
          }
        }
        else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar14,pcVar10,sVar3), iVar7 != 0))
        goto LAB_00ba064c;
        FUN_00b26098(&local_168);
        uVar8 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
        thunk_FUN_00e7051c(&local_b8,uVar8);
        FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
        local_90 = 0;
        local_8c = 0x41a00000;
        FUN_009c82b4(auStack_160,&local_b8);
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if (local_b0 != (void *)0x0) {
          operator_delete__(local_b0);
          local_b8 = 0;
          local_b0 = (void *)0x0;
        }
        uVar8 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
        thunk_FUN_00e7051c(&local_178,uVar8);
        FUN_00e705c8(&local_b8,"[PLAYER_NAME]");
        uVar8 = FUN_00f08be8(*plVar1 + 0x330);
        FUN_00e71248(&local_178,0,&local_b8,uVar8);
        if (local_b0 != (void *)0x0) {
          operator_delete__(local_b0);
          local_b8 = 0;
          local_b0 = (void *)0x0;
        }
        thunk_FUN_00e7051c(&local_b8,&local_178);
        FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
        local_90 = 1;
        local_8c = 0x41a00000;
        FUN_009c82b4(auStack_160,&local_b8);
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if (local_b0 != (void *)0x0) {
          operator_delete__(local_b0);
          local_b8 = 0;
          local_b0 = (void *)0x0;
        }
        pcStack_148 = thunk_FUN_00ba0974;
        local_150 = param_1;
        uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00910394(&local_118,uVar8);
        local_138 = param_1 + 0xa8e8;
        local_d8 = 0x3f400000;
        uVar9 = FUN_0092ea9c();
        local_d4 = 0x44160000;
        if ((uVar9 & 1) == 0) {
          local_d4 = 0x43e10000;
        }
        FUN_008fa54c(&local_b8,"guildInvite");
        FUN_00b28094(param_1 + 0x12360,&local_b8,&local_168);
        if ((local_b8 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_a7,local_a8));
        }
        if (local_170 != (void *)0x0) {
          operator_delete__(local_170);
          local_178 = 0;
          local_170 = (void *)0x0;
        }
        local_168 = &PTR_FUN_027de7f0;
        if ((local_108 & 1) != 0) {
          operator_delete(local_f8);
        }
        if (local_110 != (void *)0x0) {
          operator_delete__(local_110);
          local_118 = 0;
          local_110 = (void *)0x0;
        }
        FUN_009c8464(auStack_160,1);
        goto LAB_00ba0938;
      }
    }
LAB_00ba064c:
    sVar3 = sVar16;
    if ((bVar4 & 1) != 0) {
      sVar3 = sVar19;
    }
    if ((bVar5 & 1) != 0) {
      sVar17 = sVar6;
    }
    if (sVar3 != sVar17) {
LAB_00ba06c8:
      uVar8 = FUN_009580b8();
      FUN_0095e21c(uVar8,*plVar1 + 0x3d28,1);
      FUN_00cbb218(*plVar1 + 0x3d28,0);
      lVar13 = *(long *)(lVar13 + 0x28);
      goto LAB_00ba093c;
    }
    pvVar14 = *(void **)(lVar18 + 0x3d38);
    if ((bVar4 & 1) == 0) {
      pvVar14 = (void *)(lVar18 + 0x3d29);
    }
    pcVar10 = DAT_0320ffb8;
    if ((bVar5 & 1) == 0) {
      pcVar10 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar12 = (char *)(lVar18 + 0x3d29);
        do {
          if (*pcVar12 != *pcVar10) goto LAB_00ba06c8;
          sVar16 = sVar16 - 1;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        } while (sVar16 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar14,pcVar10,sVar3), iVar7 != 0)) goto LAB_00ba06c8;
  }
LAB_00ba0938:
  lVar13 = *(long *)(lVar13 + 0x28);
LAB_00ba093c:
  if (lVar13 != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba0974(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  long lVar5;
  void *__s1;
  char *pcVar6;
  
  lVar5 = *(long *)(param_1 + 0x120b0);
  if (lVar5 != 0) {
    bVar2 = *(byte *)(lVar5 + 0x3d28);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar5 + 0x3d30);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar5 + 0x3d38);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x3d29);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar6 = (char *)(lVar5 + 0x3d29);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar6 != *__s2) {
              return;
            }
            pcVar6 = pcVar6 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      if (*(char *)(param_1 + 0x12670) != '\0') {
        uVar4 = FUN_009580b8();
        FUN_00962db8(uVar4,*(long *)(param_1 + 0x120b0) + 0x3d80);
        return;
      }
    }
  }
  return;
}




void FUN_00ba0974(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  long lVar5;
  void *__s1;
  char *pcVar6;
  
  lVar5 = *(long *)(param_1 + 0x120b0);
  if (lVar5 != 0) {
    bVar2 = *(byte *)(lVar5 + 0x3d28);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar5 + 0x3d30);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar5 + 0x3d38);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x3d29);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar6 = (char *)(lVar5 + 0x3d29);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar6 != *__s2) {
              return;
            }
            pcVar6 = pcVar6 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      if (*(char *)(param_1 + 0x12670) != '\0') {
        uVar4 = FUN_009580b8();
        FUN_00962db8(uVar4,*(long *)(param_1 + 0x120b0) + 0x3d80);
        return;
      }
    }
  }
  return;
}




void FUN_00ba0a68(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  size_t sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  void *pvVar14;
  long lVar15;
  size_t sVar16;
  size_t sVar17;
  long lVar18;
  size_t sVar19;
  undefined8 local_178;
  void *local_170;
  ulong local_168;
  void *local_160;
  byte local_158;
  undefined7 uStack_157;
  void *local_148;
  undefined4 local_140;
  undefined8 local_13c;
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
  long local_80;
  
  sVar7 = DAT_0320ffb0;
  bVar6 = DAT_0320ffa8;
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  plVar1 = (long *)(param_1 + 0x120b0);
  lVar18 = *plVar1;
  if (lVar18 == 0) goto LAB_00ba0e74;
  bVar4 = *(byte *)(lVar18 + 0x3d60);
  if (*(char *)(param_1 + 0x12671) == '\0') {
    sVar19 = *(size_t *)(lVar18 + 0x3d68);
    sVar16 = (size_t)(bVar4 >> 1);
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
  }
  else {
    sVar19 = *(size_t *)(lVar18 + 0x3d68);
    sVar16 = (size_t)(bVar4 >> 1);
    sVar3 = sVar16;
    if ((bVar4 & 1) != 0) {
      sVar3 = sVar19;
    }
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
    sVar2 = sVar17;
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar3 == sVar2) {
      pvVar14 = *(void **)(lVar18 + 0x3d70);
      if ((bVar4 & 1) == 0) {
        pvVar14 = (void *)(lVar18 + 0x3d61);
      }
      pcVar12 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar12 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (sVar3 != 0) {
          pcVar13 = (char *)(lVar18 + 0x3d61);
          lVar15 = -sVar16;
          do {
            if (*pcVar13 != *pcVar12) goto LAB_00ba0b70;
            pcVar13 = pcVar13 + 1;
            lVar15 = lVar15 + 1;
            pcVar12 = pcVar12 + 1;
          } while (lVar15 != 0);
        }
      }
      else if ((sVar3 != 0) && (iVar8 = memcmp(pvVar14,pcVar12,sVar3), iVar8 != 0))
      goto LAB_00ba0b70;
      FUN_00b26098(&local_130);
      uVar10 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
      thunk_FUN_00e7051c(&local_168,uVar10);
      FUN_008fcdb8(&local_158,&DAT_0320ffa8);
      local_140 = 0;
      local_13c = 0x41a00000;
      FUN_009c82b4(auStack_128,&local_168);
      if ((local_158 & 1) != 0) {
        operator_delete(local_148);
      }
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
        local_168 = 0;
        local_160 = (void *)0x0;
      }
      uVar10 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
      thunk_FUN_00e7051c(&local_178,uVar10);
      FUN_00e705c8(&local_168,"[PLAYER_NAME]");
      uVar10 = FUN_00f08be8(*plVar1 + 0x330);
      FUN_00e71248(&local_178,0,&local_168,uVar10);
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
        local_168 = 0;
        local_160 = (void *)0x0;
      }
      thunk_FUN_00e7051c(&local_168,&local_178);
      FUN_008fcdb8(&local_158,&DAT_0320ffa8);
      local_140 = 1;
      local_13c = 0x41a00000;
      FUN_009c82b4(auStack_128,&local_168);
      if ((local_158 & 1) != 0) {
        operator_delete(local_148);
      }
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
        local_168 = 0;
        local_160 = (void *)0x0;
      }
      pcStack_110 = thunk_FUN_00ba0eb0;
      local_118 = param_1;
      uVar10 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(&local_e0,uVar10);
      local_100 = param_1 + 0xaee0;
      local_a0 = 0x3f400000;
      uVar11 = FUN_0092ea9c();
      local_9c = 0x44160000;
      if ((uVar11 & 1) == 0) {
        local_9c = 0x43e10000;
      }
      FUN_008fa54c(&local_168,"userTeamInvite");
      FUN_00b28094(param_1 + 0x12360,&local_168,&local_130);
      if ((local_168 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_157,local_158));
      }
      if (local_170 != (void *)0x0) {
        operator_delete__(local_170);
        local_178 = 0;
        local_170 = (void *)0x0;
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
      goto LAB_00ba0e74;
    }
  }
LAB_00ba0b70:
  sVar3 = sVar16;
  if ((bVar4 & 1) != 0) {
    sVar3 = sVar19;
  }
  if ((bVar6 & 1) != 0) {
    sVar17 = sVar7;
  }
  if (sVar3 == sVar17) {
    pvVar14 = *(void **)(lVar18 + 0x3d70);
    if ((bVar4 & 1) == 0) {
      pvVar14 = (void *)(lVar18 + 0x3d61);
    }
    pcVar12 = DAT_0320ffb8;
    if ((bVar6 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar13 = (char *)(lVar18 + 0x3d61);
        do {
          if (*pcVar13 != *pcVar12) goto LAB_00ba0bec;
          sVar16 = sVar16 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar12 = pcVar12 + 1;
        } while (sVar16 != 0);
      }
      goto LAB_00ba0e74;
    }
    if ((sVar3 == 0) || (iVar8 = memcmp(pvVar14,pcVar12,sVar3), iVar8 == 0)) goto LAB_00ba0e74;
  }
LAB_00ba0bec:
  uVar10 = FUN_009580b8();
  FUN_0095e34c(uVar10,*plVar1 + 0x3d60,1);
  uVar9 = FUN_00f048a4("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_00f048e0(&local_130,uVar9,0);
  FUN_00f04760(param_1,&local_130,1);
LAB_00ba0e74:
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba0eb0(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  long lVar5;
  void *__s1;
  char *pcVar6;
  
  lVar5 = *(long *)(param_1 + 0x120b0);
  if (lVar5 != 0) {
    bVar2 = *(byte *)(lVar5 + 0x3d60);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar5 + 0x3d68);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar5 + 0x3d70);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x3d61);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar6 = (char *)(lVar5 + 0x3d61);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar6 != *__s2) {
              return;
            }
            pcVar6 = pcVar6 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      if (*(char *)(param_1 + 0x12671) != '\0') {
        uVar4 = FUN_009580b8();
        FUN_00963694(uVar4,*(long *)(param_1 + 0x120b0) + 0x3d80);
        return;
      }
    }
  }
  return;
}




void FUN_00ba0eb0(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  long lVar5;
  void *__s1;
  char *pcVar6;
  
  lVar5 = *(long *)(param_1 + 0x120b0);
  if (lVar5 != 0) {
    bVar2 = *(byte *)(lVar5 + 0x3d60);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar5 + 0x3d68);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar5 + 0x3d70);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x3d61);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar6 = (char *)(lVar5 + 0x3d61);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar6 != *__s2) {
              return;
            }
            pcVar6 = pcVar6 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      if (*(char *)(param_1 + 0x12671) != '\0') {
        uVar4 = FUN_009580b8();
        FUN_00963694(uVar4,*(long *)(param_1 + 0x120b0) + 0x3d80);
        return;
      }
    }
  }
  return;
}




void FUN_00ba0fa4(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  switch(param_3) {
  case 0:
    lVar3 = 0x12668;
    lVar4 = 0x4dc0;
    break;
  case 1:
    pcVar2 = "arrow_down";
    if (*(byte *)(param_1 + 0x12669) != 0) {
      pcVar2 = "arrow_right";
    }
    *(byte *)(param_1 + 0x12669) = *(byte *)(param_1 + 0x12669) ^ 1;
    FUN_00f0e578(param_1 + 0x58d0,pcVar2);
    *(undefined1 *)(param_1 + 0x1266a) = 1;
    goto switchD_00ba0fd0_default;
  case 2:
    lVar3 = 0x1266b;
    lVar4 = 0x63e0;
    break;
  case 3:
    lVar3 = 0x1266e;
    lVar4 = 0x6ef0;
    break;
  case 4:
    pbVar1 = (byte *)(param_1 + 0x1266f);
    pcVar2 = "arrow_down";
    if (*pbVar1 != 0) {
      pcVar2 = "arrow_right";
    }
    *pbVar1 = *pbVar1 ^ 1;
    FUN_00f0e578(param_1 + 0x9020,pcVar2);
    FUN_00915fd0(*pbVar1 == 0);
    if (*pbVar1 != 0) {
      FUN_00915f90(0);
    }
    lVar3 = FUN_009580b8();
    FUN_009658c8(lVar3 + 0x18);
    if ((*pbVar1 != 0) && (*(int *)(param_1 + 0x12070) == 0)) {
      FUN_00b16058(param_1 + 0x9140);
      *(uint *)(param_1 + 0x91c4) = *(uint *)(param_1 + 0x91c4) | 4;
    }
    goto switchD_00ba0fd0_default;
  case 5:
    lVar3 = 0x1266c;
    lVar4 = 0x7a00;
    break;
  case 6:
    lVar3 = 0x1266d;
    lVar4 = 0x8510;
    break;
  default:
    goto switchD_00ba0fd0_default;
  }
  pcVar2 = "arrow_down";
  if (*(byte *)(param_1 + lVar3) != 0) {
    pcVar2 = "arrow_right";
  }
  *(byte *)(param_1 + lVar3) = *(byte *)(param_1 + lVar3) ^ 1;
  FUN_00f0e578(param_1 + lVar4,pcVar2);
switchD_00ba0fd0_default:
  FUN_00b92674(param_1);
  return;
}

