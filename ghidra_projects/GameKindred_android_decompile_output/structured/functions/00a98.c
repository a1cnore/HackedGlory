// functions/00a98 — 21 functions
#include "libGameKindred.h"




void FUN_00a98114(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
    lVar4 = FUN_00a92468(lVar3 + 0x88);
    FUN_00a7eff4(lVar4 + 0x10,"*Cutscene_Ardan_PC_Tutorial1O*");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = FUN_00a91db0(lVar2);
  lVar3 = lVar4 + 0x10;
  uVar5 = FUN_00a923cc(lVar3);
  uVar6 = FUN_00e6ce7c("TUTORIAL1_OSD_RECALL",0);
  FUN_00a7f3f8(uVar5,uVar6);
  lVar7 = FUN_00a92af8(lVar3);
  *(undefined4 *)(lVar7 + 0x10) = 0x4af62be3;
  *(undefined4 *)(lVar7 + 0x18) = 0xfffeffff;
  uVar5 = FUN_00a91e00(lVar3);
  local_78[0] = 10;
  local_70 = 1;
  FUN_00a7f880(uVar5,local_78);
  lVar4 = lVar4 + 0x28;
  do {
    lVar3 = FUN_00a931fc(lVar4);
    *(undefined4 *)(lVar3 + 0x10) = 0xb;
    lVar3 = FUN_00a9324c(lVar4);
    *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
    *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 1;
    lVar3 = FUN_00a92f18(lVar4);
    lVar7 = FUN_00a945f0(lVar3 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      lVar7 = FUN_00a92468(lVar3 + 0x88);
      FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1P*");
    } while (lVar3 + 0x88 == lVar4);
    do {
      lVar7 = FUN_00a92f18(lVar3 + 0xa0);
      lVar8 = FUN_00a94654(lVar7 + 0x10);
      *(undefined4 *)(lVar8 + 8) = 2;
      do {
        lVar8 = FUN_00a92468(lVar7 + 0xa0);
        FUN_00a7f000(lVar8 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1P*");
      } while (lVar7 == lVar3);
    } while (lVar3 + 0xa0 == lVar4);
    FUN_00a91e50(lVar4);
  } while (lVar4 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18(lVar2);
  lVar4 = FUN_00a94654(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar5 = FUN_00a92ec8(lVar3 + 0x88);
    FUN_00a85380(uVar5,"Tutorial1","GwenDesktop","UsedRecallButton");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar7 = FUN_00a92f18(lVar4);
    lVar8 = FUN_00a945f0(lVar7 + 0x10);
    *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
    do {
      uVar5 = FUN_00a92ec8(lVar7 + 0x88);
      FUN_00a85380(uVar5,"Tutorial1","GwenJoystick","UsedRecallButton");
    } while (lVar7 + 0x88 == lVar4);
    do {
      uVar5 = FUN_00a92ec8(lVar7 + 0xa0);
      FUN_00a85380(uVar5,"Tutorial1","GwenTap","UsedRecallButton");
    } while (lVar7 == lVar3);
  } while (lVar4 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a98414(void)

{
  return;
}




undefined8 * FUN_00a98418(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_027d0ae8;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00a98474(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00cb6a64(param_2);
  if (lVar1 != 0) {
    FUN_00d99c88(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




undefined8 * FUN_00a984b0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = &PTR_FUN_027d0b10;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00a98510(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_00cb6a64(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    bVar2 = FUN_00d99e94(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0x14);
  }
  return bVar1;
}




undefined8 * FUN_00a98554(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027d0b38;
      puVar1[1] = 0x600000000;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00a985b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00cb6a64(param_2);
  if (lVar1 != 0) {
    FUN_00d99f9c(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_00a985f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00a92a58(param_2);
  FUN_00a92b48(lVar1 + 0x10);
  lVar1 = FUN_00a92aa8(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_00a91ae0(param_2);
  uVar2 = FUN_00a91b30(lVar1 + 0x10);
  uVar2 = FUN_00a851d4(uVar2,"Tutorial02");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_Loading");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_Start");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_KillMinionWave");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_AttackTheTurret");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_RunFromTurret");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_NextMinionWave");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_KillTheTurret");
  FUN_00a851dc(uVar2,"Tutorial02_EndGame");
  return;
}




void FUN_00a986ac(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00a91b9c();
  lVar2 = FUN_00a91c70(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_00a92bd8(lVar1 + 0x10);
  FUN_00a7edcc(uVar3,"Done_Tutorial02_Loading");
  return;
}




void FUN_00a986ec(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00a92ec8(lVar1);
  FUN_00a85380(uVar2,"Tutorial2","Opening","CutsceneBegin");
  lVar3 = FUN_00a92468(lVar1);
  FUN_00a7eff4(lVar3 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial2A*");
  lVar3 = FUN_00a92468(lVar1);
  FUN_00a7eff4(lVar3 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial2B*");
  uVar2 = FUN_00a92ec8(lVar1);
  FUN_00a85380(uVar2,"Tutorial2","Opening","CutsceneEnd");
  lVar3 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  lVar3 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 7;
  lVar3 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x1a;
  lVar3 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x14;
  lVar3 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x15;
  lVar3 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x16;
  lVar3 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x17;
  uVar2 = FUN_00a92bd8(lVar1);
  FUN_00a7edcc(uVar2,"Done_Tutorial02_Start");
  return;
}




void FUN_00a9880c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a91db0(lVar2);
  uVar4 = FUN_00a923cc(lVar3 + 0x10);
  uVar5 = FUN_00e6ce7c("TUTORIAL2_TOOLTIP_TAP_TO_LEARN_TWIRLY",0);
  FUN_00a7f3f8(uVar4,uVar5);
  uVar4 = FUN_00a91e00(lVar3 + 0x10);
  local_78[0] = 5;
  local_70 = 1;
  uVar4 = FUN_00a7f880(uVar4,local_78);
  FUN_00a7f894(uVar4,0);
  lVar3 = lVar3 + 0x28;
  do {
    lVar6 = FUN_00a92110(lVar3);
    lVar6 = FUN_00a94908(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x18) = 0x1d00000002;
    *(undefined4 *)(lVar6 + 8) = 0x3f800000;
    *(undefined4 *)(lVar6 + 0x10) = 1;
    uVar4 = FUN_00a92ec8(lVar3);
    FUN_00a85380(uVar4,"Tutorial2","FirstWave","PlayerGainsControl");
    uVar4 = FUN_00a92bd8(lVar3);
    FUN_00a7edcc(uVar4,"Tutorial02_CancelInvincibility");
  } while (lVar3 == lVar2);
  lVar3 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x1c;
  lVar3 = FUN_00a91db0(lVar2);
  uVar4 = FUN_00a923cc(lVar3 + 0x10);
  uVar5 = FUN_00e6ce7c("TUTORIAL2_TOOLTIP_DEFEAT_THE_WAVE",0);
  FUN_00a7f3f8(uVar4,uVar5);
  do {
    FUN_00a91e50(lVar3 + 0x28);
  } while (lVar3 + 0x28 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a989b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = FUN_00a91ae0(param_2);
  plVar2 = (long *)FUN_00a931ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_00cb6cbc,0x9ed622);
  (**(code **)(*plVar2 + 0x58))();
  uVar3 = FUN_00a923cc(lVar1 + 0x10);
  uVar4 = FUN_00e6ce7c("TUTORIAL2_TOOLTIP_ATTACK_THE_TURRET",0);
  FUN_00a7f3f8(uVar3,uVar4);
  lVar1 = FUN_00a91b9c(param_1);
  lVar1 = lVar1 + 0x10;
  uVar3 = FUN_00a92ec8(lVar1);
  FUN_00a85380(uVar3,"Tutorial2","FirstWave","PlayerApproachesTurret");
  lVar5 = FUN_00a92f18(lVar1);
  lVar6 = FUN_00a94598(lVar5 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(code **)(lVar6 + 8) = FUN_00a92f68;
  do {
    lVar6 = FUN_00a92468(lVar5 + 0x88);
    FUN_00a7f000(lVar6 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2B_2*");
  } while (lVar5 + 0x88 == lVar1);
  do {
    lVar6 = FUN_00a92468(lVar5 + 0xa0);
    FUN_00a7f000(lVar6 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2B*");
  } while (lVar5 + 0xa0 == lVar1);
  lVar1 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar1 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2C*");
  return;
}




void FUN_00a98b08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00a91ae0(param_2);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00a931ac(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_00cb6cbc,0xfed70048);
  (**(code **)(*plVar2 + 0x58))();
  uVar3 = FUN_00a9344c(lVar1);
  FUN_00a7f518(uVar3,FUN_00cb6c44,0x374e8faa);
  uVar3 = FUN_00a923cc(lVar1);
  uVar4 = FUN_00e6ce7c("TUTORIAL2_TOOLTIP_RUN_FROM_TURRET",0);
  FUN_00a7f3f8(uVar3,uVar4);
  lVar1 = FUN_00a91b9c(param_1);
  uVar3 = FUN_00a92ec8(lVar1 + 0x10);
  FUN_00a85380(uVar3,"Tutorial2","FirstWave","FirstWaveDead");
  lVar1 = FUN_00a92468(lVar1 + 0x10);
  FUN_00a7f000(lVar1 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2D*");
  return;
}




void FUN_00a98bfc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00a92ec8(lVar1);
  FUN_00a85380(uVar2,"Tutorial2","SecondWave","PlayerSecondApproach");
  lVar3 = FUN_00a92f18(lVar1);
  lVar4 = FUN_00a94598(lVar3 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(code **)(lVar4 + 8) = FUN_00a92f68;
  do {
    lVar4 = FUN_00a92468(lVar3 + 0x88);
    FUN_00a7f000(lVar4 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2E_2*");
  } while (lVar3 + 0x88 == lVar1);
  do {
    lVar4 = FUN_00a92468(lVar3 + 0xa0);
    FUN_00a7f000(lVar4 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2E*");
  } while (lVar3 + 0xa0 == lVar1);
  return;
}




void FUN_00a98cc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00a91ae0(param_2);
  plVar2 = (long *)FUN_00a931ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_00cb6cbc,0x9ed622);
  (**(code **)(*plVar2 + 0x58))();
  uVar3 = FUN_00a923cc(lVar1 + 0x10);
  uVar4 = FUN_00e6ce7c("TUTORIAL2_TOOLTIP_DESTROY_THE_TURRET",0);
  FUN_00a7f3f8(uVar3,uVar4);
  return;
}




void FUN_00a98d4c(void)

{
  return;
}




void FUN_00a98d50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00a92a58(param_2);
  FUN_00a92b48(lVar1 + 0x10);
  lVar1 = FUN_00a91ae0(param_2);
  uVar2 = FUN_00a91b30(lVar1 + 0x10);
  uVar2 = FUN_00a851d4(uVar2,"Tutorial02_Joystick");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_Joystick_Loading");
  uVar2 = FUN_00a851dc(uVar2,"Tutorial02_Joystick_Start");
  FUN_00a851dc(uVar2,"Tutorial02_Joystick_Done");
  return;
}




void FUN_00a98db8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00a91b9c();
  lVar2 = FUN_00a91c70(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_00a92bd8(lVar1 + 0x10);
  FUN_00a7edcc(uVar3,"Done_Tutorial02_Joystick_Loading");
  return;
}




void FUN_00a98df8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91db0(lVar1);
  FUN_00a92268(lVar2 + 0x10);
  do {
    lVar3 = FUN_00a92468(lVar2 + 0x28);
    FUN_00a7eff4(lVar3 + 0x10,"*Cutscene_Ardan_Tutorial2Ab*");
  } while (lVar2 + 0x28 == lVar1);
  lVar2 = FUN_00a92110(lVar1);
  lVar2 = FUN_00a99010(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 5;
  *(undefined1 *)(lVar2 + 0xc) = 0;
  lVar2 = FUN_00a91db0(lVar1);
  FUN_00a92268(lVar2 + 0x10);
  lVar2 = lVar2 + 0x28;
  do {
    lVar3 = FUN_00a92110(lVar2);
    FUN_00a990b8(lVar3 + 0x10);
    lVar3 = FUN_00a92f18(lVar2);
    lVar4 = FUN_00a94654(lVar3 + 0x10);
    *(undefined4 *)(lVar4 + 8) = 2;
    do {
      uVar5 = FUN_00a92ec8(lVar3 + 0x88);
      FUN_00a85380(uVar5,"Tutorial2","GwenDesktop","BuildSelected");
    } while (lVar3 + 0x88 == lVar2);
    lVar4 = lVar3 + 0xa0;
    do {
      lVar6 = FUN_00a92f18(lVar4);
      lVar7 = FUN_00a945f0(lVar6 + 0x10);
      *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
      do {
        uVar5 = FUN_00a92ec8(lVar6 + 0x88);
        FUN_00a85380(uVar5,"Tutorial2","GwenJoystick","BuildSelected");
      } while (lVar6 + 0x88 == lVar4);
      do {
        uVar5 = FUN_00a92ec8(lVar6 + 0xa0);
        FUN_00a85380(uVar5,"Tutorial2","GwenTap","BuildSelected");
      } while (lVar6 == lVar3);
    } while (lVar4 == lVar2);
    lVar3 = FUN_00a92110(lVar2);
    lVar3 = FUN_00a99010(lVar3 + 0x10);
    *(undefined4 *)(lVar3 + 8) = 0;
    *(undefined1 *)(lVar3 + 0xc) = 0;
  } while (lVar2 == lVar1);
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x40400000;
  lVar1 = FUN_00a922b8(lVar1);
  FUN_00a7f000(lVar1 + 0x10,"*Sidebar_Ardan_Tutorial2_Path*");
  return;
}




void FUN_00a98fe8(void)

{
  long lVar1;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = FUN_00a92468(lVar1 + 0x10);
  FUN_00a7f000(lVar1 + 0x10,"*Sidebar_Ardan_Tutorial2_EndGame*");
  return;
}

