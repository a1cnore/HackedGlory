// functions/00bc9 — 17 functions
#include "libGameKindred.h"




void FUN_00bc9248(long param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  void *__s1;
  char *__s2;
  byte *pbVar12;
  long lVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (((char)param_2[1] == '\0') || (lVar13 = *param_2, lVar13 == 0)) {
    uVar7 = FUN_009b8d90();
    FUN_009bb89c(uVar7,param_1 + 0x10);
  }
  else {
    bVar2 = *(byte *)(lVar13 + 0x48);
    pbVar12 = (byte *)(param_1 + 0x10);
    bVar3 = *pbVar12;
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar13 + 0x50);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x18);
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar13 + 0x58);
      __s2 = *(char **)(param_1 + 0x20);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar13 + 0x49);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x11);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar10 = (char *)(lVar13 + 0x49);
          lVar11 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar10 != *__s2) goto LAB_00bc930c;
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + 1;
            __s2 = __s2 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00bc930c;
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(char *)(lVar13 + 0xd9) == '\0') {
        *(undefined1 *)(param_1 + 0x29) = 0;
        uVar7 = FUN_009b8d90();
        FUN_009bb89c(uVar7,pbVar12);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar8 = FUN_00e6ce7c("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
        uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar7,uVar8,uVar9,0,0);
      }
      else {
        local_48 = 0;
        uStack_40 = 0;
        uVar6 = FUN_00cab1e4(lVar13,&local_48);
        uVar7 = FUN_009b8d90();
        if ((uVar6 & 1) == 0) {
          FUN_009bb89c(uVar7,pbVar12);
        }
        else {
          FUN_009bb7d4(uVar7,pbVar12,&local_48);
        }
        FUN_008fefd4(&local_48,1);
      }
    }
  }
LAB_00bc930c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bc9248(long param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  void *__s1;
  char *__s2;
  byte *pbVar12;
  long lVar13;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  if (((char)param_2[1] == '\0') || (lVar13 = *param_2, lVar13 == 0)) {
    uVar7 = FUN_009b8d90();
    FUN_009bb89c(uVar7,param_1 + 0x10);
  }
  else {
    bVar2 = *(byte *)(lVar13 + 0x48);
    pbVar12 = (byte *)(param_1 + 0x10);
    bVar3 = *pbVar12;
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar13 + 0x50);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x18);
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar13 + 0x58);
      __s2 = *(char **)(param_1 + 0x20);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar13 + 0x49);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x11);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar10 = (char *)(lVar13 + 0x49);
          lVar11 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar10 != *__s2) goto LAB_00bc930c;
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + 1;
            __s2 = __s2 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00bc930c;
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(char *)(lVar13 + 0xd9) == '\0') {
        *(undefined1 *)(param_1 + 0x29) = 0;
        uVar7 = FUN_009b8d90();
        FUN_009bb89c(uVar7,pbVar12);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar8 = FUN_00e6ce7c("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
        uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar7,uVar8,uVar9,0,0);
      }
      else {
        uStack_48 = 0;
        uStack_40 = 0;
        uVar6 = FUN_00cab1e4(lVar13,&uStack_48);
        uVar7 = FUN_009b8d90();
        if ((uVar6 & 1) == 0) {
          FUN_009bb89c(uVar7,pbVar12);
        }
        else {
          FUN_009bb7d4(uVar7,pbVar12,&uStack_48);
        }
        FUN_008fefd4(&uStack_48,1);
      }
    }
  }
LAB_00bc930c:
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bc93fc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ec200;
  pvVar1 = operator_new(0xf960);
  FUN_00c1ef5c();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027ebe38;
  param_1[2] = &PTR_FUN_027ebe68;
  param_1[0xb] = 0xffffffffffffffff;
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00bc949c,0);
  FUN_00bc94c8(param_1);
  return;
}




void FUN_00bc949c(void)

{
  FUN_00bc94c8();
  return;
}




void FUN_00bc94c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_78 = 0;
  local_70 = 0;
  FUN_0096bf08(&local_78);
  if ((int)local_78 != 0) {
    uVar14 = 0;
    do {
      lVar6 = local_70;
      lVar8 = local_70 + uVar14 * 0xe8;
      pbVar9 = (byte *)(lVar8 + 0xc0);
      bVar4 = *pbVar9;
      uVar10 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar10 = *(ulong *)(lVar8 + 200);
      }
      if ((uVar10 == 0xb) &&
         (iVar7 = FUN_0090d610(pbVar9,0,0xffffffffffffffff,"createGuild",0xb), iVar7 == 0)) {
        puVar12 = (uint *)(lVar6 + uVar14 * 0xe8 + 8);
        uVar3 = *puVar12;
        uVar10 = (ulong)uVar3;
        if (uVar3 != 0) {
          uVar15 = 0;
          do {
            lVar8 = *(long *)(lVar6 + uVar14 * 0xe8 + 0x10);
            puVar17 = (uint *)(lVar8 + uVar15 * 0xa0 + 8);
            if (*puVar17 != 0) {
              lVar8 = lVar8 + uVar15 * 0xa0;
              lVar18 = 0;
              uVar10 = 0;
              lVar1 = lVar8 + 0x60;
              do {
                lVar16 = *(long *)(lVar8 + 0x10);
                pbVar9 = (byte *)(lVar16 + lVar18);
                bVar4 = *pbVar9;
                uVar11 = *(ulong *)(pbVar9 + 8);
                uVar13 = (ulong)(bVar4 >> 1);
                uVar2 = uVar13;
                if ((bVar4 & 1) != 0) {
                  uVar2 = uVar11;
                }
                if (uVar2 == 6) {
                  iVar7 = FUN_0090d610(pbVar9,0,0xffffffffffffffff,"silver",6);
                  if (iVar7 != 0) {
                    bVar4 = *pbVar9;
                    uVar11 = *(ulong *)(pbVar9 + 8);
                    uVar13 = (ulong)(bVar4 >> 1);
                    goto LAB_00bc9630;
                  }
                  FUN_008fce60(param_1 + 0x40,lVar1);
                  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar16 + lVar18 + 0x18);
                }
                else {
LAB_00bc9630:
                  if ((bVar4 & 1) != 0) {
                    uVar13 = uVar11;
                  }
                  if ((uVar13 == 4) &&
                     (iVar7 = FUN_0090d610(pbVar9,0,0xffffffffffffffff,"gold",4), iVar7 == 0)) {
                    FUN_008fce60(param_1 + 0x28,lVar1);
                    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar16 + lVar18 + 0x18);
                  }
                }
                uVar10 = uVar10 + 1;
                lVar18 = lVar18 + 0x20;
              } while (uVar10 < *puVar17);
              uVar10 = (ulong)*puVar12;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar10);
        }
        FUN_00c211b8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x58),
                     *(undefined4 *)(param_1 + 0x5c));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (local_78 & 0xffffffff));
  }
  FUN_0097905c(&local_78,1);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bc9730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ebe38;
  param_1[2] = &PTR_FUN_027ebe68;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ec200;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc97d0(long param_1)

{
  FUN_00bc9730(param_1 + -0x10);
  return;
}




void FUN_00bc97d8(void *param_1)

{
  FUN_00bc9730();
  operator_delete(param_1);
  return;
}




void FUN_00bc97fc(long param_1)

{
  FUN_00bc9730((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bc9824(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  void *pvVar12;
  byte *pbVar13;
  
  if ((param_2 & 1) == 0) {
    pbVar13 = (byte *)(param_1 + 0x40);
    bVar4 = *pbVar13;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x48);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar12 = *(void **)(param_1 + 0x50);
      if ((bVar4 & 1) == 0) {
        pvVar12 = (void *)(param_1 + 0x41);
      }
      pcVar7 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar7 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (sVar1 == 0) {
          return;
        }
        pcVar10 = (char *)(param_1 + 0x41);
        lVar11 = -(ulong)(bVar4 >> 1);
        while (*pcVar10 == *pcVar7) {
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          pcVar7 = pcVar7 + 1;
          if (lVar11 == 0) {
            return;
          }
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        iVar5 = memcmp(pvVar12,pcVar7,sVar1);
        if (iVar5 == 0) {
          return;
        }
      }
    }
    uVar3 = *(uint *)(param_1 + 0x5c);
    lVar11 = FUN_009580b8();
    if (uVar3 <= *(uint *)(lVar11 + 0x5454)) goto LAB_00bc9a24;
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT";
  }
  else {
    pbVar13 = (byte *)(param_1 + 0x28);
    bVar4 = *pbVar13;
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x30);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar12 = *(void **)(param_1 + 0x38);
      if ((bVar4 & 1) == 0) {
        pvVar12 = (void *)(param_1 + 0x29);
      }
      pcVar7 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar7 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar10 = (char *)(param_1 + 0x29);
          lVar11 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar10 != *pcVar7) goto LAB_00bc9968;
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + 1;
            pcVar7 = pcVar7 + 1;
          } while (lVar11 != 0);
        }
        return;
      }
      if (sVar1 == 0) {
        return;
      }
      iVar5 = memcmp(pvVar12,pcVar7,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
LAB_00bc9968:
    uVar3 = *(uint *)(param_1 + 0x58);
    lVar11 = FUN_009580b8();
    if (uVar3 <= *(uint *)(lVar11 + 0x5450)) {
LAB_00bc9a24:
      uVar6 = FUN_009580b8();
      FUN_00962cb8(uVar6,pbVar13,param_3,param_4,param_5,param_6);
      return;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
    pcVar7 = "MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT";
  }
  uVar8 = FUN_00e6ce7c(pcVar7,0);
  uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  return;
}




void FUN_00bc9a64(long param_1,long param_2)

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
  if ((uVar4 & 1) == 0) goto LAB_00bc9dc8;
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar5 = FUN_009580b8();
    FUN_009658c8(lVar5 + 0x18);
    FUN_00904858();
    FUN_00c21ca0(*(undefined8 *)(param_1 + 8));
    goto LAB_00bc9dc8;
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
      goto LAB_00bc9b14;
    }
    uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
    pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_ALREADY_IN";
LAB_00bc9d8c:
    uVar7 = FUN_00e6ce7c(pcVar9,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
  }
  else {
LAB_00bc9b14:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xb) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_invalid",0xb);
      if (iVar3 == 0) {
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_00bc9d8c;
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
        goto LAB_00bc9b94;
      }
LAB_00bc9cf0:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_NAME_TAKEN";
      goto LAB_00bc9d8c;
    }
LAB_00bc9b94:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xd) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"name_reserved",0xd);
      if (iVar3 == 0) goto LAB_00bc9cf0;
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
        goto LAB_00bc9c14;
      }
LAB_00bc9d50:
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar9 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_TAKEN";
      goto LAB_00bc9d8c;
    }
LAB_00bc9c14:
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xc) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"tag_reserved",0xc);
      if (iVar3 == 0) goto LAB_00bc9d50;
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
      goto LAB_00bc9d8c;
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
  FUN_00c2159c(*(undefined8 *)(param_1 + 8));
LAB_00bc9dc8:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bc9df0(long param_1)

{
  FUN_00bc9a64(param_1 + -0x10);
  return;
}




void FUN_00bc9df8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ec200;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc9e3c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbc9e40);
  (*pcVar1)();
}




void FUN_00bc9e40(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027ec228;
  return;
}




void FUN_00bc9e58(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ec3a8;
  pvVar2 = operator_new(0x1178);
  FUN_00c2229c();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x630) = param_1;
  FUN_00bcf3c8(param_1 + 2);
  puVar4 = param_1 + 0x13;
  param_1[0x14] = &PTR___cxa_pure_virtual_027ec380;
  *puVar4 = &UNK_027ec368;
  FUN_00cde7f4(param_1 + 0x15);
  *param_1 = &PTR_FUN_027ec240;
  param_1[2] = &PTR_FUN_027ec2b8;
  param_1[0x14] = &PTR_FUN_027ec310;
  *puVar4 = &UNK_027ec2f8;
  param_1[0x15] = &PTR_FUN_027ec338;
  *(undefined8 **)(param_1[1] + 0x1150) = puVar4;
  lVar3 = FUN_00cdbb18();
  local_58 = 0;
  pcStack_40 = FUN_00bcb0a8;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00ad97b4(lVar3 + 0x30,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc9f60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027ec240;
  param_1[2] = &PTR_FUN_027ec2b8;
  param_1[0x14] = &PTR_FUN_027ec310;
  param_1[0x13] = &UNK_027ec2f8;
  param_1[0x15] = &PTR_FUN_027ec338;
  lVar3 = FUN_00cdbb18();
  lVar6 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
  lVar2 = *(long *)(lVar3 + 0x38);
  do {
    lVar5 = lVar2;
    if (lVar6 == 0) goto LAB_00bc9ff0;
    lVar6 = lVar6 + -0x20;
    lVar2 = lVar5 + 0x20;
  } while (*(undefined8 **)(lVar5 + 8) != param_1);
  FUN_00ad98d8((uint *)(lVar3 + 0x30),lVar5);
LAB_00bc9ff0:
  FUN_008fa54c(local_50,"MENU_TALENT_PURCHASE_POPUP");
  FUN_00affa44(local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar4 = FUN_00cae8f0();
  FUN_008fa54c(local_50,uVar4);
  FUN_00affa44(local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38);
  FUN_00affa44(local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00cde874(param_1 + 0x15);
  FUN_00bca0cc(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ec3a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

