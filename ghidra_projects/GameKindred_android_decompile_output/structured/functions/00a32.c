// functions/00a32 — 8 functions
#include "libGameKindred.h"




void FUN_00a3201c(long param_1,long param_2,int param_3)

{
  void *pvVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  size_t sVar16;
  ulong uVar17;
  void *pvVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  uint local_bc;
  undefined4 local_b4;
  uint local_b0 [4];
  void *local_a0;
  ulong local_98 [2];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b4 = 0xffffffff;
  uVar21 = 0xffffffff;
  if ((*(uint *)(param_2 + 0x2f4) & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) >> 0x10 & 1) == 0) goto LAB_00a32908;
    FUN_008fa54c(local_80,"white_background");
    local_98[0] = 0;
    local_98[1] = 0;
    local_88 = (void *)0x0;
    lVar13 = FUN_00d9e390(param_3);
    if (lVar13 != 0) {
      cVar6 = FUN_00d55870(lVar13);
      cVar10 = *(char *)(param_1 + 400);
      bVar5 = cVar6 == cVar10;
      FUN_00d5cf60(lVar13);
      lVar14 = FUN_00d9e390();
      if (lVar14 == 0) {
        if (lVar13 == param_2) {
          pcVar15 = (char *)FUN_00d5bc38(param_2);
          iVar11 = strcmp(pcVar15,"GoldMine");
          if (iVar11 != 0) goto LAB_00a323c4;
          FUN_008fa54c(local_b0,"hud_pingicon_action_kraken");
          FUN_008fce60(local_80,local_b0);
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          local_b4 = 0xffffffff;
          bVar5 = false;
          local_bc = 0;
        }
        else {
          if (((*(byte *)(lVar13 + 0x2f4) & 1) == 0) &&
             (cVar7 = FUN_00d55870(lVar13), cVar7 != '\0')) {
            puVar19 = &DAT_03131f20;
            if (cVar6 != cVar10) {
              puVar19 = &DAT_03131f24;
            }
            local_b4 = *puVar19;
          }
          uVar12 = *(uint *)(lVar13 + 0x2f4);
          if ((uVar12 & 1) == 0) {
            if ((uVar12 >> 0xd & 1) == 0) {
              if ((uVar12 >> 0xb & 1) != 0) {
                pcVar15 = "hud_pingicon_action_gold_miner";
                goto LAB_00a32558;
              }
              if ((uVar12 >> 10 & 1) != 0) {
                pcVar15 = "hud_pingicon_action_minion_miner";
                goto LAB_00a32558;
              }
              if ((uVar12 & 0x110) != 0) {
                pcVar15 = "hud_pingicon_action_minion";
                goto LAB_00a32558;
              }
              if ((uVar12 >> 2 & 1) == 0) goto LAB_00a323e8;
              uVar12 = FUN_00d5bc54(lVar13);
              thunk_FUN_00d9ff34(local_b0,"5v5_Blackclaw_Uncaptured");
              if (local_b0[0] == uVar12) {
LAB_00a3298c:
                pcVar15 = "hud_battlelog_blackclaw";
                goto LAB_00a32558;
              }
              uVar12 = FUN_00d5bc54(lVar13);
              thunk_FUN_00d9ff34(local_b0,"5v5_Blackclaw_Captured");
              if (local_b0[0] == uVar12) goto LAB_00a3298c;
              uVar12 = FUN_00d5bc54(lVar13);
              thunk_FUN_00d9ff34(local_b0,"5v5_Ghostwing");
              if (local_b0[0] == uVar12) {
                pcVar15 = "hud_battlelog_ghostwing";
                goto LAB_00a32558;
              }
              if ((*(byte *)(lVar13 + 0x2f7) >> 6 & 1) != 0) {
                pcVar15 = "hud_pingicon_action_kraken";
                goto LAB_00a32558;
              }
            }
            else {
              pcVar15 = "hud_pingicon_action_turret";
LAB_00a32558:
              FUN_008fa54c(local_b0,pcVar15);
              FUN_008fce60(local_80,local_b0);
              if ((local_b0[0] & 1) != 0) {
                operator_delete(local_a0);
              }
            }
            bVar5 = false;
            local_bc = 0;
          }
          else {
            uVar17 = FUN_00ceab64();
            if (((uVar17 & 1) == 0) && ((*(byte *)(param_2 + 0x2f5) >> 4 & 1) == 0)) {
LAB_00a323e8:
              bVar4 = false;
              bVar5 = false;
              local_bc = 0;
              goto LAB_00a32588;
            }
            FUN_008fa54c(local_b0,"icon_hero_");
            FUN_008fce60(local_80,local_b0);
            if ((local_b0[0] & 1) != 0) {
              operator_delete(local_a0);
            }
            pcVar15 = (char *)FUN_00d5bc38(lVar13);
            sVar16 = strlen(pcVar15);
            FUN_0090de84(local_80,pcVar15,sVar16);
            local_bc = 4;
          }
        }
        bVar4 = true;
      }
      else if ((*(byte *)(lVar14 + 0x2f4) & 1) == 0) {
LAB_00a323c4:
        bVar4 = false;
        bVar5 = false;
        local_bc = 0;
      }
      else {
        FUN_008fa54c(local_b0,"icon_hero_");
        FUN_008fce60(local_80,local_b0);
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        pcVar15 = (char *)FUN_00d5bc38(lVar14);
        sVar16 = strlen(pcVar15);
        FUN_0090de84(local_80,pcVar15,sVar16);
        cVar7 = FUN_00d55870(lVar14);
        bVar5 = cVar7 == *(char *)(param_1 + 400);
        FUN_00d55870(lVar14);
        local_bc = 4;
        bVar4 = true;
        uVar21 = DAT_03131f24;
      }
LAB_00a32588:
      cVar8 = FUN_00d55870(param_2);
      uVar12 = *(uint *)(param_2 + 0x2f4);
      cVar7 = *(char *)(param_1 + 400);
      if ((uVar12 >> 2 & 1) == 0) {
        if ((uVar12 >> 0xf & 1) == 0) {
          if ((uVar12 >> 0xd & 1) != 0) {
            pcVar15 = "hud_pingicon_action_turret";
            goto LAB_00a326bc;
          }
          if ((uVar12 >> 0xe & 1) != 0) {
            pcVar15 = "hud_battlelog_armory";
            goto LAB_00a326bc;
          }
          if ((uVar12 >> 0xb & 1) == 0) {
            pcVar15 = "hud_pingicon_action_minion_miner";
          }
          else {
            pcVar15 = "hud_pingicon_action_gold_miner";
          }
          FUN_008fa54c(local_b0,pcVar15);
          FUN_008fce60(local_98,local_b0);
          if (((byte)local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          bVar3 = (cVar6 == cVar10) != (cVar8 == cVar7);
          if (lVar13 == param_2) goto LAB_00a326e4;
LAB_00a326f4:
          if (bVar3) goto LAB_00a32654;
LAB_00a326f8:
          puVar19 = &DAT_03131f20;
          puVar20 = &DAT_03131f24;
          goto LAB_00a32708;
        }
        pcVar15 = "hud_pingicon_action_vain_crystal";
LAB_00a326bc:
        FUN_008fa54c(local_b0,pcVar15);
        FUN_008fce60(local_98,local_b0);
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        bVar3 = false;
LAB_00a326e4:
        cVar10 = FUN_00d55870(param_2);
        if (cVar10 != '\0') goto LAB_00a326f4;
      }
      else {
        uVar12 = FUN_00d5bc54(param_2);
        thunk_FUN_00d9ff34(local_b0,"5v5_Blackclaw_Uncaptured");
        if (local_b0[0] == uVar12) {
LAB_00a3260c:
          pcVar15 = "hud_battlelog_blackclaw";
LAB_00a32614:
          FUN_008fa54c(local_b0,pcVar15);
          FUN_008fce60(local_98,local_b0);
          if (((byte)local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        else {
          uVar12 = FUN_00d5bc54(param_2);
          thunk_FUN_00d9ff34(local_b0,"5v5_Blackclaw_Captured");
          if (local_b0[0] == uVar12) goto LAB_00a3260c;
          uVar12 = FUN_00d5bc54(param_2);
          thunk_FUN_00d9ff34(local_b0,"5v5_Ghostwing");
          if (local_b0[0] == uVar12) {
            pcVar15 = "hud_battlelog_ghostwing";
            goto LAB_00a32614;
          }
          if ((*(byte *)(param_2 + 0x2f7) >> 6 & 1) != 0) {
            pcVar15 = "hud_pingicon_action_kraken";
            goto LAB_00a32614;
          }
        }
        cVar9 = FUN_00d55870(param_2);
        if ((cVar6 != cVar10) || (cVar9 != '\0')) goto LAB_00a326f8;
LAB_00a32654:
        puVar19 = &DAT_03131f24;
        puVar20 = &DAT_03131f20;
LAB_00a32708:
        if (cVar8 != cVar7) {
          puVar19 = puVar20;
        }
        uVar21 = *puVar19;
      }
      pvVar18 = (void *)0x0;
      if ((bVar4) && (pvVar18 = local_70, (local_80[0] & 1) == 0)) {
        pvVar18 = (void *)((ulong)local_80 | 1);
      }
      pvVar1 = (void *)((ulong)local_98 | 1);
      if ((local_98[0] & 1) != 0) {
        pvVar1 = local_88;
      }
      uVar17 = FUN_00a329e4(param_1,pvVar18,"hud_stats_kills",&DAT_03210450,pvVar1,1,1,bVar5,0,
                            local_b4,uVar21,0);
      if ((uVar17 & 1) != 0) {
        lVar13 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8);
        uVar12 = *(uint *)(lVar13 + 0xc3c) & 0xfffffffb;
        local_bc = *(uint *)(lVar13 + 0x96c) & 0xfffffffb | local_bc;
        goto LAB_00a328e0;
      }
    }
  }
  else {
    local_80[0] = 0;
    local_80[1] = 0;
    local_70 = (void *)0x0;
    FUN_008fa54c(local_98,"icon_hero_");
    pcVar15 = (char *)FUN_00d5bc38(param_2);
    sVar16 = strlen(pcVar15);
    FUN_0090de84(local_98,pcVar15,sVar16);
    cVar6 = FUN_00d55870(param_2);
    cVar10 = *(char *)(param_1 + 400);
    iVar11 = FUN_00d5bc6c(param_2);
    if (iVar11 != -1) {
      param_3 = iVar11;
    }
    lVar13 = FUN_00d9e390(param_3);
    if (lVar13 == 0) {
LAB_00a321f0:
      iVar11 = 0;
      bVar5 = false;
      pvVar18 = (void *)0x0;
    }
    else {
      FUN_00d5cf60(lVar13);
      lVar14 = FUN_00d9e390();
      if (lVar14 == 0) {
        if ((*(byte *)(lVar13 + 0x2f4) & 1) != 0) {
          FUN_008fa54c(local_b0,"icon_hero_");
          FUN_008fce60(local_80,local_b0);
          if (((byte)local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          pcVar15 = (char *)FUN_00d5bc38(lVar13);
          sVar16 = strlen(pcVar15);
          FUN_0090de84(local_80,pcVar15,sVar16);
          goto LAB_00a32384;
        }
        cVar7 = FUN_00d55870(lVar13);
        if (cVar7 != '\0') {
          cVar7 = FUN_00d55870(lVar13);
          puVar19 = &DAT_03131f20;
          if (cVar7 != *(char *)(param_1 + 400)) {
            puVar19 = &DAT_03131f24;
          }
          uVar21 = *puVar19;
        }
        uVar12 = *(uint *)(lVar13 + 0x2f4);
        if ((uVar12 >> 0xd & 1) == 0) {
          if ((uVar12 >> 2 & 1) == 0) {
            if ((uVar12 >> 0xb & 1) == 0) {
              if ((uVar12 >> 10 & 1) == 0) {
                if ((uVar12 & 0x110) == 0) goto LAB_00a321f0;
                pcVar15 = "hud_pingicon_action_minion";
              }
              else {
                pcVar15 = "hud_pingicon_action_minion_miner";
              }
            }
            else {
              pcVar15 = "hud_pingicon_action_gold_miner";
            }
            goto LAB_00a3282c;
          }
          uVar12 = FUN_00d5bc54(lVar13);
          thunk_FUN_00d9ff34(local_b0,"5v5_Blackclaw_Uncaptured");
          if (local_b0[0] == uVar12) {
LAB_00a32448:
            pcVar15 = "hud_battlelog_blackclaw";
            goto LAB_00a3282c;
          }
          uVar12 = FUN_00d5bc54(lVar13);
          thunk_FUN_00d9ff34(local_b0,"5v5_Blackclaw_Captured");
          if (local_b0[0] == uVar12) goto LAB_00a32448;
          uVar12 = FUN_00d5bc54(lVar13);
          thunk_FUN_00d9ff34(local_b0,"5v5_Ghostwing");
          if (local_b0[0] == uVar12) {
            pcVar15 = "hud_battlelog_ghostwing";
            goto LAB_00a3282c;
          }
          if ((*(byte *)(lVar13 + 0x2f7) >> 6 & 1) != 0) {
            pcVar15 = "hud_pingicon_action_kraken";
            goto LAB_00a3282c;
          }
        }
        else {
          pcVar15 = "hud_pingicon_action_turret";
LAB_00a3282c:
          FUN_008fa54c(local_b0,pcVar15);
          FUN_008fce60(local_80,local_b0);
          if (((byte)local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        bVar5 = false;
        iVar11 = 0;
      }
      else {
        if ((*(byte *)(lVar14 + 0x2f4) & 1) == 0) goto LAB_00a321f0;
        FUN_008fa54c(local_b0,"icon_hero_");
        FUN_008fce60(local_80,local_b0);
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        pcVar15 = (char *)FUN_00d5bc38(lVar14);
        sVar16 = strlen(pcVar15);
        FUN_0090de84(local_80,pcVar15,sVar16);
        lVar13 = lVar14;
LAB_00a32384:
        cVar7 = FUN_00d55870(lVar13);
        iVar11 = 1;
        bVar5 = cVar7 == *(char *)(param_1 + 400);
      }
      pvVar18 = local_70;
      if ((local_80[0] & 1) == 0) {
        pvVar18 = (void *)((ulong)local_80 | 1);
      }
    }
    pvVar1 = (void *)((ulong)local_98 | 1);
    if ((local_98[0] & 1) != 0) {
      pvVar1 = local_88;
    }
    uVar17 = FUN_00a329e4(param_1,pvVar18,"hud_stats_kills",&DAT_03210450,pvVar1,1,1,bVar5,
                          cVar6 == cVar10,uVar21,0xffffffff,0);
    if ((uVar17 & 1) != 0) {
      lVar13 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8);
      local_bc = *(uint *)(lVar13 + 0x96c) & 0xfffffff8 |
                 *(uint *)(lVar13 + 0x96c) & 3 | iVar11 << 2;
      uVar12 = *(uint *)(lVar13 + 0xc3c) | 4;
LAB_00a328e0:
      *(uint *)(lVar13 + 0x96c) = local_bc;
      *(uint *)(lVar13 + 0xc3c) = uVar12;
    }
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00a32908:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




uint FUN_00a329e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,uint param_8,byte param_9,
                 undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  uint uVar2;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_a0,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_008fa54c(local_88,param_5);
  local_70 = 0;
  uVar2 = FUN_00a32d10(param_1,param_2,param_3,param_4,local_a0,param_6,param_7,param_8 & 1,
                       param_9 & 1,param_10,param_11,param_12);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a32ae8(long param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x96c) =
       *(uint *)(param_1 + 0x96c) & 0xfffffff8 | *(uint *)(param_1 + 0x96c) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0xc3c) =
       *(uint *)(param_1 + 0xc3c) & 0xfffffff8 | *(uint *)(param_1 + 0xc3c) & 3 | (param_3 & 1) << 2
  ;
  return;
}




void FUN_00a32b0c(long param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  undefined1 local_80;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  cVar4 = FUN_00d55870(param_2);
  cVar2 = *(char *)(param_1 + 400);
  uVar6 = FUN_00ceab64();
  if (((uVar6 & 1) != 0) || (cVar4 == cVar2)) {
    uVar7 = FUN_00d5bc38(param_2);
    FUN_00e6a8a8(auStack_78,"icon_hero_%s",uVar7);
    uVar7 = FUN_00d6eb50();
    lVar8 = FUN_00d6eb88(uVar7,param_3);
    if ((lVar8 != 0) &&
       ((*(char *)(lVar8 + 0x19c) != '\0' ||
        ((uVar6 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260)), (uVar6 & 1) != 0 &&
         (iVar5 = FUN_009f1f94(0x1a), iVar5 == 0)))))) {
      uVar7 = *(undefined8 *)(lVar8 + 8);
      FUN_008fa54c(local_b0,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
      FUN_008fa54c(local_98,uVar7);
      local_80 = 0;
      uVar6 = FUN_00a32d10(param_1,auStack_78,"hud_stats_gold",&DAT_03210450,local_b0,1,1,
                           cVar4 == cVar2,cVar4 == cVar2,0xffffffff,0xffffffff,0);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((uVar6 & 1) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8)
         , lVar8 != 0)) {
        puVar1 = &DAT_03131f20;
        if (cVar4 != cVar2) {
          puVar1 = &DAT_03131f24;
        }
        *(uint *)(lVar8 + 0x96c) = *(uint *)(lVar8 + 0x96c) | 4;
        *(uint *)(lVar8 + 0xc3c) = *(uint *)(lVar8 + 0xc3c) | 4;
        FUN_00f0e670(lVar8 + 0xac8,puVar1,2);
        if ((*(float *)(lVar8 + 0xb10) != 1.2) || (*(float *)(lVar8 + 0xb14) != 1.2)) {
          *(undefined8 *)(lVar8 + 0xb10) = 0x3f99999a3f99999a;
          FUN_0091ada4(lVar8 + 0xac8);
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a32d10(undefined1 param_1 [16],float param_2,long *param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8,
                 undefined4 param_9,uint param_10,byte param_11,undefined4 param_12,
                 undefined4 param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 *in_stack_ffffffffffffff30;
  long *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_88 = param_13;
  uStack_84 = param_12;
  if (param_4 == 0) {
    if ((*(byte *)(param_7 + 0x18) & 1) == 0) {
      if (*(byte *)(param_7 + 0x18) >> 1 == 0) {
LAB_00a32f98:
        uVar6 = 0;
        goto LAB_00a32f5c;
      }
    }
    else if (*(long *)(param_7 + 0x20) == 0) goto LAB_00a32f98;
  }
  if ((((int)param_3[0x30] == 0) ||
      (lVar7 = *(long *)(param_3[0x31] + (ulong)((int)param_3[0x30] - 1) * 8), lVar7 == 0)) ||
     ((*(byte *)(lVar7 + 0xf58) >> 2 & 1) == 0)) {
LAB_00a32dec:
    plVar4 = operator_new(0xf60);
    FUN_00a33ccc(plVar4,param_4,param_5,param_6,param_7,param_8,param_9,param_10 & 1,
                 CONCAT71((int7)((ulong)in_stack_ffffffffffffff30 >> 8),param_11) &
                 0xffffffffffffff01,param_12,param_13,(byte)((ushort)(short)param_3[0x32] >> 9) & 1)
    ;
    iVar1 = (int)param_3[0x30];
    plVar5 = plVar4;
    if (iVar1 != 0) {
      plVar5 = *(long **)(param_3[0x31] + (ulong)(iVar1 - 1) * 8);
    }
    fVar9 = *(float *)((long)plVar5 + 0x44);
    local_90 = plVar4;
    (**(code **)(*plVar5 + 0x50))();
    fVar8 = 1.0;
    if (iVar1 == 0) {
      fVar8 = 0.5;
    }
    fVar9 = fVar9 + fVar8 * param_2;
    uVar3 = FUN_00a1bcec();
    if ((uVar3 & 1) == 0) {
      fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      if ((*(float *)(plVar4 + 8) != fVar8) || (*(float *)((long)plVar4 + 0x44) != fVar9)) {
        *(float *)(plVar4 + 8) = fVar8;
        *(float *)((long)plVar4 + 0x44) = fVar9;
        FUN_0091ada4(plVar4);
      }
      local_80 = 0x3f0000003f800000;
    }
    else {
      if ((*(float *)(plVar4 + 8) != 0.0) || (*(float *)((long)plVar4 + 0x44) != fVar9)) {
        *(undefined4 *)(plVar4 + 8) = 0;
        *(float *)((long)plVar4 + 0x44) = fVar9;
        FUN_0091ada4(plVar4);
      }
      local_80 = 0x3f00000000000000;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_80);
    if ((*(uint *)((long)local_90 + 0x84) & 0x7f80) != 0) {
      *(uint *)((long)local_90 + 0x84) = *(uint *)((long)local_90 + 0x84) & 0xffff807f;
      FUN_0091ada4();
    }
    FUN_00a34e84(param_3 + 0x30,&local_90);
    FUN_00f023ec(param_3 + 0x17,local_90,1);
  }
  else {
    in_stack_ffffffffffffff30 = &local_88;
    uVar3 = FUN_00a34a9c(lVar7,param_4,param_5,param_6,param_7,param_10 & 1,param_11 & 1,&uStack_84,
                         in_stack_ffffffffffffff30);
    if ((uVar3 & 1) == 0) goto LAB_00a32dec;
    FUN_00a31c60(lVar7,param_8,param_14);
    *(undefined4 *)(lVar7 + 0x158) = 0x40a00000;
  }
  FUN_00a33210(param_3);
  uVar6 = 1;
LAB_00a32f5c:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00a32fa4(long param_1,undefined8 param_2)

{
  FUN_00f0e670(param_1 + 0xac8,param_2,2);
  return;
}




void FUN_00a32fb0(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0xb10) == param_1) && (*(float *)(param_2 + 0xb14) == param_1)) {
    return;
  }
  *(float *)(param_2 + 0xb10) = param_1;
  *(float *)(param_2 + 0xb14) = param_1;
  FUN_0091ada4(param_2 + 0xac8);
  return;
}




void FUN_00a32fe0(long param_1,long param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 auStack_458 [128];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  cVar3 = FUN_00d55870(param_2);
  cVar1 = *(char *)(param_1 + 400);
  uVar5 = FUN_00ceab64();
  if (((uVar5 & 1) != 0) || (cVar3 == cVar1)) {
    lVar6 = *(long *)(param_2 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf38))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    uVar4 = FUN_00d7b294(lVar6,auStack_458,0x80);
    if (param_3 < uVar4) {
      FUN_00a317fc(param_1,param_2,auStack_458[param_3]);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

