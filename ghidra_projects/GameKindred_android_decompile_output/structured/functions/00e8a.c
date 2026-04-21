// functions/00e8a — 12 functions
#include "libGameKindred.h"




void FUN_00e8a0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_00e9a314(uVar3,param_4);
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




ulong FUN_00e8a200(long param_1,long param_2)

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
LAB_00e8a300:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8a334;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8a300;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_2);
  FUN_008fa54c(local_68,"leaveQuintParty");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e87404(local_80,lVar1,param_2 + 0x28);
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
LAB_00e8a334:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8a338(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8a45c:
      FUN_00e83324(0xfffffff9);
      uVar5 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar5;
      }
      goto LAB_00e8a490;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8a45c;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  uVar4 = FUN_008fa54c(local_68,"partyInviteConfirm");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8a494(local_98,uVar4,param_3);
  FUN_00e8a0e4(local_80,lVar1,param_2,local_98);
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
LAB_00e8a490:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8a494(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  char *__s2;
  char *pcVar7;
  long lVar8;
  void *__s1;
  undefined8 local_110;
  void *pvStack_108;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_98 = 0;
  uStack_90 = 0x400;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[1] = 0x10000;
  local_c8[2] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  *local_c8 = 0;
  local_d0 = 3;
  bVar2 = *(byte *)(param_3 + 0x48);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_3 + 0x50);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  local_c0 = local_c8;
  if (__n == sVar1) {
    __s1 = *(void **)(param_3 + 0x58);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_3 + 0x49);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(param_3 + 0x49);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00e8a594;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00e8a5a4;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00e8a5a4;
  }
LAB_00e8a594:
  FUN_00e8b2a0(&local_e0,param_3 + 0x30,0x10);
LAB_00e8a5a4:
  local_f0 = 0;
  uStack_e8 = 0x100;
  uStack_70 = 0;
  pvStack_108 = (void *)0x0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_48 = 0x200;
  local_40 = 0;
  local_78 = (undefined1 *)&local_110;
  FUN_00914ff4(&local_e0,&local_78);
  uVar6 = FUN_009155f8(&local_110);
  FUN_008fa54c(param_1,uVar6);
  free(local_60);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  free(local_100);
  if (pvStack_108 != (void *)0x0) {
    operator_delete(pvStack_108);
  }
  puVar4 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_c0);
    operator_delete(puVar4);
  }
  free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00e8a66c(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8a768:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8a79c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8a768;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"partyInviteReject");
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
LAB_00e8a79c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8a7a0(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8a89c:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8a8d0;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8a89c;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"partyInviteSend");
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
LAB_00e8a8d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8a8d4(long param_1,undefined8 param_2,long param_3)

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
LAB_00e8a9d8:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8aa0c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8a9d8;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"partyMemberKick");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8a0e4(local_80,lVar1,param_2,param_3 + 0x28);
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
LAB_00e8aa0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8aa10(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x68);
  local_48 = param_5;
  local_44 = param_4;
  local_40 = param_3;
  uStack_3c = param_2;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8ab1c:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e8ab4c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8ab1c;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_6);
  FUN_008fa54c(local_68,"partyMemberMove");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8ab50(local_80,lVar1,&uStack_3c,&local_40,&local_44,&local_48);
  uVar4 = FUN_00ebf928(param_1 + 0x10,(byte *)(param_1 + 0x68),local_68,local_80,0,&local_4c,0x5a,0)
  ;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 0xffffffff;
  }
LAB_00e8ab4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8ab50(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

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
  uVar3 = FUN_00e9a4fc(uVar3,*param_3);
  uVar3 = FUN_00e9a4fc(uVar3,*param_4);
  uVar3 = FUN_00e9a4fc(uVar3,*param_5);
  FUN_00e9a4fc(uVar3,*param_6);
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




ulong FUN_00e8ac8c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  local_4c = param_2;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00e8ad98:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8adcc;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8ad98;
  local_50 = FUN_00e84f88(param_1 + 0x2c48,param_4);
  FUN_008fa54c(local_68,"partyChangeQueueMode");
  lVar1 = param_1 + 0x2b80;
  if (*(char *)(param_1 + 0x2be0) != '\0') {
    lVar1 = param_1 + 0x2be8;
  }
  FUN_00e8add0(local_80,lVar1,&local_4c,param_5,param_3);
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
LAB_00e8adcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8add0(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
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
  ulong local_70 [2];
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
  lVar3 = FUN_00e9a314(&local_108,param_2);
  local_70[0] = (ulong)*param_3;
  local_60 = 0x3a06;
  local_70[1] = 0;
  if (-1 < (int)*param_3) {
    local_60 = 0x3e06;
  }
  FUN_00ceeba8(lVar3 + 0x68,local_70,*(undefined8 *)(lVar3 + 0x18));
  uVar4 = FUN_00e9a314(lVar3,param_4);
  FUN_00e9a314(uVar4,param_5);
  uVar4 = FUN_00e9a398();
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




ulong FUN_00e8af2c(long param_1,undefined8 param_2,undefined8 param_3)

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
LAB_00e8b028:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar4;
      }
      goto LAB_00e8b05c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8b028;
  local_4c = FUN_00e84f88(param_1 + 0x2c48,param_3);
  FUN_008fa54c(local_68,"partyBalanceTeams");
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
LAB_00e8b05c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

