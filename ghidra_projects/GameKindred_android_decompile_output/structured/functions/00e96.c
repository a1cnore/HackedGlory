// functions/00e96 — 16 functions
#include "libGameKindred.h"




ulong FUN_00e960c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
LAB_00e96114:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_4);
        FUN_008fa54c(local_68,"notifyPlayerAction");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8a0e4(local_80,lVar1,param_2,param_3);
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
        goto LAB_00e96208;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e96114;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e96208:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e9620c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  ulong local_88 [2];
  void *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e96270:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_6c = FUN_00e84f88(param_1 + 0x2c48,param_7);
        local_88[0] = 0;
        local_88[1] = 0;
        local_78 = (void *)0x0;
        FUN_00e70a24(param_3,local_88);
        FUN_008fa54c(local_a0,"verifyGovernmentId");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e963a0(local_b8,lVar1,param_2,local_88,param_4,param_5,param_6);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_a0,local_b8,0,&local_6c,
                             0x5a,0);
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e9639c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e96270;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4;
  }
LAB_00e9639c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e963a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  local_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[1] = 0x10000;
  local_d8[2] = 0;
  *local_d8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 4;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  local_d0 = local_d8;
  uVar3 = FUN_00e9a314(&local_f0,param_2);
  uVar3 = FUN_00e9a314(uVar3,param_3);
  uVar3 = FUN_00e9a314(uVar3,param_4);
  uVar3 = FUN_00e9a314(uVar3,param_5);
  uVar3 = FUN_00e9a314(uVar3,param_6);
  FUN_00e9a314(uVar3,param_7);
  uVar3 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar3);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  puVar2 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_d0);
    operator_delete(puVar2);
  }
  free(local_b8);
  if (local_c0 != (void *)0x0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e964e8(long param_1)

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
LAB_00e9652c:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"isGovernmentIdVerified");
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
        goto LAB_00e96610;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e9652c;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e96610:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00e96614(long param_1)

{
  return param_1 + 0x2a30;
}




bool FUN_00e96620(long param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0x2ad0) & 0xfffffffe) == 6;
  if (bVar1) {
    FUN_008fce60(param_2,param_1 + 0x2a48);
    *param_3 = *(undefined4 *)(param_1 + 0x2a60);
  }
  return bVar1;
}




bool FUN_00e96674(long param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0x2ad0) & 0xfffffffe) == 6;
  if (bVar1) {
    FUN_008fce60(param_2,param_1 + 0x2a68);
    *param_3 = *(undefined4 *)(param_1 + 0x2a80);
  }
  return bVar1;
}




ulong FUN_00e966cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x2ad0) == 0) {
    FUN_00e83324(0xfffffff9);
    uVar2 = FUN_00e83340();
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00e967bc;
  }
  else {
    FUN_008fa54c(local_60,"updateMatchInfo");
    FUN_00e87404(local_78,param_2,param_3);
    uVar2 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x68,local_60,local_78,1,0,0x5a,0);
    uVar2 = uVar2 & 0xffffffff;
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_00e967bc:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar2;
}




ulong FUN_00e967c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x2ad0) == 0) {
    FUN_00e83324(0xfffffff9);
    uVar2 = FUN_00e83340();
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00e96884;
  }
  else {
    FUN_008fa54c(local_50,"notifyGameResults");
    uVar2 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x68,local_50,param_3,1,0,0x5a,0);
    uVar2 = uVar2 & 0xffffffff;
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00e96884:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar2;
}




ulong FUN_00e96888(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x68);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
LAB_00e96948:
      FUN_00e83324(0xfffffff9);
      uVar3 = FUN_00e83340();
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return uVar3;
      }
      goto LAB_00e96978;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e96948;
  FUN_008fa54c(local_50,"spectatorExitMatch");
  FUN_00e8762c(local_68,param_2);
  uVar3 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_50,local_68,0,0,0x5a,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 0xffffffff;
  }
LAB_00e96978:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e9697c(long param_1)

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
LAB_00e969c0:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getProgressiveChestDescriptions");
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
        goto LAB_00e96aa4;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e969c0;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e96aa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e96aa8(long param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_50;
  byte local_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_4c[0] = param_3 & 1;
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e96afc:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_50 = FUN_00e84f88(param_1 + 0x2c48,param_4);
        FUN_008fa54c(local_68,"collectProgressiveChest");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e87e6c(local_80,lVar1,param_2,local_4c);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_50,
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
        goto LAB_00e96bf0;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e96afc;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e96bf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e96bf4(long param_1)

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
LAB_00e96c38:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getLeaderboardData");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8762c(local_70,lVar1);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,
                             0xb4,0);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e96d1c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e96c38;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e96d1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e96d20(long param_1)

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
LAB_00e96d64:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getLiveEventData");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8762c(local_70,lVar1);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,
                             0xb4,0);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e96e48;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e96d64;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e96e48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e96e4c(byte *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *local_208;
  byte *pbStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [328];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = (void *)0x0;
  local_1d0 = 0;
  local_1a8 = 0x400;
  local_1a0 = 0;
  local_198 = 0;
  local_1e0 = operator_new(0x28);
  local_1e0[3] = 0;
  local_1e0[4] = 0;
  local_1e0[1] = 0x10000;
  local_1e0[2] = 0;
  *local_1e0 = 0;
  local_208 = *(byte **)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    local_208 = param_1 + 1;
  }
  pbStack_200 = local_208;
  local_1d8 = local_1e0;
  if (*local_208 != 0) {
    do {
      FUN_00e9b790(&local_1f8,&local_208);
      FUN_00e7fbc4(auStack_190,&local_1f8);
      FUN_00e96f6c(&DAT_032106f0,auStack_190);
      FUN_00948920(auStack_190);
    } while (*local_208 != 0);
    if (local_1d8 == (undefined8 *)0x0) goto LAB_00e96f2c;
  }
  puVar3 = local_1d8;
  FUN_008fd2c4(local_1d8);
  operator_delete(puVar3);
LAB_00e96f2c:
  free(local_1c0);
  if (local_1c8 != (void *)0x0) {
    operator_delete(local_1c8);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e96f6c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00e9c890(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x148;
  FUN_008fcdb8(lVar4 + -0x148,param_2);
  FUN_008fcdb8(lVar4 + -0x130,param_2 + 0x18);
  FUN_00e9c980(lVar4 + -0x118,param_2 + 0x30);
  *(undefined1 *)(lVar4 + -6) = *(undefined1 *)(param_2 + 0x142);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x140);
  return;
}

