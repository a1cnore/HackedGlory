// functions/00e88 — 13 functions
#include "libGameKindred.h"




ulong FUN_00e880dc(long param_1)

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
LAB_00e88120:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"collectHeroChest");
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
        goto LAB_00e88204;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e88120;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e88204:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e88208(long param_1,undefined8 param_2,byte param_3)

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
  local_3c[0] = param_3 & 1;
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e88300:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e88330;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e88300;
  local_40 = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"friendListAll");
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
LAB_00e88330:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e88334(undefined8 param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
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
  undefined8 uStack_48;
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
  lVar3 = FUN_00e9a314(&local_e8,param_2);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x101;
  if (*param_3 != '\0') {
    local_40 = 0x102;
  }
  FUN_00ceeba8(lVar3 + 0x68,&local_50,*(undefined8 *)(lVar3 + 0x18));
  uVar4 = FUN_00e9a398(lVar3);
  FUN_008fcdb8(param_1,uVar4);
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




ulong FUN_00e88464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_64;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e88584:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e885b8;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e88584;
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  FUN_00e70a24(param_2,local_60);
  local_64 = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_80,"friendRequestIssueByHandle");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e87404(local_98,lVar1,local_60);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_80,local_98,0,&local_64,0x5a,0)
  ;
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4 & 0xffffffff;
  }
LAB_00e885b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e885bc(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e886b8:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e886ec;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e886b8;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"friendRequestConfirm");
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
LAB_00e886ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e886f0(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e887ec:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e88820;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e887ec;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"friendRequestReject");
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
LAB_00e88820:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e88824(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e88920:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e88954;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e88920;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"friendNotify");
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
LAB_00e88954:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e88958(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e88a54:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e88a88;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e88a54;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"friendDelete");
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
LAB_00e88a88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e88a8c(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e88b88:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e88bbc;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e88b88;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"friendAddFavorite");
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
LAB_00e88bbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e88bc0(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e88cbc:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e88cf0;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e88cbc;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"friendDeleteFavorite");
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
LAB_00e88cf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e88cf4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  local_4c = param_3;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e88df8:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e88e2c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e88df8;
  local_50 = FUN_00e84f88(param_1 + 0x2c48,param_4);
  FUN_008fa54c(local_68,"friendReplyFromInGame");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e88e30(local_80,lVar1,param_2,&local_4c);
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
LAB_00e88e2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e88e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  local_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[1] = 0x10000;
  local_c8[2] = 0;
  *local_c8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 4;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  local_c0 = local_c8;
  uVar3 = FUN_00e9a314(&local_e0,param_2);
  uVar3 = FUN_00e9a314(uVar3,param_3);
  FUN_00e9a4fc(uVar3,*param_4);
  uVar3 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar3);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  puVar2 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_c0);
    operator_delete(puVar2);
  }
  free(local_a8);
  if (local_b0 != (void *)0x0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e88f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_98 [16];
  void *local_88;
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
LAB_00e89068:
      FUN_00e83324(0xfffffff9);
      uVar5 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar5;
      }
      goto LAB_00e8909c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e89068;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_2);
  uVar4 = FUN_008fa54c(local_68,"createQuintParty");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e890a0(local_98,uVar4,param_2);
  FUN_00e87404(local_80,lVar1,local_98);
  uVar5 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5 & 0xffffffff;
  }
LAB_00e8909c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

