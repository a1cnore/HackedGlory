// functions/00ea1 — 7 functions
#include "libGameKindred.h"




void FUN_00ea1108(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = "code";
  local_50 = 0x100005;
  local_58 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_60);
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_60 = "returnValue";
      local_50 = 0x100005;
      local_58 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
      FUN_008fa54c(&local_60,plVar4);
      FUN_008fce60(param_2 + 0x28,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea122c(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = "code";
  local_50 = 0x100005;
  local_58 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_60);
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_60 = "returnValue";
      local_50 = 0x100005;
      local_58 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
      FUN_008fa54c(&local_60,plVar4);
      FUN_008fce60(param_2 + 0x28,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea1350(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = "code";
  local_50 = 0x100005;
  local_58 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_60);
  *(undefined4 *)(param_2 + 0x28) = *puVar2;
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
      lVar3 = FUN_008fd190(plVar4,"cardBoxSku");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_60 = "cardBoxSku";
        local_50 = 0x100005;
        local_58 = 10;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_60 = "cardBoxSku";
          local_50 = 0x100005;
          local_58 = 10;
          plVar5 = (long *)FUN_008feca4(plVar4,&local_60);
          if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
            plVar5 = (long *)*plVar5;
          }
          FUN_008fa54c(&local_60,plVar5);
          FUN_008fce60(param_2 + 0x30,&local_60);
          if (((ulong)local_60 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_4c,local_50));
          }
        }
      }
      lVar3 = FUN_008fd190(plVar4,"cardPack");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_60 = "cardPack";
        local_50 = 0x100005;
        local_58 = 8;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if (*(int *)(lVar3 + 0x10) == 4) {
          local_60 = "cardPack";
          local_50 = 0x100005;
          local_58 = 8;
          plVar4 = (long *)FUN_008feca4(plVar4,&local_60);
          if ((int)plVar4[1] != 0) {
            lVar3 = 0;
            uVar7 = 0;
            do {
              lVar6 = *plVar4 + lVar3;
              if ((*(byte *)(lVar6 + 0x12) >> 6 & 1) == 0) {
                lVar6 = *(long *)(*plVar4 + lVar3);
              }
              FUN_008fa54c(&local_60,lVar6);
              FUN_0096204c(param_2 + 0x48,&local_60);
              if (((ulong)local_60 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_4c,local_50));
              }
              uVar7 = uVar7 + 1;
              lVar3 = lVar3 + 0x18;
            } while (uVar7 < *(uint *)(plVar4 + 1));
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea15b0(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
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
  puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_70);
  *(undefined4 *)(param_2 + 0x5c) = *puVar3;
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_70 = "returnValue";
    local_60 = 0x100005;
    local_68 = 0xb;
    lVar4 = FUN_008feca4(param_1,&local_70);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_70 = "returnValue";
      local_60 = 0x100005;
      local_68 = 0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_70);
      lVar4 = FUN_008fd190(plVar5,"newSkin");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
        local_70 = "newSkin";
        local_60 = 0x100005;
        local_68 = 7;
        lVar4 = FUN_008feca4(plVar5,&local_70);
        if (*(int *)(lVar4 + 0x10) == 3) {
          local_70 = "newSkin";
          local_60 = 0x100005;
          local_68 = 7;
          plVar6 = (long *)FUN_008feca4(plVar5,&local_70);
          lVar4 = FUN_008fd190(plVar6,"blueprintsOwned");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
            bVar2 = false;
          }
          else {
            local_70 = "blueprintsOwned";
            local_60 = 0x100005;
            local_68 = 0xf;
            lVar4 = FUN_008feca4(plVar6,&local_70);
            bVar2 = false;
            if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
              local_70 = "blueprintsOwned";
              local_60 = 0x100005;
              local_68 = 0xf;
              lVar4 = FUN_008feca4(plVar6,&local_70);
              bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
            }
          }
          *(bool *)(param_2 + 0x59) = bVar2;
          lVar4 = FUN_008fd190(plVar6,"owned");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
            bVar2 = false;
          }
          else {
            local_70 = "owned";
            local_60 = 0x100005;
            local_68 = 5;
            lVar4 = FUN_008feca4(plVar6,&local_70);
            bVar2 = false;
            if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
              local_70 = "owned";
              local_60 = 0x100005;
              local_68 = 5;
              lVar4 = FUN_008feca4(plVar6,&local_70);
              bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
            }
          }
          *(bool *)(param_2 + 0x58) = bVar2;
          lVar4 = FUN_008fd190(plVar6,"id");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00ea187c:
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_70 = "id";
            local_60 = 0x100005;
            local_68 = 2;
            lVar4 = FUN_008feca4(plVar6,&local_70);
            if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00ea187c;
            local_70 = "id";
            local_60 = 0x100005;
            local_68 = 2;
            puVar8 = (undefined8 *)FUN_008feca4(plVar6,&local_70);
            if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
              puVar8 = (undefined8 *)*puVar8;
            }
          }
          FUN_008fa54c(&local_70,puVar8);
          FUN_008fce60(param_2 + 0x40,&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_5c,local_60));
          }
        }
      }
      lVar4 = FUN_008fd190(plVar5,"currencies");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
        local_70 = "currencies";
        local_60 = 0x100005;
        local_68 = 10;
        lVar4 = FUN_008feca4(plVar5,&local_70);
        if (*(int *)(lVar4 + 0x10) == 3) {
          local_70 = "currencies";
          local_60 = 0x100005;
          local_68 = 10;
          uVar7 = FUN_008feca4(plVar5,&local_70);
          FUN_00ea1950(uVar7,param_2 + 0x28);
        }
      }
      goto LAB_00ea1774;
    }
  }
  *(undefined4 *)(param_2 + 0x5c) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea1774:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea1950(long *param_1,undefined4 *param_2)

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
  lVar2 = FUN_008fd190(param_1,"gold");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "gold";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "gold";
      local_50 = 0x100005;
      local_58 = 4;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  *param_2 = uVar4;
  lVar2 = FUN_008fd190(param_1,"silver");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "silver";
    local_50 = 0x100005;
    local_58 = 6;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "silver";
      local_50 = 0x100005;
      local_58 = 6;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[1] = uVar4;
  lVar2 = FUN_008fd190(param_1,"essence");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "essence";
    local_50 = 0x100005;
    local_58 = 7;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "essence";
      local_50 = 0x100005;
      local_58 = 7;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[2] = uVar4;
  lVar2 = FUN_008fd190(param_1,"opal");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "opal";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "opal";
      local_50 = 0x100005;
      local_58 = 4;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[3] = uVar4;
  lVar2 = FUN_008fd190(param_1,"seasonal_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "seasonal_key";
    local_50 = 0x100005;
    local_58 = 0xc;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "seasonal_key";
      local_50 = 0x100005;
      local_58 = 0xc;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[4] = uVar4;
  lVar2 = FUN_008fd190(param_1,"epic_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar4 = 0;
  }
  else {
    local_60 = "epic_key";
    local_50 = 0x100005;
    local_58 = 8;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "epic_key";
      local_50 = 0x100005;
      local_58 = 8;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar4 = *puVar3;
    }
  }
  param_2[5] = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea1c94(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = "code";
  local_50 = 0x100005;
  local_58 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_60);
  *(undefined4 *)(param_2 + 0x30) = *puVar2;
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
      lVar3 = FUN_008fd190(plVar4,"state");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar5 = 0;
      }
      else {
        local_60 = "state";
        local_50 = 0x100005;
        local_58 = 5;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar5 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "state";
          local_50 = 0x100005;
          local_58 = 5;
          puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar5 = *puVar2;
        }
      }
      *(undefined4 *)(param_2 + 0x28) = uVar5;
      lVar3 = FUN_008fd190(plVar4,"clientMode");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar5 = 0;
      }
      else {
        local_60 = "clientMode";
        local_50 = 0x100005;
        local_58 = 10;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        uVar5 = 0;
        if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
          local_60 = "clientMode";
          local_50 = 0x100005;
          local_58 = 10;
          puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
          uVar5 = *puVar2;
        }
      }
      *(undefined4 *)(param_2 + 0x2c) = uVar5;
      goto LAB_00ea1e68;
    }
  }
  *(undefined4 *)(param_2 + 0x30) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea1e68:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea1e94(long *param_1,long param_2)

{
  long *plVar1;
  char **ppcVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  char **ppcVar14;
  byte *pbVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  undefined4 uVar21;
  int iVar22;
  ulong uVar23;
  double dVar24;
  double dVar25;
  byte local_270 [8];
  ulong local_268;
  void *local_260;
  int local_254;
  char *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  ulong local_238;
  undefined8 local_230;
  void *pvStack_228;
  undefined8 local_220;
  void *local_210;
  byte local_208 [16];
  void *local_1f8;
  byte local_1f0 [16];
  void *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  char *local_98;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  local_1c0 = "code";
  local_1b0 = 0x100005;
  local_1b8 = 4;
  puVar6 = (undefined4 *)FUN_008feca4(param_1,&local_1c0);
  *(undefined4 *)(param_2 + 0x240) = *puVar6;
  puVar6 = (undefined4 *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != 0) {
    *puVar6 = 0;
  }
  FUN_00951478(param_2 + 0x58,0);
  FUN_0095132c(param_2 + 0x38,0);
  FUN_009512b0(param_2 + 0x28,0);
  lVar7 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar7) {
    local_1c0 = "returnValue";
    local_1b0 = 0x100005;
    local_1b8 = 0xb;
    lVar7 = FUN_008feca4(param_1,&local_1c0);
    if (*(int *)(lVar7 + 0x10) == 3) {
      local_1c0 = "returnValue";
      local_1b0 = 0x100005;
      local_1b8 = 0xb;
      plVar8 = (long *)FUN_008feca4(param_1,&local_1c0);
      FUN_00964684(&local_1c0);
      lVar7 = FUN_008fd190(plVar8,"handle");
      if ((((*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) ||
           (lVar7 = FUN_008fd190(plVar8,"skillTier"),
           *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7)) ||
          (lVar7 = FUN_008fd190(plVar8,"completed"),
          *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7)) ||
         ((lVar7 = FUN_008fd190(plVar8,&DAT_01b964d3),
          *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7 ||
          (lVar7 = FUN_008fd190(plVar8,"level"),
          *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7)))) {
        *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
        FUN_00e83324(0xfffffffa);
      }
      else {
        lVar7 = FUN_008fd190(plVar8,"handle");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
LAB_00ea20d0:
          puVar12 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_250 = "handle";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 6;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_00ea20d0;
          local_250 = "handle";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 6;
          puVar12 = (undefined8 *)FUN_008feca4(plVar8,&local_250);
          if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
            puVar12 = (undefined8 *)*puVar12;
          }
        }
        FUN_00e705a0(param_2 + 0x80,puVar12);
        lVar7 = FUN_008fd190(plVar8,"completed");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "completed";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 9;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "completed";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 9;
            puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x120) = uVar21;
        lVar7 = FUN_008fd190(plVar8,&DAT_01b964d3);
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "wins";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 4;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "wins";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 4;
            puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x124) = uVar21;
        lVar7 = FUN_008fd190(plVar8,"level");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "level";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 5;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "level";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 5;
            puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x148) = uVar21;
      }
      lVar7 = FUN_008fd190(plVar8,"completed_non_tutorial");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
LAB_00ea21c8:
        uVar21 = 1;
      }
      else {
        local_250 = "completed_non_tutorial";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x16;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) goto LAB_00ea21c8;
        local_250 = "completed_non_tutorial";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x16;
        puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
        uVar21 = *puVar9;
      }
      *(undefined4 *)(param_2 + 0x11c) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"last_login");
      dVar24 = -1.0;
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "last_login";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 10;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
          local_250 = "last_login";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 10;
          FUN_008feca4(plVar8,&local_250);
          dVar24 = (double)FUN_008fc0f0();
        }
      }
      *(long *)(param_2 + 0x100) = (long)dVar24;
      lVar7 = FUN_008fd190(plVar8,"wins_aral");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "wins_aral";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 9;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "wins_aral";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 9;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x128) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"wins_blitz");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "wins_blitz";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 10;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "wins_blitz";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 10;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 300) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"wins_casual");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "wins_casual";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xb;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "wins_casual";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xb;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x130) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"wins_ranked");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "wins_ranked";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xb;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "wins_ranked";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xb;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x134) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"winStreak");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "winStreak";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 9;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "winStreak";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 9;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x13c) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"winsToday");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "winsToday";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 9;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "winsToday";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 9;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x138) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"wins_season");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "wins_season";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xb;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "wins_season";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xb;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x140) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"sinisterSevenProgress");
      dVar24 = 0.0;
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "sinisterSevenProgress";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x15;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
          local_250 = "sinisterSevenProgress";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x15;
          FUN_008feca4(plVar8,&local_250);
          dVar24 = (double)FUN_008fc0f0();
        }
      }
      *(float *)(param_2 + 0x144) = (float)dVar24;
      lVar7 = FUN_008fd190(plVar8,"xp");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "xp";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 2;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "xp";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 2;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x154) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"levelMinXP");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "levelMinXP";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 10;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "levelMinXP";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 10;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x14c) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"levelMaxXP");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
LAB_00ea2794:
        uVar21 = 1;
      }
      else {
        local_250 = "levelMaxXP";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 10;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) goto LAB_00ea2794;
        local_250 = "levelMaxXP";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 10;
        puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
        uVar21 = *puVar9;
      }
      *(undefined4 *)(param_2 + 0x150) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"currency");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "currency";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 8;
        uVar10 = FUN_008feca4(plVar8,&local_250);
        FUN_00ea1950(uVar10,param_2 + 0x68);
      }
      lVar7 = FUN_008fd190(plVar8,"entitlement_coopbots");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        bVar4 = false;
      }
      else {
        local_250 = "entitlement_coopbots";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x14;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        bVar4 = false;
        if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
          local_250 = "entitlement_coopbots";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x14;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          bVar4 = *(int *)(lVar7 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x17c) = bVar4;
      lVar7 = FUN_008fd190(plVar8,"entitlement_practice");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        bVar4 = false;
      }
      else {
        local_250 = "entitlement_practice";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x14;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        bVar4 = false;
        if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
          local_250 = "entitlement_practice";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x14;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          bVar4 = *(int *)(lVar7 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x17d) = bVar4;
      lVar7 = FUN_008fd190(plVar8,"entitlement_ranked");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        bVar4 = false;
      }
      else {
        local_250 = "entitlement_ranked";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x12;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        bVar4 = false;
        if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
          local_250 = "entitlement_ranked";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x12;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          bVar4 = *(int *)(lVar7 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x17e) = bVar4;
      lVar7 = FUN_008fd190(plVar8,"entitlement_5v5_ranked");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        bVar4 = false;
      }
      else {
        local_250 = "entitlement_5v5_ranked";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x16;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        bVar4 = false;
        if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
          local_250 = "entitlement_5v5_ranked";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x16;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          bVar4 = *(int *)(lVar7 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x17f) = bVar4;
      lVar7 = FUN_008fd190(plVar8,"entitlement_casual");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        bVar4 = false;
      }
      else {
        local_250 = "entitlement_casual";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x12;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        bVar4 = false;
        if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
          local_250 = "entitlement_casual";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x12;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          bVar4 = *(int *)(lVar7 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x180) = bVar4;
      lVar7 = FUN_008fd190(plVar8,"canUseAllHeroes");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        bVar4 = false;
      }
      else {
        local_250 = "canUseAllHeroes";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xf;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        bVar4 = false;
        if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
          local_250 = "canUseAllHeroes";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xf;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          bVar4 = *(int *)(lVar7 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x182) = bVar4;
      FUN_00951534(param_2 + 0x188,0);
      lVar7 = FUN_008fd190(plVar8,"unlocks");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "unlocks";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 7;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if (*(int *)(lVar7 + 0x10) == 4) {
          local_250 = "unlocks";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 7;
          plVar11 = (long *)FUN_008feca4(plVar8,&local_250);
          if ((int)plVar11[1] != 0) {
            lVar7 = 0;
            uVar23 = 0;
            do {
              lVar17 = *plVar11 + lVar7;
              if ((*(byte *)(lVar17 + 0x12) >> 6 & 1) == 0) {
                lVar17 = *(long *)(*plVar11 + lVar7);
              }
              FUN_008fa54c(&local_250,lVar17);
              FUN_0096204c(param_2 + 0x188,&local_250);
              if (((ulong)local_250 & 1) != 0) {
                operator_delete(local_240);
              }
              uVar23 = uVar23 + 1;
              lVar7 = lVar7 + 0x18;
            } while (uVar23 < *(uint *)(plVar11 + 1));
          }
        }
      }
      FUN_00951534(param_2 + 0x198,0);
      lVar7 = FUN_008fd190(plVar8,"freeunlocks");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "freeunlocks";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xb;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if (*(int *)(lVar7 + 0x10) == 4) {
          local_250 = "freeunlocks";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xb;
          plVar11 = (long *)FUN_008feca4(plVar8,&local_250);
          if ((int)plVar11[1] != 0) {
            lVar7 = 0;
            uVar23 = 0;
            do {
              lVar17 = *plVar11 + lVar7;
              if ((*(byte *)(lVar17 + 0x12) >> 6 & 1) == 0) {
                lVar17 = *(long *)(*plVar11 + lVar7);
              }
              FUN_008fa54c(&local_250,lVar17);
              FUN_0096204c(param_2 + 0x198,&local_250);
              if (((ulong)local_250 & 1) != 0) {
                operator_delete(local_240);
              }
              uVar23 = uVar23 + 1;
              lVar7 = lVar7 + 0x18;
            } while (uVar23 < *(uint *)(plVar11 + 1));
          }
        }
      }
      lVar7 = FUN_008fd190(plVar8,"isDev");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        bVar4 = false;
      }
      else {
        local_250 = "isDev";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 5;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        bVar4 = false;
        if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
          local_250 = "isDev";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 5;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          bVar4 = *(int *)(lVar7 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x181) = bVar4;
      lVar7 = FUN_008fd190(plVar8,"karma");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "karma";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 5;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "karma";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 5;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x158) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"karmaLevel");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "karmaLevel";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 10;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "karmaLevel";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 10;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x15c) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"skillProgressionInfo");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "skillProgressionInfo";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x14;
        plVar11 = (long *)FUN_008feca4(plVar8,&local_250);
        lVar7 = FUN_008fd190(plVar11,"5v5_pvp_ranked");
        if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar7) {
          local_250 = "5v5_pvp_ranked";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xe;
          uVar10 = FUN_008feca4(plVar11,&local_250);
          FUN_00ea4c78(uVar10,param_2 + 0x1b0);
        }
        lVar7 = FUN_008fd190(plVar11,"ranked");
        if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar7) {
          local_250 = "ranked";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 6;
          uVar10 = FUN_008feca4(plVar11,&local_250);
          FUN_00ea4c78(uVar10,param_2 + 0x1e0);
        }
        lVar7 = FUN_008fd190(plVar11,"blitz_pvp_ranked");
        if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar7) {
          local_250 = "blitz_pvp_ranked";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x10;
          uVar10 = FUN_008feca4(plVar11,&local_250);
          FUN_00ea4c78(uVar10,param_2 + 0x210);
        }
      }
      lVar7 = FUN_008fd190(plVar8,"karmaProgress");
      dVar25 = 0.0;
      dVar24 = 0.0;
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "karmaProgress";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xd;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        dVar24 = 0.0;
        if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
          local_250 = "karmaProgress";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xd;
          FUN_008feca4(plVar8,&local_250);
          dVar24 = (double)FUN_008fc0f0();
        }
      }
      *(float *)(param_2 + 0x174) = (float)dVar24;
      lVar7 = FUN_008fd190(plVar8,"karmaSilverBonus");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "karmaSilverBonus";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x10;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
          local_250 = "karmaSilverBonus";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x10;
          FUN_008feca4(plVar8,&local_250);
          dVar25 = (double)FUN_008fc0f0();
        }
      }
      *(float *)(param_2 + 0x178) = (float)dVar25;
      lVar7 = FUN_008fd190(plVar8,"guildUUID");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
LAB_00ea30e0:
        puVar12 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_250 = "guildUUID";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 9;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_00ea30e0;
        local_250 = "guildUUID";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 9;
        puVar12 = (undefined8 *)FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
          puVar12 = (undefined8 *)*puVar12;
        }
      }
      FUN_008fa54c(&local_250,puVar12);
      FUN_008fce60(param_2 + 0x90,&local_250);
      if (((ulong)local_250 & 1) != 0) {
        operator_delete(local_240);
      }
      lVar7 = FUN_008fd190(plVar8,"teamUUID");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
LAB_00ea315c:
        puVar12 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_250 = "teamUUID";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 8;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_00ea315c;
        local_250 = "teamUUID";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 8;
        puVar12 = (undefined8 *)FUN_008feca4(plVar8,&local_250);
        if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
          puVar12 = (undefined8 *)*puVar12;
        }
      }
      FUN_008fa54c(&local_250,puVar12);
      FUN_008fce60(param_2 + 200,&local_250);
      if (((ulong)local_250 & 1) != 0) {
        operator_delete(local_240);
      }
      lVar7 = FUN_008fd190(plVar8,"targeting");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        lVar7 = FUN_008fd190(plVar8,"lifetimeSpend");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "lifetimeSpend";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xd;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "lifetimeSpend";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0xd;
            puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x160) = uVar21;
        lVar7 = FUN_008fd190(plVar8,"lifetimeSpendCount");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "lifetimeSpendCount";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x12;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "lifetimeSpendCount";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0x12;
            puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x164) = uVar21;
        lVar7 = FUN_008fd190(plVar8,"lifetimePoints");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "lifetimePoints";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xe;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "lifetimePoints";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0xe;
            puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x168) = uVar21;
        lVar7 = FUN_008fd190(plVar8,"spenderLevel");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "spenderLevel";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xc;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "spenderLevel";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0xc;
            puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x170) = uVar21;
        lVar7 = FUN_008fd190(plVar8,"lastSpendTime");
        if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
LAB_00ea37ac:
          uVar10 = 0;
        }
        else {
          local_250 = "lastSpendTime";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xd;
          lVar7 = FUN_008feca4(plVar8,&local_250);
          uVar10 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 4 & 1) != 0) {
            plVar11 = plVar8;
LAB_00ea37a0:
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0xd;
            local_250 = "lastSpendTime";
            puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_250);
            uVar10 = *puVar12;
          }
        }
LAB_00ea37b0:
        *(undefined8 *)(param_2 + 0x108) = uVar10;
      }
      else {
        local_250 = "targeting";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 9;
        plVar11 = (long *)FUN_008feca4(plVar8,&local_250);
        lVar7 = FUN_008fd190(plVar11,"cohort");
        if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
          uVar21 = 0;
        }
        else {
          local_250 = "cohort";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 6;
          lVar7 = FUN_008feca4(plVar11,&local_250);
          uVar21 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
            local_250 = "cohort";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 6;
            puVar9 = (undefined4 *)FUN_008feca4(plVar11,&local_250);
            uVar21 = *puVar9;
          }
        }
        *(undefined4 *)(param_2 + 0x16c) = uVar21;
        lVar7 = FUN_008fd190(plVar11,"spenderProfile");
        if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar7) {
          local_250 = "spenderProfile";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xe;
          plVar11 = (long *)FUN_008feca4(plVar11,&local_250);
          lVar7 = FUN_008fd190(plVar11,"lifetimeSpend");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
            uVar21 = 0;
          }
          else {
            local_250 = "lifetimeSpend";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0xd;
            lVar7 = FUN_008feca4(plVar11,&local_250);
            uVar21 = 0;
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
              local_250 = "lifetimeSpend";
              local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
              uStack_248 = 0xd;
              puVar9 = (undefined4 *)FUN_008feca4(plVar11,&local_250);
              uVar21 = *puVar9;
            }
          }
          *(undefined4 *)(param_2 + 0x160) = uVar21;
          lVar7 = FUN_008fd190(plVar11,"lifetimeSpendCount");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
            uVar21 = 0;
          }
          else {
            local_250 = "lifetimeSpendCount";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0x12;
            lVar7 = FUN_008feca4(plVar11,&local_250);
            uVar21 = 0;
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
              local_250 = "lifetimeSpendCount";
              local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
              uStack_248 = 0x12;
              puVar9 = (undefined4 *)FUN_008feca4(plVar11,&local_250);
              uVar21 = *puVar9;
            }
          }
          *(undefined4 *)(param_2 + 0x164) = uVar21;
          lVar7 = FUN_008fd190(plVar11,"lifetimePoints");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
            uVar21 = 0;
          }
          else {
            local_250 = "lifetimePoints";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0xe;
            lVar7 = FUN_008feca4(plVar11,&local_250);
            uVar21 = 0;
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
              local_250 = "lifetimePoints";
              local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
              uStack_248 = 0xe;
              puVar9 = (undefined4 *)FUN_008feca4(plVar11,&local_250);
              uVar21 = *puVar9;
            }
          }
          *(undefined4 *)(param_2 + 0x168) = uVar21;
          lVar7 = FUN_008fd190(plVar11,"spenderLevel");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
            uVar21 = 0;
          }
          else {
            local_250 = "spenderLevel";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 0xc;
            lVar7 = FUN_008feca4(plVar11,&local_250);
            uVar21 = 0;
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
              local_250 = "spenderLevel";
              local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
              uStack_248 = 0xc;
              puVar9 = (undefined4 *)FUN_008feca4(plVar11,&local_250);
              uVar21 = *puVar9;
            }
          }
          *(undefined4 *)(param_2 + 0x170) = uVar21;
          lVar7 = FUN_008fd190(plVar11,"lastSpendTime");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) goto LAB_00ea37ac;
          local_250 = "lastSpendTime";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xd;
          lVar7 = FUN_008feca4(plVar11,&local_250);
          uVar10 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 4 & 1) != 0) {
            goto LAB_00ea37a0;
          }
          goto LAB_00ea37b0;
        }
      }
      lVar7 = FUN_008fd190(plVar8,"accountPenaltyBoxData");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar10 = 0;
      }
      else {
        local_250 = "accountPenaltyBoxData";
        local_240._0_4_ = 0x100005;
        uStack_248 = 0x15;
        uVar10 = FUN_008feca4(plVar8,&local_250);
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        local_250 = "ttl";
        uStack_248 = 3;
        FUN_008feca4(uVar10,&local_250);
        uVar10 = FUN_008fc0f0();
      }
      *(undefined8 *)(param_2 + 0x110) = uVar10;
      lVar7 = FUN_008fd190(plVar8,"penalty_qbanPoints");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar7) {
        uVar21 = 0;
      }
      else {
        local_250 = "penalty_qbanPoints";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0x12;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        uVar21 = 0;
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
          local_250 = "penalty_qbanPoints";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0x12;
          puVar9 = (undefined4 *)FUN_008feca4(plVar8,&local_250);
          uVar21 = *puVar9;
        }
      }
      *(undefined4 *)(param_2 + 0x118) = uVar21;
      lVar7 = FUN_008fd190(plVar8,"trophyCase");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "trophyCase";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 10;
        plVar11 = (long *)FUN_008feca4(plVar8,&local_250);
        if ((int)plVar11[1] == 0) {
          local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
        }
        else {
          lVar7 = 0;
          uVar23 = 0;
          iVar22 = -1;
          do {
            plVar1 = (long *)(*plVar11 + lVar7);
            lVar17 = FUN_008fd190(plVar1,"season");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
              iVar5 = 0;
            }
            else {
              local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
              local_250 = "season";
              uStack_248 = 6;
              lVar17 = FUN_008feca4(plVar1,&local_250);
              iVar5 = 0;
              if ((*(byte *)(lVar17 + 0x11) >> 2 & 1) != 0) {
                local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
                local_250 = "season";
                uStack_248 = 6;
                piVar13 = (int *)FUN_008feca4(plVar1,&local_250);
                iVar5 = *piVar13;
              }
            }
            local_254 = iVar5;
            memset(&local_250,0,0x78);
            FUN_00eba3c0(&local_250);
            ppcVar14 = (char **)FUN_00ea524c(puVar6,&local_254);
            ppcVar2 = &local_250;
            if (ppcVar14 != (char **)0x0) {
              ppcVar2 = ppcVar14;
            }
            FUN_008fce60(&local_250,ppcVar2);
            FUN_008fce60(&local_238,ppcVar2 + 3);
            FUN_008fce60(&local_220,ppcVar2 + 6);
            FUN_008fce60(local_208,ppcVar2 + 9);
            FUN_008fce60(local_1f0,ppcVar2 + 0xc);
            uStack_1d0 = ppcVar2[0x10];
            local_1d8 = ppcVar2[0xf];
            local_1c8 = *(undefined4 *)(ppcVar2 + 0x11);
            FUN_008fa54c(&local_98,"player_profile");
            FUN_008fce60(&local_250,&local_98);
            if (((ulong)local_98 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_84,local_88));
            }
            local_1d8 = (char *)CONCAT44(local_1d8._4_4_,local_254);
            lVar17 = FUN_008fd190(plVar1,"trophy_type");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
              puVar12 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_88 = 0x100005;
              local_98 = "trophy_type";
              local_90 = 0xb;
              lVar17 = FUN_008feca4(plVar1,&local_98);
              puVar12 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                local_88 = 0x100005;
                local_98 = "trophy_type";
                local_90 = 0xb;
                puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                  puVar12 = (undefined8 *)*puVar12;
                }
              }
            }
            FUN_008fa54c(local_270,puVar12);
            lVar17 = FUN_008fd190(plVar1,"value");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
              uVar21 = 0;
            }
            else {
              local_88 = 0x100005;
              local_98 = "value";
              local_90 = 5;
              lVar17 = FUN_008feca4(plVar1,&local_98);
              uVar21 = 0;
              if ((*(byte *)(lVar17 + 0x11) >> 2 & 1) != 0) {
                local_88 = 0x100005;
                local_98 = "value";
                local_90 = 5;
                puVar9 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
                uVar21 = *puVar9;
              }
            }
            uVar20 = (ulong)(local_270[0] >> 1);
            uVar18 = uVar20;
            if ((local_270[0] & 1) != 0) {
              uVar18 = local_268;
            }
            if (uVar18 == 10) {
              iVar5 = FUN_0090d610(local_270,0,0xffffffffffffffff,"individual",10);
              if (iVar5 != 0) {
                uVar20 = (ulong)(local_270[0] >> 1);
                goto LAB_00ea3c24;
              }
              lVar17 = FUN_008fd190(plVar1,"trophy_name");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                puVar12 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_88 = 0x100005;
                local_98 = "trophy_name";
                local_90 = 0xb;
                lVar17 = FUN_008feca4(plVar1,&local_98);
                puVar12 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                  local_88 = 0x100005;
                  local_98 = "trophy_name";
                  local_90 = 0xb;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                  if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar12;
                  }
                }
              }
              FUN_008fa54c(&local_98,puVar12);
              uVar18 = (ulong)local_98 >> 1 & 0x7f;
              if (((ulong)local_98 & 1) != 0) {
                uVar18 = local_90;
              }
              if ((uVar18 == 0x15) &&
                 (iVar5 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"individual_skill_tier",0x15),
                 iVar5 == 0)) {
                local_1d8 = (char *)CONCAT44(uVar21,(undefined4)local_1d8);
              }
              uVar18 = (ulong)local_98 >> 1 & 0x7f;
              if (((ulong)local_98 & 1) != 0) {
                uVar18 = local_90;
              }
              if ((uVar18 == 0x19) &&
                 (iVar5 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"individual_5v5_skill_tier",
                                       0x19), iVar5 == 0)) {
                uStack_1d0 = (char *)CONCAT44(uStack_1d0._4_4_,uVar21);
              }
LAB_00ea40ac:
              if (((ulong)local_98 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_84,local_88));
              }
            }
            else {
LAB_00ea3c24:
              uVar18 = uVar20;
              if ((local_270[0] & 1) != 0) {
                uVar18 = local_268;
              }
              if (uVar18 == 5) {
                iVar5 = FUN_0090d610(local_270,0,0xffffffffffffffff,"guild",5);
                if (iVar5 != 0) {
                  uVar20 = (ulong)(local_270[0] >> 1);
                  goto LAB_00ea3c64;
                }
                uStack_1d0 = (char *)CONCAT44(uVar21,(undefined4)uStack_1d0);
                lVar17 = FUN_008fd190(plVar1,"name");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                }
                else {
                  local_88 = 0x100005;
                  local_98 = "name";
                  local_90 = 4;
                  lVar17 = FUN_008feca4(plVar1,&local_98);
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                  if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                    local_88 = 0x100005;
                    local_98 = "name";
                    local_90 = 4;
                    puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                    if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                      puVar12 = (undefined8 *)*puVar12;
                    }
                  }
                }
                FUN_008fa54c(&local_98,puVar12);
                FUN_008fce60(&local_238,&local_98);
                if (((ulong)local_98 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_84,local_88));
                }
                lVar17 = FUN_008fd190(plVar1,"tag");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                }
                else {
                  local_88 = 0x100005;
                  local_98 = "tag";
                  local_90 = 3;
                  lVar17 = FUN_008feca4(plVar1,&local_98);
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                  if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                    local_88 = 0x100005;
                    local_98 = "tag";
                    local_90 = 3;
                    puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                    if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                      puVar12 = (undefined8 *)*puVar12;
                    }
                  }
                }
                FUN_008fa54c(&local_98,puVar12);
                pbVar15 = (byte *)&local_220;
LAB_00ea40a4:
                FUN_008fce60(pbVar15,&local_98);
                goto LAB_00ea40ac;
              }
LAB_00ea3c64:
              if ((local_270[0] & 1) != 0) {
                uVar20 = local_268;
              }
              if ((uVar20 == 4) &&
                 (iVar5 = FUN_0090d610(local_270,0,0xffffffffffffffff,"team",4), iVar5 == 0)) {
                local_1c8 = uVar21;
                lVar17 = FUN_008fd190(plVar1,"name");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                }
                else {
                  local_88 = 0x100005;
                  local_98 = "name";
                  local_90 = 4;
                  lVar17 = FUN_008feca4(plVar1,&local_98);
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                  if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                    local_88 = 0x100005;
                    local_98 = "name";
                    local_90 = 4;
                    puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                    if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                      puVar12 = (undefined8 *)*puVar12;
                    }
                  }
                }
                FUN_008fa54c(&local_98,puVar12);
                FUN_008fce60(local_208,&local_98);
                if (((ulong)local_98 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_84,local_88));
                }
                lVar17 = FUN_008fd190(plVar1,"tag");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                }
                else {
                  local_88 = 0x100005;
                  local_98 = "tag";
                  local_90 = 3;
                  lVar17 = FUN_008feca4(plVar1,&local_98);
                  puVar12 = (undefined8 *)&DAT_01e277f2;
                  if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                    local_88 = 0x100005;
                    local_98 = "tag";
                    local_90 = 3;
                    puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                    if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                      puVar12 = (undefined8 *)*puVar12;
                    }
                  }
                }
                FUN_008fa54c(&local_98,puVar12);
                pbVar15 = local_1f0;
                goto LAB_00ea40a4;
              }
            }
            lVar17 = FUN_00ea524c(puVar6,&local_254);
            if (lVar17 == 0) {
              FUN_00bf42b0(puVar6,&local_254,&local_250);
            }
            else {
              FUN_00ea52f0(puVar6);
            }
            iVar5 = local_254;
            if (local_254 <= iVar22) {
              iVar5 = iVar22;
            }
            if ((local_270[0] & 1) != 0) {
              operator_delete(local_260);
            }
            if ((local_1f0[0] & 1) != 0) {
              operator_delete(local_1e0);
            }
            if ((local_208[0] & 1) != 0) {
              operator_delete(local_1f8);
            }
            if ((local_220 & 1) != 0) {
              operator_delete(local_210);
            }
            if ((local_238 & 1) != 0) {
              operator_delete(pvStack_228);
            }
            if (((ulong)local_250 & 1) != 0) {
              operator_delete(local_240);
            }
            uVar23 = uVar23 + 1;
            lVar7 = lVar7 + 0x18;
            iVar22 = iVar5;
          } while (uVar23 < *(uint *)(plVar11 + 1));
          local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
          if (0 < iVar5) {
            do {
              lVar7 = FUN_00ea524c(puVar6,&local_98);
              if (lVar7 == 0) {
                memset(&local_250,0,0x78);
                FUN_00eba3c0(&local_250);
                local_1d8 = (char *)CONCAT44(local_1d8._4_4_,(int)local_98);
                FUN_00bf42b0(puVar6,&local_98,&local_250);
                if ((local_1f0[0] & 1) != 0) {
                  operator_delete(local_1e0);
                }
                if ((local_208[0] & 1) != 0) {
                  operator_delete(local_1f8);
                }
                if ((local_220 & 1) != 0) {
                  operator_delete(local_210);
                }
                if ((local_238 & 1) != 0) {
                  operator_delete(pvStack_228);
                }
                if (((ulong)local_250 & 1) != 0) {
                  operator_delete(local_240);
                }
              }
              iVar22 = (int)local_98 + 1;
              local_98 = (char *)CONCAT44(local_98._4_4_,iVar22);
            } while (iVar22 < iVar5);
          }
        }
        local_250 = (char *)((ulong)local_250 & 0xffffffff00000000);
        lVar7 = FUN_00ea524c(puVar6,&local_250);
        if (lVar7 != 0) {
          local_250 = (char *)((ulong)local_250 & 0xffffffff00000000);
          uVar10 = FUN_00bf4acc(puVar6,&local_250);
          FUN_008fa54c(&local_250,"skill_tier");
          FUN_008fce60(uVar10,&local_250);
          if (((ulong)local_250 & 1) != 0) {
            operator_delete(local_240);
          }
        }
      }
      lVar7 = FUN_008fd190(plVar8,"tutorialState");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "tutorialState";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xd;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if (*(int *)(lVar7 + 0x10) == 3) {
          local_250 = "tutorialState";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xd;
          plVar11 = (long *)FUN_008feca4(plVar8,&local_250);
          lVar7 = FUN_008fd190(plVar11,"state");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
            uVar21 = 0;
          }
          else {
            local_250 = "state";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 5;
            lVar7 = FUN_008feca4(plVar11,&local_250);
            uVar21 = 0;
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
              local_250 = "state";
              local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
              uStack_248 = 5;
              puVar6 = (undefined4 *)FUN_008feca4(plVar11,&local_250);
              uVar21 = *puVar6;
            }
          }
          *(undefined4 *)(param_2 + 0x1a8) = uVar21;
          lVar7 = FUN_008fd190(plVar11,"clientMode");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar7) {
            uVar21 = 0;
          }
          else {
            local_250 = "clientMode";
            local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
            uStack_248 = 10;
            lVar7 = FUN_008feca4(plVar11,&local_250);
            uVar21 = 0;
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
              local_250 = "clientMode";
              local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
              uStack_248 = 10;
              puVar6 = (undefined4 *)FUN_008feca4(plVar11,&local_250);
              uVar21 = *puVar6;
            }
          }
          *(undefined4 *)(param_2 + 0x1ac) = uVar21;
        }
      }
      lVar7 = FUN_008fd190(plVar8,"playerChests");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "playerChests";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xc;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if (*(int *)(lVar7 + 0x10) == 4) {
          local_250 = "playerChests";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xc;
          plVar11 = (long *)FUN_008feca4(plVar8,&local_250);
          if ((int)plVar11[1] != 0) {
            lVar7 = 0;
            uVar23 = 0;
            do {
              uStack_248 = 0;
              local_240 = (void *)0x0;
              plVar1 = (long *)(*plVar11 + lVar7);
              pvStack_228 = (void *)0x0;
              local_230 = 0;
              local_250 = (char *)0x0;
              local_238 = 0;
              local_220 = CONCAT44(local_220._4_4_,0xffffffff);
              lVar17 = FUN_008fd190(plVar1,"uuid");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                puVar12 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_98 = "uuid";
                local_88 = 0x100005;
                local_90 = 4;
                lVar17 = FUN_008feca4(plVar1,&local_98);
                puVar12 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                  local_98 = "uuid";
                  local_88 = 0x100005;
                  local_90 = 4;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                  if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar12;
                  }
                }
              }
              FUN_008fa54c(&local_98,puVar12);
              FUN_008fce60(&local_250,&local_98);
              if (((ulong)local_98 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_84,local_88));
              }
              lVar17 = FUN_008fd190(plVar1,"chestType");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                puVar12 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_98 = "chestType";
                local_88 = 0x100005;
                local_90 = 9;
                lVar17 = FUN_008feca4(plVar1,&local_98);
                puVar12 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                  local_98 = "chestType";
                  local_88 = 0x100005;
                  local_90 = 9;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                  if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar12;
                  }
                }
              }
              FUN_008fa54c(&local_98,puVar12);
              FUN_008fce60(&local_238,&local_98);
              if (((ulong)local_98 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_84,local_88));
              }
              lVar17 = FUN_008fd190(plVar1,"timeLeft");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar17) {
                uVar21 = 0;
              }
              else {
                local_98 = "timeLeft";
                local_88 = 0x100005;
                local_90 = 8;
                lVar17 = FUN_008feca4(plVar1,&local_98);
                uVar21 = 0;
                if ((*(byte *)(lVar17 + 0x11) >> 2 & 1) != 0) {
                  local_98 = "timeLeft";
                  local_88 = 0x100005;
                  local_90 = 8;
                  puVar6 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
                  uVar21 = *puVar6;
                }
              }
              local_220 = CONCAT44(local_220._4_4_,uVar21);
              FUN_00968620(param_2 + 0x38,&local_250);
              if ((local_238 & 1) != 0) {
                operator_delete(pvStack_228);
              }
              if (((ulong)local_250 & 1) != 0) {
                operator_delete(local_240);
              }
              uVar23 = uVar23 + 1;
              lVar7 = lVar7 + 0x18;
            } while (uVar23 < *(uint *)(plVar11 + 1));
          }
        }
      }
      lVar7 = FUN_008fd190(plVar8,"playerBuffs");
      if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar7) {
        local_250 = "playerBuffs";
        local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
        uStack_248 = 0xb;
        lVar7 = FUN_008feca4(plVar8,&local_250);
        if (*(int *)(lVar7 + 0x10) == 4) {
          local_250 = "playerBuffs";
          local_240 = (void *)CONCAT44(local_240._4_4_,0x100005);
          uStack_248 = 0xb;
          plVar8 = (long *)FUN_008feca4(plVar8,&local_250);
          if ((int)plVar8[1] != 0) {
            lVar7 = 0;
            uVar23 = 0;
            do {
              uStack_248 = 0;
              local_240 = (void *)0x0;
              local_250 = (char *)0x0;
              plVar11 = (long *)(*plVar8 + lVar7);
              pvStack_228 = (void *)0xffffffffffffffff;
              local_220 = 0xffffffffffffffff;
              local_238 = 0xffffffffffffffff;
              local_230 = 0xffffffffffffffff;
              lVar17 = FUN_008fd190(plVar11,"name");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar17) {
                puVar12 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_98 = "name";
                local_88 = 0x100005;
                local_90 = 4;
                lVar17 = FUN_008feca4(plVar11,&local_98);
                puVar12 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar17 + 0x12) >> 4 & 1) != 0) {
                  local_98 = "name";
                  local_88 = 0x100005;
                  local_90 = 4;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_98);
                  if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
                    puVar12 = (undefined8 *)*puVar12;
                  }
                }
              }
              FUN_008fa54c(&local_98,puVar12);
              FUN_008fce60(&local_250,&local_98);
              if (((ulong)local_98 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_84,local_88));
              }
              lVar17 = FUN_008fd190(plVar11,"startTime");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar17) {
                uVar18 = 0;
              }
              else {
                local_98 = "startTime";
                local_88 = 0x100005;
                local_90 = 9;
                lVar17 = FUN_008feca4(plVar11,&local_98);
                uVar18 = 0;
                if ((*(byte *)(lVar17 + 0x11) >> 4 & 1) != 0) {
                  local_98 = "startTime";
                  local_88 = 0x100005;
                  local_90 = 9;
                  puVar16 = (ulong *)FUN_008feca4(plVar11,&local_98);
                  uVar18 = *puVar16;
                }
              }
              local_238 = uVar18;
              lVar17 = FUN_008fd190(plVar11,"timeLeft");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar17) {
                uVar10 = 0;
              }
              else {
                local_98 = "timeLeft";
                local_88 = 0x100005;
                local_90 = 8;
                lVar17 = FUN_008feca4(plVar11,&local_98);
                uVar10 = 0;
                if ((*(byte *)(lVar17 + 0x11) >> 4 & 1) != 0) {
                  local_98 = "timeLeft";
                  local_88 = 0x100005;
                  local_90 = 8;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_98);
                  uVar10 = *puVar12;
                }
              }
              local_230 = uVar10;
              lVar17 = FUN_008fd190(plVar11,"refreshTime");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar17) {
                pvVar19 = (void *)0x0;
              }
              else {
                local_98 = "refreshTime";
                local_88 = 0x100005;
                local_90 = 0xb;
                lVar17 = FUN_008feca4(plVar11,&local_98);
                pvVar19 = (void *)0x0;
                if ((*(byte *)(lVar17 + 0x11) >> 4 & 1) != 0) {
                  local_98 = "refreshTime";
                  local_88 = 0x100005;
                  local_90 = 0xb;
                  puVar12 = (undefined8 *)FUN_008feca4(plVar11,&local_98);
                  pvVar19 = (void *)*puVar12;
                }
              }
              pvStack_228 = pvVar19;
              lVar17 = FUN_008fd190(plVar11,"charges");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar17) {
                uVar21 = 0;
              }
              else {
                local_98 = "charges";
                local_88 = 0x100005;
                local_90 = 7;
                lVar17 = FUN_008feca4(plVar11,&local_98);
                uVar21 = 0;
                if ((*(byte *)(lVar17 + 0x11) >> 2 & 1) != 0) {
                  local_98 = "charges";
                  local_88 = 0x100005;
                  local_90 = 7;
                  puVar6 = (undefined4 *)FUN_008feca4(plVar11,&local_98);
                  uVar21 = *puVar6;
                }
              }
              local_220 = CONCAT44(local_220._4_4_,uVar21);
              lVar17 = FUN_008fd190(plVar11,"refreshCharges");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar17) {
                uVar21 = 0;
              }
              else {
                local_98 = "refreshCharges";
                local_88 = 0x100005;
                local_90 = 0xe;
                lVar17 = FUN_008feca4(plVar11,&local_98);
                uVar21 = 0;
                if ((*(byte *)(lVar17 + 0x11) >> 2 & 1) != 0) {
                  local_98 = "refreshCharges";
                  local_88 = 0x100005;
                  local_90 = 0xe;
                  puVar6 = (undefined4 *)FUN_008feca4(plVar11,&local_98);
                  uVar21 = *puVar6;
                }
              }
              local_220 = CONCAT44(uVar21,(undefined4)local_220);
              FUN_00ea53d0(param_2 + 0x28,&local_250);
              if (((ulong)local_250 & 1) != 0) {
                operator_delete(local_240);
              }
              uVar23 = uVar23 + 1;
              lVar7 = lVar7 + 0x18;
            } while (uVar23 < *(uint *)(plVar8 + 1));
          }
        }
      }
      FUN_009515b0(&local_1c0);
      goto LAB_00ea4b10;
    }
  }
  *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea4b10:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

