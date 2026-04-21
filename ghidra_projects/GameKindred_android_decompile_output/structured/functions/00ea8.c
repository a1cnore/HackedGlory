// functions/00ea8 — 6 functions
#include "libGameKindred.h"




void FUN_00ea81f4(uint *param_1,long param_2)

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
    FUN_00eba5e8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_008fcdb8(lVar4 + -0x30,param_2);
  thunk_FUN_00e7051c(lVar4 + -0x18,param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_00ea829c(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
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
  *(undefined4 *)(param_2 + 0x28) = *puVar2;
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
      local_60 = 0x100005;
      local_70 = "success";
      local_68 = 7;
      lVar3 = FUN_008feca4(plVar4,&local_70);
      *(bool *)(param_2 + 0x494) = *(int *)(lVar3 + 0x10) == 0x102;
      if ((*(byte *)(param_2 + 0x460) & 1) == 0) {
        *(undefined2 *)(param_2 + 0x460) = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x470) = 0;
        *(undefined8 *)(param_2 + 0x468) = 0;
      }
      if ((*(byte *)(param_2 + 0x478) & 1) == 0) {
        *(undefined2 *)(param_2 + 0x478) = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x488) = 0;
        *(undefined8 *)(param_2 + 0x480) = 0;
      }
      *(undefined4 *)(param_2 + 0x490) = 0;
      if (*(char *)(param_2 + 0x494) == '\0') {
        lVar3 = FUN_008fd190(plVar4,"reason");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
          local_70 = "reason";
          local_60 = 0x100005;
          local_68 = 6;
          plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
          if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
            plVar5 = (long *)*plVar5;
          }
          FUN_008fa54c(&local_70,plVar5);
          FUN_008fce60((undefined2 *)(param_2 + 0x460),&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_5c,local_60));
          }
        }
        lVar3 = FUN_008fd190(plVar4,"banReason");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
          local_70 = "banReason";
          local_60 = 0x100005;
          local_68 = 9;
          plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
          if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
            plVar5 = (long *)*plVar5;
          }
          FUN_008fa54c(&local_70,plVar5);
          FUN_008fce60((undefined2 *)(param_2 + 0x478),&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_5c,local_60));
          }
        }
        lVar3 = FUN_008fd190(plVar4,"banRemainingSeconds");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
          local_70 = "banRemainingSeconds";
          local_60 = 0x100005;
          local_68 = 0x13;
          puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_70);
          *(undefined4 *)(param_2 + 0x490) = *puVar2;
        }
      }
      goto LAB_00ea8544;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea8544:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea8574(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
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
  *(undefined4 *)(param_2 + 0x50) = *puVar2;
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
      local_60 = 0x100005;
      local_70 = "success";
      local_68 = 7;
      lVar3 = FUN_008feca4(plVar4,&local_70);
      *(bool *)(param_2 + 0x4bc) = *(int *)(lVar3 + 0x10) == 0x102;
      if ((*(byte *)(param_2 + 0x488) & 1) == 0) {
        *(undefined2 *)(param_2 + 0x488) = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x498) = 0;
        *(undefined8 *)(param_2 + 0x490) = 0;
      }
      if ((*(byte *)(param_2 + 0x4a0) & 1) == 0) {
        *(undefined2 *)(param_2 + 0x4a0) = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x4b0) = 0;
        *(undefined8 *)(param_2 + 0x4a8) = 0;
      }
      *(undefined4 *)(param_2 + 0x4b8) = 0;
      if (*(char *)(param_2 + 0x4bc) == '\0') {
        lVar3 = FUN_008fd190(plVar4,"reason");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
          local_70 = "reason";
          local_60 = 0x100005;
          local_68 = 6;
          plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
          if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
            plVar5 = (long *)*plVar5;
          }
          FUN_008fa54c(&local_70,plVar5);
          FUN_008fce60((undefined2 *)(param_2 + 0x488),&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_5c,local_60));
          }
        }
        lVar3 = FUN_008fd190(plVar4,"banReason");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
          local_70 = "banReason";
          local_60 = 0x100005;
          local_68 = 9;
          plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
          if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
            plVar5 = (long *)*plVar5;
          }
          FUN_008fa54c(&local_70,plVar5);
          FUN_008fce60((undefined2 *)(param_2 + 0x4a0),&local_70);
          if (((ulong)local_70 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_5c,local_60));
          }
        }
        lVar3 = FUN_008fd190(plVar4,"banRemainingSeconds");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
          local_70 = "banRemainingSeconds";
          local_60 = 0x100005;
          local_68 = 0x13;
          puVar2 = (undefined4 *)FUN_008feca4(plVar4,&local_70);
          *(undefined4 *)(param_2 + 0x4b8) = *puVar2;
        }
      }
      goto LAB_00ea881c;
    }
  }
  *(undefined4 *)(param_2 + 0x50) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea881c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea884c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  char *local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = "code";
  local_30 = 0x100005;
  local_38 = 4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_40);
  *(undefined4 *)(param_2 + 0x28) = *puVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ea88c0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  char *local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  byte local_e8;
  undefined1 local_e7;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_110 = "code";
  local_100 = (void *)CONCAT44(local_100._4_4_,0x100005);
  local_108 = 4;
  puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_110);
  *(undefined4 *)(param_2 + 0x84) = *puVar5;
  lVar6 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar6) goto LAB_00ea8e6c;
  local_110 = "returnValue";
  local_100 = (void *)CONCAT44(local_100._4_4_,0x100005);
  local_108 = 0xb;
  lVar6 = FUN_008feca4(param_1,&local_110);
  if (*(int *)(lVar6 + 0x10) != 3) goto LAB_00ea8e6c;
  local_110 = (char *)0x0;
  local_108 = 0;
  local_100 = (void *)0x0;
  FUN_00e70510();
  memset(local_d0,0,0x48);
  local_88 = "returnValue";
  local_78 = 0x100005;
  local_80 = 0xb;
  plVar7 = (long *)FUN_008feca4(param_1,&local_88);
  local_78 = 0x100005;
  local_88 = "success";
  local_80 = 7;
  lVar6 = FUN_008feca4(plVar7,&local_88);
  bVar4 = *(int *)(lVar6 + 0x10) == 0x102;
  *(bool *)(param_2 + 0x80) = bVar4;
  if (bVar4) {
    local_78 = 0x100005;
    local_88 = "partyQueueMode";
    local_80 = 0xe;
    plVar8 = (long *)FUN_008feca4(plVar7,&local_88);
    if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
      plVar8 = (long *)*plVar8;
    }
    FUN_008fa54c(&local_88,plVar8);
    FUN_008fce60(param_2 + 0x40,&local_88);
    if (((ulong)local_88 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_74,local_78));
    }
    lVar6 = FUN_008fd190(plVar7,"partyQueueDifficulty");
    if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) {
LAB_00ea8a9c:
      puVar12 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_88 = "partyQueueDifficulty";
      local_78 = 0x100005;
      local_80 = 0x14;
      lVar6 = FUN_008feca4(plVar7,&local_88);
      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_00ea8a9c;
      local_88 = "partyQueueDifficulty";
      local_78 = 0x100005;
      local_80 = 0x14;
      puVar12 = (undefined8 *)FUN_008feca4(plVar7,&local_88);
      if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
        puVar12 = (undefined8 *)*puVar12;
      }
    }
    FUN_008fa54c(&local_88,puVar12);
    FUN_008fce60(param_2 + 0x58,&local_88);
    if (((ulong)local_88 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_74,local_78));
    }
    lVar6 = FUN_008fd190(plVar7,"members");
    if ((*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6) ||
       (lVar6 = FUN_008fd190(plVar7,"partyUUID"),
       *plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar6)) {
      *(undefined4 *)(param_2 + 0x84) = 0xfffffffa;
      FUN_00e83324(0xfffffffa);
    }
    else {
      local_88 = "partyUUID";
      local_78 = 0x100005;
      local_80 = 9;
      plVar8 = (long *)FUN_008feca4(plVar7,&local_88);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
      FUN_008fa54c(&local_88,plVar8);
      FUN_008fce60(param_2 + 0x28,&local_88);
      if (((ulong)local_88 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_74,local_78));
      }
      FUN_00952050(param_2 + 0x70,0);
      local_88 = "members";
      local_78 = 0x100005;
      local_80 = 7;
      plVar7 = (long *)FUN_008feca4(plVar7,&local_88);
      uVar14 = (ulong)*(uint *)(plVar7 + 1);
      if (0 < (int)*(uint *)(plVar7 + 1)) {
        lVar6 = 0;
        do {
          lVar13 = *plVar7;
          local_88 = "handle";
          lVar1 = lVar13 + lVar6;
          local_78 = 0x100005;
          local_80 = 6;
          plVar8 = (long *)FUN_008feca4(lVar1,&local_88);
          if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
            plVar8 = (long *)*plVar8;
          }
          FUN_00e705a0(&local_f8,plVar8);
          lVar9 = FUN_008fd190(lVar1,"isDev");
          plVar8 = (long *)(lVar13 + lVar6);
          if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar9) {
            bVar4 = false;
          }
          else {
            local_88 = "isDev";
            local_78 = 0x100005;
            local_80 = 5;
            lVar13 = FUN_008feca4(lVar1,&local_88);
            bVar4 = *(int *)(lVar13 + 0x10) == 0x102;
          }
          local_e8 = local_e8 & 0xfe | bVar4;
          local_78 = 0x100005;
          local_88 = "uuid";
          local_80 = 4;
          plVar10 = (long *)FUN_008feca4(lVar1,&local_88);
          if ((*(byte *)((long)plVar10 + 0x12) >> 6 & 1) == 0) {
            plVar10 = (long *)*plVar10;
          }
          FUN_008fa54c(&local_88,plVar10);
          FUN_008fce60(&local_110,&local_88);
          if (((ulong)local_88 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_74,local_78));
          }
          local_78 = 0x100005;
          local_88 = "isCaptain";
          local_80 = 9;
          piVar11 = (int *)FUN_008feca4(lVar1,&local_88);
          local_e7 = *piVar11 == 1;
          local_78 = 0x100005;
          local_88 = "status";
          local_80 = 6;
          puVar5 = (undefined4 *)FUN_008feca4(lVar1,&local_88);
          local_e4 = *puVar5;
          local_78 = 0x100005;
          local_88 = "team";
          local_80 = 4;
          puVar5 = (undefined4 *)FUN_008feca4(lVar1,&local_88);
          local_e0 = *puVar5;
          local_78 = 0x100005;
          local_88 = "slot";
          local_80 = 4;
          puVar5 = (undefined4 *)FUN_008feca4(lVar1,&local_88);
          local_dc = *puVar5;
          lVar13 = FUN_008fd190(lVar1,"qbanLevel");
          if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar13) {
            uVar3 = 0;
          }
          else {
            local_88 = "qbanLevel";
            local_78 = 0x100005;
            local_80 = 9;
            lVar13 = FUN_008feca4(lVar1,&local_88);
            uVar3 = 0;
            if ((*(byte *)(lVar13 + 0x11) >> 2 & 1) != 0) {
              local_88 = "qbanLevel";
              local_78 = 0x100005;
              local_80 = 9;
              puVar5 = (undefined4 *)FUN_008feca4(lVar1,&local_88);
              uVar3 = *puVar5;
            }
          }
          local_d8 = uVar3;
          FUN_009ff6c4(param_2 + 0x70,&local_110);
          uVar14 = uVar14 - 1;
          lVar6 = lVar6 + 0x18;
        } while (uVar14 != 0);
      }
    }
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
  }
  if (((ulong)local_110 & 1) != 0) {
    operator_delete(local_100);
  }
LAB_00ea8e6c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ea8ecc(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  char *local_d8;
  void *local_d0;
  uint local_c8 [4];
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_d8 = "code";
  local_c8[0] = 0x100005;
  local_d0 = (void *)0x4;
  puVar2 = (undefined4 *)FUN_008feca4(param_1,&local_d8);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_d8 = "returnValue";
    local_c8[0] = 0x100005;
    local_d0 = (void *)0xb;
    lVar3 = FUN_008feca4(param_1,&local_d8);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_00e70510(&local_d8);
      memset(local_c8,0,0x48);
      local_80 = "returnValue";
      local_70 = 0x100005;
      local_78 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_80);
      lVar3 = FUN_008fd190(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
        FUN_00e83324(0xfffffffa);
      }
      else {
        FUN_00964d9c(param_2 + 0x28,0);
        local_80 = "pending";
        local_70 = 0x100005;
        local_78 = 7;
        plVar4 = (long *)FUN_008feca4(plVar4,&local_80);
        if ((int)plVar4[1] != 0) {
          lVar3 = 0;
          uVar8 = 0;
          do {
            plVar7 = (long *)(*plVar4 + lVar3);
            lVar5 = FUN_008fd190(plVar7,"handle");
            if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar5) {
              local_80 = "handle";
              local_70 = 0x100005;
              local_78 = 6;
              lVar5 = FUN_008feca4(plVar7,&local_80);
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_80 = "handle";
                local_70 = 0x100005;
                local_78 = 6;
                plVar6 = (long *)FUN_008feca4(plVar7,&local_80);
                if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
                  plVar6 = (long *)*plVar6;
                }
                FUN_00e705a0(&local_d8,plVar6);
                local_80 = "uuid";
                local_70 = 0x100005;
                local_78 = 4;
                plVar6 = (long *)FUN_008feca4(plVar7,&local_80);
                if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
                  plVar6 = (long *)*plVar6;
                }
                FUN_008fa54c(&local_80,plVar6);
                FUN_008fce60(local_c8,&local_80);
                if (((ulong)local_80 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_6c,local_70));
                }
                local_80 = "partyUuid";
                local_70 = 0x100005;
                local_78 = 9;
                plVar6 = (long *)FUN_008feca4(plVar7,&local_80);
                if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
                  plVar6 = (long *)*plVar6;
                }
                FUN_008fa54c(&local_80,plVar6);
                FUN_008fce60(local_b0,&local_80);
                if (((ulong)local_80 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_6c,local_70));
                }
                local_80 = "gameMode";
                local_70 = 0x100005;
                local_78 = 8;
                plVar7 = (long *)FUN_008feca4(plVar7,&local_80);
                if ((*(byte *)((long)plVar7 + 0x12) >> 6 & 1) == 0) {
                  plVar7 = (long *)*plVar7;
                }
                FUN_008fa54c(&local_80,plVar7);
                FUN_008fce60(local_98,&local_80);
                if (((ulong)local_80 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_6c,local_70));
                }
                FUN_00ea9274(param_2 + 0x28,&local_d8);
              }
            }
            uVar8 = uVar8 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar8 < *(uint *)(plVar4 + 1));
        }
      }
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = (char *)0x0;
        local_d0 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

