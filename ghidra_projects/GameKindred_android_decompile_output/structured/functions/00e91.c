// functions/00e91 — 16 functions
#include "libGameKindred.h"




ulong FUN_00e910e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e9112c:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"rejectMatch");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e87404(local_80,lVar1,param_2);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,2
                             ,0);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if (*(long *)(lVar3 + 0x28) == local_48) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e9121c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e9112c;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e9121c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e91220(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e9130c:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e9133c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e9130c;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"notifyExitPostMatch");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8762c(local_70,lVar1);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,0x5a,0)
  ;
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 0xffffffff;
  }
LAB_00e9133c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e91340(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e9145c:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e91490;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e9145c;
  local_14c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_00e6a8a8(auStack_148,&DAT_01bb6d43,DAT_02bf24e0);
  FUN_008fa54c(local_168,"spectateFriend");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e90d2c(local_180,lVar1,param_2,auStack_148);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_168,local_180,0,&local_14c,0x5a
                       ,0);
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e91490:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e91494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e915b0:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e915e4;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e915b0;
  local_14c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_00e6a8a8(auStack_148,&DAT_01bb6d43,DAT_02bf24e0);
  FUN_008fa54c(local_168,"askInGameFriendToPlay");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e90d2c(local_180,lVar1,param_2,auStack_148);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_168,local_180,0,&local_14c,0x5a
                       ,0);
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e915e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e915e8(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e916d0:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e91704;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e916d0;
  FUN_008fa54c(local_60,"dismissReliableMessage");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e87404(local_78,lVar1,param_2);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_60,local_78,0,0,0x5a,0);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e91704:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e91708(long param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  undefined4 local_40;
  byte local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c[0] = param_2 & 1;
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e91804:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e91834;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e91804;
  local_40 = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_58,"setPresenceInvisibility");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e88334(local_70,lVar1,local_3c);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_40,0x5a,0)
  ;
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 0xffffffff;
  }
LAB_00e91834:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e91838(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e9187c:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"queryPendingMatch");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8762c(local_70,lVar1);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,
                             0x5a,0);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e91960;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e9187c;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e91960:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e91964(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e919a8:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"queryPlayerInboxMessages");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8762c(local_70,lVar1);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,
                             0x5a,0);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e91a8c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e919a8;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e91a8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e91a90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x2a21) == '\0') {
    if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
      if (*(long *)(param_1 + 0x88) != 0) goto LAB_00e91b04;
      goto LAB_00e91abc;
    }
    if (*(byte *)(param_1 + 0x80) >> 1 == 0) goto LAB_00e91abc;
LAB_00e91b04:
    if ((*(int *)(param_1 + 0x2ad0) != 0) &&
       (local_2c = FUN_00e84f88(param_1 + 0x2c48), *(int *)(param_1 + 0x2ad0) != 0)) {
      FUN_00ebf6a4(param_1 + 0x10,param_1 + 0x2ab8,param_1 + 0x2aa0,&local_2c,0x5a);
      goto LAB_00e91ac8;
    }
    uVar2 = 0xfffffff9;
  }
  else {
LAB_00e91abc:
    uVar2 = 0xffffffe6;
  }
  FUN_00e83324(uVar2);
  FUN_00e83340();
LAB_00e91ac8:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00e91b54(long param_1)

{
  if (*(char *)(param_1 + 0x2a22) != '\0') {
    return *(char *)(param_1 + 0x2a23) != '\0';
  }
  return false;
}




void FUN_00e91b7c(long param_1)

{
  *(undefined1 *)(param_1 + 0x2ca0) = 1;
  FUN_00e83340();
  return;
}




undefined8 FUN_00e91b8c(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  byte *__s2_00;
  
  bVar2 = *(byte *)(param_1 + 0x2b80);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2b88);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n != sVar1) {
LAB_00e91c44:
    bVar3 = *param_2;
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 8);
    }
    if (sVar1 == __n) {
      pbVar7 = *(byte **)(param_2 + 0x10);
      __s2_00 = *(byte **)(param_1 + 0x2b90);
      if ((bVar3 & 1) == 0) {
        pbVar7 = param_2 + 1;
      }
      if ((bVar2 & 1) == 0) {
        __s2_00 = (byte *)(param_1 + 0x2b81);
      }
      if ((bVar3 & 1) == 0) {
        if (__n == 0) {
          return 1;
        }
        lVar6 = -(ulong)(bVar3 >> 1);
        pbVar7 = param_2;
        while (pbVar7 = pbVar7 + 1, *pbVar7 == *__s2_00) {
          lVar6 = lVar6 + 1;
          __s2_00 = __s2_00 + 1;
          if (lVar6 == 0) {
            return 1;
          }
        }
      }
      else {
        if (__n == 0) {
          return 1;
        }
        iVar4 = memcmp(pbVar7,__s2_00,__n);
        if (iVar4 == 0) {
          return 1;
        }
      }
    }
    FUN_008fce60(param_2,(byte *)(param_1 + 0x2b80));
    return 1;
  }
  __s1 = *(void **)(param_1 + 0x2b90);
  if ((bVar2 & 1) == 0) {
    __s1 = (void *)(param_1 + 0x2b81);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      pcVar5 = (char *)(param_1 + 0x2b81);
      lVar6 = -(ulong)(bVar2 >> 1);
      do {
        if (*pcVar5 != *__s2) goto LAB_00e91c44;
        pcVar5 = pcVar5 + 1;
        lVar6 = lVar6 + 1;
        __s2 = __s2 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00e91c44;
  FUN_008fce60(param_2,&DAT_0320ffa8);
  return 0;
}




undefined8 FUN_00e91cf8(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *__s2;
  
  bVar2 = *(byte *)(param_1 + 0x2be8);
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x2bf0);
  }
  bVar3 = *param_2;
  if (uVar5 == 0) {
    if ((bVar3 & 1) != 0) {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      return 0;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    return 0;
  }
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x2bf0);
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    __s2 = *(byte **)(param_1 + 0x2bf8);
    if ((bVar3 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      __s2 = (byte *)(param_1 + 0x2be9);
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return 1;
      }
      lVar6 = -(ulong)(bVar3 >> 1);
      pbVar7 = param_2;
      while (pbVar7 = pbVar7 + 1, *pbVar7 == *__s2) {
        lVar6 = lVar6 + 1;
        __s2 = __s2 + 1;
        if (lVar6 == 0) {
          return 1;
        }
      }
    }
    else {
      if (__n == 0) {
        return 1;
      }
      iVar4 = memcmp(pbVar7,__s2,__n);
      if (iVar4 == 0) {
        return 1;
      }
    }
  }
  FUN_008fce60(param_2,(byte *)(param_1 + 0x2be8));
  return 1;
}




undefined4 FUN_00e91dec(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  byte *__s2_00;
  
  bVar2 = *(byte *)(param_1 + 0x2b98);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2ba0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x2ba8);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x2b99);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar5 = (char *)(param_1 + 0x2b99);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar5 != *__s2) goto LAB_00e91ea4;
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
      return 0;
    }
    if (__n == 0) {
      return 0;
    }
    iVar4 = memcmp(__s1,__s2,__n);
    if (iVar4 == 0) {
      return 0;
    }
  }
LAB_00e91ea4:
  bVar3 = *param_2;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == __n) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    __s2_00 = *(byte **)(param_1 + 0x2ba8);
    if ((bVar3 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      __s2_00 = (byte *)(param_1 + 0x2b99);
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return 1;
      }
      lVar6 = -(ulong)(bVar3 >> 1);
      pbVar7 = param_2;
      while (pbVar7 = pbVar7 + 1, *pbVar7 == *__s2_00) {
        lVar6 = lVar6 + 1;
        __s2_00 = __s2_00 + 1;
        if (lVar6 == 0) {
          return 1;
        }
      }
    }
    else {
      if (__n == 0) {
        return 1;
      }
      iVar4 = memcmp(pbVar7,__s2_00,__n);
      if (iVar4 == 0) {
        return 1;
      }
    }
  }
  FUN_008fce60(param_2,(byte *)(param_1 + 0x2b98));
  return 1;
}




void FUN_00e91f48(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e91f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,param_1 + 0x570,param_2);
  return;
}




ulong FUN_00e91f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e91fb0:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"getPlayerInfo");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e87404(local_80,lVar1,param_2);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,
                             0x5a,0);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if (*(long *)(lVar3 + 0x28) == local_48) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e920a0;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e91fb0;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e920a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

