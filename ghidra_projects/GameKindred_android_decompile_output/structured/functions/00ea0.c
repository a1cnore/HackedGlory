// functions/00ea0 — 6 functions
#include "libGameKindred.h"




void FUN_00ea09d4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00eba460(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_008fcdb8(lVar4 + -0x38,param_2);
  *(undefined4 *)(lVar4 + -0x20) = *(undefined4 *)(param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x20);
  return;
}




void FUN_00ea0a78(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_b0 [16];
  void *local_a0;
  undefined8 local_98;
  void *pvStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0;
  uStack_70 = 0x100;
  local_68 = &local_98;
  uStack_60 = 0;
  local_88 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  local_98 = 0;
  uStack_80 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  local_50 = (void *)0x0;
  local_38 = 0x200;
  local_30 = 0;
  FUN_00914ff4(param_1,&local_68);
  uVar2 = FUN_009155f8(&local_98);
  FUN_008fa54c(local_b0,uVar2);
  FUN_008fce60(param_2 + 0x28,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  free(local_50);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  free(local_88);
  if (pvStack_90 != (void *)0x0) {
    operator_delete(pvStack_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea0b50(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte local_a0 [16];
  void *local_90;
  undefined1 auStack_88 [8];
  byte *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (byte *)0x1bf2e12;
  local_70 = 0x100005;
  local_78 = 4;
  puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_80);
  *(undefined4 *)(param_2 + 0x40) = *puVar3;
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_80 = (byte *)0x1b9359b;
    local_70 = 0x100005;
    local_78 = 0xb;
    lVar4 = FUN_008feca4(param_1,&local_80);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_80 = (byte *)0x1b9359b;
      local_70 = 0x100005;
      local_78 = 0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_80);
      lVar4 = FUN_008fd190(plVar5,"ownedCards");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
        *(undefined4 *)(param_2 + 0x40) = 0xfffffffa;
        FUN_00e83324(0xfffffffa);
      }
      else {
        FUN_00948ab4(param_2 + 0x28,*(undefined8 *)(param_2 + 0x30));
        *(undefined8 **)(param_2 + 0x28) = (undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        local_80 = (byte *)0x1bf08f0;
        local_70 = 0x100005;
        local_78 = 10;
        plVar5 = (long *)FUN_008feca4(plVar5,&local_80);
        if ((int)plVar5[1] != 0) {
          lVar4 = 0;
          uVar8 = 0;
          do {
            lVar7 = *plVar5;
            local_70 = 0x100005;
            local_80 = (byte *)0x1bc5825;
            local_78 = 6;
            plVar6 = (long *)FUN_008feca4(lVar7 + lVar4,&local_80);
            if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
              plVar6 = (long *)*plVar6;
            }
            FUN_008fa54c(local_a0,plVar6);
            local_80 = (byte *)0x1e212c7;
            local_70 = 0x100005;
            local_78 = 6;
            puVar3 = (undefined4 *)FUN_008feca4(lVar7 + lVar4,&local_80);
            uVar1 = *puVar3;
            local_80 = local_a0;
            lVar7 = FUN_00beba90(param_2 + 0x28,local_a0,&DAT_01bf11c8,&local_80,auStack_88);
            *(undefined4 *)(lVar7 + 0x38) = uVar1;
            if ((local_a0[0] & 1) != 0) {
              operator_delete(local_90);
            }
            uVar8 = uVar8 + 1;
            lVar4 = lVar4 + 0x18;
          } while (uVar8 < *(uint *)(plVar5 + 1));
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ea0d9c(long *param_1,long param_2)

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




void FUN_00ea0ec0(long *param_1,long param_2)

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




void FUN_00ea0fe4(long *param_1,long param_2)

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

