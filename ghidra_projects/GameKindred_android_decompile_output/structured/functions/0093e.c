// functions/0093e — 13 functions
#include "libGameKindred.h"




void FUN_0093e054(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027baad0;
  FUN_00941408(param_1 + 1,param_1[2]);
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0 - 1];
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_0093e0e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027bac50;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0 - 1];
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_0093e17c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  local_30 = param_1;
  FUN_00940c34(&DAT_02c7c1d0,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093e1e0(undefined8 param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  FUN_00940c34(&DAT_02c7c1d0,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093e234(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    plVar1 = DAT_02c7c1d8;
    do {
      if (*plVar1 == param_1) {
        *plVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0 - 1];
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        return;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_0093e284(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x93e288);
  (*pcVar1)();
}




void FUN_0093e288(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  lVar3 = FUN_008fd190(param_2,"dailyRewardRandomTimeOffset");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    uVar6 = 0;
  }
  else {
    local_80 = "dailyRewardRandomTimeOffset";
    local_70 = 0x100005;
    local_78 = 0x1b;
    lVar3 = FUN_008feca4(param_2,&local_80);
    uVar6 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_80 = "dailyRewardRandomTimeOffset";
      local_70 = 0x100005;
      local_78 = 0x1b;
      puVar4 = (undefined4 *)FUN_008feca4(param_2,&local_80);
      uVar6 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  lVar3 = FUN_008fd190(param_2,"dailyRewardEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_80 = "dailyRewardEnabled";
    local_70 = 0x100005;
    local_78 = 0x12;
    lVar3 = FUN_008feca4(param_2,&local_80);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_80 = "dailyRewardEnabled";
      local_70 = 0x100005;
      local_78 = 0x12;
      lVar3 = FUN_008feca4(param_2,&local_80);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x3c) = bVar2;
  lVar3 = FUN_008fd190(param_2,"tutorialEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_80 = "tutorialEnabled";
    local_70 = 0x100005;
    local_78 = 0xf;
    lVar3 = FUN_008feca4(param_2,&local_80);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_80 = "tutorialEnabled";
      local_70 = 0x100005;
      local_78 = 0xf;
      lVar3 = FUN_008feca4(param_2,&local_80);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x3d) = bVar2;
  lVar3 = FUN_008fd190(param_2,"preEloDecayWarningEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_80 = "preEloDecayWarningEnabled";
    local_70 = 0x100005;
    local_78 = 0x19;
    lVar3 = FUN_008feca4(param_2,&local_80);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_80 = "preEloDecayWarningEnabled";
      local_70 = 0x100005;
      local_78 = 0x19;
      lVar3 = FUN_008feca4(param_2,&local_80);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x3e) = bVar2;
  lVar3 = FUN_008fd190(param_2,"soundEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_80 = "soundEnabled";
    local_70 = 0x100005;
    local_78 = 0xc;
    lVar3 = FUN_008feca4(param_2,&local_80);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_80 = "soundEnabled";
      local_70 = 0x100005;
      local_78 = 0xc;
      lVar3 = FUN_008feca4(param_2,&local_80);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x3f) = bVar2;
  lVar3 = FUN_008fd190(param_2,"dailyRewardSchedule");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_80 = "dailyRewardSchedule";
    local_70 = 0x100005;
    local_78 = 0x13;
    lVar3 = FUN_008feca4(param_2,&local_80);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_80 = "dailyRewardSchedule";
      local_70 = 0x100005;
      local_78 = 0x13;
      plVar5 = (long *)FUN_008feca4(param_2,&local_80);
      uVar8 = (ulong)*(uint *)(plVar5 + 1);
      if (*(uint *)(plVar5 + 1) != 0) {
        lVar3 = 0;
        uVar9 = 0;
        do {
          if ((*(byte *)(*plVar5 + lVar3 + 0x11) >> 2 & 1) != 0) {
            local_80 = (char *)CONCAT44(local_80._4_4_,*(undefined4 *)(*plVar5 + lVar3));
            FUN_0091f584((undefined4 *)(param_1 + 8),&local_80);
            uVar8 = (ulong)*(uint *)(plVar5 + 1);
          }
          uVar9 = uVar9 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar9 < uVar8);
      }
    }
  }
  lVar3 = FUN_008fd190(param_2,"tutorialSchedule");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_80 = "tutorialSchedule";
    local_70 = 0x100005;
    local_78 = 0x10;
    lVar3 = FUN_008feca4(param_2,&local_80);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_80 = "tutorialSchedule";
      local_70 = 0x100005;
      local_78 = 0x10;
      plVar5 = (long *)FUN_008feca4(param_2,&local_80);
      uVar8 = (ulong)*(uint *)(plVar5 + 1);
      if (*(uint *)(plVar5 + 1) != 0) {
        lVar3 = 0;
        uVar9 = 0;
        do {
          if ((*(byte *)(*plVar5 + lVar3 + 0x11) >> 2 & 1) != 0) {
            local_80 = (char *)CONCAT44(local_80._4_4_,*(undefined4 *)(*plVar5 + lVar3));
            FUN_0091f584((undefined4 *)(param_1 + 0x18),&local_80);
            uVar8 = (ulong)*(uint *)(plVar5 + 1);
          }
          uVar9 = uVar9 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar9 < uVar8);
      }
    }
  }
  lVar3 = FUN_008fd190(param_2,"preEloDecayWarningSchedule");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_80 = "preEloDecayWarningSchedule";
    local_70 = 0x100005;
    local_78 = 0x1a;
    lVar3 = FUN_008feca4(param_2,&local_80);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_80 = "preEloDecayWarningSchedule";
      local_70 = 0x100005;
      local_78 = 0x1a;
      plVar5 = (long *)FUN_008feca4(param_2,&local_80);
      uVar7 = *(uint *)(plVar5 + 1);
      if (uVar7 != 0) {
        lVar3 = 0;
        uVar8 = 0;
        do {
          if ((*(byte *)(*plVar5 + lVar3 + 0x11) >> 2 & 1) != 0) {
            local_80 = (char *)CONCAT44(local_80._4_4_,*(undefined4 *)(*plVar5 + lVar3));
            FUN_00933c34((undefined4 *)(param_1 + 0x28),&local_80);
            uVar7 = *(uint *)(plVar5 + 1);
          }
          uVar8 = uVar8 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar8 < uVar7);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093e7dc(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_2,"endSeasonEpoch");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
    uVar6 = 0;
  }
  else {
    local_60 = "endSeasonEpoch";
    local_50 = 0x100005;
    local_58 = 0xe;
    lVar2 = FUN_008feca4(param_2,&local_60);
    uVar6 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 4 & 1) != 0) {
      local_60 = "endSeasonEpoch";
      local_50 = 0x100005;
      local_58 = 0xe;
      puVar3 = (undefined8 *)FUN_008feca4(param_2,&local_60);
      uVar6 = *puVar3;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar6;
  lVar2 = FUN_008fd190(param_2,"seasonIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
    uVar5 = 0;
  }
  else {
    local_60 = "seasonIndex";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar2 = FUN_008feca4(param_2,&local_60);
    uVar5 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "seasonIndex";
      local_50 = 0x100005;
      local_58 = 0xb;
      puVar4 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar5 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093e934(long param_1,long *param_2)

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
  lVar2 = FUN_008fd190(param_2,"mysteryChestRareIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "mysteryChestRareIndex";
    local_50 = 0x100005;
    local_58 = 0x15;
    lVar2 = FUN_008feca4(param_2,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "mysteryChestRareIndex";
      local_50 = 0x100005;
      local_58 = 0x15;
      puVar3 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar4 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  lVar2 = FUN_008fd190(param_2,"mysteryChestEpicIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "mysteryChestEpicIndex";
    local_50 = 0x100005;
    local_58 = 0x15;
    lVar2 = FUN_008feca4(param_2,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "mysteryChestEpicIndex";
      local_50 = 0x100005;
      local_58 = 0x15;
      puVar3 = (undefined4 *)FUN_008feca4(param_2,&local_60);
      uVar4 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093ea8c(long param_1,long *param_2)

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
  lVar2 = FUN_008fd190(param_2,"chooseABuildLevelGate");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "chooseABuildLevelGate";
    local_50 = 0x100005;
    local_58 = 0x15;
    lVar2 = FUN_008feca4(param_2,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "chooseABuildLevelGate";
      local_50 = 0x100005;
      local_58 = 0x15;
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




void FUN_0093eb68(long param_1,long *param_2)

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
  lVar3 = FUN_008fd190(param_2,"useLocalNotifications");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_60 = "useLocalNotifications";
    local_50 = 0x100005;
    local_58 = 0x15;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "useLocalNotifications";
      local_50 = 0x100005;
      local_58 = 0x15;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
      goto LAB_0093ec18;
    }
  }
  bVar2 = true;
LAB_0093ec18:
  *(bool *)(param_1 + 8) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093ec48(long param_1,long *param_2)

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
  lVar3 = FUN_008fd190(param_2,"showForThirdParty");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_0093eccc:
    bVar2 = true;
  }
  else {
    local_60 = "showForThirdParty";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_0093eccc;
    local_60 = "showForThirdParty";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar2;
  lVar3 = FUN_008fd190(param_2,"showForNotThirdParty");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_0093ed4c:
    bVar2 = true;
  }
  else {
    local_60 = "showForNotThirdParty";
    local_50 = 0x100005;
    local_58 = 0x14;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_0093ed4c;
    local_60 = "showForNotThirdParty";
    local_50 = 0x100005;
    local_58 = 0x14;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar2;
  lVar3 = FUN_008fd190(param_2,"showForDesktop");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_0093edcc:
    bVar2 = true;
  }
  else {
    local_60 = "showForDesktop";
    local_50 = 0x100005;
    local_58 = 0xe;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_0093edcc;
    local_60 = "showForDesktop";
    local_50 = 0x100005;
    local_58 = 0xe;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar2;
  lVar3 = FUN_008fd190(param_2,"showForNotDesktop");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_60 = "showForNotDesktop";
    local_50 = 0x100005;
    local_58 = 0x11;
    lVar3 = FUN_008feca4(param_2,&local_60);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "showForNotDesktop";
      local_50 = 0x100005;
      local_58 = 0x11;
      lVar3 = FUN_008feca4(param_2,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
      goto LAB_0093ee78;
    }
  }
  bVar2 = true;
LAB_0093ee78:
  *(bool *)(param_1 + 0xb) = bVar2;
  lVar3 = FUN_008fd190(param_2,"showOfferwallButton");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "showOfferwallButton";
    local_50 = 0x100005;
    local_58 = 0x13;
    lVar3 = FUN_008feca4(param_2,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "showOfferwallButton";
      local_50 = 0x100005;
      local_58 = 0x13;
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




void FUN_0093ef2c(long param_1,long *param_2)

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
      goto LAB_0093efdc;
    }
  }
  bVar2 = true;
LAB_0093efdc:
  *(bool *)(param_1 + 8) = bVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

