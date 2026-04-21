// functions/00b4b — 25 functions
#include "libGameKindred.h"




void FUN_00b4b108(long *param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x44) == '\0') {
    bVar2 = *(byte *)(param_2 + 0x48);
    uVar4 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x50);
    }
    if (uVar4 != 0x12) {
      return;
    }
    iVar3 = FUN_0090d610((byte *)(param_2 + 0x48),0,0xffffffffffffffff,"contains_profanity",0x12);
    if (iVar3 != 0) {
      return;
    }
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    uVar7 = FUN_00e6ce7c("MENU_GUILD_ERROR_PROFANITY",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
    return;
  }
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
        pcVar9 = (char *)(lVar5 + 0x5479);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00b4b214;
          pcVar9 = pcVar9 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00b4b234;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00b4b234;
  }
LAB_00b4b214:
  uVar6 = FUN_009580b8();
  lVar5 = FUN_009580b8();
  FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
LAB_00b4b234:
                    /* WARNING: Could not recover jumptable at 0x00b4b264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,1);
  return;
}




void FUN_00b4b2c0(long param_1)

{
  FUN_00b4b108(param_1 + -0x2c38);
  return;
}




void FUN_00b4b2cc(long *param_1,long param_2)

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
  if (((uVar4 & 1) == 0) || (*(char *)(param_2 + 0x44) == '\0')) {
    return;
  }
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
          if (*pcVar7 != *__s2) goto LAB_00b4b39c;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00b4b3bc;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00b4b3bc;
  }
LAB_00b4b39c:
  uVar6 = FUN_009580b8();
  lVar5 = FUN_009580b8();
  FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
LAB_00b4b3bc:
                    /* WARNING: Could not recover jumptable at 0x00b4b3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,1);
  return;
}




void FUN_00b4b3f0(long param_1)

{
  FUN_00b4b2cc(param_1 + -0x2c38);
  return;
}




void FUN_00b4b3fc(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_00e84e5c(param_2);
  if (((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0x2c34) >> 2 & 1) != 0)) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 == -0x16) {
      uVar4 = FUN_00e6ce7c("MENU_DIALOG_BOOST_CANT_AFFORD_TITLE",0);
      pcVar3 = "MENU_DIALOG_BOOST_CANT_AFFORD";
    }
    else {
      if (iVar1 == 0) {
        FUN_00b3b2d4(param_1 + 0x392e0,param_2);
        return;
      }
      uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      if (iVar1 == -0x18) {
        pcVar3 = "MENU_DIALOG_SKU_UNAVAILABLE";
      }
      else {
        pcVar3 = "MENU_DIALOG_PURCHASE_FAILED";
      }
    }
    uVar5 = FUN_00e6ce7c(pcVar3,0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar4,uVar5,uVar6,0,0);
    return;
  }
  return;
}




void FUN_00b4b4fc(long param_1)

{
  FUN_00b4b3fc(param_1 + -0x2c38);
  return;
}




void FUN_00b4b508(long *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_2 + 0x40);
  if (iVar3 == -0xb) {
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar4 = "MENU_GUILD_RENAME_ERROR_RESERVED";
    goto LAB_00b4b618;
  }
  if (iVar3 == -10) {
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar4 = "MENU_GUILD_RENAME_ERROR_TAKEN";
    goto LAB_00b4b618;
  }
  if (iVar3 == 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_00900864(2);
      if ((*(byte *)((long)param_1 + 0x5d334) >> 2 & 1) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00b4b68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,0);
      return;
    }
    bVar2 = *(byte *)(param_2 + 0x48);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 0x50);
    }
    if (uVar1 != 0x12) goto LAB_00b4b5fc;
    iVar3 = FUN_0090d610((byte *)(param_2 + 0x48),0,0xffffffffffffffff,"insufficient_funds",0x12);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    if (iVar3 == 0) {
      pcVar4 = "MENU_GUILD_RENAME_ERROR_INSUFFICIENT_FUNDS";
      goto LAB_00b4b618;
    }
  }
  else {
LAB_00b4b5fc:
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  }
  pcVar4 = "MENU_GUILD_RENAME_ERROR";
LAB_00b4b618:
  uVar6 = FUN_00e6ce7c(pcVar4,0);
  uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
  FUN_00900864(1);
  return;
}




void FUN_00b4b690(long param_1)

{
  FUN_00b4b508(param_1 + -0x2c38);
  return;
}




void FUN_00b4b69c(long *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_2 + 0x40);
  if (iVar3 == -0xb) {
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar4 = "MENU_GUILD_TAG_RENAME_ERROR_RESERVED";
    goto LAB_00b4b7ac;
  }
  if (iVar3 == -10) {
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar4 = "MENU_GUILD_TAG_RENAME_ERROR_TAKEN";
    goto LAB_00b4b7ac;
  }
  if (iVar3 == 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_009009d0(2);
      if ((*(byte *)((long)param_1 + 0x5d334) >> 2 & 1) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00b4b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,0);
      return;
    }
    bVar2 = *(byte *)(param_2 + 0x48);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 0x50);
    }
    if (uVar1 != 0x12) goto LAB_00b4b790;
    iVar3 = FUN_0090d610((byte *)(param_2 + 0x48),0,0xffffffffffffffff,"insufficient_funds",0x12);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    if (iVar3 == 0) {
      pcVar4 = "MENU_GUILD_TAG_RENAME_ERROR_INSUFFICIENT_FUNDS";
      goto LAB_00b4b7ac;
    }
  }
  else {
LAB_00b4b790:
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  }
  pcVar4 = "MENU_GUILD_TAG_RENAME_ERROR";
LAB_00b4b7ac:
  uVar6 = FUN_00e6ce7c(pcVar4,0);
  uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
  FUN_009009d0(1);
  return;
}




void FUN_00b4b824(long param_1)

{
  FUN_00b4b69c(param_1 + -0x2c38);
  return;
}




void FUN_00b4b830(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_98 [32];
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_40 = 0;
  local_48 = 0;
  pvStack_50 = (void *)0x0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = (void *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  FUN_00936d90(auStack_98);
  uVar2 = FUN_00935644(param_2,auStack_98);
  if ((uVar2 & 1) != 0) {
    FUN_00b3fcfc(param_1 + 0x3ea0,auStack_98);
  }
  FUN_008fefd4(&local_48,1);
  if ((uStack_60 & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4b8ec(long param_1)

{
  FUN_00b4b830(param_1 + -0x2c38);
  return;
}




void FUN_00b4b8f8(undefined8 param_1,long param_2)

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
  if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
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
    if (__n != sVar1) {
LAB_00b4b9b8:
      uVar6 = FUN_009580b8();
      lVar5 = FUN_009580b8();
      FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
      return;
    }
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
          if (*pcVar7 != *__s2) goto LAB_00b4b9b8;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b4b9b8;
  }
  return;
}




void thunk_FUN_00b4b8f8(undefined8 param_1,long param_2)

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
  if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
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
    if (__n != sVar1) {
LAB_00b4b9b8:
      uVar6 = FUN_009580b8();
      lVar5 = FUN_009580b8();
      FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
      return;
    }
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
          if (*pcVar7 != *__s2) goto LAB_00b4b9b8;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b4b9b8;
  }
  return;
}




void FUN_00b4b9f0(undefined8 param_1,long param_2)

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
  if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
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
    if (__n != sVar1) {
LAB_00b4bab0:
      uVar6 = FUN_009580b8();
      lVar5 = FUN_009580b8();
      FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
      return;
    }
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
          if (*pcVar7 != *__s2) goto LAB_00b4bab0;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b4bab0;
  }
  return;
}




void thunk_FUN_00b4b9f0(undefined8 param_1,long param_2)

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
  if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
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
    if (__n != sVar1) {
LAB_00b4bab0:
      uVar6 = FUN_009580b8();
      lVar5 = FUN_009580b8();
      FUN_0095e21c(uVar6,lVar5 + 0x5478,1);
      return;
    }
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
          if (*pcVar7 != *__s2) goto LAB_00b4bab0;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b4bab0;
  }
  return;
}




void FUN_00b4bae8(long param_1)

{
  FUN_00b20790(param_1 + 0x33d0,0,1);
  return;
}




void FUN_00b4bafc(long param_1)

{
  FUN_00b20790(param_1 + 0x798,0,1);
  return;
}




void FUN_00b4bb0c(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  
  FUN_00a9f784(param_1,param_2 & 1);
  uVar1 = FUN_00b20974(param_1 + 0x33d0);
  plVar2 = *(long **)(param_1 + (uVar1 & 0xffffffff) * 8 + 0x33b8);
  (**(code **)(*plVar2 + 0x140))(plVar2,param_2 & 1);
  FUN_00b49d94(param_1);
  return;
}




void FUN_00b4bb5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00b4bb88(param_1,uVar1);
  return;
}




void FUN_00b4bb88(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = FUN_00b20974(param_1 + 0x33d0);
  if (((uVar1 < 3) && (param_2 < 3)) && (uVar1 != param_2)) {
    plVar2 = *(long **)(param_1 + 0x33b8 + (ulong)uVar1 * 8);
    plVar3 = *(long **)(param_1 + 0x33b8 + (ulong)param_2 * 8);
    *(long **)(param_1 + 0x64f20) = plVar3;
    if ((plVar2 != (long *)0x0) && (plVar3 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x138))(0x3dcccccd,plVar2,0,4,1);
      if (plVar3 == (long *)(param_1 + 0x3ea0)) {
        FUN_00b43418((long *)(param_1 + 0x3ea0),*(undefined1 *)(param_1 + 0x64f78));
      }
      (**(code **)(*plVar3 + 0x138))(0x3dcccccd,plVar3,1,4,1);
    }
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_1 + 0x5b270)) {
        FUN_00b4a5b8(param_1);
      }
      FUN_00b49d94(param_1);
      return;
    }
  }
  return;
}




void FUN_00b4bc90(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x392db) = param_2 & 1;
  return;
}




void FUN_00b4bca4(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  byte local_68 [16];
  void *local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_4c,&local_50);
  fVar2 = DAT_031339d4;
  uVar3 = FUN_009b8d9c();
  if ((uVar3 & 1) != 0) {
    FUN_008fa54c(local_68,"joinGuildBonus");
    FUN_00cab60c(fStack_4c * 0.5 + fVar2,local_50 * 0.5,0x3f99999a,param_1,local_68,1);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  FUN_00936760(FUN_00b49a08,FUN_00b49a0c);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4bd80(void)

{
  return;
}




void FUN_00b4bd84(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_a8;
  void *local_a0;
  code *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar12 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027e2370;
  FUN_00f0d160(plVar12);
  FUN_00f0d160();
  plVar11 = param_1 + 99;
  FUN_00f017e8(plVar11);
  plVar1 = param_1 + 0x74;
  param_1[99] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar1);
  lVar10 = 0x4d0;
  do {
    FUN_00f0d160((long)param_1 + lVar10);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0xac0);
  plVar2 = param_1 + 0x158;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x17e;
  FUN_00f0d160();
  plVar4 = param_1 + 0x1a4;
  FUN_00f017e8(plVar4);
  param_1[0x1a4] = (long)&PTR_FUN_027c1f80;
  FUN_00b4d164(param_1 + 0x1b5);
  FUN_00b4d164(param_1 + 0x312);
  plVar9 = param_1 + 0x46f;
  lVar10 = 0x5740;
  do {
    FUN_00b4d164(plVar9);
    lVar10 = lVar10 + -0xae8;
    plVar9 = plVar9 + 0x15d;
  } while (lVar10 != 0);
  *(undefined1 *)(param_1 + 0xf57) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_00f023ec(plVar11,plVar1,1);
  lVar10 = 0x4d0;
  do {
    FUN_00f023ec(plVar11,(long)param_1 + lVar10,1);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0xac0);
  FUN_00f023ec(plVar11,plVar2,1);
  FUN_00f023ec(plVar11,plVar3,1);
  FUN_00f023ec(plVar11,plVar4,1);
  FUN_00f023ec(plVar4,param_1 + 0x1b5,1);
  FUN_00f023ec(plVar4,param_1 + 0x312,1);
  plVar11 = param_1 + 0x46f;
  lVar10 = 8;
  do {
    FUN_00f023ec(plVar4,plVar11,1);
    lVar10 = lVar10 + -1;
    plVar11 = plVar11 + 0x15d;
  } while (lVar10 != 0);
  FUN_00f0d7fc(plVar12,&DAT_01bee7fa);
  FUN_00f0d378(plVar12,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8);
  FUN_00f0d92c(param_1 + 0x3d,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar8 = FUN_00e6ce7c("GENERIC_STATS",0);
  FUN_00f0d75c(plVar1,uVar8);
  FUN_00e70510(&local_a8);
  plVar11 = param_1 + 0x9a;
  lVar10 = -5;
  do {
    FUN_00f0d92c(plVar11,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
    uVar8 = FUN_00e6ce7c("STAT_TABLE_LEVEL",0);
    thunk_FUN_00e7051c(&local_98,uVar8);
    FUN_00e70e18(&local_a8,&DAT_01bb6d42,(int)lVar10 + 6);
    FUN_00e70c34(&local_98,&local_a8);
    (**(code **)(*plVar11 + 0x138))(plVar11,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = (code *)0x0;
      local_90 = (void *)0x0;
    }
    lVar10 = lVar10 + 1;
    plVar11 = plVar11 + 0x26;
  } while (lVar10 != 0);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffffdc78);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&local_98);
  uVar8 = FUN_00e6ce7c("STAT_TABLE_CRYSTAL_RATIO",0);
  FUN_00f0d75c(plVar2,uVar8);
  FUN_00f0dac8(plVar2,1);
  uVar5 = DAT_03210f60;
  local_98 = thunk_FUN_00b4d09c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar5;
  FUN_009693a0(param_1 + 0x159,&local_98);
  local_98 = thunk_FUN_00b4d09c;
  uVar6 = DAT_03210f8c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0x159,&local_98);
  *(uint *)((long)param_1 + 0xb44) = *(uint *)((long)param_1 + 0xb44) | 0x10;
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff6478ff);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&local_98);
  uVar8 = FUN_00e6ce7c("STAT_TABLE_WEAPON_RATIO",0);
  FUN_00f0d75c(plVar3,uVar8);
  FUN_00f0dac8(plVar3,1);
  local_98 = thunk_FUN_00b4d100;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar5;
  FUN_009693a0(param_1 + 0x17f,&local_98);
  local_98 = thunk_FUN_00b4d100;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0x17f,&local_98);
  *(uint *)((long)param_1 + 0xc74) = *(uint *)((long)param_1 + 0xc74) | 0x10;
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

