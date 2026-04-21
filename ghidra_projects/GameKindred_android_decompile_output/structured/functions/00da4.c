// functions/00da4 — 40 functions
#include "libGameKindred.h"




void FUN_00da40e0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




long FUN_00da414c(void)

{
  if (DAT_031abf38 == 0) {
    FUN_00da4178();
  }
  return DAT_031abf38;
}




void FUN_00da4178(void)

{
  undefined8 *puVar1;
  
  if (DAT_031abf38 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00da41f8();
    DAT_031abf38 = puVar1;
  }
  return;
}




void FUN_00da41b4(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_031abf38;
  if (DAT_031abf38 != (void *)0x0) {
    if (*(void **)((long)DAT_031abf38 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_031abf38 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_031abf38 = (void *)0x0;
  return;
}




void FUN_00da41f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00da41f8();
  return;
}




void FUN_00da41f8(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_01988718();
  plVar2 = (long *)FUN_01987114(uVar1,0,"*HUDQuickMessageSet*",0);
  if (plVar2 == (long *)0x0) {
    uVar1 = FUN_00d6eb50();
    uVar1 = FUN_00d6ea80(uVar1,"*HUDQuickMessageSet*");
    FUN_01988700(0,uVar1);
    uVar1 = FUN_01988718();
    plVar2 = (long *)FUN_01987114(uVar1,0,"*HUDQuickMessageSet*",0);
  }
  plVar2 = (long *)*plVar2;
  lVar3 = *plVar2;
  while (lVar3 != 0) {
    FUN_00da463c(param_1,plVar2);
    plVar2 = plVar2 + 1;
    lVar3 = *plVar2;
  }
  return;
}




undefined4 FUN_00da4284(undefined4 *param_1)

{
  return *param_1;
}




undefined8 FUN_00da428c(long param_1,ulong param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + (param_2 & 0xff) * 8);
}




void FUN_00da429c(float param_1,long param_2,ulong param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)(param_2 + 8) + (param_3 & 0xff) * 8);
  if (((DAT_031abf50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031abf50), iVar2 != 0)) {
    FUN_00e70510(&DAT_031abf40);
    __cxa_atexit(FUN_0090e338,&DAT_031abf40,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_031abf50);
  }
  iVar2 = *(int *)(lVar5 + 0x24);
  if (iVar2 == 3) {
    FUN_00e70e18(&DAT_031abf40,"{0,200,0,255}%d{\\}",(int)param_1);
    FUN_00e705c8(&local_58,"[HP_PCT]");
    FUN_00e71248(param_4,0,&local_58,&DAT_031abf40);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    FUN_00e70e18(&DAT_031abf40,"{0,172,255,255}%d{\\}",param_5);
    FUN_00e705c8(&local_58,"[MANA_PCT]");
  }
  else {
    if (iVar2 == 2) {
      FUN_00e705c8(&local_58,&DAT_01bd12ba);
      FUN_00910394(&DAT_031abf40,&local_58);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      if (param_5 == 3) {
        FUN_00e705c8(&local_58,"[ABILITY]");
        pcVar4 = "MENU_HERO_INSPECTOR_ULTIMATE_LABEL";
LAB_00da44cc:
        uVar3 = FUN_00e6ce7c(pcVar4,0);
        FUN_00e71248(&DAT_031abf40,0,&local_58,uVar3);
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_58 = 0;
          local_50 = (void *)0x0;
        }
      }
      else {
        if (param_5 == 2) {
          FUN_00e705c8(&local_58,"[ABILITY]");
          pcVar4 = "MENU_HERO_INSPECTOR_ABILITY_B_LABEL";
          goto LAB_00da44cc;
        }
        if (param_5 == 1) {
          FUN_00e705c8(&local_58,"[ABILITY]");
          pcVar4 = "MENU_HERO_INSPECTOR_ABILITY_A_LABEL";
          goto LAB_00da44cc;
        }
      }
      pcVar4 = "[ABILITY]";
    }
    else {
      if (iVar2 != 1) goto LAB_00da4584;
      uVar3 = FUN_00d6eb50();
      lVar5 = FUN_00d6ebc0(uVar3,param_5,PTR_DAT_02bea890);
      FUN_00e705c8(&local_58,"{255,170,45,255}[loc]{\\}");
      FUN_00910394(&DAT_031abf40,&local_58);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      FUN_00e705c8(&local_58,"[loc]");
      uVar3 = FUN_00e6ce7c(*(undefined8 *)(lVar5 + 0x10),0);
      FUN_00e71248(&DAT_031abf40,0,&local_58,uVar3);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      pcVar4 = "[ITEM]";
    }
    FUN_00e705c8(&local_58,pcVar4);
    FUN_00e71248(param_4,0,&local_58,&DAT_031abf40);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    FUN_00e70e18(&DAT_031abf40,"{255,170,45,255}%d{\\}",(int)param_1);
    FUN_00e705c8(&local_58,"[SEC]");
  }
  FUN_00e71248(param_4,0,&local_58,&DAT_031abf40);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
LAB_00da4584:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00da45fc(uint *param_1,int param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    do {
      if (**(int **)(*(long *)(param_1 + 2) + uVar1) == param_2) {
        return uVar1 >> 3;
      }
      uVar1 = uVar1 + 8;
    } while ((ulong)*param_1 * 8 - uVar1 != 0);
  }
  return 0xff;
}




void FUN_00da463c(uint *param_1,undefined8 *param_2)

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
    FUN_00da46c4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00da46c4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00da4744(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Baron__C_02bee648);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00da48b0;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Baron__C_02bee648,&local_58,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00da48c4;
  local_50 = 3;
  FUN_00d97d24(uVar2,"Baron_C_RecastDelay",&local_58,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_58 = FUN_00da48d8;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Baron__C_02bee648,&local_58);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_58 = FUN_00da4900;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x10,1,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Baron__C");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da4914;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da48b0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf5c,2,9);
  return;
}




void FUN_00da48c4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf5c,1,9);
  return;
}




int FUN_00da48d8(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_031abf5c,0,9);
  return (int)fVar1;
}




void FUN_00da4900(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf5c,4,9);
  return;
}




void FUN_00da4914(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf5c,3,9);
  return;
}




void FUN_00da4928(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00da49f4;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Baron__B_02bee618,&local_48,1);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,"Baron_QuickAttack");
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00da4a08;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da49f4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf64,0,9);
  return;
}




void FUN_00da4a08(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf64,1,9);
  return;
}




void FUN_00da4a1c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Baron__A_02bee640);
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_58 = FUN_00da4b20;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Baron__A_02bee640,&local_58);
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_58 = FUN_00da4b48;
  local_50 = 3;
  FUN_00d98490(uVar2,PTR_s_Ability__Baron__A_02bee640,&local_58);
  FUN_00d984c8();
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Baron__A");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da4b5c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00da4b20(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_031abf6c,1,9);
  return (int)fVar1;
}




void FUN_00da4b48(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf6c,2,9);
  return;
}




void FUN_00da4b5c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf6c,0,9);
  return;
}




void FUN_00da4b70(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f81c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00da4bc0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00da4c8c;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Glaive__A_02beeaf8,&local_48,1);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,4);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,"Ability__Glaive__A");
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00da4ca0;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da4c8c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf74,2,9);
  return;
}




void FUN_00da4ca0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf74,1,9);
  return;
}




void FUN_00da4cb4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_38 = FUN_00da4d2c;
  local_30 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Glaive__C_02beeb18,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da4d2c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf7c,0,9);
  return;
}




void FUN_00da4d40(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_58 = FUN_00da4e80;
  local_50 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Glaive__B_02beeb10,&local_58,1);
  uVar3 = FUN_00da4ee4(lVar2 + 0x10);
  uVar3 = FUN_00d986e0(uVar3,PTR_s_Ability__Glaive__B_02beeb10);
  local_58 = FUN_00da4e94;
  local_50 = 3;
  FUN_00d98704(uVar3,&local_58);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,"Ability__Glaive__B");
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00da4ea8;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,"Ability__Glaive__BCleave");
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00da4ea8;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da4e80(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf84,0,9);
  return;
}




void FUN_00da4e94(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf84,1,9);
  return;
}




void FUN_00da4ea8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf84,3,9);
  return;
}




void FUN_00da4ebc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2a86c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00da4ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0x16);
  return;
}




void FUN_00da4ee4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f0f0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00da4f34(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Grumpjaw__B_02beebd0);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00da4fb4;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Grumpjaw__B_02beebd0,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da4fb4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf90,0,9);
  return;
}




void FUN_00da4fc8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031abf90,1,9);
  FUN_00d40e24(uVar4,0x17,1);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031abf90,1,9);
  FUN_00d40e24(uVar4,0x18,1);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

