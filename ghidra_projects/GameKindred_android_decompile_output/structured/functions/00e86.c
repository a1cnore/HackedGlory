// functions/00e86 — 9 functions
#include "libGameKindred.h"




void FUN_00e86084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 *param_11,undefined8 *param_12,
                 undefined8 *param_13,undefined8 *param_14)

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
  lVar4 = FUN_00e9a478(lVar4,*param_4);
  uVar3 = FUN_00e6a474(param_5);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_5;
  FUN_00ceeba8(lVar4 + 0x68,&local_88,*(undefined8 *)(lVar4 + 0x18));
  uVar5 = FUN_00e9a478(lVar4,*param_6);
  uVar5 = FUN_00e9a478(uVar5,*param_7);
  lVar4 = FUN_00e9a478(uVar5,*param_8);
  uVar3 = FUN_00e6a474(param_9);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_9;
  FUN_00ceeba8(lVar4 + 0x68,&local_88,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_00e6a474(param_10);
  local_88 = param_10;
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  FUN_00ceeba8(lVar4 + 0x68,&local_88,*(undefined8 *)(lVar4 + 0x18));
  uVar5 = FUN_00e9a4fc(lVar4,*param_11);
  uVar5 = FUN_00e9a478(uVar5,*param_12);
  uVar5 = FUN_00e9a478(uVar5,*param_13);
  FUN_00e9a478(uVar5,*param_14);
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




undefined4
FUN_00e862e4(long param_1,undefined8 param_2,byte *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  byte *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_160 = param_5;
  FUN_008fce60(param_1 + 0x2b80,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x2b98,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x2bb0,param_2);
  FUN_008fce60(param_1 + 0x50,&DAT_0320ffa8);
  FUN_00e6a8a8(auStack_158,&DAT_01bb6d43,DAT_02bf24e0);
  FUN_00e702d0(&DAT_0320ffc0);
  FUN_008fa54c(local_178,"getPlayerForGuestAccount");
  local_198 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    local_198 = param_3 + 1;
  }
  local_19c = FUN_00e70218(&DAT_0320ffc0);
  local_1a8 = FUN_00e7027c(&DAT_0320ffc0);
  local_1b0 = FUN_00e70228(&DAT_0320ffc0);
  local_1b8 = FUN_00e70260(&DAT_0320ffc0);
  local_1c0 = thunk_FUN_00e7753c(&DAT_0320ffc0);
  FUN_00e864b4(local_190,param_4,param_2,&local_198,auStack_158,&local_19c,"production",&local_160,
               &local_1a8,&local_1b0,&local_1b8,&local_1c0);
  uVar2 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x38,local_178,local_190,0,0,0x14,1);
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e864b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
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
  uVar4 = FUN_00e9a314(&local_120,param_2);
  uVar4 = FUN_00e9a314(uVar4,param_3);
  lVar5 = FUN_00e9a478(uVar4,*param_4);
  uVar3 = FUN_00e6a474(param_5);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_5;
  FUN_00ceeba8(lVar5 + 0x68,&local_88,*(undefined8 *)(lVar5 + 0x18));
  lVar5 = FUN_00e9a4fc(lVar5,*param_6);
  uVar3 = FUN_00e6a474(param_7);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_7;
  FUN_00ceeba8(lVar5 + 0x68,&local_88,*(undefined8 *)(lVar5 + 0x18));
  uVar4 = FUN_00e9a478(lVar5,*param_8);
  uVar4 = FUN_00e9a478(uVar4,*param_9);
  uVar4 = FUN_00e9a478(uVar4,*param_10);
  uVar4 = FUN_00e9a478(uVar4,*param_11);
  FUN_00e9a478(uVar4,*param_12);
  uVar4 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar4);
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




undefined4
FUN_00e866a0(long param_1,undefined8 param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1ac;
  byte *local_1a8;
  byte local_1a0 [16];
  void *local_190;
  byte local_188 [16];
  void *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  byte local_158 [16];
  void *local_148;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_170 = param_6;
  local_168 = param_5;
  uStack_160 = param_4;
  FUN_008fce60(param_1 + 0x2b80,&DAT_0320ffa8);
  FUN_008fa54c(local_158,param_4);
  FUN_008fce60(param_1 + 0x2b98,local_158);
  if ((local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  FUN_008fce60(param_1 + 0x2bb0,param_2);
  FUN_008fce60(param_1 + 0x50,&DAT_0320ffa8);
  FUN_00e6a8a8(local_158,&DAT_01bb6d43,DAT_02bf24e0);
  FUN_00e702d0(&DAT_0320ffc0);
  FUN_008fa54c(local_188,"getPlayerFromPlatform");
  local_1a8 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    local_1a8 = param_3 + 1;
  }
  local_1ac = FUN_00e70218(&DAT_0320ffc0);
  local_1b8 = FUN_00e7027c(&DAT_0320ffc0);
  local_1c0 = FUN_00e70228(&DAT_0320ffc0);
  local_1c8 = FUN_00e70260(&DAT_0320ffc0);
  local_1d0 = thunk_FUN_00e7753c(&DAT_0320ffc0);
  FUN_00e86894(local_1a0,&uStack_160,&local_168,param_2,&local_1a8,local_158,&local_1ac,"production"
               ,&local_170,&local_1b8,&local_1c0,&local_1c8,&local_1d0);
  uVar2 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x38,local_188,local_1a0,0,0,0x14,1);
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e86894(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8,
                 undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                 undefined8 *param_13)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
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
  undefined8 uStack_98;
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
  local_108[1] = 0x10000;
  local_108[2] = 0;
  local_108[3] = 0;
  local_108[4] = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  *local_108 = 0;
  local_a8 = 4;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_100 = local_108;
  uVar4 = FUN_00e9a478(&local_120,*param_2);
  uVar4 = FUN_00e9a478(uVar4,*param_3);
  uVar4 = FUN_00e9a314(uVar4,param_4);
  lVar5 = FUN_00e9a478(uVar4,*param_5);
  uVar3 = FUN_00e6a474(param_6);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_6;
  FUN_00ceeba8(lVar5 + 0x68,&local_88,*(undefined8 *)(lVar5 + 0x18));
  lVar5 = FUN_00e9a4fc(lVar5,*param_7);
  uVar3 = FUN_00e6a474(param_8);
  local_78 = 0x100005;
  local_80 = (ulong)uVar3;
  local_88 = param_8;
  FUN_00ceeba8(lVar5 + 0x68,&local_88,*(undefined8 *)(lVar5 + 0x18));
  uVar4 = FUN_00e9a478(lVar5,*param_9);
  uVar4 = FUN_00e9a478(uVar4,*param_10);
  uVar4 = FUN_00e9a478(uVar4,*param_11);
  uVar4 = FUN_00e9a478(uVar4,*param_12);
  FUN_00e9a478(uVar4,*param_13);
  uVar4 = FUN_00e9a398();
  FUN_008fcdb8(param_1,uVar4);
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




undefined4
FUN_00e86a94(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,byte *param_5,
            undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined8 local_168;
  byte local_160 [16];
  void *local_150;
  byte local_148 [16];
  void *local_138;
  undefined8 local_130;
  void *pvStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  byte *local_f0;
  byte *pbStack_e8;
  undefined8 local_e0;
  void *pvStack_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *pvStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x2b80,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x2b98,param_4);
  FUN_008fce60(param_1 + 0x2bb0,param_2);
  FUN_008fce60(param_1 + 0x50,&DAT_0320ffa8);
  uStack_a8 = 0;
  pvStack_d8 = (void *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = (void *)0x0;
  local_c0 = 0;
  uStack_b8 = 0x100;
  pvStack_98 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0x200;
  local_78 = 0;
  local_b0 = &local_e0;
  FUN_00916df0(&local_b0);
  FUN_00e83cf0(&local_b0,"gameId");
  FUN_00e83d90(&local_b0,param_2);
  FUN_00e83cf0(&local_b0,"marketplace");
  pbVar7 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar7 = param_5 + 1;
  }
  FUN_00e83d40(&local_b0,pbVar7);
  FUN_00e83cf0(&local_b0,"version");
  FUN_00e86e2c(&local_b0,DAT_02bf24e0);
  FUN_00e83cf0(&local_b0,"device");
  uVar3 = FUN_00e70218(&DAT_0320ffc0);
  FUN_00e86e2c(&local_b0,uVar3);
  FUN_00e83cf0(&local_b0,"environment");
  FUN_00e83d40(&local_b0,"production");
  FUN_00e83cf0(&local_b0,"languages");
  FUN_00e83d40(&local_b0,param_6);
  FUN_00e83cf0(&local_b0,"os");
  uVar4 = FUN_00e7027c(&DAT_0320ffc0);
  FUN_00e83d40(&local_b0,uVar4);
  FUN_00e83cf0(&local_b0,"hardwareIdName");
  uVar4 = FUN_00e70228(&DAT_0320ffc0);
  FUN_00e83d40(&local_b0,uVar4);
  FUN_00e83cf0(&local_b0,"hardwareName");
  uVar4 = FUN_00e70260(&DAT_0320ffc0);
  FUN_00e83d40(&local_b0,uVar4);
  FUN_00e83cf0(&local_b0,"hardwareIDFA");
  uVar4 = thunk_FUN_00e7753c(&DAT_0320ffc0);
  FUN_00e83d40(&local_b0,uVar4);
  FUN_00e83cf0(&local_b0,"credentials");
  local_f0 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    local_f0 = param_4 + 1;
  }
  local_110 = 0;
  uStack_108 = 0x100;
  pvStack_128 = (void *)0x0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_100 = 0;
  local_f8 = 0;
  pbStack_e8 = local_f0;
  FUN_00e9a570(&local_130,&local_f0,&local_b0);
  puVar2 = local_b0;
  local_90 = local_90 + -0x10;
  puVar6 = (undefined1 *)local_b0[3];
  puVar8 = puVar6 + 1;
  if ((undefined1 *)local_b0[4] <= puVar8) {
    FUN_008fe7c0(local_b0,1);
    puVar6 = (undefined1 *)puVar2[3];
    puVar8 = puVar6 + 1;
  }
  puVar2[3] = puVar8;
  *puVar6 = 0x7d;
  FUN_008fa54c(local_148,"executeCommand");
  local_168 = FUN_009155f8(&local_e0);
  FUN_00e86f28(local_160,param_3,"authenticate",&local_168);
  uVar3 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x38,local_148,local_160,0,0,0x3c,1);
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if ((local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  free(local_120);
  if (pvStack_128 != (void *)0x0) {
    operator_delete(pvStack_128);
  }
  free(pvStack_98);
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  free(local_d0);
  if (pvStack_d8 != (void *)0x0) {
    operator_delete(pvStack_d8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00e86e2c(long *param_1,int param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  FUN_00916f0c(param_1,6);
  lVar2 = *param_1;
  puVar3 = *(undefined1 **)(lVar2 + 0x18);
  puVar1 = puVar3 + 0xb;
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1) {
    FUN_008fe7c0(lVar2,0xb);
    puVar3 = *(undefined1 **)(lVar2 + 0x18);
    puVar1 = puVar3 + 0xb;
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1;
  puVar1 = puVar3;
  if (param_2 < 0) {
    *puVar3 = 0x2d;
    param_2 = -param_2;
    puVar1 = puVar3 + 1;
  }
  lVar2 = FUN_0091754c(param_2,puVar1);
  *(long *)(*param_1 + 0x18) = *(long *)(*param_1 + 0x18) + (-0xb - (long)puVar3) + lVar2;
  return 1;
}




undefined8 FUN_00e86ecc(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  param_1[4] = param_1[4] + -0x10;
  puVar1 = *(undefined1 **)(lVar3 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2) {
    FUN_008fe7c0(lVar3,1);
    puVar1 = *(undefined1 **)(lVar3 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2;
  *puVar1 = 0x7d;
  return 1;
}




void FUN_00e86f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  FUN_00e9a478(lVar4,*param_4);
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

