// functions/00b4d — 13 functions
#include "libGameKindred.h"




void thunk_FUN_00b4d09c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MENU_EXPLAIN_CRYSTAL_RATIO_TITLE",0);
  uVar2 = FUN_00e6ce7c("MENU_EXPLAIN_CRYSTAL_RATIO_DESC",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  return;
}




void thunk_FUN_00b4d100(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MENU_EXPLAIN_WEAPON_RATIO_TITLE",0);
  uVar2 = FUN_00e6ce7c("MENU_EXPLAIN_WEAPON_RATIO_DESC",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  return;
}




void FUN_00b4d09c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MENU_EXPLAIN_CRYSTAL_RATIO_TITLE",0);
  uVar2 = FUN_00e6ce7c("MENU_EXPLAIN_CRYSTAL_RATIO_DESC",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  return;
}




void FUN_00b4d100(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MENU_EXPLAIN_WEAPON_RATIO_TITLE",0);
  uVar2 = FUN_00e6ce7c("MENU_EXPLAIN_WEAPON_RATIO_DESC",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  return;
}




void FUN_00b4d164(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027e24b8;
  FUN_00f0d160(plVar1);
  lVar6 = 0x288;
  do {
    FUN_00f0d160((long)param_1 + lVar6);
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0x878);
  FUN_00f0d160(param_1 + 0x10f);
  FUN_00f0d160(param_1 + 0x135);
  param_1[0x15b] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  uVar2 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar2 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1dc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7280;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x35) != 0.0) || (*(float *)((long)param_1 + 0x1ac) != 0.5)) {
    param_1[0x35] = 0x3f00000000000000;
    FUN_0091ada4(plVar1);
  }
  lVar6 = 0x288;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar6,1);
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0x878);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x10f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x135,1);
  uVar3 = DAT_03210f60;
  local_78 = thunk_FUN_00b4d09c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  local_50 = uVar3;
  FUN_009693a0(param_1 + 0x110,&local_78);
  local_78 = thunk_FUN_00b4d09c;
  uVar4 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1 + 0x110,&local_78);
  *(uint *)((long)param_1 + 0x8fc) = *(uint *)((long)param_1 + 0x8fc) | 0x10;
  local_78 = thunk_FUN_00b4d100;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  local_50 = uVar3;
  FUN_009693a0(param_1 + 0x136,&local_78);
  local_78 = thunk_FUN_00b4d100;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1 + 0x136,&local_78);
  *(uint *)((long)param_1 + 0xa2c) = *(uint *)((long)param_1 + 0xa2c) | 0x10;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4d390(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  undefined8 local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  bVar8 = (param_2 & 1) == 0;
  puVar4 = &DAT_02be9bdc;
  if (bVar8) {
    puVar4 = &DAT_02be9bd8;
  }
  puVar3 = &DAT_02be9bd4;
  if (bVar8) {
    puVar3 = &DAT_02be9bd0;
  }
  *(undefined4 *)(param_1 + 0xad8) = *puVar4;
  puVar4 = &DAT_02be9be4;
  if (bVar8) {
    puVar4 = &DAT_02be9be0;
  }
  *(undefined4 *)(param_1 + 0xadc) = *puVar3;
  *(undefined4 *)(param_1 + 0xae0) = *puVar4;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  if (bVar8) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar1 = param_1 + 0x878;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if (bVar8) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d92c(param_1 + 0x158,*ppuVar5,&DAT_01bee7fa);
  local_60._0_4_ = 0xffffdc78;
  FUN_00f0d92c(lVar1,*ppuVar6,&local_60);
  plVar2 = (long *)(param_1 + 0x9a8);
  local_60 = CONCAT44(local_60._4_4_,0xff6478ff);
  FUN_00f0d92c(plVar2,*ppuVar6,&local_60);
  FUN_00f0db64(*(undefined4 *)(param_1 + 0xadc),0,0x3f800000,param_1 + 0x158);
  uVar10 = 0;
  plVar9 = (long *)(param_1 + 0x288);
  do {
    fVar11 = *(float *)(param_1 + 0xadc) + *(float *)(param_1 + 0xae0) +
             *(float *)(param_1 + 0xad8) * (float)(uVar10 & 0xffffffff);
    if ((*(float *)(plVar9 + 8) != fVar11) || (*(float *)((long)plVar9 + 0x44) != 0.0)) {
      *(float *)(plVar9 + 8) = fVar11;
      *(undefined4 *)((long)plVar9 + 0x44) = 0;
      FUN_0091ada4(plVar9);
    }
    local_60 = 0x3f0000003f800000;
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_60);
    uVar10 = uVar10 + 1;
    plVar9 = plVar9 + 0x26;
  } while (uVar10 != 5);
  fVar11 = *(float *)(param_1 + 0xadc) + *(float *)(param_1 + 0xae0) +
           *(float *)(param_1 + 0xad8) * (float)param_3;
  if ((*(float *)(param_1 + 0x8b8) != fVar11) || (*(float *)(param_1 + 0x8bc) != 0.0)) {
    *(float *)(param_1 + 0x8b8) = fVar11;
    *(undefined4 *)(param_1 + 0x8bc) = 0;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x878) + 0x28))(lVar1,&local_60);
  fVar11 = *(float *)(param_1 + 0xadc) + *(float *)(param_1 + 0xae0) +
           *(float *)(param_1 + 0xad8) * (float)(param_3 + 1);
  if ((*(float *)(param_1 + 0x9e8) != fVar11) || (*(float *)(param_1 + 0x9ec) != 0.0)) {
    *(float *)(param_1 + 0x9e8) = fVar11;
    *(undefined4 *)(param_1 + 0x9ec) = 0;
    FUN_0091ada4(plVar2);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4d610(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = param_1 + 0xee3;
  *param_1 = &PTR_FUN_027e2370;
  puVar3 = param_1 + 0xf57;
  do {
    puVar1 = puVar3 + -0x15d;
    *puVar1 = &PTR_FUN_027e24b8;
    FUN_00f0d3a4(puVar3 + -0x28);
    FUN_00f0d3a4(puVar3 + -0x4e);
    lVar4 = 0;
    do {
      FUN_00f0d3a4((long)puVar2 + lVar4);
      lVar4 = lVar4 + -0x130;
    } while (lVar4 != -0x5f0);
    FUN_00f0d3a4(puVar3 + -0x132);
    *puVar1 = &PTR_FUN_02827fc8;
    FUN_00f01868(puVar3 + -0x146);
    FUN_00f13d08(puVar1);
    puVar2 = puVar2 + -0x15d;
    puVar3 = puVar1;
  } while (puVar1 != param_1 + 0x46f);
  param_1[0x312] = &PTR_FUN_027e24b8;
  FUN_00f0d3a4(param_1 + 0x447);
  FUN_00f0d3a4(param_1 + 0x421);
  lVar4 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar4 + 0x1fd8);
    lVar4 = lVar4 + -0x130;
  } while (lVar4 != -0x5f0);
  FUN_00f0d3a4(param_1 + 0x33d);
  param_1[0x312] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x329);
  FUN_00f13d08(param_1 + 0x312);
  param_1[0x1b5] = &PTR_FUN_027e24b8;
  FUN_00f0d3a4(param_1 + 0x2ea);
  FUN_00f0d3a4(param_1 + 0x2c4);
  lVar4 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar4 + 0x14f0);
    lVar4 = lVar4 + -0x130;
  } while (lVar4 != -0x5f0);
  FUN_00f0d3a4(param_1 + 0x1e0);
  param_1[0x1b5] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1cc);
  FUN_00f13d08(param_1 + 0x1b5);
  FUN_00f01868(param_1 + 0x1a4);
  FUN_00f0d3a4(param_1 + 0x17e);
  FUN_00f0d3a4(param_1 + 0x158);
  lVar4 = 0x990;
  do {
    FUN_00f0d3a4((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x130;
  } while (lVar4 != 0x3a0);
  FUN_00f0d3a4(param_1 + 0x74);
  FUN_00f01868(param_1 + 99);
  FUN_00f0d3a4(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b4d810(void *param_1)

{
  FUN_00b4d610();
  operator_delete(param_1);
  return;
}




void FUN_00b4d834(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027e24b8;
  FUN_00f0d3a4(param_1 + 0x135);
  FUN_00f0d3a4(param_1 + 0x10f);
  lVar1 = 0x748;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x158);
  FUN_00f0d3a4(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b4d8ac(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027e24b8;
  FUN_00f0d3a4(param_1 + 0x135);
  FUN_00f0d3a4(param_1 + 0x10f);
  lVar1 = 0x748;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x158);
  FUN_00f0d3a4(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b4d92c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00f13ca4();
  plVar9 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027e2608;
  FUN_00f0d160(plVar9);
  FUN_00f0d160(param_1 + 0x3d);
  plVar1 = param_1 + 99;
  FUN_00f0d160(plVar1);
  FUN_00f0d160();
  plVar2 = param_1 + 0xaf;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0xd5;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0xe6;
  param_1[0xd5] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x10c;
  FUN_00f0d160(plVar5);
  plVar10 = param_1 + 0x132;
  lVar8 = 0x2a40;
  do {
    FUN_00b4e574(plVar10);
    lVar8 = lVar8 + -0x548;
    plVar10 = plVar10 + 0xa9;
  } while (lVar8 != 0);
  *(undefined1 *)(param_1 + 0x67a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar10 = param_1 + 0x132;
  lVar8 = 8;
  do {
    FUN_00f023ec(plVar3,plVar10,1);
    lVar8 = lVar8 + -1;
    plVar10 = plVar10 + 0xa9;
  } while (lVar8 != 0);
  FUN_00f00298(auStack_6c,auStack_70);
  FUN_00f0d7fc(plVar9,&DAT_01bee7fa);
  FUN_00f0d378(plVar9,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8);
  FUN_00f0d92c(param_1 + 0x3d,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar7 = FUN_00e6ce7c("HUD_LEARN_HEROIC_PERK",0);
  FUN_00f0d75c(plVar1,uVar7);
  FUN_00f0d92c(param_1 + 0x89,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar7 = FUN_00e6ce7c("GENERIC_STATS",0);
  FUN_00f0d75c(plVar4,uVar7);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  uVar7 = FUN_00e6ce7c("GENERIC_STATS_LEVEL_RANGE",0);
  FUN_00f0d75c(plVar5,uVar7);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4dbf4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_5c,auStack_60);
  uVar4 = FUN_0092ea9c();
  fVar5 = 1.4;
  fVar7 = *(float *)(param_1 + 9);
  if ((uVar4 & 1) == 0) {
    fVar5 = 1.0;
  }
  if ((fVar7 != fVar5) || (*(float *)((long)param_1 + 0x4c) != fVar5)) {
    *(float *)(param_1 + 9) = fVar5;
    *(float *)((long)param_1 + 0x4c) = fVar5;
    FUN_0091ada4(param_1);
  }
  FUN_00f01c20(param_1 + 0x17);
  fVar8 = fVar7 + 12.0;
  if (*(float *)((long)param_1 + 0x35c) != fVar8) {
    *(float *)((long)param_1 + 0x35c) = fVar8;
    FUN_0091ada4(param_1 + 99);
  }
  plVar1 = param_1 + 0xaf;
  fVar8 = fVar8 + 80.0;
  if (*(float *)((long)param_1 + 0x5bc) != fVar8) {
    *(float *)((long)param_1 + 0x5bc) = fVar8;
    FUN_0091ada4(plVar1);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0dad0(fVar6 / fVar5,plVar1,1);
  FUN_00f0da28(0x3f333333,plVar1);
  FUN_00f0d4e0(plVar1);
  fVar8 = fVar8 + fVar7 + 80.0;
  if (*(float *)((long)param_1 + 0x774) != fVar8) {
    *(float *)((long)param_1 + 0x774) = fVar8;
    FUN_0091ada4(param_1 + 0xe6);
  }
  fVar5 = (float)FUN_00f0d4e0(param_1 + 0xe6);
  if ((*(float *)(param_1 + 0x114) != fVar5 + 24.0) || (*(float *)((long)param_1 + 0x8a4) != fVar8))
  {
    *(float *)(param_1 + 0x114) = fVar5 + 24.0;
    *(float *)((long)param_1 + 0x8a4) = fVar8;
    FUN_0091ada4(param_1 + 0x10c);
  }
  lVar3 = param_1[0x67a];
  if (*(float *)((long)param_1 + 0x6ec) != fVar8 + 100.0) {
    *(float *)((long)param_1 + 0x6ec) = fVar8 + 100.0;
    FUN_0091ada4(param_1 + 0xd5);
  }
  fVar5 = *(float *)(&DAT_01bb4478 + (ulong)((char)lVar3 == '\0') * 4);
  if ((*(float *)(param_1 + 0x13a) != 0.0) || (*(float *)((long)param_1 + 0x9d4) != 0.0)) {
    param_1[0x13a] = 0;
    FUN_0091ada4(param_1 + 0x132);
  }
  if ((*(float *)(param_1 + 0x1e3) != fVar5) || (*(float *)((long)param_1 + 0xf1c) != 0.0)) {
    *(float *)(param_1 + 0x1e3) = fVar5;
    *(undefined4 *)((long)param_1 + 0xf1c) = 0;
    FUN_0091ada4(param_1 + 0x1db);
  }
  if ((*(float *)(param_1 + 0x28c) != 0.0) || (*(float *)((long)param_1 + 0x1464) != 64.0)) {
    param_1[0x28c] = 0x4280000000000000;
    FUN_0091ada4(param_1 + 0x284);
  }
  if ((*(float *)(param_1 + 0x335) != fVar5) || (*(float *)((long)param_1 + 0x19ac) != 64.0)) {
    *(float *)(param_1 + 0x335) = fVar5;
    *(undefined4 *)((long)param_1 + 0x19ac) = 0x42800000;
    FUN_0091ada4(param_1 + 0x32d);
  }
  if ((*(float *)(param_1 + 0x3de) != 0.0) || (*(float *)((long)param_1 + 0x1ef4) != 179.2)) {
    param_1[0x3de] = 0x4333333300000000;
    FUN_0091ada4(param_1 + 0x3d6);
  }
  if ((*(float *)(param_1 + 0x487) != fVar5) || (*(float *)((long)param_1 + 0x243c) != 179.2)) {
    *(float *)(param_1 + 0x487) = fVar5;
    *(undefined4 *)((long)param_1 + 0x243c) = 0x43333333;
    FUN_0091ada4(param_1 + 0x47f);
  }
  if ((*(float *)(param_1 + 0x530) != 0.0) || (*(float *)((long)param_1 + 0x2984) != 243.2)) {
    param_1[0x530] = 0x4373333300000000;
    FUN_0091ada4(param_1 + 0x528);
  }
  if ((*(float *)(param_1 + 0x5d9) != fVar5) || (*(float *)((long)param_1 + 0x2ecc) != 243.2)) {
    *(float *)(param_1 + 0x5d9) = fVar5;
    *(undefined4 *)((long)param_1 + 0x2ecc) = 0x43733333;
    FUN_0091ada4(param_1 + 0x5d1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4df64(undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(param_4 + 0x40),0);
  FUN_00f0d75c(param_3 + 0xb8,uVar2);
  fVar3 = *(float *)(param_3 + 0xfc);
  FUN_00f01c20(param_3 + 0xb8);
  fVar3 = fVar3 + param_2 + 12.0;
  if (*(float *)(param_3 + 0x22c) != fVar3) {
    *(float *)(param_3 + 0x22c) = fVar3;
    FUN_0091ada4(param_3 + 0x1e8);
  }
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(param_5 + 0x28),0);
  FUN_00f0d75c(param_3 + 0x1e8,uVar2);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(param_4 + 0x40),0);
  FUN_00f0d75c(param_3 + 0x448,uVar2);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(param_4 + 0x48),0);
  thunk_FUN_00e7051c(&local_68,uVar2);
  FUN_00cb2a10(&local_68,param_4);
  FUN_00cb6444(&local_68);
  FUN_00f0d75c(param_3 + 0x578,&local_68);
  uVar2 = FUN_00e6ce7c("STAT_TABLE_HEALTH",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 0xe0),*(undefined4 *)(param_4 + 0xe4),param_3 + 0x990,uVar2
               ,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar2 = FUN_00e6ce7c("STAT_TABLE_ARMOR",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 0x110),*(undefined4 *)(param_4 + 0x114),param_3 + 0xed8,
               uVar2,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar2 = FUN_00e6ce7c("STAT_TABLE_ENERGY",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 0xf0),*(undefined4 *)(param_4 + 0xf4),param_3 + 0x1420,
               uVar2,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar2 = FUN_00e6ce7c("STAT_TABLE_SHIELD",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 0x118),*(undefined4 *)(param_4 + 0x11c),param_3 + 0x1968,
               uVar2,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar2 = FUN_00e6ce7c("STAT_TABLE_WEAPON",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 0x100),*(undefined4 *)(param_4 + 0x104),param_3 + 0x1eb0,
               uVar2,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar2 = FUN_00e6ce7c("STAT_TABLE_RANGE",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 0x128),0,param_3 + 0x23f8,uVar2,3,
               *(undefined1 *)(param_3 + 0x33d0));
  uVar2 = FUN_00e6ce7c("STAT_TABLE_ATK_SPEED",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 300),*(undefined4 *)(param_4 + 0x130),param_3 + 0x2940,
               uVar2,2,*(undefined1 *)(param_3 + 0x33d0));
  uVar2 = FUN_00e6ce7c("STAT_TABLE_MOVE_SPEED",0);
  FUN_00b4e234(*(undefined4 *)(param_4 + 0x14c),0,param_3 + 0x2e88,uVar2,3,
               *(undefined1 *)(param_3 + 0x33d0));
  FUN_00b4dbf4(param_3);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

