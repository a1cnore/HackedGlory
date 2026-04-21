// functions/00a95 — 5 functions
#include "libGameKindred.h"




void FUN_00a9533c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a91c70(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x40400000;
  lVar3 = FUN_00a91db0(lVar2);
  lVar4 = FUN_00a93758(lVar3 + 0x10);
  lVar5 = FUN_00a945f0(lVar4 + 0x10);
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    uVar6 = FUN_00a91e00(lVar4 + 0x88);
    local_78[0] = 0x10;
    local_70 = 1;
    FUN_00a7f880(uVar6,local_78);
  } while (lVar4 + 0x88 == lVar3 + 0x10);
  lVar4 = lVar3 + 0x28;
  do {
    lVar5 = FUN_00a92f18(lVar4);
    lVar7 = FUN_00a945f0(lVar5 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      lVar7 = FUN_00a931fc(lVar5 + 0x88);
      *(undefined4 *)(lVar7 + 0x10) = 0x15;
    } while (lVar5 + 0x88 == lVar4);
    lVar7 = FUN_00a91db0(lVar4);
    FUN_00a92268(lVar7 + 0x10);
    lVar8 = FUN_00a92af8(lVar7 + 0x10);
    *(undefined4 *)(lVar8 + 0x10) = 0xd1b8360;
    lVar5 = lVar7 + 0x28;
    *(undefined4 *)(lVar8 + 0x18) = 0xffffffff;
    do {
      lVar8 = FUN_00a92f18(lVar5);
      lVar9 = FUN_00a945f0(lVar8 + 0x10);
      *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) | 2;
      do {
        lVar9 = FUN_00a92468(lVar8 + 0x88);
        FUN_00a7f000(lVar9 + 0x10,"*Sidebar_Ardan_Tutorial1B*");
      } while (lVar8 + 0x88 == lVar5);
      lVar9 = lVar8 + 0xa0;
      do {
        lVar10 = FUN_00a92f18(lVar9);
        lVar11 = FUN_00a94654(lVar10 + 0x10);
        *(undefined4 *)(lVar11 + 8) = 2;
        do {
          lVar11 = FUN_00a92468(lVar10 + 0x88);
          FUN_00a7eff4(lVar11 + 0x10,"*Cutscene_Ardan_PC_Tutorial1B*");
        } while (lVar10 + 0x88 == lVar9);
        do {
          lVar11 = FUN_00a92468(lVar10 + 0xa0);
          FUN_00a7f000(lVar11 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1B*");
        } while (lVar10 == lVar8);
      } while (lVar9 == lVar5);
    } while (lVar7 == lVar3);
    lVar5 = FUN_00a91db0(lVar4);
    uVar6 = FUN_00a923cc(lVar5 + 0x10);
    uVar12 = FUN_00e6ce7c("TUTORIAL1_OSD_BASIC_ATTACK",0);
    FUN_00a7f3f8(uVar6,uVar12);
    do {
      FUN_00a91e50(lVar5 + 0x28);
    } while (lVar5 == lVar3);
  } while (lVar4 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar6 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar6,"Tutorial1","GwenDesktop","TwoMinionsKilled");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar5 = FUN_00a92f18(lVar4);
    lVar7 = FUN_00a945f0(lVar5 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar6 = FUN_00a92ec8(lVar5 + 0x88);
      FUN_00a85380(uVar6,"Tutorial1","GwenJoystick","TwoMinionsKilled");
    } while (lVar5 + 0x88 == lVar4);
    do {
      uVar6 = FUN_00a92ec8(lVar5 + 0xa0);
      FUN_00a85380(uVar6,"Tutorial1","GwenTap","TwoMinionsKilled");
    } while (lVar5 == lVar3);
  } while (lVar4 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a956c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a945f0(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
  do {
    lVar4 = FUN_00a91c70(lVar3);
    *(undefined4 *)(lVar4 + 0x10) = 0x3f000000;
    uVar5 = FUN_00a92bd8(lVar3);
    FUN_00a7edcc(uVar5,"SkipSegment");
    FUN_00a91e50(lVar3);
  } while (lVar3 == lVar2);
  uVar5 = FUN_00a92bd8(lVar2);
  FUN_00a7edcc(uVar5,"SpawnThreeMinions");
  lVar3 = FUN_00a91c70(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f99999a;
  lVar3 = FUN_00a9324c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
  *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 2;
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x16;
  lVar3 = FUN_00a92110(lVar2);
  lVar3 = FUN_00a98418(lVar3 + 0x10);
  if (PTR_s_Ability__Gwen__A_02beaef0 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar11 = (uint)(byte)*PTR_s_Ability__Gwen__A_02beaef0;
    uVar9 = 0x811c9dc5;
    pbVar10 = PTR_s_Ability__Gwen__A_02beaef0;
    if (*PTR_s_Ability__Gwen__A_02beaef0 != 0) {
      do {
        uVar12 = (uint)pbVar10[1];
        uVar9 = (uVar9 ^ uVar11) * 0x1000193;
        uVar11 = uVar12;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 != 0);
    }
  }
  *(uint *)(lVar3 + 8) = uVar9;
  *(undefined4 *)(lVar3 + 0xc) = 1;
  lVar4 = FUN_00a91db0(lVar2);
  uVar5 = FUN_00a91e00(lVar4 + 0x10);
  local_78[0] = 1;
  local_70 = 1;
  FUN_00a7f880(uVar5,local_78);
  lVar3 = lVar4 + 0x28;
  do {
    lVar6 = FUN_00a91db0(lVar3);
    FUN_00a92268(lVar6 + 0x10);
    lVar7 = FUN_00a92af8(lVar6 + 0x10);
    *(undefined4 *)(lVar7 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
    do {
      lVar7 = FUN_00a92468(lVar6 + 0x28);
      FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1_UseA*");
      lVar7 = FUN_00a9324c(lVar6 + 0x28);
      *(undefined4 *)(lVar7 + 0x10) = 0xf9935edd;
      *(byte *)(lVar7 + 0x20) = *(byte *)(lVar7 + 0x20) | 0x10;
    } while (lVar6 == lVar4);
    lVar6 = FUN_00a91db0(lVar3);
    uVar5 = FUN_00a923cc(lVar6 + 0x10);
    uVar8 = FUN_00e6ce7c("TUTORIAL1_OSD_USE_A",0);
    FUN_00a7f3f8(uVar5,uVar8);
    do {
      FUN_00a91e50(lVar6 + 0x28);
    } while (lVar6 == lVar4);
  } while (lVar3 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar5 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar5,"Tutorial1","GwenDesktop","ThreeMinionsKilledWithA");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar6 = FUN_00a92f18(lVar4);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar5 = FUN_00a92ec8(lVar6 + 0x88);
      FUN_00a85380(uVar5,"Tutorial1","GwenJoystick","ThreeMinionsKilledWithA");
    } while (lVar6 + 0x88 == lVar4);
    do {
      uVar5 = FUN_00a92ec8(lVar6 + 0xa0);
      FUN_00a85380(uVar5,"Tutorial1","GwenTap","ThreeMinionsKilledWithA");
    } while (lVar6 == lVar3);
  } while (lVar4 == lVar2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a95a40(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a9324c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
  *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 2;
  *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 0x10;
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x16;
  uVar4 = FUN_00a92bd8(lVar2);
  FUN_00a7edcc(uVar4,"SpawnFiveMinions");
  lVar3 = FUN_00a91c70(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f99999a;
  lVar5 = FUN_00a92f18(lVar2);
  lVar3 = FUN_00a945f0(lVar5 + 0x10);
  *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 2;
  lVar3 = lVar5 + 0x88;
  do {
    lVar6 = FUN_00a93d90(lVar3);
    FUN_00a92268(lVar6 + 0x10);
    lVar7 = FUN_00a92af8(lVar6 + 0x10);
    *(undefined4 *)(lVar7 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
    do {
      lVar7 = FUN_00a92468(lVar6 + 0x28);
      FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1_AimA*");
    } while (lVar6 + 0x28 == lVar3);
    do {
      lVar7 = FUN_00a95eac(lVar6 + 0x40);
      FUN_00a802c0(lVar7 + 0x30,PTR_s_Ability__Gwen__A_02beaef0,3,0);
      FUN_00a80c58(lVar7 + 0x10,0);
      FUN_00a80c60(0x3f4ccccd,lVar7 + 0x10);
      FUN_00a80c80(0x41a00000);
      FUN_00a80c70(0x3e99999a);
      FUN_00a80c68(0x40a00000);
      FUN_00a80c94(0x42b40000);
      FUN_00a80c78(0x3f99999a);
    } while (lVar6 + 0x40 == lVar3);
  } while (lVar3 == lVar2);
  lVar5 = lVar5 + 0xa0;
  do {
    lVar3 = FUN_00a91db0(lVar5);
    FUN_00a92268(lVar3 + 0x10);
    lVar6 = FUN_00a92af8(lVar3 + 0x10);
    lVar3 = lVar3 + 0x28;
    *(undefined4 *)(lVar6 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar6 + 0x18) = 0xffffffff;
    do {
      lVar6 = FUN_00a92f18(lVar3);
      lVar7 = FUN_00a94654(lVar6 + 0x10);
      *(undefined4 *)(lVar7 + 8) = 2;
      do {
        lVar7 = FUN_00a92468(lVar6 + 0x88);
        FUN_00a7eff4(lVar7 + 0x10,"*Cutscene_Ardan_PC_Tutorial1C*");
      } while (lVar6 + 0x88 == lVar3);
      do {
        lVar7 = FUN_00a92468(lVar6 + 0xa0);
        FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1C*");
      } while (lVar6 + 0xa0 == lVar3);
    } while (lVar3 == lVar5);
  } while (lVar5 == lVar2);
  uVar4 = FUN_00a92bd8(lVar2);
  FUN_00a7edcc(uVar4,"UnlockPlayer");
  lVar3 = FUN_00a91db0(lVar2);
  uVar4 = FUN_00a923cc(lVar3 + 0x10);
  uVar8 = FUN_00e6ce7c("TUTORIAL1_OSD_AIM_A",0);
  FUN_00a7f3f8(uVar4,uVar8);
  uVar4 = FUN_00a91e00(lVar3 + 0x10);
  local_a8[0] = 1;
  local_a0 = 1;
  FUN_00a7f880(uVar4,local_a8);
  do {
    FUN_00a91e50(lVar3 + 0x28);
  } while (lVar3 + 0x28 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a9324c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar5 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 2;
  do {
    uVar4 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar4,"Tutorial1","GwenDesktop","FiveMinionsKilledWithA");
  } while (lVar3 + 0x88 == lVar2);
  lVar5 = lVar3 + 0xa0;
  do {
    lVar6 = FUN_00a92f18(lVar5);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar4 = FUN_00a92ec8(lVar6 + 0x88);
      FUN_00a85380(uVar4,"Tutorial1","GwenJoystick","FiveMinionsKilledWithA");
    } while (lVar6 + 0x88 == lVar5);
    do {
      uVar4 = FUN_00a92ec8(lVar6 + 0xa0);
      FUN_00a85380(uVar4,"Tutorial1","GwenTap","FiveMinionsKilledWithA");
    } while (lVar6 == lVar3);
  } while (lVar5 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a95eac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8ac88();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00a95efc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3fc00000;
  lVar2 = FUN_00a91db0(lVar1);
  FUN_00a92268(lVar2 + 0x10);
  lVar3 = FUN_00a92af8(lVar2 + 0x10);
  lVar2 = lVar2 + 0x28;
  *(undefined4 *)(lVar3 + 0x10) = 0xd1b8360;
  *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
  do {
    lVar3 = FUN_00a92f18(lVar2);
    lVar4 = FUN_00a945f0(lVar3 + 0x10);
    *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
    do {
      lVar4 = FUN_00a92468(lVar3 + 0x88);
      FUN_00a7f000(lVar4 + 0x10,"*Sidebar_Ardan_Tutorial1_CancelAbility*");
    } while (lVar3 + 0x88 == lVar2);
    lVar4 = lVar3 + 0xa0;
    do {
      lVar5 = FUN_00a92f18(lVar4);
      lVar6 = FUN_00a94654(lVar5 + 0x10);
      *(undefined4 *)(lVar6 + 8) = 2;
      do {
        lVar6 = FUN_00a92468(lVar5 + 0x88);
        FUN_00a7eff4(lVar6 + 0x10,"*Cutscene_Ardan_PC_Tutorial1D*");
      } while (lVar5 + 0x88 == lVar4);
      do {
        lVar6 = FUN_00a92468(lVar5 + 0xa0);
        FUN_00a7f000(lVar6 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1D*");
      } while (lVar5 == lVar3);
    } while (lVar4 == lVar2);
  } while (lVar2 == lVar1);
  uVar7 = FUN_00a92bd8(lVar1);
  FUN_00a7edcc(uVar7,"Tutorial_AbilityDetails_Done");
  return;
}

