// functions/00ea9 — 4 functions
#include "libGameKindred.h"




void FUN_00ea9274(uint *param_1,long param_2)

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
    FUN_00eba6e0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  thunk_FUN_00e7051c(lVar4 + -0x58,param_2);
  FUN_008fcdb8(lVar4 + -0x48,param_2 + 0x10);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x28);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x40);
  return;
}




void FUN_00ea9328(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar3 = FUN_008feca4(param_1,&local_70);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = uVar7;
  *(undefined1 *)(param_2 + 0x25) = 0;
  FUN_008fce60(param_2 + 0x30,&DAT_0320ffa8);
  FUN_008fce60(param_2 + 0x48,&DAT_0320ffa8);
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00ea95f8;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00ea95f8;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar5 = (long *)FUN_008feca4(param_1,&local_70);
  if (*(int *)(param_2 + 0x28) != 0) goto LAB_00ea95f8;
  lVar3 = FUN_008fd190(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar3 = FUN_008feca4(plVar5,&local_70);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_70 = "success";
      local_60 = 0x100005;
      local_68 = 7;
      lVar3 = FUN_008feca4(plVar5,&local_70);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x25) = bVar2;
  lVar3 = FUN_008fd190(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_00ea9550:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar3 = FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00ea9550;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar6 = (undefined8 *)FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_008fa54c(&local_70,puVar6);
  FUN_008fce60(param_2 + 0x30,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar5,"guildId");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_00ea95cc:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "guildId";
    local_60 = 0x100005;
    local_68 = 7;
    lVar3 = FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00ea95cc;
    local_70 = "guildId";
    local_60 = 0x100005;
    local_68 = 7;
    puVar6 = (undefined8 *)FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_008fa54c(&local_70,puVar6);
  FUN_008fce60(param_2 + 0x48,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00ea95f8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00ea9680(long param_1,long param_2)

{
  return *(int *)(param_2 + 0x48) < *(int *)(param_1 + 0x48);
}




void FUN_00ea9694(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong local_248 [2];
  void *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  char *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  byte local_210 [16];
  void *local_200;
  byte local_1f8 [16];
  void *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  ulong local_1d8 [2];
  void *local_1c8;
  ulong auStack_1c0 [2];
  void *pvStack_1b0;
  undefined4 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  ulong local_178 [2];
  void *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  code *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    uVar11 = 0;
  }
  else {
    local_1a0 = "code";
    local_190 = (void *)CONCAT44(local_190._4_4_,0x100005);
    local_198 = 4;
    lVar4 = FUN_008feca4(param_1,&local_1a0);
    uVar11 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_1a0 = "code";
      local_190 = (void *)CONCAT44(local_190._4_4_,0x100005);
      local_198 = 4;
      puVar5 = (undefined4 *)FUN_008feca4(param_1,&local_1a0);
      uVar11 = *puVar5;
    }
  }
  *(undefined4 *)(param_2 + 0x238) = uVar11;
  FUN_008fce60(param_2 + 0x220,&DAT_0320ffa8);
  FUN_00954e24(param_2 + 0x1d8,0);
  FUN_009551c0(param_2 + 0x1e8,0);
  FUN_00955134(param_2 + 0x1f8,0);
  FUN_00955098(param_2 + 0x208,0);
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00ea9930;
  local_1a0 = "returnValue";
  local_190 = (void *)CONCAT44(local_190._4_4_,0x100005);
  local_198 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_1a0);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00ea9930;
  local_1a0 = (char *)0x0;
  local_198 = 0;
  local_190 = (void *)0x0;
  FUN_00e70510(&local_188);
  local_178[0] = 0;
  local_178[1] = 0;
  local_168 = (void *)0x0;
  local_228 = "returnValue";
  local_218 = 0x100005;
  local_220 = 0xb;
  plVar6 = (long *)FUN_008feca4(param_1,&local_228);
  lVar4 = FUN_008fd190(plVar6,"success");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00ea9880:
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  else {
    local_228 = "success";
    local_218 = 0x100005;
    local_220 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_228);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_00ea9880;
    local_228 = "success";
    local_218 = 0x100005;
    local_220 = 7;
    lVar4 = FUN_008feca4(plVar6,&local_228);
    bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    *(bool *)(param_2 + 0x218) = bVar3;
    if (bVar3) {
      lVar4 = FUN_008fd190(plVar6,"members");
      if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) ||
         (lVar4 = FUN_008fd190(plVar6,"guildUUID"),
         *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4)) {
        *(undefined4 *)(param_2 + 0x238) = 0xfffffffa;
        FUN_00e83324(0xfffffffa);
      }
      else {
        lVar4 = FUN_008fd190(plVar6,"guildUUID");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00ea9a40:
          puVar7 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_228 = "guildUUID";
          local_218 = 0x100005;
          local_220 = 9;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00ea9a40;
          local_228 = "guildUUID";
          local_218 = 0x100005;
          local_220 = 9;
          puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_228);
          if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
            puVar7 = (undefined8 *)*puVar7;
          }
        }
        FUN_008fa54c(&local_228,puVar7);
        FUN_008fce60(param_2 + 0x180,&local_228);
        if (((ulong)local_228 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_214,local_218));
        }
        lVar4 = FUN_008fd190(plVar6,"guildXp");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          uVar11 = 0;
        }
        else {
          local_228 = "guildXp";
          local_218 = 0x100005;
          local_220 = 7;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          uVar11 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_228 = "guildXp";
            local_218 = 0x100005;
            local_220 = 7;
            puVar5 = (undefined4 *)FUN_008feca4(plVar6,&local_228);
            uVar11 = *puVar5;
          }
        }
        *(undefined4 *)(param_2 + 0x1b4) = uVar11;
        lVar4 = FUN_008fd190(plVar6,"guildXpRequired");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          uVar11 = 0;
        }
        else {
          local_228 = "guildXpRequired";
          local_218 = 0x100005;
          local_220 = 0xf;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          uVar11 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_228 = "guildXpRequired";
            local_218 = 0x100005;
            local_220 = 0xf;
            puVar5 = (undefined4 *)FUN_008feca4(plVar6,&local_228);
            uVar11 = *puVar5;
          }
        }
        *(undefined4 *)(param_2 + 0x1b8) = uVar11;
        lVar4 = FUN_008fd190(plVar6,"guildXpMin");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          uVar11 = 0;
        }
        else {
          local_228 = "guildXpMin";
          local_218 = 0x100005;
          local_220 = 10;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          uVar11 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_228 = "guildXpMin";
            local_218 = 0x100005;
            local_220 = 10;
            puVar5 = (undefined4 *)FUN_008feca4(plVar6,&local_228);
            uVar11 = *puVar5;
          }
        }
        *(undefined4 *)(param_2 + 0x1b0) = uVar11;
        lVar4 = FUN_008fd190(plVar6,"avgSkillTier");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          uVar11 = 0;
        }
        else {
          local_228 = "avgSkillTier";
          local_218 = 0x100005;
          local_220 = 0xc;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          uVar11 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_228 = "avgSkillTier";
            local_218 = 0x100005;
            local_220 = 0xc;
            puVar5 = (undefined4 *)FUN_008feca4(plVar6,&local_228);
            uVar11 = *puVar5;
          }
        }
        *(undefined4 *)(param_2 + 0x1bc) = uVar11;
        lVar4 = FUN_008fd190(plVar6,"avgKarma");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          uVar11 = 0;
        }
        else {
          local_228 = "avgKarma";
          local_218 = 0x100005;
          local_220 = 8;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          uVar11 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_228 = "avgKarma";
            local_218 = 0x100005;
            local_220 = 8;
            puVar5 = (undefined4 *)FUN_008feca4(plVar6,&local_228);
            uVar11 = *puVar5;
          }
        }
        *(undefined4 *)(param_2 + 0x1c0) = uVar11;
        lVar4 = FUN_008fd190(plVar6,"recentlyActive");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          uVar11 = 0;
        }
        else {
          local_228 = "recentlyActive";
          local_218 = 0x100005;
          local_220 = 0xe;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          uVar11 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_228 = "recentlyActive";
            local_218 = 0x100005;
            local_220 = 0xe;
            puVar5 = (undefined4 *)FUN_008feca4(plVar6,&local_228);
            uVar11 = *puVar5;
          }
        }
        *(undefined4 *)(param_2 + 0x1c4) = uVar11;
        lVar4 = FUN_008fd190(plVar6,"memberType");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          uVar11 = 0;
        }
        else {
          local_228 = "memberType";
          local_218 = 0x100005;
          local_220 = 10;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          uVar11 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_228 = "memberType";
            local_218 = 0x100005;
            local_220 = 10;
            puVar5 = (undefined4 *)FUN_008feca4(plVar6,&local_228);
            uVar11 = *puVar5;
          }
        }
        *(undefined4 *)(param_2 + 0x1d4) = uVar11;
        lVar4 = FUN_008fd190(plVar6,"bForDisplay");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          bVar3 = false;
        }
        else {
          local_228 = "bForDisplay";
          local_218 = 0x100005;
          local_220 = 0xb;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          bVar3 = false;
          if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
            local_228 = "bForDisplay";
            local_218 = 0x100005;
            local_220 = 0xb;
            lVar4 = FUN_008feca4(plVar6,&local_228);
            bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
          }
        }
        *(bool *)(param_2 + 0x1d0) = bVar3;
        lVar4 = FUN_008fd190(plVar6,"createdTime");
        uVar14 = 0;
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
          local_228 = "createdTime";
          local_218 = 0x100005;
          local_220 = 0xb;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          if ((*(byte *)(lVar4 + 0x11) >> 1 & 1) != 0) {
            local_228 = "createdTime";
            local_218 = 0x100005;
            local_220 = 0xb;
            FUN_008feca4(plVar6,&local_228);
            uVar14 = FUN_008fc0f0();
          }
        }
        *(undefined8 *)(param_2 + 0x1c8) = uVar14;
        FUN_00eab428(plVar6,param_2 + 0x28);
        lVar4 = FUN_008fd190(plVar6,"nextRewardChestHashedSku");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
          local_228 = "nextRewardChestHashedSku";
          local_218 = 0x100005;
          local_220 = 0x18;
          lVar4 = FUN_008feca4(plVar6,&local_228);
          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
            lVar4 = FUN_008fd190(plVar6,"nextRewardChestHashedSku");
            if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_228 = "nextRewardChestHashedSku";
              local_218 = 0x100005;
              local_220 = 0x18;
              lVar4 = FUN_008feca4(plVar6,&local_228);
              if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) {
                puVar7 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_228 = "nextRewardChestHashedSku";
                local_218 = 0x100005;
                local_220 = 0x18;
                puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_228);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_228,puVar7);
            FUN_008fce60(param_2 + 0x198,&local_228);
            if (((ulong)local_228 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_214,local_218));
            }
          }
        }
        local_228 = "members";
        local_218 = 0x100005;
        local_220 = 7;
        plVar8 = (long *)FUN_008feca4(plVar6,&local_228);
        uVar13 = (ulong)*(uint *)(plVar8 + 1);
        if (0 < (int)*(uint *)(plVar8 + 1)) {
          lVar4 = 0;
          do {
            plVar1 = (long *)(*plVar8 + lVar4);
            lVar9 = FUN_008fd190(plVar1,"uuid");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_228 = "uuid";
              local_218 = 0x100005;
              local_220 = 4;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_228 = "uuid";
                local_218 = 0x100005;
                local_220 = 4;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_228);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_228,puVar7);
            FUN_008fce60(&local_1a0,&local_228);
            if (((ulong)local_228 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_214,local_218));
            }
            lVar9 = FUN_008fd190(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_228 = "handle";
              local_218 = 0x100005;
              local_220 = 6;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_228 = "handle";
                local_218 = 0x100005;
                local_220 = 6;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_228);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_00e705a0(&local_188,puVar7);
            lVar9 = FUN_008fd190(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_228 = "handle";
              local_218 = 0x100005;
              local_220 = 6;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_228 = "handle";
                local_218 = 0x100005;
                local_220 = 6;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_228);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_228,puVar7);
            FUN_008fce60(local_178,&local_228);
            if (((ulong)local_228 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_214,local_218));
            }
            lVar9 = FUN_008fd190(plVar1,"status");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "status";
              local_218 = 0x100005;
              local_220 = 6;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "status";
                local_218 = 0x100005;
                local_220 = 6;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_160 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"timeSinceLastActive");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "timeSinceLastActive";
              local_218 = 0x100005;
              local_220 = 0x13;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "timeSinceLastActive";
                local_218 = 0x100005;
                local_220 = 0x13;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_15c = uVar11;
            lVar9 = FUN_008fd190(plVar1,"availability");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "availability";
              local_218 = 0x100005;
              local_220 = 0xc;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "availability";
                local_218 = 0x100005;
                local_220 = 0xc;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_158 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"guildXpEarned");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "guildXpEarned";
              local_218 = 0x100005;
              local_220 = 0xd;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "guildXpEarned";
                local_218 = 0x100005;
                local_220 = 0xd;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_154 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"rank");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "rank";
              local_218 = 0x100005;
              local_220 = 4;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "rank";
                local_218 = 0x100005;
                local_220 = 4;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_150 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"rankProgress");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              iVar12 = 0;
            }
            else {
              local_228 = "rankProgress";
              local_218 = 0x100005;
              local_220 = 0xc;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              iVar12 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "rankProgress";
                local_218 = 0x100005;
                local_220 = 0xc;
                piVar10 = (int *)FUN_008feca4(plVar1,&local_228);
                iVar12 = *piVar10;
              }
            }
            local_14c = (float)iVar12;
            lVar9 = FUN_008fd190(plVar1,"seasonalWins");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "seasonalWins";
              local_218 = 0x100005;
              local_220 = 0xc;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "seasonalWins";
                local_218 = 0x100005;
                local_220 = 0xc;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_138 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"lifetimeWins");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "lifetimeWins";
              local_218 = 0x100005;
              local_220 = 0xc;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "lifetimeWins";
                local_218 = 0x100005;
                local_220 = 0xc;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_13c = uVar11;
            lVar9 = FUN_008fd190(plVar1,"isDev");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              bVar3 = false;
            }
            else {
              local_228 = "isDev";
              local_218 = 0x100005;
              local_220 = 5;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              bVar3 = false;
              if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
                local_228 = "isDev";
                local_218 = 0x100005;
                local_220 = 5;
                lVar9 = FUN_008feca4(plVar1,&local_228);
                bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
              }
            }
            local_148 = bVar3;
            lVar9 = FUN_008fd190(plVar1,"karma");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "karma";
              local_218 = 0x100005;
              local_220 = 5;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "karma";
                local_218 = 0x100005;
                local_220 = 5;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_144 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"level");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "level";
              local_218 = 0x100005;
              local_220 = 5;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "level";
                local_218 = 0x100005;
                local_220 = 5;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_140 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"allowedToInvite");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              bVar3 = false;
            }
            else {
              local_228 = "allowedToInvite";
              local_218 = 0x100005;
              local_220 = 0xf;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              bVar3 = false;
              if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
                local_228 = "allowedToInvite";
                local_218 = 0x100005;
                local_220 = 0xf;
                lVar9 = FUN_008feca4(plVar1,&local_228);
                bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
              }
            }
            local_a0 = bVar3;
            lVar9 = FUN_008fd190(plVar1,"isFriend");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              bVar3 = false;
            }
            else {
              local_228 = "isFriend";
              local_218 = 0x100005;
              local_220 = 8;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              bVar3 = false;
              if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
                local_228 = "isFriend";
                local_218 = 0x100005;
                local_220 = 8;
                lVar9 = FUN_008feca4(plVar1,&local_228);
                bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
              }
            }
            local_9f = bVar3;
            lVar9 = FUN_008fd190(plVar1,"isBoosted");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              bVar3 = false;
            }
            else {
              local_228 = "isBoosted";
              local_218 = 0x100005;
              local_220 = 9;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              bVar3 = false;
              if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
                local_228 = "isBoosted";
                local_218 = 0x100005;
                local_220 = 9;
                lVar9 = FUN_008feca4(plVar1,&local_228);
                bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
              }
            }
            local_9e = bVar3;
            FUN_00eab92c(plVar1,auStack_130,auStack_100,auStack_d0);
            FUN_00eabad0(param_2 + 0x1d8,&local_1a0);
            uVar13 = uVar13 - 1;
            lVar4 = lVar4 + 0x18;
          } while (uVar13 != 0);
        }
      }
      local_248[0] = 0;
      local_248[1] = 0;
      local_238 = (void *)0x0;
      lVar4 = FUN_008fd190(plVar6,"activeBuffs");
      if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) &&
         (lVar4 = FUN_008fd190(plVar6,"guildUUID"),
         *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
        local_228 = "activeBuffs";
        local_218 = 0x100005;
        local_220 = 0xb;
        plVar8 = (long *)FUN_008feca4(plVar6,&local_228);
        if ((int)plVar8[1] != 0) {
          lVar4 = 0;
          uVar13 = 0;
          do {
            plVar1 = (long *)(*plVar8 + lVar4);
            lVar9 = FUN_008fd190(plVar1,"name");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_228 = "name";
              local_218 = 0x100005;
              local_220 = 4;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_228 = "name";
                local_218 = 0x100005;
                local_220 = 4;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_228);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_228,puVar7);
            FUN_008fce60(local_248,&local_228);
            if (((ulong)local_228 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_214,local_218));
            }
            lVar9 = FUN_008fd190(plVar1,"startTime");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "startTime";
              local_218 = 0x100005;
              local_220 = 9;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "startTime";
                local_218 = 0x100005;
                local_220 = 9;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_230 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"timeLeft");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "timeLeft";
              local_218 = 0x100005;
              local_220 = 8;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "timeLeft";
                local_218 = 0x100005;
                local_220 = 8;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_22c = uVar11;
            FUN_00eabb88(param_2 + 0x1e8,local_248);
            uVar13 = uVar13 + 1;
            lVar4 = lVar4 + 0x18;
          } while (uVar13 < *(uint *)(plVar8 + 1));
        }
      }
      pvStack_1b0 = (void *)0x0;
      auStack_1c0[1] = 0;
      auStack_1c0[0] = 0;
      local_1c8 = (void *)0x0;
      local_1d8[1] = 0;
      local_1d8[0] = 0;
      lVar4 = FUN_008fd190(plVar6,"nearestGuilds");
      if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) &&
         (lVar4 = FUN_008fd190(plVar6,"guildUUID"),
         *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
        local_228 = "nearestGuilds";
        local_218 = 0x100005;
        local_220 = 0xd;
        plVar8 = (long *)FUN_008feca4(plVar6,&local_228);
        if ((int)plVar8[1] != 0) {
          lVar4 = 0;
          uVar13 = 0;
          do {
            plVar1 = (long *)(*plVar8 + lVar4);
            lVar9 = FUN_008fd190(plVar1,"name");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_228 = "name";
              local_218 = 0x100005;
              local_220 = 4;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_228 = "name";
                local_218 = 0x100005;
                local_220 = 4;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_228);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_228,puVar7);
            FUN_008fce60(local_1d8,&local_228);
            if (((ulong)local_228 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_214,local_218));
            }
            lVar9 = FUN_008fd190(plVar1,"tag");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_228 = "tag";
              local_218 = 0x100005;
              local_220 = 3;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_228 = "tag";
                local_218 = 0x100005;
                local_220 = 3;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_228);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_228,puVar7);
            FUN_008fce60(auStack_1c0,&local_228);
            if (((ulong)local_228 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_214,local_218));
            }
            lVar9 = FUN_008fd190(plVar1,"level");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_228 = "level";
              local_218 = 0x100005;
              local_220 = 5;
              lVar9 = FUN_008feca4(plVar1,&local_228);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_228 = "level";
                local_218 = 0x100005;
                local_220 = 5;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_228);
                uVar11 = *puVar5;
              }
            }
            local_1a8 = uVar11;
            FUN_00eabc1c(param_2 + 0x1f8,local_1d8);
            uVar13 = uVar13 + 1;
            lVar4 = lVar4 + 0x18;
          } while (uVar13 < *(uint *)(plVar8 + 1));
        }
      }
      FUN_00eabcc4(&local_228);
      lVar4 = FUN_008fd190(plVar6,"trophyCase");
      if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) &&
         (lVar4 = FUN_008fd190(plVar6,"guildUUID"),
         *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
        local_98 = (code *)0x1bf0ace;
        local_88 = 0x100005;
        local_90 = 10;
        plVar8 = (long *)FUN_008feca4(plVar6,&local_98);
        if ((int)plVar8[1] != 0) {
          lVar4 = 0;
          uVar13 = 0;
          do {
            plVar1 = (long *)(*plVar8 + lVar4);
            lVar9 = FUN_008fd190(plVar1,"trophy_type");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_98 = (code *)0x1bf0ae8;
              local_88 = 0x100005;
              local_90 = 0xb;
              lVar9 = FUN_008feca4(plVar1,&local_98);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_98 = (code *)0x1bf0ae8;
                local_88 = 0x100005;
                local_90 = 0xb;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_98,puVar7);
            FUN_008fce60(&local_228,&local_98);
            if (((ulong)local_98 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_84,local_88));
            }
            lVar9 = FUN_008fd190(plVar1,"name");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_98 = (code *)0x1e3357a;
              local_88 = 0x100005;
              local_90 = 4;
              lVar9 = FUN_008feca4(plVar1,&local_98);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_98 = (code *)0x1e3357a;
                local_88 = 0x100005;
                local_90 = 4;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_98,puVar7);
            FUN_008fce60(local_210,&local_98);
            if (((ulong)local_98 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_84,local_88));
            }
            lVar9 = FUN_008fd190(plVar1,"tag");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              puVar7 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_98 = (code *)0x1e46d3b;
              local_88 = 0x100005;
              local_90 = 3;
              lVar9 = FUN_008feca4(plVar1,&local_98);
              puVar7 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar9 + 0x12) >> 4 & 1) != 0) {
                local_98 = (code *)0x1e46d3b;
                local_88 = 0x100005;
                local_90 = 3;
                puVar7 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                  puVar7 = (undefined8 *)*puVar7;
                }
              }
            }
            FUN_008fa54c(&local_98,puVar7);
            FUN_008fce60(local_1f8,&local_98);
            if (((ulong)local_98 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_84,local_88));
            }
            lVar9 = FUN_008fd190(plVar1,"season");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_98 = (code *)0x1b99fc2;
              local_88 = 0x100005;
              local_90 = 6;
              lVar9 = FUN_008feca4(plVar1,&local_98);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_98 = (code *)0x1b99fc2;
                local_88 = 0x100005;
                local_90 = 6;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
                uVar11 = *puVar5;
              }
            }
            local_1e0 = uVar11;
            lVar9 = FUN_008fd190(plVar1,"value");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
              uVar11 = 0;
            }
            else {
              local_98 = (code *)0x1e32079;
              local_88 = 0x100005;
              local_90 = 5;
              lVar9 = FUN_008feca4(plVar1,&local_98);
              uVar11 = 0;
              if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
                local_98 = (code *)0x1e32079;
                local_88 = 0x100005;
                local_90 = 5;
                puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_98);
                uVar11 = *puVar5;
              }
            }
            local_1dc = uVar11;
            FUN_00b4a504(param_2 + 0x208,&local_228);
            uVar13 = uVar13 + 1;
            lVar4 = lVar4 + 0x18;
          } while (uVar13 < *(uint *)(plVar8 + 1));
        }
      }
      local_98 = FUN_00ea9680;
      FUN_00eba808(*(long *)(param_2 + 0x210),
                   *(long *)(param_2 + 0x210) + (ulong)*(uint *)(param_2 + 0x208) * 0x50,&local_98);
      if ((local_1f8[0] & 1) != 0) {
        operator_delete(local_1e8);
      }
      if ((local_210[0] & 1) != 0) {
        operator_delete(local_200);
      }
      if (((ulong)local_228 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_214,local_218));
      }
      if ((auStack_1c0[0] & 1) != 0) {
        operator_delete(pvStack_1b0);
      }
      if ((local_1d8[0] & 1) != 0) {
        operator_delete(local_1c8);
      }
      if ((local_248[0] & 1) != 0) {
        operator_delete(local_238);
      }
    }
  }
  lVar4 = FUN_008fd190(plVar6,"reason");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_00ea98d4:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_228 = "reason";
    local_218 = 0x100005;
    local_220 = 6;
    lVar4 = FUN_008feca4(plVar6,&local_228);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00ea98d4;
    local_228 = "reason";
    local_218 = 0x100005;
    local_220 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar6,&local_228);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_228,puVar7);
  FUN_008fce60(param_2 + 0x220,&local_228);
  if (((ulong)local_228 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_214,local_218));
  }
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
    local_188 = 0;
  }
  if (((ulong)local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
LAB_00ea9930:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

