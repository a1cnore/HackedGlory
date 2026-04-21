// functions/00eb3 — 7 functions
#include "libGameKindred.h"




void FUN_00eb334c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_00953b44(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < param_2) {
      uVar3 = (ulong)uVar1 << 6 | 0x18;
      lVar4 = (ulong)param_2 - (ulong)uVar1;
      do {
        lVar2 = *(long *)(param_1 + 2) + uVar3;
        FUN_008fcdb8(lVar2 + -0x18,param_3);
        FUN_008fcdb8(lVar2,param_3 + 0x18);
        FUN_00953c48(lVar2 + 0x18,param_3 + 0x30);
        lVar4 = lVar4 + -1;
        uVar3 = uVar3 + 0x40;
      } while (lVar4 != 0);
      uVar1 = *param_1;
    }
    if (param_2 < uVar1) {
      lVar2 = (ulong)uVar1 * 0x40 + (ulong)param_2 * -0x40;
      lVar4 = *(long *)(param_1 + 2) + (ulong)param_2 * 0x40 + 0x30;
      do {
        FUN_00953e1c(lVar4,1);
        if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar4 + -8));
        }
        if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar4 + -0x20));
        }
        lVar2 = lVar2 + -0x40;
        lVar4 = lVar4 + 0x40;
      } while (lVar2 != 0);
    }
    *param_1 = param_2;
    return;
  }
  FUN_00953ec8(param_1);
  return;
}




void FUN_00eb3480(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_00953cec(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar4 = (ulong)uVar2 * 0x68;
      lVar5 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar1 = *(long *)(param_1 + 2) + lVar4;
        FUN_008fcdb8(lVar1,param_3);
        FUN_008fcdb8(lVar1 + 0x18,param_3 + 0x18);
        FUN_008fcdb8(lVar1 + 0x30,param_3 + 0x30);
        FUN_008fcdb8(lVar1 + 0x48,param_3 + 0x48);
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + 0x68;
        *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_3 + 0x60);
      } while (lVar5 != 0);
      uVar2 = *param_1;
    }
    if (param_2 < uVar2) {
      lVar4 = (ulong)uVar2 * 0x68 + (ulong)param_2 * -0x68;
      pbVar3 = (byte *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x68 + 0x30);
      do {
        if ((pbVar3[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x28));
        }
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x10));
        }
        if ((pbVar3[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if ((pbVar3[-0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x20));
        }
        lVar4 = lVar4 + -0x68;
        pbVar3 = pbVar3 + 0x68;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
    return;
  }
  FUN_00953e1c(param_1);
  return;
}




void FUN_00eb35e8(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_1,"id");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_00eb3668:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "id";
    local_50 = 0x100005;
    local_58 = 2;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eb3668;
    local_60 = "id";
    local_50 = 0x100005;
    local_58 = 2;
    puVar6 = (undefined8 *)FUN_008feca4(param_1,&local_60);
    if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_008fa54c(&local_60,puVar6);
  FUN_008fce60(param_2,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar3 = FUN_008fd190(param_1,"def");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_00eb36e4:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "def";
    local_50 = 0x100005;
    local_58 = 3;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eb36e4;
    local_60 = "def";
    local_50 = 0x100005;
    local_58 = 3;
    puVar6 = (undefined8 *)FUN_008feca4(param_1,&local_60);
    if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_008fa54c(&local_60,puVar6);
  FUN_008fce60(param_2 + 0x18,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar3 = FUN_008fd190(param_1,"level");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_60 = "level";
    local_50 = 0x100005;
    local_58 = 5;
    lVar3 = FUN_008feca4(param_1,&local_60);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "level";
      local_50 = 0x100005;
      local_58 = 5;
      puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_2 + 0x60) = uVar7;
  lVar3 = FUN_008fd190(param_1,"fragments");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_60 = "fragments";
    local_50 = 0x100005;
    local_58 = 9;
    lVar3 = FUN_008feca4(param_1,&local_60);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "fragments";
      local_50 = 0x100005;
      local_58 = 9;
      puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_2 + 100) = uVar7;
  lVar3 = FUN_008fd190(param_1,"hero");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_60 = "hero";
    local_50 = 0x100005;
    local_58 = 4;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_60 = "hero";
      local_50 = 0x100005;
      local_58 = 4;
      puVar6 = (undefined8 *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
        puVar6 = (undefined8 *)*puVar6;
      }
      goto LAB_00eb3860;
    }
  }
  puVar6 = (undefined8 *)&DAT_01e277f2;
LAB_00eb3860:
  FUN_008fa54c(&local_60,puVar6);
  FUN_008fce60(param_2 + 0x48,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar3 = FUN_008fd190(param_1,"maxLevel");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_60 = "maxLevel";
    local_50 = 0x100005;
    local_58 = 8;
    lVar3 = FUN_008feca4(param_1,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_60 = "maxLevel";
      local_50 = 0x100005;
      local_58 = 8;
      lVar3 = FUN_008feca4(param_1,&local_60);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x70) = bVar2;
  local_50 = 0x100005;
  local_60 = "levelRequirements";
  local_58 = 0x11;
  plVar5 = (long *)FUN_008feca4(param_1,&local_60);
  if ((int)plVar5[2] == 3) {
    lVar3 = FUN_008fd190(plVar5,"[fragments]");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
      uVar7 = 0;
    }
    else {
      local_60 = "[fragments]";
      local_50 = 0x100005;
      local_58 = 0xb;
      lVar3 = FUN_008feca4(plVar5,&local_60);
      uVar7 = 0;
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
        local_60 = "[fragments]";
        local_50 = 0x100005;
        local_58 = 0xb;
        puVar4 = (undefined4 *)FUN_008feca4(plVar5,&local_60);
        uVar7 = *puVar4;
      }
    }
    *(undefined4 *)(param_2 + 0x68) = uVar7;
    lVar3 = FUN_008fd190(plVar5,"silver");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
      uVar7 = 0;
    }
    else {
      local_60 = "silver";
      local_50 = 0x100005;
      local_58 = 6;
      lVar3 = FUN_008feca4(plVar5,&local_60);
      uVar7 = 0;
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
        local_60 = "silver";
        local_50 = 0x100005;
        local_58 = 6;
        puVar4 = (undefined4 *)FUN_008feca4(plVar5,&local_60);
        uVar7 = *puVar4;
      }
    }
  }
  else {
    uVar7 = 0xffffffff;
    *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
  }
  *(undefined4 *)(param_2 + 0x6c) = uVar7;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb3af0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00951bbc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x78;
  FUN_008fcdb8(lVar4 + -0x78,param_2);
  FUN_008fcdb8(lVar4 + -0x60,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x48,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x48);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_00eb3bb8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined1 uVar6;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_60 = "code";
    local_50 = 0x100005;
    local_58 = 4;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "code";
      local_50 = 0x100005;
      local_58 = 4;
      piVar4 = (int *)FUN_008feca4(param_1,&local_60);
      iVar1 = *piVar4;
      uVar6 = 0;
      *(int *)(param_2 + 0x28) = iVar1;
      if (iVar1 != 0) goto LAB_00eb3d00;
      lVar3 = FUN_008fd190(param_1,"returnValue");
      if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
        uVar6 = 0;
        if (*(int *)(lVar3 + 0x28) != 3) goto LAB_00eb3d00;
        lVar5 = FUN_008fd190(lVar3 + 0x18,"questSyncNeeded");
        if (*(long *)(lVar3 + 0x18) + (ulong)*(uint *)(lVar3 + 0x20) * 0x30 != lVar5) {
          uVar6 = 0;
          if ((*(uint *)(lVar5 + 0x28) >> 8 & 1) != 0) {
            *(bool *)(param_2 + 0x2d) = *(uint *)(lVar5 + 0x28) == 0x102;
            uVar6 = 1;
          }
          goto LAB_00eb3d00;
        }
      }
      uVar6 = 0;
      goto LAB_00eb3d00;
    }
  }
  uVar6 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
LAB_00eb3d00:
  *(undefined1 *)(param_2 + 0x2c) = uVar6;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb3d30(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  byte local_78;
  void *local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_c0 = "code";
  local_b0 = 0x100005;
  local_b8 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_c0);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_c0 = "returnValue";
    local_b0 = 0x100005;
    local_b8 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_c0);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_c0 = "returnValue";
      local_b0 = 0x100005;
      local_b8 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_c0);
      FUN_00951cf4(param_2 + 0x28,0);
      if ((int)plVar4[1] != 0) {
        lVar3 = *plVar4;
        do {
          memset(&local_c0,0,0x60);
          FUN_00eb35e8(lVar3 + 0x18,&local_c0);
          FUN_00eb3af0(param_2 + 0x28,&local_c0);
          if ((local_78 & 1) != 0) {
            operator_delete(local_68);
          }
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
          if (((ulong)local_c0 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_ac,local_b0));
          }
          lVar3 = lVar3 + 0x30;
        } while (lVar3 != *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30);
      }
      goto LAB_00eb3eb0;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00eb3eb0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00eb3edc(long *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined4 local_88;
  undefined1 local_84;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a0 = "code";
  local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
  local_98 = 4;
  puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_a0);
  *(undefined4 *)(param_2 + 0x54) = *puVar4;
  lVar5 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar5) {
    local_a0 = "returnValue";
    local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
    local_98 = 0xb;
    lVar5 = FUN_008feca4(param_1,&local_a0);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_a0 = "returnValue";
      local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
      local_98 = 0xb;
      plVar6 = (long *)FUN_008feca4(param_1,&local_a0);
      lVar5 = FUN_008fd190(plVar6,"selected");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_00eb4000:
        puVar8 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_a0 = "selected";
        local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
        local_98 = 8;
        lVar5 = FUN_008feca4(plVar6,&local_a0);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00eb4000;
        local_a0 = "selected";
        local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
        local_98 = 8;
        puVar8 = (undefined8 *)FUN_008feca4(plVar6,&local_a0);
        if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      FUN_008fa54c(&local_a0,puVar8);
      FUN_008fce60(param_2 + 0x38,&local_a0);
      if (((ulong)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      lVar5 = FUN_008fd190(plVar6,"ownsAny");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
        bVar3 = false;
      }
      else {
        local_a0 = "ownsAny";
        local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
        local_98 = 7;
        lVar5 = FUN_008feca4(plVar6,&local_a0);
        bVar3 = false;
        if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
          local_a0 = "ownsAny";
          local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
          local_98 = 7;
          lVar5 = FUN_008feca4(plVar6,&local_a0);
          bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x50) = bVar3;
      lVar5 = FUN_008fd190(plVar6,"enabled");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
        bVar3 = false;
      }
      else {
        local_a0 = "enabled";
        local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
        local_98 = 7;
        lVar5 = FUN_008feca4(plVar6,&local_a0);
        bVar3 = false;
        if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
          local_a0 = "enabled";
          local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
          local_98 = 7;
          lVar5 = FUN_008feca4(plVar6,&local_a0);
          bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x51) = bVar3;
      lVar5 = FUN_008fd190(plVar6,"owned");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_a0 = "owned";
        local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
        local_98 = 5;
        plVar6 = (long *)FUN_008feca4(plVar6,&local_a0);
        FUN_009e57c0(param_2 + 0x28,0);
        if ((int)plVar6[1] != 0) {
          puVar8 = (undefined8 *)*plVar6;
          do {
            local_a0 = (char *)0x0;
            local_98 = 0;
            local_90 = (void *)0x0;
            puVar7 = puVar8;
            if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
              puVar7 = (undefined8 *)*puVar8;
            }
            FUN_008fa54c(&local_80,puVar7);
            FUN_008fce60(&local_a0,&local_80);
            if (((ulong)local_80 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_6c,local_70));
            }
            puVar7 = puVar8 + 3;
            lVar5 = FUN_008fd190(puVar7,"selected");
            if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 == lVar5) {
              bVar3 = false;
            }
            else {
              local_80 = "selected";
              local_70 = 0x100005;
              local_78 = 8;
              lVar5 = FUN_008feca4(puVar7,&local_80);
              bVar3 = false;
              if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
                local_80 = "selected";
                local_70 = 0x100005;
                local_78 = 8;
                lVar5 = FUN_008feca4(puVar7,&local_80);
                bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
              }
            }
            local_84 = bVar3;
            lVar5 = FUN_008fd190(puVar7,"balance");
            if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 == lVar5) {
              uVar2 = 0;
            }
            else {
              local_80 = "balance";
              local_70 = 0x100005;
              local_78 = 7;
              lVar5 = FUN_008feca4(puVar7,&local_80);
              uVar2 = 0;
              if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
                local_80 = "balance";
                local_70 = 0x100005;
                local_78 = 7;
                puVar4 = (undefined4 *)FUN_008feca4(puVar7,&local_80);
                uVar2 = *puVar4;
              }
            }
            local_88 = uVar2;
            FUN_00eb4384(param_2 + 0x28,&local_a0);
            if (((ulong)local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            puVar8 = puVar8 + 6;
          } while (puVar8 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
      }
      goto LAB_00eb40b8;
    }
  }
  *(undefined4 *)(param_2 + 0x54) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00eb40b8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

