// functions/00c1b — 19 functions
#include "libGameKindred.h"




void FUN_00c1b24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c1c810(param_1,param_2,param_5);
  return;
}




void FUN_00c1b254(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00c1cd3c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c1b2dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08(param_3 + 200);
  FUN_00f13db0(param_1,param_2,param_3);
  return;
}




void FUN_00c1b31c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined2 local_40 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  plVar3 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027f7428;
  FUN_00f0e4a8(plVar3);
  uVar2 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar2);
  local_40[0] = 0x41;
  FUN_00f14070(param_1,local_40);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_normal_state");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1b3e0(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x10) - 1;
  if (uVar1 < 3) {
    puVar5 = (undefined4 *)(&PTR_DAT_027f7a80)[(int)uVar1];
  }
  else {
    puVar5 = &DAT_0313af84;
    if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
      puVar5 = &DAT_0313af80;
    }
  }
  FUN_00f0e670(param_1 + 0xb8,puVar5,2);
  uVar2 = FUN_00c1b568(param_1,1);
  FUN_00c1b5d0(uVar2,*(undefined4 *)(param_2 + 0x10));
  plVar3 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
  plVar3 = (long *)FUN_00bdd12c(param_1,1);
  FUN_00f0d92c(plVar3,DAT_0313afa0,&DAT_01bee7fa);
  (**(code **)(*plVar3 + 0x138))(plVar3,param_2);
  plVar4 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar4 + 0x68))(plVar4,plVar3,0,10);
  plVar3 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar3 + 0x78))(plVar3,0,1);
  if (*param_3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar2 = FUN_00c1b69c(param_1,1);
      FUN_00c1b704(uVar2,param_2,*(long *)(param_3 + 2) + lVar6);
      plVar3 = (long *)FUN_00f14058(param_1);
      (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < *param_3);
  }
  return;
}




void * FUN_00c1b568(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xb8);
  FUN_00c1bb14();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c1b5d0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_50;
  void *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00bdd12c(param_1,1);
  FUN_00f0d92c(plVar2,DAT_0313afa0,&DAT_01bee7fa);
  FUN_00e6a8a8(auStack_40,&DAT_01bb6d43,param_2);
  FUN_00e705c8(&local_50,auStack_40);
  (**(code **)(*plVar2 + 0x138))(plVar2,&local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  plVar3 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar3 + 0x58))(plVar3,plVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00c1b69c(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xb8);
  FUN_00c1bdb0();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c1b704(undefined8 param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 local_60;
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_00c1be08(param_1,1);
  FUN_00f14070(lVar5,&DAT_03211038);
  plVar6 = (long *)FUN_00bdd12c(param_1,1);
  FUN_00f0d92c(plVar6,DAT_0313afa0,&DAT_01bee7fa);
  FUN_00f0dac8(plVar6,3);
  FUN_00f0dad0(0x43160000,plVar6,1);
  bVar2 = *param_3;
  uVar9 = *(ulong *)(param_3 + 8);
  uVar10 = (ulong)(bVar2 >> 1);
  uVar1 = uVar10;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar9;
  }
  if (uVar1 == 0x2c) {
    iVar4 = FUN_0090d610(param_3,0,0xffffffffffffffff,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5"
                         ,0x2c);
    if (iVar4 != 0) {
      bVar2 = *param_3;
      uVar9 = *(ulong *)(param_3 + 8);
      uVar10 = (ulong)(bVar2 >> 1);
      goto LAB_00c1b7e4;
    }
    FUN_00e6a8a8(auStack_50,&DAT_01bb6d43,(int)*(float *)(param_2 + 0x20));
    FUN_00e705c8(&local_60,auStack_50);
    (**(code **)(*plVar6 + 0x138))(plVar6,&local_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
    if (0 < *(int *)(param_2 + 0x24)) {
      fVar11 = *(float *)(param_2 + 0x20);
LAB_00c1b9e4:
      if (0 < (int)fVar11) {
        FUN_00b1d77c(lVar5);
        *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 4;
        plVar7 = (long *)FUN_00f14058(param_1);
        (**(code **)(*plVar7 + 0x78))(plVar7,0,1);
        plVar7 = (long *)FUN_00f14058(param_1);
        (**(code **)(*plVar7 + 0x68))(plVar7,lVar5,0,0x12);
        plVar7 = (long *)FUN_00f14058(param_1);
        (**(code **)(*plVar7 + 0x70))(plVar7,5);
        plVar7 = (long *)FUN_00f14058(param_1);
        (**(code **)(*plVar7 + 0x68))(plVar7,plVar6,0,10);
        plVar6 = (long *)FUN_00f14058(param_1);
        (**(code **)(*plVar6 + 0x78))(plVar6,0,1);
        goto LAB_00c1b908;
      }
    }
LAB_00c1ba98:
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xfffffffb;
    FUN_00e705c8(&local_60,0x1e21c1a);
    (**(code **)(*plVar6 + 0x138))(plVar6,&local_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
  }
  else {
LAB_00c1b7e4:
    uVar1 = uVar10;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar9;
    }
    if (uVar1 == 0x2c) {
      iVar4 = FUN_0090d610(param_3,0,0xffffffffffffffff,
                           "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3",0x2c);
      if (iVar4 == 0) {
        FUN_00e6a8a8(auStack_50,&DAT_01bb6d43,(int)*(float *)(param_2 + 0x28));
        FUN_00e705c8(&local_60,auStack_50);
        (**(code **)(*plVar6 + 0x138))(plVar6,&local_60);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
          local_60 = 0;
          local_58 = (void *)0x0;
        }
        if (0 < *(int *)(param_2 + 0x2c)) {
          fVar11 = *(float *)(param_2 + 0x28);
          goto LAB_00c1b9e4;
        }
        goto LAB_00c1ba98;
      }
      bVar2 = *param_3;
      uVar9 = *(ulong *)(param_3 + 8);
      uVar10 = (ulong)(bVar2 >> 1);
    }
    uVar1 = uVar10;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar9;
    }
    if (uVar1 == 0x2e) {
      iVar4 = FUN_0090d610(param_3,0,0xffffffffffffffff,
                           "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ",0x2e);
      if (iVar4 != 0) {
        bVar2 = *param_3;
        uVar9 = *(ulong *)(param_3 + 8);
        uVar10 = (ulong)(bVar2 >> 1);
        goto LAB_00c1b864;
      }
      fVar11 = *(float *)(param_2 + 0x30);
      if (0.0 < fVar11) goto LAB_00c1b898;
LAB_00c1baf8:
      puVar8 = (undefined1 *)((long)&DAT_01e21c13 + 7);
    }
    else {
LAB_00c1b864:
      if ((bVar2 & 1) != 0) {
        uVar10 = uVar9;
      }
      if ((uVar10 == 0x2d) &&
         (iVar4 = FUN_0090d610(param_3,0,0xffffffffffffffff,
                               "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS",0x2d), iVar4 == 0)) {
        iVar4 = *(int *)(param_2 + 0x38);
        if (iVar4 < 1) goto LAB_00c1baf8;
      }
      else {
        fVar11 = *(float *)(param_2 + 0x1c);
LAB_00c1b898:
        iVar4 = (int)fVar11;
      }
      FUN_00e6a8a8(auStack_50,&DAT_01bb6d43,iVar4);
      puVar8 = auStack_50;
    }
    FUN_00e705c8(&local_60,puVar8);
    (**(code **)(*plVar6 + 0x138))(plVar6,&local_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xfffffffb;
  }
  plVar7 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar7 + 0x68))(plVar7,plVar6,0,2);
LAB_00c1b908:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1bb0c(long param_1)

{
  FUN_00f13f08(param_1 + 0xb8);
  return;
}




void FUN_00c1bb14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027f7570;
  uVar1 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar1);
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




undefined8 FUN_00c1bb60(void)

{
  return 0x5000000064;
}




void FUN_00c1bb6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027f7aa8;
  uVar1 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar1);
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




void FUN_00c1bbb8(undefined8 param_1,ulong param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_68;
  void *local_60;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_3 != 0) || ((param_2 & 1) == 0)) {
    uVar3 = FUN_00f14058(param_1);
    FUN_00f13ba0(uVar3,2,0,0,2);
    if ((param_2 & 1) == 0) {
      plVar5 = (long *)FUN_00bdd12c(param_1,1);
      local_68 = CONCAT44(local_68._4_4_,0xff00ffff);
      FUN_00f0d92c(plVar5,DAT_0313afa0,&local_68);
      uVar3 = FUN_00e6ce7c("NEW_BUBBLE_ALERT",0);
      (**(code **)(*plVar5 + 0x138))(plVar5,uVar3);
      plVar6 = (long *)FUN_00f14058(param_1);
      lVar4 = *plVar6;
    }
    else {
      puVar1 = &DAT_01bee806;
      if (param_3 < 1) {
        puVar1 = &DAT_01bee802;
      }
      local_54 = *puVar1;
      lVar4 = FUN_00a4c67c(param_1,1);
      FUN_00f0e548(lVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
      FUN_00f0e670(lVar4,&local_54,2);
      *(byte *)(lVar4 + 0xd8) = *(byte *)(lVar4 + 0xd8) & 0xfd | (0 < param_3) << 1;
      FUN_00f13f08(0x421c0000,0x41a80000,lVar4);
      plVar5 = (long *)FUN_00f14058(param_1);
      (**(code **)(*plVar5 + 0x58))(plVar5,lVar4);
      plVar5 = (long *)FUN_00bdd12c(param_1,1);
      FUN_00f0d92c(plVar5,DAT_0313afa0,&local_54);
      FUN_00e6a8a8(auStack_50,&DAT_01bb6d43,param_3);
      FUN_00e705c8(&local_68,auStack_50);
      (**(code **)(*plVar5 + 0x138))(plVar5,&local_68);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      plVar6 = (long *)FUN_00f14058(param_1);
      lVar4 = *plVar6;
    }
    (**(code **)(lVar4 + 0x58))(plVar6,plVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1bdb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027f76b8;
  uVar1 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar1);
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




undefined8 FUN_00c1bdfc(void)

{
  return 0x500000012c;
}




void * FUN_00c1be08(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3d0);
  FUN_00b1d5d8();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c1be70(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FUN_00f136e0();
  FUN_00f13fd8(param_1,plVar3);
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
  fVar8 = (float)NEON_ucvtf(*puVar4);
  if (100.0 < fVar8) {
    fVar8 = 100.0;
  }
  if (0.0 < fVar8) {
    uVar7 = 1;
    do {
      uVar5 = FUN_00c1bfe4(param_1,1);
      lVar6 = (**(code **)(*param_2 + 0x10))(param_2);
      lVar6 = *(long *)(lVar6 + 8);
      (**(code **)(*param_2 + 0x18))(auStack_78,param_2);
      FUN_00c1b3e0(uVar5,lVar6 + (ulong)(uVar7 - 1) * 0x40,auStack_78);
      FUN_00951534(auStack_78,1);
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar5,9);
      uVar1 = (ulong)uVar7;
      puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
      uVar7 = uVar7 + 1;
      fVar8 = (float)NEON_ucvtf(*puVar4);
      if (100.0 < fVar8) {
        fVar8 = 100.0;
      }
    } while ((float)uVar1 < fVar8);
  }
  (**(code **)(*plVar3 + 0x78))(plVar3,0,1);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00c1bfe4(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1a8);
  FUN_00c1b31c();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}

