// functions/00bb4 — 14 functions
#include "libGameKindred.h"




void FUN_00bb4088(long param_1,long param_2)

{
  FUN_00f0d75c(param_1 + 0x2a7d8,param_2 + 0xe0);
  FUN_00b2a900(param_1 + 0x2a908,param_2 + 0xf0);
  return;
}




void FUN_00bb40cc(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  char *pcVar12;
  byte *pbVar13;
  
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
    pvVar11 = *(void **)(param_2 + 0x50);
    if ((bVar3 & 1) == 0) {
      pvVar11 = (void *)(param_2 + 0x41);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar9 = (char *)(param_2 + 0x41);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *pcVar12) goto LAB_00bb4178;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar6 = memcmp(pvVar11,pcVar12,sVar1), iVar6 != 0)) goto LAB_00bb4178;
    *(undefined1 *)((long)param_1 + 0x2b8ec) = 0;
    FUN_00bb43fc(param_1,0);
    goto LAB_00bb429c;
  }
LAB_00bb4178:
  lVar10 = FUN_009580b8();
  bVar3 = *(byte *)(param_2 + 0x28);
  bVar4 = *(byte *)(lVar10 + 0x5490);
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(lVar10 + 0x5498);
  }
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x30);
  }
  bVar5 = false;
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar10 + 0x54a0);
    pcVar12 = *(char **)(param_2 + 0x38);
    if ((bVar4 & 1) == 0) {
      pvVar11 = (void *)(lVar10 + 0x5491);
    }
    if ((bVar3 & 1) == 0) {
      pcVar12 = (char *)(param_2 + 0x29);
    }
    if ((bVar4 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar9 = (char *)(lVar10 + 0x5491);
        lVar10 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar9 != *pcVar12) {
            bVar5 = false;
            goto LAB_00bb4248;
          }
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar6 = memcmp(pvVar11,pcVar12,sVar1);
      bVar5 = iVar6 == 0;
      goto LAB_00bb4248;
    }
    bVar5 = true;
  }
LAB_00bb4248:
  *(bool *)((long)param_1 + 0x2b8ec) = bVar5;
  if ((*(uint *)((long)param_1 + 0x404) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) | 4;
    FUN_00b77fe4(param_1 + 0x70,1);
  }
  *(uint *)((long)param_1 + 0x1c0f4) = *(uint *)((long)param_1 + 0x1c0f4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x19c8c) = *(uint *)((long)param_1 + 0x19c8c) & 0xfffffffb;
LAB_00bb429c:
  pbVar13 = (byte *)((long)param_1 + 0x2b8ec);
  pcVar12 = "MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER";
  if (*pbVar13 != 0) {
    pcVar12 = "MENU_PROFILE_USERTEAM_RENAME_TEAM_HEADER";
  }
  uVar7 = FUN_00e6ce7c(pcVar12,0);
  FUN_00f0d75c(param_1 + 0x3913,uVar7);
  pcVar12 = "MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB";
  if (*pbVar13 != 0) {
    pcVar12 = "MENU_PROFILE_USERTEAM_RENAME_FIELD_BLURB";
  }
  uVar7 = FUN_00e6ce7c(pcVar12,0);
  FUN_00f0d75c(param_1 + 0x39ac,uVar7);
  pcVar12 = "MENU_PROFILE_USERTEAM_CREATE_TEAM";
  if (*pbVar13 != 0) {
    pcVar12 = "MENU_PROFILE_USERTEAM_RENAME_TEAM";
  }
  uVar7 = FUN_00e6ce7c(pcVar12,0);
  FUN_00ab7498(param_1 + 0x4b63,uVar7);
  *(uint *)((long)param_1 + 0x25b9c) =
       *(uint *)((long)param_1 + 0x25b9c) & 0xfffffffb | (uint)*pbVar13 << 2;
  uVar8 = ((uint)*pbVar13 << 2 ^ 4) & 0xfc;
  *(uint *)((long)param_1 + 0x2715c) = *(uint *)((long)param_1 + 0x2715c) & 0xfffffffb | uVar8;
  *(uint *)((long)param_1 + 0x289f4) = *(uint *)((long)param_1 + 0x289f4) & 0xfffffffb | uVar8;
  FUN_00b784ec(param_1 + 0x70,param_2);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar8 = *(uint *)((long)param_1 + 0x84);
  if ((uVar8 >> 2 & 1) == 0) {
    (**(code **)(*param_1 + 0x140))(param_1,1);
    uVar8 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar8 | 4;
  return;
}




void FUN_00bb43fc(long param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3dcccccd;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  FUN_00bb5c64(uVar1,param_1,param_2 & 1);
  *(byte *)(param_1 + 0x2b8ed) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x2b8ec) == '\0') {
      FUN_00bb1bf4(0x3dcccccd,param_1,1,1);
      return;
    }
    *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) | 4;
    *(uint *)(param_1 + 0x1c0f4) = *(uint *)(param_1 + 0x1c0f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x19c8c) = *(uint *)(param_1 + 0x19c8c) & 0xfffffffb;
  }
  else {
    FUN_00bb5f08(param_1);
    if (*(char *)(param_1 + 0x2b8ec) != '\0') {
      *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) & 0xfffffffb;
    }
  }
  return;
}




void FUN_00bb44ec(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00bb2a0c();
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    if (*(uint *)(lVar3 + 0x53e8) != 0) {
      uVar2 = 0;
      lVar6 = 0x40;
      do {
        pvVar4 = operator_new(0x19b0);
        FUN_00bb6d18();
        local_70 = pvVar4;
        FUN_00f0d75c((long)pvVar4 + 0x178,*(long *)(lVar3 + 0x53f0) + lVar6);
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_TEAM_INVITE_FROM_LABEL",0);
        thunk_FUN_00e7051c(&local_80,uVar5);
        FUN_00e705c8(&local_90,"[HANDLE]");
        FUN_00e71248(&local_80,0,&local_90,*(long *)(lVar3 + 0x53f0) + lVar6 + -0x40);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00f0d75c((long)local_70 + 0x2a8,&local_80);
        FUN_008fce60((long)local_70 + 0x1998,*(long *)(lVar3 + 0x53f0) + lVar6 + -0x18);
        FUN_00ed026c(param_1 + 0x33a3,local_70,1);
        FUN_00bb46a0(param_1 + 0x37c6,&local_70);
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
          local_80 = 0;
          local_78 = (void *)0x0;
        }
        uVar2 = uVar2 + 1;
        lVar6 = lVar6 + 0x70;
      } while (uVar2 < *(uint *)(lVar3 + 0x53e8));
    }
  }
  (**(code **)(*param_1 + 0x150))();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb46a0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00bb749c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bb4728(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
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
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar5 = FUN_009580b8();
    FUN_009658c8(lVar5 + 0x18);
    FUN_00904948();
    goto LAB_00bb4a80;
  }
  pbVar12 = (byte *)(param_2 + 0x30);
  bVar2 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar11 = (ulong)(bVar2 >> 1);
  uVar1 = uVar11;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar10;
  }
  if (uVar1 == 0xf) {
    iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_team",0xf);
    if (iVar4 != 0) {
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
      goto LAB_00bb47c4;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
    pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_ALREADY_IN";
LAB_00bb4a44:
    uVar7 = FUN_00e6ce7c(pcVar9,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
  }
  else {
LAB_00bb47c4:
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0xb) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_invalid",0xb);
      if (iVar4 == 0) {
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
        pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_00bb4a44;
      }
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0xc) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_invalid",0xc);
      if (iVar4 == 0) {
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
        pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_INVALID";
        goto LAB_00bb4a44;
      }
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 10) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_taken",10);
      if (iVar4 != 0) {
        bVar2 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar2 >> 1);
        goto LAB_00bb4884;
      }
LAB_00bb49c8:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_TAKEN";
      goto LAB_00bb4a44;
    }
LAB_00bb4884:
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0xd) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_reserved",0xd);
      if (iVar4 == 0) goto LAB_00bb49c8;
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 9) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_taken",9);
      if (iVar4 != 0) {
        bVar2 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar2 >> 1);
        goto LAB_00bb4904;
      }
LAB_00bb4a28:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_TAKEN";
      goto LAB_00bb4a44;
    }
LAB_00bb4904:
    if ((bVar2 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 == 0xc) &&
       (iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_reserved",0xc), iVar4 == 0))
    goto LAB_00bb4a28;
    FUN_00e70510(&local_48);
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
    uVar7 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b94c(uVar6,uVar7,uVar8,&local_48,0,0,0);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  FUN_00bb4aa8(param_1);
LAB_00bb4a80:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb4aa8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x1ce90;
  uVar5 = FUN_00abce6c(lVar1);
  if ((uVar5 & 1) == 0) {
    lVar2 = param_1 + 0x1eb88;
    uVar5 = FUN_00abce6c(lVar2);
    if ((uVar5 & 1) == 0) {
      lVar3 = param_1 + 0x20ae0;
      uVar5 = FUN_00abce6c(lVar3);
      if ((uVar5 & 1) == 0) {
        lVar4 = param_1 + 0x227d8;
        uVar5 = FUN_00abce6c(lVar4);
        if ((uVar5 & 1) == 0) {
          uVar6 = FUN_00ce1f88(lVar1);
          uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
          if ((uVar5 & 1) != 0) {
            uVar6 = FUN_00ce1f88(lVar2);
            uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
            if ((uVar5 & 1) != 0) {
              uVar6 = FUN_00ce1f88(lVar3);
              uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
              if ((uVar5 & 1) != 0) {
                uVar6 = FUN_00ce1f88(lVar4);
                uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
                if ((uVar5 & 1) != 0) {
                  uVar6 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x1d200) & 1) * 0x130 +
                                       0x1e0);
                  uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
                  if ((uVar5 & 1) != 0) {
                    uVar6 = FUN_00f08be8(lVar2 + ((ulong)*(byte *)(param_1 + 0x1eef8) & 1) * 0x130 +
                                         0x1e0);
                    uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
                    if ((uVar5 & 1) != 0) {
                      uVar6 = FUN_00f08be8(lVar3 + ((ulong)*(byte *)(param_1 + 0x20e50) & 1) * 0x130
                                           + 0x1e0);
                      uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
                      if ((uVar5 & 1) != 0) {
                        uVar6 = FUN_00f08be8(lVar4 + ((ulong)*(byte *)(param_1 + 0x22b48) & 1) *
                                                     0x130 + 0x1e0);
                        uVar5 = FUN_00e70b88(uVar6,&DAT_03210450);
                        if ((uVar5 & 1) != 0) {
                          FUN_00b09454(param_1 + 0x25b18,1);
                          FUN_00b09454(param_1 + 0x270d8,1);
                          uVar6 = 1;
                          goto LAB_00bb4cb4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00b09454(param_1 + 0x25b18,0);
  FUN_00b09454(param_1 + 0x270d8,0);
  uVar6 = 0;
LAB_00bb4cb4:
  FUN_00b09454(param_1 + 0x28970,uVar6);
  return;
}




void FUN_00bb4cc8(undefined8 param_1,long param_2)

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
  undefined **local_138 [5];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00bb4d98;
  lVar5 = FUN_009580b8();
  FUN_009658c8(lVar5 + 0x18);
  FUN_00e84dac(local_138);
  local_138[0] = &PTR_FUN_027bbb08;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  memset(auStack_110,0,0x48);
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_008fce60(auStack_110,&DAT_0320ffa8);
  FUN_008fce60(auStack_f8,&DAT_0320ffa8);
  FUN_008fce60(auStack_e0,&DAT_0320ffa8);
  FUN_00bb40cc(param_1,local_138);
  if (*(char *)(param_2 + 0x44) == '\0') {
    pbVar12 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar12;
    uVar10 = *(ulong *)(param_2 + 0x50);
    uVar11 = (ulong)(bVar1 >> 1);
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xb) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"not_in_team",0xb);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x48);
        uVar10 = *(ulong *)(param_2 + 0x50);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00bb4e1c;
      }
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_LEAVE_TITLE",0);
      pcVar7 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_REASON_NOT_IN";
    }
    else {
LAB_00bb4e1c:
      if ((bVar1 & 1) != 0) {
        uVar11 = uVar10;
      }
      if ((uVar11 != 0x11) ||
         (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"membership_locked",0x11), iVar3 != 0))
      goto LAB_00bb4d90;
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
      pcVar7 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
    }
    uVar8 = FUN_00e6ce7c(pcVar7,0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
LAB_00bb4d90:
  FUN_0094f104(local_138);
LAB_00bb4d98:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb4ec4(undefined8 param_1,long param_2)

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
      FUN_00bb2a0c(param_1);
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
    if (uVar3 == 0xc) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"no_such_team",0xc);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_REASON_NO_TEAM";
        goto LAB_00bb508c;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0xf) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"already_in_team",0xf);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_ALREADY_IN_TEAM";
        goto LAB_00bb508c;
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
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_00bb508c;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"team_full",9), iVar2 == 0)) {
      uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_FULL";
LAB_00bb508c:
      uVar6 = FUN_00e6ce7c(pcVar4,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void thunk_FUN_00bb40cc(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  char *pcVar12;
  byte *pbVar13;
  
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
    pvVar11 = *(void **)(param_2 + 0x50);
    if ((bVar3 & 1) == 0) {
      pvVar11 = (void *)(param_2 + 0x41);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar9 = (char *)(param_2 + 0x41);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *pcVar12) goto LAB_00bb4178;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar6 = memcmp(pvVar11,pcVar12,sVar1), iVar6 != 0)) goto LAB_00bb4178;
    *(undefined1 *)((long)param_1 + 0x2b8ec) = 0;
    FUN_00bb43fc(param_1,0);
    goto LAB_00bb429c;
  }
LAB_00bb4178:
  lVar10 = FUN_009580b8();
  bVar3 = *(byte *)(param_2 + 0x28);
  bVar4 = *(byte *)(lVar10 + 0x5490);
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(lVar10 + 0x5498);
  }
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x30);
  }
  bVar5 = false;
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar10 + 0x54a0);
    pcVar12 = *(char **)(param_2 + 0x38);
    if ((bVar4 & 1) == 0) {
      pvVar11 = (void *)(lVar10 + 0x5491);
    }
    if ((bVar3 & 1) == 0) {
      pcVar12 = (char *)(param_2 + 0x29);
    }
    if ((bVar4 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar9 = (char *)(lVar10 + 0x5491);
        lVar10 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar9 != *pcVar12) {
            bVar5 = false;
            goto LAB_00bb4248;
          }
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar6 = memcmp(pvVar11,pcVar12,sVar1);
      bVar5 = iVar6 == 0;
      goto LAB_00bb4248;
    }
    bVar5 = true;
  }
LAB_00bb4248:
  *(bool *)((long)param_1 + 0x2b8ec) = bVar5;
  if ((*(uint *)((long)param_1 + 0x404) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) | 4;
    FUN_00b77fe4(param_1 + 0x70,1);
  }
  *(uint *)((long)param_1 + 0x1c0f4) = *(uint *)((long)param_1 + 0x1c0f4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x19c8c) = *(uint *)((long)param_1 + 0x19c8c) & 0xfffffffb;
LAB_00bb429c:
  pbVar13 = (byte *)((long)param_1 + 0x2b8ec);
  pcVar12 = "MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER";
  if (*pbVar13 != 0) {
    pcVar12 = "MENU_PROFILE_USERTEAM_RENAME_TEAM_HEADER";
  }
  uVar7 = FUN_00e6ce7c(pcVar12,0);
  FUN_00f0d75c(param_1 + 0x3913,uVar7);
  pcVar12 = "MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB";
  if (*pbVar13 != 0) {
    pcVar12 = "MENU_PROFILE_USERTEAM_RENAME_FIELD_BLURB";
  }
  uVar7 = FUN_00e6ce7c(pcVar12,0);
  FUN_00f0d75c(param_1 + 0x39ac,uVar7);
  pcVar12 = "MENU_PROFILE_USERTEAM_CREATE_TEAM";
  if (*pbVar13 != 0) {
    pcVar12 = "MENU_PROFILE_USERTEAM_RENAME_TEAM";
  }
  uVar7 = FUN_00e6ce7c(pcVar12,0);
  FUN_00ab7498(param_1 + 0x4b63,uVar7);
  *(uint *)((long)param_1 + 0x25b9c) =
       *(uint *)((long)param_1 + 0x25b9c) & 0xfffffffb | (uint)*pbVar13 << 2;
  uVar8 = ((uint)*pbVar13 << 2 ^ 4) & 0xfc;
  *(uint *)((long)param_1 + 0x2715c) = *(uint *)((long)param_1 + 0x2715c) & 0xfffffffb | uVar8;
  *(uint *)((long)param_1 + 0x289f4) = *(uint *)((long)param_1 + 0x289f4) & 0xfffffffb | uVar8;
  FUN_00b784ec(param_1 + 0x70,param_2);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar8 = *(uint *)((long)param_1 + 0x84);
  if ((uVar8 >> 2 & 1) == 0) {
    (**(code **)(*param_1 + 0x140))(param_1,1);
    uVar8 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar8 | 4;
  return;
}




void thunk_FUN_00bb44ec(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_90;
  void *pvStack_88;
  undefined8 uStack_80;
  void *pvStack_78;
  void *pvStack_70;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  FUN_00bb2a0c();
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    if (*(uint *)(lVar3 + 0x53e8) != 0) {
      uVar2 = 0;
      lVar6 = 0x40;
      do {
        pvVar4 = operator_new(0x19b0);
        FUN_00bb6d18();
        pvStack_70 = pvVar4;
        FUN_00f0d75c((long)pvVar4 + 0x178,*(long *)(lVar3 + 0x53f0) + lVar6);
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_TEAM_INVITE_FROM_LABEL",0);
        thunk_FUN_00e7051c(&uStack_80,uVar5);
        FUN_00e705c8(&uStack_90,"[HANDLE]");
        FUN_00e71248(&uStack_80,0,&uStack_90,*(long *)(lVar3 + 0x53f0) + lVar6 + -0x40);
        if (pvStack_88 != (void *)0x0) {
          operator_delete__(pvStack_88);
          uStack_90 = 0;
          pvStack_88 = (void *)0x0;
        }
        FUN_00f0d75c((long)pvStack_70 + 0x2a8,&uStack_80);
        FUN_008fce60((long)pvStack_70 + 0x1998,*(long *)(lVar3 + 0x53f0) + lVar6 + -0x18);
        FUN_00ed026c(param_1 + 0x33a3,pvStack_70,1);
        FUN_00bb46a0(param_1 + 0x37c6,&pvStack_70);
        if (pvStack_78 != (void *)0x0) {
          operator_delete__(pvStack_78);
          uStack_80 = 0;
          pvStack_78 = (void *)0x0;
        }
        uVar2 = uVar2 + 1;
        lVar6 = lVar6 + 0x70;
      } while (uVar2 < *(uint *)(lVar3 + 0x53e8));
    }
  }
  (**(code **)(*param_1 + 0x150))();
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bb4728(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
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
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar5 = FUN_009580b8();
    FUN_009658c8(lVar5 + 0x18);
    FUN_00904948();
    goto LAB_00bb4a80;
  }
  pbVar12 = (byte *)(param_2 + 0x30);
  bVar2 = *pbVar12;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar11 = (ulong)(bVar2 >> 1);
  uVar1 = uVar11;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar10;
  }
  if (uVar1 == 0xf) {
    iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_team",0xf);
    if (iVar4 != 0) {
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
      goto LAB_00bb47c4;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
    pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_ALREADY_IN";
LAB_00bb4a44:
    uVar7 = FUN_00e6ce7c(pcVar9,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
  }
  else {
LAB_00bb47c4:
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0xb) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_invalid",0xb);
      if (iVar4 == 0) {
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
        pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_00bb4a44;
      }
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0xc) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_invalid",0xc);
      if (iVar4 == 0) {
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
        pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_INVALID";
        goto LAB_00bb4a44;
      }
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 10) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_taken",10);
      if (iVar4 != 0) {
        bVar2 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar2 >> 1);
        goto LAB_00bb4884;
      }
LAB_00bb49c8:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_TAKEN";
      goto LAB_00bb4a44;
    }
LAB_00bb4884:
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0xd) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_reserved",0xd);
      if (iVar4 == 0) goto LAB_00bb49c8;
      bVar2 = *(byte *)(param_2 + 0x30);
      uVar10 = *(ulong *)(param_2 + 0x38);
      uVar11 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 9) {
      iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_taken",9);
      if (iVar4 != 0) {
        bVar2 = *(byte *)(param_2 + 0x30);
        uVar10 = *(ulong *)(param_2 + 0x38);
        uVar11 = (ulong)(bVar2 >> 1);
        goto LAB_00bb4904;
      }
LAB_00bb4a28:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_TAKEN";
      goto LAB_00bb4a44;
    }
LAB_00bb4904:
    if ((bVar2 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 == 0xc) &&
       (iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_reserved",0xc), iVar4 == 0))
    goto LAB_00bb4a28;
    FUN_00e70510(&uStack_48);
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
    uVar7 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b94c(uVar6,uVar7,uVar8,&uStack_48,0,0,0);
    if (pvStack_40 != (void *)0x0) {
      operator_delete__(pvStack_40);
      uStack_48 = 0;
      pvStack_40 = (void *)0x0;
    }
  }
  FUN_00bb4aa8(param_1);
LAB_00bb4a80:
  if (*(long *)(lVar3 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bb4cc8(undefined8 param_1,long param_2)

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
  undefined **appuStack_138 [5];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [64];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00bb4d98;
  lVar5 = FUN_009580b8();
  FUN_009658c8(lVar5 + 0x18);
  FUN_00e84dac(appuStack_138);
  appuStack_138[0] = &PTR_FUN_027bbb08;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  memset(auStack_110,0,0x48);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_008fce60(auStack_110,&DAT_0320ffa8);
  FUN_008fce60(auStack_f8,&DAT_0320ffa8);
  FUN_008fce60(auStack_e0,&DAT_0320ffa8);
  FUN_00bb40cc(param_1,appuStack_138);
  if (*(char *)(param_2 + 0x44) == '\0') {
    pbVar12 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar12;
    uVar10 = *(ulong *)(param_2 + 0x50);
    uVar11 = (ulong)(bVar1 >> 1);
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xb) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"not_in_team",0xb);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x48);
        uVar10 = *(ulong *)(param_2 + 0x50);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00bb4e1c;
      }
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_LEAVE_TITLE",0);
      pcVar7 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_REASON_NOT_IN";
    }
    else {
LAB_00bb4e1c:
      if ((bVar1 & 1) != 0) {
        uVar11 = uVar10;
      }
      if ((uVar11 != 0x11) ||
         (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"membership_locked",0x11), iVar3 != 0))
      goto LAB_00bb4d90;
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
      pcVar7 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
    }
    uVar8 = FUN_00e6ce7c(pcVar7,0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
LAB_00bb4d90:
  FUN_0094f104(appuStack_138);
LAB_00bb4d98:
  if (*(long *)(lVar2 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bb4ec4(undefined8 param_1,long param_2)

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
      FUN_00bb2a0c(param_1);
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
    if (uVar3 == 0xc) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"no_such_team",0xc);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_REASON_NO_TEAM";
        goto LAB_00bb508c;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0xf) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"already_in_team",0xf);
      if (iVar2 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_ALREADY_IN_TEAM";
        goto LAB_00bb508c;
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
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_00bb508c;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"team_full",9), iVar2 == 0)) {
      uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_FULL";
LAB_00bb508c:
      uVar6 = FUN_00e6ce7c(pcVar4,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}

