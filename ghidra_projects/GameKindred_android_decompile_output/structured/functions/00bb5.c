// functions/00bb5 — 20 functions
#include "libGameKindred.h"




void FUN_00bb50c8(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined **local_128 [5];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [64];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00bb51c0;
  FUN_00e84dac(local_128);
  local_128[0] = &PTR_FUN_027bbb08;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  memset(auStack_100,0,0x48);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  lVar5 = FUN_009580b8();
  FUN_008fce60(auStack_100,lVar5 + 0x5490);
  lVar5 = FUN_009580b8();
  FUN_008fce60(auStack_e8,lVar5 + 0x5308);
  lVar5 = FUN_009580b8();
  FUN_008fce60(auStack_d0,lVar5 + 0x5320);
  FUN_00bb40cc(param_1,local_128);
  FUN_009580b8();
  FUN_0096358c();
  if (*(char *)(param_2 + 0x44) == '\0') {
    pbVar12 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar12;
    uVar10 = *(ulong *)(param_2 + 0x50);
    uVar11 = (ulong)(bVar1 >> 1);
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xc) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"no_such_team",0xc);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x48);
        uVar10 = *(ulong *)(param_2 + 0x50);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00bb5240;
      }
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
      pcVar7 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_NO_TEAM";
    }
    else {
LAB_00bb5240:
      if ((bVar1 & 1) != 0) {
        uVar11 = uVar10;
      }
      if ((uVar11 != 0xf) ||
         (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_team",0xf), iVar3 != 0))
      goto LAB_00bb51b8;
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
      pcVar7 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_IN_TEAM";
    }
    uVar8 = FUN_00e6ce7c(pcVar7,0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
  else {
    FUN_00bb1bf4(0x3dcccccd,param_1,1,1);
  }
LAB_00bb51b8:
  FUN_0094f104(local_128);
LAB_00bb51c0:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb52e8(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00bb55dc;
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
    thunk_FUN_00e7051c(&local_48,uVar5);
    FUN_00a9da50(0x40a00000,&local_48,0,0);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    goto LAB_00bb55dc;
  }
  pbVar11 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar11;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar10 = (ulong)(bVar1 >> 1);
  uVar4 = uVar10;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0x12) {
    iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"player_not_in_team",0x12);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
      goto LAB_00bb53bc;
    }
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
  }
  else {
LAB_00bb53bc:
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x14) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"other_player_in_team",0x14);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0xe) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"different_game",0xe);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x11) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"agent_not_captain",0x11);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x1c) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"other_player_already_invited",0x1c);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar10 = uVar9;
    }
    if ((uVar10 != 9) ||
       (iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"team_full",9), iVar3 != 0))
    goto LAB_00bb55dc;
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
  }
LAB_00bb55a8:
  uVar7 = FUN_00e6ce7c(pcVar6,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar7,uVar8,0,0);
LAB_00bb55dc:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb5604(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar3 = FUN_00e84e5c(param_2);
  if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    pbVar10 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar10;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uVar9 = (ulong)(bVar1 >> 1);
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x12) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"player_not_in_team",0x12);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_IN_TEAM";
        goto LAB_00bb56f8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x11) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"agent_not_captain",0x11), iVar2 == 0)) {
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_CAPTAIN";
LAB_00bb56f8:
      uVar6 = FUN_00e6ce7c(pcVar5,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_00bb5734(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 0x2b8b0);
  *(undefined4 *)(param_1 + 0x2b8e4) = *param_3;
  FUN_008fce60(param_1 + 0x2b8c8,param_4);
  *(undefined4 *)(param_1 + 0x2b8e8) = *param_5;
  FUN_00e70510(&local_80);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,*param_3);
  plVar1 = (long *)(param_1 + 0x29fe8);
  FUN_00f0d75c(plVar1,&local_80);
  fVar3 = (float)FUN_00f0e700(param_1 + 0x2a118);
  fVar4 = *(float *)(param_1 + 0x2a15c) + -3.0;
  if ((*(float *)(param_1 + 0x2a028) != fVar3) || (*(float *)(param_1 + 0x2a02c) != fVar4)) {
    *(float *)(param_1 + 0x2a028) = fVar3;
    *(float *)(param_1 + 0x2a02c) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  plVar1 = (long *)(param_1 + 0x29f30);
  fVar3 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  FUN_00f01c54(plVar1,0,0,1,1);
  fVar4 = fVar4 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x29f70) != fVar3 * -0.5) || (*(float *)(param_1 + 0x29f74) != fVar4)) {
    *(float *)(param_1 + 0x29f70) = fVar3 * -0.5;
    *(float *)(param_1 + 0x29f74) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,*param_5);
  plVar1 = (long *)(param_1 + 0x28750);
  FUN_00f0d75c(plVar1,&local_80);
  fVar3 = (float)FUN_00f0e700(param_1 + 0x28880);
  fVar4 = *(float *)(param_1 + 0x288c4) + -3.0;
  if ((*(float *)(param_1 + 0x28790) != fVar3) || (*(float *)(param_1 + 0x28794) != fVar4)) {
    *(float *)(param_1 + 0x28790) = fVar3;
    *(float *)(param_1 + 0x28794) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  plVar1 = (long *)(param_1 + 0x28698);
  fVar3 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  FUN_00f01c54(plVar1,0,0,1,1);
  fVar4 = fVar4 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x286d8) != fVar3 * -0.5) || (*(float *)(param_1 + 0x286dc) != fVar4)) {
    *(float *)(param_1 + 0x286d8) = fVar3 * -0.5;
    *(float *)(param_1 + 0x286dc) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb5aa4(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x571c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00bb5ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_00bb5abc(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  undefined **local_118 [5];
  undefined1 auStack_f0 [112];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x2b8ec) != '\0') {
    bVar2 = *(byte *)(param_2 + 200);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_2 + 0xd0);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_2 + 0xd8);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_2 + 0xc9);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar5 = (char *)(param_2 + 0xc9);
          lVar6 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar5 != *__s2) goto LAB_00bb5bdc;
            pcVar5 = pcVar5 + 1;
            lVar6 = lVar6 + 1;
            __s2 = __s2 + 1;
          } while (lVar6 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00bb5bdc;
      FUN_00e84dac(local_118);
      local_118[0] = &PTR_FUN_027bbb08;
      local_50 = 0;
      uStack_48 = 0;
      local_58 = 0;
      memset(auStack_f0,0,0x48);
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_00e84dec(local_118);
      FUN_00bb40cc(param_1,local_118);
      FUN_0094f104(local_118);
    }
  }
LAB_00bb5bdc:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb5c04(long param_1)

{
  FUN_00bb5abc(param_1 + -0x368);
  return;
}




void FUN_00bb5c10(long param_1)

{
  FUN_00bb40cc(param_1 + -0x368);
  return;
}




void FUN_00bb5c1c(long param_1)

{
  FUN_00bb44ec(param_1 + -0x368);
  return;
}




void FUN_00bb5c28(long param_1)

{
  FUN_00bb4728(param_1 + -0x368);
  return;
}




void FUN_00bb5c34(long param_1)

{
  FUN_00bb4cc8(param_1 + -0x368);
  return;
}




void FUN_00bb5c40(long param_1)

{
  FUN_00bb4ec4(param_1 + -0x368);
  return;
}




void thunk_FUN_00bb50c8(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined **appuStack_128 [5];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00bb51c0;
  FUN_00e84dac(appuStack_128);
  appuStack_128[0] = &PTR_FUN_027bbb08;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  memset(auStack_100,0,0x48);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lVar5 = FUN_009580b8();
  FUN_008fce60(auStack_100,lVar5 + 0x5490);
  lVar5 = FUN_009580b8();
  FUN_008fce60(auStack_e8,lVar5 + 0x5308);
  lVar5 = FUN_009580b8();
  FUN_008fce60(auStack_d0,lVar5 + 0x5320);
  FUN_00bb40cc(param_1,appuStack_128);
  FUN_009580b8();
  FUN_0096358c();
  if (*(char *)(param_2 + 0x44) == '\0') {
    pbVar12 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar12;
    uVar10 = *(ulong *)(param_2 + 0x50);
    uVar11 = (ulong)(bVar1 >> 1);
    uVar4 = uVar11;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0xc) {
      iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"no_such_team",0xc);
      if (iVar3 != 0) {
        bVar1 = *(byte *)(param_2 + 0x48);
        uVar10 = *(ulong *)(param_2 + 0x50);
        uVar11 = (ulong)(bVar1 >> 1);
        goto LAB_00bb5240;
      }
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
      pcVar7 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_NO_TEAM";
    }
    else {
LAB_00bb5240:
      if ((bVar1 & 1) != 0) {
        uVar11 = uVar10;
      }
      if ((uVar11 != 0xf) ||
         (iVar3 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"already_in_team",0xf), iVar3 != 0))
      goto LAB_00bb51b8;
      uVar6 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
      pcVar7 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_IN_TEAM";
    }
    uVar8 = FUN_00e6ce7c(pcVar7,0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
  else {
    FUN_00bb1bf4(0x3dcccccd,param_1,1,1);
  }
LAB_00bb51b8:
  FUN_0094f104(appuStack_128);
LAB_00bb51c0:
  if (*(long *)(lVar2 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb5c4c(long param_1)

{
  FUN_00bb50c8(param_1 + -0x368);
  return;
}




void thunk_FUN_00bb5604(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar3 = FUN_00e84e5c(param_2);
  if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    pbVar10 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar10;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uVar9 = (ulong)(bVar1 >> 1);
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x12) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"player_not_in_team",0x12);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_IN_TEAM";
        goto LAB_00bb56f8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x11) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"agent_not_captain",0x11), iVar2 == 0)) {
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_CAPTAIN";
LAB_00bb56f8:
      uVar6 = FUN_00e6ce7c(pcVar5,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void thunk_FUN_00bb5604(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar3 = FUN_00e84e5c(param_2);
  if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    pbVar10 = (byte *)(param_2 + 0x48);
    bVar1 = *pbVar10;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uVar9 = (ulong)(bVar1 >> 1);
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x12) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"player_not_in_team",0x12);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_IN_TEAM";
        goto LAB_00bb56f8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x11) &&
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"agent_not_captain",0x11), iVar2 == 0)) {
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_CAPTAIN";
LAB_00bb56f8:
      uVar6 = FUN_00e6ce7c(pcVar5,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void thunk_FUN_00bb52e8(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00bb55dc;
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
    thunk_FUN_00e7051c(&uStack_48,uVar5);
    FUN_00a9da50(0x40a00000,&uStack_48,0,0);
    if (pvStack_40 != (void *)0x0) {
      operator_delete__(pvStack_40);
      uStack_48 = 0;
      pvStack_40 = (void *)0x0;
    }
    goto LAB_00bb55dc;
  }
  pbVar11 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar11;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar10 = (ulong)(bVar1 >> 1);
  uVar4 = uVar10;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0x12) {
    iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"player_not_in_team",0x12);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
      goto LAB_00bb53bc;
    }
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
  }
  else {
LAB_00bb53bc:
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x14) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"other_player_in_team",0x14);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0xe) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"different_game",0xe);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x11) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"agent_not_captain",0x11);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x1c) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"other_player_already_invited",0x1c);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar10 = uVar9;
    }
    if ((uVar10 != 9) ||
       (iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"team_full",9), iVar3 != 0))
    goto LAB_00bb55dc;
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
  }
LAB_00bb55a8:
  uVar7 = FUN_00e6ce7c(pcVar6,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar7,uVar8,0,0);
LAB_00bb55dc:
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bb52e8(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) == 0) goto LAB_00bb55dc;
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
    thunk_FUN_00e7051c(&uStack_48,uVar5);
    FUN_00a9da50(0x40a00000,&uStack_48,0,0);
    if (pvStack_40 != (void *)0x0) {
      operator_delete__(pvStack_40);
      uStack_48 = 0;
      pvStack_40 = (void *)0x0;
    }
    goto LAB_00bb55dc;
  }
  pbVar11 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar11;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar10 = (ulong)(bVar1 >> 1);
  uVar4 = uVar10;
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0x12) {
    iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"player_not_in_team",0x12);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
      goto LAB_00bb53bc;
    }
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
  }
  else {
LAB_00bb53bc:
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x14) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"other_player_in_team",0x14);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0xe) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"different_game",0xe);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x11) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"agent_not_captain",0x11);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    uVar4 = uVar10;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0x1c) {
      iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"other_player_already_invited",0x1c);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_00bb55a8;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar10 = uVar9;
    }
    if ((uVar10 != 9) ||
       (iVar3 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"team_full",9), iVar3 != 0))
    goto LAB_00bb55dc;
    uVar5 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
    pcVar6 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
  }
LAB_00bb55a8:
  uVar7 = FUN_00e6ce7c(pcVar6,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar5,uVar7,uVar8,0,0);
LAB_00bb55dc:
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb5c64(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort *puVar12;
  undefined4 uVar13;
  
  uVar7 = FUN_00efed6c();
  bVar6 = (param_3 & 1) == 0;
  uVar2 = 0x3eb33333;
  if (bVar6) {
    uVar2 = 0x3e19999a;
  }
  uVar13 = 0x3f800000;
  if (bVar6) {
    uVar13 = 0;
  }
  uVar3 = 0;
  if (bVar6) {
    uVar3 = 0x42c80000;
  }
  uVar4 = 0x3f800000;
  if (bVar6) {
    uVar4 = 0x3f666666;
  }
  uVar8 = FUN_00efee28(uVar13,uVar2,FUN_0091aa80);
  uVar9 = FUN_00efef08(0,uVar3,uVar2,FUN_0091aa80);
  uVar10 = FUN_00eff63c(uVar4,uVar4,uVar2,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar12);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar12,uVar8,uVar9,uVar10,0);
  lVar1 = param_2 + 0x1c070;
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar7,puVar12,0);
  lVar5 = DAT_03210d00;
  if ((param_3 & 1) != 0) {
    FUN_00bb1bf4(param_1,param_2,0,1);
    *(uint *)(param_2 + 0x1c0f4) = *(uint *)(param_2 + 0x1c0f4) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar12);
    *(undefined ***)puVar12 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar12);
  return;
}




void FUN_00bb5f08(long param_1)

{
  FUN_00abc5bc(param_1 + 0x1ce90);
  FUN_00abc5bc(param_1 + 0x1eb88);
  FUN_00abc5bc(param_1 + 0x20ae0);
  FUN_00abc5bc(param_1 + 0x227d8);
  FUN_00b09454(param_1 + 0x25b18,0);
  FUN_00b09454(param_1 + 0x270d8,0);
  FUN_00b09454(param_1 + 0x28970,0);
  if (*(float *)(param_1 + 0x1c1c4) != 0.0) {
    *(float *)(param_1 + 0x1c1c4) = 0.0;
    FUN_0091ada4(param_1 + 0x1c180);
  }
  if (*(float *)(param_1 + 0x19d5c) != 0.0) {
    *(float *)(param_1 + 0x19d5c) = 0.0;
    FUN_0091ada4(param_1 + 0x19d18);
    return;
  }
  return;
}

