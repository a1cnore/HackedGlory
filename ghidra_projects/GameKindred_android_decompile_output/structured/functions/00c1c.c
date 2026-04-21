// functions/00c1c — 30 functions
#include "libGameKindred.h"




void FUN_00c1c04c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *local_78;
  code *pcStack_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027f7800;
  lVar10 = FUN_00f136e0();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = lVar10;
  FUN_00ed66ec(plVar1);
  lVar10 = FUN_00f136e0();
  plVar2 = param_1 + 0x15e;
  param_1[0x15d] = lVar10;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x175;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x19b;
  FUN_00c1ace8(plVar4);
  plVar5 = param_1 + 0x1d2;
  FUN_00f13ca4(plVar5);
  plVar6 = param_1 + 0x1e9;
  param_1[0x1d2] = (long)&PTR_FUN_027f7bf0;
  FUN_00f13ca4(plVar6);
  plVar7 = param_1 + 0x200;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x226;
  FUN_00f0e4a8(plVar8);
  FUN_00f13fd8(param_1,param_1[0x17]);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f0e548(plVar8,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_normal_state");
  FUN_00f14070(plVar8,&DAT_02bf25ac);
  local_78 = (long *)CONCAT62(local_78._2_6_,3);
  FUN_00f14070(plVar2,&local_78);
  uVar11 = FUN_00f13624();
  FUN_00f13ba0(uVar11,0,0x1e,0,0x1e);
  FUN_00f13fd8(plVar2,uVar11);
  FUN_00f1515c(param_1[0x17],plVar2,0,3);
  FUN_00f0d92c(plVar3,DAT_0313afa8,&DAT_0313ae0c);
  FUN_00f0da30(plVar3,1);
  FUN_00f0dac8(plVar3,0);
  FUN_00f15134(uVar11,plVar3);
  FUN_00f1515c(param_1[0x17],plVar4,0,3);
  FUN_00ed59f4(plVar1,param_1[0x15d]);
  local_78 = (long *)CONCAT71(local_78._1_7_,9);
  FUN_00ed5ab0(plVar1,&local_78);
  local_78._0_2_ = 0x17;
  FUN_00f14070(plVar1,&local_78);
  FUN_00f1515c(param_1[0x17],plVar1,1,3);
  FUN_00ed5664(plVar1,plVar5,1);
  FUN_00f15148(param_1[0x15d],plVar5,3);
  local_78 = (long *)CONCAT62(local_78._2_6_,3);
  FUN_00f14070(plVar6,&local_78);
  uVar11 = FUN_00f13624();
  FUN_00f13ba0(uVar11,0,0x1e,0,0x1e);
  FUN_00f13fd8(plVar6,uVar11);
  FUN_00f1515c(param_1[0x17],plVar6,0,3);
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_0313ae0c);
  FUN_00f0da30(plVar7,1);
  FUN_00f0dac8(plVar7,0);
  FUN_00f15134(uVar11,plVar7);
  pcStack_70 = thunk_FUN_00c1c78c;
  local_78 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_78,0,1);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1c3d8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f7800;
  pcStack_40 = thunk_FUN_00c1c78c;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  param_1[0x226] = &PTR_FUN_028266f0;
  param_1[0x23d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x240);
  FUN_00f13d08(param_1 + 0x226);
  FUN_00f0d3a4(param_1 + 0x200);
  FUN_00f13d08(param_1 + 0x1e9);
  FUN_00f13d08(param_1 + 0x1d2);
  FUN_00c1ade0(param_1 + 0x19b);
  FUN_00f0d3a4(param_1 + 0x175);
  FUN_00f13d08(param_1 + 0x15e);
  thunk_FUN_00ed5534(param_1 + 0x18);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1c4bc(void *param_1)

{
  FUN_00c1c3d8();
  operator_delete(param_1);
  return;
}




void FUN_00c1c4e0(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_2 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  FUN_00e70510(param_1);
  if (SUB164(auVar1 * ZEXT816(0xc22e450672894ab7),10) < 1) {
    lVar7 = param_2 - ((long)((param_2 / 0x15180) * 0x1518000000000) >> 0x20);
    uVar4 = lVar7 / 0xe10;
    lVar7 = lVar7 - ((long)(uVar4 * 0xe1000000000) >> 0x20);
    uVar3 = lVar7 / 0x3c;
    if ((int)uVar4 < 1) {
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_MINUTES_AGO",0);
      FUN_00910394(param_1,uVar5);
      FUN_00968914(auStack_58,&DAT_01bb6d43,uVar3 & 0xffffffff);
      FUN_00e705c8(&local_68,"[NUM_MINUTES]");
      FUN_00e705c8(&local_78,auStack_58);
      FUN_00e71248(param_1,0,&local_68,&local_78);
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
      FUN_00968914(auStack_58,&DAT_01bb6d43,(int)lVar7 - (int)(uVar3 * 0x3c00000000 >> 0x20));
      pcVar6 = "[NUM_SECONDS]";
    }
    else {
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_HOURS_AGO",0);
      FUN_00910394(param_1,uVar5);
      FUN_00968914(auStack_58,&DAT_01bb6d43,uVar4 & 0xffffffff);
      FUN_00e705c8(&local_68,"[NUM_HOURS]");
      FUN_00e705c8(&local_78,auStack_58);
      FUN_00e71248(param_1,0,&local_68,&local_78);
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
      FUN_00968914(auStack_58,&DAT_01bb6d43,uVar3 & 0xffffffff);
      pcVar6 = "[NUM_MINUTES]";
    }
  }
  else {
    uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_DAYS_AGO",0);
    FUN_00910394(param_1,uVar5);
    FUN_00968914(auStack_58,&DAT_01bb6d43,param_2 / 0x15180 & 0xffffffff);
    pcVar6 = "[NUM_DAYS]";
  }
  FUN_00e705c8(&local_68,pcVar6);
  FUN_00e705c8(&local_78,auStack_58);
  FUN_00e71248(param_1,0,&local_68,&local_78);
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
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1c780(long param_1)

{
  FUN_00f13f08(param_1 + 0x1130);
  return;
}




void FUN_00c1c78c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00e85318(0);
  FUN_00c1c4e0(&local_48,lVar2 - *(long *)(param_1 + 0x1220));
  FUN_00f0d75c(param_1 + 0x1000,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1c810(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0xd90) != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0xd98) + uVar4 * 8);
        uVar4 = uVar4 + 1;
        *(uint *)(lVar5 + 0x26c) = *(uint *)(lVar5 + 0x26c) & 0xfffffffb;
      } while (uVar4 < *(uint *)(param_1 + 0xd90));
    }
    uVar1 = FUN_009f739c();
    lVar5 = param_3 + 0x4b8;
    lVar2 = FUN_009f7adc(uVar1,lVar5);
    if (lVar2 != 0) {
      uVar1 = FUN_009f739c();
      plVar3 = (long *)FUN_009f7adc(uVar1,lVar5);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_3 + 0x4d0);
      uVar1 = FUN_009f739c();
      plVar3 = (long *)FUN_009f7adc(uVar1,lVar5);
      (**(code **)(*plVar3 + 0x30))();
      *(uint *)(param_3 + 0x26c) = *(uint *)(param_3 + 0x26c) | 4;
    }
  }
  return;
}




void FUN_00c1c8b4(long *param_1)

{
  long *plVar1;
  
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027f7948;
  FUN_00b043c8(param_1 + 0x1a);
  plVar1 = param_1 + 0x34;
  FUN_00ad9950(plVar1,param_1 + 0x1a);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ada28c(plVar1,1,1);
  *(uint *)((long)param_1 + 0xebc) = *(uint *)((long)param_1 + 0xebc) | 4;
  return;
}




void FUN_00c1c944(long param_1)

{
  FUN_00f13f08(param_1 + 0x1a0);
  return;
}




void FUN_00c1c94c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ad9de4(param_1 + 0x1a0,param_4,param_2,param_5,param_3);
  local_40 = param_4;
  FUN_00c1c9c8(param_1 + 0xc0,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1c9c8(uint *param_1,undefined8 *param_2)

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
    FUN_00c1cdc0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c1ca50(long param_1,undefined8 param_2)

{
  FUN_00ada188(param_1 + 0x1a0,param_2,0);
  return;
}




void FUN_00c1ca5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7198;
  if ((*(byte *)(param_1 + 0x9a) & 1) != 0) {
    operator_delete((void *)param_1[0x9c]);
  }
  if ((*(byte *)(param_1 + 0x97) & 1) != 0) {
    operator_delete((void *)param_1[0x99]);
  }
  param_1[0x79] = &PTR_FUN_028266f0;
  param_1[0x90] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x93);
  FUN_00f13d08(param_1 + 0x79);
  param_1[0x5b] = &PTR_FUN_028266f0;
  param_1[0x72] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x75);
  FUN_00f13d08(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_028266f0;
  param_1[0x54] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x57);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1cb20(void *param_1)

{
  FUN_00c1ca5c();
  operator_delete(param_1);
  return;
}




void FUN_00c1cb44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7428;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1cba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7428;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c1cc04(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c1cc28(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c1cc4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7948;
  FUN_00ad9b6c(param_1 + 0x34);
  FUN_00b04404(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c1cc9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f7948;
  FUN_00ad9b6c(param_1 + 0x34);
  FUN_00b04404(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c1ccf4(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c1cd18(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c1cd3c(uint *param_1,uint param_2)

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




void thunk_FUN_00c1c78c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00e85318(0);
  FUN_00c1c4e0(&uStack_48,lVar2 - *(long *)(param_1 + 0x1220));
  FUN_00f0d75c(param_1 + 0x1000,&uStack_48);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1cdc0(uint *param_1,uint param_2)

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




void FUN_00c1ce40(undefined8 *param_1)

{
  FUN_00f11234();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *param_1 = &PTR_FUN_027f7d38;
  FUN_00f112f0(param_1,1);
  return;
}




void FUN_00c1ce7c(long *param_1,long param_2)

{
  param_1[0x35] = param_2;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00c1cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[0x35] + 0x138))(0,(long *)param_1[0x35],1,4,1);
    return;
  }
  return;
}




void FUN_00c1cedc(long param_1)

{
  long lVar1;
  
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x150))();
    lVar1 = *(long *)(param_1 + 0x1a8);
    if ((*(float *)(lVar1 + 0x40) != 0.0) || (*(float *)(lVar1 + 0x44) != 0.0)) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      FUN_0091ada4();
      return;
    }
  }
  return;
}




void FUN_00c1cf38(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(param_3 + 0x1a8) != 0) {
    fVar3 = param_2;
    FUN_00f13f08(param_1);
    fVar2 = (float)(**(code **)(**(long **)(param_3 + 0x1a8) + 0x48))();
    if ((0.0 < fVar2) && (0.0 < fVar3)) {
      fVar2 = (float)param_1 / fVar2;
      if (param_2 / fVar3 <= fVar2) {
        fVar2 = param_2 / fVar3;
      }
      if ((fVar2 < 1.0) &&
         ((lVar1 = *(long *)(param_3 + 0x1a8), *(float *)(lVar1 + 0x48) != fVar2 ||
          (*(float *)(lVar1 + 0x4c) != fVar2)))) {
        *(float *)(lVar1 + 0x48) = fVar2;
        *(float *)(lVar1 + 0x4c) = fVar2;
        FUN_0091ada4();
      }
    }
    FUN_00c1cedc(param_3);
    return;
  }
  return;
}




void FUN_00c1cfec(long *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027f7e98;
  FUN_00b043c8(param_1 + 0x1a);
  FUN_00ad9950(param_1 + 0x34,param_1 + 0x1a);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  *(uint *)((long)param_1 + 0xebc) = *(uint *)((long)param_1 + 0xebc) | 4;
  return;
}

