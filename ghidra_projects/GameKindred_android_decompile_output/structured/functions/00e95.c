// functions/00e95 — 13 functions
#include "libGameKindred.h"




void FUN_00e95098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_e0 = 0;
  local_b8 = 0x400;
  local_b0 = 0;
  local_a8 = 0;
  local_f0 = operator_new(0x28);
  local_f0[3] = 0;
  local_f0[4] = 0;
  local_f0[1] = 0x10000;
  local_f0[2] = 0;
  *local_f0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 4;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  local_e8 = local_f0;
  lVar4 = FUN_00e9a314(&local_108,param_2);
  uVar3 = FUN_00e6a474(param_3);
  local_60 = 0x100005;
  local_68 = (ulong)uVar3;
  local_70 = param_3;
  FUN_00ceeba8(lVar4 + 0x68,&local_70,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_00e6a474(param_4);
  local_60 = 0x100005;
  local_68 = (ulong)uVar3;
  local_70 = param_4;
  FUN_00ceeba8(lVar4 + 0x68,&local_70,*(undefined8 *)(lVar4 + 0x18));
  FUN_00e9a314(lVar4,param_5);
  uVar5 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar5);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  puVar2 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_e8);
    operator_delete(puVar2);
  }
  free(local_d0);
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95214(long param_1)

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
LAB_00e95258:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getAscensionDisplayData");
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
        goto LAB_00e9533c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95258;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e9533c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95340(long param_1)

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
LAB_00e95384:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"attemptRedeemAscensionChest");
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
        goto LAB_00e95468;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95384;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e95468:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e9546c(long param_1,byte param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  undefined4 local_44;
  undefined4 local_40;
  byte local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c[0] = param_2 & 1;
  bVar2 = *(byte *)(param_1 + 0x68);
  local_40 = param_3;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e954bc:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_44 = FUN_00e84f88(param_1 + 0x2c48,param_4);
        FUN_008fa54c(local_60,"attemptRedeemAscensionRankUpChest");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e955b0(local_78,lVar1,local_3c,&local_40);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_60,local_78,0,&local_44,
                             0x5a,0);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        if ((local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e955ac;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e954bc;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e955ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e955b0(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  local_a8 = 0x400;
  local_a0 = 0;
  local_98 = 0;
  local_e0 = operator_new(0x28);
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[1] = 0x10000;
  local_e0[2] = 0;
  *local_e0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 4;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  local_d8 = local_e0;
  lVar3 = FUN_00e9a314(&local_f8,param_2);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x101;
  if (*param_3 != '\0') {
    local_50 = 0x102;
  }
  FUN_00ceeba8(lVar3 + 0x68,&local_60,*(undefined8 *)(lVar3 + 0x18));
  FUN_00e9a4fc(lVar3,*param_4);
  uVar4 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar4);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  puVar2 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_d8);
    operator_delete(puVar2);
  }
  free(local_c0);
  if (local_c8 != (void *)0x0) {
    operator_delete(local_c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e956f4(long param_1)

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
LAB_00e95738:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"attemptRedeemAscensionSeasonEndChest");
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
        goto LAB_00e9581c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95738;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e9581c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95820(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e9586c:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"attemptRedeemSeasonalAscensionChest");
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
        goto LAB_00e9595c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e9586c;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e9595c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95960(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e959ac:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_68,"buyAscensionSeasonalBundle");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e87404(local_80,lVar1,param_3);
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
        goto LAB_00e95a98;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e959ac;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e95a98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95a9c(long param_1)

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
LAB_00e95ae0:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getRewardsManifest");
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
        goto LAB_00e95bc4;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95ae0;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e95bc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95bc8(long param_1,byte param_2,undefined8 param_3)

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
    if (bVar2 >> 1 != 0) {
LAB_00e95c14:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_40 = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_58,"getQuestDisplayDataForPlayer");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e88334(local_70,lVar1,local_3c);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_40,
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
        goto LAB_00e95d00;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95c14;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e95d00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95d04(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e95d50:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"getQuestDisplayDataForPlayerAndType");
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
        goto LAB_00e95e40;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95d50;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e95e40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95e44(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e95e90:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"redeemQuestForPlayer");
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
        goto LAB_00e95f80;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95e90;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e95f80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e95f84(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e95fd0:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"skipQuestForPlayer");
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
        goto LAB_00e960c0;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e95fd0;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e960c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

