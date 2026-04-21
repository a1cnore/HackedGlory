// functions/00a97 — 5 functions
#include "libGameKindred.h"




void FUN_00a9742c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = FUN_00a91b9c();
  lVar2 = FUN_00a91db0(lVar1 + 0x10);
  uVar3 = FUN_00a923cc(lVar2 + 0x10);
  uVar4 = FUN_00e6ce7c("TUTORIAL1_OSD_CLEAR_MINIONS",0);
  FUN_00a7f3f8(uVar3,uVar4);
  lVar2 = lVar2 + 0x28;
  do {
    lVar5 = FUN_00a92f18(lVar2);
    lVar6 = FUN_00a945f0(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      lVar6 = FUN_00a92468(lVar5 + 0x88);
      FUN_00a7f000(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1J*");
    } while (lVar5 + 0x88 == lVar2);
    do {
      lVar6 = FUN_00a92468(lVar5 + 0xa0);
      FUN_00a7f000(lVar6 + 0x10,"*Sidebar_Ardan_PC_Tutorial1I*");
    } while (lVar5 + 0xa0 == lVar2);
    FUN_00a91e50(lVar2);
  } while (lVar2 == lVar1 + 0x10);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar1 = FUN_00a92f18(lVar2);
  lVar5 = FUN_00a94654(lVar1 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 2;
  do {
    uVar3 = FUN_00a92ec8(lVar1 + 0x88);
    FUN_00a85380(uVar3,"Tutorial1","GwenDesktop","KilledFirstWave");
  } while (lVar1 + 0x88 == lVar2);
  lVar5 = lVar1 + 0xa0;
  do {
    lVar6 = FUN_00a92f18(lVar5);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar3 = FUN_00a92ec8(lVar6 + 0x88);
      FUN_00a85380(uVar3,"Tutorial1","GwenJoystick","KilledFirstWave");
    } while (lVar6 + 0x88 == lVar5);
    do {
      uVar3 = FUN_00a92ec8(lVar6 + 0xa0);
      FUN_00a85380(uVar3,"Tutorial1","GwenTap","KilledFirstWave");
    } while (lVar6 == lVar1);
  } while (lVar5 == lVar2);
  return;
}




void FUN_00a97620(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = FUN_00a91ae0(param_2);
  plVar2 = (long *)FUN_00a931ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_00cb6cbc,0x9ed622);
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = FUN_00a91b9c(param_1);
  lVar1 = FUN_00a91db0(lVar3 + 0x10);
  uVar4 = FUN_00a923cc(lVar1 + 0x10);
  uVar5 = FUN_00e6ce7c("TUTORIAL1_OSD_DESTROY_TURRET",0);
  FUN_00a7f3f8(uVar4,uVar5);
  lVar1 = lVar1 + 0x28;
  do {
    lVar6 = FUN_00a92f18(lVar1);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      lVar7 = FUN_00a92468(lVar6 + 0x88);
      FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1K*");
    } while (lVar6 + 0x88 == lVar1);
    do {
      lVar7 = FUN_00a92468(lVar6 + 0xa0);
      FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_PC_Tutorial1J*");
    } while (lVar6 + 0xa0 == lVar1);
    FUN_00a91e50(lVar1);
  } while (lVar1 == lVar3 + 0x10);
  lVar1 = FUN_00a9329c(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_00a92f18(lVar1);
  lVar6 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar6 + 8) = 2;
  do {
    uVar4 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar4,"Tutorial1","GwenDesktop","GwenInTurretRange");
  } while (lVar3 + 0x88 == lVar1);
  lVar6 = lVar3 + 0xa0;
  do {
    lVar7 = FUN_00a92f18(lVar6);
    lVar8 = FUN_00a945f0(lVar7 + 0x10);
    *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
    do {
      uVar4 = FUN_00a92ec8(lVar7 + 0x88);
      FUN_00a85380(uVar4,"Tutorial1","GwenJoystick","GwenInTurretRange");
    } while (lVar7 + 0x88 == lVar6);
    do {
      uVar4 = FUN_00a92ec8(lVar7 + 0xa0);
      FUN_00a85380(uVar4,"Tutorial1","GwenTap","GwenInTurretRange");
    } while (lVar7 == lVar3);
  } while (lVar6 == lVar1);
  return;
}




void FUN_00a97864(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a91c70(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f000000;
  lVar3 = FUN_00a91db0(lVar2);
  FUN_00a92268(lVar3 + 0x10);
  lVar4 = FUN_00a92af8(lVar3 + 0x10);
  lVar3 = lVar3 + 0x28;
  *(undefined4 *)(lVar4 + 0x10) = 0xd1b8360;
  *(undefined4 *)(lVar4 + 0x18) = 0xffffffff;
  do {
    lVar4 = FUN_00a92f18(lVar3);
    lVar5 = FUN_00a94654(lVar4 + 0x10);
    *(undefined4 *)(lVar5 + 8) = 2;
    do {
      lVar5 = FUN_00a92468(lVar4 + 0x88);
      FUN_00a7eff4(lVar5 + 0x10,"*Cutscene_Ardan_PC_Tutorial1K*");
    } while (lVar4 + 0x88 == lVar3);
    lVar5 = lVar4 + 0xa0;
    do {
      lVar6 = FUN_00a92f18(lVar5);
      lVar7 = FUN_00a945f0(lVar6 + 0x10);
      *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
      do {
        lVar7 = FUN_00a92468(lVar6 + 0x88);
        FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1_TurretFirstRule*");
      } while (lVar6 + 0x88 == lVar5);
      do {
        lVar7 = FUN_00a92468(lVar6 + 0xa0);
        FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1_TurretFirstRule*");
      } while (lVar6 == lVar4);
    } while (lVar5 == lVar3);
  } while (lVar3 == lVar2);
  lVar4 = FUN_00a91db0(lVar2);
  lVar3 = lVar4 + 0x10;
  plVar8 = (long *)FUN_00a931ac(lVar3);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Ping_Tutorial");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x78))(plVar8,FUN_00cb6cbc,0x32342ba8);
  (**(code **)(*plVar8 + 0x58))();
  plVar8 = (long *)FUN_00a931ac(lVar3);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_GoHere_WBeam");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))(plVar8,FUN_00cb6a64);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x80))(plVar8,FUN_00cb6c44,0x32342ba8);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x50))();
  (**(code **)(*plVar8 + 0x58))();
  lVar5 = FUN_00a93758(lVar3);
  lVar6 = FUN_00a945f0(lVar5 + 0x10);
  *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
  do {
    uVar9 = FUN_00a91e00(lVar5 + 0x88);
    local_78[0] = 0xf;
    local_70 = 1;
    FUN_00a7f880(uVar9,local_78);
  } while (lVar5 + 0x88 == lVar3);
  do {
    FUN_00a91e50(lVar4 + 0x28);
  } while (lVar4 + 0x28 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar9 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar9,"Tutorial1","GwenDesktop","RunFromTurret");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar5 = FUN_00a92f18(lVar4);
    lVar6 = FUN_00a945f0(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar9 = FUN_00a92ec8(lVar5 + 0x88);
      FUN_00a85380(uVar9,"Tutorial1","GwenJoystick","RunFromTurret");
    } while (lVar5 + 0x88 == lVar4);
    do {
      uVar9 = FUN_00a92ec8(lVar5 + 0xa0);
      FUN_00a85380(uVar9,"Tutorial1","GwenTap","RunFromTurret");
    } while (lVar5 == lVar3);
  } while (lVar4 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a97bf8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = FUN_00a91ae0(param_2);
  uVar2 = FUN_00a923cc(lVar1 + 0x10);
  uVar3 = FUN_00e6ce7c("TUTORIAL1_OSD_DESTROY_TURRET",0);
  FUN_00a7f3f8(uVar2,uVar3);
  lVar1 = FUN_00a91b9c(param_1);
  lVar1 = lVar1 + 0x10;
  lVar4 = FUN_00a92f18(lVar1);
  lVar5 = FUN_00a945f0(lVar4 + 0x10);
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    lVar5 = FUN_00a92468(lVar4 + 0x88);
    FUN_00a7f000(lVar5 + 0x10,"*Sidebar_Ardan_Tutorial1L_2*");
  } while (lVar4 + 0x88 == lVar1);
  do {
    lVar5 = FUN_00a92468(lVar4 + 0xa0);
    FUN_00a7f000(lVar5 + 0x10,"*Sidebar_Ardan_PC_Tutorial1L*");
  } while (lVar4 + 0xa0 == lVar1);
  lVar1 = FUN_00a9329c(param_1);
  lVar1 = lVar1 + 0x10;
  lVar4 = FUN_00a92f18(lVar1);
  lVar5 = FUN_00a94654(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 2;
  do {
    uVar2 = FUN_00a92ec8(lVar4 + 0x88);
    FUN_00a85380(uVar2,"Tutorial1","GwenDesktop","KillLastWave");
  } while (lVar4 + 0x88 == lVar1);
  lVar5 = lVar4 + 0xa0;
  do {
    lVar6 = FUN_00a92f18(lVar5);
    lVar7 = FUN_00a945f0(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar2 = FUN_00a92ec8(lVar6 + 0x88);
      FUN_00a85380(uVar2,"Tutorial1","GwenJoystick","KillLastWave");
    } while (lVar6 + 0x88 == lVar5);
    do {
      uVar2 = FUN_00a92ec8(lVar6 + 0xa0);
      FUN_00a85380(uVar2,"Tutorial1","GwenTap","KillLastWave");
    } while (lVar6 == lVar4);
  } while (lVar5 == lVar1);
  return;
}




void FUN_00a97dd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  plVar3 = (long *)FUN_00a931ac(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tutorial_Chevrons");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x9ed622);
  (**(code **)(*plVar3 + 0x58))();
  uVar4 = FUN_00a923cc(lVar2 + 0x10);
  uVar5 = FUN_00e6ce7c("TUTORIAL1_OSD_DESTROY_TURRET",0);
  FUN_00a7f3f8(uVar4,uVar5);
  lVar2 = FUN_00a91b9c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar6 = FUN_00a92f18(lVar2);
  lVar7 = FUN_00a945f0(lVar6 + 0x10);
  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
  do {
    lVar7 = FUN_00a92468(lVar6 + 0x88);
    FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1M*");
  } while (lVar6 + 0x88 == lVar2);
  do {
    lVar7 = FUN_00a92468(lVar6 + 0xa0);
    FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_PC_Tutorial1M*");
  } while (lVar6 + 0xa0 == lVar2);
  lVar6 = FUN_00a91db0(lVar2);
  lVar7 = FUN_00a93758(lVar6 + 0x10);
  lVar8 = FUN_00a945f0(lVar7 + 0x10);
  *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
  do {
    uVar4 = FUN_00a91e00(lVar7 + 0x88);
    local_78[0] = 0x11;
    local_70 = 1;
    FUN_00a7f880(uVar4,local_78);
  } while (lVar7 + 0x88 == lVar6 + 0x10);
  lVar7 = lVar6 + 0x28;
  do {
    lVar8 = FUN_00a92f18(lVar7);
    lVar9 = FUN_00a945f0(lVar8 + 0x10);
    *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) | 2;
    do {
      lVar9 = FUN_00a931fc(lVar8 + 0x88);
      *(undefined4 *)(lVar9 + 0x10) = 0x19;
    } while (lVar8 + 0x88 == lVar7);
    lVar9 = FUN_00a91db0(lVar7);
    FUN_00a92268(lVar9 + 0x10);
    lVar10 = FUN_00a92af8(lVar9 + 0x10);
    *(undefined4 *)(lVar10 + 0x10) = 0xd1b8360;
    lVar8 = lVar9 + 0x28;
    *(undefined4 *)(lVar10 + 0x18) = 0xffffffff;
    do {
      lVar10 = FUN_00a92f18(lVar8);
      lVar11 = FUN_00a945f0(lVar10 + 0x10);
      *(byte *)(lVar11 + 8) = *(byte *)(lVar11 + 8) | 2;
      do {
        lVar11 = FUN_00a92468(lVar10 + 0x88);
        FUN_00a7f000(lVar11 + 0x10,"*Sidebar_Ardan_Tutorial1_TurretSecondRule*");
      } while (lVar10 + 0x88 == lVar8);
      lVar11 = lVar10 + 0xa0;
      do {
        lVar12 = FUN_00a92f18(lVar11);
        lVar13 = FUN_00a94654(lVar12 + 0x10);
        *(undefined4 *)(lVar13 + 8) = 2;
        do {
          lVar13 = FUN_00a92468(lVar12 + 0x88);
          FUN_00a7eff4(lVar13 + 0x10,"*Cutscene_Ardan_PC_Tutorial1N*");
        } while (lVar12 + 0x88 == lVar11);
        do {
          lVar13 = FUN_00a92468(lVar12 + 0xa0);
          FUN_00a7f000(lVar13 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1N*");
        } while (lVar12 == lVar10);
      } while (lVar11 == lVar8);
    } while (lVar9 == lVar6);
    lVar8 = FUN_00a91db0(lVar7);
    do {
      FUN_00a91e50(lVar8 + 0x28);
    } while (lVar8 == lVar6);
  } while (lVar7 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

