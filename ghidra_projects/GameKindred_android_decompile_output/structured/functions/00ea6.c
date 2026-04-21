// functions/00ea6 — 5 functions
#include "libGameKindred.h"




void FUN_00ea6468(uint *param_1,long param_2)

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
    FUN_00951788(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x160;
  FUN_008fcdb8(lVar4 + -0x160,param_2);
  *(undefined1 *)(lVar4 + -0x148) = *(undefined1 *)(param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x140,param_2 + 0x20);
  *(undefined4 *)(lVar4 + -0x128) = *(undefined4 *)(param_2 + 0x38);
  FUN_008fcdb8(lVar4 + -0x120,param_2 + 0x40);
  memcpy((void *)(lVar4 + -0x108),(void *)(param_2 + 0x58),0xb0);
  FUN_00951160(lVar4 + -0x58,param_2 + 0x108);
  thunk_FUN_00e7051c(lVar4 + -0x48,param_2 + 0x118);
  *(undefined8 *)(lVar4 + -0x38) = *(undefined8 *)(param_2 + 0x128);
  FUN_00951160(lVar4 + -0x30,param_2 + 0x130);
  uVar5 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  return;
}




void FUN_00ea6578(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
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
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_60 = "returnValue";
    local_50 = 0x100005;
    local_58 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_60);
    if (*(int *)(lVar3 + 0x10) == 3) goto LAB_00ea6638;
  }
  *(undefined4 *)(param_2 + 0x40) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea6638:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea6664(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
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
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00ea68f0;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_60);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00ea68f0;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  plVar4 = (long *)FUN_008feca4(param_1,&local_60);
  lVar3 = FUN_008fd190(plVar4,"cardSku");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00ea677c:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "cardSku";
    local_50 = 0x100005;
    local_58 = 7;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00ea677c;
    local_60 = "cardSku";
    local_50 = 0x100005;
    local_58 = 7;
    puVar6 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_008fa54c(&local_60,puVar6);
  FUN_008fce60(param_2 + 0x48,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar3 = FUN_008fd190(plVar4,"playerEssence");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_60 = "playerEssence";
    local_50 = 0x100005;
    local_58 = 0xd;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "playerEssence";
      local_50 = 0x100005;
      local_58 = 0xd;
      puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
      uVar7 = *puVar2;
    }
  }
  *(undefined4 *)(param_2 + 0x60) = uVar7;
  lVar3 = FUN_008fd190(plVar4,"cardCount");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_60 = "cardCount";
    local_50 = 0x100005;
    local_58 = 9;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "cardCount";
      local_50 = 0x100005;
      local_58 = 9;
      puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
      uVar7 = *puVar2;
    }
  }
  *(undefined4 *)(param_2 + 100) = uVar7;
  lVar3 = FUN_008fd190(plVar4,"currency");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_60 = "currency";
    local_50 = 0x100005;
    local_58 = 8;
    uVar5 = FUN_008feca4(plVar4,&local_60);
    FUN_00ea1950(uVar5,param_2 + 0x28);
  }
LAB_00ea68f0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea6948(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
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
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00ea6bd4;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_60);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00ea6bd4;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  plVar4 = (long *)FUN_008feca4(param_1,&local_60);
  lVar3 = FUN_008fd190(plVar4,"cardSku");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00ea6a60:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "cardSku";
    local_50 = 0x100005;
    local_58 = 7;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00ea6a60;
    local_60 = "cardSku";
    local_50 = 0x100005;
    local_58 = 7;
    puVar6 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
    if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_008fa54c(&local_60,puVar6);
  FUN_008fce60(param_2 + 0x48,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar3 = FUN_008fd190(plVar4,"playerEssence");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_60 = "playerEssence";
    local_50 = 0x100005;
    local_58 = 0xd;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "playerEssence";
      local_50 = 0x100005;
      local_58 = 0xd;
      puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
      uVar7 = *puVar2;
    }
  }
  *(undefined4 *)(param_2 + 0x60) = uVar7;
  lVar3 = FUN_008fd190(plVar4,"cardCount");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_60 = "cardCount";
    local_50 = 0x100005;
    local_58 = 9;
    lVar3 = FUN_008feca4(plVar4,&local_60);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_60 = "cardCount";
      local_50 = 0x100005;
      local_58 = 9;
      puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_60);
      uVar7 = *puVar2;
    }
  }
  *(undefined4 *)(param_2 + 100) = uVar7;
  lVar3 = FUN_008fd190(plVar4,"currency");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_60 = "currency";
    local_50 = 0x100005;
    local_58 = 8;
    uVar5 = FUN_008feca4(plVar4,&local_60);
    FUN_00ea1950(uVar5,param_2 + 0x28);
  }
LAB_00ea6bd4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea6c2c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  char *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  byte local_a0 [16];
  void *local_90;
  undefined4 local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b8 = "code";
  local_a8 = 0x100005;
  local_b0 = 4;
  puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_b8);
  *(undefined4 *)(param_2 + 0x50) = *puVar4;
  FUN_00954178(param_2 + 0x28,0);
  lVar5 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar5) {
    local_b8 = "returnValue";
    local_a8 = 0x100005;
    local_b0 = 0xb;
    lVar5 = FUN_008feca4(param_1,&local_b8);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_b8 = "returnValue";
      local_a8 = 0x100005;
      local_b0 = 0xb;
      plVar6 = (long *)FUN_008feca4(param_1,&local_b8);
      lVar5 = FUN_008fd190(plVar6,"chestUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_00ea6d60:
        puVar8 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b8 = "chestUUID";
        local_a8 = 0x100005;
        local_b0 = 9;
        lVar5 = FUN_008feca4(plVar6,&local_b8);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00ea6d60;
        local_b8 = "chestUUID";
        local_a8 = 0x100005;
        local_b0 = 9;
        puVar8 = (undefined8 *)FUN_008feca4(plVar6,&local_b8);
        if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      FUN_008fa54c(&local_b8,puVar8);
      FUN_008fce60(param_2 + 0x38,&local_b8);
      if (((ulong)local_b8 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_a4,local_a8));
      }
      lVar5 = FUN_008fd190(plVar6,"chestAwards");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_b8 = "chestAwards";
        local_a8 = 0x100005;
        local_b0 = 0xb;
        lVar5 = FUN_008feca4(plVar6,&local_b8);
        if (*(int *)(lVar5 + 0x10) == 4) {
          local_b8 = "chestAwards";
          local_a8 = 0x100005;
          local_b0 = 0xb;
          plVar6 = (long *)FUN_008feca4(plVar6,&local_b8);
          if ((int)plVar6[1] != 0) {
            lVar5 = 0;
            uVar9 = 0;
            do {
              plVar1 = (long *)(*plVar6 + lVar5);
              FUN_008fa54c(&local_b8,&DAT_01e277f2);
              FUN_008fa54c(local_a0,&DAT_01e277f2);
              local_88 = 0xffffffff;
              lVar7 = FUN_008fd190(plVar1,"type");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                puVar8 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_80 = "type";
                local_70 = 0x100005;
                local_78 = 4;
                lVar7 = FUN_008feca4(plVar1,&local_80);
                puVar8 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                  local_80 = "type";
                  local_70 = 0x100005;
                  local_78 = 4;
                  puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
                  if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                    puVar8 = (undefined8 *)*puVar8;
                  }
                }
              }
              FUN_008fa54c(&local_80,puVar8);
              FUN_008fce60(&local_b8,&local_80);
              if (((ulong)local_80 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_6c,local_70));
              }
              lVar7 = FUN_008fd190(plVar1,"id");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                puVar8 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_80 = "id";
                local_70 = 0x100005;
                local_78 = 2;
                lVar7 = FUN_008feca4(plVar1,&local_80);
                puVar8 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                  local_80 = "id";
                  local_70 = 0x100005;
                  local_78 = 2;
                  puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_80);
                  if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                    puVar8 = (undefined8 *)*puVar8;
                  }
                }
              }
              FUN_008fa54c(&local_80,puVar8);
              FUN_008fce60(local_a0,&local_80);
              if (((ulong)local_80 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_6c,local_70));
              }
              lVar7 = FUN_008fd190(plVar1,"amount");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                uVar3 = 0;
              }
              else {
                local_80 = "amount";
                local_70 = 0x100005;
                local_78 = 6;
                lVar7 = FUN_008feca4(plVar1,&local_80);
                uVar3 = 0;
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_80 = "amount";
                  local_70 = 0x100005;
                  local_78 = 6;
                  puVar4 = (undefined4 *)FUN_008feca4(plVar1,&local_80);
                  uVar3 = *puVar4;
                }
              }
              local_88 = uVar3;
              FUN_00ea7104(param_2 + 0x28,&local_b8);
              if ((local_a0[0] & 1) != 0) {
                operator_delete(local_90);
              }
              if (((ulong)local_b8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_a4,local_a8));
              }
              uVar9 = uVar9 + 1;
              lVar5 = lVar5 + 0x18;
            } while (uVar9 < *(uint *)(plVar6 + 1));
          }
        }
      }
      goto LAB_00ea70a0;
    }
  }
  *(undefined4 *)(param_2 + 0x50) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea70a0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

