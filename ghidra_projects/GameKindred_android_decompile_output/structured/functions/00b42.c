// functions/00b42 — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00b420b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
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
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP_TITLE",0);
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
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP",0);
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
  lStack_110 = param_1 + 0x5520;
  uStack_98 = 3;
  uStack_b0 = 0x3f800000;
  uVar3 = FUN_0092ea9c();
  uStack_ac = 0x449c4000;
  if ((uVar3 & 1) == 0) {
    uStack_ac = 0x446d8000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&uStack_90,"guildChestInfo");
  FUN_009badc0(uVar2,&uStack_90,&ppuStack_140);
  if ((uStack_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,bStack_80));
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




void thunk_FUN_00b42364(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed0418(param_1 + 0x298,1);
  uVar2 = FUN_00f048a4("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b420b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
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
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP_TITLE",0);
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
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP",0);
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
  local_110 = param_1 + 0x5520;
  local_98 = 3;
  local_b0 = 0x3f800000;
  uVar3 = FUN_0092ea9c();
  local_ac = 0x449c4000;
  if ((uVar3 & 1) == 0) {
    local_ac = 0x446d8000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_90,"guildChestInfo");
  FUN_009badc0(uVar2,&local_90,&local_140);
  if ((local_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,local_80));
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




void FUN_00b422a0(long param_1)

{
  FUN_00cbeb84(param_1 + 0x17728);
  FUN_00e6ce7c("MENU_GUILD_EDIT_SETTINGS_FORM_PANEL_TITLE",0);
  FUN_00cbeccc();
  return;
}




void FUN_00b422d0(long param_1)

{
  FUN_00cbec10(param_1 + 0x17728);
  FUN_00936744(param_1 + 0x34e98,FUN_00b435dc,FUN_00b4361c);
  return;
}




void FUN_00b42318(long param_1)

{
  FUN_00cbec10(param_1 + 0x17728);
  FUN_00936744(param_1 + 0x34e98,FUN_00b435dc,FUN_00b4361c);
  return;
}




void thunk_FUN_00b42364(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed0418(param_1 + 0x298,1);
  uVar2 = FUN_00f048a4("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b42364(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed0418(param_1 + 0x298,1);
  uVar2 = FUN_00f048a4("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b423e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e5c(param_2);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_0093618c();
    FUN_00b3fcfc(param_1,uVar2);
    return;
  }
  return;
}




void FUN_00b42420(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_00ad3a50(param_1 + 0x9ad0,0,0);
    return;
  }
  FUN_00b42474(param_1);
  return;
}




void FUN_00b42474(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  void *pvVar13;
  ulong uVar14;
  
  lVar7 = FUN_009580b8();
  uVar12 = *(uint *)(lVar7 + 0x53d8);
  if (uVar12 != 0) {
    bVar4 = *(byte *)(param_1 + 0x353f0);
    lVar7 = *(long *)(lVar7 + 0x53e0);
    uVar14 = 0;
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x353f8);
    }
    do {
      lVar10 = lVar7 + uVar14 * 0x1a8;
      bVar3 = *(byte *)(lVar10 + 0x28);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar10 + 0x30);
      }
      if (sVar1 == sVar2) {
        pvVar13 = *(void **)(lVar7 + uVar14 * 0x1a8 + 0x38);
        if ((bVar3 & 1) == 0) {
          pvVar13 = (void *)(lVar10 + 0x29);
        }
        pcVar8 = (char *)(param_1 + 0x353f1);
        if ((bVar4 & 1) != 0) {
          pcVar8 = *(char **)(param_1 + 0x35400);
        }
        if ((bVar3 & 1) == 0) {
          if (sVar2 == 0) {
LAB_00b42580:
            bVar5 = true;
            goto LAB_00b42584;
          }
          pcVar11 = (char *)(lVar10 + 0x29);
          lVar10 = -(ulong)(bVar3 >> 1);
          while (*pcVar11 == *pcVar8) {
            pcVar11 = pcVar11 + 1;
            lVar10 = lVar10 + 1;
            pcVar8 = pcVar8 + 1;
            if (lVar10 == 0) goto LAB_00b42580;
          }
        }
        else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar13,pcVar8,sVar2), iVar6 == 0))
        goto LAB_00b42580;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar12);
  }
  bVar5 = false;
LAB_00b42584:
  lVar7 = FUN_009580b8();
  bVar4 = *(byte *)(lVar7 + 0x5478);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(lVar7 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 != sVar1) {
LAB_00b4261c:
    FUN_00ad3a50(param_1 + 0x9ad0,0,0);
    *(uint *)(param_1 + 0x813c) = *(uint *)(param_1 + 0x813c) & 0xfffffffb;
    uVar12 = *(uint *)(param_1 + 0x49bc) | 4;
    goto LAB_00b426b4;
  }
  pvVar13 = *(void **)(lVar7 + 0x5488);
  if ((bVar4 & 1) == 0) {
    pvVar13 = (void *)(lVar7 + 0x5479);
  }
  pcVar8 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    pcVar8 = &DAT_0320ffa9;
  }
  if ((bVar4 & 1) == 0) {
    if (sVar2 != 0) {
      pcVar11 = (char *)(lVar7 + 0x5479);
      lVar7 = -(ulong)(bVar4 >> 1);
      do {
        if (*pcVar11 != *pcVar8) goto LAB_00b4261c;
        pcVar11 = pcVar11 + 1;
        lVar7 = lVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (lVar7 != 0);
    }
LAB_00b42670:
    if (bVar5) goto LAB_00b42664;
LAB_00b4267c:
    uVar9 = 0;
    bVar5 = *(int *)(param_1 + 0x35408) == 0;
  }
  else {
    if (sVar2 == 0) goto LAB_00b42670;
    iVar6 = memcmp(pvVar13,pcVar8,sVar2);
    if (iVar6 != 0) goto LAB_00b4261c;
    if (!bVar5) goto LAB_00b4267c;
LAB_00b42664:
    bVar5 = true;
    uVar9 = 1;
  }
  FUN_00ad3a50(param_1 + 0x9ad0,bVar5,uVar9);
  *(uint *)(param_1 + 0x813c) = *(uint *)(param_1 + 0x813c) | 4;
  uVar12 = *(uint *)(param_1 + 0x49bc) & 0xfffffffb;
LAB_00b426b4:
  *(uint *)(param_1 + 0x49bc) = uVar12;
  return;
}




void FUN_00b426d4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  size_t sVar4;
  ulong uVar5;
  size_t sVar6;
  byte bVar7;
  long lVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  char *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  ulong uVar23;
  char *pcVar24;
  void *pvVar25;
  char *pcVar26;
  size_t sVar27;
  byte bVar28;
  size_t sVar29;
  byte bVar30;
  size_t sVar31;
  size_t sVar32;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  void *local_90;
  void *local_88;
  ulong local_80;
  void *pvStack_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  bVar30 = *(byte *)(param_2 + 0x180);
  sVar29 = (ulong)(bVar30 >> 1);
  if ((bVar30 & 1) != 0) {
    sVar29 = *(size_t *)(param_2 + 0x188);
  }
  sVar6 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar6 = DAT_0320ffb0;
  }
  pcVar24 = (char *)(param_2 + 0x180);
  if (sVar29 == sVar6) {
    pvVar25 = *(void **)(param_2 + 400);
    if ((bVar30 & 1) == 0) {
      pvVar25 = (void *)(param_2 + 0x181);
    }
    pbVar19 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar19 = &DAT_0320ffa9;
    }
    if ((bVar30 & 1) == 0) {
      if (sVar29 != 0) {
        pbVar22 = (byte *)(param_2 + 0x181);
        lVar21 = -(ulong)(bVar30 >> 1);
        do {
          if (*pbVar22 != *pbVar19) goto LAB_00b427a8;
          pbVar22 = pbVar22 + 1;
          lVar21 = lVar21 + 1;
          pbVar19 = pbVar19 + 1;
        } while (lVar21 != 0);
      }
    }
    else if ((sVar29 != 0) && (iVar12 = memcmp(pvVar25,pbVar19,sVar29), iVar12 != 0))
    goto LAB_00b427a8;
LAB_00b42834:
    bVar10 = false;
  }
  else {
LAB_00b427a8:
    lVar21 = FUN_009580b8();
    bVar30 = *(byte *)(param_2 + 0x180);
    bVar7 = *(byte *)(lVar21 + 0x5478);
    sVar29 = (ulong)(bVar30 >> 1);
    if ((bVar30 & 1) != 0) {
      sVar29 = *(size_t *)(param_2 + 0x188);
    }
    sVar6 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      sVar6 = *(size_t *)(lVar21 + 0x5480);
    }
    bVar10 = false;
    if (sVar29 == sVar6) {
      pvVar25 = *(void **)(param_2 + 400);
      pcVar26 = *(char **)(lVar21 + 0x5488);
      if ((bVar30 & 1) == 0) {
        pvVar25 = (void *)(param_2 + 0x181);
      }
      if ((bVar7 & 1) == 0) {
        pcVar26 = (char *)(lVar21 + 0x5479);
      }
      if ((bVar30 & 1) == 0) {
        if (sVar29 != 0) {
          pcVar18 = (char *)(param_2 + 0x181);
          lVar21 = -(ulong)(bVar30 >> 1);
          do {
            if (*pcVar18 != *pcVar26) goto LAB_00b42834;
            pcVar18 = pcVar18 + 1;
            lVar21 = lVar21 + 1;
            pcVar26 = pcVar26 + 1;
          } while (lVar21 != 0);
        }
      }
      else if (sVar29 != 0) {
        iVar12 = memcmp(pvVar25,pcVar26,sVar29);
        bVar10 = iVar12 == 0;
        goto LAB_00b42854;
      }
      bVar10 = true;
    }
  }
LAB_00b42854:
  lVar21 = FUN_009580b8();
  bVar30 = *(byte *)(param_2 + 0x180);
  bVar7 = *(byte *)(lVar21 + 0x5478);
  sVar29 = (ulong)(bVar30 >> 1);
  if ((bVar30 & 1) != 0) {
    sVar29 = *(size_t *)(param_2 + 0x188);
  }
  sVar6 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar6 = *(size_t *)(lVar21 + 0x5480);
  }
  if (sVar29 == sVar6) {
    pvVar25 = *(void **)(param_2 + 400);
    pcVar26 = *(char **)(lVar21 + 0x5488);
    if ((bVar30 & 1) == 0) {
      pvVar25 = (void *)(param_2 + 0x181);
    }
    if ((bVar7 & 1) == 0) {
      pcVar26 = (char *)(lVar21 + 0x5479);
    }
    if ((bVar30 & 1) == 0) {
      if (sVar29 != 0) {
        pcVar18 = (char *)(param_2 + 0x181);
        lVar21 = -(ulong)(bVar30 >> 1);
        do {
          if (*pcVar18 != *pcVar26) goto LAB_00b428ec;
          pcVar18 = pcVar18 + 1;
          lVar21 = lVar21 + 1;
          pcVar26 = pcVar26 + 1;
        } while (lVar21 != 0);
      }
    }
    else if ((sVar29 != 0) && (iVar12 = memcmp(pvVar25,pcVar26,sVar29), iVar12 != 0))
    goto LAB_00b428ec;
    if ((char)param_1[0x3020] == '\0') {
      FUN_00bb9ce8(param_1 + 0x2ee5,param_2 + 0x98);
    }
  }
  else {
LAB_00b428ec:
    lVar21 = FUN_00cce574();
    if (*(char *)(lVar21 + 0x20) != '\0') {
      FUN_00b015a0(param_1 + 0x964,param_2 + 0x198);
      FUN_008fa54c(&local_80,"IDLE_CLOSED");
      FUN_00b013a0(0x3f333333,param_1 + 0x964,&local_80);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  pbVar19 = (byte *)(param_1 + 0x6a7e);
  if (*(char *)(param_2 + 0x1d0) == '\0') {
    bVar7 = *(byte *)(param_2 + 0x180);
    sVar31 = *(size_t *)(param_2 + 0x188);
    bVar30 = *pbVar19;
    sVar32 = param_1[0x6a7f];
    sVar29 = (size_t)(bVar7 >> 1);
    sVar27 = (size_t)(bVar30 >> 1);
    sVar6 = sVar29;
    if ((bVar7 & 1) != 0) {
      sVar6 = sVar31;
    }
    sVar4 = sVar27;
    if ((bVar30 & 1) != 0) {
      sVar4 = sVar32;
    }
    bVar28 = bVar7 & 1;
    if (sVar6 == sVar4) {
      pvVar25 = *(void **)(param_2 + 400);
      pcVar26 = (char *)param_1[0x6a80];
      if ((bVar7 & 1) == 0) {
        pvVar25 = (void *)(param_2 + 0x181);
      }
      if ((bVar30 & 1) == 0) {
        pcVar26 = (char *)((long)param_1 + 0x353f1);
      }
      if ((bVar7 & 1) == 0) {
        if (sVar6 != 0) {
          lVar21 = -sVar29;
          pcVar18 = pcVar24;
          do {
            pcVar18 = pcVar18 + 1;
            if (*pcVar18 != *pcVar26) goto LAB_00b42ab8;
            lVar21 = lVar21 + 1;
            pcVar26 = pcVar26 + 1;
          } while (lVar21 != 0);
        }
        bVar28 = 0;
      }
      else {
        if (sVar6 != 0) {
          iVar12 = memcmp(pvVar25,pcVar26,sVar6);
          bVar11 = iVar12 != 0;
          goto LAB_00b42f84;
        }
        bVar28 = 1;
      }
    }
    else {
LAB_00b42ab8:
      bVar11 = true;
LAB_00b42f84:
      if (!(bool)(bVar10 | bVar11 ^ 1U)) goto LAB_00b43274;
    }
  }
  else {
    bVar30 = *pbVar19;
    sVar31 = *(size_t *)(param_2 + 0x188);
    sVar32 = param_1[0x6a7f];
    sVar27 = (size_t)(bVar30 >> 1);
    bVar28 = *(byte *)(param_2 + 0x180) & 1;
    sVar29 = (size_t)(*(byte *)(param_2 + 0x180) >> 1);
  }
  sVar6 = sVar27;
  if ((bVar30 & 1) != 0) {
    sVar6 = sVar32;
  }
  if (bVar28 != 0) {
    sVar29 = sVar31;
  }
  if (sVar6 == sVar29) {
    pvVar25 = (void *)param_1[0x6a80];
    pbVar22 = *(byte **)(param_2 + 400);
    if ((bVar30 & 1) == 0) {
      pvVar25 = (void *)((long)param_1 + 0x353f1);
    }
    if (bVar28 == 0) {
      pbVar22 = (byte *)(param_2 + 0x181);
    }
    pbVar9 = pbVar19;
    if ((bVar30 & 1) == 0) {
      while (sVar6 != 0) {
        if (pbVar9[1] != *pbVar22) goto LAB_00b42acc;
        pbVar22 = pbVar22 + 1;
        sVar27 = sVar27 - 1;
        pbVar9 = pbVar9 + 1;
        sVar6 = sVar27;
      }
    }
    else if ((sVar6 != 0) && (iVar12 = memcmp(pvVar25,pbVar22,sVar6), iVar12 != 0))
    goto LAB_00b42acc;
  }
  else {
LAB_00b42acc:
    *(undefined1 *)(param_1 + 0x6a87) = 0;
  }
  FUN_008fce60(pbVar19,pcVar24);
  bVar30 = *pbVar19;
  sVar29 = (ulong)(bVar30 >> 1);
  if ((bVar30 & 1) != 0) {
    sVar29 = param_1[0x6a7f];
  }
  sVar6 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar6 = DAT_0320ffb0;
  }
  if (sVar29 == sVar6) {
    pvVar25 = (void *)param_1[0x6a80];
    if ((bVar30 & 1) == 0) {
      pvVar25 = (void *)((long)param_1 + 0x353f1);
    }
    pbVar22 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar22 = &DAT_0320ffa9;
    }
    if ((bVar30 & 1) == 0) {
      if (sVar29 != 0) {
        lVar21 = -(ulong)(bVar30 >> 1);
        do {
          pbVar19 = pbVar19 + 1;
          if (*pbVar19 != *pbVar22) goto LAB_00b42b88;
          lVar21 = lVar21 + 1;
          pbVar22 = pbVar22 + 1;
        } while (lVar21 != 0);
      }
      goto LAB_00b43274;
    }
    if ((sVar29 == 0) || (iVar12 = memcmp(pvVar25,pbVar22,sVar29), iVar12 == 0)) goto LAB_00b43274;
  }
LAB_00b42b88:
  uVar14 = FUN_00e84e5c(param_2);
  if ((uVar14 & 1) == 0) goto LAB_00b43274;
  *(undefined4 *)(param_1 + 0x6a81) = *(undefined4 *)(param_2 + 0x1d4);
  FUN_00e70570(&local_80,param_2 + 0x40);
  FUN_00f0d75c(param_1 + 0x299,&local_80);
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    local_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  FUN_008fa54c(&local_98,"GUILD.CHESTS.");
  uVar14 = *(ulong *)(param_2 + 0x48);
  lVar21 = *(long *)(param_2 + 0x50);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    lVar21 = param_2 + 0x41;
    uVar14 = (ulong)(*(byte *)(param_2 + 0x40) >> 1);
  }
  puVar15 = (ulong *)FUN_0090de84(&local_98,lVar21,uVar14);
  local_70 = (void *)puVar15[2];
  pvStack_78 = (void *)puVar15[1];
  local_80 = *puVar15;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = 0;
  pvVar25 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pvVar25 = local_70;
  }
  FUN_0099cfec(param_1 + 0x6a82,pvVar25,0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  FUN_00e70570(&local_80,param_2 + 0x58);
  FUN_00ac5fdc(param_1 + 0xfa,&local_80);
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    local_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  FUN_00e70510(&local_80);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x90));
  FUN_00f0d75c(param_1 + 0x4ca,&local_80);
  *(undefined4 *)((long)param_1 + 0x35434) = *(undefined4 *)(param_2 + 0x90);
  FUN_00b09fa8(param_1 + 0x680,*(undefined4 *)(param_2 + 0x1b0),*(undefined4 *)(param_2 + 0x1b8),
               *(undefined4 *)(param_2 + 0x1b4));
  FUN_00ad40e4(param_1 + 0x135a,param_2);
  plVar1 = param_1 + 0x507;
  FUN_00af9aa0(plVar1,"GUILD_BUFF_STAR_1");
  plVar2 = param_1 + 0x901;
  FUN_00f0d75c(plVar2,&DAT_03210450);
  if (*(int *)(param_2 + 0x1e8) != 0) {
    lVar21 = 0;
    uVar14 = 0;
    bVar10 = false;
    do {
      uVar16 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_BUFF_EXPIRES_LABEL",0);
      thunk_FUN_00e7051c(&local_98,uVar16);
      pbVar19 = (byte *)(*(long *)(param_2 + 0x1f0) + lVar21);
      bVar30 = *pbVar19;
      uVar20 = *(ulong *)(pbVar19 + 8);
      uVar23 = (ulong)(bVar30 >> 1);
      uVar5 = uVar23;
      if ((bVar30 & 1) != 0) {
        uVar5 = uVar20;
      }
      if (uVar5 == 9) {
        iVar12 = FUN_0090d610(pbVar19,0,0xffffffffffffffff,"fire_buff",9);
        if (iVar12 != 0) {
          pbVar19 = (byte *)(*(long *)(param_2 + 0x1f0) + lVar21);
          bVar30 = *pbVar19;
          uVar20 = *(ulong *)(pbVar19 + 8);
          uVar23 = (ulong)(bVar30 >> 1);
          goto LAB_00b42dd4;
        }
        FUN_00af9aa0(plVar1,"GUILD_BUFF_STAR_3");
        FUN_00cb55c0(&local_a8,&local_98,(long)*(int *)(*(long *)(param_2 + 0x1f0) + lVar21 + 0x1c),
                     1);
        FUN_00f0d75c(plVar2,&local_a8);
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        bVar10 = true;
      }
      else {
        pbVar19 = (byte *)(*(long *)(param_2 + 0x1f0) + uVar14 * 0x20);
LAB_00b42dd4:
        if ((bVar30 & 1) != 0) {
          uVar23 = uVar20;
        }
        if ((uVar23 == 9) &&
           (iVar12 = FUN_0090d610(pbVar19,0,0xffffffffffffffff,"heat_buff",9),
           !bVar10 && iVar12 == 0)) {
          FUN_00af9aa0(plVar1,"GUILD_BUFF_STAR_2");
          FUN_00cb55c0(&local_a8,&local_98,
                       (long)*(int *)(*(long *)(param_2 + 0x1f0) + lVar21 + 0x1c),1);
          FUN_00f0d75c(plVar2,&local_a8);
          if (local_a0 != (void *)0x0) {
            operator_delete__(local_a0);
            local_a8 = 0;
            local_a0 = (void *)0x0;
          }
          bVar10 = false;
        }
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      uVar14 = uVar14 + 1;
      lVar21 = lVar21 + 0x20;
    } while (uVar14 < *(uint *)(param_2 + 0x1e8));
  }
  uVar16 = FUN_00f08be8(param_1 + 0x91b);
  uVar13 = FUN_00e70b88(uVar16,&DAT_03210450);
  puVar3 = (uint *)(param_1 + 0x6a86);
  *(uint *)((long)param_1 + 0x479c) =
       *(uint *)((long)param_1 + 0x479c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x479c) & 3 | (uVar13 & 1) << 2;
  uVar13 = *(uint *)(param_2 + 0x94);
  if (uVar13 != *puVar3) {
    if (9 < uVar13) {
      uVar13 = 10;
    }
    *puVar3 = uVar13;
    if ((char)param_1[0x6a87] == '\0') {
      FUN_00b40294(param_1);
      uVar13 = *puVar3;
    }
  }
  switch(uVar13) {
  case 1:
    pcVar26 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar26 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar26 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar26 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar26 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar26 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar26 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar26 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar26 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar26 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar17 = &DAT_03210450;
    goto LAB_00b43078;
  }
  puVar17 = (undefined8 *)FUN_00e6ce7c(pcVar26,0);
LAB_00b43078:
  FUN_00f0d75c(param_1 + 0x65a,puVar17);
  FUN_00cb6184(&local_98,*(undefined4 *)(param_2 + 0x98),0);
  FUN_00cb6184(&local_a8,*(int *)(param_2 + 0x98) + 1,0);
  uVar16 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_VALUE",0);
  thunk_FUN_00e7051c(&local_b8,uVar16);
  FUN_00e705c8(&local_c8,"[START_HOUR]");
  FUN_00e71248(&local_b8,0,&local_c8,&local_98);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  FUN_00e705c8(&local_c8,"[END_HOUR]");
  FUN_00e71248(&local_b8,0,&local_c8,&local_a8);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x1334,&local_b8);
  FUN_00b42474(param_1);
  lVar21 = FUN_009580b8();
  if ((int)*(uint *)(lVar21 + 0x5634) < 0) {
LAB_00b431f8:
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if (*(int *)(*(long *)(lVar21 + 0x5268) + (ulong)*(uint *)(lVar21 + 0x5634) * 0x108 + 0x50) == 4
       ) {
      lVar21 = FUN_009580b8();
      bVar30 = *(byte *)(param_2 + 0x180);
      bVar7 = *(byte *)(lVar21 + 0x5478);
      sVar29 = (ulong)(bVar30 >> 1);
      if ((bVar30 & 1) != 0) {
        sVar29 = *(size_t *)(param_2 + 0x188);
      }
      sVar6 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        sVar6 = *(size_t *)(lVar21 + 0x5480);
      }
      uVar13 = 0;
      if (sVar29 == sVar6) {
        pvVar25 = *(void **)(param_2 + 400);
        pcVar26 = *(char **)(lVar21 + 0x5488);
        if ((bVar30 & 1) == 0) {
          pvVar25 = (void *)(param_2 + 0x181);
        }
        if ((bVar7 & 1) == 0) {
          pcVar26 = (char *)(lVar21 + 0x5479);
        }
        if ((bVar30 & 1) == 0) {
          if (sVar29 == 0) {
LAB_00b432c0:
            uVar13 = 4;
          }
          else {
            lVar21 = -(ulong)(bVar30 >> 1);
            do {
              pcVar24 = pcVar24 + 1;
              if (*pcVar24 != *pcVar26) goto LAB_00b431f8;
              pcVar26 = pcVar26 + 1;
              lVar21 = lVar21 + 1;
              uVar13 = 4;
            } while (lVar21 != 0);
          }
        }
        else {
          if (sVar29 == 0) goto LAB_00b432c0;
          iVar12 = memcmp(pvVar25,pcVar26,sVar29);
          uVar13 = (uint)(iVar12 == 0) << 2;
        }
      }
    }
  }
  *(uint *)((long)param_1 + 0x167c) = *(uint *)((long)param_1 + 0x167c) & 0xfffffffb | uVar13;
  *(uint *)((long)param_1 + 0x1c74) = *(uint *)((long)param_1 + 0x1c74) & 0xfffffffb | uVar13;
  FUN_00b42364(param_1);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    local_80 = 0;
    pvStack_78 = (void *)0x0;
  }
LAB_00b43274:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

