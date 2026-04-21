// functions/00ba6 — 4 functions
#include "libGameKindred.h"




void FUN_00ba6b60(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  void *pvVar12;
  char *pcVar13;
  byte *pbVar14;
  
  bVar3 = *(byte *)(param_2 + 0x40);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 0x48);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar12 = *(void **)(param_2 + 0x50);
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_2 + 0x41);
    }
    pcVar13 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar13 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar10 = (char *)(param_2 + 0x41);
        lVar11 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar10 != *pcVar13) goto LAB_00ba6c0c;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          pcVar13 = pcVar13 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar6 = memcmp(pvVar12,pcVar13,sVar1), iVar6 != 0)) goto LAB_00ba6c0c;
    *(undefined1 *)((long)param_1 + 0x7a35c) = 0;
    FUN_00ba6e60(param_1,0);
    goto LAB_00ba6d3c;
  }
LAB_00ba6c0c:
  uVar7 = FUN_009580c4();
  bVar5 = false;
  if ((uVar7 & 1) != 0) {
    lVar11 = FUN_009580b8();
    bVar3 = *(byte *)(lVar11 + 0x5478);
    bVar4 = *(byte *)(param_2 + 0x180);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar11 + 0x5480);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 0x188);
    }
    bVar5 = false;
    if (sVar1 == sVar2) {
      pvVar12 = *(void **)(lVar11 + 0x5488);
      pcVar13 = *(char **)(param_2 + 400);
      if ((bVar3 & 1) == 0) {
        pvVar12 = (void *)(lVar11 + 0x5479);
      }
      if ((bVar4 & 1) == 0) {
        pcVar13 = (char *)(param_2 + 0x181);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar10 = (char *)(lVar11 + 0x5479);
          lVar11 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar10 != *pcVar13) {
              bVar5 = false;
              goto LAB_00ba6ce8;
            }
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + 1;
            pcVar13 = pcVar13 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (sVar1 != 0) {
        iVar6 = memcmp(pvVar12,pcVar13,sVar1);
        bVar5 = iVar6 == 0;
        goto LAB_00ba6ce8;
      }
      bVar5 = true;
    }
  }
LAB_00ba6ce8:
  *(bool *)((long)param_1 + 0x7a35c) = bVar5;
  if ((*(uint *)((long)param_1 + 0x404) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) | 4;
    FUN_00b4972c(param_1 + 0x70,1);
  }
  *(uint *)((long)param_1 + 0x69544) = *(uint *)((long)param_1 + 0x69544) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6572c) = *(uint *)((long)param_1 + 0x6572c) & 0xfffffffb;
LAB_00ba6d3c:
  pbVar14 = (byte *)((long)param_1 + 0x7a35c);
  pcVar13 = "MENU_PROFILE_GUILD_CREATE_TEAM_HEADER";
  if (*pbVar14 != 0) {
    pcVar13 = "MENU_PROFILE_GUILD_RENAME_TEAM_HEADER";
  }
  uVar8 = FUN_00e6ce7c(pcVar13,0);
  FUN_00f0d75c(param_1 + 0xd39d,uVar8);
  pcVar13 = "MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB";
  if (*pbVar14 != 0) {
    pcVar13 = "MENU_PROFILE_GUILD_RENAME_FIELD_BLURB";
  }
  uVar8 = FUN_00e6ce7c(pcVar13,0);
  FUN_00f0d75c(param_1 + 0xd436,uVar8);
  *(uint *)((long)param_1 + 0x75754) =
       *(uint *)((long)param_1 + 0x75754) & 0xfffffffb | (uint)*pbVar14 << 2;
  uVar9 = ((uint)*pbVar14 << 2 ^ 4) & 0xfc;
  *(uint *)((long)param_1 + 0x76d14) = *(uint *)((long)param_1 + 0x76d14) & 0xfffffffb | uVar9;
  *(uint *)((long)param_1 + 0x785ac) = *(uint *)((long)param_1 + 0x785ac) & 0xfffffffb | uVar9;
  FUN_00b4a0f0(param_1 + 0x70,param_2);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar9 = *(uint *)((long)param_1 + 0x84);
  if ((uVar9 >> 2 & 1) == 0) {
    (**(code **)(*param_1 + 0x140))(param_1,1);
    uVar9 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar9 | 4;
  return;
}




void FUN_00ba6e60(long param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3dcccccd;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  FUN_00ba86e8(uVar1,param_1,param_2 & 1);
  *(byte *)(param_1 + 0x7a35d) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x7a35c) == '\0') {
      FUN_00ba4198(0x3dcccccd,param_1,1,1,1);
      return;
    }
    *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) | 4;
    *(uint *)(param_1 + 0x69544) = *(uint *)(param_1 + 0x69544) & 0xfffffffb;
    *(uint *)(param_1 + 0x6572c) = *(uint *)(param_1 + 0x6572c) & 0xfffffffb;
  }
  else {
    FUN_00ba8990(param_1);
    if (*(char *)(param_1 + 0x7a35c) != '\0') {
      *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) & 0xfffffffb;
    }
  }
  return;
}




void FUN_00ba6f54(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba72b0;
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar5 = FUN_009580b8();
    FUN_009658c8(lVar5 + 0x18);
    FUN_00904858();
    goto LAB_00ba72b0;
  }
  pbVar12 = (byte *)(param_2 + 0x30);
  bVar1 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar11 = (ulong)(bVar1 >> 1);
  uVar4 = uVar11;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0x10) {
    iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_guild",0x10);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
      goto LAB_00ba6ffc;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
    pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_ALREADY_IN";
LAB_00ba7274:
    uVar7 = FUN_00e6ce7c(pcVar9,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
  }
  else {
LAB_00ba6ffc:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xb) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_invalid",0xb);
      if (iVar3 == 0) {
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_00ba7274;
      }
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 10) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_taken",10);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00ba707c;
      }
LAB_00ba71d8:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_NAME_TAKEN";
      goto LAB_00ba7274;
    }
LAB_00ba707c:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xd) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_reserved",0xd);
      if (iVar3 == 0) goto LAB_00ba71d8;
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 9) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_taken",9);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00ba70fc;
      }
LAB_00ba7238:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_TAKEN";
      goto LAB_00ba7274;
    }
LAB_00ba70fc:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xc) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_reserved",0xc);
      if (iVar3 == 0) goto LAB_00ba7238;
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 == 0x12) &&
       (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"contains_profanity",0x12), iVar3 == 0)) {
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_GUILD_ERROR_PROFANITY";
      goto LAB_00ba7274;
    }
    FUN_00e70510(&local_48);
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_ERROR_TITLE",0);
    uVar7 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_ERROR",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  FUN_00ba72d8(param_1);
LAB_00ba72b0:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ba6f54(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00ba72b0;
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar5 = FUN_009580b8();
    FUN_009658c8(lVar5 + 0x18);
    FUN_00904858();
    goto LAB_00ba72b0;
  }
  pbVar12 = (byte *)(param_2 + 0x30);
  bVar1 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar11 = (ulong)(bVar1 >> 1);
  uVar4 = uVar11;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0x10) {
    iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_guild",0x10);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
      goto LAB_00ba6ffc;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
    pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_ALREADY_IN";
LAB_00ba7274:
    uVar7 = FUN_00e6ce7c(pcVar9,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
  }
  else {
LAB_00ba6ffc:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xb) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_invalid",0xb);
      if (iVar3 == 0) {
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_00ba7274;
      }
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 10) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_taken",10);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00ba707c;
      }
LAB_00ba71d8:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_NAME_TAKEN";
      goto LAB_00ba7274;
    }
LAB_00ba707c:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xd) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_reserved",0xd);
      if (iVar3 == 0) goto LAB_00ba71d8;
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 9) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_taken",9);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00ba70fc;
      }
LAB_00ba7238:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_TAKEN";
      goto LAB_00ba7274;
    }
LAB_00ba70fc:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xc) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_reserved",0xc);
      if (iVar3 == 0) goto LAB_00ba7238;
      bVar1 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 == 0x12) &&
       (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"contains_profanity",0x12), iVar3 == 0)) {
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_GUILD_ERROR_PROFANITY";
      goto LAB_00ba7274;
    }
    FUN_00e70510(&uStack_48);
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_ERROR_TITLE",0);
    uVar7 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_ERROR",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
    if (pvStack_40 != (void *)0x0) {
      operator_delete__(pvStack_40);
      uStack_48 = 0;
      pvStack_40 = (void *)0x0;
    }
  }
  FUN_00ba72d8(param_1);
LAB_00ba72b0:
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

