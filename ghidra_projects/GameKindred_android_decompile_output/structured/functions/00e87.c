// functions/00e87 — 13 functions
#include "libGameKindred.h"




undefined4
FUN_00e87070(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  void *local_140;
  undefined4 local_134;
  undefined8 local_130;
  void *pvStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  byte *local_f0;
  byte *pbStack_e8;
  undefined8 local_e0;
  void *pvStack_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *pvStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_b0 = &local_e0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0x100;
  pvStack_d8 = (void *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0x200;
  local_78 = 0;
  FUN_00916df0(&local_b0);
  FUN_00e83cf0(&local_b0,"gameId");
  FUN_00e83d90(&local_b0,param_2);
  FUN_00e83cf0(&local_b0,"username");
  FUN_00e83d40(&local_b0,param_5);
  FUN_00e83cf0(&local_b0,"password");
  FUN_00e83d40(&local_b0,param_6);
  FUN_00e83cf0(&local_b0,"credentials");
  local_f0 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    local_f0 = param_4 + 1;
  }
  local_110 = 0;
  uStack_108 = 0x100;
  pvStack_128 = (void *)0x0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_100 = 0;
  local_f8 = 0;
  pbStack_e8 = local_f0;
  FUN_00e9a570(&local_130,&local_f0,&local_b0);
  puVar2 = local_b0;
  local_90 = local_90 + -0x10;
  puVar4 = (undefined1 *)local_b0[3];
  puVar5 = puVar4 + 1;
  if ((undefined1 *)local_b0[4] <= puVar5) {
    FUN_008fe7c0(local_b0,1);
    puVar4 = (undefined1 *)puVar2[3];
    puVar5 = puVar4 + 1;
  }
  puVar2[3] = puVar5;
  *puVar4 = 0x7d;
  local_134 = FUN_00e84f88(param_1 + 0x2c48,param_7);
  FUN_008fa54c(local_150,"executeCommand");
  local_170 = FUN_009155f8(&local_e0);
  FUN_00e86f28(local_168,param_3,"link_account",&local_170);
  uVar3 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x38,local_150,local_168,0,&local_134,0x5a,0);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  free(local_120);
  if (pvStack_128 != (void *)0x0) {
    operator_delete(pvStack_128);
  }
  free(pvStack_98);
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  free(local_d0);
  if (pvStack_d8 != (void *)0x0) {
    operator_delete(pvStack_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e872d0(long param_1,undefined8 param_2,undefined8 param_3)

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
    if (bVar2 >> 1 == 0) {
LAB_00e873cc:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e87400;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e873cc;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"estimatedWaitTime");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e87404(local_80,lVar1,param_2);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e87400:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e87404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  local_80 = 0x400;
  local_78 = 0;
  local_70 = 0;
  local_b8 = operator_new(0x28);
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[1] = 0x10000;
  local_b8[2] = 0;
  *local_b8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 4;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  local_b0 = local_b8;
  uVar3 = FUN_00e9a314(&local_d0,param_2);
  FUN_00e9a314(uVar3,param_3);
  uVar3 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar3);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  puVar2 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_b0);
    operator_delete(puVar2);
  }
  free(local_98);
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8750c(long param_1)

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
LAB_00e875f8:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e87628;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e875f8;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"getDailyPicker");
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
LAB_00e87628:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8762c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  local_80 = 0x400;
  local_78 = 0;
  local_70 = 0;
  local_b8 = operator_new(0x28);
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[1] = 0x10000;
  local_b8[2] = 0;
  *local_b8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 4;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  local_b0 = local_b8;
  FUN_00e9a314(&local_d0,param_2);
  uVar3 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar3);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  puVar2 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_b0);
    operator_delete(puVar2);
  }
  free(local_98);
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e87728(long param_1)

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
LAB_00e8776c:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getTalentsData");
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
        goto LAB_00e87850;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e8776c;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e87850:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e87854(long param_1)

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
LAB_00e87898:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getPlayerEsportsBadgeData");
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
        goto LAB_00e8797c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e87898;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e8797c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e87980(long param_1)

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
LAB_00e879c4:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getPlayerSkinProgress");
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
        goto LAB_00e87aa8;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e879c4;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e87aa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e87aac(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e87af8:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"decraftSkinBlueprint");
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
        goto LAB_00e87be8;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e87af8;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e87be8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e87bec(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e87c38:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"upgradeTalent");
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
        goto LAB_00e87d28;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e87c38;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e87d28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e87d2c(long param_1,undefined8 param_2,byte param_3,undefined8 param_4)

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
    if (bVar2 >> 1 == 0) {
LAB_00e87e34:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e87e68;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e87e34;
  local_50 = FUN_00e84f88(param_1 + 0x2c48,param_4);
  FUN_008fa54c(local_68,"purchaseDailyPick");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e87e6c(local_80,lVar1,param_2,local_4c);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_50,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e87e68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e87e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
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
  uVar3 = FUN_00e9a314(&local_f8,param_2);
  lVar4 = FUN_00e9a314(uVar3,param_3);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x101;
  if (*param_4 != '\0') {
    local_50 = 0x102;
  }
  FUN_00ceeba8(lVar4 + 0x68,&local_60,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_00e9a398(lVar4);
  FUN_008fcdb8(param_1,uVar3);
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




ulong FUN_00e87fb0(long param_1)

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
LAB_00e87ff4:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getHeroChestData");
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
        goto LAB_00e880d8;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e87ff4;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e880d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

