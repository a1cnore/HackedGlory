// functions/00a96 — 6 functions
#include "libGameKindred.h"




void FUN_00a9605c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f99999a;
  lVar2 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  uVar3 = FUN_00a92bd8(lVar1);
  FUN_00a7edcc(uVar3,"IntroduceCatherine");
  lVar1 = FUN_00a9329c(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a92f18(lVar1);
  lVar4 = FUN_00a94654(lVar2 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar3 = FUN_00a92ec8(lVar2 + 0x88);
    FUN_00a85380(uVar3,"Tutorial1","GwenDesktop","LearnedB");
  } while (lVar2 + 0x88 == lVar1);
  lVar4 = lVar2 + 0xa0;
  do {
    lVar5 = FUN_00a92f18(lVar4);
    lVar6 = FUN_00a945f0(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar3 = FUN_00a92ec8(lVar5 + 0x88);
      FUN_00a85380(uVar3,"Tutorial1","GwenJoystick","LearnedB");
    } while (lVar5 + 0x88 == lVar4);
    do {
      uVar3 = FUN_00a92ec8(lVar5 + 0xa0);
      FUN_00a85380(uVar3,"Tutorial1","GwenTap","LearnedB");
    } while (lVar5 == lVar2);
  } while (lVar4 == lVar1);
  return;
}




void FUN_00a961cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a92f18(lVar1);
  lVar3 = FUN_00a94654(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    lVar3 = FUN_00a92468(lVar2 + 0x88);
    FUN_00a7eff4(lVar3 + 0x10,"*Cutscene_Ardan_PC_Tutorial1E*");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = lVar2 + 0xa0;
  do {
    lVar4 = FUN_00a92f18(lVar3);
    lVar5 = FUN_00a945f0(lVar4 + 0x10);
    *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
    do {
      lVar5 = FUN_00a92468(lVar4 + 0x88);
      FUN_00a7f000(lVar5 + 0x10,"*Sidebar_Ardan_Tutorial1D*");
    } while (lVar4 + 0x88 == lVar3);
    do {
      lVar5 = FUN_00a92468(lVar4 + 0xa0);
      FUN_00a7f000(lVar5 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1E*");
    } while (lVar4 == lVar2);
  } while (lVar3 == lVar1);
  lVar2 = FUN_00a9324c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(byte *)(lVar2 + 0x1a) = *(byte *)(lVar2 + 0x1a) | 2;
  *(byte *)(lVar2 + 0x22) = *(byte *)(lVar2 + 0x22) | 4;
  uVar6 = FUN_00a92bd8(lVar1);
  FUN_00a7edcc(uVar6,"Tutorial01_IntroduceCatherine_Done");
  return;
}




void FUN_00a96300(undefined8 param_1,undefined8 param_2)

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
  uint uVar10;
  byte *pbVar11;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  lVar2 = FUN_00a92aa8(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x16;
  lVar2 = FUN_00a91b9c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92110(lVar2);
  lVar3 = FUN_00a984b0(lVar3 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Stunned_02beb430;
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x17;
  lVar3 = FUN_00a91db0(lVar2);
  FUN_00a92268(lVar3 + 0x10);
  do {
    lVar4 = FUN_00a92110(lVar3 + 0x28);
    lVar4 = FUN_00a98418(lVar4 + 0x10);
    if (PTR_s_Ability__Gwen__B_02beaef8 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0x811c9dc5;
      if (*PTR_s_Ability__Gwen__B_02beaef8 != 0) {
        uVar9 = 0x811c9dc5;
        uVar10 = (uint)(byte)*PTR_s_Ability__Gwen__B_02beaef8;
        pbVar11 = PTR_s_Ability__Gwen__B_02beaef8;
        do {
          pbVar11 = pbVar11 + 1;
          uVar9 = (uVar9 ^ uVar10) * 0x1000193;
          uVar10 = (uint)*pbVar11;
        } while (*pbVar11 != 0);
      }
    }
    *(uint *)(lVar4 + 8) = uVar9;
    *(undefined4 *)(lVar4 + 0xc) = 1;
  } while (lVar3 + 0x28 == lVar2);
  uVar5 = FUN_00a92bd8(lVar2);
  FUN_00a7edcc(uVar5,"Tutorial01_RemoveStatueBuff");
  lVar3 = FUN_00a91db0(lVar2);
  FUN_00a92268(lVar3 + 0x10);
  lVar3 = lVar3 + 0x28;
  do {
    lVar4 = FUN_00a92f18(lVar3);
    lVar6 = FUN_00a94654(lVar4 + 0x10);
    *(undefined4 *)(lVar6 + 8) = 2;
    do {
      lVar6 = FUN_00a92468(lVar4 + 0x88);
      FUN_00a7eff4(lVar6 + 0x10,"*Cutscene_Ardan_PC_Tutorial1F*");
    } while (lVar4 + 0x88 == lVar3);
  } while (lVar3 == lVar2);
  lVar4 = FUN_00a93d90(lVar2);
  lVar3 = lVar4 + 0x10;
  FUN_00a92268(lVar3);
  uVar5 = FUN_00a91e00(lVar3);
  local_78[0] = 2;
  local_70 = 1;
  FUN_00a7f880(uVar5,local_78);
  lVar6 = FUN_00a93758(lVar3);
  lVar7 = FUN_00a945f0(lVar6 + 0x10);
  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
  do {
    uVar5 = FUN_00a923cc(lVar6 + 0x88);
    uVar8 = FUN_00e6ce7c("TUTORIAL1_OSD_RUN_B",0);
    FUN_00a7f3f8(uVar5,uVar8);
  } while (lVar6 + 0x88 == lVar3);
  do {
    uVar5 = FUN_00a923cc(lVar6 + 0xa0);
    uVar8 = FUN_00e6ce7c("TUTORIAL1_OSD_USE_B",0);
    FUN_00a7f3f8(uVar5,uVar8);
  } while (lVar6 + 0xa0 == lVar3);
  lVar3 = lVar4 + 0x28;
  do {
    lVar6 = FUN_00a9324c(lVar3);
    *(undefined4 *)(lVar6 + 0x10) = 0xf9935edd;
    *(byte *)(lVar6 + 0x20) = *(byte *)(lVar6 + 0x20) | 0x20;
    lVar6 = FUN_00a92110(lVar3);
    lVar6 = FUN_00a984b0(lVar6 + 0x10);
    *(undefined **)(lVar6 + 8) = PTR_s_Buff_Gwen_B_ActiveSpeed_02beb5c8;
    uVar5 = FUN_00a92bd8(lVar3);
    FUN_00a7edcc(uVar5,"Tutorial_AllowMovement");
    uVar5 = FUN_00a92bd8(lVar3);
    FUN_00a7edcc(uVar5,"Advance");
  } while (lVar3 == lVar2);
  lVar4 = lVar4 + 0x40;
  do {
    lVar6 = FUN_00a92f18(lVar4);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    lVar3 = lVar6 + 0x88;
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      lVar7 = FUN_00a92468(lVar3);
      FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1_UseB*");
      FUN_00a91e50(lVar3);
    } while (lVar3 == lVar4);
    do {
      lVar3 = FUN_00a92f18(lVar6 + 0xa0);
      lVar7 = FUN_00a94654(lVar3 + 0x10);
      *(undefined4 *)(lVar7 + 8) = 2;
      do {
        lVar7 = FUN_00a92468(lVar3 + 0xa0);
        FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1F*");
      } while (lVar3 == lVar6);
    } while (lVar6 + 0xa0 == lVar4);
  } while (lVar4 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar5 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar5,"Tutorial1","GwenDesktop","UsedSkedaddle");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar6 = FUN_00a92f18(lVar4);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar5 = FUN_00a92ec8(lVar6 + 0x88);
      FUN_00a85380(uVar5,"Tutorial1","GwenJoystick","UsedSkedaddle");
    } while (lVar6 + 0x88 == lVar4);
    do {
      uVar5 = FUN_00a92ec8(lVar6 + 0xa0);
      FUN_00a85380(uVar5,"Tutorial1","GwenTap","UsedSkedaddle");
    } while (lVar6 == lVar3);
  } while (lVar4 == lVar2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a967a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00a923cc(lVar2);
  uVar4 = FUN_00e6ce7c("TUTORIAL1_OSD_JOYSTICK_MOVE",0);
  FUN_00a7f3f8(uVar3,uVar4);
  plVar5 = (long *)FUN_00a931ac(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Ping_Tutorial");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,FUN_00cb6cbc,0xec9d4bb);
  (**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)FUN_00a931ac(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_GoHere_WBeam");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,FUN_00cb6a64);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))(plVar5,FUN_00cb6c44,0xec9d4bb);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  (**(code **)(*plVar5 + 0x58))();
  lVar6 = FUN_00a93758(lVar2);
  lVar7 = FUN_00a945f0(lVar6 + 0x10);
  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
  do {
    uVar3 = FUN_00a91e00(lVar6 + 0x88);
    local_78[0] = 0xf;
    local_70 = 1;
    FUN_00a7f880(uVar3,local_78);
  } while (lVar6 + 0x88 == lVar2);
  lVar2 = FUN_00a91b9c(param_1);
  lVar6 = FUN_00a92f18(lVar2 + 0x10);
  lVar7 = FUN_00a945f0(lVar6 + 0x10);
  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
  do {
    lVar7 = FUN_00a92468(lVar6 + 0x88);
    FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1_DescribeB*");
  } while (lVar6 + 0x88 == lVar2 + 0x10);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar6 = FUN_00a92f18(lVar2);
  lVar7 = FUN_00a94654(lVar6 + 0x10);
  *(undefined4 *)(lVar7 + 8) = 2;
  do {
    uVar3 = FUN_00a92ec8(lVar6 + 0x88);
    FUN_00a85380(uVar3,"Tutorial1","GwenDesktop","GwenRetreatToTurret");
  } while (lVar6 + 0x88 == lVar2);
  lVar7 = lVar6 + 0xa0;
  do {
    lVar8 = FUN_00a92f18(lVar7);
    lVar9 = FUN_00a945f0(lVar8 + 0x10);
    *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) | 2;
    do {
      uVar3 = FUN_00a92ec8(lVar8 + 0x88);
      FUN_00a85380(uVar3,"Tutorial1","GwenJoystick","GwenRetreatToTurret");
    } while (lVar8 + 0x88 == lVar7);
    do {
      uVar3 = FUN_00a92ec8(lVar8 + 0xa0);
      FUN_00a85380(uVar3,"Tutorial1","GwenTap","GwenRetreatToTurret");
    } while (lVar8 == lVar6);
  } while (lVar7 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a96a80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  lVar3 = FUN_00a92aa8(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x10) = 0x16;
  lVar2 = FUN_00a92aa8(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x17;
  lVar2 = FUN_00a91b9c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  lVar3 = FUN_00a9324c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
  *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 0x40;
  *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 0xe;
  uVar4 = FUN_00a92bd8(lVar2);
  FUN_00a7edcc(uVar4,"LevelTo6");
  lVar3 = FUN_00a91db0(lVar2);
  FUN_00a92268(lVar3 + 0x10);
  lVar5 = FUN_00a92af8(lVar3 + 0x10);
  lVar3 = lVar3 + 0x28;
  *(undefined4 *)(lVar5 + 0x10) = 0xd1b8360;
  *(undefined4 *)(lVar5 + 0x18) = 0xfff1ffff;
  do {
    lVar5 = FUN_00a92f18(lVar3);
    lVar6 = FUN_00a945f0(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      lVar6 = FUN_00a92468(lVar5 + 0x88);
      FUN_00a7f000(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1_DescribeC*");
    } while (lVar5 + 0x88 == lVar3);
    lVar6 = lVar5 + 0xa0;
    do {
      lVar7 = FUN_00a92f18(lVar6);
      lVar8 = FUN_00a94654(lVar7 + 0x10);
      *(undefined4 *)(lVar8 + 8) = 2;
      do {
        lVar8 = FUN_00a92468(lVar7 + 0x88);
        FUN_00a7eff4(lVar8 + 0x10,"*Cutscene_Ardan_PC_Tutorial1G*");
      } while (lVar7 + 0x88 == lVar6);
      do {
        lVar8 = FUN_00a92468(lVar7 + 0xa0);
        FUN_00a7f000(lVar8 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1G*");
      } while (lVar7 == lVar5);
    } while (lVar6 == lVar3);
    lVar5 = FUN_00a931fc(lVar3);
    *(undefined4 *)(lVar5 + 0x10) = 0x18;
    lVar5 = FUN_00a92110(lVar3);
    lVar5 = FUN_00a98418(lVar5 + 0x10);
    if (PTR_s_Ability__Gwen__C_02beaf00 == (undefined *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x811c9dc5;
      if (*PTR_s_Ability__Gwen__C_02beaf00 != 0) {
        uVar10 = 0x811c9dc5;
        uVar11 = (uint)(byte)*PTR_s_Ability__Gwen__C_02beaf00;
        pbVar12 = PTR_s_Ability__Gwen__C_02beaf00;
        do {
          pbVar12 = pbVar12 + 1;
          uVar10 = (uVar10 ^ uVar11) * 0x1000193;
          uVar11 = (uint)*pbVar12;
        } while (*pbVar12 != 0);
      }
    }
    *(uint *)(lVar5 + 8) = uVar10;
    *(undefined4 *)(lVar5 + 0xc) = 1;
  } while (lVar3 == lVar2);
  uVar4 = FUN_00a92bd8(lVar2);
  FUN_00a7edcc(uVar4,"AllowAttacksAndAbilities");
  lVar5 = FUN_00a93d90(lVar2);
  lVar3 = lVar5 + 0x28;
  do {
    lVar7 = FUN_00a91db0(lVar3);
    lVar6 = lVar7 + 0x10;
    FUN_00a92268(lVar6);
    lVar8 = FUN_00a92af8(lVar6);
    *(undefined4 *)(lVar8 + 0x10) = 0xca0b2205;
    *(undefined4 *)(lVar8 + 0x18) = 0xffffffbf;
    uVar4 = FUN_00a91e00(lVar6);
    local_78[0] = 3;
    local_70 = 1;
    FUN_00a7f880(uVar4,local_78);
    lVar7 = lVar7 + 0x28;
    do {
      lVar6 = FUN_00a9324c(lVar7);
      *(undefined4 *)(lVar6 + 0x10) = 0xf9935edd;
      *(byte *)(lVar6 + 0x20) = *(byte *)(lVar6 + 0x20) | 0x40;
      lVar6 = FUN_00a92110(lVar7);
      lVar6 = FUN_00a98554(lVar6 + 0x10);
      if (PTR_s_Ability__Gwen__C_02beaf00 == (undefined *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x811c9dc5;
        if (*PTR_s_Ability__Gwen__C_02beaf00 != 0) {
          uVar10 = 0x811c9dc5;
          uVar11 = (uint)(byte)*PTR_s_Ability__Gwen__C_02beaf00;
          pbVar12 = PTR_s_Ability__Gwen__C_02beaf00;
          do {
            pbVar12 = pbVar12 + 1;
            uVar10 = (uVar10 ^ uVar11) * 0x1000193;
            uVar11 = (uint)*pbVar12;
          } while (*pbVar12 != 0);
        }
      }
      *(uint *)(lVar6 + 8) = uVar10;
      *(undefined4 *)(lVar6 + 0xc) = 2;
    } while (lVar7 == lVar3);
  } while (lVar3 == lVar2);
  lVar5 = lVar5 + 0x40;
  do {
    lVar3 = FUN_00a92f18(lVar5);
    lVar6 = FUN_00a945f0(lVar3 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      lVar6 = FUN_00a92468(lVar3 + 0x88);
      FUN_00a7f000(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1G*");
    } while (lVar3 + 0x88 == lVar5);
    lVar3 = FUN_00a91db0(lVar5);
    uVar4 = FUN_00a923cc(lVar3 + 0x10);
    uVar9 = FUN_00e6ce7c("TUTORIAL1_OSD_DEFEAT_CATHERINE",0);
    FUN_00a7f3f8(uVar4,uVar9);
    do {
      FUN_00a91e50(lVar3 + 0x28);
    } while (lVar3 + 0x28 == lVar5);
  } while (lVar5 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a9324c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
  *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar5 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 2;
  do {
    uVar4 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar4,"Tutorial1","GwenDesktop","UsedUltimate");
  } while (lVar3 + 0x88 == lVar2);
  lVar5 = lVar3 + 0xa0;
  do {
    lVar6 = FUN_00a92f18(lVar5);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar4 = FUN_00a92ec8(lVar6 + 0x88);
      FUN_00a85380(uVar4,"Tutorial1","GwenJoystick","UsedUltimate");
    } while (lVar6 + 0x88 == lVar5);
    do {
      uVar4 = FUN_00a92ec8(lVar6 + 0xa0);
      FUN_00a85380(uVar4,"Tutorial1","GwenTap","UsedUltimate");
    } while (lVar6 == lVar3);
  } while (lVar5 == lVar2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a96fcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar5 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar5,"Tutorial1","GwenDesktop","CatherineDied");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar6 = FUN_00a92f18(lVar4);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar5 = FUN_00a92ec8(lVar6 + 0x88);
      FUN_00a85380(uVar5,"Tutorial1","GwenJoystick","CatherineDied");
    } while (lVar6 + 0x88 == lVar4);
    do {
      uVar5 = FUN_00a92ec8(lVar6 + 0xa0);
      FUN_00a85380(uVar5,"Tutorial1","GwenTap","CatherineDied");
    } while (lVar6 == lVar3);
  } while (lVar4 == lVar2);
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x1a;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    lVar4 = FUN_00a92468(lVar3 + 0x88);
    FUN_00a7eff4(lVar4 + 0x10,"*Cutscene_Ardan_PC_Tutorial1H*");
  } while (lVar3 + 0x88 == lVar2);
  lVar3 = FUN_00a93d90(lVar2);
  do {
    lVar4 = FUN_00a91db0();
    uVar5 = FUN_00a91e00(lVar4 + 0x10);
    local_78[0] = 7;
    local_70 = 1;
    FUN_00a7f880(uVar5,local_78);
    uVar5 = FUN_00a923cc(lVar4 + 0x10);
    uVar8 = FUN_00e6ce7c("TUTORIAL1_OSD_HEALINGFLASK",0);
    FUN_00a7f3f8(uVar5,uVar8);
    lVar4 = lVar4 + 0x28;
    do {
      lVar6 = FUN_00a9324c(lVar4);
      *(undefined4 *)(lVar6 + 0x10) = 0xf9935edd;
      *(byte *)(lVar6 + 0x20) = *(byte *)(lVar6 + 0x20) | 0x80;
      lVar6 = FUN_00a92110(lVar4);
      lVar6 = FUN_00a94a08(lVar6 + 0x10);
      if (PTR_s_Ability__Item__HealingFlask_02beaf08 == (undefined *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0x811c9dc5;
        if (*PTR_s_Ability__Item__HealingFlask_02beaf08 != 0) {
          uVar11 = 0x811c9dc5;
          uVar12 = (uint)(byte)*PTR_s_Ability__Item__HealingFlask_02beaf08;
          pbVar13 = PTR_s_Ability__Item__HealingFlask_02beaf08;
          do {
            pbVar13 = pbVar13 + 1;
            uVar11 = (uVar11 ^ uVar12) * 0x1000193;
            uVar12 = (uint)*pbVar13;
          } while (*pbVar13 != 0);
        }
      }
      *(uint *)(lVar6 + 8) = uVar11;
      lVar6 = FUN_00a92f18(lVar4);
      lVar7 = FUN_00a94654(lVar6 + 0x10);
      *(undefined4 *)(lVar7 + 8) = 2;
      do {
        uVar5 = FUN_00a92ec8(lVar6 + 0x88);
        FUN_00a85380(uVar5,"Tutorial1","GwenDesktop","UsedHealingFlask");
      } while (lVar6 + 0x88 == lVar4);
      lVar7 = lVar6 + 0xa0;
      do {
        lVar9 = FUN_00a92f18(lVar7);
        lVar10 = FUN_00a945f0(lVar9 + 0x10);
        *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 2;
        do {
          uVar5 = FUN_00a92ec8(lVar9 + 0x88);
          FUN_00a85380(uVar5,"Tutorial1","GwenJoystick","UsedHealingFlask");
        } while (lVar9 + 0x88 == lVar7);
        do {
          uVar5 = FUN_00a92ec8(lVar9 + 0xa0);
          FUN_00a85380(uVar5,"Tutorial1","GwenTap","UsedHealingFlask");
        } while (lVar9 == lVar6);
      } while (lVar7 == lVar4);
      uVar5 = FUN_00a92bd8(lVar4);
      FUN_00a7edcc(uVar5,"Tutorial_UseHealingFlask_Done");
    } while (lVar4 == lVar3 + 0x28);
  } while (lVar3 + 0x28 == lVar2);
  lVar3 = lVar3 + 0x40;
  do {
    lVar4 = FUN_00a92f18(lVar3);
    lVar6 = FUN_00a945f0(lVar4 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      lVar6 = FUN_00a92468(lVar4 + 0x88);
      FUN_00a7f000(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1H*");
    } while (lVar4 + 0x88 == lVar3);
    do {
      lVar6 = FUN_00a92f18(lVar4 + 0xa0);
      lVar7 = FUN_00a94654(lVar6 + 0x10);
      *(undefined4 *)(lVar7 + 8) = 2;
      do {
        lVar7 = FUN_00a92468(lVar6 + 0xa0);
        FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1H*");
      } while (lVar6 == lVar4);
    } while (lVar4 + 0xa0 == lVar3);
  } while (lVar3 == lVar2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

