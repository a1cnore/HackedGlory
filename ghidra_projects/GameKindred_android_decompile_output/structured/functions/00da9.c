// functions/00da9 — 17 functions
#include "libGameKindred.h"




void FUN_00da914c(long param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = FUN_00e6a1b8();
  if (((uVar5 & 1) != 0) && (iVar3 = FUN_00d5bad4(param_1), iVar3 == 0)) {
    uVar6 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
    bVar2 = FUN_00d55870(param_1);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar7 = FUN_00d6eb50();
    uVar4 = FUN_00d5baac(param_1);
    uVar7 = FUN_00d6eb3c(uVar7,uVar4);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0xd3,uVar6,"PlayerFirstSpawn","{ \"Team\": \"%s\", \"Actor\": \"%s\" }",pcVar1,
                 uVar7);
    return;
  }
  return;
}




void FUN_00da920c(long param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00e6a1b8();
  if (((uVar4 & 1) != 0) && ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0)) {
    uVar5 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
    bVar2 = FUN_00d55870(param_1);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar6 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_1);
    uVar6 = FUN_00d6eb3c(uVar6,uVar3);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0xe4,uVar5,"LevelUp",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Level\": %d, \"LifetimeGold\": %d }",
                 pcVar1,uVar6,param_2,(int)*(float *)(*(long *)(param_1 + 0x40) + 0x324));
  }
  return;
}




void FUN_00da92e4(float param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00e6a1b8();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00da8c28(*(undefined4 *)(param_2 + 0x260));
    bVar2 = FUN_00d55870(param_2);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar6 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_2);
    uVar6 = FUN_00d6eb3c(uVar6,uVar3);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0xf2,uVar5,param_3,"{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Amount\": %d }",
                 pcVar1,uVar6,(int)param_1);
  }
  return;
}




void FUN_00da93b0(undefined8 param_1)

{
  FUN_00da92e4(param_1,"GoldFromGoldMine");
  return;
}




void FUN_00da93bc(undefined8 param_1)

{
  FUN_00da92e4(param_1,"GoldFromTowerKill");
  return;
}




void FUN_00da93c8(undefined8 param_1)

{
  FUN_00da92e4(param_1,"GoldFromKrakenKill");
  return;
}




void FUN_00da93d4(undefined8 param_1)

{
  FUN_00da92e4(param_1,"GoldFromExecution");
  return;
}




void FUN_00da93e0(float param_1,long param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00e6a1b8();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00da8c28(*(undefined4 *)(param_2 + 0x260));
    bVar2 = FUN_00d55870(param_2);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar6 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_2);
    uVar6 = FUN_00d6eb3c(uVar6,uVar3);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x115,uVar5,"GoldFromItem",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Amount\": %d }",pcVar1,uVar6,(int)param_1
                );
  }
  return;
}




void FUN_00da94a4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00e6a1b8();
  if ((uVar5 & 1) != 0) {
    FUN_00d55794(param_1,&local_68,0);
    uVar6 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
    bVar3 = FUN_00d55870(param_1);
    pcVar1 = "Left";
    if (1 < bVar3) {
      pcVar1 = "Right";
    }
    uVar7 = FUN_00d6eb50();
    uVar4 = FUN_00d5baac(param_1);
    uVar7 = FUN_00d6eb3c(uVar7,uVar4);
    FUN_00e6a1cc((double)local_68,(double)fStack_64,(double)local_60,3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x128,uVar6,"BuyItem",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Item\": \"%s\", \"Cost\": %d, \"RemainingGold\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
                 ,pcVar1,uVar7,param_2,param_3,param_4);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da95c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00e6a1b8();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
    bVar2 = FUN_00d55870(param_1);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar6 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_1);
    uVar6 = FUN_00d6eb3c(uVar6,uVar3);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x136,uVar5,"SellItem",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Item\": \"%s\", \"Cost\": %d }",pcVar1,
                 uVar6,param_2,param_3);
  }
  return;
}




void FUN_00da9688(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00e6a1b8();
  if (((uVar5 & 1) == 0) || ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0)) goto LAB_00da9814;
  FUN_00d55794(param_1,&local_68,0);
  if (param_3 == 0) {
LAB_00da9728:
    pcVar7 = "None";
  }
  else {
    uVar6 = FUN_00d6eb50();
    uVar4 = FUN_00d5baac(param_3);
    uVar5 = FUN_00d6eb10(uVar6,uVar4);
    if ((uVar5 & 1) == 0) goto LAB_00da9728;
    uVar6 = FUN_00d6eb50();
    uVar4 = FUN_00d5baac(param_3);
    pcVar7 = (char *)FUN_00d6eb3c(uVar6,uVar4);
  }
  local_78 = CONCAT44(fStack_64,local_68);
  local_70 = local_60;
  if (param_4 == (undefined8 *)0x0) {
    if (param_3 != 0) {
      FUN_00d55794(param_3,&local_78,0);
    }
  }
  else {
    local_70 = *(float *)(param_4 + 1);
    local_78 = *param_4;
  }
  uVar6 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
  bVar3 = FUN_00d55870(param_1);
  pcVar1 = "Left";
  if (1 < bVar3) {
    pcVar1 = "Right";
  }
  uVar8 = FUN_00d6eb50();
  uVar4 = FUN_00d5baac(param_1);
  uVar8 = FUN_00d6eb3c(uVar8,uVar4);
  FUN_00e6a1cc((double)local_68,(double)fStack_64,(double)local_60,(double)(float)local_78,
               (double)local_78._4_4_,(double)local_70,3,
               "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
               ,0x163,uVar6,"UseItemAbility",
               "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
               ,pcVar1,uVar8,param_2,pcVar7);
LAB_00da9814:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da9844(long param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00e6a1b8();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
    bVar2 = FUN_00d55870(param_1);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar6 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_1);
    uVar6 = FUN_00d6eb3c(uVar6,uVar3);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x172,uVar5,"TalentEquipped",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Talent\": \"%s\", \"Level\": %d }",pcVar1
                 ,uVar6,param_2,param_3);
  }
  return;
}




void FUN_00da990c(long param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00e6a1b8();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
    bVar2 = FUN_00d55870(param_1);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar6 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_1);
    uVar6 = FUN_00d6eb3c(uVar6,uVar3);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x180,uVar5,"LearnAbility",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Level\": %d }",
                 pcVar1,uVar6,param_2,param_3);
  }
  return;
}




void FUN_00da99d4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = FUN_00e6a1b8();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00da8c28(*(undefined4 *)(param_1 + 0x260));
    bVar2 = FUN_00d55870(param_1);
    pcVar1 = "Left";
    if (1 < bVar2) {
      pcVar1 = "Right";
    }
    uVar6 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_1);
    uVar6 = FUN_00d6eb3c(uVar6,uVar3);
    uVar7 = FUN_00d6eb50();
    uVar3 = FUN_00d5baac(param_2);
    uVar7 = FUN_00d6eb3c(uVar7,uVar3);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,399,uVar5,"EarnXP",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Source\": \"%s\", \"Amount\": %d, \"SharedWith\": %d }"
                 ,pcVar1,uVar6,uVar7,param_3,param_4);
  }
  return;
}




void FUN_00da9ad0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = FUN_00e6a1b8();
  if (((((uVar6 & 1) != 0) && (param_1[5] != 0)) &&
      ((*(uint *)(param_1[5] + 0x2f4) & 0x20100001) != 0)) &&
     ((param_1[4] != 0 && ((*(uint *)(param_1[4] + 0x2f4) & 0x20101005) != 0)))) {
    fVar11 = *(float *)(param_1 + 6);
    fVar12 = *(float *)((long)param_1 + 0x4c);
    fVar13 = *(float *)(param_1 + 10);
    fVar14 = *(float *)((long)param_1 + 0x54);
    pcVar1 = "Unknown";
    if ((char *)*param_1 != (char *)0x0) {
      pcVar1 = (char *)*param_1;
    }
    iVar4 = FUN_00d5cf60();
    lVar10 = param_1[5];
    if (iVar4 != -1) {
      FUN_00d5cf60(lVar10);
      lVar10 = FUN_00d9e390();
    }
    uVar7 = FUN_00da8c28(*(undefined4 *)(lVar10 + 0x260));
    bVar3 = FUN_00d55870(param_1[5]);
    pcVar2 = "Left";
    if (1 < bVar3) {
      pcVar2 = "Right";
    }
    uVar8 = FUN_00d6eb50();
    uVar5 = FUN_00d5baac(lVar10);
    uVar8 = FUN_00d6eb3c(uVar8,uVar5);
    uVar9 = FUN_00d6eb50();
    uVar5 = FUN_00d5baac(param_1[4]);
    uVar9 = FUN_00d6eb3c(uVar9,uVar5);
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x1bb,uVar7,"DealDamage",
                 "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Target\": \"%s\", \"Source\": \"%s\", \"Damage\": %d, \"Dealt\":  %d, \"IsHero\": %d, \"TargetIsHero\": %d }"
                 ,pcVar2,uVar8,uVar9,pcVar1,(int)(fVar12 + fVar11 + fVar11 * fVar13),(int)fVar14,
                 *(uint *)(lVar10 + 0x2f4) >> 1 & 1,*(uint *)(param_1[4] + 0x2f4) >> 1 & 1);
  }
  return;
}




void FUN_00da9c84(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  float fVar13;
  
  uVar5 = FUN_00e6a1b8();
  if ((uVar5 & 1) != 0) {
    fVar13 = *(float *)((long)param_1 + 0x5c);
    pcVar1 = "Unknown";
    if ((char *)*param_1 != (char *)0x0) {
      pcVar1 = (char *)*param_1;
    }
    iVar4 = FUN_00d5cf60(param_1[5]);
    lVar9 = param_1[5];
    if (iVar4 != -1) {
      FUN_00d5cf60(lVar9);
      lVar9 = FUN_00d9e390();
    }
    lVar10 = param_1[4];
    if (lVar10 == 0) {
      pcVar6 = "Unknown";
      uVar12 = 0;
      pcVar11 = pcVar6;
    }
    else {
      pcVar6 = (char *)FUN_00d5bc2c(lVar10);
      cVar3 = FUN_00d55870(lVar10);
      pcVar11 = "Left";
      if (cVar3 != '\x01') {
        pcVar11 = "Right";
      }
      uVar12 = *(uint *)(lVar10 + 0x2f4) >> 1 & 1;
    }
    uVar7 = FUN_00da8c28(*(undefined4 *)(lVar9 + 0x260));
    uVar8 = FUN_00d5bc2c(lVar9);
    cVar3 = FUN_00d55870(lVar9);
    pcVar2 = "Left";
    if (cVar3 != '\x01') {
      pcVar2 = "Right";
    }
    FUN_00e6a1cc(3,
                 "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                 ,0x1e9,uVar7,"Vampirism",
                 "{ \"Actor\": \"%s\", \"Team\": \"%s\", \"TargetActor\": \"%s\", \"TargetTeam\": \"%s\", \"Source\": \"%s\", \"Vamp\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d }"
                 ,uVar8,pcVar2,pcVar6,pcVar11,pcVar1,(int)fVar13,*(uint *)(lVar9 + 0x2f4) >> 1 & 1,
                 uVar12);
  }
  return;
}




void FUN_00da9df4(long param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_a8 [64];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00e6a1b8();
  if ((uVar6 & 1) == 0) goto LAB_00daa114;
  uVar7 = FUN_00d6eb50();
  uVar4 = FUN_00d5baac(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_00d6eb3c(uVar7,uVar4);
  cVar3 = FUN_00d55870(*(undefined8 *)(param_1 + 0x10));
  pcVar1 = "Left";
  if (cVar3 != '\x01') {
    pcVar1 = "Right";
  }
  lVar8 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x3c));
  fVar19 = *(float *)(param_1 + 0x1c);
  fVar17 = *(float *)(param_1 + 0x20);
  fVar18 = *(float *)(param_1 + 0x18);
  fVar20 = *(float *)(param_1 + 0x2c);
  if (*(long *)(param_1 + 8) == 0) {
    pcVar10 = "Unknown";
    lVar13 = 0;
    uVar16 = 0xffffffff;
    pcVar12 = "Unknown";
LAB_00da9f9c:
    if (*(int *)(param_1 + 0x30) != -1) {
      lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
      while ((lVar15 != 0 && (*(int *)(*(long *)(lVar15 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar15 = *(long *)(lVar15 + 0x20);
      }
      lVar14 = 0;
      if (lVar8 != 0) {
        lVar14 = *(long *)(lVar8 + 0x18);
        while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_02c7bf48))) {
          lVar14 = *(long *)(lVar14 + 0x20);
        }
      }
      if ((lVar15 == 0) || (uVar6 = FUN_00d6c068(lVar15), (uVar6 & 1) == 0)) {
        if ((lVar13 == 0) ||
           (uVar6 = FUN_00d6c068(lVar13,*(undefined4 *)(param_1 + 0x30)), (uVar6 & 1) == 0)) {
          if ((lVar14 == 0) ||
             (uVar6 = FUN_00d6c068(lVar14,*(undefined4 *)(param_1 + 0x30)), (uVar6 & 1) == 0))
          goto LAB_00daa09c;
          uVar4 = *(undefined4 *)(param_1 + 0x30);
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x30);
          lVar14 = lVar13;
        }
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x30);
        lVar14 = lVar15;
      }
      puVar11 = (undefined8 *)FUN_00d6b570(lVar14,uVar4);
      uVar9 = *puVar11;
      goto LAB_00daa08c;
    }
    if (*(int *)(param_1 + 0x38) == 0xee) {
LAB_00daa09c:
      FUN_008fff20(auStack_a8,"Unknown");
    }
    else {
      FUN_008fff20(auStack_a8,"Shot_%d");
    }
  }
  else {
    uVar9 = FUN_00d6eb50();
    uVar4 = FUN_00d5baac(*(undefined8 *)(param_1 + 8));
    pcVar10 = (char *)FUN_00d6eb3c(uVar9,uVar4);
    cVar3 = FUN_00d55870(*(undefined8 *)(param_1 + 8));
    lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    pcVar12 = "Left";
    if (cVar3 != '\x01') {
      pcVar12 = "Right";
    }
    uVar16 = *(uint *)(*(long *)(param_1 + 8) + 0x2f4) >> 1 & 1;
    lVar15 = lVar13;
    if (lVar13 == 0) goto LAB_00da9f9c;
    do {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_02e3ef78) break;
      lVar15 = *(long *)(lVar15 + 0x20);
    } while (lVar15 != 0);
    do {
      if (*(int *)(*(long *)(lVar13 + 8) + 0xa4) == DAT_02c7bf48) break;
      lVar13 = *(long *)(lVar13 + 0x20);
    } while (lVar13 != 0);
    if ((lVar15 == 0) || (*(int *)(param_1 + 0x34) == -1)) goto LAB_00da9f9c;
    uVar5 = FUN_00d5359c(lVar15);
    if (uVar5 <= *(uint *)(param_1 + 0x34)) goto LAB_00daa09c;
    uVar9 = FUN_00d5392c(lVar15);
LAB_00daa08c:
    FUN_00e6a584(auStack_a8,uVar9,0x40);
  }
  uVar9 = FUN_00da8c28(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x260));
  FUN_00e6a1cc(3,
               "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
               ,0x235,uVar9,"HealTarget",
               "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"TargetActor\": \"%s\", \"TargetTeam\": \"%s\", \"Source\": \"%s\", \"Heal\": %d, \"Healed\":  %d, \"IsHero\": %d, \"TargetIsHero\": %d }"
               ,pcVar12,pcVar10,uVar7,pcVar1,auStack_a8,(int)(fVar19 + fVar18 + fVar18 * fVar17),
               (int)fVar20,uVar16,*(uint *)(*(long *)(param_1 + 0x10) + 0x2f4) >> 1 & 1);
LAB_00daa114:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

