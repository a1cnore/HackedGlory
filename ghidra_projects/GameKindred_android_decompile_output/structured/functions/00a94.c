// functions/00a94 — 23 functions
#include "libGameKindred.h"




void FUN_00a94254(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00a91ae0(param_2);
  uVar4 = FUN_00a923cc(lVar3 + 0x10);
  uVar5 = FUN_00e6ce7c("TUTORIAL1_TOOLTIP_DEFEAT_PHINN",0);
  FUN_00a7f3f8(uVar4,uVar5);
  lVar3 = FUN_00a91b9c(param_1);
  lVar3 = lVar3 + 0x10;
  lVar6 = FUN_00a931fc(lVar3);
  *(undefined4 *)(lVar6 + 0x10) = 2;
  uVar4 = FUN_00a92ec8(lVar3);
  FUN_00a85380(uVar4,"Tutorial1","PhinnFight","CutsceneBegin");
  lVar6 = FUN_00a92f18(lVar3);
  lVar7 = FUN_00a94598(lVar6 + 0x10);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(code **)(lVar7 + 8) = FUN_00a92f68;
  lVar7 = lVar3;
  do {
    bVar2 = lVar7 == lVar3;
    lVar7 = lVar6 + 0x88;
  } while (bVar2);
  lVar6 = lVar6 + 0xa0;
  do {
    lVar7 = FUN_00a91c70(lVar6);
    *(undefined4 *)(lVar7 + 0x10) = 0x40000000;
    lVar7 = FUN_00a91db0(lVar6);
    FUN_00a92268(lVar7 + 0x10);
    do {
      lVar8 = FUN_00a92468(lVar7 + 0x28);
      FUN_00a7eff4(lVar8 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial1B*");
    } while (lVar7 + 0x28 == lVar6);
  } while (lVar6 == lVar3);
  lVar6 = FUN_00a91c70(lVar3);
  *(undefined4 *)(lVar6 + 0x10) = 0x40a00000;
  lVar6 = FUN_00a931fc(lVar3);
  *(undefined4 *)(lVar6 + 0x10) = 0x1a;
  lVar7 = FUN_00a93d90(lVar3);
  lVar6 = lVar7 + 0x28;
  do {
    lVar9 = FUN_00a91db0(lVar6);
    lVar8 = lVar9 + 0x10;
    uVar4 = FUN_00a91e00(lVar8);
    local_78[0] = 7;
    local_70 = 1;
    FUN_00a7f880(uVar4,local_78);
    lVar10 = FUN_00a92af8(lVar8);
    *(undefined4 *)(lVar10 + 0x10) = 0x9168cebf;
    *(undefined4 *)(lVar10 + 0x18) = 0xffffff7f;
    FUN_00a92268(lVar8);
    lVar9 = lVar9 + 0x28;
    do {
      lVar8 = FUN_00a9324c(lVar9);
      *(undefined4 *)(lVar8 + 0x10) = 0xf9935edd;
      *(byte *)(lVar8 + 0x20) = *(byte *)(lVar8 + 0x20) | 0x80;
      lVar8 = FUN_00a92110(lVar9);
      lVar8 = FUN_00a94a08(lVar8 + 0x10);
      *(undefined4 *)(lVar8 + 8) = 0x1b184adf;
    } while (lVar9 == lVar6);
  } while (lVar6 == lVar3);
  lVar7 = lVar7 + 0x40;
  do {
    lVar6 = FUN_00a91db0(lVar7);
    do {
      lVar8 = FUN_00a92468(lVar6 + 0x28);
      FUN_00a7f000(lVar8 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1H*");
    } while (lVar6 + 0x28 == lVar7);
  } while (lVar7 == lVar3);
  uVar4 = FUN_00a92ec8(lVar3);
  FUN_00a85380(uVar4,"Tutorial1","PhinnFight","CutsceneEnd");
  lVar3 = FUN_00a9329c(param_1);
  uVar4 = FUN_00a92ec8(lVar3 + 0x10);
  FUN_00a85380(uVar4,"Tutorial1","PhinnFight","PhinnDefeated");
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9452c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00a91b9c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_00a92468(lVar1);
  FUN_00a7f000(lVar2 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1I*");
  lVar2 = FUN_00a91c70(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  uVar3 = FUN_00a92bd8(lVar1);
  FUN_00a7edcc(uVar3,"Done_Tutorial01_GoodJob");
  return;
}




void FUN_00a94594(void)

{
  return;
}




undefined8 * FUN_00a94598(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027ce568;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 * FUN_00a945f0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027d0a20;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00a9464c(long param_1)

{
  FUN_00a1bcbc(*(undefined1 *)(param_1 + 8));
  return;
}




undefined8 * FUN_00a94654(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027d0a48;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 FUN_00a946b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2) {
    uVar3 = FUN_0092f28c();
    if ((int)uVar3 == 1) {
      return uVar3;
    }
  }
  else {
    if (iVar1 == 1) {
      uVar2 = FUN_0092eb40();
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      uVar2 = FUN_0092eb08(0);
    }
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}




byte * FUN_00a9470c(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = 0;
  pbVar2 = (byte *)(param_1 + 0x3c);
  do {
    if (*(long *)(pbVar2 + -0x34) == 0) {
      pbVar1 = pbVar2 + -0x2c;
      *(undefined ***)pbVar1 = &PTR_FUN_027d0a70;
      pbVar2[-0x1c] = 1;
      pbVar2[-0x1b] = 0;
      pbVar2[-0x1a] = 0;
      pbVar2[-0x19] = 0;
      pbVar2[-0x14] = 0;
      pbVar2[-0x13] = 0;
      pbVar2[-0x12] = 0x80;
      pbVar2[-0x11] = 0xbf;
      pbVar2[-0xc] = 1;
      pbVar2[-0xb] = 0;
      pbVar2[-10] = 0;
      pbVar2[-9] = 0;
      pbVar2[-4] = 0;
      pbVar2[-3] = 0;
      pbVar2[-2] = 0;
      pbVar2[-1] = 0;
      *pbVar2 = *pbVar2 | 7;
      *(byte **)(pbVar2 + -0x34) = pbVar1;
      return pbVar1;
    }
    uVar3 = uVar3 + 1;
    pbVar2 = pbVar2 + 0x38;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (byte *)0xbadbad11;
}




uint FUN_00a94790(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  if ((~*(byte *)(param_1 + 0x2c) & 7) != 0) {
    uVar4 = FUN_00cb6990(param_2);
  }
  FUN_00a94848(param_1 + 8,param_2,uVar4,auStack_40);
  FUN_00a8f0c0(param_1 + 0x18,param_2,0);
  bVar1 = *(byte *)(param_1 + 0x2c);
  uVar3 = FUN_00d999f8(auStack_40,*(undefined4 *)(param_1 + 0x28),uVar4,bVar1 & 1,bVar1 >> 1 & 1,
                       bVar1 >> 2 & 1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a94848(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
    FUN_00cb69a8(param_2,param_4);
    break;
  case 2:
    local_30[0] = *(undefined4 *)param_1;
    FUN_00cb69f8(param_2,local_30,param_4);
    break;
  case 3:
    local_30[0] = *(undefined4 *)param_1;
    FUN_00da2924(local_30,param_4);
    break;
  case 4:
    *param_4 = 0;
    (*(code *)*param_1)(param_2,param_4);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00a94908(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_027d0a98;
      *puVar2 = 0;
      puVar2[2] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00a94978(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00cb6a64(param_2);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar2 = FUN_00d9ecdc(lVar1,*(undefined4 *)(param_1 + 0x1c));
    }
    else {
      uVar2 = FUN_00d9ee8c();
    }
    uVar3 = FUN_00a8f0c0(param_1 + 8,param_2,0);
    FUN_00d99988(uVar2,uVar3,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}




undefined8 * FUN_00a94a08(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((long)puVar1 + 0xc) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027d0ac0;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00a94a68(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_00cb6a64(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    bVar2 = FUN_00d99d0c(lVar3,param_1 + 8);
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0xc);
  }
  return bVar1;
}




void FUN_00a94aa8(undefined8 param_1,undefined8 param_2)

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
  *(undefined4 *)(lVar2 + 0x18) = 0xff7fffff;
  FUN_00a92b48(lVar1);
  lVar1 = FUN_00a91ae0(param_2);
  uVar3 = FUN_00a91b30(lVar1 + 0x10);
  uVar3 = FUN_00a851d4(uVar3,"Tutorial01_Joystick_NavMesh");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_NavMesh01");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_NavMesh02");
  FUN_00a851dc(uVar3,"Tutorial01_Joystick_NavMesh03");
  uVar3 = FUN_00a91b30(lVar1 + 0x10);
  uVar3 = FUN_00a851d4(uVar3,"Tutorial01_Joystick");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_Loading");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_Start");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_KillTheMinions");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_KillThreeMinions");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_KillFiveMinions");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_AbilityDetails");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_LearnB");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_IntroduceCatherine");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_CatherineStunsYou");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_CatherineTurretDivesYou");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_LearnUltimate");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_UseHealingFlask");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_PushWave");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_KillTheTurret");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_RunFromTurret");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_NextWave");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_DestroyTheTurret");
  uVar3 = FUN_00a851dc(uVar3,"Tutorial01_Joystick_Recall");
  FUN_00a851dc(uVar3,"Tutorial01_Joystick_Done");
  return;
}




void FUN_00a94c3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00a91ae0(param_2);
  plVar2 = (long *)FUN_00a931ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blocker_14m");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_00cb6cbc,0x3fcc65da);
                    /* WARNING: Could not recover jumptable at 0x00a94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))();
  return;
}




void FUN_00a94c94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00a91ae0(param_2);
  lVar1 = lVar1 + 0x10;
  FUN_00a94d9c(lVar1);
  lVar2 = FUN_00a94dec(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 3;
  plVar3 = (long *)FUN_00a931ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_14m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x56c46c38);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_00a931ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x57c46dcb);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_00a931ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x5cc475aa);
                    /* WARNING: Could not recover jumptable at 0x00a94d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))();
  return;
}




void FUN_00a94d9c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8cff8();
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




void FUN_00a94dec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00a8c74c();
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




void FUN_00a94e3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00a91ae0(param_2);
  lVar1 = lVar1 + 0x10;
  FUN_00a94d9c(lVar1);
  lVar2 = FUN_00a94dec(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)FUN_00a931ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_14m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x56c46c38);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_00a931ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x57c46dcb);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_00a931ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x5cc475aa);
                    /* WARNING: Could not recover jumptable at 0x00a94f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))();
  return;
}




void FUN_00a94f40(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00a91b9c();
  lVar2 = FUN_00a91c70(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_00a92bd8(lVar1 + 0x10);
  FUN_00a7edcc(uVar3,"Done_Tutorial01_Joystick_Loading");
  return;
}




void FUN_00a94f80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00a91ae0(param_2);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00a931ac(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ping_Tutorial");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_00cb6cbc,0x9f5dcddf);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_00a931ac(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_GoHere_WBeam");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,FUN_00cb6a64);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))(plVar3,FUN_00cb6c44,0x9f5dcddf);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x58))();
  lVar4 = FUN_00a93758(lVar2);
  lVar5 = FUN_00a945f0(lVar4 + 0x10);
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    uVar6 = FUN_00a91e00(lVar4 + 0x88);
    local_78[0] = 0xf;
    local_70 = 1;
    FUN_00a7f880(uVar6,local_78);
  } while (lVar4 + 0x88 == lVar2);
  lVar2 = FUN_00a91b9c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar4 = FUN_00a9324c(lVar2);
  *(undefined4 *)(lVar4 + 0x10) = 0xf9935edd;
  *(byte *)(lVar4 + 0x22) = *(byte *)(lVar4 + 0x22) | 2;
  *(byte *)(lVar4 + 0x20) = *(byte *)(lVar4 + 0x20) | 1;
  lVar4 = FUN_00a931fc(lVar2);
  *(undefined4 *)(lVar4 + 0x10) = 0x1c;
  lVar5 = FUN_00a92f18(lVar2);
  lVar7 = FUN_00a945f0(lVar5 + 0x10);
  lVar4 = lVar5 + 0x88;
  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
  do {
    lVar7 = FUN_00a931fc(lVar4);
    *(undefined4 *)(lVar7 + 0x10) = 0x14;
    lVar7 = FUN_00a92468(lVar4);
    FUN_00a7f000(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1A*");
  } while (lVar4 == lVar2);
  lVar4 = lVar5 + 0xa0;
  do {
    lVar7 = FUN_00a92f18(lVar4);
    lVar8 = FUN_00a94654(lVar7 + 0x10);
    *(undefined4 *)(lVar8 + 8) = 2;
    do {
      lVar8 = FUN_00a92468(lVar7 + 0x88);
      FUN_00a7eff4(lVar8 + 0x10,"*Cutscene_Ardan_PC_Tutorial1A*");
    } while (lVar7 + 0x88 == lVar4);
    do {
      lVar8 = FUN_00a92468(lVar7 + 0xa0);
      FUN_00a7f000(lVar8 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1A*");
    } while (lVar7 == lVar5);
  } while (lVar4 == lVar2);
  lVar4 = FUN_00a91db0(lVar2);
  uVar6 = FUN_00a923cc(lVar4 + 0x10);
  uVar9 = FUN_00e6ce7c("TUTORIAL1_OSD_JOYSTICK_MOVE",0);
  FUN_00a7f3f8(uVar6,uVar9);
  do {
    FUN_00a91e50(lVar4 + 0x28);
  } while (lVar4 + 0x28 == lVar2);
  lVar2 = FUN_00a9329c(param_1);
  lVar2 = lVar2 + 0x10;
  lVar4 = FUN_00a92f18(lVar2);
  lVar5 = FUN_00a94654(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 2;
  do {
    uVar6 = FUN_00a92ec8(lVar4 + 0x88);
    FUN_00a85380(uVar6,"Tutorial1","GwenDesktop","FirstMoveComplete");
  } while (lVar4 + 0x88 == lVar2);
  lVar5 = lVar4 + 0xa0;
  do {
    lVar7 = FUN_00a92f18(lVar5);
    lVar8 = FUN_00a945f0(lVar7 + 0x10);
    *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
    do {
      uVar6 = FUN_00a92ec8(lVar7 + 0x88);
      FUN_00a85380(uVar6,"Tutorial1","GwenJoystick","FirstMoveComplete");
    } while (lVar7 + 0x88 == lVar5);
    do {
      uVar6 = FUN_00a92ec8(lVar7 + 0xa0);
      FUN_00a85380(uVar6,"Tutorial1","GwenTap","FirstMoveComplete");
    } while (lVar7 == lVar4);
  } while (lVar5 == lVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

