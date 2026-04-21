// functions/00cbe — 36 functions
#include "libGameKindred.h"




void FUN_00cbe0f0(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d30);
  FUN_00cbdfc4();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cbe13c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b448;
  FUN_00bc6d5c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbe178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b448;
  FUN_00bc6d5c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void * FUN_00cbe1bc(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x4458);
  FUN_00cbe244(pvVar1,param_1,param_2 & 1,param_3 & 1);
  FUN_00b07a80(*param_4,param_4[1],pvVar1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  FUN_00b078fc(pvVar1,0);
  return pvVar1;
}




void FUN_00cbe244(long *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280b578;
  FUN_00c96f7c(param_1 + 0x39e,param_2,param_3 & 1,param_4 & 1);
  *(undefined4 *)(param_1 + 0x39d) = 0x3f333333;
  FUN_00b0780c(param_1,param_1 + 0x39e);
  FUN_00b075b8(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00cbe2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cbe2dc(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00c97af0(param_1 + 0x1cf0);
  FUN_00c97d4c(param_1 + 0x1cf0,param_3);
  return;
}




void FUN_00cbe310(long param_1,uint param_2)

{
  FUN_00c980dc(param_1 + 0x1cf0,param_2 & 1);
  return;
}




void FUN_00cbe320(long param_1)

{
  FUN_00c97f78(param_1 + 0x1cf0);
  return;
}




void FUN_00cbe32c(long param_1)

{
  FUN_00c97c90(param_1 + 0x1cf0);
  return;
}




void FUN_00cbe338(long param_1)

{
  FUN_00c9802c(param_1 + 0x1cf0);
  return;
}




void FUN_00cbe344(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_58;
  float local_50;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_4c,&local_50);
  lVar1 = param_1 + 0x1cf0;
  iVar3 = FUN_00c980d4(lVar1);
  if ((iVar3 == 2) || (iVar3 = FUN_00c980d4(lVar1), iVar3 == 1)) {
    fVar4 = 0.6;
  }
  else {
    fVar4 = 1.0;
  }
  fVar6 = (local_50 + -350.0) * 1.15;
  fVar4 = (local_50 + -350.0) * fVar4;
  FUN_00b07d08(fVar6,fVar4,param_1,0);
  FUN_00b0828c(param_1);
  local_58 = 0;
  FUN_00b0877c(param_1,&local_58);
  uVar5 = FUN_00b07b80(fVar6,param_1);
  local_58 = CONCAT44(fVar4,uVar5);
  FUN_00f13f18(lVar1,&local_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbe448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b578;
  FUN_00c97674(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbe484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b578;
  FUN_00c97674(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbe4c8(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2120);
  FUN_00cbe504();
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cbe504(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00b06f74();
  plVar1 = param_1 + 0x39e;
  *param_1 = (long)&PTR_FUN_0280b6a8;
  FUN_00b043c8(plVar1);
  FUN_00be0680(param_1 + 0x3b8);
  param_1[0x3c0] = (long)&PTR___cxa_pure_virtual_027ed7d0;
  pvVar9 = operator_new(0x4e40);
  FUN_00c3632c();
  param_1[0x3c1] = (long)pvVar9;
  *(long **)((long)pvVar9 + 0xb8) = param_1 + 0x3c0;
  FUN_00e83560(param_1 + 0x3c2);
  plVar2 = param_1 + 0x3c5;
  param_1[0x3c0] = (long)&PTR_FUN_027ed768;
  param_1[0x3c2] = (long)&PTR_FUN_027ed7a0;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x3d6;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x3fc;
  FUN_00f0d160(plVar4);
  *(undefined1 *)(param_1 + 0x423) = 0;
  param_1[0x422] = 0;
  FUN_00b0780c(param_1,plVar1);
  uVar8 = FUN_00b04468(plVar1,param_1[0x3b9]);
  *(undefined4 *)(param_1 + 0x422) = uVar8;
  uVar8 = FUN_00b04468(plVar1,param_1[0x3c1]);
  *(undefined4 *)((long)param_1 + 0x2114) = uVar8;
  FUN_00b045b0(plVar1,(int)param_1[0x422],0);
  uVar8 = DAT_03210f5c;
  local_78 = (ulong)*(uint *)(param_1 + 0x422);
  local_98 = FUN_00cbe868;
  local_88 = 0;
  local_80 = 0;
  plStack_90 = param_1;
  local_70 = uVar8;
  FUN_009693a0(param_1 + 0x3d7,&local_98);
  uVar5 = DAT_03210f88;
  local_78 = (ulong)*(uint *)(param_1 + 0x422);
  local_98 = FUN_00cbe868;
  local_88 = 0;
  local_80 = 0;
  plStack_90 = param_1;
  local_70 = uVar5;
  FUN_009693a0(param_1 + 0x3d7,&local_98);
  local_78 = (ulong)*(uint *)((long)param_1 + 0x2114);
  local_98 = FUN_00cbe868;
  local_88 = 0;
  local_80 = 0;
  plStack_90 = param_1;
  local_70 = uVar8;
  FUN_009693a0(param_1 + 0x3fd,&local_98);
  local_78 = (ulong)*(uint *)((long)param_1 + 0x2114);
  local_98 = FUN_00cbe868;
  local_88 = 0;
  local_80 = 0;
  plStack_90 = param_1;
  local_70 = uVar5;
  FUN_009693a0(param_1 + 0x3fd,&local_98);
  *(uint *)((long)param_1 + 0x1f34) = *(uint *)((long)param_1 + 0x1f34) | 0x10;
  *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) | 0x10;
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_REG_HEADLINE",0);
  FUN_00f0d75c(plVar3,uVar10);
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_HEADLINE",0);
  FUN_00f0d75c(plVar4,uVar10);
  FUN_00f0d7fc(plVar3,&DAT_01bee7fa);
  FUN_00f0d7fc(plVar4,&DAT_01bee7fe);
  uVar6 = *(uint *)((long)param_1 + 0x1f34);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1f34) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_0091ada4(plVar3);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2064);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2064) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_0091ada4(plVar4);
  }
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00b07828(param_1,plVar2);
  local_70 = FUN_00f048a4("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
  local_98 = thunk_FUN_00cbe97c;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbe868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00cbea10(param_1,param_2,param_5);
  return;
}




void thunk_FUN_00cbe97c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_40;
  code *pcStack_38;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009480e0();
  if ((uVar2 & 1) == 0) {
    FUN_00b07af8(param_1);
    if (*(char *)(param_1 + 0x2118) == '\0') {
      pcStack_38 = thunk_FUN_00cbf96c;
      uStack_40 = 0;
      FUN_00f02e98(0xbf800000,&uStack_40,0,0);
    }
    *(char *)(param_1 + 0x2118) = '\x01';
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbe874(void)

{
  return;
}




void FUN_00cbe878(void)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  return;
}




void FUN_00cbe890(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  fVar3 = local_40 + -100.0;
  uVar2 = FUN_00b07b80(fStack_3c + -200.0,param_1);
  local_48 = CONCAT44(fVar3,uVar2);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00f13f18(param_1 + 0x1cf0,&local_48);
  FUN_00b0828c(param_1);
  FUN_00f07940(0x42800000,0,param_1 + 0x1fe0,7,param_1 + 0x1eb0,5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbe97c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  code *pcStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009480e0();
  if ((uVar2 & 1) == 0) {
    FUN_00b07af8(param_1);
    if (*(char *)(param_1 + 0x2118) == '\0') {
      pcStack_38 = thunk_FUN_00cbf96c;
      local_40 = 0;
      FUN_00f02e98(0xbf800000,&local_40,0,0);
    }
    *(char *)(param_1 + 0x2118) = '\x01';
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbea10(long param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  
  FUN_00b045b0(param_1 + 0x1cf0,param_3,1);
  puVar1 = &DAT_01bee7fa;
  if (*(int *)(param_1 + 0x2110) != param_3) {
    puVar1 = (undefined4 *)&DAT_01bee7fe;
  }
  FUN_00f0d7fc(param_1 + 0x1eb0,puVar1);
  puVar1 = &DAT_01bee7fa;
  if (*(int *)(param_1 + 0x2114) != param_3) {
    puVar1 = (undefined4 *)&DAT_01bee7fe;
  }
  FUN_00f0d7fc(param_1 + 0x1fe0,puVar1);
  return;
}




void FUN_00cbea88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b6a8;
  FUN_00f0d3a4(param_1 + 0x3fc);
  FUN_00f0d3a4(param_1 + 0x3d6);
  FUN_00f01868(param_1 + 0x3c5);
  FUN_00e835e0(param_1 + 0x3c2);
  param_1[0x3c0] = &PTR___cxa_pure_virtual_027ed7d0;
  if ((long *)param_1[0x3c1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3c1] + 8))();
  }
  param_1[0x3c1] = 0;
  FUN_00948d58(param_1 + 0x3bd);
  FUN_00e835e0(param_1 + 0x3ba);
  param_1[0x3b8] = &PTR___cxa_pure_virtual_027ef000;
  if ((long *)param_1[0x3b9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3b9] + 8))();
  }
  param_1[0x3b9] = 0;
  FUN_00b04404(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbeb5c(void *param_1)

{
  FUN_00cbea88();
  operator_delete(param_1);
  return;
}




void FUN_00cbeb84(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_0313d9b8 != (void *)0x0) && (uVar1 = FUN_00aa1934(DAT_0313d9b8), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x1cf8);
  FUN_00cbed58(pvVar2,param_1);
  DAT_0313d9b8 = pvVar2;
  FUN_00aa18e0(pvVar2,0,1,0,1);
  return;
}




void FUN_00cbebfc(void)

{
  if (DAT_0313d9b8 != 0) {
    FUN_00aa1934();
    return;
  }
  return;
}




void FUN_00cbec10(long param_1)

{
  ulong uVar1;
  
  if ((DAT_0313d9b8 != 0) && (uVar1 = FUN_00aa1934(DAT_0313d9b8), (uVar1 & 1) != 0)) {
    if (*(long *)(DAT_0313d9b8 + 0x1cf0) == param_1) {
      FUN_00cbec68();
      FUN_00b07af8(DAT_0313d9b8);
      return;
    }
  }
  return;
}




void FUN_00cbec68(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x1cf0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x160))(*(long **)(param_1 + 0x1cf0),0);
    uVar2 = FUN_00f02540(*(undefined8 *)(param_1 + 0x1cf0));
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_1 + 0x1cf0),1);
    }
  }
  *(undefined8 *)(param_1 + 0x1cf0) = 0;
  return;
}




void FUN_00cbeccc(undefined8 param_1)

{
  if (DAT_0313d9b8 != 0) {
    FUN_00b078b8(DAT_0313d9b8,param_1);
    return;
  }
  return;
}




void FUN_00cbece8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b7d8;
  FUN_00cbec68();
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbed1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b7d8;
  FUN_00cbec68();
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbed58(long *param_1,long param_2)

{
  ulong uVar1;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280b7d8;
  param_1[0x39e] = param_2;
  uVar1 = FUN_00f02540(param_2);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1[0x39e],1);
  }
  FUN_00b0780c(param_1,param_1[0x39e]);
                    /* WARNING: Could not recover jumptable at 0x00cbedbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cbedc0(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_2c,&local_30);
  fVar2 = local_30 + -100.0;
  local_38 = FUN_00b07b80(fStack_2c + -200.0,param_1);
  local_34 = fVar2;
  FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf0),&local_38);
  local_38 = (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x58))
                       (*(long **)(param_1 + 0x1cf0),1,0,0,1);
  FUN_00b07b44(local_38,local_34,param_1);
  FUN_00b07d08(param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f112f0(*(undefined8 *)(param_1 + 0x1cf0),1);
  FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf0),&local_38);
  FUN_00af5fd8(*(undefined8 *)(param_1 + 0x1cf0),&local_38);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x158))(*(long **)(param_1 + 0x1cf0),1);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x160))(*(long **)(param_1 + 0x1cf0),1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbeed4(undefined8 param_1)

{
  FUN_00cbec68();
  thunk_FUN_00b07fec(param_1);
  DAT_0313d9b8 = 0;
  return;
}




void FUN_00cbef04(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x4a50);
  FUN_00cbef84();
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    FUN_00b56e14((long)pvVar2 + 0x1cf0,param_1);
  }
  FUN_00b07a8c(pvVar2,param_2);
  FUN_00aa18e0(pvVar2,0,1,0,1);
  return;
}




void FUN_00cbef84(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280b908;
  FUN_00b56c90(param_1 + 0x39e);
  plVar1 = param_1 + 0x92c;
  FUN_00f0e4a8(plVar1);
  FUN_00b0780c(param_1,param_1 + 0x39e);
  uVar3 = FUN_00e6ce7c("MAIN_MENU_NEWS",0);
  FUN_00b078b8(param_1,uVar3);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  iVar2 = FUN_0092ec00();
  if (iVar2 == 0xe) {
    FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_18_plus");
    FUN_00b07888(param_1,plVar1);
    return;
  }
  return;
}

