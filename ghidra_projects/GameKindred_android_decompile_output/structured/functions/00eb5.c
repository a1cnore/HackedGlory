// functions/00eb5 — 2 functions
#include "libGameKindred.h"




void FUN_00eb57ec(uint *param_1,long param_2)

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
    FUN_00955978(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_008fcdb8(lVar4 + -0x30,param_2);
  FUN_00955a6c(lVar4 + -0x18,param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_00eb5894(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *__s1;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  double dVar23;
  double dVar24;
  byte local_1c0 [8];
  ulong local_1b8;
  void *local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  char *local_188;
  ulong local_180;
  void *local_178;
  float local_170;
  float fStack_16c;
  float local_168;
  undefined4 local_164;
  void *local_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  char *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  byte local_118 [16];
  void *local_108;
  byte local_100 [16];
  void *local_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  FUN_00956964(param_2 + 0x28,0);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_130 = "returnValue";
    local_120 = 0x100005;
    local_128 = 0xb;
    lVar4 = FUN_008feca4(param_1,&local_130);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_130 = "returnValue";
      local_120 = 0x100005;
      local_128 = 0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_130);
      lVar4 = FUN_008fd190(plVar5,"events");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
        local_130 = "events";
        local_120 = 0x100005;
        local_128 = 6;
        lVar4 = FUN_008feca4(plVar5,&local_130);
        if (*(int *)(lVar4 + 0x10) == 4) {
          local_130 = "events";
          local_120 = 0x100005;
          local_128 = 6;
          plVar6 = (long *)FUN_008feca4(plVar5,&local_130);
          if ((int)plVar6[1] != 0) {
            uVar18 = 0;
            do {
              memset(&local_130,0,0x88);
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              lVar4 = FUN_008fd190(plVar21,"id");
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar4) {
                local_188 = "id";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 2;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_188 = "id";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 2;
                  puVar7 = (undefined8 *)FUN_008feca4(plVar21,&local_188);
                  if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                    puVar7 = (undefined8 *)*puVar7;
                  }
                }
              }
              FUN_008fa54c(&local_188,puVar7);
              FUN_008fce60(&local_130,&local_188);
              if (((ulong)local_188 & 1) != 0) {
                operator_delete(local_178);
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              lVar4 = FUN_008fd190(plVar21,"type");
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar4) {
                local_188 = "type";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 4;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_188 = "type";
                  local_180 = 4;
                  puVar7 = (undefined8 *)FUN_008feca4(plVar21,&local_188);
                  if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                    puVar7 = (undefined8 *)*puVar7;
                  }
                }
              }
              FUN_008fa54c(&local_188,puVar7);
              FUN_008fce60(local_118,&local_188);
              if (((ulong)local_188 & 1) != 0) {
                operator_delete(local_178);
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              lVar4 = FUN_008fd190(plVar21,"name");
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar4) {
                local_188 = "name";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 4;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_188 = "name";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 4;
                  puVar7 = (undefined8 *)FUN_008feca4(plVar21,&local_188);
                  if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                    puVar7 = (undefined8 *)*puVar7;
                  }
                }
              }
              FUN_008fa54c(&local_188,puVar7);
              FUN_008fce60(local_100,&local_188);
              if (((ulong)local_188 & 1) != 0) {
                operator_delete(local_178);
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              lVar4 = FUN_008fd190(plVar21,"startDate");
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 == lVar4) {
                uVar15 = 0;
              }
              else {
                local_188 = "startDate";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 9;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                uVar15 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) != 0) {
                  local_188 = "startDate";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 9;
                  puVar7 = (undefined8 *)FUN_008feca4(plVar21,&local_188);
                  uVar15 = *puVar7;
                }
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              local_a8 = uVar15;
              lVar4 = FUN_008fd190(plVar21,"endDate");
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 == lVar4) {
                uVar15 = 0;
              }
              else {
                local_188 = "endDate";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 7;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                uVar15 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) != 0) {
                  local_188 = "endDate";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 7;
                  puVar7 = (undefined8 *)FUN_008feca4(plVar21,&local_188);
                  uVar15 = *puVar7;
                }
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              local_a0 = uVar15;
              lVar4 = FUN_008fd190(plVar21,"clientRepresentation");
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar4) {
                local_188 = "clientRepresentation";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 0x14;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                if (*(int *)(lVar4 + 0x10) == 4) {
                  local_188 = "clientRepresentation";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 0x14;
                  plVar21 = (long *)FUN_008feca4(*plVar6 + uVar18 * 0x18,&local_188);
                  if ((int)plVar21[1] != 0) {
                    uVar20 = 0;
                    do {
                      plVar22 = (long *)(*plVar21 + uVar20 * 0x18);
                      memset(&local_180,0,0x50);
                      lVar4 = FUN_008fd190(plVar22,"type");
                      puVar19 = (uint *)(plVar22 + 1);
                      puVar7 = (undefined8 *)&DAT_01e277f2;
                      if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                        local_1a8 = "type";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 4;
                        lVar4 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                          local_1a8 = "type";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 4;
                          puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                            puVar7 = (undefined8 *)*puVar7;
                          }
                        }
                      }
                      FUN_008fa54c(local_1c0,puVar7);
                      uVar16 = (ulong)(local_1c0[0] >> 1);
                      uVar17 = uVar16;
                      if ((local_1c0[0] & 1) != 0) {
                        uVar17 = local_1b8;
                      }
                      puVar7 = (undefined8 *)&DAT_01e277f2;
                      if (uVar17 == 0x10) {
                        iVar3 = FUN_0090d610(local_1c0,0,0xffffffffffffffff,"leaderboardPanel",0x10)
                        ;
                        if (iVar3 != 0) {
                          uVar16 = (ulong)(local_1c0[0] >> 1);
                          goto LAB_00eb5f44;
                        }
                        local_188 = (char *)CONCAT44(local_188._4_4_,1);
                        lVar4 = FUN_008fd190(plVar22,"target");
                        if (*plVar22 + (ulong)*puVar19 * 0x30 == lVar4) {
                          __s1 = "eventsPopup";
                        }
                        else {
                          local_1a8 = "target";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 6;
                          lVar4 = FUN_008feca4(plVar22,&local_1a8);
                          __s1 = "eventsPopup";
                          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                            local_1a8 = "target";
                            local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                            local_1a0 = 6;
                            __s1 = (char *)FUN_008feca4(plVar22,&local_1a8);
                            if (((byte)__s1[0x12] >> 6 & 1) == 0) {
                              __s1 = *(char **)__s1;
                            }
                          }
                        }
                        iVar3 = strcmp(__s1,"leaderboardsPopup");
                        local_188 = (char *)(ulong)CONCAT14(iVar3 == 0,local_188._0_4_);
                        lVar4 = FUN_008fd190(plVar22,"panelTitle");
                        puVar10 = (undefined8 *)&DAT_01e277f2;
                        if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                          local_1a8 = "panelTitle";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 10;
                          lVar4 = FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                            local_1a8 = "panelTitle";
                            local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                            local_1a0 = 10;
                            puVar10 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                            if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                              puVar10 = (undefined8 *)*puVar10;
                            }
                          }
                        }
                        FUN_008fa54c(&local_1a8,puVar10);
                        FUN_008fce60(&local_180,&local_1a8);
                        if (((ulong)local_1a8 & 1) != 0) {
                          operator_delete(local_198);
                        }
                        lVar4 = FUN_008fd190(plVar22,"leaderboardId");
                        puVar10 = (undefined8 *)&DAT_01e277f2;
                        if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                          local_1a8 = "leaderboardId";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 0xd;
                          lVar4 = FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                            local_1a8 = "leaderboardId";
                            local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                            local_1a0 = 0xd;
                            puVar10 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                            if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                              puVar10 = (undefined8 *)*puVar10;
                            }
                          }
                        }
                        FUN_008fa54c(&local_1a8,puVar10);
                        FUN_0096204c(auStack_150,&local_1a8);
                        if (((ulong)local_1a8 & 1) != 0) {
                          operator_delete(local_198);
                        }
                        lVar4 = FUN_008fd190(plVar22,"leaderboardTitle");
                        if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                          local_1a8 = "leaderboardTitle";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 0x10;
                          lVar4 = FUN_008feca4(plVar22,&local_1a8);
                          puVar7 = (undefined8 *)&DAT_01e277f2;
                          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00eb6abc;
                          local_1a8 = "leaderboardTitle";
                          local_1a0 = 0x10;
LAB_00eb6a98:
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                            puVar7 = (undefined8 *)*puVar7;
                          }
                        }
LAB_00eb6abc:
                        FUN_008fa54c(&local_1a8,puVar7);
                        FUN_008fce60(&local_168,&local_1a8);
                        if (((ulong)local_1a8 & 1) != 0) {
                          operator_delete(local_198);
                        }
                      }
                      else {
LAB_00eb5f44:
                        uVar17 = uVar16;
                        if ((local_1c0[0] & 1) != 0) {
                          uVar17 = local_1b8;
                        }
                        if (uVar17 == 10) {
                          iVar3 = FUN_0090d610(local_1c0,0,0xffffffffffffffff,"questPanel",10);
                          if (iVar3 != 0) {
                            uVar16 = (ulong)(local_1c0[0] >> 1);
                            goto LAB_00eb5f84;
                          }
                          local_188 = (char *)CONCAT44(local_188._4_4_,2);
                          lVar4 = FUN_008fd190(plVar22,"panelTitle");
                          if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                            local_1a8 = "panelTitle";
                            local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                            local_1a0 = 10;
                            lVar4 = FUN_008feca4(plVar22,&local_1a8);
                            if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                              local_1a8 = "panelTitle";
                              local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                              local_1a0 = 10;
                              puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                              if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                                puVar7 = (undefined8 *)*puVar7;
                              }
                            }
                          }
                          FUN_008fa54c(&local_1a8,puVar7);
                          FUN_008fce60(&local_180,&local_1a8);
                          if (((ulong)local_1a8 & 1) != 0) {
                            operator_delete(local_198);
                          }
                          lVar4 = FUN_008fd190(plVar22,"questIds");
                          if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                            local_1a8 = "questIds";
                            local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                            local_1a0 = 8;
                            lVar4 = FUN_008feca4(plVar22,&local_1a8);
                            if (*(int *)(lVar4 + 0x10) == 4) {
                              local_1a8 = "questIds";
                              local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                              local_1a0 = 8;
                              plVar22 = (long *)FUN_008feca4(plVar22,&local_1a8);
                              uVar17 = (ulong)*(uint *)(plVar22 + 1);
                              if (*(uint *)(plVar22 + 1) != 0) {
                                lVar4 = 0;
                                uVar16 = 0;
                                do {
                                  lVar9 = *plVar22;
                                  uVar1 = *(uint *)(lVar9 + lVar4 + 0x10);
                                  if ((uVar1 >> 0x14 & 1) != 0) {
                                    if ((uVar1 >> 0x16 & 1) == 0) {
                                      lVar9 = *(long *)(lVar9 + lVar4);
                                    }
                                    else {
                                      lVar9 = lVar9 + lVar4;
                                    }
                                    FUN_008fa54c(&local_1a8,lVar9);
                                    FUN_0096204c(auStack_150,&local_1a8);
                                    if (((ulong)local_1a8 & 1) != 0) {
                                      operator_delete(local_198);
                                    }
                                    uVar17 = (ulong)*(uint *)(plVar22 + 1);
                                  }
                                  uVar16 = uVar16 + 1;
                                  lVar4 = lVar4 + 0x18;
                                } while (uVar16 < uVar17);
                              }
                            }
                          }
                        }
                        else {
LAB_00eb5f84:
                          uVar17 = uVar16;
                          if ((local_1c0[0] & 1) != 0) {
                            uVar17 = local_1b8;
                          }
                          if (uVar17 == 0xf) {
                            iVar3 = FUN_0090d610(local_1c0,0,0xffffffffffffffff,"marketPanelList",
                                                 0xf);
                            if (iVar3 == 0) {
                              local_188 = (char *)CONCAT44(local_188._4_4_,3);
                              lVar4 = FUN_008fd190(plVar22,"panelTitle");
                              if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                                local_1a8 = "panelTitle";
                                local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                local_1a0 = 10;
                                lVar4 = FUN_008feca4(plVar22,&local_1a8);
                                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                                  local_1a8 = "panelTitle";
                                  local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                  local_1a0 = 10;
                                  puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                                  if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                                    puVar7 = (undefined8 *)*puVar7;
                                  }
                                }
                              }
                              FUN_008fa54c(&local_1a8,puVar7);
                              FUN_008fce60(&local_180,&local_1a8);
                              if (((ulong)local_1a8 & 1) != 0) {
                                operator_delete(local_198);
                              }
                              lVar4 = FUN_008fd190(plVar22,"marketSection");
                              puVar7 = (undefined8 *)&DAT_01e277f2;
                              if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                                local_1a8 = "marketSection";
                                local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                local_1a0 = 0xd;
                                lVar4 = FUN_008feca4(plVar22,&local_1a8);
                                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                                  local_1a8 = "marketSection";
                                  local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                  local_1a0 = 0xd;
                                  puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                                  if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                                    puVar7 = (undefined8 *)*puVar7;
                                  }
                                }
                              }
                              FUN_008fa54c(&local_1a8,puVar7);
                              FUN_008fce60(&local_168,&local_1a8);
                              if (((ulong)local_1a8 & 1) != 0) {
                                operator_delete(local_198);
                              }
                              local_188 = (char *)((ulong)local_188 & 0xffffffff);
                              lVar4 = FUN_008fd190(plVar22,"marketTileIds");
                              if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                                local_1a8 = "marketTileIds";
                                local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                local_1a0 = 0xd;
                                lVar4 = FUN_008feca4(plVar22,&local_1a8);
                                if (*(int *)(lVar4 + 0x10) == 4) {
                                  local_1a8 = "marketTileIds";
                                  local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                  local_1a0 = 0xd;
                                  plVar22 = (long *)FUN_008feca4(plVar22,&local_1a8);
                                  uVar17 = (ulong)*(uint *)(plVar22 + 1);
                                  if (*(uint *)(plVar22 + 1) != 0) {
                                    lVar4 = 0;
                                    uVar16 = 0;
                                    do {
                                      lVar9 = *plVar22;
                                      uVar1 = *(uint *)(lVar9 + lVar4 + 0x10);
                                      if ((uVar1 >> 0x14 & 1) != 0) {
                                        if ((uVar1 >> 0x16 & 1) == 0) {
                                          lVar9 = *(long *)(lVar9 + lVar4);
                                        }
                                        else {
                                          lVar9 = lVar9 + lVar4;
                                        }
                                        FUN_008fa54c(&local_1a8,lVar9);
                                        FUN_0096204c(auStack_150,&local_1a8);
                                        if (((ulong)local_1a8 & 1) != 0) {
                                          operator_delete(local_198);
                                        }
                                        uVar17 = (ulong)*(uint *)(plVar22 + 1);
                                      }
                                      uVar16 = uVar16 + 1;
                                      lVar4 = lVar4 + 0x18;
                                    } while (uVar16 < uVar17);
                                  }
                                }
                              }
                              goto LAB_00eb6ae0;
                            }
                            uVar16 = (ulong)(local_1c0[0] >> 1);
                          }
                          uVar17 = uVar16;
                          if ((local_1c0[0] & 1) != 0) {
                            uVar17 = local_1b8;
                          }
                          if (uVar17 == 0x12) {
                            iVar3 = FUN_0090d610(local_1c0,0,0xffffffffffffffff,"optionOverrideList"
                                                 ,0x12);
                            if (iVar3 == 0) {
                              local_188 = (char *)CONCAT44(local_188._4_4_,5);
                              lVar4 = FUN_008fd190(plVar22,"panelTitle");
                              if (*plVar22 + (ulong)*puVar19 * 0x30 == lVar4) {
                                plVar8 = (long *)0x1e2171f;
                              }
                              else {
                                local_1a8 = "panelTitle";
                                local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                local_1a0 = 10;
                                lVar4 = FUN_008feca4(plVar22,&local_1a8);
                                plVar8 = (long *)0x1e2171f;
                                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                                  local_1a8 = "panelTitle";
                                  local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                  local_1a0 = 10;
                                  plVar8 = (long *)FUN_008feca4(plVar22,&local_1a8);
                                  if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                                    plVar8 = (long *)*plVar8;
                                  }
                                }
                              }
                              FUN_008fa54c(&local_1a8,plVar8);
                              FUN_008fce60(&local_180,&local_1a8);
                              if (((ulong)local_1a8 & 1) != 0) {
                                operator_delete(local_198);
                              }
                              lVar4 = FUN_008fd190(plVar22,"options");
                              if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                                local_1a8 = "options";
                                local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                local_1a0 = 7;
                                lVar4 = FUN_008feca4(plVar22,&local_1a8);
                                if (*(int *)(lVar4 + 0x10) == 4) {
                                  local_1a8 = "options";
                                  local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                  local_1a0 = 7;
                                  plVar22 = (long *)FUN_008feca4(plVar22,&local_1a8);
                                  if ((int)plVar22[1] != 0) {
                                    lVar4 = 0;
                                    uVar17 = 0;
                                    do {
                                      plVar8 = (long *)(*plVar22 + lVar4);
                                      if (((int)plVar8[2] == 3) &&
                                         (lVar9 = FUN_008fd190(plVar8,"optionName"),
                                         *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar9)) {
                                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                        local_1a8 = "optionName";
                                        local_1a0 = 10;
                                        lVar9 = FUN_008feca4(*plVar22 + lVar4,&local_1a8);
                                        if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                                          plVar8 = (long *)(*plVar22 + lVar4);
                                          lVar9 = FUN_008fd190(plVar8,"enabled");
                                          if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar9
                                             ) {
                                            local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                            local_1a8 = "enabled";
                                            local_1a0 = 7;
                                            lVar9 = FUN_008feca4(*plVar22 + lVar4,&local_1a8);
                                            if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
                                              local_1a8 = (char *)0x0;
                                              local_1a0 = 0;
                                              local_198 = (void *)0x0;
                                              local_88 = 0x100005;
                                              local_98 = "optionName";
                                              local_90 = 10;
                                              plVar8 = (long *)FUN_008feca4(*plVar22 + lVar4,
                                                                            &local_98);
                                              if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
                                                plVar8 = (long *)*plVar8;
                                              }
                                              FUN_008fa54c(&local_98,plVar8);
                                              FUN_008fce60(&local_1a8,&local_98);
                                              if (((ulong)local_98 & 1) != 0) {
                                                operator_delete((void *)CONCAT44(uStack_84,local_88)
                                                               );
                                              }
                                              local_88 = 0x100005;
                                              local_98 = "enabled";
                                              local_90 = 7;
                                              lVar9 = FUN_008feca4(*plVar22 + lVar4,&local_98);
                                              local_190 = *(int *)(lVar9 + 0x10) == 0x102;
                                              FUN_009fb674(auStack_140,&local_1a8);
                                              if (((ulong)local_1a8 & 1) != 0) {
                                                operator_delete(local_198);
                                              }
                                            }
                                          }
                                        }
                                      }
                                      uVar17 = uVar17 + 1;
                                      lVar4 = lVar4 + 0x18;
                                    } while (uVar17 < *(uint *)(plVar22 + 1));
                                  }
                                }
                              }
                              goto LAB_00eb6ae0;
                            }
                            uVar16 = (ulong)(local_1c0[0] >> 1);
                          }
                          if ((local_1c0[0] & 1) != 0) {
                            uVar16 = local_1b8;
                          }
                          if ((uVar16 == 9) &&
                             (iVar3 = FUN_0090d610(local_1c0,0,0xffffffffffffffff,"textPanel",9),
                             iVar3 == 0)) {
                            local_188 = (char *)CONCAT44(local_188._4_4_,4);
                            lVar4 = FUN_008fd190(plVar22,"panelTitle");
                            puVar10 = (undefined8 *)&DAT_01e277f2;
                            if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                              local_1a8 = "panelTitle";
                              local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                              local_1a0 = 10;
                              lVar4 = FUN_008feca4(plVar22,&local_1a8);
                              if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                                local_1a8 = "panelTitle";
                                local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                                local_1a0 = 10;
                                puVar10 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                                if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                                  puVar10 = (undefined8 *)*puVar10;
                                }
                              }
                            }
                            FUN_008fa54c(&local_1a8,puVar10);
                            FUN_008fce60(&local_180,&local_1a8);
                            if (((ulong)local_1a8 & 1) != 0) {
                              operator_delete(local_198);
                            }
                            lVar4 = FUN_008fd190(plVar22,"description");
                            if (*plVar22 + (ulong)*puVar19 * 0x30 != lVar4) {
                              local_1a8 = "description";
                              local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                              local_1a0 = 0xb;
                              lVar4 = FUN_008feca4(plVar22,&local_1a8);
                              if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                                local_1a8 = "description";
                                local_1a0 = 0xb;
                                goto LAB_00eb6a98;
                              }
                            }
                            goto LAB_00eb6abc;
                          }
                          local_188 = (char *)((ulong)local_188 & 0xffffffff00000000);
                        }
                      }
LAB_00eb6ae0:
                      FUN_00eb7890(auStack_e8,&local_188);
                      if ((local_1c0[0] & 1) != 0) {
                        operator_delete(local_1b0);
                      }
                      FUN_00956438(auStack_140,1);
                      FUN_00951534(auStack_150,1);
                      if (((uint)local_168 & 1) != 0) {
                        operator_delete(local_158);
                      }
                      if ((local_180 & 1) != 0) {
                        operator_delete((void *)CONCAT44(fStack_16c,local_170));
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 < *(uint *)(plVar21 + 1));
                  }
                }
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              lVar4 = FUN_008fd190(plVar21,"eventLeaderboardProgress");
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar4) {
                local_188 = "eventLeaderboardProgress";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 0x18;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                if (*(int *)(lVar4 + 0x10) == 4) {
                  local_188 = "eventLeaderboardProgress";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 0x18;
                  plVar21 = (long *)FUN_008feca4(*plVar6 + uVar18 * 0x18,&local_188);
                  if ((int)plVar21[1] != 0) {
                    lVar4 = 0;
                    uVar20 = 0;
                    do {
                      puVar10 = (undefined8 *)&DAT_01e277f2;
                      local_188 = (char *)0x0;
                      local_180 = 0;
                      local_178 = (void *)0x0;
                      plVar22 = (long *)(*plVar21 + lVar4);
                      lVar9 = FUN_008fd190(plVar22,"id");
                      puVar7 = puVar10;
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 != lVar9) {
                        local_1a8 = "id";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 2;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                          local_1a8 = "id";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 2;
                          puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                            puVar7 = (undefined8 *)*puVar7;
                          }
                        }
                      }
                      FUN_008fa54c(&local_1a8,puVar7);
                      FUN_008fce60(&local_188,&local_1a8);
                      if (((ulong)local_1a8 & 1) != 0) {
                        operator_delete(local_198);
                      }
                      lVar9 = FUN_008fd190(plVar22,"type");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 != lVar9) {
                        local_1a8 = "type";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 4;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                          local_1a8 = "type";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 4;
                          puVar10 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                            puVar10 = (undefined8 *)*puVar10;
                          }
                        }
                      }
                      FUN_008fa54c(&local_98,puVar10);
                      uVar16 = (ulong)((byte)local_98 >> 1);
                      uVar17 = uVar16;
                      if (((ulong)local_98 & 1) != 0) {
                        uVar17 = local_90;
                      }
                      if (uVar17 == 6) {
                        iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"player",6);
                        if (iVar3 != 0) {
                          uVar16 = (ulong)((byte)local_98 >> 1);
                          goto LAB_00eb6d8c;
                        }
                        local_170 = 0.0;
                      }
                      else {
LAB_00eb6d8c:
                        if (((byte)local_98 & 1) != 0) {
                          uVar16 = local_90;
                        }
                        if ((uVar16 == 5) &&
                           (iVar3 = FUN_0090d610(&local_98,0,0xffffffffffffffff,"guild",5),
                           iVar3 == 0)) {
                          local_170 = 1.4013e-45;
                        }
                        else {
                          local_170 = 2.8026e-45;
                        }
                      }
                      lVar9 = FUN_008fd190(plVar22,"score");
                      dVar23 = -1.0;
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 != lVar9) {
                        local_1a8 = "score";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 5;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        dVar23 = -1.0;
                        if ((*(byte *)(lVar9 + 0x11) >> 1 & 1) != 0) {
                          local_1a8 = "score";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 5;
                          FUN_008feca4(plVar22,&local_1a8);
                          dVar23 = (double)FUN_008fc0f0();
                        }
                      }
                      fStack_16c = (float)dVar23;
                      lVar9 = FUN_008fd190(plVar22,"rank");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
LAB_00eb6eac:
                        local_168 = -NAN;
                      }
                      else {
                        local_1a8 = "rank";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 4;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_00eb6eac;
                        local_1a8 = "rank";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 4;
                        pfVar11 = (float *)FUN_008feca4(plVar22,&local_1a8);
                        local_168 = *pfVar11;
                      }
                      lVar9 = FUN_008fd190(plVar22,"cardinality");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
                        local_164 = 0xffffffff;
                      }
                      else {
                        local_1a8 = "cardinality";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 0xb;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) {
                          local_164 = 0xffffffff;
                        }
                        else {
                          local_1a8 = "cardinality";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 0xb;
                          puVar12 = (undefined4 *)FUN_008feca4(plVar22,&local_1a8);
                          local_164 = *puVar12;
                        }
                      }
                      FUN_00eb7954(auStack_d8,&local_188);
                      if (((ulong)local_98 & 1) != 0) {
                        operator_delete((void *)CONCAT44(uStack_84,local_88));
                      }
                      if (((ulong)local_188 & 1) != 0) {
                        operator_delete(local_178);
                      }
                      uVar20 = uVar20 + 1;
                      lVar4 = lVar4 + 0x18;
                    } while (uVar20 < *(uint *)(plVar21 + 1));
                  }
                }
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              lVar4 = FUN_008fd190(plVar21,"eventArenaChallengeProgress");
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar4) {
                local_188 = "eventArenaChallengeProgress";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 0x1b;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                if (*(int *)(lVar4 + 0x10) == 4) {
                  local_188 = "eventArenaChallengeProgress";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 0x1b;
                  plVar21 = (long *)FUN_008feca4(*plVar6 + uVar18 * 0x18,&local_188);
                  if ((int)plVar21[1] != 0) {
                    lVar4 = 0;
                    uVar20 = 0;
                    do {
                      local_188 = (char *)0x0;
                      local_180 = 0;
                      local_178 = (void *)0x0;
                      plVar22 = (long *)(*plVar21 + lVar4);
                      lVar9 = FUN_008fd190(plVar22,"id");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
                        puVar7 = (undefined8 *)&DAT_01e277f2;
                      }
                      else {
                        local_1a8 = "id";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 2;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        puVar7 = (undefined8 *)&DAT_01e277f2;
                        if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                          local_1a8 = "id";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 2;
                          puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                            puVar7 = (undefined8 *)*puVar7;
                          }
                        }
                      }
                      FUN_008fa54c(&local_1a8,puVar7);
                      FUN_008fce60(&local_188,&local_1a8);
                      if (((ulong)local_1a8 & 1) != 0) {
                        operator_delete(local_198);
                      }
                      lVar9 = FUN_008fd190(plVar22,&DAT_01b964d3);
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
LAB_00eb7168:
                        local_170 = -NAN;
                      }
                      else {
                        local_1a8 = "wins";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 4;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_00eb7168;
                        local_1a8 = "wins";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 4;
                        pfVar11 = (float *)FUN_008feca4(plVar22,&local_1a8);
                        local_170 = *pfVar11;
                      }
                      lVar9 = FUN_008fd190(plVar22,"maxWins");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
LAB_00eb71f0:
                        local_168 = -NAN;
                      }
                      else {
                        local_1a8 = "maxWins";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 7;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_00eb71f0;
                        local_1a8 = "maxWins";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 7;
                        pfVar11 = (float *)FUN_008feca4(plVar22,&local_1a8);
                        local_168 = *pfVar11;
                      }
                      lVar9 = FUN_008fd190(plVar22,"losses");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
LAB_00eb7268:
                        fStack_16c = -NAN;
                      }
                      else {
                        local_1a8 = "losses";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 6;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_00eb7268;
                        local_1a8 = "losses";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 6;
                        pfVar11 = (float *)FUN_008feca4(plVar22,&local_1a8);
                        fStack_16c = *pfVar11;
                      }
                      lVar9 = FUN_008fd190(plVar22,"maxLosses");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
                        local_164 = 0xffffffff;
                      }
                      else {
                        local_1a8 = "maxLosses";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 9;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) {
                          local_164 = 0xffffffff;
                        }
                        else {
                          local_1a8 = "maxLosses";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 9;
                          puVar12 = (undefined4 *)FUN_008feca4(plVar22,&local_1a8);
                          local_164 = *puVar12;
                        }
                      }
                      FUN_00eb79f0(auStack_c8,&local_188);
                      if (((ulong)local_188 & 1) != 0) {
                        operator_delete(local_178);
                      }
                      uVar20 = uVar20 + 1;
                      lVar4 = lVar4 + 0x18;
                    } while (uVar20 < *(uint *)(plVar21 + 1));
                  }
                }
              }
              plVar21 = (long *)(*plVar6 + uVar18 * 0x18);
              lVar4 = FUN_008fd190(plVar21,"eventProgressBars");
              if (*plVar21 + (ulong)*(uint *)(plVar21 + 1) * 0x30 != lVar4) {
                local_188 = "eventProgressBars";
                local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                local_180 = 0x11;
                lVar4 = FUN_008feca4(plVar21,&local_188);
                if (*(int *)(lVar4 + 0x10) == 4) {
                  local_188 = "eventProgressBars";
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x100005);
                  local_180 = 0x11;
                  plVar21 = (long *)FUN_008feca4(*plVar6 + uVar18 * 0x18,&local_188);
                  if ((int)plVar21[1] != 0) {
                    lVar4 = 0;
                    uVar20 = 0;
                    do {
                      local_188 = (char *)0x0;
                      local_180 = 0;
                      local_178 = (void *)0x0;
                      plVar22 = (long *)(*plVar21 + lVar4);
                      lVar9 = FUN_008fd190(plVar22,"id");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
                        puVar7 = (undefined8 *)&DAT_01e277f2;
                      }
                      else {
                        local_1a8 = "id";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 2;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        puVar7 = (undefined8 *)&DAT_01e277f2;
                        if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                          local_1a8 = "id";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 2;
                          puVar7 = (undefined8 *)FUN_008feca4(plVar22,&local_1a8);
                          if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                            puVar7 = (undefined8 *)*puVar7;
                          }
                        }
                      }
                      FUN_008fa54c(&local_1a8,puVar7);
                      FUN_008fce60(&local_188,&local_1a8);
                      if (((ulong)local_1a8 & 1) != 0) {
                        operator_delete(local_198);
                      }
                      lVar9 = FUN_008fd190(plVar22,"score");
                      dVar24 = 0.0;
                      dVar23 = 0.0;
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 != lVar9) {
                        local_1a8 = "score";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 5;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        dVar23 = 0.0;
                        if ((*(byte *)(lVar9 + 0x11) >> 1 & 1) != 0) {
                          local_1a8 = "score";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 5;
                          FUN_008feca4(plVar22,&local_1a8);
                          dVar23 = (double)FUN_008fc0f0();
                        }
                      }
                      local_170 = (float)dVar23;
                      lVar9 = FUN_008fd190(plVar22,"minScore");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 != lVar9) {
                        local_1a8 = "minScore";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 8;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 1 & 1) != 0) {
                          local_1a8 = "minScore";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 8;
                          FUN_008feca4(plVar22,&local_1a8);
                          dVar24 = (double)FUN_008fc0f0();
                        }
                      }
                      fStack_16c = (float)dVar24;
                      lVar9 = FUN_008fd190(plVar22,"maxScore");
                      dVar23 = 0.0;
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 != lVar9) {
                        local_1a8 = "maxScore";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 8;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        if ((*(byte *)(lVar9 + 0x11) >> 1 & 1) != 0) {
                          local_1a8 = "maxScore";
                          local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                          local_1a0 = 8;
                          FUN_008feca4(plVar22,&local_1a8);
                          dVar23 = (double)FUN_008fc0f0();
                        }
                      }
                      local_168 = (float)dVar23;
                      lVar9 = FUN_008fd190(plVar22,"minScore");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
                        bVar13 = 0;
                      }
                      else {
                        local_1a8 = "minScore";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 8;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        bVar13 = *(byte *)(lVar9 + 0x11) >> 1 & 1;
                      }
                      local_164 = CONCAT31(local_164._1_3_,bVar13);
                      lVar9 = FUN_008fd190(plVar22,"maxScore");
                      if (*plVar22 + (ulong)*(uint *)(plVar22 + 1) * 0x30 == lVar9) {
                        bVar13 = 0;
                      }
                      else {
                        local_1a8 = "maxScore";
                        local_198 = (void *)CONCAT44(local_198._4_4_,0x100005);
                        local_1a0 = 8;
                        lVar9 = FUN_008feca4(plVar22,&local_1a8);
                        bVar13 = *(byte *)(lVar9 + 0x11) >> 1 & 1;
                      }
                      local_164._0_2_ = CONCAT11(bVar13,(undefined1)local_164);
                      FUN_00eb7a8c(auStack_b8,&local_188);
                      if (((ulong)local_188 & 1) != 0) {
                        operator_delete(local_178);
                      }
                      uVar20 = uVar20 + 1;
                      lVar4 = lVar4 + 0x18;
                    } while (uVar20 < *(uint *)(plVar21 + 1));
                  }
                }
              }
              FUN_009fb3f0(param_2 + 0x28,&local_130);
              FUN_0095674c(auStack_b8,1);
              FUN_009567c8(auStack_c8,1);
              FUN_00956844(auStack_d8,1);
              FUN_009568c0(auStack_e8,1);
              if ((local_100[0] & 1) != 0) {
                operator_delete(local_f0);
              }
              if ((local_118[0] & 1) != 0) {
                operator_delete(local_108);
              }
              if (((ulong)local_130 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_11c,local_120));
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *(uint *)(plVar6 + 1));
          }
          lVar4 = FUN_008fd190(plVar5,&DAT_01b99d6e);
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
            uVar14 = 0xffffffff;
          }
          else {
            local_130 = "ttl";
            local_120 = 0x100005;
            local_128 = 3;
            lVar4 = FUN_008feca4(plVar5,&local_130);
            if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) {
              uVar14 = 0xffffffff;
            }
            else {
              local_130 = "ttl";
              local_120 = 0x100005;
              local_128 = 3;
              puVar12 = (undefined4 *)FUN_008feca4(plVar5,&local_130);
              uVar14 = *puVar12;
            }
          }
          *(undefined4 *)(param_2 + 0x38) = uVar14;
        }
      }
      goto LAB_00eb7828;
    }
  }
  FUN_00e83324(0xfffffffa);
LAB_00eb7828:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

