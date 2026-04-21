// functions/00a93 — 14 functions
#include "libGameKindred.h"




void FUN_00a931ac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8cbc8();
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




void FUN_00a931fc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8c09c();
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




void FUN_00a9324c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b000();
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




void FUN_00a9329c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d668();
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




void FUN_00a932ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  lVar1 = FUN_00a91ae0(param_2);
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00a9344c(lVar1);
  FUN_00a7f518(uVar2,FUN_00cb6c44,0x374e8faa);
  uVar2 = FUN_00a923cc(lVar1);
  uVar3 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_TAP_TO_MOVE",0);
  FUN_00a7f3f8(uVar2,uVar3);
  plVar4 = (long *)FUN_00a931ac(lVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_GoHere_WBeam");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,FUN_00cb6a64);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,FUN_00cb6c44,0x374e8faa);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))();
  lVar1 = FUN_00a91b9c(param_1);
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00a92ec8(lVar1);
  FUN_00a85380(uVar2,"Tutorial1","TapToMove","AfterOpeningCutscene");
  lVar5 = FUN_00a931fc(lVar1);
  *(undefined4 *)(lVar5 + 0x10) = 0x1c;
  lVar1 = FUN_00a9324c(lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xf9935edd;
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 1;
  lVar1 = FUN_00a9329c(param_1);
  uVar2 = FUN_00a92ec8(lVar1 + 0x10);
  FUN_00a85380(uVar2,"Tutorial1","TapToMove","TappedToMove");
  return;
}




void FUN_00a9344c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d0a8();
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




void FUN_00a9349c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a93708(param_2);
  lVar8 = lVar2 + 0x10;
  FUN_00a88d80(lVar2,"RangedMinion");
  plVar3 = (long *)FUN_00a931ac(lVar8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_GoHere_WBeam");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,FUN_00cb6a64);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,FUN_00cb6bc0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x58))();
  lVar4 = FUN_00a93758(lVar8);
  lVar5 = FUN_00a945f0(lVar4 + 0x10);
  lVar2 = lVar4 + 0x88;
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    uVar6 = FUN_00a91e00(lVar2);
    local_78[0] = 0x10;
    local_70 = 1;
    FUN_00a7f880(uVar6,local_78);
    uVar6 = FUN_00a923cc(lVar2);
    uVar7 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_ATTACK_BUTTON",0);
    FUN_00a7f3f8(uVar6,uVar7);
  } while (lVar2 == lVar8);
  lVar4 = lVar4 + 0xa0;
  do {
    uVar6 = FUN_00a937a8(lVar4);
    FUN_00a7f674(uVar6,FUN_00cb6b80,0);
    uVar6 = FUN_00a923cc(lVar4);
    uVar7 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_TAP_TO_ATTACK",0);
    FUN_00a7f3f8(uVar6,uVar7);
  } while (lVar4 == lVar8);
  lVar8 = FUN_00a91b9c(param_1);
  lVar8 = lVar8 + 0x10;
  uVar6 = FUN_00a92ec8(lVar8);
  FUN_00a85380(uVar6,"Tutorial1","1stMinion","1stMinionSpawned");
  lVar2 = FUN_00a92110(lVar8);
  lVar2 = FUN_00a9470c(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x18) = 0x41700000;
  *(byte *)(lVar2 + 0x2c) = *(byte *)(lVar2 + 0x2c) & 0xfa;
  *(undefined4 *)(lVar2 + 0x20) = 1;
  lVar2 = FUN_00a92f18(lVar8);
  lVar4 = FUN_00a945f0(lVar2 + 0x10);
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
  do {
    lVar4 = FUN_00a931fc(lVar2 + 0x88);
    *(undefined4 *)(lVar4 + 0x10) = 0x15;
  } while (lVar2 + 0x88 == lVar8);
  lVar8 = FUN_00a9329c(param_1);
  uVar6 = FUN_00a92ec8(lVar8 + 0x10);
  FUN_00a85380(uVar6,"Tutorial1","1stMinion","1stMinionKilled");
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a93708(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8dd98();
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




void FUN_00a93758(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8c3e4();
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




void FUN_00a937a8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8d170();
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




void FUN_00a937f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a92f18(lVar1);
  lVar3 = FUN_00a94598(lVar2 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(code **)(lVar3 + 8) = FUN_00a92f68;
  do {
    lVar3 = FUN_00a92468(lVar2 + 0x88);
    FUN_00a7f000(lVar3 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1A_2*");
  } while (lVar2 + 0x88 == lVar1);
  do {
    lVar3 = FUN_00a92468(lVar2 + 0xa0);
    FUN_00a7f000(lVar3 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1A*");
  } while (lVar2 + 0xa0 == lVar1);
  lVar2 = FUN_00a91db0(lVar1);
  uVar4 = FUN_00a923cc(lVar2 + 0x10);
  uVar5 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_KILL_TWO_MINIONS",0);
  FUN_00a7f3f8(uVar4,uVar5);
  lVar2 = lVar2 + 0x28;
  do {
    uVar4 = FUN_00a92bd8(lVar2);
    FUN_00a7edcc(uVar4,"SpawnTwoMinions");
    uVar4 = FUN_00a92ec8(lVar2);
    FUN_00a85380(uVar4,"Tutorial1","PoofMinions","PoofMinionsSpawned");
    FUN_00a91e50(lVar2);
  } while (lVar2 == lVar1);
  lVar1 = FUN_00a9329c(param_1);
  uVar4 = FUN_00a92ec8(lVar1 + 0x10);
  FUN_00a85380(uVar4,"Tutorial1","PoofMinions","PoofMinionsDefeated");
  return;
}




void FUN_00a93964(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_88 [2];
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00a91b9c();
  lVar3 = lVar3 + 0x10;
  lVar4 = FUN_00a92f18(lVar3);
  lVar5 = FUN_00a945f0(lVar4 + 0x10);
  lVar7 = lVar4 + 0x88;
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    uVar6 = FUN_00a92ec8(lVar7);
    FUN_00a85380(uVar6,"Tutorial1","PoofMinions","PoofMinionsSpawned");
    uVar6 = FUN_00a92ec8(lVar7);
    FUN_00a85380(uVar6,"Tutorial1","PoofMinions","PoofMinionsDefeated");
  } while (lVar7 == lVar3);
  lVar7 = lVar3;
  do {
    bVar2 = lVar7 == lVar3;
    lVar7 = lVar4 + 0xa0;
  } while (bVar2);
  lVar7 = FUN_00a92f18(lVar3);
  lVar4 = FUN_00a94598(lVar7 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(code **)(lVar4 + 8) = FUN_00a92f68;
  do {
    uVar6 = FUN_00a92bd8(lVar7 + 0x88);
    FUN_00a7edcc(uVar6,"SpawnQuickMinion");
  } while (lVar7 + 0x88 == lVar3);
  lVar7 = lVar7 + 0xa0;
  do {
    lVar4 = FUN_00a93d90(lVar7);
    do {
      lVar5 = FUN_00a92468(lVar4 + 0x28);
      FUN_00a7f000(lVar5 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1C*");
    } while (lVar4 + 0x28 == lVar7);
    lVar4 = lVar4 + 0x40;
    do {
      lVar5 = FUN_00a91c70(lVar4);
      *(undefined4 *)(lVar5 + 0x10) = 0x41266666;
      uVar6 = FUN_00a92bd8(lVar4);
      FUN_00a7edcc(uVar6,"SpawnQuickMinion");
    } while (lVar4 == lVar7);
  } while (lVar7 == lVar3);
  uVar6 = FUN_00a92ec8(lVar3);
  FUN_00a85380(uVar6,"Tutorial1","ChaseMinion","ChaseMinionSpawned");
  lVar4 = FUN_00a93d90(lVar3);
  lVar7 = lVar4 + 0x28;
  do {
    lVar5 = FUN_00a91c70(lVar7);
    *(undefined4 *)(lVar5 + 0x10) = 0x3f800000;
    lVar5 = FUN_00a92468(lVar7);
    FUN_00a7f000(lVar5 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1D_2*");
  } while (lVar7 == lVar3);
  lVar4 = lVar4 + 0x40;
  do {
    lVar7 = FUN_00a91db0(lVar4);
    uVar6 = FUN_00a923cc(lVar7 + 0x10);
    uVar8 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_CHASE_THE_MINION",0);
    FUN_00a7f3f8(uVar6,uVar8);
    do {
      lVar5 = FUN_00a91c70(lVar7 + 0x28);
      *(undefined4 *)(lVar5 + 0x10) = 0x40f00000;
    } while (lVar7 + 0x28 == lVar4);
    lVar7 = FUN_00a91db0(lVar4);
    uVar6 = FUN_00a923cc(lVar7 + 0x10);
    uVar8 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_TAP_TO_LEARN_POUNCY",0);
    FUN_00a7f3f8(uVar6,uVar8);
    uVar6 = FUN_00a91e00(lVar7 + 0x10);
    local_88[0] = 4;
    local_80 = 1;
    FUN_00a7f880(uVar6,local_88);
    lVar7 = lVar7 + 0x28;
    do {
      lVar5 = FUN_00a931fc(lVar7);
      *(undefined4 *)(lVar5 + 0x10) = 2;
      lVar5 = FUN_00a931fc(lVar7);
      *(undefined4 *)(lVar5 + 0x10) = 0x16;
      lVar5 = FUN_00a9324c(lVar7);
      *(undefined4 *)(lVar5 + 0x10) = 0xf9935edd;
      *(byte *)(lVar5 + 0x22) = *(byte *)(lVar5 + 0x22) | 2;
      lVar5 = FUN_00a92110(lVar7);
      lVar5 = FUN_00a94908(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = 0x1d00000002;
      *(undefined4 *)(lVar5 + 8) = 0x3f800000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
    } while (lVar7 == lVar4);
    lVar7 = FUN_00a91db0(lVar4);
    uVar6 = FUN_00a91e00(lVar7 + 0x10);
    local_88[0] = 1;
    local_80 = 1;
    FUN_00a7f880(uVar6,local_88);
    uVar6 = FUN_00a923cc(lVar7 + 0x10);
    uVar8 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_TAP_TO_USE_POUNCY",0);
    FUN_00a7f3f8(uVar6,uVar8);
    lVar7 = lVar7 + 0x28;
    do {
      uVar6 = FUN_00a92ec8(lVar7);
      FUN_00a85380(uVar6,"Tutorial1","ChaseMinion","LearnedPounce");
      FUN_00a91e50(lVar7);
    } while (lVar7 == lVar4);
  } while (lVar4 == lVar3);
  lVar3 = FUN_00a9329c(param_1);
  uVar6 = FUN_00a92ec8(lVar3 + 0x10);
  FUN_00a85380(uVar6,"Tutorial1","ChaseMinion","ChaseMinionDefeated");
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a93d90(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8b408();
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




void FUN_00a93de0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_88 [2];
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91b9c();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00a92f18();
  lVar4 = FUN_00a94598(lVar3 + 0x10);
  lVar8 = lVar3 + 0x88;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(code **)(lVar4 + 8) = FUN_00a92f68;
  do {
    uVar5 = FUN_00a92bd8(lVar8);
    FUN_00a7edcc(uVar5,"SpawnMinionRing");
    uVar5 = FUN_00a92bd8(lVar8);
    FUN_00a7edcc(uVar5,"LevelTo2");
    lVar6 = FUN_00a91db0(lVar8);
    lVar4 = lVar6 + 0x10;
    uVar5 = FUN_00a923cc(lVar4);
    uVar7 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_TAP_TO_LEARN_TWIRLY",0);
    FUN_00a7f3f8(uVar5,uVar7);
    uVar5 = FUN_00a91e00(lVar4);
    local_88[0] = 5;
    local_80 = 1;
    FUN_00a7f880(uVar5,local_88);
    lVar4 = FUN_00a92aa8(lVar4);
    *(undefined4 *)(lVar4 + 0x10) = 0x16;
    lVar6 = lVar6 + 0x28;
    do {
      uVar5 = FUN_00a92ec8(lVar6);
      FUN_00a85380(uVar5,"Tutorial1","MinionSwarm","MinionSwarmSpawned");
      lVar4 = FUN_00a931fc(lVar6);
      *(undefined4 *)(lVar4 + 0x10) = 2;
      lVar4 = FUN_00a931fc(lVar6);
      *(undefined4 *)(lVar4 + 0x10) = 0x17;
      lVar4 = FUN_00a9324c(lVar6);
      *(undefined4 *)(lVar4 + 0x10) = 0xf9935edd;
      *(byte *)(lVar4 + 0x1a) = *(byte *)(lVar4 + 0x1a) | 2;
      *(byte *)(lVar4 + 0x22) = *(byte *)(lVar4 + 0x22) | 4;
      lVar4 = FUN_00a92110(lVar6);
      lVar4 = FUN_00a94908(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = 0x2800000000;
      *(undefined4 *)(lVar4 + 8) = 0x3f800000;
      *(undefined4 *)(lVar4 + 0x10) = 1;
      lVar4 = FUN_00a92110(lVar6);
      lVar4 = FUN_00a94908(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = 0x1d00000002;
      *(undefined4 *)(lVar4 + 8) = 0x3f800000;
      *(undefined4 *)(lVar4 + 0x10) = 1;
    } while (lVar6 == lVar8);
  } while (lVar8 == lVar2);
  lVar3 = lVar3 + 0xa0;
  do {
    lVar8 = FUN_00a93d90(lVar3);
    do {
      lVar4 = FUN_00a92468(lVar8 + 0x28);
      FUN_00a7f000(lVar4 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1E*");
    } while (lVar8 + 0x28 == lVar3);
    lVar8 = lVar8 + 0x40;
    do {
      lVar4 = FUN_00a91c70(lVar8);
      *(undefined4 *)(lVar4 + 0x10) = 0x40f00000;
      uVar5 = FUN_00a92bd8(lVar8);
      FUN_00a7edcc(uVar5,"LevelTo2");
      uVar5 = FUN_00a92bd8(lVar8);
      FUN_00a7edcc(uVar5,"SpawnMinionRing");
      lVar6 = FUN_00a91db0(lVar8);
      lVar4 = lVar6 + 0x10;
      uVar5 = FUN_00a923cc(lVar4);
      uVar7 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_TAP_TO_LEARN_TWIRLY",0);
      FUN_00a7f3f8(uVar5,uVar7);
      uVar5 = FUN_00a91e00(lVar4);
      local_88[0] = 5;
      local_80 = 1;
      FUN_00a7f880(uVar5,local_88);
      lVar4 = FUN_00a92aa8(lVar4);
      lVar6 = lVar6 + 0x28;
      *(undefined4 *)(lVar4 + 0x10) = 0x16;
      do {
        lVar4 = FUN_00a931fc(lVar6);
        *(undefined4 *)(lVar4 + 0x10) = 2;
        lVar4 = FUN_00a931fc(lVar6);
        *(undefined4 *)(lVar4 + 0x10) = 0x17;
        lVar4 = FUN_00a9324c(lVar6);
        *(undefined4 *)(lVar4 + 0x10) = 0xf9935edd;
        *(byte *)(lVar4 + 0x1a) = *(byte *)(lVar4 + 0x1a) | 2;
        *(byte *)(lVar4 + 0x22) = *(byte *)(lVar4 + 0x22) | 4;
        lVar4 = FUN_00a92110(lVar6);
        lVar4 = FUN_00a94908(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x18) = 0x2800000000;
        *(undefined4 *)(lVar4 + 8) = 0x3f800000;
        *(undefined4 *)(lVar4 + 0x10) = 1;
        lVar4 = FUN_00a92110(lVar6);
        lVar4 = FUN_00a94908(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x18) = 0x1d00000002;
        *(undefined4 *)(lVar4 + 8) = 0x3f800000;
        *(undefined4 *)(lVar4 + 0x10) = 1;
      } while (lVar6 == lVar8);
    } while (lVar8 == lVar3);
  } while (lVar3 == lVar2);
  lVar8 = FUN_00a91db0(lVar2);
  uVar5 = FUN_00a91e00(lVar8 + 0x10);
  local_88[0] = 2;
  local_80 = 1;
  FUN_00a7f880(uVar5,local_88);
  uVar5 = FUN_00a923cc(lVar8 + 0x10);
  uVar7 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_TAP_TO_USE_TWIRLY",0);
  FUN_00a7f3f8(uVar5,uVar7);
  lVar8 = lVar8 + 0x28;
  do {
    uVar5 = FUN_00a92ec8(lVar8);
    FUN_00a85380(uVar5,"Tutorial1","MinionSwarm","LearnedTwirl");
    FUN_00a91e50(lVar8);
  } while (lVar8 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  uVar5 = FUN_00a92ec8(lVar2 + 0x10);
  FUN_00a85380(uVar5,"Tutorial1","MinionSwarm","MinionSwarmDefeated");
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

