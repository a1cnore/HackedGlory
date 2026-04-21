// functions/0093f — 8 functions
#include "libGameKindred.h"




void FUN_0093f00c(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_2,"showPopup");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_60 = "showPopup";
    local_50 = 0x100005;
    local_58 = 9;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "showPopup";
      local_50 = 0x100005;
      local_58 = 9;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
      goto LAB_0093f0bc;
    }
  }
  bVar2 = true;
LAB_0093f0bc:
  *(bool *)(param_1 + 8) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093f0ec(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_2,"talentsLevelGate");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "talentsLevelGate";
    local_50 = 0x100005;
    local_58 = 0x10;
    lVar2 = FUN_008feca4(param_2,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "talentsLevelGate";
      local_50 = 0x100005;
      local_58 = 0x10;
      puVar3 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar4 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093f1c8(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_2,"throttleAmplitude");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_60 = "throttleAmplitude";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "throttleAmplitude";
      local_50 = 0x100005;
      local_58 = 0x11;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
      goto LAB_0093f278;
    }
  }
  bVar2 = true;
LAB_0093f278:
  *(bool *)(param_1 + 8) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0093f2a8(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0092f28c();
  bVar1 = false;
  if (iVar2 != 1) {
    bVar1 = *(int *)(param_1 + 0x30) == 0;
  }
  return bVar1;
}




bool FUN_0093f2e0(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0092f28c();
  bVar1 = false;
  if (iVar2 != 1) {
    bVar1 = *(int *)(param_1 + 0x30) == 1;
  }
  return bVar1;
}




void FUN_0093f318(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "leaderboards";
    local_50 = 0x100005;
    local_58 = 0xc;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "leaderboards";
      local_50 = 0x100005;
      local_58 = 0xc;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 8) = bVar2;
  lVar3 = FUN_008fd190(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "leaderboardsAlwaysQueryOfflineFriends";
    local_50 = 0x100005;
    local_58 = 0x25;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "leaderboardsAlwaysQueryOfflineFriends";
      local_50 = 0x100005;
      local_58 = 0x25;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 9) = bVar2;
  lVar3 = FUN_008fd190(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "liveEvents";
    local_50 = 0x100005;
    local_58 = 10;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "liveEvents";
      local_50 = 0x100005;
      local_58 = 10;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 10) = bVar2;
  lVar3 = FUN_008fd190(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "hideBattlepassCallout";
    local_50 = 0x100005;
    local_58 = 0x15;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "hideBattlepassCallout";
      local_50 = 0x100005;
      local_58 = 0x15;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xb) = bVar2;
  lVar3 = FUN_008fd190(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "inGameChat";
    local_50 = 0x100005;
    local_58 = 10;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "inGameChat";
      local_50 = 0x100005;
      local_58 = 10;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xc) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093f60c(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_2,"poofMinions");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_0093f690:
    bVar2 = true;
  }
  else {
    local_60 = "poofMinions";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_0093f690;
    local_60 = "poofMinions";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x28) = bVar2;
  lVar3 = FUN_008fd190(param_2,"areYouNew2");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    uVar6 = 0;
  }
  else {
    local_60 = "areYouNew2";
    local_50 = 0x100005;
    local_58 = 10;
    lVar3 = FUN_008feca4(param_2,&local_60);
    uVar6 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "areYouNew2";
      local_50 = 0x100005;
      local_58 = 10;
      puVar4 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar6 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  lVar3 = FUN_008fd190(param_2,"abridgedTutorials");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "abridgedTutorials";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "abridgedTutorials";
      local_50 = 0x100005;
      local_58 = 0x11;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x29) = bVar2;
  lVar3 = FUN_008fd190(param_2,"tutorial01LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "tutorial01LessDialog";
    local_50 = 0x100005;
    local_58 = 0x14;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "tutorial01LessDialog";
      local_50 = 0x100005;
      local_58 = 0x14;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x2a) = bVar2;
  lVar3 = FUN_008fd190(param_2,"tutorial02LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "tutorial02LessDialog";
    local_50 = 0x100005;
    local_58 = 0x14;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "tutorial02LessDialog";
      local_50 = 0x100005;
      local_58 = 0x14;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x2b) = bVar2;
  lVar3 = FUN_008fd190(param_2,"tutorial05LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "tutorial05LessDialog";
    local_50 = 0x100005;
    local_58 = 0x14;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "tutorial05LessDialog";
      local_50 = 0x100005;
      local_58 = 0x14;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x2c) = bVar2;
  lVar3 = FUN_008fd190(param_2,"skipTutorialSteps");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    uVar6 = 0;
  }
  else {
    local_60 = "skipTutorialSteps";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    uVar6 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "skipTutorialSteps";
      local_50 = 0x100005;
      local_58 = 0x11;
      puVar4 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar6 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  lVar3 = FUN_008fd190(param_2,"showTutorialVideo");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_0093fa18:
    puVar5 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "showTutorialVideo";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_0093fa18;
    local_60 = "showTutorialVideo";
    local_50 = 0x100005;
    local_58 = 0x11;
    puVar5 = (undefined8 *)FUN_008feca4(param_2,&local_60);
    if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  FUN_008fa54c(&local_60,puVar5);
  FUN_008fce60(param_1 + 8,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar3 = FUN_008fd190(param_2,"forcePlayerInto5v5CasualPostTutorial");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "forcePlayerInto5v5CasualPostTutorial";
    local_50 = 0x100005;
    local_58 = 0x24;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "forcePlayerInto5v5CasualPostTutorial";
      local_50 = 0x100005;
      local_58 = 0x24;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x38) = bVar2;
  lVar3 = FUN_008fd190(param_2,"onboardingAssistant");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_0093fb18:
    bVar2 = true;
  }
  else {
    local_60 = "onboardingAssistant";
    local_50 = 0x100005;
    local_58 = 0x13;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_0093fb18;
    local_60 = "onboardingAssistant";
    local_50 = 0x100005;
    local_58 = 0x13;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x39) = bVar2;
  lVar3 = FUN_008fd190(param_2,"useGwenTutorialForJoystickUsers");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_60 = "useGwenTutorialForJoystickUsers";
    local_50 = 0x100005;
    local_58 = 0x1f;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "useGwenTutorialForJoystickUsers";
      local_50 = 0x100005;
      local_58 = 0x1f;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
      goto LAB_0093fbf0;
    }
  }
  bVar2 = true;
LAB_0093fbf0:
  *(bool *)(param_1 + 0x3a) = bVar2;
  lVar3 = FUN_008fd190(param_2,"controlScheme");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    uVar6 = 0;
  }
  else {
    local_60 = "controlScheme";
    local_50 = 0x100005;
    local_58 = 0xd;
    lVar3 = FUN_008feca4(param_2,&local_60);
    uVar6 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "controlScheme";
      local_50 = 0x100005;
      local_58 = 0xd;
      puVar4 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar6 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  lVar3 = FUN_009580b8();
  uVar6 = 0;
  if (0x5a9e31ee < *(int *)(lVar3 + 0x566c)) {
    lVar3 = FUN_008fd190(param_2,"playTileOrder");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      uVar6 = 0;
    }
    else {
      local_60 = "playTileOrder";
      local_50 = 0x100005;
      local_58 = 0xd;
      lVar3 = FUN_008feca4(param_2,&local_60);
      uVar6 = 0;
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
        local_60 = "playTileOrder";
        local_50 = 0x100005;
        local_58 = 0xd;
        puVar4 = (undefined4 *)FUN_008feca4(param_2,&local_60);
        uVar6 = *puVar4;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093fd38(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_2,"negativeResponseAskTime");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    uVar5 = 0;
  }
  else {
    local_60 = "negativeResponseAskTime";
    local_50 = 0x100005;
    local_58 = 0x17;
    lVar3 = FUN_008feca4(param_2,&local_60);
    uVar5 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "negativeResponseAskTime";
      local_50 = 0x100005;
      local_58 = 0x17;
      puVar4 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar5 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar5;
  lVar3 = FUN_008fd190(param_2,"showOnChestOpen");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "showOnChestOpen";
    local_50 = 0x100005;
    local_58 = 0xf;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "showOnChestOpen";
      local_50 = 0x100005;
      local_58 = 0xf;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xc) = bVar2;
  lVar3 = FUN_008fd190(param_2,"showOnSpoils");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "showOnSpoils";
    local_50 = 0x100005;
    local_58 = 0xc;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "showOnSpoils";
      local_50 = 0x100005;
      local_58 = 0xc;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xd) = bVar2;
  lVar3 = FUN_008fd190(param_2,"hardFought");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "hardFought";
    local_50 = 0x100005;
    local_58 = 10;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "hardFought";
      local_50 = 0x100005;
      local_58 = 10;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xe) = bVar2;
  lVar3 = FUN_008fd190(param_2,"unlocked1stWin");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "unlocked1stWin";
    local_50 = 0x100005;
    local_58 = 0xe;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "unlocked1stWin";
      local_50 = 0x100005;
      local_58 = 0xe;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xf) = bVar2;
  lVar3 = FUN_008fd190(param_2,"unlocked3rdWin");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "unlocked3rdWin";
    local_50 = 0x100005;
    local_58 = 0xe;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "unlocked3rdWin";
      local_50 = 0x100005;
      local_58 = 0xe;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x10) = bVar2;
  lVar3 = FUN_008fd190(param_2,"unlocked7thDayWin");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "unlocked7thDayWin";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "unlocked7thDayWin";
      local_50 = 0x100005;
      local_58 = 0x11;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x11) = bVar2;
  lVar3 = FUN_008fd190(param_2,"tier1SkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "tier1SkinUnlock";
    local_50 = 0x100005;
    local_58 = 0xf;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "tier1SkinUnlock";
      local_50 = 0x100005;
      local_58 = 0xf;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x12) = bVar2;
  lVar3 = FUN_008fd190(param_2,"tier2SkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "tier2SkinUnlock";
    local_50 = 0x100005;
    local_58 = 0xf;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "tier2SkinUnlock";
      local_50 = 0x100005;
      local_58 = 0xf;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x13) = bVar2;
  lVar3 = FUN_008fd190(param_2,"tier3SkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "tier3SkinUnlock";
    local_50 = 0x100005;
    local_58 = 0xf;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "tier3SkinUnlock";
      local_50 = 0x100005;
      local_58 = 0xf;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x14) = bVar2;
  lVar3 = FUN_008fd190(param_2,"SESkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "SESkinUnlock";
    local_50 = 0x100005;
    local_58 = 0xc;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "SESkinUnlock";
      local_50 = 0x100005;
      local_58 = 0xc;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x15) = bVar2;
  lVar3 = FUN_008fd190(param_2,"heroUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "heroUnlock";
    local_50 = 0x100005;
    local_58 = 10;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "heroUnlock";
      local_50 = 0x100005;
      local_58 = 10;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x16) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

