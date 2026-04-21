// functions/00eb9 — 7 functions
#include "libGameKindred.h"




void FUN_00eb97f4(long param_1)

{
  FUN_00957938(param_1 + 0x28,0);
  FUN_009578b4(param_1 + 0x38,0);
  FUN_0095783c(param_1 + 0x48,0);
  FUN_0095783c(param_1 + 0x58,0);
  FUN_0095783c(param_1 + 0x68,0);
  FUN_0095783c(param_1 + 0x78,0);
  FUN_0095783c(param_1 + 0x88,0);
  FUN_009577b8(param_1 + 0x98,0);
  return;
}




void FUN_00eb986c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    iVar4 = 0;
  }
  else {
    local_60 = "code";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    iVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "code";
      local_50 = 0x100005;
      local_58 = 4;
      piVar3 = (int *)FUN_008feca4(param_1,&local_60);
      iVar4 = *piVar3;
    }
  }
  *(int *)(param_2 + 0x28) = iVar4;
  *(bool *)(param_2 + 0x2c) = iVar4 == 0;
  FUN_008fce60(param_2 + 0x30,&DAT_0320ffa8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb9960(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined1 local_88;
  undefined1 local_87;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00957b9c(param_2 + 0x28,0);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_a0 = "returnValue";
    local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
    local_98 = 0xb;
    lVar4 = FUN_008feca4(param_1,&local_a0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_a0 = "returnValue";
      local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
      local_98 = 0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_a0);
      lVar4 = FUN_008fd190(plVar5,"player_global_loadout");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
        local_a0 = "player_global_loadout";
        local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
        local_98 = 0x15;
        lVar4 = FUN_008feca4(plVar5,&local_a0);
        if (*(int *)(lVar4 + 0x10) == 3) {
          local_a0 = "player_global_loadout";
          local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
          local_98 = 0x15;
          plVar5 = (long *)FUN_008feca4(plVar5,&local_a0);
          lVar4 = FUN_008fd190(plVar5,"charm");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
            local_a0 = "charm";
            local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
            local_98 = 5;
            lVar4 = FUN_008feca4(plVar5,&local_a0);
            if (*(int *)(lVar4 + 0x10) == 3) {
              local_a0 = "charm";
              local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
              local_98 = 5;
              plVar5 = (long *)FUN_008feca4(plVar5,&local_a0);
              if ((int)plVar5[1] != 0) {
                puVar8 = (undefined8 *)*plVar5;
                do {
                  local_98 = 0;
                  local_90 = (void *)0x0;
                  local_a0 = (char *)0x0;
                  if ((*(uint *)(puVar8 + 2) >> 0x14 & 1) != 0) {
                    puVar7 = puVar8;
                    if ((*(uint *)(puVar8 + 2) >> 0x16 & 1) == 0) {
                      puVar7 = (undefined8 *)*puVar8;
                    }
                    FUN_008fa54c(&local_80,puVar7);
                    FUN_008fce60(&local_a0,&local_80);
                    if (((ulong)local_80 & 1) != 0) {
                      operator_delete((void *)CONCAT44(uStack_6c,local_70));
                    }
                    puVar7 = puVar8 + 3;
                    lVar4 = FUN_008fd190(puVar7,"equipped");
                    if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 == lVar4) {
                      bVar3 = false;
                    }
                    else {
                      local_80 = "equipped";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar7,&local_80);
                      bVar3 = false;
                      if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                        local_80 = "equipped";
                        local_70 = 0x100005;
                        local_78 = 8;
                        lVar4 = FUN_008feca4(puVar7,&local_80);
                        bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                      }
                    }
                    local_88 = bVar3;
                    lVar4 = FUN_008fd190(puVar7,"metadata");
                    uVar2 = local_87;
                    if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 != lVar4) {
                      local_80 = "metadata";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar7,&local_80);
                      uVar2 = local_87;
                      if (*(int *)(lVar4 + 0x10) == 3) {
                        local_80 = "metadata";
                        local_70 = 0x100005;
                        local_78 = 8;
                        plVar6 = (long *)FUN_008feca4(puVar7,&local_80);
                        lVar4 = FUN_008fd190(plVar6,"owned");
                        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
                          uVar2 = 0;
                        }
                        else {
                          local_80 = "owned";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar6,&local_80);
                          uVar2 = 0;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "owned";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar6,&local_80);
                            uVar2 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                      }
                    }
                    local_87 = uVar2;
                    FUN_00eb9d48(param_2 + 0x28,&local_a0);
                    if (((ulong)local_a0 & 1) != 0) {
                      operator_delete(local_90);
                    }
                  }
                  puVar8 = puVar8 + 6;
                } while (puVar8 != (undefined8 *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30));
              }
            }
          }
        }
      }
      goto LAB_00eb9d14;
    }
  }
  FUN_00e83324(0xfffffffa);
LAB_00eb9d14:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00eb9d48(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00957ac4(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_2 + 0x18);
  return;
}




void FUN_00eb9ddc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    iVar4 = 0;
  }
  else {
    local_60 = "code";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    iVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "code";
      local_50 = 0x100005;
      local_58 = 4;
      piVar3 = (int *)FUN_008feca4(param_1,&local_60);
      iVar4 = *piVar3;
    }
  }
  *(int *)(param_2 + 0x28) = iVar4;
  *(bool *)(param_2 + 0x2c) = iVar4 == 0;
  FUN_008fce60(param_2 + 0x30,&DAT_0320ffa8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb9ed0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    iVar4 = 0;
  }
  else {
    local_60 = "code";
    local_50 = 0x100005;
    local_58 = 4;
    lVar2 = FUN_008feca4(param_1,&local_60);
    iVar4 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "code";
      local_50 = 0x100005;
      local_58 = 4;
      piVar3 = (int *)FUN_008feca4(param_1,&local_60);
      iVar4 = *piVar3;
    }
  }
  *(int *)(param_2 + 0x28) = iVar4;
  *(bool *)(param_2 + 0x2c) = iVar4 == 0;
  FUN_008fce60(param_2 + 0x30,&DAT_0320ffa8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb9fc4(long *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  ulong local_98 [2];
  void *local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00958034(param_2 + 0x28,0);
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_a8 = "returnValue";
    local_98[0] = CONCAT44(local_98[0]._4_4_,0x100005);
    uStack_a0 = 0xb;
    lVar3 = FUN_008feca4(param_1,&local_a8);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_a8 = "returnValue";
      local_98[0] = CONCAT44(local_98[0]._4_4_,0x100005);
      uStack_a0 = 0xb;
      plVar4 = (long *)FUN_008feca4(param_1,&local_a8);
      if ((int)plVar4[1] != 0) {
        puVar9 = (undefined8 *)*plVar4;
        do {
          local_88 = (void *)0x0;
          local_98[1] = 0;
          local_98[0] = 0;
          uStack_a0 = 0;
          local_a8 = (char *)0x0;
          puVar8 = puVar9;
          if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
            puVar8 = (undefined8 *)*puVar9;
          }
          FUN_008fa54c(&local_c8,puVar8);
          FUN_008fce60(local_98,&local_c8);
          if (((ulong)local_c8 & 1) != 0) {
            operator_delete(local_b8);
          }
          local_c8 = "heroes";
          local_b8 = (void *)CONCAT44(local_b8._4_4_,0x100005);
          local_c0 = 6;
          plVar5 = (long *)FUN_008feca4(puVar9 + 3,&local_c8);
          if ((int)plVar5[1] != 0) {
            puVar8 = (undefined8 *)*plVar5;
            do {
              local_c0 = 0;
              local_b8 = (void *)0x0;
              local_c8 = (char *)0x0;
              if ((*(uint *)(puVar8 + 2) >> 0x14 & 1) != 0) {
                puVar7 = puVar8;
                if ((*(uint *)(puVar8 + 2) >> 0x16 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar8;
                }
                FUN_008fa54c(&local_80,puVar7);
                FUN_008fce60(&local_c8,&local_80);
                if (((ulong)local_80 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_6c,local_70));
                }
                puVar7 = puVar8 + 3;
                lVar3 = FUN_008fd190(puVar7,"mastery");
                if (puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 == lVar3) {
                  uVar2 = 0;
                }
                else {
                  local_80 = "mastery";
                  local_70 = 0x100005;
                  local_78 = 7;
                  lVar3 = FUN_008feca4(puVar7,&local_80);
                  uVar2 = 0;
                  if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
                    local_80 = "mastery";
                    local_70 = 0x100005;
                    local_78 = 7;
                    puVar6 = (undefined4 *)FUN_008feca4(puVar7,&local_80);
                    uVar2 = *puVar6;
                  }
                }
                local_b0 = uVar2;
                FUN_00eba290(&local_a8,&local_c8);
                if (((ulong)local_c8 & 1) != 0) {
                  operator_delete(local_b8);
                }
              }
              puVar8 = puVar8 + 6;
            } while (puVar8 != (undefined8 *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30));
          }
          FUN_00eba324(param_2 + 0x28,&local_a8);
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          FUN_00957fbc(&local_a8,1);
          puVar9 = puVar9 + 6;
        } while (puVar9 != (undefined8 *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30));
      }
      goto LAB_00eba258;
    }
  }
  FUN_00e83324(0xfffffffa);
LAB_00eba258:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

