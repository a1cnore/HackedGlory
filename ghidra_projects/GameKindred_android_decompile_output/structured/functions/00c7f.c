// functions/00c7f — 15 functions
#include "libGameKindred.h"




void FUN_00c7f068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803320;
  param_1[0x2ab] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x3cc);
  FUN_00c925cc(param_1 + 0x2ab);
  FUN_00c7d4d4(param_1 + 0x19e);
  FUN_00c7d4d4(param_1 + 0x91);
  FUN_00f13d08(param_1 + 0x7a);
  FUN_00f0d3a4(param_1 + 0x54);
  FUN_00f0d3a4(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7f100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803320;
  param_1[0x2ab] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x3cc);
  FUN_00c925cc(param_1 + 0x2ab);
  FUN_00c7d4d4(param_1 + 0x19e);
  FUN_00c7d4d4(param_1 + 0x91);
  FUN_00f13d08(param_1 + 0x7a);
  FUN_00f0d3a4(param_1 + 0x54);
  FUN_00f0d3a4(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c7f1a0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00c7f234(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00c7f234(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00c7f2c0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00c7f338(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c7f3b8(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c7f438(uint *param_1,uint param_2)

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




void FUN_00c7f4b8(long *param_1)

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
  undefined4 local_70 [2];
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_028035b0;
  FUN_00ed66ec(plVar1);
  FUN_00f0e4a8(param_1 + 0x15d);
  plVar2 = param_1 + 0x17b;
  FUN_00f0ac5c(plVar2);
  plVar3 = param_1 + 0x1a4;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x1c2;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x1e0;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x206;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x22c;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x252;
  FUN_00f0d160(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ed5664(plVar1,plVar2,1);
  FUN_00f0ad94(plVar2,plVar3,1);
  FUN_00f0ad94(plVar2,plVar4,1);
  FUN_00ed5664(plVar1,plVar5,1);
  FUN_00ed5664(plVar1,plVar6,1);
  FUN_00ed5664(plVar1,plVar7,1);
  FUN_00ed5664(plVar1,plVar8,1);
  local_70[0] = CONCAT31(local_70[0]._1_3_,5);
  FUN_00ed5ab0(plVar1,local_70);
  FUN_00ed7144(plVar1,0);
  FUN_00f0e548(plVar3,PTR_s_build___Credits_atlas_02be3660,"vainglory_credits");
  FUN_00f0e548(plVar4,PTR_s_build___Credits_atlas_02be3660,"semc_credits");
  FUN_00f0e9c0(plVar3,1);
  FUN_00f0e9c0(plVar4,1);
  local_70[0] = 0xffc99d45;
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,local_70);
  FUN_00f0dac8(plVar5,3);
  uVar10 = FUN_00e6ce7c("MENU_SETTINGS_CREDITS_DEVELOPER_TITLE",0);
  FUN_00f0d75c(plVar5,uVar10);
  local_70[0] = 0xffc99d45;
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,local_70);
  FUN_00f0dac8(plVar6,3);
  uVar10 = FUN_00e6ce7c("MENU_SETTINGS_CREDITS_NCORE_TITLE",0);
  FUN_00f0d75c(plVar6,uVar10);
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0dac8(plVar7,3);
  uVar10 = FUN_00e6ce7c("MENU_SETTINGS_CREDITS_DEVELOPER",0);
  FUN_00f0d75c(plVar7,uVar10);
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0dac8(plVar8,3);
  uVar10 = FUN_00e6ce7c("MENU_SETTINGS_CREDITS_NCORE",0);
  FUN_00f0d75c(plVar8,uVar10);
  FUN_00c7f7a0(param_1);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7f7a0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = (float)(**(code **)(*param_3 + 0x48))();
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x18,&local_70);
  plVar1 = param_3 + 0x17b;
  uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * 0.25;
  FUN_00f13f08(uVar5,plVar1);
  fVar4 = (float)FUN_00f13e54(plVar1);
  FUN_00f13e54(plVar1);
  printf("MAXSIZE::: : %f",(double)(fVar4 * 0.25));
  fVar4 = fVar4 * 0.25 * 1.5;
  fVar6 = (param_2 / 1.5) * 1.5;
  local_70 = fVar4;
  fStack_6c = fVar6;
  FUN_00f13f18(param_3 + 0x1a4,&local_70);
  plVar2 = param_3 + 0x1c2;
  local_70 = fVar4;
  fStack_6c = fVar6;
  FUN_00f13f18(plVar2,&local_70);
  FUN_00f07940(0,0x437a0000,plVar1,4,param_3 + 0x18,4);
  FUN_00f07940(0x43bb8000,0,plVar2,8,plVar1,8);
  FUN_00f07940(0xc2fa0000,0,param_3 + 0x1a4,5,plVar2,7);
  FUN_00f07940(0xc3160000,0,param_3 + 0x1e0,4,plVar1,6);
  FUN_00f07940(0xc1200000,0x42c80000,param_3 + 0x206,4,plVar1,6);
  FUN_00f07940(0x43340000,0,param_3 + 0x22c,7,param_3 + 0x1e0,5);
  FUN_00f07940(0x42200000,0,param_3 + 0x252,7,param_3 + 0x206,5);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c7f7a0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fStack_70;
  float fStack_6c;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  fStack_70 = (float)(**(code **)(*param_3 + 0x48))();
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x18,&fStack_70);
  plVar1 = param_3 + 0x17b;
  uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * 0.25;
  FUN_00f13f08(uVar5,plVar1);
  fVar4 = (float)FUN_00f13e54(plVar1);
  FUN_00f13e54(plVar1);
  printf("MAXSIZE::: : %f",(double)(fVar4 * 0.25));
  fVar4 = fVar4 * 0.25 * 1.5;
  fVar6 = (param_2 / 1.5) * 1.5;
  fStack_70 = fVar4;
  fStack_6c = fVar6;
  FUN_00f13f18(param_3 + 0x1a4,&fStack_70);
  plVar2 = param_3 + 0x1c2;
  fStack_70 = fVar4;
  fStack_6c = fVar6;
  FUN_00f13f18(plVar2,&fStack_70);
  FUN_00f07940(0,0x437a0000,plVar1,4,param_3 + 0x18,4);
  FUN_00f07940(0x43bb8000,0,plVar2,8,plVar1,8);
  FUN_00f07940(0xc2fa0000,0,param_3 + 0x1a4,5,plVar2,7);
  FUN_00f07940(0xc3160000,0,param_3 + 0x1e0,4,plVar1,6);
  FUN_00f07940(0xc1200000,0x42c80000,param_3 + 0x206,4,plVar1,6);
  FUN_00f07940(0x43340000,0,param_3 + 0x22c,7,param_3 + 0x1e0,5);
  FUN_00f07940(0x42200000,0,param_3 + 0x252,7,param_3 + 0x206,5);
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7f9b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028035b0;
  FUN_00f0d3a4(param_1 + 0x252);
  FUN_00f0d3a4(param_1 + 0x22c);
  FUN_00f0d3a4(param_1 + 0x206);
  FUN_00f0d3a4(param_1 + 0x1e0);
  param_1[0x1c2] = &PTR_FUN_028266f0;
  param_1[0x1d9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1dc);
  FUN_00f13d08(param_1 + 0x1c2);
  param_1[0x1a4] = &PTR_FUN_028266f0;
  param_1[0x1bb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1be);
  FUN_00f13d08(param_1 + 0x1a4);
  param_1[0x17b] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x192);
  FUN_00f13d08(param_1 + 0x17b);
  param_1[0x15d] = &PTR_FUN_028266f0;
  param_1[0x174] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x177);
  FUN_00f13d08(param_1 + 0x15d);
  thunk_FUN_00ed5534(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7faa8(void *param_1)

{
  FUN_00c7f9b4();
  operator_delete(param_1);
  return;
}




void FUN_00c7facc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 uVar18;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar17 = tpidr_el0;
  local_68 = *(long *)(lVar17 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = param_2;
  *param_1 = (long)&PTR_FUN_028036f8;
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x36;
  FUN_00ecf178(plVar1);
  plVar2 = param_1 + 0x7e;
  param_1[0x36] = (long)&PTR_FUN_02803840;
  FUN_00f0e4a8(plVar2);
  (**(code **)(param_1[0x36] + 0x78))(plVar1,plVar2,1);
  plVar3 = param_1 + 0x9c;
  FUN_00ecf178(plVar3);
  param_1[0x9c] = (long)&PTR_FUN_02803840;
  plVar4 = param_1 + 0xe4;
  FUN_00f0e4a8(plVar4);
  (**(code **)(param_1[0x9c] + 0x78))(plVar3,plVar4,1);
  plVar5 = param_1 + 0x102;
  FUN_00f13ca4(plVar5);
  plVar6 = param_1 + 0x119;
  FUN_00f1306c(plVar6);
  plVar7 = param_1 + 0x144;
  FUN_00f0d160();
  plVar8 = param_1 + 0x16a;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 400;
  FUN_00f13ca4(plVar9);
  plVar10 = param_1 + 0x1a7;
  FUN_00f0d160(plVar10);
  plVar11 = param_1 + 0x1cd;
  FUN_00f0d160(plVar11);
  plVar12 = param_1 + 499;
  FUN_00f13ca4(plVar12);
  plVar13 = param_1 + 0x20a;
  FUN_00f0d160(plVar13);
  plVar14 = param_1 + 0x230;
  FUN_00f0d160(plVar14);
  FUN_00f13ca4();
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f133a4(plVar6,plVar7,1);
  FUN_00f133a4(plVar6,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  FUN_00f023ec(plVar9,plVar1,1);
  FUN_00f023ec(plVar9,plVar10,1);
  FUN_00f023ec(plVar9,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_00f023ec(plVar12,plVar3,1);
  FUN_00f023ec(plVar12,plVar13,1);
  FUN_00f023ec(plVar12,plVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x256,1);
  FUN_00f0e548(param_1 + 0x18,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"popup_background");
  FUN_00f0e548(plVar2,PTR_s_build___HUDJoystickChoice_Joysti_02be34d0,"HUDJoystickChoice_Joystick");
  FUN_00f0e548(plVar4,PTR_s_build___HUDJoystickChoice_Tap_tg_02be34d8,"HUDJoystickChoice_Tap");
  uVar18 = FUN_00e6ce7c("HUD_CHOOSE_A_CONTROL_SCHEME_TITLE",0);
  FUN_00f0d75c(plVar7,uVar18);
  uVar18 = FUN_00e6ce7c("HUD_CHOOSE_A_CONTROL_SCHEME_DESC",0);
  FUN_00f0d75c(plVar8,uVar18);
  uVar18 = FUN_00e6ce7c("HUD_CHOOSE_A_CONTROL_SCHEME_JOYSTICK_TITLE",0);
  FUN_00f0d75c(plVar10,uVar18);
  uVar18 = FUN_00e6ce7c("HUD_CHOOSE_A_CONTROL_SCHEME_JOYSTICK_DESC",0);
  FUN_00f0d75c(plVar11,uVar18);
  uVar18 = FUN_00e6ce7c("HUD_CHOOSE_A_CONTROL_SCHEME_TAP_TITLE",0);
  FUN_00f0d75c(plVar13,uVar18);
  uVar18 = FUN_00e6ce7c("HUD_CHOOSE_A_CONTROL_SCHEME_TAP_DESC",0);
  FUN_00f0d75c(plVar14,uVar18);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar15 = *(uint *)((long)param_1 + 0xbd4);
  if ((uVar15 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0xbd4) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x5280;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0d378(plVar10,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d378(plVar11,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar15 = *(uint *)((long)param_1 + 0xeec);
  if ((uVar15 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0xeec) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x5280;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0d378(plVar13,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d378(plVar14,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar15 = *(uint *)((long)param_1 + 0x1204);
  if ((uVar15 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x1204) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x5280;
    FUN_0091ada4(plVar14);
  }
  uVar16 = DAT_03210c64;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  local_98 = thunk_FUN_00c80e0c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar16;
  FUN_009693a0(param_1 + 0x37,&local_98);
  local_98 = thunk_FUN_00c80e44;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar16;
  FUN_009693a0(param_1 + 0x9d,&local_98);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  *(uint *)((long)param_1 + 0x1334) = *(uint *)((long)param_1 + 0x1334) | 0x10;
  if (*(long *)(lVar17 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7ffc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028036f8;
  FUN_00f13d08(param_1 + 0x256);
  FUN_00f0d3a4(param_1 + 0x230);
  FUN_00f0d3a4(param_1 + 0x20a);
  FUN_00f13d08(param_1 + 499);
  FUN_00f0d3a4(param_1 + 0x1cd);
  FUN_00f0d3a4(param_1 + 0x1a7);
  FUN_00f13d08(param_1 + 400);
  FUN_00f0d3a4(param_1 + 0x16a);
  FUN_00f0d3a4(param_1 + 0x144);
  param_1[0x119] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x130);
  FUN_00f13d08(param_1 + 0x119);
  FUN_00f13d08(param_1 + 0x102);
  param_1[0x9c] = &PTR_FUN_02803840;
  param_1[0xe4] = &PTR_FUN_028266f0;
  param_1[0xfb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfe);
  FUN_00f13d08(param_1 + 0xe4);
  FUN_00ecf74c(param_1 + 0x9c);
  param_1[0x36] = &PTR_FUN_02803840;
  param_1[0x7e] = &PTR_FUN_028266f0;
  param_1[0x95] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x98);
  FUN_00f13d08(param_1 + 0x7e);
  FUN_00ecf74c(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}

