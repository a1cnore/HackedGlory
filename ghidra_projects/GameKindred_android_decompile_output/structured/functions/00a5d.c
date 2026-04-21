// functions/00a5d — 14 functions
#include "libGameKindred.h"




undefined4 FUN_00a5d360(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2a30);
}




undefined4 FUN_00a5d368(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  uVar2 = FUN_00d73574(param_2,*(undefined4 *)(param_1 + 0x2a50));
  puVar1 = (undefined4 *)(param_1 + 0x2a50);
  if ((uVar2 & 1) == 0) {
    puVar1 = &DAT_01bc8f94;
  }
  return *puVar1;
}




void FUN_00a5d3ac(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0x2a50) = 0xffffffff;
  FUN_00a5cfe4();
  uVar1 = FUN_00a60ab4(param_2);
  FUN_00bbda90(param_1 + 0x1f08,uVar1);
  FUN_00c00b18(*(undefined8 *)(param_1 + 0x1f10),0);
  return;
}




void FUN_00a5d410(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(int *)(param_1 + 0x2a50) = param_2;
  if (param_2 != -1) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  plVar2 = *(long **)(param_1 + 200);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 200) = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_03214ce8;
    }
  }
  uVar3 = FUN_00d9eae0(uVar3);
  if (*(int *)(param_1 + 0x2a50) != -1) {
    uVar1 = FUN_00d72f48(uVar3,param_2);
    FUN_00bbda90(param_1 + 0x1f08,uVar1);
  }
  FUN_00c00b18(*(undefined8 *)(param_1 + 0x1f10),0);
  FUN_00a5cfe4(param_1);
  return;
}




void FUN_00a5d4d0(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 local_50;
  long local_48;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = CONCAT44((float)((ulong)uVar6 >> 0x20) * 1.4,(float)uVar6 * 1.4);
  FUN_00efe58c(puVar4,&local_50);
  FUN_00efcac4(0x3c23d70a,puVar4);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = uVar6;
  FUN_00efe58c(puVar5,&local_50);
  FUN_00efcac4(0x3e800000,puVar5);
  FUN_00efcb24(puVar5,FUN_00a269a4);
  FUN_00efc930(puVar4,puVar5);
  FUN_00f02308(param_1 + 0x1b90,puVar4,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5d6bc(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,0xffffffff,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5d72c(void)

{
  return;
}




void FUN_00a5d730(long param_1)

{
  FUN_00c00ab8(*(undefined8 *)(param_1 + 0x1f10));
  return;
}




void FUN_00a5d738(long param_1)

{
  FUN_00b094f8(param_1 + 0x1fd8,0);
  return;
}




void FUN_00a5d748(undefined8 *param_1)

{
  *param_1 = &DAT_027cc248;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00a5d78c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa5d790);
  (*pcVar1)();
}




void FUN_00a5d790(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  code *local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined4 local_c8;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  FUN_00f11234();
  plVar13 = param_1 + 0x35;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *param_1 = (long)&PTR_FUN_027cbfa0;
  FUN_00b89cd8(plVar13);
  plVar14 = param_1 + 0x4e;
  FUN_00ecfd6c(plVar14,0);
  plVar1 = param_1 + 0xf5;
  FUN_00f1306c(plVar1);
  lVar11 = 0x900;
  do {
    FUN_00f0d160((long)param_1 + lVar11);
    bVar6 = lVar11 != 0x1020;
    lVar11 = lVar11 + 0x130;
  } while (bVar6);
  lVar11 = 0;
  plVar2 = param_1 + 0x22a;
  do {
    FUN_00f0e4a8((long)plVar2 + lVar11);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x690);
  lVar11 = 0;
  do {
    FUN_00f13ca4((long)param_1 + lVar11 + 0x17e0);
    lVar11 = lVar11 + 0xb8;
  } while (lVar11 != 0x508);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  FUN_00f023ec(plVar13,plVar14,1);
  FUN_00ed026c(plVar14,plVar1,1);
  *(undefined4 *)((long)param_1 + 0x19c) = 6;
  FUN_00ed04d8(plVar14,0,0);
  if (*(int *)((long)param_1 + 0x19c) != 0) {
    uVar3 = DAT_03210f58;
    uVar4 = DAT_03210f84;
    uVar12 = 0;
    plVar13 = param_1 + 0x120;
    plVar14 = param_1 + 0x22a;
    plVar15 = param_1 + 0x2fc;
    do {
      FUN_00f0d378(plVar13,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
      uVar8 = *(uint *)((long)plVar13 + 0x84);
      if ((uVar8 & 0x7f80) != 0x5900) {
        *(uint *)((long)plVar13 + 0x84) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x5900;
        FUN_0091ada4(plVar13);
      }
      FUN_00f0e540(plVar14,PTR_s_build___HUDPartsCommon_atlas_02be3440);
      local_f0 = FUN_00a5dd14;
      local_e0 = 0;
      uStack_d8 = 0;
      plStack_e8 = param_1;
      local_d0 = uVar12;
      local_c8 = uVar3;
      FUN_009693a0(plVar15 + 1,&local_f0);
      local_f0 = FUN_00a5dd14;
      local_e0 = 0;
      uStack_d8 = 0;
      plStack_e8 = param_1;
      local_d0 = uVar12;
      local_c8 = uVar4;
      FUN_009693a0(plVar15 + 1,&local_f0);
      *(uint *)((long)plVar15 + 0x84) = *(uint *)((long)plVar15 + 0x84) | 0x10;
      FUN_00f133a4(plVar1,plVar13,1);
      FUN_00f133a4(plVar1,plVar14,1);
      FUN_00f133a4(plVar1,plVar15,1);
      FUN_00a5dd1c(param_1,0,uVar12 & 0xffffffff);
      FUN_00969b40(&local_f0,"hud_store_category_%u",uVar12 & 0xffffffff);
      uVar7 = FUN_00e6a474(&local_f0);
      uVar8 = FUN_0091ed5c(&local_f0,uVar7,0x1234);
      uVar12 = uVar12 + 1;
      plVar13 = plVar13 + 0x26;
      plVar14 = plVar14 + 0x1e;
      *(uint *)((long)plVar15 + 0x84) =
           *(uint *)((long)plVar15 + 0x84) & 0x80000000 |
           *(uint *)((long)plVar15 + 0x84) & 0x7fff | (uVar8 & 0xffff) << 0xf;
      plVar15 = plVar15 + 0x17;
    } while (uVar12 < *(uint *)((long)param_1 + 0x19c));
  }
  uVar12 = FUN_00937f2c();
  if ((uVar12 & 1) == 0) {
    uVar9 = FUN_00e6ce7c("HUD_STORE_CATEGORY_TEXT_RECOM",0);
    (**(code **)(param_1[0x120] + 0x138))(param_1 + 0x120,uVar9);
    uVar9 = FUN_00e6ce7c("HUD_STORE_CATEGORY_TEXT_WEAPON",0);
    (**(code **)(param_1[0x146] + 0x138))(param_1 + 0x146,uVar9);
    uVar9 = FUN_00e6ce7c("HUD_STORE_CATEGORY_TEXT_SKILL",0);
    (**(code **)(param_1[0x16c] + 0x138))(param_1 + 0x16c,uVar9);
    uVar9 = FUN_00e6ce7c("HUD_STORE_CATEGORY_TEXT_DEFENSE",0);
    (**(code **)(param_1[0x192] + 0x138))(param_1 + 0x192,uVar9);
    uVar9 = FUN_00e6ce7c("HUD_STORE_CATEGORY_TEXT_UTIL",0);
    (**(code **)(param_1[0x1b8] + 0x138))(param_1 + 0x1b8,uVar9);
    uVar9 = FUN_00e6ce7c("HUD_STORE_CATEGORY_TEXT_OTHER",0);
    (**(code **)(param_1[0x1de] + 0x138))(param_1 + 0x1de,uVar9);
    uVar9 = FUN_00e6ce7c("HUD_STORE_CATEGORY_TEXT_DEBUG",0);
    (**(code **)(param_1[0x204] + 0x138))(param_1 + 0x204,uVar9);
    FUN_00f0e578(plVar2,"hud_store_category_icon_recom");
    FUN_00f0e578(param_1 + 0x248,"hud_store_category_icon_weapon");
    FUN_00f0e578(param_1 + 0x266,"hud_store_category_icon_skill");
    FUN_00f0e578(param_1 + 0x284,"hud_store_category_icon_defense");
    FUN_00f0e578(param_1 + 0x2a2,"hud_store_category_icon_util");
    FUN_00f0e578(param_1 + 0x2c0,"hud_store_category_icon_consum");
    if (param_1[0x2f8] == 0) goto LAB_00a5dccc;
    pcVar10 = "hud_store_category_icon_recom";
  }
  else {
    *(uint *)((long)param_1 + 0x984) = *(uint *)((long)param_1 + 0x984) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xab4) = *(uint *)((long)param_1 + 0xab4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xbe4) = *(uint *)((long)param_1 + 0xbe4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xd14) = *(uint *)((long)param_1 + 0xd14) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xe44) = *(uint *)((long)param_1 + 0xe44) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xf74) = *(uint *)((long)param_1 + 0xf74) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x10a4) = *(uint *)((long)param_1 + 0x10a4) & 0xfffffffb;
    FUN_00f0e578(plVar2,"zh_hans_hud_store_category_icon_recom");
    FUN_00f0e578(param_1 + 0x248,"zh_hans_hud_store_category_icon_weapon");
    FUN_00f0e578(param_1 + 0x266,"zh_hans_hud_store_category_icon_skill");
    FUN_00f0e578(param_1 + 0x284,"zh_hans_hud_store_category_icon_defense");
    FUN_00f0e578(param_1 + 0x2a2,"zh_hans_hud_store_category_icon_util");
    FUN_00f0e578(param_1 + 0x2c0,"zh_hans_hud_store_category_icon_consum");
    if (param_1[0x2f8] == 0) goto LAB_00a5dccc;
    pcVar10 = "zh_hans_hud_store_category_icon_recom";
  }
  FUN_00f0e578(param_1 + 0x2de,pcVar10);
LAB_00a5dccc:
  FUN_00a5dd1c(param_1,1,(int)param_1[0x34]);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5dd14(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00a5e330(param_1,in_x4);
  return;
}




void FUN_00a5dd1c(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = DAT_03210d00;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x19c))) {
    uVar10 = 0x3f666666;
    bVar5 = (param_2 & 1) == 0;
    uVar3 = 0x3d4ccccd;
    if (bVar5) {
      uVar10 = 0x3f000000;
      uVar3 = 0x3dcccccd;
    }
    uVar11 = 0x3f800000;
    if (bVar5) {
      uVar11 = 0x3f000000;
    }
    if ((param_2 & 1) == 0) {
      local_6c = 0xffaaaaaa;
    }
    else {
      local_6c = 0xffffffff;
    }
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(uVar10,puVar7);
    FUN_00efcac4(uVar3,puVar7);
    lVar1 = param_1 + (long)(int)param_3 * 0x130 + 0x900;
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,puVar7);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(uVar11,puVar7);
    FUN_00efcac4(uVar3,puVar7);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efe00c(puVar8);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    lVar1 = param_1 + (long)(int)param_3 * 0xf0 + 0x1150;
    FUN_00efe060(puVar8,lVar1,&local_6c,2);
    FUN_00efcac4(uVar3,puVar8);
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcd98(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar9,puVar7,puVar8,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,puVar9);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

