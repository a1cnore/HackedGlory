// functions/008f9 — 2 functions
#include "libGameKindred.h"




undefined4 FUN_008f9c94(void)

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
  uVar4 = FUN_00ecb2e4("ingamewin5v5");
  FUN_00ecb2f8("default");
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/Win/1-Win-Start.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/Win/2-Win-Start-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/Win/3-Win-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/Win/4-Win-Loop-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/Win/3-Win-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/Win/4-Win-Loop-Tail.ogg");
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




undefined4 FUN_008f9e84(void)

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
  uVar4 = FUN_00ecb2e4("ingamelose5v5");
  FUN_00ecb2f8("default");
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/Loss/1-LOSE-Start.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/Loss/2-LOSE-Start-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/Loss/3-LOSE-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/Loss/4-LOSE-Loop-Tail.ogg");
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
  FUN_008fa488(local_50,"build://Music/InGame/Parts5v5/Loss/3-LOSE-Loop.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa488(local_68,"build://Music/InGame/Parts5v5/Loss/4-LOSE-Loop-Tail.ogg");
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

