// functions/008f8 — 3 functions
#include "libGameKindred.h"




undefined4 FUN_008f8584(void)

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
  uVar4 = FUN_00ecb2e4("ingamewin");
  FUN_00ecb2f8("default");
  FUN_008fa488(local_50,"build://Music/InGame/Parts/End/0_Win-Intro.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/End/1_Win-Intro-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts/End/2_Win-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/End/3_Win-Loop-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts/End/2_Win-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/End/3_Win-Loop-Tail.ogg");
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




undefined4 FUN_008f8774(void)

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
  uVar4 = FUN_00ecb2e4("ingamelose");
  FUN_00ecb2f8("default");
  FUN_008fa488(local_50,"build://Music/InGame/Parts/End/0_Lose-Intro.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/End/1_Lose-Intro-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts/End/2_Lose-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/End/3_Lose-Loop-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts/End/2_Lose-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts/End/3_Lose-Loop-Tail.ogg");
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




undefined4 FUN_008f8964(void)

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
  uVar4 = FUN_00ecb2e4("ingame5v5");
  FUN_00ecb2f8("jungle");
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/1-Intro.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/2-Intro-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/3-Early-01.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/4-Early-Tail-2.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x40400000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/70-Early-10.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/71-Early-Tail-11.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x40000000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/72-Early-12.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/73-Early-Tail-13.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x40000000,pvVar1,pvVar2,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/5-Early-02.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/6-Early-Tail-3.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/7-Early-03.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/8-Early-Tail-4.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/9-Early-04.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/10-Early-Tail-5.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/11-Early-05.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/12-Early-Tail-6.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/13-Early-06.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/14-Early-Tail-7.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/15-Early-07.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/16-Early-Tail-8.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/17-Early-08.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/18-Early-Tail-9.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/74-Transition-Mid-Early.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/75-Transition-Mid-Early-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/78-Transition-Death-Early.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/79-Transition-Death-Early-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,"death");
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb2f8("lane");
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/19-Transition Laning To Battle.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/20-Transition Laning To Battle-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,"jungle");
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/21-Mid-1.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/22-Mid-Tail-2.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/23-Mid-2.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/24-Mid-Tail-3.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/25-Mid-3.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/26-Mid-Tail-4.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/27-Mid-4.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/28-Mid-Tail-5.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/29-Mid-5.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/30-Mid-Tail-6.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/31-Late-1.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/32-Late-Tail-2.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/33-Late-2.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/34-Late-Tail-3.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/35-Late-3.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/36-Late-Tail-4.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/37-Late-4.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/38-Late-Tail-5.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/39-Late-5.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/40-Late-Tail-6.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/43-End-1.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/44-End-Tail-2.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/45-End-2.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/46-End-Tail-3.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/47-End-3.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/48-End-Tail-4.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/49-End-4.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/50-End-Tail-5.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/51-End-5.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/52-End-Tail-6.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/53-End-6.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/54-End-Tail-7.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/55-End-7.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/56-End-Tail-8.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/57-End-8.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/58-End-Tail-9.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/76-Transition-Early-Death.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/77-Transition-Early-Death-Tail.ogg");
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,pvVar2,"jungle");
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/60-Death-1.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/61-Death-Tail-2.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/62-Death-3.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/63-Death-Tail-4.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/64-Death-5.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/65-Death-Tail-6.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/66-Death-7.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/67-Death-Tail-8.ogg");
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

