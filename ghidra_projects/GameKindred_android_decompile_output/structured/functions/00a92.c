// functions/00a92 — 39 functions
#include "libGameKindred.h"




void FUN_00a92020(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8bf18();
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




void FUN_00a92070(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d724();
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




void FUN_00a920c0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b0c0();
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




void FUN_00a92110(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8c154();
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




void FUN_00a92160(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  uVar3 = FUN_00a91e00(lVar2 + 0x10);
  local_38[0] = 7;
  local_30 = 1;
  FUN_00a7f880(uVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a921c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  FUN_00a92268(lVar2 + 0x10);
  uVar3 = FUN_00a91e00(lVar2 + 0x10);
  local_48[0] = 7;
  local_40 = 1;
  FUN_00a7f880(uVar3,local_48);
  lVar2 = FUN_00a91b9c(param_1);
  lVar2 = FUN_00a922b8(lVar2 + 0x10);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial1H*");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a92268(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8cd9c();
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




void FUN_00a922b8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b5e4();
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




void FUN_00a92308(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar3 = FUN_00a91db0(lVar2 + 0x10);
  uVar4 = FUN_00a91e00(lVar3 + 0x10);
  local_48[0] = 10;
  local_40 = 1;
  FUN_00a7f880(uVar4,local_48);
  uVar4 = FUN_00a923cc(lVar3 + 0x10);
  uVar5 = FUN_00e6ce7c("HUD_ONBOARDING_ASSISTANT_RECALL",0);
  FUN_00a7f3f8(uVar4,uVar5);
  do {
    lVar6 = FUN_00a91c70(lVar3 + 0x28);
    *(undefined4 *)(lVar6 + 0x10) = 0x40c00000;
  } while (lVar3 + 0x28 == lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a923cc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d3ec();
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




void FUN_00a9241c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x40000000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Dragon*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a92468(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b6bc();
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




void FUN_00a924b8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8a9a0();
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




void FUN_00a92508(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_River*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a92554(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_RiverShop*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a925a0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_RiverShop*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a925ec(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Jungle*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a92638(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar2 = FUN_00a92468(lVar1 + 0x10);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Health*");
  FUN_00a924b8(lVar1 + 0x10);
  return;
}




void FUN_00a92674(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Killed*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a926c0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Items*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a9270c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Bush*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a92758(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_VainCrystal*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a927a4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Turret*");
  FUN_00a924b8(lVar1);
  return;
}




void FUN_00a927f0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_ScoutCam*");
  FUN_00a924b8(lVar1);
  return;
}




undefined8 * FUN_00a9283c(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_027d09f8;
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00a928ac(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a7ebb4(param_2,*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_00a8f260(param_1 + 8,param_2,0);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    bVar1 = iVar3 <= iVar2;
    break;
  case 2:
    bVar1 = iVar3 == iVar2;
    break;
  case 3:
    bVar1 = iVar3 != iVar2;
    break;
  case 4:
    bVar1 = iVar2 < iVar3;
    break;
  case 5:
    bVar1 = iVar2 <= iVar3;
    break;
  default:
    bVar1 = iVar3 < iVar2;
  }
  return bVar1;
}




void FUN_00a92960(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00a92a58(param_2);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a92aa8(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_00a92af8(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(undefined4 *)(lVar2 + 0x18) = 0xffffffff;
  FUN_00a92b48(lVar1);
  lVar1 = FUN_00a91ae0(param_2);
  uVar3 = FUN_00a91b30(lVar1 + 0x10);
  uVar3 = FUN_00a851d4(uVar3,"Tutorial01");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Loading");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Start");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_MoveToLocation");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_KillTheMinion");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_KillTwoMinions");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_QuickMinion");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_MinionRing");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_FightPhinn");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_GoodJob");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_MoveToLocation");
  FUN_00a851dc(uVar3,"Tutorial01_Done");
  return;
}




void FUN_00a92a58(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8dccc();
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




void FUN_00a92aa8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8c984();
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




void FUN_00a92af8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8c5c0();
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




void FUN_00a92b48(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8ca3c();
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




void FUN_00a92b98(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00a91b9c();
  lVar2 = FUN_00a91c70(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_00a92bd8(lVar1 + 0x10);
  FUN_00a7edcc(uVar3,"Done_Tutorial01_Loading");
  return;
}




void FUN_00a92bd8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b878();
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




void FUN_00a92c28(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00a92ec8(lVar1);
  FUN_00a85380(uVar2,"Tutorial1","TapToMove","BeginOpeningCutscene");
  lVar3 = FUN_00a92f18(lVar1);
  lVar4 = FUN_00a94598(lVar3 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(code **)(lVar4 + 8) = FUN_00a92f68;
  do {
    lVar4 = FUN_00a92468(lVar3 + 0x88);
    FUN_00a7eff4(lVar4 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial1A_2*");
  } while (lVar3 + 0x88 == lVar1);
  do {
    lVar4 = FUN_00a92468(lVar3 + 0xa0);
    FUN_00a7eff4(lVar4 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial1A*");
  } while (lVar3 + 0xa0 == lVar1);
  lVar4 = FUN_00a92f18(lVar1);
  lVar5 = FUN_00a945f0(lVar4 + 0x10);
  lVar3 = lVar4 + 0x88;
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    uVar2 = FUN_00a92f70(lVar3);
    uVar2 = FUN_00a7f290(uVar2,1);
    uVar6 = FUN_00e6ce7c("5V5_TUTORIAL_HOW_TO_PLAY_PHONE",0);
    FUN_00a7f298(uVar2,uVar6);
    uVar2 = FUN_00a92bd8(lVar3);
    FUN_00a7edcc(uVar2,"JoystickControls");
  } while (lVar3 == lVar1);
  lVar3 = lVar4 + 0xa0;
  do {
    lVar7 = FUN_00a92f18(lVar3);
    lVar8 = FUN_00a94654(lVar7 + 0x10);
    lVar5 = lVar7 + 0x88;
    *(undefined4 *)(lVar8 + 8) = 1;
    do {
      uVar2 = FUN_00a92f70(lVar5);
      uVar2 = FUN_00a7f290(uVar2,3);
      uVar6 = FUN_00e6ce7c("5V5_TUTORIAL_HOW_TO_PLAY_TABLET",0);
      FUN_00a7f298(uVar2,uVar6);
      uVar2 = FUN_00a92bd8(lVar5);
      FUN_00a7edcc(uVar2,"TapControls");
    } while (lVar5 == lVar3);
    do {
      lVar5 = FUN_00a92f18(lVar7 + 0xa0);
      lVar8 = FUN_00a94654(lVar5 + 0x10);
      *(undefined4 *)(lVar8 + 8) = 2;
      do {
        uVar2 = FUN_00a92bd8(lVar5 + 0x88);
        FUN_00a7edcc(uVar2,"TapControls");
      } while (lVar5 + 0x88 == lVar7 + 0xa0);
      do {
        uVar2 = FUN_00a92f70(lVar5 + 0xa0);
        uVar2 = FUN_00a7f290(uVar2,2);
        uVar6 = FUN_00e6ce7c("5V5_TUTORIAL_HOW_TO_PLAY_PHONE",0);
        FUN_00a7f298(uVar2,uVar6);
        uVar2 = FUN_00a92bd8(lVar5 + 0xa0);
        FUN_00a7edcc(uVar2,"TapControls");
      } while (lVar5 == lVar7);
    } while (lVar7 == lVar4);
  } while (lVar3 == lVar1);
  uVar2 = FUN_00a92ec8(lVar1);
  FUN_00a85380(uVar2,"Tutorial1","PoofMinions","ControlPopupLaunched");
  return;
}




void FUN_00a92ec8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8bfd0();
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




void FUN_00a92f18(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8bd3c();
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




undefined1 FUN_00a92f68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}




void FUN_00a92f70(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b930();
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




void FUN_00a92fc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00a91e00(lVar2);
  local_58[0] = 0xf;
  local_50 = 1;
  FUN_00a7f880(uVar3,local_58);
  plVar4 = (long *)FUN_00a931ac(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Tutorial_LockOn");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,FUN_00cb6cbc,0x374e8faa);
  (**(code **)(*plVar4 + 0x58))();
  uVar3 = FUN_00a923cc(lVar2);
  uVar5 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_MOVE_KOSHKA",0);
  FUN_00a7f3f8(uVar3,uVar5);
  plVar4 = (long *)FUN_00a931ac(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_GoHere_WBeam");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,FUN_00cb6a64);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,FUN_00cb6c44,0x374e8faa);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))();
  lVar2 = FUN_00a91b9c(param_1);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00a92ec8(lVar2);
  FUN_00a85380(uVar3,"Tutorial1","TapToMove","AfterOpeningCutscene");
  lVar6 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar6 + 0x10) = 0x1c;
  lVar6 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar6 + 0x10) = 0x14;
  lVar2 = FUN_00a9324c(lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 1;
  lVar2 = FUN_00a9329c(param_1);
  uVar3 = FUN_00a92ec8(lVar2 + 0x10);
  FUN_00a85380(uVar3,"Tutorial1","TapToMove","TappedToMove");
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

