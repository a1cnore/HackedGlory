// functions/00c2b — 22 functions
#include "libGameKindred.h"




void FUN_00c2b0e4(void *param_1)

{
  FUN_00c2ae28();
  operator_delete(param_1);
  return;
}




void FUN_00c2b108(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00ca4154();
  plVar9 = param_1 + 0x138;
  param_1[0x137] = 0;
  *param_1 = (long)&PTR_FUN_027f9768;
  FUN_00f017e8(plVar9);
  plVar1 = param_1 + 0x149;
  param_1[0x138] = (long)&PTR_FUN_027c1f80;
  FUN_00b25254(plVar1);
  plVar2 = param_1 + 0x175;
  FUN_00f0d160(plVar2);
  FUN_00f13ca4(param_1 + 0x19b);
  plVar3 = param_1 + 0x1b2;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x1d8;
  FUN_00c93600(plVar4,0);
  plVar5 = param_1 + 0x321;
  FUN_00f13ca4(plVar5);
  lVar10 = 0;
  do {
    FUN_00c2bd70((long)param_1 + lVar10 + 0x19c0);
    lVar10 = lVar10 + 0x4f0;
  } while (lVar10 != 0x18b0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  FUN_00f023ec(plVar9,plVar1,1);
  plVar9 = param_1 + 0x94;
  (**(code **)(param_1[0x94] + 0x78))(plVar9,plVar2,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar9,plVar3,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar9,plVar5,1);
  (**(code **)(param_1[0x7d] + 0x78))(param_1 + 0x7d,plVar4,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d7fc(plVar2,&DAT_01bbc794);
  uVar8 = FUN_00e6ce7c("MENU_HERO_CHEST_TILE_TITLE",0);
  FUN_00f0d75c(plVar2,uVar8);
  uVar6 = *(uint *)((long)param_1 + 0xc2c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xc2c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffddc2a9);
  FUN_00f0d7fc(plVar3,&local_98);
  FUN_00f0d9b0(plVar3,1);
  FUN_00f0db2c(0xbdcccccd,plVar3);
  uVar8 = FUN_00e6ce7c("MENU_LANDING_PAGE_SIDEBAR_HERO_CHEST_TILE_TOOLTIP_BODY",0);
  FUN_00f0d75c(plVar3,uVar8);
  uVar8 = FUN_00f13624();
  FUN_00f13be8(uVar8,0xf);
  lVar10 = 5;
  plVar9 = param_1 + 0x338;
  do {
    FUN_00f023ec(plVar5,plVar9,1);
    FUN_00c2b578(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"hero_chest_slot");
    FUN_00f1515c(uVar8,plVar9,0,10);
    lVar10 = lVar10 + -1;
    plVar9 = plVar9 + 0x9e;
  } while (lVar10 != 0);
  FUN_00f1521c(uVar8,0,1);
  FUN_00f13fd8(plVar5,uVar8);
  *(uint *)((long)param_1 + 0xa44) = *(uint *)((long)param_1 + 0xa44) & 0xfffffffb;
  FUN_00c93864(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00c938a4(plVar4,&DAT_01bee7fa);
  FUN_00c9279c(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00c928a0(0x42480000,0x41400000,plVar4);
  local_70 = DAT_03210c64;
  local_98 = FUN_00c2b5d8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x1d9,&local_98);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0d998(plVar1,1);
  if ((*(uint *)((long)param_1 + 0xacc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar1);
  }
  uVar8 = FUN_00e6ce7c("MENU_LANDING_PAGE_SIDEBAR_HERO_CHEST_TILE_TIME_TO_AVAILABLE",0);
  FUN_00b252ac(plVar1,uVar8,1,1);
  FUN_00ca4448(param_1,PTR_s_build___Chests_tga_02be35c0,"chest_opulent_closed_tight",&DAT_03210450)
  ;
  local_70 = DAT_03210f8c;
  local_98 = FUN_00c2b5f0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  local_98 = FUN_00c2b5f0;
  local_70 = DAT_03210f60;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2b578(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0xb8;
  FUN_00f0e548(lVar1);
  FUN_00f13f08(0x432f0000,0x43580000,lVar1);
  uVar2 = FUN_00f0ea88(lVar1);
  FUN_00f13f68(param_1,uVar2);
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




void FUN_00c2b5d8(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2b5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




void FUN_00c2b5f0(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2b600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




void FUN_00c2b608(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 0x5b0;
  lVar2 = -0x18b0;
  *param_1 = &PTR_FUN_027f9768;
  do {
    FUN_00c2bdec(puVar1);
    lVar2 = lVar2 + 0x4f0;
    puVar1 = puVar1 + -0x9e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x321);
  param_1[0x1d8] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x2f9);
  FUN_00c925cc(param_1 + 0x1d8);
  FUN_00f0d3a4(param_1 + 0x1b2);
  FUN_00f13d08(param_1 + 0x19b);
  FUN_00f0d3a4(param_1 + 0x175);
  param_1[0x149] = &PTR_FUN_027d3cc8;
  param_1[0x160] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x172] != (void *)0x0) {
    operator_delete__((void *)param_1[0x172]);
    param_1[0x172] = 0;
    param_1[0x171] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x149);
  FUN_00f01868(param_1 + 0x138);
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




void FUN_00c2b788(void *param_1)

{
  FUN_00c2b608();
  operator_delete(param_1);
  return;
}




void FUN_00c2b7ac(long param_1,long param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  if ((((*(byte *)(param_1 + 0xa44) >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0xacc) >> 2 & 1) != 0))
     && (FUN_00b25438(param_1 + 0xa48,&local_30), local_30 < 1)) {
    *(uint *)(param_1 + 0xa44) = *(uint *)(param_1 + 0xa44) & 0xfffffffb;
    FUN_00ca4450(param_1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2b834(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0xc2c) = *(uint *)(param_1 + 0xc2c) & 0xfffffffb;
  *(uint *)(param_1 + 0xd5c) = *(uint *)(param_1 + 0xd5c) & 0xfffffffb;
  *(uint *)(param_1 + 0xa44) = *(uint *)(param_1 + 0xa44) | 4;
  *(uint *)(param_1 + 0xacc) = *(uint *)(param_1 + 0xacc) | 4;
  local_50 = param_2;
  FUN_00ca442c(param_1,0);
  FUN_00ca4450(param_1,1);
  plVar2 = (long *)(param_1 + 0x19c0);
  lVar3 = 5;
  do {
    if ((*(uint *)((long)plVar2 + 0x22c) >> 2 & 1) != 0) {
      *(uint *)((long)plVar2 + 0x22c) = *(uint *)((long)plVar2 + 0x22c) & 0xfffffffb;
      (**(code **)(*plVar2 + 0xe8))(plVar2);
    }
    lVar3 = lVar3 + -1;
    plVar2 = plVar2 + 0x9e;
  } while (lVar3 != 0);
  if (0 < param_2) {
    FUN_00b25438(param_1 + 0xa48,&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2b920(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + 0x22c);
  if (((param_2 ^ uVar1 >> 2) & 1) != 0) {
    *(uint *)((long)param_1 + 0x22c) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c2b940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_00c2b948(long param_1,uint param_2,uint *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0xc2c) = *(uint *)(param_1 + 0xc2c) | 4;
  *(uint *)(param_1 + 0xd5c) = *(uint *)(param_1 + 0xd5c) | 4;
  *(uint *)(param_1 + 0x198c) = *(uint *)(param_1 + 0x198c) | 4;
  *(uint *)(param_1 + 0xa44) = *(uint *)(param_1 + 0xa44) & 0xfffffffb;
  FUN_00ca442c(param_1,param_2 & 1);
  lVar5 = param_1 + 0xec0;
  *(uint *)(param_1 + 0xf44) =
       *(uint *)(param_1 + 0xf44) & 0xfffffff8 | *(uint *)(param_1 + 0xf44) & 3 | (param_2 & 1) << 2
  ;
  uVar2 = FUN_00e6ce7c("MENU_DAILY_LOGIN_POPUP_COLLECT_BUTTON",0);
  FUN_00c938d4(lVar5,uVar2);
  local_50 = CONCAT44(local_50._4_4_,0xff5ac8f4);
  FUN_00c927dc(lVar5,&local_50);
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xec0) + 0x28))(lVar5,&local_50);
  FUN_00c93928(lVar5);
  uVar3 = (ulong)*param_3;
  if (*param_3 != 0) {
    uVar6 = 0;
    lVar5 = param_1 + 0x19c0;
    do {
      FUN_00c2bacc(lVar5,*(undefined8 *)(*(long *)(param_3 + 2) + uVar6 * 8),1);
      uVar3 = (ulong)*param_3;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x4f0;
    } while (uVar6 < uVar3);
    if (4 < *param_3) goto LAB_00c2baa0;
  }
  plVar4 = (long *)(param_1 + uVar3 * 0x4f0 + 0x19c0);
  lVar5 = 5 - uVar3;
  do {
    if ((*(uint *)((long)plVar4 + 0x22c) >> 2 & 1) != 0) {
      *(uint *)((long)plVar4 + 0x22c) = *(uint *)((long)plVar4 + 0x22c) & 0xfffffffb;
      (**(code **)(*plVar4 + 0xe8))(plVar4);
    }
    lVar5 = lVar5 + -1;
    plVar4 = plVar4 + 0x9e;
  } while (lVar5 != 0);
LAB_00c2baa0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2bacc(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = param_1 + 0x35;
  FUN_00c958bc(plVar1);
  FUN_00c9599c(0x43580000,plVar1);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(param_1 + 0x17);
  FUN_00f07940(0,0,plVar1,8,param_1 + 0x17,8);
  uVar2 = *(uint *)((long)param_1 + 0x22c);
  if (((param_3 ^ uVar2 >> 2) & 1) != 0) {
    *(uint *)((long)param_1 + 0x22c) = uVar2 & 0xfffffff8 | uVar2 & 3 | (param_3 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c2bb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))(param_1);
    return;
  }
  return;
}




void FUN_00c2bb74(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2bb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




void FUN_00c2bb8c(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2bb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




void FUN_00c2bba4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00ca4538();
  FUN_00ca4578(param_1,uVar6,param_2);
  plVar1 = param_2 + 0x94;
  plVar2 = param_2 + 0x1b2;
  fVar5 = (float)(**(code **)(param_2[0x94] + 0x48))(plVar1);
  FUN_00f0d5f8(plVar2,(int)fVar5);
  plVar3 = param_2 + 0x321;
  fVar5 = (float)(**(code **)(param_2[0x94] + 0x48))(plVar1);
  FUN_00f13f08(fVar5 * 0.5,0x42960000,plVar3);
  plVar4 = param_2 + 0x175;
  FUN_00f07940(0x41700000,0,plVar4,0,plVar1,0);
  if ((*(byte *)((long)param_2 + 0xe14) >> 2 & 1) != 0) {
    FUN_00f07b18(0,plVar2,0,plVar4,2);
    FUN_00f07b18(0,plVar2,3,plVar4,3);
    plVar4 = plVar2;
  }
  if ((*(byte *)((long)param_2 + 0x198c) >> 2 & 1) != 0) {
    FUN_00f07b18(0,plVar3,0,plVar4,2);
    FUN_00f07b18(0,plVar3,3,plVar4,3);
  }
  fVar5 = (float)FUN_00ca4538(param_2);
  if (ABS((float)uVar6 - fVar5) <= 1.0) {
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    FUN_00f0db64(uVar6,0,0x3f800000,param_2 + 0x149);
    FUN_00f07940(0,0,param_2 + 0x149,8,param_2,8);
  }
  else {
    uVar6 = FUN_00ca4538(param_2);
    FUN_00f13f08(param_1,uVar6,param_2);
  }
  FUN_00f07940(0,0,param_2 + 0x1d8,8,param_2 + 0x7d,8);
  return;
}




void FUN_00c2bd70(long *param_1)

{
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027f98b0;
  FUN_00f0e4a8(param_1 + 0x17);
  FUN_00c957d4(param_1 + 0x35);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
                    /* WARNING: Could not recover jumptable at 0x00c2bde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x35,1);
  return;
}




void FUN_00c2bdec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f98b0;
  param_1[0x35] = &PTR_FUN_028068d0;
  param_1[0x7f] = &PTR_FUN_028266f0;
  param_1[0x96] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x99);
  FUN_00f13d08(param_1 + 0x7f);
  param_1[0x5e] = &PTR_FUN_02827290;
  param_1[0x75] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_028266f0;
  param_1[0x75] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x78);
  FUN_00f13d08(param_1 + 0x5e);
  param_1[0x35] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c2bee4(void *param_1)

{
  FUN_00c2bdec();
  operator_delete(param_1);
  return;
}




void FUN_00c2bf08(long param_1)

{
  FUN_00f07940(0,0,param_1 + 0x1a8,8,param_1 + 0xb8,8);
  return;
}




void FUN_00c2bf28(long *param_1)

{
  FUN_00b89cd8();
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027f99f8;
  FUN_00f13ca4(param_1 + 0x1a);
  param_1[0x1a] = (long)&PTR_FUN_02825e18;
  FUN_00f0bcb4(param_1 + 0x31);
  FUN_00f0bcb4(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
                    /* WARNING: Could not recover jumptable at 0x00c2bfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a,1);
  return;
}




void FUN_00c2bfa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f99f8;
  FUN_00c2bff0();
  if ((void *)param_1[0x3a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a]);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c2bff0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + lVar4));
      if ((uVar1 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + lVar4),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x1d0) + lVar4);
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar2 + 8))();
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1d0) + lVar4);
      }
      *puVar3 = 0;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < *(uint *)(param_1 + 0x1c8));
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}

