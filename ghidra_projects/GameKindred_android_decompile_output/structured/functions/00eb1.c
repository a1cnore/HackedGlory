// functions/00eb1 — 6 functions
#include "libGameKindred.h"




void FUN_00eb1180(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00eb1320;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_60);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00eb1320;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  plVar4 = (long *)FUN_008feca4(param_1,&local_60);
  lVar3 = FUN_008fd190(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "success";
    local_50 = 0x100005;
    local_58 = 7;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "success";
      local_50 = 0x100005;
      local_58 = 7;
      lVar3 = FUN_008feca4(plVar4,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x25) = bVar2;
  lVar3 = FUN_008fd190(plVar4,"chestAwards");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eb12f4:
    puVar5 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eb12f4;
    local_60 = "chestAwards";
    local_50 = 0x100005;
    local_58 = 0xb;
    puVar5 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  FUN_008fa54c(&local_60,puVar5);
  FUN_008fce60(param_2 + 0x28,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
LAB_00eb1320:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb1378(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_60 = "returnValue";
      local_50 = 0x100005;
      local_58 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_60);
      lVar3 = FUN_008fd190(plVar4,"success");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        bVar2 = false;
      }
      else {
        local_60 = "success";
        local_50 = 0x100005;
        local_58 = 7;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        bVar2 = false;
        if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
          local_60 = "success";
          local_50 = 0x100005;
          local_58 = 7;
          lVar3 = FUN_008feca4(plVar4,&local_60);
          bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x25) = bVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb14c8(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = "code";
  local_60 = 0x100005;
  local_68 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_70);
  *(undefined4 *)(param_2 + 0x58) = *puVar2;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_70 = "returnValue";
    local_60 = 0x100005;
    local_68 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_70);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_70 = "returnValue";
      local_60 = 0x100005;
      local_68 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_70);
      lVar3 = FUN_008fd190(plVar4,"rewardChests");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_70 = "returnValue";
        local_60 = 0x100005;
        local_68 = 0xb;
        uVar5 = FUN_008feca4(param_1,&local_70);
        local_70 = "rewardChests";
        local_60 = 0x100005;
        local_68 = 0xc;
        lVar3 = FUN_008feca4(uVar5,&local_70);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_70 = "returnValue";
          local_60 = 0x100005;
          local_68 = 0xb;
          uVar5 = FUN_008feca4(param_1,&local_70);
          local_70 = "rewardChests";
          local_60 = 0x100005;
          local_68 = 0xc;
          plVar4 = (long *)FUN_008feca4(uVar5,&local_70);
          if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
            plVar4 = (long *)*plVar4;
          }
          FUN_008fa54c(&local_70,plVar4);
          FUN_008fce60(param_2 + 0x28,&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_5c,local_60));
          }
        }
      }
      local_70 = "returnValue";
      local_60 = 0x100005;
      local_68 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_70);
      lVar3 = FUN_008fd190(plVar4,"rewardChestAssetTypes");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_70 = "returnValue";
        local_60 = 0x100005;
        local_68 = 0xb;
        uVar5 = FUN_008feca4(param_1,&local_70);
        local_70 = "rewardChestAssetTypes";
        local_60 = 0x100005;
        local_68 = 0x15;
        lVar3 = FUN_008feca4(uVar5,&local_70);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_70 = "returnValue";
          local_60 = 0x100005;
          local_68 = 0xb;
          uVar5 = FUN_008feca4(param_1,&local_70);
          local_70 = "rewardChestAssetTypes";
          local_60 = 0x100005;
          local_68 = 0x15;
          plVar4 = (long *)FUN_008feca4(uVar5,&local_70);
          if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
            plVar4 = (long *)*plVar4;
          }
          FUN_008fa54c(&local_70,plVar4);
          FUN_008fce60(param_2 + 0x40,&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_5c,local_60));
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb1770(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if ((int)param_1[2] == 3) {
    lVar3 = FUN_008fd190(param_1,"hashedSku");
    if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
      uVar2 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb1894;
    }
    else {
      uVar2 = 0;
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb1894;
      plVar4 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
      FUN_008fa54c(local_50,plVar4);
      FUN_008fce60(param_2,local_50);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
    lVar3 = FUN_008fd190(param_1,"assetType");
    if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) != 0) {
        plVar4 = (long *)(lVar3 + 0x18);
        if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(local_50,plVar4);
        FUN_008fce60(param_2 + 0x18,local_50);
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        uVar2 = 1;
      }
    }
  }
LAB_00eb1894:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




bool FUN_00eb18bc(char *param_1,undefined4 *param_2,long param_3)

{
  bool bVar1;
  size_t sVar2;
  
  bVar1 = (*(byte *)((long)param_2 + 0x11) >> 2 & 1) != 0;
  if (bVar1) {
    sVar2 = strlen(param_1);
    FUN_008fcea8(param_3,param_1,sVar2);
    *(undefined4 *)(param_3 + 0x18) = *param_2;
  }
  return bVar1;
}




uint FUN_00eb1918(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong local_d0 [2];
  void *local_c0;
  undefined8 uStack_b8;
  ulong local_b0 [2];
  void *local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((int)param_2[2] != 3) goto LAB_00eb2098;
  lVar4 = FUN_008fd190(param_2,"id");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) {
    uVar3 = 0;
    if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
    plVar6 = (long *)(lVar4 + 0x18);
    if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
      plVar6 = (long *)*plVar6;
    }
    FUN_008fa54c(local_80,plVar6);
    FUN_008fce60(param_3,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    lVar4 = FUN_008fd190(param_2,"completed");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 8 & 1) == 0) goto LAB_00eb2098;
      *(bool *)(param_3 + 0x10c) = *(uint *)(lVar4 + 0x28) == 0x102;
    }
    lVar4 = FUN_008fd190(param_2,"redeemed");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 8 & 1) == 0) goto LAB_00eb2098;
      *(bool *)(param_3 + 0x10d) = *(uint *)(lVar4 + 0x28) == 0x102;
    }
    lVar4 = FUN_008fd190(param_2,"progressState");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(byte *)(lVar4 + 0x29) >> 2 & 1) == 0) goto LAB_00eb2098;
      *(undefined4 *)(param_3 + 0x104) = *(undefined4 *)(lVar4 + 0x18);
    }
    lVar4 = FUN_008fd190(param_2,"questType");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0x18,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"questSubType");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0x30,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"timeToComplete");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(byte *)(lVar4 + 0x29) >> 2 & 1) == 0) goto LAB_00eb2098;
      *(undefined4 *)(param_3 + 0x108) = *(undefined4 *)(lVar4 + 0x18);
    }
    lVar4 = FUN_008fd190(param_2,"title");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0x48,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"shortDesc");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0x60,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"longDesc");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0x78,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"progress");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0x90,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"buttonText");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0xa8,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"showAttention");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 8 & 1) == 0) goto LAB_00eb2098;
      *(bool *)(param_3 + 0x10f) = *(uint *)(lVar4 + 0x28) == 0x102;
    }
    lVar4 = FUN_008fd190(param_2,"rewardXp");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(byte *)(lVar4 + 0x29) >> 2 & 1) == 0) goto LAB_00eb2098;
      *(undefined4 *)(param_3 + 0xf8) = *(undefined4 *)(lVar4 + 0x18);
    }
    lVar4 = FUN_008fd190(param_2,"skipCost");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(byte *)(lVar4 + 0x29) >> 2 & 1) == 0) goto LAB_00eb2098;
      *(undefined4 *)(param_3 + 0xfc) = *(undefined4 *)(lVar4 + 0x18);
    }
    lVar4 = FUN_008fd190(param_2,"progressMax");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(byte *)(lVar4 + 0x29) >> 2 & 1) == 0) goto LAB_00eb2098;
      *(undefined4 *)(param_3 + 0x100) = *(undefined4 *)(lVar4 + 0x18);
    }
    lVar4 = FUN_008fd190(param_2,"resourceId");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
      uVar3 = 0;
      if ((param_5 & 1) == 0) goto LAB_00eb2098;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(lVar4 + 0x28) >> 0x14 & 1) == 0) goto LAB_00eb2098;
      plVar6 = (long *)(lVar4 + 0x18);
      if ((*(uint *)(lVar4 + 0x28) >> 0x16 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(local_80,plVar6);
      FUN_008fce60(param_3 + 0xc0,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    lVar4 = FUN_008fd190(param_2,"rewardChests");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) {
      uVar3 = 0;
      if (*(int *)(lVar4 + 0x28) == 4) {
        uStack_98 = 0;
        local_a0 = (void *)0x0;
        local_88 = (void *)0x0;
        uStack_90 = 0;
        local_b0[1] = 0;
        local_b0[0] = 0;
        FUN_00eb21b0(param_3 + 0xd8,*(undefined4 *)(lVar4 + 0x24),local_b0);
        if ((uStack_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        if (*(int *)(lVar4 + 0x20) == 0) {
          uVar2 = 1;
        }
        else {
          lVar8 = *(long *)(lVar4 + 0x18);
          uVar3 = 0;
          do {
            uVar2 = FUN_00eb1770(lVar8,*(long *)(param_3 + 0xe0) + (ulong)uVar3 * 0x30);
            if ((uVar2 & 1) == 0) break;
            lVar8 = lVar8 + 0x18;
            uVar3 = uVar3 + 1;
          } while (lVar8 != *(long *)(lVar4 + 0x18) + (ulong)*(uint *)(lVar4 + 0x20) * 0x18);
        }
        lVar4 = FUN_008fd190(param_2,"metadata");
        uVar3 = uVar2;
        if ((*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) &&
           (uVar3 = 0, *(int *)(lVar4 + 0x28) == 3)) {
          local_d0[1] = 0;
          local_d0[0] = 0;
          uStack_b8 = 0;
          local_c0 = (void *)0x0;
          FUN_00eb22c8(param_3 + 0xe8,*(undefined4 *)(lVar4 + 0x20),local_d0);
          if ((local_d0[0] & 1) != 0) {
            operator_delete(local_c0);
          }
          uVar3 = uVar2;
          if (*(int *)(lVar4 + 0x20) != 0 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
            puVar7 = *(undefined8 **)(lVar4 + 0x18);
            uVar2 = 0;
            do {
              puVar5 = puVar7;
              if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                puVar5 = (undefined8 *)*puVar7;
              }
              uVar3 = FUN_00eb18bc(puVar5,puVar7 + 3,*(long *)(param_3 + 0xf0) + (ulong)uVar2 * 0x20
                                  );
              if ((uVar3 & 1) == 0) break;
              puVar7 = puVar7 + 6;
              uVar2 = uVar2 + 1;
            } while (puVar7 != (undefined8 *)
                               (*(long *)(lVar4 + 0x18) + (ulong)*(uint *)(lVar4 + 0x20) * 0x30));
          }
        }
      }
      goto LAB_00eb2098;
    }
  }
  uVar3 = 0;
LAB_00eb2098:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}

