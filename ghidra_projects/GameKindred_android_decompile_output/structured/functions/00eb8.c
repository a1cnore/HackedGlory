// functions/00eb8 — 3 functions
#include "libGameKindred.h"




void FUN_00eb866c(long param_1)

{
  FUN_008fce60(param_1 + 0x38,&DAT_0320ffa8);
  FUN_00956edc(param_1 + 0x28,0);
  FUN_00951cf4(param_1 + 0x50,0);
  FUN_00951534(param_1 + 0x60,0);
  FUN_00951534(param_1 + 0x70,0);
  return;
}




void FUN_00eb86c4(uint *param_1,long param_2)

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
    FUN_00956dac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  FUN_008fcdb8(lVar4 + -0x68,param_2);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x48);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x60);
  return;
}




void FUN_00eb8784(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
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
  FUN_00eb97f4(param_2);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_b0 = "returnValue";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
    uStack_a8 = 0xb;
    lVar4 = FUN_008feca4(param_1,&local_b0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_b0 = "returnValue";
      local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
      uStack_a8 = 0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_b0);
      lVar4 = FUN_008fd190(plVar5,"player_global_loadout");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
        local_b0 = "player_global_loadout";
        local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
        uStack_a8 = 0x15;
        lVar4 = FUN_008feca4(plVar5,&local_b0);
        if (*(int *)(lVar4 + 0x10) == 3) {
          local_b0 = "player_global_loadout";
          local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
          uStack_a8 = 0x15;
          plVar5 = (long *)FUN_008feca4(plVar5,&local_b0);
          lVar4 = FUN_008fd190(plVar5,"social_ping_pack");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
            local_b0 = "social_ping_pack";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            uStack_a8 = 0x10;
            lVar4 = FUN_008feca4(plVar5,&local_b0);
            if (*(int *)(lVar4 + 0x10) == 3) {
              local_b0 = "social_ping_pack";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              uStack_a8 = 0x10;
              plVar6 = (long *)FUN_008feca4(plVar5,&local_b0);
              if ((int)plVar6[1] != 0) {
                puVar9 = (undefined8 *)*plVar6;
                do {
                  uStack_a8 = 0;
                  local_a0 = (void *)0x0;
                  local_b0 = (char *)0x0;
                  if ((*(uint *)(puVar9 + 2) >> 0x14 & 1) != 0) {
                    puVar8 = puVar9;
                    if ((*(uint *)(puVar9 + 2) >> 0x16 & 1) == 0) {
                      puVar8 = (undefined8 *)*puVar9;
                    }
                    FUN_008fa54c(&local_80,puVar8);
                    FUN_008fce60(&local_b0,&local_80);
                    if (((ulong)local_80 & 1) != 0) {
                      operator_delete((void *)CONCAT44(uStack_6c,local_70));
                    }
                    puVar8 = puVar9 + 3;
                    lVar4 = FUN_008fd190(puVar8,"equipped");
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 == lVar4) {
                      bVar3 = false;
                    }
                    else {
                      local_80 = "equipped";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      bVar3 = false;
                      if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                        local_80 = "equipped";
                        local_70 = 0x100005;
                        local_78 = 8;
                        lVar4 = FUN_008feca4(puVar8,&local_80);
                        bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                      }
                    }
                    local_98 = CONCAT71(local_98._1_7_,bVar3);
                    lVar4 = FUN_008fd190(puVar8,"metadata");
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 != lVar4) {
                      local_70 = 0x100005;
                      local_80 = "metadata";
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      if (*(int *)(lVar4 + 0x10) == 3) {
                        local_70 = 0x100005;
                        local_80 = "metadata";
                        local_78 = 8;
                        plVar7 = (long *)FUN_008feca4(puVar8,&local_80);
                        lVar4 = FUN_008fd190(plVar7,"thumbsUp");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "thumbsUp";
                          local_70 = 0x100005;
                          local_78 = 8;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "thumbsUp";
                            local_70 = 0x100005;
                            local_78 = 8;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_2_ = CONCAT11(bVar3,(undefined1)local_98);
                        lVar4 = FUN_008fd190(plVar7,"smile");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "smile";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "smile";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_3_ = CONCAT12(bVar3,(undefined2)local_98);
                        lVar4 = FUN_008fd190(plVar7,"frown");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "frown";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "frown";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_4_ = CONCAT13(bVar3,(undefined3)local_98);
                        lVar4 = FUN_008fd190(plVar7,"toast");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "toast";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "toast";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_5_ = CONCAT14(bVar3,(undefined4)local_98);
                        lVar4 = FUN_008fd190(plVar7,"ok");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "ok";
                          local_70 = 0x100005;
                          local_78 = 2;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "ok";
                            local_70 = 0x100005;
                            local_78 = 2;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_6_ = CONCAT15(bVar3,(undefined5)local_98);
                      }
                    }
                    FUN_00aa4d1c(param_2 + 0x28,&local_b0);
                    if (((ulong)local_b0 & 1) != 0) {
                      operator_delete(local_a0);
                    }
                  }
                  puVar9 = puVar9 + 6;
                } while (puVar9 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
              }
            }
          }
          lVar4 = FUN_008fd190(plVar5,"social_ping_pack");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
            local_b0 = "social_ping_pack";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            uStack_a8 = 0x10;
            lVar4 = FUN_008feca4(plVar5,&local_b0);
            if (*(int *)(lVar4 + 0x10) == 3) {
              local_b0 = "social_ping_pack";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              uStack_a8 = 0x10;
              plVar6 = (long *)FUN_008feca4(plVar5,&local_b0);
              if ((int)plVar6[1] != 0) {
                puVar9 = (undefined8 *)*plVar6;
                do {
                  uStack_a8 = 0;
                  local_a0 = (void *)0x0;
                  local_b0 = (char *)0x0;
                  if ((*(uint *)(puVar9 + 2) >> 0x14 & 1) != 0) {
                    puVar8 = puVar9;
                    if ((*(uint *)(puVar9 + 2) >> 0x16 & 1) == 0) {
                      puVar8 = (undefined8 *)*puVar9;
                    }
                    FUN_008fa54c(&local_80,puVar8);
                    FUN_008fce60(&local_b0,&local_80);
                    if (((ulong)local_80 & 1) != 0) {
                      operator_delete((void *)CONCAT44(uStack_6c,local_70));
                    }
                    puVar8 = puVar9 + 3;
                    lVar4 = FUN_008fd190(puVar8,"equipped");
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 == lVar4) {
                      bVar3 = false;
                    }
                    else {
                      local_80 = "equipped";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      bVar3 = false;
                      if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                        local_80 = "equipped";
                        local_70 = 0x100005;
                        local_78 = 8;
                        lVar4 = FUN_008feca4(puVar8,&local_80);
                        bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                      }
                    }
                    local_98 = CONCAT71(local_98._1_7_,bVar3);
                    lVar4 = FUN_008fd190(puVar8,"metadata");
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 != lVar4) {
                      local_70 = 0x100005;
                      local_80 = "metadata";
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      if (*(int *)(lVar4 + 0x10) == 3) {
                        local_70 = 0x100005;
                        local_80 = "metadata";
                        local_78 = 8;
                        plVar7 = (long *)FUN_008feca4(puVar8,&local_80);
                        lVar4 = FUN_008fd190(plVar7,"thumbsUp");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "thumbsUp";
                          local_70 = 0x100005;
                          local_78 = 8;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "thumbsUp";
                            local_70 = 0x100005;
                            local_78 = 8;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_2_ = CONCAT11(bVar3,(undefined1)local_98);
                        lVar4 = FUN_008fd190(plVar7,"smile");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "smile";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "smile";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_3_ = CONCAT12(bVar3,(undefined2)local_98);
                        lVar4 = FUN_008fd190(plVar7,"frown");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "frown";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "frown";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_4_ = CONCAT13(bVar3,(undefined3)local_98);
                        lVar4 = FUN_008fd190(plVar7,"toast");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "toast";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "toast";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_5_ = CONCAT14(bVar3,(undefined4)local_98);
                        lVar4 = FUN_008fd190(plVar7,"ok");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "ok";
                          local_70 = 0x100005;
                          local_78 = 2;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "ok";
                            local_70 = 0x100005;
                            local_78 = 2;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_6_ = CONCAT15(bVar3,(undefined5)local_98);
                      }
                    }
                    FUN_00aa4d1c(param_2 + 0x28,&local_b0);
                    if (((ulong)local_b0 & 1) != 0) {
                      operator_delete(local_a0);
                    }
                  }
                  puVar9 = puVar9 + 6;
                } while (puVar9 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
              }
            }
          }
          lVar4 = FUN_008fd190(plVar5,"charm");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
            local_b0 = "charm";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            uStack_a8 = 5;
            lVar4 = FUN_008feca4(plVar5,&local_b0);
            if (*(int *)(lVar4 + 0x10) == 3) {
              local_b0 = "charm";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              uStack_a8 = 5;
              plVar6 = (long *)FUN_008feca4(plVar5,&local_b0);
              if ((int)plVar6[1] != 0) {
                puVar9 = (undefined8 *)*plVar6;
                do {
                  uStack_a8 = 0;
                  local_a0 = (void *)0x0;
                  local_b0 = (char *)0x0;
                  if ((*(uint *)(puVar9 + 2) >> 0x14 & 1) != 0) {
                    puVar8 = puVar9;
                    if ((*(uint *)(puVar9 + 2) >> 0x16 & 1) == 0) {
                      puVar8 = (undefined8 *)*puVar9;
                    }
                    FUN_008fa54c(&local_80,puVar8);
                    FUN_008fce60(&local_b0,&local_80);
                    if (((ulong)local_80 & 1) != 0) {
                      operator_delete((void *)CONCAT44(uStack_6c,local_70));
                    }
                    puVar8 = puVar9 + 3;
                    lVar4 = FUN_008fd190(puVar8,"equipped");
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 == lVar4) {
                      bVar3 = false;
                    }
                    else {
                      local_80 = "equipped";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      bVar3 = false;
                      if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                        local_80 = "equipped";
                        local_70 = 0x100005;
                        local_78 = 8;
                        lVar4 = FUN_008feca4(puVar8,&local_80);
                        bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                      }
                    }
                    local_98 = CONCAT71(local_98._1_7_,bVar3);
                    lVar4 = FUN_008fd190(puVar8,"metadata");
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 != lVar4) {
                      local_80 = "metadata";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      if (*(int *)(lVar4 + 0x10) == 3) {
                        local_80 = "metadata";
                        local_70 = 0x100005;
                        local_78 = 8;
                        plVar7 = (long *)FUN_008feca4(puVar8,&local_80);
                        lVar4 = FUN_008fd190(plVar7,"owned");
                        if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar4) {
                          bVar3 = false;
                        }
                        else {
                          local_80 = "owned";
                          local_70 = 0x100005;
                          local_78 = 5;
                          lVar4 = FUN_008feca4(plVar7,&local_80);
                          bVar3 = false;
                          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                            local_80 = "owned";
                            local_70 = 0x100005;
                            local_78 = 5;
                            lVar4 = FUN_008feca4(plVar7,&local_80);
                            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                          }
                        }
                        local_98._0_2_ = CONCAT11(bVar3,(undefined1)local_98);
                      }
                    }
                    FUN_00aa5e20(param_2 + 0x68,&local_b0);
                    if (((ulong)local_b0 & 1) != 0) {
                      operator_delete(local_a0);
                    }
                  }
                  puVar9 = puVar9 + 6;
                } while (puVar9 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
              }
            }
          }
          lVar4 = FUN_008fd190(plVar5,"hat");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
            local_b0 = "hat";
            local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
            uStack_a8 = 3;
            lVar4 = FUN_008feca4(plVar5,&local_b0);
            if (*(int *)(lVar4 + 0x10) == 3) {
              local_b0 = "hat";
              local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
              uStack_a8 = 3;
              plVar5 = (long *)FUN_008feca4(plVar5,&local_b0);
              if ((int)plVar5[1] != 0) {
                puVar9 = (undefined8 *)*plVar5;
                do {
                  local_90 = (void *)0x0;
                  uStack_a8 = 0;
                  local_b0 = (char *)0x0;
                  local_98 = 0;
                  local_a0 = (void *)0x0;
                  if ((*(uint *)(puVar9 + 2) >> 0x14 & 1) != 0) {
                    puVar8 = puVar9;
                    if ((*(uint *)(puVar9 + 2) >> 0x16 & 1) == 0) {
                      puVar8 = (undefined8 *)*puVar9;
                    }
                    FUN_008fa54c(&local_80,puVar8);
                    FUN_008fce60(&local_a0,&local_80);
                    if (((ulong)local_80 & 1) != 0) {
                      operator_delete((void *)CONCAT44(uStack_6c,local_70));
                    }
                    puVar8 = puVar9 + 3;
                    lVar4 = FUN_008fd190(puVar8,"equipped");
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 == lVar4) {
                      bVar3 = false;
                    }
                    else {
                      local_80 = "equipped";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      bVar3 = false;
                      if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                        local_80 = "equipped";
                        local_70 = 0x100005;
                        local_78 = 8;
                        lVar4 = FUN_008feca4(puVar8,&local_80);
                        bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
                      }
                    }
                    local_88 = bVar3;
                    lVar4 = FUN_008fd190(puVar8,"metadata");
                    uVar2 = local_87;
                    if (puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30 != lVar4) {
                      local_80 = "metadata";
                      local_70 = 0x100005;
                      local_78 = 8;
                      lVar4 = FUN_008feca4(puVar8,&local_80);
                      uVar2 = local_87;
                      if (*(int *)(lVar4 + 0x10) == 3) {
                        local_80 = "metadata";
                        local_70 = 0x100005;
                        local_78 = 8;
                        plVar6 = (long *)FUN_008feca4(puVar8,&local_80);
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
                    FUN_00aa6fb8(param_2 + 0x38,&local_b0);
                    if (((ulong)local_a0 & 1) != 0) {
                      operator_delete(local_90);
                    }
                  }
                  FUN_00957578(&local_b0,1);
                  puVar9 = puVar9 + 6;
                } while (puVar9 != (undefined8 *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30));
              }
            }
          }
        }
      }
      goto LAB_00eb97c0;
    }
  }
  FUN_00e83324(0xfffffffa);
LAB_00eb97c0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

