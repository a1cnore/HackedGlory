// functions/00b9f — 20 functions
#include "libGameKindred.h"




void thunk_FUN_00b9fd14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_DIALOG_TITLE",0);
  uVar2 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_DIALOG_MSG",0);
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_DIALOG_CONFIRM",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(uVar1,uVar2,uVar3,uVar4,param_1,thunk_FUN_00ba117c,FUN_00b9fdac);
  return;
}




void thunk_FUN_00b9fdb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_INPUT_CAPTION",0);
  uVar2 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_INPUT_MESSAGE",0);
  FUN_00aa1574(param_1 + 0x125b0,uVar1,uVar2,&DAT_03210450,0,0,0,0,param_1,thunk_FUN_00ba03cc,
               FUN_00b9fe5c,param_1 + 0x12610);
  return;
}




void thunk_FUN_00b9fe74(long *param_1)

{
  ulong uVar1;
  
  if ((DAT_02be9bfc < *(float *)((long)param_1 + 0x38f4)) &&
     (uVar1 = FUN_00ed0854(param_1 + 0x716), (uVar1 & 1) == 0)) {
    FUN_00915f90(0);
                    /* WARNING: Could not recover jumptable at 0x00b9fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c0))(param_1);
    return;
  }
  return;
}




void thunk_FUN_00b9ff4c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_150;
  void *pvStack_148;
  undefined **ppuStack_140;
  undefined1 auStack_138 [40];
  long lStack_110;
  undefined8 uStack_f0;
  void *pvStack_e8;
  byte bStack_e0;
  void *pvStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  ulong uStack_90;
  void *pvStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  void *pvStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x120b0) != 0) {
    if ((*(byte *)(param_1 + 0x12638) & 1) == 0) {
      if (*(byte *)(param_1 + 0x12638) >> 1 == 0) goto LAB_00ba0194;
    }
    else if (*(long *)(param_1 + 0x12640) == 0) goto LAB_00ba0194;
    if (*(char *)(*(long *)(param_1 + 0x120b0) + 0x3dbc) == '\0') {
      FUN_00916070();
    }
    else {
      FUN_00916084();
    }
    FUN_00b094dc(param_1 + 0x9cf8);
    FUN_00b26098(&ppuStack_140);
    uStack_b0 = 0x3f733333;
    lStack_110 = param_1 + 0x9cf8;
    uVar2 = FUN_0092ea9c();
    uStack_ac = 0x44160000;
    if ((uVar2 & 1) == 0) {
      uStack_ac = 0x43e10000;
    }
    uStack_a4 = 0x40000000;
    uVar3 = FUN_00e6ce7c("MENU_FRIENDS_FAVORITE_TOOLTIP_TITLE",0);
    thunk_FUN_00e7051c(&uStack_90,uVar3);
    FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
    uStack_68 = 0;
    uStack_64 = 0x41a00000;
    FUN_009c82b4(auStack_138,&uStack_90);
    if ((bStack_80 & 1) != 0) {
      operator_delete(pvStack_70);
    }
    if (pvStack_88 != (void *)0x0) {
      operator_delete__(pvStack_88);
      uStack_90 = 0;
      pvStack_88 = (void *)0x0;
    }
    uVar3 = FUN_00e6ce7c("MENU_FRIENDS_FAVORITE_TOOLTIP_TEXT",0);
    thunk_FUN_00e7051c(&uStack_150,uVar3);
    thunk_FUN_00e7051c(&uStack_90,&uStack_150);
    FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
    uStack_68 = 1;
    uStack_64 = 0x41a00000;
    FUN_009c82b4(auStack_138,&uStack_90);
    if ((bStack_80 & 1) != 0) {
      operator_delete(pvStack_70);
    }
    if (pvStack_88 != (void *)0x0) {
      operator_delete__(pvStack_88);
      uStack_90 = 0;
      pvStack_88 = (void *)0x0;
    }
    FUN_008fa54c(&uStack_90,"starFriendInfo");
    FUN_00b28094(param_1 + 0x12360,&uStack_90,&ppuStack_140);
    if ((uStack_90 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_7f,bStack_80));
    }
    if (pvStack_148 != (void *)0x0) {
      operator_delete__(pvStack_148);
      uStack_150 = 0;
      pvStack_148 = (void *)0x0;
    }
    ppuStack_140 = &PTR_FUN_027de7f0;
    if ((bStack_e0 & 1) != 0) {
      operator_delete(pvStack_d0);
    }
    if (pvStack_e8 != (void *)0x0) {
      operator_delete__(pvStack_e8);
      uStack_f0 = 0;
      pvStack_e8 = (void *)0x0;
    }
    FUN_009c8464(auStack_138,1);
  }
LAB_00ba0194:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b9f100(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00ba1d6c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined4 FUN_00b9f188(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 local_ec;
  void *local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  FUN_00b91a34();
  if (*(uint *)(param_1 + 0x12540) == 0) {
    local_ec = 0;
  }
  else {
    uVar13 = 0;
    plVar1 = (long *)(param_1 + 0x12068);
    local_ec = 0;
    do {
      if (*(uint *)(param_1 + 0x1265c) <= uVar13) break;
      lVar15 = *(long *)(param_1 + 0x12548);
      piVar17 = (int *)(lVar15 + uVar13 * 0x188);
      pvVar9 = operator_new(0x3dc8);
      FUN_00ae2fb0();
      local_88 = pvVar9;
      FUN_00b9f100(param_1 + 0x12060,&local_88);
      pbVar16 = (byte *)(piVar17 + 2);
      bVar4 = *pbVar16;
      bVar5 = *(byte *)(param_1 + 0x12638);
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(piVar17 + 4);
      }
      sVar3 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar3 = *(size_t *)(param_1 + 0x12640);
      }
      if (sVar2 == sVar3) {
        pvVar9 = *(void **)(lVar15 + uVar13 * 0x188 + 0x18);
        if ((bVar4 & 1) == 0) {
          pvVar9 = (void *)((long)piVar17 + 9);
        }
        pcVar10 = (char *)(param_1 + 0x12639);
        if ((bVar5 & 1) != 0) {
          pcVar10 = *(char **)(param_1 + 0x12648);
        }
        if ((bVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar11 = (char *)((long)piVar17 + 9);
            lVar12 = -(ulong)(bVar4 >> 1);
            do {
              if (*pcVar11 != *pcVar10) goto LAB_00b9f3cc;
              pcVar11 = pcVar11 + 1;
              lVar12 = lVar12 + 1;
              pcVar10 = pcVar10 + 1;
            } while (lVar12 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pvVar9,pcVar10,sVar2), iVar8 != 0))
        goto LAB_00b9f3cc;
        lVar12 = *(long *)(*plVar1 + uVar13 * 8);
        *(long *)(param_1 + 0x120b0) = lVar12;
        FUN_00f0d75c(param_1 + 0x9bc8,lVar12 + 0x3ce0);
        if (*piVar17 < 0) {
          pcVar10 = "generic_star";
        }
        else {
          pcVar10 = "generic_star_outline";
        }
        FUN_00f0e578(param_1 + 0xa1d0,pcVar10);
        local_ec = 1;
      }
LAB_00b9f3cc:
      bVar4 = *pbVar16;
      bVar5 = *(byte *)(param_1 + 0x12638);
      uVar18 = *(undefined4 *)(param_1 + 0x12650);
      uVar14 = *(undefined8 *)(*plVar1 + uVar13 * 8);
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(piVar17 + 4);
      }
      lVar12 = lVar15 + uVar13 * 0x188;
      sVar3 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar3 = *(size_t *)(param_1 + 0x12640);
      }
      bVar7 = false;
      if (sVar2 == sVar3) {
        pvVar9 = *(void **)(lVar15 + uVar13 * 0x188 + 0x18);
        if ((bVar4 & 1) == 0) {
          pvVar9 = (void *)((long)piVar17 + 9);
        }
        pcVar10 = (char *)(param_1 + 0x12639);
        if ((bVar5 & 1) != 0) {
          pcVar10 = *(char **)(param_1 + 0x12648);
        }
        if ((bVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar11 = (char *)((long)piVar17 + 9);
            lVar15 = -(ulong)(bVar4 >> 1);
            do {
              if (*pcVar11 != *pcVar10) {
                bVar7 = false;
                goto LAB_00b9f4b4;
              }
              pcVar11 = pcVar11 + 1;
              lVar15 = lVar15 + 1;
              pcVar10 = pcVar10 + 1;
            } while (lVar15 != 0);
          }
        }
        else if (sVar2 != 0) {
          iVar8 = memcmp(pvVar9,pcVar10,sVar2);
          bVar7 = iVar8 == 0;
          goto LAB_00b9f4b4;
        }
        bVar7 = true;
      }
LAB_00b9f4b4:
      FUN_00ae5a70(uVar18,uVar14,lVar12 + 0x20,pbVar16,lVar12 + 0x30,lVar12 + 0x40,lVar12 + 0x50,
                   lVar12 + 0x68,lVar12 + 0x78,lVar12 + 0x88,bVar7,
                   (byte)((ulong)*(undefined8 *)piVar17 >> 0x20) & 1);
      FUN_00ae6448(*(undefined4 *)(param_1 + 0x12650),DAT_0313a260,
                   *(undefined8 *)(*plVar1 + uVar13 * 8));
      FUN_00f023ec(param_1 + 0x4ee0,*(undefined8 *)(*plVar1 + uVar13 * 8),1);
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x12540));
  }
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_ec;
}




void FUN_00b9f588(long param_1,short *param_2)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  char *__s1;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *__s2;
  double dVar11;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_48 = 0;
  local_40 = (char *)0x0;
  local_50 = 0;
  lVar1 = param_1 + 0xdf40;
  if ((*(long **)(param_1 + 0x11fb0) == (long *)0x0) ||
     (iVar5 = (**(code **)(**(long **)(param_1 + 0x11fb0) + 0x40))(), iVar5 != 2)) {
    FUN_00ac3418(lVar1,param_2 + 0x10,&local_50);
  }
  else {
    FUN_008fce60(&local_50,param_2 + 4);
  }
  bVar3 = *(byte *)(param_1 + 0x125c8);
  uVar7 = local_50 >> 1 & 0x7f;
  __n = uVar7;
  if ((local_50 & 1) != 0) {
    __n = local_48;
  }
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x125d0);
  }
  if (__n != sVar2) goto LAB_00b9f7ac;
  __s2 = *(char **)(param_1 + 0x125d8);
  pcVar9 = (char *)((ulong)&local_50 | 1);
  __s1 = pcVar9;
  if ((local_50 & 1) != 0) {
    __s1 = local_40;
  }
  if ((bVar3 & 1) == 0) {
    __s2 = (char *)(param_1 + 0x125c9);
  }
  if ((local_50 & 1) == 0) {
    if (__n != 0) {
      lVar10 = -uVar7;
      do {
        if (*pcVar9 != *__s2) goto LAB_00b9f7ac;
        pcVar9 = pcVar9 + 1;
        lVar10 = lVar10 + 1;
        __s2 = __s2 + 1;
      } while (lVar10 != 0);
    }
  }
  else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00b9f7ac;
  FUN_00ac13a4(lVar1,1);
  if (*param_2 == 0) {
    FUN_00ac13a4(lVar1,*(undefined1 *)(param_1 + 0x12673));
    pcVar9 = "MENU_CHAT_PLAYER_OFFLINE";
LAB_00b9f700:
    uVar6 = FUN_00e6ce7c(pcVar9,0);
    thunk_FUN_00e7051c(&local_60,uVar6);
    FUN_00e705c8(&local_70,"[PLAYER_NAME]");
    FUN_00e71248(&local_60,0,&local_70,param_2 + 0x10);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    uVar6 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xeab8) & 1) * 0x130 + 0xe928);
    uVar7 = FUN_00e70b88(uVar6,&local_60);
    if ((uVar7 & 1) != 0) {
      FUN_00ac1418(lVar1,&local_60,0);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
  }
  else {
    if (0.0 < *(double *)(param_2 + 0x50)) {
      FUN_00ac13a4(lVar1,0);
      pcVar9 = "MENU_CHAT_PLAYER_BANNED";
      goto LAB_00b9f700;
    }
    uVar7 = FUN_009580c4();
    if ((uVar7 & 1) == 0) {
LAB_00b9f854:
      switch(*param_2) {
      case 1:
      case 3:
      case 4:
        FUN_00ac13a4(lVar1,1);
        uVar6 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xeab8) & 1) * 0x130 + 0xe928);
        uVar8 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
        uVar7 = FUN_00e70b88(uVar6,uVar8);
        if ((uVar7 & 1) != 0) {
          pcVar9 = "MENU_CHAT_ENTER_YOUR_CHAT";
          goto LAB_00b9f8d0;
        }
        break;
      case 2:
        FUN_00ac13a4(lVar1,*(undefined1 *)(param_1 + 0x12673));
        pcVar9 = "MENU_CHAT_PLAYER_IN_GAME";
        goto LAB_00b9f700;
      }
    }
    else {
      FUN_009580b8();
      dVar11 = (double)FUN_00961684();
      if (dVar11 <= 0.0) goto LAB_00b9f854;
      FUN_00ac13a4(lVar1,0);
      uVar6 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xeab8) & 1) * 0x130 + 0xe928);
      uVar8 = FUN_00e6ce7c("MENU_FRIENDS_PLAYER_BANNED",0);
      uVar7 = FUN_00e70b88(uVar6,uVar8);
      if ((uVar7 & 1) != 0) {
        pcVar9 = "MENU_FRIENDS_PLAYER_BANNED";
LAB_00b9f8d0:
        uVar6 = FUN_00e6ce7c(pcVar9,0);
        FUN_00ac1418(lVar1,uVar6,0);
      }
    }
  }
  if (*(long *)(param_1 + 0x120b0) != 0) {
    FUN_00b9fa20(param_1);
  }
LAB_00b9f7ac:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b9f910(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x120b0);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(lVar2 + 0x3d78) == 3;
  }
  FUN_00b09454(param_1 + 0x9cf8,bVar1);
  lVar2 = *(long *)(param_1 + 0x120b0);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x3d78) != 3)) {
    FUN_00f0e578(param_1 + 0xa7c8,"generic_invite_friend_hollow");
    if ((*(float *)(param_1 + 0xa810) == 1.0) && (*(float *)(param_1 + 0xa814) == 1.0)) {
      return;
    }
    uVar3 = NEON_fmov(0x3f800000,4);
  }
  else {
    FUN_00f0e578(param_1 + 0xa7c8,"generic_x");
    if ((*(float *)(param_1 + 0xa810) == 1.2) && (*(float *)(param_1 + 0xa814) == 1.2)) {
      return;
    }
    uVar3 = 0x3f99999a3f99999a;
  }
  *(undefined8 *)(param_1 + 0xa810) = uVar3;
  FUN_0091ada4(param_1 + 0xa7c8);
  return;
}




void FUN_00b9fa20(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) goto LAB_00b9fb9c;
  if (0.0 < *(double *)(param_2 + 0x3d98)) {
    uVar2 = FUN_00e6ce7c("MENU_FRIENDS_STATUS_BANNED",0);
    thunk_FUN_00e7051c(&local_48,uVar2);
    FUN_00cb55c0(&local_58,&local_48,(long)*(double *)(param_2 + 0x3d98),0);
    FUN_00f0d75c(param_1 + 0xb4d8,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    goto LAB_00b9fb8c;
  }
  FUN_00e70510(&local_48);
  switch(*(undefined4 *)(param_2 + 0x3da8)) {
  case 0:
    pcVar3 = "MENU_FRIENDS_STATUS_OFFLINE";
    break;
  case 1:
    pcVar3 = "MENU_FRIENDS_STATUS_AVAILABLE";
    break;
  case 2:
    uVar2 = FUN_00e6ce7c("MENU_FRIENDS_STATUS_BUSY",0);
    thunk_FUN_00e7051c(&local_58,uVar2);
    FUN_00cb55c0(&local_68,&local_58,*(undefined4 *)(param_2 + 0x3dac),0);
    FUN_00910394(&local_48,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    goto switchD_00b9fad8_default;
  case 3:
    pcVar3 = "MENU_FRIENDS_STATUS_IN_PARTY";
    break;
  case 4:
    pcVar3 = "MENU_FRIENDS_STATUS_MATCHING";
    break;
  default:
    goto switchD_00b9fad8_default;
  }
  uVar2 = FUN_00e6ce7c(pcVar3,0);
  FUN_00910394(&local_48,uVar2);
switchD_00b9fad8_default:
  FUN_00f0d75c(param_1 + 0xb4d8,&local_48);
LAB_00b9fb8c:
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
LAB_00b9fb9c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b9fbc4(uint *param_1,long param_2)

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
    FUN_00ba1dec(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x50;
  FUN_0099ce98(lVar4 + -0x50,param_2);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x20);
  FUN_00ba1efc(lVar4 + -0x18,param_2 + 0x38);
  *(undefined1 *)(lVar4 + -4) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x48);
  return;
}




void FUN_00b9fc80(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x50;
      lVar1 = *(long *)(param_1 + 2) + 0x38;
      do {
        FUN_00ba1488(lVar1,1);
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -8));
        }
        FUN_0099cedc(lVar1 + -0x38);
        lVar2 = lVar2 + -0x50;
        lVar1 = lVar1 + 0x50;
      } while (lVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00b9fd10(void)

{
  return;
}




void FUN_00b9fd14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_DIALOG_TITLE",0);
  uVar2 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_DIALOG_MSG",0);
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_DIALOG_CONFIRM",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(uVar1,uVar2,uVar3,uVar4,param_1,thunk_FUN_00ba117c,FUN_00b9fdac);
  return;
}




void FUN_00b9fdac(void)

{
  return;
}




void FUN_00b9fdb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_INPUT_CAPTION",0);
  uVar2 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND_INPUT_MESSAGE",0);
  FUN_00aa1574(param_1 + 0x125b0,uVar1,uVar2,&DAT_03210450,0,0,0,0,param_1,thunk_FUN_00ba03cc,
               FUN_00b9fe5c,param_1 + 0x12610);
  return;
}




void FUN_00b9fe5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00910394(param_1 + 0x12610,param_3);
  return;
}




void FUN_00b9fe70(void)

{
  return;
}




void FUN_00b9fe74(long *param_1)

{
  ulong uVar1;
  
  if ((DAT_02be9bfc < *(float *)((long)param_1 + 0x38f4)) &&
     (uVar1 = FUN_00ed0854(param_1 + 0x716), (uVar1 & 1) == 0)) {
    FUN_00915f90(0);
                    /* WARNING: Could not recover jumptable at 0x00b9fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c0))(param_1);
    return;
  }
  return;
}




void FUN_00b9fed4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_00f04924(param_2);
  FUN_00b9c524(param_1,lVar1,0);
  iVar2 = *(int *)(lVar1 + 0x3da8);
  if (iVar2 == 2) {
    FUN_00b9ac4c(param_1,lVar1,0);
    iVar2 = *(int *)(lVar1 + 0x3da8);
  }
  if (iVar2 == 3) {
    FUN_00b9b754(param_1,lVar1,0);
    return;
  }
  return;
}




void FUN_00b9ff4c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_150;
  void *local_148;
  undefined **local_140;
  undefined1 auStack_138 [40];
  long local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x120b0) != 0) {
    if ((*(byte *)(param_1 + 0x12638) & 1) == 0) {
      if (*(byte *)(param_1 + 0x12638) >> 1 == 0) goto LAB_00ba0194;
    }
    else if (*(long *)(param_1 + 0x12640) == 0) goto LAB_00ba0194;
    if (*(char *)(*(long *)(param_1 + 0x120b0) + 0x3dbc) == '\0') {
      FUN_00916070();
    }
    else {
      FUN_00916084();
    }
    FUN_00b094dc(param_1 + 0x9cf8);
    FUN_00b26098(&local_140);
    local_b0 = 0x3f733333;
    local_110 = param_1 + 0x9cf8;
    uVar2 = FUN_0092ea9c();
    local_ac = 0x44160000;
    if ((uVar2 & 1) == 0) {
      local_ac = 0x43e10000;
    }
    local_a4 = 0x40000000;
    uVar3 = FUN_00e6ce7c("MENU_FRIENDS_FAVORITE_TOOLTIP_TITLE",0);
    thunk_FUN_00e7051c(&local_90,uVar3);
    FUN_008fcdb8(&local_80,&DAT_0320ffa8);
    local_68 = 0;
    local_64 = 0x41a00000;
    FUN_009c82b4(auStack_138,&local_90);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    uVar3 = FUN_00e6ce7c("MENU_FRIENDS_FAVORITE_TOOLTIP_TEXT",0);
    thunk_FUN_00e7051c(&local_150,uVar3);
    thunk_FUN_00e7051c(&local_90,&local_150);
    FUN_008fcdb8(&local_80,&DAT_0320ffa8);
    local_68 = 1;
    local_64 = 0x41a00000;
    FUN_009c82b4(auStack_138,&local_90);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    FUN_008fa54c(&local_90,"starFriendInfo");
    FUN_00b28094(param_1 + 0x12360,&local_90,&local_140);
    if ((local_90 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    if (local_148 != (void *)0x0) {
      operator_delete__(local_148);
      local_150 = 0;
      local_148 = (void *)0x0;
    }
    local_140 = &PTR_FUN_027de7f0;
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    FUN_009c8464(auStack_138,1);
  }
LAB_00ba0194:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

