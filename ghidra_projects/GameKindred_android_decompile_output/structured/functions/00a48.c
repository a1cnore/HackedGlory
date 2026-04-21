// functions/00a48 — 12 functions
#include "libGameKindred.h"




void FUN_00a485f0(long param_1,undefined8 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x1e94) = 0;
  *(undefined8 *)(param_1 + 200) = param_2;
  *(byte *)(param_1 + 0x1e90) = param_3 & 1;
  FUN_00a48608();
  return;
}




void FUN_00a48608(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[0x19] != 0) {
    lVar7 = 5;
    plVar5 = param_1 + 0x24c;
    do {
      (**(code **)(plVar5[0xbe] + 0x138))(plVar5 + 0xbe,&DAT_03210450);
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_03210450);
      lVar7 = lVar7 + -1;
      plVar5 = plVar5 + 0x26;
    } while (lVar7 != 0);
    uVar3 = FUN_00e6ce7c(*(undefined8 *)(param_1[0x19] + 0x10),0);
    FUN_00f0d75c(param_1 + 0x1b4,uVar3);
    FUN_00f0d75c(param_1 + 0x1da,&DAT_03210450);
    *(uint *)((long)param_1 + 0xf54) = *(uint *)((long)param_1 + 0xf54) & 0xfffffffb;
    uVar3 = FUN_00e6ce7c(*(undefined8 *)(param_1[0x19] + 0x18),0);
    thunk_FUN_00e7051c(&local_68,uVar3);
    FUN_00cb2d30(&local_68,param_1[0x19]);
    FUN_00cb6444(&local_68);
    FUN_00f0d75c(param_1 + 0x200,&local_68);
    FUN_00e70510(&local_78);
    uVar3 = FUN_00e6ce7c(*(undefined8 *)(param_1[0x19] + 0x20),0);
    uVar4 = FUN_00e70b88(uVar3,&DAT_03210450);
    if ((uVar4 & 1) == 0) {
      FUN_00910394(&local_78,&DAT_03210450);
    }
    else {
      uVar3 = FUN_00e6ce7c("GENERIC_TIP_LEAD",0);
      FUN_00910394(&local_78,uVar3);
      uVar3 = FUN_00e6ce7c(*(undefined8 *)(param_1[0x19] + 0x20),0);
      FUN_00e70c34(&local_78,uVar3);
    }
    FUN_00f0d75c(param_1 + 0x226,&local_78);
    *(uint *)((long)param_1 + 0x11b4) = *(uint *)((long)param_1 + 0x11b4) | 4;
    lVar7 = **(long **)(param_1[0x19] + 0x48);
    if (lVar7 != 0) {
      uVar4 = 0;
      plVar5 = param_1 + 0x3c8;
      plVar6 = param_1 + 0x24c;
      plVar2 = *(long **)(param_1[0x19] + 0x48);
      do {
        fVar8 = *(float *)(lVar7 + 4);
        if (*(float *)(lVar7 + 4) <= 0.0) {
          fVar8 = 0.0;
          if (0.0 < *(float *)(lVar7 + 8)) {
            fVar8 = *(float *)(lVar7 + 8);
          }
        }
        FUN_00cb1d0c(fVar8,*(undefined4 *)(lVar7 + 0xc),plVar5,0);
        uVar3 = FUN_00cb36c8(*(undefined4 *)*plVar2);
        (**(code **)(*plVar6 + 0x138))(plVar6,uVar3);
        FUN_00e705c8(&local_88,&DAT_01b9f8c3);
        uVar3 = FUN_00e70c34(&local_88,plVar5);
        (**(code **)(plVar6[0xbe] + 0x138))(plVar6 + 0xbe,uVar3);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
          local_88 = 0;
          local_80 = (void *)0x0;
        }
        lVar7 = plVar2[1];
        if (3 < uVar4) break;
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 0x26;
        plVar2 = plVar2 + 1;
      } while (lVar7 != 0);
    }
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a488d8(long param_1,undefined8 param_2,byte param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 0x1e94) = 1;
  *(byte *)(param_1 + 0x1e90) = param_3 & 1;
  FUN_00a488f4();
  return;
}




void FUN_00a488f4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_1[0x1a] == 0) goto LAB_00a48c80;
  lVar9 = 5;
  plVar10 = param_1 + 0x24c;
  do {
    (**(code **)(plVar10[0xbe] + 0x138))(plVar10 + 0xbe,&DAT_03210450);
    (**(code **)(*plVar10 + 0x138))(plVar10,&DAT_03210450);
    lVar9 = lVar9 + -1;
    plVar10 = plVar10 + 0x26;
  } while (lVar9 != 0);
  puVar4 = (undefined8 *)FUN_00d7ade4(param_1[0x1a]);
  uVar5 = FUN_00e6ce7c(*puVar4,0);
  FUN_00f0d75c(param_1 + 0x1b4,uVar5);
  uVar5 = FUN_00e6ce7c("MENU_TALENTS_LEVEL_AND_RARITY_SUBTITLE",0);
  thunk_FUN_00e7051c(&local_88,uVar5);
  FUN_00e70510(&local_98);
  uVar2 = FUN_00d7ae38(param_1[0x1a]);
  FUN_00e70e18(&local_98,&DAT_01bb6d43,uVar2);
  FUN_00e705c8(&local_a8,"[LEVEL]");
  FUN_00e71248(&local_88,0,&local_a8,&local_98);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  lVar9 = FUN_00d7ade4(param_1[0x1a]);
  iVar3 = *(int *)(lVar9 + 0x18);
  if (iVar3 == 1) {
    FUN_00e705c8(&local_a8,"[RARITY]");
    pcVar6 = "MENU_LOOT_LABEL_RARE";
LAB_00a48a88:
    uVar5 = FUN_00e6ce7c(pcVar6,0);
    FUN_00e71248(&local_88,0,&local_a8,uVar5);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
  }
  else {
    if (iVar3 == 2) {
      FUN_00e705c8(&local_a8,"[RARITY]");
      pcVar6 = "MENU_LOOT_LABEL_EPIC";
      goto LAB_00a48a88;
    }
    if (iVar3 == 3) {
      FUN_00e705c8(&local_a8,"[RARITY]");
      pcVar6 = "MENU_LOOT_LABEL_LEGENDARY";
      goto LAB_00a48a88;
    }
  }
  FUN_00f0d75c(param_1 + 0x1da,&local_88);
  *(uint *)((long)param_1 + 0xf54) = *(uint *)((long)param_1 + 0xf54) | 4;
  lVar9 = FUN_00d7ade4(param_1[0x1a]);
  iVar3 = *(int *)(lVar9 + 0x18);
  if (iVar3 == 3) {
    puVar7 = &DAT_01ba030c;
LAB_00a48b14:
    FUN_00f0d7fc(param_1 + 0x1da,puVar7);
  }
  else {
    if (iVar3 == 2) {
      puVar7 = &DAT_01ba0308;
      goto LAB_00a48b14;
    }
    if (iVar3 == 1) {
      puVar7 = &DAT_01ba0304;
      goto LAB_00a48b14;
    }
  }
  lVar9 = FUN_00d7ade4(param_1[0x1a]);
  uVar5 = FUN_00e6ce7c(*(undefined8 *)(lVar9 + 8),0);
  thunk_FUN_00e7051c(&local_a8,uVar5);
  uVar5 = FUN_00d7ade4(param_1[0x1a]);
  FUN_00cb3124(&local_a8,uVar5);
  FUN_00cb6444(&local_a8);
  FUN_00f0d75c(param_1 + 0x200,&local_a8);
  FUN_00f0d75c(param_1 + 0x226,&DAT_03210450);
  *(uint *)((long)param_1 + 0x11b4) = *(uint *)((long)param_1 + 0x11b4) & 0xfffffffb;
  lVar9 = FUN_00d7ade4(param_1[0x1a]);
  plVar10 = *(long **)(lVar9 + 0x28);
  lVar9 = *plVar10;
  if (lVar9 != 0) {
    uVar11 = 0;
    do {
      if (*(char *)(lVar9 + 0x34) == '\0') {
        if (4 < (uint)uVar11) break;
        uVar2 = *(undefined4 *)(lVar9 + 0x2c);
        fVar12 = *(float *)(lVar9 + 8);
        iVar3 = FUN_00d7ae38(param_1[0x1a]);
        uVar8 = uVar11 & 0xffffffff;
        FUN_00cb1d0c(fVar12 + *(float *)(plVar10[uVar11] + 0xc) * (float)(iVar3 - 1),uVar2,
                     param_1 + (uVar11 & 0xffffffff) * 2 + 0x3c8,0);
        uVar5 = FUN_00cb3700(plVar10[uVar11]);
        (**(code **)(param_1[uVar8 * 0x26 + 0x24c] + 0x138))(param_1 + uVar8 * 0x26 + 0x24c,uVar5);
        (**(code **)(param_1[uVar8 * 0x26 + 0x30a] + 0x138))
                  (param_1 + uVar8 * 0x26 + 0x30a,param_1 + (uVar11 & 0xffffffff) * 2 + 0x3c8);
      }
      lVar9 = plVar10[uVar11 + 1];
      uVar11 = uVar11 + 1;
    } while (lVar9 != 0);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
LAB_00a48c80:
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a48cc8(long param_1)

{
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_00a48cd0();
  return;
}




void FUN_00a48cd0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_00f0d75c(param_1 + 0xda0,&DAT_03210450);
  FUN_00f0d75c(param_1 + 0x1000,&DAT_03210450);
  FUN_00f0d75c(param_1 + 0x1130,&DAT_03210450);
  plVar1 = (long *)(param_1 + 0x1260);
  lVar2 = 5;
  do {
    (**(code **)(*plVar1 + 0x138))(plVar1,&DAT_03210450);
    (**(code **)(plVar1[0xbe] + 0x138))(plVar1 + 0xbe,&DAT_03210450);
    lVar2 = lVar2 + -1;
    plVar1 = plVar1 + 0x26;
  } while (lVar2 != 0);
  return;
}




void FUN_00a48d64(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ed0848(param_1 + 0xf6);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a48db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(0x3e800000,param_1,0,4,1);
  return;
}




void FUN_00a48db4(void)

{
  return;
}




void FUN_00a48db8(void *param_1)

{
  FUN_00a3af04();
  operator_delete(param_1);
  return;
}




void FUN_00a48ddc(void)

{
  return;
}




void FUN_00a48de0(void)

{
  return;
}




void FUN_00a48de4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027ca188;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x30;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x47;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x65;
  FUN_00f0d160(plVar4);
  FUN_00f13ca4(param_1 + 0x8b);
  FUN_00f017e8(param_1 + 0xa2);
  param_1[0xa2] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0xb3);
  FUN_00f0d160(param_1 + 0xd9);
  FUN_00e70510(param_1 + 0xff);
  FUN_00e70510(param_1 + 0x101);
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = DAT_03214ce8;
  FUN_00e70510(param_1 + 0x105);
  iVar6 = FUN_00a1ff04(1);
  uVar7 = 1;
  if (iVar6 != 0) {
    uVar7 = 2;
  }
  FUN_00a4c6e4(param_1 + 0x107,uVar7);
  iVar6 = FUN_00a1ff04(1);
  uVar7 = 1;
  if (iVar6 == 0) {
    uVar7 = 2;
  }
  FUN_00a4c6e4(param_1 + 0x151,uVar7);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x107,1);
  FUN_00f023ec(plVar1,param_1 + 0x151,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  local_70 = 0x3f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  uVar8 = *(uint *)((long)param_1 + 0x84);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x84) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_0091ada4(param_1);
    uVar8 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar8 | 0xc;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0xc;
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 4;
  uVar7 = FUN_00e6a474("HUD_MatchClock");
  uVar8 = FUN_0091ed5c("HUD_MatchClock",uVar7,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar8 & 0xffff) << 0xf;
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Avenir_Heavy_30_fo_02be9d00);
  FUN_00f0da80(plVar4,&DAT_03131298);
  FUN_00f0da30(plVar4,1);
  uVar9 = FUN_00e6ce7c("HUD_STAT_LABEL_CLOCK",0);
  FUN_00f0d75c(plVar4,uVar9);
  FUN_00f0e540(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar3,"hud_stats_clock");
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

