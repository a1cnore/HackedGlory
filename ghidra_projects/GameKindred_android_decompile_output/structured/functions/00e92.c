// functions/00e92 — 13 functions
#include "libGameKindred.h"




ulong FUN_00e920a4(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e920f0:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"getPlayerInfos");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e921e4(local_80,lVar1,param_2);
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
        goto LAB_00e921e0;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e920f0;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e921e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e921e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00e9b6ac(uVar3,param_3);
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




void FUN_00e922ec(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 != 0) {
    FUN_008fce60(param_2,param_1 + 0x38);
  }
  if (param_3 != 0) {
    FUN_008fce60(param_3,param_1 + 0x68);
  }
  if (param_4 != 0) {
    if ((*(char *)(param_1 + 0x2a22) == '\0') || (*(char *)(param_1 + 0x2a23) == '\0')) {
      param_1 = param_1 + 0x80;
    }
    else {
      param_1 = param_1 + 0x98;
    }
    FUN_008fce60(param_4,param_1);
  }
  return;
}




ulong FUN_00e9236c(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e92464:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e92498;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e92464;
  local_4c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_68,"getInventoryGroups");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e921e4(local_80,lVar1,param_3);
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
LAB_00e92498:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e9249c(long param_1)

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
LAB_00e92590:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e925c0;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e92590;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"getEquipmentSlotInfo");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e925c4(local_70,lVar1,"player_global_loadout");
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
LAB_00e925c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e925c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  local_98 = 0x400;
  local_90 = 0;
  local_88 = 0;
  local_d0 = operator_new(0x28);
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[1] = 0x10000;
  local_d0[2] = 0;
  *local_d0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 4;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  local_c8 = local_d0;
  lVar4 = FUN_00e9a314(&local_e8,param_2);
  uVar3 = FUN_00e6a474(param_3);
  local_40 = 0x100005;
  local_48 = (ulong)uVar3;
  local_50 = param_3;
  FUN_00ceeba8(lVar4 + 0x68,&local_50,*(undefined8 *)(lVar4 + 0x18));
  uVar5 = FUN_00e9a398(lVar4);
  FUN_008fcdb8(param_1,uVar5);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  puVar2 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_c8);
    operator_delete(puVar2);
  }
  free(local_b0);
  if (local_b8 != (void *)0x0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e926f8(long param_1)

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
LAB_00e927ec:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e9281c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e927ec;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"getEquipmentSlotInfo");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e925c4(local_70,lVar1,"player_global_loadout");
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
LAB_00e9281c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e92820(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e92918:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e9294c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e92918;
  local_4c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_68,"getHeroMastery");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e921e4(local_80,lVar1,param_3);
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
LAB_00e9294c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e92950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  ulong local_68 [2];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e92a70:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e92aa4;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e92a70;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  FUN_00e70a24(param_2,local_68);
  FUN_008fa54c(local_80,"setPlayerHandle");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e87404(local_98,lVar1,local_68);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_80,local_98,0,&local_4c,0x5a,0)
  ;
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e92aa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e92aa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  ulong local_68 [2];
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e92bf4:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e92c28;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e92bf4;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_4);
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  FUN_00e70a24(param_2,local_68);
  local_80[0] = 0;
  local_80[1] = 0;
  local_70 = (void *)0x0;
  FUN_00e70a24(param_3,local_80);
  FUN_008fa54c(local_98,"renamePlayerHandle");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8a0e4(local_b0,lVar1,local_68,local_80);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_98,local_b0,0,&local_4c,0x5a,0)
  ;
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e92c28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e92c2c(long param_1,undefined8 param_2,undefined8 param_3)

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
    if (bVar2 >> 1 != 0) {
LAB_00e92c78:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        FUN_008fa54c(local_60,"processMessage");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e87404(local_78,lVar1,param_3);
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
        goto LAB_00e92d54;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e92c78;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e92d54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e92d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e92da4:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_60[0] = 0;
        local_60[1] = 0;
        local_50 = (void *)0x0;
        iVar4 = FUN_00e70218(&DAT_0320ffc0);
        if (iVar4 == 3) {
          pcVar6 = "desktop";
        }
        else if (iVar4 == 2) {
          pcVar6 = "tablet";
        }
        else if (iVar4 == 1) {
          pcVar6 = "phone";
        }
        else {
          pcVar6 = "unknown";
        }
        FUN_008fa54c(local_78,pcVar6);
        FUN_008fce60(local_60,local_78);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        FUN_008fa54c(local_78,"addDeviceToken");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e92f20(local_90,lVar1,param_3,"android","GooglePlay");
        uVar5 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_78,local_90,0,0,0x5a,0);
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        if ((local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        if (*(long *)(lVar3 + 0x28) == local_48) {
          return uVar5 & 0xffffffff;
        }
        goto LAB_00e92f1c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e92da4;
  FUN_00e83324(0xfffffff9);
  uVar5 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
LAB_00e92f1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e92f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
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
  uVar4 = FUN_00e9a314(&local_108,param_2);
  lVar5 = FUN_00e9a314(uVar4,param_3);
  uVar3 = FUN_00e6a474(param_4);
  local_60 = 0x100005;
  local_68 = (ulong)uVar3;
  local_70 = param_4;
  FUN_00ceeba8(lVar5 + 0x68,&local_70,*(undefined8 *)(lVar5 + 0x18));
  uVar3 = FUN_00e6a474(param_5);
  local_60 = 0x100005;
  local_68 = (ulong)uVar3;
  local_70 = param_5;
  FUN_00ceeba8(lVar5 + 0x68,&local_70,*(undefined8 *)(lVar5 + 0x18));
  uVar4 = FUN_00e9a398(lVar5);
  FUN_008fcdb8(param_1,uVar4);
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

