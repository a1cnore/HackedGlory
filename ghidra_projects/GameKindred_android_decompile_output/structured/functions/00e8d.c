// functions/00e8d — 13 functions
#include "libGameKindred.h"




ulong FUN_00e8d010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_a4;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8d138:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return uVar4;
      }
      goto LAB_00e8d174;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8d138;
  local_6c = FUN_00e84f88(param_1 + 0x2c48,param_7);
  FUN_008fa54c(local_88,"createGuild");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  local_a4 = param_6;
  FUN_00e8d178(local_a0,lVar1,param_2,param_3,param_4,param_5,&local_a4);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_88,local_a0,0,&local_6c,0x5a,0)
  ;
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4 & 0xffffffff;
  }
LAB_00e8d174:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8d178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 *param_7)

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
  FUN_00e9a4fc(uVar3,*param_7);
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




ulong FUN_00e8d2c0(long param_1)

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
LAB_00e8d3ac:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e8d3dc;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8d3ac;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"leaveGuild");
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
LAB_00e8d3dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8d3e0(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8d4dc:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8d510;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8d4dc;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"guildInviteConfirm");
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
LAB_00e8d510:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8d514(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8d610:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8d644;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8d610;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"guildInviteReject");
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
LAB_00e8d644:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8d648(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8d744:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8d778;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8d744;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"guildInviteSend");
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
LAB_00e8d778:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8d77c(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8d878:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8d8ac;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8d878;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"guildMemberKick");
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
LAB_00e8d8ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8d8b0(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8d9ac:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8d9e0;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8d9ac;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"joinGuild");
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
LAB_00e8d9e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8d9e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
LAB_00e8dae8:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8db1c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8dae8;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_4);
  FUN_008fa54c(local_68,"changeGuildMotto");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8a0e4(local_80,lVar1,param_2,param_3);
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
LAB_00e8db1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8db20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8dc30:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return uVar4;
      }
      goto LAB_00e8dc68;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8dc30;
  local_5c = FUN_00e84f88(param_1 + 0x2c48,param_5);
  FUN_008fa54c(local_78,"guildChangeName");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8dc6c(local_90,lVar1,param_2,param_3,param_4);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_78,local_90,0,&local_5c,0x5a,0)
  ;
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar4 & 0xffffffff;
  }
LAB_00e8dc68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8dc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

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
  uVar3 = FUN_00e9a314(uVar3,param_4);
  FUN_00e9a314(uVar3,param_5);
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




ulong FUN_00e8dd94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8dea4:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return uVar4;
      }
      goto LAB_00e8dedc;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8dea4;
  local_5c = FUN_00e84f88(param_1 + 0x2c48,param_5);
  FUN_008fa54c(local_78,"guildChangeTag");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8dc6c(local_90,lVar1,param_2,param_3,param_4);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_78,local_90,0,&local_5c,0x5a,0)
  ;
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar4 & 0xffffffff;
  }
LAB_00e8dedc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8dee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
LAB_00e8dfe4:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8e018;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8dfe4;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_4);
  FUN_008fa54c(local_68,"guildChangeOfficerStatus");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8a0e4(local_80,lVar1,param_2,param_3);
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
LAB_00e8e018:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

