// functions/00c5c — 6 functions
#include "libGameKindred.h"




void FUN_00c5c02c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00e6a474("OFFLINE_FRIENDS");
  iVar2 = FUN_0091ed5c("OFFLINE_FRIENDS",uVar1,0x1234);
  if ((uint)(*(int *)(param_2 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 == 0) {
    FUN_00915fd0(*(char *)(param_2 + 0x590) == '\0');
    return;
  }
  return;
}




void thunk_FUN_00c5c02c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00e6a474("OFFLINE_FRIENDS");
  iVar2 = FUN_0091ed5c("OFFLINE_FRIENDS",uVar1,0x1234);
  if ((uint)(*(int *)(param_2 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 == 0) {
    FUN_00915fd0(*(char *)(param_2 + 0x590) == '\0');
    return;
  }
  return;
}




void FUN_00c5c098(long param_1,long param_2)

{
  int iVar1;
  
  FUN_00c5c138(param_1,1);
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),param_2 + 0x2700,param_2 + 0x2718,param_2 + 0x2730,
             param_2 + 0x2748,*(undefined1 *)(param_2 + 0x2768));
  iVar1 = *(int *)(param_2 + 0x2760);
  if (iVar1 == 2) {
    FUN_00c5c3e8(param_1,param_2,0);
    iVar1 = *(int *)(param_2 + 0x2760);
  }
  if (iVar1 == 3) {
    FUN_00c5cf00(param_1,param_2,0);
    return;
  }
  return;
}




void FUN_00c5c138(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  lVar2 = DAT_03210d00;
  if (((*(uint *)(param_1 + 0x2fc) >> 2 & 1) != 0) && ((param_2 & 1) != 0)) {
    return;
  }
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc9c0(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efca10(puVar5,param_2 & 1);
  uVar1 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  uVar3 = FUN_00efee28(uVar1,0x3e4ccccd,0);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdc08(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcb24(puVar7,FUN_0091aa80);
  FUN_00efcac4(0x3e4ccccd,puVar7);
  FUN_00efdc5c(0,0,puVar7,param_1 + 0x278,0,param_1 + 0xd0,(param_2 & 1) != 0);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar6,puVar5,puVar7,uVar3,0);
  FUN_00f022a0(param_1 + 0x278,puVar6);
  return;
}




void FUN_00c5c3e8(long param_1,long param_2,ulong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ushort uVar13;
  ushort *puVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1e0 [4];
  float local_1dc;
  undefined8 local_1d8;
  void *local_1d0;
  long local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  undefined **local_178;
  undefined1 auStack_170 [16];
  long local_160;
  code *pcStack_158;
  long local_148;
  undefined8 local_128;
  void *local_120;
  byte local_118;
  void *local_108;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  ulong local_c8;
  void *local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  void *local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  
  lVar3 = tpidr_el0;
  lVar12 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_2 + 0x276c) == 0x41) goto LAB_00c5cec4;
  FUN_00b26098(&local_178);
  thunk_FUN_00e7051c(&local_188,&DAT_03210450);
  switch(*(undefined4 *)(param_2 + 0x2780)) {
  case 0:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_SOLO";
    break;
  case 1:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_GUILD";
    break;
  case 2:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM";
    break;
  case 3:
    puVar11 = &DAT_03210450;
    goto LAB_00c5c4a4;
  default:
    goto switchD_00c5c468_default;
  }
  puVar11 = (undefined8 *)FUN_00e6ce7c(pcVar15,0);
LAB_00c5c4a4:
  FUN_00910394(&local_188,puVar11);
switchD_00c5c468_default:
  FUN_00e70510(&local_198);
  switch(*(undefined4 *)(param_2 + 0x276c)) {
  case 0:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_RANKED";
    break;
  case 1:
  case 10:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_PRIVATE";
    break;
  case 2:
  case 0x1c:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_PRACTICE";
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0x2d:
  case 0x2e:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_TUTORIAL";
    break;
  case 8:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_BOT";
    break;
  case 9:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_CASUAL";
    break;
  case 0xb:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_PRIVATE_ARAL";
    break;
  case 0xc:
  case 0x1e:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_PRIVATE_BLITZ";
    break;
  default:
    goto switchD_00c5c4d0_caseD_d;
  case 0xf:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_CASUAL_ARAL";
    break;
  case 0x10:
  case 0x11:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_CASUAL_HORDE";
    break;
  case 0x12:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_BOTS_ARAL";
    break;
  case 0x13:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_SOLOBOTS";
    break;
  case 0x14:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_ALL_BOTS_EPIC";
    break;
  case 0x15:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_ALL_BOTS_ARAL";
    break;
  case 0x16:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_ARAL_BOTS_SOLO";
    break;
  case 0x17:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_ARAL_BOTS_PARTY";
    break;
  case 0x18:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_STANDARD_BOTS_PARTY";
    break;
  case 0x1b:
  case 0x20:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_BLITZ_PVP_RANKED";
    break;
  case 0x1f:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_BLITZ_BOTS_PARTY";
    break;
  case 0x21:
  case 0x22:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_BLITZ_BOTS_COOP";
    break;
  case 0x23:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_PRIVATE_5V5";
    break;
  case 0x24:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_PRIVATE_BLITZ_ONSLAUGHT";
    break;
  case 0x25:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_5V5_RANKED";
    break;
  case 0x26:
  case 0x27:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_5V5_CASUAL";
    break;
  case 0x29:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_5V5_BOTS_SOLO";
    break;
  case 0x2b:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_BLITZ_PVP_ONSLAUGHT";
    break;
  case 0x32:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_5V5_BOTS_COOP";
    break;
  case 0x33:
    pcVar15 = "MENU_FRIENDS_IN_MATCH_DETAILS_GAME_QUEUE_5V5_PRACTICE";
  }
  uVar5 = FUN_00e6ce7c(pcVar15,0);
  FUN_00910394(&local_198,uVar5);
switchD_00c5c4d0_caseD_d:
  uVar5 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TYPE",0);
  thunk_FUN_00e7051c(&local_1a8,uVar5);
  FUN_00e705c8(&local_c8,"[PARTY_TYPE]");
  FUN_00e71248(&local_1a8,0,&local_c8,&local_188);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  FUN_00e705c8(&local_c8,"[GAME_QUEUE]");
  FUN_00e71248(&local_1a8,0,&local_c8,&local_198);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_c8,&local_1a8);
  FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
  local_a0 = 0;
  local_9c = 0xc120000041000000;
  FUN_009c82b4(auStack_170,&local_c8);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x2764);
  uVar5 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TIME",0);
  FUN_00cb55c0(&local_1b8,uVar5,uVar1,0);
  thunk_FUN_00e7051c(&local_c8,&local_1b8);
  FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
  local_a0 = 1;
  local_9c = 0x41f0000042200000;
  FUN_009c82b4(auStack_170,&local_c8);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
    local_1b8 = 0;
    local_1b0 = (void *)0x0;
  }
  thunk_FUN_00e7051c(&local_c8,&DAT_03210450);
  FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
  local_a0 = 2;
  local_9c = 0x41f00000;
  FUN_009c82b4(auStack_170,&local_c8);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  FUN_00e70510(&local_1b8);
  bVar2 = *(byte *)(param_2 + 0x2788);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00c5c838:
      if ((bVar2 & 1) == 0) {
        lVar6 = param_2 + 0x2789;
      }
      else {
        lVar6 = *(long *)(param_2 + 0x2798);
      }
      lVar6 = FUN_00ce9b48(lVar6);
      uVar5 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 0x18),0);
      FUN_00910394(&local_1b8,uVar5);
    }
  }
  else if ((int)*(undefined8 *)(param_2 + 0x2790) != 0) goto LAB_00c5c838;
  uVar7 = FUN_00e70b88(&local_1b8,&DAT_03210450);
  if ((uVar7 & 1) == 0) {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_HERO_SELECT",0);
    thunk_FUN_00e7051c(&local_1c8,uVar5);
    thunk_FUN_00e7051c(&local_c8,&local_1c8);
    FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
    local_a0 = 0;
    local_9c = 0xc120000042200000;
    FUN_009c82b4(auStack_170,&local_c8);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
      local_1c8 = 0;
      local_1c0 = (void *)0x0;
    }
  }
  else {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_PLAYING_TITLE",0);
    thunk_FUN_00e7051c(&local_c8,uVar5);
    FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
    local_a0 = 0;
    local_9c = 0xc120000041000000;
    FUN_009c82b4(auStack_170,&local_c8);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    thunk_FUN_00e7051c(&local_c8,&local_1b8);
    FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
    local_a0 = 1;
    local_9c = 0x41f0000042200000;
    FUN_009c82b4(auStack_170,&local_c8);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
  }
  if (*(int *)(param_2 + 0x2770) != 0) {
    thunk_FUN_00e7051c(&local_c8,&DAT_03210450);
    FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
    local_a0 = 2;
    local_9c = 0x41f00000;
    FUN_009c82b4(auStack_170,&local_c8);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_00e7051c(&local_1c8,uVar5);
    thunk_FUN_00e7051c(&local_c8,&local_1c8);
    FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
    local_a0 = 0;
    local_9c = 0xc120000041000000;
    FUN_009c82b4(auStack_170,&local_c8);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    uVar7 = (ulong)*(uint *)(param_2 + 0x2770);
    if (*(uint *)(param_2 + 0x2770) != 0) {
      lVar6 = 0;
      do {
        thunk_FUN_00e7051c(&local_1d8,*(long *)(param_2 + 0x2778) + lVar6);
        FUN_00e70570(&local_c8,param_2 + 0x2718);
        uVar8 = FUN_00e70b34(&local_1d8,&local_c8);
        if (local_c0 != (void *)0x0) {
          operator_delete__(local_c0);
          local_c8 = 0;
          local_c0 = (void *)0x0;
        }
        if ((uVar8 & 1) == 0) {
          thunk_FUN_00e7051c(&local_c8,&local_1d8);
          FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
          local_a0 = 1;
          local_9c = 0x41f0000041000000;
          FUN_009c82b4(auStack_170,&local_c8);
          if ((local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
          if (local_c0 != (void *)0x0) {
            operator_delete__(local_c0);
            local_c8 = 0;
            local_c0 = (void *)0x0;
          }
        }
        if (local_1d0 != (void *)0x0) {
          operator_delete__(local_1d0);
          local_1d8 = 0;
          local_1d0 = (void *)0x0;
        }
        uVar7 = uVar7 - 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar7 != 0);
    }
    FUN_00e70570(&local_1d8,param_2 + 0x2718);
    thunk_FUN_00e7051c(&local_c8,&local_1d8);
    FUN_008fcdb8(&local_b8,&DAT_0320ffa8);
    local_a0 = 1;
    local_9c = 0x41f0000041000000;
    FUN_009c82b4(auStack_170,&local_c8);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    if (local_1d0 != (void *)0x0) {
      operator_delete__(local_1d0);
      local_1d8 = 0;
      local_1d0 = (void *)0x0;
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
      local_1c8 = 0;
      local_1c0 = (void *)0x0;
    }
  }
  FUN_008fa54c(&local_c8,"friendInMatchInformation");
  if ((*(byte *)(param_2 + 0x2700) & 1) == 0) {
    pcVar15 = (char *)(param_2 + 0x2701);
  }
  else {
    pcVar15 = *(char **)(param_2 + 10000);
  }
  sVar9 = strlen(pcVar15);
  FUN_0090de84(&local_c8,pcVar15,sVar9);
  local_d0 = 3;
  local_148 = param_2;
  uVar7 = FUN_0092ea9c();
  local_e4 = 0x44160000;
  if ((uVar7 & 1) == 0) {
    local_e4 = 0x44100000;
  }
  uVar7 = FUN_0093d810();
  if ((uVar7 & 1) != 0) {
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_SPECTATE",0);
    FUN_00910394(&local_128,uVar5);
    pcStack_158 = FUN_00c5d97c;
    local_160 = param_1;
  }
  uVar4 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar4 & 1,&local_1d8,&local_1dc,auStack_1e0);
  lVar6 = FUN_00965ecc(param_2);
  fVar17 = *(float *)(lVar6 + 0xc);
  lVar10 = FUN_00965ecc(param_1);
  lVar6 = DAT_03210d00;
  fVar16 = local_1dc + -264.0;
  fVar17 = (fVar17 / *(float *)(lVar10 + 0x14) + 94.0) - fVar16;
  if (0.0 < fVar17) {
    uVar13 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar13 == 0xffff) {
      puVar14 = (ushort *)0x0;
    }
    else {
      puVar14 = (ushort *)(DAT_03210d00 + (ulong)uVar13 * 0x40 + 0x10);
      if (uVar13 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = *puVar14;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar13;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efd6a4(puVar14);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3dcccccd,puVar14);
    local_1c8 = (ulong)(uint)-fVar17 << 0x20;
    FUN_00efd6ec(puVar14,&local_1c8);
    fVar16 = local_1dc + -264.0;
  }
  local_d4 = 0;
  lVar6 = FUN_00965ecc(param_1);
  local_d8 = (fVar16 + -16.0) * *(float *)(lVar6 + 0x14);
  local_e8 = 0x3e051eb8;
  if ((param_3 & 1) == 0) {
    FUN_00b28094(param_1 + 0x3c10,&local_c8,&local_178);
  }
  else {
    FUN_00b281f8();
  }
  if ((local_c8 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_b7,local_b8));
  }
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
    local_1b8 = 0;
    local_1b0 = (void *)0x0;
  }
  if (local_1a0 != (void *)0x0) {
    operator_delete__(local_1a0);
    local_1a8 = 0;
    local_1a0 = (void *)0x0;
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
    local_198 = 0;
    local_190 = (void *)0x0;
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
    local_188 = 0;
    local_180 = (void *)0x0;
  }
  local_178 = &PTR_FUN_027de7f0;
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_128 = 0;
    local_120 = (void *)0x0;
  }
  FUN_009c8464(auStack_170,1);
LAB_00c5cec4:
  if (*(long *)(lVar3 + 0x28) == lVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5cf00(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  ushort uVar7;
  ulong uVar8;
  ushort *puVar9;
  char *__s;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_194 [4];
  float local_190;
  undefined1 auStack_18c [4];
  long local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined **local_168;
  undefined1 auStack_160 [16];
  long local_150;
  code *pcStack_148;
  long local_138;
  undefined8 local_118;
  void *local_110;
  byte local_108;
  void *local_f8;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  ulong local_b8;
  void *local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  void *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_168);
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
  thunk_FUN_00e7051c(&local_178,uVar3);
  thunk_FUN_00e7051c(&local_b8,&local_178);
  FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
  local_90 = 0;
  local_8c = 0xc120000041000000;
  FUN_009c82b4(auStack_160,&local_b8);
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  uVar8 = (ulong)*(uint *)(param_2 + 0x2770);
  if (*(uint *)(param_2 + 0x2770) != 0) {
    lVar10 = 0;
    do {
      thunk_FUN_00e7051c(&local_188,*(long *)(param_2 + 0x2778) + lVar10);
      FUN_00e70570(&local_b8,param_2 + 0x2718);
      uVar4 = FUN_00e70b34(&local_188,&local_b8);
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
      if ((uVar4 & 1) == 0) {
        thunk_FUN_00e7051c(&local_b8,&local_188);
        FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
        local_90 = 1;
        local_8c = 0x41f0000041000000;
        FUN_009c82b4(auStack_160,&local_b8);
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if (local_b0 != (void *)0x0) {
          operator_delete__(local_b0);
          local_b8 = 0;
          local_b0 = (void *)0x0;
        }
      }
      if (local_180 != (void *)0x0) {
        operator_delete__(local_180);
        local_188 = 0;
        local_180 = (void *)0x0;
      }
      uVar8 = uVar8 - 1;
      lVar10 = lVar10 + 0x10;
    } while (uVar8 != 0);
    FUN_00e70570(&local_188,param_2 + 0x2718);
    thunk_FUN_00e7051c(&local_b8,&local_188);
    FUN_008fcdb8(&local_a8,&DAT_0320ffa8);
    local_90 = 1;
    local_8c = 0x41f0000041000000;
    FUN_009c82b4(auStack_160,&local_b8);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
      local_b8 = 0;
      local_b0 = (void *)0x0;
    }
    if (local_180 != (void *)0x0) {
      operator_delete__(local_180);
      local_188 = 0;
      local_180 = (void *)0x0;
    }
  }
  FUN_008fa54c(&local_b8,"friendInMatchInformation");
  if ((*(byte *)(param_2 + 0x2700) & 1) == 0) {
    __s = (char *)(param_2 + 0x2701);
  }
  else {
    __s = *(char **)(param_2 + 10000);
  }
  sVar5 = strlen(__s);
  FUN_0090de84(&local_b8,__s,sVar5);
  local_c0 = 3;
  local_138 = param_2;
  uVar8 = FUN_0092ea9c();
  local_d4 = 0x44160000;
  if ((uVar8 & 1) == 0) {
    local_d4 = 0x44100000;
  }
  uVar8 = FUN_0093d810();
  if ((uVar8 & 1) != 0) {
    uVar3 = FUN_00e6ce7c("MENU_FRIENDS_SPECTATE",0);
    FUN_00910394(&local_118,uVar3);
    pcStack_148 = FUN_00c5d97c;
    local_150 = param_1;
  }
  uVar2 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar2 & 1,auStack_18c,&local_190,auStack_194);
  lVar10 = FUN_00965ecc(param_2);
  fVar12 = *(float *)(lVar10 + 0xc);
  lVar6 = FUN_00965ecc(param_1);
  lVar10 = DAT_03210d00;
  fVar11 = local_190 + -264.0;
  fVar12 = (fVar12 / *(float *)(lVar6 + 0x14) + 94.0) - fVar11;
  if (0.0 < fVar12) {
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efd6a4(puVar9);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3dcccccd,puVar9);
    local_188 = (ulong)(uint)-fVar12 << 0x20;
    FUN_00efd6ec(puVar9,&local_188);
    fVar11 = local_190 + -264.0;
  }
  local_c4 = 0;
  lVar10 = FUN_00965ecc(param_1);
  local_c8 = (fVar11 + -16.0) * *(float *)(lVar10 + 0x14);
  local_d8 = 0x3e051eb8;
  if ((param_3 & 1) == 0) {
    FUN_00b28094(param_1 + 0x3c10,&local_b8,&local_168);
  }
  else {
    FUN_00b281f8();
  }
  if ((local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_a7,local_a8));
  }
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (void *)0x0;
  }
  local_168 = &PTR_FUN_027de7f0;
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_110 = (void *)0x0;
    local_118 = 0;
  }
  FUN_009c8464(auStack_160,1);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

