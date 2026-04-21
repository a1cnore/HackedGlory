// functions/008f7 — 2 functions
#include "libGameKindred.h"




undefined4 FUN_008f7028(void)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ecb2e4("spoilsofwar");
  FUN_00ecb2f8("default");
  FUN_008fa488(local_50,
               "build://Music/SpoilsOfWar/Parts/stg_SEMC_vainglory_spoils_of_war_perc_loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,0,"intro");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb328();
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_008f70e0(void)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00ecb2e4("ingame");
  FUN_00ecb2f8("jungle");
  FUN_008fa488(local_50,"build://Music/InGame/Parts/1_InGame_Wip_Intro.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/2_InGame_Wip_Intro-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,"intro");
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/3_InGame_Wip_Jungling-01.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/4_InGame_Wip_Jungling-01-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/5_InGame_Wip_Jungling-02.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/6_InGame_Wip_Jungling-02-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/7_InGame_Wip_Jungling-03.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/8_InGame_Wip_Jungling-03-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/9_InGame_Wip_Jungling-04.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/10_InGame_Wip_Jungling-04-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/11_InGame_Wip_Jungling-05.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/12_InGame_Wip_Jungling-05-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/13_InGame_Wip_Jungling-06.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/14_InGame_Wip_Jungling-06-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/15_InGame_Wip_Jungling-07.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/16_InGame_Wip_Jungling-07-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/17_InGame_Wip_Jungling-08.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/18_InGame_Wip_Jungling-08-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb2f8("lane");
  FUN_008fa488(local_50,"build://Music/InGame/Parts/19_InGame_Wip_Laning-01.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/20_InGame_Wip_Laning-01-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/21_InGame_Wip_Laning-02.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/22_InGame_Wip_Laning-02-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/23_InGame_Wip_Laning-03.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/24_InGame_Wip_Laning-03-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/25_InGame_Wip_Laning-04.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/26_InGame_Wip_Laning-04-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/27_InGame_Wip_Laning-05.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/28_InGame_Wip_Laning-05-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/29_InGame_Wip_Laning-06.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/30_InGame_Wip_Laning-06-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/31_InGame_Wip_Laning-07.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/32_InGame_Wip_Laning-07-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/33_InGame_Wip_Laning-08.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/34_InGame_Wip_Laning-08-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb2f8("fight");
  FUN_008fa488(local_50,"build://Music/InGame/Parts/35_InGame_Wip_TransitionLaningToBattle.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/36_InGame_Wip_TransitionLaningToBattle-Tail.ogg"
              );
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,"lane");
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/37_InGame_Wip_TeamBattle-01.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/38_InGame_Wip_TeamBattle-01-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/39_InGame_Wip_TeamBattle-02.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/40_InGame_Wip_TeamBattle-02-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/41_InGame_Wip_TeamBattle-03.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/42_InGame_Wip_TeamBattle-03-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/43_InGame_Wip_TeamBattle-04.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/44_InGame_Wip_TeamBattle-04-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/45_InGame_Wip_TeamBattle-05.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/46_InGame_Wip_TeamBattle-05-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/47_InGame_Wip_TeamBattle-06.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/48_InGame_Wip_TeamBattle-06-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/49_InGame_Wip_TeamBattle-07.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/50_InGame_Wip_TeamBattle-07-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/51_InGame_Wip_TeamBattle-08.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/52_InGame_Wip_TeamBattle-08-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/53_InGame_Wip_TeamBattle-09.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/54_InGame_Wip_TeamBattle-09-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/55_InGame_Wip_TeamBattle-10.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/56_InGame_Wip_TeamBattle-10-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/57_InGame_Wip_TeamBattle-11.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/58_InGame_Wip_TeamBattle-11-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/59_InGame_Wip_TeamBattle-12.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/60_InGame_Wip_TeamBattle-12-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb2f8("kraken");
  FUN_008fa488(local_50,"build://Music/InGame/Parts/61_InGame_Wip_Kraken-01.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/62_InGame_Wip_Kraken-01-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/63_InGame_Wip_Kraken-02.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/64_InGame_Wip_Kraken-02-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/65_InGame_Wip_Kraken-03.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/66_InGame_Wip_Kraken-03-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/67_InGame_Wip_Kraken-04.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/68_InGame_Wip_Kraken-04-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/69_InGame_Wip_Kraken-05.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/70_InGame_Wip_Kraken-05-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/71_InGame_Wip_Kraken-06.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/72_InGame_Wip_Kraken-06-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb2f8("death");
  FUN_008fa488(local_50,"build://Music/InGame/Parts/Death/0_Death-01.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/Death/1_Death-01-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/Death/2_Death-02.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/Death/3_Death-02-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/Death/4_Death-03.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/Death/5_Death-03-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts/Death/6_Death-04.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/Death/7_Death-04-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb328();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

