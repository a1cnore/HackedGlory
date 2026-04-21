// functions/00eb4 — 4 functions
#include "libGameKindred.h"




void FUN_00eb4384(uint *param_1,long param_2)

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
    FUN_00ebe0dc(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined1 *)(lVar1 + -4) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_00eb4420(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  ulong uVar19;
  uint local_a0 [4];
  void *local_90;
  undefined1 auStack_88 [8];
  uint *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (uint *)0x1bf2e12;
  local_70 = 0x100005;
  local_78 = 4;
  puVar7 = (undefined4 *)FUN_008feca4(param_1,&local_80);
  *(undefined4 *)(param_2 + 0xa0) = *puVar7;
  puVar17 = (undefined8 *)(param_2 + 0x78);
  FUN_00a08748(param_2 + 0x70,*puVar17);
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *puVar17 = 0;
  puVar17 = (undefined8 *)(param_2 + 0x90);
  FUN_00a08748(param_2 + 0x88,*puVar17);
  *(undefined8 **)(param_2 + 0x88) = puVar17;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *puVar17 = 0;
  puVar17 = (undefined8 *)(param_2 + 0x60);
  FUN_00a086fc(param_2 + 0x58,*puVar17);
  *(undefined8 **)(param_2 + 0x58) = puVar17;
  *puVar17 = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  FUN_00a086fc(param_2 + 0x40,*(undefined8 *)(param_2 + 0x48));
  *(undefined8 **)(param_2 + 0x40) = (undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  lVar8 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar8) {
    local_80 = (uint *)0x1b9359b;
    local_70 = 0x100005;
    local_78 = 0xb;
    lVar8 = FUN_008feca4(param_1,&local_80);
    if (*(int *)(lVar8 + 0x10) == 3) {
      local_80 = (uint *)0x1b9359b;
      local_70 = 0x100005;
      local_78 = 0xb;
      plVar9 = (long *)FUN_008feca4(param_1,&local_80);
      lVar8 = FUN_008fd190(plVar9,"skins");
      if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar8) {
        local_80 = (uint *)0x1bb4895;
        local_70 = 0x100005;
        local_78 = 5;
        lVar8 = FUN_008feca4(plVar9,&local_80);
        if (*(int *)(lVar8 + 0x10) == 3) {
          local_80 = (uint *)0x1bb4895;
          local_70 = 0x100005;
          local_78 = 5;
          plVar10 = (long *)FUN_008feca4(plVar9,&local_80);
          if ((int)plVar10[1] != 0) {
            puVar17 = (undefined8 *)*plVar10;
            do {
              puVar14 = puVar17;
              if ((*(byte *)((long)puVar17 + 0x12) >> 6 & 1) == 0) {
                puVar14 = (undefined8 *)*puVar17;
              }
              FUN_008fa54c(local_a0,puVar14);
              puVar14 = puVar17 + 3;
              lVar8 = FUN_008fd190(puVar14,"blueprintsOwned");
              if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar8) {
                bVar6 = false;
              }
              else {
                local_70 = 0x100005;
                local_80 = (uint *)0x1bbb2a3;
                local_78 = 0xf;
                lVar8 = FUN_008feca4(puVar14,&local_80);
                bVar6 = false;
                if ((*(byte *)(lVar8 + 0x11) & 1) != 0) {
                  local_70 = 0x100005;
                  local_80 = (uint *)0x1bbb2a3;
                  local_78 = 0xf;
                  lVar8 = FUN_008feca4(puVar14,&local_80);
                  bVar6 = *(int *)(lVar8 + 0x10) == 0x102;
                }
              }
              lVar8 = FUN_008fd190(puVar14,"owned");
              if (puVar17[3] + (ulong)*(uint *)(puVar17 + 4) * 0x30 == lVar8) {
                bVar5 = false;
joined_r0x00eb4620:
                bVar3 = bVar5;
                if (!bVar6) goto LAB_00eb4774;
LAB_00eb465c:
                FUN_00a0929c(param_2 + 0x70,local_a0,local_a0);
                if (bVar5) goto LAB_00eb4778;
              }
              else {
                local_70 = 0x100005;
                local_80 = (uint *)0x1ba0e3b;
                local_78 = 5;
                lVar8 = FUN_008feca4(puVar14,&local_80);
                bVar5 = false;
                if ((*(byte *)(lVar8 + 0x11) & 1) != 0) {
                  local_70 = 0x100005;
                  local_80 = (uint *)0x1ba0e3b;
                  local_78 = 5;
                  lVar8 = FUN_008feca4(puVar14,&local_80);
                  bVar5 = *(int *)(lVar8 + 0x10) == 0x102;
                  goto joined_r0x00eb4620;
                }
                bVar3 = false;
                if (bVar6) goto LAB_00eb465c;
LAB_00eb4774:
                if (bVar3) {
LAB_00eb4778:
                  FUN_00a0929c(param_2 + 0x88,local_a0,local_a0);
                }
              }
              if ((local_a0[0] & 1) != 0) {
                operator_delete(local_90);
              }
              puVar17 = puVar17 + 6;
            } while (puVar17 != (undefined8 *)(*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30));
          }
        }
      }
      lVar8 = FUN_008fd190(plVar9,"skinTierValues");
      if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar8) {
        local_80 = (uint *)0x1bf0f7b;
        local_70 = 0x100005;
        local_78 = 0xe;
        lVar8 = FUN_008feca4(plVar9,&local_80);
        if (*(int *)(lVar8 + 0x10) == 4) {
          local_80 = (uint *)0x1bf0f7b;
          local_70 = 0x100005;
          local_78 = 0xe;
          plVar10 = (long *)FUN_008feca4(plVar9,&local_80);
          uVar15 = (ulong)*(uint *)(plVar10 + 1);
          if (*(uint *)(plVar10 + 1) != 0) {
            lVar8 = 0;
            uVar19 = 0;
            do {
              plVar1 = (long *)(*plVar10 + lVar8);
              if ((int)plVar1[2] == 3) {
                lVar11 = FUN_008fd190(plVar1,"rarity");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar11) {
                  uVar4 = 0;
                }
                else {
                  local_70 = 0x100005;
                  local_80 = (uint *)0x1b922dd;
                  local_78 = 6;
                  lVar11 = FUN_008feca4(plVar1,&local_80);
                  uVar4 = 0;
                  if ((*(byte *)(lVar11 + 0x11) >> 2 & 1) != 0) {
                    local_70 = 0x100005;
                    local_80 = (uint *)0x1b922dd;
                    local_78 = 6;
                    puVar12 = (uint *)FUN_008feca4(plVar1,&local_80);
                    uVar4 = *puVar12;
                  }
                }
                local_a0[0] = uVar4;
                lVar11 = FUN_008fd190(plVar1,"essenceGain");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar11) {
                  uVar16 = 0;
                }
                else {
                  local_70 = 0x100005;
                  local_80 = (uint *)0x1bf0bf9;
                  local_78 = 0xb;
                  lVar11 = FUN_008feca4(plVar1,&local_80);
                  uVar16 = 0;
                  if ((*(byte *)(lVar11 + 0x11) >> 2 & 1) != 0) {
                    local_70 = 0x100005;
                    local_80 = (uint *)0x1bf0bf9;
                    local_78 = 0xb;
                    puVar7 = (undefined4 *)FUN_008feca4(plVar1,&local_80);
                    uVar16 = *puVar7;
                  }
                }
                lVar11 = FUN_008fd190(plVar1,"essenceCost");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar11) {
                  uVar18 = 0;
                }
                else {
                  local_70 = 0x100005;
                  local_80 = (uint *)0x1bf0bed;
                  local_78 = 0xb;
                  lVar11 = FUN_008feca4(plVar1,&local_80);
                  uVar18 = 0;
                  if ((*(byte *)(lVar11 + 0x11) >> 2 & 1) != 0) {
                    local_70 = 0x100005;
                    local_80 = (uint *)0x1bf0bed;
                    local_78 = 0xb;
                    puVar7 = (undefined4 *)FUN_008feca4(plVar1,&local_80);
                    uVar18 = *puVar7;
                  }
                }
                local_80 = local_a0;
                lVar11 = FUN_00ebe1bc(param_2 + 0x58,local_a0,&DAT_01bf11c8,&local_80,auStack_88);
                *(undefined4 *)(lVar11 + 0x20) = uVar16;
                local_80 = local_a0;
                lVar11 = FUN_00ebe1bc(param_2 + 0x40,local_a0,&DAT_01bf11c8,&local_80,auStack_88);
                *(undefined4 *)(lVar11 + 0x20) = uVar18;
                uVar15 = (ulong)*(uint *)(plVar10 + 1);
              }
              uVar19 = uVar19 + 1;
              lVar8 = lVar8 + 0x18;
            } while (uVar19 < uVar15);
          }
        }
      }
      lVar8 = FUN_008fd190(plVar9,"currencies");
      if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar8) {
        local_80 = (uint *)0x1bf0917;
        local_70 = 0x100005;
        local_78 = 10;
        lVar8 = FUN_008feca4(plVar9,&local_80);
        if (*(int *)(lVar8 + 0x10) == 3) {
          local_80 = (uint *)0x1bf0917;
          local_70 = 0x100005;
          local_78 = 10;
          uVar13 = FUN_008feca4(plVar9,&local_80);
          FUN_00ea1950(uVar13,param_2 + 0x28);
        }
      }
      goto LAB_00eb4b10;
    }
  }
  *(undefined4 *)(param_2 + 0xa0) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00eb4b10:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb4b44(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
      *(bool *)(param_2 + 0x58) = bVar2;
      lVar3 = FUN_008fd190(plVar4,"skinId");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eb4cec:
        puVar6 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_60 = "skinId";
        local_50 = 0x100005;
        local_58 = 6;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eb4cec;
        local_60 = "skinId";
        local_50 = 0x100005;
        local_58 = 6;
        puVar6 = (undefined8 *)FUN_008feca4(plVar4,&local_60);
        if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
          puVar6 = (undefined8 *)*puVar6;
        }
      }
      FUN_008fa54c(&local_60,puVar6);
      FUN_008fce60(param_2 + 0x40,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
      lVar3 = FUN_008fd190(plVar4,"currencies");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_60 = "currencies";
        local_50 = 0x100005;
        local_58 = 10;
        lVar3 = FUN_008feca4(plVar4,&local_60);
        if (*(int *)(lVar3 + 0x10) == 3) {
          local_60 = "currencies";
          local_50 = 0x100005;
          local_58 = 10;
          uVar5 = FUN_008feca4(plVar4,&local_60);
          FUN_00ea1950(uVar5,param_2 + 0x28);
        }
      }
      goto LAB_00eb4c6c;
    }
  }
  *(undefined4 *)(param_2 + 0x5c) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00eb4c6c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb4dc0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  double dVar15;
  ulong local_108 [2];
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  void *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a0;
  char *local_98;
  void *local_90;
  undefined4 local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  FUN_00955c58(param_2 + 0x28,0);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_d8 = "returnValue";
    local_c8 = 0x100005;
    local_d0 = (void *)0xb;
    lVar4 = FUN_008feca4(param_1,&local_d8);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_d8 = "returnValue";
      local_c8 = 0x100005;
      local_d0 = (void *)0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_d8);
      if ((int)plVar5[1] != 0) {
        puVar14 = (undefined8 *)*plVar5;
        do {
          local_e8 = 0;
          uStack_f0 = 0;
          local_f8 = (void *)0x0;
          local_108[1] = 0;
          local_108[0] = 0;
          puVar11 = puVar14;
          if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
            puVar11 = (undefined8 *)*puVar14;
          }
          FUN_008fa54c(&local_d8,puVar11);
          FUN_008fce60(local_108,&local_d8);
          if (((ulong)local_d8 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_c4,local_c8));
          }
          if (*(int *)(puVar14 + 5) == 3) {
            puVar11 = puVar14 + 3;
            lVar4 = FUN_008fd190(puVar11,"lastUpdated");
            if (puVar14[3] + (ulong)*(uint *)(puVar14 + 4) * 0x30 == lVar4) {
              uVar12 = 0;
            }
            else {
              local_d8 = "lastUpdated";
              local_c8 = 0x100005;
              local_d0 = (void *)0xb;
              lVar4 = FUN_008feca4(puVar11,&local_d8);
              uVar12 = 0;
              if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) != 0) {
                local_d8 = "lastUpdated";
                local_c8 = 0x100005;
                local_d0 = (void *)0xb;
                puVar6 = (undefined8 *)FUN_008feca4(puVar11,&local_d8);
                uVar12 = *puVar6;
              }
            }
            local_e0 = uVar12;
            lVar4 = FUN_008fd190(puVar11,"leaders");
            if (puVar14[3] + (ulong)*(uint *)(puVar14 + 4) * 0x30 != lVar4) {
              local_d8 = "leaders";
              local_c8 = 0x100005;
              local_d0 = (void *)0x7;
              lVar4 = FUN_008feca4(puVar11,&local_d8);
              if (*(int *)(lVar4 + 0x10) == 4) {
                local_d8 = "leaders";
                local_c8 = 0x100005;
                local_d0 = (void *)0x7;
                plVar7 = (long *)FUN_008feca4(puVar11,&local_d8);
                if ((int)plVar7[1] != 0) {
                  lVar4 = 0;
                  uVar13 = 0;
                  do {
                    plVar1 = (long *)(*plVar7 + lVar4);
                    if (((int)plVar1[2] == 3) &&
                       (lVar8 = FUN_008fd190(plVar1,"rank"),
                       *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar8)) {
                      local_d8 = "rank";
                      local_c8 = 0x100005;
                      local_d0 = (void *)0x4;
                      lVar8 = FUN_008feca4(plVar1,&local_d8);
                      if (((*(byte *)(lVar8 + 0x11) >> 2 & 1) != 0) &&
                         (lVar8 = FUN_008fd190(plVar1,"name"),
                         *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar8)) {
                        local_d8 = "name";
                        local_c8 = 0x100005;
                        local_d0 = (void *)0x4;
                        lVar8 = FUN_008feca4(plVar1,&local_d8);
                        if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                          lVar8 = FUN_008fd190(plVar1,"score");
                          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
LAB_00eb5130:
                            lVar8 = FUN_008fd190(plVar1,"earnedElos");
                            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar8) {
                              local_d8 = "earnedElos";
                              local_c8 = 0x100005;
                              local_d0 = (void *)0xa;
                              lVar8 = FUN_008feca4(plVar1,&local_d8);
                              if (*(int *)(lVar8 + 0x10) == 3) goto LAB_00eb5188;
                            }
                          }
                          else {
                            local_d8 = "score";
                            local_c8 = 0x100005;
                            local_d0 = (void *)0x5;
                            lVar8 = FUN_008feca4(plVar1,&local_d8);
                            if ((*(byte *)(lVar8 + 0x11) >> 1 & 1) == 0) goto LAB_00eb5130;
LAB_00eb5188:
                            FUN_00e70510(&local_d8);
                            FUN_00e70960(&local_d8);
                            local_c8 = 0;
                            uStack_c4 = uStack_c4 & 0xffffff00;
                            local_a0 = 0;
                            uStack_b4 = 0;
                            fStack_b8 = 0.0;
                            fStack_bc = 0.0;
                            local_c0 = 0;
                            local_a8 = 0.0;
                            local_ac = 0;
                            local_b0 = 0.0;
                            local_98 = "name";
                            local_88 = 0x100005;
                            local_90 = (void *)0x4;
                            plVar9 = (long *)FUN_008feca4(plVar1,&local_98);
                            if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
                              plVar9 = (long *)*plVar9;
                            }
                            FUN_00e705c8(&local_98,plVar9);
                            FUN_00910394(&local_d8,&local_98);
                            if (local_90 != (void *)0x0) {
                              operator_delete__(local_90);
                              local_98 = (char *)0x0;
                              local_90 = (void *)0x0;
                            }
                            fStack_bc = 0.0;
                            lVar8 = FUN_008fd190(plVar1,"earnedElos");
                            uVar3 = local_a0;
                            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar8) {
                              local_98 = "earnedElos";
                              local_88 = 0x100005;
                              local_90 = (void *)0xa;
                              lVar8 = FUN_008feca4(plVar1,&local_98);
                              uVar3 = local_a0;
                              if (*(int *)(lVar8 + 0x10) == 3) {
                                local_88 = 0x100005;
                                local_98 = "earnedElos";
                                local_90 = (void *)0xa;
                                plVar9 = (long *)FUN_008feca4(plVar1,&local_98);
                                lVar8 = FUN_008fd190(plVar9,"earnedElo5v5");
                                dVar15 = 0.0;
                                if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar8) {
                                  local_88 = 0x100005;
                                  local_98 = "earnedElo5v5";
                                  local_90 = (void *)0xc;
                                  lVar8 = FUN_008feca4(plVar9,&local_98);
                                  if ((*(byte *)(lVar8 + 0x11) >> 1 & 1) != 0) {
                                    local_88 = 0x100005;
                                    local_98 = "earnedElo5v5";
                                    local_90 = (void *)0xc;
                                    FUN_008feca4(plVar9,&local_98);
                                    dVar15 = (double)FUN_008fc0f0();
                                  }
                                }
                                fStack_b8 = (float)dVar15;
                                lVar8 = FUN_008fd190(plVar9,"skillTier5v5");
                                if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 == lVar8) {
                                  uVar3 = 0;
                                }
                                else {
                                  local_88 = 0x100005;
                                  local_98 = "skillTier5v5";
                                  local_90 = (void *)0xc;
                                  lVar8 = FUN_008feca4(plVar9,&local_98);
                                  uVar3 = 0;
                                  if ((*(byte *)(lVar8 + 0x11) >> 2 & 1) != 0) {
                                    local_88 = 0x100005;
                                    local_98 = "skillTier5v5";
                                    local_90 = (void *)0xc;
                                    puVar10 = (undefined4 *)FUN_008feca4(plVar9,&local_98);
                                    uVar3 = *puVar10;
                                  }
                                }
                                uStack_b4 = uVar3;
                                lVar8 = FUN_008fd190(plVar9,"earnedElo3v3");
                                dVar15 = 0.0;
                                if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar8) {
                                  local_88 = 0x100005;
                                  local_98 = "earnedElo3v3";
                                  local_90 = (void *)0xc;
                                  lVar8 = FUN_008feca4(plVar9,&local_98);
                                  if ((*(byte *)(lVar8 + 0x11) >> 1 & 1) != 0) {
                                    local_88 = 0x100005;
                                    local_98 = "earnedElo3v3";
                                    local_90 = (void *)0xc;
                                    FUN_008feca4(plVar9,&local_98);
                                    dVar15 = (double)FUN_008fc0f0();
                                  }
                                }
                                local_b0 = (float)dVar15;
                                lVar8 = FUN_008fd190(plVar9,"skillTier3v3");
                                if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 == lVar8) {
                                  uVar3 = 0;
                                }
                                else {
                                  local_88 = 0x100005;
                                  local_98 = "skillTier3v3";
                                  local_90 = (void *)0xc;
                                  lVar8 = FUN_008feca4(plVar9,&local_98);
                                  uVar3 = 0;
                                  if ((*(byte *)(lVar8 + 0x11) >> 2 & 1) != 0) {
                                    local_88 = 0x100005;
                                    local_98 = "skillTier3v3";
                                    local_90 = (void *)0xc;
                                    puVar10 = (undefined4 *)FUN_008feca4(plVar9,&local_98);
                                    uVar3 = *puVar10;
                                  }
                                }
                                local_ac = uVar3;
                                lVar8 = FUN_008fd190(plVar9,"earnedEloBlitz");
                                dVar15 = 0.0;
                                if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar8) {
                                  local_88 = 0x100005;
                                  local_98 = "earnedEloBlitz";
                                  local_90 = (void *)0xe;
                                  lVar8 = FUN_008feca4(plVar9,&local_98);
                                  if ((*(byte *)(lVar8 + 0x11) >> 1 & 1) != 0) {
                                    local_88 = 0x100005;
                                    local_98 = "earnedEloBlitz";
                                    local_90 = (void *)0xe;
                                    FUN_008feca4(plVar9,&local_98);
                                    dVar15 = (double)FUN_008fc0f0();
                                  }
                                }
                                local_a8 = (float)dVar15;
                                lVar8 = FUN_008fd190(plVar9,"seasonWins");
                                if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 == lVar8) {
                                  uVar3 = 0;
                                }
                                else {
                                  local_88 = 0x100005;
                                  local_98 = "seasonWins";
                                  local_90 = (void *)0xa;
                                  lVar8 = FUN_008feca4(plVar9,&local_98);
                                  uVar3 = 0;
                                  if ((*(byte *)(lVar8 + 0x11) >> 2 & 1) != 0) {
                                    local_88 = 0x100005;
                                    local_98 = "seasonWins";
                                    local_90 = (void *)0xa;
                                    puVar10 = (undefined4 *)FUN_008feca4(plVar9,&local_98);
                                    uVar3 = *puVar10;
                                  }
                                }
                              }
                            }
                            local_a0 = uVar3;
                            lVar8 = FUN_008fd190(plVar1,"score");
                            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar8) {
                              local_98 = "score";
                              local_88 = 0x100005;
                              local_90 = (void *)0x5;
                              lVar8 = FUN_008feca4(plVar1,&local_98);
                              if ((*(byte *)(lVar8 + 0x11) >> 1 & 1) != 0) {
                                local_98 = "score";
                                local_88 = 0x100005;
                                local_90 = (void *)0x5;
                                FUN_008feca4(plVar1,&local_98);
                                dVar15 = (double)FUN_008fc0f0();
                                fStack_bc = (float)dVar15;
                              }
                            }
                            local_98 = "rank";
                            local_88 = 0x100005;
                            local_90 = (void *)0x4;
                            puVar10 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
                            local_c8 = *puVar10;
                            lVar8 = FUN_008fd190(plVar1,"rankDelta");
                            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                              uStack_c4 = uStack_c4 & 0xffffff00;
                              uVar3 = 0;
                            }
                            else {
                              local_88 = 0x100005;
                              local_98 = "rankDelta";
                              local_90 = (void *)0x9;
                              lVar8 = FUN_008feca4(plVar1,&local_98);
                              uStack_c4 = CONCAT31(uStack_c4._1_3_,
                                                   (char)(*(uint *)(lVar8 + 0x10) >> 10)) &
                                          0xffffff01;
                              uVar3 = 0;
                              if ((*(uint *)(lVar8 + 0x10) >> 10 & 1) != 0) {
                                local_98 = "rankDelta";
                                local_88 = 0x100005;
                                local_90 = (void *)0x9;
                                puVar10 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
                                uVar3 = *puVar10;
                              }
                            }
                            local_c0 = uVar3;
                            FUN_009f86f8(&uStack_f0,&local_d8);
                            if (local_d0 != (void *)0x0) {
                              operator_delete__(local_d0);
                              local_d8 = (char *)0x0;
                              local_d0 = (void *)0x0;
                            }
                          }
                        }
                      }
                    }
                    uVar13 = uVar13 + 1;
                    lVar4 = lVar4 + 0x18;
                  } while (uVar13 < *(uint *)(plVar7 + 1));
                }
              }
            }
          }
          FUN_00eb57ec(param_2 + 0x28,local_108);
          FUN_00955be0(&uStack_f0,1);
          if ((local_108[0] & 1) != 0) {
            operator_delete(local_f8);
          }
          puVar14 = puVar14 + 6;
        } while (puVar14 != (undefined8 *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30));
      }
      goto LAB_00eb57b0;
    }
  }
  FUN_00e83324(0xfffffffa);
LAB_00eb57b0:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

