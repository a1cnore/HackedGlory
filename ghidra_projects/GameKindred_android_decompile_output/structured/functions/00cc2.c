// functions/00cc2 — 24 functions
#include "libGameKindred.h"




void FUN_00cc2004(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1e08);
  FUN_00cc2058();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  FUN_00e6b5e4();
  FUN_0093b3e0();
  return;
}




void FUN_00cc2058(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280c758;
  FUN_00bf12d0(param_1 + 0x39e);
  plVar1 = param_1 + 0x3a3;
  FUN_00f0e4a8(plVar1);
  FUN_00b0780c(param_1,param_1[0x39f]);
  uVar4 = FUN_00e6ce7c("MENU_TODAY_IN_VAINGLORY_TITLE",0);
  FUN_00b078b8(param_1,uVar4);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  iVar3 = FUN_0092ec00();
  if (iVar3 == 0xe) {
    FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_18_plus");
    FUN_00b07888(param_1,plVar1);
  }
  local_40 = FUN_00f048a4("UI::EVENT_TILE_NAVIGATING_TO_LINK");
  local_68 = thunk_FUN_00b07af8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  local_40 = DAT_0313377c;
  local_68 = thunk_FUN_00b07af8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc21b8(long param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_00b0877c(param_1,&local_30);
  FUN_00b07b44(0x45200000,0x448fc000,param_1);
  FUN_00b07d08(param_1,0);
  FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf8),&DAT_01bc51c4);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc224c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c758;
  param_1[0x3a3] = &PTR_FUN_028266f0;
  param_1[0x3ba] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3bd);
  FUN_00f13d08(param_1 + 0x3a3);
  FUN_00bf13d8(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc22bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c758;
  param_1[0x3a3] = &PTR_FUN_028266f0;
  param_1[0x3ba] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3bd);
  FUN_00f13d08(param_1 + 0x3a3);
  FUN_00bf13d8(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc2334(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_b8,PTR_s_build___HUDPartsCutscene__s__s_t_02be34b0,"Ardan","Normal");
  uVar2 = FUN_00e6ce7c("TUTORIAL_1_COMPLETE_BODY",0);
  uVar3 = FUN_00e6ce7c("TUTORIAL_1_COMPLETE_TITLE",0);
  FUN_00cc23e4(auStack_b8,"Cutscene_Avatar",uVar2,uVar3,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc23e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3fd0);
  FUN_00cc253c(pvVar1,param_1,param_2,param_3,param_4);
  FUN_00b07a80(*param_5,param_5[1],pvVar1);
  FUN_00aa18e0(pvVar1,"TUTORIAL_COMPLETE",1,0,1);
  return;
}




void FUN_00cc2464(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00969254();
  if ((uVar2 & 1) == 0) {
    pcVar5 = "Catherine";
    pcVar6 = "Approving";
  }
  else {
    pcVar5 = "Ardan";
    pcVar6 = "Normal";
  }
  FUN_00e6a8a8(auStack_b8,PTR_s_build___HUDPartsCutscene__s__s_t_02be34b0,pcVar5,pcVar6);
  uVar3 = FUN_00e6ce7c("MENU_TUTORIAL_COMPLETE_POPUP_BODY",0);
  uVar4 = FUN_00e6ce7c("MENU_TUTORIAL_COMPLETE_POPUP_TITLE",0);
  FUN_00cc23e4(auStack_b8,"Cutscene_Avatar",uVar3,uVar4,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc2530(void)

{
  FUN_00aa1954("TUTORIAL_COMPLETE");
  return;
}




void FUN_00cc253c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00b06f74();
  plVar1 = param_1 + 0x39e;
  *param_1 = (long)&PTR_FUN_0280c888;
  FUN_00ca6738(plVar1,0);
  FUN_00ca6a24(plVar1,param_2,param_3,param_4);
  FUN_00b0780c(param_1,plVar1);
  local_60 = DAT_0313cc28;
  local_88 = thunk_FUN_00b07af8;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  FUN_00b078b8(param_1,param_5);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc2650(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_4c,auStack_50);
  uVar3 = 0x448fc000;
  uVar2 = FUN_00b07b44(0x45200000,0x448fc000,param_1);
  local_58 = 0;
  FUN_00b0877c(param_1,&local_58);
  FUN_00f13f18(param_1 + 0x1cf0,&DAT_01bc51ec);
  FUN_00ca6a90(param_1 + 0x1cf0);
  FUN_00b07d08(uVar2,uVar3,param_1,0);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc2720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c888;
  param_1[0x39e] = &PTR_FUN_028086b0;
  FUN_009c7fa8(param_1 + 0x542);
  param_1[0x3f9] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x51a);
  FUN_00c925cc(param_1 + 0x3f9);
  FUN_00f0d3a4(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_028266f0;
  param_1[0x3cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cf);
  FUN_00f13d08(param_1 + 0x3b5);
  FUN_00f13d08(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc27f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c888;
  param_1[0x39e] = &PTR_FUN_028086b0;
  FUN_009c7fa8(param_1 + 0x542);
  param_1[0x3f9] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x51a);
  FUN_00c925cc(param_1 + 0x3f9);
  FUN_00f0d3a4(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_028266f0;
  param_1[0x3cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cf);
  FUN_00f13d08(param_1 + 0x3b5);
  FUN_00f13d08(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc28c8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00b06f74();
  plVar1 = param_1 + 0x3a2;
  param_1[0x3a1] = 0;
  param_1[0x3a0] = 0;
  *param_1 = (long)&PTR_FUN_0280c9b8;
  param_1[0x39f] = 0;
  param_1[0x39e] = 0;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x3b9;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x3df;
  FUN_00f017e8(plVar3);
  param_1[0x3df] = (long)&PTR_FUN_027c1f80;
  FUN_00c93600(param_1 + 0x3f0,0);
  FUN_00c93600(param_1 + 0x539,0);
  FUN_00e70510(param_1 + 0x682);
  FUN_00e70510(param_1 + 0x684);
  FUN_00e70510(param_1 + 0x686);
  FUN_00e70510(param_1 + 0x688);
  FUN_00b0780c(param_1,plVar1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0x3f0,1);
  FUN_00f023ec(plVar3,param_1 + 0x539,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  FUN_00f0d9b0(plVar2,1);
  uVar4 = DAT_03210c64;
  local_88 = thunk_FUN_00cc2da4;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  local_60 = uVar4;
  FUN_009693a0(param_1 + 0x3f1,&local_88);
  local_88 = thunk_FUN_00cc2e04;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  local_60 = uVar4;
  FUN_009693a0(param_1 + 0x53a,&local_88);
  FUN_00b075b8(param_1,0);
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cc2da4(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1cf0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1cf8);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1cf8) + (ulong)*(uint *)(param_1 + 0x1cf0) * 0x20);
  }
  FUN_00aa1954("TwoButtonPopupNode");
  return;
}




void thunk_FUN_00cc2e04(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1d00) != 0) {
    lVar1 = *(long *)(param_1 + 0x1d08);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1d08) + (ulong)*(uint *)(param_1 + 0x1d00) * 0x20);
  }
  FUN_00aa1954("TwoButtonPopupNode");
  return;
}




long * FUN_00cc2ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = operator_new(0x3450);
  FUN_00cc28c8();
  FUN_00910394(plVar1 + 0x682,param_1);
  FUN_00910394(plVar1 + 0x684,param_2);
  FUN_00910394(plVar1 + 0x686,param_3);
  FUN_00910394(plVar1 + 0x688,param_4);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  FUN_00aa18e0(plVar1,"TwoButtonPopupNode",1,0,1);
  return plVar1;
}




void FUN_00cc2b8c(void)

{
  FUN_00aa1954("TwoButtonPopupNode");
  return;
}




void FUN_00cc2b98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00f00298(&fStack_6c,&local_70);
  local_70 = local_70 * 0.5;
  fVar8 = fStack_6c * 0.5;
  if (2300.0 <= fStack_6c * 0.5) {
    fVar8 = 2300.0;
  }
  FUN_00b07d08(fVar8,local_70,param_1,0);
  local_78 = NEON_fmov(0x40a00000,4);
  FUN_00b0877c(param_1,&local_78);
  uVar7 = FUN_00b07b80(fVar8,param_1);
  lVar1 = param_1 + 0x1d10;
  local_78 = CONCAT44(local_70,uVar7);
  FUN_00f13f18(lVar1,&local_78);
  lVar2 = param_1 + 0x1dc8;
  fVar8 = (float)FUN_00f13e54(lVar1);
  FUN_00f0dad0(fVar8 + -100.0,lVar2,1);
  FUN_00f0d75c(lVar2,param_1 + 0x3420);
  FUN_00b078b8(param_1,param_1 + 0x3410);
  lVar3 = param_1 + 0x1f80;
  FUN_00c938d4(lVar3,param_1 + 0x3430);
  lVar4 = param_1 + 0x29c8;
  FUN_00c938d4(lVar4,param_1 + 0x3440);
  FUN_00f13f18(lVar3,&DAT_01bc5270);
  FUN_00f13f18(lVar4,&DAT_01bc5270);
  lVar5 = param_1 + 0x1ef8;
  FUN_00f07940(0x42480000,0,lVar3,7,lVar5,8);
  FUN_00f07940(0xc2480000,0,lVar4,5,lVar5,8);
  FUN_00f07940(0,0xc2fa0000,lVar5,6,lVar1,6);
  FUN_00f07940(0,0x42480000,lVar2,4,lVar1,4);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc2da4(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1cf0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1cf8);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1cf8) + (ulong)*(uint *)(param_1 + 0x1cf0) * 0x20);
  }
  FUN_00aa1954("TwoButtonPopupNode");
  return;
}




void FUN_00cc2e04(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1d00) != 0) {
    lVar1 = *(long *)(param_1 + 0x1d08);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1d08) + (ulong)*(uint *)(param_1 + 0x1d00) * 0x20);
  }
  FUN_00aa1954("TwoButtonPopupNode");
  return;
}




void FUN_00cc2e64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c9b8;
  if ((void *)param_1[0x689] != (void *)0x0) {
    operator_delete__((void *)param_1[0x689]);
    param_1[0x689] = 0;
    param_1[0x688] = 0;
  }
  if ((void *)param_1[0x687] != (void *)0x0) {
    operator_delete__((void *)param_1[0x687]);
    param_1[0x687] = 0;
    param_1[0x686] = 0;
  }
  if ((void *)param_1[0x685] != (void *)0x0) {
    operator_delete__((void *)param_1[0x685]);
    param_1[0x685] = 0;
    param_1[0x684] = 0;
  }
  if ((void *)param_1[0x683] != (void *)0x0) {
    operator_delete__((void *)param_1[0x683]);
    param_1[0x683] = 0;
    param_1[0x682] = 0;
  }
  param_1[0x539] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x65a);
  FUN_00c925cc(param_1 + 0x539);
  param_1[0x3f0] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x511);
  FUN_00c925cc(param_1 + 0x3f0);
  FUN_00f01868(param_1 + 0x3df);
  FUN_00f0d3a4(param_1 + 0x3b9);
  FUN_00f13d08(param_1 + 0x3a2);
  if ((void *)param_1[0x3a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a1]);
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
  }
  if ((void *)param_1[0x39f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x39f]);
    param_1[0x39f] = 0;
    param_1[0x39e] = 0;
  }
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc2f84(void *param_1)

{
  FUN_00cc2e64();
  operator_delete(param_1);
  return;
}




void FUN_00cc2fa8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_0280cae8;
  uVar2 = FUN_00a9b890();
  if ((uVar2 & 1) != 0) {
    puVar3 = (uint *)FUN_00a9bbb4();
    lVar5 = (ulong)*puVar3 << 5;
    lVar1 = *(long *)(puVar3 + 2);
    do {
      lVar4 = lVar1;
      if (lVar5 == 0) goto LAB_00cc3000;
      lVar5 = lVar5 + -0x20;
      lVar1 = lVar4 + 0x20;
    } while (*(undefined8 **)(lVar4 + 8) != param_1);
    FUN_00cc3374(puVar3,lVar4);
  }
LAB_00cc3000:
  FUN_00f12c8c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}

