// functions/00e8c — 6 functions
#include "libGameKindred.h"




void FUN_00e8c25c(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  void *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  void *pvStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  char **local_e0;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  char *local_a0;
  void *pvStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  local_100 = 0;
  uStack_f8 = 0x400;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  pvStack_118 = (void *)0x0;
  local_120 = 0;
  local_f0 = 0;
  local_e8 = 0;
  puVar4 = operator_new(0x28);
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0x10000;
  puVar4[2] = 0;
  local_148 = 0;
  uStack_140 = 0;
  *puVar4 = 0;
  local_138 = 3;
  uVar2 = *(uint *)(param_4 + 0x68);
  if (uVar2 < 3) {
    uVar6 = *(undefined4 *)(&DAT_01bf0630 + (long)(int)uVar2 * 4);
    uVar8 = *(undefined4 *)(&DAT_01bf063c + (long)(int)uVar2 * 4);
  }
  else {
    uVar6 = 0;
    uVar8 = 200;
  }
  iVar1 = *(int *)(param_4 + 100) * 3;
  if (*(int *)(param_4 + 100) < 0) {
    iVar1 = -2;
  }
  local_130 = puVar4;
  local_128 = puVar4;
  if (*(int *)(param_4 + 0x60) != -1) {
    FUN_00e8b800(0xfffffffe,&local_148,"primeTimeUtcHour",0x10,*(int *)(param_4 + 0x60),puVar4);
  }
  FUN_00e8b800(&local_148,"minimumSkillTier",0x10,iVar1,puVar4);
  FUN_00e8b800(&local_148,"minNumMembers",0xd,uVar6,puVar4);
  FUN_00e8b800(&local_148,"maxNumMembers",0xd,uVar8,puVar4);
  FUN_008fcdb8(local_160,param_4 + 0x48);
  local_d0 = (void *)CONCAT44(local_d0._4_4_,0x100005);
  local_e0 = (char **)0x1b9262d;
  local_d8 = 9;
  FUN_00ceef7c(&local_148,&local_e0,local_160,puVar4);
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  FUN_008fcdb8(local_178,param_4 + 0x30);
  local_d0 = (void *)CONCAT44(local_d0._4_4_,0x100005);
  local_e0 = (char **)0x1befa86;
  local_d8 = 0x11;
  FUN_00ceef7c(&local_148,&local_e0,local_178,puVar4);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  uVar6 = 0x101;
  if (*(char *)(param_4 + 0x6c) != '\0') {
    uVar6 = 0x102;
  }
  local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
  local_e0 = (char **)0x0;
  local_d8 = 0;
  local_a0 = "guildInviteOnly";
  pvStack_98 = (void *)0xf;
  local_d0._0_4_ = uVar6;
  FUN_00cb9d40(&local_148,&local_a0,&local_e0,puVar4);
  FUN_008fcdb8(local_190,param_4);
  local_d0 = (void *)CONCAT44(local_d0._4_4_,0x100005);
  local_e0 = (char **)0x1e3357a;
  local_d8 = 4;
  FUN_00ceef7c(&local_148,&local_e0,local_190,puVar4);
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  FUN_008fcdb8(local_1a8,param_4 + 0x18);
  local_d0 = (void *)CONCAT44(local_d0._4_4_,0x100005);
  local_e0 = (char **)0x1e46d3b;
  local_d8 = 3;
  FUN_00ceef7c(&local_148,&local_e0,local_1a8,puVar4);
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  FUN_00e8b800(&local_148,"page",4,param_3,puVar4);
  uStack_88 = 0;
  local_90 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  local_a0 = (char *)0x0;
  local_80 = 0;
  uStack_78 = 0x100;
  local_e0 = &local_a0;
  local_d8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_b0 = 0x200;
  local_a8 = 0;
  FUN_00914ff4(&local_148,&local_e0);
  uVar5 = FUN_009155f8(&local_a0);
  FUN_008fa54c(param_1,uVar5);
  free(local_c8);
  if (local_d0 != (void *)0x0) {
    operator_delete(local_d0);
  }
  free(local_90);
  if (pvStack_98 != (void *)0x0) {
    operator_delete(pvStack_98);
  }
  puVar4 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_128);
    operator_delete(puVar4);
  }
  free(local_110);
  if (pvStack_118 != (void *)0x0) {
    operator_delete(pvStack_118);
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8c60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  byte local_220 [16];
  void *local_210;
  byte local_208 [16];
  void *local_1f8;
  byte local_1f0 [16];
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  void *local_150;
  byte local_148 [16];
  void *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  void *pvStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  char **local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  char *local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  local_e8 = 0;
  uStack_e0 = 0x400;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  pvStack_100 = (void *)0x0;
  local_108 = 0;
  local_d8 = 0;
  local_d0 = 0;
  puVar2 = operator_new(0x28);
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0x10000;
  puVar2[2] = 0;
  *puVar2 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 3;
  local_118 = puVar2;
  local_110 = puVar2;
  FUN_008fcdb8(local_148,param_5);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1b926c4;
  local_c0 = 9;
  FUN_00ceef7c(&local_130,&local_c8,local_148,puVar2);
  if ((local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  FUN_00e8b800(&local_130,"primeTimeUtcHour",0x10,*param_4,puVar2);
  FUN_00e8b800(&local_130,"minimumSkillTier",0x10,param_4[1],puVar2);
  FUN_008fcdb8(local_160,param_4 + 2);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1b9262d;
  local_c0 = 9;
  FUN_00ceef7c(&local_130,&local_c8,local_160,puVar2);
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  FUN_008fcdb8(local_178,param_4 + 8);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befa86;
  local_c0 = 0x11;
  FUN_00ceef7c(&local_130,&local_c8,local_178,puVar2);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  FUN_008fcdb8(local_190,param_4 + 0xe);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befaa8;
  local_c0 = 0xc;
  FUN_00ceef7c(&local_130,&local_c8,local_190,puVar2);
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  uVar4 = 0x101;
  if (*(char *)(param_4 + 0x38) != '\0') {
    uVar4 = 0x102;
  }
  local_78 = (void *)CONCAT44(local_78._4_4_,0x100005);
  local_c8 = (char **)0x0;
  local_c0 = 0;
  local_88 = "guildInviteOnly";
  pvStack_80 = (void *)0xf;
  local_b8._0_4_ = uVar4;
  FUN_00cb9d40(&local_130,&local_88,&local_c8,puVar2);
  FUN_008fcdb8(local_1a8,param_4 + 0x14);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befab5;
  local_c0 = 0xe;
  FUN_00ceef7c(&local_130,&local_c8,local_1a8,puVar2);
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  FUN_008fcdb8(local_1c0,param_4 + 0x1a);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befac4;
  local_c0 = 0xe;
  FUN_00ceef7c(&local_130,&local_c8,local_1c0,puVar2);
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  FUN_008fcdb8(local_1d8,param_4 + 0x20);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befad3;
  local_c0 = 0xe;
  FUN_00ceef7c(&local_130,&local_c8,local_1d8,puVar2);
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  FUN_008fcdb8(local_1f0,param_4 + 0x26);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befae2;
  local_c0 = 0xc;
  FUN_00ceef7c(&local_130,&local_c8,local_1f0,puVar2);
  if ((local_1f0[0] & 1) != 0) {
    operator_delete(local_1e0);
  }
  FUN_008fcdb8(local_208,param_4 + 0x2c);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befaef;
  local_c0 = 0xc;
  FUN_00ceef7c(&local_130,&local_c8,local_208,puVar2);
  if ((local_208[0] & 1) != 0) {
    operator_delete(local_1f8);
  }
  FUN_008fcdb8(local_220,param_4 + 0x32);
  local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
  local_c8 = (char **)0x1befafc;
  local_c0 = 0xc;
  FUN_00ceef7c(&local_130,&local_c8,local_220,puVar2);
  if ((local_220[0] & 1) != 0) {
    operator_delete(local_210);
  }
  uStack_70 = 0;
  local_78 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = (char *)0x0;
  local_68 = 0;
  uStack_60 = 0x100;
  local_c8 = &local_88;
  local_c0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_98 = 0x200;
  local_90 = 0;
  FUN_00914ff4(&local_130,&local_c8);
  uVar3 = FUN_009155f8(&local_88);
  FUN_008fa54c(param_1,uVar3);
  free(local_b0);
  if (local_b8 != (void *)0x0) {
    operator_delete(local_b8);
  }
  free(local_78);
  if (pvStack_80 != (void *)0x0) {
    operator_delete(pvStack_80);
  }
  puVar2 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_110);
    operator_delete(puVar2);
  }
  free(local_f8);
  if (pvStack_100 != (void *)0x0) {
    operator_delete(pvStack_100);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8caa8(long param_1,undefined8 param_2)

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
LAB_00e8caf4:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_14c = FUN_00e84f88(param_1 + 0x2c48,param_2);
        FUN_00e6a8a8(auStack_148,&DAT_01bb6d43,DAT_02bf24e0);
        uVar4 = FUN_008fa54c(local_168,"partyLobbyEnter");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8b900(local_198,uVar4,param_2);
        FUN_00e8cc28(local_180,lVar1,auStack_148,local_198);
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
        goto LAB_00e8cc24;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e8caf4;
  FUN_00e83324(0xfffffff9);
  uVar5 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
LAB_00e8cc24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8cc28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
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
  lVar4 = FUN_00e9a314(&local_f8,param_2);
  uVar3 = FUN_00e6a474(param_3);
  local_50 = 0x100005;
  local_58 = (ulong)uVar3;
  local_60 = param_3;
  FUN_00ceeba8(lVar4 + 0x68,&local_60,*(undefined8 *)(lVar4 + 0x18));
  FUN_00e9a314(lVar4,param_4);
  uVar5 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar5);
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




ulong FUN_00e8cd70(long param_1,undefined8 param_2)

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
LAB_00e8cdbc:
      if (*(int *)(param_1 + 0x2ad0) != 0) {
        local_14c = FUN_00e84f88(param_1 + 0x2c48,param_2);
        FUN_00e6a8a8(auStack_148,&DAT_01bb6d43,DAT_02bf24e0);
        uVar4 = FUN_008fa54c(local_168,"quintPartyLobbyEnter");
        lVar1 = param_1 + 0x2b80;
        if (*(char *)(param_1 + 0x2be0) != '\0') {
          lVar1 = param_1 + 0x2be8;
        }
        FUN_00e8bcec(local_198,uVar4,param_2);
        FUN_00e8cc28(local_180,lVar1,auStack_148,local_198);
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
        goto LAB_00e8ceec;
      }
    }
  }
  else if (*(long *)(param_1 + 0x70) != 0) goto LAB_00e8cdbc;
  FUN_00e83324(0xfffffff9);
  uVar5 = FUN_00e83340();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
LAB_00e8ceec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00e8cef0(long param_1)

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
LAB_00e8cfdc:
      FUN_00e83324(0xfffffff9);
      uVar4 = FUN_00e83340();
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return uVar4;
      }
      goto LAB_00e8d00c;
    }
  }
  else if (*(long *)(param_1 + 0x70) == 0) goto LAB_00e8cfdc;
  local_3c = FUN_00e84f88(param_1 + 0x2c48);
  FUN_008fa54c(local_58,"partyLobbyExit");
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
LAB_00e8d00c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

