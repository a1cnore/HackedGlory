// functions/00be5 — 16 functions
#include "libGameKindred.h"




void FUN_00be56c8(long param_1)

{
  FUN_00be43ac(param_1 + -0x18);
  return;
}




void FUN_00be56d0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_00914e9c(param_1 + 0x90,0);
  iVar1 = FUN_00916120();
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = FUN_00916130(uVar4);
      FUN_00b9666c(param_1 + 0x90,uVar3);
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00916120();
    } while (uVar4 < uVar2);
  }
  FUN_00be4630(param_1);
  return;
}




void FUN_00be5738(long param_1)

{
  FUN_00be56d0(param_1 + -0x18);
  return;
}




void FUN_00be5740(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
    thunk_FUN_00e7051c(&local_48,uVar5);
    FUN_00e705c8(&local_58,"[NAME]");
    FUN_00e71248(&local_48,0,&local_58,param_1 + 0xe0);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    FUN_00a9da50(0x40200000,&local_48,0,1);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if ((*(int *)(param_2 + 0x40) == 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    pcVar6 = "MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO";
  }
  else {
    pbVar9 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar9;
    uVar7 = *(ulong *)(param_2 + 0x50);
    uVar8 = (ulong)(bVar1 >> 1);
    uVar4 = uVar8;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0x10) {
      iVar3 = FUN_0090d610(pbVar9,0,0xffffffffffffffff,"target_list_full",0x10);
      if (iVar3 == 0) {
        pcVar6 = "MENU_FRIENDS_THEIR_LIST_FULL";
        goto LAB_00be5918;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar7 = *(ulong *)(param_2 + 0x50);
      uVar8 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar8 = uVar7;
    }
    if ((uVar8 != 0x13) ||
       (iVar3 = FUN_0090d610(pbVar9,0,0xffffffffffffffff,"requester_list_full",0x13), iVar3 != 0)) {
      uVar5 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
      thunk_FUN_00e7051c(&local_48,uVar5);
      FUN_00e705c8(&local_58,"[NAME]");
      FUN_00e71248(&local_48,0,&local_58,param_1 + 0xe0);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      FUN_00a9da50(0x40200000,&local_48,0,1);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
      goto LAB_00be5930;
    }
    pcVar6 = "MENU_FRIENDS_YOUR_LIST_FULL";
  }
LAB_00be5918:
  uVar5 = FUN_00e6ce7c(pcVar6,0);
  FUN_00a9da50(0x40200000,uVar5,0,1);
LAB_00be5930:
  FUN_00910394(param_1 + 0xe0,&DAT_03210450);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00be5968(long param_1)

{
  FUN_00be5740(param_1 + -0x18);
  return;
}




void FUN_00be5970(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)(param_2 + 0x48);
  bVar2 = *pbVar8;
  uVar6 = *(ulong *)(param_2 + 0x50);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar1 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0x10) {
    iVar3 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"target_list_full",0x10);
    if (iVar3 == 0) {
      pcVar4 = "MENU_FRIENDS_THEIR_LIST_FULL";
      goto LAB_00be5a28;
    }
    bVar2 = *(byte *)(param_2 + 0x48);
    uVar6 = *(ulong *)(param_2 + 0x50);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar7 = uVar6;
  }
  if ((uVar7 != 0x13) ||
     (iVar3 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"requester_list_full",0x13), iVar3 != 0)) {
    return;
  }
  pcVar4 = "MENU_FRIENDS_YOUR_LIST_FULL";
LAB_00be5a28:
  uVar5 = FUN_00e6ce7c(pcVar4,0);
  FUN_00a9da50(0x40200000,uVar5,0,1);
  return;
}




void thunk_FUN_00be5970(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)(param_2 + 0x48);
  bVar2 = *pbVar8;
  uVar6 = *(ulong *)(param_2 + 0x50);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar1 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0x10) {
    iVar3 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"target_list_full",0x10);
    if (iVar3 == 0) {
      pcVar4 = "MENU_FRIENDS_THEIR_LIST_FULL";
      goto LAB_00be5a28;
    }
    bVar2 = *(byte *)(param_2 + 0x48);
    uVar6 = *(ulong *)(param_2 + 0x50);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar7 = uVar6;
  }
  if ((uVar7 != 0x13) ||
     (iVar3 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"requester_list_full",0x13), iVar3 != 0)) {
    return;
  }
  pcVar4 = "MENU_FRIENDS_YOUR_LIST_FULL";
LAB_00be5a28:
  uVar5 = FUN_00e6ce7c(pcVar4,0);
  FUN_00a9da50(0x40200000,uVar5,0,1);
  return;
}




void FUN_00be5a4c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00be5ae0(param_1,param_2 + 0xb0);
  FUN_00be5be4(param_1,param_2 + 200);
  if (DAT_02c091c0 != 0) {
    lVar2 = FUN_009101ac();
    uStack_50 = 0;
    pcStack_40 = thunk_FUN_00be656c;
    local_58 = param_1;
    local_48 = param_1;
    FUN_009e4694(lVar2 + 0x10,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be5ae0(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *__s2;
  
  bVar2 = *(byte *)(param_1 + 0x128);
  if ((bVar2 & 1) == 0) {
    uVar7 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x130);
  }
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (uVar7 == 0) {
    if (__n == 0) {
      return;
    }
  }
  else {
    if (__n == 0) {
      FUN_00be5d7c(param_1);
      return;
    }
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x130);
    }
    if (sVar1 == __n) {
      __s2 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        __s2 = param_2 + 1;
      }
      if ((bVar2 & 1) == 0) {
        pbVar5 = (byte *)(param_1 + 0x129);
        lVar6 = -(ulong)(bVar2 >> 1);
        while (*pbVar5 == *__s2) {
          pbVar5 = pbVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
          if (lVar6 == 0) {
            return;
          }
        }
      }
      else {
        iVar4 = memcmp(*(void **)(param_1 + 0x138),__s2,__n);
        if (iVar4 == 0) {
          return;
        }
      }
    }
    FUN_00be5d7c(param_1);
  }
  FUN_008fce60(param_1 + 0x128,param_2);
  FUN_00be3c4c(param_1,1);
  return;
}




void FUN_00be5be4(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *__s2;
  
  bVar2 = *(byte *)(param_1 + 0x140);
  if ((bVar2 & 1) == 0) {
    uVar7 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x148);
  }
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (uVar7 == 0) {
    if (__n == 0) {
      return;
    }
  }
  else {
    if (__n == 0) {
      FUN_00be5d1c(param_1);
      return;
    }
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x148);
    }
    if (sVar1 == __n) {
      __s2 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        __s2 = param_2 + 1;
      }
      if ((bVar2 & 1) == 0) {
        pbVar5 = (byte *)(param_1 + 0x141);
        lVar6 = -(ulong)(bVar2 >> 1);
        while (*pbVar5 == *__s2) {
          pbVar5 = pbVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
          if (lVar6 == 0) {
            return;
          }
        }
      }
      else {
        iVar4 = memcmp(*(void **)(param_1 + 0x150),__s2,__n);
        if (iVar4 == 0) {
          return;
        }
      }
    }
    FUN_00be5d1c(param_1);
  }
  FUN_008fce60(param_1 + 0x140,param_2);
  FUN_00be3a1c(param_1,1);
  return;
}




void FUN_00be5ce8(long param_1)

{
  FUN_00be5a4c(param_1 + -0x28);
  return;
}




void FUN_00be5cf0(undefined8 param_1)

{
  FUN_00be5d1c();
  FUN_00be5d7c(param_1);
  FUN_0090de68(param_1);
  return;
}




void FUN_00be5d1c(long param_1)

{
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    if (*(byte *)(param_1 + 0x140) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x148) == 0) {
    return;
  }
  FUN_00be3a1c(param_1,0);
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x140) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  return;
}




void FUN_00be5d7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    if (*(byte *)(param_1 + 0x128) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x130) == 0) {
    return;
  }
  FUN_00be3c4c(param_1,0);
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  return;
}




void FUN_00be5ddc(long param_1)

{
  param_1 = param_1 + -0x28;
  FUN_00be5d1c(param_1);
  FUN_00be5d7c(param_1);
  FUN_0090de68(param_1);
  return;
}




void FUN_00be5e0c(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  void *pvVar8;
  char *pcVar9;
  
  bVar3 = *(byte *)(param_2 + 0x90);
  bVar4 = *(byte *)(param_1 + 0x128);
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x130);
  }
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x98);
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(param_1 + 0x138);
    pcVar9 = *(char **)(param_2 + 0xa0);
    if ((bVar4 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x129);
    }
    if ((bVar3 & 1) == 0) {
      pcVar9 = (char *)(param_2 + 0x91);
    }
    if ((bVar4 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar7 = (char *)(param_1 + 0x129);
        lVar6 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar7 != *pcVar9) goto LAB_00be5eb4;
          pcVar7 = pcVar7 + 1;
          lVar6 = lVar6 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) goto LAB_00be5eb4;
  }
  else {
LAB_00be5eb4:
    FUN_00be5ae0(param_1,(byte *)(param_2 + 0x90));
    bVar3 = *(byte *)(param_1 + 0x128);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x130);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar8 = *(void **)(param_1 + 0x138);
      if ((bVar3 & 1) == 0) {
        pvVar8 = (void *)(param_1 + 0x129);
      }
      pcVar9 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar9 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar7 = (char *)(param_1 + 0x129);
          lVar6 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar7 != *pcVar9) goto LAB_00be5f50;
            pcVar7 = pcVar7 + 1;
            lVar6 = lVar6 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar6 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) goto LAB_00be5f50;
    }
    else {
LAB_00be5f50:
      FUN_00be4630(param_1);
    }
  }
  bVar3 = *(byte *)(param_2 + 200);
  bVar4 = *(byte *)(param_1 + 0x140);
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x148);
  }
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0xd0);
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(param_1 + 0x150);
    pcVar9 = *(char **)(param_2 + 0xd8);
    if ((bVar4 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x141);
    }
    if ((bVar3 & 1) == 0) {
      pcVar9 = (char *)(param_2 + 0xc9);
    }
    if ((bVar4 & 1) == 0) {
      if (sVar1 == 0) {
        return;
      }
      pcVar7 = (char *)(param_1 + 0x141);
      lVar6 = -(ulong)(bVar4 >> 1);
      while (*pcVar7 == *pcVar9) {
        pcVar7 = pcVar7 + 1;
        lVar6 = lVar6 + 1;
        pcVar9 = pcVar9 + 1;
        if (lVar6 == 0) {
          return;
        }
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = memcmp(pvVar8,pcVar9,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00be5be4(param_1,(byte *)(param_2 + 200));
  bVar3 = *(byte *)(param_1 + 0x140);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x148);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(param_1 + 0x150);
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x141);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar7 = (char *)(param_1 + 0x141);
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar7 != *pcVar9) goto LAB_00be6084;
          pcVar7 = pcVar7 + 1;
          lVar6 = lVar6 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) goto LAB_00be6084;
    return;
  }
LAB_00be6084:
  FUN_00be4630(param_1);
  return;
}

