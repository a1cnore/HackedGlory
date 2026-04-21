// functions/009e9 — 6 functions
#include "libGameKindred.h"




void FUN_009e9ac4(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009e9b30(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = operator_new(0x398);
  *plVar1 = 0;
  FUN_009ecef0(plVar1 + 2,param_2);
  FUN_009ecf78(plVar1 + 4,param_2 + 0x10);
  FUN_009ed07c(plVar1 + 6,param_2 + 0x20);
  memcpy(plVar1 + 8,(void *)(param_2 + 0x30),0x58);
  FUN_008fcdb8(plVar1 + 0x13,param_2 + 0x88);
  memcpy(plVar1 + 0x16,(void *)(param_2 + 0xa0),200);
  FUN_0093690c(plVar1 + 0x2f,param_2 + 0x168);
  FUN_009ecdd0(plVar1 + 0x31,param_2 + 0x178);
  FUN_008fcdb8(plVar1 + 0x68,param_2 + 0x330);
  thunk_FUN_00e7051c(plVar1 + 0x6b,param_2 + 0x348);
  thunk_FUN_00e7051c(plVar1 + 0x6d,param_2 + 0x358);
  thunk_FUN_00e7051c(plVar1 + 0x6f,param_2 + 0x368);
  *(undefined2 *)(plVar1 + 0x72) = *(undefined2 *)(param_2 + 0x380);
  plVar1[0x71] = *(long *)(param_2 + 0x378);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_009e9c28(long param_1)

{
  FUN_00be75ac();
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  FUN_00b63fc0(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  FUN_00e70510(param_1 + 0x348);
  FUN_00e70510(param_1 + 0x358);
  FUN_00e70510(param_1 + 0x368);
  *(undefined4 *)(param_1 + 0x37c) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x380) = 0;
  return;
}




void FUN_009e9c8c(long param_1)

{
  if (*(void **)(param_1 + 0x370) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x370));
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  if (*(void **)(param_1 + 0x360) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  if (*(void **)(param_1 + 0x350) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x350));
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x340));
  }
  FUN_0096910c(param_1 + 0x178);
  FUN_008fefd4(param_1 + 0x168,1);
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  FUN_009ec250(param_1 + 0x20,1);
  FUN_009ec324(param_1 + 0x10,1);
  FUN_009ec3a8(param_1,1);
  return;
}




void FUN_009e9d44(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  lVar1 = *plVar2;
  *(long *)(lVar1 + 8) = plVar2[1];
  *(long *)plVar2[1] = lVar1;
  param_1[2] = param_1[2] + -1;
  FUN_009e9c8c(plVar2 + 2);
  operator_delete(plVar2);
  return;
}




void FUN_009e9d88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 extraout_s0_08;
  undefined4 extraout_s0_09;
  undefined4 extraout_s0_10;
  undefined4 extraout_s0_11;
  undefined4 extraout_s0_12;
  undefined4 extraout_s0_13;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168 [2];
  void *local_158;
  char *local_150 [2];
  void *local_140;
  char **local_138;
  char *local_130;
  void *local_128;
  void *local_120;
  void *local_118 [2];
  void *local_108;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  char **local_b8 [2];
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90 [2];
  void *local_80;
  undefined1 auStack_78 [8];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_0093dbe8();
  if ((uVar6 & 1) == 0) {
    local_90[0] = 0;
    local_90[1] = 0;
    local_80 = (void *)0x0;
    FUN_008fa54c(&local_138,"blitz");
    FUN_008fce60(local_90,&local_138);
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    uVar7 = FUN_009e848c();
    local_a0._4_4_ = (int)uVar7;
    local_a0._0_4_ =
         FUN_009e848c(uVar7,param_2,"/skillProgressionInfoBlitz_pvp_rankedEloEarnedCurrAmt");
    local_a0._0_4_ = (int)local_a0 - local_a0._4_4_;
    local_98 = CONCAT44(local_98._4_4_,(int)local_a0);
    uVar7 = FUN_009ebe58(param_3,&local_a0);
    uVar3 = FUN_009e848c(uVar7,param_2,"/silverBaseAmt");
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,uVar3);
    FUN_008fa54c(&local_138,"glory");
    FUN_008fce60(local_90,&local_138);
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    uVar7 = FUN_009e848c();
    local_a0._4_4_ = (int)uVar7;
    uVar3 = FUN_009e848c(uVar7,param_2,"/silverTotalAmt");
    local_98 = CONCAT44(local_98._4_4_,uVar3);
    uVar7 = FUN_009ebe58(param_3,&local_a0);
    uVar3 = FUN_009e848c(uVar7,param_2,"/ascensionBaseTokens");
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,uVar3);
    FUN_008fa54c(&local_138,"sunlight");
    FUN_008fce60(local_90,&local_138);
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    uVar7 = FUN_009e848c();
    iVar5 = (int)local_a0;
    local_a0._4_4_ = (int)uVar7;
    iVar4 = FUN_009e848c(uVar7,param_2,"/ascensionBonusTokens");
    local_98 = CONCAT44(local_98._4_4_,iVar4 + iVar5);
    uVar7 = FUN_009ebe58(param_3,&local_a0);
    uVar3 = FUN_009e848c(uVar7,param_2,"/essenceBaseAmt");
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,uVar3);
    FUN_008fa54c(&local_138,"essence");
    FUN_008fce60(local_90,&local_138);
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    uVar7 = FUN_009e848c();
    local_a0 = (undefined8 *)CONCAT44((int)uVar7,(int)local_a0);
    uVar3 = FUN_009e848c(uVar7,param_2,"/essenceTotalAmt");
    local_98 = CONCAT44(local_98._4_4_,uVar3);
    uVar7 = FUN_009ebe58(param_3,&local_a0);
    uVar7 = FUN_009e83a0(uVar7,param_2,"chestAward");
    FUN_008fa54c(local_b8,uVar7);
    uVar7 = FUN_00a87e60();
    lVar8 = FUN_00a87720(uVar7,local_b8);
    if (lVar8 != 0) {
      memset(&local_130,0,0x78);
      FUN_008fa54c(local_150,"chest");
      FUN_008fce60(local_e8,local_150);
      if (((ulong)local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      local_138 = (char **)CONCAT44(local_138._4_4_,1);
      FUN_008fce60(local_100,lVar8 + 0x38);
      FUN_008fcdb8(local_150,lVar8 + 0x68);
      FUN_008fce60(&local_130,local_150);
      if (((ulong)local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      FUN_008fa54c(local_150,"build://Chests.atlas");
      FUN_008fce60(local_118,local_150);
      if (((ulong)local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      FUN_008fce60(local_d0,local_b8);
      FUN_009ebef4(param_3 + 0x20,&local_138);
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if (((ulong)local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
      if (((ulong)local_130 & 1) != 0) {
        operator_delete(local_120);
      }
    }
    uVar7 = FUN_009e83a0();
    FUN_008fa54c(local_150,uVar7);
    uVar7 = FUN_00a87e60();
    lVar8 = FUN_00a87c80(uVar7,local_150);
    if (lVar8 != 0) {
      memset(&local_130,0,0x78);
      FUN_008fa54c(local_168,"key");
      FUN_008fce60(local_e8,local_168);
      if (((ulong)local_168[0] & 1) != 0) {
        operator_delete(local_158);
      }
      local_138 = (char **)CONCAT44(local_138._4_4_,1);
      FUN_008fce60(local_100,lVar8 + 0x18);
      FUN_008fcdb8(local_168,lVar8 + 0x30);
      FUN_008fce60(&local_130,local_168);
      if (((ulong)local_168[0] & 1) != 0) {
        operator_delete(local_158);
      }
      FUN_008fa54c(local_168,"build://Keys.atlas");
      FUN_008fce60(local_118,local_168);
      if (((ulong)local_168[0] & 1) != 0) {
        operator_delete(local_158);
      }
      FUN_008fce60(local_d0,local_150);
      FUN_009ebef4(param_3 + 0x20,&local_138);
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if (((ulong)local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
      if (((ulong)local_130 & 1) != 0) {
        operator_delete(local_120);
      }
    }
    uVar7 = FUN_009e848c();
    *(int *)(param_3 + 0x40) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/prevGuildLevel");
    *(int *)(param_3 + 0x30) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/guildXP");
    *(int *)(param_3 + 0x44) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/guildMinXP");
    *(int *)(param_3 + 0x48) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/guildMaxXP");
    *(int *)(param_3 + 0x4c) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/prevGuildXP");
    *(int *)(param_3 + 0x34) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/prevGuildMinXP");
    *(int *)(param_3 + 0x38) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/prevGuildMaxXP");
    *(int *)(param_3 + 0x3c) = (int)uVar7;
    *(undefined4 *)(param_3 + 0xa0) = 0;
    FUN_009e83a0(uVar7,param_2,"firstPlayer");
    uVar6 = FUN_00e6a488();
    if ((uVar6 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_009e83a0(uVar6,param_2,"secondPlayer");
    uVar6 = FUN_00e6a488();
    if ((uVar6 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_009e83a0(uVar6,param_2,"thirdPlayer");
    uVar6 = FUN_00e6a488();
    if ((uVar6 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_009e83a0(uVar6,param_2,"fourthPlayer");
    uVar6 = FUN_00e6a488();
    if ((uVar6 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_009e83a0(uVar6,param_2,"fifthPlayer");
    uVar6 = FUN_00e6a488();
    if ((uVar6 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    uVar7 = FUN_009e858c(uVar6,param_2,"/showUserTeamSpoils");
    *(byte *)(param_3 + 0xa4) = (byte)uVar7 & 1;
    uVar7 = FUN_009e848c(uVar7,param_2,"/prevLevel");
    *(int *)(param_3 + 0x50) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/currLevel");
    *(int *)(param_3 + 0x60) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/currXP");
    *(int *)(param_3 + 100) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/currXPmin");
    *(int *)(param_3 + 0x68) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,&DAT_01b9a20d);
    *(int *)(param_3 + 0x6c) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/prevXP");
    *(int *)(param_3 + 0x54) = (int)uVar7;
    uVar7 = FUN_009e848c(uVar7,param_2,"/prevXPmin");
    *(int *)(param_3 + 0x58) = (int)uVar7;
    uVar3 = FUN_009e848c(uVar7,param_2,"/prevXPmax");
    *(undefined4 *)(param_3 + 0x5c) = uVar3;
    if (((ulong)local_150[0] & 1) != 0) {
      operator_delete(local_140);
    }
    if (((ulong)local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
  }
  uVar7 = FUN_009e848c();
  *(int *)(param_3 + 0x10c) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfoRankedEloBucketPrevAmt");
  *(int *)(param_3 + 0x108) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfoRankedEloEarnedPrevAmt");
  *(float *)(param_3 + 0x124) = (float)(int)uVar7;
  *(undefined4 *)(param_3 + 0x128) = 0;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierProgressPrevAmt");
  *(undefined4 *)(param_3 + 0x114) = extraout_s0;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierBronzeLinePrevAmt");
  *(undefined4 *)(param_3 + 0x118) = extraout_s0_00;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierSilverLinePrevAmt");
  *(undefined4 *)(param_3 + 0x11c) = extraout_s0_01;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierGoldLinePrevAmt");
  *(undefined4 *)(param_3 + 0x120) = extraout_s0_02;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfoRankedSkillTierCurrAmt");
  *(int *)(param_3 + 0x13c) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfoRankedEloBucketCurrAmt");
  *(int *)(param_3 + 0x138) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfoRankedEloEarnedCurrAmt");
  *(float *)(param_3 + 0x154) = (float)(int)uVar7;
  *(float *)(param_3 + 0x158) = (float)(int)uVar7 - *(float *)(param_3 + 0x124);
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierProgressCurrAmt");
  *(undefined4 *)(param_3 + 0x144) = extraout_s0_03;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierBronzeLineCurrAmt");
  *(undefined4 *)(param_3 + 0x148) = extraout_s0_04;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierSilverLineCurrAmt");
  *(undefined4 *)(param_3 + 0x14c) = extraout_s0_05;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfoRankedSkillTierGoldLineCurrAmt");
  *(undefined4 *)(param_3 + 0x150) = extraout_s0_06;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierPrevAmt");
  *(int *)(param_3 + 0xac) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedEloBucketPrevAmt");
  *(int *)(param_3 + 0xa8) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedEloEarnedPrevAmt");
  *(float *)(param_3 + 0xc4) = (float)(int)uVar7;
  *(undefined4 *)(param_3 + 200) = 0;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierProgressPrevAmt");
  *(undefined4 *)(param_3 + 0xb4) = extraout_s0_07;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierBronzeLinePrevAmt"
                      );
  *(undefined4 *)(param_3 + 0xb8) = extraout_s0_08;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierSilverLinePrevAmt"
                      );
  *(undefined4 *)(param_3 + 0xbc) = extraout_s0_09;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierGoldLinePrevAmt");
  *(undefined4 *)(param_3 + 0xc0) = extraout_s0_10;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierCurrAmt");
  *(int *)(param_3 + 0xdc) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedEloBucketCurrAmt");
  *(int *)(param_3 + 0xd8) = (int)uVar7;
  uVar7 = FUN_009e848c(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedEloEarnedCurrAmt");
  *(float *)(param_3 + 0xf4) = (float)(int)uVar7;
  *(float *)(param_3 + 0xf8) = (float)(int)uVar7 - *(float *)(param_3 + 0xc4);
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierProgressCurrAmt");
  *(undefined4 *)(param_3 + 0xe4) = extraout_s0_11;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierBronzeLineCurrAmt"
                      );
  *(undefined4 *)(param_3 + 0xe8) = extraout_s0_12;
  uVar7 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierSilverLineCurrAmt"
                      );
  *(undefined4 *)(param_3 + 0xec) = extraout_s0_13;
  uVar3 = FUN_009e8654(uVar7,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierGoldLineCurrAmt");
  *(undefined4 *)(param_3 + 0xf0) = uVar3;
  uVar6 = FUN_0093dbe8();
  if ((uVar6 & 1) == 0) {
    uVar7 = FUN_009e8718(uVar6,param_2,"/heroMasteryHero");
    FUN_008fa54c(&local_138,uVar7);
    FUN_008fce60(param_3 + 0x88,&local_138);
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    uVar3 = FUN_009e848c();
    *(undefined4 *)(param_3 + 0x78) = uVar3;
    iVar5 = FUN_00ccf1dc();
    *(int *)(param_3 + 0x70) = iVar5;
    uVar6 = FUN_00ccf2a8(iVar5 + 1);
    if ((uVar6 & 1) == 0) {
      uVar6 = (ulong)*(uint *)(param_3 + 0x80);
    }
    else {
      uVar6 = FUN_00ccf248(*(int *)(param_3 + 0x70) + 1);
    }
    iVar5 = *(int *)(param_3 + 0x78);
    *(int *)(param_3 + 0x80) = (int)uVar6;
    iVar4 = FUN_009e848c(uVar6,param_2,"/heroMasteryTotalAmt");
    *(int *)(param_3 + 0x7c) = iVar4 + iVar5;
    iVar5 = FUN_00ccf1dc();
    *(int *)(param_3 + 0x74) = iVar5;
    uVar6 = FUN_00ccf2a8(iVar5 + 1);
    if ((uVar6 & 1) == 0) {
      uVar3 = *(undefined4 *)(param_3 + 0x84);
    }
    else {
      uVar3 = FUN_00ccf248(*(int *)(param_3 + 0x74) + 1);
    }
    *(undefined4 *)(param_3 + 0x84) = uVar3;
    local_150[0] = "karmaBonus";
    local_170 = "achievementBonus";
    local_168[0] = "hardFoughtBonus";
    local_180 = "boostHeat_buffGuild_xpBonusApplied";
    local_178 = "liveevent_generic_25pct_xp";
    local_190 = "boostPrime_time_buffGuild_xpBonusApplied";
    local_188 = "boostFire_buffGuild_xpBonusApplied";
    local_1a0 = "boostPlayer_xp_buff_50pct_permanentPlayer_xpBonusApplied";
    local_198 = "boostPlayer_silver_buff_25pct_permanentSilverBonusApplied";
    local_1b0 = "boostPlayer_xp_buff_100pct_timedPlayer_xpBonusApplied";
    local_1a8 = "boostPlayer_silver_buff_100pct_timedSilverBonusApplied";
    local_1c0 = "boostPlayer_ascension_token_buff_100pct_timedAscension_tokenBonusApplied";
    local_1b8 = "boostPlayer_fame_buff_100pct_timedGuild_xpBonusApplied";
    local_1d0 = "boostPlayer_xp_buff_50pct_timedPlayer_xpBonusApplied";
    local_1c8 = "boostPlayer_silver_buff_50pct_timedSilverBonusApplied";
    local_1e0 = "boostPlayer_ascension_token_buff_50pct_timedAscension_tokenBonusApplied";
    local_1d8 = "boostPlayer_fame_buff_50pct_timedGuild_xpBonusApplied";
    local_1f0 = "boostPlayer_gold_annuity_5_timedGold_annuityBonusApplied";
    local_1e8 = "boostPlayer_gold_annuity_80_timedGold_annuityBonusApplied";
    local_1f8 = "boostGameevent_double_glorySilverBonusApplied";
    local_138 = local_150;
    local_a0 = &local_98;
    local_98 = 0;
    local_90[0] = 0;
    lVar8 = FUN_009eda10(&local_a0,local_150,&DAT_01b9af6e,&local_138,local_b8);
    local_138 = local_168;
    *(char **)(lVar8 + 0x28) = "glory";
    lVar8 = FUN_009eda10(&local_a0,local_168,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "glory";
    local_138 = &local_170;
    lVar8 = FUN_009eda10(&local_a0,&local_170,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "glory";
    local_138 = &local_178;
    lVar8 = FUN_009eda10(&local_a0,&local_178,&DAT_01b9af6e,&local_138,local_b8);
    local_138 = &local_180;
    *(char **)(lVar8 + 0x28) = "xp";
    lVar8 = FUN_009eda10(&local_a0,&local_180,&DAT_01b9af6e,&local_138,local_b8);
    local_138 = &local_188;
    *(char **)(lVar8 + 0x28) = "guild";
    lVar8 = FUN_009eda10(&local_a0,&local_188,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "guild";
    local_138 = &local_190;
    lVar8 = FUN_009eda10(&local_a0,&local_190,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "guild";
    local_138 = &local_198;
    lVar8 = FUN_009eda10(&local_a0,&local_198,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "glory";
    local_138 = &local_1a0;
    lVar8 = FUN_009eda10(&local_a0,&local_1a0,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "xp";
    local_138 = &local_1a8;
    lVar8 = FUN_009eda10(&local_a0,&local_1a8,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "glory";
    local_138 = &local_1b0;
    lVar8 = FUN_009eda10(&local_a0,&local_1b0,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "xp";
    local_138 = &local_1b8;
    lVar8 = FUN_009eda10(&local_a0,&local_1b8,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "guild";
    local_138 = &local_1c0;
    lVar8 = FUN_009eda10(&local_a0,&local_1c0,&DAT_01b9af6e,&local_138,local_b8);
    local_138 = &local_1c8;
    *(char **)(lVar8 + 0x28) = "sunlight";
    lVar8 = FUN_009eda10(&local_a0,&local_1c8,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "glory";
    local_138 = &local_1d0;
    lVar8 = FUN_009eda10(&local_a0,&local_1d0,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "xp";
    local_138 = &local_1d8;
    lVar8 = FUN_009eda10(&local_a0,&local_1d8,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "guild";
    local_138 = &local_1e0;
    lVar8 = FUN_009eda10(&local_a0,&local_1e0,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "sunlight";
    local_138 = &local_1e8;
    lVar8 = FUN_009eda10(&local_a0,&local_1e8,&DAT_01b9af6e,&local_138,local_b8);
    local_138 = &local_1f0;
    *(char **)(lVar8 + 0x28) = "gold";
    lVar8 = FUN_009eda10(&local_a0,&local_1f0,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "gold";
    local_138 = &local_1f8;
    lVar8 = FUN_009eda10(&local_a0,&local_1f8,&DAT_01b9af6e,&local_138,local_b8);
    *(char **)(lVar8 + 0x28) = "glory";
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_ALL_ACCESS_PASS",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_1c8;
    local_200 = local_1c8;
    local_b8[0] = &local_200;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    pcVar2 = local_1d0;
    local_200 = local_1d0;
    local_b8[0] = &local_200;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar9 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    pcVar2 = local_1d8;
    local_200 = local_1d8;
    local_b8[0] = &local_200;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar10 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    pcVar2 = local_1e0;
    local_200 = local_1e0;
    local_b8[0] = &local_200;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar11 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    pcVar2 = local_1e8;
    local_200 = local_1e8;
    local_b8[0] = &local_200;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar12 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    pcVar2 = local_1f0;
    local_200 = local_1f0;
    local_b8[0] = &local_200;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar13 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if (((((uVar6 & 1) != 0) || ((uVar9 & 1) != 0)) || ((uVar10 & 1) != 0)) ||
       ((((uVar11 & 1) != 0 || ((uVar12 & 1) != 0)) || ((uVar13 & 1) != 0)))) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_HEAT",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_180;
    local_b8[0] = &local_200;
    local_200 = local_180;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_FIRE",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_188;
    local_b8[0] = &local_200;
    local_200 = local_188;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_PRIME_TIME",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_190;
    local_b8[0] = &local_200;
    local_200 = local_190;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_PERMANENT_GLORY",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_198;
    local_b8[0] = &local_200;
    local_200 = local_198;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_PERMANENT_XP",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_1a0;
    local_b8[0] = &local_200;
    local_200 = local_1a0;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_EVENT_GENERIC_XP_25PCT",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_178;
    local_b8[0] = &local_200;
    local_200 = local_178;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_GLORY_100",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_1a8;
    local_b8[0] = &local_200;
    local_200 = local_1a8;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_XP_100",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_1b0;
    local_b8[0] = &local_200;
    local_200 = local_1b0;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_GUILD_XP_100",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_1b8;
    local_b8[0] = &local_200;
    local_200 = local_1b8;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_SUNLIGHT_100",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_1c0;
    local_b8[0] = &local_200;
    local_200 = local_1c0;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MENU_SPOILS_BOOST_DOUBLE_GLORY_EVENT",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_1f8;
    local_b8[0] = &local_200;
    local_200 = local_1f8;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_KARMA_AWARDED",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_150[0];
    local_b8[0] = &local_200;
    local_200 = local_150[0];
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    FUN_00e70510(&local_120);
    uVar7 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_HARD_FOUGHT",0);
    FUN_00910394(&local_120,uVar7);
    pcVar2 = local_168[0];
    local_b8[0] = &local_200;
    local_200 = local_168[0];
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    local_138 = &local_130;
    local_130 = (char *)0x0;
    local_128 = (void *)0x0;
    uVar7 = FUN_00e70510(&local_120);
    uVar6 = FUN_009e80c4(uVar7,param_2,"unlocked1stWin");
    uVar9 = FUN_009e80c4(uVar6,param_2,"unlocked3rdWin");
    uVar10 = FUN_009e80c4(uVar9,param_2,"unlocked7thDayWin");
    if ((uVar10 & 1) == 0) {
      if ((uVar9 & 1) == 0) {
        if ((uVar6 & 1) != 0) {
          uVar7 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_1ST_WIN_OF_DAY",0);
          FUN_00910394(&local_120,uVar7);
          FUN_00902c1c();
        }
      }
      else {
        uVar7 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_3RD_WIN_OF_DAY",0);
        FUN_00910394(&local_120,uVar7);
        FUN_00902ce0();
      }
    }
    else {
      uVar7 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_7TH_DAY_WIN",0);
      FUN_00910394(&local_120,uVar7);
      FUN_00902da4();
    }
    pcVar2 = local_170;
    local_b8[0] = &local_200;
    local_200 = local_170;
    lVar8 = FUN_009eda10(&local_a0,&local_200,&DAT_01b9af6e,local_b8,auStack_78);
    uVar6 = FUN_009ebfc0(lVar8,param_2,&local_138,pcVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar6 & 1) != 0) {
      FUN_009ec078(param_3 + 0x10,&local_138);
    }
    if (local_118[0] != (void *)0x0) {
      operator_delete__(local_118[0]);
      local_120 = (void *)0x0;
      local_118[0] = (void *)0x0;
    }
    FUN_00948ab4(&local_138,local_130);
    FUN_009ec424(&local_a0,local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

