// functions/00ea5 — 4 functions
#include "libGameKindred.h"




long FUN_00ea524c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = FUN_0091ed5c(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar5 = (ulong)uVar1 * (ulong)uVar3 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar3) break;
        iVar4 = (int)uVar5;
        uVar2 = iVar4 - 1;
        uVar5 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
    }
    if ((int)uVar1 <= (int)uVar5) {
      return 0;
    }
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
      if (uVar3 <= uVar2) {
        if (uVar2 != uVar3) {
          return 0;
        }
        return *(long *)(param_1 + 6) + uVar5 * 0x90;
      }
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar2;
    } while ((int)uVar2 < (int)uVar1);
  }
  return 0;
}




void FUN_00ea52f0(uint *param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = FUN_0091ed5c(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)uVar1 * (ulong)uVar3 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar3) break;
        iVar4 = (int)uVar5;
        uVar2 = iVar4 - 1;
        uVar5 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
    }
    for (; ((int)uVar5 < (int)uVar1 && (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) < uVar3));
        uVar5 = (ulong)((int)uVar5 + 1)) {
    }
  }
  lVar6 = *(long *)(param_1 + 6) + uVar5 * 0x90;
  FUN_008fce60(lVar6,param_3);
  FUN_008fce60(lVar6 + 0x18,param_3 + 0x18);
  FUN_008fce60(lVar6 + 0x30,param_3 + 0x30);
  FUN_008fce60(lVar6 + 0x48,param_3 + 0x48);
  FUN_008fce60(lVar6 + 0x60,param_3 + 0x60);
  uVar7 = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(lVar6 + 0x78) = uVar7;
  *(undefined4 *)(lVar6 + 0x88) = *(undefined4 *)(param_3 + 0x88);
  return;
}




void FUN_00ea53d0(uint *param_1,long param_2)

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
    FUN_00950d18(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_008fcdb8(lVar4 + -0x38,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  return;
}




void FUN_00ea5474(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  double dVar15;
  char *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined1 local_1e0;
  byte local_1d8 [8];
  undefined8 uStack_1d0;
  void *local_1c8;
  undefined4 local_1c0;
  byte local_1b8 [8];
  undefined8 uStack_1b0;
  void *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  long local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  void *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_1f8 = "code";
  local_1e8 = (void *)CONCAT44(local_1e8._4_4_,0x100005);
  local_1f0 = 4;
  puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_1f8);
  *(undefined4 *)(param_2 + 0x28) = *puVar5;
  lVar6 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar6) {
    local_1f8 = "returnValue";
    local_1e8 = (void *)CONCAT44(local_1e8._4_4_,0x100005);
    local_1f0 = 0xb;
    lVar6 = FUN_008feca4(param_1,&local_1f8);
    if (*(int *)(lVar6 + 0x10) == 3) {
      local_1f8 = "returnValue";
      local_1e8 = (void *)CONCAT44(local_1e8._4_4_,0x100005);
      local_1f0 = 0xb;
      plVar7 = (long *)FUN_008feca4(param_1,&local_1f8);
      if ((int)plVar7[1] != 0) {
        puVar14 = (undefined8 *)*plVar7;
        do {
          puVar8 = puVar14;
          if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
            puVar8 = (undefined8 *)*puVar14;
          }
          printf("Player UUID: %s",puVar8);
          local_1f8 = (char *)0x0;
          local_1f0 = 0;
          local_1e8 = (void *)0x0;
          local_1d8[0] = 0;
          uStack_1d0 = 0;
          local_1c8 = (void *)0x0;
          local_1b8[0] = 0;
          uStack_1b0 = 0;
          local_1a8 = (void *)0x0;
          local_f0 = 0;
          uStack_e8 = 0;
          FUN_00e70510(&local_e0);
          local_c8 = 0;
          uStack_c0 = 0;
          puVar8 = puVar14;
          if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
            puVar8 = (undefined8 *)*puVar14;
          }
          plVar1 = puVar14 + 3;
          FUN_008fa54c(&local_98,puVar8);
          FUN_008fce60(&local_1f8,&local_98);
          if (((ulong)local_98 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_84,local_88));
          }
          lVar6 = FUN_008fd190(plVar1,"isOrganizer");
          puVar12 = (uint *)(puVar14 + 4);
          if (puVar14[3] + (ulong)*puVar12 * 0x30 == lVar6) {
            bVar3 = false;
          }
          else {
            local_98 = "isOrganizer";
            local_88 = 0x100005;
            local_90 = 0xb;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            bVar3 = false;
            if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
              local_98 = "isOrganizer";
              local_88 = 0x100005;
              local_90 = 0xb;
              lVar6 = FUN_008feca4(plVar1,&local_98);
              bVar3 = *(int *)(lVar6 + 0x10) == 0x102;
            }
          }
          local_1e0 = bVar3;
          lVar6 = FUN_008fd190(plVar1,"teamUUID");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_98 = "teamUUID";
            local_88 = 0x100005;
            local_90 = 8;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
              local_98 = "teamUUID";
              local_88 = 0x100005;
              local_90 = 8;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(&local_98,puVar8);
          FUN_008fce60(local_1d8,&local_98);
          if (((ulong)local_98 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_84,local_88));
          }
          lVar6 = FUN_008fd190(plVar1,"lifetimePoints");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "lifetimePoints";
            local_88 = 0x100005;
            local_90 = 0xe;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "lifetimePoints";
              local_88 = 0x100005;
              local_90 = 0xe;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_1c0 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"guildUUID");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_98 = "guildUUID";
            local_88 = 0x100005;
            local_90 = 9;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
              local_98 = "guildUUID";
              local_88 = 0x100005;
              local_90 = 9;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_008fa54c(&local_98,puVar8);
          FUN_008fce60(local_1b8,&local_98);
          if (((ulong)local_98 & 1) != 0) {
            operator_delete((void *)CONCAT44(uStack_84,local_88));
          }
          lVar6 = FUN_008fd190(plVar1,"lifetimeSpendCount");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "lifetimeSpendCount";
            local_88 = 0x100005;
            local_90 = 0x12;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "lifetimeSpendCount";
              local_88 = 0x100005;
              local_90 = 0x12;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_1a0 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"winStreak");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "winStreak";
            local_88 = 0x100005;
            local_90 = 9;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "winStreak";
              local_88 = 0x100005;
              local_90 = 9;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_19c = uVar4;
          lVar6 = FUN_008fd190(plVar1,"last_login");
          dVar15 = -1.0;
          if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar6) {
            local_98 = "last_login";
            local_88 = 0x100005;
            local_90 = 10;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            dVar15 = -1.0;
            if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
              local_98 = "last_login";
              local_88 = 0x100005;
              local_90 = 10;
              FUN_008feca4(plVar1,&local_98);
              dVar15 = (double)FUN_008fc0f0();
            }
          }
          local_198 = (long)dVar15;
          lVar6 = FUN_008fd190(plVar1,"completed_non_tutorial");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "completed_non_tutorial";
            local_88 = 0x100005;
            local_90 = 0x16;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "completed_non_tutorial";
              local_88 = 0x100005;
              local_90 = 0x16;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_190 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"spenderLevel");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "spenderLevel";
            local_88 = 0x100005;
            local_90 = 0xc;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "spenderLevel";
              local_88 = 0x100005;
              local_90 = 0xc;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_18c = uVar4;
          lVar6 = FUN_008fd190(plVar1,"karmaLevel");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "karmaLevel";
            local_88 = 0x100005;
            local_90 = 10;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "karmaLevel";
              local_88 = 0x100005;
              local_90 = 10;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_188 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"skillProgressionInfo");
          if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar6) {
            local_98 = "skillProgressionInfo";
            local_88 = 0x100005;
            local_90 = 0x14;
            plVar9 = (long *)FUN_008feca4(plVar1,&local_98);
            lVar6 = FUN_008fd190(plVar9,"5v5_pvp_ranked");
            if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar6) {
              local_98 = "5v5_pvp_ranked";
              local_88 = 0x100005;
              local_90 = 0xe;
              uVar10 = FUN_008feca4(plVar9,&local_98);
              FUN_00ea4c78(uVar10,auStack_180);
            }
            lVar6 = FUN_008fd190(plVar9,"ranked");
            if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar6) {
              local_98 = "ranked";
              local_88 = 0x100005;
              local_90 = 6;
              uVar10 = FUN_008feca4(plVar9,&local_98);
              FUN_00ea4c78(uVar10,auStack_150);
            }
            lVar6 = FUN_008fd190(plVar9,"blitz_pvp_ranked");
            if (*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x30 != lVar6) {
              local_98 = "blitz_pvp_ranked";
              local_88 = 0x100005;
              local_90 = 0x10;
              uVar10 = FUN_008feca4(plVar9,&local_98);
              FUN_00ea4c78(uVar10,auStack_120);
            }
          }
          lVar6 = FUN_008fd190(plVar1,"freeunlocks");
          if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar6) {
            local_98 = "freeunlocks";
            local_88 = 0x100005;
            local_90 = 0xb;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            if (*(int *)(lVar6 + 0x10) == 4) {
              local_98 = "freeunlocks";
              local_88 = 0x100005;
              local_90 = 0xb;
              plVar9 = (long *)FUN_008feca4(plVar1,&local_98);
              if ((int)plVar9[1] != 0) {
                lVar6 = 0;
                uVar13 = 0;
                do {
                  lVar11 = *plVar9 + lVar6;
                  if ((*(byte *)(lVar11 + 0x12) >> 6 & 1) == 0) {
                    lVar11 = *(long *)(*plVar9 + lVar6);
                  }
                  FUN_008fa54c(&local_98,lVar11);
                  FUN_0096204c(&local_f0,&local_98);
                  if (((ulong)local_98 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_84,local_88));
                  }
                  uVar13 = uVar13 + 1;
                  lVar6 = lVar6 + 0x18;
                } while (uVar13 < *(uint *)(plVar9 + 1));
              }
            }
          }
          local_98 = "handle";
          local_88 = 0x100005;
          local_90 = 6;
          plVar9 = (long *)FUN_008feca4(plVar1,&local_98);
          if ((*(byte *)((long)plVar9 + 0x12) >> 6 & 1) == 0) {
            plVar9 = (long *)*plVar9;
          }
          FUN_00e705a0(&local_e0,plVar9);
          lVar6 = FUN_008fd190(plVar1,"lastSpendTime");
          dVar15 = -1.0;
          if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar6) {
            local_98 = "lastSpendTime";
            local_88 = 0x100005;
            local_90 = 0xd;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            dVar15 = -1.0;
            if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
              local_98 = "lastSpendTime";
              local_88 = 0x100005;
              local_90 = 0xd;
              FUN_008feca4(plVar1,&local_98);
              dVar15 = (double)FUN_008fc0f0();
            }
          }
          local_d0 = (long)dVar15;
          lVar6 = FUN_008fd190(plVar1,"unlocks");
          if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar6) {
            local_98 = "unlocks";
            local_88 = 0x100005;
            local_90 = 7;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            if (*(int *)(lVar6 + 0x10) == 4) {
              local_98 = "unlocks";
              local_88 = 0x100005;
              local_90 = 7;
              plVar9 = (long *)FUN_008feca4(plVar1,&local_98);
              if ((int)plVar9[1] != 0) {
                lVar6 = 0;
                uVar13 = 0;
                do {
                  lVar11 = *plVar9 + lVar6;
                  if ((*(byte *)(lVar11 + 0x12) >> 6 & 1) == 0) {
                    lVar11 = *(long *)(*plVar9 + lVar6);
                  }
                  FUN_008fa54c(&local_98,lVar11);
                  FUN_0096204c(&local_c8,&local_98);
                  if (((ulong)local_98 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_84,local_88));
                  }
                  uVar13 = uVar13 + 1;
                  lVar6 = lVar6 + 0x18;
                } while (uVar13 < *(uint *)(plVar9 + 1));
              }
            }
          }
          lVar6 = FUN_008fd190(plVar1,"winsToday");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "winsToday";
            local_88 = 0x100005;
            local_90 = 9;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "winsToday";
              local_88 = 0x100005;
              local_90 = 9;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_b8 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"completed");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "completed";
            local_88 = 0x100005;
            local_90 = 9;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "completed";
              local_88 = 0x100005;
              local_90 = 9;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_b4 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"lifetimeSpend");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "lifetimeSpend";
            local_88 = 0x100005;
            local_90 = 0xd;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "lifetimeSpend";
              local_88 = 0x100005;
              local_90 = 0xd;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_b0 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"wins_season");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "wins_season";
            local_88 = 0x100005;
            local_90 = 0xb;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "wins_season";
              local_88 = 0x100005;
              local_90 = 0xb;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_ac = uVar4;
          lVar6 = FUN_008fd190(plVar1,"isDev");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            bVar3 = false;
          }
          else {
            local_98 = "isDev";
            local_88 = 0x100005;
            local_90 = 5;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            bVar3 = false;
            if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
              local_98 = "isDev";
              local_88 = 0x100005;
              local_90 = 5;
              lVar6 = FUN_008feca4(plVar1,&local_98);
              bVar3 = *(int *)(lVar6 + 0x10) == 0x102;
            }
          }
          local_a8 = bVar3;
          lVar6 = FUN_008fd190(plVar1,"level");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "level";
            local_88 = 0x100005;
            local_90 = 5;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "level";
              local_88 = 0x100005;
              local_90 = 5;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_a4 = uVar4;
          lVar6 = FUN_008fd190(plVar1,&DAT_01b964d3);
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "wins";
            local_88 = 0x100005;
            local_90 = 4;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "wins";
              local_88 = 0x100005;
              local_90 = 4;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_a0 = uVar4;
          lVar6 = FUN_008fd190(plVar1,"lossStreak");
          if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar6) {
            uVar4 = 0;
          }
          else {
            local_98 = "lossStreak";
            local_88 = 0x100005;
            local_90 = 10;
            lVar6 = FUN_008feca4(plVar1,&local_98);
            uVar4 = 0;
            if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
              local_98 = "lossStreak";
              local_88 = 0x100005;
              local_90 = 10;
              puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
              uVar4 = *puVar5;
            }
          }
          local_9c = uVar4;
          FUN_00ea6468(param_2 + 0x30,&local_1f8);
          FUN_00951534(&local_c8,1);
          if (local_d8 != (void *)0x0) {
            operator_delete__(local_d8);
            local_e0 = 0;
            local_d8 = (void *)0x0;
          }
          FUN_00951534(&local_f0,1);
          if ((local_1b8[0] & 1) != 0) {
            operator_delete(local_1a8);
          }
          if ((local_1d8[0] & 1) != 0) {
            operator_delete(local_1c8);
          }
          if (((ulong)local_1f8 & 1) != 0) {
            operator_delete(local_1e8);
          }
          puVar14 = puVar14 + 6;
        } while (puVar14 != (undefined8 *)(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30));
      }
      goto LAB_00ea642c;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 0xfffffffa;
  FUN_00e83324(0xfffffffa);
LAB_00ea642c:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

