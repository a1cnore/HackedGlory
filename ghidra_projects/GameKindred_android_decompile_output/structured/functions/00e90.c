// functions/00e90 — 12 functions
#include "libGameKindred.h"




ulong FUN_00e90050(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e9014c:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e90180;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e9014c;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"achievementGetScore");
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
LAB_00e90180:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e90184(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e90280:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e902b4;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e90280;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"updatePlatformPlayerConfig");
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
LAB_00e902b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e902b8(long param_1,undefined4 param_2,undefined8 param_3)

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
    if (bVar2 >> 1 == 0) {
LAB_00e903b0:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e903e0;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e903b0;
  local_40 = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_58,"presenceBroadcast");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e903e4(local_70,lVar1,&local_3c);
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
LAB_00e903e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e903e4(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  ulong local_50 [2];
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
  local_50[0] = (ulong)*param_3;
  local_40 = 0x3a06;
  local_50[1] = 0;
  if (-1 < (int)*param_3) {
    local_40 = 0x3e06;
  }
  FUN_00ceeba8(lVar3 + 0x68,local_50,*(undefined8 *)(lVar3 + 0x18));
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




ulong FUN_00e90518(long param_1,byte param_2,undefined8 param_3)

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
LAB_00e90614:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e90644;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e90614;
  local_40 = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_58,"presenceSetReceiveBroadcast");
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
LAB_00e90644:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00e90648(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  byte *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a4;
  byte local_1a0 [16];
  void *local_190;
  byte local_188 [16];
  void *local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_160 = param_4;
  local_164 = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_00e85184(param_1 + 0x2a30);
  FUN_00e6a8a8(auStack_158,&DAT_01bb6d43,DAT_02bf24e0);
  local_170 = FUN_00e702d0(&DAT_0320ffc0);
  bVar2 = *(byte *)(param_1 + 0x50);
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x58);
  }
  pbVar1 = (byte *)(param_1 + 0x38);
  if (uVar5 != 0) {
    pbVar1 = (byte *)(param_1 + 0x50);
  }
  FUN_008fa54c(local_188,"startSessionForPlayer");
  local_1a4 = FUN_00e70218(&DAT_0320ffc0);
  uStack_1b0 = FUN_00e7027c(&DAT_0320ffc0);
  local_1b8 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_1b8 = param_2 + 1;
  }
  local_1c0 = FUN_00e70228(&DAT_0320ffc0);
  local_1c8 = FUN_00e70260(&DAT_0320ffc0);
  local_1d0 = thunk_FUN_00e7753c(&DAT_0320ffc0);
  FUN_00e90818(local_1a0,param_1 + 0x2b80,auStack_158,&local_1a4,&local_170,"production",&local_160,
               &uStack_1b0,&local_1b8,&local_1c0,&local_1c8,&local_1d0);
  uVar4 = FUN_00ebf928(param_1 + 0x10,pbVar1,local_188,local_1a0,0,&local_164,0x14,0);
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e90818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
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
  undefined8 local_88;
  ulong local_80;
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
  lVar4 = FUN_00e9a314(&local_120,param_2);
  uVar3 = FUN_00e6a474(param_3);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_3;
  FUN_00ceeba8(lVar4 + 0x68,&local_88,*(undefined8 *)(lVar4 + 0x18));
  uVar5 = FUN_00e9a4fc(lVar4,*param_4);
  lVar4 = FUN_00e9a478(uVar5,*param_5);
  uVar3 = FUN_00e6a474(param_6);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_6;
  FUN_00ceeba8(lVar4 + 0x68,&local_88,*(undefined8 *)(lVar4 + 0x18));
  uVar5 = FUN_00e9a478(lVar4,*param_7);
  uVar5 = FUN_00e9a478(uVar5,*param_8);
  uVar5 = FUN_00e9a478(uVar5,*param_9);
  uVar5 = FUN_00e9a478(uVar5,*param_10);
  uVar5 = FUN_00e9a478(uVar5,*param_11);
  FUN_00e9a478(uVar5,*param_12);
  uVar5 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar5);
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




ulong FUN_00e90a08(long param_1)

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
  if (*(long **)(param_1 + 0x2a08) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2a08) + 0x38))();
    *(undefined1 *)(param_1 + 0x2a22) = 0;
    *(undefined4 *)(param_1 + 0x2a14) = 0;
    if (*(long **)(param_1 + 0x2a08) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2a08) + 8))();
    }
    *(undefined8 *)(param_1 + 0x2a08) = 0;
  }
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_00e90a7c;
LAB_00e90b6c:
    FUN_00e83324(0xfffffff9);
  }
  else {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e90b6c;
LAB_00e90a7c:
    if (*(int *)(param_1 + 0x2ad0) != 0) {
      FUN_00e85184(param_1 + 0x2a30);
      FUN_008fa54c(local_60,"endSession");
      lVar1 = param_1 + 0x2b80;
      if (*(char *)(param_1 + 0x2be0) != '\0') {
        lVar1 = param_1 + 0x2be8;
      }
      FUN_00e8762c(local_78,lVar1);
      uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_60,local_78,1,0,2,0);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      FUN_00ebf3ac(param_1 + 0x10);
      FUN_008fa54c(local_60,&DAT_01e277f2);
      FUN_008fce60(param_1 + 0x2be8,local_60);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      *(undefined4 *)(param_1 + 0x2ad0) = 0;
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4 & 0xffffffff;
      }
      goto LAB_00e90ba8;
    }
    FUN_00e83330();
  }
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e90ba8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e90bac(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_198 [16];
  void *local_188;
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
    if (bVar2 >> 1 != 0) {
LAB_00e90bf8:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_14c = FUN_00e84f88(param_1 + 0x2c48,param_2);
        FUN_00e6a8a8(auStack_148,&DAT_01bb6d43,DAT_02bf24e0);
        uVar4 = FUN_008fa54c(local_168,"joinLobby");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8b900(local_198,uVar4,param_2);
        FUN_00e90d2c(local_180,lVar1,local_198,auStack_148);
        uVar5 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_168,local_180,0,
                             &local_14c,0x5a,0);
        if ((local_180[0] & 1) != 0) {
          operator_delete(local_170);
        }
        if ((local_198[0] & 1) != 0) {
          operator_delete(local_188);
        }
        if ((local_168[0] & 1) != 0) {
          operator_delete(local_158);
        }
        if (*(long *)(lVar3 + 0x28) == local_48) {
          return uVar5 & 0xffffffff;
        }
        goto LAB_00e90d28;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e90bf8;
  FUN_00e83324(0xfffffff9);
  uVar5 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
LAB_00e90d28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e90d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
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
  ulong local_58;
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
  uVar4 = FUN_00e9a314(&local_f8,param_2);
  lVar5 = FUN_00e9a314(uVar4,param_3);
  uVar3 = FUN_00e6a474(param_4);
  local_50 = 0x100005;
  local_58 = (ulong)uVar3;
  local_60 = param_4;
  FUN_00ceeba8(lVar5 + 0x68,&local_60,*(undefined8 *)(lVar5 + 0x18));
  uVar4 = FUN_00e9a398(lVar5);
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




ulong FUN_00e90e74(long param_1)

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
LAB_00e90eb8:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_3c = FUN_00e84f88(param_1 + 0x2c48);
        FUN_008fa54c(local_58,"exitLobby");
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
        goto LAB_00e90f9c;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e90eb8;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e90f9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e90fa0(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e90fec:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
        FUN_008fa54c(local_68,"acceptMatch");
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
        goto LAB_00e910dc;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e90fec;
  FUN_00e83324(0xfffffff9);
  uVar4 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_00e910dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

