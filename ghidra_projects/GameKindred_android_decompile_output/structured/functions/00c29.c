// functions/00c29 — 4 functions
#include "libGameKindred.h"




void FUN_00c29168(long *param_1,long param_2)

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
  undefined8 uVar10;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = param_2;
  *param_1 = (long)&PTR_FUN_027f9390;
  FUN_00f1306c(plVar1);
  FUN_00abbf0c();
  FUN_00abbf0c(param_1 + 0x3e2);
  FUN_00ac7e14();
  FUN_00b038f4();
  FUN_00b038f4(param_1 + 0x1331);
  FUN_00b038f4(param_1 + 0x19ba);
  plVar2 = param_1 + 0x2043;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x2069;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x208f;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x20b5;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x20db;
  FUN_00f0d160();
  plVar7 = param_1 + 0x2101;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x2127;
  FUN_00c93600(plVar8,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,param_1 + 0x43,1);
  FUN_00f133a4(plVar1,param_1 + 0x3e2,1);
  FUN_00f133a4(plVar1,param_1 + 0x1331,1);
  FUN_00f133a4(plVar1,param_1 + 0x19ba,1);
  FUN_00f133a4(plVar1,param_1 + 0xca8,1);
  FUN_00f133a4(plVar1,param_1 + 0x781,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f133a4(plVar1,plVar5,1);
  FUN_00f133a4(plVar1,plVar6,1);
  FUN_00f133a4(plVar1,plVar7,1);
  FUN_00f133a4(plVar1,plVar8,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_00f0d75c(plVar2,uVar10);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_00f0d75c(plVar3,uVar10);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar10 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_TYPE",0);
  FUN_00f0d75c(plVar4,uVar10);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_FIELD_LANGUAGE",0);
  FUN_00f0d75c(plVar5,uVar10);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_FIELD_MIN_SKILL_TIER",0);
  FUN_00f0d75c(plVar6,uVar10);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_00f0d75c(plVar7,uVar10);
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_CONFIRM_SEARCH",0);
  FUN_00c938d4(plVar8,uVar10);
  local_70 = DAT_03210c64;
  local_98 = thunk_FUN_00c2a04c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x2128,&local_98);
  FUN_00c2954c(param_1);
  uVar10 = (**(code **)(*(long *)param_1[0x17] + 0x20))();
  FUN_00c29a60(param_1,uVar10);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2954c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  void *local_d8;
  ulong local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x218;
  uVar3 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_00ce1e34(lVar1,uVar3,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,1);
  uVar3 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_00abc73c(lVar1,uVar3);
  FUN_00abcee4(lVar1,1,0x10);
  FUN_00abcec0(lVar1,0);
  lVar1 = param_1 + 0x1f10;
  uVar3 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_00ce1e34(lVar1,uVar3,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,1);
  FUN_00abcee4(lVar1,1,4);
  FUN_00abcec0(lVar1,0);
  local_88 = 0;
  uStack_80 = 0;
  uVar3 = FUN_00cb50d8(&DAT_03210778,1);
  FUN_0090ea30(&local_88,uVar3);
  uVar3 = FUN_00cb50d8(&DAT_03210718,1);
  FUN_0090ea30(&local_88,uVar3);
  uVar3 = FUN_00cb50d8(&DAT_03210730,1);
  FUN_0090ea30(&local_88,uVar3);
  uVar3 = FUN_00cb50d8(&DAT_03210748,1);
  FUN_0090ea30(&local_88,uVar3);
  uVar3 = FUN_00cb50d8(&DAT_03210760,1);
  FUN_0090ea30(&local_88,uVar3);
  local_98 = 0;
  uStack_90 = 0;
  FUN_0096204c(&local_98,&DAT_03210778);
  FUN_0096204c(&local_98,&DAT_03210718);
  FUN_0096204c(&local_98,&DAT_03210730);
  FUN_0096204c(&local_98,&DAT_03210748);
  FUN_0096204c(&local_98,&DAT_03210760);
  FUN_00ac876c(0x447a0000,0x447a0000,0,0x3f800000,0x3f800000,param_1 + 0x3c08,&local_88,&local_98,1,
               1,0);
  iVar4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  do {
    FUN_00cb49ec(&local_d0,iVar4,1);
    FUN_0090ea30(&local_a8,&local_d0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
      local_d0 = 0;
      local_c8 = (void *)0x0;
    }
    FUN_00cb4ae4(&local_d0,iVar4);
    FUN_0096204c(&local_b8,&local_d0);
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  iVar4 = 1;
  FUN_00b03d8c(0x442f0000,param_1 + 0x6540,&local_a8,&local_b8,1);
  local_d0 = 0;
  local_c8 = (void *)0x0;
  uVar3 = FUN_00e6ce7c("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_0090ea30(&local_d0,uVar3);
  uVar3 = FUN_00cb439c(0xffffffff,0,0);
  FUN_0090ea30(&local_d0,uVar3);
  FUN_00e70510(&local_e0);
  iVar5 = 0;
  do {
    FUN_00e70e18(&local_e0,&DAT_01bb0650,iVar4);
    uVar3 = FUN_00cb439c(iVar5,1,0);
    FUN_00e70c34(&local_e0,uVar3);
    FUN_0090ea30(&local_d0,&local_e0);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 3;
  } while (iVar4 != 0xb);
  lVar1 = param_1 + 0x9988;
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_00b03d8c(0x442f0000,lVar1,&local_d0,&local_f0,1);
  FUN_00b040b8(lVar1,0,1,0);
  FUN_00b0426c(0x3f666666,0x3f4ccccd,lVar1);
  local_100 = 0;
  uStack_f8 = 0;
  uVar3 = FUN_00e6ce7c("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_0090ea30(&local_100,uVar3);
  iVar4 = 0;
  do {
    FUN_00cb6184(&local_110,iVar4,1);
    FUN_0090ea30(&local_100,&local_110);
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
      local_110 = 0;
      local_108 = (void *)0x0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x18);
  param_1 = param_1 + 0xcdd0;
  local_110 = 0;
  local_108 = (void *)0x0;
  FUN_00b03d8c(0x442f0000,param_1,&local_100,&local_110,1);
  FUN_00b042b4(param_1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00b0426c(0x3f666666,0x3f4ccccd,param_1);
  FUN_00951534(&local_110,1);
  FUN_0090eb54(&local_100,1);
  FUN_00951534(&local_f0,1);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  FUN_0090eb54(&local_d0,1);
  FUN_00951534(&local_b8,1);
  FUN_0090eb54(&local_a8,1);
  FUN_00951534(&local_98,1);
  FUN_0090eb54(&local_88,1);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c29a60(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e70570(&local_58);
  FUN_00abc73c(param_1 + 0x218,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70570(&local_58,param_2);
  FUN_00ce1f90(param_1 + 0x218,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70570(&local_58,param_2 + 0x18);
  FUN_00abc73c(param_1 + 0x1f10,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70570(&local_58,param_2 + 0x18);
  FUN_00ce1f90(param_1 + 0x1f10,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00ac9b64(param_1 + 0x3c08,param_2 + 0x48,0,0);
  FUN_00b040d8(param_1 + 0x6540,param_2 + 0x30,0,0);
  if (*(int *)(param_2 + 100) == -2) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 100) + 2;
  }
  FUN_00b040b8(param_1 + 0x9988,iVar2,0,0);
  FUN_00b040b8(param_1 + 0xcdd0,*(int *)(param_2 + 0x60) + 1,0,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c29be8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = param_1 + 0x10938;
  FUN_00f13f08(0x447a0000,0x42f00000,lVar3);
  lVar1 = param_1 + 0x218;
  fVar10 = -1.0;
  FUN_00abc380(0x447a0000,0xbf800000,lVar1);
  lVar4 = param_1 + 0x1f10;
  FUN_00abc380(0x447a0000,lVar4);
  fVar9 = (float)FUN_00abcf80(lVar1);
  fVar10 = fVar10 * -0.5;
  if ((*(float *)(param_1 + 600) != fVar9 * -0.5) || (*(float *)(param_1 + 0x25c) != fVar10)) {
    *(float *)(param_1 + 600) = fVar9 * -0.5;
    *(float *)(param_1 + 0x25c) = fVar10;
    FUN_0091ada4(lVar1);
  }
  fVar9 = (float)FUN_00abcf80(lVar1);
  fVar10 = fVar10 * -0.5;
  if ((*(float *)(param_1 + 0x1f50) != fVar9 * -0.5) || (*(float *)(param_1 + 0x1f54) != fVar10)) {
    *(float *)(param_1 + 0x1f50) = fVar9 * -0.5;
    *(float *)(param_1 + 0x1f54) = fVar10;
    FUN_0091ada4(lVar4);
  }
  FUN_00f07b18(0x42700000,lVar4,0,lVar1,2);
  lVar5 = param_1 + 0x3c08;
  FUN_00f07b18(0x43020000,lVar5,0,lVar4,2);
  FUN_00f07b18(0,lVar5,4,lVar4,4);
  lVar6 = param_1 + 0x6540;
  FUN_00f07b18(0x42c80000,lVar6,0,lVar5,2);
  FUN_00f07b18(0x42c80000,lVar6,4,lVar5,4);
  lVar7 = param_1 + 0x9988;
  FUN_00f13e54(lVar7);
  FUN_00f07b18(100.0 - fVar10 * 0.9,lVar7,0,lVar6,2);
  FUN_00f07b18(0,lVar7,4,lVar6,4);
  lVar8 = param_1 + 0xcdd0;
  FUN_00f13e54(lVar7);
  FUN_00f07b18(100.0 - fVar10 * 0.9,lVar8,0,lVar7,2);
  FUN_00f07b18(0,lVar8,4,lVar7,4);
  FUN_00f13e54(lVar7);
  FUN_00f07b18(100.0 - fVar10 * 0.9,lVar3,0,lVar8,2);
  FUN_00f07b18(0xc2d20000,lVar3,4,lVar8,4);
  lVar2 = param_1 + 0xc0;
  FUN_00f13238(lVar2);
  FUN_00f07a18(0x43160000,0x42480000,lVar2,4);
  FUN_00f07b18(0,param_1 + 0x10218,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0x10348,5,lVar4,5);
  FUN_00f07b18(0,param_1 + 0x10478,5,lVar5,5);
  FUN_00f07b18(0xc27c0000,param_1 + 0x105a8,5,lVar6,5);
  FUN_00f07b18(0xc27c0000,param_1 + 0x106d8,5,lVar7,5);
  FUN_00f07b18(0xc27c0000,param_1 + 0x10808,5,lVar8,5);
  FUN_00f07b18(0xc1a00000,param_1 + 0x10218,1,lVar3,3);
  FUN_00f07b18(0xc1a00000,param_1 + 0x10348,1,lVar3,3);
  FUN_00f07b18(0xc1a00000,param_1 + 0x10478,1,lVar3,3);
  FUN_00f07b18(0xc1a00000,param_1 + 0x105a8,1,lVar3,3);
  FUN_00f07b18(0xc1a00000,param_1 + 0x106d8,1,lVar3,3);
  FUN_00f07b18(0xc1a00000,param_1 + 0x10808,1,lVar3,3);
  fVar9 = (float)FUN_00f13e54(lVar2);
  fVar10 = 200.0;
  FUN_00f13e54(lVar2);
  FUN_00f13f08(fVar9 + 200.0,fVar10 + 100.0,param_1);
  return;
}

