// functions/00c73 — 12 functions
#include "libGameKindred.h"




void FUN_00c73234(undefined8 param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = param_3 + 0x56;
  FUN_00f13f08(plVar1);
  FUN_00f0826c(param_1,param_3 + 0x8a);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0xa8,&local_50);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x8a,8,plVar1,8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7330c(undefined1 param_1 [16],float param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  FUN_00ca4154();
  puVar1 = param_3 + 0x138;
  param_3[0x137] = 0;
  *param_3 = &PTR_FUN_02801e40;
  FUN_00f13ca4(puVar1);
  puVar2 = param_3 + 0x14f;
  FUN_00f0d160(puVar2);
  puVar3 = param_3 + 0x175;
  FUN_00f13ca4(puVar3);
  puVar4 = param_3 + 0x18e;
  param_3[0x18d] = 0;
  param_3[0x18c] = 0;
  FUN_00f0e4a8();
  puVar5 = param_3 + 0x1ac;
  FUN_00f13ca4(puVar5);
  puVar6 = param_3 + 0x1c3;
  FUN_00f0e4a8(puVar6);
  puVar7 = param_3 + 0x1e1;
  FUN_00f0d160(puVar7);
  puVar9 = param_3 + 0x207;
  FUN_00f0e4a8();
  puVar10 = param_3 + 0x225;
  FUN_00ab6c24(puVar10,0);
  puVar11 = param_3 + 0x4dd;
  FUN_00ca4770(puVar11);
  param_3[0x520] = 0;
  local_a8._0_2_ = 0x37;
  FUN_00f14070(param_3,&local_a8);
  puVar8 = param_3 + 0x94;
  *(uint *)((long)param_3 + 0x13c) = *(uint *)((long)param_3 + 0x13c) & 0xfffffffb;
  (**(code **)(param_3[0x94] + 0x78))(puVar8,puVar1,1);
  FUN_00f023ec(puVar1,puVar2,1);
  FUN_00f023ec(puVar1,puVar3,1);
  FUN_00f023ec(puVar1,puVar4,1);
  (**(code **)(param_3[0x94] + 0x78))(puVar8,puVar5,1);
  FUN_00f023ec(puVar5,puVar6,1);
  FUN_00f023ec(puVar5,puVar7,1);
  (**(code **)(param_3[0x94] + 0x78))(puVar8,puVar9,1);
  (**(code **)(param_3[0x7d] + 0x78))(param_3 + 0x7d,puVar10,1);
  (**(code **)(param_3[0x7d] + 0x78))(param_3 + 0x7d,puVar11,1);
  uVar13 = FUN_00f136e0();
  FUN_00f13fd8(puVar1,uVar13);
  FUN_00f15148(uVar13,puVar2,9);
  FUN_00f1515c(uVar13,puVar3,1,10);
  FUN_00f15134(uVar13,puVar4);
  uVar13 = FUN_00f13624();
  FUN_00f13fd8(puVar3,uVar13);
  local_a8._0_2_ = 0x77;
  FUN_00f14070(puVar3,&local_a8);
  uVar13 = FUN_00f136e0();
  FUN_00f13fd8(puVar5,uVar13);
  FUN_00f15148(uVar13,puVar6,2);
  FUN_00f15148(uVar13,puVar7,2);
  FUN_00f0d378(puVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d7fc(puVar2,&DAT_01bbe6f0);
  uVar13 = FUN_00e6ce7c("MENU_DAILY_LOGIN_INBOX_TITLE",0);
  FUN_00f0d75c(puVar2,uVar13);
  FUN_00f0e548(puVar4,PTR_s_build___DailyLogin_7Day_tga_02be35d8,"daily_login_decorative_line");
  local_a8._0_2_ = 0x57;
  FUN_00f14070(puVar4,&local_a8);
  FUN_00f14070(puVar5,&DAT_03211038);
  *(uint *)((long)param_3 + 0xde4) = *(uint *)((long)param_3 + 0xde4) & 0xfffffffb;
  FUN_00f0e548(puVar6,PTR_s_build___DailyLogin_7Day_tga_02be35d8,"daily_login_decorative_line");
  local_a8 = (code *)CONCAT62(local_a8._2_6_,7);
  FUN_00f14070(puVar6,&local_a8);
  uVar13 = FUN_00f0eaf4(puVar6);
  FUN_00f0eaf4(puVar6);
  FUN_00f13f08(uVar13,param_2 + param_2,puVar6);
  FUN_00f0e548(puVar9,PTR_s_build___DailyLogin_7Day_tga_02be35d8,"daily_login_triangle");
  fVar15 = 0.5;
  if ((*(float *)(param_3 + 0x211) != 0.5) ||
     (fVar15 = 1.0, *(float *)((long)param_3 + 0x108c) != 1.0)) {
    param_3[0x211] = 0x3f8000003f000000;
    FUN_0091ada4(puVar9);
  }
  fVar14 = (float)FUN_00f0eaf4(puVar9);
  local_a8 = (code *)CONCAT44(fVar15 * 1.1,fVar14 * 1.1);
  FUN_00f13f18(puVar9,&local_a8);
  *(uint *)((long)param_3 + 0x10bc) = *(uint *)((long)param_3 + 0x10bc) & 0xfffffffb;
  FUN_00f0d7fc(puVar7,&DAT_01bbe6f8);
  FUN_00f0d378(puVar7,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  uVar13 = FUN_00e6ce7c("MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER",0);
  FUN_00f0d75c(puVar7,uVar13);
  FUN_00e705c8(&local_a8,0x1e21c1a);
  FUN_00ab703c(0x42000000,0x42f00000,0x44610000,puVar10,0,&local_a8,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  FUN_00f0d92c(param_3 + 0x309,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff5ac8f4);
  FUN_00ab7598(0x3f800000,puVar10,&local_a8);
  FUN_00ab7538(0x3f000000,puVar10,&DAT_01bee7fa);
  local_80 = DAT_03210c64;
  local_a8 = FUN_00c73918;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_3;
  FUN_009693a0(param_3 + 0x226,&local_a8);
  uVar13 = FUN_00e6ce7c("MENU_DAILY_LOGIN_POPUP_COLLECT_BUTTON",0);
  FUN_00ab7498(puVar10,uVar13);
  *(uint *)((long)param_3 + 0x11ac) = *(uint *)((long)param_3 + 0x11ac) & 0xfffffffb;
  FUN_00ca48d8(puVar11);
  FUN_00ca4a08(puVar11,1);
  if ((*(float *)(param_3 + 0x4e7) != 0.0) || (*(float *)((long)param_3 + 0x273c) != 0.0)) {
    param_3[0x4e7] = 0;
    FUN_0091ada4(puVar11);
  }
  uVar13 = FUN_00e6ce7c("MENU_DAILY_LOGIN_POPUP_NEXT_REWARD_AVAILABLE",0);
  FUN_00ca49f8(puVar11,uVar13);
  *(uint *)((long)param_3 + 0x276c) = *(uint *)((long)param_3 + 0x276c) & 0xfffffffb;
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) | 0x10;
  if (*(long *)(lVar12 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c738e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c("MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER",0);
  FUN_00f0d75c(param_1 + 0xf08,uVar1);
  return;
}




void FUN_00c73918(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c73928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




void FUN_00c73930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02801e40;
  FUN_00c73abc();
  FUN_00c73b84();
  FUN_00ca47c0(param_1 + 0x4dd);
  FUN_009c7fa8(param_1 + 0x225);
  param_1[0x207] = &PTR_FUN_028266f0;
  param_1[0x21e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x221);
  FUN_00f13d08(param_1 + 0x207);
  FUN_00f0d3a4(param_1 + 0x1e1);
  param_1[0x1c3] = &PTR_FUN_028266f0;
  param_1[0x1da] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1dd);
  FUN_00f13d08(param_1 + 0x1c3);
  FUN_00f13d08(param_1 + 0x1ac);
  param_1[0x18e] = &PTR_FUN_028266f0;
  param_1[0x1a5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a8);
  FUN_00f13d08(param_1 + 0x18e);
  if ((void *)param_1[0x18d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18d]);
    param_1[0x18d] = 0;
    param_1[0x18c] = 0;
  }
  FUN_00f13d08(param_1 + 0x175);
  FUN_00f0d3a4(param_1 + 0x14f);
  FUN_00f13d08(param_1 + 0x138);
  *param_1 = &PTR_FUN_02808130;
  FUN_00ca3c60(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x94);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_02826f38;
  param_1[0x4c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c73abc(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  FUN_00ca44ec();
  lVar1 = FUN_00f14058(param_1 + 0xba8);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_00f14058(param_1 + 0xba8);
    (**(code **)(*plVar2 + 0x50))();
  }
  uVar4 = *(uint *)(param_1 + 0xc60);
  if (uVar4 != 0) {
    lVar1 = 0;
    uVar6 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0xc68) + lVar1);
      if (plVar2 == (long *)0x0) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0xc68) + uVar6 * 8);
      }
      else {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(uint *)(param_1 + 0xc60);
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0xc68) + lVar1);
      }
      uVar6 = uVar6 + 1;
      lVar1 = lVar1 + 8;
      *puVar5 = 0;
    } while (uVar6 < uVar4);
  }
  if (*(long *)(param_1 + 0xc68) != 0) {
    *(undefined4 *)(param_1 + 0xc60) = 0;
  }
  *(undefined8 *)(param_1 + 0x2900) = 0;
  uVar3 = FUN_00e6ce7c("MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER",0);
  FUN_00f0d75c(param_1 + 0xf08,uVar3);
  return;
}




void FUN_00c73b84(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_40,"daily_reward_collect");
  FUN_009baadc(uVar2,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c73bf8(void *param_1)

{
  FUN_00c73930();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00c73c20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = (**(code **)(*param_1 + 0x48))();
  fVar5 = 500.0;
  FUN_00ca4578(uVar4,0x43fa0000,param_1);
  plVar1 = param_1 + 0x138;
  FUN_00f13db4(plVar1);
  FUN_00f13db4(param_1 + 0x175);
  plVar2 = param_1 + 0x1ac;
  FUN_00f13db4(plVar2);
  if ((long *)param_1[0x520] != (long *)0x0) {
    uVar4 = (**(code **)(*(long *)param_1[0x520] + 0x48))();
    FUN_00f01c54(plVar2,0,0,1,1);
    FUN_00f13f08(uVar4,plVar2);
    FUN_00f07b18(0,plVar2,4,param_1[0x520],4);
  }
  plVar3 = param_1 + 0x94;
  uVar4 = (**(code **)(param_1[0x94] + 0x48))(plVar3);
  (**(code **)(param_1[0x94] + 0x48))(plVar3);
  fVar6 = fVar5;
  FUN_00f13e54(plVar2);
  FUN_00f13f08(uVar4,fVar5 - fVar6,plVar1);
  FUN_00f07b18(0,plVar1,0,plVar3,0);
  FUN_00f07b18(0xc0000000,plVar2,0,plVar1,2);
  FUN_00f07b18(0,param_1 + 0x207,2,param_1 + 0x1c3,2);
  FUN_00f07b18(0,param_1 + 0x207,4,plVar2,4);
  plVar1 = param_1 + 0x7d;
  uVar4 = (**(code **)(param_1[0x7d] + 0x48))(plVar1);
  FUN_00f13f08(uVar4,0x42c80000,param_1 + 0x4dd);
  FUN_00f07940(0,0,param_1 + 0x225,8,plVar1,8);
  FUN_00f07940(0,0,param_1 + 0x4dd,8,plVar1,8);
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar4,0x43fa0000,param_1);
  return;
}




void FUN_00c73c20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = (**(code **)(*param_1 + 0x48))();
  fVar5 = 500.0;
  FUN_00ca4578(uVar4,0x43fa0000,param_1);
  plVar1 = param_1 + 0x138;
  FUN_00f13db4(plVar1);
  FUN_00f13db4(param_1 + 0x175);
  plVar2 = param_1 + 0x1ac;
  FUN_00f13db4(plVar2);
  if ((long *)param_1[0x520] != (long *)0x0) {
    uVar4 = (**(code **)(*(long *)param_1[0x520] + 0x48))();
    FUN_00f01c54(plVar2,0,0,1,1);
    FUN_00f13f08(uVar4,plVar2);
    FUN_00f07b18(0,plVar2,4,param_1[0x520],4);
  }
  plVar3 = param_1 + 0x94;
  uVar4 = (**(code **)(param_1[0x94] + 0x48))(plVar3);
  (**(code **)(param_1[0x94] + 0x48))(plVar3);
  fVar6 = fVar5;
  FUN_00f13e54(plVar2);
  FUN_00f13f08(uVar4,fVar5 - fVar6,plVar1);
  FUN_00f07b18(0,plVar1,0,plVar3,0);
  FUN_00f07b18(0xc0000000,plVar2,0,plVar1,2);
  FUN_00f07b18(0,param_1 + 0x207,2,param_1 + 0x1c3,2);
  FUN_00f07b18(0,param_1 + 0x207,4,plVar2,4);
  plVar1 = param_1 + 0x7d;
  uVar4 = (**(code **)(param_1[0x7d] + 0x48))(plVar1);
  FUN_00f13f08(uVar4,0x42c80000,param_1 + 0x4dd);
  FUN_00f07940(0,0,param_1 + 0x225,8,plVar1,8);
  FUN_00f07940(0,0,param_1 + 0x4dd,8,plVar1,8);
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar4,0x43fa0000,param_1);
  return;
}




void FUN_00c73e14(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long *plVar6;
  void *local_90;
  undefined1 auStack_88 [64];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pvVar4 = operator_new(0x6c8);
  FUN_00c741ac(pvVar4,param_2,param_3,param_4);
  local_90 = pvVar4;
  if (*(int *)((long)pvVar4 + 0x6c0) == 3) {
    *(void **)(param_1 + 0x2900) = pvVar4;
    FUN_00ca442c(param_1,0);
    *(uint *)(param_1 + 0xde4) = *(uint *)(param_1 + 0xde4) & 0xfffffffb;
    *(uint *)(param_1 + 0x10bc) = *(uint *)(param_1 + 0x10bc) & 0xfffffffb;
  }
  else if (*(int *)((long)pvVar4 + 0x6c0) == 2) {
    *(void **)(param_1 + 0x2900) = pvVar4;
    FUN_00ca442c(param_1,1);
    *(uint *)(param_1 + 0xde4) = *(uint *)(param_1 + 0xde4) | 4;
    *(uint *)(param_1 + 0x10bc) = *(uint *)(param_1 + 0x10bc) | 4;
    FUN_008fff20(auStack_88,"MENU_DAILY_LOGIN_POPUP_DAY_LABEL_UPPER_%d",
                 *(int *)(param_1 + 0xc60) + 1);
    uVar5 = FUN_00e6ce7c(auStack_88,0);
    FUN_00f0d75c(param_1 + 0xf08,uVar5);
    pvVar4 = local_90;
  }
  lVar1 = param_1 + 0xba8;
  FUN_00f023ec(lVar1,pvVar4,1);
  iVar2 = *(int *)(param_1 + 0xc60);
  plVar6 = (long *)FUN_00f14058(lVar1);
  if (iVar2 == 6) {
    (**(code **)(*plVar6 + 0x68))(plVar6,pvVar4,4,2);
  }
  else {
    (**(code **)(*plVar6 + 0x68))(plVar6,pvVar4,3,2);
    plVar6 = (long *)FUN_00f14058(lVar1);
    (**(code **)(*plVar6 + 0x70))(plVar6,6);
  }
  FUN_00c73fb0(param_1 + 0xc60,&local_90);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c73fb0(uint *param_1,undefined8 *param_2)

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
    FUN_00c74ac0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}

