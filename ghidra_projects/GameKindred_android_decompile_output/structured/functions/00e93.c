// functions/00e93 — 13 functions
#include "libGameKindred.h"




ulong FUN_00e9309c(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_2 + 0x68);
  local_64 = param_7;
  local_60 = param_1;
  local_5c = param_4;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e93100:
      if (*(int *)(param_2 + 0x2ad0) != 0) {
        FUN_008fa54c(local_80,"recordMatchExperienceMetrics");
        lVar1 = param_2 + 0x2b80;
        if (*(char *)(param_2 + 0x2be0) != '\0') {
          lVar1 = param_2 + 0x2be8;
        }
        FUN_00e931f8(local_98,lVar1,param_3,&local_5c,param_5,param_6,&local_60,&local_64);
        uVar4 = FUN_00ebf928(param_2 + 0x10,(byte *)(param_2 + 0x68),local_80,local_98,0,0,0x5a,0);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if (*(long *)(lVar3 + 0x28) == local_58) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e931f4;
      }
    }
  }
  else if (*(long *)(param_2 + 0x70) != 0) goto LAB_00e93100;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar4;
  }
LAB_00e931f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e931f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                 undefined8 param_5,undefined8 param_6,float *param_7,uint *param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  void *local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  double local_88 [2];
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (void *)0x0;
  local_e8 = (void *)0x0;
  local_f8 = 0;
  local_d0 = 0x400;
  local_c8 = 0;
  local_c0 = 0;
  local_108 = operator_new(0x28);
  local_108[3] = 0;
  local_108[4] = 0;
  local_108[1] = 0x10000;
  local_108[2] = 0;
  *local_108 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 4;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  local_100 = local_108;
  uVar3 = FUN_00e9a314(&local_120,param_2);
  lVar4 = FUN_00e9a314(uVar3,param_3);
  local_88[0] = (double)(ulong)*param_4;
  local_78 = 0x3a06;
  local_88[1] = 0.0;
  if (-1 < (int)*param_4) {
    local_78 = 0x3e06;
  }
  FUN_00ceeba8(lVar4 + 0x68,local_88,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_00e9a314(lVar4,param_5);
  lVar4 = FUN_00e9a314(uVar3,param_6);
  local_88[1] = 0.0;
  local_78 = 0x4206;
  local_88[0] = (double)*param_7;
  FUN_00ceeba8(lVar4 + 0x68,local_88,*(undefined8 *)(lVar4 + 0x18));
  local_88[0] = (double)(ulong)*param_8;
  local_78 = 0x3a06;
  local_88[1] = 0.0;
  if (-1 < (int)*param_8) {
    local_78 = 0x3e06;
  }
  FUN_00ceeba8(lVar4 + 0x68,local_88,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_00e9a398(lVar4);
  FUN_008fcdb8(param_1,uVar3);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  puVar2 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_100);
    operator_delete(puVar2);
  }
  free(local_e8);
  if (local_f0 != (void *)0x0) {
    operator_delete(local_f0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e933cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e93424:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_5c = FUN_00e84f88(param_1 + 0x2c48,param_5);
        local_78[0] = 0;
        local_78[1] = 0;
        local_68 = (void *)0x0;
        FUN_00e70a24(param_3,local_78);
        FUN_008fa54c(local_90,"reportHonorPlayer");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8dc6c(local_a8,lVar1,param_2,local_78,param_4);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_90,local_a8,0,&local_5c,
                             0x5a,0);
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        if (*(long *)(lVar3 + 0x28) == local_58) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e93544;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e93424;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar4;
  }
LAB_00e93544:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e93548(long param_1)

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
LAB_00e93634:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e93664;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e93634;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"getPlayerCardInventory");
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
LAB_00e93664:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e93668(long param_1)

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
LAB_00e936ac:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getSkinManifest");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8762c(local_70,lVar1);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,
                             10,0);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e93790;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e936ac;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e93790:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e93794(long param_1)

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
LAB_00e937d8:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"getCardBoxManifest");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8762c(local_70,lVar1);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_3c,
                             10,0);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e938bc;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e937d8;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e938bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e938c0(long param_1,undefined4 param_2,undefined8 param_3)

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
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  local_3c = param_2;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e93908:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_40 = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_58,"refreshCardBoxManifest");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e903e4(local_70,lVar1,&local_3c);
        uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_58,local_70,0,&local_40,
                             10,0);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return uVar4 & 0xffffffff;
        }
        goto LAB_00e939f4;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e93908;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e939f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e939f8(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e93a44:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"purchaseCardPack");
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
        goto LAB_00e93b34;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e93a44;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e93b34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e93b38(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e93b84:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"weaveHeroSkin");
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
        goto LAB_00e93c74;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e93b84;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e93c74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e93c78(long param_1,undefined4 param_2,undefined8 param_3)

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
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  local_3c = param_2;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00e93cc0:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_40 = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_58,"setTutorialState");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e93db0(local_70,lVar1,&local_3c);
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
        goto LAB_00e93dac;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e93cc0;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e93dac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e93db0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

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
  FUN_00e9a4fc(uVar3,*param_3);
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




ulong FUN_00e93eb8(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e93f04:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"forgeCard");
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
        goto LAB_00e93ff4;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e93f04;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e93ff4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e93ff8(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e94044:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"forgeEssence");
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
        goto LAB_00e94134;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e94044;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e94134:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

